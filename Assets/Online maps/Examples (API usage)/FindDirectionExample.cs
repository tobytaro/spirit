/*     INFINITY CODE 2013-2016      */
/*   http://www.infinity-code.com   */

using System.Collections.Generic;
using UnityEngine;

namespace InfinityCode.OnlineMapsExamples
{
    [AddComponentMenu("Infinity Code/Online Maps/Examples (API Usage)/FindDirectionExample")]
    public class FindDirectionExample : MonoBehaviour {
      
        private void Start()
        {
            OnlineMapsGoogleAPIQuery query = OnlineMapsFindPlaces.FindNearby(new Vector2(114.17798f, 22.37322f),
                500,
                 "AIzaSyAEl5k7YEQZ5oX1xe5CVfNq5zcaIkmQYe0",
                 null,
                 null

                );



            OnlineMapsGoogleAPIQuery query2 = OnlineMapsFindDirection.Find(new Vector2(114.17464f, 22.37175f),
                new Vector2(114.17513f, 22.36825f));

            // Specifies that search results must be sent to OnFindDirectionComplete.
            query.OnComplete += OnFindDirectionComplete;
            query2.OnComplete += OnFindDirectionComplete;
        }

        private void OnComplete(string s)
        {
            OnlineMapsFindPlacesResult[] results = OnlineMapsFindPlaces.GetResults(s);
                     if (results == null)
            {
                Debug.Log("cannot connect API");
                Debug.Log(s);
                return;
            }

        }


        private void OnFindDirectionComplete(string response)
        {
            // Get the route steps.

            List<OnlineMapsDirectionStep> steps = OnlineMapsDirectionStep.TryParse(response);
            List<OnlineMapsMarker> markers = new List<OnlineMapsMarker>();
            if (steps != null)
            {


                // Showing the console instructions for each step.
                foreach (OnlineMapsDirectionStep step in steps) {
                                        Debug.Log(step.stringInstructions);
                }

                // Get all the points of the route.
                List<Vector2> points = OnlineMapsDirectionStep.GetPoints(steps);


                // Create a line, on the basis of points of the route.
                OnlineMapsDrawingLine route = new OnlineMapsDrawingLine(points, new Color(1, 1, 1, 0.5f), 7);



                // Draw the line route on the map.
                OnlineMaps.instance.AddDrawingElement(route);
            }
            else
            {
                Debug.Log("Find direction failed");
            }
         }

       }
    }
