using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cameraCull : MonoBehaviour
{
  
	public Camera cam;
     
    


	public void anzeigen(){

        cam.cullingMask |= (1 << 8);
        cam.cullingMask |= (1 << 2);
        cam.cullingMask |= (1 << 1);



    }


	public void hide(){



        cam.cullingMask &= ~(1 << 8);
        cam.cullingMask &= ~(1 << 2);
        cam.cullingMask &= ~(1 << 1);



    }











}
