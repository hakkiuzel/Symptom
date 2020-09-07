using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;



namespace BayatGames.SaveGamePro.Examples{
public class LoadLevel3 : MonoBehaviour
{
	public int sceneindex=3;
	public GameObject panel;
	public Slider slider;
	public Text progresstext;
		public GameObject thx;
	

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

	public void thx4()
		{
			thx.SetActive(true);
			SaveGame.Clear();
		}




 } }


