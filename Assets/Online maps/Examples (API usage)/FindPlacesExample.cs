/*     INFINITY CODE 2013-2016      */
/*   http://www.infinity-code.com   */

using System.Collections.Generic;
using UnityEngine;

namespace InfinityCode.OnlineMapsExamples
{
    [AddComponentMenu("Infinity Code/Online Maps/Examples (API Usage)/FindPlacesExample")]
    public class FindPlacesExample : MonoBehaviour
    {
        private void Start()


        {
            OnlineMapsFindPlaces.FindNearby(
                new Vector2(114.1713f, 22.37683f),
                500,
                "AIzaSyA2wBzywoA6IGas5UMsCPwnQq28VzqhOvg",
                // "AIzaSyA2wBzywoA6IGas5UMsCPwnQq28VzqhOvg", // <----------------------------- Google API Key
                null,
                null
                )
                
                
                .OnComplete += OnComplete;
           
        }

       private void OnComplete(string s)
        {
            OnlineMapsFindPlacesResult[] results = OnlineMapsFindPlaces.GetResults(s);
            List<OnlineMapsDirectionStep> steps = OnlineMapsDirectionStep.TryParse(s);
            if (results == null)
            {
                Debug.Log("cannot connect API");
                Debug.Log(s);
                return;
            
                
            }

            List<OnlineMapsMarker> markers = new List<OnlineMapsMarker>();
            if (steps != null)
            {

                foreach (OnlineMapsFindPlacesResult result in results)
                {
                    Debug.Log(result.name);
                    Debug.Log(result.location);
                    

                    List<Vector2> points = OnlineMapsDirectionStep.GetPoints(steps);

                    OnlineMapsDrawingLine route = new OnlineMapsDrawingLine(points, new Color(1, 1, 1, 0.5f), 7);

                    OnlineMaps.instance.AddDrawingElement(route);

                  
                     OnlineMapsMarker marker = OnlineMaps.instance.AddMarker(result.location, result.name);

                    markers.Add(marker);


                }
            }
            else
            {
                Debug.Log("Find direction failed");
            }
        }


        //   Vector2 center;

        /*
                    List<Vector2> points = OnlineMapsDirectionStep.GetPoints(steps);
                    OnlineMapsDrawingLine route = new OnlineMapsDrawingLine(points, Color.green);
                    OnlineMaps.instance.AddDrawingElement(route);
                    */
        /*
            int zoom;
            OnlineMapsUtils.GetCenterPointAndZoom(markers.ToArray(), out center, out zoom);

            OnlineMaps.instance.position = center;
            OnlineMaps.instance.zoom = zoom + 1; */
          
    }
}

