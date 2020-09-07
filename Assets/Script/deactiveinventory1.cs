using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class deactiveinventory1 : MonoBehaviour
{
	public GameObject inventory;
	public GameObject HUD;
    public GameObject PowerjoystickCanvas;
    public Canvas InventoryCANVAS;
 
  


    // Start is called before the first frame update


    void Update()
    {
        
        inventory = GameObject.Find("Inventory(Clone)");
        InventoryCANVAS = inventory.GetComponent<Canvas>();

    }



    

    






    public void deactivateEverything()
    {

        InventoryCANVAS.enabled = false;
        HUD.SetActive(false);
        PowerjoystickCanvas.SetActive(false);
       
    }

    public void activateEverything()
    {
        InventoryCANVAS.enabled = true;
        inventory.SetActive(true);
        HUD.SetActive(true);
        PowerjoystickCanvas.SetActive(true);
         

    }



    public void activate (){


		inventory.SetActive (true);

	}


   
}
