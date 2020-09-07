using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BtnInteract : MonoBehaviour
{
  
public Button btn;


public void DeInteractable(){

    btn.interactable=false;
}


public void Interactable(){

    btn.interactable=true;
}

}
