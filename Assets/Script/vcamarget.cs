using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class vcamarget : MonoBehaviour
{

	public CinemachineVirtualCamera vcam;
	public GameObject crow;


    // Start is called before the first frame update
	public void find()
    {
		crow = GameObject.Find("Crow(Clone)");
	
		vcam.LookAt = crow.transform;
	
}

}
