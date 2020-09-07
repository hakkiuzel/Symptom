using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Invector.vCamera;

public class ObjectDeactivator : MonoBehaviour
{
	public GameObject Object;

    public GameObject UIpanel;

    
    public GameObject inventory;
    public GameObject vUI;
    public GameObject Journal;
    


    void Awake(){

       
		Object = GameObject.Find ("PowerJoystickCanvas");
       
        inventory = GameObject.Find("Inventory(Clone)");
        
        vUI = GameObject.Find("HUD");
        UIpanel = GameObject.Find("MainWindow");

    }



    






    public void close(){

		Object.SetActive(false);

	}
    

    public void FindUiPanel()
    {
        UIpanel = GameObject.Find("MainWindow");
        inventory = GameObject.Find("Inventory(Clone)");
        vUI = GameObject.Find("HUD");
        Object = GameObject.Find("PowerJoystickCanvas");
    }


	public void open(){


		Object.SetActive(true);
	}

 


 


    public void CloseUIs()
    {
        Object.SetActive(false);
        inventory.SetActive(false);
        vUI.SetActive(false);
    }



}
