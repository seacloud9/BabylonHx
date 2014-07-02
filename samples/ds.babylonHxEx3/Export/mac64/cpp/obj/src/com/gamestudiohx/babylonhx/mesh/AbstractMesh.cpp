#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_bones_Skeleton
#include <com/gamestudiohx/babylonhx/bones/Skeleton.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_Camera
#include <com/gamestudiohx/babylonhx/cameras/Camera.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_collisions_Collider
#include <com/gamestudiohx/babylonhx/collisions/Collider.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_collisions_PickingInfo
#include <com/gamestudiohx/babylonhx/collisions/PickingInfo.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingBox
#include <com/gamestudiohx/babylonhx/culling/BoundingBox.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingInfo
#include <com/gamestudiohx/babylonhx/culling/BoundingInfo.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingSphere
#include <com/gamestudiohx/babylonhx/culling/BoundingSphere.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Effect
#include <com/gamestudiohx/babylonhx/materials/Effect.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_BabylonGLBuffer
#include <com/gamestudiohx/babylonhx/mesh/BabylonGLBuffer.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Plane
#include <com/gamestudiohx/babylonhx/tools/math/Plane.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Quaternion
#include <com/gamestudiohx/babylonhx/tools/math/Quaternion.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Ray
#include <com/gamestudiohx/babylonhx/tools/math/Ray.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{

Void AbstractMesh_obj::__construct(::String name,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","new",0x53106bb0,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.new","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",132,0x2cff64c0)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(133)
	super::__construct(scene);
	HX_STACK_LINE(135)
	this->name = name;
	HX_STACK_LINE(136)
	this->id = name;
	HX_STACK_LINE(137)
	this->_scene = scene;
	HX_STACK_LINE(139)
	this->_totalVertices = (int)0;
	HX_STACK_LINE(140)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(140)
		result->m[(int)0] = 1.0;
		HX_STACK_LINE(140)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(140)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(140)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(140)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(140)
		result->m[(int)5] = 1.0;
		HX_STACK_LINE(140)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(140)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(140)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(140)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(140)
		result->m[(int)10] = 1.0;
		HX_STACK_LINE(140)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(140)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(140)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(140)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(140)
		result->m[(int)15] = 1.0;
		HX_STACK_LINE(140)
		_g = result;
	}
	HX_STACK_LINE(140)
	this->_worldMatrix = _g;
	HX_STACK_LINE(142)
	scene->meshes->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(144)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(144)
	this->position = _g1;
	HX_STACK_LINE(145)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(145)
	this->rotation = _g2;
	HX_STACK_LINE(146)
	this->rotationQuaternion = null();
	HX_STACK_LINE(147)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)1,(int)1,(int)1);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(147)
	this->scaling = _g3;
	HX_STACK_LINE(149)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(149)
	{
		HX_STACK_LINE(149)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(149)
		result->m[(int)0] = 1.0;
		HX_STACK_LINE(149)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(149)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(149)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(149)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(149)
		result->m[(int)5] = 1.0;
		HX_STACK_LINE(149)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(149)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(149)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(149)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(149)
		result->m[(int)10] = 1.0;
		HX_STACK_LINE(149)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(149)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(149)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(149)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(149)
		result->m[(int)15] = 1.0;
		HX_STACK_LINE(149)
		_g4 = result;
	}
	HX_STACK_LINE(149)
	this->_pivotMatrix = _g4;
	HX_STACK_LINE(151)
	Array< int > _g5 = Array_obj< int >::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(151)
	this->_indices = _g5;
	HX_STACK_LINE(152)
	Array< ::Dynamic > _g6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(152)
	this->subMeshes = _g6;
	HX_STACK_LINE(154)
	this->_renderId = (int)0;
	HX_STACK_LINE(159)
	Array< ::Dynamic > _g7 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(159)
	this->animations = _g7;
	HX_STACK_LINE(162)
	this->_positions = null();
	HX_STACK_LINE(165)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g8 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(166)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g9 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(167)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g10 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(168)
	::com::gamestudiohx::babylonhx::tools::math::Quaternion _g11 = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(_g11,"_g11");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Quaternion &_g11,::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g8,::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g10,::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g9){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",163,0x2cff64c0)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("localMatrixUpdated") , false,false);
				__result->Add(HX_CSTRING("position") , _g8,false);
				__result->Add(HX_CSTRING("scaling") , _g9,false);
				__result->Add(HX_CSTRING("rotation") , _g10,false);
				__result->Add(HX_CSTRING("rotationQuaternion") , _g11,false);
				__result->Add(HX_CSTRING("pivotMatrixUpdated") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(163)
	Dynamic _g12 = _Function_1_1::Block(_g11,_g8,_g10,_g9);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(163)
	this->_cache = _g12;
	HX_STACK_LINE(173)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g13;		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(173)
	{
		HX_STACK_LINE(173)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(173)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(173)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(173)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(173)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(173)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(173)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(173)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(173)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(173)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(173)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(173)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(173)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(173)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(173)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(173)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(173)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(173)
		_g13 = result;
	}
	HX_STACK_LINE(173)
	this->_localScaling = _g13;
	HX_STACK_LINE(174)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g14;		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(174)
	{
		HX_STACK_LINE(174)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(174)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(174)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(174)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(174)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(174)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(174)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(174)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(174)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(174)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(174)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(174)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(174)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(174)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(174)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(174)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(174)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(174)
		_g14 = result;
	}
	HX_STACK_LINE(174)
	this->_localRotation = _g14;
	HX_STACK_LINE(175)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g15;		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(175)
	{
		HX_STACK_LINE(175)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(175)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(175)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(175)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(175)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(175)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(175)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(175)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(175)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(175)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(175)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(175)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(175)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(175)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(175)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(175)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(175)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(175)
		_g15 = result;
	}
	HX_STACK_LINE(175)
	this->_localTranslation = _g15;
	HX_STACK_LINE(176)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g16;		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(176)
	{
		HX_STACK_LINE(176)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(176)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(176)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(176)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(176)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(176)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(176)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(176)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(176)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(176)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(176)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(176)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(176)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(176)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(176)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(176)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(176)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(176)
		_g16 = result;
	}
	HX_STACK_LINE(176)
	this->_localBillboard = _g16;
	HX_STACK_LINE(177)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g17;		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(177)
	{
		HX_STACK_LINE(177)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(177)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(177)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(177)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(177)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(177)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(177)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(177)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(177)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(177)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(177)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(177)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(177)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(177)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(177)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(177)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(177)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(177)
		_g17 = result;
	}
	HX_STACK_LINE(177)
	this->_localPivotScaling = _g17;
	HX_STACK_LINE(178)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g18;		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(178)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(178)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(178)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(178)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(178)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(178)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(178)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(178)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(178)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(178)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(178)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(178)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(178)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(178)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(178)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(178)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(178)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(178)
		_g18 = result;
	}
	HX_STACK_LINE(178)
	this->_localPivotScalingRotation = _g18;
	HX_STACK_LINE(179)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g19;		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(179)
	{
		HX_STACK_LINE(179)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(179)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(179)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(179)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(179)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(179)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(179)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(179)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(179)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(179)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(179)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(179)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(179)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(179)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(179)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(179)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(179)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(179)
		_g19 = result;
	}
	HX_STACK_LINE(179)
	this->_localWorld = _g19;
	HX_STACK_LINE(180)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g20;		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(180)
	{
		HX_STACK_LINE(180)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(180)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(180)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(180)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(180)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(180)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(180)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(180)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(180)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(180)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(180)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(180)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(180)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(180)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(180)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(180)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(180)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(180)
		_g20 = result;
	}
	HX_STACK_LINE(180)
	this->_worldMatrix = _g20;
	HX_STACK_LINE(181)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g21;		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(181)
	{
		HX_STACK_LINE(181)
		Float angle = ::Math_obj::PI;		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(181)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			Float s = ::Math_obj::sin(angle);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(181)
			Float c = ::Math_obj::cos(angle);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(181)
			result->m[(int)5] = 1.0;
			HX_STACK_LINE(181)
			result->m[(int)15] = 1.0;
			HX_STACK_LINE(181)
			result->m[(int)0] = c;
			HX_STACK_LINE(181)
			result->m[(int)2] = -(s);
			HX_STACK_LINE(181)
			result->m[(int)8] = s;
			HX_STACK_LINE(181)
			result->m[(int)10] = c;
			HX_STACK_LINE(181)
			result->m[(int)1] = (int)0;
			HX_STACK_LINE(181)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(181)
			result->m[(int)4] = (int)0;
			HX_STACK_LINE(181)
			result->m[(int)6] = (int)0;
			HX_STACK_LINE(181)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(181)
			result->m[(int)9] = (int)0;
			HX_STACK_LINE(181)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(181)
			result->m[(int)12] = (int)0;
			HX_STACK_LINE(181)
			result->m[(int)13] = (int)0;
			HX_STACK_LINE(181)
			result->m[(int)14] = (int)0;
			HX_STACK_LINE(181)
			result;
		}
		HX_STACK_LINE(181)
		_g21 = result;
	}
	HX_STACK_LINE(181)
	this->_rotateYByPI = _g21;
	HX_STACK_LINE(183)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g22;		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(183)
	{
		HX_STACK_LINE(183)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(183)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(183)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(183)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(183)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(183)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(183)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(183)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(183)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(183)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(183)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(183)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(183)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(183)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(183)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(183)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(183)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(183)
		_g22 = result;
	}
	HX_STACK_LINE(183)
	this->_collisionsTransformMatrix = _g22;
	HX_STACK_LINE(184)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g23;		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(184)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(184)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(184)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(184)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(184)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(184)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(184)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(184)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(184)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(184)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(184)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(184)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(184)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(184)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(184)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(184)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(184)
		_g23 = result;
	}
	HX_STACK_LINE(184)
	this->_collisionsScalingMatrix = _g23;
	HX_STACK_LINE(186)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g24 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(186)
	this->_absolutePosition = _g24;
	HX_STACK_LINE(189)
	this->material = null();
	HX_STACK_LINE(190)
	this->isVisible = true;
	HX_STACK_LINE(191)
	this->isPickable = true;
	HX_STACK_LINE(192)
	this->visibility = 1.0;
	HX_STACK_LINE(193)
	this->billboardMode = ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE;
	HX_STACK_LINE(194)
	this->checkCollisions = false;
	HX_STACK_LINE(195)
	this->receiveShadows = false;
	HX_STACK_LINE(197)
	this->_isDisposed = false;
	HX_STACK_LINE(198)
	this->onDispose = null();
	HX_STACK_LINE(200)
	this->skeleton = null();
	HX_STACK_LINE(202)
	this->renderingGroupId = (int)0;
	HX_STACK_LINE(204)
	this->infiniteDistance = false;
}
;
	return null();
}

//AbstractMesh_obj::~AbstractMesh_obj() { }

Dynamic AbstractMesh_obj::__CreateEmpty() { return  new AbstractMesh_obj; }
hx::ObjectPtr< AbstractMesh_obj > AbstractMesh_obj::__new(::String name,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< AbstractMesh_obj > result = new AbstractMesh_obj();
	result->__construct(name,scene);
	return result;}

Dynamic AbstractMesh_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AbstractMesh_obj > result = new AbstractMesh_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String AbstractMesh_obj::get_parentId( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","get_parentId",0x25a0925e,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.get_parentId","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",124,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(125)
	if (((this->parent != null()))){
		HX_STACK_LINE(126)
		return this->parent->id;
	}
	HX_STACK_LINE(128)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,get_parentId,return )

Void AbstractMesh_obj::_resetPointsArrayCache( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","_resetPointsArrayCache",0x065135cc,"com.gamestudiohx.babylonhx.mesh.AbstractMesh._resetPointsArrayCache","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",208,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(208)
		this->_positions = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,_resetPointsArrayCache,(void))

bool AbstractMesh_obj::_generatePointsArray( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","_generatePointsArray",0x2fe438f2,"com.gamestudiohx.babylonhx.mesh.AbstractMesh._generatePointsArray","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",212,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,_generatePointsArray,return )

Void AbstractMesh_obj::_collideForSubMesh( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,::com::gamestudiohx::babylonhx::tools::math::Matrix transformMatrix,::com::gamestudiohx::babylonhx::collisions::Collider collider){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","_collideForSubMesh",0xe2e7a413,"com.gamestudiohx.babylonhx.mesh.AbstractMesh._collideForSubMesh","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",230,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(subMesh,"subMesh")
		HX_STACK_ARG(transformMatrix,"transformMatrix")
		HX_STACK_ARG(collider,"collider")
		HX_STACK_LINE(231)
		this->_generatePointsArray();
		struct _Function_1_1{
			inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::SubMesh &subMesh,::com::gamestudiohx::babylonhx::tools::math::Matrix &transformMatrix){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",233,0x2cff64c0)
				{
					HX_STACK_LINE(233)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = subMesh->_lastColliderTransformMatrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(233)
					return (bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((_this->m->__get((int)0) == transformMatrix->m->__get((int)0))) && bool((_this->m->__get((int)1) == transformMatrix->m->__get((int)1))))) && bool((_this->m->__get((int)2) == transformMatrix->m->__get((int)2))))) && bool((_this->m->__get((int)3) == transformMatrix->m->__get((int)3))))) && bool((_this->m->__get((int)4) == transformMatrix->m->__get((int)4))))) && bool((_this->m->__get((int)5) == transformMatrix->m->__get((int)5))))) && bool((_this->m->__get((int)6) == transformMatrix->m->__get((int)6))))) && bool((_this->m->__get((int)7) == transformMatrix->m->__get((int)7))))) && bool((_this->m->__get((int)8) == transformMatrix->m->__get((int)8))))) && bool((_this->m->__get((int)9) == transformMatrix->m->__get((int)9))))) && bool((_this->m->__get((int)10) == transformMatrix->m->__get((int)10))))) && bool((_this->m->__get((int)11) == transformMatrix->m->__get((int)11))))) && bool((_this->m->__get((int)12) == transformMatrix->m->__get((int)12))))) && bool((_this->m->__get((int)13) == transformMatrix->m->__get((int)13))))) && bool((_this->m->__get((int)14) == transformMatrix->m->__get((int)14))))) && bool((_this->m->__get((int)15) == transformMatrix->m->__get((int)15))));
				}
				return null();
			}
		};
		HX_STACK_LINE(233)
		if (((bool((subMesh->_lastColliderWorldVertices == null())) || bool(!(_Function_1_1::Block(subMesh,transformMatrix)))))){
			HX_STACK_LINE(234)
			subMesh->_lastColliderTransformMatrix = transformMatrix;
			HX_STACK_LINE(235)
			subMesh->_lastColliderWorldVertices = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(236)
			int start = subMesh->verticesStart;		HX_STACK_VAR(start,"start");
			HX_STACK_LINE(237)
			int end = (subMesh->verticesStart + subMesh->verticesCount);		HX_STACK_VAR(end,"end");
			HX_STACK_LINE(238)
			{
				HX_STACK_LINE(238)
				int _g = start;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(238)
				while((true)){
					HX_STACK_LINE(238)
					if ((!(((_g < end))))){
						HX_STACK_LINE(238)
						break;
					}
					HX_STACK_LINE(238)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(239)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(239)
					{
						HX_STACK_LINE(239)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->_positions->__get(i).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(vector,"vector");
						HX_STACK_LINE(239)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(239)
						{
							HX_STACK_LINE(239)
							Float x = ((((vector->x * transformMatrix->m->__get((int)0)) + (vector->y * transformMatrix->m->__get((int)4))) + (vector->z * transformMatrix->m->__get((int)8))) + transformMatrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(239)
							Float y = ((((vector->x * transformMatrix->m->__get((int)1)) + (vector->y * transformMatrix->m->__get((int)5))) + (vector->z * transformMatrix->m->__get((int)9))) + transformMatrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(239)
							Float z = ((((vector->x * transformMatrix->m->__get((int)2)) + (vector->y * transformMatrix->m->__get((int)6))) + (vector->z * transformMatrix->m->__get((int)10))) + transformMatrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(239)
							Float w = ((((vector->x * transformMatrix->m->__get((int)3)) + (vector->y * transformMatrix->m->__get((int)7))) + (vector->z * transformMatrix->m->__get((int)11))) + transformMatrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
							HX_STACK_LINE(239)
							result->x = (Float(x) / Float(w));
							HX_STACK_LINE(239)
							result->y = (Float(y) / Float(w));
							HX_STACK_LINE(239)
							result->z = (Float(z) / Float(w));
						}
						HX_STACK_LINE(239)
						_g1 = result;
					}
					HX_STACK_LINE(239)
					subMesh->_lastColliderWorldVertices->push(_g1);
				}
			}
		}
		HX_STACK_LINE(243)
		{
			HX_STACK_LINE(243)
			Array< ::Dynamic > pts = subMesh->_lastColliderWorldVertices;		HX_STACK_VAR(pts,"pts");
			HX_STACK_LINE(243)
			Array< int > indices = this->_indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(243)
			int decal = subMesh->verticesStart;		HX_STACK_VAR(decal,"decal");
			HX_STACK_LINE(243)
			int i = subMesh->indexStart;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(243)
			while((true)){
				HX_STACK_LINE(243)
				if ((!(((i < (subMesh->indexStart + subMesh->indexCount)))))){
					HX_STACK_LINE(243)
					break;
				}
				HX_STACK_LINE(243)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 p1 = pts->__get((indices->__get(i) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(243)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 p2 = pts->__get((indices->__get((i + (int)1)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p2,"p2");
				HX_STACK_LINE(243)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 p3 = pts->__get((indices->__get((i + (int)2)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p3,"p3");
				HX_STACK_LINE(243)
				collider->_testTriangle(i,subMesh,p3,p2,p1);
				HX_STACK_LINE(243)
				hx::AddEq(i,(int)3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AbstractMesh_obj,_collideForSubMesh,(void))

Void AbstractMesh_obj::_processCollisionsForSubModels( ::com::gamestudiohx::babylonhx::collisions::Collider collider,::com::gamestudiohx::babylonhx::tools::math::Matrix transformMatrix){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","_processCollisionsForSubModels",0xc367ee22,"com.gamestudiohx.babylonhx.mesh.AbstractMesh._processCollisionsForSubModels","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",247,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(collider,"collider")
		HX_STACK_ARG(transformMatrix,"transformMatrix")
		HX_STACK_LINE(247)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(247)
		int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(247)
		while((true)){
			HX_STACK_LINE(247)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(247)
				break;
			}
			HX_STACK_LINE(247)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(248)
			::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
			HX_STACK_LINE(251)
			if (((  (((this->subMeshes->length > (int)1))) ? bool(!(subMesh->_boundingInfo->_checkCollision(collider))) : bool(false) ))){
				HX_STACK_LINE(252)
				continue;
			}
			HX_STACK_LINE(254)
			{
				HX_STACK_LINE(254)
				this->_generatePointsArray();
				struct _Function_3_1{
					inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::SubMesh &subMesh,::com::gamestudiohx::babylonhx::tools::math::Matrix &transformMatrix){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",254,0x2cff64c0)
						{
							HX_STACK_LINE(254)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = subMesh->_lastColliderTransformMatrix;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(254)
							return (bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((_this->m->__get((int)0) == transformMatrix->m->__get((int)0))) && bool((_this->m->__get((int)1) == transformMatrix->m->__get((int)1))))) && bool((_this->m->__get((int)2) == transformMatrix->m->__get((int)2))))) && bool((_this->m->__get((int)3) == transformMatrix->m->__get((int)3))))) && bool((_this->m->__get((int)4) == transformMatrix->m->__get((int)4))))) && bool((_this->m->__get((int)5) == transformMatrix->m->__get((int)5))))) && bool((_this->m->__get((int)6) == transformMatrix->m->__get((int)6))))) && bool((_this->m->__get((int)7) == transformMatrix->m->__get((int)7))))) && bool((_this->m->__get((int)8) == transformMatrix->m->__get((int)8))))) && bool((_this->m->__get((int)9) == transformMatrix->m->__get((int)9))))) && bool((_this->m->__get((int)10) == transformMatrix->m->__get((int)10))))) && bool((_this->m->__get((int)11) == transformMatrix->m->__get((int)11))))) && bool((_this->m->__get((int)12) == transformMatrix->m->__get((int)12))))) && bool((_this->m->__get((int)13) == transformMatrix->m->__get((int)13))))) && bool((_this->m->__get((int)14) == transformMatrix->m->__get((int)14))))) && bool((_this->m->__get((int)15) == transformMatrix->m->__get((int)15))));
						}
						return null();
					}
				};
				HX_STACK_LINE(254)
				if (((bool((subMesh->_lastColliderWorldVertices == null())) || bool(!(_Function_3_1::Block(subMesh,transformMatrix)))))){
					HX_STACK_LINE(254)
					subMesh->_lastColliderTransformMatrix = transformMatrix;
					HX_STACK_LINE(254)
					subMesh->_lastColliderWorldVertices = Array_obj< ::Dynamic >::__new();
					HX_STACK_LINE(254)
					int start = subMesh->verticesStart;		HX_STACK_VAR(start,"start");
					HX_STACK_LINE(254)
					int end = (subMesh->verticesStart + subMesh->verticesCount);		HX_STACK_VAR(end,"end");
					HX_STACK_LINE(254)
					{
						HX_STACK_LINE(254)
						int _g2 = start;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(254)
						while((true)){
							HX_STACK_LINE(254)
							if ((!(((_g2 < end))))){
								HX_STACK_LINE(254)
								break;
							}
							HX_STACK_LINE(254)
							int i = (_g2)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(254)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(254)
							{
								HX_STACK_LINE(254)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->_positions->__get(i).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(vector,"vector");
								HX_STACK_LINE(254)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(254)
								{
									HX_STACK_LINE(254)
									Float x = ((((vector->x * transformMatrix->m->__get((int)0)) + (vector->y * transformMatrix->m->__get((int)4))) + (vector->z * transformMatrix->m->__get((int)8))) + transformMatrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(254)
									Float y = ((((vector->x * transformMatrix->m->__get((int)1)) + (vector->y * transformMatrix->m->__get((int)5))) + (vector->z * transformMatrix->m->__get((int)9))) + transformMatrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(254)
									Float z = ((((vector->x * transformMatrix->m->__get((int)2)) + (vector->y * transformMatrix->m->__get((int)6))) + (vector->z * transformMatrix->m->__get((int)10))) + transformMatrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
									HX_STACK_LINE(254)
									Float w = ((((vector->x * transformMatrix->m->__get((int)3)) + (vector->y * transformMatrix->m->__get((int)7))) + (vector->z * transformMatrix->m->__get((int)11))) + transformMatrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
									HX_STACK_LINE(254)
									result->x = (Float(x) / Float(w));
									HX_STACK_LINE(254)
									result->y = (Float(y) / Float(w));
									HX_STACK_LINE(254)
									result->z = (Float(z) / Float(w));
								}
								HX_STACK_LINE(254)
								_g3 = result;
							}
							HX_STACK_LINE(254)
							subMesh->_lastColliderWorldVertices->push(_g3);
						}
					}
				}
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					Array< ::Dynamic > pts = subMesh->_lastColliderWorldVertices;		HX_STACK_VAR(pts,"pts");
					HX_STACK_LINE(254)
					Array< int > indices = this->_indices;		HX_STACK_VAR(indices,"indices");
					HX_STACK_LINE(254)
					int decal = subMesh->verticesStart;		HX_STACK_VAR(decal,"decal");
					HX_STACK_LINE(254)
					int i = subMesh->indexStart;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(254)
					while((true)){
						HX_STACK_LINE(254)
						if ((!(((i < (subMesh->indexStart + subMesh->indexCount)))))){
							HX_STACK_LINE(254)
							break;
						}
						HX_STACK_LINE(254)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 p1 = pts->__get((indices->__get(i) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p1,"p1");
						HX_STACK_LINE(254)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 p2 = pts->__get((indices->__get((i + (int)1)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p2,"p2");
						HX_STACK_LINE(254)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 p3 = pts->__get((indices->__get((i + (int)2)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p3,"p3");
						HX_STACK_LINE(254)
						collider->_testTriangle(i,subMesh,p3,p2,p1);
						HX_STACK_LINE(254)
						hx::AddEq(i,(int)3);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AbstractMesh_obj,_processCollisionsForSubModels,(void))

Void AbstractMesh_obj::_checkCollision( ::com::gamestudiohx::babylonhx::collisions::Collider collider){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","_checkCollision",0x60323279,"com.gamestudiohx.babylonhx.mesh.AbstractMesh._checkCollision","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",260,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(collider,"collider")
		HX_STACK_LINE(260)
		if ((this->_boundingInfo->_checkCollision(collider))){
			HX_STACK_LINE(262)
			{
				HX_STACK_LINE(262)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_collisionsScalingMatrix;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(262)
				result->m[(int)0] = (Float(1.0) / Float(collider->radius->x));
				HX_STACK_LINE(262)
				result->m[(int)1] = (int)0;
				HX_STACK_LINE(262)
				result->m[(int)2] = (int)0;
				HX_STACK_LINE(262)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(262)
				result->m[(int)4] = (int)0;
				HX_STACK_LINE(262)
				result->m[(int)5] = (Float(1.0) / Float(collider->radius->y));
				HX_STACK_LINE(262)
				result->m[(int)6] = (int)0;
				HX_STACK_LINE(262)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(262)
				result->m[(int)8] = (int)0;
				HX_STACK_LINE(262)
				result->m[(int)9] = (int)0;
				HX_STACK_LINE(262)
				result->m[(int)10] = (Float(1.0) / Float(collider->radius->z));
				HX_STACK_LINE(262)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(262)
				result->m[(int)12] = (int)0;
				HX_STACK_LINE(262)
				result->m[(int)13] = (int)0;
				HX_STACK_LINE(262)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(262)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(262)
				result;
			}
			HX_STACK_LINE(263)
			{
				HX_STACK_LINE(263)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_worldMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(263)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_collisionsScalingMatrix;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(263)
				{
					HX_STACK_LINE(263)
					Array< Float > result = this->_collisionsTransformMatrix->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(263)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(263)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(263)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(263)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(263)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(263)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(263)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(263)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(263)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(263)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(263)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(263)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(263)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(263)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(263)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(263)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(263)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(263)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(263)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(263)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(263)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(263)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(263)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(263)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(263)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(263)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(263)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(263)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(263)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(263)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(263)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(263)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(263)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(263)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(263)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(263)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(263)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(263)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(263)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(263)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(263)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(263)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(263)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(263)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(263)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(263)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(263)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(263)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(263)
					result;
				}
			}
			HX_STACK_LINE(265)
			{
				HX_STACK_LINE(265)
				::com::gamestudiohx::babylonhx::tools::math::Matrix transformMatrix = this->_collisionsTransformMatrix;		HX_STACK_VAR(transformMatrix,"transformMatrix");
				HX_STACK_LINE(265)
				{
					HX_STACK_LINE(265)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(265)
					int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(265)
					while((true)){
						HX_STACK_LINE(265)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(265)
							break;
						}
						HX_STACK_LINE(265)
						int index = (_g1)++;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(265)
						::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
						HX_STACK_LINE(265)
						if (((  (((this->subMeshes->length > (int)1))) ? bool(!(subMesh->_boundingInfo->_checkCollision(collider))) : bool(false) ))){
							HX_STACK_LINE(265)
							continue;
						}
						HX_STACK_LINE(265)
						{
							HX_STACK_LINE(265)
							this->_generatePointsArray();
							struct _Function_6_1{
								inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::SubMesh &subMesh,::com::gamestudiohx::babylonhx::tools::math::Matrix &transformMatrix){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",265,0x2cff64c0)
									{
										HX_STACK_LINE(265)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = subMesh->_lastColliderTransformMatrix;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(265)
										return (bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((_this->m->__get((int)0) == transformMatrix->m->__get((int)0))) && bool((_this->m->__get((int)1) == transformMatrix->m->__get((int)1))))) && bool((_this->m->__get((int)2) == transformMatrix->m->__get((int)2))))) && bool((_this->m->__get((int)3) == transformMatrix->m->__get((int)3))))) && bool((_this->m->__get((int)4) == transformMatrix->m->__get((int)4))))) && bool((_this->m->__get((int)5) == transformMatrix->m->__get((int)5))))) && bool((_this->m->__get((int)6) == transformMatrix->m->__get((int)6))))) && bool((_this->m->__get((int)7) == transformMatrix->m->__get((int)7))))) && bool((_this->m->__get((int)8) == transformMatrix->m->__get((int)8))))) && bool((_this->m->__get((int)9) == transformMatrix->m->__get((int)9))))) && bool((_this->m->__get((int)10) == transformMatrix->m->__get((int)10))))) && bool((_this->m->__get((int)11) == transformMatrix->m->__get((int)11))))) && bool((_this->m->__get((int)12) == transformMatrix->m->__get((int)12))))) && bool((_this->m->__get((int)13) == transformMatrix->m->__get((int)13))))) && bool((_this->m->__get((int)14) == transformMatrix->m->__get((int)14))))) && bool((_this->m->__get((int)15) == transformMatrix->m->__get((int)15))));
									}
									return null();
								}
							};
							HX_STACK_LINE(265)
							if (((bool((subMesh->_lastColliderWorldVertices == null())) || bool(!(_Function_6_1::Block(subMesh,transformMatrix)))))){
								HX_STACK_LINE(265)
								subMesh->_lastColliderTransformMatrix = transformMatrix;
								HX_STACK_LINE(265)
								subMesh->_lastColliderWorldVertices = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(265)
								int start = subMesh->verticesStart;		HX_STACK_VAR(start,"start");
								HX_STACK_LINE(265)
								int end = (subMesh->verticesStart + subMesh->verticesCount);		HX_STACK_VAR(end,"end");
								HX_STACK_LINE(265)
								{
									HX_STACK_LINE(265)
									int _g2 = start;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(265)
									while((true)){
										HX_STACK_LINE(265)
										if ((!(((_g2 < end))))){
											HX_STACK_LINE(265)
											break;
										}
										HX_STACK_LINE(265)
										int i = (_g2)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(265)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(265)
										{
											HX_STACK_LINE(265)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->_positions->__get(i).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(vector,"vector");
											HX_STACK_LINE(265)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(265)
											{
												HX_STACK_LINE(265)
												Float x = ((((vector->x * transformMatrix->m->__get((int)0)) + (vector->y * transformMatrix->m->__get((int)4))) + (vector->z * transformMatrix->m->__get((int)8))) + transformMatrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(265)
												Float y = ((((vector->x * transformMatrix->m->__get((int)1)) + (vector->y * transformMatrix->m->__get((int)5))) + (vector->z * transformMatrix->m->__get((int)9))) + transformMatrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
												HX_STACK_LINE(265)
												Float z = ((((vector->x * transformMatrix->m->__get((int)2)) + (vector->y * transformMatrix->m->__get((int)6))) + (vector->z * transformMatrix->m->__get((int)10))) + transformMatrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
												HX_STACK_LINE(265)
												Float w = ((((vector->x * transformMatrix->m->__get((int)3)) + (vector->y * transformMatrix->m->__get((int)7))) + (vector->z * transformMatrix->m->__get((int)11))) + transformMatrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(265)
												result->x = (Float(x) / Float(w));
												HX_STACK_LINE(265)
												result->y = (Float(y) / Float(w));
												HX_STACK_LINE(265)
												result->z = (Float(z) / Float(w));
											}
											HX_STACK_LINE(265)
											_g3 = result;
										}
										HX_STACK_LINE(265)
										subMesh->_lastColliderWorldVertices->push(_g3);
									}
								}
							}
							HX_STACK_LINE(265)
							{
								HX_STACK_LINE(265)
								Array< ::Dynamic > pts = subMesh->_lastColliderWorldVertices;		HX_STACK_VAR(pts,"pts");
								HX_STACK_LINE(265)
								Array< int > indices = this->_indices;		HX_STACK_VAR(indices,"indices");
								HX_STACK_LINE(265)
								int decal = subMesh->verticesStart;		HX_STACK_VAR(decal,"decal");
								HX_STACK_LINE(265)
								int i = subMesh->indexStart;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(265)
								while((true)){
									HX_STACK_LINE(265)
									if ((!(((i < (subMesh->indexStart + subMesh->indexCount)))))){
										HX_STACK_LINE(265)
										break;
									}
									HX_STACK_LINE(265)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 p1 = pts->__get((indices->__get(i) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p1,"p1");
									HX_STACK_LINE(265)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 p2 = pts->__get((indices->__get((i + (int)1)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p2,"p2");
									HX_STACK_LINE(265)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 p3 = pts->__get((indices->__get((i + (int)2)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p3,"p3");
									HX_STACK_LINE(265)
									collider->_testTriangle(i,subMesh,p3,p2,p1);
									HX_STACK_LINE(265)
									hx::AddEq(i,(int)3);
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,_checkCollision,(void))

bool AbstractMesh_obj::isInFrustum( Array< ::Dynamic > frustumPlanes){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","isInFrustum",0x19bdac03,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.isInFrustum","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",269,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frustumPlanes,"frustumPlanes")
	HX_STACK_LINE(270)
	if ((!(this->_boundingInfo->isInFrustum(frustumPlanes)))){
		HX_STACK_LINE(271)
		return false;
	}
	HX_STACK_LINE(274)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,isInFrustum,return )

::com::gamestudiohx::babylonhx::culling::BoundingInfo AbstractMesh_obj::getBoundingInfo( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getBoundingInfo",0x696526f8,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getBoundingInfo","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",278,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(278)
	return this->_boundingInfo;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getBoundingInfo,return )

::com::gamestudiohx::babylonhx::Scene AbstractMesh_obj::getScene( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getScene",0x69e74b86,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getScene","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",282,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(282)
	return this->_scene;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getScene,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix AbstractMesh_obj::getWorldMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getWorldMatrix",0xf0c9a3ed,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getWorldMatrix","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",285,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(286)
	int _g = this->_scene->getRenderId();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(286)
	if (((this->_currentRenderId != _g))){
		HX_STACK_LINE(287)
		bool force = false;		HX_STACK_VAR(force,"force");
		HX_STACK_LINE(287)
		::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",287,0x2cff64c0)
				{
					HX_STACK_LINE(287)
					int _g1 = __this->_scene->getRenderId();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(287)
					return (  ((!(((__this->_currentRenderId == _g1))))) ? bool(__this->isSynchronized(null())) : bool(true) );
				}
				return null();
			}
		};
		HX_STACK_LINE(287)
		if (((  ((!(force))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(287)
			this->_childrenFlag = (int)0;
		}
		else{
			HX_STACK_LINE(287)
			this->_childrenFlag = (int)1;
			HX_STACK_LINE(287)
			this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
			HX_STACK_LINE(287)
			this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
			HX_STACK_LINE(287)
			this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
			HX_STACK_LINE(287)
			int _g2 = this->_scene->getRenderId();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(287)
			this->_currentRenderId = _g2;
			HX_STACK_LINE(287)
			{
				HX_STACK_LINE(287)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(287)
				result->m[(int)0] = this->scaling->x;
				HX_STACK_LINE(287)
				result->m[(int)1] = (int)0;
				HX_STACK_LINE(287)
				result->m[(int)2] = (int)0;
				HX_STACK_LINE(287)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(287)
				result->m[(int)4] = (int)0;
				HX_STACK_LINE(287)
				result->m[(int)5] = this->scaling->y;
				HX_STACK_LINE(287)
				result->m[(int)6] = (int)0;
				HX_STACK_LINE(287)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(287)
				result->m[(int)8] = (int)0;
				HX_STACK_LINE(287)
				result->m[(int)9] = (int)0;
				HX_STACK_LINE(287)
				result->m[(int)10] = this->scaling->z;
				HX_STACK_LINE(287)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(287)
				result->m[(int)12] = (int)0;
				HX_STACK_LINE(287)
				result->m[(int)13] = (int)0;
				HX_STACK_LINE(287)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(287)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(287)
				result;
			}
			HX_STACK_LINE(287)
			if (((this->rotationQuaternion != null()))){
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = this->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(287)
					Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(287)
					Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(287)
					Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
					HX_STACK_LINE(287)
					Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
					HX_STACK_LINE(287)
					Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
					HX_STACK_LINE(287)
					Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
					HX_STACK_LINE(287)
					Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
					HX_STACK_LINE(287)
					Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
					HX_STACK_LINE(287)
					Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
					HX_STACK_LINE(287)
					result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
					HX_STACK_LINE(287)
					result->m[(int)1] = (2.0 * ((xy + zw)));
					HX_STACK_LINE(287)
					result->m[(int)2] = (2.0 * ((zx - yw)));
					HX_STACK_LINE(287)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(287)
					result->m[(int)4] = (2.0 * ((xy - zw)));
					HX_STACK_LINE(287)
					result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
					HX_STACK_LINE(287)
					result->m[(int)6] = (2.0 * ((yz + xw)));
					HX_STACK_LINE(287)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(287)
					result->m[(int)8] = (2.0 * ((zx + yw)));
					HX_STACK_LINE(287)
					result->m[(int)9] = (2.0 * ((yz - xw)));
					HX_STACK_LINE(287)
					result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
					HX_STACK_LINE(287)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(287)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(287)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(287)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(287)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(287)
					result;
				}
				HX_STACK_LINE(287)
				this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
			}
			else{
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
						HX_STACK_LINE(287)
						Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
						HX_STACK_LINE(287)
						Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
						HX_STACK_LINE(287)
						Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
						HX_STACK_LINE(287)
						Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
						HX_STACK_LINE(287)
						Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
						HX_STACK_LINE(287)
						Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
						HX_STACK_LINE(287)
						Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
						HX_STACK_LINE(287)
						Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
						HX_STACK_LINE(287)
						tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
						HX_STACK_LINE(287)
						tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
						HX_STACK_LINE(287)
						tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
						HX_STACK_LINE(287)
						tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
						HX_STACK_LINE(287)
						_g3 = tempQuaternion;
					}
					HX_STACK_LINE(287)
					tempQuaternion = _g3;
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(287)
						Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(287)
						Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(287)
						Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(287)
						Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
						HX_STACK_LINE(287)
						Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
						HX_STACK_LINE(287)
						Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
						HX_STACK_LINE(287)
						Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(287)
						Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
						HX_STACK_LINE(287)
						result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
						HX_STACK_LINE(287)
						result->m[(int)1] = (2.0 * ((xy + zw)));
						HX_STACK_LINE(287)
						result->m[(int)2] = (2.0 * ((zx - yw)));
						HX_STACK_LINE(287)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)4] = (2.0 * ((xy - zw)));
						HX_STACK_LINE(287)
						result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
						HX_STACK_LINE(287)
						result->m[(int)6] = (2.0 * ((yz + xw)));
						HX_STACK_LINE(287)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)8] = (2.0 * ((zx + yw)));
						HX_STACK_LINE(287)
						result->m[(int)9] = (2.0 * ((yz - xw)));
						HX_STACK_LINE(287)
						result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
						HX_STACK_LINE(287)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(287)
						result;
					}
				}
				HX_STACK_LINE(287)
				this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
			}
			HX_STACK_LINE(287)
			if ((this->infiniteDistance)){
				HX_STACK_LINE(287)
				::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						result->m[(int)0] = 1.0;
						HX_STACK_LINE(287)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)5] = 1.0;
						HX_STACK_LINE(287)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)10] = 1.0;
						HX_STACK_LINE(287)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)12] = (this->position->x + camera->position->x);
						HX_STACK_LINE(287)
						result->m[(int)13] = (this->position->y + camera->position->y);
						HX_STACK_LINE(287)
						result->m[(int)14] = (this->position->z + camera->position->z);
						HX_STACK_LINE(287)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(287)
						result;
					}
				}
			}
			else{
				HX_STACK_LINE(287)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					result->m[(int)0] = 1.0;
					HX_STACK_LINE(287)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(287)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(287)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(287)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(287)
					result->m[(int)5] = 1.0;
					HX_STACK_LINE(287)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(287)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(287)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(287)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(287)
					result->m[(int)10] = 1.0;
					HX_STACK_LINE(287)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(287)
					result->m[(int)12] = this->position->x;
					HX_STACK_LINE(287)
					result->m[(int)13] = this->position->y;
					HX_STACK_LINE(287)
					result->m[(int)14] = this->position->z;
					HX_STACK_LINE(287)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(287)
					result;
				}
			}
			HX_STACK_LINE(287)
			{
				HX_STACK_LINE(287)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(287)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(287)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(287)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(287)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(287)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(287)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(287)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(287)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(287)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(287)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(287)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(287)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(287)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(287)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(287)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(287)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(287)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(287)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(287)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(287)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(287)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(287)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(287)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(287)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(287)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(287)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(287)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(287)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(287)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(287)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(287)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(287)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(287)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(287)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(287)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(287)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(287)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(287)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(287)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(287)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(287)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(287)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(287)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(287)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(287)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(287)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(287)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(287)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(287)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(287)
					result;
				}
			}
			HX_STACK_LINE(287)
			{
				HX_STACK_LINE(287)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(287)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(287)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(287)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(287)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(287)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(287)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(287)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(287)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(287)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(287)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(287)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(287)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(287)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(287)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(287)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(287)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(287)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(287)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(287)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(287)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(287)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(287)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(287)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(287)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(287)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(287)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(287)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(287)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(287)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(287)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(287)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(287)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(287)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(287)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(287)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(287)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(287)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(287)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(287)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(287)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(287)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(287)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(287)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(287)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(287)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(287)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(287)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(287)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(287)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(287)
					result;
				}
			}
			HX_STACK_LINE(287)
			if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
				HX_STACK_LINE(287)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(287)
					localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
				}
				HX_STACK_LINE(287)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(287)
					zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
				}
				HX_STACK_LINE(287)
				if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(287)
						hx::AddEq(localPosition->x,otherVector->x);
						HX_STACK_LINE(287)
						hx::AddEq(localPosition->y,otherVector->y);
						HX_STACK_LINE(287)
						hx::AddEq(localPosition->z,otherVector->z);
					}
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(287)
						{
							HX_STACK_LINE(287)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(287)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(287)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(287)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(287)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(287)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(287)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(287)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(287)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(287)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(287)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(287)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(287)
							result->m[(int)12] = localPosition->x;
							HX_STACK_LINE(287)
							result->m[(int)13] = localPosition->y;
							HX_STACK_LINE(287)
							result->m[(int)14] = localPosition->z;
							HX_STACK_LINE(287)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(287)
							result;
						}
					}
				}
				HX_STACK_LINE(287)
				if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
					HX_STACK_LINE(287)
					zero = this->_scene->activeCamera->position;
				}
				else{
					HX_STACK_LINE(287)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
						HX_STACK_LINE(287)
						zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
					HX_STACK_LINE(287)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
						HX_STACK_LINE(287)
						zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
					HX_STACK_LINE(287)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
						HX_STACK_LINE(287)
						zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
				}
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						zAxis->x = (zero->x - localPosition->x);
						HX_STACK_LINE(287)
						zAxis->y = (zero->y - localPosition->y);
						HX_STACK_LINE(287)
						zAxis->z = (zero->z - localPosition->z);
					}
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(287)
						if (((len != (int)0))){
							HX_STACK_LINE(287)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(287)
							hx::MultEq(zAxis->x,num);
							HX_STACK_LINE(287)
							hx::MultEq(zAxis->y,num);
							HX_STACK_LINE(287)
							hx::MultEq(zAxis->z,num);
						}
					}
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
						HX_STACK_LINE(287)
						xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
						HX_STACK_LINE(287)
						xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
					}
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(287)
						if (((len != (int)0))){
							HX_STACK_LINE(287)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(287)
							hx::MultEq(xAxis->x,num);
							HX_STACK_LINE(287)
							hx::MultEq(xAxis->y,num);
							HX_STACK_LINE(287)
							hx::MultEq(xAxis->z,num);
						}
					}
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
						HX_STACK_LINE(287)
						yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
						HX_STACK_LINE(287)
						yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
					}
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(287)
						if (((len != (int)0))){
							HX_STACK_LINE(287)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(287)
							hx::MultEq(yAxis->x,num);
							HX_STACK_LINE(287)
							hx::MultEq(yAxis->y,num);
							HX_STACK_LINE(287)
							hx::MultEq(yAxis->z,num);
						}
					}
					HX_STACK_LINE(287)
					Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
					HX_STACK_LINE(287)
					Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
					HX_STACK_LINE(287)
					Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						result->m[(int)0] = xAxis->x;
						HX_STACK_LINE(287)
						result->m[(int)1] = yAxis->x;
						HX_STACK_LINE(287)
						result->m[(int)2] = zAxis->x;
						HX_STACK_LINE(287)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)4] = xAxis->y;
						HX_STACK_LINE(287)
						result->m[(int)5] = yAxis->y;
						HX_STACK_LINE(287)
						result->m[(int)6] = zAxis->y;
						HX_STACK_LINE(287)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)8] = xAxis->z;
						HX_STACK_LINE(287)
						result->m[(int)9] = yAxis->z;
						HX_STACK_LINE(287)
						result->m[(int)10] = zAxis->z;
						HX_STACK_LINE(287)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(287)
						result->m[(int)12] = ex;
						HX_STACK_LINE(287)
						result->m[(int)13] = ey;
						HX_STACK_LINE(287)
						result->m[(int)14] = ez;
						HX_STACK_LINE(287)
						result->m[(int)15] = (int)1;
						HX_STACK_LINE(287)
						result;
					}
				}
				HX_STACK_LINE(287)
				this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localBillboard;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
						HX_STACK_LINE(287)
						Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
						HX_STACK_LINE(287)
						Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
						HX_STACK_LINE(287)
						Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
						HX_STACK_LINE(287)
						Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
						HX_STACK_LINE(287)
						Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
						HX_STACK_LINE(287)
						Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
						HX_STACK_LINE(287)
						Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
						HX_STACK_LINE(287)
						Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
						HX_STACK_LINE(287)
						Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
						HX_STACK_LINE(287)
						Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
						HX_STACK_LINE(287)
						Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
						HX_STACK_LINE(287)
						Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
						HX_STACK_LINE(287)
						Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
						HX_STACK_LINE(287)
						Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
						HX_STACK_LINE(287)
						Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
						HX_STACK_LINE(287)
						Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
						HX_STACK_LINE(287)
						Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
						HX_STACK_LINE(287)
						Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
						HX_STACK_LINE(287)
						Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
						HX_STACK_LINE(287)
						Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
						HX_STACK_LINE(287)
						Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
						HX_STACK_LINE(287)
						Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
						HX_STACK_LINE(287)
						Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
						HX_STACK_LINE(287)
						Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
						HX_STACK_LINE(287)
						Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
						HX_STACK_LINE(287)
						Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
						HX_STACK_LINE(287)
						Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
						HX_STACK_LINE(287)
						Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
						HX_STACK_LINE(287)
						Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
						HX_STACK_LINE(287)
						Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
						HX_STACK_LINE(287)
						Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
						HX_STACK_LINE(287)
						Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
						HX_STACK_LINE(287)
						Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
						HX_STACK_LINE(287)
						Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
						HX_STACK_LINE(287)
						Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
						HX_STACK_LINE(287)
						Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
						HX_STACK_LINE(287)
						Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
						HX_STACK_LINE(287)
						Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
						HX_STACK_LINE(287)
						_this->m[(int)0] = (l23 * l27);
						HX_STACK_LINE(287)
						_this->m[(int)4] = (l24 * l27);
						HX_STACK_LINE(287)
						_this->m[(int)8] = (l25 * l27);
						HX_STACK_LINE(287)
						_this->m[(int)12] = (l26 * l27);
						HX_STACK_LINE(287)
						_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
						HX_STACK_LINE(287)
						_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
						HX_STACK_LINE(287)
						_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
						HX_STACK_LINE(287)
						_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
						HX_STACK_LINE(287)
						_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
						HX_STACK_LINE(287)
						_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
						HX_STACK_LINE(287)
						_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
						HX_STACK_LINE(287)
						_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
						HX_STACK_LINE(287)
						_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
						HX_STACK_LINE(287)
						_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
						HX_STACK_LINE(287)
						_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
						HX_STACK_LINE(287)
						_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
					}
				}
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(287)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(287)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(287)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(287)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(287)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(287)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(287)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(287)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(287)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(287)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(287)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(287)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(287)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(287)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(287)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(287)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(287)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(287)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(287)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(287)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(287)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(287)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(287)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(287)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(287)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(287)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(287)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(287)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(287)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(287)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(287)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(287)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(287)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(287)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(287)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(287)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(287)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(287)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(287)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(287)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(287)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(287)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(287)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(287)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(287)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(287)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(287)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(287)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(287)
						result;
					}
				}
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(287)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(287)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(287)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(287)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(287)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(287)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(287)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(287)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(287)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(287)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(287)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(287)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(287)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(287)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(287)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(287)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(287)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(287)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(287)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(287)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(287)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(287)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(287)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(287)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(287)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(287)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(287)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(287)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(287)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(287)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(287)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(287)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(287)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(287)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(287)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(287)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(287)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(287)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(287)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(287)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(287)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(287)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(287)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(287)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(287)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(287)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(287)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(287)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(287)
						result;
					}
				}
			}
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",287,0x2cff64c0)
					{
						HX_STACK_LINE(287)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _g4 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(287)
						return (_g4 != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(287)
			if (((  (((  (((this->parent != null()))) ? bool(_Function_3_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(287)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(287)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(287)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(287)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(287)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(287)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(287)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(287)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(287)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(287)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(287)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(287)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(287)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(287)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(287)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(287)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(287)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(287)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(287)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(287)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(287)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(287)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(287)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(287)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(287)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(287)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(287)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(287)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(287)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(287)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(287)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(287)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(287)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(287)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(287)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(287)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(287)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(287)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(287)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(287)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(287)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(287)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(287)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(287)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(287)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(287)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(287)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(287)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(287)
						result;
					}
				}
				HX_STACK_LINE(287)
				::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localWorld;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(287)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(287)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(287)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(287)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(287)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(287)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(287)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(287)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(287)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(287)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(287)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(287)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(287)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(287)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(287)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(287)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(287)
						Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(287)
						Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(287)
						Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(287)
						Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(287)
						Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(287)
						Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(287)
						Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(287)
						Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(287)
						Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(287)
						Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(287)
						Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(287)
						Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(287)
						Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(287)
						Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(287)
						Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(287)
						Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(287)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(287)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(287)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(287)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(287)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(287)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(287)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(287)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(287)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(287)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(287)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(287)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(287)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(287)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(287)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(287)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(287)
						result;
					}
				}
			}
			else{
				HX_STACK_LINE(287)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(287)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(287)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(287)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(287)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(287)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(287)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(287)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(287)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(287)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(287)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(287)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(287)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(287)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(287)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(287)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(287)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(287)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(287)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(287)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(287)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(287)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(287)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(287)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(287)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(287)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(287)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(287)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(287)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(287)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(287)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(287)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(287)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(287)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(287)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(287)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(287)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(287)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(287)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(287)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(287)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(287)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(287)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(287)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(287)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(287)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(287)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(287)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(287)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(287)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(287)
					result;
				}
			}
			HX_STACK_LINE(287)
			if (((this->_boundingInfo != null()))){
				HX_STACK_LINE(287)
				Float _g5 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(287)
				this->_scaleFactor = _g5;
				HX_STACK_LINE(287)
				Float _g6 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(287)
				this->_scaleFactor = _g6;
				struct _Function_4_1{
					inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",287,0x2cff64c0)
						{
							HX_STACK_LINE(287)
							Dynamic _g7 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(287)
							return (_g7 != null());
						}
						return null();
					}
				};
				HX_STACK_LINE(287)
				if (((  (((this->parent != null()))) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(287)
					Dynamic _g8 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(287)
					Float _g9 = (this->_scaleFactor * _g8);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(287)
					this->_scaleFactor = _g9;
				}
				HX_STACK_LINE(287)
				this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(287)
					int _g3 = this->subMeshes->length;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(287)
					while((true)){
						HX_STACK_LINE(287)
						if ((!(((_g1 < _g3))))){
							HX_STACK_LINE(287)
							break;
						}
						HX_STACK_LINE(287)
						int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
						HX_STACK_LINE(287)
						::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
						HX_STACK_LINE(287)
						subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
					}
				}
			}
			HX_STACK_LINE(287)
			{
				HX_STACK_LINE(287)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_absolutePosition;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(287)
				_this->x = this->_worldMatrix->m->__get((int)12);
				HX_STACK_LINE(287)
				_this->y = this->_worldMatrix->m->__get((int)13);
				HX_STACK_LINE(287)
				_this->z = this->_worldMatrix->m->__get((int)14);
			}
			HX_STACK_LINE(287)
			ret = this->_worldMatrix;
		}
		HX_STACK_LINE(287)
		ret;
	}
	HX_STACK_LINE(289)
	return this->_worldMatrix;
}


int AbstractMesh_obj::getTotalVertices( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getTotalVertices",0x79627017,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getTotalVertices","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",293,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(293)
	return this->_totalVertices;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getTotalVertices,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 AbstractMesh_obj::getAbsolutePosition( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getAbsolutePosition",0xa7329e46,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getAbsolutePosition","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",296,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(297)
		bool force = false;		HX_STACK_VAR(force,"force");
		HX_STACK_LINE(297)
		::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",297,0x2cff64c0)
				{
					HX_STACK_LINE(297)
					int _g = __this->_scene->getRenderId();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(297)
					return (  ((!(((__this->_currentRenderId == _g))))) ? bool(__this->isSynchronized(null())) : bool(true) );
				}
				return null();
			}
		};
		HX_STACK_LINE(297)
		if (((  ((!(force))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(297)
			this->_childrenFlag = (int)0;
		}
		else{
			HX_STACK_LINE(297)
			this->_childrenFlag = (int)1;
			HX_STACK_LINE(297)
			this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
			HX_STACK_LINE(297)
			this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
			HX_STACK_LINE(297)
			this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
			HX_STACK_LINE(297)
			int _g1 = this->_scene->getRenderId();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(297)
			this->_currentRenderId = _g1;
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(297)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(297)
				result->m[(int)0] = this->scaling->x;
				HX_STACK_LINE(297)
				result->m[(int)1] = (int)0;
				HX_STACK_LINE(297)
				result->m[(int)2] = (int)0;
				HX_STACK_LINE(297)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(297)
				result->m[(int)4] = (int)0;
				HX_STACK_LINE(297)
				result->m[(int)5] = this->scaling->y;
				HX_STACK_LINE(297)
				result->m[(int)6] = (int)0;
				HX_STACK_LINE(297)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(297)
				result->m[(int)8] = (int)0;
				HX_STACK_LINE(297)
				result->m[(int)9] = (int)0;
				HX_STACK_LINE(297)
				result->m[(int)10] = this->scaling->z;
				HX_STACK_LINE(297)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(297)
				result->m[(int)12] = (int)0;
				HX_STACK_LINE(297)
				result->m[(int)13] = (int)0;
				HX_STACK_LINE(297)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(297)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(297)
				result;
			}
			HX_STACK_LINE(297)
			if (((this->rotationQuaternion != null()))){
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = this->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(297)
					Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(297)
					Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(297)
					Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
					HX_STACK_LINE(297)
					Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
					HX_STACK_LINE(297)
					Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
					HX_STACK_LINE(297)
					Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
					HX_STACK_LINE(297)
					Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
					HX_STACK_LINE(297)
					Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
					HX_STACK_LINE(297)
					Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
					HX_STACK_LINE(297)
					result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
					HX_STACK_LINE(297)
					result->m[(int)1] = (2.0 * ((xy + zw)));
					HX_STACK_LINE(297)
					result->m[(int)2] = (2.0 * ((zx - yw)));
					HX_STACK_LINE(297)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(297)
					result->m[(int)4] = (2.0 * ((xy - zw)));
					HX_STACK_LINE(297)
					result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
					HX_STACK_LINE(297)
					result->m[(int)6] = (2.0 * ((yz + xw)));
					HX_STACK_LINE(297)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(297)
					result->m[(int)8] = (2.0 * ((zx + yw)));
					HX_STACK_LINE(297)
					result->m[(int)9] = (2.0 * ((yz - xw)));
					HX_STACK_LINE(297)
					result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
					HX_STACK_LINE(297)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(297)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(297)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(297)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(297)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(297)
					result;
				}
				HX_STACK_LINE(297)
				this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
			}
			else{
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
						HX_STACK_LINE(297)
						Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
						HX_STACK_LINE(297)
						Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
						HX_STACK_LINE(297)
						Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
						HX_STACK_LINE(297)
						Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
						HX_STACK_LINE(297)
						Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
						HX_STACK_LINE(297)
						Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
						HX_STACK_LINE(297)
						Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
						HX_STACK_LINE(297)
						Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
						HX_STACK_LINE(297)
						tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
						HX_STACK_LINE(297)
						tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
						HX_STACK_LINE(297)
						tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
						HX_STACK_LINE(297)
						tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
						HX_STACK_LINE(297)
						_g2 = tempQuaternion;
					}
					HX_STACK_LINE(297)
					tempQuaternion = _g2;
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(297)
						Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(297)
						Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(297)
						Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(297)
						Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
						HX_STACK_LINE(297)
						Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
						HX_STACK_LINE(297)
						Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
						HX_STACK_LINE(297)
						Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(297)
						Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
						HX_STACK_LINE(297)
						result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
						HX_STACK_LINE(297)
						result->m[(int)1] = (2.0 * ((xy + zw)));
						HX_STACK_LINE(297)
						result->m[(int)2] = (2.0 * ((zx - yw)));
						HX_STACK_LINE(297)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)4] = (2.0 * ((xy - zw)));
						HX_STACK_LINE(297)
						result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
						HX_STACK_LINE(297)
						result->m[(int)6] = (2.0 * ((yz + xw)));
						HX_STACK_LINE(297)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)8] = (2.0 * ((zx + yw)));
						HX_STACK_LINE(297)
						result->m[(int)9] = (2.0 * ((yz - xw)));
						HX_STACK_LINE(297)
						result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
						HX_STACK_LINE(297)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(297)
						result;
					}
				}
				HX_STACK_LINE(297)
				this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
			}
			HX_STACK_LINE(297)
			if ((this->infiniteDistance)){
				HX_STACK_LINE(297)
				::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						result->m[(int)0] = 1.0;
						HX_STACK_LINE(297)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)5] = 1.0;
						HX_STACK_LINE(297)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)10] = 1.0;
						HX_STACK_LINE(297)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)12] = (this->position->x + camera->position->x);
						HX_STACK_LINE(297)
						result->m[(int)13] = (this->position->y + camera->position->y);
						HX_STACK_LINE(297)
						result->m[(int)14] = (this->position->z + camera->position->z);
						HX_STACK_LINE(297)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(297)
						result;
					}
				}
			}
			else{
				HX_STACK_LINE(297)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					result->m[(int)0] = 1.0;
					HX_STACK_LINE(297)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(297)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(297)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(297)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(297)
					result->m[(int)5] = 1.0;
					HX_STACK_LINE(297)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(297)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(297)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(297)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(297)
					result->m[(int)10] = 1.0;
					HX_STACK_LINE(297)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(297)
					result->m[(int)12] = this->position->x;
					HX_STACK_LINE(297)
					result->m[(int)13] = this->position->y;
					HX_STACK_LINE(297)
					result->m[(int)14] = this->position->z;
					HX_STACK_LINE(297)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(297)
					result;
				}
			}
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(297)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(297)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(297)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(297)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(297)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(297)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(297)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(297)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(297)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(297)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(297)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(297)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(297)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(297)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(297)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(297)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(297)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(297)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(297)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(297)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(297)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(297)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(297)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(297)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(297)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(297)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(297)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(297)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(297)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(297)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(297)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(297)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(297)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(297)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(297)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(297)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(297)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(297)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(297)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(297)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(297)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(297)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(297)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(297)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(297)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(297)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(297)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(297)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(297)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(297)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(297)
					result;
				}
			}
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(297)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(297)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(297)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(297)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(297)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(297)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(297)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(297)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(297)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(297)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(297)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(297)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(297)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(297)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(297)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(297)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(297)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(297)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(297)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(297)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(297)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(297)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(297)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(297)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(297)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(297)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(297)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(297)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(297)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(297)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(297)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(297)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(297)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(297)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(297)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(297)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(297)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(297)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(297)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(297)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(297)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(297)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(297)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(297)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(297)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(297)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(297)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(297)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(297)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(297)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(297)
					result;
				}
			}
			HX_STACK_LINE(297)
			if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
				HX_STACK_LINE(297)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(297)
					localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
				}
				HX_STACK_LINE(297)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(297)
					zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
				}
				HX_STACK_LINE(297)
				if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(297)
						hx::AddEq(localPosition->x,otherVector->x);
						HX_STACK_LINE(297)
						hx::AddEq(localPosition->y,otherVector->y);
						HX_STACK_LINE(297)
						hx::AddEq(localPosition->z,otherVector->z);
					}
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(297)
						{
							HX_STACK_LINE(297)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(297)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(297)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(297)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(297)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(297)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(297)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(297)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(297)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(297)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(297)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(297)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(297)
							result->m[(int)12] = localPosition->x;
							HX_STACK_LINE(297)
							result->m[(int)13] = localPosition->y;
							HX_STACK_LINE(297)
							result->m[(int)14] = localPosition->z;
							HX_STACK_LINE(297)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(297)
							result;
						}
					}
				}
				HX_STACK_LINE(297)
				if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
					HX_STACK_LINE(297)
					zero = this->_scene->activeCamera->position;
				}
				else{
					HX_STACK_LINE(297)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
						HX_STACK_LINE(297)
						zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
					HX_STACK_LINE(297)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
						HX_STACK_LINE(297)
						zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
					HX_STACK_LINE(297)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
						HX_STACK_LINE(297)
						zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
				}
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						zAxis->x = (zero->x - localPosition->x);
						HX_STACK_LINE(297)
						zAxis->y = (zero->y - localPosition->y);
						HX_STACK_LINE(297)
						zAxis->z = (zero->z - localPosition->z);
					}
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(297)
						if (((len != (int)0))){
							HX_STACK_LINE(297)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(297)
							hx::MultEq(zAxis->x,num);
							HX_STACK_LINE(297)
							hx::MultEq(zAxis->y,num);
							HX_STACK_LINE(297)
							hx::MultEq(zAxis->z,num);
						}
					}
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
						HX_STACK_LINE(297)
						xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
						HX_STACK_LINE(297)
						xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
					}
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(297)
						if (((len != (int)0))){
							HX_STACK_LINE(297)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(297)
							hx::MultEq(xAxis->x,num);
							HX_STACK_LINE(297)
							hx::MultEq(xAxis->y,num);
							HX_STACK_LINE(297)
							hx::MultEq(xAxis->z,num);
						}
					}
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
						HX_STACK_LINE(297)
						yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
						HX_STACK_LINE(297)
						yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
					}
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(297)
						if (((len != (int)0))){
							HX_STACK_LINE(297)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(297)
							hx::MultEq(yAxis->x,num);
							HX_STACK_LINE(297)
							hx::MultEq(yAxis->y,num);
							HX_STACK_LINE(297)
							hx::MultEq(yAxis->z,num);
						}
					}
					HX_STACK_LINE(297)
					Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
					HX_STACK_LINE(297)
					Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
					HX_STACK_LINE(297)
					Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						result->m[(int)0] = xAxis->x;
						HX_STACK_LINE(297)
						result->m[(int)1] = yAxis->x;
						HX_STACK_LINE(297)
						result->m[(int)2] = zAxis->x;
						HX_STACK_LINE(297)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)4] = xAxis->y;
						HX_STACK_LINE(297)
						result->m[(int)5] = yAxis->y;
						HX_STACK_LINE(297)
						result->m[(int)6] = zAxis->y;
						HX_STACK_LINE(297)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)8] = xAxis->z;
						HX_STACK_LINE(297)
						result->m[(int)9] = yAxis->z;
						HX_STACK_LINE(297)
						result->m[(int)10] = zAxis->z;
						HX_STACK_LINE(297)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(297)
						result->m[(int)12] = ex;
						HX_STACK_LINE(297)
						result->m[(int)13] = ey;
						HX_STACK_LINE(297)
						result->m[(int)14] = ez;
						HX_STACK_LINE(297)
						result->m[(int)15] = (int)1;
						HX_STACK_LINE(297)
						result;
					}
				}
				HX_STACK_LINE(297)
				this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localBillboard;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
						HX_STACK_LINE(297)
						Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
						HX_STACK_LINE(297)
						Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
						HX_STACK_LINE(297)
						Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
						HX_STACK_LINE(297)
						Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
						HX_STACK_LINE(297)
						Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
						HX_STACK_LINE(297)
						Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
						HX_STACK_LINE(297)
						Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
						HX_STACK_LINE(297)
						Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
						HX_STACK_LINE(297)
						Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
						HX_STACK_LINE(297)
						Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
						HX_STACK_LINE(297)
						Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
						HX_STACK_LINE(297)
						Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
						HX_STACK_LINE(297)
						Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
						HX_STACK_LINE(297)
						Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
						HX_STACK_LINE(297)
						Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
						HX_STACK_LINE(297)
						Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
						HX_STACK_LINE(297)
						Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
						HX_STACK_LINE(297)
						Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
						HX_STACK_LINE(297)
						Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
						HX_STACK_LINE(297)
						Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
						HX_STACK_LINE(297)
						Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
						HX_STACK_LINE(297)
						Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
						HX_STACK_LINE(297)
						Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
						HX_STACK_LINE(297)
						Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
						HX_STACK_LINE(297)
						Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
						HX_STACK_LINE(297)
						Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
						HX_STACK_LINE(297)
						Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
						HX_STACK_LINE(297)
						Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
						HX_STACK_LINE(297)
						Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
						HX_STACK_LINE(297)
						Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
						HX_STACK_LINE(297)
						Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
						HX_STACK_LINE(297)
						Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
						HX_STACK_LINE(297)
						Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
						HX_STACK_LINE(297)
						Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
						HX_STACK_LINE(297)
						Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
						HX_STACK_LINE(297)
						Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
						HX_STACK_LINE(297)
						Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
						HX_STACK_LINE(297)
						Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
						HX_STACK_LINE(297)
						_this->m[(int)0] = (l23 * l27);
						HX_STACK_LINE(297)
						_this->m[(int)4] = (l24 * l27);
						HX_STACK_LINE(297)
						_this->m[(int)8] = (l25 * l27);
						HX_STACK_LINE(297)
						_this->m[(int)12] = (l26 * l27);
						HX_STACK_LINE(297)
						_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
						HX_STACK_LINE(297)
						_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
						HX_STACK_LINE(297)
						_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
						HX_STACK_LINE(297)
						_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
						HX_STACK_LINE(297)
						_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
						HX_STACK_LINE(297)
						_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
						HX_STACK_LINE(297)
						_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
						HX_STACK_LINE(297)
						_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
						HX_STACK_LINE(297)
						_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
						HX_STACK_LINE(297)
						_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
						HX_STACK_LINE(297)
						_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
						HX_STACK_LINE(297)
						_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
					}
				}
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(297)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(297)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(297)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(297)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(297)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(297)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(297)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(297)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(297)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(297)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(297)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(297)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(297)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(297)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(297)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(297)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(297)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(297)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(297)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(297)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(297)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(297)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(297)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(297)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(297)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(297)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(297)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(297)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(297)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(297)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(297)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(297)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(297)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(297)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(297)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(297)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(297)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(297)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(297)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(297)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(297)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(297)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(297)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(297)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(297)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(297)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(297)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(297)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(297)
						result;
					}
				}
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(297)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(297)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(297)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(297)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(297)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(297)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(297)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(297)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(297)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(297)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(297)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(297)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(297)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(297)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(297)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(297)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(297)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(297)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(297)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(297)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(297)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(297)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(297)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(297)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(297)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(297)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(297)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(297)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(297)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(297)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(297)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(297)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(297)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(297)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(297)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(297)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(297)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(297)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(297)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(297)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(297)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(297)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(297)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(297)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(297)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(297)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(297)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(297)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(297)
						result;
					}
				}
			}
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",297,0x2cff64c0)
					{
						HX_STACK_LINE(297)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _g3 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(297)
						return (_g3 != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(297)
			if (((  (((  (((this->parent != null()))) ? bool(_Function_3_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(297)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(297)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(297)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(297)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(297)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(297)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(297)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(297)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(297)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(297)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(297)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(297)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(297)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(297)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(297)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(297)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(297)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(297)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(297)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(297)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(297)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(297)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(297)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(297)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(297)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(297)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(297)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(297)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(297)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(297)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(297)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(297)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(297)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(297)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(297)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(297)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(297)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(297)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(297)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(297)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(297)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(297)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(297)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(297)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(297)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(297)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(297)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(297)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(297)
						result;
					}
				}
				HX_STACK_LINE(297)
				::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localWorld;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(297)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(297)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(297)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(297)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(297)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(297)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(297)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(297)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(297)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(297)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(297)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(297)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(297)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(297)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(297)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(297)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(297)
						Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(297)
						Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(297)
						Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(297)
						Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(297)
						Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(297)
						Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(297)
						Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(297)
						Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(297)
						Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(297)
						Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(297)
						Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(297)
						Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(297)
						Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(297)
						Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(297)
						Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(297)
						Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(297)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(297)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(297)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(297)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(297)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(297)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(297)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(297)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(297)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(297)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(297)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(297)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(297)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(297)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(297)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(297)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(297)
						result;
					}
				}
			}
			else{
				HX_STACK_LINE(297)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(297)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(297)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(297)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(297)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(297)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(297)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(297)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(297)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(297)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(297)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(297)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(297)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(297)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(297)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(297)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(297)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(297)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(297)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(297)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(297)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(297)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(297)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(297)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(297)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(297)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(297)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(297)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(297)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(297)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(297)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(297)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(297)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(297)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(297)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(297)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(297)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(297)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(297)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(297)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(297)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(297)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(297)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(297)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(297)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(297)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(297)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(297)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(297)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(297)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(297)
					result;
				}
			}
			HX_STACK_LINE(297)
			if (((this->_boundingInfo != null()))){
				HX_STACK_LINE(297)
				Float _g4 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(297)
				this->_scaleFactor = _g4;
				HX_STACK_LINE(297)
				Float _g5 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(297)
				this->_scaleFactor = _g5;
				struct _Function_4_1{
					inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",297,0x2cff64c0)
						{
							HX_STACK_LINE(297)
							Dynamic _g6 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(297)
							return (_g6 != null());
						}
						return null();
					}
				};
				HX_STACK_LINE(297)
				if (((  (((this->parent != null()))) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(297)
					Dynamic _g7 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(297)
					Float _g8 = (this->_scaleFactor * _g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(297)
					this->_scaleFactor = _g8;
				}
				HX_STACK_LINE(297)
				this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(297)
					int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(297)
					while((true)){
						HX_STACK_LINE(297)
						if ((!(((_g11 < _g))))){
							HX_STACK_LINE(297)
							break;
						}
						HX_STACK_LINE(297)
						int subIndex = (_g11)++;		HX_STACK_VAR(subIndex,"subIndex");
						HX_STACK_LINE(297)
						::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
						HX_STACK_LINE(297)
						subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
					}
				}
			}
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(297)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_absolutePosition;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(297)
				_this->x = this->_worldMatrix->m->__get((int)12);
				HX_STACK_LINE(297)
				_this->y = this->_worldMatrix->m->__get((int)13);
				HX_STACK_LINE(297)
				_this->z = this->_worldMatrix->m->__get((int)14);
			}
			HX_STACK_LINE(297)
			ret = this->_worldMatrix;
		}
		HX_STACK_LINE(297)
		ret;
	}
	HX_STACK_LINE(298)
	return this->_absolutePosition;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getAbsolutePosition,return )

Void AbstractMesh_obj::setAbsolutePosition( Dynamic absolutePosition){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","setAbsolutePosition",0xe3cf9152,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.setAbsolutePosition","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",302,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(absolutePosition,"absolutePosition")
		HX_STACK_LINE(303)
		if (((absolutePosition == null()))){
			HX_STACK_LINE(304)
			return null();
		}
		HX_STACK_LINE(307)
		Float absolutePositionX = (int)0;		HX_STACK_VAR(absolutePositionX,"absolutePositionX");
		HX_STACK_LINE(308)
		Float absolutePositionY = (int)0;		HX_STACK_VAR(absolutePositionY,"absolutePositionY");
		HX_STACK_LINE(309)
		Float absolutePositionZ = (int)0;		HX_STACK_VAR(absolutePositionZ,"absolutePositionZ");
		HX_STACK_LINE(311)
		if ((::Std_obj::is(absolutePosition,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(312)
			if (((absolutePosition->__Field(HX_CSTRING("length"),true) < (int)3))){
				HX_STACK_LINE(313)
				return null();
			}
			HX_STACK_LINE(315)
			absolutePositionX = absolutePosition->__GetItem((int)0);
			HX_STACK_LINE(316)
			absolutePositionY = absolutePosition->__GetItem((int)1);
			HX_STACK_LINE(317)
			absolutePositionZ = absolutePosition->__GetItem((int)2);
		}
		else{
			HX_STACK_LINE(319)
			absolutePositionX = absolutePosition->__Field(HX_CSTRING("x"),true);
			HX_STACK_LINE(320)
			absolutePositionY = absolutePosition->__Field(HX_CSTRING("y"),true);
			HX_STACK_LINE(321)
			absolutePositionZ = absolutePosition->__Field(HX_CSTRING("z"),true);
		}
		HX_STACK_LINE(330)
		::com::gamestudiohx::babylonhx::tools::math::Matrix worldMatrix;		HX_STACK_VAR(worldMatrix,"worldMatrix");
		HX_STACK_LINE(330)
		{
			HX_STACK_LINE(330)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(330)
			{
				HX_STACK_LINE(330)
				int _g = this->_scene->getRenderId();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(330)
				if (((this->_currentRenderId != _g))){
					HX_STACK_LINE(330)
					bool force = false;		HX_STACK_VAR(force,"force");
					HX_STACK_LINE(330)
					::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
					struct _Function_4_1{
						inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",330,0x2cff64c0)
							{
								HX_STACK_LINE(330)
								int _g1 = __this->_scene->getRenderId();		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(330)
								return (  ((!(((__this->_currentRenderId == _g1))))) ? bool(__this->isSynchronized(null())) : bool(true) );
							}
							return null();
						}
					};
					HX_STACK_LINE(330)
					if (((  ((!(force))) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
						HX_STACK_LINE(330)
						this->_childrenFlag = (int)0;
					}
					else{
						HX_STACK_LINE(330)
						this->_childrenFlag = (int)1;
						HX_STACK_LINE(330)
						this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
						HX_STACK_LINE(330)
						this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
						HX_STACK_LINE(330)
						this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
						HX_STACK_LINE(330)
						int _g2 = this->_scene->getRenderId();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(330)
						this->_currentRenderId = _g2;
						HX_STACK_LINE(330)
						{
							HX_STACK_LINE(330)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(330)
							result->m[(int)0] = this->scaling->x;
							HX_STACK_LINE(330)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(330)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(330)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(330)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(330)
							result->m[(int)5] = this->scaling->y;
							HX_STACK_LINE(330)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(330)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(330)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(330)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(330)
							result->m[(int)10] = this->scaling->z;
							HX_STACK_LINE(330)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(330)
							result->m[(int)12] = (int)0;
							HX_STACK_LINE(330)
							result->m[(int)13] = (int)0;
							HX_STACK_LINE(330)
							result->m[(int)14] = (int)0;
							HX_STACK_LINE(330)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(330)
							result;
						}
						HX_STACK_LINE(330)
						if (((this->rotationQuaternion != null()))){
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Quaternion _this1 = this->rotationQuaternion;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(330)
								Float xx = (_this1->x * _this1->x);		HX_STACK_VAR(xx,"xx");
								HX_STACK_LINE(330)
								Float yy = (_this1->y * _this1->y);		HX_STACK_VAR(yy,"yy");
								HX_STACK_LINE(330)
								Float zz = (_this1->z * _this1->z);		HX_STACK_VAR(zz,"zz");
								HX_STACK_LINE(330)
								Float xy = (_this1->x * _this1->y);		HX_STACK_VAR(xy,"xy");
								HX_STACK_LINE(330)
								Float zw = (_this1->z * _this1->w);		HX_STACK_VAR(zw,"zw");
								HX_STACK_LINE(330)
								Float zx = (_this1->z * _this1->x);		HX_STACK_VAR(zx,"zx");
								HX_STACK_LINE(330)
								Float yw = (_this1->y * _this1->w);		HX_STACK_VAR(yw,"yw");
								HX_STACK_LINE(330)
								Float yz = (_this1->y * _this1->z);		HX_STACK_VAR(yz,"yz");
								HX_STACK_LINE(330)
								Float xw = (_this1->x * _this1->w);		HX_STACK_VAR(xw,"xw");
								HX_STACK_LINE(330)
								result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
								HX_STACK_LINE(330)
								result->m[(int)1] = (2.0 * ((xy + zw)));
								HX_STACK_LINE(330)
								result->m[(int)2] = (2.0 * ((zx - yw)));
								HX_STACK_LINE(330)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(330)
								result->m[(int)4] = (2.0 * ((xy - zw)));
								HX_STACK_LINE(330)
								result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
								HX_STACK_LINE(330)
								result->m[(int)6] = (2.0 * ((yz + xw)));
								HX_STACK_LINE(330)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(330)
								result->m[(int)8] = (2.0 * ((zx + yw)));
								HX_STACK_LINE(330)
								result->m[(int)9] = (2.0 * ((yz - xw)));
								HX_STACK_LINE(330)
								result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
								HX_STACK_LINE(330)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(330)
								result->m[(int)12] = (int)0;
								HX_STACK_LINE(330)
								result->m[(int)13] = (int)0;
								HX_STACK_LINE(330)
								result->m[(int)14] = (int)0;
								HX_STACK_LINE(330)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(330)
								result;
							}
							HX_STACK_LINE(330)
							this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
						}
						else{
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Quaternion _g3;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
									HX_STACK_LINE(330)
									Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
									HX_STACK_LINE(330)
									Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
									HX_STACK_LINE(330)
									Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
									HX_STACK_LINE(330)
									Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
									HX_STACK_LINE(330)
									Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
									HX_STACK_LINE(330)
									Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
									HX_STACK_LINE(330)
									Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
									HX_STACK_LINE(330)
									Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
									HX_STACK_LINE(330)
									tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
									HX_STACK_LINE(330)
									tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
									HX_STACK_LINE(330)
									tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
									HX_STACK_LINE(330)
									tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
									HX_STACK_LINE(330)
									_g3 = tempQuaternion;
								}
								HX_STACK_LINE(330)
								tempQuaternion = _g3;
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
									HX_STACK_LINE(330)
									Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
									HX_STACK_LINE(330)
									Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
									HX_STACK_LINE(330)
									Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
									HX_STACK_LINE(330)
									Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
									HX_STACK_LINE(330)
									Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
									HX_STACK_LINE(330)
									Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
									HX_STACK_LINE(330)
									Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
									HX_STACK_LINE(330)
									Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
									HX_STACK_LINE(330)
									result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
									HX_STACK_LINE(330)
									result->m[(int)1] = (2.0 * ((xy + zw)));
									HX_STACK_LINE(330)
									result->m[(int)2] = (2.0 * ((zx - yw)));
									HX_STACK_LINE(330)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)4] = (2.0 * ((xy - zw)));
									HX_STACK_LINE(330)
									result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
									HX_STACK_LINE(330)
									result->m[(int)6] = (2.0 * ((yz + xw)));
									HX_STACK_LINE(330)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)8] = (2.0 * ((zx + yw)));
									HX_STACK_LINE(330)
									result->m[(int)9] = (2.0 * ((yz - xw)));
									HX_STACK_LINE(330)
									result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
									HX_STACK_LINE(330)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)12] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)13] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)14] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(330)
									result;
								}
							}
							HX_STACK_LINE(330)
							this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
						}
						HX_STACK_LINE(330)
						if ((this->infiniteDistance)){
							HX_STACK_LINE(330)
							::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									result->m[(int)0] = 1.0;
									HX_STACK_LINE(330)
									result->m[(int)1] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)2] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)4] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)5] = 1.0;
									HX_STACK_LINE(330)
									result->m[(int)6] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)8] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)9] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)10] = 1.0;
									HX_STACK_LINE(330)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)12] = (this->position->x + camera->position->x);
									HX_STACK_LINE(330)
									result->m[(int)13] = (this->position->y + camera->position->y);
									HX_STACK_LINE(330)
									result->m[(int)14] = (this->position->z + camera->position->z);
									HX_STACK_LINE(330)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(330)
									result;
								}
							}
						}
						else{
							HX_STACK_LINE(330)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								result->m[(int)0] = 1.0;
								HX_STACK_LINE(330)
								result->m[(int)1] = (int)0;
								HX_STACK_LINE(330)
								result->m[(int)2] = (int)0;
								HX_STACK_LINE(330)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(330)
								result->m[(int)4] = (int)0;
								HX_STACK_LINE(330)
								result->m[(int)5] = 1.0;
								HX_STACK_LINE(330)
								result->m[(int)6] = (int)0;
								HX_STACK_LINE(330)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(330)
								result->m[(int)8] = (int)0;
								HX_STACK_LINE(330)
								result->m[(int)9] = (int)0;
								HX_STACK_LINE(330)
								result->m[(int)10] = 1.0;
								HX_STACK_LINE(330)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(330)
								result->m[(int)12] = this->position->x;
								HX_STACK_LINE(330)
								result->m[(int)13] = this->position->y;
								HX_STACK_LINE(330)
								result->m[(int)14] = this->position->z;
								HX_STACK_LINE(330)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(330)
								result;
							}
						}
						HX_STACK_LINE(330)
						{
							HX_STACK_LINE(330)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_pivotMatrix;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(330)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(330)
								Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(330)
								Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(330)
								Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(330)
								Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(330)
								Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(330)
								Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(330)
								Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(330)
								Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(330)
								Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(330)
								Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(330)
								Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(330)
								Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(330)
								Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(330)
								Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(330)
								Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(330)
								Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(330)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(330)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(330)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(330)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(330)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(330)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(330)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(330)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(330)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(330)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(330)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(330)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(330)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(330)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(330)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(330)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(330)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(330)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(330)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(330)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(330)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(330)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(330)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(330)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(330)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(330)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(330)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(330)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(330)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(330)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(330)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(330)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(330)
								result;
							}
						}
						HX_STACK_LINE(330)
						{
							HX_STACK_LINE(330)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_localPivotScaling;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(330)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(330)
								Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(330)
								Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(330)
								Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(330)
								Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(330)
								Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(330)
								Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(330)
								Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(330)
								Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(330)
								Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(330)
								Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(330)
								Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(330)
								Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(330)
								Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(330)
								Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(330)
								Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(330)
								Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(330)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(330)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(330)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(330)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(330)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(330)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(330)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(330)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(330)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(330)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(330)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(330)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(330)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(330)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(330)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(330)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(330)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(330)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(330)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(330)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(330)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(330)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(330)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(330)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(330)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(330)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(330)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(330)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(330)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(330)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(330)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(330)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(330)
								result;
							}
						}
						HX_STACK_LINE(330)
						if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
							HX_STACK_LINE(330)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = this->position;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(330)
								localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this1->x,_this1->y,_this1->z);
							}
							HX_STACK_LINE(330)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = this->_scene->activeCamera->position;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(330)
								zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this1->x,_this1->y,_this1->z);
							}
							HX_STACK_LINE(330)
							if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
									HX_STACK_LINE(330)
									hx::AddEq(localPosition->x,otherVector->x);
									HX_STACK_LINE(330)
									hx::AddEq(localPosition->y,otherVector->y);
									HX_STACK_LINE(330)
									hx::AddEq(localPosition->z,otherVector->z);
								}
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(330)
									{
										HX_STACK_LINE(330)
										result->m[(int)0] = 1.0;
										HX_STACK_LINE(330)
										result->m[(int)1] = (int)0;
										HX_STACK_LINE(330)
										result->m[(int)2] = (int)0;
										HX_STACK_LINE(330)
										result->m[(int)3] = (int)0;
										HX_STACK_LINE(330)
										result->m[(int)4] = (int)0;
										HX_STACK_LINE(330)
										result->m[(int)5] = 1.0;
										HX_STACK_LINE(330)
										result->m[(int)6] = (int)0;
										HX_STACK_LINE(330)
										result->m[(int)7] = (int)0;
										HX_STACK_LINE(330)
										result->m[(int)8] = (int)0;
										HX_STACK_LINE(330)
										result->m[(int)9] = (int)0;
										HX_STACK_LINE(330)
										result->m[(int)10] = 1.0;
										HX_STACK_LINE(330)
										result->m[(int)11] = (int)0;
										HX_STACK_LINE(330)
										result->m[(int)12] = localPosition->x;
										HX_STACK_LINE(330)
										result->m[(int)13] = localPosition->y;
										HX_STACK_LINE(330)
										result->m[(int)14] = localPosition->z;
										HX_STACK_LINE(330)
										result->m[(int)15] = 1.0;
										HX_STACK_LINE(330)
										result;
									}
								}
							}
							HX_STACK_LINE(330)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
								HX_STACK_LINE(330)
								zero = this->_scene->activeCamera->position;
							}
							else{
								HX_STACK_LINE(330)
								if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
									HX_STACK_LINE(330)
									zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
								}
								HX_STACK_LINE(330)
								if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
									HX_STACK_LINE(330)
									zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
								}
								HX_STACK_LINE(330)
								if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
									HX_STACK_LINE(330)
									zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
								}
							}
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									zAxis->x = (zero->x - localPosition->x);
									HX_STACK_LINE(330)
									zAxis->y = (zero->y - localPosition->y);
									HX_STACK_LINE(330)
									zAxis->z = (zero->z - localPosition->z);
								}
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(330)
									if (((len != (int)0))){
										HX_STACK_LINE(330)
										Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
										HX_STACK_LINE(330)
										hx::MultEq(zAxis->x,num);
										HX_STACK_LINE(330)
										hx::MultEq(zAxis->y,num);
										HX_STACK_LINE(330)
										hx::MultEq(zAxis->z,num);
									}
								}
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
									HX_STACK_LINE(330)
									xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
									HX_STACK_LINE(330)
									xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
								}
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(330)
									if (((len != (int)0))){
										HX_STACK_LINE(330)
										Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
										HX_STACK_LINE(330)
										hx::MultEq(xAxis->x,num);
										HX_STACK_LINE(330)
										hx::MultEq(xAxis->y,num);
										HX_STACK_LINE(330)
										hx::MultEq(xAxis->z,num);
									}
								}
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
									HX_STACK_LINE(330)
									yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
									HX_STACK_LINE(330)
									yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
								}
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(330)
									if (((len != (int)0))){
										HX_STACK_LINE(330)
										Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
										HX_STACK_LINE(330)
										hx::MultEq(yAxis->x,num);
										HX_STACK_LINE(330)
										hx::MultEq(yAxis->y,num);
										HX_STACK_LINE(330)
										hx::MultEq(yAxis->z,num);
									}
								}
								HX_STACK_LINE(330)
								Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
								HX_STACK_LINE(330)
								Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
								HX_STACK_LINE(330)
								Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									result->m[(int)0] = xAxis->x;
									HX_STACK_LINE(330)
									result->m[(int)1] = yAxis->x;
									HX_STACK_LINE(330)
									result->m[(int)2] = zAxis->x;
									HX_STACK_LINE(330)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)4] = xAxis->y;
									HX_STACK_LINE(330)
									result->m[(int)5] = yAxis->y;
									HX_STACK_LINE(330)
									result->m[(int)6] = zAxis->y;
									HX_STACK_LINE(330)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)8] = xAxis->z;
									HX_STACK_LINE(330)
									result->m[(int)9] = yAxis->z;
									HX_STACK_LINE(330)
									result->m[(int)10] = zAxis->z;
									HX_STACK_LINE(330)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(330)
									result->m[(int)12] = ex;
									HX_STACK_LINE(330)
									result->m[(int)13] = ey;
									HX_STACK_LINE(330)
									result->m[(int)14] = ez;
									HX_STACK_LINE(330)
									result->m[(int)15] = (int)1;
									HX_STACK_LINE(330)
									result;
								}
							}
							HX_STACK_LINE(330)
							this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_localBillboard;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									Float l1 = _this1->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
									HX_STACK_LINE(330)
									Float l2 = _this1->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
									HX_STACK_LINE(330)
									Float l3 = _this1->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
									HX_STACK_LINE(330)
									Float l4 = _this1->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
									HX_STACK_LINE(330)
									Float l5 = _this1->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
									HX_STACK_LINE(330)
									Float l6 = _this1->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
									HX_STACK_LINE(330)
									Float l7 = _this1->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
									HX_STACK_LINE(330)
									Float l8 = _this1->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
									HX_STACK_LINE(330)
									Float l9 = _this1->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
									HX_STACK_LINE(330)
									Float l10 = _this1->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
									HX_STACK_LINE(330)
									Float l11 = _this1->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
									HX_STACK_LINE(330)
									Float l12 = _this1->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
									HX_STACK_LINE(330)
									Float l13 = _this1->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
									HX_STACK_LINE(330)
									Float l14 = _this1->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
									HX_STACK_LINE(330)
									Float l15 = _this1->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
									HX_STACK_LINE(330)
									Float l16 = _this1->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
									HX_STACK_LINE(330)
									Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
									HX_STACK_LINE(330)
									Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
									HX_STACK_LINE(330)
									Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
									HX_STACK_LINE(330)
									Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
									HX_STACK_LINE(330)
									Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
									HX_STACK_LINE(330)
									Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
									HX_STACK_LINE(330)
									Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
									HX_STACK_LINE(330)
									Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
									HX_STACK_LINE(330)
									Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
									HX_STACK_LINE(330)
									Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
									HX_STACK_LINE(330)
									Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
									HX_STACK_LINE(330)
									Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
									HX_STACK_LINE(330)
									Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
									HX_STACK_LINE(330)
									Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
									HX_STACK_LINE(330)
									Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
									HX_STACK_LINE(330)
									Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
									HX_STACK_LINE(330)
									Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
									HX_STACK_LINE(330)
									Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
									HX_STACK_LINE(330)
									Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
									HX_STACK_LINE(330)
									Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
									HX_STACK_LINE(330)
									Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
									HX_STACK_LINE(330)
									Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
									HX_STACK_LINE(330)
									Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
									HX_STACK_LINE(330)
									_this1->m[(int)0] = (l23 * l27);
									HX_STACK_LINE(330)
									_this1->m[(int)4] = (l24 * l27);
									HX_STACK_LINE(330)
									_this1->m[(int)8] = (l25 * l27);
									HX_STACK_LINE(330)
									_this1->m[(int)12] = (l26 * l27);
									HX_STACK_LINE(330)
									_this1->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
									HX_STACK_LINE(330)
									_this1->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
									HX_STACK_LINE(330)
									_this1->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
									HX_STACK_LINE(330)
									_this1->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
									HX_STACK_LINE(330)
									_this1->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
									HX_STACK_LINE(330)
									_this1->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
									HX_STACK_LINE(330)
									_this1->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
									HX_STACK_LINE(330)
									_this1->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
									HX_STACK_LINE(330)
									_this1->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
									HX_STACK_LINE(330)
									_this1->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
									HX_STACK_LINE(330)
									_this1->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
									HX_STACK_LINE(330)
									_this1->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
								}
							}
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_localPivotScalingRotation;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(330)
									Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
									HX_STACK_LINE(330)
									Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
									HX_STACK_LINE(330)
									Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
									HX_STACK_LINE(330)
									Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
									HX_STACK_LINE(330)
									Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
									HX_STACK_LINE(330)
									Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
									HX_STACK_LINE(330)
									Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
									HX_STACK_LINE(330)
									Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
									HX_STACK_LINE(330)
									Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
									HX_STACK_LINE(330)
									Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
									HX_STACK_LINE(330)
									Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
									HX_STACK_LINE(330)
									Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
									HX_STACK_LINE(330)
									Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
									HX_STACK_LINE(330)
									Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
									HX_STACK_LINE(330)
									Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
									HX_STACK_LINE(330)
									Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
									HX_STACK_LINE(330)
									Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
									HX_STACK_LINE(330)
									Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
									HX_STACK_LINE(330)
									Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
									HX_STACK_LINE(330)
									Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
									HX_STACK_LINE(330)
									Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
									HX_STACK_LINE(330)
									Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
									HX_STACK_LINE(330)
									Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
									HX_STACK_LINE(330)
									Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
									HX_STACK_LINE(330)
									Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
									HX_STACK_LINE(330)
									Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
									HX_STACK_LINE(330)
									Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
									HX_STACK_LINE(330)
									Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
									HX_STACK_LINE(330)
									Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
									HX_STACK_LINE(330)
									Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
									HX_STACK_LINE(330)
									Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
									HX_STACK_LINE(330)
									Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
									HX_STACK_LINE(330)
									result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
									HX_STACK_LINE(330)
									result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
									HX_STACK_LINE(330)
									result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
									HX_STACK_LINE(330)
									result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
									HX_STACK_LINE(330)
									result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
									HX_STACK_LINE(330)
									result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
									HX_STACK_LINE(330)
									result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
									HX_STACK_LINE(330)
									result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
									HX_STACK_LINE(330)
									result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
									HX_STACK_LINE(330)
									result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
									HX_STACK_LINE(330)
									result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
									HX_STACK_LINE(330)
									result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
									HX_STACK_LINE(330)
									result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
									HX_STACK_LINE(330)
									result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
									HX_STACK_LINE(330)
									result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
									HX_STACK_LINE(330)
									result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
									HX_STACK_LINE(330)
									result;
								}
							}
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_rotateYByPI;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(330)
									Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
									HX_STACK_LINE(330)
									Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
									HX_STACK_LINE(330)
									Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
									HX_STACK_LINE(330)
									Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
									HX_STACK_LINE(330)
									Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
									HX_STACK_LINE(330)
									Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
									HX_STACK_LINE(330)
									Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
									HX_STACK_LINE(330)
									Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
									HX_STACK_LINE(330)
									Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
									HX_STACK_LINE(330)
									Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
									HX_STACK_LINE(330)
									Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
									HX_STACK_LINE(330)
									Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
									HX_STACK_LINE(330)
									Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
									HX_STACK_LINE(330)
									Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
									HX_STACK_LINE(330)
									Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
									HX_STACK_LINE(330)
									Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
									HX_STACK_LINE(330)
									Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
									HX_STACK_LINE(330)
									Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
									HX_STACK_LINE(330)
									Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
									HX_STACK_LINE(330)
									Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
									HX_STACK_LINE(330)
									Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
									HX_STACK_LINE(330)
									Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
									HX_STACK_LINE(330)
									Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
									HX_STACK_LINE(330)
									Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
									HX_STACK_LINE(330)
									Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
									HX_STACK_LINE(330)
									Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
									HX_STACK_LINE(330)
									Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
									HX_STACK_LINE(330)
									Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
									HX_STACK_LINE(330)
									Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
									HX_STACK_LINE(330)
									Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
									HX_STACK_LINE(330)
									Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
									HX_STACK_LINE(330)
									Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
									HX_STACK_LINE(330)
									result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
									HX_STACK_LINE(330)
									result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
									HX_STACK_LINE(330)
									result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
									HX_STACK_LINE(330)
									result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
									HX_STACK_LINE(330)
									result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
									HX_STACK_LINE(330)
									result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
									HX_STACK_LINE(330)
									result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
									HX_STACK_LINE(330)
									result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
									HX_STACK_LINE(330)
									result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
									HX_STACK_LINE(330)
									result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
									HX_STACK_LINE(330)
									result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
									HX_STACK_LINE(330)
									result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
									HX_STACK_LINE(330)
									result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
									HX_STACK_LINE(330)
									result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
									HX_STACK_LINE(330)
									result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
									HX_STACK_LINE(330)
									result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
									HX_STACK_LINE(330)
									result;
								}
							}
						}
						struct _Function_5_1{
							inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",330,0x2cff64c0)
								{
									HX_STACK_LINE(330)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _g4 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(330)
									return (_g4 != null());
								}
								return null();
							}
						};
						HX_STACK_LINE(330)
						if (((  (((  (((this->parent != null()))) ? bool(_Function_5_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_localPivotScalingRotation;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(330)
									Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
									HX_STACK_LINE(330)
									Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
									HX_STACK_LINE(330)
									Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
									HX_STACK_LINE(330)
									Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
									HX_STACK_LINE(330)
									Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
									HX_STACK_LINE(330)
									Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
									HX_STACK_LINE(330)
									Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
									HX_STACK_LINE(330)
									Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
									HX_STACK_LINE(330)
									Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
									HX_STACK_LINE(330)
									Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
									HX_STACK_LINE(330)
									Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
									HX_STACK_LINE(330)
									Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
									HX_STACK_LINE(330)
									Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
									HX_STACK_LINE(330)
									Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
									HX_STACK_LINE(330)
									Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
									HX_STACK_LINE(330)
									Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
									HX_STACK_LINE(330)
									Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
									HX_STACK_LINE(330)
									Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
									HX_STACK_LINE(330)
									Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
									HX_STACK_LINE(330)
									Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
									HX_STACK_LINE(330)
									Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
									HX_STACK_LINE(330)
									Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
									HX_STACK_LINE(330)
									Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
									HX_STACK_LINE(330)
									Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
									HX_STACK_LINE(330)
									Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
									HX_STACK_LINE(330)
									Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
									HX_STACK_LINE(330)
									Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
									HX_STACK_LINE(330)
									Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
									HX_STACK_LINE(330)
									Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
									HX_STACK_LINE(330)
									Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
									HX_STACK_LINE(330)
									Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
									HX_STACK_LINE(330)
									Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
									HX_STACK_LINE(330)
									result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
									HX_STACK_LINE(330)
									result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
									HX_STACK_LINE(330)
									result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
									HX_STACK_LINE(330)
									result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
									HX_STACK_LINE(330)
									result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
									HX_STACK_LINE(330)
									result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
									HX_STACK_LINE(330)
									result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
									HX_STACK_LINE(330)
									result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
									HX_STACK_LINE(330)
									result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
									HX_STACK_LINE(330)
									result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
									HX_STACK_LINE(330)
									result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
									HX_STACK_LINE(330)
									result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
									HX_STACK_LINE(330)
									result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
									HX_STACK_LINE(330)
									result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
									HX_STACK_LINE(330)
									result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
									HX_STACK_LINE(330)
									result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
									HX_STACK_LINE(330)
									result;
								}
							}
							HX_STACK_LINE(330)
							::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_localWorld;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(330)
									Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
									HX_STACK_LINE(330)
									Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
									HX_STACK_LINE(330)
									Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
									HX_STACK_LINE(330)
									Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
									HX_STACK_LINE(330)
									Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
									HX_STACK_LINE(330)
									Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
									HX_STACK_LINE(330)
									Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
									HX_STACK_LINE(330)
									Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
									HX_STACK_LINE(330)
									Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
									HX_STACK_LINE(330)
									Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
									HX_STACK_LINE(330)
									Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
									HX_STACK_LINE(330)
									Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
									HX_STACK_LINE(330)
									Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
									HX_STACK_LINE(330)
									Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
									HX_STACK_LINE(330)
									Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
									HX_STACK_LINE(330)
									Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
									HX_STACK_LINE(330)
									Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
									HX_STACK_LINE(330)
									Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
									HX_STACK_LINE(330)
									Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
									HX_STACK_LINE(330)
									Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
									HX_STACK_LINE(330)
									Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
									HX_STACK_LINE(330)
									Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
									HX_STACK_LINE(330)
									Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
									HX_STACK_LINE(330)
									Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
									HX_STACK_LINE(330)
									Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
									HX_STACK_LINE(330)
									Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
									HX_STACK_LINE(330)
									Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
									HX_STACK_LINE(330)
									Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
									HX_STACK_LINE(330)
									Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
									HX_STACK_LINE(330)
									Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
									HX_STACK_LINE(330)
									Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
									HX_STACK_LINE(330)
									Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
									HX_STACK_LINE(330)
									result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
									HX_STACK_LINE(330)
									result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
									HX_STACK_LINE(330)
									result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
									HX_STACK_LINE(330)
									result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
									HX_STACK_LINE(330)
									result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
									HX_STACK_LINE(330)
									result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
									HX_STACK_LINE(330)
									result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
									HX_STACK_LINE(330)
									result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
									HX_STACK_LINE(330)
									result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
									HX_STACK_LINE(330)
									result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
									HX_STACK_LINE(330)
									result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
									HX_STACK_LINE(330)
									result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
									HX_STACK_LINE(330)
									result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
									HX_STACK_LINE(330)
									result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
									HX_STACK_LINE(330)
									result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
									HX_STACK_LINE(330)
									result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
									HX_STACK_LINE(330)
									result;
								}
							}
						}
						else{
							HX_STACK_LINE(330)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_localPivotScalingRotation;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(330)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(330)
								Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(330)
								Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(330)
								Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(330)
								Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(330)
								Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(330)
								Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(330)
								Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(330)
								Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(330)
								Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(330)
								Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(330)
								Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(330)
								Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(330)
								Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(330)
								Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(330)
								Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(330)
								Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(330)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(330)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(330)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(330)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(330)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(330)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(330)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(330)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(330)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(330)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(330)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(330)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(330)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(330)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(330)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(330)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(330)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(330)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(330)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(330)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(330)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(330)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(330)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(330)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(330)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(330)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(330)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(330)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(330)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(330)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(330)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(330)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(330)
								result;
							}
						}
						HX_STACK_LINE(330)
						if (((this->_boundingInfo != null()))){
							HX_STACK_LINE(330)
							Float _g5 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(330)
							this->_scaleFactor = _g5;
							HX_STACK_LINE(330)
							Float _g6 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(330)
							this->_scaleFactor = _g6;
							struct _Function_6_1{
								inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",330,0x2cff64c0)
									{
										HX_STACK_LINE(330)
										Dynamic _g7 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
										HX_STACK_LINE(330)
										return (_g7 != null());
									}
									return null();
								}
							};
							HX_STACK_LINE(330)
							if (((  (((this->parent != null()))) ? bool(_Function_6_1::Block(this)) : bool(false) ))){
								HX_STACK_LINE(330)
								Dynamic _g8 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(330)
								Float _g9 = (this->_scaleFactor * _g8);		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(330)
								this->_scaleFactor = _g9;
							}
							HX_STACK_LINE(330)
							this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(330)
								int _g3 = this->subMeshes->length;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(330)
								while((true)){
									HX_STACK_LINE(330)
									if ((!(((_g1 < _g3))))){
										HX_STACK_LINE(330)
										break;
									}
									HX_STACK_LINE(330)
									int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
									HX_STACK_LINE(330)
									::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
									HX_STACK_LINE(330)
									subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
								}
							}
						}
						HX_STACK_LINE(330)
						{
							HX_STACK_LINE(330)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = this->_absolutePosition;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(330)
							_this1->x = this->_worldMatrix->m->__get((int)12);
							HX_STACK_LINE(330)
							_this1->y = this->_worldMatrix->m->__get((int)13);
							HX_STACK_LINE(330)
							_this1->z = this->_worldMatrix->m->__get((int)14);
						}
						HX_STACK_LINE(330)
						ret = this->_worldMatrix;
					}
					HX_STACK_LINE(330)
					ret;
				}
				HX_STACK_LINE(330)
				_this = this->_worldMatrix;
			}
			HX_STACK_LINE(330)
			{
				HX_STACK_LINE(330)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(330)
				result->m[(int)0] = _this->m->__get((int)0);
				HX_STACK_LINE(330)
				result->m[(int)1] = _this->m->__get((int)1);
				HX_STACK_LINE(330)
				result->m[(int)2] = _this->m->__get((int)2);
				HX_STACK_LINE(330)
				result->m[(int)3] = _this->m->__get((int)3);
				HX_STACK_LINE(330)
				result->m[(int)4] = _this->m->__get((int)4);
				HX_STACK_LINE(330)
				result->m[(int)5] = _this->m->__get((int)5);
				HX_STACK_LINE(330)
				result->m[(int)6] = _this->m->__get((int)6);
				HX_STACK_LINE(330)
				result->m[(int)7] = _this->m->__get((int)7);
				HX_STACK_LINE(330)
				result->m[(int)8] = _this->m->__get((int)8);
				HX_STACK_LINE(330)
				result->m[(int)9] = _this->m->__get((int)9);
				HX_STACK_LINE(330)
				result->m[(int)10] = _this->m->__get((int)10);
				HX_STACK_LINE(330)
				result->m[(int)11] = _this->m->__get((int)11);
				HX_STACK_LINE(330)
				result->m[(int)12] = _this->m->__get((int)12);
				HX_STACK_LINE(330)
				result->m[(int)13] = _this->m->__get((int)13);
				HX_STACK_LINE(330)
				result->m[(int)14] = _this->m->__get((int)14);
				HX_STACK_LINE(330)
				result->m[(int)15] = _this->m->__get((int)15);
				HX_STACK_LINE(330)
				worldMatrix = result;
			}
		}
		HX_STACK_LINE(332)
		worldMatrix->m[(int)12] = absolutePositionX;
		HX_STACK_LINE(333)
		worldMatrix->m[(int)13] = absolutePositionY;
		HX_STACK_LINE(334)
		worldMatrix->m[(int)14] = absolutePositionZ;
		HX_STACK_LINE(336)
		::com::gamestudiohx::babylonhx::tools::math::Matrix invertRotationMatrix;		HX_STACK_VAR(invertRotationMatrix,"invertRotationMatrix");
		HX_STACK_LINE(336)
		{
			HX_STACK_LINE(336)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localRotation;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(336)
			{
				HX_STACK_LINE(336)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(336)
				result->m[(int)0] = _this->m->__get((int)0);
				HX_STACK_LINE(336)
				result->m[(int)1] = _this->m->__get((int)1);
				HX_STACK_LINE(336)
				result->m[(int)2] = _this->m->__get((int)2);
				HX_STACK_LINE(336)
				result->m[(int)3] = _this->m->__get((int)3);
				HX_STACK_LINE(336)
				result->m[(int)4] = _this->m->__get((int)4);
				HX_STACK_LINE(336)
				result->m[(int)5] = _this->m->__get((int)5);
				HX_STACK_LINE(336)
				result->m[(int)6] = _this->m->__get((int)6);
				HX_STACK_LINE(336)
				result->m[(int)7] = _this->m->__get((int)7);
				HX_STACK_LINE(336)
				result->m[(int)8] = _this->m->__get((int)8);
				HX_STACK_LINE(336)
				result->m[(int)9] = _this->m->__get((int)9);
				HX_STACK_LINE(336)
				result->m[(int)10] = _this->m->__get((int)10);
				HX_STACK_LINE(336)
				result->m[(int)11] = _this->m->__get((int)11);
				HX_STACK_LINE(336)
				result->m[(int)12] = _this->m->__get((int)12);
				HX_STACK_LINE(336)
				result->m[(int)13] = _this->m->__get((int)13);
				HX_STACK_LINE(336)
				result->m[(int)14] = _this->m->__get((int)14);
				HX_STACK_LINE(336)
				result->m[(int)15] = _this->m->__get((int)15);
				HX_STACK_LINE(336)
				invertRotationMatrix = result;
			}
		}
		HX_STACK_LINE(337)
		{
			HX_STACK_LINE(337)
			Float l1 = invertRotationMatrix->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
			HX_STACK_LINE(337)
			Float l2 = invertRotationMatrix->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
			HX_STACK_LINE(337)
			Float l3 = invertRotationMatrix->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
			HX_STACK_LINE(337)
			Float l4 = invertRotationMatrix->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
			HX_STACK_LINE(337)
			Float l5 = invertRotationMatrix->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
			HX_STACK_LINE(337)
			Float l6 = invertRotationMatrix->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
			HX_STACK_LINE(337)
			Float l7 = invertRotationMatrix->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
			HX_STACK_LINE(337)
			Float l8 = invertRotationMatrix->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
			HX_STACK_LINE(337)
			Float l9 = invertRotationMatrix->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
			HX_STACK_LINE(337)
			Float l10 = invertRotationMatrix->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
			HX_STACK_LINE(337)
			Float l11 = invertRotationMatrix->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
			HX_STACK_LINE(337)
			Float l12 = invertRotationMatrix->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
			HX_STACK_LINE(337)
			Float l13 = invertRotationMatrix->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
			HX_STACK_LINE(337)
			Float l14 = invertRotationMatrix->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
			HX_STACK_LINE(337)
			Float l15 = invertRotationMatrix->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
			HX_STACK_LINE(337)
			Float l16 = invertRotationMatrix->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
			HX_STACK_LINE(337)
			Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
			HX_STACK_LINE(337)
			Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
			HX_STACK_LINE(337)
			Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
			HX_STACK_LINE(337)
			Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
			HX_STACK_LINE(337)
			Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
			HX_STACK_LINE(337)
			Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
			HX_STACK_LINE(337)
			Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
			HX_STACK_LINE(337)
			Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
			HX_STACK_LINE(337)
			Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
			HX_STACK_LINE(337)
			Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
			HX_STACK_LINE(337)
			Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
			HX_STACK_LINE(337)
			Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
			HX_STACK_LINE(337)
			Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
			HX_STACK_LINE(337)
			Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
			HX_STACK_LINE(337)
			Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
			HX_STACK_LINE(337)
			Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
			HX_STACK_LINE(337)
			Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
			HX_STACK_LINE(337)
			Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
			HX_STACK_LINE(337)
			Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
			HX_STACK_LINE(337)
			Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
			HX_STACK_LINE(337)
			Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
			HX_STACK_LINE(337)
			Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
			HX_STACK_LINE(337)
			Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
			HX_STACK_LINE(337)
			invertRotationMatrix->m[(int)0] = (l23 * l27);
			HX_STACK_LINE(337)
			invertRotationMatrix->m[(int)4] = (l24 * l27);
			HX_STACK_LINE(337)
			invertRotationMatrix->m[(int)8] = (l25 * l27);
			HX_STACK_LINE(337)
			invertRotationMatrix->m[(int)12] = (l26 * l27);
			HX_STACK_LINE(337)
			invertRotationMatrix->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
			HX_STACK_LINE(337)
			invertRotationMatrix->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
			HX_STACK_LINE(337)
			invertRotationMatrix->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
			HX_STACK_LINE(337)
			invertRotationMatrix->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
			HX_STACK_LINE(337)
			invertRotationMatrix->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
			HX_STACK_LINE(337)
			invertRotationMatrix->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
			HX_STACK_LINE(337)
			invertRotationMatrix->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
			HX_STACK_LINE(337)
			invertRotationMatrix->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
			HX_STACK_LINE(337)
			invertRotationMatrix->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
			HX_STACK_LINE(337)
			invertRotationMatrix->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
			HX_STACK_LINE(337)
			invertRotationMatrix->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
			HX_STACK_LINE(337)
			invertRotationMatrix->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
		}
		HX_STACK_LINE(339)
		::com::gamestudiohx::babylonhx::tools::math::Matrix invertScalingMatrix;		HX_STACK_VAR(invertScalingMatrix,"invertScalingMatrix");
		HX_STACK_LINE(339)
		{
			HX_STACK_LINE(339)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localScaling;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(339)
			{
				HX_STACK_LINE(339)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(339)
				result->m[(int)0] = _this->m->__get((int)0);
				HX_STACK_LINE(339)
				result->m[(int)1] = _this->m->__get((int)1);
				HX_STACK_LINE(339)
				result->m[(int)2] = _this->m->__get((int)2);
				HX_STACK_LINE(339)
				result->m[(int)3] = _this->m->__get((int)3);
				HX_STACK_LINE(339)
				result->m[(int)4] = _this->m->__get((int)4);
				HX_STACK_LINE(339)
				result->m[(int)5] = _this->m->__get((int)5);
				HX_STACK_LINE(339)
				result->m[(int)6] = _this->m->__get((int)6);
				HX_STACK_LINE(339)
				result->m[(int)7] = _this->m->__get((int)7);
				HX_STACK_LINE(339)
				result->m[(int)8] = _this->m->__get((int)8);
				HX_STACK_LINE(339)
				result->m[(int)9] = _this->m->__get((int)9);
				HX_STACK_LINE(339)
				result->m[(int)10] = _this->m->__get((int)10);
				HX_STACK_LINE(339)
				result->m[(int)11] = _this->m->__get((int)11);
				HX_STACK_LINE(339)
				result->m[(int)12] = _this->m->__get((int)12);
				HX_STACK_LINE(339)
				result->m[(int)13] = _this->m->__get((int)13);
				HX_STACK_LINE(339)
				result->m[(int)14] = _this->m->__get((int)14);
				HX_STACK_LINE(339)
				result->m[(int)15] = _this->m->__get((int)15);
				HX_STACK_LINE(339)
				invertScalingMatrix = result;
			}
		}
		HX_STACK_LINE(340)
		{
			HX_STACK_LINE(340)
			Float l1 = invertScalingMatrix->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
			HX_STACK_LINE(340)
			Float l2 = invertScalingMatrix->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
			HX_STACK_LINE(340)
			Float l3 = invertScalingMatrix->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
			HX_STACK_LINE(340)
			Float l4 = invertScalingMatrix->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
			HX_STACK_LINE(340)
			Float l5 = invertScalingMatrix->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
			HX_STACK_LINE(340)
			Float l6 = invertScalingMatrix->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
			HX_STACK_LINE(340)
			Float l7 = invertScalingMatrix->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
			HX_STACK_LINE(340)
			Float l8 = invertScalingMatrix->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
			HX_STACK_LINE(340)
			Float l9 = invertScalingMatrix->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
			HX_STACK_LINE(340)
			Float l10 = invertScalingMatrix->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
			HX_STACK_LINE(340)
			Float l11 = invertScalingMatrix->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
			HX_STACK_LINE(340)
			Float l12 = invertScalingMatrix->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
			HX_STACK_LINE(340)
			Float l13 = invertScalingMatrix->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
			HX_STACK_LINE(340)
			Float l14 = invertScalingMatrix->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
			HX_STACK_LINE(340)
			Float l15 = invertScalingMatrix->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
			HX_STACK_LINE(340)
			Float l16 = invertScalingMatrix->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
			HX_STACK_LINE(340)
			Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
			HX_STACK_LINE(340)
			Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
			HX_STACK_LINE(340)
			Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
			HX_STACK_LINE(340)
			Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
			HX_STACK_LINE(340)
			Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
			HX_STACK_LINE(340)
			Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
			HX_STACK_LINE(340)
			Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
			HX_STACK_LINE(340)
			Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
			HX_STACK_LINE(340)
			Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
			HX_STACK_LINE(340)
			Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
			HX_STACK_LINE(340)
			Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
			HX_STACK_LINE(340)
			Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
			HX_STACK_LINE(340)
			Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
			HX_STACK_LINE(340)
			Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
			HX_STACK_LINE(340)
			Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
			HX_STACK_LINE(340)
			Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
			HX_STACK_LINE(340)
			Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
			HX_STACK_LINE(340)
			Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
			HX_STACK_LINE(340)
			Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
			HX_STACK_LINE(340)
			Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
			HX_STACK_LINE(340)
			Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
			HX_STACK_LINE(340)
			Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
			HX_STACK_LINE(340)
			Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
			HX_STACK_LINE(340)
			invertScalingMatrix->m[(int)0] = (l23 * l27);
			HX_STACK_LINE(340)
			invertScalingMatrix->m[(int)4] = (l24 * l27);
			HX_STACK_LINE(340)
			invertScalingMatrix->m[(int)8] = (l25 * l27);
			HX_STACK_LINE(340)
			invertScalingMatrix->m[(int)12] = (l26 * l27);
			HX_STACK_LINE(340)
			invertScalingMatrix->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
			HX_STACK_LINE(340)
			invertScalingMatrix->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
			HX_STACK_LINE(340)
			invertScalingMatrix->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
			HX_STACK_LINE(340)
			invertScalingMatrix->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
			HX_STACK_LINE(340)
			invertScalingMatrix->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
			HX_STACK_LINE(340)
			invertScalingMatrix->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
			HX_STACK_LINE(340)
			invertScalingMatrix->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
			HX_STACK_LINE(340)
			invertScalingMatrix->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
			HX_STACK_LINE(340)
			invertScalingMatrix->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
			HX_STACK_LINE(340)
			invertScalingMatrix->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
			HX_STACK_LINE(340)
			invertScalingMatrix->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
			HX_STACK_LINE(340)
			invertScalingMatrix->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
		}
		HX_STACK_LINE(342)
		::com::gamestudiohx::babylonhx::tools::math::Matrix invertPivotMatrix;		HX_STACK_VAR(invertPivotMatrix,"invertPivotMatrix");
		HX_STACK_LINE(342)
		{
			HX_STACK_LINE(342)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(342)
			{
				HX_STACK_LINE(342)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(342)
				result->m[(int)0] = _this->m->__get((int)0);
				HX_STACK_LINE(342)
				result->m[(int)1] = _this->m->__get((int)1);
				HX_STACK_LINE(342)
				result->m[(int)2] = _this->m->__get((int)2);
				HX_STACK_LINE(342)
				result->m[(int)3] = _this->m->__get((int)3);
				HX_STACK_LINE(342)
				result->m[(int)4] = _this->m->__get((int)4);
				HX_STACK_LINE(342)
				result->m[(int)5] = _this->m->__get((int)5);
				HX_STACK_LINE(342)
				result->m[(int)6] = _this->m->__get((int)6);
				HX_STACK_LINE(342)
				result->m[(int)7] = _this->m->__get((int)7);
				HX_STACK_LINE(342)
				result->m[(int)8] = _this->m->__get((int)8);
				HX_STACK_LINE(342)
				result->m[(int)9] = _this->m->__get((int)9);
				HX_STACK_LINE(342)
				result->m[(int)10] = _this->m->__get((int)10);
				HX_STACK_LINE(342)
				result->m[(int)11] = _this->m->__get((int)11);
				HX_STACK_LINE(342)
				result->m[(int)12] = _this->m->__get((int)12);
				HX_STACK_LINE(342)
				result->m[(int)13] = _this->m->__get((int)13);
				HX_STACK_LINE(342)
				result->m[(int)14] = _this->m->__get((int)14);
				HX_STACK_LINE(342)
				result->m[(int)15] = _this->m->__get((int)15);
				HX_STACK_LINE(342)
				invertPivotMatrix = result;
			}
		}
		HX_STACK_LINE(343)
		{
			HX_STACK_LINE(343)
			Float l1 = invertPivotMatrix->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
			HX_STACK_LINE(343)
			Float l2 = invertPivotMatrix->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
			HX_STACK_LINE(343)
			Float l3 = invertPivotMatrix->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
			HX_STACK_LINE(343)
			Float l4 = invertPivotMatrix->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
			HX_STACK_LINE(343)
			Float l5 = invertPivotMatrix->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
			HX_STACK_LINE(343)
			Float l6 = invertPivotMatrix->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
			HX_STACK_LINE(343)
			Float l7 = invertPivotMatrix->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
			HX_STACK_LINE(343)
			Float l8 = invertPivotMatrix->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
			HX_STACK_LINE(343)
			Float l9 = invertPivotMatrix->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
			HX_STACK_LINE(343)
			Float l10 = invertPivotMatrix->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
			HX_STACK_LINE(343)
			Float l11 = invertPivotMatrix->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
			HX_STACK_LINE(343)
			Float l12 = invertPivotMatrix->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
			HX_STACK_LINE(343)
			Float l13 = invertPivotMatrix->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
			HX_STACK_LINE(343)
			Float l14 = invertPivotMatrix->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
			HX_STACK_LINE(343)
			Float l15 = invertPivotMatrix->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
			HX_STACK_LINE(343)
			Float l16 = invertPivotMatrix->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
			HX_STACK_LINE(343)
			Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
			HX_STACK_LINE(343)
			Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
			HX_STACK_LINE(343)
			Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
			HX_STACK_LINE(343)
			Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
			HX_STACK_LINE(343)
			Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
			HX_STACK_LINE(343)
			Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
			HX_STACK_LINE(343)
			Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
			HX_STACK_LINE(343)
			Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
			HX_STACK_LINE(343)
			Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
			HX_STACK_LINE(343)
			Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
			HX_STACK_LINE(343)
			Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
			HX_STACK_LINE(343)
			Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
			HX_STACK_LINE(343)
			Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
			HX_STACK_LINE(343)
			Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
			HX_STACK_LINE(343)
			Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
			HX_STACK_LINE(343)
			Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
			HX_STACK_LINE(343)
			Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
			HX_STACK_LINE(343)
			Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
			HX_STACK_LINE(343)
			Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
			HX_STACK_LINE(343)
			Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
			HX_STACK_LINE(343)
			Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
			HX_STACK_LINE(343)
			Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
			HX_STACK_LINE(343)
			Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
			HX_STACK_LINE(343)
			invertPivotMatrix->m[(int)0] = (l23 * l27);
			HX_STACK_LINE(343)
			invertPivotMatrix->m[(int)4] = (l24 * l27);
			HX_STACK_LINE(343)
			invertPivotMatrix->m[(int)8] = (l25 * l27);
			HX_STACK_LINE(343)
			invertPivotMatrix->m[(int)12] = (l26 * l27);
			HX_STACK_LINE(343)
			invertPivotMatrix->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
			HX_STACK_LINE(343)
			invertPivotMatrix->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
			HX_STACK_LINE(343)
			invertPivotMatrix->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
			HX_STACK_LINE(343)
			invertPivotMatrix->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
			HX_STACK_LINE(343)
			invertPivotMatrix->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
			HX_STACK_LINE(343)
			invertPivotMatrix->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
			HX_STACK_LINE(343)
			invertPivotMatrix->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
			HX_STACK_LINE(343)
			invertPivotMatrix->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
			HX_STACK_LINE(343)
			invertPivotMatrix->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
			HX_STACK_LINE(343)
			invertPivotMatrix->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
			HX_STACK_LINE(343)
			invertPivotMatrix->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
			HX_STACK_LINE(343)
			invertPivotMatrix->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
		}
		HX_STACK_LINE(345)
		::com::gamestudiohx::babylonhx::tools::math::Matrix translateMatrix;		HX_STACK_VAR(translateMatrix,"translateMatrix");
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(345)
			{
				HX_STACK_LINE(345)
				Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
				HX_STACK_LINE(345)
				Float tm0 = invertRotationMatrix->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
				HX_STACK_LINE(345)
				Float tm1 = invertRotationMatrix->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
				HX_STACK_LINE(345)
				Float tm2 = invertRotationMatrix->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
				HX_STACK_LINE(345)
				Float tm3 = invertRotationMatrix->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
				HX_STACK_LINE(345)
				Float tm4 = invertRotationMatrix->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
				HX_STACK_LINE(345)
				Float tm5 = invertRotationMatrix->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
				HX_STACK_LINE(345)
				Float tm6 = invertRotationMatrix->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
				HX_STACK_LINE(345)
				Float tm7 = invertRotationMatrix->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
				HX_STACK_LINE(345)
				Float tm8 = invertRotationMatrix->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
				HX_STACK_LINE(345)
				Float tm9 = invertRotationMatrix->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
				HX_STACK_LINE(345)
				Float tm10 = invertRotationMatrix->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
				HX_STACK_LINE(345)
				Float tm11 = invertRotationMatrix->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
				HX_STACK_LINE(345)
				Float tm12 = invertRotationMatrix->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
				HX_STACK_LINE(345)
				Float tm13 = invertRotationMatrix->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
				HX_STACK_LINE(345)
				Float tm14 = invertRotationMatrix->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
				HX_STACK_LINE(345)
				Float tm15 = invertRotationMatrix->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
				HX_STACK_LINE(345)
				Float om0 = invertScalingMatrix->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
				HX_STACK_LINE(345)
				Float om1 = invertScalingMatrix->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
				HX_STACK_LINE(345)
				Float om2 = invertScalingMatrix->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
				HX_STACK_LINE(345)
				Float om3 = invertScalingMatrix->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
				HX_STACK_LINE(345)
				Float om4 = invertScalingMatrix->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
				HX_STACK_LINE(345)
				Float om5 = invertScalingMatrix->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
				HX_STACK_LINE(345)
				Float om6 = invertScalingMatrix->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
				HX_STACK_LINE(345)
				Float om7 = invertScalingMatrix->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
				HX_STACK_LINE(345)
				Float om8 = invertScalingMatrix->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
				HX_STACK_LINE(345)
				Float om9 = invertScalingMatrix->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
				HX_STACK_LINE(345)
				Float om10 = invertScalingMatrix->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
				HX_STACK_LINE(345)
				Float om11 = invertScalingMatrix->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
				HX_STACK_LINE(345)
				Float om12 = invertScalingMatrix->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
				HX_STACK_LINE(345)
				Float om13 = invertScalingMatrix->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
				HX_STACK_LINE(345)
				Float om14 = invertScalingMatrix->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
				HX_STACK_LINE(345)
				Float om15 = invertScalingMatrix->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
				HX_STACK_LINE(345)
				result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
				HX_STACK_LINE(345)
				result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
				HX_STACK_LINE(345)
				result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
				HX_STACK_LINE(345)
				result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
				HX_STACK_LINE(345)
				result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
				HX_STACK_LINE(345)
				result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
				HX_STACK_LINE(345)
				result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
				HX_STACK_LINE(345)
				result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
				HX_STACK_LINE(345)
				result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
				HX_STACK_LINE(345)
				result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
				HX_STACK_LINE(345)
				result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
				HX_STACK_LINE(345)
				result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
				HX_STACK_LINE(345)
				result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
				HX_STACK_LINE(345)
				result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
				HX_STACK_LINE(345)
				result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
				HX_STACK_LINE(345)
				result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
				HX_STACK_LINE(345)
				result1;
			}
			HX_STACK_LINE(345)
			translateMatrix = result;
		}
		HX_STACK_LINE(347)
		{
			HX_STACK_LINE(347)
			Array< Float > result = invertScalingMatrix->m;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(347)
			Float tm0 = translateMatrix->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
			HX_STACK_LINE(347)
			Float tm1 = translateMatrix->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
			HX_STACK_LINE(347)
			Float tm2 = translateMatrix->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
			HX_STACK_LINE(347)
			Float tm3 = translateMatrix->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
			HX_STACK_LINE(347)
			Float tm4 = translateMatrix->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
			HX_STACK_LINE(347)
			Float tm5 = translateMatrix->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
			HX_STACK_LINE(347)
			Float tm6 = translateMatrix->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
			HX_STACK_LINE(347)
			Float tm7 = translateMatrix->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
			HX_STACK_LINE(347)
			Float tm8 = translateMatrix->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
			HX_STACK_LINE(347)
			Float tm9 = translateMatrix->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
			HX_STACK_LINE(347)
			Float tm10 = translateMatrix->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
			HX_STACK_LINE(347)
			Float tm11 = translateMatrix->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
			HX_STACK_LINE(347)
			Float tm12 = translateMatrix->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
			HX_STACK_LINE(347)
			Float tm13 = translateMatrix->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
			HX_STACK_LINE(347)
			Float tm14 = translateMatrix->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
			HX_STACK_LINE(347)
			Float tm15 = translateMatrix->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
			HX_STACK_LINE(347)
			Float om0 = invertPivotMatrix->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
			HX_STACK_LINE(347)
			Float om1 = invertPivotMatrix->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
			HX_STACK_LINE(347)
			Float om2 = invertPivotMatrix->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
			HX_STACK_LINE(347)
			Float om3 = invertPivotMatrix->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
			HX_STACK_LINE(347)
			Float om4 = invertPivotMatrix->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
			HX_STACK_LINE(347)
			Float om5 = invertPivotMatrix->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
			HX_STACK_LINE(347)
			Float om6 = invertPivotMatrix->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
			HX_STACK_LINE(347)
			Float om7 = invertPivotMatrix->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
			HX_STACK_LINE(347)
			Float om8 = invertPivotMatrix->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
			HX_STACK_LINE(347)
			Float om9 = invertPivotMatrix->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
			HX_STACK_LINE(347)
			Float om10 = invertPivotMatrix->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
			HX_STACK_LINE(347)
			Float om11 = invertPivotMatrix->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
			HX_STACK_LINE(347)
			Float om12 = invertPivotMatrix->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
			HX_STACK_LINE(347)
			Float om13 = invertPivotMatrix->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
			HX_STACK_LINE(347)
			Float om14 = invertPivotMatrix->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
			HX_STACK_LINE(347)
			Float om15 = invertPivotMatrix->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
			HX_STACK_LINE(347)
			result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
			HX_STACK_LINE(347)
			result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
			HX_STACK_LINE(347)
			result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
			HX_STACK_LINE(347)
			result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
			HX_STACK_LINE(347)
			result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
			HX_STACK_LINE(347)
			result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
			HX_STACK_LINE(347)
			result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
			HX_STACK_LINE(347)
			result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
			HX_STACK_LINE(347)
			result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
			HX_STACK_LINE(347)
			result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
			HX_STACK_LINE(347)
			result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
			HX_STACK_LINE(347)
			result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
			HX_STACK_LINE(347)
			result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
			HX_STACK_LINE(347)
			result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
			HX_STACK_LINE(347)
			result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
			HX_STACK_LINE(347)
			result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
			HX_STACK_LINE(347)
			result;
		}
		HX_STACK_LINE(348)
		{
			HX_STACK_LINE(348)
			Array< Float > result = translateMatrix->m;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(348)
			Float tm0 = invertScalingMatrix->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
			HX_STACK_LINE(348)
			Float tm1 = invertScalingMatrix->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
			HX_STACK_LINE(348)
			Float tm2 = invertScalingMatrix->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
			HX_STACK_LINE(348)
			Float tm3 = invertScalingMatrix->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
			HX_STACK_LINE(348)
			Float tm4 = invertScalingMatrix->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
			HX_STACK_LINE(348)
			Float tm5 = invertScalingMatrix->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
			HX_STACK_LINE(348)
			Float tm6 = invertScalingMatrix->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
			HX_STACK_LINE(348)
			Float tm7 = invertScalingMatrix->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
			HX_STACK_LINE(348)
			Float tm8 = invertScalingMatrix->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
			HX_STACK_LINE(348)
			Float tm9 = invertScalingMatrix->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
			HX_STACK_LINE(348)
			Float tm10 = invertScalingMatrix->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
			HX_STACK_LINE(348)
			Float tm11 = invertScalingMatrix->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
			HX_STACK_LINE(348)
			Float tm12 = invertScalingMatrix->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
			HX_STACK_LINE(348)
			Float tm13 = invertScalingMatrix->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
			HX_STACK_LINE(348)
			Float tm14 = invertScalingMatrix->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
			HX_STACK_LINE(348)
			Float tm15 = invertScalingMatrix->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
			HX_STACK_LINE(348)
			Float om0 = worldMatrix->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
			HX_STACK_LINE(348)
			Float om1 = worldMatrix->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
			HX_STACK_LINE(348)
			Float om2 = worldMatrix->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
			HX_STACK_LINE(348)
			Float om3 = worldMatrix->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
			HX_STACK_LINE(348)
			Float om4 = worldMatrix->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
			HX_STACK_LINE(348)
			Float om5 = worldMatrix->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
			HX_STACK_LINE(348)
			Float om6 = worldMatrix->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
			HX_STACK_LINE(348)
			Float om7 = worldMatrix->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
			HX_STACK_LINE(348)
			Float om8 = worldMatrix->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
			HX_STACK_LINE(348)
			Float om9 = worldMatrix->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
			HX_STACK_LINE(348)
			Float om10 = worldMatrix->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
			HX_STACK_LINE(348)
			Float om11 = worldMatrix->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
			HX_STACK_LINE(348)
			Float om12 = worldMatrix->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
			HX_STACK_LINE(348)
			Float om13 = worldMatrix->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
			HX_STACK_LINE(348)
			Float om14 = worldMatrix->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
			HX_STACK_LINE(348)
			Float om15 = worldMatrix->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
			HX_STACK_LINE(348)
			result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
			HX_STACK_LINE(348)
			result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
			HX_STACK_LINE(348)
			result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
			HX_STACK_LINE(348)
			result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
			HX_STACK_LINE(348)
			result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
			HX_STACK_LINE(348)
			result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
			HX_STACK_LINE(348)
			result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
			HX_STACK_LINE(348)
			result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
			HX_STACK_LINE(348)
			result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
			HX_STACK_LINE(348)
			result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
			HX_STACK_LINE(348)
			result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
			HX_STACK_LINE(348)
			result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
			HX_STACK_LINE(348)
			result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
			HX_STACK_LINE(348)
			result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
			HX_STACK_LINE(348)
			result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
			HX_STACK_LINE(348)
			result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
			HX_STACK_LINE(348)
			result;
		}
		HX_STACK_LINE(350)
		if (((this->parent != null()))){
			HX_STACK_LINE(351)
			::com::gamestudiohx::babylonhx::tools::math::Matrix invertParentWorldMatrix;		HX_STACK_VAR(invertParentWorldMatrix,"invertParentWorldMatrix");
			HX_STACK_LINE(351)
			{
				HX_STACK_LINE(351)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->parent->getWorldMatrix();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(351)
				{
					HX_STACK_LINE(351)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(351)
					result->m[(int)0] = _this->m->__get((int)0);
					HX_STACK_LINE(351)
					result->m[(int)1] = _this->m->__get((int)1);
					HX_STACK_LINE(351)
					result->m[(int)2] = _this->m->__get((int)2);
					HX_STACK_LINE(351)
					result->m[(int)3] = _this->m->__get((int)3);
					HX_STACK_LINE(351)
					result->m[(int)4] = _this->m->__get((int)4);
					HX_STACK_LINE(351)
					result->m[(int)5] = _this->m->__get((int)5);
					HX_STACK_LINE(351)
					result->m[(int)6] = _this->m->__get((int)6);
					HX_STACK_LINE(351)
					result->m[(int)7] = _this->m->__get((int)7);
					HX_STACK_LINE(351)
					result->m[(int)8] = _this->m->__get((int)8);
					HX_STACK_LINE(351)
					result->m[(int)9] = _this->m->__get((int)9);
					HX_STACK_LINE(351)
					result->m[(int)10] = _this->m->__get((int)10);
					HX_STACK_LINE(351)
					result->m[(int)11] = _this->m->__get((int)11);
					HX_STACK_LINE(351)
					result->m[(int)12] = _this->m->__get((int)12);
					HX_STACK_LINE(351)
					result->m[(int)13] = _this->m->__get((int)13);
					HX_STACK_LINE(351)
					result->m[(int)14] = _this->m->__get((int)14);
					HX_STACK_LINE(351)
					result->m[(int)15] = _this->m->__get((int)15);
					HX_STACK_LINE(351)
					invertParentWorldMatrix = result;
				}
			}
			HX_STACK_LINE(352)
			{
				HX_STACK_LINE(352)
				Float l1 = invertParentWorldMatrix->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
				HX_STACK_LINE(352)
				Float l2 = invertParentWorldMatrix->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
				HX_STACK_LINE(352)
				Float l3 = invertParentWorldMatrix->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
				HX_STACK_LINE(352)
				Float l4 = invertParentWorldMatrix->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
				HX_STACK_LINE(352)
				Float l5 = invertParentWorldMatrix->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
				HX_STACK_LINE(352)
				Float l6 = invertParentWorldMatrix->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
				HX_STACK_LINE(352)
				Float l7 = invertParentWorldMatrix->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
				HX_STACK_LINE(352)
				Float l8 = invertParentWorldMatrix->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
				HX_STACK_LINE(352)
				Float l9 = invertParentWorldMatrix->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
				HX_STACK_LINE(352)
				Float l10 = invertParentWorldMatrix->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
				HX_STACK_LINE(352)
				Float l11 = invertParentWorldMatrix->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
				HX_STACK_LINE(352)
				Float l12 = invertParentWorldMatrix->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
				HX_STACK_LINE(352)
				Float l13 = invertParentWorldMatrix->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
				HX_STACK_LINE(352)
				Float l14 = invertParentWorldMatrix->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
				HX_STACK_LINE(352)
				Float l15 = invertParentWorldMatrix->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
				HX_STACK_LINE(352)
				Float l16 = invertParentWorldMatrix->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
				HX_STACK_LINE(352)
				Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
				HX_STACK_LINE(352)
				Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
				HX_STACK_LINE(352)
				Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
				HX_STACK_LINE(352)
				Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
				HX_STACK_LINE(352)
				Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
				HX_STACK_LINE(352)
				Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
				HX_STACK_LINE(352)
				Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
				HX_STACK_LINE(352)
				Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
				HX_STACK_LINE(352)
				Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
				HX_STACK_LINE(352)
				Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
				HX_STACK_LINE(352)
				Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
				HX_STACK_LINE(352)
				Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
				HX_STACK_LINE(352)
				Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
				HX_STACK_LINE(352)
				Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
				HX_STACK_LINE(352)
				Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
				HX_STACK_LINE(352)
				Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
				HX_STACK_LINE(352)
				Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
				HX_STACK_LINE(352)
				Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
				HX_STACK_LINE(352)
				Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
				HX_STACK_LINE(352)
				Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
				HX_STACK_LINE(352)
				Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
				HX_STACK_LINE(352)
				Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
				HX_STACK_LINE(352)
				Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
				HX_STACK_LINE(352)
				invertParentWorldMatrix->m[(int)0] = (l23 * l27);
				HX_STACK_LINE(352)
				invertParentWorldMatrix->m[(int)4] = (l24 * l27);
				HX_STACK_LINE(352)
				invertParentWorldMatrix->m[(int)8] = (l25 * l27);
				HX_STACK_LINE(352)
				invertParentWorldMatrix->m[(int)12] = (l26 * l27);
				HX_STACK_LINE(352)
				invertParentWorldMatrix->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
				HX_STACK_LINE(352)
				invertParentWorldMatrix->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
				HX_STACK_LINE(352)
				invertParentWorldMatrix->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
				HX_STACK_LINE(352)
				invertParentWorldMatrix->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
				HX_STACK_LINE(352)
				invertParentWorldMatrix->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
				HX_STACK_LINE(352)
				invertParentWorldMatrix->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
				HX_STACK_LINE(352)
				invertParentWorldMatrix->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
				HX_STACK_LINE(352)
				invertParentWorldMatrix->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
				HX_STACK_LINE(352)
				invertParentWorldMatrix->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
				HX_STACK_LINE(352)
				invertParentWorldMatrix->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
				HX_STACK_LINE(352)
				invertParentWorldMatrix->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
				HX_STACK_LINE(352)
				invertParentWorldMatrix->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
			}
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(354)
				Array< Float > result = invertScalingMatrix->m;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(354)
				Float tm0 = translateMatrix->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
				HX_STACK_LINE(354)
				Float tm1 = translateMatrix->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
				HX_STACK_LINE(354)
				Float tm2 = translateMatrix->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
				HX_STACK_LINE(354)
				Float tm3 = translateMatrix->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
				HX_STACK_LINE(354)
				Float tm4 = translateMatrix->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
				HX_STACK_LINE(354)
				Float tm5 = translateMatrix->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
				HX_STACK_LINE(354)
				Float tm6 = translateMatrix->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
				HX_STACK_LINE(354)
				Float tm7 = translateMatrix->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
				HX_STACK_LINE(354)
				Float tm8 = translateMatrix->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
				HX_STACK_LINE(354)
				Float tm9 = translateMatrix->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
				HX_STACK_LINE(354)
				Float tm10 = translateMatrix->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
				HX_STACK_LINE(354)
				Float tm11 = translateMatrix->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
				HX_STACK_LINE(354)
				Float tm12 = translateMatrix->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
				HX_STACK_LINE(354)
				Float tm13 = translateMatrix->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
				HX_STACK_LINE(354)
				Float tm14 = translateMatrix->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
				HX_STACK_LINE(354)
				Float tm15 = translateMatrix->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
				HX_STACK_LINE(354)
				Float om0 = invertParentWorldMatrix->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
				HX_STACK_LINE(354)
				Float om1 = invertParentWorldMatrix->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
				HX_STACK_LINE(354)
				Float om2 = invertParentWorldMatrix->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
				HX_STACK_LINE(354)
				Float om3 = invertParentWorldMatrix->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
				HX_STACK_LINE(354)
				Float om4 = invertParentWorldMatrix->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
				HX_STACK_LINE(354)
				Float om5 = invertParentWorldMatrix->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
				HX_STACK_LINE(354)
				Float om6 = invertParentWorldMatrix->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
				HX_STACK_LINE(354)
				Float om7 = invertParentWorldMatrix->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
				HX_STACK_LINE(354)
				Float om8 = invertParentWorldMatrix->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
				HX_STACK_LINE(354)
				Float om9 = invertParentWorldMatrix->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
				HX_STACK_LINE(354)
				Float om10 = invertParentWorldMatrix->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
				HX_STACK_LINE(354)
				Float om11 = invertParentWorldMatrix->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
				HX_STACK_LINE(354)
				Float om12 = invertParentWorldMatrix->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
				HX_STACK_LINE(354)
				Float om13 = invertParentWorldMatrix->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
				HX_STACK_LINE(354)
				Float om14 = invertParentWorldMatrix->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
				HX_STACK_LINE(354)
				Float om15 = invertParentWorldMatrix->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
				HX_STACK_LINE(354)
				result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
				HX_STACK_LINE(354)
				result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
				HX_STACK_LINE(354)
				result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
				HX_STACK_LINE(354)
				result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
				HX_STACK_LINE(354)
				result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
				HX_STACK_LINE(354)
				result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
				HX_STACK_LINE(354)
				result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
				HX_STACK_LINE(354)
				result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
				HX_STACK_LINE(354)
				result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
				HX_STACK_LINE(354)
				result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
				HX_STACK_LINE(354)
				result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
				HX_STACK_LINE(354)
				result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
				HX_STACK_LINE(354)
				result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
				HX_STACK_LINE(354)
				result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
				HX_STACK_LINE(354)
				result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
				HX_STACK_LINE(354)
				result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
				HX_STACK_LINE(354)
				result;
			}
			HX_STACK_LINE(355)
			translateMatrix = invertScalingMatrix;
		}
		HX_STACK_LINE(358)
		this->position->x = translateMatrix->m->__get((int)12);
		HX_STACK_LINE(359)
		this->position->y = translateMatrix->m->__get((int)13);
		HX_STACK_LINE(360)
		this->position->z = translateMatrix->m->__get((int)14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,setAbsolutePosition,(void))

Array< Float > AbstractMesh_obj::getVerticesData( ::String kind){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getVerticesData",0xa52edbc9,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getVerticesData","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",365,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(kind,"kind")
	HX_STACK_LINE(365)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,getVerticesData,return )

bool AbstractMesh_obj::isVerticesDataPresent( ::String kind){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","isVerticesDataPresent",0xe7f683fe,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.isVerticesDataPresent","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",378,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(kind,"kind")
	HX_STACK_LINE(378)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,isVerticesDataPresent,return )

int AbstractMesh_obj::getTotalIndicies( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getTotalIndicies",0x15b9a85c,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getTotalIndicies","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",397,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(397)
	return this->_indices->length;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getTotalIndicies,return )

Array< int > AbstractMesh_obj::getIndices( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getIndices",0x5a563be1,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getIndices","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",401,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(401)
	return this->_indices;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getIndices,return )

Float AbstractMesh_obj::getVertexStrideSize( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getVertexStrideSize",0xdc869604,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getVertexStrideSize","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",405,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(405)
	return this->_vertexStrideSize;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getVertexStrideSize,return )

Void AbstractMesh_obj::setPivotMatrix( ::com::gamestudiohx::babylonhx::tools::math::Matrix matrix){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","setPivotMatrix",0x99ca34d1,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.setPivotMatrix","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",408,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(409)
		this->_pivotMatrix = matrix;
		HX_STACK_LINE(410)
		this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,setPivotMatrix,(void))

::com::gamestudiohx::babylonhx::tools::math::Matrix AbstractMesh_obj::getPivotMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getPivotMatrix",0x79aa4c5d,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getPivotMatrix","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",414,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(414)
	return this->_pivotMatrix;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getPivotMatrix,return )

bool AbstractMesh_obj::isSynchronized( hx::Null< bool >  __o_updateCache){
bool updateCache = __o_updateCache.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","isSynchronized",0x3c93e0ce,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.isSynchronized","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",417,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(updateCache,"updateCache")
{
		HX_STACK_LINE(418)
		if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
			HX_STACK_LINE(419)
			return false;
		}
		HX_STACK_LINE(421)
		if ((this->_cache->__Field(HX_CSTRING("pivotMatrixUpdated"),true))){
			HX_STACK_LINE(422)
			return false;
		}
		HX_STACK_LINE(425)
		if ((this->infiniteDistance)){
			HX_STACK_LINE(426)
			return false;
		}
		HX_STACK_LINE(429)
		if ((!(this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("equals"),true)(this->position)))){
			HX_STACK_LINE(430)
			return false;
		}
		HX_STACK_LINE(432)
		if (((this->rotationQuaternion != null()))){
			HX_STACK_LINE(433)
			if ((!(this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("equals"),true)(this->rotationQuaternion)))){
				HX_STACK_LINE(434)
				return false;
			}
		}
		else{
			HX_STACK_LINE(436)
			if ((!(this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("equals"),true)(this->rotation)))){
				HX_STACK_LINE(437)
				return false;
			}
		}
		HX_STACK_LINE(440)
		if ((!(this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("equals"),true)(this->scaling)))){
			HX_STACK_LINE(441)
			return false;
		}
		HX_STACK_LINE(443)
		return true;
	}
}


bool AbstractMesh_obj::isAnimated( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","isAnimated",0x2b41f35d,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.isAnimated","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",447,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(447)
	return this->_animationStarted;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,isAnimated,return )

bool AbstractMesh_obj::isDisposed( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","isDisposed",0xc9f38b9f,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.isDisposed","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",451,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(451)
	return this->_isDisposed;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,isDisposed,return )

Void AbstractMesh_obj::_initCache( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","_initCache",0xdfe99f83,"com.gamestudiohx.babylonhx.mesh.AbstractMesh._initCache","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",454,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(455)
		this->_cache->__FieldRef(HX_CSTRING("localMatrixUpdated")) = false;
		HX_STACK_LINE(456)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(456)
		this->_cache->__FieldRef(HX_CSTRING("position")) = _g;
		HX_STACK_LINE(457)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(457)
		this->_cache->__FieldRef(HX_CSTRING("scaling")) = _g1;
		HX_STACK_LINE(458)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(458)
		this->_cache->__FieldRef(HX_CSTRING("rotation")) = _g2;
		HX_STACK_LINE(459)
		::com::gamestudiohx::babylonhx::tools::math::Quaternion _g3 = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(459)
		this->_cache->__FieldRef(HX_CSTRING("rotationQuaternion")) = _g3;
		HX_STACK_LINE(460)
		this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = null();
	}
return null();
}


Void AbstractMesh_obj::markAsDirty( ::String property){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","markAsDirty",0x0e3d5c83,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.markAsDirty","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",463,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(property,"property")
		HX_STACK_LINE(464)
		if (((property == HX_CSTRING("rotation")))){
			HX_STACK_LINE(465)
			this->rotationQuaternion = null();
		}
		HX_STACK_LINE(467)
		this->_childrenFlag = (int)1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,markAsDirty,(void))

Void AbstractMesh_obj::refreshBoudningInfo( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","refreshBoudningInfo",0x427916e9,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.refreshBoudningInfo","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",470,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(471)
		Array< Float > data = this->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(473)
		if (((data == null()))){
			HX_STACK_LINE(474)
			return null();
		}
		HX_STACK_LINE(477)
		Dynamic extend;		HX_STACK_VAR(extend,"extend");
		HX_STACK_LINE(477)
		{
			HX_STACK_LINE(477)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(minimum,"minimum");
			HX_STACK_LINE(477)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY);		HX_STACK_VAR(maximum,"maximum");
			HX_STACK_LINE(477)
			{
				HX_STACK_LINE(477)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(477)
				int _g = this->_totalVertices;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(477)
				while((true)){
					HX_STACK_LINE(477)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(477)
						break;
					}
					HX_STACK_LINE(477)
					int index = (_g1)++;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(477)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 current = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data->__get((index * (int)3)),data->__get(((index * (int)3) + (int)1)),data->__get(((index * (int)3) + (int)2)));		HX_STACK_VAR(current,"current");
					HX_STACK_LINE(477)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(477)
					{
						HX_STACK_LINE(477)
						Float x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(477)
						if (((current->x < minimum->x))){
							HX_STACK_LINE(477)
							x = current->x;
						}
						else{
							HX_STACK_LINE(477)
							x = minimum->x;
						}
						HX_STACK_LINE(477)
						Float y;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(477)
						if (((current->y < minimum->y))){
							HX_STACK_LINE(477)
							y = current->y;
						}
						else{
							HX_STACK_LINE(477)
							y = minimum->y;
						}
						HX_STACK_LINE(477)
						Float z;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(477)
						if (((current->z < minimum->z))){
							HX_STACK_LINE(477)
							z = current->z;
						}
						else{
							HX_STACK_LINE(477)
							z = minimum->z;
						}
						HX_STACK_LINE(477)
						_g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
					}
					HX_STACK_LINE(477)
					minimum = _g2;
					HX_STACK_LINE(477)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(477)
					{
						HX_STACK_LINE(477)
						Float x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(477)
						if (((current->x > maximum->x))){
							HX_STACK_LINE(477)
							x = current->x;
						}
						else{
							HX_STACK_LINE(477)
							x = maximum->x;
						}
						HX_STACK_LINE(477)
						Float y;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(477)
						if (((current->y > maximum->y))){
							HX_STACK_LINE(477)
							y = current->y;
						}
						else{
							HX_STACK_LINE(477)
							y = maximum->y;
						}
						HX_STACK_LINE(477)
						Float z;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(477)
						if (((current->z > maximum->z))){
							HX_STACK_LINE(477)
							z = current->z;
						}
						else{
							HX_STACK_LINE(477)
							z = maximum->z;
						}
						HX_STACK_LINE(477)
						_g11 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
					}
					HX_STACK_LINE(477)
					maximum = _g11;
				}
			}
			struct _Function_2_1{
				inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 &maximum){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",477,0x2cff64c0)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("minimum") , minimum,false);
						__result->Add(HX_CSTRING("maximum") , maximum,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(477)
			extend = _Function_2_1::Block(minimum,maximum);
		}
		HX_STACK_LINE(478)
		::com::gamestudiohx::babylonhx::culling::BoundingInfo _g2 = ::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__new(extend->__Field(HX_CSTRING("minimum"),true),extend->__Field(HX_CSTRING("maximum"),true));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(478)
		this->_boundingInfo = _g2;
		HX_STACK_LINE(480)
		{
			HX_STACK_LINE(480)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(480)
			int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(480)
			while((true)){
				HX_STACK_LINE(480)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(480)
					break;
				}
				HX_STACK_LINE(480)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					::com::gamestudiohx::babylonhx::mesh::SubMesh _this = this->subMeshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(481)
					Array< Float > data1 = _this->_renderingMesh->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(481)
					if (((data1 != null()))){
						HX_STACK_LINE(481)
						Dynamic extend1;		HX_STACK_VAR(extend1,"extend1");
						HX_STACK_LINE(481)
						{
							HX_STACK_LINE(481)
							int start = _this->verticesStart;		HX_STACK_VAR(start,"start");
							HX_STACK_LINE(481)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(minimum,"minimum");
							HX_STACK_LINE(481)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY);		HX_STACK_VAR(maximum,"maximum");
							HX_STACK_LINE(481)
							{
								HX_STACK_LINE(481)
								int _g11 = start;		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(481)
								int _g3 = (start + _this->verticesCount);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(481)
								while((true)){
									HX_STACK_LINE(481)
									if ((!(((_g11 < _g3))))){
										HX_STACK_LINE(481)
										break;
									}
									HX_STACK_LINE(481)
									int index1 = (_g11)++;		HX_STACK_VAR(index1,"index1");
									HX_STACK_LINE(481)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 current = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data1->__get((index1 * (int)3)),data1->__get(((index1 * (int)3) + (int)1)),data1->__get(((index1 * (int)3) + (int)2)));		HX_STACK_VAR(current,"current");
									HX_STACK_LINE(481)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 _g31;		HX_STACK_VAR(_g31,"_g31");
									HX_STACK_LINE(481)
									{
										HX_STACK_LINE(481)
										Float x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(481)
										if (((current->x < minimum->x))){
											HX_STACK_LINE(481)
											x = current->x;
										}
										else{
											HX_STACK_LINE(481)
											x = minimum->x;
										}
										HX_STACK_LINE(481)
										Float y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(481)
										if (((current->y < minimum->y))){
											HX_STACK_LINE(481)
											y = current->y;
										}
										else{
											HX_STACK_LINE(481)
											y = minimum->y;
										}
										HX_STACK_LINE(481)
										Float z;		HX_STACK_VAR(z,"z");
										HX_STACK_LINE(481)
										if (((current->z < minimum->z))){
											HX_STACK_LINE(481)
											z = current->z;
										}
										else{
											HX_STACK_LINE(481)
											z = minimum->z;
										}
										HX_STACK_LINE(481)
										_g31 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
									}
									HX_STACK_LINE(481)
									minimum = _g31;
									HX_STACK_LINE(481)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4;		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(481)
									{
										HX_STACK_LINE(481)
										Float x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(481)
										if (((current->x > maximum->x))){
											HX_STACK_LINE(481)
											x = current->x;
										}
										else{
											HX_STACK_LINE(481)
											x = maximum->x;
										}
										HX_STACK_LINE(481)
										Float y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(481)
										if (((current->y > maximum->y))){
											HX_STACK_LINE(481)
											y = current->y;
										}
										else{
											HX_STACK_LINE(481)
											y = maximum->y;
										}
										HX_STACK_LINE(481)
										Float z;		HX_STACK_VAR(z,"z");
										HX_STACK_LINE(481)
										if (((current->z > maximum->z))){
											HX_STACK_LINE(481)
											z = current->z;
										}
										else{
											HX_STACK_LINE(481)
											z = maximum->z;
										}
										HX_STACK_LINE(481)
										_g4 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
									}
									HX_STACK_LINE(481)
									maximum = _g4;
								}
							}
							struct _Function_6_1{
								inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 &maximum){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",481,0x2cff64c0)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("minimum") , minimum,false);
										__result->Add(HX_CSTRING("maximum") , maximum,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(481)
							extend1 = _Function_6_1::Block(minimum,maximum);
						}
						HX_STACK_LINE(481)
						::com::gamestudiohx::babylonhx::culling::BoundingInfo _g5 = ::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__new(extend1->__Field(HX_CSTRING("minimum"),true),extend1->__Field(HX_CSTRING("maximum"),true));		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(481)
						_this->_boundingInfo = _g5;
					}
				}
			}
		}
		HX_STACK_LINE(484)
		if (((this->_boundingInfo != null()))){
			HX_STACK_LINE(484)
			Float _g6 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(484)
			this->_scaleFactor = _g6;
			HX_STACK_LINE(484)
			Float _g7 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(484)
			this->_scaleFactor = _g7;
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",484,0x2cff64c0)
					{
						HX_STACK_LINE(484)
						Dynamic _g8 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(484)
						return (_g8 != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(484)
			if (((  (((this->parent != null()))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(484)
				Dynamic _g9 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(484)
				Float _g10 = (this->_scaleFactor * _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(484)
				this->_scaleFactor = _g10;
			}
			HX_STACK_LINE(484)
			this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
			HX_STACK_LINE(484)
			{
				HX_STACK_LINE(484)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(484)
				int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(484)
				while((true)){
					HX_STACK_LINE(484)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(484)
						break;
					}
					HX_STACK_LINE(484)
					int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
					HX_STACK_LINE(484)
					::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
					HX_STACK_LINE(484)
					subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,refreshBoudningInfo,(void))

Void AbstractMesh_obj::_updateBoundingInfo( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","_updateBoundingInfo",0xe096790a,"com.gamestudiohx.babylonhx.mesh.AbstractMesh._updateBoundingInfo","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",488,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(488)
		if (((this->_boundingInfo != null()))){
			HX_STACK_LINE(489)
			Float _g = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(489)
			this->_scaleFactor = _g;
			HX_STACK_LINE(490)
			Float _g1 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(490)
			this->_scaleFactor = _g1;
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",492,0x2cff64c0)
					{
						HX_STACK_LINE(492)
						Dynamic _g2 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(492)
						return (_g2 != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(492)
			if (((  (((this->parent != null()))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(493)
				Dynamic _g3 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(493)
				Float _g4 = (this->_scaleFactor * _g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(493)
				this->_scaleFactor = _g4;
			}
			HX_STACK_LINE(495)
			this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
			HX_STACK_LINE(497)
			{
				HX_STACK_LINE(497)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(497)
				int _g2 = this->subMeshes->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(497)
				while((true)){
					HX_STACK_LINE(497)
					if ((!(((_g11 < _g2))))){
						HX_STACK_LINE(497)
						break;
					}
					HX_STACK_LINE(497)
					int subIndex = (_g11)++;		HX_STACK_VAR(subIndex,"subIndex");
					HX_STACK_LINE(498)
					::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
					HX_STACK_LINE(500)
					subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,_updateBoundingInfo,(void))

::com::gamestudiohx::babylonhx::tools::math::Matrix AbstractMesh_obj::computeWorldMatrix( hx::Null< bool >  __o_force){
bool force = __o_force.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","computeWorldMatrix",0x5b0a0eac,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.computeWorldMatrix","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",505,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(force,"force")
{
		HX_STACK_LINE(506)
		::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",507,0x2cff64c0)
				{
					HX_STACK_LINE(507)
					int _g = __this->_scene->getRenderId();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(507)
					return (  ((!(((__this->_currentRenderId == _g))))) ? bool(__this->isSynchronized(null())) : bool(true) );
				}
				return null();
			}
		};
		HX_STACK_LINE(507)
		if (((  ((!(force))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(508)
			this->_childrenFlag = (int)0;
		}
		else{
			HX_STACK_LINE(510)
			this->_childrenFlag = (int)1;
			HX_STACK_LINE(511)
			this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
			HX_STACK_LINE(512)
			this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
			HX_STACK_LINE(513)
			this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
			HX_STACK_LINE(514)
			int _g1 = this->_scene->getRenderId();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(514)
			this->_currentRenderId = _g1;
			HX_STACK_LINE(517)
			{
				HX_STACK_LINE(517)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(517)
				result->m[(int)0] = this->scaling->x;
				HX_STACK_LINE(517)
				result->m[(int)1] = (int)0;
				HX_STACK_LINE(517)
				result->m[(int)2] = (int)0;
				HX_STACK_LINE(517)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(517)
				result->m[(int)4] = (int)0;
				HX_STACK_LINE(517)
				result->m[(int)5] = this->scaling->y;
				HX_STACK_LINE(517)
				result->m[(int)6] = (int)0;
				HX_STACK_LINE(517)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(517)
				result->m[(int)8] = (int)0;
				HX_STACK_LINE(517)
				result->m[(int)9] = (int)0;
				HX_STACK_LINE(517)
				result->m[(int)10] = this->scaling->z;
				HX_STACK_LINE(517)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(517)
				result->m[(int)12] = (int)0;
				HX_STACK_LINE(517)
				result->m[(int)13] = (int)0;
				HX_STACK_LINE(517)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(517)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(517)
				result;
			}
			HX_STACK_LINE(520)
			if (((this->rotationQuaternion != null()))){
				HX_STACK_LINE(521)
				{
					HX_STACK_LINE(521)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = this->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(521)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(521)
					Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(521)
					Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(521)
					Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
					HX_STACK_LINE(521)
					Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
					HX_STACK_LINE(521)
					Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
					HX_STACK_LINE(521)
					Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
					HX_STACK_LINE(521)
					Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
					HX_STACK_LINE(521)
					Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
					HX_STACK_LINE(521)
					Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
					HX_STACK_LINE(521)
					result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
					HX_STACK_LINE(521)
					result->m[(int)1] = (2.0 * ((xy + zw)));
					HX_STACK_LINE(521)
					result->m[(int)2] = (2.0 * ((zx - yw)));
					HX_STACK_LINE(521)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(521)
					result->m[(int)4] = (2.0 * ((xy - zw)));
					HX_STACK_LINE(521)
					result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
					HX_STACK_LINE(521)
					result->m[(int)6] = (2.0 * ((yz + xw)));
					HX_STACK_LINE(521)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(521)
					result->m[(int)8] = (2.0 * ((zx + yw)));
					HX_STACK_LINE(521)
					result->m[(int)9] = (2.0 * ((yz - xw)));
					HX_STACK_LINE(521)
					result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
					HX_STACK_LINE(521)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(521)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(521)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(521)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(521)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(521)
					result;
				}
				HX_STACK_LINE(522)
				this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
			}
			else{
				HX_STACK_LINE(524)
				{
					HX_STACK_LINE(524)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(524)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
					HX_STACK_LINE(524)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(524)
					{
						HX_STACK_LINE(524)
						Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
						HX_STACK_LINE(524)
						Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
						HX_STACK_LINE(524)
						Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
						HX_STACK_LINE(524)
						Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
						HX_STACK_LINE(524)
						Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
						HX_STACK_LINE(524)
						Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
						HX_STACK_LINE(524)
						Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
						HX_STACK_LINE(524)
						Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
						HX_STACK_LINE(524)
						Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
						HX_STACK_LINE(524)
						tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
						HX_STACK_LINE(524)
						tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
						HX_STACK_LINE(524)
						tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
						HX_STACK_LINE(524)
						tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
						HX_STACK_LINE(524)
						_g2 = tempQuaternion;
					}
					HX_STACK_LINE(524)
					tempQuaternion = _g2;
					HX_STACK_LINE(524)
					{
						HX_STACK_LINE(524)
						Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(524)
						Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(524)
						Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(524)
						Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(524)
						Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
						HX_STACK_LINE(524)
						Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
						HX_STACK_LINE(524)
						Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
						HX_STACK_LINE(524)
						Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(524)
						Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
						HX_STACK_LINE(524)
						result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
						HX_STACK_LINE(524)
						result->m[(int)1] = (2.0 * ((xy + zw)));
						HX_STACK_LINE(524)
						result->m[(int)2] = (2.0 * ((zx - yw)));
						HX_STACK_LINE(524)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(524)
						result->m[(int)4] = (2.0 * ((xy - zw)));
						HX_STACK_LINE(524)
						result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
						HX_STACK_LINE(524)
						result->m[(int)6] = (2.0 * ((yz + xw)));
						HX_STACK_LINE(524)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(524)
						result->m[(int)8] = (2.0 * ((zx + yw)));
						HX_STACK_LINE(524)
						result->m[(int)9] = (2.0 * ((yz - xw)));
						HX_STACK_LINE(524)
						result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
						HX_STACK_LINE(524)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(524)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(524)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(524)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(524)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(524)
						result;
					}
				}
				HX_STACK_LINE(525)
				this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
			}
			HX_STACK_LINE(529)
			if ((this->infiniteDistance)){
				HX_STACK_LINE(530)
				::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(531)
				{
					HX_STACK_LINE(531)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(531)
					{
						HX_STACK_LINE(531)
						result->m[(int)0] = 1.0;
						HX_STACK_LINE(531)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(531)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(531)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(531)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(531)
						result->m[(int)5] = 1.0;
						HX_STACK_LINE(531)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(531)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(531)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(531)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(531)
						result->m[(int)10] = 1.0;
						HX_STACK_LINE(531)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(531)
						result->m[(int)12] = (this->position->x + camera->position->x);
						HX_STACK_LINE(531)
						result->m[(int)13] = (this->position->y + camera->position->y);
						HX_STACK_LINE(531)
						result->m[(int)14] = (this->position->z + camera->position->z);
						HX_STACK_LINE(531)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(531)
						result;
					}
				}
			}
			else{
				HX_STACK_LINE(533)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(533)
				{
					HX_STACK_LINE(533)
					result->m[(int)0] = 1.0;
					HX_STACK_LINE(533)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(533)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(533)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(533)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(533)
					result->m[(int)5] = 1.0;
					HX_STACK_LINE(533)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(533)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(533)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(533)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(533)
					result->m[(int)10] = 1.0;
					HX_STACK_LINE(533)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(533)
					result->m[(int)12] = this->position->x;
					HX_STACK_LINE(533)
					result->m[(int)13] = this->position->y;
					HX_STACK_LINE(533)
					result->m[(int)14] = this->position->z;
					HX_STACK_LINE(533)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(533)
					result;
				}
			}
			HX_STACK_LINE(537)
			{
				HX_STACK_LINE(537)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(537)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(537)
				{
					HX_STACK_LINE(537)
					Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(537)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(537)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(537)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(537)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(537)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(537)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(537)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(537)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(537)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(537)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(537)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(537)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(537)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(537)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(537)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(537)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(537)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(537)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(537)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(537)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(537)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(537)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(537)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(537)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(537)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(537)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(537)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(537)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(537)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(537)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(537)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(537)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(537)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(537)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(537)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(537)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(537)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(537)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(537)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(537)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(537)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(537)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(537)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(537)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(537)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(537)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(537)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(537)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(537)
					result;
				}
			}
			HX_STACK_LINE(538)
			{
				HX_STACK_LINE(538)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(538)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(538)
				{
					HX_STACK_LINE(538)
					Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(538)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(538)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(538)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(538)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(538)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(538)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(538)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(538)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(538)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(538)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(538)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(538)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(538)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(538)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(538)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(538)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(538)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(538)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(538)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(538)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(538)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(538)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(538)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(538)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(538)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(538)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(538)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(538)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(538)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(538)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(538)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(538)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(538)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(538)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(538)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(538)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(538)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(538)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(538)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(538)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(538)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(538)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(538)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(538)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(538)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(538)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(538)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(538)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(538)
					result;
				}
			}
			HX_STACK_LINE(541)
			if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
				HX_STACK_LINE(542)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
				HX_STACK_LINE(542)
				{
					HX_STACK_LINE(542)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(542)
					localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
				}
				HX_STACK_LINE(543)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
				HX_STACK_LINE(543)
				{
					HX_STACK_LINE(543)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(543)
					zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
				}
				HX_STACK_LINE(545)
				if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
					HX_STACK_LINE(546)
					{
						HX_STACK_LINE(546)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(546)
						hx::AddEq(localPosition->x,otherVector->x);
						HX_STACK_LINE(546)
						hx::AddEq(localPosition->y,otherVector->y);
						HX_STACK_LINE(546)
						hx::AddEq(localPosition->z,otherVector->z);
					}
					HX_STACK_LINE(547)
					{
						HX_STACK_LINE(547)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(547)
						{
							HX_STACK_LINE(547)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(547)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(547)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(547)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(547)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(547)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(547)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(547)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(547)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(547)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(547)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(547)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(547)
							result->m[(int)12] = localPosition->x;
							HX_STACK_LINE(547)
							result->m[(int)13] = localPosition->y;
							HX_STACK_LINE(547)
							result->m[(int)14] = localPosition->z;
							HX_STACK_LINE(547)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(547)
							result;
						}
					}
				}
				HX_STACK_LINE(550)
				if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
					HX_STACK_LINE(551)
					zero = this->_scene->activeCamera->position;
				}
				else{
					HX_STACK_LINE(553)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
						HX_STACK_LINE(554)
						zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
					HX_STACK_LINE(555)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
						HX_STACK_LINE(556)
						zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
					HX_STACK_LINE(557)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
						HX_STACK_LINE(558)
						zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
				}
				HX_STACK_LINE(561)
				{
					HX_STACK_LINE(561)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
					HX_STACK_LINE(561)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(561)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
					HX_STACK_LINE(561)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
					HX_STACK_LINE(561)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
					HX_STACK_LINE(561)
					{
						HX_STACK_LINE(561)
						zAxis->x = (zero->x - localPosition->x);
						HX_STACK_LINE(561)
						zAxis->y = (zero->y - localPosition->y);
						HX_STACK_LINE(561)
						zAxis->z = (zero->z - localPosition->z);
					}
					HX_STACK_LINE(561)
					{
						HX_STACK_LINE(561)
						Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(561)
						if (((len != (int)0))){
							HX_STACK_LINE(561)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(561)
							hx::MultEq(zAxis->x,num);
							HX_STACK_LINE(561)
							hx::MultEq(zAxis->y,num);
							HX_STACK_LINE(561)
							hx::MultEq(zAxis->z,num);
						}
					}
					HX_STACK_LINE(561)
					{
						HX_STACK_LINE(561)
						xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
						HX_STACK_LINE(561)
						xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
						HX_STACK_LINE(561)
						xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
					}
					HX_STACK_LINE(561)
					{
						HX_STACK_LINE(561)
						Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(561)
						if (((len != (int)0))){
							HX_STACK_LINE(561)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(561)
							hx::MultEq(xAxis->x,num);
							HX_STACK_LINE(561)
							hx::MultEq(xAxis->y,num);
							HX_STACK_LINE(561)
							hx::MultEq(xAxis->z,num);
						}
					}
					HX_STACK_LINE(561)
					{
						HX_STACK_LINE(561)
						yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
						HX_STACK_LINE(561)
						yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
						HX_STACK_LINE(561)
						yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
					}
					HX_STACK_LINE(561)
					{
						HX_STACK_LINE(561)
						Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(561)
						if (((len != (int)0))){
							HX_STACK_LINE(561)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(561)
							hx::MultEq(yAxis->x,num);
							HX_STACK_LINE(561)
							hx::MultEq(yAxis->y,num);
							HX_STACK_LINE(561)
							hx::MultEq(yAxis->z,num);
						}
					}
					HX_STACK_LINE(561)
					Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
					HX_STACK_LINE(561)
					Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
					HX_STACK_LINE(561)
					Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
					HX_STACK_LINE(561)
					{
						HX_STACK_LINE(561)
						result->m[(int)0] = xAxis->x;
						HX_STACK_LINE(561)
						result->m[(int)1] = yAxis->x;
						HX_STACK_LINE(561)
						result->m[(int)2] = zAxis->x;
						HX_STACK_LINE(561)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(561)
						result->m[(int)4] = xAxis->y;
						HX_STACK_LINE(561)
						result->m[(int)5] = yAxis->y;
						HX_STACK_LINE(561)
						result->m[(int)6] = zAxis->y;
						HX_STACK_LINE(561)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(561)
						result->m[(int)8] = xAxis->z;
						HX_STACK_LINE(561)
						result->m[(int)9] = yAxis->z;
						HX_STACK_LINE(561)
						result->m[(int)10] = zAxis->z;
						HX_STACK_LINE(561)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(561)
						result->m[(int)12] = ex;
						HX_STACK_LINE(561)
						result->m[(int)13] = ey;
						HX_STACK_LINE(561)
						result->m[(int)14] = ez;
						HX_STACK_LINE(561)
						result->m[(int)15] = (int)1;
						HX_STACK_LINE(561)
						result;
					}
				}
				HX_STACK_LINE(562)
				this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
				HX_STACK_LINE(564)
				{
					HX_STACK_LINE(564)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localBillboard;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(564)
					{
						HX_STACK_LINE(564)
						Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
						HX_STACK_LINE(564)
						Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
						HX_STACK_LINE(564)
						Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
						HX_STACK_LINE(564)
						Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
						HX_STACK_LINE(564)
						Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
						HX_STACK_LINE(564)
						Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
						HX_STACK_LINE(564)
						Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
						HX_STACK_LINE(564)
						Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
						HX_STACK_LINE(564)
						Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
						HX_STACK_LINE(564)
						Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
						HX_STACK_LINE(564)
						Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
						HX_STACK_LINE(564)
						Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
						HX_STACK_LINE(564)
						Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
						HX_STACK_LINE(564)
						Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
						HX_STACK_LINE(564)
						Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
						HX_STACK_LINE(564)
						Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
						HX_STACK_LINE(564)
						Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
						HX_STACK_LINE(564)
						Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
						HX_STACK_LINE(564)
						Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
						HX_STACK_LINE(564)
						Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
						HX_STACK_LINE(564)
						Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
						HX_STACK_LINE(564)
						Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
						HX_STACK_LINE(564)
						Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
						HX_STACK_LINE(564)
						Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
						HX_STACK_LINE(564)
						Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
						HX_STACK_LINE(564)
						Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
						HX_STACK_LINE(564)
						Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
						HX_STACK_LINE(564)
						Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
						HX_STACK_LINE(564)
						Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
						HX_STACK_LINE(564)
						Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
						HX_STACK_LINE(564)
						Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
						HX_STACK_LINE(564)
						Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
						HX_STACK_LINE(564)
						Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
						HX_STACK_LINE(564)
						Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
						HX_STACK_LINE(564)
						Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
						HX_STACK_LINE(564)
						Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
						HX_STACK_LINE(564)
						Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
						HX_STACK_LINE(564)
						Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
						HX_STACK_LINE(564)
						Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
						HX_STACK_LINE(564)
						_this->m[(int)0] = (l23 * l27);
						HX_STACK_LINE(564)
						_this->m[(int)4] = (l24 * l27);
						HX_STACK_LINE(564)
						_this->m[(int)8] = (l25 * l27);
						HX_STACK_LINE(564)
						_this->m[(int)12] = (l26 * l27);
						HX_STACK_LINE(564)
						_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
						HX_STACK_LINE(564)
						_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
						HX_STACK_LINE(564)
						_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
						HX_STACK_LINE(564)
						_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
						HX_STACK_LINE(564)
						_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
						HX_STACK_LINE(564)
						_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
						HX_STACK_LINE(564)
						_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
						HX_STACK_LINE(564)
						_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
						HX_STACK_LINE(564)
						_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
						HX_STACK_LINE(564)
						_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
						HX_STACK_LINE(564)
						_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
						HX_STACK_LINE(564)
						_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
					}
				}
				HX_STACK_LINE(566)
				{
					HX_STACK_LINE(566)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(566)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(566)
					{
						HX_STACK_LINE(566)
						Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(566)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(566)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(566)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(566)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(566)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(566)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(566)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(566)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(566)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(566)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(566)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(566)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(566)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(566)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(566)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(566)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(566)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(566)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(566)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(566)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(566)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(566)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(566)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(566)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(566)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(566)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(566)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(566)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(566)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(566)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(566)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(566)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(566)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(566)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(566)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(566)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(566)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(566)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(566)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(566)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(566)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(566)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(566)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(566)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(566)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(566)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(566)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(566)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(566)
						result;
					}
				}
				HX_STACK_LINE(567)
				{
					HX_STACK_LINE(567)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(567)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(567)
					{
						HX_STACK_LINE(567)
						Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(567)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(567)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(567)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(567)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(567)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(567)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(567)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(567)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(567)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(567)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(567)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(567)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(567)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(567)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(567)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(567)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(567)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(567)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(567)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(567)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(567)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(567)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(567)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(567)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(567)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(567)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(567)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(567)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(567)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(567)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(567)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(567)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(567)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(567)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(567)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(567)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(567)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(567)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(567)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(567)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(567)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(567)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(567)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(567)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(567)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(567)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(567)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(567)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(567)
						result;
					}
				}
			}
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",571,0x2cff64c0)
					{
						HX_STACK_LINE(571)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _g3 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(571)
						return (_g3 != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(571)
			if (((  (((  (((this->parent != null()))) ? bool(_Function_2_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
				HX_STACK_LINE(572)
				{
					HX_STACK_LINE(572)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(572)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(572)
					{
						HX_STACK_LINE(572)
						Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(572)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(572)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(572)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(572)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(572)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(572)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(572)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(572)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(572)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(572)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(572)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(572)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(572)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(572)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(572)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(572)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(572)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(572)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(572)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(572)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(572)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(572)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(572)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(572)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(572)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(572)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(572)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(572)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(572)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(572)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(572)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(572)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(572)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(572)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(572)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(572)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(572)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(572)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(572)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(572)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(572)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(572)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(572)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(572)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(572)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(572)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(572)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(572)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(572)
						result;
					}
				}
				HX_STACK_LINE(573)
				::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
				HX_STACK_LINE(575)
				{
					HX_STACK_LINE(575)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localWorld;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(575)
					{
						HX_STACK_LINE(575)
						Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(575)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(575)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(575)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(575)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(575)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(575)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(575)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(575)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(575)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(575)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(575)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(575)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(575)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(575)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(575)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(575)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(575)
						Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(575)
						Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(575)
						Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(575)
						Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(575)
						Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(575)
						Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(575)
						Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(575)
						Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(575)
						Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(575)
						Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(575)
						Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(575)
						Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(575)
						Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(575)
						Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(575)
						Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(575)
						Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(575)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(575)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(575)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(575)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(575)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(575)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(575)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(575)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(575)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(575)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(575)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(575)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(575)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(575)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(575)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(575)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(575)
						result;
					}
				}
			}
			else{
				HX_STACK_LINE(577)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(577)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(577)
				{
					HX_STACK_LINE(577)
					Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(577)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(577)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(577)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(577)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(577)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(577)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(577)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(577)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(577)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(577)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(577)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(577)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(577)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(577)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(577)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(577)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(577)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(577)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(577)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(577)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(577)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(577)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(577)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(577)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(577)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(577)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(577)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(577)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(577)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(577)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(577)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(577)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(577)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(577)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(577)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(577)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(577)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(577)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(577)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(577)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(577)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(577)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(577)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(577)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(577)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(577)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(577)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(577)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(577)
					result;
				}
			}
			HX_STACK_LINE(581)
			if (((this->_boundingInfo != null()))){
				HX_STACK_LINE(581)
				Float _g4 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(581)
				this->_scaleFactor = _g4;
				HX_STACK_LINE(581)
				Float _g5 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(581)
				this->_scaleFactor = _g5;
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",581,0x2cff64c0)
						{
							HX_STACK_LINE(581)
							Dynamic _g6 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(581)
							return (_g6 != null());
						}
						return null();
					}
				};
				HX_STACK_LINE(581)
				if (((  (((this->parent != null()))) ? bool(_Function_3_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(581)
					Dynamic _g7 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(581)
					Float _g8 = (this->_scaleFactor * _g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(581)
					this->_scaleFactor = _g8;
				}
				HX_STACK_LINE(581)
				this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
				HX_STACK_LINE(581)
				{
					HX_STACK_LINE(581)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(581)
					int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(581)
					while((true)){
						HX_STACK_LINE(581)
						if ((!(((_g11 < _g))))){
							HX_STACK_LINE(581)
							break;
						}
						HX_STACK_LINE(581)
						int subIndex = (_g11)++;		HX_STACK_VAR(subIndex,"subIndex");
						HX_STACK_LINE(581)
						::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
						HX_STACK_LINE(581)
						subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
					}
				}
			}
			HX_STACK_LINE(584)
			{
				HX_STACK_LINE(584)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_absolutePosition;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(584)
				_this->x = this->_worldMatrix->m->__get((int)12);
				HX_STACK_LINE(584)
				_this->y = this->_worldMatrix->m->__get((int)13);
				HX_STACK_LINE(584)
				_this->z = this->_worldMatrix->m->__get((int)14);
			}
			HX_STACK_LINE(585)
			ret = this->_worldMatrix;
		}
		HX_STACK_LINE(588)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,computeWorldMatrix,return )

Void AbstractMesh_obj::bindAndDraw( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,::com::gamestudiohx::babylonhx::materials::Effect effect,bool wireframe){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","bindAndDraw",0xff70898e,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.bindAndDraw","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",658,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(subMesh,"subMesh")
		HX_STACK_ARG(effect,"effect")
		HX_STACK_ARG(wireframe,"wireframe")
		HX_STACK_LINE(659)
		::com::gamestudiohx::babylonhx::Engine engine = this->_scene->getEngine();		HX_STACK_VAR(engine,"engine");
		HX_STACK_LINE(662)
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer indexToBind = this->_indexBuffer;		HX_STACK_VAR(indexToBind,"indexToBind");
		HX_STACK_LINE(663)
		bool useTriangles = true;		HX_STACK_VAR(useTriangles,"useTriangles");
		HX_STACK_LINE(665)
		if ((wireframe)){
			HX_STACK_LINE(666)
			::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(666)
			{
				HX_STACK_LINE(666)
				Array< int > indices = this->_indices;		HX_STACK_VAR(indices,"indices");
				HX_STACK_LINE(666)
				if (((subMesh->_linesIndexBuffer == null()))){
					HX_STACK_LINE(666)
					Array< int > linesIndices = Array_obj< int >::__new();		HX_STACK_VAR(linesIndices,"linesIndices");
					HX_STACK_LINE(666)
					int index = subMesh->indexStart;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(666)
					while((true)){
						HX_STACK_LINE(666)
						if ((!(((index < (subMesh->indexStart + subMesh->indexCount)))))){
							HX_STACK_LINE(666)
							break;
						}
						HX_STACK_LINE(666)
						linesIndices->push(indices->__get(index));
						HX_STACK_LINE(666)
						linesIndices->push(indices->__get((index + (int)1)));
						HX_STACK_LINE(666)
						linesIndices->push(indices->__get((index + (int)1)));
						HX_STACK_LINE(666)
						linesIndices->push(indices->__get((index + (int)2)));
						HX_STACK_LINE(666)
						linesIndices->push(indices->__get((index + (int)2)));
						HX_STACK_LINE(666)
						linesIndices->push(indices->__get(index));
						HX_STACK_LINE(666)
						hx::AddEq(index,(int)3);
					}
					HX_STACK_LINE(666)
					::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g = engine->createIndexBuffer(linesIndices);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(666)
					subMesh->_linesIndexBuffer = _g;
					HX_STACK_LINE(666)
					subMesh->linesIndexCount = linesIndices->length;
				}
				HX_STACK_LINE(666)
				_g1 = subMesh->_linesIndexBuffer;
			}
			HX_STACK_LINE(666)
			indexToBind = _g1;
			HX_STACK_LINE(667)
			useTriangles = false;
		}
		HX_STACK_LINE(671)
		engine->bindMultiBuffers(this->_vertexBuffers,indexToBind,effect);
		HX_STACK_LINE(674)
		engine->draw(useTriangles,(  ((useTriangles)) ? int(subMesh->indexStart) : int((int)0) ),(  ((useTriangles)) ? int(subMesh->indexCount) : int(subMesh->linesIndexCount) ),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AbstractMesh_obj,bindAndDraw,(void))

Void AbstractMesh_obj::setLocalTranslation( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector3){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","setLocalTranslation",0x91d10858,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.setLocalTranslation","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",814,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vector3,"vector3")
		HX_STACK_LINE(815)
		{
			HX_STACK_LINE(815)
			bool force = false;		HX_STACK_VAR(force,"force");
			HX_STACK_LINE(815)
			::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",815,0x2cff64c0)
					{
						HX_STACK_LINE(815)
						int _g = __this->_scene->getRenderId();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(815)
						return (  ((!(((__this->_currentRenderId == _g))))) ? bool(__this->isSynchronized(null())) : bool(true) );
					}
					return null();
				}
			};
			HX_STACK_LINE(815)
			if (((  ((!(force))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(815)
				this->_childrenFlag = (int)0;
			}
			else{
				HX_STACK_LINE(815)
				this->_childrenFlag = (int)1;
				HX_STACK_LINE(815)
				this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
				HX_STACK_LINE(815)
				this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
				HX_STACK_LINE(815)
				this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
				HX_STACK_LINE(815)
				int _g1 = this->_scene->getRenderId();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(815)
				this->_currentRenderId = _g1;
				HX_STACK_LINE(815)
				{
					HX_STACK_LINE(815)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(815)
					result->m[(int)0] = this->scaling->x;
					HX_STACK_LINE(815)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(815)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(815)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(815)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(815)
					result->m[(int)5] = this->scaling->y;
					HX_STACK_LINE(815)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(815)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(815)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(815)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(815)
					result->m[(int)10] = this->scaling->z;
					HX_STACK_LINE(815)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(815)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(815)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(815)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(815)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(815)
					result;
				}
				HX_STACK_LINE(815)
				if (((this->rotationQuaternion != null()))){
					HX_STACK_LINE(815)
					{
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = this->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(815)
						Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(815)
						Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(815)
						Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(815)
						Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(815)
						Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
						HX_STACK_LINE(815)
						Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
						HX_STACK_LINE(815)
						Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
						HX_STACK_LINE(815)
						Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(815)
						Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
						HX_STACK_LINE(815)
						result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
						HX_STACK_LINE(815)
						result->m[(int)1] = (2.0 * ((xy + zw)));
						HX_STACK_LINE(815)
						result->m[(int)2] = (2.0 * ((zx - yw)));
						HX_STACK_LINE(815)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(815)
						result->m[(int)4] = (2.0 * ((xy - zw)));
						HX_STACK_LINE(815)
						result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
						HX_STACK_LINE(815)
						result->m[(int)6] = (2.0 * ((yz + xw)));
						HX_STACK_LINE(815)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(815)
						result->m[(int)8] = (2.0 * ((zx + yw)));
						HX_STACK_LINE(815)
						result->m[(int)9] = (2.0 * ((yz - xw)));
						HX_STACK_LINE(815)
						result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
						HX_STACK_LINE(815)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(815)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(815)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(815)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(815)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(815)
						result;
					}
					HX_STACK_LINE(815)
					this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
				}
				else{
					HX_STACK_LINE(815)
					{
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
							HX_STACK_LINE(815)
							Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
							HX_STACK_LINE(815)
							Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
							HX_STACK_LINE(815)
							Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
							HX_STACK_LINE(815)
							Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
							HX_STACK_LINE(815)
							Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
							HX_STACK_LINE(815)
							Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
							HX_STACK_LINE(815)
							Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
							HX_STACK_LINE(815)
							Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
							HX_STACK_LINE(815)
							tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
							HX_STACK_LINE(815)
							tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
							HX_STACK_LINE(815)
							tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
							HX_STACK_LINE(815)
							tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
							HX_STACK_LINE(815)
							_g2 = tempQuaternion;
						}
						HX_STACK_LINE(815)
						tempQuaternion = _g2;
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(815)
							Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
							HX_STACK_LINE(815)
							Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
							HX_STACK_LINE(815)
							Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
							HX_STACK_LINE(815)
							Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
							HX_STACK_LINE(815)
							Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
							HX_STACK_LINE(815)
							Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
							HX_STACK_LINE(815)
							Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
							HX_STACK_LINE(815)
							Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
							HX_STACK_LINE(815)
							result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
							HX_STACK_LINE(815)
							result->m[(int)1] = (2.0 * ((xy + zw)));
							HX_STACK_LINE(815)
							result->m[(int)2] = (2.0 * ((zx - yw)));
							HX_STACK_LINE(815)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)4] = (2.0 * ((xy - zw)));
							HX_STACK_LINE(815)
							result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
							HX_STACK_LINE(815)
							result->m[(int)6] = (2.0 * ((yz + xw)));
							HX_STACK_LINE(815)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)8] = (2.0 * ((zx + yw)));
							HX_STACK_LINE(815)
							result->m[(int)9] = (2.0 * ((yz - xw)));
							HX_STACK_LINE(815)
							result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
							HX_STACK_LINE(815)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)12] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)13] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)14] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(815)
							result;
						}
					}
					HX_STACK_LINE(815)
					this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
				}
				HX_STACK_LINE(815)
				if ((this->infiniteDistance)){
					HX_STACK_LINE(815)
					::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
					HX_STACK_LINE(815)
					{
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(815)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(815)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(815)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)12] = (this->position->x + camera->position->x);
							HX_STACK_LINE(815)
							result->m[(int)13] = (this->position->y + camera->position->y);
							HX_STACK_LINE(815)
							result->m[(int)14] = (this->position->z + camera->position->z);
							HX_STACK_LINE(815)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(815)
							result;
						}
					}
				}
				else{
					HX_STACK_LINE(815)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(815)
					{
						HX_STACK_LINE(815)
						result->m[(int)0] = 1.0;
						HX_STACK_LINE(815)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(815)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(815)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(815)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(815)
						result->m[(int)5] = 1.0;
						HX_STACK_LINE(815)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(815)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(815)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(815)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(815)
						result->m[(int)10] = 1.0;
						HX_STACK_LINE(815)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(815)
						result->m[(int)12] = this->position->x;
						HX_STACK_LINE(815)
						result->m[(int)13] = this->position->y;
						HX_STACK_LINE(815)
						result->m[(int)14] = this->position->z;
						HX_STACK_LINE(815)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(815)
						result;
					}
				}
				HX_STACK_LINE(815)
				{
					HX_STACK_LINE(815)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(815)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(815)
					{
						HX_STACK_LINE(815)
						Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(815)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(815)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(815)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(815)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(815)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(815)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(815)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(815)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(815)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(815)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(815)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(815)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(815)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(815)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(815)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(815)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(815)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(815)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(815)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(815)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(815)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(815)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(815)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(815)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(815)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(815)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(815)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(815)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(815)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(815)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(815)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(815)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(815)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(815)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(815)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(815)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(815)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(815)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(815)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(815)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(815)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(815)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(815)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(815)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(815)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(815)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(815)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(815)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(815)
						result;
					}
				}
				HX_STACK_LINE(815)
				{
					HX_STACK_LINE(815)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(815)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(815)
					{
						HX_STACK_LINE(815)
						Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(815)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(815)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(815)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(815)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(815)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(815)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(815)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(815)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(815)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(815)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(815)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(815)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(815)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(815)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(815)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(815)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(815)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(815)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(815)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(815)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(815)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(815)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(815)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(815)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(815)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(815)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(815)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(815)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(815)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(815)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(815)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(815)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(815)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(815)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(815)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(815)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(815)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(815)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(815)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(815)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(815)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(815)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(815)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(815)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(815)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(815)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(815)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(815)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(815)
						result;
					}
				}
				HX_STACK_LINE(815)
				if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
					HX_STACK_LINE(815)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
					HX_STACK_LINE(815)
					{
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(815)
						localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
					}
					HX_STACK_LINE(815)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
					HX_STACK_LINE(815)
					{
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(815)
						zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
					}
					HX_STACK_LINE(815)
					if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
							HX_STACK_LINE(815)
							hx::AddEq(localPosition->x,otherVector->x);
							HX_STACK_LINE(815)
							hx::AddEq(localPosition->y,otherVector->y);
							HX_STACK_LINE(815)
							hx::AddEq(localPosition->z,otherVector->z);
						}
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(815)
							{
								HX_STACK_LINE(815)
								result->m[(int)0] = 1.0;
								HX_STACK_LINE(815)
								result->m[(int)1] = (int)0;
								HX_STACK_LINE(815)
								result->m[(int)2] = (int)0;
								HX_STACK_LINE(815)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(815)
								result->m[(int)4] = (int)0;
								HX_STACK_LINE(815)
								result->m[(int)5] = 1.0;
								HX_STACK_LINE(815)
								result->m[(int)6] = (int)0;
								HX_STACK_LINE(815)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(815)
								result->m[(int)8] = (int)0;
								HX_STACK_LINE(815)
								result->m[(int)9] = (int)0;
								HX_STACK_LINE(815)
								result->m[(int)10] = 1.0;
								HX_STACK_LINE(815)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(815)
								result->m[(int)12] = localPosition->x;
								HX_STACK_LINE(815)
								result->m[(int)13] = localPosition->y;
								HX_STACK_LINE(815)
								result->m[(int)14] = localPosition->z;
								HX_STACK_LINE(815)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(815)
								result;
							}
						}
					}
					HX_STACK_LINE(815)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
						HX_STACK_LINE(815)
						zero = this->_scene->activeCamera->position;
					}
					else{
						HX_STACK_LINE(815)
						if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
							HX_STACK_LINE(815)
							zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
						HX_STACK_LINE(815)
						if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
							HX_STACK_LINE(815)
							zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
						HX_STACK_LINE(815)
						if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
							HX_STACK_LINE(815)
							zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
					}
					HX_STACK_LINE(815)
					{
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							zAxis->x = (zero->x - localPosition->x);
							HX_STACK_LINE(815)
							zAxis->y = (zero->y - localPosition->y);
							HX_STACK_LINE(815)
							zAxis->z = (zero->z - localPosition->z);
						}
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(815)
							if (((len != (int)0))){
								HX_STACK_LINE(815)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(815)
								hx::MultEq(zAxis->x,num);
								HX_STACK_LINE(815)
								hx::MultEq(zAxis->y,num);
								HX_STACK_LINE(815)
								hx::MultEq(zAxis->z,num);
							}
						}
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
							HX_STACK_LINE(815)
							xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
							HX_STACK_LINE(815)
							xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
						}
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(815)
							if (((len != (int)0))){
								HX_STACK_LINE(815)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(815)
								hx::MultEq(xAxis->x,num);
								HX_STACK_LINE(815)
								hx::MultEq(xAxis->y,num);
								HX_STACK_LINE(815)
								hx::MultEq(xAxis->z,num);
							}
						}
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
							HX_STACK_LINE(815)
							yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
							HX_STACK_LINE(815)
							yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
						}
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(815)
							if (((len != (int)0))){
								HX_STACK_LINE(815)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(815)
								hx::MultEq(yAxis->x,num);
								HX_STACK_LINE(815)
								hx::MultEq(yAxis->y,num);
								HX_STACK_LINE(815)
								hx::MultEq(yAxis->z,num);
							}
						}
						HX_STACK_LINE(815)
						Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
						HX_STACK_LINE(815)
						Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
						HX_STACK_LINE(815)
						Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							result->m[(int)0] = xAxis->x;
							HX_STACK_LINE(815)
							result->m[(int)1] = yAxis->x;
							HX_STACK_LINE(815)
							result->m[(int)2] = zAxis->x;
							HX_STACK_LINE(815)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)4] = xAxis->y;
							HX_STACK_LINE(815)
							result->m[(int)5] = yAxis->y;
							HX_STACK_LINE(815)
							result->m[(int)6] = zAxis->y;
							HX_STACK_LINE(815)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)8] = xAxis->z;
							HX_STACK_LINE(815)
							result->m[(int)9] = yAxis->z;
							HX_STACK_LINE(815)
							result->m[(int)10] = zAxis->z;
							HX_STACK_LINE(815)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(815)
							result->m[(int)12] = ex;
							HX_STACK_LINE(815)
							result->m[(int)13] = ey;
							HX_STACK_LINE(815)
							result->m[(int)14] = ez;
							HX_STACK_LINE(815)
							result->m[(int)15] = (int)1;
							HX_STACK_LINE(815)
							result;
						}
					}
					HX_STACK_LINE(815)
					this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
					HX_STACK_LINE(815)
					{
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localBillboard;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
							HX_STACK_LINE(815)
							Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
							HX_STACK_LINE(815)
							Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
							HX_STACK_LINE(815)
							Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
							HX_STACK_LINE(815)
							Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
							HX_STACK_LINE(815)
							Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
							HX_STACK_LINE(815)
							Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
							HX_STACK_LINE(815)
							Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
							HX_STACK_LINE(815)
							Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
							HX_STACK_LINE(815)
							Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
							HX_STACK_LINE(815)
							Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
							HX_STACK_LINE(815)
							Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
							HX_STACK_LINE(815)
							Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
							HX_STACK_LINE(815)
							Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
							HX_STACK_LINE(815)
							Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
							HX_STACK_LINE(815)
							Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
							HX_STACK_LINE(815)
							Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
							HX_STACK_LINE(815)
							Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
							HX_STACK_LINE(815)
							Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
							HX_STACK_LINE(815)
							Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
							HX_STACK_LINE(815)
							Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
							HX_STACK_LINE(815)
							Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
							HX_STACK_LINE(815)
							Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
							HX_STACK_LINE(815)
							Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
							HX_STACK_LINE(815)
							Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
							HX_STACK_LINE(815)
							Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
							HX_STACK_LINE(815)
							Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
							HX_STACK_LINE(815)
							Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
							HX_STACK_LINE(815)
							Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
							HX_STACK_LINE(815)
							Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
							HX_STACK_LINE(815)
							Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
							HX_STACK_LINE(815)
							Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
							HX_STACK_LINE(815)
							Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
							HX_STACK_LINE(815)
							Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
							HX_STACK_LINE(815)
							Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
							HX_STACK_LINE(815)
							Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
							HX_STACK_LINE(815)
							Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
							HX_STACK_LINE(815)
							Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
							HX_STACK_LINE(815)
							Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
							HX_STACK_LINE(815)
							_this->m[(int)0] = (l23 * l27);
							HX_STACK_LINE(815)
							_this->m[(int)4] = (l24 * l27);
							HX_STACK_LINE(815)
							_this->m[(int)8] = (l25 * l27);
							HX_STACK_LINE(815)
							_this->m[(int)12] = (l26 * l27);
							HX_STACK_LINE(815)
							_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
							HX_STACK_LINE(815)
							_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
							HX_STACK_LINE(815)
							_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
							HX_STACK_LINE(815)
							_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
							HX_STACK_LINE(815)
							_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
							HX_STACK_LINE(815)
							_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
							HX_STACK_LINE(815)
							_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
							HX_STACK_LINE(815)
							_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
							HX_STACK_LINE(815)
							_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
							HX_STACK_LINE(815)
							_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
							HX_STACK_LINE(815)
							_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
							HX_STACK_LINE(815)
							_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
						}
					}
					HX_STACK_LINE(815)
					{
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(815)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(815)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(815)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(815)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(815)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(815)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(815)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(815)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(815)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(815)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(815)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(815)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(815)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(815)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(815)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(815)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(815)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(815)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(815)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(815)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(815)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(815)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(815)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(815)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(815)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(815)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(815)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(815)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(815)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(815)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(815)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(815)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(815)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(815)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(815)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(815)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(815)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(815)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(815)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(815)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(815)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(815)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(815)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(815)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(815)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(815)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(815)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(815)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(815)
							result;
						}
					}
					HX_STACK_LINE(815)
					{
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(815)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(815)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(815)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(815)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(815)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(815)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(815)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(815)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(815)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(815)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(815)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(815)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(815)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(815)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(815)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(815)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(815)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(815)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(815)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(815)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(815)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(815)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(815)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(815)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(815)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(815)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(815)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(815)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(815)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(815)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(815)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(815)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(815)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(815)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(815)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(815)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(815)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(815)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(815)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(815)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(815)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(815)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(815)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(815)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(815)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(815)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(815)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(815)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(815)
							result;
						}
					}
				}
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",815,0x2cff64c0)
						{
							HX_STACK_LINE(815)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _g3 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(815)
							return (_g3 != null());
						}
						return null();
					}
				};
				HX_STACK_LINE(815)
				if (((  (((  (((this->parent != null()))) ? bool(_Function_3_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
					HX_STACK_LINE(815)
					{
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(815)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(815)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(815)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(815)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(815)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(815)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(815)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(815)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(815)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(815)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(815)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(815)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(815)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(815)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(815)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(815)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(815)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(815)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(815)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(815)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(815)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(815)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(815)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(815)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(815)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(815)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(815)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(815)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(815)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(815)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(815)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(815)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(815)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(815)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(815)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(815)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(815)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(815)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(815)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(815)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(815)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(815)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(815)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(815)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(815)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(815)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(815)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(815)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(815)
							result;
						}
					}
					HX_STACK_LINE(815)
					::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
					HX_STACK_LINE(815)
					{
						HX_STACK_LINE(815)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localWorld;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(815)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(815)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(815)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(815)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(815)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(815)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(815)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(815)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(815)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(815)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(815)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(815)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(815)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(815)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(815)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(815)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(815)
							Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(815)
							Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(815)
							Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(815)
							Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(815)
							Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(815)
							Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(815)
							Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(815)
							Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(815)
							Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(815)
							Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(815)
							Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(815)
							Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(815)
							Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(815)
							Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(815)
							Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(815)
							Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(815)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(815)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(815)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(815)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(815)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(815)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(815)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(815)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(815)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(815)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(815)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(815)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(815)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(815)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(815)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(815)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(815)
							result;
						}
					}
				}
				else{
					HX_STACK_LINE(815)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(815)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(815)
					{
						HX_STACK_LINE(815)
						Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(815)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(815)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(815)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(815)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(815)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(815)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(815)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(815)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(815)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(815)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(815)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(815)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(815)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(815)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(815)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(815)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(815)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(815)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(815)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(815)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(815)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(815)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(815)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(815)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(815)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(815)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(815)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(815)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(815)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(815)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(815)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(815)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(815)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(815)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(815)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(815)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(815)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(815)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(815)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(815)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(815)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(815)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(815)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(815)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(815)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(815)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(815)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(815)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(815)
						result;
					}
				}
				HX_STACK_LINE(815)
				if (((this->_boundingInfo != null()))){
					HX_STACK_LINE(815)
					Float _g4 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(815)
					this->_scaleFactor = _g4;
					HX_STACK_LINE(815)
					Float _g5 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(815)
					this->_scaleFactor = _g5;
					struct _Function_4_1{
						inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",815,0x2cff64c0)
							{
								HX_STACK_LINE(815)
								Dynamic _g6 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(815)
								return (_g6 != null());
							}
							return null();
						}
					};
					HX_STACK_LINE(815)
					if (((  (((this->parent != null()))) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
						HX_STACK_LINE(815)
						Dynamic _g7 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(815)
						Float _g8 = (this->_scaleFactor * _g7);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(815)
						this->_scaleFactor = _g8;
					}
					HX_STACK_LINE(815)
					this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
					HX_STACK_LINE(815)
					{
						HX_STACK_LINE(815)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(815)
						int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(815)
						while((true)){
							HX_STACK_LINE(815)
							if ((!(((_g11 < _g))))){
								HX_STACK_LINE(815)
								break;
							}
							HX_STACK_LINE(815)
							int subIndex = (_g11)++;		HX_STACK_VAR(subIndex,"subIndex");
							HX_STACK_LINE(815)
							::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
							HX_STACK_LINE(815)
							subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
						}
					}
				}
				HX_STACK_LINE(815)
				{
					HX_STACK_LINE(815)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_absolutePosition;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(815)
					_this->x = this->_worldMatrix->m->__get((int)12);
					HX_STACK_LINE(815)
					_this->y = this->_worldMatrix->m->__get((int)13);
					HX_STACK_LINE(815)
					_this->z = this->_worldMatrix->m->__get((int)14);
				}
				HX_STACK_LINE(815)
				ret = this->_worldMatrix;
			}
			HX_STACK_LINE(815)
			ret;
		}
		HX_STACK_LINE(816)
		::com::gamestudiohx::babylonhx::tools::math::Matrix worldMatrix;		HX_STACK_VAR(worldMatrix,"worldMatrix");
		HX_STACK_LINE(816)
		{
			HX_STACK_LINE(816)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_worldMatrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(816)
			{
				HX_STACK_LINE(816)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(816)
				result->m[(int)0] = _this->m->__get((int)0);
				HX_STACK_LINE(816)
				result->m[(int)1] = _this->m->__get((int)1);
				HX_STACK_LINE(816)
				result->m[(int)2] = _this->m->__get((int)2);
				HX_STACK_LINE(816)
				result->m[(int)3] = _this->m->__get((int)3);
				HX_STACK_LINE(816)
				result->m[(int)4] = _this->m->__get((int)4);
				HX_STACK_LINE(816)
				result->m[(int)5] = _this->m->__get((int)5);
				HX_STACK_LINE(816)
				result->m[(int)6] = _this->m->__get((int)6);
				HX_STACK_LINE(816)
				result->m[(int)7] = _this->m->__get((int)7);
				HX_STACK_LINE(816)
				result->m[(int)8] = _this->m->__get((int)8);
				HX_STACK_LINE(816)
				result->m[(int)9] = _this->m->__get((int)9);
				HX_STACK_LINE(816)
				result->m[(int)10] = _this->m->__get((int)10);
				HX_STACK_LINE(816)
				result->m[(int)11] = _this->m->__get((int)11);
				HX_STACK_LINE(816)
				result->m[(int)12] = _this->m->__get((int)12);
				HX_STACK_LINE(816)
				result->m[(int)13] = _this->m->__get((int)13);
				HX_STACK_LINE(816)
				result->m[(int)14] = _this->m->__get((int)14);
				HX_STACK_LINE(816)
				result->m[(int)15] = _this->m->__get((int)15);
				HX_STACK_LINE(816)
				worldMatrix = result;
			}
		}
		HX_STACK_LINE(817)
		{
			HX_STACK_LINE(817)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 vector31 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(vector31,"vector31");
			HX_STACK_LINE(817)
			worldMatrix->m[(int)12] = vector31->x;
			HX_STACK_LINE(817)
			worldMatrix->m[(int)13] = vector31->y;
			HX_STACK_LINE(817)
			worldMatrix->m[(int)14] = vector31->z;
		}
		HX_STACK_LINE(819)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g9;		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(819)
		{
			HX_STACK_LINE(819)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(819)
			{
				HX_STACK_LINE(819)
				Float x = ((((vector3->x * worldMatrix->m->__get((int)0)) + (vector3->y * worldMatrix->m->__get((int)4))) + (vector3->z * worldMatrix->m->__get((int)8))) + worldMatrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(819)
				Float y = ((((vector3->x * worldMatrix->m->__get((int)1)) + (vector3->y * worldMatrix->m->__get((int)5))) + (vector3->z * worldMatrix->m->__get((int)9))) + worldMatrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(819)
				Float z = ((((vector3->x * worldMatrix->m->__get((int)2)) + (vector3->y * worldMatrix->m->__get((int)6))) + (vector3->z * worldMatrix->m->__get((int)10))) + worldMatrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(819)
				Float w = ((((vector3->x * worldMatrix->m->__get((int)3)) + (vector3->y * worldMatrix->m->__get((int)7))) + (vector3->z * worldMatrix->m->__get((int)11))) + worldMatrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(819)
				result->x = (Float(x) / Float(w));
				HX_STACK_LINE(819)
				result->y = (Float(y) / Float(w));
				HX_STACK_LINE(819)
				result->z = (Float(z) / Float(w));
			}
			HX_STACK_LINE(819)
			_g9 = result;
		}
		HX_STACK_LINE(819)
		this->position = _g9;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,setLocalTranslation,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector3 AbstractMesh_obj::getLocalTranslation( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getLocalTranslation",0x5534154c,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getLocalTranslation","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",822,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(823)
	{
		HX_STACK_LINE(823)
		bool force = false;		HX_STACK_VAR(force,"force");
		HX_STACK_LINE(823)
		::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",823,0x2cff64c0)
				{
					HX_STACK_LINE(823)
					int _g = __this->_scene->getRenderId();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(823)
					return (  ((!(((__this->_currentRenderId == _g))))) ? bool(__this->isSynchronized(null())) : bool(true) );
				}
				return null();
			}
		};
		HX_STACK_LINE(823)
		if (((  ((!(force))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(823)
			this->_childrenFlag = (int)0;
		}
		else{
			HX_STACK_LINE(823)
			this->_childrenFlag = (int)1;
			HX_STACK_LINE(823)
			this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
			HX_STACK_LINE(823)
			this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
			HX_STACK_LINE(823)
			this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
			HX_STACK_LINE(823)
			int _g1 = this->_scene->getRenderId();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(823)
			this->_currentRenderId = _g1;
			HX_STACK_LINE(823)
			{
				HX_STACK_LINE(823)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(823)
				result->m[(int)0] = this->scaling->x;
				HX_STACK_LINE(823)
				result->m[(int)1] = (int)0;
				HX_STACK_LINE(823)
				result->m[(int)2] = (int)0;
				HX_STACK_LINE(823)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(823)
				result->m[(int)4] = (int)0;
				HX_STACK_LINE(823)
				result->m[(int)5] = this->scaling->y;
				HX_STACK_LINE(823)
				result->m[(int)6] = (int)0;
				HX_STACK_LINE(823)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(823)
				result->m[(int)8] = (int)0;
				HX_STACK_LINE(823)
				result->m[(int)9] = (int)0;
				HX_STACK_LINE(823)
				result->m[(int)10] = this->scaling->z;
				HX_STACK_LINE(823)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(823)
				result->m[(int)12] = (int)0;
				HX_STACK_LINE(823)
				result->m[(int)13] = (int)0;
				HX_STACK_LINE(823)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(823)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(823)
				result;
			}
			HX_STACK_LINE(823)
			if (((this->rotationQuaternion != null()))){
				HX_STACK_LINE(823)
				{
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = this->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(823)
					Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(823)
					Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(823)
					Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
					HX_STACK_LINE(823)
					Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
					HX_STACK_LINE(823)
					Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
					HX_STACK_LINE(823)
					Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
					HX_STACK_LINE(823)
					Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
					HX_STACK_LINE(823)
					Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
					HX_STACK_LINE(823)
					Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
					HX_STACK_LINE(823)
					result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
					HX_STACK_LINE(823)
					result->m[(int)1] = (2.0 * ((xy + zw)));
					HX_STACK_LINE(823)
					result->m[(int)2] = (2.0 * ((zx - yw)));
					HX_STACK_LINE(823)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(823)
					result->m[(int)4] = (2.0 * ((xy - zw)));
					HX_STACK_LINE(823)
					result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
					HX_STACK_LINE(823)
					result->m[(int)6] = (2.0 * ((yz + xw)));
					HX_STACK_LINE(823)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(823)
					result->m[(int)8] = (2.0 * ((zx + yw)));
					HX_STACK_LINE(823)
					result->m[(int)9] = (2.0 * ((yz - xw)));
					HX_STACK_LINE(823)
					result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
					HX_STACK_LINE(823)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(823)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(823)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(823)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(823)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(823)
					result;
				}
				HX_STACK_LINE(823)
				this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
			}
			else{
				HX_STACK_LINE(823)
				{
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
						HX_STACK_LINE(823)
						Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
						HX_STACK_LINE(823)
						Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
						HX_STACK_LINE(823)
						Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
						HX_STACK_LINE(823)
						Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
						HX_STACK_LINE(823)
						Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
						HX_STACK_LINE(823)
						Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
						HX_STACK_LINE(823)
						Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
						HX_STACK_LINE(823)
						Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
						HX_STACK_LINE(823)
						tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
						HX_STACK_LINE(823)
						tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
						HX_STACK_LINE(823)
						tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
						HX_STACK_LINE(823)
						tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
						HX_STACK_LINE(823)
						_g2 = tempQuaternion;
					}
					HX_STACK_LINE(823)
					tempQuaternion = _g2;
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(823)
						Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(823)
						Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(823)
						Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(823)
						Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
						HX_STACK_LINE(823)
						Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
						HX_STACK_LINE(823)
						Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
						HX_STACK_LINE(823)
						Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(823)
						Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
						HX_STACK_LINE(823)
						result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
						HX_STACK_LINE(823)
						result->m[(int)1] = (2.0 * ((xy + zw)));
						HX_STACK_LINE(823)
						result->m[(int)2] = (2.0 * ((zx - yw)));
						HX_STACK_LINE(823)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)4] = (2.0 * ((xy - zw)));
						HX_STACK_LINE(823)
						result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
						HX_STACK_LINE(823)
						result->m[(int)6] = (2.0 * ((yz + xw)));
						HX_STACK_LINE(823)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)8] = (2.0 * ((zx + yw)));
						HX_STACK_LINE(823)
						result->m[(int)9] = (2.0 * ((yz - xw)));
						HX_STACK_LINE(823)
						result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
						HX_STACK_LINE(823)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(823)
						result;
					}
				}
				HX_STACK_LINE(823)
				this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
			}
			HX_STACK_LINE(823)
			if ((this->infiniteDistance)){
				HX_STACK_LINE(823)
				::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(823)
				{
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						result->m[(int)0] = 1.0;
						HX_STACK_LINE(823)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)5] = 1.0;
						HX_STACK_LINE(823)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)10] = 1.0;
						HX_STACK_LINE(823)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)12] = (this->position->x + camera->position->x);
						HX_STACK_LINE(823)
						result->m[(int)13] = (this->position->y + camera->position->y);
						HX_STACK_LINE(823)
						result->m[(int)14] = (this->position->z + camera->position->z);
						HX_STACK_LINE(823)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(823)
						result;
					}
				}
			}
			else{
				HX_STACK_LINE(823)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(823)
				{
					HX_STACK_LINE(823)
					result->m[(int)0] = 1.0;
					HX_STACK_LINE(823)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(823)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(823)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(823)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(823)
					result->m[(int)5] = 1.0;
					HX_STACK_LINE(823)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(823)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(823)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(823)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(823)
					result->m[(int)10] = 1.0;
					HX_STACK_LINE(823)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(823)
					result->m[(int)12] = this->position->x;
					HX_STACK_LINE(823)
					result->m[(int)13] = this->position->y;
					HX_STACK_LINE(823)
					result->m[(int)14] = this->position->z;
					HX_STACK_LINE(823)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(823)
					result;
				}
			}
			HX_STACK_LINE(823)
			{
				HX_STACK_LINE(823)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(823)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(823)
				{
					HX_STACK_LINE(823)
					Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(823)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(823)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(823)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(823)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(823)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(823)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(823)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(823)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(823)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(823)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(823)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(823)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(823)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(823)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(823)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(823)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(823)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(823)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(823)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(823)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(823)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(823)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(823)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(823)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(823)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(823)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(823)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(823)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(823)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(823)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(823)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(823)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(823)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(823)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(823)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(823)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(823)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(823)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(823)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(823)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(823)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(823)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(823)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(823)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(823)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(823)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(823)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(823)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(823)
					result;
				}
			}
			HX_STACK_LINE(823)
			{
				HX_STACK_LINE(823)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(823)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(823)
				{
					HX_STACK_LINE(823)
					Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(823)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(823)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(823)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(823)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(823)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(823)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(823)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(823)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(823)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(823)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(823)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(823)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(823)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(823)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(823)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(823)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(823)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(823)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(823)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(823)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(823)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(823)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(823)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(823)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(823)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(823)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(823)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(823)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(823)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(823)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(823)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(823)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(823)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(823)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(823)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(823)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(823)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(823)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(823)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(823)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(823)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(823)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(823)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(823)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(823)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(823)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(823)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(823)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(823)
					result;
				}
			}
			HX_STACK_LINE(823)
			if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
				HX_STACK_LINE(823)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
				HX_STACK_LINE(823)
				{
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(823)
					localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
				}
				HX_STACK_LINE(823)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
				HX_STACK_LINE(823)
				{
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(823)
					zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
				}
				HX_STACK_LINE(823)
				if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(823)
						hx::AddEq(localPosition->x,otherVector->x);
						HX_STACK_LINE(823)
						hx::AddEq(localPosition->y,otherVector->y);
						HX_STACK_LINE(823)
						hx::AddEq(localPosition->z,otherVector->z);
					}
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(823)
						{
							HX_STACK_LINE(823)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(823)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(823)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(823)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(823)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(823)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(823)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(823)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(823)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(823)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(823)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(823)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(823)
							result->m[(int)12] = localPosition->x;
							HX_STACK_LINE(823)
							result->m[(int)13] = localPosition->y;
							HX_STACK_LINE(823)
							result->m[(int)14] = localPosition->z;
							HX_STACK_LINE(823)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(823)
							result;
						}
					}
				}
				HX_STACK_LINE(823)
				if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
					HX_STACK_LINE(823)
					zero = this->_scene->activeCamera->position;
				}
				else{
					HX_STACK_LINE(823)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
						HX_STACK_LINE(823)
						zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
					HX_STACK_LINE(823)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
						HX_STACK_LINE(823)
						zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
					HX_STACK_LINE(823)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
						HX_STACK_LINE(823)
						zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
				}
				HX_STACK_LINE(823)
				{
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						zAxis->x = (zero->x - localPosition->x);
						HX_STACK_LINE(823)
						zAxis->y = (zero->y - localPosition->y);
						HX_STACK_LINE(823)
						zAxis->z = (zero->z - localPosition->z);
					}
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(823)
						if (((len != (int)0))){
							HX_STACK_LINE(823)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(823)
							hx::MultEq(zAxis->x,num);
							HX_STACK_LINE(823)
							hx::MultEq(zAxis->y,num);
							HX_STACK_LINE(823)
							hx::MultEq(zAxis->z,num);
						}
					}
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
						HX_STACK_LINE(823)
						xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
						HX_STACK_LINE(823)
						xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
					}
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(823)
						if (((len != (int)0))){
							HX_STACK_LINE(823)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(823)
							hx::MultEq(xAxis->x,num);
							HX_STACK_LINE(823)
							hx::MultEq(xAxis->y,num);
							HX_STACK_LINE(823)
							hx::MultEq(xAxis->z,num);
						}
					}
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
						HX_STACK_LINE(823)
						yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
						HX_STACK_LINE(823)
						yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
					}
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(823)
						if (((len != (int)0))){
							HX_STACK_LINE(823)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(823)
							hx::MultEq(yAxis->x,num);
							HX_STACK_LINE(823)
							hx::MultEq(yAxis->y,num);
							HX_STACK_LINE(823)
							hx::MultEq(yAxis->z,num);
						}
					}
					HX_STACK_LINE(823)
					Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
					HX_STACK_LINE(823)
					Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
					HX_STACK_LINE(823)
					Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						result->m[(int)0] = xAxis->x;
						HX_STACK_LINE(823)
						result->m[(int)1] = yAxis->x;
						HX_STACK_LINE(823)
						result->m[(int)2] = zAxis->x;
						HX_STACK_LINE(823)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)4] = xAxis->y;
						HX_STACK_LINE(823)
						result->m[(int)5] = yAxis->y;
						HX_STACK_LINE(823)
						result->m[(int)6] = zAxis->y;
						HX_STACK_LINE(823)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)8] = xAxis->z;
						HX_STACK_LINE(823)
						result->m[(int)9] = yAxis->z;
						HX_STACK_LINE(823)
						result->m[(int)10] = zAxis->z;
						HX_STACK_LINE(823)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(823)
						result->m[(int)12] = ex;
						HX_STACK_LINE(823)
						result->m[(int)13] = ey;
						HX_STACK_LINE(823)
						result->m[(int)14] = ez;
						HX_STACK_LINE(823)
						result->m[(int)15] = (int)1;
						HX_STACK_LINE(823)
						result;
					}
				}
				HX_STACK_LINE(823)
				this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
				HX_STACK_LINE(823)
				{
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localBillboard;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
						HX_STACK_LINE(823)
						Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
						HX_STACK_LINE(823)
						Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
						HX_STACK_LINE(823)
						Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
						HX_STACK_LINE(823)
						Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
						HX_STACK_LINE(823)
						Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
						HX_STACK_LINE(823)
						Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
						HX_STACK_LINE(823)
						Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
						HX_STACK_LINE(823)
						Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
						HX_STACK_LINE(823)
						Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
						HX_STACK_LINE(823)
						Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
						HX_STACK_LINE(823)
						Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
						HX_STACK_LINE(823)
						Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
						HX_STACK_LINE(823)
						Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
						HX_STACK_LINE(823)
						Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
						HX_STACK_LINE(823)
						Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
						HX_STACK_LINE(823)
						Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
						HX_STACK_LINE(823)
						Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
						HX_STACK_LINE(823)
						Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
						HX_STACK_LINE(823)
						Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
						HX_STACK_LINE(823)
						Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
						HX_STACK_LINE(823)
						Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
						HX_STACK_LINE(823)
						Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
						HX_STACK_LINE(823)
						Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
						HX_STACK_LINE(823)
						Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
						HX_STACK_LINE(823)
						Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
						HX_STACK_LINE(823)
						Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
						HX_STACK_LINE(823)
						Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
						HX_STACK_LINE(823)
						Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
						HX_STACK_LINE(823)
						Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
						HX_STACK_LINE(823)
						Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
						HX_STACK_LINE(823)
						Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
						HX_STACK_LINE(823)
						Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
						HX_STACK_LINE(823)
						Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
						HX_STACK_LINE(823)
						Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
						HX_STACK_LINE(823)
						Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
						HX_STACK_LINE(823)
						Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
						HX_STACK_LINE(823)
						Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
						HX_STACK_LINE(823)
						Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
						HX_STACK_LINE(823)
						_this->m[(int)0] = (l23 * l27);
						HX_STACK_LINE(823)
						_this->m[(int)4] = (l24 * l27);
						HX_STACK_LINE(823)
						_this->m[(int)8] = (l25 * l27);
						HX_STACK_LINE(823)
						_this->m[(int)12] = (l26 * l27);
						HX_STACK_LINE(823)
						_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
						HX_STACK_LINE(823)
						_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
						HX_STACK_LINE(823)
						_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
						HX_STACK_LINE(823)
						_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
						HX_STACK_LINE(823)
						_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
						HX_STACK_LINE(823)
						_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
						HX_STACK_LINE(823)
						_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
						HX_STACK_LINE(823)
						_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
						HX_STACK_LINE(823)
						_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
						HX_STACK_LINE(823)
						_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
						HX_STACK_LINE(823)
						_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
						HX_STACK_LINE(823)
						_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
					}
				}
				HX_STACK_LINE(823)
				{
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(823)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(823)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(823)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(823)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(823)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(823)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(823)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(823)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(823)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(823)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(823)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(823)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(823)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(823)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(823)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(823)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(823)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(823)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(823)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(823)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(823)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(823)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(823)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(823)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(823)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(823)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(823)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(823)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(823)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(823)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(823)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(823)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(823)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(823)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(823)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(823)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(823)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(823)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(823)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(823)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(823)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(823)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(823)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(823)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(823)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(823)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(823)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(823)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(823)
						result;
					}
				}
				HX_STACK_LINE(823)
				{
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(823)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(823)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(823)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(823)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(823)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(823)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(823)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(823)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(823)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(823)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(823)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(823)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(823)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(823)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(823)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(823)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(823)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(823)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(823)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(823)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(823)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(823)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(823)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(823)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(823)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(823)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(823)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(823)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(823)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(823)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(823)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(823)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(823)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(823)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(823)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(823)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(823)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(823)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(823)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(823)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(823)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(823)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(823)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(823)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(823)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(823)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(823)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(823)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(823)
						result;
					}
				}
			}
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",823,0x2cff64c0)
					{
						HX_STACK_LINE(823)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _g3 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(823)
						return (_g3 != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(823)
			if (((  (((  (((this->parent != null()))) ? bool(_Function_3_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
				HX_STACK_LINE(823)
				{
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(823)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(823)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(823)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(823)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(823)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(823)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(823)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(823)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(823)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(823)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(823)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(823)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(823)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(823)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(823)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(823)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(823)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(823)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(823)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(823)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(823)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(823)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(823)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(823)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(823)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(823)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(823)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(823)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(823)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(823)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(823)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(823)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(823)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(823)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(823)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(823)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(823)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(823)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(823)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(823)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(823)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(823)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(823)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(823)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(823)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(823)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(823)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(823)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(823)
						result;
					}
				}
				HX_STACK_LINE(823)
				::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
				HX_STACK_LINE(823)
				{
					HX_STACK_LINE(823)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localWorld;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(823)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(823)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(823)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(823)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(823)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(823)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(823)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(823)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(823)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(823)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(823)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(823)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(823)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(823)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(823)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(823)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(823)
						Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(823)
						Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(823)
						Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(823)
						Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(823)
						Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(823)
						Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(823)
						Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(823)
						Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(823)
						Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(823)
						Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(823)
						Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(823)
						Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(823)
						Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(823)
						Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(823)
						Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(823)
						Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(823)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(823)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(823)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(823)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(823)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(823)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(823)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(823)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(823)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(823)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(823)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(823)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(823)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(823)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(823)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(823)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(823)
						result;
					}
				}
			}
			else{
				HX_STACK_LINE(823)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(823)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(823)
				{
					HX_STACK_LINE(823)
					Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(823)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(823)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(823)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(823)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(823)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(823)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(823)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(823)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(823)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(823)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(823)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(823)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(823)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(823)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(823)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(823)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(823)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(823)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(823)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(823)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(823)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(823)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(823)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(823)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(823)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(823)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(823)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(823)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(823)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(823)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(823)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(823)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(823)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(823)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(823)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(823)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(823)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(823)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(823)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(823)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(823)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(823)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(823)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(823)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(823)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(823)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(823)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(823)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(823)
					result;
				}
			}
			HX_STACK_LINE(823)
			if (((this->_boundingInfo != null()))){
				HX_STACK_LINE(823)
				Float _g4 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(823)
				this->_scaleFactor = _g4;
				HX_STACK_LINE(823)
				Float _g5 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(823)
				this->_scaleFactor = _g5;
				struct _Function_4_1{
					inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",823,0x2cff64c0)
						{
							HX_STACK_LINE(823)
							Dynamic _g6 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(823)
							return (_g6 != null());
						}
						return null();
					}
				};
				HX_STACK_LINE(823)
				if (((  (((this->parent != null()))) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(823)
					Dynamic _g7 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(823)
					Float _g8 = (this->_scaleFactor * _g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(823)
					this->_scaleFactor = _g8;
				}
				HX_STACK_LINE(823)
				this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
				HX_STACK_LINE(823)
				{
					HX_STACK_LINE(823)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(823)
					int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(823)
					while((true)){
						HX_STACK_LINE(823)
						if ((!(((_g11 < _g))))){
							HX_STACK_LINE(823)
							break;
						}
						HX_STACK_LINE(823)
						int subIndex = (_g11)++;		HX_STACK_VAR(subIndex,"subIndex");
						HX_STACK_LINE(823)
						::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
						HX_STACK_LINE(823)
						subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
					}
				}
			}
			HX_STACK_LINE(823)
			{
				HX_STACK_LINE(823)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_absolutePosition;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(823)
				_this->x = this->_worldMatrix->m->__get((int)12);
				HX_STACK_LINE(823)
				_this->y = this->_worldMatrix->m->__get((int)13);
				HX_STACK_LINE(823)
				_this->z = this->_worldMatrix->m->__get((int)14);
			}
			HX_STACK_LINE(823)
			ret = this->_worldMatrix;
		}
		HX_STACK_LINE(823)
		ret;
	}
	HX_STACK_LINE(824)
	::com::gamestudiohx::babylonhx::tools::math::Matrix invWorldMatrix;		HX_STACK_VAR(invWorldMatrix,"invWorldMatrix");
	HX_STACK_LINE(824)
	{
		HX_STACK_LINE(824)
		::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_worldMatrix;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(824)
		{
			HX_STACK_LINE(824)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(824)
			result->m[(int)0] = _this->m->__get((int)0);
			HX_STACK_LINE(824)
			result->m[(int)1] = _this->m->__get((int)1);
			HX_STACK_LINE(824)
			result->m[(int)2] = _this->m->__get((int)2);
			HX_STACK_LINE(824)
			result->m[(int)3] = _this->m->__get((int)3);
			HX_STACK_LINE(824)
			result->m[(int)4] = _this->m->__get((int)4);
			HX_STACK_LINE(824)
			result->m[(int)5] = _this->m->__get((int)5);
			HX_STACK_LINE(824)
			result->m[(int)6] = _this->m->__get((int)6);
			HX_STACK_LINE(824)
			result->m[(int)7] = _this->m->__get((int)7);
			HX_STACK_LINE(824)
			result->m[(int)8] = _this->m->__get((int)8);
			HX_STACK_LINE(824)
			result->m[(int)9] = _this->m->__get((int)9);
			HX_STACK_LINE(824)
			result->m[(int)10] = _this->m->__get((int)10);
			HX_STACK_LINE(824)
			result->m[(int)11] = _this->m->__get((int)11);
			HX_STACK_LINE(824)
			result->m[(int)12] = _this->m->__get((int)12);
			HX_STACK_LINE(824)
			result->m[(int)13] = _this->m->__get((int)13);
			HX_STACK_LINE(824)
			result->m[(int)14] = _this->m->__get((int)14);
			HX_STACK_LINE(824)
			result->m[(int)15] = _this->m->__get((int)15);
			HX_STACK_LINE(824)
			invWorldMatrix = result;
		}
	}
	HX_STACK_LINE(825)
	{
		HX_STACK_LINE(825)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 vector3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(vector3,"vector3");
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)12] = vector3->x;
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)13] = vector3->y;
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)14] = vector3->z;
	}
	HX_STACK_LINE(826)
	{
		HX_STACK_LINE(826)
		Float l1 = invWorldMatrix->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
		HX_STACK_LINE(826)
		Float l2 = invWorldMatrix->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
		HX_STACK_LINE(826)
		Float l3 = invWorldMatrix->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
		HX_STACK_LINE(826)
		Float l4 = invWorldMatrix->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
		HX_STACK_LINE(826)
		Float l5 = invWorldMatrix->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
		HX_STACK_LINE(826)
		Float l6 = invWorldMatrix->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
		HX_STACK_LINE(826)
		Float l7 = invWorldMatrix->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
		HX_STACK_LINE(826)
		Float l8 = invWorldMatrix->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
		HX_STACK_LINE(826)
		Float l9 = invWorldMatrix->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
		HX_STACK_LINE(826)
		Float l10 = invWorldMatrix->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
		HX_STACK_LINE(826)
		Float l11 = invWorldMatrix->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
		HX_STACK_LINE(826)
		Float l12 = invWorldMatrix->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
		HX_STACK_LINE(826)
		Float l13 = invWorldMatrix->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
		HX_STACK_LINE(826)
		Float l14 = invWorldMatrix->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
		HX_STACK_LINE(826)
		Float l15 = invWorldMatrix->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
		HX_STACK_LINE(826)
		Float l16 = invWorldMatrix->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
		HX_STACK_LINE(826)
		Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
		HX_STACK_LINE(826)
		Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
		HX_STACK_LINE(826)
		Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
		HX_STACK_LINE(826)
		Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
		HX_STACK_LINE(826)
		Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
		HX_STACK_LINE(826)
		Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
		HX_STACK_LINE(826)
		Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
		HX_STACK_LINE(826)
		Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
		HX_STACK_LINE(826)
		Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
		HX_STACK_LINE(826)
		Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
		HX_STACK_LINE(826)
		Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
		HX_STACK_LINE(826)
		Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
		HX_STACK_LINE(826)
		Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
		HX_STACK_LINE(826)
		Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
		HX_STACK_LINE(826)
		Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
		HX_STACK_LINE(826)
		Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
		HX_STACK_LINE(826)
		Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
		HX_STACK_LINE(826)
		Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
		HX_STACK_LINE(826)
		Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
		HX_STACK_LINE(826)
		Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
		HX_STACK_LINE(826)
		Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
		HX_STACK_LINE(826)
		Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
		HX_STACK_LINE(826)
		Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
		HX_STACK_LINE(826)
		invWorldMatrix->m[(int)0] = (l23 * l27);
		HX_STACK_LINE(826)
		invWorldMatrix->m[(int)4] = (l24 * l27);
		HX_STACK_LINE(826)
		invWorldMatrix->m[(int)8] = (l25 * l27);
		HX_STACK_LINE(826)
		invWorldMatrix->m[(int)12] = (l26 * l27);
		HX_STACK_LINE(826)
		invWorldMatrix->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
		HX_STACK_LINE(826)
		invWorldMatrix->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
		HX_STACK_LINE(826)
		invWorldMatrix->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
		HX_STACK_LINE(826)
		invWorldMatrix->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
		HX_STACK_LINE(826)
		invWorldMatrix->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
		HX_STACK_LINE(826)
		invWorldMatrix->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
		HX_STACK_LINE(826)
		invWorldMatrix->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
		HX_STACK_LINE(826)
		invWorldMatrix->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
		HX_STACK_LINE(826)
		invWorldMatrix->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
		HX_STACK_LINE(826)
		invWorldMatrix->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
		HX_STACK_LINE(826)
		invWorldMatrix->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
		HX_STACK_LINE(826)
		invWorldMatrix->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
	}
	HX_STACK_LINE(828)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->position;		HX_STACK_VAR(vector,"vector");
	HX_STACK_LINE(828)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(828)
	{
		HX_STACK_LINE(828)
		Float x = ((((vector->x * invWorldMatrix->m->__get((int)0)) + (vector->y * invWorldMatrix->m->__get((int)4))) + (vector->z * invWorldMatrix->m->__get((int)8))) + invWorldMatrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(828)
		Float y = ((((vector->x * invWorldMatrix->m->__get((int)1)) + (vector->y * invWorldMatrix->m->__get((int)5))) + (vector->z * invWorldMatrix->m->__get((int)9))) + invWorldMatrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(828)
		Float z = ((((vector->x * invWorldMatrix->m->__get((int)2)) + (vector->y * invWorldMatrix->m->__get((int)6))) + (vector->z * invWorldMatrix->m->__get((int)10))) + invWorldMatrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(828)
		Float w = ((((vector->x * invWorldMatrix->m->__get((int)3)) + (vector->y * invWorldMatrix->m->__get((int)7))) + (vector->z * invWorldMatrix->m->__get((int)11))) + invWorldMatrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(828)
		result->x = (Float(x) / Float(w));
		HX_STACK_LINE(828)
		result->y = (Float(y) / Float(w));
		HX_STACK_LINE(828)
		result->z = (Float(z) / Float(w));
	}
	HX_STACK_LINE(828)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getLocalTranslation,return )

bool AbstractMesh_obj::intersectsMesh( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh,bool precise){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","intersectsMesh",0x2b3d2971,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.intersectsMesh","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",860,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mesh,"mesh")
	HX_STACK_ARG(precise,"precise")
	HX_STACK_LINE(861)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(862)
	if (((bool((this->_boundingInfo == null())) || bool((mesh->_boundingInfo == null()))))){
		HX_STACK_LINE(863)
		ret = false;
	}
	else{
		HX_STACK_LINE(865)
		bool _g = this->_boundingInfo->intersects(mesh->_boundingInfo,precise);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(865)
		ret = _g;
	}
	HX_STACK_LINE(867)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(AbstractMesh_obj,intersectsMesh,return )

bool AbstractMesh_obj::intersectsPoint( ::com::gamestudiohx::babylonhx::tools::math::Vector3 point){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","intersectsPoint",0x6b0f684c,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.intersectsPoint","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",870,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(871)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(872)
	if (((this->_boundingInfo != null()))){
		HX_STACK_LINE(873)
		bool _g = this->_boundingInfo->intersectsPoint(point);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(873)
		ret = _g;
	}
	HX_STACK_LINE(875)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,intersectsPoint,return )

::com::gamestudiohx::babylonhx::collisions::PickingInfo AbstractMesh_obj::intersects( ::com::gamestudiohx::babylonhx::tools::math::Ray ray,bool fastCheck){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","intersects",0x0b8c3164,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.intersects","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",878,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(fastCheck,"fastCheck")
	HX_STACK_LINE(879)
	::com::gamestudiohx::babylonhx::collisions::PickingInfo pickingInfo = ::com::gamestudiohx::babylonhx::collisions::PickingInfo_obj::__new();		HX_STACK_VAR(pickingInfo,"pickingInfo");
	HX_STACK_LINE(881)
	if (((  ((!(((  ((!(((this->_boundingInfo == null()))))) ? bool(!(ray->intersectsSphere(this->_boundingInfo->boundingSphere))) : bool(true) ))))) ? bool(!(ray->intersectsBox(this->_boundingInfo->boundingBox))) : bool(true) ))){
		HX_STACK_LINE(882)
		return pickingInfo;
	}
	HX_STACK_LINE(885)
	this->_generatePointsArray();
	HX_STACK_LINE(887)
	Float distance = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(distance,"distance");
	HX_STACK_LINE(889)
	{
		HX_STACK_LINE(889)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(889)
		int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(889)
		while((true)){
			HX_STACK_LINE(889)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(889)
				break;
			}
			HX_STACK_LINE(889)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(890)
			::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
			HX_STACK_LINE(893)
			if (((  (((this->subMeshes->length > (int)1))) ? bool(!(ray->intersectsBox(subMesh->_boundingInfo->boundingBox))) : bool(false) ))){
				HX_STACK_LINE(894)
				continue;
			}
			HX_STACK_LINE(896)
			Float currentDistance;		HX_STACK_VAR(currentDistance,"currentDistance");
			HX_STACK_LINE(896)
			{
				HX_STACK_LINE(896)
				Array< ::Dynamic > positions = this->_positions;		HX_STACK_VAR(positions,"positions");
				HX_STACK_LINE(896)
				Array< int > indices = this->_indices;		HX_STACK_VAR(indices,"indices");
				HX_STACK_LINE(896)
				Float distance1 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(distance1,"distance1");
				HX_STACK_LINE(896)
				int index1 = subMesh->indexStart;		HX_STACK_VAR(index1,"index1");
				HX_STACK_LINE(896)
				while((true)){
					HX_STACK_LINE(896)
					if ((!(((index1 < (subMesh->indexStart + subMesh->indexCount)))))){
						HX_STACK_LINE(896)
						break;
					}
					HX_STACK_LINE(896)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 p0 = positions->__get(indices->__get(index1)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p0,"p0");
					HX_STACK_LINE(896)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 p1 = positions->__get(indices->__get((index1 + (int)1))).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p1,"p1");
					HX_STACK_LINE(896)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 p2 = positions->__get(indices->__get((index1 + (int)2))).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p2,"p2");
					HX_STACK_LINE(896)
					Float currentDistance1 = ray->intersectsTriangle(p0,p1,p2);		HX_STACK_VAR(currentDistance1,"currentDistance1");
					HX_STACK_LINE(896)
					if (((currentDistance1 > (int)0))){
						HX_STACK_LINE(896)
						if (((bool(fastCheck) || bool((currentDistance1 < distance1))))){
							HX_STACK_LINE(896)
							distance1 = currentDistance1;
							HX_STACK_LINE(896)
							if ((fastCheck)){
								HX_STACK_LINE(896)
								break;
							}
						}
					}
					HX_STACK_LINE(896)
					hx::AddEq(index1,(int)3);
				}
				HX_STACK_LINE(896)
				if ((!(((bool((distance1 > (int)0)) && bool((distance1 < ::Math_obj::POSITIVE_INFINITY))))))){
					HX_STACK_LINE(896)
					distance1 = (int)0;
				}
				HX_STACK_LINE(896)
				currentDistance = distance1;
			}
			HX_STACK_LINE(898)
			if (((currentDistance > (int)0))){
				HX_STACK_LINE(899)
				if (((bool(fastCheck) || bool((currentDistance < distance))))){
					HX_STACK_LINE(900)
					distance = currentDistance;
					HX_STACK_LINE(902)
					if ((fastCheck)){
						HX_STACK_LINE(903)
						break;
					}
				}
			}
		}
	}
	HX_STACK_LINE(909)
	if (((bool((distance >= (int)0)) && bool((distance < ::Math_obj::POSITIVE_INFINITY))))){
		HX_STACK_LINE(911)
		::com::gamestudiohx::babylonhx::tools::math::Matrix world;		HX_STACK_VAR(world,"world");
		HX_STACK_LINE(911)
		{
			HX_STACK_LINE(911)
			int _g = this->_scene->getRenderId();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(911)
			if (((this->_currentRenderId != _g))){
				HX_STACK_LINE(911)
				bool force = false;		HX_STACK_VAR(force,"force");
				HX_STACK_LINE(911)
				::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
				struct _Function_4_1{
					inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",911,0x2cff64c0)
						{
							HX_STACK_LINE(911)
							int _g1 = __this->_scene->getRenderId();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(911)
							return (  ((!(((__this->_currentRenderId == _g1))))) ? bool(__this->isSynchronized(null())) : bool(true) );
						}
						return null();
					}
				};
				HX_STACK_LINE(911)
				if (((  ((!(force))) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(911)
					this->_childrenFlag = (int)0;
				}
				else{
					HX_STACK_LINE(911)
					this->_childrenFlag = (int)1;
					HX_STACK_LINE(911)
					this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
					HX_STACK_LINE(911)
					this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
					HX_STACK_LINE(911)
					this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
					HX_STACK_LINE(911)
					int _g2 = this->_scene->getRenderId();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(911)
					this->_currentRenderId = _g2;
					HX_STACK_LINE(911)
					{
						HX_STACK_LINE(911)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(911)
						result->m[(int)0] = this->scaling->x;
						HX_STACK_LINE(911)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(911)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(911)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(911)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(911)
						result->m[(int)5] = this->scaling->y;
						HX_STACK_LINE(911)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(911)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(911)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(911)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(911)
						result->m[(int)10] = this->scaling->z;
						HX_STACK_LINE(911)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(911)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(911)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(911)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(911)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(911)
						result;
					}
					HX_STACK_LINE(911)
					if (((this->rotationQuaternion != null()))){
						HX_STACK_LINE(911)
						{
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = this->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(911)
							Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(911)
							Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
							HX_STACK_LINE(911)
							Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
							HX_STACK_LINE(911)
							Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
							HX_STACK_LINE(911)
							Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
							HX_STACK_LINE(911)
							Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
							HX_STACK_LINE(911)
							Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
							HX_STACK_LINE(911)
							Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
							HX_STACK_LINE(911)
							Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
							HX_STACK_LINE(911)
							result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
							HX_STACK_LINE(911)
							result->m[(int)1] = (2.0 * ((xy + zw)));
							HX_STACK_LINE(911)
							result->m[(int)2] = (2.0 * ((zx - yw)));
							HX_STACK_LINE(911)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(911)
							result->m[(int)4] = (2.0 * ((xy - zw)));
							HX_STACK_LINE(911)
							result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
							HX_STACK_LINE(911)
							result->m[(int)6] = (2.0 * ((yz + xw)));
							HX_STACK_LINE(911)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(911)
							result->m[(int)8] = (2.0 * ((zx + yw)));
							HX_STACK_LINE(911)
							result->m[(int)9] = (2.0 * ((yz - xw)));
							HX_STACK_LINE(911)
							result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
							HX_STACK_LINE(911)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(911)
							result->m[(int)12] = (int)0;
							HX_STACK_LINE(911)
							result->m[(int)13] = (int)0;
							HX_STACK_LINE(911)
							result->m[(int)14] = (int)0;
							HX_STACK_LINE(911)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(911)
							result;
						}
						HX_STACK_LINE(911)
						this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
					}
					else{
						HX_STACK_LINE(911)
						{
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion _g3;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(911)
							{
								HX_STACK_LINE(911)
								Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
								HX_STACK_LINE(911)
								Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
								HX_STACK_LINE(911)
								Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
								HX_STACK_LINE(911)
								Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
								HX_STACK_LINE(911)
								Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
								HX_STACK_LINE(911)
								Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
								HX_STACK_LINE(911)
								Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
								HX_STACK_LINE(911)
								Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
								HX_STACK_LINE(911)
								Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
								HX_STACK_LINE(911)
								tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
								HX_STACK_LINE(911)
								tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
								HX_STACK_LINE(911)
								tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
								HX_STACK_LINE(911)
								tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
								HX_STACK_LINE(911)
								_g3 = tempQuaternion;
							}
							HX_STACK_LINE(911)
							tempQuaternion = _g3;
							HX_STACK_LINE(911)
							{
								HX_STACK_LINE(911)
								Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
								HX_STACK_LINE(911)
								Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
								HX_STACK_LINE(911)
								Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
								HX_STACK_LINE(911)
								Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
								HX_STACK_LINE(911)
								Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
								HX_STACK_LINE(911)
								Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
								HX_STACK_LINE(911)
								Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
								HX_STACK_LINE(911)
								Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
								HX_STACK_LINE(911)
								Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
								HX_STACK_LINE(911)
								result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
								HX_STACK_LINE(911)
								result->m[(int)1] = (2.0 * ((xy + zw)));
								HX_STACK_LINE(911)
								result->m[(int)2] = (2.0 * ((zx - yw)));
								HX_STACK_LINE(911)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)4] = (2.0 * ((xy - zw)));
								HX_STACK_LINE(911)
								result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
								HX_STACK_LINE(911)
								result->m[(int)6] = (2.0 * ((yz + xw)));
								HX_STACK_LINE(911)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)8] = (2.0 * ((zx + yw)));
								HX_STACK_LINE(911)
								result->m[(int)9] = (2.0 * ((yz - xw)));
								HX_STACK_LINE(911)
								result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
								HX_STACK_LINE(911)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)12] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)13] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)14] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(911)
								result;
							}
						}
						HX_STACK_LINE(911)
						this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
					}
					HX_STACK_LINE(911)
					if ((this->infiniteDistance)){
						HX_STACK_LINE(911)
						::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
						HX_STACK_LINE(911)
						{
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(911)
							{
								HX_STACK_LINE(911)
								result->m[(int)0] = 1.0;
								HX_STACK_LINE(911)
								result->m[(int)1] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)2] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)4] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)5] = 1.0;
								HX_STACK_LINE(911)
								result->m[(int)6] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)8] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)9] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)10] = 1.0;
								HX_STACK_LINE(911)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)12] = (this->position->x + camera->position->x);
								HX_STACK_LINE(911)
								result->m[(int)13] = (this->position->y + camera->position->y);
								HX_STACK_LINE(911)
								result->m[(int)14] = (this->position->z + camera->position->z);
								HX_STACK_LINE(911)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(911)
								result;
							}
						}
					}
					else{
						HX_STACK_LINE(911)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(911)
						{
							HX_STACK_LINE(911)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(911)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(911)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(911)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(911)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(911)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(911)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(911)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(911)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(911)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(911)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(911)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(911)
							result->m[(int)12] = this->position->x;
							HX_STACK_LINE(911)
							result->m[(int)13] = this->position->y;
							HX_STACK_LINE(911)
							result->m[(int)14] = this->position->z;
							HX_STACK_LINE(911)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(911)
							result;
						}
					}
					HX_STACK_LINE(911)
					{
						HX_STACK_LINE(911)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(911)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(911)
						{
							HX_STACK_LINE(911)
							Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(911)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(911)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(911)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(911)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(911)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(911)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(911)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(911)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(911)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(911)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(911)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(911)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(911)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(911)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(911)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(911)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(911)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(911)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(911)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(911)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(911)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(911)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(911)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(911)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(911)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(911)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(911)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(911)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(911)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(911)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(911)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(911)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(911)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(911)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(911)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(911)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(911)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(911)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(911)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(911)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(911)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(911)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(911)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(911)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(911)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(911)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(911)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(911)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(911)
							result;
						}
					}
					HX_STACK_LINE(911)
					{
						HX_STACK_LINE(911)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(911)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(911)
						{
							HX_STACK_LINE(911)
							Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(911)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(911)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(911)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(911)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(911)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(911)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(911)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(911)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(911)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(911)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(911)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(911)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(911)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(911)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(911)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(911)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(911)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(911)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(911)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(911)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(911)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(911)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(911)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(911)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(911)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(911)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(911)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(911)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(911)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(911)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(911)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(911)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(911)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(911)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(911)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(911)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(911)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(911)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(911)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(911)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(911)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(911)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(911)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(911)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(911)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(911)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(911)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(911)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(911)
							result;
						}
					}
					HX_STACK_LINE(911)
					if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
						HX_STACK_LINE(911)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
						HX_STACK_LINE(911)
						{
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(911)
							localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
						}
						HX_STACK_LINE(911)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
						HX_STACK_LINE(911)
						{
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(911)
							zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
						}
						HX_STACK_LINE(911)
						if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
							HX_STACK_LINE(911)
							{
								HX_STACK_LINE(911)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
								HX_STACK_LINE(911)
								hx::AddEq(localPosition->x,otherVector->x);
								HX_STACK_LINE(911)
								hx::AddEq(localPosition->y,otherVector->y);
								HX_STACK_LINE(911)
								hx::AddEq(localPosition->z,otherVector->z);
							}
							HX_STACK_LINE(911)
							{
								HX_STACK_LINE(911)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(911)
								{
									HX_STACK_LINE(911)
									result->m[(int)0] = 1.0;
									HX_STACK_LINE(911)
									result->m[(int)1] = (int)0;
									HX_STACK_LINE(911)
									result->m[(int)2] = (int)0;
									HX_STACK_LINE(911)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(911)
									result->m[(int)4] = (int)0;
									HX_STACK_LINE(911)
									result->m[(int)5] = 1.0;
									HX_STACK_LINE(911)
									result->m[(int)6] = (int)0;
									HX_STACK_LINE(911)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(911)
									result->m[(int)8] = (int)0;
									HX_STACK_LINE(911)
									result->m[(int)9] = (int)0;
									HX_STACK_LINE(911)
									result->m[(int)10] = 1.0;
									HX_STACK_LINE(911)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(911)
									result->m[(int)12] = localPosition->x;
									HX_STACK_LINE(911)
									result->m[(int)13] = localPosition->y;
									HX_STACK_LINE(911)
									result->m[(int)14] = localPosition->z;
									HX_STACK_LINE(911)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(911)
									result;
								}
							}
						}
						HX_STACK_LINE(911)
						if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
							HX_STACK_LINE(911)
							zero = this->_scene->activeCamera->position;
						}
						else{
							HX_STACK_LINE(911)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
								HX_STACK_LINE(911)
								zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
							HX_STACK_LINE(911)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
								HX_STACK_LINE(911)
								zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
							HX_STACK_LINE(911)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
								HX_STACK_LINE(911)
								zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
						}
						HX_STACK_LINE(911)
						{
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
							HX_STACK_LINE(911)
							{
								HX_STACK_LINE(911)
								zAxis->x = (zero->x - localPosition->x);
								HX_STACK_LINE(911)
								zAxis->y = (zero->y - localPosition->y);
								HX_STACK_LINE(911)
								zAxis->z = (zero->z - localPosition->z);
							}
							HX_STACK_LINE(911)
							{
								HX_STACK_LINE(911)
								Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(911)
								if (((len != (int)0))){
									HX_STACK_LINE(911)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(911)
									hx::MultEq(zAxis->x,num);
									HX_STACK_LINE(911)
									hx::MultEq(zAxis->y,num);
									HX_STACK_LINE(911)
									hx::MultEq(zAxis->z,num);
								}
							}
							HX_STACK_LINE(911)
							{
								HX_STACK_LINE(911)
								xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
								HX_STACK_LINE(911)
								xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
								HX_STACK_LINE(911)
								xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
							}
							HX_STACK_LINE(911)
							{
								HX_STACK_LINE(911)
								Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(911)
								if (((len != (int)0))){
									HX_STACK_LINE(911)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(911)
									hx::MultEq(xAxis->x,num);
									HX_STACK_LINE(911)
									hx::MultEq(xAxis->y,num);
									HX_STACK_LINE(911)
									hx::MultEq(xAxis->z,num);
								}
							}
							HX_STACK_LINE(911)
							{
								HX_STACK_LINE(911)
								yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
								HX_STACK_LINE(911)
								yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
								HX_STACK_LINE(911)
								yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
							}
							HX_STACK_LINE(911)
							{
								HX_STACK_LINE(911)
								Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(911)
								if (((len != (int)0))){
									HX_STACK_LINE(911)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(911)
									hx::MultEq(yAxis->x,num);
									HX_STACK_LINE(911)
									hx::MultEq(yAxis->y,num);
									HX_STACK_LINE(911)
									hx::MultEq(yAxis->z,num);
								}
							}
							HX_STACK_LINE(911)
							Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
							HX_STACK_LINE(911)
							Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
							HX_STACK_LINE(911)
							Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
							HX_STACK_LINE(911)
							{
								HX_STACK_LINE(911)
								result->m[(int)0] = xAxis->x;
								HX_STACK_LINE(911)
								result->m[(int)1] = yAxis->x;
								HX_STACK_LINE(911)
								result->m[(int)2] = zAxis->x;
								HX_STACK_LINE(911)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)4] = xAxis->y;
								HX_STACK_LINE(911)
								result->m[(int)5] = yAxis->y;
								HX_STACK_LINE(911)
								result->m[(int)6] = zAxis->y;
								HX_STACK_LINE(911)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)8] = xAxis->z;
								HX_STACK_LINE(911)
								result->m[(int)9] = yAxis->z;
								HX_STACK_LINE(911)
								result->m[(int)10] = zAxis->z;
								HX_STACK_LINE(911)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(911)
								result->m[(int)12] = ex;
								HX_STACK_LINE(911)
								result->m[(int)13] = ey;
								HX_STACK_LINE(911)
								result->m[(int)14] = ez;
								HX_STACK_LINE(911)
								result->m[(int)15] = (int)1;
								HX_STACK_LINE(911)
								result;
							}
						}
						HX_STACK_LINE(911)
						this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
						HX_STACK_LINE(911)
						{
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localBillboard;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(911)
							{
								HX_STACK_LINE(911)
								Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
								HX_STACK_LINE(911)
								Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
								HX_STACK_LINE(911)
								Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
								HX_STACK_LINE(911)
								Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
								HX_STACK_LINE(911)
								Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
								HX_STACK_LINE(911)
								Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
								HX_STACK_LINE(911)
								Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
								HX_STACK_LINE(911)
								Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
								HX_STACK_LINE(911)
								Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
								HX_STACK_LINE(911)
								Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
								HX_STACK_LINE(911)
								Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
								HX_STACK_LINE(911)
								Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
								HX_STACK_LINE(911)
								Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
								HX_STACK_LINE(911)
								Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
								HX_STACK_LINE(911)
								Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
								HX_STACK_LINE(911)
								Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
								HX_STACK_LINE(911)
								Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
								HX_STACK_LINE(911)
								Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
								HX_STACK_LINE(911)
								Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
								HX_STACK_LINE(911)
								Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
								HX_STACK_LINE(911)
								Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
								HX_STACK_LINE(911)
								Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
								HX_STACK_LINE(911)
								Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
								HX_STACK_LINE(911)
								Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
								HX_STACK_LINE(911)
								Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
								HX_STACK_LINE(911)
								Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
								HX_STACK_LINE(911)
								Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
								HX_STACK_LINE(911)
								Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
								HX_STACK_LINE(911)
								Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
								HX_STACK_LINE(911)
								Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
								HX_STACK_LINE(911)
								Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
								HX_STACK_LINE(911)
								Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
								HX_STACK_LINE(911)
								Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
								HX_STACK_LINE(911)
								Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
								HX_STACK_LINE(911)
								Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
								HX_STACK_LINE(911)
								Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
								HX_STACK_LINE(911)
								Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
								HX_STACK_LINE(911)
								Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
								HX_STACK_LINE(911)
								Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
								HX_STACK_LINE(911)
								_this->m[(int)0] = (l23 * l27);
								HX_STACK_LINE(911)
								_this->m[(int)4] = (l24 * l27);
								HX_STACK_LINE(911)
								_this->m[(int)8] = (l25 * l27);
								HX_STACK_LINE(911)
								_this->m[(int)12] = (l26 * l27);
								HX_STACK_LINE(911)
								_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
								HX_STACK_LINE(911)
								_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
								HX_STACK_LINE(911)
								_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
								HX_STACK_LINE(911)
								_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
								HX_STACK_LINE(911)
								_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
								HX_STACK_LINE(911)
								_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
								HX_STACK_LINE(911)
								_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
								HX_STACK_LINE(911)
								_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
								HX_STACK_LINE(911)
								_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
								HX_STACK_LINE(911)
								_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
								HX_STACK_LINE(911)
								_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
								HX_STACK_LINE(911)
								_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
							}
						}
						HX_STACK_LINE(911)
						{
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(911)
							{
								HX_STACK_LINE(911)
								Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(911)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(911)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(911)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(911)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(911)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(911)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(911)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(911)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(911)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(911)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(911)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(911)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(911)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(911)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(911)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(911)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(911)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(911)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(911)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(911)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(911)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(911)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(911)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(911)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(911)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(911)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(911)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(911)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(911)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(911)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(911)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(911)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(911)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(911)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(911)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(911)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(911)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(911)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(911)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(911)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(911)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(911)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(911)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(911)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(911)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(911)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(911)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(911)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(911)
								result;
							}
						}
						HX_STACK_LINE(911)
						{
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(911)
							{
								HX_STACK_LINE(911)
								Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(911)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(911)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(911)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(911)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(911)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(911)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(911)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(911)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(911)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(911)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(911)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(911)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(911)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(911)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(911)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(911)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(911)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(911)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(911)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(911)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(911)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(911)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(911)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(911)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(911)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(911)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(911)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(911)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(911)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(911)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(911)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(911)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(911)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(911)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(911)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(911)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(911)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(911)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(911)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(911)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(911)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(911)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(911)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(911)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(911)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(911)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(911)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(911)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(911)
								result;
							}
						}
					}
					struct _Function_5_1{
						inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",911,0x2cff64c0)
							{
								HX_STACK_LINE(911)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _g4 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(911)
								return (_g4 != null());
							}
							return null();
						}
					};
					HX_STACK_LINE(911)
					if (((  (((  (((this->parent != null()))) ? bool(_Function_5_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
						HX_STACK_LINE(911)
						{
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(911)
							{
								HX_STACK_LINE(911)
								Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(911)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(911)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(911)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(911)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(911)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(911)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(911)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(911)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(911)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(911)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(911)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(911)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(911)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(911)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(911)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(911)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(911)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(911)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(911)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(911)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(911)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(911)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(911)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(911)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(911)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(911)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(911)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(911)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(911)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(911)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(911)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(911)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(911)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(911)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(911)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(911)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(911)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(911)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(911)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(911)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(911)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(911)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(911)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(911)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(911)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(911)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(911)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(911)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(911)
								result;
							}
						}
						HX_STACK_LINE(911)
						::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
						HX_STACK_LINE(911)
						{
							HX_STACK_LINE(911)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localWorld;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(911)
							{
								HX_STACK_LINE(911)
								Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(911)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(911)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(911)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(911)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(911)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(911)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(911)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(911)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(911)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(911)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(911)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(911)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(911)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(911)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(911)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(911)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(911)
								Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(911)
								Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(911)
								Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(911)
								Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(911)
								Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(911)
								Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(911)
								Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(911)
								Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(911)
								Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(911)
								Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(911)
								Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(911)
								Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(911)
								Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(911)
								Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(911)
								Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(911)
								Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(911)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(911)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(911)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(911)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(911)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(911)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(911)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(911)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(911)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(911)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(911)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(911)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(911)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(911)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(911)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(911)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(911)
								result;
							}
						}
					}
					else{
						HX_STACK_LINE(911)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(911)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(911)
						{
							HX_STACK_LINE(911)
							Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(911)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(911)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(911)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(911)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(911)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(911)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(911)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(911)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(911)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(911)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(911)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(911)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(911)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(911)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(911)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(911)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(911)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(911)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(911)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(911)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(911)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(911)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(911)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(911)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(911)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(911)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(911)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(911)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(911)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(911)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(911)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(911)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(911)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(911)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(911)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(911)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(911)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(911)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(911)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(911)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(911)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(911)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(911)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(911)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(911)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(911)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(911)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(911)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(911)
							result;
						}
					}
					HX_STACK_LINE(911)
					if (((this->_boundingInfo != null()))){
						HX_STACK_LINE(911)
						Float _g5 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(911)
						this->_scaleFactor = _g5;
						HX_STACK_LINE(911)
						Float _g6 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(911)
						this->_scaleFactor = _g6;
						struct _Function_6_1{
							inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",911,0x2cff64c0)
								{
									HX_STACK_LINE(911)
									Dynamic _g7 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
									HX_STACK_LINE(911)
									return (_g7 != null());
								}
								return null();
							}
						};
						HX_STACK_LINE(911)
						if (((  (((this->parent != null()))) ? bool(_Function_6_1::Block(this)) : bool(false) ))){
							HX_STACK_LINE(911)
							Dynamic _g8 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(911)
							Float _g9 = (this->_scaleFactor * _g8);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(911)
							this->_scaleFactor = _g9;
						}
						HX_STACK_LINE(911)
						this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
						HX_STACK_LINE(911)
						{
							HX_STACK_LINE(911)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(911)
							int _g3 = this->subMeshes->length;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(911)
							while((true)){
								HX_STACK_LINE(911)
								if ((!(((_g1 < _g3))))){
									HX_STACK_LINE(911)
									break;
								}
								HX_STACK_LINE(911)
								int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
								HX_STACK_LINE(911)
								::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
								HX_STACK_LINE(911)
								subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
							}
						}
					}
					HX_STACK_LINE(911)
					{
						HX_STACK_LINE(911)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_absolutePosition;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(911)
						_this->x = this->_worldMatrix->m->__get((int)12);
						HX_STACK_LINE(911)
						_this->y = this->_worldMatrix->m->__get((int)13);
						HX_STACK_LINE(911)
						_this->z = this->_worldMatrix->m->__get((int)14);
					}
					HX_STACK_LINE(911)
					ret = this->_worldMatrix;
				}
				HX_STACK_LINE(911)
				ret;
			}
			HX_STACK_LINE(911)
			world = this->_worldMatrix;
		}
		HX_STACK_LINE(912)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 worldOrigin;		HX_STACK_VAR(worldOrigin,"worldOrigin");
		HX_STACK_LINE(912)
		{
			HX_STACK_LINE(912)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = ray->origin;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(912)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(912)
			{
				HX_STACK_LINE(912)
				Float x = ((((vector->x * world->m->__get((int)0)) + (vector->y * world->m->__get((int)4))) + (vector->z * world->m->__get((int)8))) + world->m->__get((int)12));		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(912)
				Float y = ((((vector->x * world->m->__get((int)1)) + (vector->y * world->m->__get((int)5))) + (vector->z * world->m->__get((int)9))) + world->m->__get((int)13));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(912)
				Float z = ((((vector->x * world->m->__get((int)2)) + (vector->y * world->m->__get((int)6))) + (vector->z * world->m->__get((int)10))) + world->m->__get((int)14));		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(912)
				Float w = ((((vector->x * world->m->__get((int)3)) + (vector->y * world->m->__get((int)7))) + (vector->z * world->m->__get((int)11))) + world->m->__get((int)15));		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(912)
				result->x = (Float(x) / Float(w));
				HX_STACK_LINE(912)
				result->y = (Float(y) / Float(w));
				HX_STACK_LINE(912)
				result->z = (Float(z) / Float(w));
			}
			HX_STACK_LINE(912)
			worldOrigin = result;
		}
		HX_STACK_LINE(913)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 direction;		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(913)
		{
			HX_STACK_LINE(913)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = ray->direction;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(913)
			direction = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
		}
		HX_STACK_LINE(914)
		{
			HX_STACK_LINE(914)
			Float len = ::Math_obj::sqrt((((direction->x * direction->x) + (direction->y * direction->y)) + (direction->z * direction->z)));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(914)
			if (((len != (int)0))){
				HX_STACK_LINE(914)
				Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(914)
				hx::MultEq(direction->x,num);
				HX_STACK_LINE(914)
				hx::MultEq(direction->y,num);
				HX_STACK_LINE(914)
				hx::MultEq(direction->z,num);
			}
		}
		HX_STACK_LINE(915)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g10 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((direction->x * distance),(direction->y * distance),(direction->z * distance));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(915)
		direction = _g10;
		HX_STACK_LINE(916)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 worldDirection;		HX_STACK_VAR(worldDirection,"worldDirection");
		HX_STACK_LINE(916)
		{
			HX_STACK_LINE(916)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(916)
			{
				HX_STACK_LINE(916)
				result->x = (((direction->x * world->m->__get((int)0)) + (direction->y * world->m->__get((int)4))) + (direction->z * world->m->__get((int)8)));
				HX_STACK_LINE(916)
				result->y = (((direction->x * world->m->__get((int)1)) + (direction->y * world->m->__get((int)5))) + (direction->z * world->m->__get((int)9)));
				HX_STACK_LINE(916)
				result->z = (((direction->x * world->m->__get((int)2)) + (direction->y * world->m->__get((int)6))) + (direction->z * world->m->__get((int)10)));
			}
			HX_STACK_LINE(916)
			worldDirection = result;
		}
		HX_STACK_LINE(918)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 pickedPoint = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((worldOrigin->x + worldDirection->x),(worldOrigin->y + worldDirection->y),(worldOrigin->z + worldDirection->z));		HX_STACK_VAR(pickedPoint,"pickedPoint");
		HX_STACK_LINE(921)
		pickingInfo->hit = true;
		struct _Function_2_1{
			inline static Float Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &pickedPoint,::com::gamestudiohx::babylonhx::tools::math::Vector3 &worldOrigin){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",922,0x2cff64c0)
				{
					HX_STACK_LINE(922)
					Float x = (worldOrigin->x - pickedPoint->x);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(922)
					Float y = (worldOrigin->y - pickedPoint->y);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(922)
					Float z = (worldOrigin->z - pickedPoint->z);		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(922)
					return (((x * x) + (y * y)) + (z * z));
				}
				return null();
			}
		};
		HX_STACK_LINE(922)
		Float _g11 = ::Math_obj::sqrt(_Function_2_1::Block(pickedPoint,worldOrigin));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(922)
		pickingInfo->distance = _g11;
		HX_STACK_LINE(923)
		pickingInfo->pickedPoint = pickedPoint;
		HX_STACK_LINE(924)
		::com::gamestudiohx::babylonhx::mesh::Mesh _g12;		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(924)
		_g12 = hx::TCast< com::gamestudiohx::babylonhx::mesh::Mesh >::cast(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(924)
		pickingInfo->pickedMesh = _g12;
		HX_STACK_LINE(925)
		return pickingInfo;
	}
	HX_STACK_LINE(928)
	return pickingInfo;
}


HX_DEFINE_DYNAMIC_FUNC2(AbstractMesh_obj,intersects,return )

::com::gamestudiohx::babylonhx::mesh::AbstractMesh AbstractMesh_obj::clone( ::String name,::com::gamestudiohx::babylonhx::mesh::Mesh newParent,hx::Null< bool >  __o_doNotCloneChildren){
bool doNotCloneChildren = __o_doNotCloneChildren.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","clone",0x37f922ad,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.clone","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",932,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(newParent,"newParent")
	HX_STACK_ARG(doNotCloneChildren,"doNotCloneChildren")
{
		HX_STACK_LINE(932)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(AbstractMesh_obj,clone,return )

Void AbstractMesh_obj::releaseSubMeshes( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","releaseSubMeshes",0xebd67124,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.releaseSubMeshes","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",984,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(984)
		if (((this->subMeshes != null()))){
			HX_STACK_LINE(985)
			while((true)){
				HX_STACK_LINE(985)
				if ((!(((this->subMeshes->length > (int)0))))){
					HX_STACK_LINE(985)
					break;
				}
				HX_STACK_LINE(986)
				this->subMeshes->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >()->dispose();
			}
		}
		else{
			HX_STACK_LINE(989)
			Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(989)
			this->subMeshes = _g;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,releaseSubMeshes,(void))

Void AbstractMesh_obj::dispose( hx::Null< bool >  __o_doNotRecurse){
bool doNotRecurse = __o_doNotRecurse.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","dispose",0x480103ef,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.dispose","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",993,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(doNotRecurse,"doNotRecurse")
{
		HX_STACK_LINE(994)
		if (((this->_vertexBuffers != null()))){
			HX_STACK_LINE(995)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_vertexBuffers->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(996)
					this->_vertexBuffers->get(key)->__Field(HX_CSTRING("dispose"),true)();
					HX_STACK_LINE(997)
					this->_vertexBuffers->remove(key);
				}
;
			}
			HX_STACK_LINE(999)
			this->_vertexBuffers = null();
		}
		HX_STACK_LINE(1002)
		if (((this->_indexBuffer != null()))){
			HX_STACK_LINE(1003)
			this->_scene->getEngine()->_releaseBuffer(this->_indexBuffer);
			HX_STACK_LINE(1004)
			this->_indexBuffer = null();
		}
		HX_STACK_LINE(1010)
		this->_scene->meshes->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(1012)
		if ((!(doNotRecurse))){
			HX_STACK_LINE(1014)
			int index = (int)0;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(1015)
			while((true)){
				HX_STACK_LINE(1015)
				if ((!(((index < this->_scene->particleSystems->length))))){
					HX_STACK_LINE(1015)
					break;
				}
				HX_STACK_LINE(1016)
				if (((this->_scene->particleSystems->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::particles::ParticleSystem >()->emitter == hx::ObjectPtr<OBJ_>(this)))){
					HX_STACK_LINE(1017)
					this->_scene->particleSystems->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::particles::ParticleSystem >()->dispose();
					HX_STACK_LINE(1018)
					(index)--;
				}
				HX_STACK_LINE(1020)
				(index)++;
			}
			HX_STACK_LINE(1024)
			Array< ::Dynamic > objects = this->_scene->meshes->slice((int)0,null());		HX_STACK_VAR(objects,"objects");
			HX_STACK_LINE(1025)
			{
				HX_STACK_LINE(1025)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1025)
				int _g = objects->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1025)
				while((true)){
					HX_STACK_LINE(1025)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(1025)
						break;
					}
					HX_STACK_LINE(1025)
					int index1 = (_g1)++;		HX_STACK_VAR(index1,"index1");
					HX_STACK_LINE(1026)
					if (((objects->__get(index1).StaticCast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >()->parent == hx::ObjectPtr<OBJ_>(this)))){
						HX_STACK_LINE(1027)
						objects->__get(index1).StaticCast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >()->dispose(null());
					}
				}
			}
		}
		HX_STACK_LINE(1032)
		this->_isDisposed = true;
		HX_STACK_LINE(1035)
		if (((this->onDispose_dyn() != null()))){
			HX_STACK_LINE(1036)
			this->onDispose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,dispose,(void))

int AbstractMesh_obj::BILLBOARDMODE_NONE;

int AbstractMesh_obj::BILLBOARDMODE_X;

int AbstractMesh_obj::BILLBOARDMODE_Y;

int AbstractMesh_obj::BILLBOARDMODE_Z;

int AbstractMesh_obj::BILLBOARDMODE_ALL;

Void AbstractMesh_obj::ComputeNormal( Array< Float > positions,Array< Float > normals,Array< int > indices){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","ComputeNormal",0x68fdd02e,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.ComputeNormal","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",1649,0x2cff64c0)
		HX_STACK_ARG(positions,"positions")
		HX_STACK_ARG(normals,"normals")
		HX_STACK_ARG(indices,"indices")
		HX_STACK_LINE(1650)
		Array< ::Dynamic > positionVectors = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(positionVectors,"positionVectors");
		HX_STACK_LINE(1651)
		Array< ::Dynamic > facesOfVertices = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(facesOfVertices,"facesOfVertices");
		HX_STACK_LINE(1653)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(1655)
		while((true)){
			HX_STACK_LINE(1655)
			if ((!(((index < positions->length))))){
				HX_STACK_LINE(1655)
				break;
			}
			HX_STACK_LINE(1656)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 vector3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(positions->__get(index),positions->__get((index + (int)1)),positions->__get((index + (int)2)));		HX_STACK_VAR(vector3,"vector3");
			HX_STACK_LINE(1657)
			positionVectors->push(vector3);
			HX_STACK_LINE(1658)
			facesOfVertices->push(Array_obj< int >::__new());
			HX_STACK_LINE(1659)
			hx::AddEq(index,(int)3);
		}
		HX_STACK_LINE(1663)
		Array< ::Dynamic > facesNormals = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(facesNormals,"facesNormals");
		HX_STACK_LINE(1664)
		{
			HX_STACK_LINE(1664)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1664)
			int _g = ::Std_obj::_int((Float(indices->length) / Float((int)3)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1664)
			while((true)){
				HX_STACK_LINE(1664)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(1664)
					break;
				}
				HX_STACK_LINE(1664)
				int index1 = (_g1)++;		HX_STACK_VAR(index1,"index1");
				HX_STACK_LINE(1665)
				int i1 = indices->__get((index1 * (int)3));		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(1666)
				int i2 = indices->__get(((index1 * (int)3) + (int)1));		HX_STACK_VAR(i2,"i2");
				HX_STACK_LINE(1667)
				int i3 = indices->__get(((index1 * (int)3) + (int)2));		HX_STACK_VAR(i3,"i3");
				HX_STACK_LINE(1669)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 p1 = positionVectors->__get(i1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(1670)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 p2 = positionVectors->__get(i2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p2,"p2");
				HX_STACK_LINE(1671)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 p3 = positionVectors->__get(i3).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p3,"p3");
				HX_STACK_LINE(1673)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 p1p2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((p1->x - p2->x),(p1->y - p2->y),(p1->z - p2->z));		HX_STACK_VAR(p1p2,"p1p2");
				HX_STACK_LINE(1674)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 p3p2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((p3->x - p2->x),(p3->y - p2->y),(p3->z - p2->z));		HX_STACK_VAR(p3p2,"p3p2");
				HX_STACK_LINE(1676)
				{
					HX_STACK_LINE(1676)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 vector;		HX_STACK_VAR(vector,"vector");
					HX_STACK_LINE(1676)
					{
						HX_STACK_LINE(1676)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(1676)
						{
							HX_STACK_LINE(1676)
							result->x = ((p1p2->y * p3p2->z) - (p1p2->z * p3p2->y));
							HX_STACK_LINE(1676)
							result->y = ((p1p2->z * p3p2->x) - (p1p2->x * p3p2->z));
							HX_STACK_LINE(1676)
							result->z = ((p1p2->x * p3p2->y) - (p1p2->y * p3p2->x));
						}
						HX_STACK_LINE(1676)
						vector = result;
					}
					HX_STACK_LINE(1676)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(1676)
					{
						HX_STACK_LINE(1676)
						{
							HX_STACK_LINE(1676)
							result->x = vector->x;
							HX_STACK_LINE(1676)
							result->y = vector->y;
							HX_STACK_LINE(1676)
							result->z = vector->z;
						}
						HX_STACK_LINE(1676)
						{
							HX_STACK_LINE(1676)
							Float len = ::Math_obj::sqrt((((result->x * result->x) + (result->y * result->y)) + (result->z * result->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(1676)
							if (((len != (int)0))){
								HX_STACK_LINE(1676)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(1676)
								hx::MultEq(result->x,num);
								HX_STACK_LINE(1676)
								hx::MultEq(result->y,num);
								HX_STACK_LINE(1676)
								hx::MultEq(result->z,num);
							}
						}
					}
					HX_STACK_LINE(1676)
					facesNormals[index1] = result;
				}
				HX_STACK_LINE(1677)
				facesOfVertices->__get(i1).StaticCast< Array< int > >()->push(index1);
				HX_STACK_LINE(1678)
				facesOfVertices->__get(i2).StaticCast< Array< int > >()->push(index1);
				HX_STACK_LINE(1679)
				facesOfVertices->__get(i3).StaticCast< Array< int > >()->push(index1);
			}
		}
		HX_STACK_LINE(1682)
		{
			HX_STACK_LINE(1682)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1682)
			int _g = positionVectors->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1682)
			while((true)){
				HX_STACK_LINE(1682)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(1682)
					break;
				}
				HX_STACK_LINE(1682)
				int index1 = (_g1)++;		HX_STACK_VAR(index1,"index1");
				HX_STACK_LINE(1683)
				Array< int > faces = facesOfVertices->__get(index1).StaticCast< Array< int > >();		HX_STACK_VAR(faces,"faces");
				HX_STACK_LINE(1685)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(normal,"normal");
				HX_STACK_LINE(1686)
				{
					HX_STACK_LINE(1686)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1686)
					int _g2 = faces->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1686)
					while((true)){
						HX_STACK_LINE(1686)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(1686)
							break;
						}
						HX_STACK_LINE(1686)
						int faceIndex = (_g3)++;		HX_STACK_VAR(faceIndex,"faceIndex");
						HX_STACK_LINE(1687)
						{
							HX_STACK_LINE(1687)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = facesNormals->__get(faces->__get(faceIndex)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(otherVector,"otherVector");
							HX_STACK_LINE(1687)
							hx::AddEq(normal->x,otherVector->x);
							HX_STACK_LINE(1687)
							hx::AddEq(normal->y,otherVector->y);
							HX_STACK_LINE(1687)
							hx::AddEq(normal->z,otherVector->z);
						}
					}
				}
				HX_STACK_LINE(1690)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1690)
				{
					HX_STACK_LINE(1690)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 vector;		HX_STACK_VAR(vector,"vector");
					HX_STACK_LINE(1690)
					{
						HX_STACK_LINE(1690)
						Float scale = (Float(1.0) / Float(faces->length));		HX_STACK_VAR(scale,"scale");
						HX_STACK_LINE(1690)
						vector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x * scale),(normal->y * scale),(normal->z * scale));
					}
					HX_STACK_LINE(1690)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(1690)
					{
						HX_STACK_LINE(1690)
						{
							HX_STACK_LINE(1690)
							result->x = vector->x;
							HX_STACK_LINE(1690)
							result->y = vector->y;
							HX_STACK_LINE(1690)
							result->z = vector->z;
						}
						HX_STACK_LINE(1690)
						{
							HX_STACK_LINE(1690)
							Float len = ::Math_obj::sqrt((((result->x * result->x) + (result->y * result->y)) + (result->z * result->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(1690)
							if (((len != (int)0))){
								HX_STACK_LINE(1690)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(1690)
								hx::MultEq(result->x,num);
								HX_STACK_LINE(1690)
								hx::MultEq(result->y,num);
								HX_STACK_LINE(1690)
								hx::MultEq(result->z,num);
							}
						}
					}
					HX_STACK_LINE(1690)
					_g2 = result;
				}
				HX_STACK_LINE(1690)
				normal = _g2;
				HX_STACK_LINE(1692)
				normals[(index1 * (int)3)] = normal->x;
				HX_STACK_LINE(1693)
				normals[((index1 * (int)3) + (int)1)] = normal->y;
				HX_STACK_LINE(1694)
				normals[((index1 * (int)3) + (int)2)] = normal->z;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AbstractMesh_obj,ComputeNormal,(void))


AbstractMesh_obj::AbstractMesh_obj()
{
}

void AbstractMesh_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AbstractMesh);
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(scaling,"scaling");
	HX_MARK_MEMBER_NAME(rotationQuaternion,"rotationQuaternion");
	HX_MARK_MEMBER_NAME(subMeshes,"subMeshes");
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_MEMBER_NAME(infiniteDistance,"infiniteDistance");
	HX_MARK_MEMBER_NAME(material,"material");
	HX_MARK_MEMBER_NAME(isVisible,"isVisible");
	HX_MARK_MEMBER_NAME(isPickable,"isPickable");
	HX_MARK_MEMBER_NAME(visibility,"visibility");
	HX_MARK_MEMBER_NAME(billboardMode,"billboardMode");
	HX_MARK_MEMBER_NAME(checkCollisions,"checkCollisions");
	HX_MARK_MEMBER_NAME(receiveShadows,"receiveShadows");
	HX_MARK_MEMBER_NAME(onDispose,"onDispose");
	HX_MARK_MEMBER_NAME(skeleton,"skeleton");
	HX_MARK_MEMBER_NAME(renderingGroupId,"renderingGroupId");
	HX_MARK_MEMBER_NAME(_animationStarted,"_animationStarted");
	HX_MARK_MEMBER_NAME(_scaleFactor,"_scaleFactor");
	HX_MARK_MEMBER_NAME(_isDisposed,"_isDisposed");
	HX_MARK_MEMBER_NAME(_totalVertices,"_totalVertices");
	HX_MARK_MEMBER_NAME(_worldMatrix,"_worldMatrix");
	HX_MARK_MEMBER_NAME(_pivotMatrix,"_pivotMatrix");
	HX_MARK_MEMBER_NAME(_vertexStrideSize,"_vertexStrideSize");
	HX_MARK_MEMBER_NAME(_indices,"_indices");
	HX_MARK_MEMBER_NAME(_renderId,"_renderId");
	HX_MARK_MEMBER_NAME(_localScaling,"_localScaling");
	HX_MARK_MEMBER_NAME(_localRotation,"_localRotation");
	HX_MARK_MEMBER_NAME(_localTranslation,"_localTranslation");
	HX_MARK_MEMBER_NAME(_localBillboard,"_localBillboard");
	HX_MARK_MEMBER_NAME(_localPivotScaling,"_localPivotScaling");
	HX_MARK_MEMBER_NAME(_localPivotScalingRotation,"_localPivotScalingRotation");
	HX_MARK_MEMBER_NAME(_localWorld,"_localWorld");
	HX_MARK_MEMBER_NAME(_rotateYByPI,"_rotateYByPI");
	HX_MARK_MEMBER_NAME(_boundingInfo,"_boundingInfo");
	HX_MARK_MEMBER_NAME(_collisionsTransformMatrix,"_collisionsTransformMatrix");
	HX_MARK_MEMBER_NAME(_collisionsScalingMatrix,"_collisionsScalingMatrix");
	HX_MARK_MEMBER_NAME(_absolutePosition,"_absolutePosition");
	HX_MARK_MEMBER_NAME(_currentRenderId,"_currentRenderId");
	HX_MARK_MEMBER_NAME(_positions,"_positions");
	HX_MARK_MEMBER_NAME(_vertexBuffers,"_vertexBuffers");
	HX_MARK_MEMBER_NAME(_vertexBuffersB,"_vertexBuffersB");
	HX_MARK_MEMBER_NAME(_delayInfo,"_delayInfo");
	HX_MARK_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_MARK_MEMBER_NAME(parentId,"parentId");
	::com::gamestudiohx::babylonhx::Node_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AbstractMesh_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(scaling,"scaling");
	HX_VISIT_MEMBER_NAME(rotationQuaternion,"rotationQuaternion");
	HX_VISIT_MEMBER_NAME(subMeshes,"subMeshes");
	HX_VISIT_MEMBER_NAME(animations,"animations");
	HX_VISIT_MEMBER_NAME(infiniteDistance,"infiniteDistance");
	HX_VISIT_MEMBER_NAME(material,"material");
	HX_VISIT_MEMBER_NAME(isVisible,"isVisible");
	HX_VISIT_MEMBER_NAME(isPickable,"isPickable");
	HX_VISIT_MEMBER_NAME(visibility,"visibility");
	HX_VISIT_MEMBER_NAME(billboardMode,"billboardMode");
	HX_VISIT_MEMBER_NAME(checkCollisions,"checkCollisions");
	HX_VISIT_MEMBER_NAME(receiveShadows,"receiveShadows");
	HX_VISIT_MEMBER_NAME(onDispose,"onDispose");
	HX_VISIT_MEMBER_NAME(skeleton,"skeleton");
	HX_VISIT_MEMBER_NAME(renderingGroupId,"renderingGroupId");
	HX_VISIT_MEMBER_NAME(_animationStarted,"_animationStarted");
	HX_VISIT_MEMBER_NAME(_scaleFactor,"_scaleFactor");
	HX_VISIT_MEMBER_NAME(_isDisposed,"_isDisposed");
	HX_VISIT_MEMBER_NAME(_totalVertices,"_totalVertices");
	HX_VISIT_MEMBER_NAME(_worldMatrix,"_worldMatrix");
	HX_VISIT_MEMBER_NAME(_pivotMatrix,"_pivotMatrix");
	HX_VISIT_MEMBER_NAME(_vertexStrideSize,"_vertexStrideSize");
	HX_VISIT_MEMBER_NAME(_indices,"_indices");
	HX_VISIT_MEMBER_NAME(_renderId,"_renderId");
	HX_VISIT_MEMBER_NAME(_localScaling,"_localScaling");
	HX_VISIT_MEMBER_NAME(_localRotation,"_localRotation");
	HX_VISIT_MEMBER_NAME(_localTranslation,"_localTranslation");
	HX_VISIT_MEMBER_NAME(_localBillboard,"_localBillboard");
	HX_VISIT_MEMBER_NAME(_localPivotScaling,"_localPivotScaling");
	HX_VISIT_MEMBER_NAME(_localPivotScalingRotation,"_localPivotScalingRotation");
	HX_VISIT_MEMBER_NAME(_localWorld,"_localWorld");
	HX_VISIT_MEMBER_NAME(_rotateYByPI,"_rotateYByPI");
	HX_VISIT_MEMBER_NAME(_boundingInfo,"_boundingInfo");
	HX_VISIT_MEMBER_NAME(_collisionsTransformMatrix,"_collisionsTransformMatrix");
	HX_VISIT_MEMBER_NAME(_collisionsScalingMatrix,"_collisionsScalingMatrix");
	HX_VISIT_MEMBER_NAME(_absolutePosition,"_absolutePosition");
	HX_VISIT_MEMBER_NAME(_currentRenderId,"_currentRenderId");
	HX_VISIT_MEMBER_NAME(_positions,"_positions");
	HX_VISIT_MEMBER_NAME(_vertexBuffers,"_vertexBuffers");
	HX_VISIT_MEMBER_NAME(_vertexBuffersB,"_vertexBuffersB");
	HX_VISIT_MEMBER_NAME(_delayInfo,"_delayInfo");
	HX_VISIT_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_VISIT_MEMBER_NAME(parentId,"parentId");
	::com::gamestudiohx::babylonhx::Node_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AbstractMesh_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scaling") ) { return scaling; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		if (HX_FIELD_EQ(inName,"material") ) { return material; }
		if (HX_FIELD_EQ(inName,"skeleton") ) { return skeleton; }
		if (HX_FIELD_EQ(inName,"_indices") ) { return _indices; }
		if (HX_FIELD_EQ(inName,"parentId") ) { return inCallProp ? get_parentId() : parentId; }
		if (HX_FIELD_EQ(inName,"getScene") ) { return getScene_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"subMeshes") ) { return subMeshes; }
		if (HX_FIELD_EQ(inName,"isVisible") ) { return isVisible; }
		if (HX_FIELD_EQ(inName,"onDispose") ) { return onDispose; }
		if (HX_FIELD_EQ(inName,"_renderId") ) { return _renderId; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { return animations; }
		if (HX_FIELD_EQ(inName,"isPickable") ) { return isPickable; }
		if (HX_FIELD_EQ(inName,"visibility") ) { return visibility; }
		if (HX_FIELD_EQ(inName,"_positions") ) { return _positions; }
		if (HX_FIELD_EQ(inName,"_delayInfo") ) { return _delayInfo; }
		if (HX_FIELD_EQ(inName,"getIndices") ) { return getIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"isAnimated") ) { return isAnimated_dyn(); }
		if (HX_FIELD_EQ(inName,"isDisposed") ) { return isDisposed_dyn(); }
		if (HX_FIELD_EQ(inName,"_initCache") ) { return _initCache_dyn(); }
		if (HX_FIELD_EQ(inName,"intersects") ) { return intersects_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_isDisposed") ) { return _isDisposed; }
		if (HX_FIELD_EQ(inName,"_localWorld") ) { return _localWorld; }
		if (HX_FIELD_EQ(inName,"isInFrustum") ) { return isInFrustum_dyn(); }
		if (HX_FIELD_EQ(inName,"markAsDirty") ) { return markAsDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"bindAndDraw") ) { return bindAndDraw_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_scaleFactor") ) { return _scaleFactor; }
		if (HX_FIELD_EQ(inName,"_worldMatrix") ) { return _worldMatrix; }
		if (HX_FIELD_EQ(inName,"_pivotMatrix") ) { return _pivotMatrix; }
		if (HX_FIELD_EQ(inName,"_rotateYByPI") ) { return _rotateYByPI; }
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { return _indexBuffer; }
		if (HX_FIELD_EQ(inName,"get_parentId") ) { return get_parentId_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ComputeNormal") ) { return ComputeNormal_dyn(); }
		if (HX_FIELD_EQ(inName,"billboardMode") ) { return billboardMode; }
		if (HX_FIELD_EQ(inName,"_localScaling") ) { return _localScaling; }
		if (HX_FIELD_EQ(inName,"_boundingInfo") ) { return _boundingInfo; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"receiveShadows") ) { return receiveShadows; }
		if (HX_FIELD_EQ(inName,"_totalVertices") ) { return _totalVertices; }
		if (HX_FIELD_EQ(inName,"_localRotation") ) { return _localRotation; }
		if (HX_FIELD_EQ(inName,"_vertexBuffers") ) { return _vertexBuffers; }
		if (HX_FIELD_EQ(inName,"getWorldMatrix") ) { return getWorldMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"setPivotMatrix") ) { return setPivotMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"getPivotMatrix") ) { return getPivotMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"isSynchronized") ) { return isSynchronized_dyn(); }
		if (HX_FIELD_EQ(inName,"intersectsMesh") ) { return intersectsMesh_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"BILLBOARDMODE_X") ) { return BILLBOARDMODE_X; }
		if (HX_FIELD_EQ(inName,"BILLBOARDMODE_Y") ) { return BILLBOARDMODE_Y; }
		if (HX_FIELD_EQ(inName,"BILLBOARDMODE_Z") ) { return BILLBOARDMODE_Z; }
		if (HX_FIELD_EQ(inName,"checkCollisions") ) { return checkCollisions; }
		if (HX_FIELD_EQ(inName,"_localBillboard") ) { return _localBillboard; }
		if (HX_FIELD_EQ(inName,"_vertexBuffersB") ) { return _vertexBuffersB; }
		if (HX_FIELD_EQ(inName,"_checkCollision") ) { return _checkCollision_dyn(); }
		if (HX_FIELD_EQ(inName,"getBoundingInfo") ) { return getBoundingInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"getVerticesData") ) { return getVerticesData_dyn(); }
		if (HX_FIELD_EQ(inName,"intersectsPoint") ) { return intersectsPoint_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"infiniteDistance") ) { return infiniteDistance; }
		if (HX_FIELD_EQ(inName,"renderingGroupId") ) { return renderingGroupId; }
		if (HX_FIELD_EQ(inName,"_currentRenderId") ) { return _currentRenderId; }
		if (HX_FIELD_EQ(inName,"getTotalVertices") ) { return getTotalVertices_dyn(); }
		if (HX_FIELD_EQ(inName,"getTotalIndicies") ) { return getTotalIndicies_dyn(); }
		if (HX_FIELD_EQ(inName,"releaseSubMeshes") ) { return releaseSubMeshes_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BILLBOARDMODE_ALL") ) { return BILLBOARDMODE_ALL; }
		if (HX_FIELD_EQ(inName,"_animationStarted") ) { return _animationStarted; }
		if (HX_FIELD_EQ(inName,"_vertexStrideSize") ) { return _vertexStrideSize; }
		if (HX_FIELD_EQ(inName,"_localTranslation") ) { return _localTranslation; }
		if (HX_FIELD_EQ(inName,"_absolutePosition") ) { return _absolutePosition; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BILLBOARDMODE_NONE") ) { return BILLBOARDMODE_NONE; }
		if (HX_FIELD_EQ(inName,"rotationQuaternion") ) { return rotationQuaternion; }
		if (HX_FIELD_EQ(inName,"_localPivotScaling") ) { return _localPivotScaling; }
		if (HX_FIELD_EQ(inName,"_collideForSubMesh") ) { return _collideForSubMesh_dyn(); }
		if (HX_FIELD_EQ(inName,"computeWorldMatrix") ) { return computeWorldMatrix_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getAbsolutePosition") ) { return getAbsolutePosition_dyn(); }
		if (HX_FIELD_EQ(inName,"setAbsolutePosition") ) { return setAbsolutePosition_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexStrideSize") ) { return getVertexStrideSize_dyn(); }
		if (HX_FIELD_EQ(inName,"refreshBoudningInfo") ) { return refreshBoudningInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"_updateBoundingInfo") ) { return _updateBoundingInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"setLocalTranslation") ) { return setLocalTranslation_dyn(); }
		if (HX_FIELD_EQ(inName,"getLocalTranslation") ) { return getLocalTranslation_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_generatePointsArray") ) { return _generatePointsArray_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"isVerticesDataPresent") ) { return isVerticesDataPresent_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_resetPointsArrayCache") ) { return _resetPointsArrayCache_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_collisionsScalingMatrix") ) { return _collisionsScalingMatrix; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_localPivotScalingRotation") ) { return _localPivotScalingRotation; }
		if (HX_FIELD_EQ(inName,"_collisionsTransformMatrix") ) { return _collisionsTransformMatrix; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"_processCollisionsForSubModels") ) { return _processCollisionsForSubModels_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AbstractMesh_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"scaling") ) { scaling=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"material") ) { material=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skeleton") ) { skeleton=inValue.Cast< ::com::gamestudiohx::babylonhx::bones::Skeleton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_indices") ) { _indices=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parentId") ) { parentId=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"subMeshes") ) { subMeshes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isVisible") ) { isVisible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDispose") ) { onDispose=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderId") ) { _renderId=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isPickable") ) { isPickable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visibility") ) { visibility=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_positions") ) { _positions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_delayInfo") ) { _delayInfo=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_isDisposed") ) { _isDisposed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_localWorld") ) { _localWorld=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_scaleFactor") ) { _scaleFactor=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_worldMatrix") ) { _worldMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pivotMatrix") ) { _pivotMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotateYByPI") ) { _rotateYByPI=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { _indexBuffer=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"billboardMode") ) { billboardMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_localScaling") ) { _localScaling=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_boundingInfo") ) { _boundingInfo=inValue.Cast< ::com::gamestudiohx::babylonhx::culling::BoundingInfo >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"receiveShadows") ) { receiveShadows=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_totalVertices") ) { _totalVertices=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_localRotation") ) { _localRotation=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexBuffers") ) { _vertexBuffers=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"BILLBOARDMODE_X") ) { BILLBOARDMODE_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BILLBOARDMODE_Y") ) { BILLBOARDMODE_Y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BILLBOARDMODE_Z") ) { BILLBOARDMODE_Z=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"checkCollisions") ) { checkCollisions=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_localBillboard") ) { _localBillboard=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexBuffersB") ) { _vertexBuffersB=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"infiniteDistance") ) { infiniteDistance=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderingGroupId") ) { renderingGroupId=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentRenderId") ) { _currentRenderId=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BILLBOARDMODE_ALL") ) { BILLBOARDMODE_ALL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animationStarted") ) { _animationStarted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexStrideSize") ) { _vertexStrideSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_localTranslation") ) { _localTranslation=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_absolutePosition") ) { _absolutePosition=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BILLBOARDMODE_NONE") ) { BILLBOARDMODE_NONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotationQuaternion") ) { rotationQuaternion=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Quaternion >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_localPivotScaling") ) { _localPivotScaling=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_collisionsScalingMatrix") ) { _collisionsScalingMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_localPivotScalingRotation") ) { _localPivotScalingRotation=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_collisionsTransformMatrix") ) { _collisionsTransformMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AbstractMesh_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("scaling"));
	outFields->push(HX_CSTRING("rotationQuaternion"));
	outFields->push(HX_CSTRING("subMeshes"));
	outFields->push(HX_CSTRING("animations"));
	outFields->push(HX_CSTRING("infiniteDistance"));
	outFields->push(HX_CSTRING("material"));
	outFields->push(HX_CSTRING("isVisible"));
	outFields->push(HX_CSTRING("isPickable"));
	outFields->push(HX_CSTRING("visibility"));
	outFields->push(HX_CSTRING("billboardMode"));
	outFields->push(HX_CSTRING("checkCollisions"));
	outFields->push(HX_CSTRING("receiveShadows"));
	outFields->push(HX_CSTRING("skeleton"));
	outFields->push(HX_CSTRING("renderingGroupId"));
	outFields->push(HX_CSTRING("_animationStarted"));
	outFields->push(HX_CSTRING("_scaleFactor"));
	outFields->push(HX_CSTRING("_isDisposed"));
	outFields->push(HX_CSTRING("_totalVertices"));
	outFields->push(HX_CSTRING("_worldMatrix"));
	outFields->push(HX_CSTRING("_pivotMatrix"));
	outFields->push(HX_CSTRING("_vertexStrideSize"));
	outFields->push(HX_CSTRING("_indices"));
	outFields->push(HX_CSTRING("_renderId"));
	outFields->push(HX_CSTRING("_localScaling"));
	outFields->push(HX_CSTRING("_localRotation"));
	outFields->push(HX_CSTRING("_localTranslation"));
	outFields->push(HX_CSTRING("_localBillboard"));
	outFields->push(HX_CSTRING("_localPivotScaling"));
	outFields->push(HX_CSTRING("_localPivotScalingRotation"));
	outFields->push(HX_CSTRING("_localWorld"));
	outFields->push(HX_CSTRING("_rotateYByPI"));
	outFields->push(HX_CSTRING("_boundingInfo"));
	outFields->push(HX_CSTRING("_collisionsTransformMatrix"));
	outFields->push(HX_CSTRING("_collisionsScalingMatrix"));
	outFields->push(HX_CSTRING("_absolutePosition"));
	outFields->push(HX_CSTRING("_currentRenderId"));
	outFields->push(HX_CSTRING("_positions"));
	outFields->push(HX_CSTRING("_vertexBuffers"));
	outFields->push(HX_CSTRING("_vertexBuffersB"));
	outFields->push(HX_CSTRING("_delayInfo"));
	outFields->push(HX_CSTRING("_indexBuffer"));
	outFields->push(HX_CSTRING("parentId"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BILLBOARDMODE_NONE"),
	HX_CSTRING("BILLBOARDMODE_X"),
	HX_CSTRING("BILLBOARDMODE_Y"),
	HX_CSTRING("BILLBOARDMODE_Z"),
	HX_CSTRING("BILLBOARDMODE_ALL"),
	HX_CSTRING("ComputeNormal"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(AbstractMesh_obj,rotation),HX_CSTRING("rotation")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(AbstractMesh_obj,scaling),HX_CSTRING("scaling")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Quaternion*/ ,(int)offsetof(AbstractMesh_obj,rotationQuaternion),HX_CSTRING("rotationQuaternion")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AbstractMesh_obj,subMeshes),HX_CSTRING("subMeshes")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AbstractMesh_obj,animations),HX_CSTRING("animations")},
	{hx::fsBool,(int)offsetof(AbstractMesh_obj,infiniteDistance),HX_CSTRING("infiniteDistance")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AbstractMesh_obj,material),HX_CSTRING("material")},
	{hx::fsBool,(int)offsetof(AbstractMesh_obj,isVisible),HX_CSTRING("isVisible")},
	{hx::fsBool,(int)offsetof(AbstractMesh_obj,isPickable),HX_CSTRING("isPickable")},
	{hx::fsFloat,(int)offsetof(AbstractMesh_obj,visibility),HX_CSTRING("visibility")},
	{hx::fsInt,(int)offsetof(AbstractMesh_obj,billboardMode),HX_CSTRING("billboardMode")},
	{hx::fsBool,(int)offsetof(AbstractMesh_obj,checkCollisions),HX_CSTRING("checkCollisions")},
	{hx::fsBool,(int)offsetof(AbstractMesh_obj,receiveShadows),HX_CSTRING("receiveShadows")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AbstractMesh_obj,onDispose),HX_CSTRING("onDispose")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::bones::Skeleton*/ ,(int)offsetof(AbstractMesh_obj,skeleton),HX_CSTRING("skeleton")},
	{hx::fsInt,(int)offsetof(AbstractMesh_obj,renderingGroupId),HX_CSTRING("renderingGroupId")},
	{hx::fsBool,(int)offsetof(AbstractMesh_obj,_animationStarted),HX_CSTRING("_animationStarted")},
	{hx::fsFloat,(int)offsetof(AbstractMesh_obj,_scaleFactor),HX_CSTRING("_scaleFactor")},
	{hx::fsBool,(int)offsetof(AbstractMesh_obj,_isDisposed),HX_CSTRING("_isDisposed")},
	{hx::fsInt,(int)offsetof(AbstractMesh_obj,_totalVertices),HX_CSTRING("_totalVertices")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(AbstractMesh_obj,_worldMatrix),HX_CSTRING("_worldMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(AbstractMesh_obj,_pivotMatrix),HX_CSTRING("_pivotMatrix")},
	{hx::fsInt,(int)offsetof(AbstractMesh_obj,_vertexStrideSize),HX_CSTRING("_vertexStrideSize")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(AbstractMesh_obj,_indices),HX_CSTRING("_indices")},
	{hx::fsInt,(int)offsetof(AbstractMesh_obj,_renderId),HX_CSTRING("_renderId")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(AbstractMesh_obj,_localScaling),HX_CSTRING("_localScaling")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(AbstractMesh_obj,_localRotation),HX_CSTRING("_localRotation")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(AbstractMesh_obj,_localTranslation),HX_CSTRING("_localTranslation")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(AbstractMesh_obj,_localBillboard),HX_CSTRING("_localBillboard")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(AbstractMesh_obj,_localPivotScaling),HX_CSTRING("_localPivotScaling")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(AbstractMesh_obj,_localPivotScalingRotation),HX_CSTRING("_localPivotScalingRotation")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(AbstractMesh_obj,_localWorld),HX_CSTRING("_localWorld")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(AbstractMesh_obj,_rotateYByPI),HX_CSTRING("_rotateYByPI")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::culling::BoundingInfo*/ ,(int)offsetof(AbstractMesh_obj,_boundingInfo),HX_CSTRING("_boundingInfo")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(AbstractMesh_obj,_collisionsTransformMatrix),HX_CSTRING("_collisionsTransformMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(AbstractMesh_obj,_collisionsScalingMatrix),HX_CSTRING("_collisionsScalingMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(AbstractMesh_obj,_absolutePosition),HX_CSTRING("_absolutePosition")},
	{hx::fsInt,(int)offsetof(AbstractMesh_obj,_currentRenderId),HX_CSTRING("_currentRenderId")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AbstractMesh_obj,_positions),HX_CSTRING("_positions")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AbstractMesh_obj,_vertexBuffers),HX_CSTRING("_vertexBuffers")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AbstractMesh_obj,_vertexBuffersB),HX_CSTRING("_vertexBuffersB")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(AbstractMesh_obj,_delayInfo),HX_CSTRING("_delayInfo")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer*/ ,(int)offsetof(AbstractMesh_obj,_indexBuffer),HX_CSTRING("_indexBuffer")},
	{hx::fsString,(int)offsetof(AbstractMesh_obj,parentId),HX_CSTRING("parentId")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("rotation"),
	HX_CSTRING("scaling"),
	HX_CSTRING("rotationQuaternion"),
	HX_CSTRING("subMeshes"),
	HX_CSTRING("animations"),
	HX_CSTRING("infiniteDistance"),
	HX_CSTRING("material"),
	HX_CSTRING("isVisible"),
	HX_CSTRING("isPickable"),
	HX_CSTRING("visibility"),
	HX_CSTRING("billboardMode"),
	HX_CSTRING("checkCollisions"),
	HX_CSTRING("receiveShadows"),
	HX_CSTRING("onDispose"),
	HX_CSTRING("skeleton"),
	HX_CSTRING("renderingGroupId"),
	HX_CSTRING("_animationStarted"),
	HX_CSTRING("_scaleFactor"),
	HX_CSTRING("_isDisposed"),
	HX_CSTRING("_totalVertices"),
	HX_CSTRING("_worldMatrix"),
	HX_CSTRING("_pivotMatrix"),
	HX_CSTRING("_vertexStrideSize"),
	HX_CSTRING("_indices"),
	HX_CSTRING("_renderId"),
	HX_CSTRING("_localScaling"),
	HX_CSTRING("_localRotation"),
	HX_CSTRING("_localTranslation"),
	HX_CSTRING("_localBillboard"),
	HX_CSTRING("_localPivotScaling"),
	HX_CSTRING("_localPivotScalingRotation"),
	HX_CSTRING("_localWorld"),
	HX_CSTRING("_rotateYByPI"),
	HX_CSTRING("_boundingInfo"),
	HX_CSTRING("_collisionsTransformMatrix"),
	HX_CSTRING("_collisionsScalingMatrix"),
	HX_CSTRING("_absolutePosition"),
	HX_CSTRING("_currentRenderId"),
	HX_CSTRING("_positions"),
	HX_CSTRING("_vertexBuffers"),
	HX_CSTRING("_vertexBuffersB"),
	HX_CSTRING("_delayInfo"),
	HX_CSTRING("_indexBuffer"),
	HX_CSTRING("parentId"),
	HX_CSTRING("get_parentId"),
	HX_CSTRING("_resetPointsArrayCache"),
	HX_CSTRING("_generatePointsArray"),
	HX_CSTRING("_collideForSubMesh"),
	HX_CSTRING("_processCollisionsForSubModels"),
	HX_CSTRING("_checkCollision"),
	HX_CSTRING("isInFrustum"),
	HX_CSTRING("getBoundingInfo"),
	HX_CSTRING("getScene"),
	HX_CSTRING("getWorldMatrix"),
	HX_CSTRING("getTotalVertices"),
	HX_CSTRING("getAbsolutePosition"),
	HX_CSTRING("setAbsolutePosition"),
	HX_CSTRING("getVerticesData"),
	HX_CSTRING("isVerticesDataPresent"),
	HX_CSTRING("getTotalIndicies"),
	HX_CSTRING("getIndices"),
	HX_CSTRING("getVertexStrideSize"),
	HX_CSTRING("setPivotMatrix"),
	HX_CSTRING("getPivotMatrix"),
	HX_CSTRING("isSynchronized"),
	HX_CSTRING("isAnimated"),
	HX_CSTRING("isDisposed"),
	HX_CSTRING("_initCache"),
	HX_CSTRING("markAsDirty"),
	HX_CSTRING("refreshBoudningInfo"),
	HX_CSTRING("_updateBoundingInfo"),
	HX_CSTRING("computeWorldMatrix"),
	HX_CSTRING("bindAndDraw"),
	HX_CSTRING("setLocalTranslation"),
	HX_CSTRING("getLocalTranslation"),
	HX_CSTRING("intersectsMesh"),
	HX_CSTRING("intersectsPoint"),
	HX_CSTRING("intersects"),
	HX_CSTRING("clone"),
	HX_CSTRING("releaseSubMeshes"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractMesh_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AbstractMesh_obj::BILLBOARDMODE_NONE,"BILLBOARDMODE_NONE");
	HX_MARK_MEMBER_NAME(AbstractMesh_obj::BILLBOARDMODE_X,"BILLBOARDMODE_X");
	HX_MARK_MEMBER_NAME(AbstractMesh_obj::BILLBOARDMODE_Y,"BILLBOARDMODE_Y");
	HX_MARK_MEMBER_NAME(AbstractMesh_obj::BILLBOARDMODE_Z,"BILLBOARDMODE_Z");
	HX_MARK_MEMBER_NAME(AbstractMesh_obj::BILLBOARDMODE_ALL,"BILLBOARDMODE_ALL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractMesh_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AbstractMesh_obj::BILLBOARDMODE_NONE,"BILLBOARDMODE_NONE");
	HX_VISIT_MEMBER_NAME(AbstractMesh_obj::BILLBOARDMODE_X,"BILLBOARDMODE_X");
	HX_VISIT_MEMBER_NAME(AbstractMesh_obj::BILLBOARDMODE_Y,"BILLBOARDMODE_Y");
	HX_VISIT_MEMBER_NAME(AbstractMesh_obj::BILLBOARDMODE_Z,"BILLBOARDMODE_Z");
	HX_VISIT_MEMBER_NAME(AbstractMesh_obj::BILLBOARDMODE_ALL,"BILLBOARDMODE_ALL");
};

#endif

Class AbstractMesh_obj::__mClass;

void AbstractMesh_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.mesh.AbstractMesh"), hx::TCanCast< AbstractMesh_obj> ,sStaticFields,sMemberFields,
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

void AbstractMesh_obj::__boot()
{
	BILLBOARDMODE_NONE= (int)0;
	BILLBOARDMODE_X= (int)1;
	BILLBOARDMODE_Y= (int)2;
	BILLBOARDMODE_Z= (int)4;
	BILLBOARDMODE_ALL= (int)7;
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh
