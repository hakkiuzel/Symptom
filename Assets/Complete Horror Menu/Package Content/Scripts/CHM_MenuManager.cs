//C-Sharp (C#) Script Writted by "John's Art"
//It is strictly forbidden to sell or share this material for commercial purposes
//You are only allowed to use this material as part of your Unity project, but only if you legally bought this asset from John's Art Shop or from the Unity Asset Store
//Website: http://www.johnsartdev.com
//YouTube: https://goo.gl/tMtTuA 


//This script is the core of the main menu system

using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

[RequireComponent(typeof(AudioSource))]
public class CHM_MenuManager : MonoBehaviour
{
    [Header ("UI Settings")]
	public GameObject BlackFade;
    public GameObject OptionsPanel;

    [Header("SFX Settings")]
    public AudioClip SoundStartingGame;
	AudioSource audioSource;

    [Header("Level Settings")]
    public string GameScene;

    //Misc variables
    bool FadePlay;

	void Start()
	{
        audioSource = GetComponent<AudioSource>();
		GameObject.Find("Canvas").GetComponent<Animation>().Play("Menu_FirstFade");
	}

	public void OpenWebPage(string URL)
	{
		Application.OpenURL(URL);
	}

	public void QuitGame()
	{
		Application.Quit();
	}

	public void InitialStartGame()
	{
        audioSource.PlayOneShot(SoundStartingGame);
		StartCoroutine(StartingGame());
		FadePlay = true;
		GameObject.Find("Canvas").GetComponent<Animation>().Play("Menu_FinalFade");
	}

	void Update()
	{
		if(FadePlay)
		{
			GameObject.Find("Camera").GetComponent<AudioSource>().volume -= Time.deltaTime;
			GameObject.Find("Whisping").GetComponent<AudioSource>().volume -= Time.deltaTime;
		}

		//Options Settings
		if (OptionsPanel.activeInHierarchy == true)
		{
			//Texture
			if (QualitySettings.masterTextureLimit == 0)
			{
				GameObject.Find("TextureQuality").GetComponent<Dropdown>().value = 2;
			}

			if (QualitySettings.masterTextureLimit == 1)
			{
				GameObject.Find("TextureQuality").GetComponent<Dropdown>().value = 1;
			}

			if (QualitySettings.masterTextureLimit == 2)
			{
				GameObject.Find("TextureQuality").GetComponent<Dropdown>().value = 0;
			}
			//Anti-Aliasing
			if (QualitySettings.antiAliasing == 0)
			{
				GameObject.Find("AA").GetComponent<Dropdown>().value = 0;
			}

			if (QualitySettings.antiAliasing == 2)
			{
				GameObject.Find("AA").GetComponent<Dropdown>().value = 1;
			}

			if (QualitySettings.antiAliasing == 4)
			{
				GameObject.Find("AA").GetComponent<Dropdown>().value = 2;
			}

			if (QualitySettings.antiAliasing == 8)
			{
				GameObject.Find("AA").GetComponent<Dropdown>().value = 3;
			}
			//Anisotropic filter
			if (QualitySettings.anisotropicFiltering == AnisotropicFiltering.Disable)
			{
				GameObject.Find("AS").GetComponent<Dropdown>().value = 0;
			}

			if (QualitySettings.anisotropicFiltering == AnisotropicFiltering.Enable)
			{
				GameObject.Find("AS").GetComponent<Dropdown>().value = 1;
			}

			if (QualitySettings.anisotropicFiltering == AnisotropicFiltering.ForceEnable)
			{
				GameObject.Find("AS").GetComponent<Dropdown>().value = 2;
			}
			//Blend Weights
			if (QualitySettings.skinWeights == SkinWeights.OneBone)
			{
				GameObject.Find("GeometryLevel").GetComponent<Dropdown>().value = 0;
			}
			if (QualitySettings.skinWeights == SkinWeights.TwoBones)
			{
				GameObject.Find("GeometryLevel").GetComponent<Dropdown>().value = 1;
			}
			if (QualitySettings.skinWeights == SkinWeights.FourBones)
			{
				GameObject.Find("GeometryLevel").GetComponent<Dropdown>().value = 2;
			}
			//Shadow Cascades
			if (QualitySettings.shadowCascades == 0)
			{
				GameObject.Find("ShadowsCascades").GetComponent<Dropdown>().value = 0;
			}
			if (QualitySettings.shadowCascades == 2)
			{
				GameObject.Find("ShadowsCascades").GetComponent<Dropdown>().value = 1;
			}
			if (QualitySettings.shadowCascades == 4)
			{
				GameObject.Find("ShadowsCascades").GetComponent<Dropdown>().value = 2;
			}
			//Vsync
			if (QualitySettings.vSyncCount == 0)
			{
				GameObject.Find("VSyncToogle").GetComponent<Toggle>().isOn = false;
			}
			if (QualitySettings.vSyncCount == 1)
			{
				GameObject.Find("VSyncToogle").GetComponent<Toggle>().isOn = true;
			}
            //
		}
        //
	}

	IEnumerator StartingGame()
	{
		yield return new WaitForSeconds(9f);
		SceneManager.LoadScene(GameScene);
	}

    //Options Settings Functions
	public void UpdateVolume(float v)
	{
		AudioListener.volume = v;
	}

	public void MSAALevel(int a)
	{
		a = GameObject.Find("AA").GetComponent<Dropdown>().value;
		if (a == 0)
		{
			QualitySettings.antiAliasing = 0;
		}
		if (a == 1)
		{
			QualitySettings.antiAliasing = 2;
		}
		if (a == 2)
		{
			QualitySettings.antiAliasing = 4;
		}
		if (a == 3)
		{
			QualitySettings.antiAliasing = 8;
		}
	}

	public void TextureQuality(int te)
	{
		te = GameObject.Find("TextureQuality").GetComponent<Dropdown>().value;
		if (te == 0)
		{
			QualitySettings.masterTextureLimit = 2;
		}
		if (te == 1)
		{
			QualitySettings.masterTextureLimit = 1;
		}
		if (te == 2)
		{
			QualitySettings.masterTextureLimit = 0;
		}
	}

	public void UpdateAnisotropic(int a)
	{
		a = GameObject.Find("AS").GetComponent<Dropdown>().value;
		if (a == 0)
		{
			QualitySettings.anisotropicFiltering = AnisotropicFiltering.Disable;
		}
		if (a == 1)
		{
			QualitySettings.anisotropicFiltering = AnisotropicFiltering.Enable;
		}
		if (a == 2)
		{
			QualitySettings.anisotropicFiltering = AnisotropicFiltering.ForceEnable;
		}
	}

	public void BlendWeight(int bw)
	{
		bw = GameObject.Find("GeometryLevel").GetComponent<Dropdown>().value;
		if (bw == 0)
		{
			QualitySettings.skinWeights = SkinWeights.OneBone;
		}
		if (bw == 1)
		{
			QualitySettings.skinWeights = SkinWeights.TwoBones;
		}
		if (bw == 2)
		{
			QualitySettings.skinWeights = SkinWeights.FourBones;
		}
	}

	public void VSync(bool vs)
	{
		vs = GameObject.Find("VSyncToogle").GetComponent<Toggle>().isOn;
		if(vs == true)
		{
			QualitySettings.vSyncCount = 1;
		}
		if (vs == false)
		{
			QualitySettings.vSyncCount = 0;
		}
	}

	public void ShadowsCascades(int s)
	{
		s = GameObject.Find("ShadowsCascades").GetComponent<Dropdown>().value;
		if (s == 0)
		{
			QualitySettings.shadowCascades = 0;
		}
		if (s == 1)
		{
			QualitySettings.shadowCascades = 2;
		}
		if (s == 2)
		{
			QualitySettings.shadowCascades = 4;
		}
	}
    //
}