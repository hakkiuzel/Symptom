using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IKBite : MonoBehaviour
{

    #region Data
    [SerializeField]
    Transform myRightHandMiddleFinger;
    IKBite otherGuy;
    [SerializeField]
    Transform myLeftHandMiddleFinger;
    [SerializeField]
    Animator anim;
    public GameObject Sphere;
    public GameObject Sphere2;
    Vector3 Shoulder;
    Vector3 LShoulder;
    #endregion

    private void Awake()
    {
        anim = GetComponent<Animator>();
    }

    void OnAnimatorIK()
    {

        
         
        anim.SetIKPosition(AvatarIKGoal.RightHand, Shoulder);
        anim.SetIKPositionWeight(AvatarIKGoal.RightHand, 1f);



        Vector3 positionL = new Vector3(-1.041f, -0.741f, 0.114f);
        anim.SetIKPosition(AvatarIKGoal.LeftHand, LShoulder);
        anim.SetIKPositionWeight(AvatarIKGoal.LeftHand, 1f);
    }

  void Update()
    {

        Shoulder = Sphere.transform.position;
        LShoulder = Sphere2.transform.position;

    }



}
