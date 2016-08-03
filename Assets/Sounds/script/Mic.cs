using UnityEngine;
using System.Collections;

public class Mic : MonoBehaviour {


	public string devicename="Built-in Microphone";
	// Use this for initialization
	//void Start () {
	
	//}
	
	// Update is called once per frame
	public void Update () {
		if (Microphone.IsRecording (devicename)) {
			StopRecording ();
		} else {
			StartRecording ();
		}
	}
	void StartRecording (){
		GetComponent<AudioSource> ().clip=Microphone.Start (devicename,true,30,44100);
		while (!(Microphone.GetPosition (null) > 0)) {
		}
		GetComponent<AudioSource> ().Play ();

		//Debug.Log (GetComponent<AudioSource> ().clip.samples);
		//Debug.Log (GetComponent<AudioSource> ().clip.channels);
		Debug.Log(Microphone.GetPosition(null));

		//measure the volume
		int length_data=GetComponent<AudioSource> ().clip.samples* GetComponent<AudioSource> ().clip.channels;
		float[] data = new float[length_data];
		GetComponent<AudioSource> ().clip.GetData (data, 0);
		//take the median of the recorded samples
		float sum=0;
		foreach (float f in data)
		{
			sum = sum + Mathf.Abs (f);
		}
//		float Volume = (float)s[735-1];
		float Volume=sum;
		Debug.Log (Volume);
	}
	void StopRecording(){
		Microphone.End (devicename);
		GetComponent<AudioSource> ().Stop ();
	}

}
