using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Invector.vCamera;

public class ObjectDeactivator1 : MonoBehaviour
{
	public GameObject Object;





	public void close(){

		Object.SetActive(false);

	}


	public void open(){


		Object.SetActive(true);
	}






}
