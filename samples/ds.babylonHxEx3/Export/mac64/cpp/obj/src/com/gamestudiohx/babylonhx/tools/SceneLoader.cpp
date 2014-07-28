#include <hxcpp.h>

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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_FreeCamera
#include <com/gamestudiohx/babylonhx/cameras/FreeCamera.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingInfo
#include <com/gamestudiohx/babylonhx/culling/BoundingInfo.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_octrees_Octree
#include <com/gamestudiohx/babylonhx/culling/octrees/Octree.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lensflare_LensFlare
#include <com/gamestudiohx/babylonhx/lensflare/LensFlare.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lensflare_LensFlareSystem
#include <com/gamestudiohx/babylonhx/lensflare/LensFlareSystem.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Material
#include <com/gamestudiohx/babylonhx/materials/Material.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_MultiMaterial
#include <com/gamestudiohx/babylonhx/materials/MultiMaterial.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_MirrorTexture
#include <com/gamestudiohx/babylonhx/materials/textures/MirrorTexture.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_SubMesh
#include <com/gamestudiohx/babylonhx/mesh/SubMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_VertexBuffer
#include <com/gamestudiohx/babylonhx/mesh/VertexBuffer.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_particles_ParticleSystem
#include <com/gamestudiohx/babylonhx/particles/ParticleSystem.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_SceneLoader
#include <com/gamestudiohx/babylonhx/tools/SceneLoader.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_Tools
#include <com/gamestudiohx/babylonhx/tools/Tools.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color3
#include <com/gamestudiohx/babylonhx/tools/math/Color3.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color4
#include <com/gamestudiohx/babylonhx/tools/math/Color4.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Plane
#include <com/gamestudiohx/babylonhx/tools/math/Plane.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Quaternion
#include <com/gamestudiohx/babylonhx/tools/math/Quaternion.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{

Void SceneLoader_obj::__construct()
{
	return null();
}

//SceneLoader_obj::~SceneLoader_obj() { }

Dynamic SceneLoader_obj::__CreateEmpty() { return  new SceneLoader_obj; }
hx::ObjectPtr< SceneLoader_obj > SceneLoader_obj::__new()
{  hx::ObjectPtr< SceneLoader_obj > result = new SceneLoader_obj();
	result->__construct();
	return result;}

Dynamic SceneLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SceneLoader_obj > result = new SceneLoader_obj();
	result->__construct();
	return result;}

::com::gamestudiohx::babylonhx::materials::textures::CubeTexture SceneLoader_obj::loadCubeTexture( ::String rootUrl,Dynamic parsedTexture,::com::gamestudiohx::babylonhx::Scene scene){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SceneLoader","loadCubeTexture",0x4f7efb8c,"com.gamestudiohx.babylonhx.tools.SceneLoader.loadCubeTexture","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",47,0x7b8a3c86)
	HX_STACK_ARG(rootUrl,"rootUrl")
	HX_STACK_ARG(parsedTexture,"parsedTexture")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_LINE(48)
	::String _g = ::Std_obj::string(parsedTexture->__Field(HX_CSTRING("name"),true));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(48)
	::String _g1 = (rootUrl + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(48)
	::com::gamestudiohx::babylonhx::materials::textures::CubeTexture texture = ::com::gamestudiohx::babylonhx::materials::textures::CubeTexture_obj::__new(_g1,scene,null());		HX_STACK_VAR(texture,"texture");
	HX_STACK_LINE(50)
	texture->name = parsedTexture->__Field(HX_CSTRING("name"),true);
	HX_STACK_LINE(51)
	texture->hasAlpha = parsedTexture->__Field(HX_CSTRING("hasAlpha"),true);
	HX_STACK_LINE(52)
	texture->level = parsedTexture->__Field(HX_CSTRING("level"),true);
	HX_STACK_LINE(53)
	texture->coordinatesMode = parsedTexture->__Field(HX_CSTRING("coordinatesMode"),true);
	HX_STACK_LINE(55)
	return texture;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SceneLoader_obj,loadCubeTexture,return )

Dynamic SceneLoader_obj::loadTexture( ::String rootUrl,Dynamic parsedTexture,::com::gamestudiohx::babylonhx::Scene scene){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SceneLoader","loadTexture",0x25844d01,"com.gamestudiohx.babylonhx.tools.SceneLoader.loadTexture","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",58,0x7b8a3c86)
	HX_STACK_ARG(rootUrl,"rootUrl")
	HX_STACK_ARG(parsedTexture,"parsedTexture")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_LINE(59)
	if (((bool((parsedTexture->__Field(HX_CSTRING("name"),true) != null())) && bool((parsedTexture->__Field(HX_CSTRING("isRenderTarget"),true) == true))))){
		HX_STACK_LINE(60)
		return null();
	}
	HX_STACK_LINE(63)
	if (((bool((parsedTexture->__Field(HX_CSTRING("isCube"),true) != null())) && bool((parsedTexture->__Field(HX_CSTRING("isCube"),true) == true))))){
		HX_STACK_LINE(64)
		return ::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::loadCubeTexture(rootUrl,parsedTexture,scene);
	}
	HX_STACK_LINE(67)
	::com::gamestudiohx::babylonhx::materials::textures::Texture texture = null();		HX_STACK_VAR(texture,"texture");
	HX_STACK_LINE(69)
	if (((parsedTexture->__Field(HX_CSTRING("mirrorPlane"),true) != null()))){
		HX_STACK_LINE(70)
		::com::gamestudiohx::babylonhx::materials::textures::MirrorTexture _g = ::com::gamestudiohx::babylonhx::materials::textures::MirrorTexture_obj::__new(parsedTexture->__Field(HX_CSTRING("name"),true),parsedTexture->__Field(HX_CSTRING("renderTargetSize"),true),scene,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		texture = _g;
		HX_STACK_LINE(71)
		(hx::TCast< com::gamestudiohx::babylonhx::materials::textures::MirrorTexture >::cast(texture))->_waitingRenderList = parsedTexture->__Field(HX_CSTRING("renderList"),true);
		HX_STACK_LINE(72)
		::com::gamestudiohx::babylonhx::tools::math::Plane _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			Array< Float > array = parsedTexture->__Field(HX_CSTRING("mirrorPlane"),true);		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(72)
			_g1 = ::com::gamestudiohx::babylonhx::tools::math::Plane_obj::__new(array->__get((int)0),array->__get((int)1),array->__get((int)2),array->__get((int)3));
		}
		HX_STACK_LINE(72)
		(hx::TCast< com::gamestudiohx::babylonhx::materials::textures::MirrorTexture >::cast(texture))->mirrorPlane = _g1;
	}
	else{
		HX_STACK_LINE(73)
		if ((parsedTexture->__Field(HX_CSTRING("isRenderTarget"),true))){
			HX_STACK_LINE(74)
			::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture _g2 = ::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture_obj::__new(parsedTexture->__Field(HX_CSTRING("name"),true),parsedTexture->__Field(HX_CSTRING("renderTargetSize"),true),scene,true);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(74)
			texture = _g2;
			HX_STACK_LINE(75)
			(hx::TCast< com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture >::cast(texture))->_waitingRenderList = parsedTexture->__Field(HX_CSTRING("renderList"),true);
		}
		else{
			HX_STACK_LINE(77)
			::String _g3 = ::Std_obj::string(parsedTexture->__Field(HX_CSTRING("name"),true));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(77)
			::String _g4 = (rootUrl + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(77)
			::com::gamestudiohx::babylonhx::materials::textures::Texture _g5 = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::__new(_g4,scene,null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(77)
			texture = _g5;
		}
	}
	HX_STACK_LINE(80)
	texture->name = parsedTexture->__Field(HX_CSTRING("name"),true);
	HX_STACK_LINE(81)
	texture->hasAlpha = parsedTexture->__Field(HX_CSTRING("hasAlpha"),true);
	HX_STACK_LINE(82)
	texture->level = parsedTexture->__Field(HX_CSTRING("level"),true);
	HX_STACK_LINE(84)
	texture->coordinatesIndex = parsedTexture->__Field(HX_CSTRING("coordinatesIndex"),true);
	HX_STACK_LINE(85)
	texture->coordinatesMode = parsedTexture->__Field(HX_CSTRING("coordinatesMode"),true);
	HX_STACK_LINE(86)
	texture->uOffset = parsedTexture->__Field(HX_CSTRING("uOffset"),true);
	HX_STACK_LINE(87)
	texture->vOffset = parsedTexture->__Field(HX_CSTRING("vOffset"),true);
	HX_STACK_LINE(88)
	texture->uScale = parsedTexture->__Field(HX_CSTRING("uScale"),true);
	HX_STACK_LINE(89)
	texture->vScale = parsedTexture->__Field(HX_CSTRING("vScale"),true);
	HX_STACK_LINE(90)
	texture->uAng = parsedTexture->__Field(HX_CSTRING("uAng"),true);
	HX_STACK_LINE(91)
	texture->vAng = parsedTexture->__Field(HX_CSTRING("vAng"),true);
	HX_STACK_LINE(92)
	texture->wAng = parsedTexture->__Field(HX_CSTRING("wAng"),true);
	HX_STACK_LINE(94)
	texture->wrapU = parsedTexture->__Field(HX_CSTRING("wrapU"),true);
	HX_STACK_LINE(95)
	texture->wrapV = parsedTexture->__Field(HX_CSTRING("wrapV"),true);
	HX_STACK_LINE(98)
	if (((parsedTexture->__Field(HX_CSTRING("animations"),true) != null()))){
		HX_STACK_LINE(99)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(99)
		int _g = parsedTexture->__Field(HX_CSTRING("animations"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		while((true)){
			HX_STACK_LINE(99)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(99)
				break;
			}
			HX_STACK_LINE(99)
			int animationIndex = (_g1)++;		HX_STACK_VAR(animationIndex,"animationIndex");
			HX_STACK_LINE(100)
			Dynamic parsedAnimation = parsedTexture->__Field(HX_CSTRING("animations"),true)->__GetItem(animationIndex);		HX_STACK_VAR(parsedAnimation,"parsedAnimation");
			HX_STACK_LINE(102)
			::com::gamestudiohx::babylonhx::animations::Animation _g6 = ::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseAnimation(parsedAnimation);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(102)
			texture->animations->push(_g6);
		}
	}
	HX_STACK_LINE(106)
	return texture;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SceneLoader_obj,loadTexture,return )

::com::gamestudiohx::babylonhx::bones::Skeleton SceneLoader_obj::parseSkeleton( Dynamic parsedSkeleton,::com::gamestudiohx::babylonhx::Scene scene){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SceneLoader","parseSkeleton",0xc401b1cc,"com.gamestudiohx.babylonhx.tools.SceneLoader.parseSkeleton","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",109,0x7b8a3c86)
	HX_STACK_ARG(parsedSkeleton,"parsedSkeleton")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_LINE(110)
	::com::gamestudiohx::babylonhx::bones::Skeleton skeleton = ::com::gamestudiohx::babylonhx::bones::Skeleton_obj::__new(parsedSkeleton->__Field(HX_CSTRING("name"),true),parsedSkeleton->__Field(HX_CSTRING("id"),true),scene);		HX_STACK_VAR(skeleton,"skeleton");
	HX_STACK_LINE(112)
	{
		HX_STACK_LINE(112)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(112)
		int _g = parsedSkeleton->__Field(HX_CSTRING("bones"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(112)
		while((true)){
			HX_STACK_LINE(112)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(112)
				break;
			}
			HX_STACK_LINE(112)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(113)
			Dynamic parsedBone = parsedSkeleton->__Field(HX_CSTRING("bones"),true)->__GetItem(index);		HX_STACK_VAR(parsedBone,"parsedBone");
			HX_STACK_LINE(115)
			::com::gamestudiohx::babylonhx::bones::Bone parentBone = null();		HX_STACK_VAR(parentBone,"parentBone");
			HX_STACK_LINE(116)
			if (((parsedBone->__Field(HX_CSTRING("parentBoneIndex"),true) > (int)-1))){
				HX_STACK_LINE(117)
				parentBone = skeleton->bones->__get(parsedBone->__Field(HX_CSTRING("parentBoneIndex"),true)).StaticCast< ::com::gamestudiohx::babylonhx::bones::Bone >();
			}
			HX_STACK_LINE(120)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(120)
			{
				HX_STACK_LINE(120)
				Array< Float > array = parsedBone->__Field(HX_CSTRING("matrix"),true);		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(120)
				int offset = (int)0;		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(120)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(120)
				{
					HX_STACK_LINE(120)
					{
						HX_STACK_LINE(120)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(120)
						while((true)){
							HX_STACK_LINE(120)
							if ((!(((_g3 < (int)16))))){
								HX_STACK_LINE(120)
								break;
							}
							HX_STACK_LINE(120)
							int index1 = (_g3)++;		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(120)
							result->m[index1] = array->__get((index1 + offset));
						}
					}
					HX_STACK_LINE(120)
					result;
				}
				HX_STACK_LINE(120)
				_g2 = result;
			}
			HX_STACK_LINE(120)
			::com::gamestudiohx::babylonhx::bones::Bone bone = ::com::gamestudiohx::babylonhx::bones::Bone_obj::__new(parsedBone->__Field(HX_CSTRING("name"),true),skeleton,parentBone,_g2);		HX_STACK_VAR(bone,"bone");
			HX_STACK_LINE(122)
			if (((parsedBone->__Field(HX_CSTRING("animation"),true) != null()))){
				HX_STACK_LINE(123)
				::com::gamestudiohx::babylonhx::animations::Animation _g11 = ::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseAnimation(parsedBone->__Field(HX_CSTRING("animation"),true));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(123)
				bone->animations->push(_g11);
			}
		}
	}
	HX_STACK_LINE(127)
	return skeleton;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SceneLoader_obj,parseSkeleton,return )

::com::gamestudiohx::babylonhx::materials::Material SceneLoader_obj::parseMaterial( Dynamic parsedMaterial,::com::gamestudiohx::babylonhx::Scene scene,::String rootUrl){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SceneLoader","parseMaterial",0xcd181ca6,"com.gamestudiohx.babylonhx.tools.SceneLoader.parseMaterial","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",130,0x7b8a3c86)
	HX_STACK_ARG(parsedMaterial,"parsedMaterial")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(rootUrl,"rootUrl")
	HX_STACK_LINE(131)
	::com::gamestudiohx::babylonhx::materials::StandardMaterial material = ::com::gamestudiohx::babylonhx::materials::StandardMaterial_obj::__new(parsedMaterial->__Field(HX_CSTRING("name"),true),scene);		HX_STACK_VAR(material,"material");
	HX_STACK_LINE(133)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(133)
	{
		HX_STACK_LINE(133)
		Array< Float > array = parsedMaterial->__Field(HX_CSTRING("ambient"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(133)
		_g = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(array->__get((int)0),array->__get((int)1),array->__get((int)2));
	}
	HX_STACK_LINE(133)
	material->ambientColor = _g;
	HX_STACK_LINE(134)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(134)
	{
		HX_STACK_LINE(134)
		Array< Float > array = parsedMaterial->__Field(HX_CSTRING("diffuse"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(134)
		_g1 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(array->__get((int)0),array->__get((int)1),array->__get((int)2));
	}
	HX_STACK_LINE(134)
	material->diffuseColor = _g1;
	HX_STACK_LINE(135)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		Array< Float > array = parsedMaterial->__Field(HX_CSTRING("specular"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(135)
		_g2 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(array->__get((int)0),array->__get((int)1),array->__get((int)2));
	}
	HX_STACK_LINE(135)
	material->specularColor = _g2;
	HX_STACK_LINE(136)
	material->specularPower = parsedMaterial->__Field(HX_CSTRING("specularPower"),true);
	HX_STACK_LINE(137)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		Array< Float > array = parsedMaterial->__Field(HX_CSTRING("emissive"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(137)
		_g3 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(array->__get((int)0),array->__get((int)1),array->__get((int)2));
	}
	HX_STACK_LINE(137)
	material->emissiveColor = _g3;
	HX_STACK_LINE(139)
	material->alpha = parsedMaterial->__Field(HX_CSTRING("alpha"),true);
	HX_STACK_LINE(141)
	material->id = parsedMaterial->__Field(HX_CSTRING("id"),true);
	HX_STACK_LINE(142)
	material->backFaceCulling = parsedMaterial->__Field(HX_CSTRING("backFaceCulling"),true);
	HX_STACK_LINE(144)
	if (((parsedMaterial->__Field(HX_CSTRING("diffuseTexture"),true) != null()))){
		HX_STACK_LINE(145)
		Dynamic _g4 = ::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::loadTexture(rootUrl,parsedMaterial->__Field(HX_CSTRING("diffuseTexture"),true),scene);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(145)
		material->diffuseTexture = _g4;
	}
	HX_STACK_LINE(148)
	if (((parsedMaterial->__Field(HX_CSTRING("ambientTexture"),true) != null()))){
		HX_STACK_LINE(149)
		Dynamic _g5 = ::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::loadTexture(rootUrl,parsedMaterial->__Field(HX_CSTRING("ambientTexture"),true),scene);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(149)
		material->ambientTexture = _g5;
	}
	HX_STACK_LINE(152)
	if (((parsedMaterial->__Field(HX_CSTRING("opacityTexture"),true) != null()))){
		HX_STACK_LINE(153)
		Dynamic _g6 = ::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::loadTexture(rootUrl,parsedMaterial->__Field(HX_CSTRING("opacityTexture"),true),scene);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(153)
		material->opacityTexture = _g6;
	}
	HX_STACK_LINE(156)
	if (((parsedMaterial->__Field(HX_CSTRING("reflectionTexture"),true) != null()))){
		HX_STACK_LINE(157)
		Dynamic _g7 = ::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::loadTexture(rootUrl,parsedMaterial->__Field(HX_CSTRING("reflectionTexture"),true),scene);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(157)
		material->reflectionTexture = _g7;
	}
	HX_STACK_LINE(160)
	if (((parsedMaterial->__Field(HX_CSTRING("emissiveTexture"),true) != null()))){
		HX_STACK_LINE(161)
		Dynamic _g8 = ::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::loadTexture(rootUrl,parsedMaterial->__Field(HX_CSTRING("emissiveTexture"),true),scene);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(161)
		material->emissiveTexture = _g8;
	}
	HX_STACK_LINE(164)
	if (((parsedMaterial->__Field(HX_CSTRING("specularTexture"),true) != null()))){
		HX_STACK_LINE(165)
		Dynamic _g9 = ::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::loadTexture(rootUrl,parsedMaterial->__Field(HX_CSTRING("specularTexture"),true),scene);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(165)
		material->specularTexture = _g9;
	}
	HX_STACK_LINE(168)
	if (((parsedMaterial->__Field(HX_CSTRING("bumpTexture"),true) != null()))){
		HX_STACK_LINE(169)
		Dynamic _g10 = ::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::loadTexture(rootUrl,parsedMaterial->__Field(HX_CSTRING("bumpTexture"),true),scene);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(169)
		material->bumpTexture = _g10;
	}
	HX_STACK_LINE(172)
	return material;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SceneLoader_obj,parseMaterial,return )

::com::gamestudiohx::babylonhx::materials::Material SceneLoader_obj::parseMaterialById( ::String id,Dynamic parsedData,::com::gamestudiohx::babylonhx::Scene scene,::String rootUrl){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SceneLoader","parseMaterialById",0x31d68d58,"com.gamestudiohx.babylonhx.tools.SceneLoader.parseMaterialById","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",175,0x7b8a3c86)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(parsedData,"parsedData")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(rootUrl,"rootUrl")
	HX_STACK_LINE(176)
	{
		HX_STACK_LINE(176)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(176)
		int _g = parsedData->__Field(HX_CSTRING("materials"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(176)
		while((true)){
			HX_STACK_LINE(176)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(176)
				break;
			}
			HX_STACK_LINE(176)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(177)
			Dynamic parsedMaterial = parsedData->__Field(HX_CSTRING("materials"),true)->__GetItem(index);		HX_STACK_VAR(parsedMaterial,"parsedMaterial");
			HX_STACK_LINE(178)
			if (((parsedMaterial->__Field(HX_CSTRING("id"),true) == id))){
				HX_STACK_LINE(179)
				return ::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseMaterial(parsedMaterial,scene,rootUrl);
			}
		}
	}
	HX_STACK_LINE(183)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(SceneLoader_obj,parseMaterialById,return )

::com::gamestudiohx::babylonhx::materials::MultiMaterial SceneLoader_obj::parseMultiMaterial( Dynamic parsedMultiMaterial,::com::gamestudiohx::babylonhx::Scene scene){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SceneLoader","parseMultiMaterial",0x739b27e1,"com.gamestudiohx.babylonhx.tools.SceneLoader.parseMultiMaterial","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",186,0x7b8a3c86)
	HX_STACK_ARG(parsedMultiMaterial,"parsedMultiMaterial")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_LINE(187)
	::com::gamestudiohx::babylonhx::materials::MultiMaterial multiMaterial = ::com::gamestudiohx::babylonhx::materials::MultiMaterial_obj::__new(parsedMultiMaterial->__Field(HX_CSTRING("name"),true),scene);		HX_STACK_VAR(multiMaterial,"multiMaterial");
	HX_STACK_LINE(189)
	multiMaterial->id = parsedMultiMaterial->__Field(HX_CSTRING("id"),true);
	HX_STACK_LINE(191)
	{
		HX_STACK_LINE(191)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(191)
		int _g = parsedMultiMaterial->__Field(HX_CSTRING("materials"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(191)
		while((true)){
			HX_STACK_LINE(191)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(191)
				break;
			}
			HX_STACK_LINE(191)
			int matIndex = (_g1)++;		HX_STACK_VAR(matIndex,"matIndex");
			HX_STACK_LINE(192)
			::String subMatId = parsedMultiMaterial->__Field(HX_CSTRING("materials"),true)->__GetItem(matIndex);		HX_STACK_VAR(subMatId,"subMatId");
			HX_STACK_LINE(194)
			if (((subMatId != null()))){
				HX_STACK_LINE(195)
				::com::gamestudiohx::babylonhx::materials::Material _g2 = scene->getMaterialByID(subMatId);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(195)
				multiMaterial->subMaterials->push(_g2);
			}
			else{
				HX_STACK_LINE(197)
				multiMaterial->subMaterials->push(null());
			}
		}
	}
	HX_STACK_LINE(201)
	return multiMaterial;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SceneLoader_obj,parseMultiMaterial,return )

::com::gamestudiohx::babylonhx::lensflare::LensFlareSystem SceneLoader_obj::parseLensFlareSystem( Dynamic parsedLensFlareSystem,::com::gamestudiohx::babylonhx::Scene scene,::String rootUrl){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SceneLoader","parseLensFlareSystem",0x8e0aa9e0,"com.gamestudiohx.babylonhx.tools.SceneLoader.parseLensFlareSystem","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",204,0x7b8a3c86)
	HX_STACK_ARG(parsedLensFlareSystem,"parsedLensFlareSystem")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(rootUrl,"rootUrl")
	HX_STACK_LINE(205)
	Dynamic emitter = scene->getLastEntryByID(parsedLensFlareSystem->__Field(HX_CSTRING("emitterId"),true));		HX_STACK_VAR(emitter,"emitter");
	HX_STACK_LINE(207)
	::String _g = ::Std_obj::string(parsedLensFlareSystem->__Field(HX_CSTRING("emitterId"),true));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(207)
	::String _g1 = (HX_CSTRING("lensFlareSystem#") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(207)
	::com::gamestudiohx::babylonhx::lensflare::LensFlareSystem lensFlareSystem = ::com::gamestudiohx::babylonhx::lensflare::LensFlareSystem_obj::__new(_g1,emitter,scene);		HX_STACK_VAR(lensFlareSystem,"lensFlareSystem");
	HX_STACK_LINE(208)
	lensFlareSystem->borderLimit = parsedLensFlareSystem->__Field(HX_CSTRING("borderLimit"),true);
	HX_STACK_LINE(210)
	{
		HX_STACK_LINE(210)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(210)
		int _g2 = parsedLensFlareSystem->__Field(HX_CSTRING("flares"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(210)
		while((true)){
			HX_STACK_LINE(210)
			if ((!(((_g11 < _g2))))){
				HX_STACK_LINE(210)
				break;
			}
			HX_STACK_LINE(210)
			int index = (_g11)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(211)
			Dynamic parsedFlare = parsedLensFlareSystem->__Field(HX_CSTRING("flares"),true)->__GetItem(index);		HX_STACK_VAR(parsedFlare,"parsedFlare");
			HX_STACK_LINE(212)
			::com::gamestudiohx::babylonhx::tools::math::Color3 _g21;		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(212)
			{
				HX_STACK_LINE(212)
				Array< Float > array = parsedFlare->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(212)
				_g21 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(array->__get((int)0),array->__get((int)1),array->__get((int)2));
			}
			HX_STACK_LINE(212)
			::com::gamestudiohx::babylonhx::lensflare::LensFlare flare = ::com::gamestudiohx::babylonhx::lensflare::LensFlare_obj::__new(parsedFlare->__Field(HX_CSTRING("size"),true),parsedFlare->__Field(HX_CSTRING("position"),true),_g21,(rootUrl + parsedFlare->__Field(HX_CSTRING("textureName"),true)),lensFlareSystem);		HX_STACK_VAR(flare,"flare");
		}
	}
	HX_STACK_LINE(215)
	return lensFlareSystem;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SceneLoader_obj,parseLensFlareSystem,return )

::com::gamestudiohx::babylonhx::particles::ParticleSystem SceneLoader_obj::parseParticleSystem( Dynamic parsedParticleSystem,::com::gamestudiohx::babylonhx::Scene scene,::String rootUrl){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SceneLoader","parseParticleSystem",0x15d68b14,"com.gamestudiohx.babylonhx.tools.SceneLoader.parseParticleSystem","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",218,0x7b8a3c86)
	HX_STACK_ARG(parsedParticleSystem,"parsedParticleSystem")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(rootUrl,"rootUrl")
	HX_STACK_LINE(219)
	::com::gamestudiohx::babylonhx::mesh::AbstractMesh emitter = scene->getLastMeshByID(parsedParticleSystem->__Field(HX_CSTRING("emitterId"),true));		HX_STACK_VAR(emitter,"emitter");
	HX_STACK_LINE(221)
	::com::gamestudiohx::babylonhx::particles::ParticleSystem particleSystem = ::com::gamestudiohx::babylonhx::particles::ParticleSystem_obj::__new((HX_CSTRING("particles#") + emitter->name),parsedParticleSystem->__Field(HX_CSTRING("capacity"),true),scene);		HX_STACK_VAR(particleSystem,"particleSystem");
	HX_STACK_LINE(222)
	if (((bool((parsedParticleSystem->__Field(HX_CSTRING("textureName"),true) != null())) && bool((parsedParticleSystem->__Field(HX_CSTRING("textureName"),true) != HX_CSTRING("")))))){
		HX_STACK_LINE(223)
		::String _g = ::Std_obj::string(parsedParticleSystem->__Field(HX_CSTRING("textureName"),true));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(223)
		::String _g1 = (rootUrl + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(223)
		::com::gamestudiohx::babylonhx::materials::textures::Texture _g2 = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::__new(_g1,scene,null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(223)
		particleSystem->particleTexture = _g2;
	}
	HX_STACK_LINE(225)
	particleSystem->minAngularSpeed = parsedParticleSystem->__Field(HX_CSTRING("minAngularSpeed"),true);
	HX_STACK_LINE(226)
	particleSystem->maxAngularSpeed = parsedParticleSystem->__Field(HX_CSTRING("maxAngularSpeed"),true);
	HX_STACK_LINE(227)
	particleSystem->minSize = parsedParticleSystem->__Field(HX_CSTRING("minSize"),true);
	HX_STACK_LINE(228)
	particleSystem->maxSize = parsedParticleSystem->__Field(HX_CSTRING("maxSize"),true);
	HX_STACK_LINE(229)
	particleSystem->minLifeTime = parsedParticleSystem->__Field(HX_CSTRING("minLifeTime"),true);
	HX_STACK_LINE(230)
	particleSystem->maxLifeTime = parsedParticleSystem->__Field(HX_CSTRING("maxLifeTime"),true);
	HX_STACK_LINE(231)
	particleSystem->emitter = emitter;
	HX_STACK_LINE(232)
	particleSystem->emitRate = parsedParticleSystem->__Field(HX_CSTRING("emitRate"),true);
	HX_STACK_LINE(233)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(233)
	{
		HX_STACK_LINE(233)
		Array< Float > array = parsedParticleSystem->__Field(HX_CSTRING("minEmitBox"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(233)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(233)
		_g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
	}
	HX_STACK_LINE(233)
	particleSystem->minEmitBox = _g3;
	HX_STACK_LINE(234)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(234)
	{
		HX_STACK_LINE(234)
		Array< Float > array = parsedParticleSystem->__Field(HX_CSTRING("maxEmitBox"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(234)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(234)
		_g4 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
	}
	HX_STACK_LINE(234)
	particleSystem->maxEmitBox = _g4;
	HX_STACK_LINE(235)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(235)
	{
		HX_STACK_LINE(235)
		Array< Float > array = parsedParticleSystem->__Field(HX_CSTRING("gravity"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(235)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(235)
		_g5 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
	}
	HX_STACK_LINE(235)
	particleSystem->gravity = _g5;
	HX_STACK_LINE(236)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(236)
	{
		HX_STACK_LINE(236)
		Array< Float > array = parsedParticleSystem->__Field(HX_CSTRING("direction1"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(236)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(236)
		_g6 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
	}
	HX_STACK_LINE(236)
	particleSystem->direction1 = _g6;
	HX_STACK_LINE(237)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(237)
	{
		HX_STACK_LINE(237)
		Array< Float > array = parsedParticleSystem->__Field(HX_CSTRING("direction2"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(237)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(237)
		_g7 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
	}
	HX_STACK_LINE(237)
	particleSystem->direction2 = _g7;
	HX_STACK_LINE(238)
	::com::gamestudiohx::babylonhx::tools::math::Color4 _g8;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(238)
	{
		HX_STACK_LINE(238)
		Array< Float > array = parsedParticleSystem->__Field(HX_CSTRING("color1"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(238)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(238)
		_g8 = ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)),array->__get((offset + (int)3)));
	}
	HX_STACK_LINE(238)
	particleSystem->color1 = _g8;
	HX_STACK_LINE(239)
	::com::gamestudiohx::babylonhx::tools::math::Color4 _g9;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(239)
	{
		HX_STACK_LINE(239)
		Array< Float > array = parsedParticleSystem->__Field(HX_CSTRING("color2"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(239)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(239)
		_g9 = ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)),array->__get((offset + (int)3)));
	}
	HX_STACK_LINE(239)
	particleSystem->color2 = _g9;
	HX_STACK_LINE(240)
	::com::gamestudiohx::babylonhx::tools::math::Color4 _g10;		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(240)
	{
		HX_STACK_LINE(240)
		Array< Float > array = parsedParticleSystem->__Field(HX_CSTRING("colorDead"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(240)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(240)
		_g10 = ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)),array->__get((offset + (int)3)));
	}
	HX_STACK_LINE(240)
	particleSystem->colorDead = _g10;
	HX_STACK_LINE(241)
	particleSystem->updateSpeed = parsedParticleSystem->__Field(HX_CSTRING("updateSpeed"),true);
	HX_STACK_LINE(242)
	particleSystem->targetStopDuration = parsedParticleSystem->__Field(HX_CSTRING("targetStopFrame"),true);
	HX_STACK_LINE(243)
	::com::gamestudiohx::babylonhx::tools::math::Color4 _g11;		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(243)
	{
		HX_STACK_LINE(243)
		Array< Float > array = parsedParticleSystem->__Field(HX_CSTRING("textureMask"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(243)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(243)
		_g11 = ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)),array->__get((offset + (int)3)));
	}
	HX_STACK_LINE(243)
	particleSystem->textureMask = _g11;
	HX_STACK_LINE(244)
	particleSystem->blendMode = parsedParticleSystem->__Field(HX_CSTRING("blendMode"),true);
	HX_STACK_LINE(245)
	particleSystem->start();
	HX_STACK_LINE(247)
	return particleSystem;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SceneLoader_obj,parseParticleSystem,return )

::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator SceneLoader_obj::parseShadowGenerator( Dynamic parsedShadowGenerator,::com::gamestudiohx::babylonhx::Scene scene){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SceneLoader","parseShadowGenerator",0xabade234,"com.gamestudiohx.babylonhx.tools.SceneLoader.parseShadowGenerator","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",250,0x7b8a3c86)
	HX_STACK_ARG(parsedShadowGenerator,"parsedShadowGenerator")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_LINE(251)
	::com::gamestudiohx::babylonhx::lights::Light light = scene->getLightByID(parsedShadowGenerator->__Field(HX_CSTRING("lightId"),true));		HX_STACK_VAR(light,"light");
	HX_STACK_LINE(252)
	::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator shadowGenerator = ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator_obj::__new(parsedShadowGenerator->__Field(HX_CSTRING("mapSize"),true),light);		HX_STACK_VAR(shadowGenerator,"shadowGenerator");
	HX_STACK_LINE(254)
	{
		HX_STACK_LINE(254)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(254)
		int _g = parsedShadowGenerator->__Field(HX_CSTRING("renderList"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(254)
		while((true)){
			HX_STACK_LINE(254)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(254)
				break;
			}
			HX_STACK_LINE(254)
			int meshIndex = (_g1)++;		HX_STACK_VAR(meshIndex,"meshIndex");
			HX_STACK_LINE(255)
			::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh = scene->getMeshByID(parsedShadowGenerator->__Field(HX_CSTRING("renderList"),true)->__GetItem(meshIndex));		HX_STACK_VAR(mesh,"mesh");
			HX_STACK_LINE(257)
			shadowGenerator->getShadowMap()->renderList->push(mesh);
		}
	}
	HX_STACK_LINE(260)
	shadowGenerator->useVarianceShadowMap = parsedShadowGenerator->__Field(HX_CSTRING("useVarianceShadowMap"),true);
	HX_STACK_LINE(262)
	return shadowGenerator;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SceneLoader_obj,parseShadowGenerator,return )

::com::gamestudiohx::babylonhx::animations::Animation SceneLoader_obj::parseAnimation( Dynamic parsedAnimation){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SceneLoader","parseAnimation",0x532a2e25,"com.gamestudiohx.babylonhx.tools.SceneLoader.parseAnimation","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",265,0x7b8a3c86)
	HX_STACK_ARG(parsedAnimation,"parsedAnimation")
	HX_STACK_LINE(266)
	::com::gamestudiohx::babylonhx::animations::Animation animation = ::com::gamestudiohx::babylonhx::animations::Animation_obj::__new(parsedAnimation->__Field(HX_CSTRING("name"),true),parsedAnimation->__Field(HX_CSTRING("property"),true),parsedAnimation->__Field(HX_CSTRING("framePerSecond"),true),parsedAnimation->__Field(HX_CSTRING("dataType"),true),parsedAnimation->__Field(HX_CSTRING("loopBehavior"),true));		HX_STACK_VAR(animation,"animation");
	HX_STACK_LINE(268)
	Dynamic dataType = parsedAnimation->__Field(HX_CSTRING("dataType"),true);		HX_STACK_VAR(dataType,"dataType");
	HX_STACK_LINE(269)
	Dynamic keys = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(keys,"keys");
	HX_STACK_LINE(270)
	{
		HX_STACK_LINE(270)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(270)
		int _g = parsedAnimation->__Field(HX_CSTRING("keys"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(270)
		while((true)){
			HX_STACK_LINE(270)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(270)
				break;
			}
			HX_STACK_LINE(270)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(271)
			Dynamic key = parsedAnimation->__Field(HX_CSTRING("keys"),true)->__GetItem(index);		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(273)
			Dynamic data = null();		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(275)
			Dynamic _switch_1 = (dataType);
			if (  ( _switch_1==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONTYPE_FLOAT)){
				HX_STACK_LINE(277)
				data = key->__Field(HX_CSTRING("values"),true)->__GetItem((int)0);
			}
			else if (  ( _switch_1==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONTYPE_QUATERNION)){
				HX_STACK_LINE(280)
				::com::gamestudiohx::babylonhx::tools::math::Quaternion _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(280)
				{
					HX_STACK_LINE(280)
					Array< Float > array = key->__Field(HX_CSTRING("values"),true);		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(280)
					int offset = (int)0;		HX_STACK_VAR(offset,"offset");
					HX_STACK_LINE(280)
					_g2 = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)),array->__get((offset + (int)3)));
				}
				HX_STACK_LINE(280)
				data = _g2;
			}
			else if (  ( _switch_1==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONTYPE_MATRIX)){
				HX_STACK_LINE(283)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(283)
				{
					HX_STACK_LINE(283)
					Array< Float > array = key->__Field(HX_CSTRING("values"),true);		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(283)
					int offset = (int)0;		HX_STACK_VAR(offset,"offset");
					HX_STACK_LINE(283)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(283)
					{
						HX_STACK_LINE(283)
						{
							HX_STACK_LINE(283)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(283)
							while((true)){
								HX_STACK_LINE(283)
								if ((!(((_g2 < (int)16))))){
									HX_STACK_LINE(283)
									break;
								}
								HX_STACK_LINE(283)
								int index1 = (_g2)++;		HX_STACK_VAR(index1,"index1");
								HX_STACK_LINE(283)
								result->m[index1] = array->__get((index1 + offset));
							}
						}
						HX_STACK_LINE(283)
						result;
					}
					HX_STACK_LINE(283)
					_g11 = result;
				}
				HX_STACK_LINE(283)
				data = _g11;
			}
			else if (  ( _switch_1==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONTYPE_VECTOR3)){
				HX_STACK_LINE(286)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					Array< Float > array = key->__Field(HX_CSTRING("values"),true);		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(286)
					int offset = (int)0;		HX_STACK_VAR(offset,"offset");
					HX_STACK_LINE(286)
					_g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
				}
				HX_STACK_LINE(286)
				data = _g2;
			}
			else  {
				HX_STACK_LINE(289)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					Array< Float > array = key->__Field(HX_CSTRING("values"),true);		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(289)
					int offset = (int)0;		HX_STACK_VAR(offset,"offset");
					HX_STACK_LINE(289)
					_g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
				}
				HX_STACK_LINE(289)
				data = _g3;
			}
;
;
			struct _Function_3_1{
				inline static Dynamic Block( Dynamic &key,Dynamic &data){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",293,0x7b8a3c86)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("frame") , key->__Field(HX_CSTRING("frame"),true),false);
						__result->Add(HX_CSTRING("value") , data,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(293)
			keys->__Field(HX_CSTRING("push"),true)(_Function_3_1::Block(key,data));
		}
	}
	HX_STACK_LINE(299)
	animation->setKeys(keys);
	HX_STACK_LINE(301)
	return animation;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SceneLoader_obj,parseAnimation,return )

::com::gamestudiohx::babylonhx::lights::Light SceneLoader_obj::parseLight( Dynamic parsedLight,::com::gamestudiohx::babylonhx::Scene scene){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SceneLoader","parseLight",0xc0f96b77,"com.gamestudiohx.babylonhx.tools.SceneLoader.parseLight","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",304,0x7b8a3c86)
	HX_STACK_ARG(parsedLight,"parsedLight")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_LINE(305)
	::com::gamestudiohx::babylonhx::lights::Light light = null();		HX_STACK_VAR(light,"light");
	HX_STACK_LINE(307)
	{
		HX_STACK_LINE(307)
		Dynamic _g = parsedLight->__Field(HX_CSTRING("type"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(307)
		switch( (int)(_g)){
			case (int)0: {
				HX_STACK_LINE(309)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					Array< Float > array = parsedLight->__Field(HX_CSTRING("position"),true);		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(309)
					int offset = (int)0;		HX_STACK_VAR(offset,"offset");
					HX_STACK_LINE(309)
					_g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
				}
				HX_STACK_LINE(309)
				::com::gamestudiohx::babylonhx::lights::PointLight _g11 = ::com::gamestudiohx::babylonhx::lights::PointLight_obj::__new(parsedLight->__Field(HX_CSTRING("name"),true),_g1,scene);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(309)
				light = _g11;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(312)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(312)
				{
					HX_STACK_LINE(312)
					Array< Float > array = parsedLight->__Field(HX_CSTRING("direction"),true);		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(312)
					int offset = (int)0;		HX_STACK_VAR(offset,"offset");
					HX_STACK_LINE(312)
					_g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
				}
				HX_STACK_LINE(312)
				::com::gamestudiohx::babylonhx::lights::DirectionalLight _g3 = ::com::gamestudiohx::babylonhx::lights::DirectionalLight_obj::__new(parsedLight->__Field(HX_CSTRING("name"),true),_g2,scene);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(312)
				light = _g3;
				HX_STACK_LINE(313)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					Array< Float > array = parsedLight->__Field(HX_CSTRING("position"),true);		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(313)
					int offset = (int)0;		HX_STACK_VAR(offset,"offset");
					HX_STACK_LINE(313)
					_g4 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
				}
				HX_STACK_LINE(313)
				light->position = _g4;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(316)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(316)
				{
					HX_STACK_LINE(316)
					Array< Float > array = parsedLight->__Field(HX_CSTRING("position"),true);		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(316)
					int offset = (int)0;		HX_STACK_VAR(offset,"offset");
					HX_STACK_LINE(316)
					_g5 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
				}
				HX_STACK_LINE(316)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(316)
				{
					HX_STACK_LINE(316)
					Array< Float > array = parsedLight->__Field(HX_CSTRING("direction"),true);		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(316)
					int offset = (int)0;		HX_STACK_VAR(offset,"offset");
					HX_STACK_LINE(316)
					_g6 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
				}
				HX_STACK_LINE(316)
				::com::gamestudiohx::babylonhx::lights::SpotLight _g7 = ::com::gamestudiohx::babylonhx::lights::SpotLight_obj::__new(parsedLight->__Field(HX_CSTRING("name"),true),_g5,_g6,parsedLight->__Field(HX_CSTRING("angle"),true),parsedLight->__Field(HX_CSTRING("exponent"),true),scene);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(316)
				light = _g7;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(319)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g8;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					Array< Float > array = parsedLight->__Field(HX_CSTRING("direction"),true);		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(319)
					int offset = (int)0;		HX_STACK_VAR(offset,"offset");
					HX_STACK_LINE(319)
					_g8 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
				}
				HX_STACK_LINE(319)
				::com::gamestudiohx::babylonhx::lights::HemisphericLight _g9 = ::com::gamestudiohx::babylonhx::lights::HemisphericLight_obj::__new(parsedLight->__Field(HX_CSTRING("name"),true),_g8,scene);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(319)
				light = _g9;
				HX_STACK_LINE(320)
				::com::gamestudiohx::babylonhx::tools::math::Color3 _g10;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(320)
				{
					HX_STACK_LINE(320)
					Array< Float > array = parsedLight->__Field(HX_CSTRING("groundColor"),true);		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(320)
					_g10 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(array->__get((int)0),array->__get((int)1),array->__get((int)2));
				}
				HX_STACK_LINE(320)
				(hx::TCast< com::gamestudiohx::babylonhx::lights::HemisphericLight >::cast(light))->groundColor = _g10;
			}
			;break;
		}
	}
	HX_STACK_LINE(324)
	light->id = parsedLight->__Field(HX_CSTRING("id"),true);
	HX_STACK_LINE(326)
	if (((parsedLight->__Field(HX_CSTRING("intensity"),true) != null()))){
		HX_STACK_LINE(327)
		light->intensity = parsedLight->__Field(HX_CSTRING("intensity"),true);
	}
	HX_STACK_LINE(329)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g11;		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(329)
	{
		HX_STACK_LINE(329)
		Array< Float > array = parsedLight->__Field(HX_CSTRING("diffuse"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(329)
		_g11 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(array->__get((int)0),array->__get((int)1),array->__get((int)2));
	}
	HX_STACK_LINE(329)
	light->diffuse = _g11;
	HX_STACK_LINE(330)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g12;		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(330)
	{
		HX_STACK_LINE(330)
		Array< Float > array = parsedLight->__Field(HX_CSTRING("specular"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(330)
		_g12 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(array->__get((int)0),array->__get((int)1),array->__get((int)2));
	}
	HX_STACK_LINE(330)
	light->specular = _g12;
	HX_STACK_LINE(332)
	return light;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SceneLoader_obj,parseLight,return )

::com::gamestudiohx::babylonhx::cameras::FreeCamera SceneLoader_obj::parseCamera( Dynamic parsedCamera,::com::gamestudiohx::babylonhx::Scene scene){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SceneLoader","parseCamera",0xe8ceb8e4,"com.gamestudiohx.babylonhx.tools.SceneLoader.parseCamera","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",335,0x7b8a3c86)
	HX_STACK_ARG(parsedCamera,"parsedCamera")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_LINE(336)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(336)
	{
		HX_STACK_LINE(336)
		Array< Float > array = parsedCamera->__Field(HX_CSTRING("position"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(336)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(336)
		_g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
	}
	HX_STACK_LINE(336)
	::com::gamestudiohx::babylonhx::cameras::FreeCamera camera = ::com::gamestudiohx::babylonhx::cameras::FreeCamera_obj::__new(parsedCamera->__Field(HX_CSTRING("name"),true),_g,scene);		HX_STACK_VAR(camera,"camera");
	HX_STACK_LINE(337)
	camera->id = parsedCamera->__Field(HX_CSTRING("id"),true);
	HX_STACK_LINE(340)
	if (((parsedCamera->__Field(HX_CSTRING("parentId"),true) != null()))){
		HX_STACK_LINE(341)
		camera->_waitingParentId = parsedCamera->__Field(HX_CSTRING("parentId"),true);
	}
	HX_STACK_LINE(345)
	if (((parsedCamera->__Field(HX_CSTRING("target"),true) != null()))){
		HX_STACK_LINE(346)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(346)
			Array< Float > array = parsedCamera->__Field(HX_CSTRING("target"),true);		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(346)
			int offset = (int)0;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(346)
			_g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
		}
		HX_STACK_LINE(346)
		camera->setTarget(_g1);
	}
	else{
		HX_STACK_LINE(348)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(348)
		{
			HX_STACK_LINE(348)
			Array< Float > array = parsedCamera->__Field(HX_CSTRING("rotation"),true);		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(348)
			int offset = (int)0;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(348)
			_g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
		}
		HX_STACK_LINE(348)
		camera->rotation = _g2;
	}
	HX_STACK_LINE(352)
	if (((parsedCamera->__Field(HX_CSTRING("lockedTargetId"),true) != null()))){
		HX_STACK_LINE(353)
		camera->_waitingLockedTargetId = parsedCamera->__Field(HX_CSTRING("lockedTargetId"),true);
	}
	HX_STACK_LINE(356)
	camera->fov = parsedCamera->__Field(HX_CSTRING("fov"),true);
	HX_STACK_LINE(357)
	camera->minZ = parsedCamera->__Field(HX_CSTRING("minZ"),true);
	HX_STACK_LINE(358)
	camera->maxZ = parsedCamera->__Field(HX_CSTRING("maxZ"),true);
	HX_STACK_LINE(360)
	camera->speed = parsedCamera->__Field(HX_CSTRING("speed"),true);
	HX_STACK_LINE(361)
	camera->inertia = parsedCamera->__Field(HX_CSTRING("inertia"),true);
	HX_STACK_LINE(363)
	camera->checkCollisions = parsedCamera->__Field(HX_CSTRING("checkCollisions"),true);
	HX_STACK_LINE(364)
	camera->applyGravity = parsedCamera->__Field(HX_CSTRING("applyGravity"),true);
	HX_STACK_LINE(365)
	if (((parsedCamera->__Field(HX_CSTRING("ellipsoid"),true) != null()))){
		HX_STACK_LINE(366)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(366)
		{
			HX_STACK_LINE(366)
			Array< Float > array = parsedCamera->__Field(HX_CSTRING("ellipsoid"),true);		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(366)
			int offset = (int)0;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(366)
			_g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
		}
		HX_STACK_LINE(366)
		camera->ellipsoid = _g3;
	}
	HX_STACK_LINE(370)
	if (((parsedCamera->__Field(HX_CSTRING("animations"),true) != null()))){
		HX_STACK_LINE(371)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(371)
		int _g2 = parsedCamera->__Field(HX_CSTRING("animations"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(371)
		while((true)){
			HX_STACK_LINE(371)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(371)
				break;
			}
			HX_STACK_LINE(371)
			int animationIndex = (_g1)++;		HX_STACK_VAR(animationIndex,"animationIndex");
			HX_STACK_LINE(372)
			Dynamic parsedAnimation = parsedCamera->__Field(HX_CSTRING("animations"),true)->__GetItem(animationIndex);		HX_STACK_VAR(parsedAnimation,"parsedAnimation");
			HX_STACK_LINE(374)
			::com::gamestudiohx::babylonhx::animations::Animation _g4 = ::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseAnimation(parsedAnimation);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(374)
			camera->animations->push(_g4);
		}
	}
	HX_STACK_LINE(378)
	if (((parsedCamera->__Field(HX_CSTRING("autoAnimate"),true) != null()))){
		HX_STACK_LINE(379)
		scene->beginAnimation(camera,parsedCamera->__Field(HX_CSTRING("autoAnimateFrom"),true),parsedCamera->__Field(HX_CSTRING("autoAnimateTo"),true),parsedCamera->__Field(HX_CSTRING("autoAnimateLoop"),true),1.0,null());
	}
	HX_STACK_LINE(382)
	return camera;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SceneLoader_obj,parseCamera,return )

::com::gamestudiohx::babylonhx::mesh::Mesh SceneLoader_obj::parseMesh( Dynamic parsedMesh,::com::gamestudiohx::babylonhx::Scene scene,::String rootUrl){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SceneLoader","parseMesh",0x22ce5e6c,"com.gamestudiohx.babylonhx.tools.SceneLoader.parseMesh","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",385,0x7b8a3c86)
	HX_STACK_ARG(parsedMesh,"parsedMesh")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(rootUrl,"rootUrl")
	HX_STACK_LINE(386)
	::com::gamestudiohx::babylonhx::mesh::Mesh mesh = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(parsedMesh->__Field(HX_CSTRING("name"),true),scene);		HX_STACK_VAR(mesh,"mesh");
	HX_STACK_LINE(387)
	mesh->id = parsedMesh->__Field(HX_CSTRING("id"),true);
	HX_STACK_LINE(389)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(389)
	{
		HX_STACK_LINE(389)
		Array< Float > array = parsedMesh->__Field(HX_CSTRING("position"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(389)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(389)
		_g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
	}
	HX_STACK_LINE(389)
	mesh->position = _g;
	HX_STACK_LINE(390)
	if (((parsedMesh->__Field(HX_CSTRING("rotation"),true) != null()))){
		HX_STACK_LINE(391)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(391)
		{
			HX_STACK_LINE(391)
			Array< Float > array = parsedMesh->__Field(HX_CSTRING("rotation"),true);		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(391)
			int offset = (int)0;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(391)
			_g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
		}
		HX_STACK_LINE(391)
		mesh->rotation = _g1;
	}
	else{
		HX_STACK_LINE(392)
		if (((parsedMesh->__Field(HX_CSTRING("rotationQuaternion"),true) != null()))){
			HX_STACK_LINE(393)
			::com::gamestudiohx::babylonhx::tools::math::Quaternion _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(393)
			{
				HX_STACK_LINE(393)
				Array< Float > array = parsedMesh->__Field(HX_CSTRING("rotationQuaternion"),true);		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(393)
				int offset = (int)0;		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(393)
				_g2 = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)),array->__get((offset + (int)3)));
			}
			HX_STACK_LINE(393)
			mesh->rotationQuaternion = _g2;
		}
	}
	HX_STACK_LINE(395)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(395)
	{
		HX_STACK_LINE(395)
		Array< Float > array = parsedMesh->__Field(HX_CSTRING("scaling"),true);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(395)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(395)
		_g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
	}
	HX_STACK_LINE(395)
	mesh->scaling = _g3;
	HX_STACK_LINE(397)
	if (((parsedMesh->__Field(HX_CSTRING("localMatrix"),true) != null()))){
		HX_STACK_LINE(398)
		::com::gamestudiohx::babylonhx::tools::math::Matrix matrix;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(398)
		{
			HX_STACK_LINE(398)
			Array< Float > array = parsedMesh->__Field(HX_CSTRING("localMatrix"),true);		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(398)
			int offset = (int)0;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(398)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(398)
			{
				HX_STACK_LINE(398)
				{
					HX_STACK_LINE(398)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(398)
					while((true)){
						HX_STACK_LINE(398)
						if ((!(((_g1 < (int)16))))){
							HX_STACK_LINE(398)
							break;
						}
						HX_STACK_LINE(398)
						int index = (_g1)++;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(398)
						result->m[index] = array->__get((index + offset));
					}
				}
				HX_STACK_LINE(398)
				result;
			}
			HX_STACK_LINE(398)
			matrix = result;
		}
		HX_STACK_LINE(398)
		mesh->_pivotMatrix = matrix;
		HX_STACK_LINE(398)
		mesh->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = true;
	}
	HX_STACK_LINE(401)
	mesh->setEnabled(parsedMesh->__Field(HX_CSTRING("isEnabled"),true));
	HX_STACK_LINE(402)
	mesh->isVisible = parsedMesh->__Field(HX_CSTRING("isVisible"),true);
	HX_STACK_LINE(403)
	mesh->infiniteDistance = parsedMesh->__Field(HX_CSTRING("infiniteDistance"),true);
	HX_STACK_LINE(405)
	mesh->receiveShadows = parsedMesh->__Field(HX_CSTRING("receiveShadows"),true);
	HX_STACK_LINE(407)
	mesh->billboardMode = parsedMesh->__Field(HX_CSTRING("billboardMode"),true);
	HX_STACK_LINE(409)
	if (((parsedMesh->__Field(HX_CSTRING("visibility"),true) != null()))){
		HX_STACK_LINE(410)
		mesh->visibility = parsedMesh->__Field(HX_CSTRING("visibility"),true);
	}
	HX_STACK_LINE(413)
	mesh->checkCollisions = parsedMesh->__Field(HX_CSTRING("checkCollisions"),true);
	HX_STACK_LINE(416)
	if (((bool((parsedMesh->__Field(HX_CSTRING("parentId"),true) != null())) && bool((parsedMesh->__Field(HX_CSTRING("parentId"),true) != HX_CSTRING("")))))){
		HX_STACK_LINE(417)
		Dynamic _g4 = scene->getLastEntryByID(parsedMesh->__Field(HX_CSTRING("parentId"),true));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(417)
		mesh->parent = _g4;
	}
	HX_STACK_LINE(448)
	::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::_ImportGeometry(parsedMesh,mesh);
	HX_STACK_LINE(451)
	if (((parsedMesh->__Field(HX_CSTRING("materialId"),true) != null()))){
		HX_STACK_LINE(452)
		mesh->setMaterialByID(parsedMesh->__Field(HX_CSTRING("materialId"),true));
	}
	else{
		HX_STACK_LINE(454)
		mesh->material = null();
	}
	HX_STACK_LINE(458)
	if (((parsedMesh->__Field(HX_CSTRING("skeletonId"),true) > (int)-1))){
		HX_STACK_LINE(459)
		::com::gamestudiohx::babylonhx::bones::Skeleton _g5 = scene->getLastSkeletonByID(parsedMesh->__Field(HX_CSTRING("skeletonId"),true));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(459)
		mesh->skeleton = _g5;
	}
	HX_STACK_LINE(479)
	if (((parsedMesh->__Field(HX_CSTRING("animations"),true) != null()))){
		HX_STACK_LINE(480)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(480)
		int _g2 = parsedMesh->__Field(HX_CSTRING("animations"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(480)
		while((true)){
			HX_STACK_LINE(480)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(480)
				break;
			}
			HX_STACK_LINE(480)
			int animationIndex = (_g1)++;		HX_STACK_VAR(animationIndex,"animationIndex");
			HX_STACK_LINE(481)
			Dynamic parsedAnimation = parsedMesh->__Field(HX_CSTRING("animations"),true)->__GetItem(animationIndex);		HX_STACK_VAR(parsedAnimation,"parsedAnimation");
			HX_STACK_LINE(482)
			::com::gamestudiohx::babylonhx::animations::Animation _g6 = ::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseAnimation(parsedAnimation);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(482)
			mesh->animations->push(_g6);
		}
	}
	HX_STACK_LINE(486)
	if (((bool((parsedMesh->__Field(HX_CSTRING("autoAnimate"),true) != null())) && bool((parsedMesh->__Field(HX_CSTRING("autoAnimate"),true) != false))))){
		HX_STACK_LINE(488)
		scene->beginAnimation(mesh,parsedMesh->__Field(HX_CSTRING("autoAnimateFrom"),true),parsedMesh->__Field(HX_CSTRING("autoAnimateTo"),true),parsedMesh->__Field(HX_CSTRING("autoAnimateLoop"),true),1.0,null());
	}
	HX_STACK_LINE(490)
	::haxe::Log_obj::trace(HX_CSTRING("_ImportGeometry end mesh"),hx::SourceInfo(HX_CSTRING("SceneLoader.hx"),490,HX_CSTRING("com.gamestudiohx.babylonhx.tools.SceneLoader"),HX_CSTRING("parseMesh")));
	HX_STACK_LINE(491)
	return mesh;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SceneLoader_obj,parseMesh,return )

bool SceneLoader_obj::isDescendantOf( Dynamic mesh,::String name,Array< ::String > hierarchyIds){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SceneLoader","isDescendantOf",0xc388ae52,"com.gamestudiohx.babylonhx.tools.SceneLoader.isDescendantOf","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",494,0x7b8a3c86)
	HX_STACK_ARG(mesh,"mesh")
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(hierarchyIds,"hierarchyIds")
	HX_STACK_LINE(495)
	if (((mesh->__Field(HX_CSTRING("name"),true) == name))){
		HX_STACK_LINE(496)
		hierarchyIds->push(mesh->__Field(HX_CSTRING("id"),true));
		HX_STACK_LINE(497)
		return true;
	}
	struct _Function_1_1{
		inline static bool Block( Dynamic &mesh,Array< ::String > &hierarchyIds){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",500,0x7b8a3c86)
			{
				HX_STACK_LINE(500)
				int _g = ::Lambda_obj::indexOf(hierarchyIds,mesh->__Field(HX_CSTRING("parentId"),true));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(500)
				return (_g != (int)-1);
			}
			return null();
		}
	};
	HX_STACK_LINE(500)
	if (((  (((mesh->__Field(HX_CSTRING("parentId"),true) != null()))) ? bool(_Function_1_1::Block(mesh,hierarchyIds)) : bool(false) ))){
		HX_STACK_LINE(501)
		hierarchyIds->push(mesh->__Field(HX_CSTRING("id"),true));
		HX_STACK_LINE(502)
		return true;
	}
	HX_STACK_LINE(505)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SceneLoader_obj,isDescendantOf,return )

Void SceneLoader_obj::_ImportGeometry( Dynamic parsedGeometry,::com::gamestudiohx::babylonhx::mesh::Mesh mesh){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SceneLoader","_ImportGeometry",0x9c92b5a2,"com.gamestudiohx.babylonhx.tools.SceneLoader._ImportGeometry","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",508,0x7b8a3c86)
		HX_STACK_ARG(parsedGeometry,"parsedGeometry")
		HX_STACK_ARG(mesh,"mesh")
		HX_STACK_LINE(510)
		if (((bool((bool((parsedGeometry->__Field(HX_CSTRING("positions"),true) != null())) && bool((parsedGeometry->__Field(HX_CSTRING("normals"),true) != null())))) && bool((parsedGeometry->__Field(HX_CSTRING("indices"),true) != null()))))){
			HX_STACK_LINE(511)
			mesh->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind,parsedGeometry->__Field(HX_CSTRING("positions"),true),false);
			HX_STACK_LINE(512)
			mesh->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind,parsedGeometry->__Field(HX_CSTRING("normals"),true),false);
			HX_STACK_LINE(514)
			if (((parsedGeometry->__Field(HX_CSTRING("uvs"),true) != null()))){
				HX_STACK_LINE(515)
				mesh->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UVKind,parsedGeometry->__Field(HX_CSTRING("uvs"),true),false);
			}
			HX_STACK_LINE(518)
			if (((parsedGeometry->__Field(HX_CSTRING("uvs2"),true) != null()))){
				HX_STACK_LINE(519)
				mesh->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UV2Kind,parsedGeometry->__Field(HX_CSTRING("uvs2"),true),false);
			}
			HX_STACK_LINE(522)
			if (((parsedGeometry->__Field(HX_CSTRING("colors"),true) != null()))){
				HX_STACK_LINE(523)
				mesh->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::ColorKind,parsedGeometry->__Field(HX_CSTRING("colors"),true),false);
			}
			HX_STACK_LINE(526)
			if (((parsedGeometry->__Field(HX_CSTRING("matricesIndices"),true) != null()))){
				HX_STACK_LINE(527)
				Array< Float > floatIndices = Array_obj< Float >::__new();		HX_STACK_VAR(floatIndices,"floatIndices");
				HX_STACK_LINE(529)
				{
					HX_STACK_LINE(529)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(529)
					int _g = parsedGeometry->__Field(HX_CSTRING("matricesIndices"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(529)
					while((true)){
						HX_STACK_LINE(529)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(529)
							break;
						}
						HX_STACK_LINE(529)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(530)
						int matricesIndex = parsedGeometry->__Field(HX_CSTRING("matricesIndices"),true)->__GetItem(i);		HX_STACK_VAR(matricesIndex,"matricesIndex");
						HX_STACK_LINE(532)
						floatIndices->push((int(matricesIndex) & int((int)255)));
						HX_STACK_LINE(533)
						floatIndices->push((int(((int(matricesIndex) & int((int)65280)))) >> int((int)8)));
						HX_STACK_LINE(534)
						floatIndices->push((int(((int(matricesIndex) & int((int)16711680)))) >> int((int)16)));
						HX_STACK_LINE(535)
						floatIndices->push((int(matricesIndex) >> int((int)24)));
					}
				}
				HX_STACK_LINE(538)
				mesh->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesIndicesKind,floatIndices,false);
			}
			HX_STACK_LINE(541)
			if (((parsedGeometry->__Field(HX_CSTRING("matricesWeights"),true) != null()))){
				HX_STACK_LINE(542)
				mesh->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesWeightsKind,parsedGeometry->__Field(HX_CSTRING("matricesWeights"),true),false);
			}
			HX_STACK_LINE(545)
			mesh->setIndices(parsedGeometry->__Field(HX_CSTRING("indices"),true));
		}
		HX_STACK_LINE(549)
		if (((parsedGeometry->__Field(HX_CSTRING("subMeshes"),true) != null()))){
			HX_STACK_LINE(550)
			mesh->subMeshes = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(551)
			{
				HX_STACK_LINE(551)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(551)
				int _g = parsedGeometry->__Field(HX_CSTRING("subMeshes"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(551)
				while((true)){
					HX_STACK_LINE(551)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(551)
						break;
					}
					HX_STACK_LINE(551)
					int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
					HX_STACK_LINE(552)
					Dynamic parsedSubMesh = parsedGeometry->__Field(HX_CSTRING("subMeshes"),true)->__GetItem(subIndex);		HX_STACK_VAR(parsedSubMesh,"parsedSubMesh");
					HX_STACK_LINE(554)
					::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = ::com::gamestudiohx::babylonhx::mesh::SubMesh_obj::__new(parsedSubMesh->__Field(HX_CSTRING("materialIndex"),true),parsedSubMesh->__Field(HX_CSTRING("verticesStart"),true),parsedSubMesh->__Field(HX_CSTRING("verticesCount"),true),parsedSubMesh->__Field(HX_CSTRING("indexStart"),true),parsedSubMesh->__Field(HX_CSTRING("indexCount"),true),mesh,null(),null());		HX_STACK_VAR(subMesh,"subMesh");
				}
			}
		}
		HX_STACK_LINE(559)
		{
			HX_STACK_LINE(559)
			::com::gamestudiohx::babylonhx::tools::math::Matrix ret = mesh->_worldMatrix;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(559)
			{
				HX_STACK_LINE(559)
				mesh->_childrenFlag = (int)1;
				HX_STACK_LINE(559)
				mesh->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(mesh->position);
				HX_STACK_LINE(559)
				mesh->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(mesh->scaling);
				HX_STACK_LINE(559)
				mesh->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
				HX_STACK_LINE(559)
				int _g1 = mesh->_scene->getRenderId();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(559)
				mesh->_currentRenderId = _g1;
				HX_STACK_LINE(559)
				{
					HX_STACK_LINE(559)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localScaling;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(559)
					result->m[(int)0] = mesh->scaling->x;
					HX_STACK_LINE(559)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(559)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(559)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(559)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(559)
					result->m[(int)5] = mesh->scaling->y;
					HX_STACK_LINE(559)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(559)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(559)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(559)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(559)
					result->m[(int)10] = mesh->scaling->z;
					HX_STACK_LINE(559)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(559)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(559)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(559)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(559)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(559)
					result;
				}
				HX_STACK_LINE(559)
				if (((mesh->rotationQuaternion != null()))){
					HX_STACK_LINE(559)
					{
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = mesh->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localRotation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(559)
						Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(559)
						Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(559)
						Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(559)
						Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(559)
						Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
						HX_STACK_LINE(559)
						Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
						HX_STACK_LINE(559)
						Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
						HX_STACK_LINE(559)
						Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(559)
						Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
						HX_STACK_LINE(559)
						result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
						HX_STACK_LINE(559)
						result->m[(int)1] = (2.0 * ((xy + zw)));
						HX_STACK_LINE(559)
						result->m[(int)2] = (2.0 * ((zx - yw)));
						HX_STACK_LINE(559)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(559)
						result->m[(int)4] = (2.0 * ((xy - zw)));
						HX_STACK_LINE(559)
						result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
						HX_STACK_LINE(559)
						result->m[(int)6] = (2.0 * ((yz + xw)));
						HX_STACK_LINE(559)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(559)
						result->m[(int)8] = (2.0 * ((zx + yw)));
						HX_STACK_LINE(559)
						result->m[(int)9] = (2.0 * ((yz - xw)));
						HX_STACK_LINE(559)
						result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
						HX_STACK_LINE(559)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(559)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(559)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(559)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(559)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(559)
						result;
					}
					HX_STACK_LINE(559)
					mesh->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(mesh->rotationQuaternion);
				}
				else{
					HX_STACK_LINE(559)
					{
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localRotation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							Float halfRoll = (mesh->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
							HX_STACK_LINE(559)
							Float halfPitch = (mesh->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
							HX_STACK_LINE(559)
							Float halfYaw = (mesh->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
							HX_STACK_LINE(559)
							Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
							HX_STACK_LINE(559)
							Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
							HX_STACK_LINE(559)
							Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
							HX_STACK_LINE(559)
							Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
							HX_STACK_LINE(559)
							Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
							HX_STACK_LINE(559)
							Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
							HX_STACK_LINE(559)
							tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
							HX_STACK_LINE(559)
							tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
							HX_STACK_LINE(559)
							tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
							HX_STACK_LINE(559)
							tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
							HX_STACK_LINE(559)
							_g2 = tempQuaternion;
						}
						HX_STACK_LINE(559)
						tempQuaternion = _g2;
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(559)
							Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
							HX_STACK_LINE(559)
							Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
							HX_STACK_LINE(559)
							Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
							HX_STACK_LINE(559)
							Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
							HX_STACK_LINE(559)
							Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
							HX_STACK_LINE(559)
							Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
							HX_STACK_LINE(559)
							Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
							HX_STACK_LINE(559)
							Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
							HX_STACK_LINE(559)
							result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
							HX_STACK_LINE(559)
							result->m[(int)1] = (2.0 * ((xy + zw)));
							HX_STACK_LINE(559)
							result->m[(int)2] = (2.0 * ((zx - yw)));
							HX_STACK_LINE(559)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)4] = (2.0 * ((xy - zw)));
							HX_STACK_LINE(559)
							result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
							HX_STACK_LINE(559)
							result->m[(int)6] = (2.0 * ((yz + xw)));
							HX_STACK_LINE(559)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)8] = (2.0 * ((zx + yw)));
							HX_STACK_LINE(559)
							result->m[(int)9] = (2.0 * ((yz - xw)));
							HX_STACK_LINE(559)
							result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
							HX_STACK_LINE(559)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)12] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)13] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)14] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(559)
							result;
						}
					}
					HX_STACK_LINE(559)
					mesh->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(mesh->rotation);
				}
				HX_STACK_LINE(559)
				if ((mesh->infiniteDistance)){
					HX_STACK_LINE(559)
					::com::gamestudiohx::babylonhx::cameras::Camera camera = mesh->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
					HX_STACK_LINE(559)
					{
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(559)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(559)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(559)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)12] = (mesh->position->x + camera->position->x);
							HX_STACK_LINE(559)
							result->m[(int)13] = (mesh->position->y + camera->position->y);
							HX_STACK_LINE(559)
							result->m[(int)14] = (mesh->position->z + camera->position->z);
							HX_STACK_LINE(559)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(559)
							result;
						}
					}
				}
				else{
					HX_STACK_LINE(559)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localTranslation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(559)
					{
						HX_STACK_LINE(559)
						result->m[(int)0] = 1.0;
						HX_STACK_LINE(559)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(559)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(559)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(559)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(559)
						result->m[(int)5] = 1.0;
						HX_STACK_LINE(559)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(559)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(559)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(559)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(559)
						result->m[(int)10] = 1.0;
						HX_STACK_LINE(559)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(559)
						result->m[(int)12] = mesh->position->x;
						HX_STACK_LINE(559)
						result->m[(int)13] = mesh->position->y;
						HX_STACK_LINE(559)
						result->m[(int)14] = mesh->position->z;
						HX_STACK_LINE(559)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(559)
						result;
					}
				}
				HX_STACK_LINE(559)
				{
					HX_STACK_LINE(559)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(559)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localScaling;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(559)
					{
						HX_STACK_LINE(559)
						Array< Float > result = mesh->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(559)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(559)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(559)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(559)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(559)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(559)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(559)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(559)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(559)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(559)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(559)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(559)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(559)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(559)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(559)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(559)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(559)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(559)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(559)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(559)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(559)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(559)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(559)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(559)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(559)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(559)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(559)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(559)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(559)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(559)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(559)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(559)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(559)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(559)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(559)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(559)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(559)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(559)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(559)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(559)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(559)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(559)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(559)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(559)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(559)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(559)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(559)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(559)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(559)
						result;
					}
				}
				HX_STACK_LINE(559)
				{
					HX_STACK_LINE(559)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(559)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localRotation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(559)
					{
						HX_STACK_LINE(559)
						Array< Float > result = mesh->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(559)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(559)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(559)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(559)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(559)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(559)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(559)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(559)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(559)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(559)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(559)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(559)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(559)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(559)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(559)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(559)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(559)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(559)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(559)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(559)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(559)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(559)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(559)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(559)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(559)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(559)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(559)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(559)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(559)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(559)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(559)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(559)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(559)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(559)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(559)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(559)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(559)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(559)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(559)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(559)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(559)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(559)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(559)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(559)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(559)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(559)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(559)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(559)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(559)
						result;
					}
				}
				HX_STACK_LINE(559)
				if (((mesh->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
					HX_STACK_LINE(559)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
					HX_STACK_LINE(559)
					{
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = mesh->position;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(559)
						localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
					}
					HX_STACK_LINE(559)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
					HX_STACK_LINE(559)
					{
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = mesh->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(559)
						zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
					}
					HX_STACK_LINE(559)
					if (((bool((mesh->parent != null())) && bool((mesh->parent->position != null()))))){
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = mesh->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
							HX_STACK_LINE(559)
							hx::AddEq(localPosition->x,otherVector->x);
							HX_STACK_LINE(559)
							hx::AddEq(localPosition->y,otherVector->y);
							HX_STACK_LINE(559)
							hx::AddEq(localPosition->z,otherVector->z);
						}
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localTranslation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(559)
							{
								HX_STACK_LINE(559)
								result->m[(int)0] = 1.0;
								HX_STACK_LINE(559)
								result->m[(int)1] = (int)0;
								HX_STACK_LINE(559)
								result->m[(int)2] = (int)0;
								HX_STACK_LINE(559)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(559)
								result->m[(int)4] = (int)0;
								HX_STACK_LINE(559)
								result->m[(int)5] = 1.0;
								HX_STACK_LINE(559)
								result->m[(int)6] = (int)0;
								HX_STACK_LINE(559)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(559)
								result->m[(int)8] = (int)0;
								HX_STACK_LINE(559)
								result->m[(int)9] = (int)0;
								HX_STACK_LINE(559)
								result->m[(int)10] = 1.0;
								HX_STACK_LINE(559)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(559)
								result->m[(int)12] = localPosition->x;
								HX_STACK_LINE(559)
								result->m[(int)13] = localPosition->y;
								HX_STACK_LINE(559)
								result->m[(int)14] = localPosition->z;
								HX_STACK_LINE(559)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(559)
								result;
							}
						}
					}
					HX_STACK_LINE(559)
					if (((((int(mesh->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
						HX_STACK_LINE(559)
						zero = mesh->_scene->activeCamera->position;
					}
					else{
						HX_STACK_LINE(559)
						if (((((int(mesh->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
							HX_STACK_LINE(559)
							zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
						HX_STACK_LINE(559)
						if (((((int(mesh->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
							HX_STACK_LINE(559)
							zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
						HX_STACK_LINE(559)
						if (((((int(mesh->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
							HX_STACK_LINE(559)
							zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
					}
					HX_STACK_LINE(559)
					{
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localBillboard;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							zAxis->x = (zero->x - localPosition->x);
							HX_STACK_LINE(559)
							zAxis->y = (zero->y - localPosition->y);
							HX_STACK_LINE(559)
							zAxis->z = (zero->z - localPosition->z);
						}
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(559)
							if (((len != (int)0))){
								HX_STACK_LINE(559)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(559)
								hx::MultEq(zAxis->x,num);
								HX_STACK_LINE(559)
								hx::MultEq(zAxis->y,num);
								HX_STACK_LINE(559)
								hx::MultEq(zAxis->z,num);
							}
						}
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
							HX_STACK_LINE(559)
							xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
							HX_STACK_LINE(559)
							xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
						}
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(559)
							if (((len != (int)0))){
								HX_STACK_LINE(559)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(559)
								hx::MultEq(xAxis->x,num);
								HX_STACK_LINE(559)
								hx::MultEq(xAxis->y,num);
								HX_STACK_LINE(559)
								hx::MultEq(xAxis->z,num);
							}
						}
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
							HX_STACK_LINE(559)
							yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
							HX_STACK_LINE(559)
							yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
						}
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(559)
							if (((len != (int)0))){
								HX_STACK_LINE(559)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(559)
								hx::MultEq(yAxis->x,num);
								HX_STACK_LINE(559)
								hx::MultEq(yAxis->y,num);
								HX_STACK_LINE(559)
								hx::MultEq(yAxis->z,num);
							}
						}
						HX_STACK_LINE(559)
						Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
						HX_STACK_LINE(559)
						Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
						HX_STACK_LINE(559)
						Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							result->m[(int)0] = xAxis->x;
							HX_STACK_LINE(559)
							result->m[(int)1] = yAxis->x;
							HX_STACK_LINE(559)
							result->m[(int)2] = zAxis->x;
							HX_STACK_LINE(559)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)4] = xAxis->y;
							HX_STACK_LINE(559)
							result->m[(int)5] = yAxis->y;
							HX_STACK_LINE(559)
							result->m[(int)6] = zAxis->y;
							HX_STACK_LINE(559)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)8] = xAxis->z;
							HX_STACK_LINE(559)
							result->m[(int)9] = yAxis->z;
							HX_STACK_LINE(559)
							result->m[(int)10] = zAxis->z;
							HX_STACK_LINE(559)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(559)
							result->m[(int)12] = ex;
							HX_STACK_LINE(559)
							result->m[(int)13] = ey;
							HX_STACK_LINE(559)
							result->m[(int)14] = ez;
							HX_STACK_LINE(559)
							result->m[(int)15] = (int)1;
							HX_STACK_LINE(559)
							result;
						}
					}
					HX_STACK_LINE(559)
					mesh->_localBillboard->m[(int)12] = mesh->_localBillboard->m[(int)13] = mesh->_localBillboard->m[(int)14] = (int)0;
					HX_STACK_LINE(559)
					{
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localBillboard;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
							HX_STACK_LINE(559)
							Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
							HX_STACK_LINE(559)
							Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
							HX_STACK_LINE(559)
							Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
							HX_STACK_LINE(559)
							Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
							HX_STACK_LINE(559)
							Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
							HX_STACK_LINE(559)
							Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
							HX_STACK_LINE(559)
							Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
							HX_STACK_LINE(559)
							Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
							HX_STACK_LINE(559)
							Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
							HX_STACK_LINE(559)
							Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
							HX_STACK_LINE(559)
							Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
							HX_STACK_LINE(559)
							Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
							HX_STACK_LINE(559)
							Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
							HX_STACK_LINE(559)
							Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
							HX_STACK_LINE(559)
							Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
							HX_STACK_LINE(559)
							Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
							HX_STACK_LINE(559)
							Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
							HX_STACK_LINE(559)
							Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
							HX_STACK_LINE(559)
							Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
							HX_STACK_LINE(559)
							Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
							HX_STACK_LINE(559)
							Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
							HX_STACK_LINE(559)
							Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
							HX_STACK_LINE(559)
							Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
							HX_STACK_LINE(559)
							Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
							HX_STACK_LINE(559)
							Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
							HX_STACK_LINE(559)
							Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
							HX_STACK_LINE(559)
							Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
							HX_STACK_LINE(559)
							Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
							HX_STACK_LINE(559)
							Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
							HX_STACK_LINE(559)
							Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
							HX_STACK_LINE(559)
							Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
							HX_STACK_LINE(559)
							Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
							HX_STACK_LINE(559)
							Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
							HX_STACK_LINE(559)
							Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
							HX_STACK_LINE(559)
							Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
							HX_STACK_LINE(559)
							Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
							HX_STACK_LINE(559)
							Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
							HX_STACK_LINE(559)
							Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
							HX_STACK_LINE(559)
							_this->m[(int)0] = (l23 * l27);
							HX_STACK_LINE(559)
							_this->m[(int)4] = (l24 * l27);
							HX_STACK_LINE(559)
							_this->m[(int)8] = (l25 * l27);
							HX_STACK_LINE(559)
							_this->m[(int)12] = (l26 * l27);
							HX_STACK_LINE(559)
							_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
							HX_STACK_LINE(559)
							_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
							HX_STACK_LINE(559)
							_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
							HX_STACK_LINE(559)
							_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
							HX_STACK_LINE(559)
							_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
							HX_STACK_LINE(559)
							_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
							HX_STACK_LINE(559)
							_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
							HX_STACK_LINE(559)
							_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
							HX_STACK_LINE(559)
							_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
							HX_STACK_LINE(559)
							_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
							HX_STACK_LINE(559)
							_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
							HX_STACK_LINE(559)
							_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
						}
					}
					HX_STACK_LINE(559)
					{
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localBillboard;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							Array< Float > result = mesh->_localWorld->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(559)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(559)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(559)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(559)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(559)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(559)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(559)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(559)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(559)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(559)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(559)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(559)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(559)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(559)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(559)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(559)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(559)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(559)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(559)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(559)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(559)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(559)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(559)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(559)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(559)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(559)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(559)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(559)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(559)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(559)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(559)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(559)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(559)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(559)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(559)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(559)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(559)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(559)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(559)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(559)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(559)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(559)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(559)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(559)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(559)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(559)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(559)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(559)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(559)
							result;
						}
					}
					HX_STACK_LINE(559)
					{
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localWorld;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							Array< Float > result = mesh->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(559)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(559)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(559)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(559)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(559)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(559)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(559)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(559)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(559)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(559)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(559)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(559)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(559)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(559)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(559)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(559)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(559)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(559)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(559)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(559)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(559)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(559)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(559)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(559)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(559)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(559)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(559)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(559)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(559)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(559)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(559)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(559)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(559)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(559)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(559)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(559)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(559)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(559)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(559)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(559)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(559)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(559)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(559)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(559)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(559)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(559)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(559)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(559)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(559)
							result;
						}
					}
				}
				struct _Function_3_1{
					inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::Mesh &mesh){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",559,0x7b8a3c86)
						{
							HX_STACK_LINE(559)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _g3 = mesh->parent->getWorldMatrix();		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(559)
							return (_g3 != null());
						}
						return null();
					}
				};
				HX_STACK_LINE(559)
				if (((  (((  (((mesh->parent != null()))) ? bool(_Function_3_1::Block(mesh)) : bool(false) ))) ? bool((mesh->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
					HX_STACK_LINE(559)
					{
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localTranslation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							Array< Float > result = mesh->_localWorld->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(559)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(559)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(559)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(559)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(559)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(559)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(559)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(559)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(559)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(559)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(559)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(559)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(559)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(559)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(559)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(559)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(559)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(559)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(559)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(559)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(559)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(559)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(559)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(559)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(559)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(559)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(559)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(559)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(559)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(559)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(559)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(559)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(559)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(559)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(559)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(559)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(559)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(559)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(559)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(559)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(559)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(559)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(559)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(559)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(559)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(559)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(559)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(559)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(559)
							result;
						}
					}
					HX_STACK_LINE(559)
					::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = mesh->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
					HX_STACK_LINE(559)
					{
						HX_STACK_LINE(559)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localWorld;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							Array< Float > result = mesh->_worldMatrix->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(559)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(559)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(559)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(559)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(559)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(559)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(559)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(559)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(559)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(559)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(559)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(559)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(559)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(559)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(559)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(559)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(559)
							Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(559)
							Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(559)
							Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(559)
							Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(559)
							Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(559)
							Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(559)
							Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(559)
							Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(559)
							Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(559)
							Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(559)
							Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(559)
							Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(559)
							Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(559)
							Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(559)
							Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(559)
							Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(559)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(559)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(559)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(559)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(559)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(559)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(559)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(559)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(559)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(559)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(559)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(559)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(559)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(559)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(559)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(559)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(559)
							result;
						}
					}
				}
				else{
					HX_STACK_LINE(559)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(559)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localTranslation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(559)
					{
						HX_STACK_LINE(559)
						Array< Float > result = mesh->_worldMatrix->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(559)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(559)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(559)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(559)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(559)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(559)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(559)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(559)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(559)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(559)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(559)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(559)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(559)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(559)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(559)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(559)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(559)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(559)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(559)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(559)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(559)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(559)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(559)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(559)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(559)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(559)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(559)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(559)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(559)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(559)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(559)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(559)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(559)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(559)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(559)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(559)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(559)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(559)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(559)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(559)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(559)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(559)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(559)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(559)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(559)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(559)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(559)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(559)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(559)
						result;
					}
				}
				HX_STACK_LINE(559)
				if (((mesh->_boundingInfo != null()))){
					HX_STACK_LINE(559)
					Float _g4 = ::Math_obj::max(mesh->scaling->x,mesh->scaling->y);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(559)
					mesh->_scaleFactor = _g4;
					HX_STACK_LINE(559)
					Float _g5 = ::Math_obj::max(mesh->_scaleFactor,mesh->scaling->z);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(559)
					mesh->_scaleFactor = _g5;
					struct _Function_4_1{
						inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::Mesh &mesh){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",559,0x7b8a3c86)
							{
								HX_STACK_LINE(559)
								Dynamic _g6 = ::Reflect_obj::field(mesh->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(559)
								return (_g6 != null());
							}
							return null();
						}
					};
					HX_STACK_LINE(559)
					if (((  (((mesh->parent != null()))) ? bool(_Function_4_1::Block(mesh)) : bool(false) ))){
						HX_STACK_LINE(559)
						Dynamic _g7 = ::Reflect_obj::field(mesh->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(559)
						Float _g8 = (mesh->_scaleFactor * _g7);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(559)
						mesh->_scaleFactor = _g8;
					}
					HX_STACK_LINE(559)
					mesh->_boundingInfo->_update(mesh->_worldMatrix,mesh->_scaleFactor);
					HX_STACK_LINE(559)
					{
						HX_STACK_LINE(559)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(559)
						int _g = mesh->subMeshes->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(559)
						while((true)){
							HX_STACK_LINE(559)
							if ((!(((_g11 < _g))))){
								HX_STACK_LINE(559)
								break;
							}
							HX_STACK_LINE(559)
							int subIndex = (_g11)++;		HX_STACK_VAR(subIndex,"subIndex");
							HX_STACK_LINE(559)
							::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = mesh->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
							HX_STACK_LINE(559)
							subMesh->_boundingInfo->_update(mesh->_worldMatrix,mesh->_scaleFactor);
						}
					}
				}
				HX_STACK_LINE(559)
				{
					HX_STACK_LINE(559)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = mesh->_absolutePosition;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(559)
					_this->x = mesh->_worldMatrix->m->__get((int)12);
					HX_STACK_LINE(559)
					_this->y = mesh->_worldMatrix->m->__get((int)13);
					HX_STACK_LINE(559)
					_this->z = mesh->_worldMatrix->m->__get((int)14);
				}
				HX_STACK_LINE(559)
				ret = mesh->_worldMatrix;
			}
			HX_STACK_LINE(559)
			ret;
		}
		HX_STACK_LINE(561)
		::com::gamestudiohx::babylonhx::Scene scene = mesh->getScene();		HX_STACK_VAR(scene,"scene");
		HX_STACK_LINE(562)
		if (((scene->_selectionOctree != null()))){
			HX_STACK_LINE(563)
			scene->_selectionOctree->addMesh(mesh);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SceneLoader_obj,_ImportGeometry,(void))

Void SceneLoader_obj::ImportMesh( ::String meshName,::String rootUrl,::String sceneFilename,::com::gamestudiohx::babylonhx::Scene scene,Dynamic then,Dynamic progressCallBack){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SceneLoader","ImportMesh",0x685ec5e6,"com.gamestudiohx.babylonhx.tools.SceneLoader.ImportMesh","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",568,0x7b8a3c86)
		HX_STACK_ARG(meshName,"meshName")
		HX_STACK_ARG(rootUrl,"rootUrl")
		HX_STACK_ARG(sceneFilename,"sceneFilename")
		HX_STACK_ARG(scene,"scene")
		HX_STACK_ARG(then,"then")
		HX_STACK_ARG(progressCallBack,"progressCallBack")
		HX_STACK_LINE(568)
		Dynamic then1 = Dynamic( Array_obj<Dynamic>::__new().Add(then));		HX_STACK_VAR(then1,"then1");
		HX_STACK_LINE(568)
		Array< ::Dynamic > scene1 = Array_obj< ::Dynamic >::__new().Add(scene);		HX_STACK_VAR(scene1,"scene1");
		HX_STACK_LINE(568)
		Array< ::String > rootUrl1 = Array_obj< ::String >::__new().Add(rootUrl);		HX_STACK_VAR(rootUrl1,"rootUrl1");
		HX_STACK_LINE(568)
		Array< ::String > meshName1 = Array_obj< ::String >::__new().Add(meshName);		HX_STACK_VAR(meshName1,"meshName1");

		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,scene1,Array< ::String >,meshName1,Array< ::String >,rootUrl1,Dynamic,then1)
		Void run(::String data){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",570,0x7b8a3c86)
			HX_STACK_ARG(data,"data")
			{
				HX_STACK_LINE(571)
				Dynamic parsedData = ::haxe::format::JsonParser_obj::__new(data)->parseRec();		HX_STACK_VAR(parsedData,"parsedData");
				HX_STACK_LINE(574)
				Array< ::Dynamic > meshes = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(meshes,"meshes");
				HX_STACK_LINE(575)
				Array< ::Dynamic > particleSystems = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(particleSystems,"particleSystems");
				HX_STACK_LINE(576)
				Array< ::Dynamic > skeletons = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(skeletons,"skeletons");
				HX_STACK_LINE(577)
				Array< ::String > loadedSkeletonsIds = Array_obj< ::String >::__new();		HX_STACK_VAR(loadedSkeletonsIds,"loadedSkeletonsIds");
				HX_STACK_LINE(578)
				Array< ::String > loadedMaterialsIds = Array_obj< ::String >::__new();		HX_STACK_VAR(loadedMaterialsIds,"loadedMaterialsIds");
				HX_STACK_LINE(579)
				Array< ::String > hierarchyIds = Array_obj< ::String >::__new();		HX_STACK_VAR(hierarchyIds,"hierarchyIds");
				HX_STACK_LINE(581)
				Dynamic _meshes = parsedData->__Field(HX_CSTRING("meshes"),true);		HX_STACK_VAR(_meshes,"_meshes");
				HX_STACK_LINE(582)
				{
					HX_STACK_LINE(582)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(582)
					int _g = _meshes->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(582)
					while(((_g1 < _g))){
						HX_STACK_LINE(582)
						int index = (_g1)++;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(583)
						Dynamic parsedMesh = _meshes->__GetItem(index);		HX_STACK_VAR(parsedMesh,"parsedMesh");
						HX_STACK_LINE(585)
						if (((bool((meshName1->__get((int)0) == null())) || bool(::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::isDescendantOf(parsedMesh,meshName1->__get((int)0),hierarchyIds))))){
							HX_STACK_LINE(587)
							if (((parsedMesh->__Field(HX_CSTRING("materialId"),true) != null()))){
								HX_STACK_LINE(588)
								bool materialFound = (::Lambda_obj::indexOf(loadedMaterialsIds,parsedMesh->__Field(HX_CSTRING("materialId"),true)) != (int)-1);		HX_STACK_VAR(materialFound,"materialFound");
								HX_STACK_LINE(590)
								if ((!(materialFound))){
									HX_STACK_LINE(591)
									Dynamic _multiMaterials = parsedData->__Field(HX_CSTRING("multiMaterials"),true);		HX_STACK_VAR(_multiMaterials,"_multiMaterials");
									HX_STACK_LINE(592)
									{
										HX_STACK_LINE(592)
										int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(592)
										int _g2 = _multiMaterials->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(592)
										while(((_g3 < _g2))){
											HX_STACK_LINE(592)
											int multimatIndex = (_g3)++;		HX_STACK_VAR(multimatIndex,"multimatIndex");
											HX_STACK_LINE(593)
											Dynamic parsedMultiMaterial = _multiMaterials->__GetItem(multimatIndex);		HX_STACK_VAR(parsedMultiMaterial,"parsedMultiMaterial");
											HX_STACK_LINE(594)
											if (((parsedMultiMaterial->__Field(HX_CSTRING("id"),true) == parsedMesh->__Field(HX_CSTRING("materialId"),true)))){
												HX_STACK_LINE(595)
												Dynamic _materials = parsedMultiMaterial->__Field(HX_CSTRING("materials"),true);		HX_STACK_VAR(_materials,"_materials");
												HX_STACK_LINE(596)
												{
													HX_STACK_LINE(596)
													int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
													HX_STACK_LINE(596)
													int _g4 = _materials->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g4,"_g4");
													HX_STACK_LINE(596)
													while(((_g5 < _g4))){
														HX_STACK_LINE(596)
														int matIndex = (_g5)++;		HX_STACK_VAR(matIndex,"matIndex");
														HX_STACK_LINE(597)
														::String subMatId = _materials->__GetItem(matIndex);		HX_STACK_VAR(subMatId,"subMatId");
														HX_STACK_LINE(598)
														loadedMaterialsIds->push(subMatId);
														HX_STACK_LINE(599)
														::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseMaterialById(subMatId,parsedData,scene1->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >(),rootUrl1->__get((int)0));
													}
												}
												HX_STACK_LINE(602)
												loadedMaterialsIds->push(parsedMultiMaterial->__Field(HX_CSTRING("id"),true));
												HX_STACK_LINE(603)
												::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseMultiMaterial(parsedMultiMaterial,scene1->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >());
												HX_STACK_LINE(604)
												materialFound = true;
												HX_STACK_LINE(605)
												break;
											}
										}
									}
								}
								HX_STACK_LINE(609)
								if ((!(materialFound))){
									HX_STACK_LINE(610)
									loadedMaterialsIds->push(parsedMesh->__Field(HX_CSTRING("materialId"),true));
									HX_STACK_LINE(611)
									::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseMaterialById(parsedMesh->__Field(HX_CSTRING("materialId"),true),parsedData,scene1->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >(),rootUrl1->__get((int)0));
								}
							}
							HX_STACK_LINE(616)
							if (((bool((parsedMesh->__Field(HX_CSTRING("skeletonId"),true) > (int)-1)) && bool((scene1->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >()->skeletons != null()))))){
								HX_STACK_LINE(617)
								bool skeletonAlreadyLoaded = (::Lambda_obj::indexOf(loadedSkeletonsIds,parsedMesh->__Field(HX_CSTRING("skeletonId"),true)) > (int)-1);		HX_STACK_VAR(skeletonAlreadyLoaded,"skeletonAlreadyLoaded");
								HX_STACK_LINE(619)
								if ((!(skeletonAlreadyLoaded))){
									HX_STACK_LINE(620)
									Dynamic _skeletons = parsedData->__Field(HX_CSTRING("skeletons"),true);		HX_STACK_VAR(_skeletons,"_skeletons");
									HX_STACK_LINE(621)
									{
										HX_STACK_LINE(621)
										int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(621)
										int _g2 = _skeletons->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(621)
										while(((_g3 < _g2))){
											HX_STACK_LINE(621)
											int skeletonIndex = (_g3)++;		HX_STACK_VAR(skeletonIndex,"skeletonIndex");
											HX_STACK_LINE(622)
											Dynamic parsedSkeleton = _skeletons->__GetItem(skeletonIndex);		HX_STACK_VAR(parsedSkeleton,"parsedSkeleton");
											HX_STACK_LINE(624)
											if (((parsedSkeleton->__Field(HX_CSTRING("id"),true) == parsedMesh->__Field(HX_CSTRING("skeletonId"),true)))){
												HX_STACK_LINE(625)
												skeletons->push(::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseSkeleton(parsedSkeleton,scene1->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >()));
												HX_STACK_LINE(626)
												loadedSkeletonsIds->push(parsedSkeleton->__Field(HX_CSTRING("id"),true));
											}
										}
									}
								}
							}
							HX_STACK_LINE(631)
							::com::gamestudiohx::babylonhx::mesh::Mesh mesh = ::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseMesh(parsedMesh,scene1->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >(),rootUrl1->__get((int)0));		HX_STACK_VAR(mesh,"mesh");
							HX_STACK_LINE(632)
							meshes->push(mesh);
						}
					}
				}
				HX_STACK_LINE(637)
				if (((parsedData->__Field(HX_CSTRING("particleSystems"),true) != null()))){
					HX_STACK_LINE(638)
					Array< ::Dynamic > ps = parsedData->__Field(HX_CSTRING("particleSystems"),true);		HX_STACK_VAR(ps,"ps");
					HX_STACK_LINE(639)
					{
						HX_STACK_LINE(639)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(639)
						int _g = ps->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(639)
						while(((_g1 < _g))){
							HX_STACK_LINE(639)
							int index = (_g1)++;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(640)
							::com::gamestudiohx::babylonhx::particles::ParticleSystem parsedParticleSystem = ps->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::particles::ParticleSystem >();		HX_STACK_VAR(parsedParticleSystem,"parsedParticleSystem");
							HX_STACK_LINE(642)
							if (((::Lambda_obj::indexOf(hierarchyIds,parsedParticleSystem->get_emitterId()) != (int)-1))){
								HX_STACK_LINE(643)
								particleSystems->push(::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseParticleSystem(parsedParticleSystem,scene1->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >(),rootUrl1->__get((int)0)));
							}
						}
					}
				}
				HX_STACK_LINE(648)
				if (((then1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(649)
					then1->__GetItem((int)0)(meshes,particleSystems,skeletons).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(570)
		::com::gamestudiohx::babylonhx::tools::Tools_obj::LoadFile((rootUrl1->__get((int)0) + sceneFilename), Dynamic(new _Function_1_1(scene1,meshName1,rootUrl1,then1)),null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(SceneLoader_obj,ImportMesh,(void))

Void SceneLoader_obj::Load( ::String rootUrl,::String sceneFilename,::com::gamestudiohx::babylonhx::Engine engine,Dynamic then){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SceneLoader","Load",0xfd11031a,"com.gamestudiohx.babylonhx.tools.SceneLoader.Load","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",654,0x7b8a3c86)
		HX_STACK_ARG(rootUrl,"rootUrl")
		HX_STACK_ARG(sceneFilename,"sceneFilename")
		HX_STACK_ARG(engine,"engine")
		HX_STACK_ARG(then,"then")
		HX_STACK_LINE(654)
		Dynamic then1 = Dynamic( Array_obj<Dynamic>::__new().Add(then));		HX_STACK_VAR(then1,"then1");
		HX_STACK_LINE(654)
		Array< ::Dynamic > engine1 = Array_obj< ::Dynamic >::__new().Add(engine);		HX_STACK_VAR(engine1,"engine1");
		HX_STACK_LINE(654)
		Array< ::String > rootUrl1 = Array_obj< ::String >::__new().Add(rootUrl);		HX_STACK_VAR(rootUrl1,"rootUrl1");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,engine1,Array< ::String >,rootUrl1,Dynamic,then1)
		Void run(::String data){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/gamestudiohx/babylonhx/tools/SceneLoader.hx",655,0x7b8a3c86)
			HX_STACK_ARG(data,"data")
			{
				HX_STACK_LINE(656)
				Dynamic parsedData = ::haxe::format::JsonParser_obj::__new(data)->parseRec();		HX_STACK_VAR(parsedData,"parsedData");
				HX_STACK_LINE(658)
				::com::gamestudiohx::babylonhx::Scene scene = ::com::gamestudiohx::babylonhx::Scene_obj::__new(engine1->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >());		HX_STACK_VAR(scene,"scene");
				HX_STACK_LINE(662)
				scene->useDelayedTextureLoading = parsedData->__Field(HX_CSTRING("useDelayedTextureLoading"),true);
				HX_STACK_LINE(663)
				scene->autoClear = parsedData->__Field(HX_CSTRING("autoClear"),true);
				HX_STACK_LINE(664)
				::com::gamestudiohx::babylonhx::tools::math::Color4 _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					Array< Float > array = parsedData->__Field(HX_CSTRING("clearColor"),true);		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(664)
					int offset = (int)0;		HX_STACK_VAR(offset,"offset");
					HX_STACK_LINE(664)
					_g = ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)),array->__get((offset + (int)3)));
				}
				HX_STACK_LINE(664)
				scene->clearColor = _g;
				HX_STACK_LINE(665)
				::com::gamestudiohx::babylonhx::tools::math::Color3 _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(665)
				{
					HX_STACK_LINE(665)
					Array< Float > array = parsedData->__Field(HX_CSTRING("ambientColor"),true);		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(665)
					_g1 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(array->__get((int)0),array->__get((int)1),array->__get((int)2));
				}
				HX_STACK_LINE(665)
				scene->ambientColor = _g1;
				HX_STACK_LINE(666)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(666)
				{
					HX_STACK_LINE(666)
					Array< Float > array = parsedData->__Field(HX_CSTRING("gravity"),true);		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(666)
					int offset = (int)0;		HX_STACK_VAR(offset,"offset");
					HX_STACK_LINE(666)
					_g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
				}
				HX_STACK_LINE(666)
				scene->gravity = _g2;
				HX_STACK_LINE(669)
				Dynamic fogMode = parsedData->__Field(HX_CSTRING("fogMode"),true);		HX_STACK_VAR(fogMode,"fogMode");
				HX_STACK_LINE(670)
				if (((bool((fogMode != null())) && bool((fogMode != (int)0))))){
					HX_STACK_LINE(671)
					scene->fogMode = fogMode;
					HX_STACK_LINE(672)
					::com::gamestudiohx::babylonhx::tools::math::Color3 _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(672)
					{
						HX_STACK_LINE(672)
						Array< Float > array = parsedData->__Field(HX_CSTRING("fogColor"),true);		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(672)
						_g3 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(array->__get((int)0),array->__get((int)1),array->__get((int)2));
					}
					HX_STACK_LINE(672)
					scene->fogColor = _g3;
					HX_STACK_LINE(673)
					scene->fogStart = parsedData->__Field(HX_CSTRING("fogStart"),true);
					HX_STACK_LINE(674)
					scene->fogEnd = parsedData->__Field(HX_CSTRING("fogEnd"),true);
					HX_STACK_LINE(675)
					scene->fogDensity = parsedData->__Field(HX_CSTRING("fogDensity"),true);
				}
				HX_STACK_LINE(680)
				Dynamic _lights = parsedData->__Field(HX_CSTRING("lights"),true);		HX_STACK_VAR(_lights,"_lights");
				HX_STACK_LINE(681)
				{
					HX_STACK_LINE(681)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(681)
					int _g3 = _lights->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(681)
					while((true)){
						HX_STACK_LINE(681)
						if ((!(((_g11 < _g3))))){
							HX_STACK_LINE(681)
							break;
						}
						HX_STACK_LINE(681)
						int index = (_g11)++;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(682)
						Dynamic parsedLight = _lights->__GetItem(index);		HX_STACK_VAR(parsedLight,"parsedLight");
						HX_STACK_LINE(683)
						::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseLight(parsedLight,scene);
					}
				}
				HX_STACK_LINE(687)
				Dynamic _cameras = parsedData->__Field(HX_CSTRING("cameras"),true);		HX_STACK_VAR(_cameras,"_cameras");
				HX_STACK_LINE(688)
				{
					HX_STACK_LINE(688)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(688)
					int _g3 = _cameras->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(688)
					while((true)){
						HX_STACK_LINE(688)
						if ((!(((_g11 < _g3))))){
							HX_STACK_LINE(688)
							break;
						}
						HX_STACK_LINE(688)
						int index = (_g11)++;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(689)
						Dynamic parsedCamera = _cameras->__GetItem(index);		HX_STACK_VAR(parsedCamera,"parsedCamera");
						HX_STACK_LINE(690)
						::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseCamera(parsedCamera,scene);
					}
				}
				HX_STACK_LINE(693)
				if (((parsedData->__Field(HX_CSTRING("activeCameraID"),true) != null()))){
					HX_STACK_LINE(694)
					scene->activeCameraByID(parsedData->__Field(HX_CSTRING("activeCameraID"),true));
				}
				HX_STACK_LINE(698)
				if (((parsedData->__Field(HX_CSTRING("materials"),true) != null()))){
					HX_STACK_LINE(699)
					Dynamic _materials = parsedData->__Field(HX_CSTRING("materials"),true);		HX_STACK_VAR(_materials,"_materials");
					HX_STACK_LINE(700)
					{
						HX_STACK_LINE(700)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(700)
						int _g3 = _materials->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(700)
						while((true)){
							HX_STACK_LINE(700)
							if ((!(((_g11 < _g3))))){
								HX_STACK_LINE(700)
								break;
							}
							HX_STACK_LINE(700)
							int index = (_g11)++;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(701)
							Dynamic parsedMaterial = _materials->__GetItem(index);		HX_STACK_VAR(parsedMaterial,"parsedMaterial");
							HX_STACK_LINE(702)
							::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseMaterial(parsedMaterial,scene,rootUrl1->__get((int)0));
						}
					}
				}
				HX_STACK_LINE(706)
				if (((parsedData->__Field(HX_CSTRING("multiMaterials"),true) != null()))){
					HX_STACK_LINE(707)
					Dynamic _multiMaterials = parsedData->__Field(HX_CSTRING("multiMaterials"),true);		HX_STACK_VAR(_multiMaterials,"_multiMaterials");
					HX_STACK_LINE(708)
					{
						HX_STACK_LINE(708)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(708)
						int _g3 = _multiMaterials->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(708)
						while((true)){
							HX_STACK_LINE(708)
							if ((!(((_g11 < _g3))))){
								HX_STACK_LINE(708)
								break;
							}
							HX_STACK_LINE(708)
							int index = (_g11)++;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(709)
							Dynamic parsedMultiMaterial = parsedData->__Field(HX_CSTRING("multiMaterials"),true)->__GetItem(index);		HX_STACK_VAR(parsedMultiMaterial,"parsedMultiMaterial");
							HX_STACK_LINE(710)
							::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseMultiMaterial(parsedMultiMaterial,scene);
						}
					}
				}
				HX_STACK_LINE(715)
				if (((parsedData->__Field(HX_CSTRING("skeletons"),true) != null()))){
					HX_STACK_LINE(716)
					Dynamic _skeletons = parsedData->__Field(HX_CSTRING("skeletons"),true);		HX_STACK_VAR(_skeletons,"_skeletons");
					HX_STACK_LINE(717)
					{
						HX_STACK_LINE(717)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(717)
						int _g3 = _skeletons->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(717)
						while((true)){
							HX_STACK_LINE(717)
							if ((!(((_g11 < _g3))))){
								HX_STACK_LINE(717)
								break;
							}
							HX_STACK_LINE(717)
							int index = (_g11)++;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(718)
							Dynamic parsedSkeleton = parsedData->__Field(HX_CSTRING("skeletons"),true)->__GetItem(index);		HX_STACK_VAR(parsedSkeleton,"parsedSkeleton");
							HX_STACK_LINE(719)
							::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseSkeleton(parsedSkeleton,scene);
						}
					}
				}
				HX_STACK_LINE(724)
				Dynamic _meshes = parsedData->__Field(HX_CSTRING("meshes"),true);		HX_STACK_VAR(_meshes,"_meshes");
				HX_STACK_LINE(725)
				{
					HX_STACK_LINE(725)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(725)
					int _g3 = _meshes->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(725)
					while((true)){
						HX_STACK_LINE(725)
						if ((!(((_g11 < _g3))))){
							HX_STACK_LINE(725)
							break;
						}
						HX_STACK_LINE(725)
						int index = (_g11)++;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(726)
						Dynamic parsedMesh = _meshes->__GetItem(index);		HX_STACK_VAR(parsedMesh,"parsedMesh");
						HX_STACK_LINE(727)
						::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseMesh(parsedMesh,scene,rootUrl1->__get((int)0));
					}
				}
				HX_STACK_LINE(731)
				{
					HX_STACK_LINE(731)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(731)
					int _g3 = scene->cameras->length;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(731)
					while((true)){
						HX_STACK_LINE(731)
						if ((!(((_g11 < _g3))))){
							HX_STACK_LINE(731)
							break;
						}
						HX_STACK_LINE(731)
						int index = (_g11)++;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(732)
						::com::gamestudiohx::babylonhx::cameras::Camera camera = scene->cameras->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::cameras::Camera >();		HX_STACK_VAR(camera,"camera");
						HX_STACK_LINE(733)
						Dynamic _g4 = ::Reflect_obj::field(camera,HX_CSTRING("_waitingParentId"));		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(733)
						if (((_g4 != null()))){
							HX_STACK_LINE(734)
							Dynamic _g5 = ::Reflect_obj::field(camera,HX_CSTRING("_waitingParentId"));		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(734)
							Dynamic _g6 = scene->getLastEntryByID(_g5);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(734)
							camera->parent = _g6;
							HX_STACK_LINE(735)
							if (((camera != null()))){
								HX_STACK_LINE(735)
								camera->__SetField(HX_CSTRING("_waitingParentId"),null(),false);
							}
						}
						HX_STACK_LINE(738)
						Dynamic _g7 = ::Reflect_obj::field(camera,HX_CSTRING("_waitingLockedTargetId"));		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(738)
						if (((_g7 != null()))){
							HX_STACK_LINE(739)
							{
								HX_STACK_LINE(739)
								Dynamic _g8 = ::Reflect_obj::field(camera,HX_CSTRING("_waitingLockedTargetId"));		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(739)
								Dynamic value = scene->getLastEntryByID(_g8);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(739)
								if (((camera != null()))){
									HX_STACK_LINE(739)
									camera->__SetField(HX_CSTRING("lockedTarget"),value,false);
								}
							}
							HX_STACK_LINE(740)
							if (((camera != null()))){
								HX_STACK_LINE(740)
								camera->__SetField(HX_CSTRING("_waitingLockedTargetId"),null(),false);
							}
						}
					}
				}
				HX_STACK_LINE(745)
				if (((parsedData->__Field(HX_CSTRING("particleSystems"),true) != null()))){
					HX_STACK_LINE(746)
					Dynamic _particleSystems = parsedData->__Field(HX_CSTRING("particleSystems"),true);		HX_STACK_VAR(_particleSystems,"_particleSystems");
					HX_STACK_LINE(747)
					{
						HX_STACK_LINE(747)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(747)
						int _g3 = _particleSystems->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(747)
						while((true)){
							HX_STACK_LINE(747)
							if ((!(((_g11 < _g3))))){
								HX_STACK_LINE(747)
								break;
							}
							HX_STACK_LINE(747)
							int index = (_g11)++;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(748)
							Dynamic parsedParticleSystem = _particleSystems->__GetItem(index);		HX_STACK_VAR(parsedParticleSystem,"parsedParticleSystem");
							HX_STACK_LINE(749)
							::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseParticleSystem(parsedParticleSystem,scene,rootUrl1->__get((int)0));
						}
					}
				}
				HX_STACK_LINE(754)
				if (((parsedData->__Field(HX_CSTRING("lensFlareSystems"),true) != null()))){
					HX_STACK_LINE(755)
					Dynamic _lensFlareSystems = parsedData->__Field(HX_CSTRING("lensFlareSystems"),true);		HX_STACK_VAR(_lensFlareSystems,"_lensFlareSystems");
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(756)
						int _g3 = _lensFlareSystems->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(756)
						while((true)){
							HX_STACK_LINE(756)
							if ((!(((_g11 < _g3))))){
								HX_STACK_LINE(756)
								break;
							}
							HX_STACK_LINE(756)
							int index = (_g11)++;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(757)
							Dynamic parsedLensFlareSystem = _lensFlareSystems->__GetItem(index);		HX_STACK_VAR(parsedLensFlareSystem,"parsedLensFlareSystem");
							HX_STACK_LINE(758)
							::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseLensFlareSystem(parsedLensFlareSystem,scene,rootUrl1->__get((int)0));
						}
					}
				}
				HX_STACK_LINE(763)
				if (((parsedData->__Field(HX_CSTRING("shadowGenerators"),true) != null()))){
					HX_STACK_LINE(764)
					Dynamic _shadowGenerators = parsedData->__Field(HX_CSTRING("shadowGenerators"),true);		HX_STACK_VAR(_shadowGenerators,"_shadowGenerators");
					HX_STACK_LINE(765)
					{
						HX_STACK_LINE(765)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(765)
						int _g3 = _shadowGenerators->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(765)
						while((true)){
							HX_STACK_LINE(765)
							if ((!(((_g11 < _g3))))){
								HX_STACK_LINE(765)
								break;
							}
							HX_STACK_LINE(765)
							int index = (_g11)++;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(766)
							Dynamic parsedShadowGenerator = _shadowGenerators->__GetItem(index);		HX_STACK_VAR(parsedShadowGenerator,"parsedShadowGenerator");
							HX_STACK_LINE(767)
							::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::parseShadowGenerator(parsedShadowGenerator,scene);
						}
					}
				}
				HX_STACK_LINE(772)
				if (((then1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(773)
					then1->__GetItem((int)0)(scene).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(655)
		Dynamic loadSceneFromData =  Dynamic(new _Function_1_1(engine1,rootUrl1,then1));		HX_STACK_VAR(loadSceneFromData,"loadSceneFromData");
		HX_STACK_LINE(777)
		::com::gamestudiohx::babylonhx::tools::Tools_obj::LoadFile((rootUrl1->__get((int)0) + sceneFilename),loadSceneFromData,null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(SceneLoader_obj,Load,(void))


SceneLoader_obj::SceneLoader_obj()
{
}

Dynamic SceneLoader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Load") ) { return Load_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseMesh") ) { return parseMesh_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parseLight") ) { return parseLight_dyn(); }
		if (HX_FIELD_EQ(inName,"ImportMesh") ) { return ImportMesh_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadTexture") ) { return loadTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"parseCamera") ) { return parseCamera_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parseSkeleton") ) { return parseSkeleton_dyn(); }
		if (HX_FIELD_EQ(inName,"parseMaterial") ) { return parseMaterial_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parseAnimation") ) { return parseAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"isDescendantOf") ) { return isDescendantOf_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadCubeTexture") ) { return loadCubeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"_ImportGeometry") ) { return _ImportGeometry_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"parseMaterialById") ) { return parseMaterialById_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"parseMultiMaterial") ) { return parseMultiMaterial_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"parseParticleSystem") ) { return parseParticleSystem_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"parseLensFlareSystem") ) { return parseLensFlareSystem_dyn(); }
		if (HX_FIELD_EQ(inName,"parseShadowGenerator") ) { return parseShadowGenerator_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SceneLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SceneLoader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("loadCubeTexture"),
	HX_CSTRING("loadTexture"),
	HX_CSTRING("parseSkeleton"),
	HX_CSTRING("parseMaterial"),
	HX_CSTRING("parseMaterialById"),
	HX_CSTRING("parseMultiMaterial"),
	HX_CSTRING("parseLensFlareSystem"),
	HX_CSTRING("parseParticleSystem"),
	HX_CSTRING("parseShadowGenerator"),
	HX_CSTRING("parseAnimation"),
	HX_CSTRING("parseLight"),
	HX_CSTRING("parseCamera"),
	HX_CSTRING("parseMesh"),
	HX_CSTRING("isDescendantOf"),
	HX_CSTRING("_ImportGeometry"),
	HX_CSTRING("ImportMesh"),
	HX_CSTRING("Load"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SceneLoader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SceneLoader_obj::__mClass,"__mClass");
};

#endif

Class SceneLoader_obj::__mClass;

void SceneLoader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.tools.SceneLoader"), hx::TCanCast< SceneLoader_obj> ,sStaticFields,sMemberFields,
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

void SceneLoader_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
