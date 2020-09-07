using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;



namespace BayatGames.SaveGamePro.Examples{
public class LoadLevel1 : MonoBehaviour
{
	public int sceneindex=2;
	public GameObject panel;
	public Slider slider;
	public Text progresstext;
	

	public void loading (int sceneindex)
	{
		StartCoroutine(asyncload());
		panel.SetActive (true);


	}



	IEnumerator asyncload() {


		AsyncOperation operation = SceneManager.LoadSceneAsync(sceneindex);


		while (!operation.isDone) {

			float progress = Mathf.Clamp01(operation.progress / .9f);
			slider.value = progress;
			progresstext.text = (int)( progress * 100f)+ "%";

			yield return null;
		}

	}






 } }


