using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace BayatGames.SaveGamePro.Examples
{
public class Load_Slot : MonoBehaviour
{

    public GameObject Slot;
   
    public GameObject NewGameBtn;
    public GameObject ContinueBtn;
        public GameObject Parentssdf;

    // Start is called before the first frame update
    void Start()
    {
     
     if (SaveGame.Exists("transform")){
         NewGameBtn.SetActive(false);
         ContinueBtn.SetActive(true);
              
            }


       
    }




       public void Löschen()
        {

            SaveGame.Clear();
        }


    
}
}
