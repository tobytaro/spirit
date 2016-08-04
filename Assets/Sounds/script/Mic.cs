using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Mic : MonoBehaviour {


	public string devicename="Built-in Microphone";
	public float sensitivity=100;
	public float loudness=0;
	public float threshold = 1.0f;

	//slider
	public Slider slider;

	// Use this for initialization
	public void Start () {
		if (Microphone.IsRecording (devicename)) {
			StopRecording ();
		} else {
			StartRecording ();
		}
		//slider = GetComponent<Slider> ();
	}
	
	// Update is called once per frame
	public void Update () {
		loudness = GetAveragedVolume ();
		Debug.Log ("loudness:"+loudness);
		//slider.value = loudness;
		slider.value=Mathf.MoveTowards(slider.value,loudness,0.01f);
	}

	float GetAveragedVolume(){
		
		float[] data = new float[256];
		GetComponent<AudioSource> ().clip.GetData (data, 0);
		//take the median of the recorded samples
		float sum=0;
		foreach (float f in data)
		{
			sum = sum + Mathf.Abs (f);
		}
		return sum/256*sensitivity;

	}
	void StartRecording (){
		GetComponent<AudioSource> ().clip=Microphone.Start (devicename,true,1,44100);
		while (!(Microphone.GetPosition (null) > 0)) {
		}
		//GetComponent<AudioSource> ().Play ();

		//Debug.Log (GetComponent<AudioSource> ().clip.samples);
		//Debug.Log (GetComponent<AudioSource> ().clip.channels);
		//Debug.Log(Microphone.GetPosition(null));

		//measure the volume
		int length_data=GetComponent<AudioSource> ().clip.samples* GetComponent<AudioSource> ().clip.channels;

	}
	void StopRecording(){
		Microphone.End (devicename);
		GetComponent<AudioSource> ().Stop ();
	}

}
