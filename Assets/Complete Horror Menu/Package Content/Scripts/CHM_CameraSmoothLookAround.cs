//C-Sharp (C#) Script Writted by "John's Art"
//It is strictly forbidden to sell or share this material for commercial purposes
//You are only allowed to use this material as part of your Unity project, but only if you legally bought this asset from John's Art Shop or from the Unity Asset Store
//Website: http://www.johnsartdev.com
//YouTube: https://goo.gl/tMtTuA 


//This script achieve a smooth camera movement using the mouse

using UnityEngine;

public class CHM_CameraSmoothLookAround : MonoBehaviour
{
    [Header("Smooth Movements Settings")]
	public GameObject _camera;
	public float multiplierX = 1f;
	public float multiplierY = 1f;
	public float smoothing = 1f;
	
    //Misc variables
	private float defaultX;
	private float defaultY;
	private float inputX;
	private float inputY;
	private float xRot;
	private float yRot;
	
	void Start()
    {
		defaultX = transform.eulerAngles.y;
		defaultY = _camera.transform.eulerAngles.x;
	}
	
	void Update()
    {
		inputX = ((Input.mousePosition.x - Screen.width * 0.5f) / Screen.width) * multiplierX;
		xRot = Mathf.Lerp(xRot, inputX, Time.deltaTime * smoothing);
		inputY = ((Input.mousePosition.y - Screen.height * 0.5f) / Screen.height) * multiplierY;
		yRot = Mathf.Lerp(yRot, inputY, Time.deltaTime * smoothing);
		
		transform.localEulerAngles = new Vector3(0, defaultX + xRot, 0);
        _camera.transform.localEulerAngles = new Vector3(defaultY - yRot, 0, 0);
	}
}