/*     INFINITY CODE 2013-2016      */
/*   http://www.infinity-code.com   */

using System.Collections.Generic;
using UnityEngine;

namespace InfinityCode.OnlineMapsExamples
{
	[AddComponentMenu("Infinity Code/Online Maps/Examples (API Usage)/FindPlacesExample")]
	public class FindNearbyPOI : MonoBehaviour
	{

		public GameObject naturalAreaPrefab;
	    public int naturalAreaMarkerScale = 10;
		// Get instance of LocationService.
		OnlineMapsLocationService locationService;


		private void Start()
		{
			locationService = OnlineMapsLocationService.instance;

			if (locationService == null)
			{
				Debug.LogError(
					"Location Service not found.\nAdd Location Service Component (Component / Infinity Code / Online Maps / Plugins / Location Service).");
				return;
			}

			// Subscribe to the change location event.
			locationService.OnLocationChanged += OnLocationChanged;


		}

		private void OnComplete(string s)
		{
			OnlineMapsFindPlacesResult[] results = OnlineMapsFindPlaces.GetResults(s);
			if (results == null)
			{
				Debug.Log("Error");
				Debug.Log(s);
				return;
			}

			List<OnlineMapsMarker> markers = new List<OnlineMapsMarker>();

			foreach (OnlineMapsFindPlacesResult result in results)
			{
				Debug.Log(result.name);
				Debug.Log(result.location);

				OnlineMapsMarker marker = OnlineMaps.instance.AddMarker(result.location, result.name);
				markers.Add(marker);

				OnlineMapsMarker3D naturalAreaMarker = OnlineMapsControlBase3D.instance.AddMarker3D(result.location, naturalAreaPrefab);
				naturalAreaMarker.scale = naturalAreaMarkerScale;
			}

			Vector2 center;
			int zoom;
			OnlineMapsUtils.GetCenterPointAndZoom(markers.ToArray(), out center, out zoom);

			OnlineMaps.instance.position = center;
			OnlineMaps.instance.zoom = zoom + 1;
		}

		// When the location has changed
		private void OnLocationChanged(Vector2 position)
		{
			// Search the POI.
			Vector2 currentPosition = locationService.position;

			Debug.Log("Current Position is: " + currentPosition);


			OnlineMapsFindPlaces.FindNearby(
				currentPosition,
				1000,
				"AIzaSyAEl5k7YEQZ5oX1xe5CVfNq5zcaIkmQYe0", // <----------------------------- Google API Key
				null,
				null,
				"park").OnComplete += OnComplete;

			// Redraw map.
			//OnlineMaps.instance.Redraw();
		}

		void Update() {
		}
	
	}
}

