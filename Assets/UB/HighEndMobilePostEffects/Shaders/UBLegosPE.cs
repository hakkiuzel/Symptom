
//#define DEBUG_RENDER

using UnityEngine;
using System.Collections;
using System.Linq;
using System.Runtime.InteropServices;

[ExecuteInEditMode]
public class UBLegosPE : UBEffectBase
{
    public float BlockSize = 50;
    public bool Shadow = true;
    public Shader Shader;
    private Material _material;

    void OnRenderImage(RenderTexture source, RenderTexture destination)
    {
        if (_material)
        {
            DestroyImmediate(_material);
            _material = null;
        }
        if (Shader)
        {
            _material = new Material(Shader);
            _material.hideFlags = HideFlags.HideAndDontSave;

            if (_material.HasProperty("_BlockSize"))
            {
                _material.SetFloat("_BlockSize", BlockSize);
            }
            if (_material.HasProperty("_Shadow"))
            {
                _material.SetFloat("_Shadow", (Shadow? 1.0f : 0f) );
            }
        }

        if (Shader != null && _material != null)
        {
            Graphics.Blit(source, destination, _material);
        }
    }
}
