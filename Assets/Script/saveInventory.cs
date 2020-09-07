using System.Collections;

using System.Collections.Generic;

using UnityEngine;

using UnityEngine.SceneManagement;

using Invector;

using Invector.vItemManager;

using Invector.vCharacterController;

using BayatGames.SaveGamePro;



public class saveInventory: MonoBehaviour {



	public List<vItem> allItems;

	public List<vItem> saveItems;



	public vItemManager playerItemManager;

	public string saveFileName;

 

	 





	// Use this for initialization

	IEnumerator Start () {

		//Debug.Log ("SYSTEM TIME??? " + System.DateTime.Now.ToString ("yyyy/MM/dd HH:mm:ss"));

		//playerItemManager = GameObject.FindGameObjectWithTag ("Player").gameObject.transform.GetComponent<vItemManager> ();	




		yield return new WaitForSeconds (1f);

		Load ();





	}



	public void Save()

	{

		//Get All of the Inventory Items from Player

		allItems = playerItemManager.inventory.items;

		//Clear Items to prevent Duplicates

		saveItems.Clear ();



		//Loop through Inventory Items and Add them to a new List be Saved

		for (int i = 0; i < allItems.Count; i++)

		{

			vItem item = ScriptableObject.CreateInstance<vItem>();



			item.id = allItems [i].id;

			item.name = allItems [i].name;

			item.amount = allItems [i].amount;

			item.type = allItems [i].type;



			saveItems.Add (item);

		}

		//Save the new List of Inventory Items

		SaveGame.Save (saveFileName, saveItems);

	 

		////Uncomment to Show saved Message

		//vHUDController.instance.ShowText ("INVENTORY SAVED!", 2, 0.5f);

	}



	public void Load()

	{

		//loadManager.hasLoadedGame ();

		//Retrieve the Saved Inventory List and add it to the current List

		saveItems = SaveGame.Load (saveFileName, saveItems);

		//Add the Inventory Items into the Player Inventory

		AddSavedItemsToInventory();

		//Uncomment to show a hud on Inventory Loaded

		//vHUDController.instance.ShowText ("INVENTORY LOADED!", 2, 0.5f);

	}


   public void speichern(){
       Save();
   }




	void AddSavedItemsToInventory()

	{

		//Check if there are Items in the List

		if (saveItems.Count > 0)

		{

			//Loop through the loaded Saved Items and add them to Players Inventory

			for (int i = 0; i < saveItems.Count; i++)

			{

				//Add Each Item To the Player Inventory

				var itemManager = playerItemManager;

				if (itemManager)

				{

					var reference = new ItemReference (saveItems [i].id);

					reference.amount = saveItems [i].amount;

					itemManager.AddItem (reference);

				}

			}

			//Reload/Refresh Inventory

			allItems = playerItemManager.inventory.items;

		}

		//throwManager.onThrowObject.AddListener(UpdateCount);

	}









}
