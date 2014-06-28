#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Engine
#include <com/gamestudiohx/babylonhx/Engine.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Node
#include <com/gamestudiohx/babylonhx/Node.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Scene
#include <com/gamestudiohx/babylonhx/Scene.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_animations_Animation
#include <com/gamestudiohx/babylonhx/animations/Animation.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_bones_Bone
#include <com/gamestudiohx/babylonhx/bones/Bone.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_bones_Skeleton
#include <com/gamestudiohx/babylonhx/bones/Skeleton.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_Camera
#include <com/gamestudiohx/babylonhx/cameras/Camera.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_DirectionalLight
#include <com/gamestudiohx/babylonhx/lights/DirectionalLight.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_HemisphericLight
#include <com/gamestudiohx/babylonhx/lights/HemisphericLight.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_Light
#include <com/gamestudiohx/babylonhx/lights/Light.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_PointLight
#include <com/gamestudiohx/babylonhx/lights/PointLight.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_SpotLight
#include <com/gamestudiohx/babylonhx/lights/SpotLight.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_shadows_ShadowGenerator
#include <com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Effect
#include <com/gamestudiohx/babylonhx/materials/Effect.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Material
#include <com/gamestudiohx/babylonhx/materials/Material.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_StandardMaterial
#include <com/gamestudiohx/babylonhx/materials/StandardMaterial.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BaseTexture
#include <com/gamestudiohx/babylonhx/materials/textures/BaseTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_CubeTexture
#include <com/gamestudiohx/babylonhx/materials/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_RenderTargetTexture
#include <com/gamestudiohx/babylonhx/materials/textures/RenderTargetTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_Texture
#include <com/gamestudiohx/babylonhx/materials/textures/Texture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_IGetSetVerticesData
#include <com/gamestudiohx/babylonhx/mesh/IGetSetVerticesData.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_Mesh
#include <com/gamestudiohx/babylonhx/mesh/Mesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_VertexBuffer
#include <com/gamestudiohx/babylonhx/mesh/VertexBuffer.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_SmartArray
#include <com/gamestudiohx/babylonhx/tools/SmartArray.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color3
#include <com/gamestudiohx/babylonhx/tools/math/Color3.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Plane
#include <com/gamestudiohx/babylonhx/tools/math/Plane.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_gl_GL
#include <openfl/gl/GL.h>
#endif
#ifndef INCLUDED_openfl_utils_ArrayBufferView
#include <openfl/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArray
#include <openfl/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl_utils_Float32Array
#include <openfl/utils/Float32Array.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{

Void StandardMaterial_obj::__construct(::String name,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.StandardMaterial","new",0x9a04748a,"com.gamestudiohx.babylonhx.materials.StandardMaterial.new","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",25,0xee7428c4)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(33)
	this->bumpTexture = null();
	HX_STACK_LINE(32)
	this->specularTexture = null();
	HX_STACK_LINE(31)
	this->emissiveTexture = null();
	HX_STACK_LINE(30)
	this->reflectionTexture = null();
	HX_STACK_LINE(29)
	this->opacityTexture = null();
	HX_STACK_LINE(28)
	this->ambientTexture = null();
	HX_STACK_LINE(27)
	this->diffuseTexture = null();
	HX_STACK_LINE(54)
	super::__construct(name,scene);
	HX_STACK_LINE(56)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(56)
	this->ambientColor = _g;
	HX_STACK_LINE(57)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new((int)1,(int)1,(int)1);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(57)
	this->diffuseColor = _g1;
	HX_STACK_LINE(58)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new((int)1,(int)1,(int)1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(58)
	this->specularColor = _g2;
	HX_STACK_LINE(59)
	this->specularPower = (int)64;
	HX_STACK_LINE(60)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g3 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(60)
	this->emissiveColor = _g3;
	HX_STACK_LINE(62)
	this->_cachedDefines = null();
	HX_STACK_LINE(64)
	::com::gamestudiohx::babylonhx::tools::SmartArray _g4 = ::com::gamestudiohx::babylonhx::tools::SmartArray_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(64)
	this->_renderTargets = _g4;
	HX_STACK_LINE(67)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(67)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(67)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(67)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(67)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(67)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(67)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(67)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(67)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(67)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(67)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(67)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(67)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(67)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(67)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(67)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(67)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(67)
		_g5 = result;
	}
	HX_STACK_LINE(67)
	this->_worldViewProjectionMatrix = _g5;
	HX_STACK_LINE(68)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(68)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(68)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(68)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(68)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(68)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(68)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(68)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(68)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(68)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(68)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(68)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(68)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(68)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(68)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(68)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(68)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(68)
		_g6 = result;
	}
	HX_STACK_LINE(68)
	this->_lightMatrix = _g6;
	HX_STACK_LINE(69)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g7 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(69)
	this->_globalAmbientColor = _g7;
	HX_STACK_LINE(70)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g8 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(null(),null(),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(70)
	this->_baseColor = _g8;
	HX_STACK_LINE(71)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g9 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(71)
	this->_scaledDiffuse = _g9;
	HX_STACK_LINE(72)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g10 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(null(),null(),null());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(72)
	this->_scaledSpecular = _g10;
}
;
	return null();
}

//StandardMaterial_obj::~StandardMaterial_obj() { }

Dynamic StandardMaterial_obj::__CreateEmpty() { return  new StandardMaterial_obj; }
hx::ObjectPtr< StandardMaterial_obj > StandardMaterial_obj::__new(::String name,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< StandardMaterial_obj > result = new StandardMaterial_obj();
	result->__construct(name,scene);
	return result;}

Dynamic StandardMaterial_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StandardMaterial_obj > result = new StandardMaterial_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool StandardMaterial_obj::needAlphaBlending( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.StandardMaterial","needAlphaBlending",0xa3519623,"com.gamestudiohx.babylonhx.materials.StandardMaterial.needAlphaBlending","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",76,0xee7428c4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	return (bool((this->alpha < 1.0)) || bool((this->opacityTexture != null())));
}


bool StandardMaterial_obj::needAlphaTesting( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.StandardMaterial","needAlphaTesting",0x970f7f1e,"com.gamestudiohx.babylonhx.materials.StandardMaterial.needAlphaTesting","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",80,0xee7428c4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	return (bool((this->diffuseTexture != null())) && bool(this->diffuseTexture->hasAlpha));
}


bool StandardMaterial_obj::isReady( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.StandardMaterial","isReady",0x9ae74543,"com.gamestudiohx.babylonhx.materials.StandardMaterial.isReady","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",83,0xee7428c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mesh,"mesh")
	HX_STACK_LINE(84)
	if ((this->checkReadyOnlyOnce)){
		HX_STACK_LINE(85)
		if ((this->_wasPreviouslyReady)){
			HX_STACK_LINE(86)
			return true;
		}
	}
	HX_STACK_LINE(90)
	if ((!(this->checkReadyOnEveryCall))){
		HX_STACK_LINE(91)
		int _g = this->_scene->getRenderId();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(91)
		if (((this->_renderId == _g))){
			HX_STACK_LINE(92)
			return true;
		}
	}
	HX_STACK_LINE(96)
	::com::gamestudiohx::babylonhx::Engine engine = this->_scene->getEngine();		HX_STACK_VAR(engine,"engine");
	HX_STACK_LINE(97)
	Array< ::String > defines = Array_obj< ::String >::__new();		HX_STACK_VAR(defines,"defines");
	HX_STACK_LINE(98)
	Array< ::String > optionalDefines = Array_obj< ::String >::__new();		HX_STACK_VAR(optionalDefines,"optionalDefines");
	HX_STACK_LINE(101)
	if ((this->_scene->texturesEnabled)){
		HX_STACK_LINE(102)
		if (((this->diffuseTexture != null()))){
			HX_STACK_LINE(103)
			if ((!(this->diffuseTexture->isReady()))){
				HX_STACK_LINE(104)
				return false;
			}
			else{
				HX_STACK_LINE(106)
				defines->push(HX_CSTRING("#define DIFFUSE"));
			}
		}
		HX_STACK_LINE(110)
		if (((this->ambientTexture != null()))){
			HX_STACK_LINE(111)
			if ((!(this->ambientTexture->isReady()))){
				HX_STACK_LINE(112)
				return false;
			}
			else{
				HX_STACK_LINE(114)
				defines->push(HX_CSTRING("#define AMBIENT"));
			}
		}
		HX_STACK_LINE(118)
		if (((this->opacityTexture != null()))){
			HX_STACK_LINE(119)
			if ((!(this->opacityTexture->isReady()))){
				HX_STACK_LINE(120)
				return false;
			}
			else{
				HX_STACK_LINE(122)
				defines->push(HX_CSTRING("#define OPACITY"));
			}
		}
		HX_STACK_LINE(126)
		if (((this->reflectionTexture != null()))){
			HX_STACK_LINE(127)
			if ((!(this->reflectionTexture->isReady()))){
				HX_STACK_LINE(128)
				return false;
			}
			else{
				HX_STACK_LINE(130)
				defines->push(HX_CSTRING("#define REFLECTION"));
			}
		}
		HX_STACK_LINE(134)
		if (((this->emissiveTexture != null()))){
			HX_STACK_LINE(135)
			if ((!(this->emissiveTexture->isReady()))){
				HX_STACK_LINE(136)
				return false;
			}
			else{
				HX_STACK_LINE(138)
				defines->push(HX_CSTRING("#define EMISSIVE"));
			}
		}
		HX_STACK_LINE(142)
		if (((this->specularTexture != null()))){
			HX_STACK_LINE(143)
			if ((!(this->specularTexture->isReady()))){
				HX_STACK_LINE(144)
				return false;
			}
			else{
				HX_STACK_LINE(146)
				defines->push(HX_CSTRING("#define SPECULAR"));
				HX_STACK_LINE(147)
				optionalDefines->push(defines->__get((defines->length - (int)1)));
			}
		}
	}
	HX_STACK_LINE(152)
	if (((bool((this->_scene->getEngine()->getCaps()->__Field(HX_CSTRING("standardDerivatives"),true) != null())) && bool((this->bumpTexture != null()))))){
		HX_STACK_LINE(153)
		if ((!(this->bumpTexture->isReady()))){
			HX_STACK_LINE(154)
			return false;
		}
		else{
			HX_STACK_LINE(156)
			defines->push(HX_CSTRING("#define BUMP"));
			HX_STACK_LINE(157)
			optionalDefines->push(defines->__get((defines->length - (int)1)));
		}
	}
	HX_STACK_LINE(162)
	if (((::com::gamestudiohx::babylonhx::Engine_obj::clipPlane != null()))){
		HX_STACK_LINE(163)
		defines->push(HX_CSTRING("#define CLIPPLANE"));
	}
	HX_STACK_LINE(166)
	if ((engine->getAlphaTesting())){
		HX_STACK_LINE(167)
		defines->push(HX_CSTRING("#define ALPHATEST"));
	}
	HX_STACK_LINE(171)
	if (((this->_scene->fogMode != ::com::gamestudiohx::babylonhx::Scene_obj::FOGMODE_NONE))){
		HX_STACK_LINE(172)
		defines->push(HX_CSTRING("#define FOG"));
		HX_STACK_LINE(173)
		optionalDefines->push(defines->__get((defines->length - (int)1)));
	}
	HX_STACK_LINE(176)
	bool shadowsActivated = false;		HX_STACK_VAR(shadowsActivated,"shadowsActivated");
	HX_STACK_LINE(177)
	int lightIndex = (int)0;		HX_STACK_VAR(lightIndex,"lightIndex");
	HX_STACK_LINE(178)
	if ((this->_scene->lightsEnabled)){
		HX_STACK_LINE(179)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(179)
		int _g = this->_scene->lights->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(179)
		while((true)){
			HX_STACK_LINE(179)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(179)
				break;
			}
			HX_STACK_LINE(179)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(180)
			::com::gamestudiohx::babylonhx::lights::Light light = this->_scene->lights->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::lights::Light >();		HX_STACK_VAR(light,"light");
			HX_STACK_LINE(182)
			if ((!(light->isEnabled()))){
				HX_STACK_LINE(183)
				continue;
			}
			struct _Function_3_1{
				inline static bool Block( ::com::gamestudiohx::babylonhx::lights::Light &light,::com::gamestudiohx::babylonhx::mesh::Mesh &mesh){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",186,0xee7428c4)
					{
						HX_STACK_LINE(186)
						int _g11 = ::Lambda_obj::indexOf(light->excludedMeshes,mesh);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(186)
						return (_g11 != (int)-1);
					}
					return null();
				}
			};
			HX_STACK_LINE(186)
			if (((  (((mesh != null()))) ? bool(_Function_3_1::Block(light,mesh)) : bool(false) ))){
				HX_STACK_LINE(187)
				continue;
			}
			HX_STACK_LINE(190)
			defines->push((HX_CSTRING("#define LIGHT") + lightIndex));
			HX_STACK_LINE(192)
			if (((lightIndex > (int)0))){
				HX_STACK_LINE(193)
				optionalDefines->push(defines->__get((defines->length - (int)1)));
			}
			HX_STACK_LINE(196)
			::String type = HX_CSTRING("");		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(197)
			if ((::Std_obj::is(light,hx::ClassOf< ::com::gamestudiohx::babylonhx::lights::SpotLight >()))){
				HX_STACK_LINE(198)
				type = (HX_CSTRING("#define SPOTLIGHT") + lightIndex);
			}
			else{
				HX_STACK_LINE(199)
				if ((::Std_obj::is(light,hx::ClassOf< ::com::gamestudiohx::babylonhx::lights::HemisphericLight >()))){
					HX_STACK_LINE(200)
					type = (HX_CSTRING("#define HEMILIGHT") + lightIndex);
				}
				else{
					HX_STACK_LINE(202)
					type = (HX_CSTRING("#define POINTDIRLIGHT") + lightIndex);
				}
			}
			HX_STACK_LINE(205)
			defines->push(type);
			HX_STACK_LINE(206)
			if (((lightIndex > (int)0))){
				HX_STACK_LINE(207)
				optionalDefines->push(defines->__get((defines->length - (int)1)));
			}
			HX_STACK_LINE(211)
			::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator shadowGenerator = light->getShadowGenerator();		HX_STACK_VAR(shadowGenerator,"shadowGenerator");
			HX_STACK_LINE(212)
			if (((bool((bool((mesh != null())) && bool(mesh->receiveShadows))) && bool((shadowGenerator != null()))))){
				HX_STACK_LINE(213)
				defines->push((HX_CSTRING("#define SHADOW") + lightIndex));
				HX_STACK_LINE(215)
				if (((lightIndex > (int)0))){
					HX_STACK_LINE(216)
					optionalDefines->push(defines->__get((defines->length - (int)1)));
				}
				HX_STACK_LINE(219)
				if ((!(shadowsActivated))){
					HX_STACK_LINE(220)
					defines->push(HX_CSTRING("#define SHADOWS"));
					HX_STACK_LINE(221)
					shadowsActivated = true;
				}
				HX_STACK_LINE(224)
				if ((shadowGenerator->useVarianceShadowMap)){
					HX_STACK_LINE(225)
					defines->push((HX_CSTRING("#define SHADOWVSM") + lightIndex));
					HX_STACK_LINE(226)
					if (((lightIndex > (int)0))){
						HX_STACK_LINE(227)
						optionalDefines->push(defines->__get((defines->length - (int)1)));
					}
				}
			}
			HX_STACK_LINE(232)
			(lightIndex)++;
			HX_STACK_LINE(233)
			if (((lightIndex == (int)4))){
				HX_STACK_LINE(234)
				break;
			}
		}
	}
	HX_STACK_LINE(238)
	Array< ::String > attribs = Array_obj< ::String >::__new().Add(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind).Add(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind);		HX_STACK_VAR(attribs,"attribs");
	HX_STACK_LINE(239)
	if (((mesh != null()))){
		HX_STACK_LINE(240)
		if ((mesh->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UVKind))){
			HX_STACK_LINE(241)
			attribs->push(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UVKind);
			HX_STACK_LINE(242)
			defines->push(HX_CSTRING("#define UV1"));
		}
		HX_STACK_LINE(244)
		if ((mesh->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UV2Kind))){
			HX_STACK_LINE(245)
			attribs->push(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UV2Kind);
			HX_STACK_LINE(246)
			defines->push(HX_CSTRING("#define UV2"));
		}
		HX_STACK_LINE(248)
		if ((mesh->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::ColorKind))){
			HX_STACK_LINE(249)
			attribs->push(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::ColorKind);
			HX_STACK_LINE(250)
			defines->push(HX_CSTRING("#define VERTEXCOLOR"));
		}
		HX_STACK_LINE(252)
		if (((  (((  (((mesh->skeleton != null()))) ? bool(mesh->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesIndicesKind)) : bool(false) ))) ? bool(mesh->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesWeightsKind)) : bool(false) ))){
			HX_STACK_LINE(253)
			attribs->push(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesIndicesKind);
			HX_STACK_LINE(254)
			attribs->push(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesWeightsKind);
			HX_STACK_LINE(255)
			defines->push(HX_CSTRING("#define BONES"));
			HX_STACK_LINE(256)
			defines->push((HX_CSTRING("#define BonesPerMesh ") + mesh->skeleton->bones->length));
			HX_STACK_LINE(257)
			defines->push(HX_CSTRING("#define BONES4"));
			HX_STACK_LINE(258)
			optionalDefines->push(defines->__get((defines->length - (int)1)));
		}
	}
	HX_STACK_LINE(263)
	::String join = defines->join(HX_CSTRING("\n"));		HX_STACK_VAR(join,"join");
	HX_STACK_LINE(264)
	if (((this->_cachedDefines != join))){
		HX_STACK_LINE(265)
		this->_cachedDefines = join;
		HX_STACK_LINE(268)
		::String shaderName = HX_CSTRING("default");		HX_STACK_VAR(shaderName,"shaderName");
		HX_STACK_LINE(270)
		::com::gamestudiohx::babylonhx::materials::Effect _g2 = this->_scene->getEngine()->createEffect(shaderName,attribs,Array_obj< ::String >::__new().Add(HX_CSTRING("world")).Add(HX_CSTRING("view")).Add(HX_CSTRING("viewProjection")).Add(HX_CSTRING("vEyePosition")).Add(HX_CSTRING("vLightsType")).Add(HX_CSTRING("vAmbientColor")).Add(HX_CSTRING("vDiffuseColor")).Add(HX_CSTRING("vSpecularColor")).Add(HX_CSTRING("vEmissiveColor")).Add(HX_CSTRING("vLightData0")).Add(HX_CSTRING("vLightDiffuse0")).Add(HX_CSTRING("vLightSpecular0")).Add(HX_CSTRING("vLightDirection0")).Add(HX_CSTRING("vLightGround0")).Add(HX_CSTRING("lightMatrix0")).Add(HX_CSTRING("vLightData1")).Add(HX_CSTRING("vLightDiffuse1")).Add(HX_CSTRING("vLightSpecular1")).Add(HX_CSTRING("vLightDirection1")).Add(HX_CSTRING("vLightGround1")).Add(HX_CSTRING("lightMatrix1")).Add(HX_CSTRING("vLightData2")).Add(HX_CSTRING("vLightDiffuse2")).Add(HX_CSTRING("vLightSpecular2")).Add(HX_CSTRING("vLightDirection2")).Add(HX_CSTRING("vLightGround2")).Add(HX_CSTRING("lightMatrix2")).Add(HX_CSTRING("vLightData3")).Add(HX_CSTRING("vLightDiffuse3")).Add(HX_CSTRING("vLightSpecular3")).Add(HX_CSTRING("vLightDirection3")).Add(HX_CSTRING("vLightGround3")).Add(HX_CSTRING("lightMatrix3")).Add(HX_CSTRING("vFogInfos")).Add(HX_CSTRING("vFogColor")).Add(HX_CSTRING("vDiffuseInfos")).Add(HX_CSTRING("vAmbientInfos")).Add(HX_CSTRING("vOpacityInfos")).Add(HX_CSTRING("vReflectionInfos")).Add(HX_CSTRING("vEmissiveInfos")).Add(HX_CSTRING("vSpecularInfos")).Add(HX_CSTRING("vBumpInfos")).Add(HX_CSTRING("mBones")).Add(HX_CSTRING("vClipPlane")).Add(HX_CSTRING("diffuseMatrix")).Add(HX_CSTRING("ambientMatrix")).Add(HX_CSTRING("opacityMatrix")).Add(HX_CSTRING("reflectionMatrix")).Add(HX_CSTRING("emissiveMatrix")).Add(HX_CSTRING("specularMatrix")).Add(HX_CSTRING("bumpMatrix")),Array_obj< ::String >::__new().Add(HX_CSTRING("diffuseSampler")).Add(HX_CSTRING("ambientSampler")).Add(HX_CSTRING("opacitySampler")).Add(HX_CSTRING("reflectionCubeSampler")).Add(HX_CSTRING("reflection2DSampler")).Add(HX_CSTRING("emissiveSampler")).Add(HX_CSTRING("specularSampler")).Add(HX_CSTRING("bumpSampler")).Add(HX_CSTRING("shadowSampler0")).Add(HX_CSTRING("shadowSampler1")).Add(HX_CSTRING("shadowSampler2")).Add(HX_CSTRING("shadowSampler3")),join,optionalDefines);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(270)
		this->_effect = _g2;
	}
	HX_STACK_LINE(286)
	if ((!(this->_effect->isReady()))){
		HX_STACK_LINE(287)
		return false;
	}
	HX_STACK_LINE(290)
	int _g3 = this->_scene->getRenderId();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(290)
	this->_renderId = _g3;
	HX_STACK_LINE(291)
	this->_wasPreviouslyReady = true;
	HX_STACK_LINE(292)
	return true;
}


::com::gamestudiohx::babylonhx::tools::SmartArray StandardMaterial_obj::getRenderTargetTextures( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.StandardMaterial","getRenderTargetTextures",0x76e83a7f,"com.gamestudiohx.babylonhx.materials.StandardMaterial.getRenderTargetTextures","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",295,0xee7428c4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(296)
	this->_renderTargets->reset();
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::StandardMaterial_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",298,0xee7428c4)
			{
				HX_STACK_LINE(298)
				Dynamic _g = ::Reflect_obj::field(__this->reflectionTexture,HX_CSTRING("isRenderTarget"));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(298)
				return (_g != null());
			}
			return null();
		}
	};
	HX_STACK_LINE(298)
	if (((  (((this->reflectionTexture != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(299)
		this->_renderTargets->push(this->reflectionTexture);
	}
	HX_STACK_LINE(302)
	return this->_renderTargets;
}


HX_DEFINE_DYNAMIC_FUNC0(StandardMaterial_obj,getRenderTargetTextures,return )

Void StandardMaterial_obj::unbind( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.StandardMaterial","unbind",0x75fcceac,"com.gamestudiohx.babylonhx.materials.StandardMaterial.unbind","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",306,0xee7428c4)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::StandardMaterial_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",306,0xee7428c4)
				{
					HX_STACK_LINE(306)
					Dynamic _g = ::Reflect_obj::field(__this->reflectionTexture,HX_CSTRING("isRenderTarget"));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(306)
					return (_g != null());
				}
				return null();
			}
		};
		HX_STACK_LINE(306)
		if (((  (((this->reflectionTexture != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(307)
			this->_effect->setTexture(HX_CSTRING("reflection2DSampler"),null());
		}
	}
return null();
}


Void StandardMaterial_obj::bind( ::com::gamestudiohx::babylonhx::tools::math::Matrix world,::com::gamestudiohx::babylonhx::mesh::Mesh mesh){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.StandardMaterial","bind",0x21f5f653,"com.gamestudiohx.babylonhx.materials.StandardMaterial.bind","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",311,0xee7428c4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(world,"world")
		HX_STACK_ARG(mesh,"mesh")
		HX_STACK_LINE(312)
		{
			HX_STACK_LINE(312)
			::com::gamestudiohx::babylonhx::tools::math::Color3 _this = this->_baseColor;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(312)
			::com::gamestudiohx::babylonhx::tools::math::Color3 source = this->diffuseColor;		HX_STACK_VAR(source,"source");
			HX_STACK_LINE(312)
			_this->r = source->r;
			HX_STACK_LINE(312)
			_this->g = source->g;
			HX_STACK_LINE(312)
			_this->b = source->b;
		}
		HX_STACK_LINE(315)
		{
			HX_STACK_LINE(315)
			Dynamic uniform = this->_effect->getUniform(HX_CSTRING("world"));		HX_STACK_VAR(uniform,"uniform");
			HX_STACK_LINE(315)
			if (((uniform != null()))){
				HX_STACK_LINE(315)
				Dynamic location = uniform;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(315)
				Dynamic v;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(world->m,null(),null());		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(315)
					Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(315)
					v = data;
				}
				HX_STACK_LINE(315)
				::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
			}
		}
		HX_STACK_LINE(316)
		{
			HX_STACK_LINE(316)
			Dynamic uniform = this->_effect->getUniform(HX_CSTRING("viewProjection"));		HX_STACK_VAR(uniform,"uniform");
			HX_STACK_LINE(316)
			if (((uniform != null()))){
				HX_STACK_LINE(316)
				Dynamic location = uniform;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(316)
				Dynamic v;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(316)
				{
					HX_STACK_LINE(316)
					::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(this->_scene->_transformMatrix->m,null(),null());		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(316)
					Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(316)
					v = data;
				}
				HX_STACK_LINE(316)
				::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
			}
		}
		HX_STACK_LINE(319)
		if (((  (((  (((mesh->skeleton != null()))) ? bool(mesh->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesIndicesKind)) : bool(false) ))) ? bool(mesh->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesWeightsKind)) : bool(false) ))){
			HX_STACK_LINE(320)
			Array< Float > matrices = mesh->skeleton->getTransformMatrices();		HX_STACK_VAR(matrices,"matrices");
			HX_STACK_LINE(320)
			{
				HX_STACK_LINE(320)
				Dynamic uniform = this->_effect->getUniform(HX_CSTRING("mBones"));		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(320)
				if (((uniform != null()))){
					HX_STACK_LINE(320)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(320)
					Dynamic v;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(320)
					{
						HX_STACK_LINE(320)
						::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrices,null(),null());		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(320)
						Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(320)
						v = data;
					}
					HX_STACK_LINE(320)
					::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
				}
			}
		}
		HX_STACK_LINE(324)
		if (((this->diffuseTexture != null()))){
			HX_STACK_LINE(325)
			this->_effect->setTexture(HX_CSTRING("diffuseSampler"),this->diffuseTexture);
			HX_STACK_LINE(326)
			{
				HX_STACK_LINE(326)
				::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(326)
				Float x = this->diffuseTexture->coordinatesIndex;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(326)
				Float y = this->diffuseTexture->level;		HX_STACK_VAR(y,"y");
				struct _Function_3_1{
					inline static bool Block( Float &x,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",326,0xee7428c4)
						{
							HX_STACK_LINE(326)
							Array< Float > _g = _this->_valueCache->get(HX_CSTRING("vDiffuseInfos"));		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(326)
							Float _g1 = _g->__get((int)0);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(326)
							return (_g1 == x);
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( Float &y,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",326,0xee7428c4)
						{
							HX_STACK_LINE(326)
							Array< Float > _g2 = _this->_valueCache->get(HX_CSTRING("vDiffuseInfos"));		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(326)
							Float _g3 = _g2->__get((int)1);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(326)
							return (_g3 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(326)
				if ((!(((  (((  ((_this->_valueCache->exists(HX_CSTRING("vDiffuseInfos")))) ? bool(_Function_3_1::Block(x,_this)) : bool(false) ))) ? bool(_Function_3_2::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(326)
					if ((!(_this->_valueCache->exists(HX_CSTRING("vDiffuseInfos"))))){
						HX_STACK_LINE(326)
						_this->_valueCache->set(HX_CSTRING("vDiffuseInfos"),Array_obj< Float >::__new().Add(x).Add(y));
					}
					else{
						HX_STACK_LINE(326)
						Array< Float > _g4 = _this->_valueCache->get(HX_CSTRING("vDiffuseInfos"));		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(326)
						_g4[(int)0] = x;
						HX_STACK_LINE(326)
						Array< Float > _g5 = _this->_valueCache->get(HX_CSTRING("vDiffuseInfos"));		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(326)
						_g5[(int)1] = y;
					}
					HX_STACK_LINE(326)
					{
						HX_STACK_LINE(326)
						Dynamic uniform = _this->getUniform(HX_CSTRING("vDiffuseInfos"));		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(326)
						if (((uniform != null()))){
							HX_STACK_LINE(326)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(326)
							::openfl::gl::GL_obj::lime_gl_uniform2f(location,x,y);
						}
					}
				}
			}
			HX_STACK_LINE(327)
			{
				HX_STACK_LINE(327)
				::com::gamestudiohx::babylonhx::tools::math::Matrix matrix = this->diffuseTexture->_computeTextureMatrix();		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(327)
				{
					HX_STACK_LINE(327)
					Dynamic uniform = this->_effect->getUniform(HX_CSTRING("diffuseMatrix"));		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(327)
					if (((uniform != null()))){
						HX_STACK_LINE(327)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(327)
						Dynamic v;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(327)
						{
							HX_STACK_LINE(327)
							::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(327)
							Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(327)
							v = data;
						}
						HX_STACK_LINE(327)
						::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
					}
				}
			}
			HX_STACK_LINE(329)
			{
				HX_STACK_LINE(329)
				::com::gamestudiohx::babylonhx::tools::math::Color3 _this = this->_baseColor;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(329)
				_this->r = (int)1;
				HX_STACK_LINE(329)
				_this->g = (int)1;
				HX_STACK_LINE(329)
				_this->b = (int)1;
			}
		}
		HX_STACK_LINE(332)
		if (((this->ambientTexture != null()))){
			HX_STACK_LINE(333)
			this->_effect->setTexture(HX_CSTRING("ambientSampler"),this->ambientTexture);
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(335)
				Float x = this->ambientTexture->coordinatesIndex;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(335)
				Float y = this->ambientTexture->level;		HX_STACK_VAR(y,"y");
				struct _Function_3_1{
					inline static bool Block( Float &x,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",335,0xee7428c4)
						{
							HX_STACK_LINE(335)
							Array< Float > _g6 = _this->_valueCache->get(HX_CSTRING("vAmbientInfos"));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(335)
							Float _g7 = _g6->__get((int)0);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(335)
							return (_g7 == x);
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( Float &y,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",335,0xee7428c4)
						{
							HX_STACK_LINE(335)
							Array< Float > _g8 = _this->_valueCache->get(HX_CSTRING("vAmbientInfos"));		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(335)
							Float _g9 = _g8->__get((int)1);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(335)
							return (_g9 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(335)
				if ((!(((  (((  ((_this->_valueCache->exists(HX_CSTRING("vAmbientInfos")))) ? bool(_Function_3_1::Block(x,_this)) : bool(false) ))) ? bool(_Function_3_2::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(335)
					if ((!(_this->_valueCache->exists(HX_CSTRING("vAmbientInfos"))))){
						HX_STACK_LINE(335)
						_this->_valueCache->set(HX_CSTRING("vAmbientInfos"),Array_obj< Float >::__new().Add(x).Add(y));
					}
					else{
						HX_STACK_LINE(335)
						Array< Float > _g10 = _this->_valueCache->get(HX_CSTRING("vAmbientInfos"));		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(335)
						_g10[(int)0] = x;
						HX_STACK_LINE(335)
						Array< Float > _g11 = _this->_valueCache->get(HX_CSTRING("vAmbientInfos"));		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(335)
						_g11[(int)1] = y;
					}
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						Dynamic uniform = _this->getUniform(HX_CSTRING("vAmbientInfos"));		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(335)
						if (((uniform != null()))){
							HX_STACK_LINE(335)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(335)
							::openfl::gl::GL_obj::lime_gl_uniform2f(location,x,y);
						}
					}
				}
			}
			HX_STACK_LINE(336)
			{
				HX_STACK_LINE(336)
				::com::gamestudiohx::babylonhx::tools::math::Matrix matrix = this->ambientTexture->_computeTextureMatrix();		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					Dynamic uniform = this->_effect->getUniform(HX_CSTRING("ambientMatrix"));		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(336)
					if (((uniform != null()))){
						HX_STACK_LINE(336)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(336)
						Dynamic v;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(336)
							Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(336)
							v = data;
						}
						HX_STACK_LINE(336)
						::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
					}
				}
			}
		}
		HX_STACK_LINE(339)
		if (((this->opacityTexture != null()))){
			HX_STACK_LINE(340)
			this->_effect->setTexture(HX_CSTRING("opacitySampler"),this->opacityTexture);
			HX_STACK_LINE(342)
			{
				HX_STACK_LINE(342)
				::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(342)
				Float x = this->opacityTexture->coordinatesIndex;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(342)
				Float y = this->opacityTexture->level;		HX_STACK_VAR(y,"y");
				struct _Function_3_1{
					inline static bool Block( Float &x,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",342,0xee7428c4)
						{
							HX_STACK_LINE(342)
							Array< Float > _g12 = _this->_valueCache->get(HX_CSTRING("vOpacityInfos"));		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(342)
							Float _g13 = _g12->__get((int)0);		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(342)
							return (_g13 == x);
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( Float &y,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",342,0xee7428c4)
						{
							HX_STACK_LINE(342)
							Array< Float > _g14 = _this->_valueCache->get(HX_CSTRING("vOpacityInfos"));		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(342)
							Float _g15 = _g14->__get((int)1);		HX_STACK_VAR(_g15,"_g15");
							HX_STACK_LINE(342)
							return (_g15 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(342)
				if ((!(((  (((  ((_this->_valueCache->exists(HX_CSTRING("vOpacityInfos")))) ? bool(_Function_3_1::Block(x,_this)) : bool(false) ))) ? bool(_Function_3_2::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(342)
					if ((!(_this->_valueCache->exists(HX_CSTRING("vOpacityInfos"))))){
						HX_STACK_LINE(342)
						_this->_valueCache->set(HX_CSTRING("vOpacityInfos"),Array_obj< Float >::__new().Add(x).Add(y));
					}
					else{
						HX_STACK_LINE(342)
						Array< Float > _g16 = _this->_valueCache->get(HX_CSTRING("vOpacityInfos"));		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(342)
						_g16[(int)0] = x;
						HX_STACK_LINE(342)
						Array< Float > _g17 = _this->_valueCache->get(HX_CSTRING("vOpacityInfos"));		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(342)
						_g17[(int)1] = y;
					}
					HX_STACK_LINE(342)
					{
						HX_STACK_LINE(342)
						Dynamic uniform = _this->getUniform(HX_CSTRING("vOpacityInfos"));		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(342)
						if (((uniform != null()))){
							HX_STACK_LINE(342)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(342)
							::openfl::gl::GL_obj::lime_gl_uniform2f(location,x,y);
						}
					}
				}
			}
			HX_STACK_LINE(343)
			{
				HX_STACK_LINE(343)
				::com::gamestudiohx::babylonhx::tools::math::Matrix matrix = this->opacityTexture->_computeTextureMatrix();		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(343)
				{
					HX_STACK_LINE(343)
					Dynamic uniform = this->_effect->getUniform(HX_CSTRING("opacityMatrix"));		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(343)
					if (((uniform != null()))){
						HX_STACK_LINE(343)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(343)
						Dynamic v;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(343)
						{
							HX_STACK_LINE(343)
							::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(343)
							Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(343)
							v = data;
						}
						HX_STACK_LINE(343)
						::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
					}
				}
			}
		}
		HX_STACK_LINE(346)
		if (((this->reflectionTexture != null()))){
			HX_STACK_LINE(347)
			if ((::Std_obj::is(this->reflectionTexture,hx::ClassOf< ::com::gamestudiohx::babylonhx::materials::textures::CubeTexture >()))){
				HX_STACK_LINE(348)
				this->_effect->setTexture(HX_CSTRING("reflectionCubeSampler"),this->reflectionTexture);
			}
			else{
				HX_STACK_LINE(350)
				this->_effect->setTexture(HX_CSTRING("reflection2DSampler"),this->reflectionTexture);
			}
			HX_STACK_LINE(353)
			{
				HX_STACK_LINE(353)
				::com::gamestudiohx::babylonhx::tools::math::Matrix matrix = this->reflectionTexture->_computeReflectionTextureMatrix();		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(353)
				{
					HX_STACK_LINE(353)
					Dynamic uniform = this->_effect->getUniform(HX_CSTRING("reflectionMatrix"));		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(353)
					if (((uniform != null()))){
						HX_STACK_LINE(353)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(353)
						Dynamic v;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(353)
						{
							HX_STACK_LINE(353)
							::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(353)
							Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(353)
							v = data;
						}
						HX_STACK_LINE(353)
						::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
					}
				}
			}
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(354)
				::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(354)
				Float x = this->reflectionTexture->coordinatesMode;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(354)
				Float y = this->reflectionTexture->level;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(354)
				Dynamic _g18 = ::Reflect_obj::field(this->reflectionTexture,HX_CSTRING("isCube"));		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(354)
				Float z;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(354)
				if (((_g18 != null()))){
					HX_STACK_LINE(354)
					z = 1.0;
				}
				else{
					HX_STACK_LINE(354)
					z = 0.0;
				}
				struct _Function_3_1{
					inline static bool Block( Float &x,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",354,0xee7428c4)
						{
							HX_STACK_LINE(354)
							Array< Float > _g19 = _this->_valueCache->get(HX_CSTRING("vReflectionInfos"));		HX_STACK_VAR(_g19,"_g19");
							HX_STACK_LINE(354)
							Float _g20 = _g19->__get((int)0);		HX_STACK_VAR(_g20,"_g20");
							HX_STACK_LINE(354)
							return (_g20 == x);
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( Float &y,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",354,0xee7428c4)
						{
							HX_STACK_LINE(354)
							Array< Float > _g21 = _this->_valueCache->get(HX_CSTRING("vReflectionInfos"));		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(354)
							Float _g22 = _g21->__get((int)1);		HX_STACK_VAR(_g22,"_g22");
							HX_STACK_LINE(354)
							return (_g22 == y);
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,Float &z){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",354,0xee7428c4)
						{
							HX_STACK_LINE(354)
							Array< Float > _g23 = _this->_valueCache->get(HX_CSTRING("vReflectionInfos"));		HX_STACK_VAR(_g23,"_g23");
							HX_STACK_LINE(354)
							Float _g24 = _g23->__get((int)2);		HX_STACK_VAR(_g24,"_g24");
							HX_STACK_LINE(354)
							return (_g24 == z);
						}
						return null();
					}
				};
				HX_STACK_LINE(354)
				if ((!(((  (((  (((  ((_this->_valueCache->exists(HX_CSTRING("vReflectionInfos")))) ? bool(_Function_3_1::Block(x,_this)) : bool(false) ))) ? bool(_Function_3_2::Block(y,_this)) : bool(false) ))) ? bool(_Function_3_3::Block(_this,z)) : bool(false) ))))){
					HX_STACK_LINE(354)
					if ((!(_this->_valueCache->exists(HX_CSTRING("vReflectionInfos"))))){
						HX_STACK_LINE(354)
						_this->_valueCache->set(HX_CSTRING("vReflectionInfos"),Array_obj< Float >::__new().Add(x).Add(y).Add(z));
					}
					else{
						HX_STACK_LINE(354)
						Array< Float > _g25 = _this->_valueCache->get(HX_CSTRING("vReflectionInfos"));		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(354)
						_g25[(int)0] = x;
						HX_STACK_LINE(354)
						Array< Float > _g26 = _this->_valueCache->get(HX_CSTRING("vReflectionInfos"));		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(354)
						_g26[(int)1] = y;
						HX_STACK_LINE(354)
						Array< Float > _g27 = _this->_valueCache->get(HX_CSTRING("vReflectionInfos"));		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(354)
						_g27[(int)2] = z;
					}
					HX_STACK_LINE(354)
					{
						HX_STACK_LINE(354)
						Dynamic uniform = _this->getUniform(HX_CSTRING("vReflectionInfos"));		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(354)
						if (((uniform != null()))){
							HX_STACK_LINE(354)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(354)
							::openfl::gl::GL_obj::lime_gl_uniform3f(location,x,y,z);
						}
					}
				}
			}
		}
		HX_STACK_LINE(357)
		if (((this->emissiveTexture != null()))){
			HX_STACK_LINE(358)
			this->_effect->setTexture(HX_CSTRING("emissiveSampler"),this->emissiveTexture);
			HX_STACK_LINE(360)
			{
				HX_STACK_LINE(360)
				::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(360)
				Float x = this->emissiveTexture->coordinatesIndex;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(360)
				Float y = this->emissiveTexture->level;		HX_STACK_VAR(y,"y");
				struct _Function_3_1{
					inline static bool Block( Float &x,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",360,0xee7428c4)
						{
							HX_STACK_LINE(360)
							Array< Float > _g28 = _this->_valueCache->get(HX_CSTRING("vEmissiveInfos"));		HX_STACK_VAR(_g28,"_g28");
							HX_STACK_LINE(360)
							Float _g29 = _g28->__get((int)0);		HX_STACK_VAR(_g29,"_g29");
							HX_STACK_LINE(360)
							return (_g29 == x);
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( Float &y,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",360,0xee7428c4)
						{
							HX_STACK_LINE(360)
							Array< Float > _g30 = _this->_valueCache->get(HX_CSTRING("vEmissiveInfos"));		HX_STACK_VAR(_g30,"_g30");
							HX_STACK_LINE(360)
							Float _g31 = _g30->__get((int)1);		HX_STACK_VAR(_g31,"_g31");
							HX_STACK_LINE(360)
							return (_g31 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(360)
				if ((!(((  (((  ((_this->_valueCache->exists(HX_CSTRING("vEmissiveInfos")))) ? bool(_Function_3_1::Block(x,_this)) : bool(false) ))) ? bool(_Function_3_2::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(360)
					if ((!(_this->_valueCache->exists(HX_CSTRING("vEmissiveInfos"))))){
						HX_STACK_LINE(360)
						_this->_valueCache->set(HX_CSTRING("vEmissiveInfos"),Array_obj< Float >::__new().Add(x).Add(y));
					}
					else{
						HX_STACK_LINE(360)
						Array< Float > _g32 = _this->_valueCache->get(HX_CSTRING("vEmissiveInfos"));		HX_STACK_VAR(_g32,"_g32");
						HX_STACK_LINE(360)
						_g32[(int)0] = x;
						HX_STACK_LINE(360)
						Array< Float > _g33 = _this->_valueCache->get(HX_CSTRING("vEmissiveInfos"));		HX_STACK_VAR(_g33,"_g33");
						HX_STACK_LINE(360)
						_g33[(int)1] = y;
					}
					HX_STACK_LINE(360)
					{
						HX_STACK_LINE(360)
						Dynamic uniform = _this->getUniform(HX_CSTRING("vEmissiveInfos"));		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(360)
						if (((uniform != null()))){
							HX_STACK_LINE(360)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(360)
							::openfl::gl::GL_obj::lime_gl_uniform2f(location,x,y);
						}
					}
				}
			}
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				::com::gamestudiohx::babylonhx::tools::math::Matrix matrix = this->emissiveTexture->_computeTextureMatrix();		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					Dynamic uniform = this->_effect->getUniform(HX_CSTRING("emissiveMatrix"));		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(361)
					if (((uniform != null()))){
						HX_STACK_LINE(361)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(361)
						Dynamic v;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(361)
						{
							HX_STACK_LINE(361)
							::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(361)
							Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(361)
							v = data;
						}
						HX_STACK_LINE(361)
						::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
					}
				}
			}
		}
		HX_STACK_LINE(364)
		if (((this->specularTexture != null()))){
			HX_STACK_LINE(365)
			this->_effect->setTexture(HX_CSTRING("specularSampler"),this->specularTexture);
			HX_STACK_LINE(367)
			{
				HX_STACK_LINE(367)
				::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(367)
				Float x = this->specularTexture->coordinatesIndex;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(367)
				Float y = this->specularTexture->level;		HX_STACK_VAR(y,"y");
				struct _Function_3_1{
					inline static bool Block( Float &x,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",367,0xee7428c4)
						{
							HX_STACK_LINE(367)
							Array< Float > _g34 = _this->_valueCache->get(HX_CSTRING("vSpecularInfos"));		HX_STACK_VAR(_g34,"_g34");
							HX_STACK_LINE(367)
							Float _g35 = _g34->__get((int)0);		HX_STACK_VAR(_g35,"_g35");
							HX_STACK_LINE(367)
							return (_g35 == x);
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( Float &y,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",367,0xee7428c4)
						{
							HX_STACK_LINE(367)
							Array< Float > _g36 = _this->_valueCache->get(HX_CSTRING("vSpecularInfos"));		HX_STACK_VAR(_g36,"_g36");
							HX_STACK_LINE(367)
							Float _g37 = _g36->__get((int)1);		HX_STACK_VAR(_g37,"_g37");
							HX_STACK_LINE(367)
							return (_g37 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(367)
				if ((!(((  (((  ((_this->_valueCache->exists(HX_CSTRING("vSpecularInfos")))) ? bool(_Function_3_1::Block(x,_this)) : bool(false) ))) ? bool(_Function_3_2::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(367)
					if ((!(_this->_valueCache->exists(HX_CSTRING("vSpecularInfos"))))){
						HX_STACK_LINE(367)
						_this->_valueCache->set(HX_CSTRING("vSpecularInfos"),Array_obj< Float >::__new().Add(x).Add(y));
					}
					else{
						HX_STACK_LINE(367)
						Array< Float > _g38 = _this->_valueCache->get(HX_CSTRING("vSpecularInfos"));		HX_STACK_VAR(_g38,"_g38");
						HX_STACK_LINE(367)
						_g38[(int)0] = x;
						HX_STACK_LINE(367)
						Array< Float > _g39 = _this->_valueCache->get(HX_CSTRING("vSpecularInfos"));		HX_STACK_VAR(_g39,"_g39");
						HX_STACK_LINE(367)
						_g39[(int)1] = y;
					}
					HX_STACK_LINE(367)
					{
						HX_STACK_LINE(367)
						Dynamic uniform = _this->getUniform(HX_CSTRING("vSpecularInfos"));		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(367)
						if (((uniform != null()))){
							HX_STACK_LINE(367)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(367)
							::openfl::gl::GL_obj::lime_gl_uniform2f(location,x,y);
						}
					}
				}
			}
			HX_STACK_LINE(368)
			{
				HX_STACK_LINE(368)
				::com::gamestudiohx::babylonhx::tools::math::Matrix matrix = this->specularTexture->_computeTextureMatrix();		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(368)
				{
					HX_STACK_LINE(368)
					Dynamic uniform = this->_effect->getUniform(HX_CSTRING("specularMatrix"));		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(368)
					if (((uniform != null()))){
						HX_STACK_LINE(368)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(368)
						Dynamic v;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(368)
							Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(368)
							v = data;
						}
						HX_STACK_LINE(368)
						::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
					}
				}
			}
		}
		HX_STACK_LINE(371)
		if (((bool((this->bumpTexture != null())) && bool((this->_scene->getEngine()->getCaps()->__Field(HX_CSTRING("standardDerivatives"),true) != null()))))){
			HX_STACK_LINE(372)
			this->_effect->setTexture(HX_CSTRING("bumpSampler"),this->bumpTexture);
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(374)
				Float x = this->bumpTexture->coordinatesIndex;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(374)
				Float y = this->bumpTexture->level;		HX_STACK_VAR(y,"y");
				struct _Function_3_1{
					inline static bool Block( Float &x,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",374,0xee7428c4)
						{
							HX_STACK_LINE(374)
							Array< Float > _g40 = _this->_valueCache->get(HX_CSTRING("vBumpInfos"));		HX_STACK_VAR(_g40,"_g40");
							HX_STACK_LINE(374)
							Float _g41 = _g40->__get((int)0);		HX_STACK_VAR(_g41,"_g41");
							HX_STACK_LINE(374)
							return (_g41 == x);
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( Float &y,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",374,0xee7428c4)
						{
							HX_STACK_LINE(374)
							Array< Float > _g42 = _this->_valueCache->get(HX_CSTRING("vBumpInfos"));		HX_STACK_VAR(_g42,"_g42");
							HX_STACK_LINE(374)
							Float _g43 = _g42->__get((int)1);		HX_STACK_VAR(_g43,"_g43");
							HX_STACK_LINE(374)
							return (_g43 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(374)
				if ((!(((  (((  ((_this->_valueCache->exists(HX_CSTRING("vBumpInfos")))) ? bool(_Function_3_1::Block(x,_this)) : bool(false) ))) ? bool(_Function_3_2::Block(y,_this)) : bool(false) ))))){
					HX_STACK_LINE(374)
					if ((!(_this->_valueCache->exists(HX_CSTRING("vBumpInfos"))))){
						HX_STACK_LINE(374)
						_this->_valueCache->set(HX_CSTRING("vBumpInfos"),Array_obj< Float >::__new().Add(x).Add(y));
					}
					else{
						HX_STACK_LINE(374)
						Array< Float > _g44 = _this->_valueCache->get(HX_CSTRING("vBumpInfos"));		HX_STACK_VAR(_g44,"_g44");
						HX_STACK_LINE(374)
						_g44[(int)0] = x;
						HX_STACK_LINE(374)
						Array< Float > _g45 = _this->_valueCache->get(HX_CSTRING("vBumpInfos"));		HX_STACK_VAR(_g45,"_g45");
						HX_STACK_LINE(374)
						_g45[(int)1] = y;
					}
					HX_STACK_LINE(374)
					{
						HX_STACK_LINE(374)
						Dynamic uniform = _this->getUniform(HX_CSTRING("vBumpInfos"));		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(374)
						if (((uniform != null()))){
							HX_STACK_LINE(374)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(374)
							::openfl::gl::GL_obj::lime_gl_uniform2f(location,x,y);
						}
					}
				}
			}
			HX_STACK_LINE(375)
			{
				HX_STACK_LINE(375)
				::com::gamestudiohx::babylonhx::tools::math::Matrix matrix = this->bumpTexture->_computeTextureMatrix();		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(375)
				{
					HX_STACK_LINE(375)
					Dynamic uniform = this->_effect->getUniform(HX_CSTRING("bumpMatrix"));		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(375)
					if (((uniform != null()))){
						HX_STACK_LINE(375)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(375)
						Dynamic v;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(375)
						{
							HX_STACK_LINE(375)
							::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(375)
							Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(375)
							v = data;
						}
						HX_STACK_LINE(375)
						::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
					}
				}
			}
		}
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(379)
			::com::gamestudiohx::babylonhx::tools::math::Color3 _this = this->_scene->ambientColor;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(379)
			::com::gamestudiohx::babylonhx::tools::math::Color3 otherColor = this->ambientColor;		HX_STACK_VAR(otherColor,"otherColor");
			HX_STACK_LINE(379)
			::com::gamestudiohx::babylonhx::tools::math::Color3 result = this->_globalAmbientColor;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(379)
			result->r = (_this->r * otherColor->r);
			HX_STACK_LINE(379)
			result->g = (_this->g * otherColor->g);
			HX_STACK_LINE(379)
			result->b = (_this->b * otherColor->b);
		}
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(381)
			::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(381)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 vector3 = this->_scene->activeCamera->position;		HX_STACK_VAR(vector3,"vector3");
			struct _Function_2_1{
				inline static bool Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &vector3,::com::gamestudiohx::babylonhx::materials::Effect _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",381,0xee7428c4)
					{
						HX_STACK_LINE(381)
						Array< Float > _g46 = _this->_valueCache->get(HX_CSTRING("vEyePosition"));		HX_STACK_VAR(_g46,"_g46");
						HX_STACK_LINE(381)
						Float _g47 = _g46->__get((int)0);		HX_STACK_VAR(_g47,"_g47");
						HX_STACK_LINE(381)
						return (_g47 == vector3->x);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &vector3,::com::gamestudiohx::babylonhx::materials::Effect _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",381,0xee7428c4)
					{
						HX_STACK_LINE(381)
						Array< Float > _g48 = _this->_valueCache->get(HX_CSTRING("vEyePosition"));		HX_STACK_VAR(_g48,"_g48");
						HX_STACK_LINE(381)
						Float _g49 = _g48->__get((int)1);		HX_STACK_VAR(_g49,"_g49");
						HX_STACK_LINE(381)
						return (_g49 == vector3->y);
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static bool Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &vector3,::com::gamestudiohx::babylonhx::materials::Effect _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",381,0xee7428c4)
					{
						HX_STACK_LINE(381)
						Array< Float > _g50 = _this->_valueCache->get(HX_CSTRING("vEyePosition"));		HX_STACK_VAR(_g50,"_g50");
						HX_STACK_LINE(381)
						Float _g51 = _g50->__get((int)2);		HX_STACK_VAR(_g51,"_g51");
						HX_STACK_LINE(381)
						return (_g51 == vector3->z);
					}
					return null();
				}
			};
			HX_STACK_LINE(381)
			if ((!(((  (((  (((  ((_this->_valueCache->exists(HX_CSTRING("vEyePosition")))) ? bool(_Function_2_1::Block(vector3,_this)) : bool(false) ))) ? bool(_Function_2_2::Block(vector3,_this)) : bool(false) ))) ? bool(_Function_2_3::Block(vector3,_this)) : bool(false) ))))){
				HX_STACK_LINE(381)
				{
					HX_STACK_LINE(381)
					Float x = vector3->x;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(381)
					Float y = vector3->y;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(381)
					Float z = vector3->z;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(381)
					if ((!(_this->_valueCache->exists(HX_CSTRING("vEyePosition"))))){
						HX_STACK_LINE(381)
						_this->_valueCache->set(HX_CSTRING("vEyePosition"),Array_obj< Float >::__new().Add(x).Add(y).Add(z));
					}
					else{
						HX_STACK_LINE(381)
						Array< Float > _g52 = _this->_valueCache->get(HX_CSTRING("vEyePosition"));		HX_STACK_VAR(_g52,"_g52");
						HX_STACK_LINE(381)
						_g52[(int)0] = x;
						HX_STACK_LINE(381)
						Array< Float > _g53 = _this->_valueCache->get(HX_CSTRING("vEyePosition"));		HX_STACK_VAR(_g53,"_g53");
						HX_STACK_LINE(381)
						_g53[(int)1] = y;
						HX_STACK_LINE(381)
						Array< Float > _g54 = _this->_valueCache->get(HX_CSTRING("vEyePosition"));		HX_STACK_VAR(_g54,"_g54");
						HX_STACK_LINE(381)
						_g54[(int)2] = z;
					}
				}
				HX_STACK_LINE(381)
				{
					HX_STACK_LINE(381)
					Dynamic uniform = _this->getUniform(HX_CSTRING("vEyePosition"));		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(381)
					if (((uniform != null()))){
						HX_STACK_LINE(381)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(381)
						::openfl::gl::GL_obj::lime_gl_uniform3f(location,vector3->x,vector3->y,vector3->z);
					}
				}
			}
		}
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(382)
			::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(382)
			::com::gamestudiohx::babylonhx::tools::math::Color3 color3 = this->_globalAmbientColor;		HX_STACK_VAR(color3,"color3");
			struct _Function_2_1{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",382,0xee7428c4)
					{
						HX_STACK_LINE(382)
						Array< Float > _g55 = _this->_valueCache->get(HX_CSTRING("vAmbientColor"));		HX_STACK_VAR(_g55,"_g55");
						HX_STACK_LINE(382)
						Float _g56 = _g55->__get((int)0);		HX_STACK_VAR(_g56,"_g56");
						HX_STACK_LINE(382)
						return (_g56 == color3->r);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",382,0xee7428c4)
					{
						HX_STACK_LINE(382)
						Array< Float > _g57 = _this->_valueCache->get(HX_CSTRING("vAmbientColor"));		HX_STACK_VAR(_g57,"_g57");
						HX_STACK_LINE(382)
						Float _g58 = _g57->__get((int)1);		HX_STACK_VAR(_g58,"_g58");
						HX_STACK_LINE(382)
						return (_g58 == color3->g);
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",382,0xee7428c4)
					{
						HX_STACK_LINE(382)
						Array< Float > _g59 = _this->_valueCache->get(HX_CSTRING("vAmbientColor"));		HX_STACK_VAR(_g59,"_g59");
						HX_STACK_LINE(382)
						Float _g60 = _g59->__get((int)2);		HX_STACK_VAR(_g60,"_g60");
						HX_STACK_LINE(382)
						return (_g60 == color3->b);
					}
					return null();
				}
			};
			HX_STACK_LINE(382)
			if ((!(((  (((  (((  ((_this->_valueCache->exists(HX_CSTRING("vAmbientColor")))) ? bool(_Function_2_1::Block(_this,color3)) : bool(false) ))) ? bool(_Function_2_2::Block(_this,color3)) : bool(false) ))) ? bool(_Function_2_3::Block(_this,color3)) : bool(false) ))))){
				HX_STACK_LINE(382)
				{
					HX_STACK_LINE(382)
					Float x = color3->r;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(382)
					Float y = color3->g;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(382)
					Float z = color3->b;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(382)
					if ((!(_this->_valueCache->exists(HX_CSTRING("vAmbientColor"))))){
						HX_STACK_LINE(382)
						_this->_valueCache->set(HX_CSTRING("vAmbientColor"),Array_obj< Float >::__new().Add(x).Add(y).Add(z));
					}
					else{
						HX_STACK_LINE(382)
						Array< Float > _g61 = _this->_valueCache->get(HX_CSTRING("vAmbientColor"));		HX_STACK_VAR(_g61,"_g61");
						HX_STACK_LINE(382)
						_g61[(int)0] = x;
						HX_STACK_LINE(382)
						Array< Float > _g62 = _this->_valueCache->get(HX_CSTRING("vAmbientColor"));		HX_STACK_VAR(_g62,"_g62");
						HX_STACK_LINE(382)
						_g62[(int)1] = y;
						HX_STACK_LINE(382)
						Array< Float > _g63 = _this->_valueCache->get(HX_CSTRING("vAmbientColor"));		HX_STACK_VAR(_g63,"_g63");
						HX_STACK_LINE(382)
						_g63[(int)2] = z;
					}
				}
				HX_STACK_LINE(382)
				{
					HX_STACK_LINE(382)
					Dynamic uniform = _this->getUniform(HX_CSTRING("vAmbientColor"));		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(382)
					if (((uniform != null()))){
						HX_STACK_LINE(382)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(382)
						::openfl::gl::GL_obj::lime_gl_uniform3f(location,color3->r,color3->g,color3->b);
					}
				}
			}
		}
		HX_STACK_LINE(383)
		{
			HX_STACK_LINE(383)
			::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(383)
			::com::gamestudiohx::babylonhx::tools::math::Color3 color3 = this->_baseColor;		HX_STACK_VAR(color3,"color3");
			HX_STACK_LINE(383)
			Float alpha = (this->alpha * mesh->visibility);		HX_STACK_VAR(alpha,"alpha");
			struct _Function_2_1{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",383,0xee7428c4)
					{
						HX_STACK_LINE(383)
						Array< Float > _g64 = _this->_valueCache->get(HX_CSTRING("vDiffuseColor"));		HX_STACK_VAR(_g64,"_g64");
						HX_STACK_LINE(383)
						Float _g65 = _g64->__get((int)0);		HX_STACK_VAR(_g65,"_g65");
						HX_STACK_LINE(383)
						return (_g65 == color3->r);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",383,0xee7428c4)
					{
						HX_STACK_LINE(383)
						Array< Float > _g66 = _this->_valueCache->get(HX_CSTRING("vDiffuseColor"));		HX_STACK_VAR(_g66,"_g66");
						HX_STACK_LINE(383)
						Float _g67 = _g66->__get((int)1);		HX_STACK_VAR(_g67,"_g67");
						HX_STACK_LINE(383)
						return (_g67 == color3->g);
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",383,0xee7428c4)
					{
						HX_STACK_LINE(383)
						Array< Float > _g68 = _this->_valueCache->get(HX_CSTRING("vDiffuseColor"));		HX_STACK_VAR(_g68,"_g68");
						HX_STACK_LINE(383)
						Float _g69 = _g68->__get((int)2);		HX_STACK_VAR(_g69,"_g69");
						HX_STACK_LINE(383)
						return (_g69 == color3->b);
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",383,0xee7428c4)
					{
						HX_STACK_LINE(383)
						Array< Float > _g70 = _this->_valueCache->get(HX_CSTRING("vDiffuseColor"));		HX_STACK_VAR(_g70,"_g70");
						HX_STACK_LINE(383)
						Float _g71 = _g70->__get((int)3);		HX_STACK_VAR(_g71,"_g71");
						HX_STACK_LINE(383)
						return (_g71 == alpha);
					}
					return null();
				}
			};
			HX_STACK_LINE(383)
			if ((!(((  (((  (((  (((  ((_this->_valueCache->exists(HX_CSTRING("vDiffuseColor")))) ? bool(_Function_2_1::Block(_this,color3)) : bool(false) ))) ? bool(_Function_2_2::Block(_this,color3)) : bool(false) ))) ? bool(_Function_2_3::Block(_this,color3)) : bool(false) ))) ? bool(_Function_2_4::Block(_this,alpha)) : bool(false) ))))){
				HX_STACK_LINE(383)
				{
					HX_STACK_LINE(383)
					Float x = color3->r;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(383)
					Float y = color3->g;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(383)
					Float z = color3->b;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(383)
					if ((!(_this->_valueCache->exists(HX_CSTRING("vDiffuseColor"))))){
						HX_STACK_LINE(383)
						_this->_valueCache->set(HX_CSTRING("vDiffuseColor"),Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add(alpha));
					}
					else{
						HX_STACK_LINE(383)
						Array< Float > _g72 = _this->_valueCache->get(HX_CSTRING("vDiffuseColor"));		HX_STACK_VAR(_g72,"_g72");
						HX_STACK_LINE(383)
						_g72[(int)0] = x;
						HX_STACK_LINE(383)
						Array< Float > _g73 = _this->_valueCache->get(HX_CSTRING("vDiffuseColor"));		HX_STACK_VAR(_g73,"_g73");
						HX_STACK_LINE(383)
						_g73[(int)1] = y;
						HX_STACK_LINE(383)
						Array< Float > _g74 = _this->_valueCache->get(HX_CSTRING("vDiffuseColor"));		HX_STACK_VAR(_g74,"_g74");
						HX_STACK_LINE(383)
						_g74[(int)2] = z;
						HX_STACK_LINE(383)
						Array< Float > _g75 = _this->_valueCache->get(HX_CSTRING("vDiffuseColor"));		HX_STACK_VAR(_g75,"_g75");
						HX_STACK_LINE(383)
						_g75[(int)3] = alpha;
					}
				}
				HX_STACK_LINE(383)
				{
					HX_STACK_LINE(383)
					Dynamic uniform = _this->getUniform(HX_CSTRING("vDiffuseColor"));		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(383)
					if (((uniform != null()))){
						HX_STACK_LINE(383)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(383)
						::openfl::gl::GL_obj::lime_gl_uniform4f(location,color3->r,color3->g,color3->b,alpha);
					}
				}
			}
		}
		HX_STACK_LINE(384)
		{
			HX_STACK_LINE(384)
			::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(384)
			::com::gamestudiohx::babylonhx::tools::math::Color3 color3 = this->specularColor;		HX_STACK_VAR(color3,"color3");
			HX_STACK_LINE(384)
			Float alpha = this->specularPower;		HX_STACK_VAR(alpha,"alpha");
			struct _Function_2_1{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",384,0xee7428c4)
					{
						HX_STACK_LINE(384)
						Array< Float > _g76 = _this->_valueCache->get(HX_CSTRING("vSpecularColor"));		HX_STACK_VAR(_g76,"_g76");
						HX_STACK_LINE(384)
						Float _g77 = _g76->__get((int)0);		HX_STACK_VAR(_g77,"_g77");
						HX_STACK_LINE(384)
						return (_g77 == color3->r);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",384,0xee7428c4)
					{
						HX_STACK_LINE(384)
						Array< Float > _g78 = _this->_valueCache->get(HX_CSTRING("vSpecularColor"));		HX_STACK_VAR(_g78,"_g78");
						HX_STACK_LINE(384)
						Float _g79 = _g78->__get((int)1);		HX_STACK_VAR(_g79,"_g79");
						HX_STACK_LINE(384)
						return (_g79 == color3->g);
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",384,0xee7428c4)
					{
						HX_STACK_LINE(384)
						Array< Float > _g80 = _this->_valueCache->get(HX_CSTRING("vSpecularColor"));		HX_STACK_VAR(_g80,"_g80");
						HX_STACK_LINE(384)
						Float _g81 = _g80->__get((int)2);		HX_STACK_VAR(_g81,"_g81");
						HX_STACK_LINE(384)
						return (_g81 == color3->b);
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",384,0xee7428c4)
					{
						HX_STACK_LINE(384)
						Array< Float > _g82 = _this->_valueCache->get(HX_CSTRING("vSpecularColor"));		HX_STACK_VAR(_g82,"_g82");
						HX_STACK_LINE(384)
						Float _g83 = _g82->__get((int)3);		HX_STACK_VAR(_g83,"_g83");
						HX_STACK_LINE(384)
						return (_g83 == alpha);
					}
					return null();
				}
			};
			HX_STACK_LINE(384)
			if ((!(((  (((  (((  (((  ((_this->_valueCache->exists(HX_CSTRING("vSpecularColor")))) ? bool(_Function_2_1::Block(_this,color3)) : bool(false) ))) ? bool(_Function_2_2::Block(_this,color3)) : bool(false) ))) ? bool(_Function_2_3::Block(_this,color3)) : bool(false) ))) ? bool(_Function_2_4::Block(_this,alpha)) : bool(false) ))))){
				HX_STACK_LINE(384)
				{
					HX_STACK_LINE(384)
					Float x = color3->r;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(384)
					Float y = color3->g;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(384)
					Float z = color3->b;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(384)
					if ((!(_this->_valueCache->exists(HX_CSTRING("vSpecularColor"))))){
						HX_STACK_LINE(384)
						_this->_valueCache->set(HX_CSTRING("vSpecularColor"),Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add(alpha));
					}
					else{
						HX_STACK_LINE(384)
						Array< Float > _g84 = _this->_valueCache->get(HX_CSTRING("vSpecularColor"));		HX_STACK_VAR(_g84,"_g84");
						HX_STACK_LINE(384)
						_g84[(int)0] = x;
						HX_STACK_LINE(384)
						Array< Float > _g85 = _this->_valueCache->get(HX_CSTRING("vSpecularColor"));		HX_STACK_VAR(_g85,"_g85");
						HX_STACK_LINE(384)
						_g85[(int)1] = y;
						HX_STACK_LINE(384)
						Array< Float > _g86 = _this->_valueCache->get(HX_CSTRING("vSpecularColor"));		HX_STACK_VAR(_g86,"_g86");
						HX_STACK_LINE(384)
						_g86[(int)2] = z;
						HX_STACK_LINE(384)
						Array< Float > _g87 = _this->_valueCache->get(HX_CSTRING("vSpecularColor"));		HX_STACK_VAR(_g87,"_g87");
						HX_STACK_LINE(384)
						_g87[(int)3] = alpha;
					}
				}
				HX_STACK_LINE(384)
				{
					HX_STACK_LINE(384)
					Dynamic uniform = _this->getUniform(HX_CSTRING("vSpecularColor"));		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(384)
					if (((uniform != null()))){
						HX_STACK_LINE(384)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(384)
						::openfl::gl::GL_obj::lime_gl_uniform4f(location,color3->r,color3->g,color3->b,alpha);
					}
				}
			}
		}
		HX_STACK_LINE(385)
		{
			HX_STACK_LINE(385)
			::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(385)
			::com::gamestudiohx::babylonhx::tools::math::Color3 color3 = this->emissiveColor;		HX_STACK_VAR(color3,"color3");
			struct _Function_2_1{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",385,0xee7428c4)
					{
						HX_STACK_LINE(385)
						Array< Float > _g88 = _this->_valueCache->get(HX_CSTRING("vEmissiveColor"));		HX_STACK_VAR(_g88,"_g88");
						HX_STACK_LINE(385)
						Float _g89 = _g88->__get((int)0);		HX_STACK_VAR(_g89,"_g89");
						HX_STACK_LINE(385)
						return (_g89 == color3->r);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",385,0xee7428c4)
					{
						HX_STACK_LINE(385)
						Array< Float > _g90 = _this->_valueCache->get(HX_CSTRING("vEmissiveColor"));		HX_STACK_VAR(_g90,"_g90");
						HX_STACK_LINE(385)
						Float _g91 = _g90->__get((int)1);		HX_STACK_VAR(_g91,"_g91");
						HX_STACK_LINE(385)
						return (_g91 == color3->g);
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",385,0xee7428c4)
					{
						HX_STACK_LINE(385)
						Array< Float > _g92 = _this->_valueCache->get(HX_CSTRING("vEmissiveColor"));		HX_STACK_VAR(_g92,"_g92");
						HX_STACK_LINE(385)
						Float _g93 = _g92->__get((int)2);		HX_STACK_VAR(_g93,"_g93");
						HX_STACK_LINE(385)
						return (_g93 == color3->b);
					}
					return null();
				}
			};
			HX_STACK_LINE(385)
			if ((!(((  (((  (((  ((_this->_valueCache->exists(HX_CSTRING("vEmissiveColor")))) ? bool(_Function_2_1::Block(_this,color3)) : bool(false) ))) ? bool(_Function_2_2::Block(_this,color3)) : bool(false) ))) ? bool(_Function_2_3::Block(_this,color3)) : bool(false) ))))){
				HX_STACK_LINE(385)
				{
					HX_STACK_LINE(385)
					Float x = color3->r;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(385)
					Float y = color3->g;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(385)
					Float z = color3->b;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(385)
					if ((!(_this->_valueCache->exists(HX_CSTRING("vEmissiveColor"))))){
						HX_STACK_LINE(385)
						_this->_valueCache->set(HX_CSTRING("vEmissiveColor"),Array_obj< Float >::__new().Add(x).Add(y).Add(z));
					}
					else{
						HX_STACK_LINE(385)
						Array< Float > _g94 = _this->_valueCache->get(HX_CSTRING("vEmissiveColor"));		HX_STACK_VAR(_g94,"_g94");
						HX_STACK_LINE(385)
						_g94[(int)0] = x;
						HX_STACK_LINE(385)
						Array< Float > _g95 = _this->_valueCache->get(HX_CSTRING("vEmissiveColor"));		HX_STACK_VAR(_g95,"_g95");
						HX_STACK_LINE(385)
						_g95[(int)1] = y;
						HX_STACK_LINE(385)
						Array< Float > _g96 = _this->_valueCache->get(HX_CSTRING("vEmissiveColor"));		HX_STACK_VAR(_g96,"_g96");
						HX_STACK_LINE(385)
						_g96[(int)2] = z;
					}
				}
				HX_STACK_LINE(385)
				{
					HX_STACK_LINE(385)
					Dynamic uniform = _this->getUniform(HX_CSTRING("vEmissiveColor"));		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(385)
					if (((uniform != null()))){
						HX_STACK_LINE(385)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(385)
						::openfl::gl::GL_obj::lime_gl_uniform3f(location,color3->r,color3->g,color3->b);
					}
				}
			}
		}
		HX_STACK_LINE(388)
		if ((this->_scene->lightsEnabled)){
			HX_STACK_LINE(389)
			int lightIndex = (int)0;		HX_STACK_VAR(lightIndex,"lightIndex");
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(390)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(390)
				int _g = this->_scene->lights->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(390)
				while((true)){
					HX_STACK_LINE(390)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(390)
						break;
					}
					HX_STACK_LINE(390)
					int index = (_g1)++;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(391)
					::com::gamestudiohx::babylonhx::lights::Light light = this->_scene->lights->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::lights::Light >();		HX_STACK_VAR(light,"light");
					HX_STACK_LINE(393)
					if ((!(light->isEnabled()))){
						HX_STACK_LINE(394)
						continue;
					}
					struct _Function_4_1{
						inline static bool Block( ::com::gamestudiohx::babylonhx::lights::Light &light,::com::gamestudiohx::babylonhx::mesh::Mesh &mesh){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",397,0xee7428c4)
							{
								HX_STACK_LINE(397)
								int _g97 = ::Lambda_obj::indexOf(light->excludedMeshes,mesh);		HX_STACK_VAR(_g97,"_g97");
								HX_STACK_LINE(397)
								return (_g97 != (int)-1);
							}
							return null();
						}
					};
					HX_STACK_LINE(397)
					if (((  (((mesh != null()))) ? bool(_Function_4_1::Block(light,mesh)) : bool(false) ))){
						HX_STACK_LINE(398)
						continue;
					}
					HX_STACK_LINE(401)
					if ((::Std_obj::is(light,hx::ClassOf< ::com::gamestudiohx::babylonhx::lights::PointLight >()))){
						HX_STACK_LINE(403)
						light->transferToEffect(this->_effect,(HX_CSTRING("vLightData") + lightIndex),null());
					}
					else{
						HX_STACK_LINE(404)
						if ((::Std_obj::is(light,hx::ClassOf< ::com::gamestudiohx::babylonhx::lights::DirectionalLight >()))){
							HX_STACK_LINE(406)
							light->transferToEffect(this->_effect,HX_CSTRING(""),(HX_CSTRING("vLightData") + lightIndex));
						}
						else{
							HX_STACK_LINE(407)
							if ((::Std_obj::is(light,hx::ClassOf< ::com::gamestudiohx::babylonhx::lights::SpotLight >()))){
								HX_STACK_LINE(409)
								light->transferToEffect(this->_effect,(HX_CSTRING("vLightData") + lightIndex),(HX_CSTRING("vLightDirection") + lightIndex));
							}
							else{
								HX_STACK_LINE(410)
								if ((::Std_obj::is(light,hx::ClassOf< ::com::gamestudiohx::babylonhx::lights::HemisphericLight >()))){
									HX_STACK_LINE(412)
									light->transferToEffect(this->_effect,(HX_CSTRING("vLightData") + lightIndex),(HX_CSTRING("vLightGround") + lightIndex));
								}
							}
						}
					}
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						::com::gamestudiohx::babylonhx::tools::math::Color3 _this = light->diffuse;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(415)
						Float scale = light->intensity;		HX_STACK_VAR(scale,"scale");
						HX_STACK_LINE(415)
						::com::gamestudiohx::babylonhx::tools::math::Color3 result = this->_scaledDiffuse;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(415)
						result->r = (_this->r * scale);
						HX_STACK_LINE(415)
						result->g = (_this->g * scale);
						HX_STACK_LINE(415)
						result->b = (_this->b * scale);
					}
					HX_STACK_LINE(416)
					{
						HX_STACK_LINE(416)
						::com::gamestudiohx::babylonhx::tools::math::Color3 _this = light->specular;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(416)
						Float scale = light->intensity;		HX_STACK_VAR(scale,"scale");
						HX_STACK_LINE(416)
						::com::gamestudiohx::babylonhx::tools::math::Color3 result = this->_scaledSpecular;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(416)
						result->r = (_this->r * scale);
						HX_STACK_LINE(416)
						result->g = (_this->g * scale);
						HX_STACK_LINE(416)
						result->b = (_this->b * scale);
					}
					HX_STACK_LINE(417)
					{
						HX_STACK_LINE(417)
						::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(417)
						::String uniformName = (HX_CSTRING("vLightDiffuse") + lightIndex);		HX_STACK_VAR(uniformName,"uniformName");
						HX_STACK_LINE(417)
						::com::gamestudiohx::babylonhx::tools::math::Color3 color3 = this->_scaledDiffuse;		HX_STACK_VAR(color3,"color3");
						struct _Function_5_1{
							inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3,::String &uniformName){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",417,0xee7428c4)
								{
									HX_STACK_LINE(417)
									Array< Float > _g98 = _this->_valueCache->get(uniformName);		HX_STACK_VAR(_g98,"_g98");
									HX_STACK_LINE(417)
									Float _g99 = _g98->__get((int)0);		HX_STACK_VAR(_g99,"_g99");
									HX_STACK_LINE(417)
									return (_g99 == color3->r);
								}
								return null();
							}
						};
						struct _Function_5_2{
							inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3,::String &uniformName){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",417,0xee7428c4)
								{
									HX_STACK_LINE(417)
									Array< Float > _g100 = _this->_valueCache->get(uniformName);		HX_STACK_VAR(_g100,"_g100");
									HX_STACK_LINE(417)
									Float _g101 = _g100->__get((int)1);		HX_STACK_VAR(_g101,"_g101");
									HX_STACK_LINE(417)
									return (_g101 == color3->g);
								}
								return null();
							}
						};
						struct _Function_5_3{
							inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3,::String &uniformName){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",417,0xee7428c4)
								{
									HX_STACK_LINE(417)
									Array< Float > _g102 = _this->_valueCache->get(uniformName);		HX_STACK_VAR(_g102,"_g102");
									HX_STACK_LINE(417)
									Float _g103 = _g102->__get((int)2);		HX_STACK_VAR(_g103,"_g103");
									HX_STACK_LINE(417)
									return (_g103 == color3->b);
								}
								return null();
							}
						};
						HX_STACK_LINE(417)
						if ((!(((  (((  (((  ((_this->_valueCache->exists(uniformName))) ? bool(_Function_5_1::Block(_this,color3,uniformName)) : bool(false) ))) ? bool(_Function_5_2::Block(_this,color3,uniformName)) : bool(false) ))) ? bool(_Function_5_3::Block(_this,color3,uniformName)) : bool(false) ))))){
							HX_STACK_LINE(417)
							{
								HX_STACK_LINE(417)
								Float x = color3->r;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(417)
								Float y = color3->g;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(417)
								Float z = color3->b;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(417)
								if ((!(_this->_valueCache->exists(uniformName)))){
									HX_STACK_LINE(417)
									_this->_valueCache->set(uniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z));
								}
								else{
									HX_STACK_LINE(417)
									Array< Float > _g104 = _this->_valueCache->get(uniformName);		HX_STACK_VAR(_g104,"_g104");
									HX_STACK_LINE(417)
									_g104[(int)0] = x;
									HX_STACK_LINE(417)
									Array< Float > _g105 = _this->_valueCache->get(uniformName);		HX_STACK_VAR(_g105,"_g105");
									HX_STACK_LINE(417)
									_g105[(int)1] = y;
									HX_STACK_LINE(417)
									Array< Float > _g106 = _this->_valueCache->get(uniformName);		HX_STACK_VAR(_g106,"_g106");
									HX_STACK_LINE(417)
									_g106[(int)2] = z;
								}
							}
							HX_STACK_LINE(417)
							{
								HX_STACK_LINE(417)
								Dynamic uniform = _this->getUniform(uniformName);		HX_STACK_VAR(uniform,"uniform");
								HX_STACK_LINE(417)
								if (((uniform != null()))){
									HX_STACK_LINE(417)
									Dynamic location = uniform;		HX_STACK_VAR(location,"location");
									HX_STACK_LINE(417)
									::openfl::gl::GL_obj::lime_gl_uniform3f(location,color3->r,color3->g,color3->b);
								}
							}
						}
					}
					HX_STACK_LINE(418)
					{
						HX_STACK_LINE(418)
						::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(418)
						::String uniformName = (HX_CSTRING("vLightSpecular") + lightIndex);		HX_STACK_VAR(uniformName,"uniformName");
						HX_STACK_LINE(418)
						::com::gamestudiohx::babylonhx::tools::math::Color3 color3 = this->_scaledSpecular;		HX_STACK_VAR(color3,"color3");
						struct _Function_5_1{
							inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3,::String &uniformName){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",418,0xee7428c4)
								{
									HX_STACK_LINE(418)
									Array< Float > _g107 = _this->_valueCache->get(uniformName);		HX_STACK_VAR(_g107,"_g107");
									HX_STACK_LINE(418)
									Float _g108 = _g107->__get((int)0);		HX_STACK_VAR(_g108,"_g108");
									HX_STACK_LINE(418)
									return (_g108 == color3->r);
								}
								return null();
							}
						};
						struct _Function_5_2{
							inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3,::String &uniformName){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",418,0xee7428c4)
								{
									HX_STACK_LINE(418)
									Array< Float > _g109 = _this->_valueCache->get(uniformName);		HX_STACK_VAR(_g109,"_g109");
									HX_STACK_LINE(418)
									Float _g110 = _g109->__get((int)1);		HX_STACK_VAR(_g110,"_g110");
									HX_STACK_LINE(418)
									return (_g110 == color3->g);
								}
								return null();
							}
						};
						struct _Function_5_3{
							inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3,::String &uniformName){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",418,0xee7428c4)
								{
									HX_STACK_LINE(418)
									Array< Float > _g111 = _this->_valueCache->get(uniformName);		HX_STACK_VAR(_g111,"_g111");
									HX_STACK_LINE(418)
									Float _g112 = _g111->__get((int)2);		HX_STACK_VAR(_g112,"_g112");
									HX_STACK_LINE(418)
									return (_g112 == color3->b);
								}
								return null();
							}
						};
						HX_STACK_LINE(418)
						if ((!(((  (((  (((  ((_this->_valueCache->exists(uniformName))) ? bool(_Function_5_1::Block(_this,color3,uniformName)) : bool(false) ))) ? bool(_Function_5_2::Block(_this,color3,uniformName)) : bool(false) ))) ? bool(_Function_5_3::Block(_this,color3,uniformName)) : bool(false) ))))){
							HX_STACK_LINE(418)
							{
								HX_STACK_LINE(418)
								Float x = color3->r;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(418)
								Float y = color3->g;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(418)
								Float z = color3->b;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(418)
								if ((!(_this->_valueCache->exists(uniformName)))){
									HX_STACK_LINE(418)
									_this->_valueCache->set(uniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z));
								}
								else{
									HX_STACK_LINE(418)
									Array< Float > _g113 = _this->_valueCache->get(uniformName);		HX_STACK_VAR(_g113,"_g113");
									HX_STACK_LINE(418)
									_g113[(int)0] = x;
									HX_STACK_LINE(418)
									Array< Float > _g114 = _this->_valueCache->get(uniformName);		HX_STACK_VAR(_g114,"_g114");
									HX_STACK_LINE(418)
									_g114[(int)1] = y;
									HX_STACK_LINE(418)
									Array< Float > _g115 = _this->_valueCache->get(uniformName);		HX_STACK_VAR(_g115,"_g115");
									HX_STACK_LINE(418)
									_g115[(int)2] = z;
								}
							}
							HX_STACK_LINE(418)
							{
								HX_STACK_LINE(418)
								Dynamic uniform = _this->getUniform(uniformName);		HX_STACK_VAR(uniform,"uniform");
								HX_STACK_LINE(418)
								if (((uniform != null()))){
									HX_STACK_LINE(418)
									Dynamic location = uniform;		HX_STACK_VAR(location,"location");
									HX_STACK_LINE(418)
									::openfl::gl::GL_obj::lime_gl_uniform3f(location,color3->r,color3->g,color3->b);
								}
							}
						}
					}
					HX_STACK_LINE(421)
					::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator shadowGenerator = light->getShadowGenerator();		HX_STACK_VAR(shadowGenerator,"shadowGenerator");
					HX_STACK_LINE(422)
					if (((bool(mesh->receiveShadows) && bool((shadowGenerator != null()))))){
						HX_STACK_LINE(423)
						{
							HX_STACK_LINE(423)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(423)
							{
								HX_STACK_LINE(423)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 lightPosition = ::Reflect_obj::field(shadowGenerator->_light,HX_CSTRING("position"));		HX_STACK_VAR(lightPosition,"lightPosition");
								HX_STACK_LINE(423)
								Dynamic lightDirection = ::Reflect_obj::field(shadowGenerator->_light,HX_CSTRING("direction"));		HX_STACK_VAR(lightDirection,"lightDirection");
								struct _Function_7_1{
									inline static bool Block( ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator &shadowGenerator){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",423,0xee7428c4)
										{
											HX_STACK_LINE(423)
											::com::gamestudiohx::babylonhx::lights::DirectionalLight _this;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(423)
											_this = hx::TCast< com::gamestudiohx::babylonhx::lights::DirectionalLight >::cast(shadowGenerator->_light);
											HX_STACK_LINE(423)
											bool ret = false;		HX_STACK_VAR(ret,"ret");
											struct _Function_8_1{
												inline static bool Block( ::com::gamestudiohx::babylonhx::lights::DirectionalLight _this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",423,0xee7428c4)
													{
														HX_STACK_LINE(423)
														::com::gamestudiohx::babylonhx::tools::math::Matrix _g116 = _this->parent->getWorldMatrix();		HX_STACK_VAR(_g116,"_g116");
														HX_STACK_LINE(423)
														return (_g116 != null());
													}
													return null();
												}
											};
											HX_STACK_LINE(423)
											if (((  (((_this->parent != null()))) ? bool(_Function_8_1::Block(_this)) : bool(false) ))){
												HX_STACK_LINE(423)
												if (((_this->_transformedPosition == null()))){
													HX_STACK_LINE(423)
													::com::gamestudiohx::babylonhx::tools::math::Vector3 _g117 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g117,"_g117");
													HX_STACK_LINE(423)
													_this->_transformedPosition = _g117;
												}
												HX_STACK_LINE(423)
												{
													HX_STACK_LINE(423)
													::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = _this->position;		HX_STACK_VAR(vector,"vector");
													HX_STACK_LINE(423)
													::com::gamestudiohx::babylonhx::tools::math::Matrix transformation = _this->parent->getWorldMatrix();		HX_STACK_VAR(transformation,"transformation");
													HX_STACK_LINE(423)
													::com::gamestudiohx::babylonhx::tools::math::Vector3 result = _this->_transformedPosition;		HX_STACK_VAR(result,"result");
													HX_STACK_LINE(423)
													Float x = ((((vector->x * transformation->m->__get((int)0)) + (vector->y * transformation->m->__get((int)4))) + (vector->z * transformation->m->__get((int)8))) + transformation->m->__get((int)12));		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(423)
													Float y = ((((vector->x * transformation->m->__get((int)1)) + (vector->y * transformation->m->__get((int)5))) + (vector->z * transformation->m->__get((int)9))) + transformation->m->__get((int)13));		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(423)
													Float z = ((((vector->x * transformation->m->__get((int)2)) + (vector->y * transformation->m->__get((int)6))) + (vector->z * transformation->m->__get((int)10))) + transformation->m->__get((int)14));		HX_STACK_VAR(z,"z");
													HX_STACK_LINE(423)
													Float w = ((((vector->x * transformation->m->__get((int)3)) + (vector->y * transformation->m->__get((int)7))) + (vector->z * transformation->m->__get((int)11))) + transformation->m->__get((int)15));		HX_STACK_VAR(w,"w");
													HX_STACK_LINE(423)
													result->x = (Float(x) / Float(w));
													HX_STACK_LINE(423)
													result->y = (Float(y) / Float(w));
													HX_STACK_LINE(423)
													result->z = (Float(z) / Float(w));
												}
												HX_STACK_LINE(423)
												ret = true;
											}
											HX_STACK_LINE(423)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(423)
								if ((_Function_7_1::Block(shadowGenerator))){
									HX_STACK_LINE(423)
									lightPosition = (hx::TCast< com::gamestudiohx::babylonhx::lights::DirectionalLight >::cast(shadowGenerator->_light))->_transformedPosition;
								}
								struct _Function_7_2{
									inline static bool Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &lightPosition,::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator &shadowGenerator){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",423,0xee7428c4)
										{
											HX_STACK_LINE(423)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = shadowGenerator->_cachedPosition;		HX_STACK_VAR(otherVector,"otherVector");
											HX_STACK_LINE(423)
											return (bool((bool((lightPosition->x == otherVector->x)) && bool((lightPosition->y == otherVector->y)))) && bool((lightPosition->z == otherVector->z)));
										}
										return null();
									}
								};
								HX_STACK_LINE(423)
								if (((  ((!(((bool((bool((shadowGenerator->_cachedPosition == null())) || bool((shadowGenerator->_cachedDirection == null())))) || bool(!(_Function_7_2::Block(lightPosition,shadowGenerator)))))))) ? bool(!(lightDirection->__Field(HX_CSTRING("equals"),true)(shadowGenerator->_cachedDirection))) : bool(true) ))){
									HX_STACK_LINE(423)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 _g118 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(lightPosition->x,lightPosition->y,lightPosition->z);		HX_STACK_VAR(_g118,"_g118");
									HX_STACK_LINE(423)
									shadowGenerator->_cachedPosition = _g118;
									HX_STACK_LINE(423)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 _g119 = lightDirection->__Field(HX_CSTRING("clone"),true)();		HX_STACK_VAR(_g119,"_g119");
									HX_STACK_LINE(423)
									shadowGenerator->_cachedDirection = _g119;
									HX_STACK_LINE(423)
									::com::gamestudiohx::babylonhx::cameras::Camera activeCamera = shadowGenerator->_scene->activeCamera;		HX_STACK_VAR(activeCamera,"activeCamera");
									HX_STACK_LINE(423)
									{
										HX_STACK_LINE(423)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 target = ::Reflect_obj::field(shadowGenerator->_light,HX_CSTRING("position"))->__Field(HX_CSTRING("add"),true)(lightDirection);		HX_STACK_VAR(target,"target");
										HX_STACK_LINE(423)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
										HX_STACK_LINE(423)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = shadowGenerator->_viewMatrix;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(423)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
										HX_STACK_LINE(423)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
										HX_STACK_LINE(423)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
										HX_STACK_LINE(423)
										{
											HX_STACK_LINE(423)
											zAxis->x = (target->x - lightPosition->x);
											HX_STACK_LINE(423)
											zAxis->y = (target->y - lightPosition->y);
											HX_STACK_LINE(423)
											zAxis->z = (target->z - lightPosition->z);
										}
										HX_STACK_LINE(423)
										{
											HX_STACK_LINE(423)
											Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(423)
											if (((len != (int)0))){
												HX_STACK_LINE(423)
												Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(423)
												hx::MultEq(zAxis->x,num);
												HX_STACK_LINE(423)
												hx::MultEq(zAxis->y,num);
												HX_STACK_LINE(423)
												hx::MultEq(zAxis->z,num);
											}
										}
										HX_STACK_LINE(423)
										{
											HX_STACK_LINE(423)
											xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
											HX_STACK_LINE(423)
											xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
											HX_STACK_LINE(423)
											xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
										}
										HX_STACK_LINE(423)
										{
											HX_STACK_LINE(423)
											Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(423)
											if (((len != (int)0))){
												HX_STACK_LINE(423)
												Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(423)
												hx::MultEq(xAxis->x,num);
												HX_STACK_LINE(423)
												hx::MultEq(xAxis->y,num);
												HX_STACK_LINE(423)
												hx::MultEq(xAxis->z,num);
											}
										}
										HX_STACK_LINE(423)
										{
											HX_STACK_LINE(423)
											yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
											HX_STACK_LINE(423)
											yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
											HX_STACK_LINE(423)
											yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
										}
										HX_STACK_LINE(423)
										{
											HX_STACK_LINE(423)
											Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(423)
											if (((len != (int)0))){
												HX_STACK_LINE(423)
												Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(423)
												hx::MultEq(yAxis->x,num);
												HX_STACK_LINE(423)
												hx::MultEq(yAxis->y,num);
												HX_STACK_LINE(423)
												hx::MultEq(yAxis->z,num);
											}
										}
										HX_STACK_LINE(423)
										Float ex = -(((((xAxis->x * lightPosition->x) + (xAxis->y * lightPosition->y)) + (xAxis->z * lightPosition->z))));		HX_STACK_VAR(ex,"ex");
										HX_STACK_LINE(423)
										Float ey = -(((((yAxis->x * lightPosition->x) + (yAxis->y * lightPosition->y)) + (yAxis->z * lightPosition->z))));		HX_STACK_VAR(ey,"ey");
										HX_STACK_LINE(423)
										Float ez = -(((((zAxis->x * lightPosition->x) + (zAxis->y * lightPosition->y)) + (zAxis->z * lightPosition->z))));		HX_STACK_VAR(ez,"ez");
										HX_STACK_LINE(423)
										{
											HX_STACK_LINE(423)
											result->m[(int)0] = xAxis->x;
											HX_STACK_LINE(423)
											result->m[(int)1] = yAxis->x;
											HX_STACK_LINE(423)
											result->m[(int)2] = zAxis->x;
											HX_STACK_LINE(423)
											result->m[(int)3] = (int)0;
											HX_STACK_LINE(423)
											result->m[(int)4] = xAxis->y;
											HX_STACK_LINE(423)
											result->m[(int)5] = yAxis->y;
											HX_STACK_LINE(423)
											result->m[(int)6] = zAxis->y;
											HX_STACK_LINE(423)
											result->m[(int)7] = (int)0;
											HX_STACK_LINE(423)
											result->m[(int)8] = xAxis->z;
											HX_STACK_LINE(423)
											result->m[(int)9] = yAxis->z;
											HX_STACK_LINE(423)
											result->m[(int)10] = zAxis->z;
											HX_STACK_LINE(423)
											result->m[(int)11] = (int)0;
											HX_STACK_LINE(423)
											result->m[(int)12] = ex;
											HX_STACK_LINE(423)
											result->m[(int)13] = ey;
											HX_STACK_LINE(423)
											result->m[(int)14] = ez;
											HX_STACK_LINE(423)
											result->m[(int)15] = (int)1;
											HX_STACK_LINE(423)
											result;
										}
									}
									HX_STACK_LINE(423)
									{
										HX_STACK_LINE(423)
										Float znear = activeCamera->minZ;		HX_STACK_VAR(znear,"znear");
										HX_STACK_LINE(423)
										Float zfar = activeCamera->maxZ;		HX_STACK_VAR(zfar,"zfar");
										HX_STACK_LINE(423)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = shadowGenerator->_projectionMatrix;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(423)
										Float _g120 = ::Math_obj::tan(((Float(::Math_obj::PI) / Float(2.0)) * 0.5));		HX_STACK_VAR(_g120,"_g120");
										HX_STACK_LINE(423)
										Float tan = (Float(1.0) / Float(_g120));		HX_STACK_VAR(tan,"tan");
										HX_STACK_LINE(423)
										result->m[(int)0] = (Float(tan) / Float(1.0));
										HX_STACK_LINE(423)
										result->m[(int)1] = result->m[(int)2] = result->m[(int)3] = 0.0;
										HX_STACK_LINE(423)
										result->m[(int)5] = tan;
										HX_STACK_LINE(423)
										result->m[(int)4] = result->m[(int)6] = result->m[(int)7] = 0.0;
										HX_STACK_LINE(423)
										result->m[(int)8] = result->m[(int)9] = 0.0;
										HX_STACK_LINE(423)
										result->m[(int)10] = (Float(-(zfar)) / Float(((znear - zfar))));
										HX_STACK_LINE(423)
										result->m[(int)11] = 1.0;
										HX_STACK_LINE(423)
										result->m[(int)12] = result->m[(int)13] = result->m[(int)15] = 0.0;
										HX_STACK_LINE(423)
										result->m[(int)14] = (Float((znear * zfar)) / Float(((znear - zfar))));
										HX_STACK_LINE(423)
										result;
									}
									HX_STACK_LINE(423)
									{
										HX_STACK_LINE(423)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = shadowGenerator->_viewMatrix;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(423)
										::com::gamestudiohx::babylonhx::tools::math::Matrix other1 = shadowGenerator->_projectionMatrix;		HX_STACK_VAR(other1,"other1");
										HX_STACK_LINE(423)
										{
											HX_STACK_LINE(423)
											Array< Float > result = shadowGenerator->_transformMatrix->m;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(423)
											Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
											HX_STACK_LINE(423)
											Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
											HX_STACK_LINE(423)
											Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
											HX_STACK_LINE(423)
											Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
											HX_STACK_LINE(423)
											Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
											HX_STACK_LINE(423)
											Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
											HX_STACK_LINE(423)
											Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
											HX_STACK_LINE(423)
											Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
											HX_STACK_LINE(423)
											Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
											HX_STACK_LINE(423)
											Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
											HX_STACK_LINE(423)
											Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
											HX_STACK_LINE(423)
											Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
											HX_STACK_LINE(423)
											Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
											HX_STACK_LINE(423)
											Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
											HX_STACK_LINE(423)
											Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
											HX_STACK_LINE(423)
											Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
											HX_STACK_LINE(423)
											Float om0 = other1->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
											HX_STACK_LINE(423)
											Float om1 = other1->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
											HX_STACK_LINE(423)
											Float om2 = other1->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
											HX_STACK_LINE(423)
											Float om3 = other1->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
											HX_STACK_LINE(423)
											Float om4 = other1->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
											HX_STACK_LINE(423)
											Float om5 = other1->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
											HX_STACK_LINE(423)
											Float om6 = other1->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
											HX_STACK_LINE(423)
											Float om7 = other1->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
											HX_STACK_LINE(423)
											Float om8 = other1->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
											HX_STACK_LINE(423)
											Float om9 = other1->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
											HX_STACK_LINE(423)
											Float om10 = other1->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
											HX_STACK_LINE(423)
											Float om11 = other1->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
											HX_STACK_LINE(423)
											Float om12 = other1->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
											HX_STACK_LINE(423)
											Float om13 = other1->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
											HX_STACK_LINE(423)
											Float om14 = other1->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
											HX_STACK_LINE(423)
											Float om15 = other1->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
											HX_STACK_LINE(423)
											result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
											HX_STACK_LINE(423)
											result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
											HX_STACK_LINE(423)
											result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
											HX_STACK_LINE(423)
											result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
											HX_STACK_LINE(423)
											result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
											HX_STACK_LINE(423)
											result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
											HX_STACK_LINE(423)
											result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
											HX_STACK_LINE(423)
											result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
											HX_STACK_LINE(423)
											result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
											HX_STACK_LINE(423)
											result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
											HX_STACK_LINE(423)
											result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
											HX_STACK_LINE(423)
											result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
											HX_STACK_LINE(423)
											result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
											HX_STACK_LINE(423)
											result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
											HX_STACK_LINE(423)
											result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
											HX_STACK_LINE(423)
											result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
											HX_STACK_LINE(423)
											result;
										}
									}
								}
								HX_STACK_LINE(423)
								other = shadowGenerator->_transformMatrix;
							}
							HX_STACK_LINE(423)
							{
								HX_STACK_LINE(423)
								Array< Float > result = this->_lightMatrix->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(423)
								Float tm0 = world->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(423)
								Float tm1 = world->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(423)
								Float tm2 = world->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(423)
								Float tm3 = world->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(423)
								Float tm4 = world->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(423)
								Float tm5 = world->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(423)
								Float tm6 = world->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(423)
								Float tm7 = world->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(423)
								Float tm8 = world->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(423)
								Float tm9 = world->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(423)
								Float tm10 = world->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(423)
								Float tm11 = world->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(423)
								Float tm12 = world->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(423)
								Float tm13 = world->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(423)
								Float tm14 = world->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(423)
								Float tm15 = world->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(423)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(423)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(423)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(423)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(423)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(423)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(423)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(423)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(423)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(423)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(423)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(423)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(423)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(423)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(423)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(423)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(423)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(423)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(423)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(423)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(423)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(423)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(423)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(423)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(423)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(423)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(423)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(423)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(423)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(423)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(423)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(423)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(423)
								result;
							}
						}
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							Dynamic uniform = this->_effect->getUniform((HX_CSTRING("lightMatrix") + lightIndex));		HX_STACK_VAR(uniform,"uniform");
							HX_STACK_LINE(424)
							if (((uniform != null()))){
								HX_STACK_LINE(424)
								Dynamic location = uniform;		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(424)
								Dynamic v;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(424)
								{
									HX_STACK_LINE(424)
									::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(this->_lightMatrix->m,null(),null());		HX_STACK_VAR(f,"f");
									HX_STACK_LINE(424)
									Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
									HX_STACK_LINE(424)
									v = data;
								}
								HX_STACK_LINE(424)
								::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
							}
						}
						HX_STACK_LINE(425)
						::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture _g121 = shadowGenerator->getShadowMap();		HX_STACK_VAR(_g121,"_g121");
						HX_STACK_LINE(425)
						this->_effect->setTexture((HX_CSTRING("shadowSampler") + lightIndex),_g121);
					}
					HX_STACK_LINE(428)
					(lightIndex)++;
					HX_STACK_LINE(430)
					if (((lightIndex == (int)4))){
						HX_STACK_LINE(431)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(435)
		if (((::com::gamestudiohx::babylonhx::Engine_obj::clipPlane != null()))){
			HX_STACK_LINE(436)
			::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(436)
			Float x = ::com::gamestudiohx::babylonhx::Engine_obj::clipPlane->normal->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(436)
			Float y = ::com::gamestudiohx::babylonhx::Engine_obj::clipPlane->normal->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(436)
			Float z = ::com::gamestudiohx::babylonhx::Engine_obj::clipPlane->normal->z;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(436)
			Float w = ::com::gamestudiohx::babylonhx::Engine_obj::clipPlane->d;		HX_STACK_VAR(w,"w");
			struct _Function_2_1{
				inline static bool Block( Float &x,::com::gamestudiohx::babylonhx::materials::Effect _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",436,0xee7428c4)
					{
						HX_STACK_LINE(436)
						Array< Float > _g122 = _this->_valueCache->get(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(_g122,"_g122");
						HX_STACK_LINE(436)
						Float _g123 = _g122->__get((int)0);		HX_STACK_VAR(_g123,"_g123");
						HX_STACK_LINE(436)
						return (_g123 == x);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( Float &y,::com::gamestudiohx::babylonhx::materials::Effect _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",436,0xee7428c4)
					{
						HX_STACK_LINE(436)
						Array< Float > _g124 = _this->_valueCache->get(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(_g124,"_g124");
						HX_STACK_LINE(436)
						Float _g125 = _g124->__get((int)1);		HX_STACK_VAR(_g125,"_g125");
						HX_STACK_LINE(436)
						return (_g125 == y);
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,Float &z){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",436,0xee7428c4)
					{
						HX_STACK_LINE(436)
						Array< Float > _g126 = _this->_valueCache->get(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(_g126,"_g126");
						HX_STACK_LINE(436)
						Float _g127 = _g126->__get((int)2);		HX_STACK_VAR(_g127,"_g127");
						HX_STACK_LINE(436)
						return (_g127 == z);
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static bool Block( Float &w,::com::gamestudiohx::babylonhx::materials::Effect _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",436,0xee7428c4)
					{
						HX_STACK_LINE(436)
						Array< Float > _g128 = _this->_valueCache->get(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(_g128,"_g128");
						HX_STACK_LINE(436)
						Float _g129 = _g128->__get((int)3);		HX_STACK_VAR(_g129,"_g129");
						HX_STACK_LINE(436)
						return (_g129 == w);
					}
					return null();
				}
			};
			HX_STACK_LINE(436)
			if ((!(((  (((  (((  (((  ((_this->_valueCache->exists(HX_CSTRING("vClipPlane")))) ? bool(_Function_2_1::Block(x,_this)) : bool(false) ))) ? bool(_Function_2_2::Block(y,_this)) : bool(false) ))) ? bool(_Function_2_3::Block(_this,z)) : bool(false) ))) ? bool(_Function_2_4::Block(w,_this)) : bool(false) ))))){
				HX_STACK_LINE(436)
				if ((!(_this->_valueCache->exists(HX_CSTRING("vClipPlane"))))){
					HX_STACK_LINE(436)
					_this->_valueCache->set(HX_CSTRING("vClipPlane"),Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add(w));
				}
				else{
					HX_STACK_LINE(436)
					Array< Float > _g130 = _this->_valueCache->get(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(_g130,"_g130");
					HX_STACK_LINE(436)
					_g130[(int)0] = x;
					HX_STACK_LINE(436)
					Array< Float > _g131 = _this->_valueCache->get(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(_g131,"_g131");
					HX_STACK_LINE(436)
					_g131[(int)1] = y;
					HX_STACK_LINE(436)
					Array< Float > _g132 = _this->_valueCache->get(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(_g132,"_g132");
					HX_STACK_LINE(436)
					_g132[(int)2] = z;
					HX_STACK_LINE(436)
					Array< Float > _g133 = _this->_valueCache->get(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(_g133,"_g133");
					HX_STACK_LINE(436)
					_g133[(int)3] = w;
				}
				HX_STACK_LINE(436)
				{
					HX_STACK_LINE(436)
					Dynamic uniform = _this->getUniform(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(436)
					if (((uniform != null()))){
						HX_STACK_LINE(436)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(436)
						::openfl::gl::GL_obj::lime_gl_uniform4f(location,x,y,z,w);
					}
				}
			}
		}
		HX_STACK_LINE(440)
		if (((bool((this->_scene->fogMode != ::com::gamestudiohx::babylonhx::Scene_obj::FOGMODE_NONE)) || bool((this->reflectionTexture != null()))))){
			HX_STACK_LINE(441)
			::com::gamestudiohx::babylonhx::tools::math::Matrix matrix = this->_scene->getViewMatrix();		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(441)
			{
				HX_STACK_LINE(441)
				Dynamic uniform = this->_effect->getUniform(HX_CSTRING("view"));		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(441)
				if (((uniform != null()))){
					HX_STACK_LINE(441)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(441)
					Dynamic v;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(441)
					{
						HX_STACK_LINE(441)
						::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(441)
						Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(441)
						v = data;
					}
					HX_STACK_LINE(441)
					::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
				}
			}
		}
		HX_STACK_LINE(445)
		if (((this->_scene->fogMode != ::com::gamestudiohx::babylonhx::Scene_obj::FOGMODE_NONE))){
			HX_STACK_LINE(446)
			{
				HX_STACK_LINE(446)
				::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(446)
				Float x = this->_scene->fogMode;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(446)
				Float y = this->_scene->fogStart;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(446)
				Float z = this->_scene->fogEnd;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(446)
				Float w = this->_scene->fogDensity;		HX_STACK_VAR(w,"w");
				struct _Function_3_1{
					inline static bool Block( Float &x,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",446,0xee7428c4)
						{
							HX_STACK_LINE(446)
							Array< Float > _g134 = _this->_valueCache->get(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(_g134,"_g134");
							HX_STACK_LINE(446)
							Float _g135 = _g134->__get((int)0);		HX_STACK_VAR(_g135,"_g135");
							HX_STACK_LINE(446)
							return (_g135 == x);
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( Float &y,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",446,0xee7428c4)
						{
							HX_STACK_LINE(446)
							Array< Float > _g136 = _this->_valueCache->get(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(_g136,"_g136");
							HX_STACK_LINE(446)
							Float _g137 = _g136->__get((int)1);		HX_STACK_VAR(_g137,"_g137");
							HX_STACK_LINE(446)
							return (_g137 == y);
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,Float &z){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",446,0xee7428c4)
						{
							HX_STACK_LINE(446)
							Array< Float > _g138 = _this->_valueCache->get(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(_g138,"_g138");
							HX_STACK_LINE(446)
							Float _g139 = _g138->__get((int)2);		HX_STACK_VAR(_g139,"_g139");
							HX_STACK_LINE(446)
							return (_g139 == z);
						}
						return null();
					}
				};
				struct _Function_3_4{
					inline static bool Block( Float &w,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",446,0xee7428c4)
						{
							HX_STACK_LINE(446)
							Array< Float > _g140 = _this->_valueCache->get(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(_g140,"_g140");
							HX_STACK_LINE(446)
							Float _g141 = _g140->__get((int)3);		HX_STACK_VAR(_g141,"_g141");
							HX_STACK_LINE(446)
							return (_g141 == w);
						}
						return null();
					}
				};
				HX_STACK_LINE(446)
				if ((!(((  (((  (((  (((  ((_this->_valueCache->exists(HX_CSTRING("vFogInfos")))) ? bool(_Function_3_1::Block(x,_this)) : bool(false) ))) ? bool(_Function_3_2::Block(y,_this)) : bool(false) ))) ? bool(_Function_3_3::Block(_this,z)) : bool(false) ))) ? bool(_Function_3_4::Block(w,_this)) : bool(false) ))))){
					HX_STACK_LINE(446)
					if ((!(_this->_valueCache->exists(HX_CSTRING("vFogInfos"))))){
						HX_STACK_LINE(446)
						_this->_valueCache->set(HX_CSTRING("vFogInfos"),Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add(w));
					}
					else{
						HX_STACK_LINE(446)
						Array< Float > _g142 = _this->_valueCache->get(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(_g142,"_g142");
						HX_STACK_LINE(446)
						_g142[(int)0] = x;
						HX_STACK_LINE(446)
						Array< Float > _g143 = _this->_valueCache->get(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(_g143,"_g143");
						HX_STACK_LINE(446)
						_g143[(int)1] = y;
						HX_STACK_LINE(446)
						Array< Float > _g144 = _this->_valueCache->get(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(_g144,"_g144");
						HX_STACK_LINE(446)
						_g144[(int)2] = z;
						HX_STACK_LINE(446)
						Array< Float > _g145 = _this->_valueCache->get(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(_g145,"_g145");
						HX_STACK_LINE(446)
						_g145[(int)3] = w;
					}
					HX_STACK_LINE(446)
					{
						HX_STACK_LINE(446)
						Dynamic uniform = _this->getUniform(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(446)
						if (((uniform != null()))){
							HX_STACK_LINE(446)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(446)
							::openfl::gl::GL_obj::lime_gl_uniform4f(location,x,y,z,w);
						}
					}
				}
			}
			HX_STACK_LINE(447)
			{
				HX_STACK_LINE(447)
				::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(447)
				::com::gamestudiohx::babylonhx::tools::math::Color3 color3 = this->_scene->fogColor;		HX_STACK_VAR(color3,"color3");
				struct _Function_3_1{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",447,0xee7428c4)
						{
							HX_STACK_LINE(447)
							Array< Float > _g146 = _this->_valueCache->get(HX_CSTRING("vFogColor"));		HX_STACK_VAR(_g146,"_g146");
							HX_STACK_LINE(447)
							Float _g147 = _g146->__get((int)0);		HX_STACK_VAR(_g147,"_g147");
							HX_STACK_LINE(447)
							return (_g147 == color3->r);
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",447,0xee7428c4)
						{
							HX_STACK_LINE(447)
							Array< Float > _g148 = _this->_valueCache->get(HX_CSTRING("vFogColor"));		HX_STACK_VAR(_g148,"_g148");
							HX_STACK_LINE(447)
							Float _g149 = _g148->__get((int)1);		HX_STACK_VAR(_g149,"_g149");
							HX_STACK_LINE(447)
							return (_g149 == color3->g);
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",447,0xee7428c4)
						{
							HX_STACK_LINE(447)
							Array< Float > _g150 = _this->_valueCache->get(HX_CSTRING("vFogColor"));		HX_STACK_VAR(_g150,"_g150");
							HX_STACK_LINE(447)
							Float _g151 = _g150->__get((int)2);		HX_STACK_VAR(_g151,"_g151");
							HX_STACK_LINE(447)
							return (_g151 == color3->b);
						}
						return null();
					}
				};
				HX_STACK_LINE(447)
				if ((!(((  (((  (((  ((_this->_valueCache->exists(HX_CSTRING("vFogColor")))) ? bool(_Function_3_1::Block(_this,color3)) : bool(false) ))) ? bool(_Function_3_2::Block(_this,color3)) : bool(false) ))) ? bool(_Function_3_3::Block(_this,color3)) : bool(false) ))))){
					HX_STACK_LINE(447)
					{
						HX_STACK_LINE(447)
						Float x = color3->r;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(447)
						Float y = color3->g;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(447)
						Float z = color3->b;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(447)
						if ((!(_this->_valueCache->exists(HX_CSTRING("vFogColor"))))){
							HX_STACK_LINE(447)
							_this->_valueCache->set(HX_CSTRING("vFogColor"),Array_obj< Float >::__new().Add(x).Add(y).Add(z));
						}
						else{
							HX_STACK_LINE(447)
							Array< Float > _g152 = _this->_valueCache->get(HX_CSTRING("vFogColor"));		HX_STACK_VAR(_g152,"_g152");
							HX_STACK_LINE(447)
							_g152[(int)0] = x;
							HX_STACK_LINE(447)
							Array< Float > _g153 = _this->_valueCache->get(HX_CSTRING("vFogColor"));		HX_STACK_VAR(_g153,"_g153");
							HX_STACK_LINE(447)
							_g153[(int)1] = y;
							HX_STACK_LINE(447)
							Array< Float > _g154 = _this->_valueCache->get(HX_CSTRING("vFogColor"));		HX_STACK_VAR(_g154,"_g154");
							HX_STACK_LINE(447)
							_g154[(int)2] = z;
						}
					}
					HX_STACK_LINE(447)
					{
						HX_STACK_LINE(447)
						Dynamic uniform = _this->getUniform(HX_CSTRING("vFogColor"));		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(447)
						if (((uniform != null()))){
							HX_STACK_LINE(447)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(447)
							::openfl::gl::GL_obj::lime_gl_uniform3f(location,color3->r,color3->g,color3->b);
						}
					}
				}
			}
		}
	}
return null();
}


Array< ::Dynamic > StandardMaterial_obj::getAnimatables( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.StandardMaterial","getAnimatables",0xe9544cf5,"com.gamestudiohx.babylonhx.materials.StandardMaterial.getAnimatables","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",451,0xee7428c4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(452)
	Array< ::Dynamic > results = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(454)
	if (((bool((bool((this->diffuseTexture != null())) && bool((this->diffuseTexture->animations != null())))) && bool((this->diffuseTexture->animations->length > (int)0))))){
		HX_STACK_LINE(455)
		results->push(this->diffuseTexture);
	}
	HX_STACK_LINE(458)
	if (((bool((bool((this->ambientTexture != null())) && bool((this->ambientTexture->animations != null())))) && bool((this->ambientTexture->animations->length > (int)0))))){
		HX_STACK_LINE(459)
		results->push(this->ambientTexture);
	}
	HX_STACK_LINE(462)
	if (((bool((bool((this->opacityTexture != null())) && bool((this->opacityTexture->animations != null())))) && bool((this->opacityTexture->animations->length > (int)0))))){
		HX_STACK_LINE(463)
		results->push(this->opacityTexture);
	}
	HX_STACK_LINE(466)
	if (((bool((bool((this->reflectionTexture != null())) && bool((this->reflectionTexture->animations != null())))) && bool((this->reflectionTexture->animations->length > (int)0))))){
		HX_STACK_LINE(467)
		results->push(this->reflectionTexture);
	}
	HX_STACK_LINE(470)
	if (((bool((bool((this->emissiveTexture != null())) && bool((this->emissiveTexture->animations != null())))) && bool((this->emissiveTexture->animations->length > (int)0))))){
		HX_STACK_LINE(471)
		results->push(this->emissiveTexture);
	}
	HX_STACK_LINE(474)
	if (((bool((bool((this->specularTexture != null())) && bool((this->specularTexture->animations != null())))) && bool((this->specularTexture->animations->length > (int)0))))){
		HX_STACK_LINE(475)
		results->push(this->specularTexture);
	}
	HX_STACK_LINE(478)
	if (((bool((bool((this->bumpTexture != null())) && bool((this->bumpTexture->animations != null())))) && bool((this->bumpTexture->animations->length > (int)0))))){
		HX_STACK_LINE(479)
		results->push(this->bumpTexture);
	}
	HX_STACK_LINE(482)
	return results;
}


HX_DEFINE_DYNAMIC_FUNC0(StandardMaterial_obj,getAnimatables,return )

Void StandardMaterial_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.StandardMaterial","dispose",0xd2f381c9,"com.gamestudiohx.babylonhx.materials.StandardMaterial.dispose","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",485,0xee7428c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(486)
		if (((this->diffuseTexture != null()))){
			HX_STACK_LINE(487)
			this->diffuseTexture->dispose();
		}
		HX_STACK_LINE(490)
		if (((this->ambientTexture != null()))){
			HX_STACK_LINE(491)
			this->ambientTexture->dispose();
		}
		HX_STACK_LINE(494)
		if (((this->opacityTexture != null()))){
			HX_STACK_LINE(495)
			this->opacityTexture->dispose();
		}
		HX_STACK_LINE(498)
		if (((this->reflectionTexture != null()))){
			HX_STACK_LINE(499)
			this->reflectionTexture->dispose();
		}
		HX_STACK_LINE(502)
		if (((this->emissiveTexture != null()))){
			HX_STACK_LINE(503)
			this->emissiveTexture->dispose();
		}
		HX_STACK_LINE(506)
		if (((this->specularTexture != null()))){
			HX_STACK_LINE(507)
			this->specularTexture->dispose();
		}
		HX_STACK_LINE(510)
		if (((this->bumpTexture != null()))){
			HX_STACK_LINE(511)
			this->bumpTexture->dispose();
		}
		HX_STACK_LINE(514)
		this->baseDispose();
	}
return null();
}


::com::gamestudiohx::babylonhx::materials::StandardMaterial StandardMaterial_obj::clone( ::String name){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.StandardMaterial","clone",0x2aa49607,"com.gamestudiohx.babylonhx.materials.StandardMaterial.clone","com/gamestudiohx/babylonhx/materials/StandardMaterial.hx",517,0xee7428c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(518)
	::com::gamestudiohx::babylonhx::materials::StandardMaterial newStandardMaterial = ::com::gamestudiohx::babylonhx::materials::StandardMaterial_obj::__new(name,this->_scene);		HX_STACK_VAR(newStandardMaterial,"newStandardMaterial");
	HX_STACK_LINE(521)
	newStandardMaterial->checkReadyOnEveryCall = this->checkReadyOnEveryCall;
	HX_STACK_LINE(522)
	newStandardMaterial->alpha = this->alpha;
	HX_STACK_LINE(523)
	newStandardMaterial->wireframe = this->wireframe;
	HX_STACK_LINE(524)
	newStandardMaterial->backFaceCulling = this->backFaceCulling;
	HX_STACK_LINE(527)
	if (((this->diffuseTexture != null()))){
		HX_STACK_LINE(528)
		::com::gamestudiohx::babylonhx::materials::textures::Texture _g = this->diffuseTexture->clone();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(528)
		newStandardMaterial->diffuseTexture = _g;
	}
	HX_STACK_LINE(530)
	if (((this->ambientTexture != null()))){
		HX_STACK_LINE(531)
		::com::gamestudiohx::babylonhx::materials::textures::Texture _g1 = this->ambientTexture->clone();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(531)
		newStandardMaterial->ambientTexture = _g1;
	}
	HX_STACK_LINE(533)
	if (((this->opacityTexture != null()))){
		HX_STACK_LINE(534)
		::com::gamestudiohx::babylonhx::materials::textures::Texture _g2 = this->opacityTexture->clone();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(534)
		newStandardMaterial->opacityTexture = _g2;
	}
	HX_STACK_LINE(536)
	if (((this->reflectionTexture != null()))){
		HX_STACK_LINE(537)
		::com::gamestudiohx::babylonhx::materials::textures::Texture _g3 = this->reflectionTexture->clone();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(537)
		newStandardMaterial->reflectionTexture = _g3;
	}
	HX_STACK_LINE(539)
	if (((this->emissiveTexture != null()))){
		HX_STACK_LINE(540)
		::com::gamestudiohx::babylonhx::materials::textures::Texture _g4 = this->emissiveTexture->clone();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(540)
		newStandardMaterial->emissiveTexture = _g4;
	}
	HX_STACK_LINE(542)
	if (((this->specularTexture != null()))){
		HX_STACK_LINE(543)
		::com::gamestudiohx::babylonhx::materials::textures::Texture _g5 = this->specularTexture->clone();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(543)
		newStandardMaterial->specularTexture = _g5;
	}
	HX_STACK_LINE(545)
	if (((this->bumpTexture != null()))){
		HX_STACK_LINE(546)
		::com::gamestudiohx::babylonhx::materials::textures::Texture _g6 = this->bumpTexture->clone();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(546)
		newStandardMaterial->bumpTexture = _g6;
	}
	HX_STACK_LINE(549)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(549)
	{
		HX_STACK_LINE(549)
		::com::gamestudiohx::babylonhx::tools::math::Color3 _this = this->ambientColor;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(549)
		_g7 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(_this->r,_this->g,_this->b);
	}
	HX_STACK_LINE(549)
	newStandardMaterial->ambientColor = _g7;
	HX_STACK_LINE(550)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g8;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(550)
	{
		HX_STACK_LINE(550)
		::com::gamestudiohx::babylonhx::tools::math::Color3 _this = this->diffuseColor;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(550)
		_g8 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(_this->r,_this->g,_this->b);
	}
	HX_STACK_LINE(550)
	newStandardMaterial->diffuseColor = _g8;
	HX_STACK_LINE(551)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g9;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(551)
	{
		HX_STACK_LINE(551)
		::com::gamestudiohx::babylonhx::tools::math::Color3 _this = this->specularColor;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(551)
		_g9 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(_this->r,_this->g,_this->b);
	}
	HX_STACK_LINE(551)
	newStandardMaterial->specularColor = _g9;
	HX_STACK_LINE(552)
	newStandardMaterial->specularPower = this->specularPower;
	HX_STACK_LINE(553)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g10;		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(553)
	{
		HX_STACK_LINE(553)
		::com::gamestudiohx::babylonhx::tools::math::Color3 _this = this->emissiveColor;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(553)
		_g10 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(_this->r,_this->g,_this->b);
	}
	HX_STACK_LINE(553)
	newStandardMaterial->emissiveColor = _g10;
	HX_STACK_LINE(555)
	return newStandardMaterial;
}


HX_DEFINE_DYNAMIC_FUNC1(StandardMaterial_obj,clone,return )


StandardMaterial_obj::StandardMaterial_obj()
{
}

void StandardMaterial_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StandardMaterial);
	HX_MARK_MEMBER_NAME(diffuseTexture,"diffuseTexture");
	HX_MARK_MEMBER_NAME(ambientTexture,"ambientTexture");
	HX_MARK_MEMBER_NAME(opacityTexture,"opacityTexture");
	HX_MARK_MEMBER_NAME(reflectionTexture,"reflectionTexture");
	HX_MARK_MEMBER_NAME(emissiveTexture,"emissiveTexture");
	HX_MARK_MEMBER_NAME(specularTexture,"specularTexture");
	HX_MARK_MEMBER_NAME(bumpTexture,"bumpTexture");
	HX_MARK_MEMBER_NAME(ambientColor,"ambientColor");
	HX_MARK_MEMBER_NAME(diffuseColor,"diffuseColor");
	HX_MARK_MEMBER_NAME(specularColor,"specularColor");
	HX_MARK_MEMBER_NAME(specularPower,"specularPower");
	HX_MARK_MEMBER_NAME(emissiveColor,"emissiveColor");
	HX_MARK_MEMBER_NAME(_cachedDefines,"_cachedDefines");
	HX_MARK_MEMBER_NAME(_renderTargets,"_renderTargets");
	HX_MARK_MEMBER_NAME(_worldViewProjectionMatrix,"_worldViewProjectionMatrix");
	HX_MARK_MEMBER_NAME(_lightMatrix,"_lightMatrix");
	HX_MARK_MEMBER_NAME(_globalAmbientColor,"_globalAmbientColor");
	HX_MARK_MEMBER_NAME(_baseColor,"_baseColor");
	HX_MARK_MEMBER_NAME(_scaledDiffuse,"_scaledDiffuse");
	HX_MARK_MEMBER_NAME(_scaledSpecular,"_scaledSpecular");
	::com::gamestudiohx::babylonhx::materials::Material_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StandardMaterial_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(diffuseTexture,"diffuseTexture");
	HX_VISIT_MEMBER_NAME(ambientTexture,"ambientTexture");
	HX_VISIT_MEMBER_NAME(opacityTexture,"opacityTexture");
	HX_VISIT_MEMBER_NAME(reflectionTexture,"reflectionTexture");
	HX_VISIT_MEMBER_NAME(emissiveTexture,"emissiveTexture");
	HX_VISIT_MEMBER_NAME(specularTexture,"specularTexture");
	HX_VISIT_MEMBER_NAME(bumpTexture,"bumpTexture");
	HX_VISIT_MEMBER_NAME(ambientColor,"ambientColor");
	HX_VISIT_MEMBER_NAME(diffuseColor,"diffuseColor");
	HX_VISIT_MEMBER_NAME(specularColor,"specularColor");
	HX_VISIT_MEMBER_NAME(specularPower,"specularPower");
	HX_VISIT_MEMBER_NAME(emissiveColor,"emissiveColor");
	HX_VISIT_MEMBER_NAME(_cachedDefines,"_cachedDefines");
	HX_VISIT_MEMBER_NAME(_renderTargets,"_renderTargets");
	HX_VISIT_MEMBER_NAME(_worldViewProjectionMatrix,"_worldViewProjectionMatrix");
	HX_VISIT_MEMBER_NAME(_lightMatrix,"_lightMatrix");
	HX_VISIT_MEMBER_NAME(_globalAmbientColor,"_globalAmbientColor");
	HX_VISIT_MEMBER_NAME(_baseColor,"_baseColor");
	HX_VISIT_MEMBER_NAME(_scaledDiffuse,"_scaledDiffuse");
	HX_VISIT_MEMBER_NAME(_scaledSpecular,"_scaledSpecular");
	::com::gamestudiohx::babylonhx::materials::Material_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StandardMaterial_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unbind") ) { return unbind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isReady") ) { return isReady_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_baseColor") ) { return _baseColor; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bumpTexture") ) { return bumpTexture; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ambientColor") ) { return ambientColor; }
		if (HX_FIELD_EQ(inName,"diffuseColor") ) { return diffuseColor; }
		if (HX_FIELD_EQ(inName,"_lightMatrix") ) { return _lightMatrix; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"specularColor") ) { return specularColor; }
		if (HX_FIELD_EQ(inName,"specularPower") ) { return specularPower; }
		if (HX_FIELD_EQ(inName,"emissiveColor") ) { return emissiveColor; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"diffuseTexture") ) { return diffuseTexture; }
		if (HX_FIELD_EQ(inName,"ambientTexture") ) { return ambientTexture; }
		if (HX_FIELD_EQ(inName,"opacityTexture") ) { return opacityTexture; }
		if (HX_FIELD_EQ(inName,"_cachedDefines") ) { return _cachedDefines; }
		if (HX_FIELD_EQ(inName,"_renderTargets") ) { return _renderTargets; }
		if (HX_FIELD_EQ(inName,"_scaledDiffuse") ) { return _scaledDiffuse; }
		if (HX_FIELD_EQ(inName,"getAnimatables") ) { return getAnimatables_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"emissiveTexture") ) { return emissiveTexture; }
		if (HX_FIELD_EQ(inName,"specularTexture") ) { return specularTexture; }
		if (HX_FIELD_EQ(inName,"_scaledSpecular") ) { return _scaledSpecular; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"needAlphaTesting") ) { return needAlphaTesting_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"reflectionTexture") ) { return reflectionTexture; }
		if (HX_FIELD_EQ(inName,"needAlphaBlending") ) { return needAlphaBlending_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_globalAmbientColor") ) { return _globalAmbientColor; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getRenderTargetTextures") ) { return getRenderTargetTextures_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_worldViewProjectionMatrix") ) { return _worldViewProjectionMatrix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StandardMaterial_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_baseColor") ) { _baseColor=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color3 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bumpTexture") ) { bumpTexture=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::textures::Texture >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ambientColor") ) { ambientColor=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diffuseColor") ) { diffuseColor=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lightMatrix") ) { _lightMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"specularColor") ) { specularColor=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specularPower") ) { specularPower=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emissiveColor") ) { emissiveColor=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color3 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"diffuseTexture") ) { diffuseTexture=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::textures::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ambientTexture") ) { ambientTexture=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::textures::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opacityTexture") ) { opacityTexture=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::textures::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedDefines") ) { _cachedDefines=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderTargets") ) { _renderTargets=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::SmartArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaledDiffuse") ) { _scaledDiffuse=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color3 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"emissiveTexture") ) { emissiveTexture=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::textures::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specularTexture") ) { specularTexture=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::textures::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaledSpecular") ) { _scaledSpecular=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color3 >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"reflectionTexture") ) { reflectionTexture=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::textures::Texture >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_globalAmbientColor") ) { _globalAmbientColor=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color3 >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_worldViewProjectionMatrix") ) { _worldViewProjectionMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StandardMaterial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("diffuseTexture"));
	outFields->push(HX_CSTRING("ambientTexture"));
	outFields->push(HX_CSTRING("opacityTexture"));
	outFields->push(HX_CSTRING("reflectionTexture"));
	outFields->push(HX_CSTRING("emissiveTexture"));
	outFields->push(HX_CSTRING("specularTexture"));
	outFields->push(HX_CSTRING("bumpTexture"));
	outFields->push(HX_CSTRING("ambientColor"));
	outFields->push(HX_CSTRING("diffuseColor"));
	outFields->push(HX_CSTRING("specularColor"));
	outFields->push(HX_CSTRING("specularPower"));
	outFields->push(HX_CSTRING("emissiveColor"));
	outFields->push(HX_CSTRING("_cachedDefines"));
	outFields->push(HX_CSTRING("_renderTargets"));
	outFields->push(HX_CSTRING("_worldViewProjectionMatrix"));
	outFields->push(HX_CSTRING("_lightMatrix"));
	outFields->push(HX_CSTRING("_globalAmbientColor"));
	outFields->push(HX_CSTRING("_baseColor"));
	outFields->push(HX_CSTRING("_scaledDiffuse"));
	outFields->push(HX_CSTRING("_scaledSpecular"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::textures::Texture*/ ,(int)offsetof(StandardMaterial_obj,diffuseTexture),HX_CSTRING("diffuseTexture")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::textures::Texture*/ ,(int)offsetof(StandardMaterial_obj,ambientTexture),HX_CSTRING("ambientTexture")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::textures::Texture*/ ,(int)offsetof(StandardMaterial_obj,opacityTexture),HX_CSTRING("opacityTexture")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::textures::Texture*/ ,(int)offsetof(StandardMaterial_obj,reflectionTexture),HX_CSTRING("reflectionTexture")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::textures::Texture*/ ,(int)offsetof(StandardMaterial_obj,emissiveTexture),HX_CSTRING("emissiveTexture")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::textures::Texture*/ ,(int)offsetof(StandardMaterial_obj,specularTexture),HX_CSTRING("specularTexture")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::textures::Texture*/ ,(int)offsetof(StandardMaterial_obj,bumpTexture),HX_CSTRING("bumpTexture")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color3*/ ,(int)offsetof(StandardMaterial_obj,ambientColor),HX_CSTRING("ambientColor")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color3*/ ,(int)offsetof(StandardMaterial_obj,diffuseColor),HX_CSTRING("diffuseColor")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color3*/ ,(int)offsetof(StandardMaterial_obj,specularColor),HX_CSTRING("specularColor")},
	{hx::fsFloat,(int)offsetof(StandardMaterial_obj,specularPower),HX_CSTRING("specularPower")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color3*/ ,(int)offsetof(StandardMaterial_obj,emissiveColor),HX_CSTRING("emissiveColor")},
	{hx::fsString,(int)offsetof(StandardMaterial_obj,_cachedDefines),HX_CSTRING("_cachedDefines")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::SmartArray*/ ,(int)offsetof(StandardMaterial_obj,_renderTargets),HX_CSTRING("_renderTargets")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(StandardMaterial_obj,_worldViewProjectionMatrix),HX_CSTRING("_worldViewProjectionMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(StandardMaterial_obj,_lightMatrix),HX_CSTRING("_lightMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color3*/ ,(int)offsetof(StandardMaterial_obj,_globalAmbientColor),HX_CSTRING("_globalAmbientColor")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color3*/ ,(int)offsetof(StandardMaterial_obj,_baseColor),HX_CSTRING("_baseColor")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color3*/ ,(int)offsetof(StandardMaterial_obj,_scaledDiffuse),HX_CSTRING("_scaledDiffuse")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color3*/ ,(int)offsetof(StandardMaterial_obj,_scaledSpecular),HX_CSTRING("_scaledSpecular")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("diffuseTexture"),
	HX_CSTRING("ambientTexture"),
	HX_CSTRING("opacityTexture"),
	HX_CSTRING("reflectionTexture"),
	HX_CSTRING("emissiveTexture"),
	HX_CSTRING("specularTexture"),
	HX_CSTRING("bumpTexture"),
	HX_CSTRING("ambientColor"),
	HX_CSTRING("diffuseColor"),
	HX_CSTRING("specularColor"),
	HX_CSTRING("specularPower"),
	HX_CSTRING("emissiveColor"),
	HX_CSTRING("_cachedDefines"),
	HX_CSTRING("_renderTargets"),
	HX_CSTRING("_worldViewProjectionMatrix"),
	HX_CSTRING("_lightMatrix"),
	HX_CSTRING("_globalAmbientColor"),
	HX_CSTRING("_baseColor"),
	HX_CSTRING("_scaledDiffuse"),
	HX_CSTRING("_scaledSpecular"),
	HX_CSTRING("needAlphaBlending"),
	HX_CSTRING("needAlphaTesting"),
	HX_CSTRING("isReady"),
	HX_CSTRING("getRenderTargetTextures"),
	HX_CSTRING("unbind"),
	HX_CSTRING("bind"),
	HX_CSTRING("getAnimatables"),
	HX_CSTRING("dispose"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StandardMaterial_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StandardMaterial_obj::__mClass,"__mClass");
};

#endif

Class StandardMaterial_obj::__mClass;

void StandardMaterial_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.materials.StandardMaterial"), hx::TCanCast< StandardMaterial_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void StandardMaterial_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
