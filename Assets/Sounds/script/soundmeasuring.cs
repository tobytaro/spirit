using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class soundmeasuring : MonoBehaviour {

	Text txt;
	public void ClickTest(){
		
		txt=GetComponentInChildren<Text>();
		foreach (string device in Microphone.devices) {
			Debug.Log("Name: " + device);
			//		txt.text = "yanlin";
			txt.text="Name:"+device;
		}
			

	}
}
