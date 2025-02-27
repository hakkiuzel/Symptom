
//#define DEBUG_RENDER

using UnityEngine;
using System.Collections;
using System.Linq;
using System.Runtime.InteropServices;

[ExecuteInEditMode]
public class UBVintagesPE : UBEffectBase
{
    public float Luminance = 1f;
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
            if (_material.HasProperty("_Luminance"))
            {
                _material.SetFloat("_Luminance", Luminance);
            }
        }

        if (Shader != null && _material != null)
        {
            Graphics.Blit(source, destination, _material);
        }
    }
}
