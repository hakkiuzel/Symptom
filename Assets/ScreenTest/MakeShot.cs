using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MakeShot : MonoBehaviour
{
    // Start is called before the first frame update


        public void foto() { 
        
        ScreenCapture.CaptureScreenshot("Background.png");
    }


}
