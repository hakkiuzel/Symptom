using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace TMPro.Examples

{
public class ItemText : MonoBehaviour
{

public TMP_Text m_textMeshPro;

 private string label01 = "AMMO";

        void Awake()
        {
            // Get Reference to TextMeshPro Component
            m_textMeshPro = GetComponent<TMP_Text>();
          
 
            
            }


        public void AmmoText()
        {
            m_textMeshPro.text = label01;
        }

  
}}

