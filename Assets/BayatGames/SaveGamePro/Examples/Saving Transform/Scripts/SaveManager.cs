using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Invector.vCamera;
using System.IO;
namespace BayatGames.SaveGamePro.Examples
{

	/// <summary>
	/// Save transform example.
	/// </summary>
	public class SaveManager: MonoBehaviour
	{

        /// <summary>
        /// The target to save.
        /// </summary>

         
		public int Level_1=1;
		public int Level_2=2;
        
		public int Level_3=3;
		public Transform target;
        public vThirdPersonCamera cam;

        public GameObject Canvas;
		public bool Walked;
		public GameObject Walker;
        public GameObject Fader;
        public bool CrowTriggered;
        public GameObject crowtriggerobj;
        public deactiveinventory guiobj;
		public bool Opened;
		public GameObject DoorTrigger;
		public bool SuitCase;
		public Animator SuitAnimator;
		public GameObject Koffer;

		public bool Gate;
		public Animator GateAnim;


		public bool DogKilled;
		public GameObject DogActivator;	
		
		public bool AxePicked;
		public GameObject AxePickerOBJ;

		public bool vaseBroken;
		public GameObject vaseStandard;
		public GameObject  vaseBROKEN;
		public GameObject Vcam;
		 

		void Awake ()
		{
			if ( target == null )
			{
				target = transform;
			}
               
			Load();

		}

		/// <summary>
		/// Destroy target.
		/// </summary>
		public void DestroyTarget ()
		{
			Transform parent = target.parent;
			while ( parent.parent != null )
			{
				parent = parent.parent;
			}
			Destroy ( parent.gameObject );
		}

		/// <summary>
		/// Save the target.
		/// </summary>
		public void Save ()
		{
             
             
            SaveGame.Save ( "transform", target );
			SaveGame.Save ( "boolCrow", CrowTriggered );
			SaveGame.Save ( "bool", Opened );
			SaveGame.Save ("puitcase", SuitCase);
			SaveGame.Save ("gate", Gate);
			SaveGame.Save ("dog", DogKilled);
            SaveGame.Save ("axe", AxePicked);
			SaveGame.Save ("vase", vaseBroken);
			SaveGame.Save ("walking", Walked);
            ScreenCapture.CaptureScreenshot("Background1.png");

    
        }

        /// <summary>
        /// Load the data.
        /// </summary>
         
        public void Level1(){

			SaveGame.Save ("level", Level_1);
		}
        
			public void Level2(){

			SaveGame.Save ("level", Level_2);
		}

			public void Level3(){

			SaveGame.Save ("level", Level_3);
		}



		public void Load ()
		{


		
         


			if ( target == null )
			{
				target = SaveGame.Load<Transform> ( "transform" );
			}
			else
			{
				SaveGame.LoadInto ( "transform", target );
			}




				Walked= SaveGame.Load("walking", Walked);


			if (Walked == true)
               {

				   Walker.SetActive(false);
				   Vcam.SetActive(false);
                cam.unlockCam();
                Canvas.SetActive(true);
                Fader.SetActive(false);

			   }






			SuitCase = SaveGame.Load("puitcase", SuitCase);


			if (SuitCase == true)
               {

				   SuitAnimator.SetTrigger("kofferon");
				   KofferScriptDeactivator();

			   }

			   else
			   {
				   
			   }


             
			 Opened =  SaveGame.Load( "bool", Opened );

				if (Opened == true)
				 {
				DoorTrigger.SetActive(false) ;
									 }
				 else
					 {
					
					 }

          




		 CrowTriggered = SaveGame.Load( "boolCrow", CrowTriggered );

 			if (CrowTriggered == true)
				 {
				crowtriggerobj.SetActive(false) ;
									 }
				 else
					 {
               
					 }


		
		 Gate= SaveGame.Load( "gate", Gate );

 			if (Gate == true)
				 {
				GateAnim.SetTrigger("shotope") ;
									 }
				 else
					 {
					
					 }


		    
			DogKilled =  SaveGame.Load( "dog", DogKilled );

				if (DogKilled == true)
				 {
				DogActivator.SetActive(false) ;
									 }
				 else
					 {
					
					 }

					  
			AxePicked =  SaveGame.Load( "axe", AxePicked );

				if (AxePicked == true)
				 {
				AxePickerOBJ.SetActive(false) ;
									 }
				 else
					 {
					
					 }



					vaseBroken=  SaveGame.Load( "vase", vaseBroken );

				if (vaseBroken == true)
				 {
				vaseStandard.SetActive(false) ;
				vaseBROKEN.SetActive(true);
									 }
				 else
					 {
					
					 }



            



        }


				public void BoolSwitchSuitCase(){
					SuitCase = true;
				}

		 public void CrowTriggeredtoTrue(){

				CrowTriggered = true;
			}

  public void DoorBoolOpener(){

		Opened = true;
	}


	public void KofferScriptDeactivator(){

     Koffer.GetComponent<BoxCollider>().enabled= false;

	}


		public void gateBool(){

     Gate = true;

	}

		public void dogKiller(){

     DogKilled = true;

	}

			public void Walkswitch(){

    Walked = true;

	}
  
				public void axePicker(){

     AxePicked = true;

	}
  

	public void vaseBreaker(){

     vaseBroken = true;

	}

        
		
		
	}		
	}

