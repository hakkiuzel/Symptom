using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class addForceForward : MonoBehaviour
{
	public float thrust;
	public Rigidbody rb;


	void Start()
	{
		rb = GetComponent<Rigidbody>();
	}

	public void Forwarding(){

		rb.AddForce(transform.forward * thrust);
		Debug.Log("dsfsfd");
	}

}
