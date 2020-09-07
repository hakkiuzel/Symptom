using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


namespace BayatGames.SaveGamePro.Examples
 {

public class Loading_Slot_Manager : MonoBehaviour
{
    
public LoadLevel loadlevel;




public int sceneindex;



private void Awake() {

	


 sceneindex = SaveGame.Load<int>("level");


      loadlevel = GameObject.Find("Main").GetComponent<LoadLevel>();
   }

	public void FireScene(){

		loadlevel.loading(sceneindex);
	}
  
 
	public void DeleteX(){

		SaveGame.Clear();
	}


}
}