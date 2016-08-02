using System;
using System.Collections.Generic;
using UnityEngine;

public class MapBuilderEventListener : MonoBehaviour
{
    public List<Vector2> Locations;
    public List<OnlineMapsMarker> Markers;

    private void Start()
    {
        Locations = new List<Vector2>();
        Markers = new List<OnlineMapsMarker>();
    }

    public void RegisterLocation(OnlineMapsFindPlacesResult result)
    {
        Locations.Add(result.location);
    }

    public void AddMarker(OnlineMapsFindPlacesResult result)
    {
        OnlineMapsMarker marker = OnlineMaps.instance.AddMarker(result.location, result.name);
        Markers.Add(marker);
    }

    public void CenterAndZoom()
    {
        Vector2 center;
        int zoom;
        OnlineMapsUtils.GetCenterPointAndZoom(Locations.ToArray(), out center, out zoom);

        OnlineMaps.instance.position = center;
        OnlineMaps.instance.zoom = zoom;
    }

    public void DrawRoute(List<Vector2> points)
    {
        OnlineMapsDrawingLine route = new OnlineMapsDrawingLine(points, Color.red, 3);
        OnlineMaps.instance.AddDrawingElement(route);
    }
}
