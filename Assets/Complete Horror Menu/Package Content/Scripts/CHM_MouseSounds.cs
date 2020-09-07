//C-Sharp (C#) Script Writted by "John's Art"
//It is strictly forbidden to sell or share this material for commercial purposes
//You are only allowed to use this material as part of your Unity project, but only if you legally bought this asset from John's Art Shop or from the Unity Asset Store
//Website: http://www.johnsartdev.com
//YouTube: https://goo.gl/tMtTuA 


//This script is used to play different sounds of the mouse when interacting UI elements

using UnityEngine;

public class CHM_MouseSounds : MonoBehaviour
{
    [Header("Mouse SFX")]
	public AudioClip hover;
	public AudioClip click;

	public void PlayHover()
	{
		GetComponent<AudioSource>().PlayOneShot(hover, .65f);
	}

	public void PlayClick()
	{
		GetComponent<AudioSource>().PlayOneShot(click, .65f);
	}
}
