using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Invector.vCamera;

public class settingsCam : MonoBehaviour
{
	public GameObject kamera;
	public vThirdPersonCamera cam;

	void Awake(){
	
		kamera = GameObject.Find ("vThirdPersonCamera");
		cam = kamera.GetComponent<vThirdPersonCamera> ();
	}


	public float sensiX =5.0f;
	public float sensiY = 5.0f;
    // Start is called before the first frame update
   



	public void AdjustX(float a){

		sensiX = a;

	}

	public void AdjustY(float b){

		sensiY = b;

	}




    // Update is called once per frame
    void Update()
    {
		
		cam.currentState.xMouseSensitivity = cam.currentState.xMouseSensitivity = sensiX;
		cam.currentState.yMouseSensitivity = cam.currentState.yMouseSensitivity = sensiY;

    }
}
