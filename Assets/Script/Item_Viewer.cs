using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

namespace TMPro.Examples { 
public class Item_Viewer : MonoBehaviour
{
    public GameObject Instantiate_Here;

    public GameObject PowerJoystickCanvas;

    public GameObject HUD;

    public GameObject Inventory;

    
   public GameObject Item_View;

   public TMP_Text m_textMeshPro;

        public Transform Item;

    public GameObject Ammo_Box_Prefab;
    public GameObject AmmoBox;
    public bool isCreated;
 

      void  Start() {
           StartCoroutine(Timer());
        }

      public void Find_Inventory() {
            Inventory = GameObject.Find("Inventory(Clone)");
        }


        IEnumerator Timer(){

        yield return new WaitForSeconds(3);
        Find_Inventory();

        }


        public void View_Item(){



              PowerJoystickCanvas.SetActive(false);
              HUD.SetActive(false);
              Inventory.SetActive(false);
              Item_View.SetActive(true);

       





    }



    public void Ammo_Box_Add(){

        if (isCreated == false)
        {

            AmmoBox = Instantiate(Ammo_Box_Prefab, transform.position, Quaternion.identity);

            AmmoBox.transform.SetParent(Item, true);
            AmmoBox.transform.localPosition = new Vector3(0, 0, 0);
            AmmoBox.transform.localRotation = Quaternion.Euler(-231, 27, -140);
            isCreated = true;
            m_textMeshPro.text = "AMMO";
            }

        else
        { 
            //do nothing 
        }
      
    }




    // Update is called once per frame
    void Update()
    {
        
    }
}
}