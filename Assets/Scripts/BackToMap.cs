using UnityEngine;
using System.Collections;

public class BackToMap : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void Back(){
		Application.LoadLevel ("Map");
	}
}
