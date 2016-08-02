using UnityEngine;
using System.Collections;

public class DestroyButton : MonoBehaviour {



	void update() {


	

			if (Input.GetMouseButtonDown (0)) {
			
			
			Debug.Log ("mouseclick");
			GUI.Button (new Rect (100, 10, 50, 50), "SomeButton");
			
			}
		
		
		
		}

	}






