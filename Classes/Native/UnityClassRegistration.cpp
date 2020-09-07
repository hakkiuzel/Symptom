extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Director();
	RegisterModule_Director();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_Vehicles();
	RegisterModule_Vehicles();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_XR();
	RegisterModule_XR();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_Video();
	RegisterModule_Video();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_TextCore();
	RegisterModule_TextCore();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

namespace ObjectProduceTestTypes { class Derived; } 
namespace ObjectProduceTestTypes { class SubDerived; } 
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; template <> void RegisterUnityClass<AudioFilter>(const char*);
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; template <> void RegisterUnityClass<AudioLowPassFilter>(const char*);
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class BoxCollider2D; template <> void RegisterUnityClass<BoxCollider2D>(const char*);
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; template <> void RegisterUnityClass<CompositeCollider2D>(const char*);
class EdgeCollider2D; 
class PolygonCollider2D; template <> void RegisterUnityClass<PolygonCollider2D>(const char*);
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterUnityClass<FlareLayer>(const char*);
class GUIElement; template <> void RegisterUnityClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterUnityClass<TextRenderingPrivate::GUIText>(const char*);
class GUITexture; template <> void RegisterUnityClass<GUITexture>(const char*);
class GUILayer; template <> void RegisterUnityClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; template <> void RegisterUnityClass<LightProbeGroup>(const char*);
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; template <> void RegisterUnityClass<NavMeshAgent>(const char*);
class NavMeshObstacle; template <> void RegisterUnityClass<NavMeshObstacle>(const char*);
class OffMeshLink; 
class ParticleSystemForceField; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; template <> void RegisterUnityClass<PlayableDirector>(const char*);
class Projector; template <> void RegisterUnityClass<Projector>(const char*);
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; template <> void RegisterUnityClass<Skybox>(const char*);
class SortingGroup; 
class StreamingController; 
class Terrain; template <> void RegisterUnityClass<Terrain>(const char*);
class VideoPlayer; template <> void RegisterUnityClass<VideoPlayer>(const char*);
class VisualEffect; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class TerrainCollider; template <> void RegisterUnityClass<TerrainCollider>(const char*);
class WheelCollider; template <> void RegisterUnityClass<WheelCollider>(const char*);
class FakeComponent; 
namespace Unity { class Joint; } template <> void RegisterUnityClass<Unity::Joint>(const char*);
namespace Unity { class CharacterJoint; } template <> void RegisterUnityClass<Unity::CharacterJoint>(const char*);
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } template <> void RegisterUnityClass<Unity::HingeJoint>(const char*);
namespace Unity { class SpringJoint; } template <> void RegisterUnityClass<Unity::SpringJoint>(const char*);
class LODGroup; template <> void RegisterUnityClass<LODGroup>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; template <> void RegisterUnityClass<BillboardRenderer>(const char*);
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class RendererFake; 
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; template <> void RegisterUnityClass<TrailRenderer>(const char*);
class VFXRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; template <> void RegisterUnityClass<Tree>(const char*);
class WorldAnchor; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AudioMixer; template <> void RegisterUnityClass<AudioMixer>(const char*);
class AudioMixerController; 
class AudioMixerGroup; template <> void RegisterUnityClass<AudioMixerGroup>(const char*);
class AudioMixerGroupController; 
class AudioMixerSnapshot; template <> void RegisterUnityClass<AudioMixerSnapshot>(const char*);
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class AvatarMask; template <> void RegisterUnityClass<AvatarMask>(const char*);
class BillboardAsset; template <> void RegisterUnityClass<BillboardAsset>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; template <> void RegisterUnityClass<Flare>(const char*);
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterUnityClass<PhysicMaterial>(const char*);
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; template <> void RegisterUnityClass<SpeedTreeWindAsset>(const char*);
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; template <> void RegisterUnityClass<TerrainData>(const char*);
class TerrainLayer; template <> void RegisterUnityClass<TerrainLayer>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class CGProgram; template <> void RegisterUnityClass<CGProgram>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; template <> void RegisterUnityClass<VideoClip>(const char*);
class VisualEffectAsset; 
class VisualEffectResource; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class VFXManager; 
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class NativeObjectType; 
class PropertyModificationsTargetTestObject; 
class SerializableManagedHost; 
class SerializableManagedRefTestClass; 
namespace ObjectProduceTestTypes { class SiblingDerived; } 
class TestObjectVectorPairStringBool; 
class TestObjectWithSerializedAnimationCurve; 
class TestObjectWithSerializedArray; 
class TestObjectWithSerializedMapStringBool; 
class TestObjectWithSerializedMapStringNonAlignedStruct; 
class TestObjectWithSpecialLayoutOne; 
class TestObjectWithSpecialLayoutTwo; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 126 non stripped classes
	//0. Camera
	RegisterUnityClass<Camera>("Core");
	//1. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//2. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//3. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//4. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//5. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//6. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//7. GameManager
	RegisterUnityClass<GameManager>("Core");
	//8. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//9. Renderer
	RegisterUnityClass<Renderer>("Core");
	//10. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//11. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//12. Shader
	RegisterUnityClass<Shader>("Core");
	//13. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//14. Material
	RegisterUnityClass<Material>("Core");
	//15. Projector
	RegisterUnityClass<Projector>("Core");
	//16. Light
	RegisterUnityClass<Light>("Core");
	//17. Skybox
	RegisterUnityClass<Skybox>("Core");
	//18. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//19. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//20. Mesh
	RegisterUnityClass<Mesh>("Core");
	//21. Texture
	RegisterUnityClass<Texture>("Core");
	//22. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//23. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//24. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//25. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//26. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//27. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//28. GUIElement
	RegisterUnityClass<GUIElement>("Core");
	//29. GUILayer
	RegisterUnityClass<GUILayer>("Core");
	//30. GameObject
	RegisterUnityClass<GameObject>("Core");
	//31. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//32. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//33. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//34. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//35. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//36. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//37. Transform
	RegisterUnityClass<Transform>("Core");
	//38. Sprite
	RegisterUnityClass<Sprite>("Core");
	//39. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//40. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//41. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//42. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//43. TextRenderingPrivate::GUIText
	RegisterUnityClass<TextRenderingPrivate::GUIText>("TextRendering");
	//44. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//45. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//46. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//47. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//48. Motion
	RegisterUnityClass<Motion>("Animation");
	//49. Animator
	RegisterUnityClass<Animator>("Animation");
	//50. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//51. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//52. Animation
	RegisterUnityClass<Animation>("Animation");
	//53. NavMeshAgent
	RegisterUnityClass<NavMeshAgent>("AI");
	//54. NavMeshObstacle
	RegisterUnityClass<NavMeshObstacle>("AI");
	//55. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//56. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//57. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//58. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//59. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//60. PlayableDirector
	RegisterUnityClass<PlayableDirector>("Director");
	//61. PhysicMaterial
	RegisterUnityClass<PhysicMaterial>("Physics");
	//62. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//63. Collider
	RegisterUnityClass<Collider>("Physics");
	//64. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//65. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//66. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//67. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//68. Unity::Joint
	RegisterUnityClass<Unity::Joint>("Physics");
	//69. Unity::SpringJoint
	RegisterUnityClass<Unity::SpringJoint>("Physics");
	//70. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");
	//71. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//72. BoxCollider2D
	RegisterUnityClass<BoxCollider2D>("Physics2D");
	//73. PolygonCollider2D
	RegisterUnityClass<PolygonCollider2D>("Physics2D");
	//74. CompositeCollider2D
	RegisterUnityClass<CompositeCollider2D>("Physics2D");
	//75. Terrain
	RegisterUnityClass<Terrain>("Terrain");
	//76. TerrainData
	RegisterUnityClass<TerrainData>("Terrain");
	//77. WheelCollider
	RegisterUnityClass<WheelCollider>("Vehicles");
	//78. VideoPlayer
	RegisterUnityClass<VideoPlayer>("Video");
	//79. GUITexture
	RegisterUnityClass<GUITexture>("Core");
	//80. FlareLayer
	RegisterUnityClass<FlareLayer>("Core");
	//81. TrailRenderer
	RegisterUnityClass<TrailRenderer>("Core");
	//82. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//83. Flare
	RegisterUnityClass<Flare>("Core");
	//84. AudioMixerGroup
	RegisterUnityClass<AudioMixerGroup>("Audio");
	//85. TerrainCollider
	RegisterUnityClass<TerrainCollider>("TerrainPhysics");
	//86. Unity::HingeJoint
	RegisterUnityClass<Unity::HingeJoint>("Physics");
	//87. Unity::CharacterJoint
	RegisterUnityClass<Unity::CharacterJoint>("Physics");
	//88. AvatarMask
	RegisterUnityClass<AvatarMask>("Animation");
	//89. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//90. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//91. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//92. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//93. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//94. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//95. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//96. InputManager
	RegisterUnityClass<InputManager>("Core");
	//97. TagManager
	RegisterUnityClass<TagManager>("Core");
	//98. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//99. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//100. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//101. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//102. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//103. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//104. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//105. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//106. BillboardRenderer
	RegisterUnityClass<BillboardRenderer>("Core");
	//107. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//108. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//109. AudioLowPassFilter
	RegisterUnityClass<AudioLowPassFilter>("Audio");
	//110. AudioFilter
	RegisterUnityClass<AudioFilter>("Audio");
	//111. AudioMixer
	RegisterUnityClass<AudioMixer>("Audio");
	//112. AudioMixerSnapshot
	RegisterUnityClass<AudioMixerSnapshot>("Audio");
	//113. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//114. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//115. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//116. LODGroup
	RegisterUnityClass<LODGroup>("Core");
	//117. LightProbeGroup
	RegisterUnityClass<LightProbeGroup>("Core");
	//118. BillboardAsset
	RegisterUnityClass<BillboardAsset>("Core");
	//119. CGProgram
	RegisterUnityClass<CGProgram>("Core");
	//120. SpeedTreeWindAsset
	RegisterUnityClass<SpeedTreeWindAsset>("Terrain");
	//121. Tree
	RegisterUnityClass<Tree>("Terrain");
	//122. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//123. TerrainLayer
	RegisterUnityClass<TerrainLayer>("Terrain");
	//124. VideoClip
	RegisterUnityClass<VideoClip>("Video");
	//125. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");

}
