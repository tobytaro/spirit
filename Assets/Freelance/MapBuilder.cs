using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class MapBuilder : MonoBehaviour
{
    [Header("Settings")]
    public Vector2 Location = new Vector2(114.1611086f, 22.3281368f);
    public int Radius = 500;
    public int PlaceLimit = 5;

    [Serializable]
    public class FindNearbyReadyEvent : UnityEvent<OnlineMapsFindPlacesResult> { }
    public FindNearbyReadyEvent FindNearbyReady;
    public UnityEvent FindNearbyCompleted;
    [Serializable]
    public class FindDirectionReadyEvent : UnityEvent<List<Vector2>> { }
    public FindDirectionReadyEvent FindDirectionReady;
    public UnityEvent FindDirectionCompleted;

    [Header("Runtime")]
    public List<OnlineMapsFindPlacesResult> Nearbys = new List<OnlineMapsFindPlacesResult>();

    public enum QueryStatus
    {
        Idle,
        Processing,
        Error,
        Success
    }
    [Serializable]
    public class DirectionQueryData
    {
        public int fromIndex;
        public int toIndex;
        public Vector2 from;
        public Vector2 to;
        public List<Vector2> points;
        public QueryStatus status;
        public int retry;
    }
    public List<DirectionQueryData> DirectionQueryDatas = new List<DirectionQueryData>();

    private string Key = "AIzaSyAEl5k7YEQZ5oX1xe5CVfNq5zcaIkmQYe0";

    [ContextMenu("Find nearby")]
    public void FindNearby()
    {
        OnlineMapsGoogleAPIQuery query = OnlineMapsFindPlaces.FindNearby(Location, Radius, Key, types: "point_of_interest");
        query.OnComplete += OnFindNearbyCompleted;
    }

    private void OnFindNearbyCompleted(string response)
    {
        OnlineMapsFindPlacesResult[] results = OnlineMapsFindPlaces.GetResults(response);
        if (results == null)
        {
            Debug.LogErrorFormat("Find nearby failed\n{0}", response);
            return;
        }

        Nearbys = new List<OnlineMapsFindPlacesResult>();
        foreach (OnlineMapsFindPlacesResult result in results)
        {
            Debug.LogFormat("{0}, {1}, {2}", result.name, string.Join("|", result.types), result.location.ToString("F6"));

            if (Nearbys.Count < PlaceLimit)
            {
                Nearbys.Add(result);
                FindNearbyReady.Invoke(result);
            }
        }

        FindNearbyCompleted.Invoke();
    }

    [ContextMenu("Find directions")]
    public void FindDirections()
    {
        StartCoroutine(FindDirectionsCoroutine());
    }

    private IEnumerator FindDirectionsCoroutine()
    {
        DirectionQueryDatas = new List<DirectionQueryData>();
        for (int i = 0; i < Nearbys.Count; ++i)
        {
            var queryData = new DirectionQueryData
            {
                fromIndex = -1,
                from = Location,
                toIndex = i,
                to = Nearbys[i].location,
                retry = 3
            };
            DirectionQueryDatas.Add(queryData);
        }

        for (int i = 0; i < Nearbys.Count; ++i)
        {
            for (int k = 0; k < i; ++k)
            {
                var queryData = new DirectionQueryData
                {
                    fromIndex = k,
                    from = Nearbys[k].location,
                    toIndex = i,
                    to = Nearbys[i].location,
                    retry = 3
                };
                DirectionQueryDatas.Add(queryData);
            }
        }

        bool allSuccessOrNoMoreRetry = false;
        while (!allSuccessOrNoMoreRetry)
        {
            allSuccessOrNoMoreRetry = true;
            for (int i = 0; i < DirectionQueryDatas.Count; ++i)
            {
                var queryData = DirectionQueryDatas[i];
                if (queryData.status == QueryStatus.Success ||
                    queryData.status == QueryStatus.Error && queryData.retry == 0)
                {
                    continue;
                }

                allSuccessOrNoMoreRetry = false;
                if (queryData.status == QueryStatus.Processing)
                {
                    continue;
                }

                queryData.status = QueryStatus.Processing;
                --queryData.retry;
                try
                {
                    Debug.LogFormat("Create query, retry={2} {0}->{1}", queryData.fromIndex, queryData.toIndex, queryData.retry);
                    OnlineMapsGoogleAPIQuery query = OnlineMapsFindDirection.Find(queryData.from, queryData.to);
                    query.OnComplete += OnFindDirectionCompleted(queryData);
                }
                catch (Exception ex)
                {
                    Debug.LogException(ex);
                }
                yield return new WaitForSeconds(0.2f);
            }
            yield return new WaitForSeconds(0.2f);
        }
        FindDirectionCompleted.Invoke();
        yield break;
    }

    private Action<string> OnFindDirectionCompleted(DirectionQueryData queryData)
    {
        return response =>
        {
            List<OnlineMapsDirectionStep> steps = OnlineMapsDirectionStep.TryParse(response);
            if (steps == null)
            {
                if (queryData.retry > 0)
                {
                    queryData.status = QueryStatus.Idle;
                }
                else
                {
                    queryData.status = QueryStatus.Error;
                    Debug.LogErrorFormat("Find direction failed, retry={2} {0}->{1}\n{3}", queryData.fromIndex, queryData.toIndex, queryData.retry, response);
                }
                return;
            }

            queryData.status = QueryStatus.Success;

            Debug.LogFormat("Got response, retry={2} {0}->{1}", queryData.fromIndex, queryData.toIndex, queryData.retry);
            // Get all the points of the route.
            queryData.points = OnlineMapsDirectionStep.GetPoints(steps);

            FindDirectionReady.Invoke(queryData.points);
        };
    }
}
