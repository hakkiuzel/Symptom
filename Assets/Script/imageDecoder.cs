using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace BayatGames.SaveGamePro.Examples
{


public class imageDecoder : MonoBehaviour
{


    byte[] byte1;
    // Start is called before the first frame update
    void Start()
    {
        
       
        Texture2D sampleTexture = new Texture2D(2,2);
         sampleTexture.LoadImage(byte1);
    }

   
}
}