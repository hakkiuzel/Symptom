using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class destructableCrate : MonoBehaviour
{
 
public GameObject DestroyedObject;


public void destroyer(){

    Instantiate(DestroyedObject, transform.position, transform.rotation);
    Destroy(this.gameObject);
}




}
