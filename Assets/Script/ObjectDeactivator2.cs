using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Invector.vCamera;

public class ObjectDeactivator2 : MonoBehaviour
{
	public GameObject Object;
	public GameObject ThrowBtn;


	void Awake(){

		Object = GameObject.Find ("Map");

	}



	public void close(){

		Object.SetActive(false);

	}


	public void open(){


		Object.SetActive(true);
	}





}
