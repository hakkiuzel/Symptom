﻿// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'


Shader "UB/PostEffects/Emboss" {

	Properties	{
		[HideInInspector]_Strength("Strength", Float) = 3
		[HideInInspector]_Angle("Angle", Float) = 90
		[HideInInspector]_MainTex("Base (RGB)", 2D) = "" {}
	}

	Subshader{

		Pass {
			Tags { "Queue" = "Opaque" }

			CGPROGRAM

			#include "UnityCG.cginc"

			#pragma vertex vert
			#pragma fragment frag

			float _Strength;
			float _Angle;
			sampler2D _MainTex;
			float4 _MainTex_ST;

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
			};

			struct vertexOutput {
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
			};

			vertexOutput vert(appdata v)
			{
				vertexOutput o;
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				return o;
			}

			half4 frag(vertexOutput IN) : SV_Target
			{
			    float4 color = float4(0.,0.,0.,0.);

				color = float4(0.5+
					((tex2D(_MainTex,IN.uv).rgb-
						tex2D(_MainTex,IN.uv+
							(float2(cos(radians(_Angle)),sin(radians(_Angle)))*(1/_ScreenParams.x))).rgb)*_Strength),1.0);
			    
			    return float4((color.r+color.g+color.b)/float3(3.,3.,3.),color.a);
			}
			ENDCG
		}
	}
}



