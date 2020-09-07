#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Cinemachine.CinemachineBlend
struct CinemachineBlend_t7A2A71833A7E2C44AB1D7874B3D076EF46A56298;
// Cinemachine.CinemachineBlenderSettings
struct CinemachineBlenderSettings_tCD488C84B252394D8CDD7D0DB623D991BE77F3F0;
// Cinemachine.CinemachineBrain
struct CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB;
// Cinemachine.CinemachineBrain/BrainEvent
struct BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0;
// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tD6FFF8FCC883ABD7CC27619CD451E6FE56DB4A3B;
// Cinemachine.CinemachineCore/AxisInputDelegate
struct AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE;
// Cinemachine.CinemachineCore/GetBlendOverrideDelegate
struct GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2;
// Cinemachine.CinemachineExtension
struct CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD;
// Cinemachine.ICinemachineCamera
struct ICinemachineCamera_t89A591897FD47A23EAD91D2B3DA94B7EB3B322FD;
// CinemachineCameraOffset
struct CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693;
// CinemachineMixer
struct CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2;
// CinemachineShot
struct CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5;
// CinemachineShotPlayable
struct CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE;
// CinemachineTouchInputMapper
struct CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815;
// CinemachineTrack
struct CinemachineTrack_t6B531D379A33136302768D59460F3E8B1AC6D79D;
// System.Action`1<UnityEngine.Playables.PlayableDirector>
struct Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021;
// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_tF1C9CDCA1FBE7E67643B2F2806BA5A863023BF1E;
// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t2E2DE3837C6F4DB65CCE0924C5991C9B77A46B3E;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/UpdateStatus>
struct Dictionary_2_tF280F53503CE1E1FF881FF29B2E1908DA7602DEA;
// System.Collections.Generic.Dictionary`2<Cinemachine.ICinemachineCamera,System.Object>
struct Dictionary_2_t2DA729FA5DE6343A62FDA39E2B5A6EA153BB03A8;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct Dictionary_2_t1CEC2E74944D8E63CB5A7BFD7C9ACB03900CE763;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TimelineClip>
struct IEnumerable_1_t594F7C751FE4B8BAB474313B48B4BF2960B12879;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset>
struct IEnumerable_1_t06F418BD13D332B926BF4A199CE38726025C2B7D;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_t25C0DD5BAEE8988DC0A767964E16569E3A4880FD;
// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain/BrainFrame>
struct List_1_t22F3D7410E401DD6A2908F6264F0046A93980F6F;
// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain>
struct List_1_tB7BA18EE5488A4BE5CB95E9EAC7819798664BA2D;
// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_tB06968E265CE1689803547CD89D453ACFB3509D5;
// System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>
struct List_1_tE8AAF747F943B4B38D436DE3BE689D0EEB31553D;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>>
struct List_1_tE6BA843A3B3022980B945784B5A55D6FBEA45363;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.ScriptableObject>
struct List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E;
// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker>
struct List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip>
struct List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AnimationClip
struct AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.AnimationCurve[]
struct AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.IExposedPropertyTable
struct IExposedPropertyTable_tBA6A5A41F6283C34744CA6EE8B7BE2F0679CF885;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD;
// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01;
// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2;
// UnityEngine.Timeline.IPropertyCollector
struct IPropertyCollector_t716BB6257535844909D08C5849BF25BEFAB51AC1;
// UnityEngine.Timeline.TimelineClip
struct TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB;
// UnityEngine.Timeline.TimelineClip[]
struct TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E;
// UnityEngine.Timeline.TrackAsset
struct TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D;
// UnityEngine.Timeline.TrackAsset[]
struct TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5;
// UnityEngine.Touch[]
struct TouchU5BU5D_t38D94C6D76F3094870385FAC3A56D30651B41571;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97;

IL2CPP_EXTERN_C RuntimeClass* AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t594F7C751FE4B8BAB474313B48B4BF2960B12879_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE8C6716AE5A02D3C9D6DD62A2326CD99E0687446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2;
IL2CPP_EXTERN_C String_t* _stringLiteral20B7AF975FE61D31242708B325C2EBE54C427D42;
IL2CPP_EXTERN_C String_t* _stringLiteral25A7D94AE338306D36C6374758F830F411BC7709;
IL2CPP_EXTERN_C String_t* _stringLiteral294D359ECE148A430F19981912277E5154CA19E0;
IL2CPP_EXTERN_C String_t* _stringLiteral76F5995D7A1D434E1D7C4046772BDE3F81E26ADA;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE47ED25C8CD4D0D230E6261B3C1BE71F746BD6;
IL2CPP_EXTERN_C String_t* _stringLiteral9975DAF0085BA0D080E112D87C20E40CD439A2CC;
IL2CPP_EXTERN_C String_t* _stringLiteralAEEEC79135C627C521C9AF016C69BE1561778B7C;
IL2CPP_EXTERN_C String_t* _stringLiteralCC357B8329982D47F9D2DAC70F02E7F8E8217DD0;
IL2CPP_EXTERN_C String_t* _stringLiteralD0BDB1A683AF21C4D3907C91B62158B7170DC94B;
IL2CPP_EXTERN_C String_t* _stringLiteralD8EE6A18D5B371A364BE13F498C76E11E321DECB;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineTouchInputMapper_GetInputAxis_m4EE4DF4432467189515898E6E6F001F5C6ADBEB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_mBD916E48F072E85917A54BADF9B02330C838FEA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPropertyCollector_AddFromName_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m73CA44B43EA4DA7708D4D0CD8AB7CA8D2F9A00C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m2B8BBF8D072C4630477516A1A1896152D2BE181E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetDuration_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m410DA7C7A2DC6374AD951D381CF611710AE421CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mC15D789D7CD8858FC1EBCA1ACC56F6C7AD829B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBBA41EE4D02AA0A1B68FCD6F432BD9C3C06E2F0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m02EFE600B3A94F99F824DCDD0680EF46E16B687D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetTime_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m9B581EE3C3F65A6AE31A2438115DA7B362C14134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_SetInputCount_TisScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_m7130E49102B29EB624421A4F59B981173FDD3DF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_m216BA0DF0D6D5E31EFB40C08EB99C93B74D6BE40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_m4F9F8E48634C7E5FD9D6E5584C850133A54BA699_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_m6F1FE1C8EFB32C6564EAB7C8E44FB9DF276102D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_m9388F54AB0598505CA6ED126475CB8DC2172407B_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CinemachineCameraOffset_PostPipelineStageCallback_m98CDEA837F38BEC706C5C19B6848FE2519C769AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineCameraOffset__ctor_m041AEDA39C96235AAB2B126101AFB9B79B0EA148_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineMixer_OnPlayableDestroy_m203C52683CCF327E82DB7C6463A298F3519ACA4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineMixer_ProcessFrame_m352B3F777F7C582E083A7BFF641D84DC8D433F0E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineShotPlayable_get_IsValid_m4172ABD6CCCEBB37F7BAEE66087F996C4C353F2C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineShot_CreatePlayable_m9FF5653D04CAFD839568D784D68DDE4F63C1A04F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineShot_GatherProperties_m5E76C61D42947D7BDB3C6258C2EA2C3F2A08F5CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineTouchInputMapper_Start_m961A323D3DFB09D299682C18DC782B8C14E5EA66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineTouchInputMapper__ctor_mE93900E7FF5B242DF7B8815D168F5EA59611D38A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineTrack_CreateTrackMixer_m38B4BFFF64A6E7D9DC6DC02A8D689E5652962DC0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineTrack__ctor_mAA9B41283697063BF5C4624A0BD5F73F1C48AEE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SplineHelpers_Bezier1_mAA12E00E825DBD151A57473821FB3CB9B7F68940_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SplineHelpers_Bezier3_m32C86EA80B44004197548DCC57589D5C857C90EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SplineHelpers_BezierTangent1_m486ADCC3B4C93A8B7DCB358C7F38A54247C0A35E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SplineHelpers_BezierTangent3_m2872862CA0C97ECA9EEF8D84A93B6A8D78C12064_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SplineHelpers_ComputeSmoothControlPointsLooped_m288EB1A7D40A21693220453AA7A0AD7802FCB409_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SplineHelpers_ComputeSmoothControlPoints_m3A964E760EA987A9CD68AC92E22952955AE0EC77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityQuaternionExtensions_ApplyCameraRotation_m3E5594FA8D22EECF7DD709A26493DE5FAD7B0814_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityQuaternionExtensions_GetCameraRotationToTarget_m2FC346D5CDC3FA3E81B1D35B4667D72034572B67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityQuaternionExtensions_SlerpWithReferenceUp_mFAB3BC9FE543C85352CFF3F33E5D602C41D15852_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_Abs_m306CBBA7519A685B4A409FA92A75A450A7A03E82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_Angle_m1C0203CE5F691DE761EF73814F8C095B1C34960D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_ClosestPointOnSegment_m89420D378AF96EDCA793B2D1411F2BFB7AB23BD5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_ClosestPointOnSegment_mC7EE05468599609A04DE0F031B7272731102F20F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_SignedAngle_m9524F338C782113E60868447BBADFCA1885DD81E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_SlerpWithReferenceUp_mEE30111040FD07F0FC9C43E63FC4C40A1554C18E_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com;

struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct TouchU5BU5D_t38D94C6D76F3094870385FAC3A56D30651B41571;
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Cinemachine.Utility.SplineHelpers
struct  SplineHelpers_tC88AED5435AA4C67E6039B93997091214A2E0858  : public RuntimeObject
{
public:

public:
};


// Cinemachine.Utility.UnityQuaternionExtensions
struct  UnityQuaternionExtensions_tCED4E5F8D5E7C212E7CE30310E4123D534075ABB  : public RuntimeObject
{
public:

public:
};


// Cinemachine.Utility.UnityRectExtensions
struct  UnityRectExtensions_tD2D2C115AA54BE180CE78EF2BB37D1EC18A36847  : public RuntimeObject
{
public:

public:
};


// Cinemachine.Utility.UnityVectorExtensions
struct  UnityVectorExtensions_t8B7D79BD392965E48AEA9B91EE25FD09244E69B3  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Playables.PlayableBehaviour
struct  PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01  : public RuntimeObject
{
public:

public:
};


// Cinemachine.CameraState_CustomBlendable
struct  CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 
{
public:
	// UnityEngine.Object Cinemachine.CameraState_CustomBlendable::m_Custom
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_Custom_0;
	// System.Single Cinemachine.CameraState_CustomBlendable::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_Custom_0() { return static_cast<int32_t>(offsetof(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253, ___m_Custom_0)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_Custom_0() const { return ___m_Custom_0; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_Custom_0() { return &___m_Custom_0; }
	inline void set_m_Custom_0(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_Custom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Custom_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};


// CinemachineMixer
struct  CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2  : public PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01
{
public:
	// Cinemachine.CinemachineBrain CinemachineMixer::mBrain
	CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * ___mBrain_0;
	// System.Int32 CinemachineMixer::mBrainOverrideId
	int32_t ___mBrainOverrideId_1;
	// System.Boolean CinemachineMixer::mPlaying
	bool ___mPlaying_2;
	// System.Single CinemachineMixer::mLastOverrideFrame
	float ___mLastOverrideFrame_3;

public:
	inline static int32_t get_offset_of_mBrain_0() { return static_cast<int32_t>(offsetof(CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2, ___mBrain_0)); }
	inline CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * get_mBrain_0() const { return ___mBrain_0; }
	inline CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB ** get_address_of_mBrain_0() { return &___mBrain_0; }
	inline void set_mBrain_0(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * value)
	{
		___mBrain_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBrain_0), (void*)value);
	}

	inline static int32_t get_offset_of_mBrainOverrideId_1() { return static_cast<int32_t>(offsetof(CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2, ___mBrainOverrideId_1)); }
	inline int32_t get_mBrainOverrideId_1() const { return ___mBrainOverrideId_1; }
	inline int32_t* get_address_of_mBrainOverrideId_1() { return &___mBrainOverrideId_1; }
	inline void set_mBrainOverrideId_1(int32_t value)
	{
		___mBrainOverrideId_1 = value;
	}

	inline static int32_t get_offset_of_mPlaying_2() { return static_cast<int32_t>(offsetof(CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2, ___mPlaying_2)); }
	inline bool get_mPlaying_2() const { return ___mPlaying_2; }
	inline bool* get_address_of_mPlaying_2() { return &___mPlaying_2; }
	inline void set_mPlaying_2(bool value)
	{
		___mPlaying_2 = value;
	}

	inline static int32_t get_offset_of_mLastOverrideFrame_3() { return static_cast<int32_t>(offsetof(CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2, ___mLastOverrideFrame_3)); }
	inline float get_mLastOverrideFrame_3() const { return ___mLastOverrideFrame_3; }
	inline float* get_address_of_mLastOverrideFrame_3() { return &___mLastOverrideFrame_3; }
	inline void set_mLastOverrideFrame_3(float value)
	{
		___mLastOverrideFrame_3 = value;
	}
};


// CinemachineMixer_ClipInfo
struct  ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288 
{
public:
	// Cinemachine.ICinemachineCamera CinemachineMixer_ClipInfo::vcam
	RuntimeObject* ___vcam_0;
	// System.Single CinemachineMixer_ClipInfo::weight
	float ___weight_1;
	// System.Double CinemachineMixer_ClipInfo::localTime
	double ___localTime_2;
	// System.Double CinemachineMixer_ClipInfo::duration
	double ___duration_3;

public:
	inline static int32_t get_offset_of_vcam_0() { return static_cast<int32_t>(offsetof(ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288, ___vcam_0)); }
	inline RuntimeObject* get_vcam_0() const { return ___vcam_0; }
	inline RuntimeObject** get_address_of_vcam_0() { return &___vcam_0; }
	inline void set_vcam_0(RuntimeObject* value)
	{
		___vcam_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vcam_0), (void*)value);
	}

	inline static int32_t get_offset_of_weight_1() { return static_cast<int32_t>(offsetof(ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288, ___weight_1)); }
	inline float get_weight_1() const { return ___weight_1; }
	inline float* get_address_of_weight_1() { return &___weight_1; }
	inline void set_weight_1(float value)
	{
		___weight_1 = value;
	}

	inline static int32_t get_offset_of_localTime_2() { return static_cast<int32_t>(offsetof(ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288, ___localTime_2)); }
	inline double get_localTime_2() const { return ___localTime_2; }
	inline double* get_address_of_localTime_2() { return &___localTime_2; }
	inline void set_localTime_2(double value)
	{
		___localTime_2 = value;
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288, ___duration_3)); }
	inline double get_duration_3() const { return ___duration_3; }
	inline double* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(double value)
	{
		___duration_3 = value;
	}
};

// Native definition for P/Invoke marshalling of CinemachineMixer/ClipInfo
struct ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshaled_pinvoke
{
	RuntimeObject* ___vcam_0;
	float ___weight_1;
	double ___localTime_2;
	double ___duration_3;
};
// Native definition for COM marshalling of CinemachineMixer/ClipInfo
struct ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshaled_com
{
	RuntimeObject* ___vcam_0;
	float ___weight_1;
	double ___localTime_2;
	double ___duration_3;
};

// CinemachineShotPlayable
struct  CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE  : public PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01
{
public:
	// Cinemachine.CinemachineVirtualCameraBase CinemachineShotPlayable::VirtualCamera
	CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___VirtualCamera_0;

public:
	inline static int32_t get_offset_of_VirtualCamera_0() { return static_cast<int32_t>(offsetof(CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE, ___VirtualCamera_0)); }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * get_VirtualCamera_0() const { return ___VirtualCamera_0; }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD ** get_address_of_VirtualCamera_0() { return &___VirtualCamera_0; }
	inline void set_VirtualCamera_0(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * value)
	{
		___VirtualCamera_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VirtualCamera_0), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Nullable`1<System.Boolean>
struct  Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.PropertyName
struct  PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Timeline.DiscreteTime
struct  DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 
{
public:
	// System.Int64 UnityEngine.Timeline.DiscreteTime::m_DiscreteTime
	int64_t ___m_DiscreteTime_2;

public:
	inline static int32_t get_offset_of_m_DiscreteTime_2() { return static_cast<int32_t>(offsetof(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047, ___m_DiscreteTime_2)); }
	inline int64_t get_m_DiscreteTime_2() const { return ___m_DiscreteTime_2; }
	inline int64_t* get_address_of_m_DiscreteTime_2() { return &___m_DiscreteTime_2; }
	inline void set_m_DiscreteTime_2(int64_t value)
	{
		___m_DiscreteTime_2 = value;
	}
};

struct DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047_StaticFields
{
public:
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.DiscreteTime::kMaxTime
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___kMaxTime_1;

public:
	inline static int32_t get_offset_of_kMaxTime_1() { return static_cast<int32_t>(offsetof(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047_StaticFields, ___kMaxTime_1)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_kMaxTime_1() const { return ___kMaxTime_1; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_kMaxTime_1() { return &___kMaxTime_1; }
	inline void set_kMaxTime_1(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___kMaxTime_1 = value;
	}
};


// UnityEngine.Timeline.MarkerList
struct  MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.MarkerList::m_Objects
	List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * ___m_Objects_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.MarkerList::m_Cache
	List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * ___m_Cache_1;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_CacheDirty
	bool ___m_CacheDirty_2;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_HasNotifications
	bool ___m_HasNotifications_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_Objects_0)); }
	inline List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Cache_1() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_Cache_1)); }
	inline List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * get_m_Cache_1() const { return ___m_Cache_1; }
	inline List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 ** get_address_of_m_Cache_1() { return &___m_Cache_1; }
	inline void set_m_Cache_1(List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * value)
	{
		___m_Cache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheDirty_2() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_CacheDirty_2)); }
	inline bool get_m_CacheDirty_2() const { return ___m_CacheDirty_2; }
	inline bool* get_address_of_m_CacheDirty_2() { return &___m_CacheDirty_2; }
	inline void set_m_CacheDirty_2(bool value)
	{
		___m_CacheDirty_2 = value;
	}

	inline static int32_t get_offset_of_m_HasNotifications_3() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_HasNotifications_3)); }
	inline bool get_m_HasNotifications_3() const { return ___m_HasNotifications_3; }
	inline bool* get_address_of_m_HasNotifications_3() { return &___m_HasNotifications_3; }
	inline void set_m_HasNotifications_3(bool value)
	{
		___m_HasNotifications_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshaled_pinvoke
{
	List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * ___m_Objects_0;
	List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};
// Native definition for COM marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshaled_com
{
	List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * ___m_Objects_0;
	List_1_t2D00608AD39CD50DFEF8F942B1E91CF4D50B65C1 * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// Cinemachine.CameraState_BlendHintValue
struct  BlendHintValue_tCF9A24D7B4477067080DB09C7E1BAD86C14B4B52 
{
public:
	// System.Int32 Cinemachine.CameraState_BlendHintValue::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendHintValue_tCF9A24D7B4477067080DB09C7E1BAD86C14B4B52, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBlendDefinition_Style
struct  Style_t709ACC1BF602ECD71DBFC58A23673543021BBF0F 
{
public:
	// System.Int32 Cinemachine.CinemachineBlendDefinition_Style::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Style_t709ACC1BF602ECD71DBFC58A23673543021BBF0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBrain_UpdateMethod
struct  UpdateMethod_t24F3391B8C1CB67A2AF181A8EF51E994224C9FA2 
{
public:
	// System.Int32 Cinemachine.CinemachineBrain_UpdateMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateMethod_t24F3391B8C1CB67A2AF181A8EF51E994224C9FA2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineCore_Stage
struct  Stage_t0E42746EC0AE99362E618F1D42126DCA0F62C4FF 
{
public:
	// System.Int32 Cinemachine.CinemachineCore_Stage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Stage_t0E42746EC0AE99362E618F1D42126DCA0F62C4FF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineCore_UpdateFilter
struct  UpdateFilter_t9309B9175AFFA45140CE56FD5C229947C9CC19D2 
{
public:
	// System.Int32 Cinemachine.CinemachineCore_UpdateFilter::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateFilter_t9309B9175AFFA45140CE56FD5C229947C9CC19D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineVirtualCameraBase_StandbyUpdateMode
struct  StandbyUpdateMode_tDD387031AFF8EB8516338BC71517029CB6F1BE18 
{
public:
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase_StandbyUpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StandbyUpdateMode_tDD387031AFF8EB8516338BC71517029CB6F1BE18, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.LensSettings
struct  LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC 
{
public:
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// System.Boolean Cinemachine.LensSettings::<Orthographic>k__BackingField
	bool ___U3COrthographicU3Ek__BackingField_6;
	// System.Boolean Cinemachine.LensSettings::<IsPhysicalCamera>k__BackingField
	bool ___U3CIsPhysicalCameraU3Ek__BackingField_7;
	// UnityEngine.Vector2 Cinemachine.LensSettings::<SensorSize>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CSensorSizeU3Ek__BackingField_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___LensShift_9;

public:
	inline static int32_t get_offset_of_FieldOfView_1() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___FieldOfView_1)); }
	inline float get_FieldOfView_1() const { return ___FieldOfView_1; }
	inline float* get_address_of_FieldOfView_1() { return &___FieldOfView_1; }
	inline void set_FieldOfView_1(float value)
	{
		___FieldOfView_1 = value;
	}

	inline static int32_t get_offset_of_OrthographicSize_2() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___OrthographicSize_2)); }
	inline float get_OrthographicSize_2() const { return ___OrthographicSize_2; }
	inline float* get_address_of_OrthographicSize_2() { return &___OrthographicSize_2; }
	inline void set_OrthographicSize_2(float value)
	{
		___OrthographicSize_2 = value;
	}

	inline static int32_t get_offset_of_NearClipPlane_3() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___NearClipPlane_3)); }
	inline float get_NearClipPlane_3() const { return ___NearClipPlane_3; }
	inline float* get_address_of_NearClipPlane_3() { return &___NearClipPlane_3; }
	inline void set_NearClipPlane_3(float value)
	{
		___NearClipPlane_3 = value;
	}

	inline static int32_t get_offset_of_FarClipPlane_4() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___FarClipPlane_4)); }
	inline float get_FarClipPlane_4() const { return ___FarClipPlane_4; }
	inline float* get_address_of_FarClipPlane_4() { return &___FarClipPlane_4; }
	inline void set_FarClipPlane_4(float value)
	{
		___FarClipPlane_4 = value;
	}

	inline static int32_t get_offset_of_Dutch_5() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___Dutch_5)); }
	inline float get_Dutch_5() const { return ___Dutch_5; }
	inline float* get_address_of_Dutch_5() { return &___Dutch_5; }
	inline void set_Dutch_5(float value)
	{
		___Dutch_5 = value;
	}

	inline static int32_t get_offset_of_U3COrthographicU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___U3COrthographicU3Ek__BackingField_6)); }
	inline bool get_U3COrthographicU3Ek__BackingField_6() const { return ___U3COrthographicU3Ek__BackingField_6; }
	inline bool* get_address_of_U3COrthographicU3Ek__BackingField_6() { return &___U3COrthographicU3Ek__BackingField_6; }
	inline void set_U3COrthographicU3Ek__BackingField_6(bool value)
	{
		___U3COrthographicU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsPhysicalCameraU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___U3CIsPhysicalCameraU3Ek__BackingField_7)); }
	inline bool get_U3CIsPhysicalCameraU3Ek__BackingField_7() const { return ___U3CIsPhysicalCameraU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsPhysicalCameraU3Ek__BackingField_7() { return &___U3CIsPhysicalCameraU3Ek__BackingField_7; }
	inline void set_U3CIsPhysicalCameraU3Ek__BackingField_7(bool value)
	{
		___U3CIsPhysicalCameraU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CSensorSizeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___U3CSensorSizeU3Ek__BackingField_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CSensorSizeU3Ek__BackingField_8() const { return ___U3CSensorSizeU3Ek__BackingField_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CSensorSizeU3Ek__BackingField_8() { return &___U3CSensorSizeU3Ek__BackingField_8; }
	inline void set_U3CSensorSizeU3Ek__BackingField_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CSensorSizeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_LensShift_9() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___LensShift_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_LensShift_9() const { return ___LensShift_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_LensShift_9() { return &___LensShift_9; }
	inline void set_LensShift_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___LensShift_9 = value;
	}
};

struct LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_StaticFields
{
public:
	// Cinemachine.LensSettings Cinemachine.LensSettings::Default
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_StaticFields, ___Default_0)); }
	inline LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  get_Default_0() const { return ___Default_0; }
	inline LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC * get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  value)
	{
		___Default_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___U3COrthographicU3Ek__BackingField_6;
	int32_t ___U3CIsPhysicalCameraU3Ek__BackingField_7;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CSensorSizeU3Ek__BackingField_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___LensShift_9;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___U3COrthographicU3Ek__BackingField_6;
	int32_t ___U3CIsPhysicalCameraU3Ek__BackingField_7;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CSensorSizeU3Ek__BackingField_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___LensShift_9;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Playables.FrameData_EvaluationType
struct  EvaluationType_t86C43C30A6771EA55B35597D98A30567AA4A6A5E 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData_EvaluationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EvaluationType_t86C43C30A6771EA55B35597D98A30567AA4A6A5E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.FrameData_Flags
struct  Flags_tC705783C7BC90E0953FD3B996C7900B58A452D69 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData_Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tC705783C7BC90E0953FD3B996C7900B58A452D69, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.PlayState
struct  PlayState_tC3BC5843A80D4DEC4D5E79417CBBAD10BB0BEC91 
{
public:
	// System.Int32 UnityEngine.Playables.PlayState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayState_tC3BC5843A80D4DEC4D5E79417CBBAD10BB0BEC91, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Timeline.ClipCaps
struct  ClipCaps_tF9AB6311CC5A0AA6908A88DCA53CB00208035E46 
{
public:
	// System.Int32 UnityEngine.Timeline.ClipCaps::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipCaps_tF9AB6311CC5A0AA6908A88DCA53CB00208035E46, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineClip_BlendCurveMode
struct  BlendCurveMode_t68FF453F9C85DD1968A09AEA576C6173C648F6F1 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip_BlendCurveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendCurveMode_t68FF453F9C85DD1968A09AEA576C6173C648F6F1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineClip_ClipExtrapolation
struct  ClipExtrapolation_tC55410C9E61EC3868549509F094A83E2E8314783 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip_ClipExtrapolation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipExtrapolation_tC55410C9E61EC3868549509F094A83E2E8314783, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct  TouchPhase_tD902305F0B673116C42548A58E8BEED50177A33D 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tD902305F0B673116C42548A58E8BEED50177A33D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_t27DBEAB2242247A15EDE96D740F7EB73ACC938DB 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t27DBEAB2242247A15EDE96D740F7EB73ACC938DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CameraState
struct  CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 
{
public:
	// Cinemachine.LensSettings Cinemachine.CameraState::<Lens>k__BackingField
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  ___U3CLensU3Ek__BackingField_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceUp>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceUpU3Ek__BackingField_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceLookAt>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceLookAtU3Ek__BackingField_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::<RawPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CRawPositionU3Ek__BackingField_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::<RawOrientation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CRawOrientationU3Ek__BackingField_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionDampingBypass>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	// System.Single Cinemachine.CameraState::<ShotQuality>k__BackingField
	float ___U3CShotQualityU3Ek__BackingField_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionCorrection>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionCorrectionU3Ek__BackingField_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::<OrientationCorrection>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3COrientationCorrectionU3Ek__BackingField_9;
	// Cinemachine.CameraState_BlendHintValue Cinemachine.CameraState::<BlendHint>k__BackingField
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	// Cinemachine.CameraState_CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom0_11;
	// Cinemachine.CameraState_CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom1_12;
	// Cinemachine.CameraState_CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom2_13;
	// Cinemachine.CameraState_CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState_CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_t25C0DD5BAEE8988DC0A767964E16569E3A4880FD * ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CLensU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CLensU3Ek__BackingField_0)); }
	inline LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  get_U3CLensU3Ek__BackingField_0() const { return ___U3CLensU3Ek__BackingField_0; }
	inline LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC * get_address_of_U3CLensU3Ek__BackingField_0() { return &___U3CLensU3Ek__BackingField_0; }
	inline void set_U3CLensU3Ek__BackingField_0(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  value)
	{
		___U3CLensU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceUpU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CReferenceUpU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CReferenceUpU3Ek__BackingField_1() const { return ___U3CReferenceUpU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CReferenceUpU3Ek__BackingField_1() { return &___U3CReferenceUpU3Ek__BackingField_1; }
	inline void set_U3CReferenceUpU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CReferenceUpU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLookAtU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CReferenceLookAtU3Ek__BackingField_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CReferenceLookAtU3Ek__BackingField_2() const { return ___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CReferenceLookAtU3Ek__BackingField_2() { return &___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline void set_U3CReferenceLookAtU3Ek__BackingField_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CReferenceLookAtU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRawPositionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CRawPositionU3Ek__BackingField_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CRawPositionU3Ek__BackingField_4() const { return ___U3CRawPositionU3Ek__BackingField_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CRawPositionU3Ek__BackingField_4() { return &___U3CRawPositionU3Ek__BackingField_4; }
	inline void set_U3CRawPositionU3Ek__BackingField_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CRawPositionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRawOrientationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CRawOrientationU3Ek__BackingField_5)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CRawOrientationU3Ek__BackingField_5() const { return ___U3CRawOrientationU3Ek__BackingField_5; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CRawOrientationU3Ek__BackingField_5() { return &___U3CRawOrientationU3Ek__BackingField_5; }
	inline void set_U3CRawOrientationU3Ek__BackingField_5(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CRawOrientationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CPositionDampingBypassU3Ek__BackingField_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CPositionDampingBypassU3Ek__BackingField_6() const { return ___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return &___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline void set_U3CPositionDampingBypassU3Ek__BackingField_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CPositionDampingBypassU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CShotQualityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CShotQualityU3Ek__BackingField_7)); }
	inline float get_U3CShotQualityU3Ek__BackingField_7() const { return ___U3CShotQualityU3Ek__BackingField_7; }
	inline float* get_address_of_U3CShotQualityU3Ek__BackingField_7() { return &___U3CShotQualityU3Ek__BackingField_7; }
	inline void set_U3CShotQualityU3Ek__BackingField_7(float value)
	{
		___U3CShotQualityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CPositionCorrectionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CPositionCorrectionU3Ek__BackingField_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CPositionCorrectionU3Ek__BackingField_8() const { return ___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CPositionCorrectionU3Ek__BackingField_8() { return &___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline void set_U3CPositionCorrectionU3Ek__BackingField_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CPositionCorrectionU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3COrientationCorrectionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3COrientationCorrectionU3Ek__BackingField_9)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3COrientationCorrectionU3Ek__BackingField_9() const { return ___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3COrientationCorrectionU3Ek__BackingField_9() { return &___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline void set_U3COrientationCorrectionU3Ek__BackingField_9(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3COrientationCorrectionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CBlendHintU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CBlendHintU3Ek__BackingField_10)); }
	inline int32_t get_U3CBlendHintU3Ek__BackingField_10() const { return ___U3CBlendHintU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CBlendHintU3Ek__BackingField_10() { return &___U3CBlendHintU3Ek__BackingField_10; }
	inline void set_U3CBlendHintU3Ek__BackingField_10(int32_t value)
	{
		___U3CBlendHintU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_mCustom0_11() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___mCustom0_11)); }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  get_mCustom0_11() const { return ___mCustom0_11; }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 * get_address_of_mCustom0_11() { return &___mCustom0_11; }
	inline void set_mCustom0_11(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  value)
	{
		___mCustom0_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom0_11))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom1_12() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___mCustom1_12)); }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  get_mCustom1_12() const { return ___mCustom1_12; }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 * get_address_of_mCustom1_12() { return &___mCustom1_12; }
	inline void set_mCustom1_12(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  value)
	{
		___mCustom1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom1_12))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom2_13() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___mCustom2_13)); }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  get_mCustom2_13() const { return ___mCustom2_13; }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 * get_address_of_mCustom2_13() { return &___mCustom2_13; }
	inline void set_mCustom2_13(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  value)
	{
		___mCustom2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom2_13))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom3_14() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___mCustom3_14)); }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  get_mCustom3_14() const { return ___mCustom3_14; }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 * get_address_of_mCustom3_14() { return &___mCustom3_14; }
	inline void set_mCustom3_14(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  value)
	{
		___mCustom3_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom3_14))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CustomOverflow_15() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___m_CustomOverflow_15)); }
	inline List_1_t25C0DD5BAEE8988DC0A767964E16569E3A4880FD * get_m_CustomOverflow_15() const { return ___m_CustomOverflow_15; }
	inline List_1_t25C0DD5BAEE8988DC0A767964E16569E3A4880FD ** get_address_of_m_CustomOverflow_15() { return &___m_CustomOverflow_15; }
	inline void set_m_CustomOverflow_15(List_1_t25C0DD5BAEE8988DC0A767964E16569E3A4880FD * value)
	{
		___m_CustomOverflow_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomOverflow_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CNumCustomBlendablesU3Ek__BackingField_16)); }
	inline int32_t get_U3CNumCustomBlendablesU3Ek__BackingField_16() const { return ___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return &___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline void set_U3CNumCustomBlendablesU3Ek__BackingField_16(int32_t value)
	{
		___U3CNumCustomBlendablesU3Ek__BackingField_16 = value;
	}
};

struct CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_StaticFields
{
public:
	// UnityEngine.Vector3 Cinemachine.CameraState::kNoPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___kNoPoint_3;

public:
	inline static int32_t get_offset_of_kNoPoint_3() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_StaticFields, ___kNoPoint_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_kNoPoint_3() const { return ___kNoPoint_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_kNoPoint_3() { return &___kNoPoint_3; }
	inline void set_kNoPoint_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___kNoPoint_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshaled_pinvoke
{
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshaled_pinvoke ___U3CLensU3Ek__BackingField_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3COrientationCorrectionU3Ek__BackingField_9;
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom0_11;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom1_12;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom2_13;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom3_14;
	List_1_t25C0DD5BAEE8988DC0A767964E16569E3A4880FD * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshaled_com
{
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshaled_com ___U3CLensU3Ek__BackingField_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3COrientationCorrectionU3Ek__BackingField_9;
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom0_11;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom1_12;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom2_13;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom3_14;
	List_1_t25C0DD5BAEE8988DC0A767964E16569E3A4880FD * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

// Cinemachine.CinemachineBlendDefinition
struct  CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04 
{
public:
	// Cinemachine.CinemachineBlendDefinition_Style Cinemachine.CinemachineBlendDefinition::m_Style
	int32_t ___m_Style_0;
	// System.Single Cinemachine.CinemachineBlendDefinition::m_Time
	float ___m_Time_1;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineBlendDefinition::m_CustomCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___m_CustomCurve_2;

public:
	inline static int32_t get_offset_of_m_Style_0() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04, ___m_Style_0)); }
	inline int32_t get_m_Style_0() const { return ___m_Style_0; }
	inline int32_t* get_address_of_m_Style_0() { return &___m_Style_0; }
	inline void set_m_Style_0(int32_t value)
	{
		___m_Style_0 = value;
	}

	inline static int32_t get_offset_of_m_Time_1() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04, ___m_Time_1)); }
	inline float get_m_Time_1() const { return ___m_Time_1; }
	inline float* get_address_of_m_Time_1() { return &___m_Time_1; }
	inline void set_m_Time_1(float value)
	{
		___m_Time_1 = value;
	}

	inline static int32_t get_offset_of_m_CustomCurve_2() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04, ___m_CustomCurve_2)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_m_CustomCurve_2() const { return ___m_CustomCurve_2; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_m_CustomCurve_2() { return &___m_CustomCurve_2; }
	inline void set_m_CustomCurve_2(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___m_CustomCurve_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomCurve_2), (void*)value);
	}
};

struct CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04_StaticFields
{
public:
	// UnityEngine.AnimationCurve[] Cinemachine.CinemachineBlendDefinition::sStandardCurves
	AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* ___sStandardCurves_3;

public:
	inline static int32_t get_offset_of_sStandardCurves_3() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04_StaticFields, ___sStandardCurves_3)); }
	inline AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* get_sStandardCurves_3() const { return ___sStandardCurves_3; }
	inline AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1** get_address_of_sStandardCurves_3() { return &___sStandardCurves_3; }
	inline void set_sStandardCurves_3(AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* value)
	{
		___sStandardCurves_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sStandardCurves_3), (void*)value);
	}
};


// Cinemachine.CinemachineCore
struct  CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain> Cinemachine.CinemachineCore::mActiveBrains
	List_1_tB7BA18EE5488A4BE5CB95E9EAC7819798664BA2D * ___mActiveBrains_7;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase> Cinemachine.CinemachineCore::mActiveCameras
	List_1_tE8AAF747F943B4B38D436DE3BE689D0EEB31553D * ___mActiveCameras_8;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>> Cinemachine.CinemachineCore::mAllCameras
	List_1_tE6BA843A3B3022980B945784B5A55D6FBEA45363 * ___mAllCameras_9;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineCore::mRoundRobinVcamLastFrame
	CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___mRoundRobinVcamLastFrame_10;
	// Cinemachine.CinemachineCore_UpdateFilter Cinemachine.CinemachineCore::<CurrentUpdateFilter>k__BackingField
	int32_t ___U3CCurrentUpdateFilterU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_mActiveBrains_7() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mActiveBrains_7)); }
	inline List_1_tB7BA18EE5488A4BE5CB95E9EAC7819798664BA2D * get_mActiveBrains_7() const { return ___mActiveBrains_7; }
	inline List_1_tB7BA18EE5488A4BE5CB95E9EAC7819798664BA2D ** get_address_of_mActiveBrains_7() { return &___mActiveBrains_7; }
	inline void set_mActiveBrains_7(List_1_tB7BA18EE5488A4BE5CB95E9EAC7819798664BA2D * value)
	{
		___mActiveBrains_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveBrains_7), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveCameras_8() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mActiveCameras_8)); }
	inline List_1_tE8AAF747F943B4B38D436DE3BE689D0EEB31553D * get_mActiveCameras_8() const { return ___mActiveCameras_8; }
	inline List_1_tE8AAF747F943B4B38D436DE3BE689D0EEB31553D ** get_address_of_mActiveCameras_8() { return &___mActiveCameras_8; }
	inline void set_mActiveCameras_8(List_1_tE8AAF747F943B4B38D436DE3BE689D0EEB31553D * value)
	{
		___mActiveCameras_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveCameras_8), (void*)value);
	}

	inline static int32_t get_offset_of_mAllCameras_9() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mAllCameras_9)); }
	inline List_1_tE6BA843A3B3022980B945784B5A55D6FBEA45363 * get_mAllCameras_9() const { return ___mAllCameras_9; }
	inline List_1_tE6BA843A3B3022980B945784B5A55D6FBEA45363 ** get_address_of_mAllCameras_9() { return &___mAllCameras_9; }
	inline void set_mAllCameras_9(List_1_tE6BA843A3B3022980B945784B5A55D6FBEA45363 * value)
	{
		___mAllCameras_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAllCameras_9), (void*)value);
	}

	inline static int32_t get_offset_of_mRoundRobinVcamLastFrame_10() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mRoundRobinVcamLastFrame_10)); }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * get_mRoundRobinVcamLastFrame_10() const { return ___mRoundRobinVcamLastFrame_10; }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD ** get_address_of_mRoundRobinVcamLastFrame_10() { return &___mRoundRobinVcamLastFrame_10; }
	inline void set_mRoundRobinVcamLastFrame_10(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * value)
	{
		___mRoundRobinVcamLastFrame_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRoundRobinVcamLastFrame_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentUpdateFilterU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___U3CCurrentUpdateFilterU3Ek__BackingField_14)); }
	inline int32_t get_U3CCurrentUpdateFilterU3Ek__BackingField_14() const { return ___U3CCurrentUpdateFilterU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CCurrentUpdateFilterU3Ek__BackingField_14() { return &___U3CCurrentUpdateFilterU3Ek__BackingField_14; }
	inline void set_U3CCurrentUpdateFilterU3Ek__BackingField_14(int32_t value)
	{
		___U3CCurrentUpdateFilterU3Ek__BackingField_14 = value;
	}
};

struct CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields
{
public:
	// System.Int32 Cinemachine.CinemachineCore::kStreamingVersion
	int32_t ___kStreamingVersion_0;
	// System.String Cinemachine.CinemachineCore::kVersionString
	String_t* ___kVersionString_1;
	// Cinemachine.CinemachineCore Cinemachine.CinemachineCore::sInstance
	CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C * ___sInstance_2;
	// System.Boolean Cinemachine.CinemachineCore::sShowHiddenObjects
	bool ___sShowHiddenObjects_3;
	// Cinemachine.CinemachineCore_AxisInputDelegate Cinemachine.CinemachineCore::GetInputAxis
	AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * ___GetInputAxis_4;
	// Cinemachine.CinemachineCore_GetBlendOverrideDelegate Cinemachine.CinemachineCore::GetBlendOverride
	GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8 * ___GetBlendOverride_5;
	// Cinemachine.CinemachineBrain_BrainEvent Cinemachine.CinemachineCore::CameraUpdatedEvent
	BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * ___CameraUpdatedEvent_6;
	// System.Single Cinemachine.CinemachineCore::mLastUpdateTime
	float ___mLastUpdateTime_11;
	// System.Int32 Cinemachine.CinemachineCore::<FixedFrameCount>k__BackingField
	int32_t ___U3CFixedFrameCountU3Ek__BackingField_12;
	// System.Collections.Generic.Dictionary`2<Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore_UpdateStatus> Cinemachine.CinemachineCore::mUpdateStatus
	Dictionary_2_tF280F53503CE1E1FF881FF29B2E1908DA7602DEA * ___mUpdateStatus_13;

public:
	inline static int32_t get_offset_of_kStreamingVersion_0() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___kStreamingVersion_0)); }
	inline int32_t get_kStreamingVersion_0() const { return ___kStreamingVersion_0; }
	inline int32_t* get_address_of_kStreamingVersion_0() { return &___kStreamingVersion_0; }
	inline void set_kStreamingVersion_0(int32_t value)
	{
		___kStreamingVersion_0 = value;
	}

	inline static int32_t get_offset_of_kVersionString_1() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___kVersionString_1)); }
	inline String_t* get_kVersionString_1() const { return ___kVersionString_1; }
	inline String_t** get_address_of_kVersionString_1() { return &___kVersionString_1; }
	inline void set_kVersionString_1(String_t* value)
	{
		___kVersionString_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kVersionString_1), (void*)value);
	}

	inline static int32_t get_offset_of_sInstance_2() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___sInstance_2)); }
	inline CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C * get_sInstance_2() const { return ___sInstance_2; }
	inline CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C ** get_address_of_sInstance_2() { return &___sInstance_2; }
	inline void set_sInstance_2(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C * value)
	{
		___sInstance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_2), (void*)value);
	}

	inline static int32_t get_offset_of_sShowHiddenObjects_3() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___sShowHiddenObjects_3)); }
	inline bool get_sShowHiddenObjects_3() const { return ___sShowHiddenObjects_3; }
	inline bool* get_address_of_sShowHiddenObjects_3() { return &___sShowHiddenObjects_3; }
	inline void set_sShowHiddenObjects_3(bool value)
	{
		___sShowHiddenObjects_3 = value;
	}

	inline static int32_t get_offset_of_GetInputAxis_4() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___GetInputAxis_4)); }
	inline AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * get_GetInputAxis_4() const { return ___GetInputAxis_4; }
	inline AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE ** get_address_of_GetInputAxis_4() { return &___GetInputAxis_4; }
	inline void set_GetInputAxis_4(AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * value)
	{
		___GetInputAxis_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetInputAxis_4), (void*)value);
	}

	inline static int32_t get_offset_of_GetBlendOverride_5() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___GetBlendOverride_5)); }
	inline GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8 * get_GetBlendOverride_5() const { return ___GetBlendOverride_5; }
	inline GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8 ** get_address_of_GetBlendOverride_5() { return &___GetBlendOverride_5; }
	inline void set_GetBlendOverride_5(GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8 * value)
	{
		___GetBlendOverride_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetBlendOverride_5), (void*)value);
	}

	inline static int32_t get_offset_of_CameraUpdatedEvent_6() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___CameraUpdatedEvent_6)); }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * get_CameraUpdatedEvent_6() const { return ___CameraUpdatedEvent_6; }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 ** get_address_of_CameraUpdatedEvent_6() { return &___CameraUpdatedEvent_6; }
	inline void set_CameraUpdatedEvent_6(BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * value)
	{
		___CameraUpdatedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraUpdatedEvent_6), (void*)value);
	}

	inline static int32_t get_offset_of_mLastUpdateTime_11() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___mLastUpdateTime_11)); }
	inline float get_mLastUpdateTime_11() const { return ___mLastUpdateTime_11; }
	inline float* get_address_of_mLastUpdateTime_11() { return &___mLastUpdateTime_11; }
	inline void set_mLastUpdateTime_11(float value)
	{
		___mLastUpdateTime_11 = value;
	}

	inline static int32_t get_offset_of_U3CFixedFrameCountU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___U3CFixedFrameCountU3Ek__BackingField_12)); }
	inline int32_t get_U3CFixedFrameCountU3Ek__BackingField_12() const { return ___U3CFixedFrameCountU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CFixedFrameCountU3Ek__BackingField_12() { return &___U3CFixedFrameCountU3Ek__BackingField_12; }
	inline void set_U3CFixedFrameCountU3Ek__BackingField_12(int32_t value)
	{
		___U3CFixedFrameCountU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_mUpdateStatus_13() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___mUpdateStatus_13)); }
	inline Dictionary_2_tF280F53503CE1E1FF881FF29B2E1908DA7602DEA * get_mUpdateStatus_13() const { return ___mUpdateStatus_13; }
	inline Dictionary_2_tF280F53503CE1E1FF881FF29B2E1908DA7602DEA ** get_address_of_mUpdateStatus_13() { return &___mUpdateStatus_13; }
	inline void set_mUpdateStatus_13(Dictionary_2_tF280F53503CE1E1FF881FF29B2E1908DA7602DEA * value)
	{
		___mUpdateStatus_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUpdateStatus_13), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ExposedReference`1<Cinemachine.CinemachineVirtualCameraBase>
struct  ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F 
{
public:
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___defaultValue_1;

public:
	inline static int32_t get_offset_of_exposedName_0() { return static_cast<int32_t>(offsetof(ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F, ___exposedName_0)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_exposedName_0() const { return ___exposedName_0; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_exposedName_0() { return &___exposedName_0; }
	inline void set_exposedName_0(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___exposedName_0 = value;
	}

	inline static int32_t get_offset_of_defaultValue_1() { return static_cast<int32_t>(offsetof(ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F, ___defaultValue_1)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_defaultValue_1() const { return ___defaultValue_1; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_defaultValue_1() { return &___defaultValue_1; }
	inline void set_defaultValue_1(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___defaultValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultValue_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ExposedReference`1
#ifndef ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke_define
#define ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke_define
struct ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke ___defaultValue_1;
};
#endif
// Native definition for COM marshalling of UnityEngine.ExposedReference`1
#ifndef ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com_define
#define ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com_define
struct ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com* ___defaultValue_1;
};
#endif

// UnityEngine.ExposedReference`1<System.Object>
struct  ExposedReference_1_t5F7BAA4304EB817E7C262A3480A6BA619FD4F096 
{
public:
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___defaultValue_1;

public:
	inline static int32_t get_offset_of_exposedName_0() { return static_cast<int32_t>(offsetof(ExposedReference_1_t5F7BAA4304EB817E7C262A3480A6BA619FD4F096, ___exposedName_0)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_exposedName_0() const { return ___exposedName_0; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_exposedName_0() { return &___exposedName_0; }
	inline void set_exposedName_0(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___exposedName_0 = value;
	}

	inline static int32_t get_offset_of_defaultValue_1() { return static_cast<int32_t>(offsetof(ExposedReference_1_t5F7BAA4304EB817E7C262A3480A6BA619FD4F096, ___defaultValue_1)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_defaultValue_1() const { return ___defaultValue_1; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_defaultValue_1() { return &___defaultValue_1; }
	inline void set_defaultValue_1(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___defaultValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultValue_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ExposedReference`1
#ifndef ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke_define
#define ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke_define
struct ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke ___defaultValue_1;
};
#endif
// Native definition for COM marshalling of UnityEngine.ExposedReference`1
#ifndef ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com_define
#define ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com_define
struct ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com* ___defaultValue_1;
};
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Playables.Playable
struct  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345, ___m_Handle_0)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<CinemachineMixer>
struct  ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>
struct  ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<System.Object>
struct  ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.Timeline.TimelineClip
struct  TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip::m_Version
	int32_t ___m_Version_1;
	// System.Double UnityEngine.Timeline.TimelineClip::m_Start
	double ___m_Start_9;
	// System.Double UnityEngine.Timeline.TimelineClip::m_ClipIn
	double ___m_ClipIn_10;
	// UnityEngine.Object UnityEngine.Timeline.TimelineClip::m_Asset
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_Asset_11;
	// System.Double UnityEngine.Timeline.TimelineClip::m_Duration
	double ___m_Duration_12;
	// System.Double UnityEngine.Timeline.TimelineClip::m_TimeScale
	double ___m_TimeScale_13;
	// UnityEngine.Timeline.TrackAsset UnityEngine.Timeline.TimelineClip::m_ParentTrack
	TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * ___m_ParentTrack_14;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseInDuration
	double ___m_EaseInDuration_15;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseOutDuration
	double ___m_EaseOutDuration_16;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendInDuration
	double ___m_BlendInDuration_17;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendOutDuration
	double ___m_BlendOutDuration_18;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixInCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___m_MixInCurve_19;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixOutCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___m_MixOutCurve_20;
	// UnityEngine.Timeline.TimelineClip_BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendInCurveMode
	int32_t ___m_BlendInCurveMode_21;
	// UnityEngine.Timeline.TimelineClip_BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendOutCurveMode
	int32_t ___m_BlendOutCurveMode_22;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Timeline.TimelineClip::m_ExposedParameterNames
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___m_ExposedParameterNames_23;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TimelineClip::m_AnimationCurves
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___m_AnimationCurves_24;
	// System.Boolean UnityEngine.Timeline.TimelineClip::m_Recordable
	bool ___m_Recordable_25;
	// UnityEngine.Timeline.TimelineClip_ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PostExtrapolationMode
	int32_t ___m_PostExtrapolationMode_26;
	// UnityEngine.Timeline.TimelineClip_ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PreExtrapolationMode
	int32_t ___m_PreExtrapolationMode_27;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PostExtrapolationTime
	double ___m_PostExtrapolationTime_28;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PreExtrapolationTime
	double ___m_PreExtrapolationTime_29;
	// System.String UnityEngine.Timeline.TimelineClip::m_DisplayName
	String_t* ___m_DisplayName_30;
	// System.Int32 UnityEngine.Timeline.TimelineClip::<dirtyHash>k__BackingField
	int32_t ___U3CdirtyHashU3Ek__BackingField_31;

public:
	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}

	inline static int32_t get_offset_of_m_Start_9() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_Start_9)); }
	inline double get_m_Start_9() const { return ___m_Start_9; }
	inline double* get_address_of_m_Start_9() { return &___m_Start_9; }
	inline void set_m_Start_9(double value)
	{
		___m_Start_9 = value;
	}

	inline static int32_t get_offset_of_m_ClipIn_10() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_ClipIn_10)); }
	inline double get_m_ClipIn_10() const { return ___m_ClipIn_10; }
	inline double* get_address_of_m_ClipIn_10() { return &___m_ClipIn_10; }
	inline void set_m_ClipIn_10(double value)
	{
		___m_ClipIn_10 = value;
	}

	inline static int32_t get_offset_of_m_Asset_11() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_Asset_11)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_Asset_11() const { return ___m_Asset_11; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_Asset_11() { return &___m_Asset_11; }
	inline void set_m_Asset_11(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_Asset_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Duration_12() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_Duration_12)); }
	inline double get_m_Duration_12() const { return ___m_Duration_12; }
	inline double* get_address_of_m_Duration_12() { return &___m_Duration_12; }
	inline void set_m_Duration_12(double value)
	{
		___m_Duration_12 = value;
	}

	inline static int32_t get_offset_of_m_TimeScale_13() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_TimeScale_13)); }
	inline double get_m_TimeScale_13() const { return ___m_TimeScale_13; }
	inline double* get_address_of_m_TimeScale_13() { return &___m_TimeScale_13; }
	inline void set_m_TimeScale_13(double value)
	{
		___m_TimeScale_13 = value;
	}

	inline static int32_t get_offset_of_m_ParentTrack_14() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_ParentTrack_14)); }
	inline TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * get_m_ParentTrack_14() const { return ___m_ParentTrack_14; }
	inline TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D ** get_address_of_m_ParentTrack_14() { return &___m_ParentTrack_14; }
	inline void set_m_ParentTrack_14(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * value)
	{
		___m_ParentTrack_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentTrack_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_EaseInDuration_15() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_EaseInDuration_15)); }
	inline double get_m_EaseInDuration_15() const { return ___m_EaseInDuration_15; }
	inline double* get_address_of_m_EaseInDuration_15() { return &___m_EaseInDuration_15; }
	inline void set_m_EaseInDuration_15(double value)
	{
		___m_EaseInDuration_15 = value;
	}

	inline static int32_t get_offset_of_m_EaseOutDuration_16() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_EaseOutDuration_16)); }
	inline double get_m_EaseOutDuration_16() const { return ___m_EaseOutDuration_16; }
	inline double* get_address_of_m_EaseOutDuration_16() { return &___m_EaseOutDuration_16; }
	inline void set_m_EaseOutDuration_16(double value)
	{
		___m_EaseOutDuration_16 = value;
	}

	inline static int32_t get_offset_of_m_BlendInDuration_17() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_BlendInDuration_17)); }
	inline double get_m_BlendInDuration_17() const { return ___m_BlendInDuration_17; }
	inline double* get_address_of_m_BlendInDuration_17() { return &___m_BlendInDuration_17; }
	inline void set_m_BlendInDuration_17(double value)
	{
		___m_BlendInDuration_17 = value;
	}

	inline static int32_t get_offset_of_m_BlendOutDuration_18() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_BlendOutDuration_18)); }
	inline double get_m_BlendOutDuration_18() const { return ___m_BlendOutDuration_18; }
	inline double* get_address_of_m_BlendOutDuration_18() { return &___m_BlendOutDuration_18; }
	inline void set_m_BlendOutDuration_18(double value)
	{
		___m_BlendOutDuration_18 = value;
	}

	inline static int32_t get_offset_of_m_MixInCurve_19() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_MixInCurve_19)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_m_MixInCurve_19() const { return ___m_MixInCurve_19; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_m_MixInCurve_19() { return &___m_MixInCurve_19; }
	inline void set_m_MixInCurve_19(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___m_MixInCurve_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MixInCurve_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_MixOutCurve_20() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_MixOutCurve_20)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_m_MixOutCurve_20() const { return ___m_MixOutCurve_20; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_m_MixOutCurve_20() { return &___m_MixOutCurve_20; }
	inline void set_m_MixOutCurve_20(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___m_MixOutCurve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MixOutCurve_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlendInCurveMode_21() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_BlendInCurveMode_21)); }
	inline int32_t get_m_BlendInCurveMode_21() const { return ___m_BlendInCurveMode_21; }
	inline int32_t* get_address_of_m_BlendInCurveMode_21() { return &___m_BlendInCurveMode_21; }
	inline void set_m_BlendInCurveMode_21(int32_t value)
	{
		___m_BlendInCurveMode_21 = value;
	}

	inline static int32_t get_offset_of_m_BlendOutCurveMode_22() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_BlendOutCurveMode_22)); }
	inline int32_t get_m_BlendOutCurveMode_22() const { return ___m_BlendOutCurveMode_22; }
	inline int32_t* get_address_of_m_BlendOutCurveMode_22() { return &___m_BlendOutCurveMode_22; }
	inline void set_m_BlendOutCurveMode_22(int32_t value)
	{
		___m_BlendOutCurveMode_22 = value;
	}

	inline static int32_t get_offset_of_m_ExposedParameterNames_23() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_ExposedParameterNames_23)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_m_ExposedParameterNames_23() const { return ___m_ExposedParameterNames_23; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_m_ExposedParameterNames_23() { return &___m_ExposedParameterNames_23; }
	inline void set_m_ExposedParameterNames_23(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___m_ExposedParameterNames_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExposedParameterNames_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_AnimationCurves_24() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_AnimationCurves_24)); }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * get_m_AnimationCurves_24() const { return ___m_AnimationCurves_24; }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** get_address_of_m_AnimationCurves_24() { return &___m_AnimationCurves_24; }
	inline void set_m_AnimationCurves_24(AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		___m_AnimationCurves_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationCurves_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Recordable_25() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_Recordable_25)); }
	inline bool get_m_Recordable_25() const { return ___m_Recordable_25; }
	inline bool* get_address_of_m_Recordable_25() { return &___m_Recordable_25; }
	inline void set_m_Recordable_25(bool value)
	{
		___m_Recordable_25 = value;
	}

	inline static int32_t get_offset_of_m_PostExtrapolationMode_26() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_PostExtrapolationMode_26)); }
	inline int32_t get_m_PostExtrapolationMode_26() const { return ___m_PostExtrapolationMode_26; }
	inline int32_t* get_address_of_m_PostExtrapolationMode_26() { return &___m_PostExtrapolationMode_26; }
	inline void set_m_PostExtrapolationMode_26(int32_t value)
	{
		___m_PostExtrapolationMode_26 = value;
	}

	inline static int32_t get_offset_of_m_PreExtrapolationMode_27() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_PreExtrapolationMode_27)); }
	inline int32_t get_m_PreExtrapolationMode_27() const { return ___m_PreExtrapolationMode_27; }
	inline int32_t* get_address_of_m_PreExtrapolationMode_27() { return &___m_PreExtrapolationMode_27; }
	inline void set_m_PreExtrapolationMode_27(int32_t value)
	{
		___m_PreExtrapolationMode_27 = value;
	}

	inline static int32_t get_offset_of_m_PostExtrapolationTime_28() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_PostExtrapolationTime_28)); }
	inline double get_m_PostExtrapolationTime_28() const { return ___m_PostExtrapolationTime_28; }
	inline double* get_address_of_m_PostExtrapolationTime_28() { return &___m_PostExtrapolationTime_28; }
	inline void set_m_PostExtrapolationTime_28(double value)
	{
		___m_PostExtrapolationTime_28 = value;
	}

	inline static int32_t get_offset_of_m_PreExtrapolationTime_29() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_PreExtrapolationTime_29)); }
	inline double get_m_PreExtrapolationTime_29() const { return ___m_PreExtrapolationTime_29; }
	inline double* get_address_of_m_PreExtrapolationTime_29() { return &___m_PreExtrapolationTime_29; }
	inline void set_m_PreExtrapolationTime_29(double value)
	{
		___m_PreExtrapolationTime_29 = value;
	}

	inline static int32_t get_offset_of_m_DisplayName_30() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___m_DisplayName_30)); }
	inline String_t* get_m_DisplayName_30() const { return ___m_DisplayName_30; }
	inline String_t** get_address_of_m_DisplayName_30() { return &___m_DisplayName_30; }
	inline void set_m_DisplayName_30(String_t* value)
	{
		___m_DisplayName_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdirtyHashU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB, ___U3CdirtyHashU3Ek__BackingField_31)); }
	inline int32_t get_U3CdirtyHashU3Ek__BackingField_31() const { return ___U3CdirtyHashU3Ek__BackingField_31; }
	inline int32_t* get_address_of_U3CdirtyHashU3Ek__BackingField_31() { return &___U3CdirtyHashU3Ek__BackingField_31; }
	inline void set_U3CdirtyHashU3Ek__BackingField_31(int32_t value)
	{
		___U3CdirtyHashU3Ek__BackingField_31 = value;
	}
};

struct TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields
{
public:
	// UnityEngine.Timeline.ClipCaps UnityEngine.Timeline.TimelineClip::kDefaultClipCaps
	int32_t ___kDefaultClipCaps_2;
	// System.Single UnityEngine.Timeline.TimelineClip::kDefaultClipDurationInSeconds
	float ___kDefaultClipDurationInSeconds_3;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMin
	double ___kTimeScaleMin_4;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMax
	double ___kTimeScaleMax_5;
	// System.String UnityEngine.Timeline.TimelineClip::kDefaultCurvesName
	String_t* ___kDefaultCurvesName_6;
	// System.Double UnityEngine.Timeline.TimelineClip::kMinDuration
	double ___kMinDuration_7;
	// System.Double UnityEngine.Timeline.TimelineClip::kMaxTimeValue
	double ___kMaxTimeValue_8;

public:
	inline static int32_t get_offset_of_kDefaultClipCaps_2() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kDefaultClipCaps_2)); }
	inline int32_t get_kDefaultClipCaps_2() const { return ___kDefaultClipCaps_2; }
	inline int32_t* get_address_of_kDefaultClipCaps_2() { return &___kDefaultClipCaps_2; }
	inline void set_kDefaultClipCaps_2(int32_t value)
	{
		___kDefaultClipCaps_2 = value;
	}

	inline static int32_t get_offset_of_kDefaultClipDurationInSeconds_3() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kDefaultClipDurationInSeconds_3)); }
	inline float get_kDefaultClipDurationInSeconds_3() const { return ___kDefaultClipDurationInSeconds_3; }
	inline float* get_address_of_kDefaultClipDurationInSeconds_3() { return &___kDefaultClipDurationInSeconds_3; }
	inline void set_kDefaultClipDurationInSeconds_3(float value)
	{
		___kDefaultClipDurationInSeconds_3 = value;
	}

	inline static int32_t get_offset_of_kTimeScaleMin_4() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kTimeScaleMin_4)); }
	inline double get_kTimeScaleMin_4() const { return ___kTimeScaleMin_4; }
	inline double* get_address_of_kTimeScaleMin_4() { return &___kTimeScaleMin_4; }
	inline void set_kTimeScaleMin_4(double value)
	{
		___kTimeScaleMin_4 = value;
	}

	inline static int32_t get_offset_of_kTimeScaleMax_5() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kTimeScaleMax_5)); }
	inline double get_kTimeScaleMax_5() const { return ___kTimeScaleMax_5; }
	inline double* get_address_of_kTimeScaleMax_5() { return &___kTimeScaleMax_5; }
	inline void set_kTimeScaleMax_5(double value)
	{
		___kTimeScaleMax_5 = value;
	}

	inline static int32_t get_offset_of_kDefaultCurvesName_6() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kDefaultCurvesName_6)); }
	inline String_t* get_kDefaultCurvesName_6() const { return ___kDefaultCurvesName_6; }
	inline String_t** get_address_of_kDefaultCurvesName_6() { return &___kDefaultCurvesName_6; }
	inline void set_kDefaultCurvesName_6(String_t* value)
	{
		___kDefaultCurvesName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kDefaultCurvesName_6), (void*)value);
	}

	inline static int32_t get_offset_of_kMinDuration_7() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kMinDuration_7)); }
	inline double get_kMinDuration_7() const { return ___kMinDuration_7; }
	inline double* get_address_of_kMinDuration_7() { return &___kMinDuration_7; }
	inline void set_kMinDuration_7(double value)
	{
		___kMinDuration_7 = value;
	}

	inline static int32_t get_offset_of_kMaxTimeValue_8() { return static_cast<int32_t>(offsetof(TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB_StaticFields, ___kMaxTimeValue_8)); }
	inline double get_kMaxTimeValue_8() const { return ___kMaxTimeValue_8; }
	inline double* get_address_of_kMaxTimeValue_8() { return &___kMaxTimeValue_8; }
	inline void set_kMaxTimeValue_8(double value)
	{
		___kMaxTimeValue_8 = value;
	}
};


// UnityEngine.Touch
struct  Touch_t806752C775BA713A91B6588A07CA98417CABC003 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Position_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_RawPosition_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_PositionDelta_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// Cinemachine.CinemachineCore_AxisInputDelegate
struct  AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Playables.FrameData
struct  FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E 
{
public:
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Double UnityEngine.Playables.FrameData::m_EffectiveParentDelay
	double ___m_EffectiveParentDelay_4;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveParentSpeed
	float ___m_EffectiveParentSpeed_5;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_6;
	// UnityEngine.Playables.FrameData_Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_7;
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.FrameData::m_Output
	PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  ___m_Output_8;

public:
	inline static int32_t get_offset_of_m_FrameID_0() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_FrameID_0)); }
	inline uint64_t get_m_FrameID_0() const { return ___m_FrameID_0; }
	inline uint64_t* get_address_of_m_FrameID_0() { return &___m_FrameID_0; }
	inline void set_m_FrameID_0(uint64_t value)
	{
		___m_FrameID_0 = value;
	}

	inline static int32_t get_offset_of_m_DeltaTime_1() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_DeltaTime_1)); }
	inline double get_m_DeltaTime_1() const { return ___m_DeltaTime_1; }
	inline double* get_address_of_m_DeltaTime_1() { return &___m_DeltaTime_1; }
	inline void set_m_DeltaTime_1(double value)
	{
		___m_DeltaTime_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight_2() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_Weight_2)); }
	inline float get_m_Weight_2() const { return ___m_Weight_2; }
	inline float* get_address_of_m_Weight_2() { return &___m_Weight_2; }
	inline void set_m_Weight_2(float value)
	{
		___m_Weight_2 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveWeight_3() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_EffectiveWeight_3)); }
	inline float get_m_EffectiveWeight_3() const { return ___m_EffectiveWeight_3; }
	inline float* get_address_of_m_EffectiveWeight_3() { return &___m_EffectiveWeight_3; }
	inline void set_m_EffectiveWeight_3(float value)
	{
		___m_EffectiveWeight_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveParentDelay_4() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_EffectiveParentDelay_4)); }
	inline double get_m_EffectiveParentDelay_4() const { return ___m_EffectiveParentDelay_4; }
	inline double* get_address_of_m_EffectiveParentDelay_4() { return &___m_EffectiveParentDelay_4; }
	inline void set_m_EffectiveParentDelay_4(double value)
	{
		___m_EffectiveParentDelay_4 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveParentSpeed_5() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_EffectiveParentSpeed_5)); }
	inline float get_m_EffectiveParentSpeed_5() const { return ___m_EffectiveParentSpeed_5; }
	inline float* get_address_of_m_EffectiveParentSpeed_5() { return &___m_EffectiveParentSpeed_5; }
	inline void set_m_EffectiveParentSpeed_5(float value)
	{
		___m_EffectiveParentSpeed_5 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveSpeed_6() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_EffectiveSpeed_6)); }
	inline float get_m_EffectiveSpeed_6() const { return ___m_EffectiveSpeed_6; }
	inline float* get_address_of_m_EffectiveSpeed_6() { return &___m_EffectiveSpeed_6; }
	inline void set_m_EffectiveSpeed_6(float value)
	{
		___m_EffectiveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}

	inline static int32_t get_offset_of_m_Output_8() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_Output_8)); }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  get_m_Output_8() const { return ___m_Output_8; }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 * get_address_of_m_Output_8() { return &___m_Output_8; }
	inline void set_m_Output_8(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  value)
	{
		___m_Output_8 = value;
	}
};


// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// CinemachineShot
struct  CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5  : public PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD
{
public:
	// UnityEngine.ExposedReference`1<Cinemachine.CinemachineVirtualCameraBase> CinemachineShot::VirtualCamera
	ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F  ___VirtualCamera_4;

public:
	inline static int32_t get_offset_of_VirtualCamera_4() { return static_cast<int32_t>(offsetof(CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5, ___VirtualCamera_4)); }
	inline ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F  get_VirtualCamera_4() const { return ___VirtualCamera_4; }
	inline ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F * get_address_of_VirtualCamera_4() { return &___VirtualCamera_4; }
	inline void set_VirtualCamera_4(ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F  value)
	{
		___VirtualCamera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VirtualCamera_4))->___defaultValue_1), (void*)NULL);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Playables.PlayableDirector
struct  PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::played
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___played_4;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::paused
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___paused_5;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::stopped
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___stopped_6;

public:
	inline static int32_t get_offset_of_played_4() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___played_4)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_played_4() const { return ___played_4; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_played_4() { return &___played_4; }
	inline void set_played_4(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___played_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___played_4), (void*)value);
	}

	inline static int32_t get_offset_of_paused_5() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___paused_5)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_paused_5() const { return ___paused_5; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_paused_5() { return &___paused_5; }
	inline void set_paused_5(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___paused_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paused_5), (void*)value);
	}

	inline static int32_t get_offset_of_stopped_6() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___stopped_6)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_stopped_6() const { return ___stopped_6; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_stopped_6() { return &___stopped_6; }
	inline void set_stopped_6(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___stopped_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopped_6), (void*)value);
	}
};


// UnityEngine.Timeline.TrackAsset
struct  TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D  : public PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD
{
public:
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_Version
	int32_t ___m_Version_5;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_AnimClip
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___m_AnimClip_6;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Locked
	bool ___m_Locked_10;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Muted
	bool ___m_Muted_11;
	// System.String UnityEngine.Timeline.TrackAsset::m_CustomPlayableFullTypename
	String_t* ___m_CustomPlayableFullTypename_12;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_Curves
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___m_Curves_13;
	// UnityEngine.Playables.PlayableAsset UnityEngine.Timeline.TrackAsset::m_Parent
	PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * ___m_Parent_14;
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.TrackAsset::m_Children
	List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * ___m_Children_15;
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_ItemsHash
	int32_t ___m_ItemsHash_16;
	// UnityEngine.Timeline.TimelineClip[] UnityEngine.Timeline.TrackAsset::m_ClipsCache
	TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* ___m_ClipsCache_17;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_Start
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___m_Start_18;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_End
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___m_End_19;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_CacheSorted
	bool ___m_CacheSorted_20;
	// System.Nullable`1<System.Boolean> UnityEngine.Timeline.TrackAsset::m_SupportsNotifications
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___m_SupportsNotifications_21;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset::m_ChildTrackCache
	RuntimeObject* ___m_ChildTrackCache_23;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset::m_Clips
	List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 * ___m_Clips_25;
	// UnityEngine.Timeline.MarkerList UnityEngine.Timeline.TrackAsset::m_Markers
	MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  ___m_Markers_26;

public:
	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Version_5)); }
	inline int32_t get_m_Version_5() const { return ___m_Version_5; }
	inline int32_t* get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(int32_t value)
	{
		___m_Version_5 = value;
	}

	inline static int32_t get_offset_of_m_AnimClip_6() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_AnimClip_6)); }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * get_m_AnimClip_6() const { return ___m_AnimClip_6; }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** get_address_of_m_AnimClip_6() { return &___m_AnimClip_6; }
	inline void set_m_AnimClip_6(AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		___m_AnimClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimClip_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Locked_10() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Locked_10)); }
	inline bool get_m_Locked_10() const { return ___m_Locked_10; }
	inline bool* get_address_of_m_Locked_10() { return &___m_Locked_10; }
	inline void set_m_Locked_10(bool value)
	{
		___m_Locked_10 = value;
	}

	inline static int32_t get_offset_of_m_Muted_11() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Muted_11)); }
	inline bool get_m_Muted_11() const { return ___m_Muted_11; }
	inline bool* get_address_of_m_Muted_11() { return &___m_Muted_11; }
	inline void set_m_Muted_11(bool value)
	{
		___m_Muted_11 = value;
	}

	inline static int32_t get_offset_of_m_CustomPlayableFullTypename_12() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_CustomPlayableFullTypename_12)); }
	inline String_t* get_m_CustomPlayableFullTypename_12() const { return ___m_CustomPlayableFullTypename_12; }
	inline String_t** get_address_of_m_CustomPlayableFullTypename_12() { return &___m_CustomPlayableFullTypename_12; }
	inline void set_m_CustomPlayableFullTypename_12(String_t* value)
	{
		___m_CustomPlayableFullTypename_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomPlayableFullTypename_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Curves_13() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Curves_13)); }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * get_m_Curves_13() const { return ___m_Curves_13; }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** get_address_of_m_Curves_13() { return &___m_Curves_13; }
	inline void set_m_Curves_13(AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		___m_Curves_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Curves_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_14() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Parent_14)); }
	inline PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * get_m_Parent_14() const { return ___m_Parent_14; }
	inline PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD ** get_address_of_m_Parent_14() { return &___m_Parent_14; }
	inline void set_m_Parent_14(PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * value)
	{
		___m_Parent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_15() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Children_15)); }
	inline List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * get_m_Children_15() const { return ___m_Children_15; }
	inline List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E ** get_address_of_m_Children_15() { return &___m_Children_15; }
	inline void set_m_Children_15(List_1_tB3E0D5F5785B3C585DDAA67C07BB6CAC60ADC37E * value)
	{
		___m_Children_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemsHash_16() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ItemsHash_16)); }
	inline int32_t get_m_ItemsHash_16() const { return ___m_ItemsHash_16; }
	inline int32_t* get_address_of_m_ItemsHash_16() { return &___m_ItemsHash_16; }
	inline void set_m_ItemsHash_16(int32_t value)
	{
		___m_ItemsHash_16 = value;
	}

	inline static int32_t get_offset_of_m_ClipsCache_17() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ClipsCache_17)); }
	inline TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* get_m_ClipsCache_17() const { return ___m_ClipsCache_17; }
	inline TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E** get_address_of_m_ClipsCache_17() { return &___m_ClipsCache_17; }
	inline void set_m_ClipsCache_17(TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* value)
	{
		___m_ClipsCache_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClipsCache_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Start_18() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Start_18)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_m_Start_18() const { return ___m_Start_18; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_m_Start_18() { return &___m_Start_18; }
	inline void set_m_Start_18(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___m_Start_18 = value;
	}

	inline static int32_t get_offset_of_m_End_19() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_End_19)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_m_End_19() const { return ___m_End_19; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_m_End_19() { return &___m_End_19; }
	inline void set_m_End_19(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___m_End_19 = value;
	}

	inline static int32_t get_offset_of_m_CacheSorted_20() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_CacheSorted_20)); }
	inline bool get_m_CacheSorted_20() const { return ___m_CacheSorted_20; }
	inline bool* get_address_of_m_CacheSorted_20() { return &___m_CacheSorted_20; }
	inline void set_m_CacheSorted_20(bool value)
	{
		___m_CacheSorted_20 = value;
	}

	inline static int32_t get_offset_of_m_SupportsNotifications_21() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_SupportsNotifications_21)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_m_SupportsNotifications_21() const { return ___m_SupportsNotifications_21; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_m_SupportsNotifications_21() { return &___m_SupportsNotifications_21; }
	inline void set_m_SupportsNotifications_21(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___m_SupportsNotifications_21 = value;
	}

	inline static int32_t get_offset_of_m_ChildTrackCache_23() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ChildTrackCache_23)); }
	inline RuntimeObject* get_m_ChildTrackCache_23() const { return ___m_ChildTrackCache_23; }
	inline RuntimeObject** get_address_of_m_ChildTrackCache_23() { return &___m_ChildTrackCache_23; }
	inline void set_m_ChildTrackCache_23(RuntimeObject* value)
	{
		___m_ChildTrackCache_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildTrackCache_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_Clips_25() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Clips_25)); }
	inline List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 * get_m_Clips_25() const { return ___m_Clips_25; }
	inline List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 ** get_address_of_m_Clips_25() { return &___m_Clips_25; }
	inline void set_m_Clips_25(List_1_tF04CC6AF3DA3012DF32091AA823EE998AC64DA32 * value)
	{
		___m_Clips_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Clips_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_Markers_26() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Markers_26)); }
	inline MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  get_m_Markers_26() const { return ___m_Markers_26; }
	inline MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC * get_address_of_m_Markers_26() { return &___m_Markers_26; }
	inline void set_m_Markers_26(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  value)
	{
		___m_Markers_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_26))->___m_Objects_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_26))->___m_Cache_1), (void*)NULL);
		#endif
	}
};

struct TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields
{
public:
	// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnClipPlayableCreate
	Action_3_tF1C9CDCA1FBE7E67643B2F2806BA5A863023BF1E * ___OnClipPlayableCreate_8;
	// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnTrackAnimationPlayableCreate
	Action_3_t2E2DE3837C6F4DB65CCE0924C5991C9B77A46B3E * ___OnTrackAnimationPlayableCreate_9;
	// UnityEngine.Timeline.TrackAsset[] UnityEngine.Timeline.TrackAsset::s_EmptyCache
	TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* ___s_EmptyCache_22;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute> UnityEngine.Timeline.TrackAsset::s_TrackBindingTypeAttributeCache
	Dictionary_2_t1CEC2E74944D8E63CB5A7BFD7C9ACB03900CE763 * ___s_TrackBindingTypeAttributeCache_24;

public:
	inline static int32_t get_offset_of_OnClipPlayableCreate_8() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___OnClipPlayableCreate_8)); }
	inline Action_3_tF1C9CDCA1FBE7E67643B2F2806BA5A863023BF1E * get_OnClipPlayableCreate_8() const { return ___OnClipPlayableCreate_8; }
	inline Action_3_tF1C9CDCA1FBE7E67643B2F2806BA5A863023BF1E ** get_address_of_OnClipPlayableCreate_8() { return &___OnClipPlayableCreate_8; }
	inline void set_OnClipPlayableCreate_8(Action_3_tF1C9CDCA1FBE7E67643B2F2806BA5A863023BF1E * value)
	{
		___OnClipPlayableCreate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipPlayableCreate_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnTrackAnimationPlayableCreate_9() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___OnTrackAnimationPlayableCreate_9)); }
	inline Action_3_t2E2DE3837C6F4DB65CCE0924C5991C9B77A46B3E * get_OnTrackAnimationPlayableCreate_9() const { return ___OnTrackAnimationPlayableCreate_9; }
	inline Action_3_t2E2DE3837C6F4DB65CCE0924C5991C9B77A46B3E ** get_address_of_OnTrackAnimationPlayableCreate_9() { return &___OnTrackAnimationPlayableCreate_9; }
	inline void set_OnTrackAnimationPlayableCreate_9(Action_3_t2E2DE3837C6F4DB65CCE0924C5991C9B77A46B3E * value)
	{
		___OnTrackAnimationPlayableCreate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackAnimationPlayableCreate_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_EmptyCache_22() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___s_EmptyCache_22)); }
	inline TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* get_s_EmptyCache_22() const { return ___s_EmptyCache_22; }
	inline TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5** get_address_of_s_EmptyCache_22() { return &___s_EmptyCache_22; }
	inline void set_s_EmptyCache_22(TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* value)
	{
		___s_EmptyCache_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyCache_22), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrackBindingTypeAttributeCache_24() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___s_TrackBindingTypeAttributeCache_24)); }
	inline Dictionary_2_t1CEC2E74944D8E63CB5A7BFD7C9ACB03900CE763 * get_s_TrackBindingTypeAttributeCache_24() const { return ___s_TrackBindingTypeAttributeCache_24; }
	inline Dictionary_2_t1CEC2E74944D8E63CB5A7BFD7C9ACB03900CE763 ** get_address_of_s_TrackBindingTypeAttributeCache_24() { return &___s_TrackBindingTypeAttributeCache_24; }
	inline void set_s_TrackBindingTypeAttributeCache_24(Dictionary_2_t1CEC2E74944D8E63CB5A7BFD7C9ACB03900CE763 * value)
	{
		___s_TrackBindingTypeAttributeCache_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackBindingTypeAttributeCache_24), (void*)value);
	}
};


// Cinemachine.CinemachineBrain
struct  CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Cinemachine.CinemachineBrain::m_ShowDebugText
	bool ___m_ShowDebugText_4;
	// System.Boolean Cinemachine.CinemachineBrain::m_ShowCameraFrustum
	bool ___m_ShowCameraFrustum_5;
	// System.Boolean Cinemachine.CinemachineBrain::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_6;
	// UnityEngine.Transform Cinemachine.CinemachineBrain::m_WorldUpOverride
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_WorldUpOverride_7;
	// Cinemachine.CinemachineBrain_UpdateMethod Cinemachine.CinemachineBrain::m_UpdateMethod
	int32_t ___m_UpdateMethod_8;
	// Cinemachine.CinemachineBlendDefinition Cinemachine.CinemachineBrain::m_DefaultBlend
	CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04  ___m_DefaultBlend_9;
	// Cinemachine.CinemachineBlenderSettings Cinemachine.CinemachineBrain::m_CustomBlends
	CinemachineBlenderSettings_tCD488C84B252394D8CDD7D0DB623D991BE77F3F0 * ___m_CustomBlends_10;
	// UnityEngine.Camera Cinemachine.CinemachineBrain::m_OutputCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___m_OutputCamera_11;
	// Cinemachine.CinemachineBrain_BrainEvent Cinemachine.CinemachineBrain::m_CameraCutEvent
	BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * ___m_CameraCutEvent_12;
	// Cinemachine.CinemachineBrain_VcamActivatedEvent Cinemachine.CinemachineBrain::m_CameraActivatedEvent
	VcamActivatedEvent_tD6FFF8FCC883ABD7CC27619CD451E6FE56DB4A3B * ___m_CameraActivatedEvent_13;
	// UnityEngine.Coroutine Cinemachine.CinemachineBrain::mPhysicsCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___mPhysicsCoroutine_15;
	// UnityEngine.WaitForFixedUpdate Cinemachine.CinemachineBrain::mWaitForFixedUpdate
	WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97 * ___mWaitForFixedUpdate_16;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain_BrainFrame> Cinemachine.CinemachineBrain::mFrameStack
	List_1_t22F3D7410E401DD6A2908F6264F0046A93980F6F * ___mFrameStack_17;
	// System.Int32 Cinemachine.CinemachineBrain::mNextFrameId
	int32_t ___mNextFrameId_18;
	// Cinemachine.CinemachineBlend Cinemachine.CinemachineBrain::mCurrentLiveCameras
	CinemachineBlend_t7A2A71833A7E2C44AB1D7874B3D076EF46A56298 * ___mCurrentLiveCameras_19;
	// Cinemachine.ICinemachineCamera Cinemachine.CinemachineBrain::mActiveCameraPreviousFrame
	RuntimeObject* ___mActiveCameraPreviousFrame_20;
	// Cinemachine.CameraState Cinemachine.CinemachineBrain::<CurrentCameraState>k__BackingField
	CameraState_t308F3A442112B7464D2B21A417D325662E3399B1  ___U3CCurrentCameraStateU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_m_ShowDebugText_4() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_ShowDebugText_4)); }
	inline bool get_m_ShowDebugText_4() const { return ___m_ShowDebugText_4; }
	inline bool* get_address_of_m_ShowDebugText_4() { return &___m_ShowDebugText_4; }
	inline void set_m_ShowDebugText_4(bool value)
	{
		___m_ShowDebugText_4 = value;
	}

	inline static int32_t get_offset_of_m_ShowCameraFrustum_5() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_ShowCameraFrustum_5)); }
	inline bool get_m_ShowCameraFrustum_5() const { return ___m_ShowCameraFrustum_5; }
	inline bool* get_address_of_m_ShowCameraFrustum_5() { return &___m_ShowCameraFrustum_5; }
	inline void set_m_ShowCameraFrustum_5(bool value)
	{
		___m_ShowCameraFrustum_5 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_6() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_IgnoreTimeScale_6)); }
	inline bool get_m_IgnoreTimeScale_6() const { return ___m_IgnoreTimeScale_6; }
	inline bool* get_address_of_m_IgnoreTimeScale_6() { return &___m_IgnoreTimeScale_6; }
	inline void set_m_IgnoreTimeScale_6(bool value)
	{
		___m_IgnoreTimeScale_6 = value;
	}

	inline static int32_t get_offset_of_m_WorldUpOverride_7() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_WorldUpOverride_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_WorldUpOverride_7() const { return ___m_WorldUpOverride_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_WorldUpOverride_7() { return &___m_WorldUpOverride_7; }
	inline void set_m_WorldUpOverride_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_WorldUpOverride_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WorldUpOverride_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdateMethod_8() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_UpdateMethod_8)); }
	inline int32_t get_m_UpdateMethod_8() const { return ___m_UpdateMethod_8; }
	inline int32_t* get_address_of_m_UpdateMethod_8() { return &___m_UpdateMethod_8; }
	inline void set_m_UpdateMethod_8(int32_t value)
	{
		___m_UpdateMethod_8 = value;
	}

	inline static int32_t get_offset_of_m_DefaultBlend_9() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_DefaultBlend_9)); }
	inline CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04  get_m_DefaultBlend_9() const { return ___m_DefaultBlend_9; }
	inline CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04 * get_address_of_m_DefaultBlend_9() { return &___m_DefaultBlend_9; }
	inline void set_m_DefaultBlend_9(CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04  value)
	{
		___m_DefaultBlend_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultBlend_9))->___m_CustomCurve_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CustomBlends_10() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_CustomBlends_10)); }
	inline CinemachineBlenderSettings_tCD488C84B252394D8CDD7D0DB623D991BE77F3F0 * get_m_CustomBlends_10() const { return ___m_CustomBlends_10; }
	inline CinemachineBlenderSettings_tCD488C84B252394D8CDD7D0DB623D991BE77F3F0 ** get_address_of_m_CustomBlends_10() { return &___m_CustomBlends_10; }
	inline void set_m_CustomBlends_10(CinemachineBlenderSettings_tCD488C84B252394D8CDD7D0DB623D991BE77F3F0 * value)
	{
		___m_CustomBlends_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomBlends_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OutputCamera_11() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_OutputCamera_11)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_m_OutputCamera_11() const { return ___m_OutputCamera_11; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_m_OutputCamera_11() { return &___m_OutputCamera_11; }
	inline void set_m_OutputCamera_11(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___m_OutputCamera_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OutputCamera_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraCutEvent_12() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_CameraCutEvent_12)); }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * get_m_CameraCutEvent_12() const { return ___m_CameraCutEvent_12; }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 ** get_address_of_m_CameraCutEvent_12() { return &___m_CameraCutEvent_12; }
	inline void set_m_CameraCutEvent_12(BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * value)
	{
		___m_CameraCutEvent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraCutEvent_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraActivatedEvent_13() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_CameraActivatedEvent_13)); }
	inline VcamActivatedEvent_tD6FFF8FCC883ABD7CC27619CD451E6FE56DB4A3B * get_m_CameraActivatedEvent_13() const { return ___m_CameraActivatedEvent_13; }
	inline VcamActivatedEvent_tD6FFF8FCC883ABD7CC27619CD451E6FE56DB4A3B ** get_address_of_m_CameraActivatedEvent_13() { return &___m_CameraActivatedEvent_13; }
	inline void set_m_CameraActivatedEvent_13(VcamActivatedEvent_tD6FFF8FCC883ABD7CC27619CD451E6FE56DB4A3B * value)
	{
		___m_CameraActivatedEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraActivatedEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_mPhysicsCoroutine_15() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mPhysicsCoroutine_15)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_mPhysicsCoroutine_15() const { return ___mPhysicsCoroutine_15; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_mPhysicsCoroutine_15() { return &___mPhysicsCoroutine_15; }
	inline void set_mPhysicsCoroutine_15(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___mPhysicsCoroutine_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPhysicsCoroutine_15), (void*)value);
	}

	inline static int32_t get_offset_of_mWaitForFixedUpdate_16() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mWaitForFixedUpdate_16)); }
	inline WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97 * get_mWaitForFixedUpdate_16() const { return ___mWaitForFixedUpdate_16; }
	inline WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97 ** get_address_of_mWaitForFixedUpdate_16() { return &___mWaitForFixedUpdate_16; }
	inline void set_mWaitForFixedUpdate_16(WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97 * value)
	{
		___mWaitForFixedUpdate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mWaitForFixedUpdate_16), (void*)value);
	}

	inline static int32_t get_offset_of_mFrameStack_17() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mFrameStack_17)); }
	inline List_1_t22F3D7410E401DD6A2908F6264F0046A93980F6F * get_mFrameStack_17() const { return ___mFrameStack_17; }
	inline List_1_t22F3D7410E401DD6A2908F6264F0046A93980F6F ** get_address_of_mFrameStack_17() { return &___mFrameStack_17; }
	inline void set_mFrameStack_17(List_1_t22F3D7410E401DD6A2908F6264F0046A93980F6F * value)
	{
		___mFrameStack_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mFrameStack_17), (void*)value);
	}

	inline static int32_t get_offset_of_mNextFrameId_18() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mNextFrameId_18)); }
	inline int32_t get_mNextFrameId_18() const { return ___mNextFrameId_18; }
	inline int32_t* get_address_of_mNextFrameId_18() { return &___mNextFrameId_18; }
	inline void set_mNextFrameId_18(int32_t value)
	{
		___mNextFrameId_18 = value;
	}

	inline static int32_t get_offset_of_mCurrentLiveCameras_19() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mCurrentLiveCameras_19)); }
	inline CinemachineBlend_t7A2A71833A7E2C44AB1D7874B3D076EF46A56298 * get_mCurrentLiveCameras_19() const { return ___mCurrentLiveCameras_19; }
	inline CinemachineBlend_t7A2A71833A7E2C44AB1D7874B3D076EF46A56298 ** get_address_of_mCurrentLiveCameras_19() { return &___mCurrentLiveCameras_19; }
	inline void set_mCurrentLiveCameras_19(CinemachineBlend_t7A2A71833A7E2C44AB1D7874B3D076EF46A56298 * value)
	{
		___mCurrentLiveCameras_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCurrentLiveCameras_19), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveCameraPreviousFrame_20() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mActiveCameraPreviousFrame_20)); }
	inline RuntimeObject* get_mActiveCameraPreviousFrame_20() const { return ___mActiveCameraPreviousFrame_20; }
	inline RuntimeObject** get_address_of_mActiveCameraPreviousFrame_20() { return &___mActiveCameraPreviousFrame_20; }
	inline void set_mActiveCameraPreviousFrame_20(RuntimeObject* value)
	{
		___mActiveCameraPreviousFrame_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveCameraPreviousFrame_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentCameraStateU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___U3CCurrentCameraStateU3Ek__BackingField_21)); }
	inline CameraState_t308F3A442112B7464D2B21A417D325662E3399B1  get_U3CCurrentCameraStateU3Ek__BackingField_21() const { return ___U3CCurrentCameraStateU3Ek__BackingField_21; }
	inline CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * get_address_of_U3CCurrentCameraStateU3Ek__BackingField_21() { return &___U3CCurrentCameraStateU3Ek__BackingField_21; }
	inline void set_U3CCurrentCameraStateU3Ek__BackingField_21(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1  value)
	{
		___U3CCurrentCameraStateU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_21))->___mCustom0_11))->___m_Custom_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_21))->___mCustom1_12))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_21))->___mCustom2_13))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_21))->___mCustom3_14))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCurrentCameraStateU3Ek__BackingField_21))->___m_CustomOverflow_15), (void*)NULL);
		#endif
	}
};

struct CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_StaticFields
{
public:
	// Cinemachine.ICinemachineCamera Cinemachine.CinemachineBrain::mSoloCamera
	RuntimeObject* ___mSoloCamera_14;

public:
	inline static int32_t get_offset_of_mSoloCamera_14() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_StaticFields, ___mSoloCamera_14)); }
	inline RuntimeObject* get_mSoloCamera_14() const { return ___mSoloCamera_14; }
	inline RuntimeObject** get_address_of_mSoloCamera_14() { return &___mSoloCamera_14; }
	inline void set_mSoloCamera_14(RuntimeObject* value)
	{
		___mSoloCamera_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mSoloCamera_14), (void*)value);
	}
};


// Cinemachine.CinemachineExtension
struct  CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineExtension::m_vcamOwner
	CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___m_vcamOwner_5;
	// System.Collections.Generic.Dictionary`2<Cinemachine.ICinemachineCamera,System.Object> Cinemachine.CinemachineExtension::mExtraState
	Dictionary_2_t2DA729FA5DE6343A62FDA39E2B5A6EA153BB03A8 * ___mExtraState_6;

public:
	inline static int32_t get_offset_of_m_vcamOwner_5() { return static_cast<int32_t>(offsetof(CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE, ___m_vcamOwner_5)); }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * get_m_vcamOwner_5() const { return ___m_vcamOwner_5; }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD ** get_address_of_m_vcamOwner_5() { return &___m_vcamOwner_5; }
	inline void set_m_vcamOwner_5(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * value)
	{
		___m_vcamOwner_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_vcamOwner_5), (void*)value);
	}

	inline static int32_t get_offset_of_mExtraState_6() { return static_cast<int32_t>(offsetof(CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE, ___mExtraState_6)); }
	inline Dictionary_2_t2DA729FA5DE6343A62FDA39E2B5A6EA153BB03A8 * get_mExtraState_6() const { return ___mExtraState_6; }
	inline Dictionary_2_t2DA729FA5DE6343A62FDA39E2B5A6EA153BB03A8 ** get_address_of_mExtraState_6() { return &___mExtraState_6; }
	inline void set_mExtraState_6(Dictionary_2_t2DA729FA5DE6343A62FDA39E2B5A6EA153BB03A8 * value)
	{
		___mExtraState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mExtraState_6), (void*)value);
	}
};


// Cinemachine.CinemachineVirtualCameraBase
struct  CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore_Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// Cinemachine.CinemachineVirtualCameraBase_StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_10;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::mExtensions
	List_1_tB06968E265CE1689803547CD89D453ACFB3509D5 * ___mExtensions_11;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_previousStateIsValid
	bool ___m_previousStateIsValid_12;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_previousLookAtTarget
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_previousLookAtTarget_13;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_previousFollowTarget
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_previousFollowTarget_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_15;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___m_parentVcam_16;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_17;

public:
	inline static int32_t get_offset_of_m_ExcludedPropertiesInInspector_4() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_ExcludedPropertiesInInspector_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_ExcludedPropertiesInInspector_4() const { return ___m_ExcludedPropertiesInInspector_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_ExcludedPropertiesInInspector_4() { return &___m_ExcludedPropertiesInInspector_4; }
	inline void set_m_ExcludedPropertiesInInspector_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_ExcludedPropertiesInInspector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludedPropertiesInInspector_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_LockStageInInspector_5() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_LockStageInInspector_5)); }
	inline StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2* get_m_LockStageInInspector_5() const { return ___m_LockStageInInspector_5; }
	inline StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2** get_address_of_m_LockStageInInspector_5() { return &___m_LockStageInInspector_5; }
	inline void set_m_LockStageInInspector_5(StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2* value)
	{
		___m_LockStageInInspector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LockStageInInspector_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ValidatingStreamVersion_6() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_ValidatingStreamVersion_6)); }
	inline int32_t get_m_ValidatingStreamVersion_6() const { return ___m_ValidatingStreamVersion_6; }
	inline int32_t* get_address_of_m_ValidatingStreamVersion_6() { return &___m_ValidatingStreamVersion_6; }
	inline void set_m_ValidatingStreamVersion_6(int32_t value)
	{
		___m_ValidatingStreamVersion_6 = value;
	}

	inline static int32_t get_offset_of_m_OnValidateCalled_7() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_OnValidateCalled_7)); }
	inline bool get_m_OnValidateCalled_7() const { return ___m_OnValidateCalled_7; }
	inline bool* get_address_of_m_OnValidateCalled_7() { return &___m_OnValidateCalled_7; }
	inline void set_m_OnValidateCalled_7(bool value)
	{
		___m_OnValidateCalled_7 = value;
	}

	inline static int32_t get_offset_of_m_StreamingVersion_8() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_StreamingVersion_8)); }
	inline int32_t get_m_StreamingVersion_8() const { return ___m_StreamingVersion_8; }
	inline int32_t* get_address_of_m_StreamingVersion_8() { return &___m_StreamingVersion_8; }
	inline void set_m_StreamingVersion_8(int32_t value)
	{
		___m_StreamingVersion_8 = value;
	}

	inline static int32_t get_offset_of_m_Priority_9() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_Priority_9)); }
	inline int32_t get_m_Priority_9() const { return ___m_Priority_9; }
	inline int32_t* get_address_of_m_Priority_9() { return &___m_Priority_9; }
	inline void set_m_Priority_9(int32_t value)
	{
		___m_Priority_9 = value;
	}

	inline static int32_t get_offset_of_m_StandbyUpdate_10() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_StandbyUpdate_10)); }
	inline int32_t get_m_StandbyUpdate_10() const { return ___m_StandbyUpdate_10; }
	inline int32_t* get_address_of_m_StandbyUpdate_10() { return &___m_StandbyUpdate_10; }
	inline void set_m_StandbyUpdate_10(int32_t value)
	{
		___m_StandbyUpdate_10 = value;
	}

	inline static int32_t get_offset_of_mExtensions_11() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___mExtensions_11)); }
	inline List_1_tB06968E265CE1689803547CD89D453ACFB3509D5 * get_mExtensions_11() const { return ___mExtensions_11; }
	inline List_1_tB06968E265CE1689803547CD89D453ACFB3509D5 ** get_address_of_mExtensions_11() { return &___mExtensions_11; }
	inline void set_mExtensions_11(List_1_tB06968E265CE1689803547CD89D453ACFB3509D5 * value)
	{
		___mExtensions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mExtensions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_previousStateIsValid_12() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_previousStateIsValid_12)); }
	inline bool get_m_previousStateIsValid_12() const { return ___m_previousStateIsValid_12; }
	inline bool* get_address_of_m_previousStateIsValid_12() { return &___m_previousStateIsValid_12; }
	inline void set_m_previousStateIsValid_12(bool value)
	{
		___m_previousStateIsValid_12 = value;
	}

	inline static int32_t get_offset_of_m_previousLookAtTarget_13() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_previousLookAtTarget_13)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_previousLookAtTarget_13() const { return ___m_previousLookAtTarget_13; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_previousLookAtTarget_13() { return &___m_previousLookAtTarget_13; }
	inline void set_m_previousLookAtTarget_13(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_previousLookAtTarget_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_previousLookAtTarget_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_previousFollowTarget_14() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_previousFollowTarget_14)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_previousFollowTarget_14() const { return ___m_previousFollowTarget_14; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_previousFollowTarget_14() { return &___m_previousFollowTarget_14; }
	inline void set_m_previousFollowTarget_14(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_previousFollowTarget_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_previousFollowTarget_14), (void*)value);
	}

	inline static int32_t get_offset_of_mSlaveStatusUpdated_15() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___mSlaveStatusUpdated_15)); }
	inline bool get_mSlaveStatusUpdated_15() const { return ___mSlaveStatusUpdated_15; }
	inline bool* get_address_of_mSlaveStatusUpdated_15() { return &___mSlaveStatusUpdated_15; }
	inline void set_mSlaveStatusUpdated_15(bool value)
	{
		___mSlaveStatusUpdated_15 = value;
	}

	inline static int32_t get_offset_of_m_parentVcam_16() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_parentVcam_16)); }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * get_m_parentVcam_16() const { return ___m_parentVcam_16; }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD ** get_address_of_m_parentVcam_16() { return &___m_parentVcam_16; }
	inline void set_m_parentVcam_16(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * value)
	{
		___m_parentVcam_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parentVcam_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_QueuePriority_17() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_QueuePriority_17)); }
	inline int32_t get_m_QueuePriority_17() const { return ___m_QueuePriority_17; }
	inline int32_t* get_address_of_m_QueuePriority_17() { return &___m_QueuePriority_17; }
	inline void set_m_QueuePriority_17(int32_t value)
	{
		___m_QueuePriority_17 = value;
	}
};


// CinemachineTouchInputMapper
struct  CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single CinemachineTouchInputMapper::TouchSensitivityX
	float ___TouchSensitivityX_4;
	// System.Single CinemachineTouchInputMapper::TouchSensitivityY
	float ___TouchSensitivityY_5;
	// System.String CinemachineTouchInputMapper::TouchXInputMapTo
	String_t* ___TouchXInputMapTo_6;
	// System.String CinemachineTouchInputMapper::TouchYInputMapTo
	String_t* ___TouchYInputMapTo_7;

public:
	inline static int32_t get_offset_of_TouchSensitivityX_4() { return static_cast<int32_t>(offsetof(CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815, ___TouchSensitivityX_4)); }
	inline float get_TouchSensitivityX_4() const { return ___TouchSensitivityX_4; }
	inline float* get_address_of_TouchSensitivityX_4() { return &___TouchSensitivityX_4; }
	inline void set_TouchSensitivityX_4(float value)
	{
		___TouchSensitivityX_4 = value;
	}

	inline static int32_t get_offset_of_TouchSensitivityY_5() { return static_cast<int32_t>(offsetof(CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815, ___TouchSensitivityY_5)); }
	inline float get_TouchSensitivityY_5() const { return ___TouchSensitivityY_5; }
	inline float* get_address_of_TouchSensitivityY_5() { return &___TouchSensitivityY_5; }
	inline void set_TouchSensitivityY_5(float value)
	{
		___TouchSensitivityY_5 = value;
	}

	inline static int32_t get_offset_of_TouchXInputMapTo_6() { return static_cast<int32_t>(offsetof(CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815, ___TouchXInputMapTo_6)); }
	inline String_t* get_TouchXInputMapTo_6() const { return ___TouchXInputMapTo_6; }
	inline String_t** get_address_of_TouchXInputMapTo_6() { return &___TouchXInputMapTo_6; }
	inline void set_TouchXInputMapTo_6(String_t* value)
	{
		___TouchXInputMapTo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TouchXInputMapTo_6), (void*)value);
	}

	inline static int32_t get_offset_of_TouchYInputMapTo_7() { return static_cast<int32_t>(offsetof(CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815, ___TouchYInputMapTo_7)); }
	inline String_t* get_TouchYInputMapTo_7() const { return ___TouchYInputMapTo_7; }
	inline String_t** get_address_of_TouchYInputMapTo_7() { return &___TouchYInputMapTo_7; }
	inline void set_TouchYInputMapTo_7(String_t* value)
	{
		___TouchYInputMapTo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TouchYInputMapTo_7), (void*)value);
	}
};


// CinemachineTrack
struct  CinemachineTrack_t6B531D379A33136302768D59460F3E8B1AC6D79D  : public TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D
{
public:

public:
};


// CinemachineCameraOffset
struct  CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693  : public CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE
{
public:
	// UnityEngine.Vector3 CinemachineCameraOffset::m_Offset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Offset_7;
	// Cinemachine.CinemachineCore_Stage CinemachineCameraOffset::m_ApplyAfter
	int32_t ___m_ApplyAfter_8;

public:
	inline static int32_t get_offset_of_m_Offset_7() { return static_cast<int32_t>(offsetof(CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693, ___m_Offset_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Offset_7() const { return ___m_Offset_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Offset_7() { return &___m_Offset_7; }
	inline void set_m_Offset_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Offset_7 = value;
	}

	inline static int32_t get_offset_of_m_ApplyAfter_8() { return static_cast<int32_t>(offsetof(CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693, ___m_ApplyAfter_8)); }
	inline int32_t get_m_ApplyAfter_8() const { return ___m_ApplyAfter_8; }
	inline int32_t* get_address_of_m_ApplyAfter_8() { return &___m_ApplyAfter_8; }
	inline void set_m_ApplyAfter_8(int32_t value)
	{
		___m_ApplyAfter_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  m_Items[1];

public:
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t38D94C6D76F3094870385FAC3A56D30651B41571  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_t806752C775BA713A91B6588A07CA98417CABC003  m_Items[1];

public:
	inline Touch_t806752C775BA713A91B6588A07CA98417CABC003  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t806752C775BA713A91B6588A07CA98417CABC003 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t806752C775BA713A91B6588A07CA98417CABC003  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t806752C775BA713A91B6588A07CA98417CABC003  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t806752C775BA713A91B6588A07CA98417CABC003 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t806752C775BA713A91B6588A07CA98417CABC003  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Playables.PlayableExtensions::GetInputWeight<UnityEngine.Playables.Playable>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBBA41EE4D02AA0A1B68FCD6F432BD9C3C06E2F0C_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, int32_t p1, const RuntimeMethod* method);
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Playables.Playable>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m02EFE600B3A94F99F824DCDD0680EF46E16B687D_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, int32_t p1, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Explicit(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  ScriptPlayable_1_op_Explicit_m8164D46EB091E8DC3F521E6A747A5FCCE5C5D9DF_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, const RuntimeMethod* method);
// !0 UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_GetBehaviour_mA09CBA9730AC80E48578D8F3EF33EBFCE5F1A389_gshared (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableExtensions::GetPlayState<UnityEngine.Playables.Playable>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.ScriptPlayable`1<System.Object>>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetTime_TisScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556_mCA8F18AC5DB99E99ADD22DC6778976D866A5C289_gshared (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  p0, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.ScriptPlayable`1<System.Object>>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetDuration_TisScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556_mC22F7AF5A65F8BB5D685E98D32FA037CB3A1C969_gshared (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Playables.PlayableExtensions::GetInputCount<UnityEngine.Playables.Playable>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mC15D789D7CD8858FC1EBCA1ACC56F6C7AD829B3B_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  ScriptPlayable_1_Create_mCB0EAF3B738D54C2C229A229B9A5AC2FCB1DB2F2_gshared (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  p0, int32_t p1, const RuntimeMethod* method);
// !0 UnityEngine.ExposedReference`1<System.Object>::Resolve(UnityEngine.IExposedPropertyTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExposedReference_1_Resolve_mF43C30F01A46E28ED9E30F196A07C80CAD88F2EC_gshared (ExposedReference_1_t5F7BAA4304EB817E7C262A3480A6BA619FD4F096 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_m9EAB3B552405A6DF1C2DAC402E792EC2D54F3E7E_gshared (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputCount<UnityEngine.Playables.ScriptPlayable`1<System.Object>>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetInputCount_TisScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556_mFB806CA8E681AB7EE526C7EBCC9B2C5536286829_gshared (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  p0, int32_t p1, const RuntimeMethod* method);

// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::Lerp(UnityEngine.Vector4,UnityEngine.Vector4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4_Lerp_mFA160C69C5C6162B9D528643B5807012B2B1EC16 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  p0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  p1, float p2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, int32_t p0, float p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A (int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void Cinemachine.Utility.SplineHelpers::ComputeSmoothControlPoints(UnityEngine.Vector4[]&,UnityEngine.Vector4[]&,UnityEngine.Vector4[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineHelpers_ComputeSmoothControlPoints_m3A964E760EA987A9CD68AC92E22952955AE0EC77 (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___knot0, Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___ctrl11, Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___ctrl22, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::ProjectOntoPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___planeNormal1, const RuntimeMethod* method);
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::AlmostZero(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_AlmostZero_m84B33A88B8B7FB2305B3F8E36FF15C6C4E27F86E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::LerpAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_LerpAngle_m8802FB8DCECA2D48FDD13C20F384B9430E66C99F (float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4_get_normalized_mE211195F38FA106A1B303EB0DA78F21BB5C469C3 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// System.Single Cinemachine.Utility.UnityVectorExtensions::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_SignedAngle_m9524F338C782113E60868447BBADFCA1885DD81E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v10, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v21, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float p0, float p1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mFDFA74F66595FD2B8CE360183D1A92B575F0A76E (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_m31EDC3262BE39D2F6464B15397F882237E6158C3 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_mBE7ED92F28BBE09310975CDF329913C04EA9500E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_SqrMagnitude_m1095C695F57FB6A2C440F3FEA6876ABB87F0C696 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Dot_m34F6A75BE3FC6F728233811943AC4406C7D905BA (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single Cinemachine.Utility.UnityVectorExtensions::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_Angle_m1C0203CE5F691DE761EF73814F8C095B1C34960D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v10, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v21, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Sign_m6FA1D12786BEE0419D4B9426E5E4955F286BC8D3 (float p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::SlerpWithReferenceUp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  UnityQuaternionExtensions_SlerpWithReferenceUp_mFAB3BC9FE543C85352CFF3F33E5D602C41D15852 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___qA0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___qB1, float ___t2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up3, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Quaternion Cinemachine.CameraState::get_FinalOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  CameraState_get_FinalOrientation_m97F7CE1DA761F44232FAAD32F961D40A88215997 (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Cinemachine.CameraState::get_ReferenceLookAt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_ReferenceLookAt_m3FCCFB59361130B202C526D5F88FA11E1CC796EC (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CameraState::set_ReferenceLookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_set_ReferenceLookAt_mA8042F824F3D6E61BA8C3FB4BDDC5B1804D72120 (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Cinemachine.CameraState::get_PositionCorrection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_PositionCorrection_m81476CD9BBC93E1AE8A47E6BA8D6E08F112D1CFD (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CameraState::set_PositionCorrection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_set_PositionCorrection_m28C42BA08144F3949ED3D64398CAA5DD6715AD0B (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineExtension__ctor_mCB3BFE1480EEA85EBB49CE078CA62B9D9EC4CBE9 (CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineBrain::ReleaseCameraOverride(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineBrain_ReleaseCameraOverride_m3F5D2F404C9D7D389DCA817491562A04CF148264 (CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * __this, int32_t ___overrideId0, const RuntimeMethod* method);
// UnityEngine.Playables.FrameData/EvaluationType UnityEngine.Playables.FrameData::get_evaluationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameData_get_evaluationType_mF0F791BAF13A203A8D80AD4C1474599E1EED5EA4 (FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_ProcessFrame_m32F9B265BB54D1A3A290E2709FDD0B873360B25A (PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01 * __this, Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E  p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Cinemachine.CinemachineBrain>()
inline CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * GameObject_GetComponent_TisCinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_mBD916E48F072E85917A54BADF9B02330C838FEA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Single UnityEngine.Playables.PlayableExtensions::GetInputWeight<UnityEngine.Playables.Playable>(!!0,System.Int32)
inline float PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBBA41EE4D02AA0A1B68FCD6F432BD9C3C06E2F0C (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  float (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , int32_t, const RuntimeMethod*))PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBBA41EE4D02AA0A1B68FCD6F432BD9C3C06E2F0C_gshared)(p0, p1, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Playables.Playable>(!!0,System.Int32)
inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m02EFE600B3A94F99F824DCDD0680EF46E16B687D (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , int32_t, const RuntimeMethod*))PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m02EFE600B3A94F99F824DCDD0680EF46E16B687D_gshared)(p0, p1, method);
}
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>::op_Explicit(UnityEngine.Playables.Playable)
inline ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652 (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , const RuntimeMethod*))ScriptPlayable_1_op_Explicit_m8164D46EB091E8DC3F521E6A747A5FCCE5C5D9DF_gshared)(p0, method);
}
// !0 UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>::GetBehaviour()
inline CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8 (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A * __this, const RuntimeMethod* method)
{
	return ((  CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * (*) (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A *, const RuntimeMethod*))ScriptPlayable_1_GetBehaviour_mA09CBA9730AC80E48578D8F3EF33EBFCE5F1A389_gshared)(__this, method);
}
// System.Boolean CinemachineShotPlayable::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CinemachineShotPlayable_get_IsValid_m4172ABD6CCCEBB37F7BAEE66087F996C4C353F2C (CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableExtensions::GetPlayState<UnityEngine.Playables.Playable>(!!0)
inline int32_t PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981 (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , const RuntimeMethod*))PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981_gshared)(p0, method);
}
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>>(!!0)
inline double PlayableExtensions_GetTime_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m9B581EE3C3F65A6AE31A2438115DA7B362C14134 (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  p0, const RuntimeMethod* method)
{
	return ((  double (*) (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A , const RuntimeMethod*))PlayableExtensions_GetTime_TisScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556_mCA8F18AC5DB99E99ADD22DC6778976D866A5C289_gshared)(p0, method);
}
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>>(!!0)
inline double PlayableExtensions_GetDuration_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m410DA7C7A2DC6374AD951D381CF611710AE421CD (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  p0, const RuntimeMethod* method)
{
	return ((  double (*) (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A , const RuntimeMethod*))PlayableExtensions_GetDuration_TisScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556_mC22F7AF5A65F8BB5D685E98D32FA037CB3A1C969_gshared)(p0, method);
}
// System.Int32 UnityEngine.Playables.PlayableExtensions::GetInputCount<UnityEngine.Playables.Playable>(!!0)
inline int32_t PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mC15D789D7CD8858FC1EBCA1ACC56F6C7AD829B3B (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , const RuntimeMethod*))PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mC15D789D7CD8858FC1EBCA1ACC56F6C7AD829B3B_gshared)(p0, method);
}
// System.Single UnityEngine.Playables.FrameData::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FrameData_get_deltaTime_m819B2E98971747205F7B8A66044C537FB79C719A (FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E * __this, const RuntimeMethod* method);
// System.Single CinemachineMixer::GetDeltaTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineMixer_GetDeltaTime_m72CBDCB346C8BC4C6EF68032ECB956D660B8BEE2 (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, float ___deltaTime0, const RuntimeMethod* method);
// System.Int32 Cinemachine.CinemachineBrain::SetCameraOverride(System.Int32,Cinemachine.ICinemachineCamera,Cinemachine.ICinemachineCamera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CinemachineBrain_SetCameraOverride_mFC78E28A5BBA366F03D3EDA96B778B9D3FF705FE (CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * __this, int32_t ___overrideId0, RuntimeObject* ___camA1, RuntimeObject* ___camB2, float ___weightB3, float ___deltaTime4, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_maximumDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_maximumDeltaTime_mFE39C41ABEA1A3617FFCFF079C23063E5435E480 (const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour__ctor_mE96A877D927BEEC8C9368A0673FEAD77A78C35EE (PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
inline ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ScriptPlayable_1_Create_m4F9F8E48634C7E5FD9D6E5584C850133A54BA699 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  (*) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA , int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mCB0EAF3B738D54C2C229A229B9A5AC2FCB1DB2F2_gshared)(p0, p1, method);
}
// UnityEngine.IExposedPropertyTable UnityEngine.Playables.PlayableGraph::GetResolver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableGraph_GetResolver_m52F92B131B65F7412D220BB853C562C5983E884E (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * __this, const RuntimeMethod* method);
// !0 UnityEngine.ExposedReference`1<Cinemachine.CinemachineVirtualCameraBase>::Resolve(UnityEngine.IExposedPropertyTable)
inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74 (ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * (*) (ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F *, RuntimeObject*, const RuntimeMethod*))ExposedReference_1_Resolve_mF43C30F01A46E28ED9E30F196A07C80CAD88F2EC_gshared)(__this, p0, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_m9388F54AB0598505CA6ED126475CB8DC2172407B (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  p0, const RuntimeMethod* method)
{
	return ((  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  (*) (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A , const RuntimeMethod*))ScriptPlayable_1_op_Implicit_m9EAB3B552405A6DF1C2DAC402E792EC2D54F3E7E_gshared)(p0, method);
}
// System.Void UnityEngine.Playables.PlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset__ctor_m669F459CFACFE65873346E428F206C457B488167 (PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineCore/AxisInputDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisInputDelegate__ctor_m446E4486ABE983D6DA9DB7628CD21EB1D5FC3117 (AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m2A22A8E963E14F1221F768412663C8D11F806CD6 (const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t38D94C6D76F3094870385FAC3A56D30651B41571* Input_get_touches_m605F63342DC3C26E74843F9CE2F4C191C9151B12 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Touch_get_deltaPosition_m4AC4D2D44B7DC679AEE11F1613BCFECFDAD6C9E3 (Touch_t806752C775BA713A91B6588A07CA98417CABC003 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496 (String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset::GetClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackAsset_GetClips_m290A1712F5CDEAB3F9453646FCFAF84840D9738E (TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * __this, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Timeline.TimelineClip::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * TimelineClip_get_asset_mCF4C0F2153BF18362958432960C87A24B5534245 (TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * __this, const RuntimeMethod* method);
// System.String Cinemachine.CinemachineVirtualCameraBase::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CinemachineVirtualCameraBase_get_Name_m4596F7C91EA5A47577FC2A9EBDB78CE6A503B66A (CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.TimelineClip::set_displayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineClip_set_displayName_m21424F9A27CD27D4B8D597D35E3C72DA47165EC7 (TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<CinemachineMixer>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
inline ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  ScriptPlayable_1_Create_m216BA0DF0D6D5E31EFB40C08EB99C93B74D6BE40 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  (*) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA , int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mCB0EAF3B738D54C2C229A229B9A5AC2FCB1DB2F2_gshared)(p0, p1, method);
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputCount<UnityEngine.Playables.ScriptPlayable`1<CinemachineMixer>>(!!0,System.Int32)
inline void PlayableExtensions_SetInputCount_TisScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_m7130E49102B29EB624421A4F59B981173FDD3DF1 (ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B , int32_t, const RuntimeMethod*))PlayableExtensions_SetInputCount_TisScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556_mFB806CA8E681AB7EE526C7EBCC9B2C5536286829_gshared)(p0, p1, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<CinemachineMixer>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_m6F1FE1C8EFB32C6564EAB7C8E44FB9DF276102D8 (ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  p0, const RuntimeMethod* method)
{
	return ((  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  (*) (ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B , const RuntimeMethod*))ScriptPlayable_1_op_Implicit_m9EAB3B552405A6DF1C2DAC402E792EC2D54F3E7E_gshared)(p0, method);
}
// System.Void UnityEngine.Timeline.TrackAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackAsset__ctor_m2342B924DA6AB605CF953BA756D3570B932B1C05 (TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 Cinemachine.Utility.SplineHelpers::Bezier3(System.Single,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SplineHelpers_Bezier3_m32C86EA80B44004197548DCC57589D5C857C90EB (float ___t0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p01, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p12, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p23, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p34, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SplineHelpers_Bezier3_m32C86EA80B44004197548DCC57589D5C857C90EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_0, /*hidden argument*/NULL);
		___t0 = L_1;
		float L_2 = ___t0;
		V_0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_2));
		float L_3 = V_0;
		float L_4 = V_0;
		float L_5 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___p01;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (float)L_5)), L_6, /*hidden argument*/NULL);
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = ___p12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_8)), (float)L_9)), (float)L_10)), L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_7, L_12, /*hidden argument*/NULL);
		float L_14 = V_0;
		float L_15 = ___t0;
		float L_16 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = ___p23;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_14)), (float)L_15)), (float)L_16)), L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_13, L_18, /*hidden argument*/NULL);
		float L_20 = ___t0;
		float L_21 = ___t0;
		float L_22 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = ___p34;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)), (float)L_22)), L_23, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_19, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.SplineHelpers::BezierTangent3(System.Single,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SplineHelpers_BezierTangent3_m2872862CA0C97ECA9EEF8D84A93B6A8D78C12064 (float ___t0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p01, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p12, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p23, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p34, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SplineHelpers_BezierTangent3_m2872862CA0C97ECA9EEF8D84A93B6A8D78C12064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_0, /*hidden argument*/NULL);
		___t0 = L_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___p01;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((-3.0f), L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___p12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((9.0f), L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_3, L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___p23;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((9.0f), L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___p34;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((3.0f), L_10, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_9, L_11, /*hidden argument*/NULL);
		float L_13 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_12, L_13, /*hidden argument*/NULL);
		float L_15 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_14, L_15, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = ___p01;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((6.0f), L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = ___p12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((12.0f), L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_18, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = ___p23;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((6.0f), L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_21, L_23, /*hidden argument*/NULL);
		float L_25 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_16, L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = ___p01;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((3.0f), L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_27, L_29, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = ___p12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((3.0f), L_31, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_30, L_32, /*hidden argument*/NULL);
		return L_33;
	}
}
// System.Single Cinemachine.Utility.SplineHelpers::Bezier1(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SplineHelpers_Bezier1_mAA12E00E825DBD151A57473821FB3CB9B7F68940 (float ___t0, float ___p01, float ___p12, float ___p23, float ___p34, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SplineHelpers_Bezier1_mAA12E00E825DBD151A57473821FB3CB9B7F68940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_0, /*hidden argument*/NULL);
		___t0 = L_1;
		float L_2 = ___t0;
		V_0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_2));
		float L_3 = V_0;
		float L_4 = V_0;
		float L_5 = V_0;
		float L_6 = ___p01;
		float L_7 = V_0;
		float L_8 = V_0;
		float L_9 = ___t0;
		float L_10 = ___p12;
		float L_11 = V_0;
		float L_12 = ___t0;
		float L_13 = ___t0;
		float L_14 = ___p23;
		float L_15 = ___t0;
		float L_16 = ___t0;
		float L_17 = ___t0;
		float L_18 = ___p34;
		return ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (float)L_5)), (float)L_6)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_7)), (float)L_8)), (float)L_9)), (float)L_10)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_11)), (float)L_12)), (float)L_13)), (float)L_14)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)), (float)L_17)), (float)L_18))));
	}
}
// System.Single Cinemachine.Utility.SplineHelpers::BezierTangent1(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SplineHelpers_BezierTangent1_m486ADCC3B4C93A8B7DCB358C7F38A54247C0A35E (float ___t0, float ___p01, float ___p12, float ___p23, float ___p34, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SplineHelpers_BezierTangent1_m486ADCC3B4C93A8B7DCB358C7F38A54247C0A35E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_0, /*hidden argument*/NULL);
		___t0 = L_1;
		float L_2 = ___p01;
		float L_3 = ___p12;
		float L_4 = ___p23;
		float L_5 = ___p34;
		float L_6 = ___t0;
		float L_7 = ___t0;
		float L_8 = ___p01;
		float L_9 = ___p12;
		float L_10 = ___p23;
		float L_11 = ___t0;
		float L_12 = ___p01;
		float L_13 = ___p12;
		return ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(-3.0f), (float)L_2)), (float)((float)il2cpp_codegen_multiply((float)(9.0f), (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)(9.0f), (float)L_4)))), (float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_5)))), (float)L_6)), (float)L_7)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(6.0f), (float)L_8)), (float)((float)il2cpp_codegen_multiply((float)(12.0f), (float)L_9)))), (float)((float)il2cpp_codegen_multiply((float)(6.0f), (float)L_10)))), (float)L_11)))), (float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_12)))), (float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_13))));
	}
}
// System.Void Cinemachine.Utility.SplineHelpers::ComputeSmoothControlPoints(UnityEngine.Vector4[]U26,UnityEngine.Vector4[]U26,UnityEngine.Vector4[]U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineHelpers_ComputeSmoothControlPoints_m3A964E760EA987A9CD68AC92E22952955AE0EC77 (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___knot0, Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___ctrl11, Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___ctrl22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SplineHelpers_ComputeSmoothControlPoints_m3A964E760EA987A9CD68AC92E22952955AE0EC77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_1 = NULL;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_2 = NULL;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_3 = NULL;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_4 = NULL;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_0 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_1 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_0);
		NullCheck(L_1);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)2)))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0052;
		}
	}
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_4 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_5 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_4);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_6 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_7 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_6);
		NullCheck(L_7);
		int32_t L_8 = 0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_10 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_11 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_10);
		NullCheck(L_11);
		int32_t L_12 = 1;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_14 = Vector4_Lerp_mFA160C69C5C6162B9D528643B5807012B2B1EC16(L_9, L_13, (0.33333f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_14);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_15 = ___ctrl22;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_16 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_15);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_17 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_18 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_17);
		NullCheck(L_18);
		int32_t L_19 = 0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_21 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_22 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_21);
		NullCheck(L_22);
		int32_t L_23 = 1;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_25 = Vector4_Lerp_mFA160C69C5C6162B9D528643B5807012B2B1EC16(L_20, L_24, (0.66666f), /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_25);
		return;
	}

IL_0052:
	{
		int32_t L_26 = V_0;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_27 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_28 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_27);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_29 = ___ctrl22;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_30 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_29);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_31 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_32 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_31);
		NullCheck(L_32);
		int32_t L_33 = 0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_35 = L_34;
		V_5 = L_35;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_35);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_36 = V_5;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_36);
	}

IL_0073:
	{
		return;
	}

IL_0074:
	{
		int32_t L_37 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_38 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)L_37);
		V_1 = L_38;
		int32_t L_39 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_40 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)L_39);
		V_2 = L_40;
		int32_t L_41 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_42 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)L_41);
		V_3 = L_42;
		int32_t L_43 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_44 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)L_43);
		V_4 = L_44;
		V_6 = 0;
		goto IL_02c9;
	}

IL_0099:
	{
		int32_t L_45 = V_0;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_46 = V_1;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.0f));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_47 = V_2;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(2.0f));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_48 = V_3;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.0f));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_49 = V_4;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_50 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_51 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_50);
		NullCheck(L_51);
		int32_t L_52 = V_6;
		float L_53 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), L_52, /*hidden argument*/NULL);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_54 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_55 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_54);
		NullCheck(L_55);
		int32_t L_56 = V_6;
		float L_57 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), L_56, /*hidden argument*/NULL);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_add((float)L_53, (float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_57)))));
		V_8 = 1;
		goto IL_0139;
	}

IL_00e4:
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_58 = V_1;
		int32_t L_59 = V_8;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (float)(1.0f));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_60 = V_2;
		int32_t L_61 = V_8;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (float)(4.0f));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_62 = V_3;
		int32_t L_63 = V_8;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (float)(1.0f));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_64 = V_4;
		int32_t L_65 = V_8;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_66 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_67 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_66);
		int32_t L_68 = V_8;
		NullCheck(L_67);
		int32_t L_69 = V_6;
		float L_70 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68))), L_69, /*hidden argument*/NULL);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_71 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_72 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_71);
		int32_t L_73 = V_8;
		NullCheck(L_72);
		int32_t L_74 = V_6;
		float L_75 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1))))), L_74, /*hidden argument*/NULL);
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(4.0f), (float)L_70)), (float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_75)))));
		int32_t L_76 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_0139:
	{
		int32_t L_77 = V_8;
		int32_t L_78 = V_7;
		if ((((int32_t)L_77) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_78, (int32_t)1)))))
		{
			goto IL_00e4;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_79 = V_1;
		int32_t L_80 = V_7;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)1))), (float)(2.0f));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_81 = V_2;
		int32_t L_82 = V_7;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_82, (int32_t)1))), (float)(7.0f));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_83 = V_3;
		int32_t L_84 = V_7;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_84, (int32_t)1))), (float)(0.0f));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_85 = V_4;
		int32_t L_86 = V_7;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_87 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_88 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_87);
		int32_t L_89 = V_7;
		NullCheck(L_88);
		int32_t L_90 = V_6;
		float L_91 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)1))))), L_90, /*hidden argument*/NULL);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_92 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_93 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_92);
		int32_t L_94 = V_7;
		NullCheck(L_93);
		int32_t L_95 = V_6;
		float L_96 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_94))), L_95, /*hidden argument*/NULL);
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_86, (int32_t)1))), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(8.0f), (float)L_91)), (float)L_96)));
		V_9 = 1;
		goto IL_01d1;
	}

IL_0197:
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_97 = V_1;
		int32_t L_98 = V_9;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		float L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_101 = V_2;
		int32_t L_102 = V_9;
		NullCheck(L_101);
		int32_t L_103 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_102, (int32_t)1));
		float L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		V_10 = ((float)((float)L_100/(float)L_104));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_105 = V_2;
		int32_t L_106 = V_9;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_107 = V_2;
		int32_t L_108 = V_9;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		float L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		float L_111 = V_10;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_112 = V_3;
		int32_t L_113 = V_9;
		NullCheck(L_112);
		int32_t L_114 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_113, (int32_t)1));
		float L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(L_106), (float)((float)il2cpp_codegen_subtract((float)L_110, (float)((float)il2cpp_codegen_multiply((float)L_111, (float)L_115)))));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_116 = V_4;
		int32_t L_117 = V_9;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_118 = V_4;
		int32_t L_119 = V_9;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		float L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		float L_122 = V_10;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_123 = V_4;
		int32_t L_124 = V_9;
		NullCheck(L_123);
		int32_t L_125 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_124, (int32_t)1));
		float L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(L_117), (float)((float)il2cpp_codegen_subtract((float)L_121, (float)((float)il2cpp_codegen_multiply((float)L_122, (float)L_126)))));
		int32_t L_127 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)1));
	}

IL_01d1:
	{
		int32_t L_128 = V_9;
		int32_t L_129 = V_7;
		if ((((int32_t)L_128) < ((int32_t)L_129)))
		{
			goto IL_0197;
		}
	}
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_130 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_131 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_130);
		int32_t L_132 = V_7;
		NullCheck(L_131);
		int32_t L_133 = V_6;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_134 = V_4;
		int32_t L_135 = V_7;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_135, (int32_t)1));
		float L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_138 = V_2;
		int32_t L_139 = V_7;
		NullCheck(L_138);
		int32_t L_140 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_139, (int32_t)1));
		float L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_131)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_132, (int32_t)1))))), L_133, ((float)((float)L_137/(float)L_141)), /*hidden argument*/NULL);
		int32_t L_142 = V_7;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_142, (int32_t)2));
		goto IL_0237;
	}

IL_01ff:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_143 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_144 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_143);
		int32_t L_145 = V_11;
		NullCheck(L_144);
		int32_t L_146 = V_6;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_147 = V_4;
		int32_t L_148 = V_11;
		NullCheck(L_147);
		int32_t L_149 = L_148;
		float L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_151 = V_3;
		int32_t L_152 = V_11;
		NullCheck(L_151);
		int32_t L_153 = L_152;
		float L_154 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_155 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_156 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_155);
		int32_t L_157 = V_11;
		NullCheck(L_156);
		int32_t L_158 = V_6;
		float L_159 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_156)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_157, (int32_t)1))))), L_158, /*hidden argument*/NULL);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_160 = V_2;
		int32_t L_161 = V_11;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		float L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_144)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_145))), L_146, ((float)((float)((float)il2cpp_codegen_subtract((float)L_150, (float)((float)il2cpp_codegen_multiply((float)L_154, (float)L_159))))/(float)L_163)), /*hidden argument*/NULL);
		int32_t L_164 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_164, (int32_t)1));
	}

IL_0237:
	{
		int32_t L_165 = V_11;
		if ((((int32_t)L_165) >= ((int32_t)0)))
		{
			goto IL_01ff;
		}
	}
	{
		V_12 = 0;
		goto IL_0282;
	}

IL_0241:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_166 = ___ctrl22;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_167 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_166);
		int32_t L_168 = V_12;
		NullCheck(L_167);
		int32_t L_169 = V_6;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_170 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_171 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_170);
		int32_t L_172 = V_12;
		NullCheck(L_171);
		int32_t L_173 = V_6;
		float L_174 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_171)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_172, (int32_t)1))))), L_173, /*hidden argument*/NULL);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_175 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_176 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_175);
		int32_t L_177 = V_12;
		NullCheck(L_176);
		int32_t L_178 = V_6;
		float L_179 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_176)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_177, (int32_t)1))))), L_178, /*hidden argument*/NULL);
		Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_167)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_168))), L_169, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_174)), (float)L_179)), /*hidden argument*/NULL);
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)1));
	}

IL_0282:
	{
		int32_t L_181 = V_12;
		int32_t L_182 = V_7;
		if ((((int32_t)L_181) < ((int32_t)L_182)))
		{
			goto IL_0241;
		}
	}
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_183 = ___ctrl22;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_184 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_183);
		int32_t L_185 = V_7;
		NullCheck(L_184);
		int32_t L_186 = V_6;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_187 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_188 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_187);
		int32_t L_189 = V_7;
		NullCheck(L_188);
		int32_t L_190 = V_6;
		float L_191 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_188)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_189))), L_190, /*hidden argument*/NULL);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_192 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_193 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_192);
		int32_t L_194 = V_7;
		NullCheck(L_193);
		int32_t L_195 = V_6;
		float L_196 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_193)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_194, (int32_t)1))))), L_195, /*hidden argument*/NULL);
		Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_184)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_185, (int32_t)1))))), L_186, ((float)il2cpp_codegen_multiply((float)(0.5f), (float)((float)il2cpp_codegen_add((float)L_191, (float)L_196)))), /*hidden argument*/NULL);
		int32_t L_197 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_197, (int32_t)1));
	}

IL_02c9:
	{
		int32_t L_198 = V_6;
		if ((((int32_t)L_198) < ((int32_t)4)))
		{
			goto IL_0099;
		}
	}
	{
		return;
	}
}
// System.Void Cinemachine.Utility.SplineHelpers::ComputeSmoothControlPointsLooped(UnityEngine.Vector4[]U26,UnityEngine.Vector4[]U26,UnityEngine.Vector4[]U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineHelpers_ComputeSmoothControlPointsLooped_m288EB1A7D40A21693220453AA7A0AD7802FCB409 (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___knot0, Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___ctrl11, Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___ctrl22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SplineHelpers_ComputeSmoothControlPointsLooped_m288EB1A7D40A21693220453AA7A0AD7802FCB409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_2 = NULL;
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_3 = NULL;
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_4 = NULL;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_0 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_1 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_0);
		NullCheck(L_1);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)2)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_4 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_5 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_4);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_6 = ___ctrl22;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_7 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_6);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_8 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_9 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_8);
		NullCheck(L_9);
		int32_t L_10 = 0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_12 = L_11;
		V_5 = L_12;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_12);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_13 = V_5;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_13);
	}

IL_002a:
	{
		return;
	}

IL_002b:
	{
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_15 = Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A(4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_15;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_18 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)SZArrayNew(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_17)))));
		V_2 = L_18;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_21 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)SZArrayNew(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_20)))));
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23 = V_1;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_24 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)SZArrayNew(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_23)))));
		V_4 = L_24;
		V_6 = 0;
		goto IL_008c;
	}

IL_005c:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_25 = V_2;
		int32_t L_26 = V_6;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_27 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_28 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_27);
		int32_t L_29 = V_0;
		int32_t L_30 = V_1;
		int32_t L_31 = V_6;
		NullCheck(L_28);
		int32_t L_32 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31))));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_33 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_33);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = V_1;
		int32_t L_37 = V_6;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_38 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_39 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_38);
		int32_t L_40 = V_6;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36)), (int32_t)L_37))), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_42);
		int32_t L_43 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_44 = V_6;
		int32_t L_45 = V_1;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_005c;
		}
	}
	{
		V_7 = 0;
		goto IL_00af;
	}

IL_0096:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_46 = V_2;
		int32_t L_47 = V_7;
		int32_t L_48 = V_1;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_49 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_50 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_49);
		int32_t L_51 = V_7;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48))), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_53);
		int32_t L_54 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_00af:
	{
		int32_t L_55 = V_7;
		int32_t L_56 = V_0;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0096;
		}
	}
	{
		SplineHelpers_ComputeSmoothControlPoints_m3A964E760EA987A9CD68AC92E22952955AE0EC77((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)(&V_2), (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)(&V_3), (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)(&V_4), /*hidden argument*/NULL);
		V_8 = 0;
		goto IL_00f1;
	}

IL_00c4:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_57 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_58 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_57);
		int32_t L_59 = V_8;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_60 = V_3;
		int32_t L_61 = V_8;
		int32_t L_62 = V_1;
		NullCheck(L_60);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)L_62));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_64 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_64);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_65 = ___ctrl22;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_66 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_65);
		int32_t L_67 = V_8;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_68 = V_4;
		int32_t L_69 = V_8;
		int32_t L_70 = V_1;
		NullCheck(L_68);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)L_70));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_72 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_72);
		int32_t L_73 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
	}

IL_00f1:
	{
		int32_t L_74 = V_8;
		int32_t L_75 = V_0;
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_00c4;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::SlerpWithReferenceUp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  UnityQuaternionExtensions_SlerpWithReferenceUp_mFAB3BC9FE543C85352CFF3F33E5D602C41D15852 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___qA0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___qB1, float ___t2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityQuaternionExtensions_SlerpWithReferenceUp_mFAB3BC9FE543C85352CFF3F33E5D602C41D15852_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___qA0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_0, L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___up3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = ___qB1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_5, L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = ___up3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		bool L_11 = UnityVectorExtensions_AlmostZero_m84B33A88B8B7FB2305B3F8E36FF15C6C4E27F86E(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0034;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_1;
		bool L_13 = UnityVectorExtensions_AlmostZero_m84B33A88B8B7FB2305B3F8E36FF15C6C4E27F86E(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_003d;
		}
	}

IL_0034:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = ___qA0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = ___qB1;
		float L_16 = ___t2;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_14, L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_003d:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = ___up3;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_18, L_19, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = L_20;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_21, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = ___qA0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_22, L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = L_21;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_25, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_27 = ___qB1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_26, L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_2), /*hidden argument*/NULL);
		V_4 = L_29;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_3), /*hidden argument*/NULL);
		V_5 = L_30;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_4;
		float L_32 = L_31.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_5;
		float L_34 = L_33.get_x_2();
		float L_35 = ___t2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_36 = Mathf_LerpAngle_m8802FB8DCECA2D48FDD13C20F384B9430E66C99F(L_32, L_34, L_35, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = V_4;
		float L_38 = L_37.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = V_5;
		float L_40 = L_39.get_y_3();
		float L_41 = ___t2;
		float L_42 = Mathf_LerpAngle_m8802FB8DCECA2D48FDD13C20F384B9430E66C99F(L_38, L_40, L_41, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = V_4;
		float L_44 = L_43.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = V_5;
		float L_46 = L_45.get_z_4();
		float L_47 = ___t2;
		float L_48 = Mathf_LerpAngle_m8802FB8DCECA2D48FDD13C20F384B9430E66C99F(L_44, L_46, L_47, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_49 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_36, L_42, L_48, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_50 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_25, L_49, /*hidden argument*/NULL);
		return L_50;
	}
}
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::Normalized(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  UnityQuaternionExtensions_Normalized_mB006F33E658FDC8C1816178450C650804F7201CB (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q0, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___q0;
		float L_1 = L_0.get_x_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = ___q0;
		float L_3 = L_2.get_y_1();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___q0;
		float L_5 = L_4.get_z_2();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = ___q0;
		float L_7 = L_6.get_w_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_9 = Vector4_get_normalized_mE211195F38FA106A1B303EB0DA78F21BB5C469C3((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_9;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_10 = V_0;
		float L_11 = L_10.get_x_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_12 = V_0;
		float L_13 = L_12.get_y_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_14 = V_0;
		float L_15 = L_14.get_z_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_16 = V_0;
		float L_17 = L_16.get_w_4();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((&L_18), L_11, L_13, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// UnityEngine.Vector2 Cinemachine.Utility.UnityQuaternionExtensions::GetCameraRotationToTarget(UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  UnityQuaternionExtensions_GetCameraRotationToTarget_m2FC346D5CDC3FA3E81B1D35B4667D72034572B67 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orient0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtDir1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldUp2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityQuaternionExtensions_GetCameraRotationToTarget_m2FC346D5CDC3FA3E81B1D35B4667D72034572B67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___lookAtDir1;
		bool L_1 = UnityVectorExtensions_AlmostZero_m84B33A88B8B7FB2305B3F8E36FF15C6C4E27F86E(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = ___orient0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_3, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = L_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___worldUp2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = ___lookAtDir1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_5, L_8, /*hidden argument*/NULL);
		___lookAtDir1 = L_9;
		V_1 = (0.0f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___lookAtDir1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA(L_10, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_3;
		bool L_14 = UnityVectorExtensions_AlmostZero_m84B33A88B8B7FB2305B3F8E36FF15C6C4E27F86E(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0085;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA(L_15, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_4;
		bool L_19 = UnityVectorExtensions_AlmostZero_m84B33A88B8B7FB2305B3F8E36FF15C6C4E27F86E(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_007b;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_22 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_20, L_21, /*hidden argument*/NULL);
		if ((!(((float)L_22) > ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA(L_23, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		goto IL_007b;
	}

IL_006e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA(L_26, L_27, /*hidden argument*/NULL);
		V_4 = L_28;
	}

IL_007b:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_0;
		float L_32 = UnityVectorExtensions_SignedAngle_m9524F338C782113E60868447BBADFCA1885DD81E(L_29, L_30, L_31, /*hidden argument*/NULL);
		V_1 = L_32;
	}

IL_0085:
	{
		float L_33 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_33, L_34, /*hidden argument*/NULL);
		V_2 = L_35;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_36, L_37, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = ___lookAtDir1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_40, L_41, /*hidden argument*/NULL);
		float L_43 = UnityVectorExtensions_SignedAngle_m9524F338C782113E60868447BBADFCA1885DD81E(L_38, L_39, L_42, /*hidden argument*/NULL);
		float L_44 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_45), L_43, L_44, /*hidden argument*/NULL);
		return L_45;
	}
}
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::ApplyCameraRotation(UnityEngine.Quaternion,UnityEngine.Vector2,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  UnityQuaternionExtensions_ApplyCameraRotation_m3E5594FA8D22EECF7DD709A26493DE5FAD7B0814 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orient0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rot1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldUp2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityQuaternionExtensions_ApplyCameraRotation_m3E5594FA8D22EECF7DD709A26493DE5FAD7B0814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___rot1;
		float L_1 = L_0.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ___rot1;
		float L_5 = L_4.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___worldUp2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_5, L_6, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = ___orient0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_7, L_8, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rect Cinemachine.Utility.UnityRectExtensions::Inflated(UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  UnityRectExtensions_Inflated_m5AA81D3FFB2CECE0523B2D03025E3448B82353D7 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___r0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___delta1, const RuntimeMethod* method)
{
	{
		float L_0 = Rect_get_xMin_mFDFA74F66595FD2B8CE360183D1A92B575F0A76E((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r0), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___delta1;
		float L_2 = L_1.get_x_0();
		float L_3 = Rect_get_yMin_m31EDC3262BE39D2F6464B15397F882237E6158C3((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r0), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ___delta1;
		float L_5 = L_4.get_y_1();
		float L_6 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r0), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = ___delta1;
		float L_8 = L_7.get_x_0();
		float L_9 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r0), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = ___delta1;
		float L_11 = L_10.get_y_1();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_12), ((float)il2cpp_codegen_subtract((float)L_0, (float)L_2)), ((float)il2cpp_codegen_subtract((float)L_3, (float)L_5)), ((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_8, (float)(2.0f))))), ((float)il2cpp_codegen_add((float)L_9, (float)((float)il2cpp_codegen_multiply((float)L_11, (float)(2.0f))))), /*hidden argument*/NULL);
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Cinemachine.Utility.UnityVectorExtensions::ClosestPointOnSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_ClosestPointOnSegment_m89420D378AF96EDCA793B2D1411F2BFB7AB23BD5 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s01, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_ClosestPointOnSegment_m89420D378AF96EDCA793B2D1411F2BFB7AB23BD5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___s12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___s01;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		float L_4 = Vector3_SqrMagnitude_mBE7ED92F28BBE09310975CDF329913C04EA9500E(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = V_1;
		if ((!(((float)L_5) < ((float)(0.0001f)))))
		{
			goto IL_001d;
		}
	}
	{
		return (0.0f);
	}

IL_001d:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___p0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___s01;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		float L_10 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_8, L_9, /*hidden argument*/NULL);
		float L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(((float)((float)L_10/(float)L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::ClosestPointOnSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_ClosestPointOnSegment_mC7EE05468599609A04DE0F031B7272731102F20F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___s01, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___s12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_ClosestPointOnSegment_mC7EE05468599609A04DE0F031B7272731102F20F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___s12;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___s01;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = V_0;
		float L_4 = Vector2_SqrMagnitude_m1095C695F57FB6A2C440F3FEA6876ABB87F0C696(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = V_1;
		if ((!(((float)L_5) < ((float)(0.0001f)))))
		{
			goto IL_001d;
		}
	}
	{
		return (0.0f);
	}

IL_001d:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___p0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = ___s01;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_6, L_7, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = V_0;
		float L_10 = Vector2_Dot_m34F6A75BE3FC6F728233811943AC4406C7D905BA(L_8, L_9, /*hidden argument*/NULL);
		float L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(((float)((float)L_10/(float)L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::ProjectOntoPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___planeNormal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___vector0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___vector0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___planeNormal1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_3 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_1, L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___planeNormal1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_3, L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::Abs(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnityVectorExtensions_Abs_m306CBBA7519A685B4A409FA92A75A450A7A03E82 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_Abs_m306CBBA7519A685B4A409FA92A75A450A7A03E82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___v0;
		float L_4 = L_3.get_y_3();
		float L_5 = fabsf(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___v0;
		float L_7 = L_6.get_z_4();
		float L_8 = fabsf(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::AlmostZero(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_AlmostZero_m84B33A88B8B7FB2305B3F8E36FF15C6C4E27F86E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method)
{
	{
		float L_0 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___v0), /*hidden argument*/NULL);
		return (bool)((((float)L_0) < ((float)(9.999999E-09f)))? 1 : 0);
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_Angle_m1C0203CE5F691DE761EF73814F8C095B1C34960D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v10, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_Angle_m1C0203CE5F691DE761EF73814F8C095B1C34960D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___v10), /*hidden argument*/NULL);
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___v21), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___v10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___v21;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___v10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___v21;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_8 = atan2f(L_3, L_7);
		return ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)(57.29578f))), (float)(2.0f)));
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_SignedAngle_m9524F338C782113E60868447BBADFCA1885DD81E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v10, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v21, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_SignedAngle_m9524F338C782113E60868447BBADFCA1885DD81E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___v10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___v21;
		float L_2 = UnityVectorExtensions_Angle_m1C0203CE5F691DE761EF73814F8C095B1C34960D(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___up2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___v10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___v21;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_4, L_5, /*hidden argument*/NULL);
		float L_7 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_3, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_8 = Mathf_Sign_m6FA1D12786BEE0419D4B9426E5E4955F286BC8D3(L_7, /*hidden argument*/NULL);
		if ((!(((float)L_8) < ((float)(0.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		float L_9 = V_0;
		return ((-L_9));
	}

IL_0024:
	{
		float L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::SlerpWithReferenceUp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnityVectorExtensions_SlerpWithReferenceUp_mEE30111040FD07F0FC9C43E63FC4C40A1554C18E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vA0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vB1, float ___t2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_SlerpWithReferenceUp_mEE30111040FD07F0FC9C43E63FC4C40A1554C18E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		float L_0 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___vA0), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___vB1), /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		if ((((float)L_2) < ((float)(0.0001f))))
		{
			goto IL_0020;
		}
	}
	{
		float L_3 = V_1;
		if ((!(((float)L_3) < ((float)(0.0001f)))))
		{
			goto IL_0029;
		}
	}

IL_0020:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___vA0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___vB1;
		float L_6 = ___t2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0029:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = ___vA0;
		float L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_8, L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = ___vB1;
		float L_12 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_11, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = ___up3;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_10, L_14, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = ___up3;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_16, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = V_3;
		float L_20 = ___t2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = ___up3;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = UnityQuaternionExtensions_SlerpWithReferenceUp_mFAB3BC9FE543C85352CFF3F33E5D602C41D15852(L_15, L_19, L_20, L_21, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_22, L_23, /*hidden argument*/NULL);
		float L_25 = V_0;
		float L_26 = V_1;
		float L_27 = ___t2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_28 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_25, L_26, L_27, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_24, L_28, /*hidden argument*/NULL);
		return L_29;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CinemachineCameraOffset::PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore_Stage,Cinemachine.CameraStateU26,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineCameraOffset_PostPipelineStageCallback_m98CDEA837F38BEC706C5C19B6848FE2519C769AF (CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693 * __this, CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___vcam0, int32_t ___stage1, CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * ___state2, float ___deltaTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineCameraOffset_PostPipelineStageCallback_m98CDEA837F38BEC706C5C19B6848FE2519C769AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___stage1;
		int32_t L_1 = __this->get_m_ApplyAfter_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_003f;
		}
	}
	{
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_2 = ___state2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = CameraState_get_FinalOrientation_m97F7CE1DA761F44232FAAD32F961D40A88215997((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_m_Offset_7();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_6 = ___state2;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_7 = L_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = CameraState_get_ReferenceLookAt_m3FCCFB59361130B202C526D5F88FA11E1CC796EC((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_8, L_9, /*hidden argument*/NULL);
		CameraState_set_ReferenceLookAt_mA8042F824F3D6E61BA8C3FB4BDDC5B1804D72120((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_7, L_10, /*hidden argument*/NULL);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_11 = ___state2;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_12 = L_11;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = CameraState_get_PositionCorrection_m81476CD9BBC93E1AE8A47E6BA8D6E08F112D1CFD((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_12, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_13, L_14, /*hidden argument*/NULL);
		CameraState_set_PositionCorrection_m28C42BA08144F3949ED3D64398CAA5DD6715AD0B((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_12, L_15, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void CinemachineCameraOffset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineCameraOffset__ctor_m041AEDA39C96235AAB2B126101AFB9B79B0EA148 (CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineCameraOffset__ctor_m041AEDA39C96235AAB2B126101AFB9B79B0EA148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_m_Offset_7(L_0);
		__this->set_m_ApplyAfter_8(1);
		CinemachineExtension__ctor_mCB3BFE1480EEA85EBB49CE078CA62B9D9EC4CBE9(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CinemachineMixer::OnPlayableDestroy(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineMixer_OnPlayableDestroy_m203C52683CCF327E82DB7C6463A298F3519ACA4E (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineMixer_OnPlayableDestroy_m203C52683CCF327E82DB7C6463A298F3519ACA4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * L_0 = __this->get_mBrain_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * L_2 = __this->get_mBrain_0();
		int32_t L_3 = __this->get_mBrainOverrideId_1();
		NullCheck(L_2);
		CinemachineBrain_ReleaseCameraOverride_m3F5D2F404C9D7D389DCA817491562A04CF148264(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		__this->set_mBrainOverrideId_1((-1));
		return;
	}
}
// System.Void CinemachineMixer::PrepareFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineMixer_PrepareFrame_mD4A60AE6E0DD22BD8FD2E2270F70F3510A395FB5 (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E  ___info1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = FrameData_get_evaluationType_mF0F791BAF13A203A8D80AD4C1474599E1EED5EA4((FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E *)(&___info1), /*hidden argument*/NULL);
		__this->set_mPlaying_2((bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0));
		return;
	}
}
// System.Void CinemachineMixer::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineMixer_ProcessFrame_m352B3F777F7C582E083A7BFF641D84DC8D433F0E (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E  ___info1, RuntimeObject * ___playerData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineMixer_ProcessFrame_m352B3F777F7C582E083A7BFF641D84DC8D433F0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	int32_t V_1 = 0;
	ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  V_10;
	memset((&V_10), 0, sizeof(V_10));
	CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * V_11 = NULL;
	int32_t G_B16_0 = 0;
	RuntimeObject* G_B25_0 = NULL;
	RuntimeObject* G_B28_0 = NULL;
	float G_B31_0 = 0.0f;
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_0 = ___playable0;
		FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E  L_1 = ___info1;
		RuntimeObject * L_2 = ___playerData2;
		PlayableBehaviour_ProcessFrame_m32F9B265BB54D1A3A290E2709FDD0B873360B25A(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		RuntimeObject * L_3 = ___playerData2;
		V_0 = ((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)IsInstSealed((RuntimeObject*)L_3, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject * L_6 = ___playerData2;
		__this->set_mBrain_0(((CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB *)CastclassClass((RuntimeObject*)L_6, CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_il2cpp_TypeInfo_var)));
		goto IL_0033;
	}

IL_0027:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_0;
		NullCheck(L_7);
		CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * L_8 = GameObject_GetComponent_TisCinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_mBD916E48F072E85917A54BADF9B02330C838FEA0(L_7, /*hidden argument*/GameObject_GetComponent_TisCinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_mBD916E48F072E85917A54BADF9B02330C838FEA0_RuntimeMethod_var);
		__this->set_mBrain_0(L_8);
	}

IL_0033:
	{
		CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * L_9 = __this->get_mBrain_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		return;
	}

IL_0042:
	{
		V_1 = 0;
		il2cpp_codegen_initobj((&V_2), sizeof(ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288 ));
		il2cpp_codegen_initobj((&V_3), sizeof(ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288 ));
		V_8 = 0;
		goto IL_00e0;
	}

IL_005c:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_11 = ___playable0;
		int32_t L_12 = V_8;
		float L_13 = PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBBA41EE4D02AA0A1B68FCD6F432BD9C3C06E2F0C(L_11, L_12, /*hidden argument*/PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBBA41EE4D02AA0A1B68FCD6F432BD9C3C06E2F0C_RuntimeMethod_var);
		V_9 = L_13;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_14 = ___playable0;
		int32_t L_15 = V_8;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_16 = PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m02EFE600B3A94F99F824DCDD0680EF46E16B687D(L_14, L_15, /*hidden argument*/PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m02EFE600B3A94F99F824DCDD0680EF46E16B687D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_17 = ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652(L_16, /*hidden argument*/ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652_RuntimeMethod_var);
		V_10 = L_17;
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_18 = ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8((ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A *)(&V_10), /*hidden argument*/ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8_RuntimeMethod_var);
		V_11 = L_18;
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_19 = V_11;
		if (!L_19)
		{
			goto IL_00da;
		}
	}
	{
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_20 = V_11;
		NullCheck(L_20);
		bool L_21 = CinemachineShotPlayable_get_IsValid_m4172ABD6CCCEBB37F7BAEE66087F996C4C353F2C(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00da;
		}
	}
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_22 = ___playable0;
		int32_t L_23 = PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981(L_22, /*hidden argument*/PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981_RuntimeMethod_var);
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_00da;
		}
	}
	{
		float L_24 = V_9;
		if ((!(((float)L_24) > ((float)(0.0f)))))
		{
			goto IL_00da;
		}
	}
	{
		ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  L_25 = V_3;
		V_2 = L_25;
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_26 = V_11;
		NullCheck(L_26);
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_27 = L_26->get_VirtualCamera_0();
		(&V_3)->set_vcam_0(L_27);
		float L_28 = V_9;
		(&V_3)->set_weight_1(L_28);
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_29 = V_10;
		double L_30 = PlayableExtensions_GetTime_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m9B581EE3C3F65A6AE31A2438115DA7B362C14134(L_29, /*hidden argument*/PlayableExtensions_GetTime_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m9B581EE3C3F65A6AE31A2438115DA7B362C14134_RuntimeMethod_var);
		(&V_3)->set_localTime_2(L_30);
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_31 = V_10;
		double L_32 = PlayableExtensions_GetDuration_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m410DA7C7A2DC6374AD951D381CF611710AE421CD(L_31, /*hidden argument*/PlayableExtensions_GetDuration_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m410DA7C7A2DC6374AD951D381CF611710AE421CD_RuntimeMethod_var);
		(&V_3)->set_duration_3(L_32);
		int32_t L_33 = V_1;
		int32_t L_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		V_1 = L_34;
		if ((((int32_t)L_34) == ((int32_t)2)))
		{
			goto IL_00ed;
		}
	}

IL_00da:
	{
		int32_t L_35 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00e0:
	{
		int32_t L_36 = V_8;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_37 = ___playable0;
		int32_t L_38 = PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mC15D789D7CD8858FC1EBCA1ACC56F6C7AD829B3B(L_37, /*hidden argument*/PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mC15D789D7CD8858FC1EBCA1ACC56F6C7AD829B3B_RuntimeMethod_var);
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_005c;
		}
	}

IL_00ed:
	{
		ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  L_39 = V_3;
		float L_40 = L_39.get_weight_1();
		if ((((float)L_40) >= ((float)(1.0f))))
		{
			goto IL_0114;
		}
	}
	{
		ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  L_41 = V_3;
		double L_42 = L_41.get_localTime_2();
		ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  L_43 = V_3;
		double L_44 = L_43.get_duration_3();
		G_B16_0 = ((((double)L_42) < ((double)((double)((double)L_44/(double)(2.0)))))? 1 : 0);
		goto IL_0115;
	}

IL_0114:
	{
		G_B16_0 = 1;
	}

IL_0115:
	{
		V_4 = (bool)G_B16_0;
		int32_t L_45 = V_1;
		if ((!(((uint32_t)L_45) == ((uint32_t)2))))
		{
			goto IL_0154;
		}
	}
	{
		ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  L_46 = V_3;
		double L_47 = L_46.get_localTime_2();
		ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  L_48 = V_2;
		double L_49 = L_48.get_localTime_2();
		if ((!(((double)L_47) < ((double)L_49))))
		{
			goto IL_012e;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_0154;
	}

IL_012e:
	{
		ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  L_50 = V_3;
		double L_51 = L_50.get_localTime_2();
		ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  L_52 = V_2;
		double L_53 = L_52.get_localTime_2();
		if ((!(((double)L_51) > ((double)L_53))))
		{
			goto IL_0141;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_0154;
	}

IL_0141:
	{
		ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  L_54 = V_3;
		double L_55 = L_54.get_duration_3();
		ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  L_56 = V_2;
		double L_57 = L_56.get_duration_3();
		V_4 = (bool)((((int32_t)((!(((double)L_55) >= ((double)L_57)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0154:
	{
		bool L_58 = V_4;
		if (L_58)
		{
			goto IL_0160;
		}
	}
	{
		ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  L_59 = V_3;
		RuntimeObject* L_60 = L_59.get_vcam_0();
		G_B25_0 = L_60;
		goto IL_0166;
	}

IL_0160:
	{
		ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  L_61 = V_2;
		RuntimeObject* L_62 = L_61.get_vcam_0();
		G_B25_0 = L_62;
	}

IL_0166:
	{
		V_5 = G_B25_0;
		bool L_63 = V_4;
		if (L_63)
		{
			goto IL_0174;
		}
	}
	{
		ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  L_64 = V_2;
		RuntimeObject* L_65 = L_64.get_vcam_0();
		G_B28_0 = L_65;
		goto IL_017a;
	}

IL_0174:
	{
		ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  L_66 = V_3;
		RuntimeObject* L_67 = L_66.get_vcam_0();
		G_B28_0 = L_67;
	}

IL_017a:
	{
		V_6 = G_B28_0;
		bool L_68 = V_4;
		if (L_68)
		{
			goto IL_018e;
		}
	}
	{
		ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  L_69 = V_3;
		float L_70 = L_69.get_weight_1();
		G_B31_0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_70));
		goto IL_0194;
	}

IL_018e:
	{
		ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288  L_71 = V_3;
		float L_72 = L_71.get_weight_1();
		G_B31_0 = L_72;
	}

IL_0194:
	{
		V_7 = G_B31_0;
		CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * L_73 = __this->get_mBrain_0();
		int32_t L_74 = __this->get_mBrainOverrideId_1();
		RuntimeObject* L_75 = V_5;
		RuntimeObject* L_76 = V_6;
		float L_77 = V_7;
		float L_78 = FrameData_get_deltaTime_m819B2E98971747205F7B8A66044C537FB79C719A((FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E *)(&___info1), /*hidden argument*/NULL);
		float L_79 = CinemachineMixer_GetDeltaTime_m72CBDCB346C8BC4C6EF68032ECB956D660B8BEE2(__this, L_78, /*hidden argument*/NULL);
		NullCheck(L_73);
		int32_t L_80 = CinemachineBrain_SetCameraOverride_mFC78E28A5BBA366F03D3EDA96B778B9D3FF705FE(L_73, L_74, L_75, L_76, L_77, L_79, /*hidden argument*/NULL);
		__this->set_mBrainOverrideId_1(L_80);
		return;
	}
}
// System.Single CinemachineMixer::GetDeltaTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineMixer_GetDeltaTime_m72CBDCB346C8BC4C6EF68032ECB956D660B8BEE2 (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, float ___deltaTime0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		bool L_0 = __this->get_mPlaying_2();
		if (L_0)
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_1 = __this->get_mBrainOverrideId_1();
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		__this->set_mLastOverrideFrame_3((-1.0f));
	}

IL_001c:
	{
		float L_2 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		___deltaTime0 = L_3;
		bool L_4 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0053;
		}
	}
	{
		float L_5 = __this->get_mLastOverrideFrame_3();
		if ((((float)L_5) < ((float)(0.0f))))
		{
			goto IL_004c;
		}
	}
	{
		float L_6 = V_0;
		float L_7 = __this->get_mLastOverrideFrame_3();
		float L_8 = Time_get_maximumDeltaTime_mFE39C41ABEA1A3617FFCFF079C23063E5435E480(/*hidden argument*/NULL);
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_6, (float)L_7))) > ((float)L_8))))
		{
			goto IL_0053;
		}
	}

IL_004c:
	{
		___deltaTime0 = (-1.0f);
	}

IL_0053:
	{
		float L_9 = V_0;
		__this->set_mLastOverrideFrame_3(L_9);
	}

IL_005a:
	{
		float L_10 = ___deltaTime0;
		return L_10;
	}
}
// System.Void CinemachineMixer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineMixer__ctor_m09750A02EC7DBB188AEE7EB9414C264B72963061 (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, const RuntimeMethod* method)
{
	{
		__this->set_mBrainOverrideId_1((-1));
		PlayableBehaviour__ctor_mE96A877D927BEEC8C9368A0673FEAD77A78C35EE(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: CinemachineMixer/ClipInfo
IL2CPP_EXTERN_C void ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshal_pinvoke(const ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288& unmarshaled, ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshaled_pinvoke& marshaled)
{
	Exception_t* ___vcam_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'vcam' of type 'ClipInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___vcam_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshal_pinvoke_back(const ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshaled_pinvoke& marshaled, ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288& unmarshaled)
{
	Exception_t* ___vcam_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'vcam' of type 'ClipInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___vcam_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: CinemachineMixer/ClipInfo
IL2CPP_EXTERN_C void ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshal_pinvoke_cleanup(ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: CinemachineMixer/ClipInfo
IL2CPP_EXTERN_C void ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshal_com(const ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288& unmarshaled, ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshaled_com& marshaled)
{
	Exception_t* ___vcam_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'vcam' of type 'ClipInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___vcam_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshal_com_back(const ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshaled_com& marshaled, ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288& unmarshaled)
{
	Exception_t* ___vcam_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'vcam' of type 'ClipInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___vcam_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: CinemachineMixer/ClipInfo
IL2CPP_EXTERN_C void ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshal_com_cleanup(ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.Playable CinemachineShot::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  CinemachineShot_CreatePlayable_m9FF5653D04CAFD839568D784D68DDE4F63C1A04F (CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5 * __this, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___owner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineShot_CreatePlayable_m9FF5653D04CAFD839568D784D68DDE4F63C1A04F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_1 = ScriptPlayable_1_Create_m4F9F8E48634C7E5FD9D6E5584C850133A54BA699(L_0, 0, /*hidden argument*/ScriptPlayable_1_Create_m4F9F8E48634C7E5FD9D6E5584C850133A54BA699_RuntimeMethod_var);
		V_0 = L_1;
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_2 = ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8((ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A *)(&V_0), /*hidden argument*/ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8_RuntimeMethod_var);
		ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F * L_3 = __this->get_address_of_VirtualCamera_4();
		RuntimeObject* L_4 = PlayableGraph_GetResolver_m52F92B131B65F7412D220BB853C562C5983E884E((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), /*hidden argument*/NULL);
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_5 = ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74((ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F *)L_3, L_4, /*hidden argument*/ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_VirtualCamera_0(L_5);
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_6 = V_0;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_7 = ScriptPlayable_1_op_Implicit_m9388F54AB0598505CA6ED126475CB8DC2172407B(L_6, /*hidden argument*/ScriptPlayable_1_op_Implicit_m9388F54AB0598505CA6ED126475CB8DC2172407B_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void CinemachineShot::GatherProperties(UnityEngine.Playables.PlayableDirector,UnityEngine.Timeline.IPropertyCollector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineShot_GatherProperties_m5E76C61D42947D7BDB3C6258C2EA2C3F2A08F5CF (CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5 * __this, PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * ___director0, RuntimeObject* ___driver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineShot_GatherProperties_m5E76C61D42947D7BDB3C6258C2EA2C3F2A08F5CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___driver1;
		NullCheck(L_0);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m2B8BBF8D072C4630477516A1A1896152D2BE181E_RuntimeMethod_var, L_0, _stringLiteral76F5995D7A1D434E1D7C4046772BDE3F81E26ADA);
		RuntimeObject* L_1 = ___driver1;
		NullCheck(L_1);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m2B8BBF8D072C4630477516A1A1896152D2BE181E_RuntimeMethod_var, L_1, _stringLiteral20B7AF975FE61D31242708B325C2EBE54C427D42);
		RuntimeObject* L_2 = ___driver1;
		NullCheck(L_2);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m2B8BBF8D072C4630477516A1A1896152D2BE181E_RuntimeMethod_var, L_2, _stringLiteralCC357B8329982D47F9D2DAC70F02E7F8E8217DD0);
		RuntimeObject* L_3 = ___driver1;
		NullCheck(L_3);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m2B8BBF8D072C4630477516A1A1896152D2BE181E_RuntimeMethod_var, L_3, _stringLiteral25A7D94AE338306D36C6374758F830F411BC7709);
		RuntimeObject* L_4 = ___driver1;
		NullCheck(L_4);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m2B8BBF8D072C4630477516A1A1896152D2BE181E_RuntimeMethod_var, L_4, _stringLiteralD0BDB1A683AF21C4D3907C91B62158B7170DC94B);
		RuntimeObject* L_5 = ___driver1;
		NullCheck(L_5);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m2B8BBF8D072C4630477516A1A1896152D2BE181E_RuntimeMethod_var, L_5, _stringLiteral7DE47ED25C8CD4D0D230E6261B3C1BE71F746BD6);
		RuntimeObject* L_6 = ___driver1;
		NullCheck(L_6);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m73CA44B43EA4DA7708D4D0CD8AB7CA8D2F9A00C0_RuntimeMethod_var, L_6, _stringLiteralD8EE6A18D5B371A364BE13F498C76E11E321DECB);
		RuntimeObject* L_7 = ___driver1;
		NullCheck(L_7);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m73CA44B43EA4DA7708D4D0CD8AB7CA8D2F9A00C0_RuntimeMethod_var, L_7, _stringLiteral9975DAF0085BA0D080E112D87C20E40CD439A2CC);
		RuntimeObject* L_8 = ___driver1;
		NullCheck(L_8);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m73CA44B43EA4DA7708D4D0CD8AB7CA8D2F9A00C0_RuntimeMethod_var, L_8, _stringLiteralAEEEC79135C627C521C9AF016C69BE1561778B7C);
		return;
	}
}
// System.Void CinemachineShot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineShot__ctor_mD3BD802C29B2EDAB32D5CFBB01CBBEDB1B71217F (CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5 * __this, const RuntimeMethod* method)
{
	{
		PlayableAsset__ctor_m669F459CFACFE65873346E428F206C457B488167(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean CinemachineShotPlayable::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CinemachineShotPlayable_get_IsValid_m4172ABD6CCCEBB37F7BAEE66087F996C4C353F2C (CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineShotPlayable_get_IsValid_m4172ABD6CCCEBB37F7BAEE66087F996C4C353F2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_0 = __this->get_VirtualCamera_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void CinemachineShotPlayable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineShotPlayable__ctor_m03DAD682FCA278DA459078BC36FA94E49E4992B8 (CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * __this, const RuntimeMethod* method)
{
	{
		PlayableBehaviour__ctor_mE96A877D927BEEC8C9368A0673FEAD77A78C35EE(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CinemachineTouchInputMapper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineTouchInputMapper_Start_m961A323D3DFB09D299682C18DC782B8C14E5EA66 (CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineTouchInputMapper_Start_m961A323D3DFB09D299682C18DC782B8C14E5EA66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * L_0 = (AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE *)il2cpp_codegen_object_new(AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE_il2cpp_TypeInfo_var);
		AxisInputDelegate__ctor_m446E4486ABE983D6DA9DB7628CD21EB1D5FC3117(L_0, __this, (intptr_t)((intptr_t)CinemachineTouchInputMapper_GetInputAxis_m4EE4DF4432467189515898E6E6F001F5C6ADBEB6_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_il2cpp_TypeInfo_var);
		((CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_il2cpp_TypeInfo_var))->set_GetInputAxis_4(L_0);
		return;
	}
}
// System.Single CinemachineTouchInputMapper::GetInputAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineTouchInputMapper_GetInputAxis_m4EE4DF4432467189515898E6E6F001F5C6ADBEB6 (CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815 * __this, String_t* ___axisName0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Input_get_touchCount_m2A22A8E963E14F1221F768412663C8D11F806CD6(/*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_1 = ___axisName0;
		String_t* L_2 = __this->get_TouchXInputMapTo_6();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		TouchU5BU5D_t38D94C6D76F3094870385FAC3A56D30651B41571* L_4 = Input_get_touches_m605F63342DC3C26E74843F9CE2F4C191C9151B12(/*hidden argument*/NULL);
		NullCheck(L_4);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Touch_get_deltaPosition_m4AC4D2D44B7DC679AEE11F1613BCFECFDAD6C9E3((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		float L_6 = L_5.get_x_0();
		float L_7 = __this->get_TouchSensitivityX_4();
		return ((float)((float)L_6/(float)L_7));
	}

IL_0033:
	{
		String_t* L_8 = ___axisName0;
		String_t* L_9 = __this->get_TouchYInputMapTo_7();
		bool L_10 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		TouchU5BU5D_t38D94C6D76F3094870385FAC3A56D30651B41571* L_11 = Input_get_touches_m605F63342DC3C26E74843F9CE2F4C191C9151B12(/*hidden argument*/NULL);
		NullCheck(L_11);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = Touch_get_deltaPosition_m4AC4D2D44B7DC679AEE11F1613BCFECFDAD6C9E3((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		float L_13 = L_12.get_y_1();
		float L_14 = __this->get_TouchSensitivityY_5();
		return ((float)((float)L_13/(float)L_14));
	}

IL_005e:
	{
		String_t* L_15 = ___axisName0;
		float L_16 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Void CinemachineTouchInputMapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineTouchInputMapper__ctor_mE93900E7FF5B242DF7B8815D168F5EA59611D38A (CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineTouchInputMapper__ctor_mE93900E7FF5B242DF7B8815D168F5EA59611D38A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_TouchSensitivityX_4((10.0f));
		__this->set_TouchSensitivityY_5((10.0f));
		__this->set_TouchXInputMapTo_6(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0);
		__this->set_TouchYInputMapTo_7(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.Playable CinemachineTrack::CreateTrackMixer(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  CinemachineTrack_CreateTrackMixer_m38B4BFFF64A6E7D9DC6DC02A8D689E5652962DC0 (CinemachineTrack_t6B531D379A33136302768D59460F3E8B1AC6D79D * __this, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___go1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineTrack_CreateTrackMixer_m38B4BFFF64A6E7D9DC6DC02A8D689E5652962DC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * V_1 = NULL;
	CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = TrackAsset_GetClips_m290A1712F5CDEAB3F9453646FCFAF84840D9738E(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TimelineClip>::GetEnumerator() */, IEnumerable_1_t594F7C751FE4B8BAB474313B48B4BF2960B12879_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_000e:
		{
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * L_3 = InterfaceFuncInvoker0< TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Timeline.TimelineClip>::get_Current() */, IEnumerator_1_tE8C6716AE5A02D3C9D6DD62A2326CD99E0687446_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * L_4 = V_1;
			NullCheck(L_4);
			Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_5 = TimelineClip_get_asset_mCF4C0F2153BF18362958432960C87A24B5534245(L_4, /*hidden argument*/NULL);
			NullCheck(((CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5 *)CastclassSealed((RuntimeObject*)L_5, CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5_il2cpp_TypeInfo_var)));
			ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F * L_6 = ((CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5 *)CastclassSealed((RuntimeObject*)L_5, CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5_il2cpp_TypeInfo_var))->get_address_of_VirtualCamera_4();
			RuntimeObject* L_7 = PlayableGraph_GetResolver_m52F92B131B65F7412D220BB853C562C5983E884E((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), /*hidden argument*/NULL);
			CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_8 = ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74((ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F *)L_6, L_7, /*hidden argument*/ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74_RuntimeMethod_var);
			V_2 = L_8;
			CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_9 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_10 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_0047;
			}
		}

IL_003b:
		{
			TimelineClip_tE83BF10CBA35C71678866F5F3E8A05332ADAF5BB * L_11 = V_1;
			CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_12 = V_2;
			NullCheck(L_12);
			String_t* L_13 = CinemachineVirtualCameraBase_get_Name_m4596F7C91EA5A47577FC2A9EBDB78CE6A503B66A(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			TimelineClip_set_displayName_m21424F9A27CD27D4B8D597D35E3C72DA47165EC7(L_11, L_13, /*hidden argument*/NULL);
		}

IL_0047:
		{
			RuntimeObject* L_14 = V_0;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_000e;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_0;
			if (!L_16)
			{
				goto IL_005a;
			}
		}

IL_0054:
		{
			RuntimeObject* L_17 = V_0;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_17);
		}

IL_005a:
		{
			IL2CPP_RESET_LEAVE(0x5B);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005b:
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_18 = ___graph0;
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  L_19 = ScriptPlayable_1_Create_m216BA0DF0D6D5E31EFB40C08EB99C93B74D6BE40(L_18, 0, /*hidden argument*/ScriptPlayable_1_Create_m216BA0DF0D6D5E31EFB40C08EB99C93B74D6BE40_RuntimeMethod_var);
		ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  L_20 = L_19;
		int32_t L_21 = ___inputCount2;
		PlayableExtensions_SetInputCount_TisScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_m7130E49102B29EB624421A4F59B981173FDD3DF1(L_20, L_21, /*hidden argument*/PlayableExtensions_SetInputCount_TisScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_m7130E49102B29EB624421A4F59B981173FDD3DF1_RuntimeMethod_var);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_22 = ScriptPlayable_1_op_Implicit_m6F1FE1C8EFB32C6564EAB7C8E44FB9DF276102D8(L_20, /*hidden argument*/ScriptPlayable_1_op_Implicit_m6F1FE1C8EFB32C6564EAB7C8E44FB9DF276102D8_RuntimeMethod_var);
		return L_22;
	}
}
// System.Void CinemachineTrack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineTrack__ctor_mAA9B41283697063BF5C4624A0BD5F73F1C48AEE0 (CinemachineTrack_t6B531D379A33136302768D59460F3E8B1AC6D79D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineTrack__ctor_mAA9B41283697063BF5C4624A0BD5F73F1C48AEE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_il2cpp_TypeInfo_var);
		TrackAsset__ctor_m2342B924DA6AB605CF953BA756D3570B932B1C05(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
