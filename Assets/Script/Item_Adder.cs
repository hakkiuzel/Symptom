using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Invector.vItemManager;

public class Item_Adder : MonoBehaviour
{





   
       
    public GameObject Player;

       public void Add_9mm()
        {
            
                var itemManager =Player.GetComponent<vItemManager>();
                if (itemManager)
                {
                    var reference = new ItemReference(14);
                    reference.amount = 12;
                    itemManager.AddItem(reference);
                }
            
        }

    public void Add_PumpGun()
    {

        var itemManager = Player.GetComponent<vItemManager>();
        if (itemManager)
        {
            var reference = new ItemReference(12);
            reference.amount = 1;
            itemManager.AddItem(reference);
        }

    }














}
