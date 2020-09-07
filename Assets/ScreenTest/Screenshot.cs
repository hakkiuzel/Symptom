using UnityEngine;
using System.Collections;
using System.IO;

public class Screenshot : MonoBehaviour
{

    private static Screenshot sInstance = new Screenshot();

    public static Screenshot Instance
    {
        get
        {
            return sInstance;
        }
    }

    Texture2D tex;

    public string getPath()
    {
        // where we want to save the image
        return Application.persistentDataPath + "/screentoshare.png";
    }

    public void takeNow()
    {
        //takes the screenshot, but doesn't save a file. It's stored as a Texture2D instead
        tex = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
        tex.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
        tex.Apply();
    }

    public Texture2D getTexture2D()
    {
        //call to access the texture2D from outside this class
        return tex;
    }

    public void saveAsFile()
    {
        //saves a PNG file to the path specified above
        byte[] bytes = tex.EncodeToPNG();
        File.WriteAllBytes(getPath(), bytes);
    }

    public bool hasSaved()
    {
        //it's not enough to just check that the file exists, since it doesn't mean it's finished saving
        //we have to check if it can actually be opened
        Texture2D image;
        image = new Texture2D(Screen.width, Screen.height);
        bool imageLoadSuccess = image.LoadImage(System.IO.File.ReadAllBytes(getPath()));
        Destroy(image);
        return imageLoadSuccess;
    }

}