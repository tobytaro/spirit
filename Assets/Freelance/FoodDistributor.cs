using System.Collections.Generic;
using UnityEngine;

public class FoodDistributor : MonoBehaviour
{
    [Range(1f, 1000f)]
    public float distanceBetweenFood = 30f;
    public GameObject foodPrefab;
    public float foodMarkerScale = 10f;

    /// <summary>
    /// Current step progress
    /// </summary>
    private float progress;

    public void DistributeFood(List<Vector2> points)
    {
        if (points == null)
        {
            Debug.LogError("No points was provided");
            return;
        }

        float currentDistance = 0;

        for (int pointIndex = 0; pointIndex < points.Count - 1; ++pointIndex)
        {
            // Start point
            Vector3 p1 = points[pointIndex];

            // End point
            Vector3 p2 = points[pointIndex + 1];

            // Total step distance
            float stepDistance = OnlineMapsUtils.DistanceBetweenPoints(p1, p2).magnitude * 1000f;

            if (!float.IsNaN(stepDistance))
            {
                currentDistance += stepDistance;

                //Debug.Log ("stepDistance: " + stepDistance);

                while (currentDistance >= distanceBetweenFood)
                {
                    float ratioForNextFood = (currentDistance - distanceBetweenFood) / stepDistance;

                    //Debug.LogWarning ("!!!! PLACE FOOD HERE AT % " + ratioForNextFood);
                    Vector2 foodPos = Vector2.Lerp(p1, p2, ratioForNextFood);

                    //Create a marker to show the current GPS coordinates.
                    //Instead of "null", you can specify the texture desired marker.
                    OnlineMapsMarker3D foodMarker = OnlineMapsControlBase3D.instance.AddMarker3D(foodPos, foodPrefab);
                    foodMarker.scale = foodMarkerScale;

                    currentDistance -= distanceBetweenFood;
                }
            }
        }
    }
}
