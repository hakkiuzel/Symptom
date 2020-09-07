using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonShadowChanger : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject red;
    public GameObject green;
    public bool gepresst=false;




   public void  Swap()
    {
       if (gepresst==false)
        {
        
            green.SetActive(false);
            
        }
       else
        {
            
            green.SetActive(true);
        }

        gepresst = !gepresst;

    }



}
