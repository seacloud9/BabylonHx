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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_Tools
#include <com/gamestudiohx/babylonhx/tools/Tools.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector2
#include <com/gamestudiohx/babylonhx/tools/math/Vector2.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArray
#include <openfl/utils/ByteArray.h>
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
namespace mesh{

Void AbstractMesh_obj::__construct(::String name,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","new",0x53106bb0,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.new","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",131,0x2cff64c0)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(132)
	super::__construct(scene);
	HX_STACK_LINE(134)
	this->name = name;
	HX_STACK_LINE(135)
	this->id = name;
	HX_STACK_LINE(136)
	this->_scene = scene;
	HX_STACK_LINE(138)
	this->_totalVertices = (int)0;
	HX_STACK_LINE(139)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(139)
		result->m[(int)0] = 1.0;
		HX_STACK_LINE(139)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(139)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(139)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(139)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(139)
		result->m[(int)5] = 1.0;
		HX_STACK_LINE(139)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(139)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(139)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(139)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(139)
		result->m[(int)10] = 1.0;
		HX_STACK_LINE(139)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(139)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(139)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(139)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(139)
		result->m[(int)15] = 1.0;
		HX_STACK_LINE(139)
		_g = result;
	}
	HX_STACK_LINE(139)
	this->_worldMatrix = _g;
	HX_STACK_LINE(141)
	scene->meshes->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(143)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(143)
	this->position = _g1;
	HX_STACK_LINE(144)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(144)
	this->rotation = _g2;
	HX_STACK_LINE(145)
	this->rotationQuaternion = null();
	HX_STACK_LINE(146)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)1,(int)1,(int)1);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(146)
	this->scaling = _g3;
	HX_STACK_LINE(148)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(148)
		result->m[(int)0] = 1.0;
		HX_STACK_LINE(148)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(148)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(148)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(148)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(148)
		result->m[(int)5] = 1.0;
		HX_STACK_LINE(148)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(148)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(148)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(148)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(148)
		result->m[(int)10] = 1.0;
		HX_STACK_LINE(148)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(148)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(148)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(148)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(148)
		result->m[(int)15] = 1.0;
		HX_STACK_LINE(148)
		_g4 = result;
	}
	HX_STACK_LINE(148)
	this->_pivotMatrix = _g4;
	HX_STACK_LINE(150)
	this->_indices = Array_obj< int >::__new();
	HX_STACK_LINE(151)
	this->subMeshes = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(153)
	this->_renderId = (int)0;
	HX_STACK_LINE(155)
	this->_onBeforeRenderCallbacks = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(158)
	this->animations = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(161)
	this->_positions = null();
	HX_STACK_LINE(164)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g5 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(165)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g6 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(166)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g7 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(167)
	::com::gamestudiohx::babylonhx::tools::math::Quaternion _g8 = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(_g8,"_g8");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g7,::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g5,::com::gamestudiohx::babylonhx::tools::math::Quaternion &_g8,::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g6){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",162,0x2cff64c0)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("localMatrixUpdated") , false,false);
				__result->Add(HX_CSTRING("position") , _g5,false);
				__result->Add(HX_CSTRING("scaling") , _g6,false);
				__result->Add(HX_CSTRING("rotation") , _g7,false);
				__result->Add(HX_CSTRING("rotationQuaternion") , _g8,false);
				__result->Add(HX_CSTRING("pivotMatrixUpdated") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(162)
	Dynamic _g9 = _Function_1_1::Block(_g7,_g5,_g8,_g6);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(162)
	this->_cache = _g9;
	HX_STACK_LINE(172)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g10;		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(172)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(172)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(172)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(172)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(172)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(172)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(172)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(172)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(172)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(172)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(172)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(172)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(172)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(172)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(172)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(172)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(172)
		_g10 = result;
	}
	HX_STACK_LINE(172)
	this->_localScaling = _g10;
	HX_STACK_LINE(173)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g11;		HX_STACK_VAR(_g11,"_g11");
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
		_g11 = result;
	}
	HX_STACK_LINE(173)
	this->_localRotation = _g11;
	HX_STACK_LINE(174)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g12;		HX_STACK_VAR(_g12,"_g12");
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
		_g12 = result;
	}
	HX_STACK_LINE(174)
	this->_localTranslation = _g12;
	HX_STACK_LINE(175)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g13;		HX_STACK_VAR(_g13,"_g13");
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
		_g13 = result;
	}
	HX_STACK_LINE(175)
	this->_localBillboard = _g13;
	HX_STACK_LINE(176)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g14;		HX_STACK_VAR(_g14,"_g14");
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
		_g14 = result;
	}
	HX_STACK_LINE(176)
	this->_localPivotScaling = _g14;
	HX_STACK_LINE(177)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g15;		HX_STACK_VAR(_g15,"_g15");
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
		_g15 = result;
	}
	HX_STACK_LINE(177)
	this->_localPivotScalingRotation = _g15;
	HX_STACK_LINE(178)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g16;		HX_STACK_VAR(_g16,"_g16");
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
		_g16 = result;
	}
	HX_STACK_LINE(178)
	this->_localWorld = _g16;
	HX_STACK_LINE(179)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g17;		HX_STACK_VAR(_g17,"_g17");
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
		_g17 = result;
	}
	HX_STACK_LINE(179)
	this->_worldMatrix = _g17;
	HX_STACK_LINE(180)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g18;		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(180)
	{
		HX_STACK_LINE(180)
		Float angle = ::Math_obj::PI;		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(180)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			Float s = ::Math_obj::sin(angle);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(180)
			Float c = ::Math_obj::cos(angle);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(180)
			result->m[(int)5] = 1.0;
			HX_STACK_LINE(180)
			result->m[(int)15] = 1.0;
			HX_STACK_LINE(180)
			result->m[(int)0] = c;
			HX_STACK_LINE(180)
			result->m[(int)2] = -(s);
			HX_STACK_LINE(180)
			result->m[(int)8] = s;
			HX_STACK_LINE(180)
			result->m[(int)10] = c;
			HX_STACK_LINE(180)
			result->m[(int)1] = (int)0;
			HX_STACK_LINE(180)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(180)
			result->m[(int)4] = (int)0;
			HX_STACK_LINE(180)
			result->m[(int)6] = (int)0;
			HX_STACK_LINE(180)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(180)
			result->m[(int)9] = (int)0;
			HX_STACK_LINE(180)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(180)
			result->m[(int)12] = (int)0;
			HX_STACK_LINE(180)
			result->m[(int)13] = (int)0;
			HX_STACK_LINE(180)
			result->m[(int)14] = (int)0;
			HX_STACK_LINE(180)
			result;
		}
		HX_STACK_LINE(180)
		_g18 = result;
	}
	HX_STACK_LINE(180)
	this->_rotateYByPI = _g18;
	HX_STACK_LINE(182)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g19;		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(182)
	{
		HX_STACK_LINE(182)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(182)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(182)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(182)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(182)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(182)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(182)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(182)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(182)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(182)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(182)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(182)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(182)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(182)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(182)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(182)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(182)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(182)
		_g19 = result;
	}
	HX_STACK_LINE(182)
	this->_collisionsTransformMatrix = _g19;
	HX_STACK_LINE(183)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g20;		HX_STACK_VAR(_g20,"_g20");
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
		_g20 = result;
	}
	HX_STACK_LINE(183)
	this->_collisionsScalingMatrix = _g20;
	HX_STACK_LINE(185)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g21 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(185)
	this->_absolutePosition = _g21;
	HX_STACK_LINE(188)
	this->material = null();
	HX_STACK_LINE(189)
	this->isVisible = true;
	HX_STACK_LINE(190)
	this->isPickable = true;
	HX_STACK_LINE(191)
	this->visibility = 1.0;
	HX_STACK_LINE(192)
	this->billboardMode = ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE;
	HX_STACK_LINE(193)
	this->checkCollisions = false;
	HX_STACK_LINE(194)
	this->receiveShadows = false;
	HX_STACK_LINE(196)
	this->_isDisposed = false;
	HX_STACK_LINE(197)
	this->onDispose = null();
	HX_STACK_LINE(199)
	this->skeleton = null();
	HX_STACK_LINE(201)
	this->renderingGroupId = (int)0;
	HX_STACK_LINE(203)
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
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","get_parentId",0x25a0925e,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.get_parentId","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",123,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(124)
	if (((this->parent != null()))){
		HX_STACK_LINE(125)
		return this->parent->id;
	}
	HX_STACK_LINE(127)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,get_parentId,return )

Void AbstractMesh_obj::_resetPointsArrayCache( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","_resetPointsArrayCache",0x065135cc,"com.gamestudiohx.babylonhx.mesh.AbstractMesh._resetPointsArrayCache","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",207,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(207)
		this->_positions = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,_resetPointsArrayCache,(void))

bool AbstractMesh_obj::_generatePointsArray( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","_generatePointsArray",0x2fe438f2,"com.gamestudiohx.babylonhx.mesh.AbstractMesh._generatePointsArray","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",211,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(211)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,_generatePointsArray,return )

Void AbstractMesh_obj::_collideForSubMesh( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,::com::gamestudiohx::babylonhx::tools::math::Matrix transformMatrix,::com::gamestudiohx::babylonhx::collisions::Collider collider){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","_collideForSubMesh",0xe2e7a413,"com.gamestudiohx.babylonhx.mesh.AbstractMesh._collideForSubMesh","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",229,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(subMesh,"subMesh")
		HX_STACK_ARG(transformMatrix,"transformMatrix")
		HX_STACK_ARG(collider,"collider")
		HX_STACK_LINE(230)
		this->_generatePointsArray();
		struct _Function_1_1{
			inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::SubMesh &subMesh,::com::gamestudiohx::babylonhx::tools::math::Matrix &transformMatrix){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",232,0x2cff64c0)
				{
					HX_STACK_LINE(232)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = subMesh->_lastColliderTransformMatrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(232)
					return (bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((_this->m->__get((int)0) == transformMatrix->m->__get((int)0))) && bool((_this->m->__get((int)1) == transformMatrix->m->__get((int)1))))) && bool((_this->m->__get((int)2) == transformMatrix->m->__get((int)2))))) && bool((_this->m->__get((int)3) == transformMatrix->m->__get((int)3))))) && bool((_this->m->__get((int)4) == transformMatrix->m->__get((int)4))))) && bool((_this->m->__get((int)5) == transformMatrix->m->__get((int)5))))) && bool((_this->m->__get((int)6) == transformMatrix->m->__get((int)6))))) && bool((_this->m->__get((int)7) == transformMatrix->m->__get((int)7))))) && bool((_this->m->__get((int)8) == transformMatrix->m->__get((int)8))))) && bool((_this->m->__get((int)9) == transformMatrix->m->__get((int)9))))) && bool((_this->m->__get((int)10) == transformMatrix->m->__get((int)10))))) && bool((_this->m->__get((int)11) == transformMatrix->m->__get((int)11))))) && bool((_this->m->__get((int)12) == transformMatrix->m->__get((int)12))))) && bool((_this->m->__get((int)13) == transformMatrix->m->__get((int)13))))) && bool((_this->m->__get((int)14) == transformMatrix->m->__get((int)14))))) && bool((_this->m->__get((int)15) == transformMatrix->m->__get((int)15))));
				}
				return null();
			}
		};
		HX_STACK_LINE(232)
		if (((bool((subMesh->_lastColliderWorldVertices == null())) || bool(!(_Function_1_1::Block(subMesh,transformMatrix)))))){
			HX_STACK_LINE(233)
			subMesh->_lastColliderTransformMatrix = transformMatrix;
			HX_STACK_LINE(234)
			subMesh->_lastColliderWorldVertices = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(235)
			int start = subMesh->verticesStart;		HX_STACK_VAR(start,"start");
			HX_STACK_LINE(236)
			int end = (subMesh->verticesStart + subMesh->verticesCount);		HX_STACK_VAR(end,"end");
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				int _g = start;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(237)
				while((true)){
					HX_STACK_LINE(237)
					if ((!(((_g < end))))){
						HX_STACK_LINE(237)
						break;
					}
					HX_STACK_LINE(237)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(238)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->_positions->__get(i).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(vector,"vector");
						HX_STACK_LINE(238)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(238)
						{
							HX_STACK_LINE(238)
							Float x = ((((vector->x * transformMatrix->m->__get((int)0)) + (vector->y * transformMatrix->m->__get((int)4))) + (vector->z * transformMatrix->m->__get((int)8))) + transformMatrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(238)
							Float y = ((((vector->x * transformMatrix->m->__get((int)1)) + (vector->y * transformMatrix->m->__get((int)5))) + (vector->z * transformMatrix->m->__get((int)9))) + transformMatrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(238)
							Float z = ((((vector->x * transformMatrix->m->__get((int)2)) + (vector->y * transformMatrix->m->__get((int)6))) + (vector->z * transformMatrix->m->__get((int)10))) + transformMatrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(238)
							Float w = ((((vector->x * transformMatrix->m->__get((int)3)) + (vector->y * transformMatrix->m->__get((int)7))) + (vector->z * transformMatrix->m->__get((int)11))) + transformMatrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
							HX_STACK_LINE(238)
							result->x = (Float(x) / Float(w));
							HX_STACK_LINE(238)
							result->y = (Float(y) / Float(w));
							HX_STACK_LINE(238)
							result->z = (Float(z) / Float(w));
						}
						HX_STACK_LINE(238)
						_g1 = result;
					}
					HX_STACK_LINE(238)
					subMesh->_lastColliderWorldVertices->push(_g1);
				}
			}
		}
		HX_STACK_LINE(242)
		{
			HX_STACK_LINE(242)
			Array< ::Dynamic > pts = subMesh->_lastColliderWorldVertices;		HX_STACK_VAR(pts,"pts");
			HX_STACK_LINE(242)
			Array< int > indices = this->_indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(242)
			int decal = subMesh->verticesStart;		HX_STACK_VAR(decal,"decal");
			HX_STACK_LINE(242)
			int i = subMesh->indexStart;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(242)
			while((true)){
				HX_STACK_LINE(242)
				if ((!(((i < (subMesh->indexStart + subMesh->indexCount)))))){
					HX_STACK_LINE(242)
					break;
				}
				HX_STACK_LINE(242)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 p1 = pts->__get((indices->__get(i) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(242)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 p2 = pts->__get((indices->__get((i + (int)1)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p2,"p2");
				HX_STACK_LINE(242)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 p3 = pts->__get((indices->__get((i + (int)2)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p3,"p3");
				HX_STACK_LINE(242)
				collider->_testTriangle(i,subMesh,p3,p2,p1);
				HX_STACK_LINE(242)
				hx::AddEq(i,(int)3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AbstractMesh_obj,_collideForSubMesh,(void))

Void AbstractMesh_obj::_processCollisionsForSubModels( ::com::gamestudiohx::babylonhx::collisions::Collider collider,::com::gamestudiohx::babylonhx::tools::math::Matrix transformMatrix){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","_processCollisionsForSubModels",0xc367ee22,"com.gamestudiohx.babylonhx.mesh.AbstractMesh._processCollisionsForSubModels","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",246,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(collider,"collider")
		HX_STACK_ARG(transformMatrix,"transformMatrix")
		HX_STACK_LINE(246)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(246)
		int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(246)
		while((true)){
			HX_STACK_LINE(246)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(246)
				break;
			}
			HX_STACK_LINE(246)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(247)
			::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
			HX_STACK_LINE(250)
			if (((  (((this->subMeshes->length > (int)1))) ? bool(!(subMesh->_boundingInfo->_checkCollision(collider))) : bool(false) ))){
				HX_STACK_LINE(251)
				continue;
			}
			HX_STACK_LINE(253)
			{
				HX_STACK_LINE(253)
				this->_generatePointsArray();
				struct _Function_3_1{
					inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::SubMesh &subMesh,::com::gamestudiohx::babylonhx::tools::math::Matrix &transformMatrix){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",253,0x2cff64c0)
						{
							HX_STACK_LINE(253)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = subMesh->_lastColliderTransformMatrix;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(253)
							return (bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((_this->m->__get((int)0) == transformMatrix->m->__get((int)0))) && bool((_this->m->__get((int)1) == transformMatrix->m->__get((int)1))))) && bool((_this->m->__get((int)2) == transformMatrix->m->__get((int)2))))) && bool((_this->m->__get((int)3) == transformMatrix->m->__get((int)3))))) && bool((_this->m->__get((int)4) == transformMatrix->m->__get((int)4))))) && bool((_this->m->__get((int)5) == transformMatrix->m->__get((int)5))))) && bool((_this->m->__get((int)6) == transformMatrix->m->__get((int)6))))) && bool((_this->m->__get((int)7) == transformMatrix->m->__get((int)7))))) && bool((_this->m->__get((int)8) == transformMatrix->m->__get((int)8))))) && bool((_this->m->__get((int)9) == transformMatrix->m->__get((int)9))))) && bool((_this->m->__get((int)10) == transformMatrix->m->__get((int)10))))) && bool((_this->m->__get((int)11) == transformMatrix->m->__get((int)11))))) && bool((_this->m->__get((int)12) == transformMatrix->m->__get((int)12))))) && bool((_this->m->__get((int)13) == transformMatrix->m->__get((int)13))))) && bool((_this->m->__get((int)14) == transformMatrix->m->__get((int)14))))) && bool((_this->m->__get((int)15) == transformMatrix->m->__get((int)15))));
						}
						return null();
					}
				};
				HX_STACK_LINE(253)
				if (((bool((subMesh->_lastColliderWorldVertices == null())) || bool(!(_Function_3_1::Block(subMesh,transformMatrix)))))){
					HX_STACK_LINE(253)
					subMesh->_lastColliderTransformMatrix = transformMatrix;
					HX_STACK_LINE(253)
					subMesh->_lastColliderWorldVertices = Array_obj< ::Dynamic >::__new();
					HX_STACK_LINE(253)
					int start = subMesh->verticesStart;		HX_STACK_VAR(start,"start");
					HX_STACK_LINE(253)
					int end = (subMesh->verticesStart + subMesh->verticesCount);		HX_STACK_VAR(end,"end");
					HX_STACK_LINE(253)
					{
						HX_STACK_LINE(253)
						int _g2 = start;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(253)
						while((true)){
							HX_STACK_LINE(253)
							if ((!(((_g2 < end))))){
								HX_STACK_LINE(253)
								break;
							}
							HX_STACK_LINE(253)
							int i = (_g2)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(253)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(253)
							{
								HX_STACK_LINE(253)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->_positions->__get(i).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(vector,"vector");
								HX_STACK_LINE(253)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(253)
								{
									HX_STACK_LINE(253)
									Float x = ((((vector->x * transformMatrix->m->__get((int)0)) + (vector->y * transformMatrix->m->__get((int)4))) + (vector->z * transformMatrix->m->__get((int)8))) + transformMatrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(253)
									Float y = ((((vector->x * transformMatrix->m->__get((int)1)) + (vector->y * transformMatrix->m->__get((int)5))) + (vector->z * transformMatrix->m->__get((int)9))) + transformMatrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(253)
									Float z = ((((vector->x * transformMatrix->m->__get((int)2)) + (vector->y * transformMatrix->m->__get((int)6))) + (vector->z * transformMatrix->m->__get((int)10))) + transformMatrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
									HX_STACK_LINE(253)
									Float w = ((((vector->x * transformMatrix->m->__get((int)3)) + (vector->y * transformMatrix->m->__get((int)7))) + (vector->z * transformMatrix->m->__get((int)11))) + transformMatrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
									HX_STACK_LINE(253)
									result->x = (Float(x) / Float(w));
									HX_STACK_LINE(253)
									result->y = (Float(y) / Float(w));
									HX_STACK_LINE(253)
									result->z = (Float(z) / Float(w));
								}
								HX_STACK_LINE(253)
								_g3 = result;
							}
							HX_STACK_LINE(253)
							subMesh->_lastColliderWorldVertices->push(_g3);
						}
					}
				}
				HX_STACK_LINE(253)
				{
					HX_STACK_LINE(253)
					Array< ::Dynamic > pts = subMesh->_lastColliderWorldVertices;		HX_STACK_VAR(pts,"pts");
					HX_STACK_LINE(253)
					Array< int > indices = this->_indices;		HX_STACK_VAR(indices,"indices");
					HX_STACK_LINE(253)
					int decal = subMesh->verticesStart;		HX_STACK_VAR(decal,"decal");
					HX_STACK_LINE(253)
					int i = subMesh->indexStart;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(253)
					while((true)){
						HX_STACK_LINE(253)
						if ((!(((i < (subMesh->indexStart + subMesh->indexCount)))))){
							HX_STACK_LINE(253)
							break;
						}
						HX_STACK_LINE(253)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 p1 = pts->__get((indices->__get(i) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p1,"p1");
						HX_STACK_LINE(253)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 p2 = pts->__get((indices->__get((i + (int)1)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p2,"p2");
						HX_STACK_LINE(253)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 p3 = pts->__get((indices->__get((i + (int)2)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p3,"p3");
						HX_STACK_LINE(253)
						collider->_testTriangle(i,subMesh,p3,p2,p1);
						HX_STACK_LINE(253)
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
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","_checkCollision",0x60323279,"com.gamestudiohx.babylonhx.mesh.AbstractMesh._checkCollision","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",259,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(collider,"collider")
		HX_STACK_LINE(259)
		if ((this->_boundingInfo->_checkCollision(collider))){
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_collisionsScalingMatrix;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(261)
				result->m[(int)0] = (Float(1.0) / Float(collider->radius->x));
				HX_STACK_LINE(261)
				result->m[(int)1] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)2] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)4] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)5] = (Float(1.0) / Float(collider->radius->y));
				HX_STACK_LINE(261)
				result->m[(int)6] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)8] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)9] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)10] = (Float(1.0) / Float(collider->radius->z));
				HX_STACK_LINE(261)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)12] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)13] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(261)
				result;
			}
			HX_STACK_LINE(262)
			{
				HX_STACK_LINE(262)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_worldMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(262)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_collisionsScalingMatrix;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(262)
				{
					HX_STACK_LINE(262)
					Array< Float > result = this->_collisionsTransformMatrix->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(262)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(262)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(262)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(262)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(262)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(262)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(262)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(262)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(262)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(262)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(262)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(262)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(262)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(262)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(262)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(262)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(262)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(262)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(262)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(262)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(262)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(262)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(262)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(262)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(262)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(262)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(262)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(262)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(262)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(262)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(262)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(262)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(262)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(262)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(262)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(262)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(262)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(262)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(262)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(262)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(262)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(262)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(262)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(262)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(262)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(262)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(262)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(262)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(262)
					result;
				}
			}
			HX_STACK_LINE(264)
			{
				HX_STACK_LINE(264)
				::com::gamestudiohx::babylonhx::tools::math::Matrix transformMatrix = this->_collisionsTransformMatrix;		HX_STACK_VAR(transformMatrix,"transformMatrix");
				HX_STACK_LINE(264)
				{
					HX_STACK_LINE(264)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(264)
					int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(264)
					while((true)){
						HX_STACK_LINE(264)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(264)
							break;
						}
						HX_STACK_LINE(264)
						int index = (_g1)++;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(264)
						::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
						HX_STACK_LINE(264)
						if (((  (((this->subMeshes->length > (int)1))) ? bool(!(subMesh->_boundingInfo->_checkCollision(collider))) : bool(false) ))){
							HX_STACK_LINE(264)
							continue;
						}
						HX_STACK_LINE(264)
						{
							HX_STACK_LINE(264)
							this->_generatePointsArray();
							struct _Function_6_1{
								inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::SubMesh &subMesh,::com::gamestudiohx::babylonhx::tools::math::Matrix &transformMatrix){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",264,0x2cff64c0)
									{
										HX_STACK_LINE(264)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = subMesh->_lastColliderTransformMatrix;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(264)
										return (bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((_this->m->__get((int)0) == transformMatrix->m->__get((int)0))) && bool((_this->m->__get((int)1) == transformMatrix->m->__get((int)1))))) && bool((_this->m->__get((int)2) == transformMatrix->m->__get((int)2))))) && bool((_this->m->__get((int)3) == transformMatrix->m->__get((int)3))))) && bool((_this->m->__get((int)4) == transformMatrix->m->__get((int)4))))) && bool((_this->m->__get((int)5) == transformMatrix->m->__get((int)5))))) && bool((_this->m->__get((int)6) == transformMatrix->m->__get((int)6))))) && bool((_this->m->__get((int)7) == transformMatrix->m->__get((int)7))))) && bool((_this->m->__get((int)8) == transformMatrix->m->__get((int)8))))) && bool((_this->m->__get((int)9) == transformMatrix->m->__get((int)9))))) && bool((_this->m->__get((int)10) == transformMatrix->m->__get((int)10))))) && bool((_this->m->__get((int)11) == transformMatrix->m->__get((int)11))))) && bool((_this->m->__get((int)12) == transformMatrix->m->__get((int)12))))) && bool((_this->m->__get((int)13) == transformMatrix->m->__get((int)13))))) && bool((_this->m->__get((int)14) == transformMatrix->m->__get((int)14))))) && bool((_this->m->__get((int)15) == transformMatrix->m->__get((int)15))));
									}
									return null();
								}
							};
							HX_STACK_LINE(264)
							if (((bool((subMesh->_lastColliderWorldVertices == null())) || bool(!(_Function_6_1::Block(subMesh,transformMatrix)))))){
								HX_STACK_LINE(264)
								subMesh->_lastColliderTransformMatrix = transformMatrix;
								HX_STACK_LINE(264)
								subMesh->_lastColliderWorldVertices = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(264)
								int start = subMesh->verticesStart;		HX_STACK_VAR(start,"start");
								HX_STACK_LINE(264)
								int end = (subMesh->verticesStart + subMesh->verticesCount);		HX_STACK_VAR(end,"end");
								HX_STACK_LINE(264)
								{
									HX_STACK_LINE(264)
									int _g2 = start;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(264)
									while((true)){
										HX_STACK_LINE(264)
										if ((!(((_g2 < end))))){
											HX_STACK_LINE(264)
											break;
										}
										HX_STACK_LINE(264)
										int i = (_g2)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(264)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(264)
										{
											HX_STACK_LINE(264)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->_positions->__get(i).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(vector,"vector");
											HX_STACK_LINE(264)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(264)
											{
												HX_STACK_LINE(264)
												Float x = ((((vector->x * transformMatrix->m->__get((int)0)) + (vector->y * transformMatrix->m->__get((int)4))) + (vector->z * transformMatrix->m->__get((int)8))) + transformMatrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(264)
												Float y = ((((vector->x * transformMatrix->m->__get((int)1)) + (vector->y * transformMatrix->m->__get((int)5))) + (vector->z * transformMatrix->m->__get((int)9))) + transformMatrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
												HX_STACK_LINE(264)
												Float z = ((((vector->x * transformMatrix->m->__get((int)2)) + (vector->y * transformMatrix->m->__get((int)6))) + (vector->z * transformMatrix->m->__get((int)10))) + transformMatrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
												HX_STACK_LINE(264)
												Float w = ((((vector->x * transformMatrix->m->__get((int)3)) + (vector->y * transformMatrix->m->__get((int)7))) + (vector->z * transformMatrix->m->__get((int)11))) + transformMatrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(264)
												result->x = (Float(x) / Float(w));
												HX_STACK_LINE(264)
												result->y = (Float(y) / Float(w));
												HX_STACK_LINE(264)
												result->z = (Float(z) / Float(w));
											}
											HX_STACK_LINE(264)
											_g3 = result;
										}
										HX_STACK_LINE(264)
										subMesh->_lastColliderWorldVertices->push(_g3);
									}
								}
							}
							HX_STACK_LINE(264)
							{
								HX_STACK_LINE(264)
								Array< ::Dynamic > pts = subMesh->_lastColliderWorldVertices;		HX_STACK_VAR(pts,"pts");
								HX_STACK_LINE(264)
								Array< int > indices = this->_indices;		HX_STACK_VAR(indices,"indices");
								HX_STACK_LINE(264)
								int decal = subMesh->verticesStart;		HX_STACK_VAR(decal,"decal");
								HX_STACK_LINE(264)
								int i = subMesh->indexStart;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(264)
								while((true)){
									HX_STACK_LINE(264)
									if ((!(((i < (subMesh->indexStart + subMesh->indexCount)))))){
										HX_STACK_LINE(264)
										break;
									}
									HX_STACK_LINE(264)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 p1 = pts->__get((indices->__get(i) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p1,"p1");
									HX_STACK_LINE(264)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 p2 = pts->__get((indices->__get((i + (int)1)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p2,"p2");
									HX_STACK_LINE(264)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 p3 = pts->__get((indices->__get((i + (int)2)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p3,"p3");
									HX_STACK_LINE(264)
									collider->_testTriangle(i,subMesh,p3,p2,p1);
									HX_STACK_LINE(264)
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
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","isInFrustum",0x19bdac03,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.isInFrustum","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",268,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frustumPlanes,"frustumPlanes")
	HX_STACK_LINE(269)
	if ((!(this->_boundingInfo->isInFrustum(frustumPlanes)))){
		HX_STACK_LINE(270)
		return false;
	}
	HX_STACK_LINE(273)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,isInFrustum,return )

::com::gamestudiohx::babylonhx::culling::BoundingInfo AbstractMesh_obj::getBoundingInfo( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getBoundingInfo",0x696526f8,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getBoundingInfo","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",277,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(277)
	return this->_boundingInfo;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getBoundingInfo,return )

::com::gamestudiohx::babylonhx::Scene AbstractMesh_obj::getScene( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getScene",0x69e74b86,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getScene","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",281,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(281)
	return this->_scene;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getScene,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix AbstractMesh_obj::getWorldMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getWorldMatrix",0xf0c9a3ed,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getWorldMatrix","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",284,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(285)
	int _g = this->_scene->getRenderId();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(285)
	if (((this->_currentRenderId != _g))){
		HX_STACK_LINE(286)
		bool force = false;		HX_STACK_VAR(force,"force");
		HX_STACK_LINE(286)
		::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",286,0x2cff64c0)
				{
					HX_STACK_LINE(286)
					int _g1 = __this->_scene->getRenderId();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(286)
					return (  ((!(((__this->_currentRenderId == _g1))))) ? bool(__this->isSynchronized(null())) : bool(true) );
				}
				return null();
			}
		};
		HX_STACK_LINE(286)
		if (((  ((!(force))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(286)
			this->_childrenFlag = (int)0;
		}
		else{
			HX_STACK_LINE(286)
			this->_childrenFlag = (int)1;
			HX_STACK_LINE(286)
			this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
			HX_STACK_LINE(286)
			this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
			HX_STACK_LINE(286)
			this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
			HX_STACK_LINE(286)
			int _g2 = this->_scene->getRenderId();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(286)
			this->_currentRenderId = _g2;
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(286)
				result->m[(int)0] = this->scaling->x;
				HX_STACK_LINE(286)
				result->m[(int)1] = (int)0;
				HX_STACK_LINE(286)
				result->m[(int)2] = (int)0;
				HX_STACK_LINE(286)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(286)
				result->m[(int)4] = (int)0;
				HX_STACK_LINE(286)
				result->m[(int)5] = this->scaling->y;
				HX_STACK_LINE(286)
				result->m[(int)6] = (int)0;
				HX_STACK_LINE(286)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(286)
				result->m[(int)8] = (int)0;
				HX_STACK_LINE(286)
				result->m[(int)9] = (int)0;
				HX_STACK_LINE(286)
				result->m[(int)10] = this->scaling->z;
				HX_STACK_LINE(286)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(286)
				result->m[(int)12] = (int)0;
				HX_STACK_LINE(286)
				result->m[(int)13] = (int)0;
				HX_STACK_LINE(286)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(286)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(286)
				result;
			}
			HX_STACK_LINE(286)
			if (((this->rotationQuaternion != null()))){
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = this->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(286)
					Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(286)
					Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(286)
					Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
					HX_STACK_LINE(286)
					Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
					HX_STACK_LINE(286)
					Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
					HX_STACK_LINE(286)
					Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
					HX_STACK_LINE(286)
					Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
					HX_STACK_LINE(286)
					Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
					HX_STACK_LINE(286)
					Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
					HX_STACK_LINE(286)
					result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
					HX_STACK_LINE(286)
					result->m[(int)1] = (2.0 * ((xy + zw)));
					HX_STACK_LINE(286)
					result->m[(int)2] = (2.0 * ((zx - yw)));
					HX_STACK_LINE(286)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(286)
					result->m[(int)4] = (2.0 * ((xy - zw)));
					HX_STACK_LINE(286)
					result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
					HX_STACK_LINE(286)
					result->m[(int)6] = (2.0 * ((yz + xw)));
					HX_STACK_LINE(286)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(286)
					result->m[(int)8] = (2.0 * ((zx + yw)));
					HX_STACK_LINE(286)
					result->m[(int)9] = (2.0 * ((yz - xw)));
					HX_STACK_LINE(286)
					result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
					HX_STACK_LINE(286)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(286)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(286)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(286)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(286)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(286)
					result;
				}
				HX_STACK_LINE(286)
				this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
			}
			else{
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
						HX_STACK_LINE(286)
						Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
						HX_STACK_LINE(286)
						Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
						HX_STACK_LINE(286)
						Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
						HX_STACK_LINE(286)
						Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
						HX_STACK_LINE(286)
						Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
						HX_STACK_LINE(286)
						Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
						HX_STACK_LINE(286)
						Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
						HX_STACK_LINE(286)
						Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
						HX_STACK_LINE(286)
						tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
						HX_STACK_LINE(286)
						tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
						HX_STACK_LINE(286)
						tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
						HX_STACK_LINE(286)
						tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
						HX_STACK_LINE(286)
						_g3 = tempQuaternion;
					}
					HX_STACK_LINE(286)
					tempQuaternion = _g3;
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(286)
						Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(286)
						Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(286)
						Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(286)
						Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
						HX_STACK_LINE(286)
						Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
						HX_STACK_LINE(286)
						Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
						HX_STACK_LINE(286)
						Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(286)
						Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
						HX_STACK_LINE(286)
						result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
						HX_STACK_LINE(286)
						result->m[(int)1] = (2.0 * ((xy + zw)));
						HX_STACK_LINE(286)
						result->m[(int)2] = (2.0 * ((zx - yw)));
						HX_STACK_LINE(286)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)4] = (2.0 * ((xy - zw)));
						HX_STACK_LINE(286)
						result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
						HX_STACK_LINE(286)
						result->m[(int)6] = (2.0 * ((yz + xw)));
						HX_STACK_LINE(286)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)8] = (2.0 * ((zx + yw)));
						HX_STACK_LINE(286)
						result->m[(int)9] = (2.0 * ((yz - xw)));
						HX_STACK_LINE(286)
						result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
						HX_STACK_LINE(286)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(286)
						result;
					}
				}
				HX_STACK_LINE(286)
				this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
			}
			HX_STACK_LINE(286)
			if ((this->infiniteDistance)){
				HX_STACK_LINE(286)
				::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						result->m[(int)0] = 1.0;
						HX_STACK_LINE(286)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)5] = 1.0;
						HX_STACK_LINE(286)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)10] = 1.0;
						HX_STACK_LINE(286)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)12] = (this->position->x + camera->position->x);
						HX_STACK_LINE(286)
						result->m[(int)13] = (this->position->y + camera->position->y);
						HX_STACK_LINE(286)
						result->m[(int)14] = (this->position->z + camera->position->z);
						HX_STACK_LINE(286)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(286)
						result;
					}
				}
			}
			else{
				HX_STACK_LINE(286)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					result->m[(int)0] = 1.0;
					HX_STACK_LINE(286)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(286)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(286)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(286)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(286)
					result->m[(int)5] = 1.0;
					HX_STACK_LINE(286)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(286)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(286)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(286)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(286)
					result->m[(int)10] = 1.0;
					HX_STACK_LINE(286)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(286)
					result->m[(int)12] = this->position->x;
					HX_STACK_LINE(286)
					result->m[(int)13] = this->position->y;
					HX_STACK_LINE(286)
					result->m[(int)14] = this->position->z;
					HX_STACK_LINE(286)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(286)
					result;
				}
			}
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(286)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(286)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(286)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(286)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(286)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(286)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(286)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(286)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(286)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(286)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(286)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(286)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(286)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(286)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(286)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(286)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(286)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(286)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(286)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(286)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(286)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(286)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(286)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(286)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(286)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(286)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(286)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(286)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(286)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(286)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(286)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(286)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(286)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(286)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(286)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(286)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(286)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(286)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(286)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(286)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(286)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(286)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(286)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(286)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(286)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(286)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(286)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(286)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(286)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(286)
					result;
				}
			}
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(286)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(286)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(286)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(286)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(286)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(286)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(286)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(286)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(286)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(286)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(286)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(286)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(286)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(286)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(286)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(286)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(286)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(286)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(286)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(286)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(286)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(286)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(286)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(286)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(286)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(286)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(286)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(286)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(286)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(286)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(286)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(286)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(286)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(286)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(286)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(286)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(286)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(286)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(286)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(286)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(286)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(286)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(286)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(286)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(286)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(286)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(286)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(286)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(286)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(286)
					result;
				}
			}
			HX_STACK_LINE(286)
			if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
				HX_STACK_LINE(286)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(286)
					localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
				}
				HX_STACK_LINE(286)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(286)
					zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
				}
				HX_STACK_LINE(286)
				if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(286)
						hx::AddEq(localPosition->x,otherVector->x);
						HX_STACK_LINE(286)
						hx::AddEq(localPosition->y,otherVector->y);
						HX_STACK_LINE(286)
						hx::AddEq(localPosition->z,otherVector->z);
					}
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(286)
						{
							HX_STACK_LINE(286)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(286)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(286)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(286)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(286)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(286)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(286)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(286)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(286)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(286)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(286)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(286)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(286)
							result->m[(int)12] = localPosition->x;
							HX_STACK_LINE(286)
							result->m[(int)13] = localPosition->y;
							HX_STACK_LINE(286)
							result->m[(int)14] = localPosition->z;
							HX_STACK_LINE(286)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(286)
							result;
						}
					}
				}
				HX_STACK_LINE(286)
				if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
					HX_STACK_LINE(286)
					zero = this->_scene->activeCamera->position;
				}
				else{
					HX_STACK_LINE(286)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
						HX_STACK_LINE(286)
						zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
					HX_STACK_LINE(286)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
						HX_STACK_LINE(286)
						zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
					HX_STACK_LINE(286)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
						HX_STACK_LINE(286)
						zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						zAxis->x = (zero->x - localPosition->x);
						HX_STACK_LINE(286)
						zAxis->y = (zero->y - localPosition->y);
						HX_STACK_LINE(286)
						zAxis->z = (zero->z - localPosition->z);
					}
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(286)
						if (((len != (int)0))){
							HX_STACK_LINE(286)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(286)
							hx::MultEq(zAxis->x,num);
							HX_STACK_LINE(286)
							hx::MultEq(zAxis->y,num);
							HX_STACK_LINE(286)
							hx::MultEq(zAxis->z,num);
						}
					}
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
						HX_STACK_LINE(286)
						xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
						HX_STACK_LINE(286)
						xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
					}
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(286)
						if (((len != (int)0))){
							HX_STACK_LINE(286)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(286)
							hx::MultEq(xAxis->x,num);
							HX_STACK_LINE(286)
							hx::MultEq(xAxis->y,num);
							HX_STACK_LINE(286)
							hx::MultEq(xAxis->z,num);
						}
					}
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
						HX_STACK_LINE(286)
						yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
						HX_STACK_LINE(286)
						yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
					}
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(286)
						if (((len != (int)0))){
							HX_STACK_LINE(286)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(286)
							hx::MultEq(yAxis->x,num);
							HX_STACK_LINE(286)
							hx::MultEq(yAxis->y,num);
							HX_STACK_LINE(286)
							hx::MultEq(yAxis->z,num);
						}
					}
					HX_STACK_LINE(286)
					Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
					HX_STACK_LINE(286)
					Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
					HX_STACK_LINE(286)
					Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						result->m[(int)0] = xAxis->x;
						HX_STACK_LINE(286)
						result->m[(int)1] = yAxis->x;
						HX_STACK_LINE(286)
						result->m[(int)2] = zAxis->x;
						HX_STACK_LINE(286)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)4] = xAxis->y;
						HX_STACK_LINE(286)
						result->m[(int)5] = yAxis->y;
						HX_STACK_LINE(286)
						result->m[(int)6] = zAxis->y;
						HX_STACK_LINE(286)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)8] = xAxis->z;
						HX_STACK_LINE(286)
						result->m[(int)9] = yAxis->z;
						HX_STACK_LINE(286)
						result->m[(int)10] = zAxis->z;
						HX_STACK_LINE(286)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(286)
						result->m[(int)12] = ex;
						HX_STACK_LINE(286)
						result->m[(int)13] = ey;
						HX_STACK_LINE(286)
						result->m[(int)14] = ez;
						HX_STACK_LINE(286)
						result->m[(int)15] = (int)1;
						HX_STACK_LINE(286)
						result;
					}
				}
				HX_STACK_LINE(286)
				this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localBillboard;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
						HX_STACK_LINE(286)
						Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
						HX_STACK_LINE(286)
						Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
						HX_STACK_LINE(286)
						Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
						HX_STACK_LINE(286)
						Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
						HX_STACK_LINE(286)
						Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
						HX_STACK_LINE(286)
						Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
						HX_STACK_LINE(286)
						Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
						HX_STACK_LINE(286)
						Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
						HX_STACK_LINE(286)
						Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
						HX_STACK_LINE(286)
						Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
						HX_STACK_LINE(286)
						Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
						HX_STACK_LINE(286)
						Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
						HX_STACK_LINE(286)
						Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
						HX_STACK_LINE(286)
						Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
						HX_STACK_LINE(286)
						Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
						HX_STACK_LINE(286)
						Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
						HX_STACK_LINE(286)
						Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
						HX_STACK_LINE(286)
						Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
						HX_STACK_LINE(286)
						Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
						HX_STACK_LINE(286)
						Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
						HX_STACK_LINE(286)
						Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
						HX_STACK_LINE(286)
						Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
						HX_STACK_LINE(286)
						Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
						HX_STACK_LINE(286)
						Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
						HX_STACK_LINE(286)
						Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
						HX_STACK_LINE(286)
						Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
						HX_STACK_LINE(286)
						Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
						HX_STACK_LINE(286)
						Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
						HX_STACK_LINE(286)
						Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
						HX_STACK_LINE(286)
						Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
						HX_STACK_LINE(286)
						Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
						HX_STACK_LINE(286)
						Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
						HX_STACK_LINE(286)
						Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
						HX_STACK_LINE(286)
						Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
						HX_STACK_LINE(286)
						Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
						HX_STACK_LINE(286)
						Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
						HX_STACK_LINE(286)
						Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
						HX_STACK_LINE(286)
						Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
						HX_STACK_LINE(286)
						_this->m[(int)0] = (l23 * l27);
						HX_STACK_LINE(286)
						_this->m[(int)4] = (l24 * l27);
						HX_STACK_LINE(286)
						_this->m[(int)8] = (l25 * l27);
						HX_STACK_LINE(286)
						_this->m[(int)12] = (l26 * l27);
						HX_STACK_LINE(286)
						_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
						HX_STACK_LINE(286)
						_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
						HX_STACK_LINE(286)
						_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
						HX_STACK_LINE(286)
						_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
						HX_STACK_LINE(286)
						_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
						HX_STACK_LINE(286)
						_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
						HX_STACK_LINE(286)
						_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
						HX_STACK_LINE(286)
						_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
						HX_STACK_LINE(286)
						_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
						HX_STACK_LINE(286)
						_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
						HX_STACK_LINE(286)
						_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
						HX_STACK_LINE(286)
						_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
					}
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(286)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(286)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(286)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(286)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(286)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(286)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(286)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(286)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(286)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(286)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(286)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(286)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(286)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(286)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(286)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(286)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(286)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(286)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(286)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(286)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(286)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(286)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(286)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(286)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(286)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(286)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(286)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(286)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(286)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(286)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(286)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(286)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(286)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(286)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(286)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(286)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(286)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(286)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(286)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(286)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(286)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(286)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(286)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(286)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(286)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(286)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(286)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(286)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(286)
						result;
					}
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(286)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(286)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(286)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(286)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(286)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(286)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(286)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(286)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(286)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(286)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(286)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(286)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(286)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(286)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(286)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(286)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(286)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(286)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(286)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(286)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(286)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(286)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(286)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(286)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(286)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(286)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(286)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(286)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(286)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(286)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(286)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(286)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(286)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(286)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(286)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(286)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(286)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(286)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(286)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(286)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(286)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(286)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(286)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(286)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(286)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(286)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(286)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(286)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(286)
						result;
					}
				}
			}
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",286,0x2cff64c0)
					{
						HX_STACK_LINE(286)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _g4 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(286)
						return (_g4 != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(286)
			if (((  (((  (((this->parent != null()))) ? bool(_Function_3_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(286)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(286)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(286)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(286)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(286)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(286)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(286)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(286)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(286)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(286)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(286)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(286)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(286)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(286)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(286)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(286)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(286)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(286)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(286)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(286)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(286)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(286)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(286)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(286)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(286)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(286)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(286)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(286)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(286)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(286)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(286)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(286)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(286)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(286)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(286)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(286)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(286)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(286)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(286)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(286)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(286)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(286)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(286)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(286)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(286)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(286)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(286)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(286)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(286)
						result;
					}
				}
				HX_STACK_LINE(286)
				::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localWorld;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(286)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(286)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(286)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(286)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(286)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(286)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(286)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(286)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(286)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(286)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(286)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(286)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(286)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(286)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(286)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(286)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(286)
						Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(286)
						Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(286)
						Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(286)
						Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(286)
						Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(286)
						Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(286)
						Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(286)
						Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(286)
						Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(286)
						Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(286)
						Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(286)
						Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(286)
						Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(286)
						Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(286)
						Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(286)
						Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(286)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(286)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(286)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(286)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(286)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(286)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(286)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(286)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(286)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(286)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(286)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(286)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(286)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(286)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(286)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(286)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(286)
						result;
					}
				}
			}
			else{
				HX_STACK_LINE(286)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(286)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(286)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(286)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(286)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(286)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(286)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(286)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(286)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(286)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(286)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(286)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(286)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(286)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(286)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(286)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(286)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(286)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(286)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(286)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(286)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(286)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(286)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(286)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(286)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(286)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(286)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(286)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(286)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(286)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(286)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(286)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(286)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(286)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(286)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(286)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(286)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(286)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(286)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(286)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(286)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(286)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(286)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(286)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(286)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(286)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(286)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(286)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(286)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(286)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(286)
					result;
				}
			}
			HX_STACK_LINE(286)
			if (((this->_boundingInfo != null()))){
				HX_STACK_LINE(286)
				Float _g5 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(286)
				this->_scaleFactor = _g5;
				HX_STACK_LINE(286)
				Float _g6 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(286)
				this->_scaleFactor = _g6;
				struct _Function_4_1{
					inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",286,0x2cff64c0)
						{
							HX_STACK_LINE(286)
							Dynamic _g7 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(286)
							return (_g7 != null());
						}
						return null();
					}
				};
				HX_STACK_LINE(286)
				if (((  (((this->parent != null()))) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(286)
					Dynamic _g8 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(286)
					Float _g9 = (this->_scaleFactor * _g8);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(286)
					this->_scaleFactor = _g9;
				}
				HX_STACK_LINE(286)
				this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(286)
					int _g3 = this->subMeshes->length;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(286)
					while((true)){
						HX_STACK_LINE(286)
						if ((!(((_g1 < _g3))))){
							HX_STACK_LINE(286)
							break;
						}
						HX_STACK_LINE(286)
						int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
						HX_STACK_LINE(286)
						::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
						HX_STACK_LINE(286)
						subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
					}
				}
			}
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_absolutePosition;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(286)
				_this->x = this->_worldMatrix->m->__get((int)12);
				HX_STACK_LINE(286)
				_this->y = this->_worldMatrix->m->__get((int)13);
				HX_STACK_LINE(286)
				_this->z = this->_worldMatrix->m->__get((int)14);
			}
			HX_STACK_LINE(286)
			ret = this->_worldMatrix;
		}
		HX_STACK_LINE(286)
		ret;
	}
	HX_STACK_LINE(288)
	return this->_worldMatrix;
}


int AbstractMesh_obj::getTotalVertices( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getTotalVertices",0x79627017,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getTotalVertices","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",292,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(292)
	return this->_totalVertices;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getTotalVertices,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 AbstractMesh_obj::getAbsolutePosition( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getAbsolutePosition",0xa7329e46,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getAbsolutePosition","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",295,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(296)
	{
		HX_STACK_LINE(296)
		bool force = false;		HX_STACK_VAR(force,"force");
		HX_STACK_LINE(296)
		::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",296,0x2cff64c0)
				{
					HX_STACK_LINE(296)
					int _g = __this->_scene->getRenderId();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(296)
					return (  ((!(((__this->_currentRenderId == _g))))) ? bool(__this->isSynchronized(null())) : bool(true) );
				}
				return null();
			}
		};
		HX_STACK_LINE(296)
		if (((  ((!(force))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(296)
			this->_childrenFlag = (int)0;
		}
		else{
			HX_STACK_LINE(296)
			this->_childrenFlag = (int)1;
			HX_STACK_LINE(296)
			this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
			HX_STACK_LINE(296)
			this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
			HX_STACK_LINE(296)
			this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
			HX_STACK_LINE(296)
			int _g1 = this->_scene->getRenderId();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(296)
			this->_currentRenderId = _g1;
			HX_STACK_LINE(296)
			{
				HX_STACK_LINE(296)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(296)
				result->m[(int)0] = this->scaling->x;
				HX_STACK_LINE(296)
				result->m[(int)1] = (int)0;
				HX_STACK_LINE(296)
				result->m[(int)2] = (int)0;
				HX_STACK_LINE(296)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(296)
				result->m[(int)4] = (int)0;
				HX_STACK_LINE(296)
				result->m[(int)5] = this->scaling->y;
				HX_STACK_LINE(296)
				result->m[(int)6] = (int)0;
				HX_STACK_LINE(296)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(296)
				result->m[(int)8] = (int)0;
				HX_STACK_LINE(296)
				result->m[(int)9] = (int)0;
				HX_STACK_LINE(296)
				result->m[(int)10] = this->scaling->z;
				HX_STACK_LINE(296)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(296)
				result->m[(int)12] = (int)0;
				HX_STACK_LINE(296)
				result->m[(int)13] = (int)0;
				HX_STACK_LINE(296)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(296)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(296)
				result;
			}
			HX_STACK_LINE(296)
			if (((this->rotationQuaternion != null()))){
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = this->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(296)
					Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(296)
					Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(296)
					Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
					HX_STACK_LINE(296)
					Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
					HX_STACK_LINE(296)
					Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
					HX_STACK_LINE(296)
					Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
					HX_STACK_LINE(296)
					Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
					HX_STACK_LINE(296)
					Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
					HX_STACK_LINE(296)
					Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
					HX_STACK_LINE(296)
					result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
					HX_STACK_LINE(296)
					result->m[(int)1] = (2.0 * ((xy + zw)));
					HX_STACK_LINE(296)
					result->m[(int)2] = (2.0 * ((zx - yw)));
					HX_STACK_LINE(296)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(296)
					result->m[(int)4] = (2.0 * ((xy - zw)));
					HX_STACK_LINE(296)
					result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
					HX_STACK_LINE(296)
					result->m[(int)6] = (2.0 * ((yz + xw)));
					HX_STACK_LINE(296)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(296)
					result->m[(int)8] = (2.0 * ((zx + yw)));
					HX_STACK_LINE(296)
					result->m[(int)9] = (2.0 * ((yz - xw)));
					HX_STACK_LINE(296)
					result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
					HX_STACK_LINE(296)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(296)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(296)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(296)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(296)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(296)
					result;
				}
				HX_STACK_LINE(296)
				this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
			}
			else{
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
						HX_STACK_LINE(296)
						Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
						HX_STACK_LINE(296)
						Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
						HX_STACK_LINE(296)
						Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
						HX_STACK_LINE(296)
						Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
						HX_STACK_LINE(296)
						Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
						HX_STACK_LINE(296)
						Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
						HX_STACK_LINE(296)
						Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
						HX_STACK_LINE(296)
						Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
						HX_STACK_LINE(296)
						tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
						HX_STACK_LINE(296)
						tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
						HX_STACK_LINE(296)
						tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
						HX_STACK_LINE(296)
						tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
						HX_STACK_LINE(296)
						_g2 = tempQuaternion;
					}
					HX_STACK_LINE(296)
					tempQuaternion = _g2;
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(296)
						Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(296)
						Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(296)
						Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(296)
						Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
						HX_STACK_LINE(296)
						Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
						HX_STACK_LINE(296)
						Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
						HX_STACK_LINE(296)
						Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(296)
						Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
						HX_STACK_LINE(296)
						result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
						HX_STACK_LINE(296)
						result->m[(int)1] = (2.0 * ((xy + zw)));
						HX_STACK_LINE(296)
						result->m[(int)2] = (2.0 * ((zx - yw)));
						HX_STACK_LINE(296)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)4] = (2.0 * ((xy - zw)));
						HX_STACK_LINE(296)
						result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
						HX_STACK_LINE(296)
						result->m[(int)6] = (2.0 * ((yz + xw)));
						HX_STACK_LINE(296)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)8] = (2.0 * ((zx + yw)));
						HX_STACK_LINE(296)
						result->m[(int)9] = (2.0 * ((yz - xw)));
						HX_STACK_LINE(296)
						result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
						HX_STACK_LINE(296)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(296)
						result;
					}
				}
				HX_STACK_LINE(296)
				this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
			}
			HX_STACK_LINE(296)
			if ((this->infiniteDistance)){
				HX_STACK_LINE(296)
				::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						result->m[(int)0] = 1.0;
						HX_STACK_LINE(296)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)5] = 1.0;
						HX_STACK_LINE(296)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)10] = 1.0;
						HX_STACK_LINE(296)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)12] = (this->position->x + camera->position->x);
						HX_STACK_LINE(296)
						result->m[(int)13] = (this->position->y + camera->position->y);
						HX_STACK_LINE(296)
						result->m[(int)14] = (this->position->z + camera->position->z);
						HX_STACK_LINE(296)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(296)
						result;
					}
				}
			}
			else{
				HX_STACK_LINE(296)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					result->m[(int)0] = 1.0;
					HX_STACK_LINE(296)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(296)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(296)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(296)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(296)
					result->m[(int)5] = 1.0;
					HX_STACK_LINE(296)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(296)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(296)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(296)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(296)
					result->m[(int)10] = 1.0;
					HX_STACK_LINE(296)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(296)
					result->m[(int)12] = this->position->x;
					HX_STACK_LINE(296)
					result->m[(int)13] = this->position->y;
					HX_STACK_LINE(296)
					result->m[(int)14] = this->position->z;
					HX_STACK_LINE(296)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(296)
					result;
				}
			}
			HX_STACK_LINE(296)
			{
				HX_STACK_LINE(296)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(296)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(296)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(296)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(296)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(296)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(296)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(296)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(296)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(296)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(296)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(296)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(296)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(296)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(296)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(296)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(296)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(296)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(296)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(296)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(296)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(296)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(296)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(296)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(296)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(296)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(296)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(296)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(296)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(296)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(296)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(296)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(296)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(296)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(296)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(296)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(296)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(296)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(296)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(296)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(296)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(296)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(296)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(296)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(296)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(296)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(296)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(296)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(296)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(296)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(296)
					result;
				}
			}
			HX_STACK_LINE(296)
			{
				HX_STACK_LINE(296)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(296)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(296)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(296)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(296)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(296)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(296)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(296)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(296)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(296)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(296)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(296)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(296)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(296)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(296)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(296)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(296)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(296)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(296)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(296)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(296)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(296)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(296)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(296)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(296)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(296)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(296)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(296)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(296)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(296)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(296)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(296)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(296)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(296)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(296)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(296)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(296)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(296)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(296)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(296)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(296)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(296)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(296)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(296)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(296)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(296)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(296)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(296)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(296)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(296)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(296)
					result;
				}
			}
			HX_STACK_LINE(296)
			if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
				HX_STACK_LINE(296)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(296)
					localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
				}
				HX_STACK_LINE(296)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(296)
					zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
				}
				HX_STACK_LINE(296)
				if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(296)
						hx::AddEq(localPosition->x,otherVector->x);
						HX_STACK_LINE(296)
						hx::AddEq(localPosition->y,otherVector->y);
						HX_STACK_LINE(296)
						hx::AddEq(localPosition->z,otherVector->z);
					}
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(296)
						{
							HX_STACK_LINE(296)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(296)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(296)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(296)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(296)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(296)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(296)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(296)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(296)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(296)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(296)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(296)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(296)
							result->m[(int)12] = localPosition->x;
							HX_STACK_LINE(296)
							result->m[(int)13] = localPosition->y;
							HX_STACK_LINE(296)
							result->m[(int)14] = localPosition->z;
							HX_STACK_LINE(296)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(296)
							result;
						}
					}
				}
				HX_STACK_LINE(296)
				if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
					HX_STACK_LINE(296)
					zero = this->_scene->activeCamera->position;
				}
				else{
					HX_STACK_LINE(296)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
						HX_STACK_LINE(296)
						zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
					HX_STACK_LINE(296)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
						HX_STACK_LINE(296)
						zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
					HX_STACK_LINE(296)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
						HX_STACK_LINE(296)
						zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
				}
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						zAxis->x = (zero->x - localPosition->x);
						HX_STACK_LINE(296)
						zAxis->y = (zero->y - localPosition->y);
						HX_STACK_LINE(296)
						zAxis->z = (zero->z - localPosition->z);
					}
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(296)
						if (((len != (int)0))){
							HX_STACK_LINE(296)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(296)
							hx::MultEq(zAxis->x,num);
							HX_STACK_LINE(296)
							hx::MultEq(zAxis->y,num);
							HX_STACK_LINE(296)
							hx::MultEq(zAxis->z,num);
						}
					}
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
						HX_STACK_LINE(296)
						xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
						HX_STACK_LINE(296)
						xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
					}
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(296)
						if (((len != (int)0))){
							HX_STACK_LINE(296)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(296)
							hx::MultEq(xAxis->x,num);
							HX_STACK_LINE(296)
							hx::MultEq(xAxis->y,num);
							HX_STACK_LINE(296)
							hx::MultEq(xAxis->z,num);
						}
					}
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
						HX_STACK_LINE(296)
						yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
						HX_STACK_LINE(296)
						yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
					}
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(296)
						if (((len != (int)0))){
							HX_STACK_LINE(296)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(296)
							hx::MultEq(yAxis->x,num);
							HX_STACK_LINE(296)
							hx::MultEq(yAxis->y,num);
							HX_STACK_LINE(296)
							hx::MultEq(yAxis->z,num);
						}
					}
					HX_STACK_LINE(296)
					Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
					HX_STACK_LINE(296)
					Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
					HX_STACK_LINE(296)
					Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						result->m[(int)0] = xAxis->x;
						HX_STACK_LINE(296)
						result->m[(int)1] = yAxis->x;
						HX_STACK_LINE(296)
						result->m[(int)2] = zAxis->x;
						HX_STACK_LINE(296)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)4] = xAxis->y;
						HX_STACK_LINE(296)
						result->m[(int)5] = yAxis->y;
						HX_STACK_LINE(296)
						result->m[(int)6] = zAxis->y;
						HX_STACK_LINE(296)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)8] = xAxis->z;
						HX_STACK_LINE(296)
						result->m[(int)9] = yAxis->z;
						HX_STACK_LINE(296)
						result->m[(int)10] = zAxis->z;
						HX_STACK_LINE(296)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(296)
						result->m[(int)12] = ex;
						HX_STACK_LINE(296)
						result->m[(int)13] = ey;
						HX_STACK_LINE(296)
						result->m[(int)14] = ez;
						HX_STACK_LINE(296)
						result->m[(int)15] = (int)1;
						HX_STACK_LINE(296)
						result;
					}
				}
				HX_STACK_LINE(296)
				this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localBillboard;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
						HX_STACK_LINE(296)
						Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
						HX_STACK_LINE(296)
						Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
						HX_STACK_LINE(296)
						Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
						HX_STACK_LINE(296)
						Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
						HX_STACK_LINE(296)
						Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
						HX_STACK_LINE(296)
						Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
						HX_STACK_LINE(296)
						Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
						HX_STACK_LINE(296)
						Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
						HX_STACK_LINE(296)
						Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
						HX_STACK_LINE(296)
						Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
						HX_STACK_LINE(296)
						Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
						HX_STACK_LINE(296)
						Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
						HX_STACK_LINE(296)
						Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
						HX_STACK_LINE(296)
						Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
						HX_STACK_LINE(296)
						Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
						HX_STACK_LINE(296)
						Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
						HX_STACK_LINE(296)
						Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
						HX_STACK_LINE(296)
						Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
						HX_STACK_LINE(296)
						Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
						HX_STACK_LINE(296)
						Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
						HX_STACK_LINE(296)
						Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
						HX_STACK_LINE(296)
						Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
						HX_STACK_LINE(296)
						Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
						HX_STACK_LINE(296)
						Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
						HX_STACK_LINE(296)
						Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
						HX_STACK_LINE(296)
						Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
						HX_STACK_LINE(296)
						Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
						HX_STACK_LINE(296)
						Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
						HX_STACK_LINE(296)
						Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
						HX_STACK_LINE(296)
						Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
						HX_STACK_LINE(296)
						Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
						HX_STACK_LINE(296)
						Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
						HX_STACK_LINE(296)
						Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
						HX_STACK_LINE(296)
						Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
						HX_STACK_LINE(296)
						Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
						HX_STACK_LINE(296)
						Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
						HX_STACK_LINE(296)
						Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
						HX_STACK_LINE(296)
						Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
						HX_STACK_LINE(296)
						_this->m[(int)0] = (l23 * l27);
						HX_STACK_LINE(296)
						_this->m[(int)4] = (l24 * l27);
						HX_STACK_LINE(296)
						_this->m[(int)8] = (l25 * l27);
						HX_STACK_LINE(296)
						_this->m[(int)12] = (l26 * l27);
						HX_STACK_LINE(296)
						_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
						HX_STACK_LINE(296)
						_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
						HX_STACK_LINE(296)
						_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
						HX_STACK_LINE(296)
						_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
						HX_STACK_LINE(296)
						_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
						HX_STACK_LINE(296)
						_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
						HX_STACK_LINE(296)
						_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
						HX_STACK_LINE(296)
						_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
						HX_STACK_LINE(296)
						_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
						HX_STACK_LINE(296)
						_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
						HX_STACK_LINE(296)
						_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
						HX_STACK_LINE(296)
						_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
					}
				}
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(296)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(296)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(296)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(296)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(296)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(296)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(296)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(296)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(296)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(296)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(296)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(296)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(296)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(296)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(296)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(296)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(296)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(296)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(296)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(296)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(296)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(296)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(296)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(296)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(296)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(296)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(296)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(296)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(296)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(296)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(296)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(296)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(296)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(296)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(296)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(296)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(296)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(296)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(296)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(296)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(296)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(296)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(296)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(296)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(296)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(296)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(296)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(296)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(296)
						result;
					}
				}
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(296)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(296)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(296)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(296)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(296)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(296)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(296)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(296)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(296)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(296)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(296)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(296)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(296)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(296)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(296)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(296)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(296)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(296)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(296)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(296)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(296)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(296)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(296)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(296)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(296)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(296)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(296)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(296)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(296)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(296)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(296)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(296)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(296)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(296)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(296)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(296)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(296)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(296)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(296)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(296)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(296)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(296)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(296)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(296)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(296)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(296)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(296)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(296)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(296)
						result;
					}
				}
			}
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",296,0x2cff64c0)
					{
						HX_STACK_LINE(296)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _g3 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(296)
						return (_g3 != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(296)
			if (((  (((  (((this->parent != null()))) ? bool(_Function_3_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(296)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(296)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(296)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(296)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(296)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(296)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(296)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(296)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(296)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(296)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(296)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(296)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(296)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(296)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(296)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(296)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(296)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(296)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(296)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(296)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(296)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(296)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(296)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(296)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(296)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(296)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(296)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(296)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(296)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(296)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(296)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(296)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(296)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(296)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(296)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(296)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(296)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(296)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(296)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(296)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(296)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(296)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(296)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(296)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(296)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(296)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(296)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(296)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(296)
						result;
					}
				}
				HX_STACK_LINE(296)
				::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localWorld;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(296)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(296)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(296)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(296)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(296)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(296)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(296)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(296)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(296)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(296)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(296)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(296)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(296)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(296)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(296)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(296)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(296)
						Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(296)
						Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(296)
						Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(296)
						Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(296)
						Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(296)
						Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(296)
						Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(296)
						Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(296)
						Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(296)
						Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(296)
						Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(296)
						Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(296)
						Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(296)
						Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(296)
						Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(296)
						Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(296)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(296)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(296)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(296)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(296)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(296)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(296)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(296)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(296)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(296)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(296)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(296)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(296)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(296)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(296)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(296)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(296)
						result;
					}
				}
			}
			else{
				HX_STACK_LINE(296)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(296)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(296)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(296)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(296)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(296)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(296)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(296)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(296)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(296)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(296)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(296)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(296)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(296)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(296)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(296)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(296)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(296)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(296)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(296)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(296)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(296)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(296)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(296)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(296)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(296)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(296)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(296)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(296)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(296)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(296)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(296)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(296)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(296)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(296)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(296)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(296)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(296)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(296)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(296)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(296)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(296)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(296)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(296)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(296)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(296)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(296)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(296)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(296)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(296)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(296)
					result;
				}
			}
			HX_STACK_LINE(296)
			if (((this->_boundingInfo != null()))){
				HX_STACK_LINE(296)
				Float _g4 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(296)
				this->_scaleFactor = _g4;
				HX_STACK_LINE(296)
				Float _g5 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(296)
				this->_scaleFactor = _g5;
				struct _Function_4_1{
					inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",296,0x2cff64c0)
						{
							HX_STACK_LINE(296)
							Dynamic _g6 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(296)
							return (_g6 != null());
						}
						return null();
					}
				};
				HX_STACK_LINE(296)
				if (((  (((this->parent != null()))) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(296)
					Dynamic _g7 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(296)
					Float _g8 = (this->_scaleFactor * _g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(296)
					this->_scaleFactor = _g8;
				}
				HX_STACK_LINE(296)
				this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(296)
					int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(296)
					while((true)){
						HX_STACK_LINE(296)
						if ((!(((_g11 < _g))))){
							HX_STACK_LINE(296)
							break;
						}
						HX_STACK_LINE(296)
						int subIndex = (_g11)++;		HX_STACK_VAR(subIndex,"subIndex");
						HX_STACK_LINE(296)
						::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
						HX_STACK_LINE(296)
						subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
					}
				}
			}
			HX_STACK_LINE(296)
			{
				HX_STACK_LINE(296)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_absolutePosition;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(296)
				_this->x = this->_worldMatrix->m->__get((int)12);
				HX_STACK_LINE(296)
				_this->y = this->_worldMatrix->m->__get((int)13);
				HX_STACK_LINE(296)
				_this->z = this->_worldMatrix->m->__get((int)14);
			}
			HX_STACK_LINE(296)
			ret = this->_worldMatrix;
		}
		HX_STACK_LINE(296)
		ret;
	}
	HX_STACK_LINE(297)
	return this->_absolutePosition;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getAbsolutePosition,return )

Void AbstractMesh_obj::setAbsolutePosition( Dynamic absolutePosition){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","setAbsolutePosition",0xe3cf9152,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.setAbsolutePosition","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",301,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(absolutePosition,"absolutePosition")
		HX_STACK_LINE(302)
		if (((absolutePosition == null()))){
			HX_STACK_LINE(303)
			return null();
		}
		HX_STACK_LINE(306)
		Float absolutePositionX = (int)0;		HX_STACK_VAR(absolutePositionX,"absolutePositionX");
		HX_STACK_LINE(307)
		Float absolutePositionY = (int)0;		HX_STACK_VAR(absolutePositionY,"absolutePositionY");
		HX_STACK_LINE(308)
		Float absolutePositionZ = (int)0;		HX_STACK_VAR(absolutePositionZ,"absolutePositionZ");
		HX_STACK_LINE(310)
		if ((::Std_obj::is(absolutePosition,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(311)
			if (((absolutePosition->__Field(HX_CSTRING("length"),true) < (int)3))){
				HX_STACK_LINE(312)
				return null();
			}
			HX_STACK_LINE(314)
			absolutePositionX = absolutePosition->__GetItem((int)0);
			HX_STACK_LINE(315)
			absolutePositionY = absolutePosition->__GetItem((int)1);
			HX_STACK_LINE(316)
			absolutePositionZ = absolutePosition->__GetItem((int)2);
		}
		else{
			HX_STACK_LINE(318)
			absolutePositionX = absolutePosition->__Field(HX_CSTRING("x"),true);
			HX_STACK_LINE(319)
			absolutePositionY = absolutePosition->__Field(HX_CSTRING("y"),true);
			HX_STACK_LINE(320)
			absolutePositionZ = absolutePosition->__Field(HX_CSTRING("z"),true);
		}
		HX_STACK_LINE(329)
		::com::gamestudiohx::babylonhx::tools::math::Matrix worldMatrix;		HX_STACK_VAR(worldMatrix,"worldMatrix");
		HX_STACK_LINE(329)
		{
			HX_STACK_LINE(329)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(329)
			{
				HX_STACK_LINE(329)
				int _g = this->_scene->getRenderId();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(329)
				if (((this->_currentRenderId != _g))){
					HX_STACK_LINE(329)
					bool force = false;		HX_STACK_VAR(force,"force");
					HX_STACK_LINE(329)
					::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
					struct _Function_4_1{
						inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",329,0x2cff64c0)
							{
								HX_STACK_LINE(329)
								int _g1 = __this->_scene->getRenderId();		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(329)
								return (  ((!(((__this->_currentRenderId == _g1))))) ? bool(__this->isSynchronized(null())) : bool(true) );
							}
							return null();
						}
					};
					HX_STACK_LINE(329)
					if (((  ((!(force))) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
						HX_STACK_LINE(329)
						this->_childrenFlag = (int)0;
					}
					else{
						HX_STACK_LINE(329)
						this->_childrenFlag = (int)1;
						HX_STACK_LINE(329)
						this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
						HX_STACK_LINE(329)
						this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
						HX_STACK_LINE(329)
						this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
						HX_STACK_LINE(329)
						int _g2 = this->_scene->getRenderId();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(329)
						this->_currentRenderId = _g2;
						HX_STACK_LINE(329)
						{
							HX_STACK_LINE(329)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(329)
							result->m[(int)0] = this->scaling->x;
							HX_STACK_LINE(329)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(329)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(329)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(329)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(329)
							result->m[(int)5] = this->scaling->y;
							HX_STACK_LINE(329)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(329)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(329)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(329)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(329)
							result->m[(int)10] = this->scaling->z;
							HX_STACK_LINE(329)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(329)
							result->m[(int)12] = (int)0;
							HX_STACK_LINE(329)
							result->m[(int)13] = (int)0;
							HX_STACK_LINE(329)
							result->m[(int)14] = (int)0;
							HX_STACK_LINE(329)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(329)
							result;
						}
						HX_STACK_LINE(329)
						if (((this->rotationQuaternion != null()))){
							HX_STACK_LINE(329)
							{
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Quaternion _this1 = this->rotationQuaternion;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(329)
								Float xx = (_this1->x * _this1->x);		HX_STACK_VAR(xx,"xx");
								HX_STACK_LINE(329)
								Float yy = (_this1->y * _this1->y);		HX_STACK_VAR(yy,"yy");
								HX_STACK_LINE(329)
								Float zz = (_this1->z * _this1->z);		HX_STACK_VAR(zz,"zz");
								HX_STACK_LINE(329)
								Float xy = (_this1->x * _this1->y);		HX_STACK_VAR(xy,"xy");
								HX_STACK_LINE(329)
								Float zw = (_this1->z * _this1->w);		HX_STACK_VAR(zw,"zw");
								HX_STACK_LINE(329)
								Float zx = (_this1->z * _this1->x);		HX_STACK_VAR(zx,"zx");
								HX_STACK_LINE(329)
								Float yw = (_this1->y * _this1->w);		HX_STACK_VAR(yw,"yw");
								HX_STACK_LINE(329)
								Float yz = (_this1->y * _this1->z);		HX_STACK_VAR(yz,"yz");
								HX_STACK_LINE(329)
								Float xw = (_this1->x * _this1->w);		HX_STACK_VAR(xw,"xw");
								HX_STACK_LINE(329)
								result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
								HX_STACK_LINE(329)
								result->m[(int)1] = (2.0 * ((xy + zw)));
								HX_STACK_LINE(329)
								result->m[(int)2] = (2.0 * ((zx - yw)));
								HX_STACK_LINE(329)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(329)
								result->m[(int)4] = (2.0 * ((xy - zw)));
								HX_STACK_LINE(329)
								result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
								HX_STACK_LINE(329)
								result->m[(int)6] = (2.0 * ((yz + xw)));
								HX_STACK_LINE(329)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(329)
								result->m[(int)8] = (2.0 * ((zx + yw)));
								HX_STACK_LINE(329)
								result->m[(int)9] = (2.0 * ((yz - xw)));
								HX_STACK_LINE(329)
								result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
								HX_STACK_LINE(329)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(329)
								result->m[(int)12] = (int)0;
								HX_STACK_LINE(329)
								result->m[(int)13] = (int)0;
								HX_STACK_LINE(329)
								result->m[(int)14] = (int)0;
								HX_STACK_LINE(329)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(329)
								result;
							}
							HX_STACK_LINE(329)
							this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
						}
						else{
							HX_STACK_LINE(329)
							{
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Quaternion _g3;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(329)
								{
									HX_STACK_LINE(329)
									Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
									HX_STACK_LINE(329)
									Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
									HX_STACK_LINE(329)
									Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
									HX_STACK_LINE(329)
									Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
									HX_STACK_LINE(329)
									Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
									HX_STACK_LINE(329)
									Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
									HX_STACK_LINE(329)
									Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
									HX_STACK_LINE(329)
									Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
									HX_STACK_LINE(329)
									Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
									HX_STACK_LINE(329)
									tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
									HX_STACK_LINE(329)
									tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
									HX_STACK_LINE(329)
									tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
									HX_STACK_LINE(329)
									tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
									HX_STACK_LINE(329)
									_g3 = tempQuaternion;
								}
								HX_STACK_LINE(329)
								tempQuaternion = _g3;
								HX_STACK_LINE(329)
								{
									HX_STACK_LINE(329)
									Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
									HX_STACK_LINE(329)
									Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
									HX_STACK_LINE(329)
									Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
									HX_STACK_LINE(329)
									Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
									HX_STACK_LINE(329)
									Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
									HX_STACK_LINE(329)
									Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
									HX_STACK_LINE(329)
									Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
									HX_STACK_LINE(329)
									Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
									HX_STACK_LINE(329)
									Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
									HX_STACK_LINE(329)
									result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
									HX_STACK_LINE(329)
									result->m[(int)1] = (2.0 * ((xy + zw)));
									HX_STACK_LINE(329)
									result->m[(int)2] = (2.0 * ((zx - yw)));
									HX_STACK_LINE(329)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)4] = (2.0 * ((xy - zw)));
									HX_STACK_LINE(329)
									result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
									HX_STACK_LINE(329)
									result->m[(int)6] = (2.0 * ((yz + xw)));
									HX_STACK_LINE(329)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)8] = (2.0 * ((zx + yw)));
									HX_STACK_LINE(329)
									result->m[(int)9] = (2.0 * ((yz - xw)));
									HX_STACK_LINE(329)
									result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
									HX_STACK_LINE(329)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)12] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)13] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)14] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(329)
									result;
								}
							}
							HX_STACK_LINE(329)
							this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
						}
						HX_STACK_LINE(329)
						if ((this->infiniteDistance)){
							HX_STACK_LINE(329)
							::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
							HX_STACK_LINE(329)
							{
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(329)
								{
									HX_STACK_LINE(329)
									result->m[(int)0] = 1.0;
									HX_STACK_LINE(329)
									result->m[(int)1] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)2] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)4] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)5] = 1.0;
									HX_STACK_LINE(329)
									result->m[(int)6] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)8] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)9] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)10] = 1.0;
									HX_STACK_LINE(329)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)12] = (this->position->x + camera->position->x);
									HX_STACK_LINE(329)
									result->m[(int)13] = (this->position->y + camera->position->y);
									HX_STACK_LINE(329)
									result->m[(int)14] = (this->position->z + camera->position->z);
									HX_STACK_LINE(329)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(329)
									result;
								}
							}
						}
						else{
							HX_STACK_LINE(329)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(329)
							{
								HX_STACK_LINE(329)
								result->m[(int)0] = 1.0;
								HX_STACK_LINE(329)
								result->m[(int)1] = (int)0;
								HX_STACK_LINE(329)
								result->m[(int)2] = (int)0;
								HX_STACK_LINE(329)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(329)
								result->m[(int)4] = (int)0;
								HX_STACK_LINE(329)
								result->m[(int)5] = 1.0;
								HX_STACK_LINE(329)
								result->m[(int)6] = (int)0;
								HX_STACK_LINE(329)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(329)
								result->m[(int)8] = (int)0;
								HX_STACK_LINE(329)
								result->m[(int)9] = (int)0;
								HX_STACK_LINE(329)
								result->m[(int)10] = 1.0;
								HX_STACK_LINE(329)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(329)
								result->m[(int)12] = this->position->x;
								HX_STACK_LINE(329)
								result->m[(int)13] = this->position->y;
								HX_STACK_LINE(329)
								result->m[(int)14] = this->position->z;
								HX_STACK_LINE(329)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(329)
								result;
							}
						}
						HX_STACK_LINE(329)
						{
							HX_STACK_LINE(329)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_pivotMatrix;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(329)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(329)
							{
								HX_STACK_LINE(329)
								Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(329)
								Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(329)
								Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(329)
								Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(329)
								Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(329)
								Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(329)
								Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(329)
								Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(329)
								Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(329)
								Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(329)
								Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(329)
								Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(329)
								Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(329)
								Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(329)
								Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(329)
								Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(329)
								Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(329)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(329)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(329)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(329)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(329)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(329)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(329)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(329)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(329)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(329)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(329)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(329)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(329)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(329)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(329)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(329)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(329)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(329)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(329)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(329)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(329)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(329)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(329)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(329)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(329)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(329)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(329)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(329)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(329)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(329)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(329)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(329)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(329)
								result;
							}
						}
						HX_STACK_LINE(329)
						{
							HX_STACK_LINE(329)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_localPivotScaling;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(329)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(329)
							{
								HX_STACK_LINE(329)
								Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(329)
								Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(329)
								Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(329)
								Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(329)
								Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(329)
								Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(329)
								Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(329)
								Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(329)
								Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(329)
								Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(329)
								Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(329)
								Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(329)
								Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(329)
								Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(329)
								Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(329)
								Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(329)
								Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(329)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(329)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(329)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(329)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(329)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(329)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(329)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(329)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(329)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(329)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(329)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(329)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(329)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(329)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(329)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(329)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(329)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(329)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(329)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(329)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(329)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(329)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(329)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(329)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(329)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(329)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(329)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(329)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(329)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(329)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(329)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(329)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(329)
								result;
							}
						}
						HX_STACK_LINE(329)
						if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
							HX_STACK_LINE(329)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
							HX_STACK_LINE(329)
							{
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = this->position;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(329)
								localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this1->x,_this1->y,_this1->z);
							}
							HX_STACK_LINE(329)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
							HX_STACK_LINE(329)
							{
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = this->_scene->activeCamera->position;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(329)
								zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this1->x,_this1->y,_this1->z);
							}
							HX_STACK_LINE(329)
							if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
								HX_STACK_LINE(329)
								{
									HX_STACK_LINE(329)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
									HX_STACK_LINE(329)
									hx::AddEq(localPosition->x,otherVector->x);
									HX_STACK_LINE(329)
									hx::AddEq(localPosition->y,otherVector->y);
									HX_STACK_LINE(329)
									hx::AddEq(localPosition->z,otherVector->z);
								}
								HX_STACK_LINE(329)
								{
									HX_STACK_LINE(329)
									::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(329)
									{
										HX_STACK_LINE(329)
										result->m[(int)0] = 1.0;
										HX_STACK_LINE(329)
										result->m[(int)1] = (int)0;
										HX_STACK_LINE(329)
										result->m[(int)2] = (int)0;
										HX_STACK_LINE(329)
										result->m[(int)3] = (int)0;
										HX_STACK_LINE(329)
										result->m[(int)4] = (int)0;
										HX_STACK_LINE(329)
										result->m[(int)5] = 1.0;
										HX_STACK_LINE(329)
										result->m[(int)6] = (int)0;
										HX_STACK_LINE(329)
										result->m[(int)7] = (int)0;
										HX_STACK_LINE(329)
										result->m[(int)8] = (int)0;
										HX_STACK_LINE(329)
										result->m[(int)9] = (int)0;
										HX_STACK_LINE(329)
										result->m[(int)10] = 1.0;
										HX_STACK_LINE(329)
										result->m[(int)11] = (int)0;
										HX_STACK_LINE(329)
										result->m[(int)12] = localPosition->x;
										HX_STACK_LINE(329)
										result->m[(int)13] = localPosition->y;
										HX_STACK_LINE(329)
										result->m[(int)14] = localPosition->z;
										HX_STACK_LINE(329)
										result->m[(int)15] = 1.0;
										HX_STACK_LINE(329)
										result;
									}
								}
							}
							HX_STACK_LINE(329)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
								HX_STACK_LINE(329)
								zero = this->_scene->activeCamera->position;
							}
							else{
								HX_STACK_LINE(329)
								if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
									HX_STACK_LINE(329)
									zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
								}
								HX_STACK_LINE(329)
								if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
									HX_STACK_LINE(329)
									zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
								}
								HX_STACK_LINE(329)
								if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
									HX_STACK_LINE(329)
									zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
								}
							}
							HX_STACK_LINE(329)
							{
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
								HX_STACK_LINE(329)
								{
									HX_STACK_LINE(329)
									zAxis->x = (zero->x - localPosition->x);
									HX_STACK_LINE(329)
									zAxis->y = (zero->y - localPosition->y);
									HX_STACK_LINE(329)
									zAxis->z = (zero->z - localPosition->z);
								}
								HX_STACK_LINE(329)
								{
									HX_STACK_LINE(329)
									Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(329)
									if (((len != (int)0))){
										HX_STACK_LINE(329)
										Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
										HX_STACK_LINE(329)
										hx::MultEq(zAxis->x,num);
										HX_STACK_LINE(329)
										hx::MultEq(zAxis->y,num);
										HX_STACK_LINE(329)
										hx::MultEq(zAxis->z,num);
									}
								}
								HX_STACK_LINE(329)
								{
									HX_STACK_LINE(329)
									xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
									HX_STACK_LINE(329)
									xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
									HX_STACK_LINE(329)
									xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
								}
								HX_STACK_LINE(329)
								{
									HX_STACK_LINE(329)
									Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(329)
									if (((len != (int)0))){
										HX_STACK_LINE(329)
										Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
										HX_STACK_LINE(329)
										hx::MultEq(xAxis->x,num);
										HX_STACK_LINE(329)
										hx::MultEq(xAxis->y,num);
										HX_STACK_LINE(329)
										hx::MultEq(xAxis->z,num);
									}
								}
								HX_STACK_LINE(329)
								{
									HX_STACK_LINE(329)
									yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
									HX_STACK_LINE(329)
									yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
									HX_STACK_LINE(329)
									yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
								}
								HX_STACK_LINE(329)
								{
									HX_STACK_LINE(329)
									Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(329)
									if (((len != (int)0))){
										HX_STACK_LINE(329)
										Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
										HX_STACK_LINE(329)
										hx::MultEq(yAxis->x,num);
										HX_STACK_LINE(329)
										hx::MultEq(yAxis->y,num);
										HX_STACK_LINE(329)
										hx::MultEq(yAxis->z,num);
									}
								}
								HX_STACK_LINE(329)
								Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
								HX_STACK_LINE(329)
								Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
								HX_STACK_LINE(329)
								Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
								HX_STACK_LINE(329)
								{
									HX_STACK_LINE(329)
									result->m[(int)0] = xAxis->x;
									HX_STACK_LINE(329)
									result->m[(int)1] = yAxis->x;
									HX_STACK_LINE(329)
									result->m[(int)2] = zAxis->x;
									HX_STACK_LINE(329)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)4] = xAxis->y;
									HX_STACK_LINE(329)
									result->m[(int)5] = yAxis->y;
									HX_STACK_LINE(329)
									result->m[(int)6] = zAxis->y;
									HX_STACK_LINE(329)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)8] = xAxis->z;
									HX_STACK_LINE(329)
									result->m[(int)9] = yAxis->z;
									HX_STACK_LINE(329)
									result->m[(int)10] = zAxis->z;
									HX_STACK_LINE(329)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(329)
									result->m[(int)12] = ex;
									HX_STACK_LINE(329)
									result->m[(int)13] = ey;
									HX_STACK_LINE(329)
									result->m[(int)14] = ez;
									HX_STACK_LINE(329)
									result->m[(int)15] = (int)1;
									HX_STACK_LINE(329)
									result;
								}
							}
							HX_STACK_LINE(329)
							this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
							HX_STACK_LINE(329)
							{
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_localBillboard;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(329)
								{
									HX_STACK_LINE(329)
									Float l1 = _this1->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
									HX_STACK_LINE(329)
									Float l2 = _this1->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
									HX_STACK_LINE(329)
									Float l3 = _this1->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
									HX_STACK_LINE(329)
									Float l4 = _this1->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
									HX_STACK_LINE(329)
									Float l5 = _this1->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
									HX_STACK_LINE(329)
									Float l6 = _this1->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
									HX_STACK_LINE(329)
									Float l7 = _this1->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
									HX_STACK_LINE(329)
									Float l8 = _this1->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
									HX_STACK_LINE(329)
									Float l9 = _this1->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
									HX_STACK_LINE(329)
									Float l10 = _this1->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
									HX_STACK_LINE(329)
									Float l11 = _this1->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
									HX_STACK_LINE(329)
									Float l12 = _this1->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
									HX_STACK_LINE(329)
									Float l13 = _this1->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
									HX_STACK_LINE(329)
									Float l14 = _this1->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
									HX_STACK_LINE(329)
									Float l15 = _this1->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
									HX_STACK_LINE(329)
									Float l16 = _this1->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
									HX_STACK_LINE(329)
									Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
									HX_STACK_LINE(329)
									Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
									HX_STACK_LINE(329)
									Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
									HX_STACK_LINE(329)
									Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
									HX_STACK_LINE(329)
									Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
									HX_STACK_LINE(329)
									Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
									HX_STACK_LINE(329)
									Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
									HX_STACK_LINE(329)
									Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
									HX_STACK_LINE(329)
									Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
									HX_STACK_LINE(329)
									Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
									HX_STACK_LINE(329)
									Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
									HX_STACK_LINE(329)
									Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
									HX_STACK_LINE(329)
									Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
									HX_STACK_LINE(329)
									Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
									HX_STACK_LINE(329)
									Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
									HX_STACK_LINE(329)
									Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
									HX_STACK_LINE(329)
									Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
									HX_STACK_LINE(329)
									Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
									HX_STACK_LINE(329)
									Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
									HX_STACK_LINE(329)
									Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
									HX_STACK_LINE(329)
									Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
									HX_STACK_LINE(329)
									Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
									HX_STACK_LINE(329)
									Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
									HX_STACK_LINE(329)
									_this1->m[(int)0] = (l23 * l27);
									HX_STACK_LINE(329)
									_this1->m[(int)4] = (l24 * l27);
									HX_STACK_LINE(329)
									_this1->m[(int)8] = (l25 * l27);
									HX_STACK_LINE(329)
									_this1->m[(int)12] = (l26 * l27);
									HX_STACK_LINE(329)
									_this1->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
									HX_STACK_LINE(329)
									_this1->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
									HX_STACK_LINE(329)
									_this1->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
									HX_STACK_LINE(329)
									_this1->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
									HX_STACK_LINE(329)
									_this1->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
									HX_STACK_LINE(329)
									_this1->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
									HX_STACK_LINE(329)
									_this1->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
									HX_STACK_LINE(329)
									_this1->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
									HX_STACK_LINE(329)
									_this1->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
									HX_STACK_LINE(329)
									_this1->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
									HX_STACK_LINE(329)
									_this1->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
									HX_STACK_LINE(329)
									_this1->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
								}
							}
							HX_STACK_LINE(329)
							{
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_localPivotScalingRotation;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(329)
								{
									HX_STACK_LINE(329)
									Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(329)
									Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
									HX_STACK_LINE(329)
									Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
									HX_STACK_LINE(329)
									Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
									HX_STACK_LINE(329)
									Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
									HX_STACK_LINE(329)
									Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
									HX_STACK_LINE(329)
									Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
									HX_STACK_LINE(329)
									Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
									HX_STACK_LINE(329)
									Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
									HX_STACK_LINE(329)
									Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
									HX_STACK_LINE(329)
									Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
									HX_STACK_LINE(329)
									Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
									HX_STACK_LINE(329)
									Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
									HX_STACK_LINE(329)
									Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
									HX_STACK_LINE(329)
									Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
									HX_STACK_LINE(329)
									Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
									HX_STACK_LINE(329)
									Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
									HX_STACK_LINE(329)
									Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
									HX_STACK_LINE(329)
									Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
									HX_STACK_LINE(329)
									Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
									HX_STACK_LINE(329)
									Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
									HX_STACK_LINE(329)
									Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
									HX_STACK_LINE(329)
									Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
									HX_STACK_LINE(329)
									Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
									HX_STACK_LINE(329)
									Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
									HX_STACK_LINE(329)
									Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
									HX_STACK_LINE(329)
									Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
									HX_STACK_LINE(329)
									Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
									HX_STACK_LINE(329)
									Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
									HX_STACK_LINE(329)
									Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
									HX_STACK_LINE(329)
									Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
									HX_STACK_LINE(329)
									Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
									HX_STACK_LINE(329)
									Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
									HX_STACK_LINE(329)
									result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
									HX_STACK_LINE(329)
									result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
									HX_STACK_LINE(329)
									result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
									HX_STACK_LINE(329)
									result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
									HX_STACK_LINE(329)
									result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
									HX_STACK_LINE(329)
									result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
									HX_STACK_LINE(329)
									result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
									HX_STACK_LINE(329)
									result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
									HX_STACK_LINE(329)
									result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
									HX_STACK_LINE(329)
									result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
									HX_STACK_LINE(329)
									result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
									HX_STACK_LINE(329)
									result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
									HX_STACK_LINE(329)
									result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
									HX_STACK_LINE(329)
									result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
									HX_STACK_LINE(329)
									result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
									HX_STACK_LINE(329)
									result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
									HX_STACK_LINE(329)
									result;
								}
							}
							HX_STACK_LINE(329)
							{
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_rotateYByPI;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(329)
								{
									HX_STACK_LINE(329)
									Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(329)
									Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
									HX_STACK_LINE(329)
									Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
									HX_STACK_LINE(329)
									Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
									HX_STACK_LINE(329)
									Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
									HX_STACK_LINE(329)
									Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
									HX_STACK_LINE(329)
									Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
									HX_STACK_LINE(329)
									Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
									HX_STACK_LINE(329)
									Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
									HX_STACK_LINE(329)
									Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
									HX_STACK_LINE(329)
									Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
									HX_STACK_LINE(329)
									Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
									HX_STACK_LINE(329)
									Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
									HX_STACK_LINE(329)
									Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
									HX_STACK_LINE(329)
									Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
									HX_STACK_LINE(329)
									Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
									HX_STACK_LINE(329)
									Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
									HX_STACK_LINE(329)
									Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
									HX_STACK_LINE(329)
									Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
									HX_STACK_LINE(329)
									Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
									HX_STACK_LINE(329)
									Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
									HX_STACK_LINE(329)
									Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
									HX_STACK_LINE(329)
									Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
									HX_STACK_LINE(329)
									Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
									HX_STACK_LINE(329)
									Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
									HX_STACK_LINE(329)
									Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
									HX_STACK_LINE(329)
									Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
									HX_STACK_LINE(329)
									Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
									HX_STACK_LINE(329)
									Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
									HX_STACK_LINE(329)
									Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
									HX_STACK_LINE(329)
									Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
									HX_STACK_LINE(329)
									Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
									HX_STACK_LINE(329)
									Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
									HX_STACK_LINE(329)
									result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
									HX_STACK_LINE(329)
									result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
									HX_STACK_LINE(329)
									result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
									HX_STACK_LINE(329)
									result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
									HX_STACK_LINE(329)
									result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
									HX_STACK_LINE(329)
									result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
									HX_STACK_LINE(329)
									result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
									HX_STACK_LINE(329)
									result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
									HX_STACK_LINE(329)
									result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
									HX_STACK_LINE(329)
									result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
									HX_STACK_LINE(329)
									result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
									HX_STACK_LINE(329)
									result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
									HX_STACK_LINE(329)
									result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
									HX_STACK_LINE(329)
									result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
									HX_STACK_LINE(329)
									result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
									HX_STACK_LINE(329)
									result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
									HX_STACK_LINE(329)
									result;
								}
							}
						}
						struct _Function_5_1{
							inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",329,0x2cff64c0)
								{
									HX_STACK_LINE(329)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _g4 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(329)
									return (_g4 != null());
								}
								return null();
							}
						};
						HX_STACK_LINE(329)
						if (((  (((  (((this->parent != null()))) ? bool(_Function_5_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
							HX_STACK_LINE(329)
							{
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_localPivotScalingRotation;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(329)
								{
									HX_STACK_LINE(329)
									Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(329)
									Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
									HX_STACK_LINE(329)
									Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
									HX_STACK_LINE(329)
									Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
									HX_STACK_LINE(329)
									Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
									HX_STACK_LINE(329)
									Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
									HX_STACK_LINE(329)
									Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
									HX_STACK_LINE(329)
									Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
									HX_STACK_LINE(329)
									Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
									HX_STACK_LINE(329)
									Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
									HX_STACK_LINE(329)
									Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
									HX_STACK_LINE(329)
									Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
									HX_STACK_LINE(329)
									Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
									HX_STACK_LINE(329)
									Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
									HX_STACK_LINE(329)
									Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
									HX_STACK_LINE(329)
									Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
									HX_STACK_LINE(329)
									Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
									HX_STACK_LINE(329)
									Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
									HX_STACK_LINE(329)
									Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
									HX_STACK_LINE(329)
									Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
									HX_STACK_LINE(329)
									Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
									HX_STACK_LINE(329)
									Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
									HX_STACK_LINE(329)
									Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
									HX_STACK_LINE(329)
									Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
									HX_STACK_LINE(329)
									Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
									HX_STACK_LINE(329)
									Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
									HX_STACK_LINE(329)
									Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
									HX_STACK_LINE(329)
									Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
									HX_STACK_LINE(329)
									Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
									HX_STACK_LINE(329)
									Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
									HX_STACK_LINE(329)
									Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
									HX_STACK_LINE(329)
									Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
									HX_STACK_LINE(329)
									Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
									HX_STACK_LINE(329)
									result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
									HX_STACK_LINE(329)
									result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
									HX_STACK_LINE(329)
									result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
									HX_STACK_LINE(329)
									result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
									HX_STACK_LINE(329)
									result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
									HX_STACK_LINE(329)
									result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
									HX_STACK_LINE(329)
									result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
									HX_STACK_LINE(329)
									result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
									HX_STACK_LINE(329)
									result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
									HX_STACK_LINE(329)
									result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
									HX_STACK_LINE(329)
									result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
									HX_STACK_LINE(329)
									result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
									HX_STACK_LINE(329)
									result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
									HX_STACK_LINE(329)
									result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
									HX_STACK_LINE(329)
									result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
									HX_STACK_LINE(329)
									result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
									HX_STACK_LINE(329)
									result;
								}
							}
							HX_STACK_LINE(329)
							::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
							HX_STACK_LINE(329)
							{
								HX_STACK_LINE(329)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_localWorld;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(329)
								{
									HX_STACK_LINE(329)
									Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(329)
									Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
									HX_STACK_LINE(329)
									Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
									HX_STACK_LINE(329)
									Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
									HX_STACK_LINE(329)
									Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
									HX_STACK_LINE(329)
									Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
									HX_STACK_LINE(329)
									Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
									HX_STACK_LINE(329)
									Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
									HX_STACK_LINE(329)
									Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
									HX_STACK_LINE(329)
									Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
									HX_STACK_LINE(329)
									Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
									HX_STACK_LINE(329)
									Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
									HX_STACK_LINE(329)
									Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
									HX_STACK_LINE(329)
									Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
									HX_STACK_LINE(329)
									Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
									HX_STACK_LINE(329)
									Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
									HX_STACK_LINE(329)
									Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
									HX_STACK_LINE(329)
									Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
									HX_STACK_LINE(329)
									Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
									HX_STACK_LINE(329)
									Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
									HX_STACK_LINE(329)
									Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
									HX_STACK_LINE(329)
									Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
									HX_STACK_LINE(329)
									Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
									HX_STACK_LINE(329)
									Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
									HX_STACK_LINE(329)
									Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
									HX_STACK_LINE(329)
									Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
									HX_STACK_LINE(329)
									Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
									HX_STACK_LINE(329)
									Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
									HX_STACK_LINE(329)
									Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
									HX_STACK_LINE(329)
									Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
									HX_STACK_LINE(329)
									Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
									HX_STACK_LINE(329)
									Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
									HX_STACK_LINE(329)
									Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
									HX_STACK_LINE(329)
									result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
									HX_STACK_LINE(329)
									result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
									HX_STACK_LINE(329)
									result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
									HX_STACK_LINE(329)
									result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
									HX_STACK_LINE(329)
									result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
									HX_STACK_LINE(329)
									result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
									HX_STACK_LINE(329)
									result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
									HX_STACK_LINE(329)
									result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
									HX_STACK_LINE(329)
									result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
									HX_STACK_LINE(329)
									result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
									HX_STACK_LINE(329)
									result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
									HX_STACK_LINE(329)
									result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
									HX_STACK_LINE(329)
									result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
									HX_STACK_LINE(329)
									result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
									HX_STACK_LINE(329)
									result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
									HX_STACK_LINE(329)
									result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
									HX_STACK_LINE(329)
									result;
								}
							}
						}
						else{
							HX_STACK_LINE(329)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_localPivotScalingRotation;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(329)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(329)
							{
								HX_STACK_LINE(329)
								Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(329)
								Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(329)
								Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(329)
								Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(329)
								Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(329)
								Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(329)
								Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(329)
								Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(329)
								Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(329)
								Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(329)
								Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(329)
								Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(329)
								Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(329)
								Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(329)
								Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(329)
								Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(329)
								Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(329)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(329)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(329)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(329)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(329)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(329)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(329)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(329)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(329)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(329)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(329)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(329)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(329)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(329)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(329)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(329)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(329)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(329)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(329)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(329)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(329)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(329)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(329)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(329)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(329)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(329)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(329)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(329)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(329)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(329)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(329)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(329)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(329)
								result;
							}
						}
						HX_STACK_LINE(329)
						if (((this->_boundingInfo != null()))){
							HX_STACK_LINE(329)
							Float _g5 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(329)
							this->_scaleFactor = _g5;
							HX_STACK_LINE(329)
							Float _g6 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(329)
							this->_scaleFactor = _g6;
							struct _Function_6_1{
								inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",329,0x2cff64c0)
									{
										HX_STACK_LINE(329)
										Dynamic _g7 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
										HX_STACK_LINE(329)
										return (_g7 != null());
									}
									return null();
								}
							};
							HX_STACK_LINE(329)
							if (((  (((this->parent != null()))) ? bool(_Function_6_1::Block(this)) : bool(false) ))){
								HX_STACK_LINE(329)
								Dynamic _g8 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(329)
								Float _g9 = (this->_scaleFactor * _g8);		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(329)
								this->_scaleFactor = _g9;
							}
							HX_STACK_LINE(329)
							this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
							HX_STACK_LINE(329)
							{
								HX_STACK_LINE(329)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(329)
								int _g3 = this->subMeshes->length;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(329)
								while((true)){
									HX_STACK_LINE(329)
									if ((!(((_g1 < _g3))))){
										HX_STACK_LINE(329)
										break;
									}
									HX_STACK_LINE(329)
									int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
									HX_STACK_LINE(329)
									::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
									HX_STACK_LINE(329)
									subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
								}
							}
						}
						HX_STACK_LINE(329)
						{
							HX_STACK_LINE(329)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = this->_absolutePosition;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(329)
							_this1->x = this->_worldMatrix->m->__get((int)12);
							HX_STACK_LINE(329)
							_this1->y = this->_worldMatrix->m->__get((int)13);
							HX_STACK_LINE(329)
							_this1->z = this->_worldMatrix->m->__get((int)14);
						}
						HX_STACK_LINE(329)
						ret = this->_worldMatrix;
					}
					HX_STACK_LINE(329)
					ret;
				}
				HX_STACK_LINE(329)
				_this = this->_worldMatrix;
			}
			HX_STACK_LINE(329)
			{
				HX_STACK_LINE(329)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(329)
				result->m[(int)0] = _this->m->__get((int)0);
				HX_STACK_LINE(329)
				result->m[(int)1] = _this->m->__get((int)1);
				HX_STACK_LINE(329)
				result->m[(int)2] = _this->m->__get((int)2);
				HX_STACK_LINE(329)
				result->m[(int)3] = _this->m->__get((int)3);
				HX_STACK_LINE(329)
				result->m[(int)4] = _this->m->__get((int)4);
				HX_STACK_LINE(329)
				result->m[(int)5] = _this->m->__get((int)5);
				HX_STACK_LINE(329)
				result->m[(int)6] = _this->m->__get((int)6);
				HX_STACK_LINE(329)
				result->m[(int)7] = _this->m->__get((int)7);
				HX_STACK_LINE(329)
				result->m[(int)8] = _this->m->__get((int)8);
				HX_STACK_LINE(329)
				result->m[(int)9] = _this->m->__get((int)9);
				HX_STACK_LINE(329)
				result->m[(int)10] = _this->m->__get((int)10);
				HX_STACK_LINE(329)
				result->m[(int)11] = _this->m->__get((int)11);
				HX_STACK_LINE(329)
				result->m[(int)12] = _this->m->__get((int)12);
				HX_STACK_LINE(329)
				result->m[(int)13] = _this->m->__get((int)13);
				HX_STACK_LINE(329)
				result->m[(int)14] = _this->m->__get((int)14);
				HX_STACK_LINE(329)
				result->m[(int)15] = _this->m->__get((int)15);
				HX_STACK_LINE(329)
				worldMatrix = result;
			}
		}
		HX_STACK_LINE(331)
		worldMatrix->m[(int)12] = absolutePositionX;
		HX_STACK_LINE(332)
		worldMatrix->m[(int)13] = absolutePositionY;
		HX_STACK_LINE(333)
		worldMatrix->m[(int)14] = absolutePositionZ;
		HX_STACK_LINE(335)
		::com::gamestudiohx::babylonhx::tools::math::Matrix invertRotationMatrix;		HX_STACK_VAR(invertRotationMatrix,"invertRotationMatrix");
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localRotation;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(335)
				result->m[(int)0] = _this->m->__get((int)0);
				HX_STACK_LINE(335)
				result->m[(int)1] = _this->m->__get((int)1);
				HX_STACK_LINE(335)
				result->m[(int)2] = _this->m->__get((int)2);
				HX_STACK_LINE(335)
				result->m[(int)3] = _this->m->__get((int)3);
				HX_STACK_LINE(335)
				result->m[(int)4] = _this->m->__get((int)4);
				HX_STACK_LINE(335)
				result->m[(int)5] = _this->m->__get((int)5);
				HX_STACK_LINE(335)
				result->m[(int)6] = _this->m->__get((int)6);
				HX_STACK_LINE(335)
				result->m[(int)7] = _this->m->__get((int)7);
				HX_STACK_LINE(335)
				result->m[(int)8] = _this->m->__get((int)8);
				HX_STACK_LINE(335)
				result->m[(int)9] = _this->m->__get((int)9);
				HX_STACK_LINE(335)
				result->m[(int)10] = _this->m->__get((int)10);
				HX_STACK_LINE(335)
				result->m[(int)11] = _this->m->__get((int)11);
				HX_STACK_LINE(335)
				result->m[(int)12] = _this->m->__get((int)12);
				HX_STACK_LINE(335)
				result->m[(int)13] = _this->m->__get((int)13);
				HX_STACK_LINE(335)
				result->m[(int)14] = _this->m->__get((int)14);
				HX_STACK_LINE(335)
				result->m[(int)15] = _this->m->__get((int)15);
				HX_STACK_LINE(335)
				invertRotationMatrix = result;
			}
		}
		HX_STACK_LINE(336)
		{
			HX_STACK_LINE(336)
			Float l1 = invertRotationMatrix->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
			HX_STACK_LINE(336)
			Float l2 = invertRotationMatrix->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
			HX_STACK_LINE(336)
			Float l3 = invertRotationMatrix->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
			HX_STACK_LINE(336)
			Float l4 = invertRotationMatrix->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
			HX_STACK_LINE(336)
			Float l5 = invertRotationMatrix->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
			HX_STACK_LINE(336)
			Float l6 = invertRotationMatrix->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
			HX_STACK_LINE(336)
			Float l7 = invertRotationMatrix->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
			HX_STACK_LINE(336)
			Float l8 = invertRotationMatrix->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
			HX_STACK_LINE(336)
			Float l9 = invertRotationMatrix->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
			HX_STACK_LINE(336)
			Float l10 = invertRotationMatrix->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
			HX_STACK_LINE(336)
			Float l11 = invertRotationMatrix->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
			HX_STACK_LINE(336)
			Float l12 = invertRotationMatrix->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
			HX_STACK_LINE(336)
			Float l13 = invertRotationMatrix->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
			HX_STACK_LINE(336)
			Float l14 = invertRotationMatrix->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
			HX_STACK_LINE(336)
			Float l15 = invertRotationMatrix->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
			HX_STACK_LINE(336)
			Float l16 = invertRotationMatrix->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
			HX_STACK_LINE(336)
			Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
			HX_STACK_LINE(336)
			Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
			HX_STACK_LINE(336)
			Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
			HX_STACK_LINE(336)
			Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
			HX_STACK_LINE(336)
			Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
			HX_STACK_LINE(336)
			Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
			HX_STACK_LINE(336)
			Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
			HX_STACK_LINE(336)
			Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
			HX_STACK_LINE(336)
			Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
			HX_STACK_LINE(336)
			Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
			HX_STACK_LINE(336)
			Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
			HX_STACK_LINE(336)
			Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
			HX_STACK_LINE(336)
			Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
			HX_STACK_LINE(336)
			Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
			HX_STACK_LINE(336)
			Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
			HX_STACK_LINE(336)
			Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
			HX_STACK_LINE(336)
			Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
			HX_STACK_LINE(336)
			Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
			HX_STACK_LINE(336)
			Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
			HX_STACK_LINE(336)
			Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
			HX_STACK_LINE(336)
			Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
			HX_STACK_LINE(336)
			Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
			HX_STACK_LINE(336)
			Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
			HX_STACK_LINE(336)
			invertRotationMatrix->m[(int)0] = (l23 * l27);
			HX_STACK_LINE(336)
			invertRotationMatrix->m[(int)4] = (l24 * l27);
			HX_STACK_LINE(336)
			invertRotationMatrix->m[(int)8] = (l25 * l27);
			HX_STACK_LINE(336)
			invertRotationMatrix->m[(int)12] = (l26 * l27);
			HX_STACK_LINE(336)
			invertRotationMatrix->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
			HX_STACK_LINE(336)
			invertRotationMatrix->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
			HX_STACK_LINE(336)
			invertRotationMatrix->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
			HX_STACK_LINE(336)
			invertRotationMatrix->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
			HX_STACK_LINE(336)
			invertRotationMatrix->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
			HX_STACK_LINE(336)
			invertRotationMatrix->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
			HX_STACK_LINE(336)
			invertRotationMatrix->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
			HX_STACK_LINE(336)
			invertRotationMatrix->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
			HX_STACK_LINE(336)
			invertRotationMatrix->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
			HX_STACK_LINE(336)
			invertRotationMatrix->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
			HX_STACK_LINE(336)
			invertRotationMatrix->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
			HX_STACK_LINE(336)
			invertRotationMatrix->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
		}
		HX_STACK_LINE(338)
		::com::gamestudiohx::babylonhx::tools::math::Matrix invertScalingMatrix;		HX_STACK_VAR(invertScalingMatrix,"invertScalingMatrix");
		HX_STACK_LINE(338)
		{
			HX_STACK_LINE(338)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localScaling;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(338)
			{
				HX_STACK_LINE(338)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(338)
				result->m[(int)0] = _this->m->__get((int)0);
				HX_STACK_LINE(338)
				result->m[(int)1] = _this->m->__get((int)1);
				HX_STACK_LINE(338)
				result->m[(int)2] = _this->m->__get((int)2);
				HX_STACK_LINE(338)
				result->m[(int)3] = _this->m->__get((int)3);
				HX_STACK_LINE(338)
				result->m[(int)4] = _this->m->__get((int)4);
				HX_STACK_LINE(338)
				result->m[(int)5] = _this->m->__get((int)5);
				HX_STACK_LINE(338)
				result->m[(int)6] = _this->m->__get((int)6);
				HX_STACK_LINE(338)
				result->m[(int)7] = _this->m->__get((int)7);
				HX_STACK_LINE(338)
				result->m[(int)8] = _this->m->__get((int)8);
				HX_STACK_LINE(338)
				result->m[(int)9] = _this->m->__get((int)9);
				HX_STACK_LINE(338)
				result->m[(int)10] = _this->m->__get((int)10);
				HX_STACK_LINE(338)
				result->m[(int)11] = _this->m->__get((int)11);
				HX_STACK_LINE(338)
				result->m[(int)12] = _this->m->__get((int)12);
				HX_STACK_LINE(338)
				result->m[(int)13] = _this->m->__get((int)13);
				HX_STACK_LINE(338)
				result->m[(int)14] = _this->m->__get((int)14);
				HX_STACK_LINE(338)
				result->m[(int)15] = _this->m->__get((int)15);
				HX_STACK_LINE(338)
				invertScalingMatrix = result;
			}
		}
		HX_STACK_LINE(339)
		{
			HX_STACK_LINE(339)
			Float l1 = invertScalingMatrix->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
			HX_STACK_LINE(339)
			Float l2 = invertScalingMatrix->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
			HX_STACK_LINE(339)
			Float l3 = invertScalingMatrix->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
			HX_STACK_LINE(339)
			Float l4 = invertScalingMatrix->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
			HX_STACK_LINE(339)
			Float l5 = invertScalingMatrix->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
			HX_STACK_LINE(339)
			Float l6 = invertScalingMatrix->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
			HX_STACK_LINE(339)
			Float l7 = invertScalingMatrix->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
			HX_STACK_LINE(339)
			Float l8 = invertScalingMatrix->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
			HX_STACK_LINE(339)
			Float l9 = invertScalingMatrix->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
			HX_STACK_LINE(339)
			Float l10 = invertScalingMatrix->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
			HX_STACK_LINE(339)
			Float l11 = invertScalingMatrix->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
			HX_STACK_LINE(339)
			Float l12 = invertScalingMatrix->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
			HX_STACK_LINE(339)
			Float l13 = invertScalingMatrix->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
			HX_STACK_LINE(339)
			Float l14 = invertScalingMatrix->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
			HX_STACK_LINE(339)
			Float l15 = invertScalingMatrix->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
			HX_STACK_LINE(339)
			Float l16 = invertScalingMatrix->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
			HX_STACK_LINE(339)
			Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
			HX_STACK_LINE(339)
			Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
			HX_STACK_LINE(339)
			Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
			HX_STACK_LINE(339)
			Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
			HX_STACK_LINE(339)
			Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
			HX_STACK_LINE(339)
			Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
			HX_STACK_LINE(339)
			Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
			HX_STACK_LINE(339)
			Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
			HX_STACK_LINE(339)
			Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
			HX_STACK_LINE(339)
			Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
			HX_STACK_LINE(339)
			Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
			HX_STACK_LINE(339)
			Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
			HX_STACK_LINE(339)
			Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
			HX_STACK_LINE(339)
			Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
			HX_STACK_LINE(339)
			Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
			HX_STACK_LINE(339)
			Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
			HX_STACK_LINE(339)
			Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
			HX_STACK_LINE(339)
			Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
			HX_STACK_LINE(339)
			Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
			HX_STACK_LINE(339)
			Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
			HX_STACK_LINE(339)
			Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
			HX_STACK_LINE(339)
			Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
			HX_STACK_LINE(339)
			Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
			HX_STACK_LINE(339)
			invertScalingMatrix->m[(int)0] = (l23 * l27);
			HX_STACK_LINE(339)
			invertScalingMatrix->m[(int)4] = (l24 * l27);
			HX_STACK_LINE(339)
			invertScalingMatrix->m[(int)8] = (l25 * l27);
			HX_STACK_LINE(339)
			invertScalingMatrix->m[(int)12] = (l26 * l27);
			HX_STACK_LINE(339)
			invertScalingMatrix->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
			HX_STACK_LINE(339)
			invertScalingMatrix->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
			HX_STACK_LINE(339)
			invertScalingMatrix->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
			HX_STACK_LINE(339)
			invertScalingMatrix->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
			HX_STACK_LINE(339)
			invertScalingMatrix->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
			HX_STACK_LINE(339)
			invertScalingMatrix->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
			HX_STACK_LINE(339)
			invertScalingMatrix->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
			HX_STACK_LINE(339)
			invertScalingMatrix->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
			HX_STACK_LINE(339)
			invertScalingMatrix->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
			HX_STACK_LINE(339)
			invertScalingMatrix->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
			HX_STACK_LINE(339)
			invertScalingMatrix->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
			HX_STACK_LINE(339)
			invertScalingMatrix->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
		}
		HX_STACK_LINE(341)
		::com::gamestudiohx::babylonhx::tools::math::Matrix invertPivotMatrix;		HX_STACK_VAR(invertPivotMatrix,"invertPivotMatrix");
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(341)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(341)
			{
				HX_STACK_LINE(341)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(341)
				result->m[(int)0] = _this->m->__get((int)0);
				HX_STACK_LINE(341)
				result->m[(int)1] = _this->m->__get((int)1);
				HX_STACK_LINE(341)
				result->m[(int)2] = _this->m->__get((int)2);
				HX_STACK_LINE(341)
				result->m[(int)3] = _this->m->__get((int)3);
				HX_STACK_LINE(341)
				result->m[(int)4] = _this->m->__get((int)4);
				HX_STACK_LINE(341)
				result->m[(int)5] = _this->m->__get((int)5);
				HX_STACK_LINE(341)
				result->m[(int)6] = _this->m->__get((int)6);
				HX_STACK_LINE(341)
				result->m[(int)7] = _this->m->__get((int)7);
				HX_STACK_LINE(341)
				result->m[(int)8] = _this->m->__get((int)8);
				HX_STACK_LINE(341)
				result->m[(int)9] = _this->m->__get((int)9);
				HX_STACK_LINE(341)
				result->m[(int)10] = _this->m->__get((int)10);
				HX_STACK_LINE(341)
				result->m[(int)11] = _this->m->__get((int)11);
				HX_STACK_LINE(341)
				result->m[(int)12] = _this->m->__get((int)12);
				HX_STACK_LINE(341)
				result->m[(int)13] = _this->m->__get((int)13);
				HX_STACK_LINE(341)
				result->m[(int)14] = _this->m->__get((int)14);
				HX_STACK_LINE(341)
				result->m[(int)15] = _this->m->__get((int)15);
				HX_STACK_LINE(341)
				invertPivotMatrix = result;
			}
		}
		HX_STACK_LINE(342)
		{
			HX_STACK_LINE(342)
			Float l1 = invertPivotMatrix->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
			HX_STACK_LINE(342)
			Float l2 = invertPivotMatrix->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
			HX_STACK_LINE(342)
			Float l3 = invertPivotMatrix->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
			HX_STACK_LINE(342)
			Float l4 = invertPivotMatrix->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
			HX_STACK_LINE(342)
			Float l5 = invertPivotMatrix->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
			HX_STACK_LINE(342)
			Float l6 = invertPivotMatrix->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
			HX_STACK_LINE(342)
			Float l7 = invertPivotMatrix->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
			HX_STACK_LINE(342)
			Float l8 = invertPivotMatrix->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
			HX_STACK_LINE(342)
			Float l9 = invertPivotMatrix->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
			HX_STACK_LINE(342)
			Float l10 = invertPivotMatrix->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
			HX_STACK_LINE(342)
			Float l11 = invertPivotMatrix->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
			HX_STACK_LINE(342)
			Float l12 = invertPivotMatrix->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
			HX_STACK_LINE(342)
			Float l13 = invertPivotMatrix->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
			HX_STACK_LINE(342)
			Float l14 = invertPivotMatrix->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
			HX_STACK_LINE(342)
			Float l15 = invertPivotMatrix->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
			HX_STACK_LINE(342)
			Float l16 = invertPivotMatrix->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
			HX_STACK_LINE(342)
			Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
			HX_STACK_LINE(342)
			Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
			HX_STACK_LINE(342)
			Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
			HX_STACK_LINE(342)
			Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
			HX_STACK_LINE(342)
			Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
			HX_STACK_LINE(342)
			Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
			HX_STACK_LINE(342)
			Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
			HX_STACK_LINE(342)
			Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
			HX_STACK_LINE(342)
			Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
			HX_STACK_LINE(342)
			Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
			HX_STACK_LINE(342)
			Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
			HX_STACK_LINE(342)
			Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
			HX_STACK_LINE(342)
			Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
			HX_STACK_LINE(342)
			Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
			HX_STACK_LINE(342)
			Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
			HX_STACK_LINE(342)
			Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
			HX_STACK_LINE(342)
			Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
			HX_STACK_LINE(342)
			Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
			HX_STACK_LINE(342)
			Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
			HX_STACK_LINE(342)
			Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
			HX_STACK_LINE(342)
			Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
			HX_STACK_LINE(342)
			Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
			HX_STACK_LINE(342)
			Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
			HX_STACK_LINE(342)
			invertPivotMatrix->m[(int)0] = (l23 * l27);
			HX_STACK_LINE(342)
			invertPivotMatrix->m[(int)4] = (l24 * l27);
			HX_STACK_LINE(342)
			invertPivotMatrix->m[(int)8] = (l25 * l27);
			HX_STACK_LINE(342)
			invertPivotMatrix->m[(int)12] = (l26 * l27);
			HX_STACK_LINE(342)
			invertPivotMatrix->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
			HX_STACK_LINE(342)
			invertPivotMatrix->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
			HX_STACK_LINE(342)
			invertPivotMatrix->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
			HX_STACK_LINE(342)
			invertPivotMatrix->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
			HX_STACK_LINE(342)
			invertPivotMatrix->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
			HX_STACK_LINE(342)
			invertPivotMatrix->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
			HX_STACK_LINE(342)
			invertPivotMatrix->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
			HX_STACK_LINE(342)
			invertPivotMatrix->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
			HX_STACK_LINE(342)
			invertPivotMatrix->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
			HX_STACK_LINE(342)
			invertPivotMatrix->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
			HX_STACK_LINE(342)
			invertPivotMatrix->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
			HX_STACK_LINE(342)
			invertPivotMatrix->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
		}
		HX_STACK_LINE(344)
		::com::gamestudiohx::babylonhx::tools::math::Matrix translateMatrix;		HX_STACK_VAR(translateMatrix,"translateMatrix");
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(344)
			{
				HX_STACK_LINE(344)
				Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
				HX_STACK_LINE(344)
				Float tm0 = invertRotationMatrix->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
				HX_STACK_LINE(344)
				Float tm1 = invertRotationMatrix->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
				HX_STACK_LINE(344)
				Float tm2 = invertRotationMatrix->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
				HX_STACK_LINE(344)
				Float tm3 = invertRotationMatrix->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
				HX_STACK_LINE(344)
				Float tm4 = invertRotationMatrix->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
				HX_STACK_LINE(344)
				Float tm5 = invertRotationMatrix->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
				HX_STACK_LINE(344)
				Float tm6 = invertRotationMatrix->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
				HX_STACK_LINE(344)
				Float tm7 = invertRotationMatrix->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
				HX_STACK_LINE(344)
				Float tm8 = invertRotationMatrix->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
				HX_STACK_LINE(344)
				Float tm9 = invertRotationMatrix->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
				HX_STACK_LINE(344)
				Float tm10 = invertRotationMatrix->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
				HX_STACK_LINE(344)
				Float tm11 = invertRotationMatrix->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
				HX_STACK_LINE(344)
				Float tm12 = invertRotationMatrix->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
				HX_STACK_LINE(344)
				Float tm13 = invertRotationMatrix->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
				HX_STACK_LINE(344)
				Float tm14 = invertRotationMatrix->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
				HX_STACK_LINE(344)
				Float tm15 = invertRotationMatrix->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
				HX_STACK_LINE(344)
				Float om0 = invertScalingMatrix->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
				HX_STACK_LINE(344)
				Float om1 = invertScalingMatrix->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
				HX_STACK_LINE(344)
				Float om2 = invertScalingMatrix->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
				HX_STACK_LINE(344)
				Float om3 = invertScalingMatrix->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
				HX_STACK_LINE(344)
				Float om4 = invertScalingMatrix->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
				HX_STACK_LINE(344)
				Float om5 = invertScalingMatrix->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
				HX_STACK_LINE(344)
				Float om6 = invertScalingMatrix->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
				HX_STACK_LINE(344)
				Float om7 = invertScalingMatrix->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
				HX_STACK_LINE(344)
				Float om8 = invertScalingMatrix->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
				HX_STACK_LINE(344)
				Float om9 = invertScalingMatrix->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
				HX_STACK_LINE(344)
				Float om10 = invertScalingMatrix->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
				HX_STACK_LINE(344)
				Float om11 = invertScalingMatrix->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
				HX_STACK_LINE(344)
				Float om12 = invertScalingMatrix->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
				HX_STACK_LINE(344)
				Float om13 = invertScalingMatrix->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
				HX_STACK_LINE(344)
				Float om14 = invertScalingMatrix->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
				HX_STACK_LINE(344)
				Float om15 = invertScalingMatrix->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
				HX_STACK_LINE(344)
				result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
				HX_STACK_LINE(344)
				result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
				HX_STACK_LINE(344)
				result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
				HX_STACK_LINE(344)
				result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
				HX_STACK_LINE(344)
				result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
				HX_STACK_LINE(344)
				result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
				HX_STACK_LINE(344)
				result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
				HX_STACK_LINE(344)
				result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
				HX_STACK_LINE(344)
				result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
				HX_STACK_LINE(344)
				result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
				HX_STACK_LINE(344)
				result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
				HX_STACK_LINE(344)
				result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
				HX_STACK_LINE(344)
				result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
				HX_STACK_LINE(344)
				result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
				HX_STACK_LINE(344)
				result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
				HX_STACK_LINE(344)
				result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
				HX_STACK_LINE(344)
				result1;
			}
			HX_STACK_LINE(344)
			translateMatrix = result;
		}
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(346)
			Array< Float > result = invertScalingMatrix->m;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(346)
			Float tm0 = translateMatrix->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
			HX_STACK_LINE(346)
			Float tm1 = translateMatrix->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
			HX_STACK_LINE(346)
			Float tm2 = translateMatrix->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
			HX_STACK_LINE(346)
			Float tm3 = translateMatrix->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
			HX_STACK_LINE(346)
			Float tm4 = translateMatrix->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
			HX_STACK_LINE(346)
			Float tm5 = translateMatrix->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
			HX_STACK_LINE(346)
			Float tm6 = translateMatrix->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
			HX_STACK_LINE(346)
			Float tm7 = translateMatrix->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
			HX_STACK_LINE(346)
			Float tm8 = translateMatrix->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
			HX_STACK_LINE(346)
			Float tm9 = translateMatrix->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
			HX_STACK_LINE(346)
			Float tm10 = translateMatrix->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
			HX_STACK_LINE(346)
			Float tm11 = translateMatrix->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
			HX_STACK_LINE(346)
			Float tm12 = translateMatrix->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
			HX_STACK_LINE(346)
			Float tm13 = translateMatrix->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
			HX_STACK_LINE(346)
			Float tm14 = translateMatrix->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
			HX_STACK_LINE(346)
			Float tm15 = translateMatrix->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
			HX_STACK_LINE(346)
			Float om0 = invertPivotMatrix->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
			HX_STACK_LINE(346)
			Float om1 = invertPivotMatrix->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
			HX_STACK_LINE(346)
			Float om2 = invertPivotMatrix->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
			HX_STACK_LINE(346)
			Float om3 = invertPivotMatrix->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
			HX_STACK_LINE(346)
			Float om4 = invertPivotMatrix->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
			HX_STACK_LINE(346)
			Float om5 = invertPivotMatrix->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
			HX_STACK_LINE(346)
			Float om6 = invertPivotMatrix->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
			HX_STACK_LINE(346)
			Float om7 = invertPivotMatrix->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
			HX_STACK_LINE(346)
			Float om8 = invertPivotMatrix->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
			HX_STACK_LINE(346)
			Float om9 = invertPivotMatrix->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
			HX_STACK_LINE(346)
			Float om10 = invertPivotMatrix->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
			HX_STACK_LINE(346)
			Float om11 = invertPivotMatrix->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
			HX_STACK_LINE(346)
			Float om12 = invertPivotMatrix->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
			HX_STACK_LINE(346)
			Float om13 = invertPivotMatrix->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
			HX_STACK_LINE(346)
			Float om14 = invertPivotMatrix->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
			HX_STACK_LINE(346)
			Float om15 = invertPivotMatrix->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
			HX_STACK_LINE(346)
			result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
			HX_STACK_LINE(346)
			result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
			HX_STACK_LINE(346)
			result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
			HX_STACK_LINE(346)
			result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
			HX_STACK_LINE(346)
			result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
			HX_STACK_LINE(346)
			result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
			HX_STACK_LINE(346)
			result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
			HX_STACK_LINE(346)
			result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
			HX_STACK_LINE(346)
			result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
			HX_STACK_LINE(346)
			result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
			HX_STACK_LINE(346)
			result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
			HX_STACK_LINE(346)
			result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
			HX_STACK_LINE(346)
			result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
			HX_STACK_LINE(346)
			result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
			HX_STACK_LINE(346)
			result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
			HX_STACK_LINE(346)
			result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
			HX_STACK_LINE(346)
			result;
		}
		HX_STACK_LINE(347)
		{
			HX_STACK_LINE(347)
			Array< Float > result = translateMatrix->m;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(347)
			Float tm0 = invertScalingMatrix->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
			HX_STACK_LINE(347)
			Float tm1 = invertScalingMatrix->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
			HX_STACK_LINE(347)
			Float tm2 = invertScalingMatrix->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
			HX_STACK_LINE(347)
			Float tm3 = invertScalingMatrix->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
			HX_STACK_LINE(347)
			Float tm4 = invertScalingMatrix->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
			HX_STACK_LINE(347)
			Float tm5 = invertScalingMatrix->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
			HX_STACK_LINE(347)
			Float tm6 = invertScalingMatrix->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
			HX_STACK_LINE(347)
			Float tm7 = invertScalingMatrix->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
			HX_STACK_LINE(347)
			Float tm8 = invertScalingMatrix->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
			HX_STACK_LINE(347)
			Float tm9 = invertScalingMatrix->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
			HX_STACK_LINE(347)
			Float tm10 = invertScalingMatrix->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
			HX_STACK_LINE(347)
			Float tm11 = invertScalingMatrix->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
			HX_STACK_LINE(347)
			Float tm12 = invertScalingMatrix->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
			HX_STACK_LINE(347)
			Float tm13 = invertScalingMatrix->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
			HX_STACK_LINE(347)
			Float tm14 = invertScalingMatrix->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
			HX_STACK_LINE(347)
			Float tm15 = invertScalingMatrix->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
			HX_STACK_LINE(347)
			Float om0 = worldMatrix->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
			HX_STACK_LINE(347)
			Float om1 = worldMatrix->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
			HX_STACK_LINE(347)
			Float om2 = worldMatrix->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
			HX_STACK_LINE(347)
			Float om3 = worldMatrix->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
			HX_STACK_LINE(347)
			Float om4 = worldMatrix->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
			HX_STACK_LINE(347)
			Float om5 = worldMatrix->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
			HX_STACK_LINE(347)
			Float om6 = worldMatrix->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
			HX_STACK_LINE(347)
			Float om7 = worldMatrix->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
			HX_STACK_LINE(347)
			Float om8 = worldMatrix->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
			HX_STACK_LINE(347)
			Float om9 = worldMatrix->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
			HX_STACK_LINE(347)
			Float om10 = worldMatrix->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
			HX_STACK_LINE(347)
			Float om11 = worldMatrix->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
			HX_STACK_LINE(347)
			Float om12 = worldMatrix->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
			HX_STACK_LINE(347)
			Float om13 = worldMatrix->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
			HX_STACK_LINE(347)
			Float om14 = worldMatrix->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
			HX_STACK_LINE(347)
			Float om15 = worldMatrix->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
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
		HX_STACK_LINE(349)
		if (((this->parent != null()))){
			HX_STACK_LINE(350)
			::com::gamestudiohx::babylonhx::tools::math::Matrix invertParentWorldMatrix;		HX_STACK_VAR(invertParentWorldMatrix,"invertParentWorldMatrix");
			HX_STACK_LINE(350)
			{
				HX_STACK_LINE(350)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->parent->getWorldMatrix();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(350)
				{
					HX_STACK_LINE(350)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(350)
					result->m[(int)0] = _this->m->__get((int)0);
					HX_STACK_LINE(350)
					result->m[(int)1] = _this->m->__get((int)1);
					HX_STACK_LINE(350)
					result->m[(int)2] = _this->m->__get((int)2);
					HX_STACK_LINE(350)
					result->m[(int)3] = _this->m->__get((int)3);
					HX_STACK_LINE(350)
					result->m[(int)4] = _this->m->__get((int)4);
					HX_STACK_LINE(350)
					result->m[(int)5] = _this->m->__get((int)5);
					HX_STACK_LINE(350)
					result->m[(int)6] = _this->m->__get((int)6);
					HX_STACK_LINE(350)
					result->m[(int)7] = _this->m->__get((int)7);
					HX_STACK_LINE(350)
					result->m[(int)8] = _this->m->__get((int)8);
					HX_STACK_LINE(350)
					result->m[(int)9] = _this->m->__get((int)9);
					HX_STACK_LINE(350)
					result->m[(int)10] = _this->m->__get((int)10);
					HX_STACK_LINE(350)
					result->m[(int)11] = _this->m->__get((int)11);
					HX_STACK_LINE(350)
					result->m[(int)12] = _this->m->__get((int)12);
					HX_STACK_LINE(350)
					result->m[(int)13] = _this->m->__get((int)13);
					HX_STACK_LINE(350)
					result->m[(int)14] = _this->m->__get((int)14);
					HX_STACK_LINE(350)
					result->m[(int)15] = _this->m->__get((int)15);
					HX_STACK_LINE(350)
					invertParentWorldMatrix = result;
				}
			}
			HX_STACK_LINE(351)
			{
				HX_STACK_LINE(351)
				Float l1 = invertParentWorldMatrix->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
				HX_STACK_LINE(351)
				Float l2 = invertParentWorldMatrix->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
				HX_STACK_LINE(351)
				Float l3 = invertParentWorldMatrix->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
				HX_STACK_LINE(351)
				Float l4 = invertParentWorldMatrix->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
				HX_STACK_LINE(351)
				Float l5 = invertParentWorldMatrix->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
				HX_STACK_LINE(351)
				Float l6 = invertParentWorldMatrix->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
				HX_STACK_LINE(351)
				Float l7 = invertParentWorldMatrix->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
				HX_STACK_LINE(351)
				Float l8 = invertParentWorldMatrix->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
				HX_STACK_LINE(351)
				Float l9 = invertParentWorldMatrix->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
				HX_STACK_LINE(351)
				Float l10 = invertParentWorldMatrix->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
				HX_STACK_LINE(351)
				Float l11 = invertParentWorldMatrix->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
				HX_STACK_LINE(351)
				Float l12 = invertParentWorldMatrix->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
				HX_STACK_LINE(351)
				Float l13 = invertParentWorldMatrix->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
				HX_STACK_LINE(351)
				Float l14 = invertParentWorldMatrix->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
				HX_STACK_LINE(351)
				Float l15 = invertParentWorldMatrix->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
				HX_STACK_LINE(351)
				Float l16 = invertParentWorldMatrix->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
				HX_STACK_LINE(351)
				Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
				HX_STACK_LINE(351)
				Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
				HX_STACK_LINE(351)
				Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
				HX_STACK_LINE(351)
				Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
				HX_STACK_LINE(351)
				Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
				HX_STACK_LINE(351)
				Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
				HX_STACK_LINE(351)
				Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
				HX_STACK_LINE(351)
				Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
				HX_STACK_LINE(351)
				Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
				HX_STACK_LINE(351)
				Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
				HX_STACK_LINE(351)
				Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
				HX_STACK_LINE(351)
				Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
				HX_STACK_LINE(351)
				Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
				HX_STACK_LINE(351)
				Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
				HX_STACK_LINE(351)
				Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
				HX_STACK_LINE(351)
				Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
				HX_STACK_LINE(351)
				Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
				HX_STACK_LINE(351)
				Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
				HX_STACK_LINE(351)
				Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
				HX_STACK_LINE(351)
				Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
				HX_STACK_LINE(351)
				Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
				HX_STACK_LINE(351)
				Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
				HX_STACK_LINE(351)
				Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
				HX_STACK_LINE(351)
				invertParentWorldMatrix->m[(int)0] = (l23 * l27);
				HX_STACK_LINE(351)
				invertParentWorldMatrix->m[(int)4] = (l24 * l27);
				HX_STACK_LINE(351)
				invertParentWorldMatrix->m[(int)8] = (l25 * l27);
				HX_STACK_LINE(351)
				invertParentWorldMatrix->m[(int)12] = (l26 * l27);
				HX_STACK_LINE(351)
				invertParentWorldMatrix->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
				HX_STACK_LINE(351)
				invertParentWorldMatrix->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
				HX_STACK_LINE(351)
				invertParentWorldMatrix->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
				HX_STACK_LINE(351)
				invertParentWorldMatrix->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
				HX_STACK_LINE(351)
				invertParentWorldMatrix->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
				HX_STACK_LINE(351)
				invertParentWorldMatrix->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
				HX_STACK_LINE(351)
				invertParentWorldMatrix->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
				HX_STACK_LINE(351)
				invertParentWorldMatrix->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
				HX_STACK_LINE(351)
				invertParentWorldMatrix->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
				HX_STACK_LINE(351)
				invertParentWorldMatrix->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
				HX_STACK_LINE(351)
				invertParentWorldMatrix->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
				HX_STACK_LINE(351)
				invertParentWorldMatrix->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
			}
			HX_STACK_LINE(353)
			{
				HX_STACK_LINE(353)
				Array< Float > result = invertScalingMatrix->m;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(353)
				Float tm0 = translateMatrix->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
				HX_STACK_LINE(353)
				Float tm1 = translateMatrix->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
				HX_STACK_LINE(353)
				Float tm2 = translateMatrix->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
				HX_STACK_LINE(353)
				Float tm3 = translateMatrix->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
				HX_STACK_LINE(353)
				Float tm4 = translateMatrix->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
				HX_STACK_LINE(353)
				Float tm5 = translateMatrix->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
				HX_STACK_LINE(353)
				Float tm6 = translateMatrix->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
				HX_STACK_LINE(353)
				Float tm7 = translateMatrix->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
				HX_STACK_LINE(353)
				Float tm8 = translateMatrix->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
				HX_STACK_LINE(353)
				Float tm9 = translateMatrix->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
				HX_STACK_LINE(353)
				Float tm10 = translateMatrix->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
				HX_STACK_LINE(353)
				Float tm11 = translateMatrix->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
				HX_STACK_LINE(353)
				Float tm12 = translateMatrix->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
				HX_STACK_LINE(353)
				Float tm13 = translateMatrix->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
				HX_STACK_LINE(353)
				Float tm14 = translateMatrix->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
				HX_STACK_LINE(353)
				Float tm15 = translateMatrix->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
				HX_STACK_LINE(353)
				Float om0 = invertParentWorldMatrix->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
				HX_STACK_LINE(353)
				Float om1 = invertParentWorldMatrix->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
				HX_STACK_LINE(353)
				Float om2 = invertParentWorldMatrix->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
				HX_STACK_LINE(353)
				Float om3 = invertParentWorldMatrix->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
				HX_STACK_LINE(353)
				Float om4 = invertParentWorldMatrix->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
				HX_STACK_LINE(353)
				Float om5 = invertParentWorldMatrix->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
				HX_STACK_LINE(353)
				Float om6 = invertParentWorldMatrix->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
				HX_STACK_LINE(353)
				Float om7 = invertParentWorldMatrix->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
				HX_STACK_LINE(353)
				Float om8 = invertParentWorldMatrix->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
				HX_STACK_LINE(353)
				Float om9 = invertParentWorldMatrix->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
				HX_STACK_LINE(353)
				Float om10 = invertParentWorldMatrix->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
				HX_STACK_LINE(353)
				Float om11 = invertParentWorldMatrix->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
				HX_STACK_LINE(353)
				Float om12 = invertParentWorldMatrix->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
				HX_STACK_LINE(353)
				Float om13 = invertParentWorldMatrix->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
				HX_STACK_LINE(353)
				Float om14 = invertParentWorldMatrix->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
				HX_STACK_LINE(353)
				Float om15 = invertParentWorldMatrix->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
				HX_STACK_LINE(353)
				result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
				HX_STACK_LINE(353)
				result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
				HX_STACK_LINE(353)
				result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
				HX_STACK_LINE(353)
				result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
				HX_STACK_LINE(353)
				result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
				HX_STACK_LINE(353)
				result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
				HX_STACK_LINE(353)
				result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
				HX_STACK_LINE(353)
				result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
				HX_STACK_LINE(353)
				result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
				HX_STACK_LINE(353)
				result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
				HX_STACK_LINE(353)
				result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
				HX_STACK_LINE(353)
				result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
				HX_STACK_LINE(353)
				result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
				HX_STACK_LINE(353)
				result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
				HX_STACK_LINE(353)
				result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
				HX_STACK_LINE(353)
				result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
				HX_STACK_LINE(353)
				result;
			}
			HX_STACK_LINE(354)
			translateMatrix = invertScalingMatrix;
		}
		HX_STACK_LINE(357)
		this->position->x = translateMatrix->m->__get((int)12);
		HX_STACK_LINE(358)
		this->position->y = translateMatrix->m->__get((int)13);
		HX_STACK_LINE(359)
		this->position->z = translateMatrix->m->__get((int)14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,setAbsolutePosition,(void))

Array< Float > AbstractMesh_obj::getVerticesData( ::String kind){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getVerticesData",0xa52edbc9,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getVerticesData","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",364,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(kind,"kind")
	HX_STACK_LINE(364)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,getVerticesData,return )

bool AbstractMesh_obj::isVerticesDataPresent( ::String kind){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","isVerticesDataPresent",0xe7f683fe,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.isVerticesDataPresent","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",377,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(kind,"kind")
	HX_STACK_LINE(377)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,isVerticesDataPresent,return )

int AbstractMesh_obj::getTotalIndicies( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getTotalIndicies",0x15b9a85c,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getTotalIndicies","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",396,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(396)
	return this->_indices->length;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getTotalIndicies,return )

Array< int > AbstractMesh_obj::getIndices( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getIndices",0x5a563be1,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getIndices","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",400,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(400)
	return this->_indices;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getIndices,return )

Float AbstractMesh_obj::getVertexStrideSize( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getVertexStrideSize",0xdc869604,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getVertexStrideSize","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",404,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(404)
	return this->_vertexStrideSize;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getVertexStrideSize,return )

Void AbstractMesh_obj::setPivotMatrix( ::com::gamestudiohx::babylonhx::tools::math::Matrix matrix){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","setPivotMatrix",0x99ca34d1,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.setPivotMatrix","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",407,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(408)
		this->_pivotMatrix = matrix;
		HX_STACK_LINE(409)
		this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,setPivotMatrix,(void))

::com::gamestudiohx::babylonhx::tools::math::Matrix AbstractMesh_obj::getPivotMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getPivotMatrix",0x79aa4c5d,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getPivotMatrix","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",413,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(413)
	return this->_pivotMatrix;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getPivotMatrix,return )

bool AbstractMesh_obj::isSynchronized( hx::Null< bool >  __o_updateCache){
bool updateCache = __o_updateCache.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","isSynchronized",0x3c93e0ce,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.isSynchronized","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",416,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(updateCache,"updateCache")
{
		HX_STACK_LINE(417)
		if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
			HX_STACK_LINE(418)
			return false;
		}
		HX_STACK_LINE(420)
		if ((this->_cache->__Field(HX_CSTRING("pivotMatrixUpdated"),true))){
			HX_STACK_LINE(421)
			return false;
		}
		HX_STACK_LINE(424)
		if ((this->infiniteDistance)){
			HX_STACK_LINE(425)
			return false;
		}
		HX_STACK_LINE(428)
		if ((!(this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("equals"),true)(this->position)))){
			HX_STACK_LINE(429)
			return false;
		}
		HX_STACK_LINE(431)
		if (((this->rotationQuaternion != null()))){
			HX_STACK_LINE(432)
			if ((!(this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("equals"),true)(this->rotationQuaternion)))){
				HX_STACK_LINE(433)
				return false;
			}
		}
		else{
			HX_STACK_LINE(435)
			if ((!(this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("equals"),true)(this->rotation)))){
				HX_STACK_LINE(436)
				return false;
			}
		}
		HX_STACK_LINE(439)
		if ((!(this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("equals"),true)(this->scaling)))){
			HX_STACK_LINE(440)
			return false;
		}
		HX_STACK_LINE(442)
		return true;
	}
}


bool AbstractMesh_obj::isAnimated( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","isAnimated",0x2b41f35d,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.isAnimated","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",446,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(446)
	return this->_animationStarted;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,isAnimated,return )

bool AbstractMesh_obj::isDisposed( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","isDisposed",0xc9f38b9f,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.isDisposed","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",450,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(450)
	return this->_isDisposed;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,isDisposed,return )

Void AbstractMesh_obj::_initCache( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","_initCache",0xdfe99f83,"com.gamestudiohx.babylonhx.mesh.AbstractMesh._initCache","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",453,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(454)
		this->_cache->__FieldRef(HX_CSTRING("localMatrixUpdated")) = false;
		HX_STACK_LINE(455)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(455)
		this->_cache->__FieldRef(HX_CSTRING("position")) = _g;
		HX_STACK_LINE(456)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(456)
		this->_cache->__FieldRef(HX_CSTRING("scaling")) = _g1;
		HX_STACK_LINE(457)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(457)
		this->_cache->__FieldRef(HX_CSTRING("rotation")) = _g2;
		HX_STACK_LINE(458)
		::com::gamestudiohx::babylonhx::tools::math::Quaternion _g3 = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(458)
		this->_cache->__FieldRef(HX_CSTRING("rotationQuaternion")) = _g3;
		HX_STACK_LINE(459)
		this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = null();
	}
return null();
}


Void AbstractMesh_obj::markAsDirty( ::String property){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","markAsDirty",0x0e3d5c83,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.markAsDirty","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",462,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(property,"property")
		HX_STACK_LINE(463)
		if (((property == HX_CSTRING("rotation")))){
			HX_STACK_LINE(464)
			this->rotationQuaternion = null();
		}
		HX_STACK_LINE(466)
		this->_childrenFlag = (int)1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,markAsDirty,(void))

Void AbstractMesh_obj::refreshBoudningInfo( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","refreshBoudningInfo",0x427916e9,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.refreshBoudningInfo","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",469,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(470)
		Array< Float > data = this->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(472)
		if (((data == null()))){
			HX_STACK_LINE(473)
			return null();
		}
		HX_STACK_LINE(476)
		Dynamic extend;		HX_STACK_VAR(extend,"extend");
		HX_STACK_LINE(476)
		{
			HX_STACK_LINE(476)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(minimum,"minimum");
			HX_STACK_LINE(476)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY);		HX_STACK_VAR(maximum,"maximum");
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(476)
				int _g = this->_totalVertices;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(476)
				while((true)){
					HX_STACK_LINE(476)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(476)
						break;
					}
					HX_STACK_LINE(476)
					int index = (_g1)++;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(476)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 current = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data->__get((index * (int)3)),data->__get(((index * (int)3) + (int)1)),data->__get(((index * (int)3) + (int)2)));		HX_STACK_VAR(current,"current");
					HX_STACK_LINE(476)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(476)
					{
						HX_STACK_LINE(476)
						Float x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(476)
						if (((current->x < minimum->x))){
							HX_STACK_LINE(476)
							x = current->x;
						}
						else{
							HX_STACK_LINE(476)
							x = minimum->x;
						}
						HX_STACK_LINE(476)
						Float y;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(476)
						if (((current->y < minimum->y))){
							HX_STACK_LINE(476)
							y = current->y;
						}
						else{
							HX_STACK_LINE(476)
							y = minimum->y;
						}
						HX_STACK_LINE(476)
						Float z;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(476)
						if (((current->z < minimum->z))){
							HX_STACK_LINE(476)
							z = current->z;
						}
						else{
							HX_STACK_LINE(476)
							z = minimum->z;
						}
						HX_STACK_LINE(476)
						_g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
					}
					HX_STACK_LINE(476)
					minimum = _g2;
					HX_STACK_LINE(476)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(476)
					{
						HX_STACK_LINE(476)
						Float x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(476)
						if (((current->x > maximum->x))){
							HX_STACK_LINE(476)
							x = current->x;
						}
						else{
							HX_STACK_LINE(476)
							x = maximum->x;
						}
						HX_STACK_LINE(476)
						Float y;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(476)
						if (((current->y > maximum->y))){
							HX_STACK_LINE(476)
							y = current->y;
						}
						else{
							HX_STACK_LINE(476)
							y = maximum->y;
						}
						HX_STACK_LINE(476)
						Float z;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(476)
						if (((current->z > maximum->z))){
							HX_STACK_LINE(476)
							z = current->z;
						}
						else{
							HX_STACK_LINE(476)
							z = maximum->z;
						}
						HX_STACK_LINE(476)
						_g11 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
					}
					HX_STACK_LINE(476)
					maximum = _g11;
				}
			}
			struct _Function_2_1{
				inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 &maximum){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",476,0x2cff64c0)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("minimum") , minimum,false);
						__result->Add(HX_CSTRING("maximum") , maximum,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(476)
			extend = _Function_2_1::Block(minimum,maximum);
		}
		HX_STACK_LINE(477)
		::com::gamestudiohx::babylonhx::culling::BoundingInfo _g2 = ::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__new(extend->__Field(HX_CSTRING("minimum"),true),extend->__Field(HX_CSTRING("maximum"),true));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(477)
		this->_boundingInfo = _g2;
		HX_STACK_LINE(479)
		{
			HX_STACK_LINE(479)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(479)
			int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(479)
			while((true)){
				HX_STACK_LINE(479)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(479)
					break;
				}
				HX_STACK_LINE(479)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(480)
				{
					HX_STACK_LINE(480)
					::com::gamestudiohx::babylonhx::mesh::SubMesh _this = this->subMeshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(480)
					Array< Float > data1 = _this->_renderingMesh->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(480)
					if (((data1 != null()))){
						HX_STACK_LINE(480)
						Dynamic extend1;		HX_STACK_VAR(extend1,"extend1");
						HX_STACK_LINE(480)
						{
							HX_STACK_LINE(480)
							int start = _this->verticesStart;		HX_STACK_VAR(start,"start");
							HX_STACK_LINE(480)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(minimum,"minimum");
							HX_STACK_LINE(480)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY);		HX_STACK_VAR(maximum,"maximum");
							HX_STACK_LINE(480)
							{
								HX_STACK_LINE(480)
								int _g11 = start;		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(480)
								int _g3 = (start + _this->verticesCount);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(480)
								while((true)){
									HX_STACK_LINE(480)
									if ((!(((_g11 < _g3))))){
										HX_STACK_LINE(480)
										break;
									}
									HX_STACK_LINE(480)
									int index1 = (_g11)++;		HX_STACK_VAR(index1,"index1");
									HX_STACK_LINE(480)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 current = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data1->__get((index1 * (int)3)),data1->__get(((index1 * (int)3) + (int)1)),data1->__get(((index1 * (int)3) + (int)2)));		HX_STACK_VAR(current,"current");
									HX_STACK_LINE(480)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 _g31;		HX_STACK_VAR(_g31,"_g31");
									HX_STACK_LINE(480)
									{
										HX_STACK_LINE(480)
										Float x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(480)
										if (((current->x < minimum->x))){
											HX_STACK_LINE(480)
											x = current->x;
										}
										else{
											HX_STACK_LINE(480)
											x = minimum->x;
										}
										HX_STACK_LINE(480)
										Float y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(480)
										if (((current->y < minimum->y))){
											HX_STACK_LINE(480)
											y = current->y;
										}
										else{
											HX_STACK_LINE(480)
											y = minimum->y;
										}
										HX_STACK_LINE(480)
										Float z;		HX_STACK_VAR(z,"z");
										HX_STACK_LINE(480)
										if (((current->z < minimum->z))){
											HX_STACK_LINE(480)
											z = current->z;
										}
										else{
											HX_STACK_LINE(480)
											z = minimum->z;
										}
										HX_STACK_LINE(480)
										_g31 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
									}
									HX_STACK_LINE(480)
									minimum = _g31;
									HX_STACK_LINE(480)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4;		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(480)
									{
										HX_STACK_LINE(480)
										Float x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(480)
										if (((current->x > maximum->x))){
											HX_STACK_LINE(480)
											x = current->x;
										}
										else{
											HX_STACK_LINE(480)
											x = maximum->x;
										}
										HX_STACK_LINE(480)
										Float y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(480)
										if (((current->y > maximum->y))){
											HX_STACK_LINE(480)
											y = current->y;
										}
										else{
											HX_STACK_LINE(480)
											y = maximum->y;
										}
										HX_STACK_LINE(480)
										Float z;		HX_STACK_VAR(z,"z");
										HX_STACK_LINE(480)
										if (((current->z > maximum->z))){
											HX_STACK_LINE(480)
											z = current->z;
										}
										else{
											HX_STACK_LINE(480)
											z = maximum->z;
										}
										HX_STACK_LINE(480)
										_g4 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
									}
									HX_STACK_LINE(480)
									maximum = _g4;
								}
							}
							struct _Function_6_1{
								inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 &maximum){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",480,0x2cff64c0)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("minimum") , minimum,false);
										__result->Add(HX_CSTRING("maximum") , maximum,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(480)
							extend1 = _Function_6_1::Block(minimum,maximum);
						}
						HX_STACK_LINE(480)
						::com::gamestudiohx::babylonhx::culling::BoundingInfo _g5 = ::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__new(extend1->__Field(HX_CSTRING("minimum"),true),extend1->__Field(HX_CSTRING("maximum"),true));		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(480)
						_this->_boundingInfo = _g5;
					}
				}
			}
		}
		HX_STACK_LINE(483)
		if (((this->_boundingInfo != null()))){
			HX_STACK_LINE(483)
			Float _g6 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(483)
			this->_scaleFactor = _g6;
			HX_STACK_LINE(483)
			Float _g7 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(483)
			this->_scaleFactor = _g7;
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",483,0x2cff64c0)
					{
						HX_STACK_LINE(483)
						Dynamic _g8 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(483)
						return (_g8 != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(483)
			if (((  (((this->parent != null()))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(483)
				Dynamic _g9 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(483)
				Float _g10 = (this->_scaleFactor * _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(483)
				this->_scaleFactor = _g10;
			}
			HX_STACK_LINE(483)
			this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
			HX_STACK_LINE(483)
			{
				HX_STACK_LINE(483)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(483)
				int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(483)
				while((true)){
					HX_STACK_LINE(483)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(483)
						break;
					}
					HX_STACK_LINE(483)
					int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
					HX_STACK_LINE(483)
					::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
					HX_STACK_LINE(483)
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
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","_updateBoundingInfo",0xe096790a,"com.gamestudiohx.babylonhx.mesh.AbstractMesh._updateBoundingInfo","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",487,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(487)
		if (((this->_boundingInfo != null()))){
			HX_STACK_LINE(488)
			Float _g = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(488)
			this->_scaleFactor = _g;
			HX_STACK_LINE(489)
			Float _g1 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(489)
			this->_scaleFactor = _g1;
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",491,0x2cff64c0)
					{
						HX_STACK_LINE(491)
						Dynamic _g2 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(491)
						return (_g2 != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(491)
			if (((  (((this->parent != null()))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(492)
				Dynamic _g3 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(492)
				Float _g4 = (this->_scaleFactor * _g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(492)
				this->_scaleFactor = _g4;
			}
			HX_STACK_LINE(494)
			this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
			HX_STACK_LINE(496)
			{
				HX_STACK_LINE(496)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(496)
				int _g2 = this->subMeshes->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(496)
				while((true)){
					HX_STACK_LINE(496)
					if ((!(((_g11 < _g2))))){
						HX_STACK_LINE(496)
						break;
					}
					HX_STACK_LINE(496)
					int subIndex = (_g11)++;		HX_STACK_VAR(subIndex,"subIndex");
					HX_STACK_LINE(497)
					::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
					HX_STACK_LINE(499)
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
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","computeWorldMatrix",0x5b0a0eac,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.computeWorldMatrix","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",504,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(force,"force")
{
		HX_STACK_LINE(505)
		::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",506,0x2cff64c0)
				{
					HX_STACK_LINE(506)
					int _g = __this->_scene->getRenderId();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(506)
					return (  ((!(((__this->_currentRenderId == _g))))) ? bool(__this->isSynchronized(null())) : bool(true) );
				}
				return null();
			}
		};
		HX_STACK_LINE(506)
		if (((  ((!(force))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(507)
			this->_childrenFlag = (int)0;
		}
		else{
			HX_STACK_LINE(509)
			this->_childrenFlag = (int)1;
			HX_STACK_LINE(510)
			this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
			HX_STACK_LINE(511)
			this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
			HX_STACK_LINE(512)
			this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
			HX_STACK_LINE(513)
			int _g1 = this->_scene->getRenderId();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(513)
			this->_currentRenderId = _g1;
			HX_STACK_LINE(516)
			{
				HX_STACK_LINE(516)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(516)
				result->m[(int)0] = this->scaling->x;
				HX_STACK_LINE(516)
				result->m[(int)1] = (int)0;
				HX_STACK_LINE(516)
				result->m[(int)2] = (int)0;
				HX_STACK_LINE(516)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(516)
				result->m[(int)4] = (int)0;
				HX_STACK_LINE(516)
				result->m[(int)5] = this->scaling->y;
				HX_STACK_LINE(516)
				result->m[(int)6] = (int)0;
				HX_STACK_LINE(516)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(516)
				result->m[(int)8] = (int)0;
				HX_STACK_LINE(516)
				result->m[(int)9] = (int)0;
				HX_STACK_LINE(516)
				result->m[(int)10] = this->scaling->z;
				HX_STACK_LINE(516)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(516)
				result->m[(int)12] = (int)0;
				HX_STACK_LINE(516)
				result->m[(int)13] = (int)0;
				HX_STACK_LINE(516)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(516)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(516)
				result;
			}
			HX_STACK_LINE(519)
			if (((this->rotationQuaternion != null()))){
				HX_STACK_LINE(520)
				{
					HX_STACK_LINE(520)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = this->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(520)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(520)
					Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(520)
					Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(520)
					Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
					HX_STACK_LINE(520)
					Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
					HX_STACK_LINE(520)
					Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
					HX_STACK_LINE(520)
					Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
					HX_STACK_LINE(520)
					Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
					HX_STACK_LINE(520)
					Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
					HX_STACK_LINE(520)
					Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
					HX_STACK_LINE(520)
					result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
					HX_STACK_LINE(520)
					result->m[(int)1] = (2.0 * ((xy + zw)));
					HX_STACK_LINE(520)
					result->m[(int)2] = (2.0 * ((zx - yw)));
					HX_STACK_LINE(520)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(520)
					result->m[(int)4] = (2.0 * ((xy - zw)));
					HX_STACK_LINE(520)
					result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
					HX_STACK_LINE(520)
					result->m[(int)6] = (2.0 * ((yz + xw)));
					HX_STACK_LINE(520)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(520)
					result->m[(int)8] = (2.0 * ((zx + yw)));
					HX_STACK_LINE(520)
					result->m[(int)9] = (2.0 * ((yz - xw)));
					HX_STACK_LINE(520)
					result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
					HX_STACK_LINE(520)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(520)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(520)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(520)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(520)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(520)
					result;
				}
				HX_STACK_LINE(521)
				this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
			}
			else{
				HX_STACK_LINE(523)
				{
					HX_STACK_LINE(523)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(523)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
					HX_STACK_LINE(523)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(523)
					{
						HX_STACK_LINE(523)
						Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
						HX_STACK_LINE(523)
						Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
						HX_STACK_LINE(523)
						Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
						HX_STACK_LINE(523)
						Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
						HX_STACK_LINE(523)
						Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
						HX_STACK_LINE(523)
						Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
						HX_STACK_LINE(523)
						Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
						HX_STACK_LINE(523)
						Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
						HX_STACK_LINE(523)
						Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
						HX_STACK_LINE(523)
						tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
						HX_STACK_LINE(523)
						tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
						HX_STACK_LINE(523)
						tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
						HX_STACK_LINE(523)
						tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
						HX_STACK_LINE(523)
						_g2 = tempQuaternion;
					}
					HX_STACK_LINE(523)
					tempQuaternion = _g2;
					HX_STACK_LINE(523)
					{
						HX_STACK_LINE(523)
						Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(523)
						Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(523)
						Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(523)
						Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(523)
						Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
						HX_STACK_LINE(523)
						Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
						HX_STACK_LINE(523)
						Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
						HX_STACK_LINE(523)
						Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(523)
						Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
						HX_STACK_LINE(523)
						result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
						HX_STACK_LINE(523)
						result->m[(int)1] = (2.0 * ((xy + zw)));
						HX_STACK_LINE(523)
						result->m[(int)2] = (2.0 * ((zx - yw)));
						HX_STACK_LINE(523)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(523)
						result->m[(int)4] = (2.0 * ((xy - zw)));
						HX_STACK_LINE(523)
						result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
						HX_STACK_LINE(523)
						result->m[(int)6] = (2.0 * ((yz + xw)));
						HX_STACK_LINE(523)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(523)
						result->m[(int)8] = (2.0 * ((zx + yw)));
						HX_STACK_LINE(523)
						result->m[(int)9] = (2.0 * ((yz - xw)));
						HX_STACK_LINE(523)
						result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
						HX_STACK_LINE(523)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(523)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(523)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(523)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(523)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(523)
						result;
					}
				}
				HX_STACK_LINE(524)
				this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
			}
			HX_STACK_LINE(528)
			if ((this->infiniteDistance)){
				HX_STACK_LINE(529)
				::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(530)
				{
					HX_STACK_LINE(530)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(530)
					{
						HX_STACK_LINE(530)
						result->m[(int)0] = 1.0;
						HX_STACK_LINE(530)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(530)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(530)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(530)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(530)
						result->m[(int)5] = 1.0;
						HX_STACK_LINE(530)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(530)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(530)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(530)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(530)
						result->m[(int)10] = 1.0;
						HX_STACK_LINE(530)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(530)
						result->m[(int)12] = (this->position->x + camera->position->x);
						HX_STACK_LINE(530)
						result->m[(int)13] = (this->position->y + camera->position->y);
						HX_STACK_LINE(530)
						result->m[(int)14] = (this->position->z + camera->position->z);
						HX_STACK_LINE(530)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(530)
						result;
					}
				}
			}
			else{
				HX_STACK_LINE(532)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(532)
				{
					HX_STACK_LINE(532)
					result->m[(int)0] = 1.0;
					HX_STACK_LINE(532)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(532)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(532)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(532)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(532)
					result->m[(int)5] = 1.0;
					HX_STACK_LINE(532)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(532)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(532)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(532)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(532)
					result->m[(int)10] = 1.0;
					HX_STACK_LINE(532)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(532)
					result->m[(int)12] = this->position->x;
					HX_STACK_LINE(532)
					result->m[(int)13] = this->position->y;
					HX_STACK_LINE(532)
					result->m[(int)14] = this->position->z;
					HX_STACK_LINE(532)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(532)
					result;
				}
			}
			HX_STACK_LINE(536)
			{
				HX_STACK_LINE(536)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(536)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(536)
				{
					HX_STACK_LINE(536)
					Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(536)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(536)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(536)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(536)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(536)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(536)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(536)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(536)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(536)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(536)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(536)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(536)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(536)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(536)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(536)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(536)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(536)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(536)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(536)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(536)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(536)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(536)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(536)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(536)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(536)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(536)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(536)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(536)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(536)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(536)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(536)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(536)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(536)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(536)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(536)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(536)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(536)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(536)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(536)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(536)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(536)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(536)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(536)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(536)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(536)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(536)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(536)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(536)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(536)
					result;
				}
			}
			HX_STACK_LINE(537)
			{
				HX_STACK_LINE(537)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(537)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(537)
				{
					HX_STACK_LINE(537)
					Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
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
			HX_STACK_LINE(540)
			if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
				HX_STACK_LINE(541)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
				HX_STACK_LINE(541)
				{
					HX_STACK_LINE(541)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(541)
					localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
				}
				HX_STACK_LINE(542)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
				HX_STACK_LINE(542)
				{
					HX_STACK_LINE(542)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(542)
					zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
				}
				HX_STACK_LINE(544)
				if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
					HX_STACK_LINE(545)
					{
						HX_STACK_LINE(545)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(545)
						hx::AddEq(localPosition->x,otherVector->x);
						HX_STACK_LINE(545)
						hx::AddEq(localPosition->y,otherVector->y);
						HX_STACK_LINE(545)
						hx::AddEq(localPosition->z,otherVector->z);
					}
					HX_STACK_LINE(546)
					{
						HX_STACK_LINE(546)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(546)
						{
							HX_STACK_LINE(546)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(546)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(546)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(546)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(546)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(546)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(546)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(546)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(546)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(546)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(546)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(546)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(546)
							result->m[(int)12] = localPosition->x;
							HX_STACK_LINE(546)
							result->m[(int)13] = localPosition->y;
							HX_STACK_LINE(546)
							result->m[(int)14] = localPosition->z;
							HX_STACK_LINE(546)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(546)
							result;
						}
					}
				}
				HX_STACK_LINE(549)
				if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
					HX_STACK_LINE(550)
					zero = this->_scene->activeCamera->position;
				}
				else{
					HX_STACK_LINE(552)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
						HX_STACK_LINE(553)
						zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
					HX_STACK_LINE(554)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
						HX_STACK_LINE(555)
						zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
					HX_STACK_LINE(556)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
						HX_STACK_LINE(557)
						zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
				}
				HX_STACK_LINE(560)
				{
					HX_STACK_LINE(560)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
					HX_STACK_LINE(560)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(560)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
					HX_STACK_LINE(560)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
					HX_STACK_LINE(560)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
					HX_STACK_LINE(560)
					{
						HX_STACK_LINE(560)
						zAxis->x = (zero->x - localPosition->x);
						HX_STACK_LINE(560)
						zAxis->y = (zero->y - localPosition->y);
						HX_STACK_LINE(560)
						zAxis->z = (zero->z - localPosition->z);
					}
					HX_STACK_LINE(560)
					{
						HX_STACK_LINE(560)
						Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(560)
						if (((len != (int)0))){
							HX_STACK_LINE(560)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(560)
							hx::MultEq(zAxis->x,num);
							HX_STACK_LINE(560)
							hx::MultEq(zAxis->y,num);
							HX_STACK_LINE(560)
							hx::MultEq(zAxis->z,num);
						}
					}
					HX_STACK_LINE(560)
					{
						HX_STACK_LINE(560)
						xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
						HX_STACK_LINE(560)
						xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
						HX_STACK_LINE(560)
						xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
					}
					HX_STACK_LINE(560)
					{
						HX_STACK_LINE(560)
						Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(560)
						if (((len != (int)0))){
							HX_STACK_LINE(560)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(560)
							hx::MultEq(xAxis->x,num);
							HX_STACK_LINE(560)
							hx::MultEq(xAxis->y,num);
							HX_STACK_LINE(560)
							hx::MultEq(xAxis->z,num);
						}
					}
					HX_STACK_LINE(560)
					{
						HX_STACK_LINE(560)
						yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
						HX_STACK_LINE(560)
						yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
						HX_STACK_LINE(560)
						yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
					}
					HX_STACK_LINE(560)
					{
						HX_STACK_LINE(560)
						Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(560)
						if (((len != (int)0))){
							HX_STACK_LINE(560)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(560)
							hx::MultEq(yAxis->x,num);
							HX_STACK_LINE(560)
							hx::MultEq(yAxis->y,num);
							HX_STACK_LINE(560)
							hx::MultEq(yAxis->z,num);
						}
					}
					HX_STACK_LINE(560)
					Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
					HX_STACK_LINE(560)
					Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
					HX_STACK_LINE(560)
					Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
					HX_STACK_LINE(560)
					{
						HX_STACK_LINE(560)
						result->m[(int)0] = xAxis->x;
						HX_STACK_LINE(560)
						result->m[(int)1] = yAxis->x;
						HX_STACK_LINE(560)
						result->m[(int)2] = zAxis->x;
						HX_STACK_LINE(560)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(560)
						result->m[(int)4] = xAxis->y;
						HX_STACK_LINE(560)
						result->m[(int)5] = yAxis->y;
						HX_STACK_LINE(560)
						result->m[(int)6] = zAxis->y;
						HX_STACK_LINE(560)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(560)
						result->m[(int)8] = xAxis->z;
						HX_STACK_LINE(560)
						result->m[(int)9] = yAxis->z;
						HX_STACK_LINE(560)
						result->m[(int)10] = zAxis->z;
						HX_STACK_LINE(560)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(560)
						result->m[(int)12] = ex;
						HX_STACK_LINE(560)
						result->m[(int)13] = ey;
						HX_STACK_LINE(560)
						result->m[(int)14] = ez;
						HX_STACK_LINE(560)
						result->m[(int)15] = (int)1;
						HX_STACK_LINE(560)
						result;
					}
				}
				HX_STACK_LINE(561)
				this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
				HX_STACK_LINE(563)
				{
					HX_STACK_LINE(563)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localBillboard;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(563)
					{
						HX_STACK_LINE(563)
						Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
						HX_STACK_LINE(563)
						Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
						HX_STACK_LINE(563)
						Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
						HX_STACK_LINE(563)
						Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
						HX_STACK_LINE(563)
						Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
						HX_STACK_LINE(563)
						Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
						HX_STACK_LINE(563)
						Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
						HX_STACK_LINE(563)
						Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
						HX_STACK_LINE(563)
						Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
						HX_STACK_LINE(563)
						Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
						HX_STACK_LINE(563)
						Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
						HX_STACK_LINE(563)
						Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
						HX_STACK_LINE(563)
						Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
						HX_STACK_LINE(563)
						Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
						HX_STACK_LINE(563)
						Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
						HX_STACK_LINE(563)
						Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
						HX_STACK_LINE(563)
						Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
						HX_STACK_LINE(563)
						Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
						HX_STACK_LINE(563)
						Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
						HX_STACK_LINE(563)
						Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
						HX_STACK_LINE(563)
						Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
						HX_STACK_LINE(563)
						Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
						HX_STACK_LINE(563)
						Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
						HX_STACK_LINE(563)
						Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
						HX_STACK_LINE(563)
						Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
						HX_STACK_LINE(563)
						Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
						HX_STACK_LINE(563)
						Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
						HX_STACK_LINE(563)
						Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
						HX_STACK_LINE(563)
						Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
						HX_STACK_LINE(563)
						Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
						HX_STACK_LINE(563)
						Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
						HX_STACK_LINE(563)
						Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
						HX_STACK_LINE(563)
						Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
						HX_STACK_LINE(563)
						Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
						HX_STACK_LINE(563)
						Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
						HX_STACK_LINE(563)
						Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
						HX_STACK_LINE(563)
						Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
						HX_STACK_LINE(563)
						Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
						HX_STACK_LINE(563)
						Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
						HX_STACK_LINE(563)
						_this->m[(int)0] = (l23 * l27);
						HX_STACK_LINE(563)
						_this->m[(int)4] = (l24 * l27);
						HX_STACK_LINE(563)
						_this->m[(int)8] = (l25 * l27);
						HX_STACK_LINE(563)
						_this->m[(int)12] = (l26 * l27);
						HX_STACK_LINE(563)
						_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
						HX_STACK_LINE(563)
						_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
						HX_STACK_LINE(563)
						_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
						HX_STACK_LINE(563)
						_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
						HX_STACK_LINE(563)
						_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
						HX_STACK_LINE(563)
						_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
						HX_STACK_LINE(563)
						_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
						HX_STACK_LINE(563)
						_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
						HX_STACK_LINE(563)
						_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
						HX_STACK_LINE(563)
						_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
						HX_STACK_LINE(563)
						_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
						HX_STACK_LINE(563)
						_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
					}
				}
				HX_STACK_LINE(565)
				{
					HX_STACK_LINE(565)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(565)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(565)
					{
						HX_STACK_LINE(565)
						Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(565)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(565)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(565)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(565)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(565)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(565)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(565)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(565)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(565)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(565)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(565)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(565)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(565)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(565)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(565)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(565)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(565)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(565)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(565)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(565)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(565)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(565)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(565)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(565)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(565)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(565)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(565)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(565)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(565)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(565)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(565)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(565)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(565)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(565)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(565)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(565)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(565)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(565)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(565)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(565)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(565)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(565)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(565)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(565)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(565)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(565)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(565)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(565)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(565)
						result;
					}
				}
				HX_STACK_LINE(566)
				{
					HX_STACK_LINE(566)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(566)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(566)
					{
						HX_STACK_LINE(566)
						Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
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
			}
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",570,0x2cff64c0)
					{
						HX_STACK_LINE(570)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _g3 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(570)
						return (_g3 != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(570)
			if (((  (((  (((this->parent != null()))) ? bool(_Function_2_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
				HX_STACK_LINE(571)
				{
					HX_STACK_LINE(571)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(571)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(571)
					{
						HX_STACK_LINE(571)
						Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(571)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(571)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(571)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(571)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(571)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(571)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(571)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(571)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(571)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(571)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(571)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(571)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(571)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(571)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(571)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(571)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(571)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(571)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(571)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(571)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(571)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(571)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(571)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(571)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(571)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(571)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(571)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(571)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(571)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(571)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(571)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(571)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(571)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(571)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(571)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(571)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(571)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(571)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(571)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(571)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(571)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(571)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(571)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(571)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(571)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(571)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(571)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(571)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(571)
						result;
					}
				}
				HX_STACK_LINE(572)
				::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
				HX_STACK_LINE(574)
				{
					HX_STACK_LINE(574)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localWorld;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(574)
					{
						HX_STACK_LINE(574)
						Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(574)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(574)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(574)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(574)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(574)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(574)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(574)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(574)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(574)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(574)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(574)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(574)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(574)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(574)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(574)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(574)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(574)
						Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(574)
						Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(574)
						Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(574)
						Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(574)
						Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(574)
						Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(574)
						Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(574)
						Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(574)
						Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(574)
						Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(574)
						Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(574)
						Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(574)
						Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(574)
						Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(574)
						Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(574)
						Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(574)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(574)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(574)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(574)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(574)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(574)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(574)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(574)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(574)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(574)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(574)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(574)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(574)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(574)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(574)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(574)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(574)
						result;
					}
				}
			}
			else{
				HX_STACK_LINE(576)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(576)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(576)
				{
					HX_STACK_LINE(576)
					Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(576)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(576)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(576)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(576)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(576)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(576)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(576)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(576)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(576)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(576)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(576)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(576)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(576)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(576)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(576)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(576)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(576)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(576)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(576)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(576)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(576)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(576)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(576)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(576)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(576)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(576)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(576)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(576)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(576)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(576)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(576)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(576)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(576)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(576)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(576)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(576)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(576)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(576)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(576)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(576)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(576)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(576)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(576)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(576)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(576)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(576)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(576)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(576)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(576)
					result;
				}
			}
			HX_STACK_LINE(580)
			if (((this->_boundingInfo != null()))){
				HX_STACK_LINE(580)
				Float _g4 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(580)
				this->_scaleFactor = _g4;
				HX_STACK_LINE(580)
				Float _g5 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(580)
				this->_scaleFactor = _g5;
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",580,0x2cff64c0)
						{
							HX_STACK_LINE(580)
							Dynamic _g6 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(580)
							return (_g6 != null());
						}
						return null();
					}
				};
				HX_STACK_LINE(580)
				if (((  (((this->parent != null()))) ? bool(_Function_3_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(580)
					Dynamic _g7 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(580)
					Float _g8 = (this->_scaleFactor * _g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(580)
					this->_scaleFactor = _g8;
				}
				HX_STACK_LINE(580)
				this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
				HX_STACK_LINE(580)
				{
					HX_STACK_LINE(580)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(580)
					int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(580)
					while((true)){
						HX_STACK_LINE(580)
						if ((!(((_g11 < _g))))){
							HX_STACK_LINE(580)
							break;
						}
						HX_STACK_LINE(580)
						int subIndex = (_g11)++;		HX_STACK_VAR(subIndex,"subIndex");
						HX_STACK_LINE(580)
						::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
						HX_STACK_LINE(580)
						subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
					}
				}
			}
			HX_STACK_LINE(583)
			{
				HX_STACK_LINE(583)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_absolutePosition;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(583)
				_this->x = this->_worldMatrix->m->__get((int)12);
				HX_STACK_LINE(583)
				_this->y = this->_worldMatrix->m->__get((int)13);
				HX_STACK_LINE(583)
				_this->z = this->_worldMatrix->m->__get((int)14);
			}
			HX_STACK_LINE(584)
			ret = this->_worldMatrix;
		}
		HX_STACK_LINE(587)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,computeWorldMatrix,return )

Void AbstractMesh_obj::bindAndDraw( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,::com::gamestudiohx::babylonhx::materials::Effect effect,bool wireframe){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","bindAndDraw",0xff70898e,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.bindAndDraw","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",657,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(subMesh,"subMesh")
		HX_STACK_ARG(effect,"effect")
		HX_STACK_ARG(wireframe,"wireframe")
		HX_STACK_LINE(658)
		::com::gamestudiohx::babylonhx::Engine engine = this->_scene->getEngine();		HX_STACK_VAR(engine,"engine");
		HX_STACK_LINE(661)
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer indexToBind = this->_indexBuffer;		HX_STACK_VAR(indexToBind,"indexToBind");
		HX_STACK_LINE(662)
		bool useTriangles = true;		HX_STACK_VAR(useTriangles,"useTriangles");
		HX_STACK_LINE(664)
		if ((wireframe)){
			HX_STACK_LINE(665)
			::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(665)
			{
				HX_STACK_LINE(665)
				Array< int > indices = this->_indices;		HX_STACK_VAR(indices,"indices");
				HX_STACK_LINE(665)
				if (((subMesh->_linesIndexBuffer == null()))){
					HX_STACK_LINE(665)
					Array< int > linesIndices = Array_obj< int >::__new();		HX_STACK_VAR(linesIndices,"linesIndices");
					HX_STACK_LINE(665)
					int index = subMesh->indexStart;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(665)
					while((true)){
						HX_STACK_LINE(665)
						if ((!(((index < (subMesh->indexStart + subMesh->indexCount)))))){
							HX_STACK_LINE(665)
							break;
						}
						HX_STACK_LINE(665)
						linesIndices->push(indices->__get(index));
						HX_STACK_LINE(665)
						linesIndices->push(indices->__get((index + (int)1)));
						HX_STACK_LINE(665)
						linesIndices->push(indices->__get((index + (int)1)));
						HX_STACK_LINE(665)
						linesIndices->push(indices->__get((index + (int)2)));
						HX_STACK_LINE(665)
						linesIndices->push(indices->__get((index + (int)2)));
						HX_STACK_LINE(665)
						linesIndices->push(indices->__get(index));
						HX_STACK_LINE(665)
						hx::AddEq(index,(int)3);
					}
					HX_STACK_LINE(665)
					::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g = engine->createIndexBuffer(linesIndices);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(665)
					subMesh->_linesIndexBuffer = _g;
					HX_STACK_LINE(665)
					subMesh->linesIndexCount = linesIndices->length;
				}
				HX_STACK_LINE(665)
				_g1 = subMesh->_linesIndexBuffer;
			}
			HX_STACK_LINE(665)
			indexToBind = _g1;
			HX_STACK_LINE(666)
			useTriangles = false;
		}
		HX_STACK_LINE(670)
		engine->bindMultiBuffers(this->_vertexBuffers,indexToBind,effect);
		HX_STACK_LINE(673)
		engine->draw(useTriangles,(  ((useTriangles)) ? int(subMesh->indexStart) : int((int)0) ),(  ((useTriangles)) ? int(subMesh->indexCount) : int(subMesh->linesIndexCount) ),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AbstractMesh_obj,bindAndDraw,(void))

Void AbstractMesh_obj::setLocalTranslation( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector3){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","setLocalTranslation",0x91d10858,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.setLocalTranslation","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",813,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vector3,"vector3")
		HX_STACK_LINE(814)
		{
			HX_STACK_LINE(814)
			bool force = false;		HX_STACK_VAR(force,"force");
			HX_STACK_LINE(814)
			::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",814,0x2cff64c0)
					{
						HX_STACK_LINE(814)
						int _g = __this->_scene->getRenderId();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(814)
						return (  ((!(((__this->_currentRenderId == _g))))) ? bool(__this->isSynchronized(null())) : bool(true) );
					}
					return null();
				}
			};
			HX_STACK_LINE(814)
			if (((  ((!(force))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(814)
				this->_childrenFlag = (int)0;
			}
			else{
				HX_STACK_LINE(814)
				this->_childrenFlag = (int)1;
				HX_STACK_LINE(814)
				this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
				HX_STACK_LINE(814)
				this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
				HX_STACK_LINE(814)
				this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
				HX_STACK_LINE(814)
				int _g1 = this->_scene->getRenderId();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(814)
				this->_currentRenderId = _g1;
				HX_STACK_LINE(814)
				{
					HX_STACK_LINE(814)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(814)
					result->m[(int)0] = this->scaling->x;
					HX_STACK_LINE(814)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(814)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(814)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(814)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(814)
					result->m[(int)5] = this->scaling->y;
					HX_STACK_LINE(814)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(814)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(814)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(814)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(814)
					result->m[(int)10] = this->scaling->z;
					HX_STACK_LINE(814)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(814)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(814)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(814)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(814)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(814)
					result;
				}
				HX_STACK_LINE(814)
				if (((this->rotationQuaternion != null()))){
					HX_STACK_LINE(814)
					{
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = this->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(814)
						Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(814)
						Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(814)
						Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(814)
						Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(814)
						Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
						HX_STACK_LINE(814)
						Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
						HX_STACK_LINE(814)
						Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
						HX_STACK_LINE(814)
						Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(814)
						Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
						HX_STACK_LINE(814)
						result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
						HX_STACK_LINE(814)
						result->m[(int)1] = (2.0 * ((xy + zw)));
						HX_STACK_LINE(814)
						result->m[(int)2] = (2.0 * ((zx - yw)));
						HX_STACK_LINE(814)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(814)
						result->m[(int)4] = (2.0 * ((xy - zw)));
						HX_STACK_LINE(814)
						result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
						HX_STACK_LINE(814)
						result->m[(int)6] = (2.0 * ((yz + xw)));
						HX_STACK_LINE(814)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(814)
						result->m[(int)8] = (2.0 * ((zx + yw)));
						HX_STACK_LINE(814)
						result->m[(int)9] = (2.0 * ((yz - xw)));
						HX_STACK_LINE(814)
						result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
						HX_STACK_LINE(814)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(814)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(814)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(814)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(814)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(814)
						result;
					}
					HX_STACK_LINE(814)
					this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
				}
				else{
					HX_STACK_LINE(814)
					{
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(814)
						{
							HX_STACK_LINE(814)
							Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
							HX_STACK_LINE(814)
							Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
							HX_STACK_LINE(814)
							Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
							HX_STACK_LINE(814)
							Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
							HX_STACK_LINE(814)
							Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
							HX_STACK_LINE(814)
							Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
							HX_STACK_LINE(814)
							Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
							HX_STACK_LINE(814)
							Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
							HX_STACK_LINE(814)
							Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
							HX_STACK_LINE(814)
							tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
							HX_STACK_LINE(814)
							tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
							HX_STACK_LINE(814)
							tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
							HX_STACK_LINE(814)
							tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
							HX_STACK_LINE(814)
							_g2 = tempQuaternion;
						}
						HX_STACK_LINE(814)
						tempQuaternion = _g2;
						HX_STACK_LINE(814)
						{
							HX_STACK_LINE(814)
							Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(814)
							Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
							HX_STACK_LINE(814)
							Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
							HX_STACK_LINE(814)
							Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
							HX_STACK_LINE(814)
							Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
							HX_STACK_LINE(814)
							Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
							HX_STACK_LINE(814)
							Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
							HX_STACK_LINE(814)
							Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
							HX_STACK_LINE(814)
							Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
							HX_STACK_LINE(814)
							result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
							HX_STACK_LINE(814)
							result->m[(int)1] = (2.0 * ((xy + zw)));
							HX_STACK_LINE(814)
							result->m[(int)2] = (2.0 * ((zx - yw)));
							HX_STACK_LINE(814)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)4] = (2.0 * ((xy - zw)));
							HX_STACK_LINE(814)
							result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
							HX_STACK_LINE(814)
							result->m[(int)6] = (2.0 * ((yz + xw)));
							HX_STACK_LINE(814)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)8] = (2.0 * ((zx + yw)));
							HX_STACK_LINE(814)
							result->m[(int)9] = (2.0 * ((yz - xw)));
							HX_STACK_LINE(814)
							result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
							HX_STACK_LINE(814)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)12] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)13] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)14] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(814)
							result;
						}
					}
					HX_STACK_LINE(814)
					this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
				}
				HX_STACK_LINE(814)
				if ((this->infiniteDistance)){
					HX_STACK_LINE(814)
					::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
					HX_STACK_LINE(814)
					{
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(814)
						{
							HX_STACK_LINE(814)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(814)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(814)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(814)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)12] = (this->position->x + camera->position->x);
							HX_STACK_LINE(814)
							result->m[(int)13] = (this->position->y + camera->position->y);
							HX_STACK_LINE(814)
							result->m[(int)14] = (this->position->z + camera->position->z);
							HX_STACK_LINE(814)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(814)
							result;
						}
					}
				}
				else{
					HX_STACK_LINE(814)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(814)
					{
						HX_STACK_LINE(814)
						result->m[(int)0] = 1.0;
						HX_STACK_LINE(814)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(814)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(814)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(814)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(814)
						result->m[(int)5] = 1.0;
						HX_STACK_LINE(814)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(814)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(814)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(814)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(814)
						result->m[(int)10] = 1.0;
						HX_STACK_LINE(814)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(814)
						result->m[(int)12] = this->position->x;
						HX_STACK_LINE(814)
						result->m[(int)13] = this->position->y;
						HX_STACK_LINE(814)
						result->m[(int)14] = this->position->z;
						HX_STACK_LINE(814)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(814)
						result;
					}
				}
				HX_STACK_LINE(814)
				{
					HX_STACK_LINE(814)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(814)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(814)
					{
						HX_STACK_LINE(814)
						Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(814)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(814)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(814)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(814)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(814)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(814)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(814)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(814)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(814)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(814)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(814)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(814)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(814)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(814)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(814)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(814)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(814)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(814)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(814)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(814)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(814)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(814)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(814)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(814)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(814)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(814)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(814)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(814)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(814)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(814)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(814)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(814)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(814)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(814)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(814)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(814)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(814)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(814)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(814)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(814)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(814)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(814)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(814)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(814)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(814)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(814)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(814)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(814)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(814)
						result;
					}
				}
				HX_STACK_LINE(814)
				{
					HX_STACK_LINE(814)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(814)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(814)
					{
						HX_STACK_LINE(814)
						Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(814)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(814)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(814)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(814)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(814)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(814)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(814)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(814)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(814)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(814)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(814)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(814)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(814)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(814)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(814)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(814)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(814)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(814)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(814)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(814)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(814)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(814)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(814)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(814)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(814)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(814)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(814)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(814)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(814)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(814)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(814)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(814)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(814)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(814)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(814)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(814)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(814)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(814)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(814)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(814)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(814)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(814)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(814)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(814)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(814)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(814)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(814)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(814)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(814)
						result;
					}
				}
				HX_STACK_LINE(814)
				if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
					HX_STACK_LINE(814)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
					HX_STACK_LINE(814)
					{
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(814)
						localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
					}
					HX_STACK_LINE(814)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
					HX_STACK_LINE(814)
					{
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(814)
						zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
					}
					HX_STACK_LINE(814)
					if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
						HX_STACK_LINE(814)
						{
							HX_STACK_LINE(814)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
							HX_STACK_LINE(814)
							hx::AddEq(localPosition->x,otherVector->x);
							HX_STACK_LINE(814)
							hx::AddEq(localPosition->y,otherVector->y);
							HX_STACK_LINE(814)
							hx::AddEq(localPosition->z,otherVector->z);
						}
						HX_STACK_LINE(814)
						{
							HX_STACK_LINE(814)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(814)
							{
								HX_STACK_LINE(814)
								result->m[(int)0] = 1.0;
								HX_STACK_LINE(814)
								result->m[(int)1] = (int)0;
								HX_STACK_LINE(814)
								result->m[(int)2] = (int)0;
								HX_STACK_LINE(814)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(814)
								result->m[(int)4] = (int)0;
								HX_STACK_LINE(814)
								result->m[(int)5] = 1.0;
								HX_STACK_LINE(814)
								result->m[(int)6] = (int)0;
								HX_STACK_LINE(814)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(814)
								result->m[(int)8] = (int)0;
								HX_STACK_LINE(814)
								result->m[(int)9] = (int)0;
								HX_STACK_LINE(814)
								result->m[(int)10] = 1.0;
								HX_STACK_LINE(814)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(814)
								result->m[(int)12] = localPosition->x;
								HX_STACK_LINE(814)
								result->m[(int)13] = localPosition->y;
								HX_STACK_LINE(814)
								result->m[(int)14] = localPosition->z;
								HX_STACK_LINE(814)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(814)
								result;
							}
						}
					}
					HX_STACK_LINE(814)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
						HX_STACK_LINE(814)
						zero = this->_scene->activeCamera->position;
					}
					else{
						HX_STACK_LINE(814)
						if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
							HX_STACK_LINE(814)
							zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
						HX_STACK_LINE(814)
						if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
							HX_STACK_LINE(814)
							zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
						HX_STACK_LINE(814)
						if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
							HX_STACK_LINE(814)
							zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
					}
					HX_STACK_LINE(814)
					{
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
						HX_STACK_LINE(814)
						{
							HX_STACK_LINE(814)
							zAxis->x = (zero->x - localPosition->x);
							HX_STACK_LINE(814)
							zAxis->y = (zero->y - localPosition->y);
							HX_STACK_LINE(814)
							zAxis->z = (zero->z - localPosition->z);
						}
						HX_STACK_LINE(814)
						{
							HX_STACK_LINE(814)
							Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(814)
							if (((len != (int)0))){
								HX_STACK_LINE(814)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(814)
								hx::MultEq(zAxis->x,num);
								HX_STACK_LINE(814)
								hx::MultEq(zAxis->y,num);
								HX_STACK_LINE(814)
								hx::MultEq(zAxis->z,num);
							}
						}
						HX_STACK_LINE(814)
						{
							HX_STACK_LINE(814)
							xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
							HX_STACK_LINE(814)
							xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
							HX_STACK_LINE(814)
							xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
						}
						HX_STACK_LINE(814)
						{
							HX_STACK_LINE(814)
							Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(814)
							if (((len != (int)0))){
								HX_STACK_LINE(814)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(814)
								hx::MultEq(xAxis->x,num);
								HX_STACK_LINE(814)
								hx::MultEq(xAxis->y,num);
								HX_STACK_LINE(814)
								hx::MultEq(xAxis->z,num);
							}
						}
						HX_STACK_LINE(814)
						{
							HX_STACK_LINE(814)
							yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
							HX_STACK_LINE(814)
							yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
							HX_STACK_LINE(814)
							yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
						}
						HX_STACK_LINE(814)
						{
							HX_STACK_LINE(814)
							Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(814)
							if (((len != (int)0))){
								HX_STACK_LINE(814)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(814)
								hx::MultEq(yAxis->x,num);
								HX_STACK_LINE(814)
								hx::MultEq(yAxis->y,num);
								HX_STACK_LINE(814)
								hx::MultEq(yAxis->z,num);
							}
						}
						HX_STACK_LINE(814)
						Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
						HX_STACK_LINE(814)
						Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
						HX_STACK_LINE(814)
						Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
						HX_STACK_LINE(814)
						{
							HX_STACK_LINE(814)
							result->m[(int)0] = xAxis->x;
							HX_STACK_LINE(814)
							result->m[(int)1] = yAxis->x;
							HX_STACK_LINE(814)
							result->m[(int)2] = zAxis->x;
							HX_STACK_LINE(814)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)4] = xAxis->y;
							HX_STACK_LINE(814)
							result->m[(int)5] = yAxis->y;
							HX_STACK_LINE(814)
							result->m[(int)6] = zAxis->y;
							HX_STACK_LINE(814)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)8] = xAxis->z;
							HX_STACK_LINE(814)
							result->m[(int)9] = yAxis->z;
							HX_STACK_LINE(814)
							result->m[(int)10] = zAxis->z;
							HX_STACK_LINE(814)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(814)
							result->m[(int)12] = ex;
							HX_STACK_LINE(814)
							result->m[(int)13] = ey;
							HX_STACK_LINE(814)
							result->m[(int)14] = ez;
							HX_STACK_LINE(814)
							result->m[(int)15] = (int)1;
							HX_STACK_LINE(814)
							result;
						}
					}
					HX_STACK_LINE(814)
					this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
					HX_STACK_LINE(814)
					{
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localBillboard;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(814)
						{
							HX_STACK_LINE(814)
							Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
							HX_STACK_LINE(814)
							Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
							HX_STACK_LINE(814)
							Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
							HX_STACK_LINE(814)
							Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
							HX_STACK_LINE(814)
							Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
							HX_STACK_LINE(814)
							Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
							HX_STACK_LINE(814)
							Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
							HX_STACK_LINE(814)
							Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
							HX_STACK_LINE(814)
							Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
							HX_STACK_LINE(814)
							Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
							HX_STACK_LINE(814)
							Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
							HX_STACK_LINE(814)
							Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
							HX_STACK_LINE(814)
							Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
							HX_STACK_LINE(814)
							Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
							HX_STACK_LINE(814)
							Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
							HX_STACK_LINE(814)
							Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
							HX_STACK_LINE(814)
							Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
							HX_STACK_LINE(814)
							Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
							HX_STACK_LINE(814)
							Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
							HX_STACK_LINE(814)
							Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
							HX_STACK_LINE(814)
							Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
							HX_STACK_LINE(814)
							Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
							HX_STACK_LINE(814)
							Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
							HX_STACK_LINE(814)
							Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
							HX_STACK_LINE(814)
							Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
							HX_STACK_LINE(814)
							Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
							HX_STACK_LINE(814)
							Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
							HX_STACK_LINE(814)
							Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
							HX_STACK_LINE(814)
							Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
							HX_STACK_LINE(814)
							Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
							HX_STACK_LINE(814)
							Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
							HX_STACK_LINE(814)
							Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
							HX_STACK_LINE(814)
							Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
							HX_STACK_LINE(814)
							Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
							HX_STACK_LINE(814)
							Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
							HX_STACK_LINE(814)
							Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
							HX_STACK_LINE(814)
							Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
							HX_STACK_LINE(814)
							Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
							HX_STACK_LINE(814)
							Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
							HX_STACK_LINE(814)
							_this->m[(int)0] = (l23 * l27);
							HX_STACK_LINE(814)
							_this->m[(int)4] = (l24 * l27);
							HX_STACK_LINE(814)
							_this->m[(int)8] = (l25 * l27);
							HX_STACK_LINE(814)
							_this->m[(int)12] = (l26 * l27);
							HX_STACK_LINE(814)
							_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
							HX_STACK_LINE(814)
							_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
							HX_STACK_LINE(814)
							_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
							HX_STACK_LINE(814)
							_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
							HX_STACK_LINE(814)
							_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
							HX_STACK_LINE(814)
							_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
							HX_STACK_LINE(814)
							_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
							HX_STACK_LINE(814)
							_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
							HX_STACK_LINE(814)
							_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
							HX_STACK_LINE(814)
							_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
							HX_STACK_LINE(814)
							_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
							HX_STACK_LINE(814)
							_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
						}
					}
					HX_STACK_LINE(814)
					{
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(814)
						{
							HX_STACK_LINE(814)
							Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(814)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(814)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(814)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(814)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(814)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(814)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(814)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(814)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(814)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(814)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(814)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(814)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(814)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(814)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(814)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(814)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(814)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(814)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(814)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(814)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(814)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(814)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(814)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(814)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(814)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(814)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(814)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(814)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(814)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(814)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(814)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(814)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(814)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(814)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(814)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(814)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(814)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(814)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(814)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(814)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(814)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(814)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(814)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(814)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(814)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(814)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(814)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(814)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(814)
							result;
						}
					}
					HX_STACK_LINE(814)
					{
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(814)
						{
							HX_STACK_LINE(814)
							Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(814)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(814)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(814)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(814)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(814)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(814)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(814)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(814)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(814)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(814)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(814)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(814)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(814)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(814)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(814)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(814)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(814)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(814)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(814)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(814)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(814)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(814)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(814)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(814)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(814)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(814)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(814)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(814)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(814)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(814)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(814)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(814)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(814)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(814)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(814)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(814)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(814)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(814)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(814)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(814)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(814)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(814)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(814)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(814)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(814)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(814)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(814)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(814)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(814)
							result;
						}
					}
				}
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",814,0x2cff64c0)
						{
							HX_STACK_LINE(814)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _g3 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(814)
							return (_g3 != null());
						}
						return null();
					}
				};
				HX_STACK_LINE(814)
				if (((  (((  (((this->parent != null()))) ? bool(_Function_3_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
					HX_STACK_LINE(814)
					{
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(814)
						{
							HX_STACK_LINE(814)
							Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(814)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(814)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(814)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(814)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(814)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(814)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(814)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(814)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(814)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(814)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(814)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(814)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(814)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(814)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(814)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(814)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(814)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(814)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(814)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(814)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(814)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(814)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(814)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(814)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(814)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(814)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(814)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(814)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(814)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(814)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(814)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(814)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(814)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(814)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(814)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(814)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(814)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(814)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(814)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(814)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(814)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(814)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(814)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(814)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(814)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(814)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(814)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(814)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(814)
							result;
						}
					}
					HX_STACK_LINE(814)
					::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
					HX_STACK_LINE(814)
					{
						HX_STACK_LINE(814)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localWorld;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(814)
						{
							HX_STACK_LINE(814)
							Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(814)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(814)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(814)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(814)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(814)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(814)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(814)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(814)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(814)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(814)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(814)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(814)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(814)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(814)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(814)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(814)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(814)
							Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(814)
							Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(814)
							Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(814)
							Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(814)
							Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(814)
							Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(814)
							Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(814)
							Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(814)
							Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(814)
							Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(814)
							Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(814)
							Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(814)
							Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(814)
							Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(814)
							Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(814)
							Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(814)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(814)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(814)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(814)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(814)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(814)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(814)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(814)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(814)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(814)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(814)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(814)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(814)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(814)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(814)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(814)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(814)
							result;
						}
					}
				}
				else{
					HX_STACK_LINE(814)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(814)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(814)
					{
						HX_STACK_LINE(814)
						Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(814)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(814)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(814)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(814)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(814)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(814)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(814)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(814)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(814)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(814)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(814)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(814)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(814)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(814)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(814)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(814)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(814)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(814)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(814)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(814)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(814)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(814)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(814)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(814)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(814)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(814)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(814)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(814)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(814)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(814)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(814)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(814)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(814)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(814)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(814)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(814)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(814)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(814)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(814)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(814)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(814)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(814)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(814)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(814)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(814)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(814)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(814)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(814)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(814)
						result;
					}
				}
				HX_STACK_LINE(814)
				if (((this->_boundingInfo != null()))){
					HX_STACK_LINE(814)
					Float _g4 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(814)
					this->_scaleFactor = _g4;
					HX_STACK_LINE(814)
					Float _g5 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(814)
					this->_scaleFactor = _g5;
					struct _Function_4_1{
						inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",814,0x2cff64c0)
							{
								HX_STACK_LINE(814)
								Dynamic _g6 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(814)
								return (_g6 != null());
							}
							return null();
						}
					};
					HX_STACK_LINE(814)
					if (((  (((this->parent != null()))) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
						HX_STACK_LINE(814)
						Dynamic _g7 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(814)
						Float _g8 = (this->_scaleFactor * _g7);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(814)
						this->_scaleFactor = _g8;
					}
					HX_STACK_LINE(814)
					this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
					HX_STACK_LINE(814)
					{
						HX_STACK_LINE(814)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(814)
						int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(814)
						while((true)){
							HX_STACK_LINE(814)
							if ((!(((_g11 < _g))))){
								HX_STACK_LINE(814)
								break;
							}
							HX_STACK_LINE(814)
							int subIndex = (_g11)++;		HX_STACK_VAR(subIndex,"subIndex");
							HX_STACK_LINE(814)
							::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
							HX_STACK_LINE(814)
							subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
						}
					}
				}
				HX_STACK_LINE(814)
				{
					HX_STACK_LINE(814)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_absolutePosition;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(814)
					_this->x = this->_worldMatrix->m->__get((int)12);
					HX_STACK_LINE(814)
					_this->y = this->_worldMatrix->m->__get((int)13);
					HX_STACK_LINE(814)
					_this->z = this->_worldMatrix->m->__get((int)14);
				}
				HX_STACK_LINE(814)
				ret = this->_worldMatrix;
			}
			HX_STACK_LINE(814)
			ret;
		}
		HX_STACK_LINE(815)
		::com::gamestudiohx::babylonhx::tools::math::Matrix worldMatrix;		HX_STACK_VAR(worldMatrix,"worldMatrix");
		HX_STACK_LINE(815)
		{
			HX_STACK_LINE(815)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_worldMatrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(815)
			{
				HX_STACK_LINE(815)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(815)
				result->m[(int)0] = _this->m->__get((int)0);
				HX_STACK_LINE(815)
				result->m[(int)1] = _this->m->__get((int)1);
				HX_STACK_LINE(815)
				result->m[(int)2] = _this->m->__get((int)2);
				HX_STACK_LINE(815)
				result->m[(int)3] = _this->m->__get((int)3);
				HX_STACK_LINE(815)
				result->m[(int)4] = _this->m->__get((int)4);
				HX_STACK_LINE(815)
				result->m[(int)5] = _this->m->__get((int)5);
				HX_STACK_LINE(815)
				result->m[(int)6] = _this->m->__get((int)6);
				HX_STACK_LINE(815)
				result->m[(int)7] = _this->m->__get((int)7);
				HX_STACK_LINE(815)
				result->m[(int)8] = _this->m->__get((int)8);
				HX_STACK_LINE(815)
				result->m[(int)9] = _this->m->__get((int)9);
				HX_STACK_LINE(815)
				result->m[(int)10] = _this->m->__get((int)10);
				HX_STACK_LINE(815)
				result->m[(int)11] = _this->m->__get((int)11);
				HX_STACK_LINE(815)
				result->m[(int)12] = _this->m->__get((int)12);
				HX_STACK_LINE(815)
				result->m[(int)13] = _this->m->__get((int)13);
				HX_STACK_LINE(815)
				result->m[(int)14] = _this->m->__get((int)14);
				HX_STACK_LINE(815)
				result->m[(int)15] = _this->m->__get((int)15);
				HX_STACK_LINE(815)
				worldMatrix = result;
			}
		}
		HX_STACK_LINE(816)
		{
			HX_STACK_LINE(816)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 vector31 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(vector31,"vector31");
			HX_STACK_LINE(816)
			worldMatrix->m[(int)12] = vector31->x;
			HX_STACK_LINE(816)
			worldMatrix->m[(int)13] = vector31->y;
			HX_STACK_LINE(816)
			worldMatrix->m[(int)14] = vector31->z;
		}
		HX_STACK_LINE(818)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g9;		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(818)
		{
			HX_STACK_LINE(818)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(818)
			{
				HX_STACK_LINE(818)
				Float x = ((((vector3->x * worldMatrix->m->__get((int)0)) + (vector3->y * worldMatrix->m->__get((int)4))) + (vector3->z * worldMatrix->m->__get((int)8))) + worldMatrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(818)
				Float y = ((((vector3->x * worldMatrix->m->__get((int)1)) + (vector3->y * worldMatrix->m->__get((int)5))) + (vector3->z * worldMatrix->m->__get((int)9))) + worldMatrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(818)
				Float z = ((((vector3->x * worldMatrix->m->__get((int)2)) + (vector3->y * worldMatrix->m->__get((int)6))) + (vector3->z * worldMatrix->m->__get((int)10))) + worldMatrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(818)
				Float w = ((((vector3->x * worldMatrix->m->__get((int)3)) + (vector3->y * worldMatrix->m->__get((int)7))) + (vector3->z * worldMatrix->m->__get((int)11))) + worldMatrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(818)
				result->x = (Float(x) / Float(w));
				HX_STACK_LINE(818)
				result->y = (Float(y) / Float(w));
				HX_STACK_LINE(818)
				result->z = (Float(z) / Float(w));
			}
			HX_STACK_LINE(818)
			_g9 = result;
		}
		HX_STACK_LINE(818)
		this->position = _g9;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,setLocalTranslation,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector3 AbstractMesh_obj::getLocalTranslation( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","getLocalTranslation",0x5534154c,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.getLocalTranslation","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",821,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(822)
	{
		HX_STACK_LINE(822)
		bool force = false;		HX_STACK_VAR(force,"force");
		HX_STACK_LINE(822)
		::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",822,0x2cff64c0)
				{
					HX_STACK_LINE(822)
					int _g = __this->_scene->getRenderId();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(822)
					return (  ((!(((__this->_currentRenderId == _g))))) ? bool(__this->isSynchronized(null())) : bool(true) );
				}
				return null();
			}
		};
		HX_STACK_LINE(822)
		if (((  ((!(force))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(822)
			this->_childrenFlag = (int)0;
		}
		else{
			HX_STACK_LINE(822)
			this->_childrenFlag = (int)1;
			HX_STACK_LINE(822)
			this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
			HX_STACK_LINE(822)
			this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
			HX_STACK_LINE(822)
			this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
			HX_STACK_LINE(822)
			int _g1 = this->_scene->getRenderId();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(822)
			this->_currentRenderId = _g1;
			HX_STACK_LINE(822)
			{
				HX_STACK_LINE(822)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(822)
				result->m[(int)0] = this->scaling->x;
				HX_STACK_LINE(822)
				result->m[(int)1] = (int)0;
				HX_STACK_LINE(822)
				result->m[(int)2] = (int)0;
				HX_STACK_LINE(822)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(822)
				result->m[(int)4] = (int)0;
				HX_STACK_LINE(822)
				result->m[(int)5] = this->scaling->y;
				HX_STACK_LINE(822)
				result->m[(int)6] = (int)0;
				HX_STACK_LINE(822)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(822)
				result->m[(int)8] = (int)0;
				HX_STACK_LINE(822)
				result->m[(int)9] = (int)0;
				HX_STACK_LINE(822)
				result->m[(int)10] = this->scaling->z;
				HX_STACK_LINE(822)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(822)
				result->m[(int)12] = (int)0;
				HX_STACK_LINE(822)
				result->m[(int)13] = (int)0;
				HX_STACK_LINE(822)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(822)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(822)
				result;
			}
			HX_STACK_LINE(822)
			if (((this->rotationQuaternion != null()))){
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = this->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(822)
					Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(822)
					Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(822)
					Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
					HX_STACK_LINE(822)
					Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
					HX_STACK_LINE(822)
					Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
					HX_STACK_LINE(822)
					Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
					HX_STACK_LINE(822)
					Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
					HX_STACK_LINE(822)
					Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
					HX_STACK_LINE(822)
					Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
					HX_STACK_LINE(822)
					result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
					HX_STACK_LINE(822)
					result->m[(int)1] = (2.0 * ((xy + zw)));
					HX_STACK_LINE(822)
					result->m[(int)2] = (2.0 * ((zx - yw)));
					HX_STACK_LINE(822)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(822)
					result->m[(int)4] = (2.0 * ((xy - zw)));
					HX_STACK_LINE(822)
					result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
					HX_STACK_LINE(822)
					result->m[(int)6] = (2.0 * ((yz + xw)));
					HX_STACK_LINE(822)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(822)
					result->m[(int)8] = (2.0 * ((zx + yw)));
					HX_STACK_LINE(822)
					result->m[(int)9] = (2.0 * ((yz - xw)));
					HX_STACK_LINE(822)
					result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
					HX_STACK_LINE(822)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(822)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(822)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(822)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(822)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(822)
					result;
				}
				HX_STACK_LINE(822)
				this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
			}
			else{
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Quaternion _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
						HX_STACK_LINE(822)
						Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
						HX_STACK_LINE(822)
						Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
						HX_STACK_LINE(822)
						Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
						HX_STACK_LINE(822)
						Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
						HX_STACK_LINE(822)
						Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
						HX_STACK_LINE(822)
						Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
						HX_STACK_LINE(822)
						Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
						HX_STACK_LINE(822)
						Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
						HX_STACK_LINE(822)
						tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
						HX_STACK_LINE(822)
						tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
						HX_STACK_LINE(822)
						tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
						HX_STACK_LINE(822)
						tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
						HX_STACK_LINE(822)
						_g2 = tempQuaternion;
					}
					HX_STACK_LINE(822)
					tempQuaternion = _g2;
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(822)
						Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(822)
						Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(822)
						Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(822)
						Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
						HX_STACK_LINE(822)
						Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
						HX_STACK_LINE(822)
						Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
						HX_STACK_LINE(822)
						Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(822)
						Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
						HX_STACK_LINE(822)
						result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
						HX_STACK_LINE(822)
						result->m[(int)1] = (2.0 * ((xy + zw)));
						HX_STACK_LINE(822)
						result->m[(int)2] = (2.0 * ((zx - yw)));
						HX_STACK_LINE(822)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)4] = (2.0 * ((xy - zw)));
						HX_STACK_LINE(822)
						result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
						HX_STACK_LINE(822)
						result->m[(int)6] = (2.0 * ((yz + xw)));
						HX_STACK_LINE(822)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)8] = (2.0 * ((zx + yw)));
						HX_STACK_LINE(822)
						result->m[(int)9] = (2.0 * ((yz - xw)));
						HX_STACK_LINE(822)
						result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
						HX_STACK_LINE(822)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(822)
						result;
					}
				}
				HX_STACK_LINE(822)
				this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
			}
			HX_STACK_LINE(822)
			if ((this->infiniteDistance)){
				HX_STACK_LINE(822)
				::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						result->m[(int)0] = 1.0;
						HX_STACK_LINE(822)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)5] = 1.0;
						HX_STACK_LINE(822)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)10] = 1.0;
						HX_STACK_LINE(822)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)12] = (this->position->x + camera->position->x);
						HX_STACK_LINE(822)
						result->m[(int)13] = (this->position->y + camera->position->y);
						HX_STACK_LINE(822)
						result->m[(int)14] = (this->position->z + camera->position->z);
						HX_STACK_LINE(822)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(822)
						result;
					}
				}
			}
			else{
				HX_STACK_LINE(822)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					result->m[(int)0] = 1.0;
					HX_STACK_LINE(822)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(822)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(822)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(822)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(822)
					result->m[(int)5] = 1.0;
					HX_STACK_LINE(822)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(822)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(822)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(822)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(822)
					result->m[(int)10] = 1.0;
					HX_STACK_LINE(822)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(822)
					result->m[(int)12] = this->position->x;
					HX_STACK_LINE(822)
					result->m[(int)13] = this->position->y;
					HX_STACK_LINE(822)
					result->m[(int)14] = this->position->z;
					HX_STACK_LINE(822)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(822)
					result;
				}
			}
			HX_STACK_LINE(822)
			{
				HX_STACK_LINE(822)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(822)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(822)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(822)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(822)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(822)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(822)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(822)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(822)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(822)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(822)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(822)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(822)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(822)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(822)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(822)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(822)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(822)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(822)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(822)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(822)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(822)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(822)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(822)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(822)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(822)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(822)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(822)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(822)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(822)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(822)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(822)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(822)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(822)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(822)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(822)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(822)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(822)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(822)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(822)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(822)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(822)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(822)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(822)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(822)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(822)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(822)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(822)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(822)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(822)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(822)
					result;
				}
			}
			HX_STACK_LINE(822)
			{
				HX_STACK_LINE(822)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(822)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(822)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(822)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(822)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(822)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(822)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(822)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(822)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(822)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(822)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(822)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(822)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(822)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(822)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(822)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(822)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(822)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(822)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(822)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(822)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(822)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(822)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(822)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(822)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(822)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(822)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(822)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(822)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(822)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(822)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(822)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(822)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(822)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(822)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(822)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(822)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(822)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(822)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(822)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(822)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(822)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(822)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(822)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(822)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(822)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(822)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(822)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(822)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(822)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(822)
					result;
				}
			}
			HX_STACK_LINE(822)
			if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
				HX_STACK_LINE(822)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(822)
					localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
				}
				HX_STACK_LINE(822)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(822)
					zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
				}
				HX_STACK_LINE(822)
				if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(822)
						hx::AddEq(localPosition->x,otherVector->x);
						HX_STACK_LINE(822)
						hx::AddEq(localPosition->y,otherVector->y);
						HX_STACK_LINE(822)
						hx::AddEq(localPosition->z,otherVector->z);
					}
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(822)
						{
							HX_STACK_LINE(822)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(822)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(822)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(822)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(822)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(822)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(822)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(822)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(822)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(822)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(822)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(822)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(822)
							result->m[(int)12] = localPosition->x;
							HX_STACK_LINE(822)
							result->m[(int)13] = localPosition->y;
							HX_STACK_LINE(822)
							result->m[(int)14] = localPosition->z;
							HX_STACK_LINE(822)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(822)
							result;
						}
					}
				}
				HX_STACK_LINE(822)
				if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
					HX_STACK_LINE(822)
					zero = this->_scene->activeCamera->position;
				}
				else{
					HX_STACK_LINE(822)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
						HX_STACK_LINE(822)
						zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
					HX_STACK_LINE(822)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
						HX_STACK_LINE(822)
						zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
					HX_STACK_LINE(822)
					if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
						HX_STACK_LINE(822)
						zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
					}
				}
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						zAxis->x = (zero->x - localPosition->x);
						HX_STACK_LINE(822)
						zAxis->y = (zero->y - localPosition->y);
						HX_STACK_LINE(822)
						zAxis->z = (zero->z - localPosition->z);
					}
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(822)
						if (((len != (int)0))){
							HX_STACK_LINE(822)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(822)
							hx::MultEq(zAxis->x,num);
							HX_STACK_LINE(822)
							hx::MultEq(zAxis->y,num);
							HX_STACK_LINE(822)
							hx::MultEq(zAxis->z,num);
						}
					}
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
						HX_STACK_LINE(822)
						xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
						HX_STACK_LINE(822)
						xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
					}
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(822)
						if (((len != (int)0))){
							HX_STACK_LINE(822)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(822)
							hx::MultEq(xAxis->x,num);
							HX_STACK_LINE(822)
							hx::MultEq(xAxis->y,num);
							HX_STACK_LINE(822)
							hx::MultEq(xAxis->z,num);
						}
					}
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
						HX_STACK_LINE(822)
						yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
						HX_STACK_LINE(822)
						yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
					}
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(822)
						if (((len != (int)0))){
							HX_STACK_LINE(822)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(822)
							hx::MultEq(yAxis->x,num);
							HX_STACK_LINE(822)
							hx::MultEq(yAxis->y,num);
							HX_STACK_LINE(822)
							hx::MultEq(yAxis->z,num);
						}
					}
					HX_STACK_LINE(822)
					Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
					HX_STACK_LINE(822)
					Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
					HX_STACK_LINE(822)
					Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						result->m[(int)0] = xAxis->x;
						HX_STACK_LINE(822)
						result->m[(int)1] = yAxis->x;
						HX_STACK_LINE(822)
						result->m[(int)2] = zAxis->x;
						HX_STACK_LINE(822)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)4] = xAxis->y;
						HX_STACK_LINE(822)
						result->m[(int)5] = yAxis->y;
						HX_STACK_LINE(822)
						result->m[(int)6] = zAxis->y;
						HX_STACK_LINE(822)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)8] = xAxis->z;
						HX_STACK_LINE(822)
						result->m[(int)9] = yAxis->z;
						HX_STACK_LINE(822)
						result->m[(int)10] = zAxis->z;
						HX_STACK_LINE(822)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(822)
						result->m[(int)12] = ex;
						HX_STACK_LINE(822)
						result->m[(int)13] = ey;
						HX_STACK_LINE(822)
						result->m[(int)14] = ez;
						HX_STACK_LINE(822)
						result->m[(int)15] = (int)1;
						HX_STACK_LINE(822)
						result;
					}
				}
				HX_STACK_LINE(822)
				this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localBillboard;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
						HX_STACK_LINE(822)
						Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
						HX_STACK_LINE(822)
						Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
						HX_STACK_LINE(822)
						Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
						HX_STACK_LINE(822)
						Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
						HX_STACK_LINE(822)
						Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
						HX_STACK_LINE(822)
						Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
						HX_STACK_LINE(822)
						Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
						HX_STACK_LINE(822)
						Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
						HX_STACK_LINE(822)
						Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
						HX_STACK_LINE(822)
						Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
						HX_STACK_LINE(822)
						Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
						HX_STACK_LINE(822)
						Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
						HX_STACK_LINE(822)
						Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
						HX_STACK_LINE(822)
						Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
						HX_STACK_LINE(822)
						Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
						HX_STACK_LINE(822)
						Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
						HX_STACK_LINE(822)
						Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
						HX_STACK_LINE(822)
						Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
						HX_STACK_LINE(822)
						Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
						HX_STACK_LINE(822)
						Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
						HX_STACK_LINE(822)
						Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
						HX_STACK_LINE(822)
						Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
						HX_STACK_LINE(822)
						Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
						HX_STACK_LINE(822)
						Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
						HX_STACK_LINE(822)
						Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
						HX_STACK_LINE(822)
						Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
						HX_STACK_LINE(822)
						Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
						HX_STACK_LINE(822)
						Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
						HX_STACK_LINE(822)
						Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
						HX_STACK_LINE(822)
						Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
						HX_STACK_LINE(822)
						Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
						HX_STACK_LINE(822)
						Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
						HX_STACK_LINE(822)
						Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
						HX_STACK_LINE(822)
						Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
						HX_STACK_LINE(822)
						Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
						HX_STACK_LINE(822)
						Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
						HX_STACK_LINE(822)
						Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
						HX_STACK_LINE(822)
						Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
						HX_STACK_LINE(822)
						_this->m[(int)0] = (l23 * l27);
						HX_STACK_LINE(822)
						_this->m[(int)4] = (l24 * l27);
						HX_STACK_LINE(822)
						_this->m[(int)8] = (l25 * l27);
						HX_STACK_LINE(822)
						_this->m[(int)12] = (l26 * l27);
						HX_STACK_LINE(822)
						_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
						HX_STACK_LINE(822)
						_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
						HX_STACK_LINE(822)
						_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
						HX_STACK_LINE(822)
						_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
						HX_STACK_LINE(822)
						_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
						HX_STACK_LINE(822)
						_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
						HX_STACK_LINE(822)
						_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
						HX_STACK_LINE(822)
						_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
						HX_STACK_LINE(822)
						_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
						HX_STACK_LINE(822)
						_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
						HX_STACK_LINE(822)
						_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
						HX_STACK_LINE(822)
						_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
					}
				}
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(822)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(822)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(822)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(822)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(822)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(822)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(822)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(822)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(822)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(822)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(822)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(822)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(822)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(822)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(822)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(822)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(822)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(822)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(822)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(822)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(822)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(822)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(822)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(822)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(822)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(822)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(822)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(822)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(822)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(822)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(822)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(822)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(822)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(822)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(822)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(822)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(822)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(822)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(822)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(822)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(822)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(822)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(822)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(822)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(822)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(822)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(822)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(822)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(822)
						result;
					}
				}
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(822)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(822)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(822)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(822)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(822)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(822)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(822)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(822)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(822)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(822)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(822)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(822)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(822)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(822)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(822)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(822)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(822)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(822)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(822)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(822)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(822)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(822)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(822)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(822)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(822)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(822)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(822)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(822)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(822)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(822)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(822)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(822)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(822)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(822)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(822)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(822)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(822)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(822)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(822)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(822)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(822)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(822)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(822)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(822)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(822)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(822)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(822)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(822)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(822)
						result;
					}
				}
			}
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",822,0x2cff64c0)
					{
						HX_STACK_LINE(822)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _g3 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(822)
						return (_g3 != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(822)
			if (((  (((  (((this->parent != null()))) ? bool(_Function_3_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(822)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(822)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(822)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(822)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(822)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(822)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(822)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(822)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(822)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(822)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(822)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(822)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(822)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(822)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(822)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(822)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(822)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(822)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(822)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(822)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(822)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(822)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(822)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(822)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(822)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(822)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(822)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(822)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(822)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(822)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(822)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(822)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(822)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(822)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(822)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(822)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(822)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(822)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(822)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(822)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(822)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(822)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(822)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(822)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(822)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(822)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(822)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(822)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(822)
						result;
					}
				}
				HX_STACK_LINE(822)
				::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localWorld;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(822)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(822)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(822)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(822)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(822)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(822)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(822)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(822)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(822)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(822)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(822)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(822)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(822)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(822)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(822)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(822)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(822)
						Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(822)
						Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(822)
						Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(822)
						Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(822)
						Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(822)
						Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(822)
						Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(822)
						Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(822)
						Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(822)
						Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(822)
						Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(822)
						Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(822)
						Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(822)
						Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(822)
						Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(822)
						Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(822)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(822)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(822)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(822)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(822)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(822)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(822)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(822)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(822)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(822)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(822)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(822)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(822)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(822)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(822)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(822)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(822)
						result;
					}
				}
			}
			else{
				HX_STACK_LINE(822)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(822)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(822)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(822)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(822)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(822)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(822)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(822)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(822)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(822)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(822)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(822)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(822)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(822)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(822)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(822)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(822)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(822)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(822)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(822)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(822)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(822)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(822)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(822)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(822)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(822)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(822)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(822)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(822)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(822)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(822)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(822)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(822)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(822)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(822)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(822)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(822)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(822)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(822)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(822)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(822)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(822)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(822)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(822)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(822)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(822)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(822)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(822)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(822)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(822)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(822)
					result;
				}
			}
			HX_STACK_LINE(822)
			if (((this->_boundingInfo != null()))){
				HX_STACK_LINE(822)
				Float _g4 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(822)
				this->_scaleFactor = _g4;
				HX_STACK_LINE(822)
				Float _g5 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(822)
				this->_scaleFactor = _g5;
				struct _Function_4_1{
					inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",822,0x2cff64c0)
						{
							HX_STACK_LINE(822)
							Dynamic _g6 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(822)
							return (_g6 != null());
						}
						return null();
					}
				};
				HX_STACK_LINE(822)
				if (((  (((this->parent != null()))) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(822)
					Dynamic _g7 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(822)
					Float _g8 = (this->_scaleFactor * _g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(822)
					this->_scaleFactor = _g8;
				}
				HX_STACK_LINE(822)
				this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(822)
					int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(822)
					while((true)){
						HX_STACK_LINE(822)
						if ((!(((_g11 < _g))))){
							HX_STACK_LINE(822)
							break;
						}
						HX_STACK_LINE(822)
						int subIndex = (_g11)++;		HX_STACK_VAR(subIndex,"subIndex");
						HX_STACK_LINE(822)
						::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
						HX_STACK_LINE(822)
						subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
					}
				}
			}
			HX_STACK_LINE(822)
			{
				HX_STACK_LINE(822)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_absolutePosition;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(822)
				_this->x = this->_worldMatrix->m->__get((int)12);
				HX_STACK_LINE(822)
				_this->y = this->_worldMatrix->m->__get((int)13);
				HX_STACK_LINE(822)
				_this->z = this->_worldMatrix->m->__get((int)14);
			}
			HX_STACK_LINE(822)
			ret = this->_worldMatrix;
		}
		HX_STACK_LINE(822)
		ret;
	}
	HX_STACK_LINE(823)
	::com::gamestudiohx::babylonhx::tools::math::Matrix invWorldMatrix;		HX_STACK_VAR(invWorldMatrix,"invWorldMatrix");
	HX_STACK_LINE(823)
	{
		HX_STACK_LINE(823)
		::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_worldMatrix;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(823)
		{
			HX_STACK_LINE(823)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(823)
			result->m[(int)0] = _this->m->__get((int)0);
			HX_STACK_LINE(823)
			result->m[(int)1] = _this->m->__get((int)1);
			HX_STACK_LINE(823)
			result->m[(int)2] = _this->m->__get((int)2);
			HX_STACK_LINE(823)
			result->m[(int)3] = _this->m->__get((int)3);
			HX_STACK_LINE(823)
			result->m[(int)4] = _this->m->__get((int)4);
			HX_STACK_LINE(823)
			result->m[(int)5] = _this->m->__get((int)5);
			HX_STACK_LINE(823)
			result->m[(int)6] = _this->m->__get((int)6);
			HX_STACK_LINE(823)
			result->m[(int)7] = _this->m->__get((int)7);
			HX_STACK_LINE(823)
			result->m[(int)8] = _this->m->__get((int)8);
			HX_STACK_LINE(823)
			result->m[(int)9] = _this->m->__get((int)9);
			HX_STACK_LINE(823)
			result->m[(int)10] = _this->m->__get((int)10);
			HX_STACK_LINE(823)
			result->m[(int)11] = _this->m->__get((int)11);
			HX_STACK_LINE(823)
			result->m[(int)12] = _this->m->__get((int)12);
			HX_STACK_LINE(823)
			result->m[(int)13] = _this->m->__get((int)13);
			HX_STACK_LINE(823)
			result->m[(int)14] = _this->m->__get((int)14);
			HX_STACK_LINE(823)
			result->m[(int)15] = _this->m->__get((int)15);
			HX_STACK_LINE(823)
			invWorldMatrix = result;
		}
	}
	HX_STACK_LINE(824)
	{
		HX_STACK_LINE(824)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 vector3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(vector3,"vector3");
		HX_STACK_LINE(824)
		invWorldMatrix->m[(int)12] = vector3->x;
		HX_STACK_LINE(824)
		invWorldMatrix->m[(int)13] = vector3->y;
		HX_STACK_LINE(824)
		invWorldMatrix->m[(int)14] = vector3->z;
	}
	HX_STACK_LINE(825)
	{
		HX_STACK_LINE(825)
		Float l1 = invWorldMatrix->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
		HX_STACK_LINE(825)
		Float l2 = invWorldMatrix->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
		HX_STACK_LINE(825)
		Float l3 = invWorldMatrix->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
		HX_STACK_LINE(825)
		Float l4 = invWorldMatrix->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
		HX_STACK_LINE(825)
		Float l5 = invWorldMatrix->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
		HX_STACK_LINE(825)
		Float l6 = invWorldMatrix->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
		HX_STACK_LINE(825)
		Float l7 = invWorldMatrix->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
		HX_STACK_LINE(825)
		Float l8 = invWorldMatrix->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
		HX_STACK_LINE(825)
		Float l9 = invWorldMatrix->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
		HX_STACK_LINE(825)
		Float l10 = invWorldMatrix->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
		HX_STACK_LINE(825)
		Float l11 = invWorldMatrix->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
		HX_STACK_LINE(825)
		Float l12 = invWorldMatrix->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
		HX_STACK_LINE(825)
		Float l13 = invWorldMatrix->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
		HX_STACK_LINE(825)
		Float l14 = invWorldMatrix->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
		HX_STACK_LINE(825)
		Float l15 = invWorldMatrix->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
		HX_STACK_LINE(825)
		Float l16 = invWorldMatrix->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
		HX_STACK_LINE(825)
		Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
		HX_STACK_LINE(825)
		Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
		HX_STACK_LINE(825)
		Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
		HX_STACK_LINE(825)
		Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
		HX_STACK_LINE(825)
		Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
		HX_STACK_LINE(825)
		Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
		HX_STACK_LINE(825)
		Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
		HX_STACK_LINE(825)
		Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
		HX_STACK_LINE(825)
		Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
		HX_STACK_LINE(825)
		Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
		HX_STACK_LINE(825)
		Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
		HX_STACK_LINE(825)
		Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
		HX_STACK_LINE(825)
		Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
		HX_STACK_LINE(825)
		Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
		HX_STACK_LINE(825)
		Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
		HX_STACK_LINE(825)
		Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
		HX_STACK_LINE(825)
		Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
		HX_STACK_LINE(825)
		Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
		HX_STACK_LINE(825)
		Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
		HX_STACK_LINE(825)
		Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
		HX_STACK_LINE(825)
		Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
		HX_STACK_LINE(825)
		Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
		HX_STACK_LINE(825)
		Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)0] = (l23 * l27);
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)4] = (l24 * l27);
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)8] = (l25 * l27);
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)12] = (l26 * l27);
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
		HX_STACK_LINE(825)
		invWorldMatrix->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
	}
	HX_STACK_LINE(827)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->position;		HX_STACK_VAR(vector,"vector");
	HX_STACK_LINE(827)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(827)
	{
		HX_STACK_LINE(827)
		Float x = ((((vector->x * invWorldMatrix->m->__get((int)0)) + (vector->y * invWorldMatrix->m->__get((int)4))) + (vector->z * invWorldMatrix->m->__get((int)8))) + invWorldMatrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(827)
		Float y = ((((vector->x * invWorldMatrix->m->__get((int)1)) + (vector->y * invWorldMatrix->m->__get((int)5))) + (vector->z * invWorldMatrix->m->__get((int)9))) + invWorldMatrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(827)
		Float z = ((((vector->x * invWorldMatrix->m->__get((int)2)) + (vector->y * invWorldMatrix->m->__get((int)6))) + (vector->z * invWorldMatrix->m->__get((int)10))) + invWorldMatrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(827)
		Float w = ((((vector->x * invWorldMatrix->m->__get((int)3)) + (vector->y * invWorldMatrix->m->__get((int)7))) + (vector->z * invWorldMatrix->m->__get((int)11))) + invWorldMatrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(827)
		result->x = (Float(x) / Float(w));
		HX_STACK_LINE(827)
		result->y = (Float(y) / Float(w));
		HX_STACK_LINE(827)
		result->z = (Float(z) / Float(w));
	}
	HX_STACK_LINE(827)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,getLocalTranslation,return )

bool AbstractMesh_obj::intersectsMesh( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh,bool precise){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","intersectsMesh",0x2b3d2971,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.intersectsMesh","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",859,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mesh,"mesh")
	HX_STACK_ARG(precise,"precise")
	HX_STACK_LINE(860)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(861)
	if (((bool((this->_boundingInfo == null())) || bool((mesh->_boundingInfo == null()))))){
		HX_STACK_LINE(862)
		ret = false;
	}
	else{
		HX_STACK_LINE(864)
		bool _g = this->_boundingInfo->intersects(mesh->_boundingInfo,precise);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(864)
		ret = _g;
	}
	HX_STACK_LINE(866)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(AbstractMesh_obj,intersectsMesh,return )

bool AbstractMesh_obj::intersectsPoint( ::com::gamestudiohx::babylonhx::tools::math::Vector3 point){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","intersectsPoint",0x6b0f684c,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.intersectsPoint","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",869,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(870)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(871)
	if (((this->_boundingInfo != null()))){
		HX_STACK_LINE(872)
		bool _g = this->_boundingInfo->intersectsPoint(point);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(872)
		ret = _g;
	}
	HX_STACK_LINE(874)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMesh_obj,intersectsPoint,return )

::com::gamestudiohx::babylonhx::collisions::PickingInfo AbstractMesh_obj::intersects( ::com::gamestudiohx::babylonhx::tools::math::Ray ray,bool fastCheck){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","intersects",0x0b8c3164,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.intersects","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",877,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(fastCheck,"fastCheck")
	HX_STACK_LINE(878)
	::com::gamestudiohx::babylonhx::collisions::PickingInfo pickingInfo = ::com::gamestudiohx::babylonhx::collisions::PickingInfo_obj::__new();		HX_STACK_VAR(pickingInfo,"pickingInfo");
	HX_STACK_LINE(880)
	if (((  ((!(((  ((!(((this->_boundingInfo == null()))))) ? bool(!(ray->intersectsSphere(this->_boundingInfo->boundingSphere))) : bool(true) ))))) ? bool(!(ray->intersectsBox(this->_boundingInfo->boundingBox))) : bool(true) ))){
		HX_STACK_LINE(881)
		return pickingInfo;
	}
	HX_STACK_LINE(884)
	this->_generatePointsArray();
	HX_STACK_LINE(886)
	Float distance = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(distance,"distance");
	HX_STACK_LINE(888)
	{
		HX_STACK_LINE(888)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(888)
		int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(888)
		while((true)){
			HX_STACK_LINE(888)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(888)
				break;
			}
			HX_STACK_LINE(888)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(889)
			::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
			HX_STACK_LINE(892)
			if (((  (((this->subMeshes->length > (int)1))) ? bool(!(ray->intersectsBox(subMesh->_boundingInfo->boundingBox))) : bool(false) ))){
				HX_STACK_LINE(893)
				continue;
			}
			HX_STACK_LINE(895)
			Float currentDistance;		HX_STACK_VAR(currentDistance,"currentDistance");
			HX_STACK_LINE(895)
			{
				HX_STACK_LINE(895)
				Array< ::Dynamic > positions = this->_positions;		HX_STACK_VAR(positions,"positions");
				HX_STACK_LINE(895)
				Array< int > indices = this->_indices;		HX_STACK_VAR(indices,"indices");
				HX_STACK_LINE(895)
				Float distance1 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(distance1,"distance1");
				HX_STACK_LINE(895)
				int index1 = subMesh->indexStart;		HX_STACK_VAR(index1,"index1");
				HX_STACK_LINE(895)
				while((true)){
					HX_STACK_LINE(895)
					if ((!(((index1 < (subMesh->indexStart + subMesh->indexCount)))))){
						HX_STACK_LINE(895)
						break;
					}
					HX_STACK_LINE(895)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 p0 = positions->__get(indices->__get(index1)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p0,"p0");
					HX_STACK_LINE(895)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 p1 = positions->__get(indices->__get((index1 + (int)1))).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p1,"p1");
					HX_STACK_LINE(895)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 p2 = positions->__get(indices->__get((index1 + (int)2))).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p2,"p2");
					HX_STACK_LINE(895)
					Float currentDistance1 = ray->intersectsTriangle(p0,p1,p2);		HX_STACK_VAR(currentDistance1,"currentDistance1");
					HX_STACK_LINE(895)
					if (((currentDistance1 > (int)0))){
						HX_STACK_LINE(895)
						if (((bool(fastCheck) || bool((currentDistance1 < distance1))))){
							HX_STACK_LINE(895)
							distance1 = currentDistance1;
							HX_STACK_LINE(895)
							if ((fastCheck)){
								HX_STACK_LINE(895)
								break;
							}
						}
					}
					HX_STACK_LINE(895)
					hx::AddEq(index1,(int)3);
				}
				HX_STACK_LINE(895)
				if ((!(((bool((distance1 > (int)0)) && bool((distance1 < ::Math_obj::POSITIVE_INFINITY))))))){
					HX_STACK_LINE(895)
					distance1 = (int)0;
				}
				HX_STACK_LINE(895)
				currentDistance = distance1;
			}
			HX_STACK_LINE(897)
			if (((currentDistance > (int)0))){
				HX_STACK_LINE(898)
				if (((bool(fastCheck) || bool((currentDistance < distance))))){
					HX_STACK_LINE(899)
					distance = currentDistance;
					HX_STACK_LINE(901)
					if ((fastCheck)){
						HX_STACK_LINE(902)
						break;
					}
				}
			}
		}
	}
	HX_STACK_LINE(908)
	if (((bool((distance >= (int)0)) && bool((distance < ::Math_obj::POSITIVE_INFINITY))))){
		HX_STACK_LINE(910)
		::com::gamestudiohx::babylonhx::tools::math::Matrix world;		HX_STACK_VAR(world,"world");
		HX_STACK_LINE(910)
		{
			HX_STACK_LINE(910)
			int _g = this->_scene->getRenderId();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(910)
			if (((this->_currentRenderId != _g))){
				HX_STACK_LINE(910)
				bool force = false;		HX_STACK_VAR(force,"force");
				HX_STACK_LINE(910)
				::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
				struct _Function_4_1{
					inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",910,0x2cff64c0)
						{
							HX_STACK_LINE(910)
							int _g1 = __this->_scene->getRenderId();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(910)
							return (  ((!(((__this->_currentRenderId == _g1))))) ? bool(__this->isSynchronized(null())) : bool(true) );
						}
						return null();
					}
				};
				HX_STACK_LINE(910)
				if (((  ((!(force))) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(910)
					this->_childrenFlag = (int)0;
				}
				else{
					HX_STACK_LINE(910)
					this->_childrenFlag = (int)1;
					HX_STACK_LINE(910)
					this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
					HX_STACK_LINE(910)
					this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
					HX_STACK_LINE(910)
					this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
					HX_STACK_LINE(910)
					int _g2 = this->_scene->getRenderId();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(910)
					this->_currentRenderId = _g2;
					HX_STACK_LINE(910)
					{
						HX_STACK_LINE(910)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(910)
						result->m[(int)0] = this->scaling->x;
						HX_STACK_LINE(910)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(910)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(910)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(910)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(910)
						result->m[(int)5] = this->scaling->y;
						HX_STACK_LINE(910)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(910)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(910)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(910)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(910)
						result->m[(int)10] = this->scaling->z;
						HX_STACK_LINE(910)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(910)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(910)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(910)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(910)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(910)
						result;
					}
					HX_STACK_LINE(910)
					if (((this->rotationQuaternion != null()))){
						HX_STACK_LINE(910)
						{
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = this->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(910)
							Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(910)
							Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
							HX_STACK_LINE(910)
							Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
							HX_STACK_LINE(910)
							Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
							HX_STACK_LINE(910)
							Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
							HX_STACK_LINE(910)
							Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
							HX_STACK_LINE(910)
							Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
							HX_STACK_LINE(910)
							Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
							HX_STACK_LINE(910)
							Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
							HX_STACK_LINE(910)
							result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
							HX_STACK_LINE(910)
							result->m[(int)1] = (2.0 * ((xy + zw)));
							HX_STACK_LINE(910)
							result->m[(int)2] = (2.0 * ((zx - yw)));
							HX_STACK_LINE(910)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(910)
							result->m[(int)4] = (2.0 * ((xy - zw)));
							HX_STACK_LINE(910)
							result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
							HX_STACK_LINE(910)
							result->m[(int)6] = (2.0 * ((yz + xw)));
							HX_STACK_LINE(910)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(910)
							result->m[(int)8] = (2.0 * ((zx + yw)));
							HX_STACK_LINE(910)
							result->m[(int)9] = (2.0 * ((yz - xw)));
							HX_STACK_LINE(910)
							result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
							HX_STACK_LINE(910)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(910)
							result->m[(int)12] = (int)0;
							HX_STACK_LINE(910)
							result->m[(int)13] = (int)0;
							HX_STACK_LINE(910)
							result->m[(int)14] = (int)0;
							HX_STACK_LINE(910)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(910)
							result;
						}
						HX_STACK_LINE(910)
						this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
					}
					else{
						HX_STACK_LINE(910)
						{
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion _g3;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(910)
							{
								HX_STACK_LINE(910)
								Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
								HX_STACK_LINE(910)
								Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
								HX_STACK_LINE(910)
								Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
								HX_STACK_LINE(910)
								Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
								HX_STACK_LINE(910)
								Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
								HX_STACK_LINE(910)
								Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
								HX_STACK_LINE(910)
								Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
								HX_STACK_LINE(910)
								Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
								HX_STACK_LINE(910)
								Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
								HX_STACK_LINE(910)
								tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
								HX_STACK_LINE(910)
								tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
								HX_STACK_LINE(910)
								tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
								HX_STACK_LINE(910)
								tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
								HX_STACK_LINE(910)
								_g3 = tempQuaternion;
							}
							HX_STACK_LINE(910)
							tempQuaternion = _g3;
							HX_STACK_LINE(910)
							{
								HX_STACK_LINE(910)
								Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
								HX_STACK_LINE(910)
								Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
								HX_STACK_LINE(910)
								Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
								HX_STACK_LINE(910)
								Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
								HX_STACK_LINE(910)
								Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
								HX_STACK_LINE(910)
								Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
								HX_STACK_LINE(910)
								Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
								HX_STACK_LINE(910)
								Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
								HX_STACK_LINE(910)
								Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
								HX_STACK_LINE(910)
								result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
								HX_STACK_LINE(910)
								result->m[(int)1] = (2.0 * ((xy + zw)));
								HX_STACK_LINE(910)
								result->m[(int)2] = (2.0 * ((zx - yw)));
								HX_STACK_LINE(910)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)4] = (2.0 * ((xy - zw)));
								HX_STACK_LINE(910)
								result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
								HX_STACK_LINE(910)
								result->m[(int)6] = (2.0 * ((yz + xw)));
								HX_STACK_LINE(910)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)8] = (2.0 * ((zx + yw)));
								HX_STACK_LINE(910)
								result->m[(int)9] = (2.0 * ((yz - xw)));
								HX_STACK_LINE(910)
								result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
								HX_STACK_LINE(910)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)12] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)13] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)14] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(910)
								result;
							}
						}
						HX_STACK_LINE(910)
						this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
					}
					HX_STACK_LINE(910)
					if ((this->infiniteDistance)){
						HX_STACK_LINE(910)
						::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
						HX_STACK_LINE(910)
						{
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(910)
							{
								HX_STACK_LINE(910)
								result->m[(int)0] = 1.0;
								HX_STACK_LINE(910)
								result->m[(int)1] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)2] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)4] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)5] = 1.0;
								HX_STACK_LINE(910)
								result->m[(int)6] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)8] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)9] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)10] = 1.0;
								HX_STACK_LINE(910)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)12] = (this->position->x + camera->position->x);
								HX_STACK_LINE(910)
								result->m[(int)13] = (this->position->y + camera->position->y);
								HX_STACK_LINE(910)
								result->m[(int)14] = (this->position->z + camera->position->z);
								HX_STACK_LINE(910)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(910)
								result;
							}
						}
					}
					else{
						HX_STACK_LINE(910)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(910)
						{
							HX_STACK_LINE(910)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(910)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(910)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(910)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(910)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(910)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(910)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(910)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(910)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(910)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(910)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(910)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(910)
							result->m[(int)12] = this->position->x;
							HX_STACK_LINE(910)
							result->m[(int)13] = this->position->y;
							HX_STACK_LINE(910)
							result->m[(int)14] = this->position->z;
							HX_STACK_LINE(910)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(910)
							result;
						}
					}
					HX_STACK_LINE(910)
					{
						HX_STACK_LINE(910)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(910)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(910)
						{
							HX_STACK_LINE(910)
							Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(910)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(910)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(910)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(910)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(910)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(910)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(910)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(910)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(910)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(910)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(910)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(910)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(910)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(910)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(910)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(910)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(910)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(910)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(910)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(910)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(910)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(910)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(910)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(910)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(910)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(910)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(910)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(910)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(910)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(910)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(910)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(910)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(910)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(910)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(910)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(910)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(910)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(910)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(910)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(910)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(910)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(910)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(910)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(910)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(910)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(910)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(910)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(910)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(910)
							result;
						}
					}
					HX_STACK_LINE(910)
					{
						HX_STACK_LINE(910)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(910)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(910)
						{
							HX_STACK_LINE(910)
							Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(910)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(910)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(910)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(910)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(910)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(910)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(910)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(910)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(910)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(910)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(910)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(910)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(910)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(910)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(910)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(910)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(910)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(910)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(910)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(910)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(910)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(910)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(910)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(910)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(910)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(910)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(910)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(910)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(910)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(910)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(910)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(910)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(910)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(910)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(910)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(910)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(910)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(910)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(910)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(910)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(910)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(910)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(910)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(910)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(910)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(910)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(910)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(910)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(910)
							result;
						}
					}
					HX_STACK_LINE(910)
					if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
						HX_STACK_LINE(910)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
						HX_STACK_LINE(910)
						{
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(910)
							localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
						}
						HX_STACK_LINE(910)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
						HX_STACK_LINE(910)
						{
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(910)
							zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
						}
						HX_STACK_LINE(910)
						if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
							HX_STACK_LINE(910)
							{
								HX_STACK_LINE(910)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
								HX_STACK_LINE(910)
								hx::AddEq(localPosition->x,otherVector->x);
								HX_STACK_LINE(910)
								hx::AddEq(localPosition->y,otherVector->y);
								HX_STACK_LINE(910)
								hx::AddEq(localPosition->z,otherVector->z);
							}
							HX_STACK_LINE(910)
							{
								HX_STACK_LINE(910)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(910)
								{
									HX_STACK_LINE(910)
									result->m[(int)0] = 1.0;
									HX_STACK_LINE(910)
									result->m[(int)1] = (int)0;
									HX_STACK_LINE(910)
									result->m[(int)2] = (int)0;
									HX_STACK_LINE(910)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(910)
									result->m[(int)4] = (int)0;
									HX_STACK_LINE(910)
									result->m[(int)5] = 1.0;
									HX_STACK_LINE(910)
									result->m[(int)6] = (int)0;
									HX_STACK_LINE(910)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(910)
									result->m[(int)8] = (int)0;
									HX_STACK_LINE(910)
									result->m[(int)9] = (int)0;
									HX_STACK_LINE(910)
									result->m[(int)10] = 1.0;
									HX_STACK_LINE(910)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(910)
									result->m[(int)12] = localPosition->x;
									HX_STACK_LINE(910)
									result->m[(int)13] = localPosition->y;
									HX_STACK_LINE(910)
									result->m[(int)14] = localPosition->z;
									HX_STACK_LINE(910)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(910)
									result;
								}
							}
						}
						HX_STACK_LINE(910)
						if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
							HX_STACK_LINE(910)
							zero = this->_scene->activeCamera->position;
						}
						else{
							HX_STACK_LINE(910)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
								HX_STACK_LINE(910)
								zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
							HX_STACK_LINE(910)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
								HX_STACK_LINE(910)
								zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
							HX_STACK_LINE(910)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
								HX_STACK_LINE(910)
								zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
						}
						HX_STACK_LINE(910)
						{
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
							HX_STACK_LINE(910)
							{
								HX_STACK_LINE(910)
								zAxis->x = (zero->x - localPosition->x);
								HX_STACK_LINE(910)
								zAxis->y = (zero->y - localPosition->y);
								HX_STACK_LINE(910)
								zAxis->z = (zero->z - localPosition->z);
							}
							HX_STACK_LINE(910)
							{
								HX_STACK_LINE(910)
								Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(910)
								if (((len != (int)0))){
									HX_STACK_LINE(910)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(910)
									hx::MultEq(zAxis->x,num);
									HX_STACK_LINE(910)
									hx::MultEq(zAxis->y,num);
									HX_STACK_LINE(910)
									hx::MultEq(zAxis->z,num);
								}
							}
							HX_STACK_LINE(910)
							{
								HX_STACK_LINE(910)
								xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
								HX_STACK_LINE(910)
								xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
								HX_STACK_LINE(910)
								xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
							}
							HX_STACK_LINE(910)
							{
								HX_STACK_LINE(910)
								Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(910)
								if (((len != (int)0))){
									HX_STACK_LINE(910)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(910)
									hx::MultEq(xAxis->x,num);
									HX_STACK_LINE(910)
									hx::MultEq(xAxis->y,num);
									HX_STACK_LINE(910)
									hx::MultEq(xAxis->z,num);
								}
							}
							HX_STACK_LINE(910)
							{
								HX_STACK_LINE(910)
								yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
								HX_STACK_LINE(910)
								yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
								HX_STACK_LINE(910)
								yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
							}
							HX_STACK_LINE(910)
							{
								HX_STACK_LINE(910)
								Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(910)
								if (((len != (int)0))){
									HX_STACK_LINE(910)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(910)
									hx::MultEq(yAxis->x,num);
									HX_STACK_LINE(910)
									hx::MultEq(yAxis->y,num);
									HX_STACK_LINE(910)
									hx::MultEq(yAxis->z,num);
								}
							}
							HX_STACK_LINE(910)
							Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
							HX_STACK_LINE(910)
							Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
							HX_STACK_LINE(910)
							Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
							HX_STACK_LINE(910)
							{
								HX_STACK_LINE(910)
								result->m[(int)0] = xAxis->x;
								HX_STACK_LINE(910)
								result->m[(int)1] = yAxis->x;
								HX_STACK_LINE(910)
								result->m[(int)2] = zAxis->x;
								HX_STACK_LINE(910)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)4] = xAxis->y;
								HX_STACK_LINE(910)
								result->m[(int)5] = yAxis->y;
								HX_STACK_LINE(910)
								result->m[(int)6] = zAxis->y;
								HX_STACK_LINE(910)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)8] = xAxis->z;
								HX_STACK_LINE(910)
								result->m[(int)9] = yAxis->z;
								HX_STACK_LINE(910)
								result->m[(int)10] = zAxis->z;
								HX_STACK_LINE(910)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(910)
								result->m[(int)12] = ex;
								HX_STACK_LINE(910)
								result->m[(int)13] = ey;
								HX_STACK_LINE(910)
								result->m[(int)14] = ez;
								HX_STACK_LINE(910)
								result->m[(int)15] = (int)1;
								HX_STACK_LINE(910)
								result;
							}
						}
						HX_STACK_LINE(910)
						this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
						HX_STACK_LINE(910)
						{
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localBillboard;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(910)
							{
								HX_STACK_LINE(910)
								Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
								HX_STACK_LINE(910)
								Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
								HX_STACK_LINE(910)
								Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
								HX_STACK_LINE(910)
								Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
								HX_STACK_LINE(910)
								Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
								HX_STACK_LINE(910)
								Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
								HX_STACK_LINE(910)
								Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
								HX_STACK_LINE(910)
								Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
								HX_STACK_LINE(910)
								Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
								HX_STACK_LINE(910)
								Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
								HX_STACK_LINE(910)
								Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
								HX_STACK_LINE(910)
								Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
								HX_STACK_LINE(910)
								Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
								HX_STACK_LINE(910)
								Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
								HX_STACK_LINE(910)
								Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
								HX_STACK_LINE(910)
								Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
								HX_STACK_LINE(910)
								Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
								HX_STACK_LINE(910)
								Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
								HX_STACK_LINE(910)
								Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
								HX_STACK_LINE(910)
								Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
								HX_STACK_LINE(910)
								Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
								HX_STACK_LINE(910)
								Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
								HX_STACK_LINE(910)
								Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
								HX_STACK_LINE(910)
								Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
								HX_STACK_LINE(910)
								Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
								HX_STACK_LINE(910)
								Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
								HX_STACK_LINE(910)
								Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
								HX_STACK_LINE(910)
								Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
								HX_STACK_LINE(910)
								Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
								HX_STACK_LINE(910)
								Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
								HX_STACK_LINE(910)
								Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
								HX_STACK_LINE(910)
								Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
								HX_STACK_LINE(910)
								Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
								HX_STACK_LINE(910)
								Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
								HX_STACK_LINE(910)
								Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
								HX_STACK_LINE(910)
								Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
								HX_STACK_LINE(910)
								Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
								HX_STACK_LINE(910)
								Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
								HX_STACK_LINE(910)
								Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
								HX_STACK_LINE(910)
								_this->m[(int)0] = (l23 * l27);
								HX_STACK_LINE(910)
								_this->m[(int)4] = (l24 * l27);
								HX_STACK_LINE(910)
								_this->m[(int)8] = (l25 * l27);
								HX_STACK_LINE(910)
								_this->m[(int)12] = (l26 * l27);
								HX_STACK_LINE(910)
								_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
								HX_STACK_LINE(910)
								_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
								HX_STACK_LINE(910)
								_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
								HX_STACK_LINE(910)
								_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
								HX_STACK_LINE(910)
								_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
								HX_STACK_LINE(910)
								_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
								HX_STACK_LINE(910)
								_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
								HX_STACK_LINE(910)
								_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
								HX_STACK_LINE(910)
								_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
								HX_STACK_LINE(910)
								_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
								HX_STACK_LINE(910)
								_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
								HX_STACK_LINE(910)
								_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
							}
						}
						HX_STACK_LINE(910)
						{
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(910)
							{
								HX_STACK_LINE(910)
								Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(910)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(910)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(910)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(910)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(910)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(910)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(910)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(910)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(910)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(910)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(910)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(910)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(910)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(910)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(910)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(910)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(910)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(910)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(910)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(910)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(910)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(910)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(910)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(910)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(910)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(910)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(910)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(910)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(910)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(910)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(910)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(910)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(910)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(910)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(910)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(910)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(910)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(910)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(910)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(910)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(910)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(910)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(910)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(910)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(910)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(910)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(910)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(910)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(910)
								result;
							}
						}
						HX_STACK_LINE(910)
						{
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(910)
							{
								HX_STACK_LINE(910)
								Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(910)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(910)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(910)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(910)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(910)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(910)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(910)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(910)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(910)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(910)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(910)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(910)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(910)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(910)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(910)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(910)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(910)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(910)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(910)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(910)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(910)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(910)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(910)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(910)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(910)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(910)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(910)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(910)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(910)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(910)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(910)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(910)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(910)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(910)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(910)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(910)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(910)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(910)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(910)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(910)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(910)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(910)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(910)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(910)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(910)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(910)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(910)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(910)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(910)
								result;
							}
						}
					}
					struct _Function_5_1{
						inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",910,0x2cff64c0)
							{
								HX_STACK_LINE(910)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _g4 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(910)
								return (_g4 != null());
							}
							return null();
						}
					};
					HX_STACK_LINE(910)
					if (((  (((  (((this->parent != null()))) ? bool(_Function_5_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
						HX_STACK_LINE(910)
						{
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(910)
							{
								HX_STACK_LINE(910)
								Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(910)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(910)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(910)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(910)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(910)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(910)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(910)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(910)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(910)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(910)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(910)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(910)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(910)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(910)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(910)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(910)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(910)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(910)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(910)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(910)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(910)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(910)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(910)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(910)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(910)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(910)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(910)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(910)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(910)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(910)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(910)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(910)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(910)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(910)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(910)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(910)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(910)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(910)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(910)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(910)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(910)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(910)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(910)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(910)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(910)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(910)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(910)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(910)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(910)
								result;
							}
						}
						HX_STACK_LINE(910)
						::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
						HX_STACK_LINE(910)
						{
							HX_STACK_LINE(910)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localWorld;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(910)
							{
								HX_STACK_LINE(910)
								Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(910)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(910)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(910)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(910)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(910)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(910)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(910)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(910)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(910)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(910)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(910)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(910)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(910)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(910)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(910)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(910)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(910)
								Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(910)
								Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(910)
								Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(910)
								Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(910)
								Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(910)
								Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(910)
								Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(910)
								Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(910)
								Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(910)
								Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(910)
								Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(910)
								Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(910)
								Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(910)
								Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(910)
								Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(910)
								Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(910)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(910)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(910)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(910)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(910)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(910)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(910)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(910)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(910)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(910)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(910)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(910)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(910)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(910)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(910)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(910)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(910)
								result;
							}
						}
					}
					else{
						HX_STACK_LINE(910)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(910)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(910)
						{
							HX_STACK_LINE(910)
							Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(910)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(910)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(910)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(910)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(910)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(910)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(910)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(910)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(910)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(910)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(910)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(910)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(910)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(910)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(910)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(910)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(910)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(910)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(910)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(910)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(910)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(910)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(910)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(910)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(910)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(910)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(910)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(910)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(910)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(910)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(910)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(910)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(910)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(910)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(910)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(910)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(910)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(910)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(910)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(910)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(910)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(910)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(910)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(910)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(910)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(910)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(910)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(910)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(910)
							result;
						}
					}
					HX_STACK_LINE(910)
					if (((this->_boundingInfo != null()))){
						HX_STACK_LINE(910)
						Float _g5 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(910)
						this->_scaleFactor = _g5;
						HX_STACK_LINE(910)
						Float _g6 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(910)
						this->_scaleFactor = _g6;
						struct _Function_6_1{
							inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",910,0x2cff64c0)
								{
									HX_STACK_LINE(910)
									Dynamic _g7 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
									HX_STACK_LINE(910)
									return (_g7 != null());
								}
								return null();
							}
						};
						HX_STACK_LINE(910)
						if (((  (((this->parent != null()))) ? bool(_Function_6_1::Block(this)) : bool(false) ))){
							HX_STACK_LINE(910)
							Dynamic _g8 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(910)
							Float _g9 = (this->_scaleFactor * _g8);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(910)
							this->_scaleFactor = _g9;
						}
						HX_STACK_LINE(910)
						this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
						HX_STACK_LINE(910)
						{
							HX_STACK_LINE(910)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(910)
							int _g3 = this->subMeshes->length;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(910)
							while((true)){
								HX_STACK_LINE(910)
								if ((!(((_g1 < _g3))))){
									HX_STACK_LINE(910)
									break;
								}
								HX_STACK_LINE(910)
								int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
								HX_STACK_LINE(910)
								::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
								HX_STACK_LINE(910)
								subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
							}
						}
					}
					HX_STACK_LINE(910)
					{
						HX_STACK_LINE(910)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_absolutePosition;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(910)
						_this->x = this->_worldMatrix->m->__get((int)12);
						HX_STACK_LINE(910)
						_this->y = this->_worldMatrix->m->__get((int)13);
						HX_STACK_LINE(910)
						_this->z = this->_worldMatrix->m->__get((int)14);
					}
					HX_STACK_LINE(910)
					ret = this->_worldMatrix;
				}
				HX_STACK_LINE(910)
				ret;
			}
			HX_STACK_LINE(910)
			world = this->_worldMatrix;
		}
		HX_STACK_LINE(911)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 worldOrigin;		HX_STACK_VAR(worldOrigin,"worldOrigin");
		HX_STACK_LINE(911)
		{
			HX_STACK_LINE(911)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = ray->origin;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(911)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(911)
			{
				HX_STACK_LINE(911)
				Float x = ((((vector->x * world->m->__get((int)0)) + (vector->y * world->m->__get((int)4))) + (vector->z * world->m->__get((int)8))) + world->m->__get((int)12));		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(911)
				Float y = ((((vector->x * world->m->__get((int)1)) + (vector->y * world->m->__get((int)5))) + (vector->z * world->m->__get((int)9))) + world->m->__get((int)13));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(911)
				Float z = ((((vector->x * world->m->__get((int)2)) + (vector->y * world->m->__get((int)6))) + (vector->z * world->m->__get((int)10))) + world->m->__get((int)14));		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(911)
				Float w = ((((vector->x * world->m->__get((int)3)) + (vector->y * world->m->__get((int)7))) + (vector->z * world->m->__get((int)11))) + world->m->__get((int)15));		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(911)
				result->x = (Float(x) / Float(w));
				HX_STACK_LINE(911)
				result->y = (Float(y) / Float(w));
				HX_STACK_LINE(911)
				result->z = (Float(z) / Float(w));
			}
			HX_STACK_LINE(911)
			worldOrigin = result;
		}
		HX_STACK_LINE(912)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 direction;		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(912)
		{
			HX_STACK_LINE(912)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = ray->direction;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(912)
			direction = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
		}
		HX_STACK_LINE(913)
		{
			HX_STACK_LINE(913)
			Float len = ::Math_obj::sqrt((((direction->x * direction->x) + (direction->y * direction->y)) + (direction->z * direction->z)));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(913)
			if (((len != (int)0))){
				HX_STACK_LINE(913)
				Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(913)
				hx::MultEq(direction->x,num);
				HX_STACK_LINE(913)
				hx::MultEq(direction->y,num);
				HX_STACK_LINE(913)
				hx::MultEq(direction->z,num);
			}
		}
		HX_STACK_LINE(914)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g10 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((direction->x * distance),(direction->y * distance),(direction->z * distance));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(914)
		direction = _g10;
		HX_STACK_LINE(915)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 worldDirection;		HX_STACK_VAR(worldDirection,"worldDirection");
		HX_STACK_LINE(915)
		{
			HX_STACK_LINE(915)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(915)
			{
				HX_STACK_LINE(915)
				result->x = (((direction->x * world->m->__get((int)0)) + (direction->y * world->m->__get((int)4))) + (direction->z * world->m->__get((int)8)));
				HX_STACK_LINE(915)
				result->y = (((direction->x * world->m->__get((int)1)) + (direction->y * world->m->__get((int)5))) + (direction->z * world->m->__get((int)9)));
				HX_STACK_LINE(915)
				result->z = (((direction->x * world->m->__get((int)2)) + (direction->y * world->m->__get((int)6))) + (direction->z * world->m->__get((int)10)));
			}
			HX_STACK_LINE(915)
			worldDirection = result;
		}
		HX_STACK_LINE(917)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 pickedPoint = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((worldOrigin->x + worldDirection->x),(worldOrigin->y + worldDirection->y),(worldOrigin->z + worldDirection->z));		HX_STACK_VAR(pickedPoint,"pickedPoint");
		HX_STACK_LINE(920)
		pickingInfo->hit = true;
		struct _Function_2_1{
			inline static Float Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &pickedPoint,::com::gamestudiohx::babylonhx::tools::math::Vector3 &worldOrigin){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",921,0x2cff64c0)
				{
					HX_STACK_LINE(921)
					Float x = (worldOrigin->x - pickedPoint->x);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(921)
					Float y = (worldOrigin->y - pickedPoint->y);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(921)
					Float z = (worldOrigin->z - pickedPoint->z);		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(921)
					return (((x * x) + (y * y)) + (z * z));
				}
				return null();
			}
		};
		HX_STACK_LINE(921)
		Float _g11 = ::Math_obj::sqrt(_Function_2_1::Block(pickedPoint,worldOrigin));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(921)
		pickingInfo->distance = _g11;
		HX_STACK_LINE(922)
		pickingInfo->pickedPoint = pickedPoint;
		HX_STACK_LINE(923)
		::com::gamestudiohx::babylonhx::mesh::Mesh _g12;		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(923)
		_g12 = hx::TCast< com::gamestudiohx::babylonhx::mesh::Mesh >::cast(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(923)
		pickingInfo->pickedMesh = _g12;
		HX_STACK_LINE(924)
		return pickingInfo;
	}
	HX_STACK_LINE(927)
	return pickingInfo;
}


HX_DEFINE_DYNAMIC_FUNC2(AbstractMesh_obj,intersects,return )

::com::gamestudiohx::babylonhx::mesh::AbstractMesh AbstractMesh_obj::clone( ::String name,::com::gamestudiohx::babylonhx::mesh::Mesh newParent,hx::Null< bool >  __o_doNotCloneChildren){
bool doNotCloneChildren = __o_doNotCloneChildren.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","clone",0x37f922ad,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.clone","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",931,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(newParent,"newParent")
	HX_STACK_ARG(doNotCloneChildren,"doNotCloneChildren")
{
		HX_STACK_LINE(931)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(AbstractMesh_obj,clone,return )

Void AbstractMesh_obj::releaseSubMeshes( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","releaseSubMeshes",0xebd67124,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.releaseSubMeshes","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",983,0x2cff64c0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(983)
		if (((this->subMeshes != null()))){
			HX_STACK_LINE(984)
			while((true)){
				HX_STACK_LINE(984)
				if ((!(((this->subMeshes->length > (int)0))))){
					HX_STACK_LINE(984)
					break;
				}
				HX_STACK_LINE(985)
				this->subMeshes->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >()->dispose();
			}
		}
		else{
			HX_STACK_LINE(988)
			Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(988)
			this->subMeshes = _g;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMesh_obj,releaseSubMeshes,(void))

Void AbstractMesh_obj::dispose( hx::Null< bool >  __o_doNotRecurse){
bool doNotRecurse = __o_doNotRecurse.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","dispose",0x480103ef,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.dispose","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",992,0x2cff64c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(doNotRecurse,"doNotRecurse")
{
		HX_STACK_LINE(993)
		if (((this->_vertexBuffers != null()))){
			HX_STACK_LINE(994)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_vertexBuffers->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(995)
					this->_vertexBuffers->get(key)->__Field(HX_CSTRING("dispose"),true)();
					HX_STACK_LINE(996)
					this->_vertexBuffers->remove(key);
				}
;
			}
			HX_STACK_LINE(998)
			this->_vertexBuffers = null();
		}
		HX_STACK_LINE(1001)
		if (((this->_indexBuffer != null()))){
			HX_STACK_LINE(1002)
			this->_scene->getEngine()->_releaseBuffer(this->_indexBuffer);
			HX_STACK_LINE(1003)
			this->_indexBuffer = null();
		}
		HX_STACK_LINE(1009)
		this->_scene->meshes->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(1011)
		if ((!(doNotRecurse))){
			HX_STACK_LINE(1013)
			int index = (int)0;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(1014)
			while((true)){
				HX_STACK_LINE(1014)
				if ((!(((index < this->_scene->particleSystems->length))))){
					HX_STACK_LINE(1014)
					break;
				}
				HX_STACK_LINE(1015)
				if (((this->_scene->particleSystems->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::particles::ParticleSystem >()->emitter == hx::ObjectPtr<OBJ_>(this)))){
					HX_STACK_LINE(1016)
					this->_scene->particleSystems->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::particles::ParticleSystem >()->dispose();
					HX_STACK_LINE(1017)
					(index)--;
				}
				HX_STACK_LINE(1019)
				(index)++;
			}
			HX_STACK_LINE(1023)
			Array< ::Dynamic > objects = this->_scene->meshes->slice((int)0,null());		HX_STACK_VAR(objects,"objects");
			HX_STACK_LINE(1024)
			{
				HX_STACK_LINE(1024)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1024)
				int _g = objects->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1024)
				while((true)){
					HX_STACK_LINE(1024)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(1024)
						break;
					}
					HX_STACK_LINE(1024)
					int index1 = (_g1)++;		HX_STACK_VAR(index1,"index1");
					HX_STACK_LINE(1025)
					if (((objects->__get(index1).StaticCast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >()->parent == hx::ObjectPtr<OBJ_>(this)))){
						HX_STACK_LINE(1026)
						objects->__get(index1).StaticCast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >()->dispose(null());
					}
				}
			}
		}
		HX_STACK_LINE(1031)
		this->_isDisposed = true;
		HX_STACK_LINE(1034)
		if (((this->onDispose_dyn() != null()))){
			HX_STACK_LINE(1035)
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

::com::gamestudiohx::babylonhx::mesh::Mesh AbstractMesh_obj::CreateBox( ::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,hx::Null< bool >  __o_updatable){
bool updatable = __o_updatable.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","CreateBox",0x71036b9f,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.CreateBox","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",1116,0x2cff64c0)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
{
		HX_STACK_LINE(1117)
		::com::gamestudiohx::babylonhx::mesh::Mesh box = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(box,"box");
		HX_STACK_LINE(1120)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1121)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)-1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1122)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)1,(int)0,(int)0);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1123)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)-1,(int)0,(int)0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1124)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)1,(int)0);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(1125)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g5 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)-1,(int)0);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(1119)
		Array< ::Dynamic > normalsSource = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3).Add(_g4).Add(_g5);		HX_STACK_VAR(normalsSource,"normalsSource");
		HX_STACK_LINE(1128)
		Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(1129)
		Array< Float > positions = Array_obj< Float >::__new();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(1130)
		Array< Float > normals = Array_obj< Float >::__new();		HX_STACK_VAR(normals,"normals");
		HX_STACK_LINE(1131)
		Array< Float > uvs = Array_obj< Float >::__new();		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(1134)
		{
			HX_STACK_LINE(1134)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1134)
			int _g6 = normalsSource->length;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1134)
			while((true)){
				HX_STACK_LINE(1134)
				if ((!(((_g11 < _g6))))){
					HX_STACK_LINE(1134)
					break;
				}
				HX_STACK_LINE(1134)
				int index = (_g11)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(1135)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = normalsSource->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(normal,"normal");
				HX_STACK_LINE(1138)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 side1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(normal->y,normal->z,normal->x);		HX_STACK_VAR(side1,"side1");
				HX_STACK_LINE(1139)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 side2;		HX_STACK_VAR(side2,"side2");
				HX_STACK_LINE(1139)
				{
					HX_STACK_LINE(1139)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(1139)
					{
						HX_STACK_LINE(1139)
						result->x = ((normal->y * side1->z) - (normal->z * side1->y));
						HX_STACK_LINE(1139)
						result->y = ((normal->z * side1->x) - (normal->x * side1->z));
						HX_STACK_LINE(1139)
						result->z = ((normal->x * side1->y) - (normal->y * side1->x));
					}
					HX_STACK_LINE(1139)
					side2 = result;
				}
				HX_STACK_LINE(1142)
				int verticesLength = ::Std_obj::_int((Float(positions->length) / Float((int)3)));		HX_STACK_VAR(verticesLength,"verticesLength");
				HX_STACK_LINE(1143)
				indices->push(verticesLength);
				HX_STACK_LINE(1144)
				indices->push((verticesLength + (int)1));
				HX_STACK_LINE(1145)
				indices->push((verticesLength + (int)2));
				HX_STACK_LINE(1147)
				indices->push(verticesLength);
				HX_STACK_LINE(1148)
				indices->push((verticesLength + (int)2));
				HX_STACK_LINE(1149)
				indices->push((verticesLength + (int)3));
				HX_STACK_LINE(1152)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 vertex;		HX_STACK_VAR(vertex,"vertex");
				HX_STACK_LINE(1152)
				{
					HX_STACK_LINE(1152)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1152)
					{
						HX_STACK_LINE(1152)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x - side1->x),(normal->y - side1->y),(normal->z - side1->z));		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1152)
						_this = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this1->x - side2->x),(_this1->y - side2->y),(_this1->z - side2->z));
					}
					HX_STACK_LINE(1152)
					Float scale = (Float(size) / Float((int)2));		HX_STACK_VAR(scale,"scale");
					HX_STACK_LINE(1152)
					vertex = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this->x * scale),(_this->y * scale),(_this->z * scale));
				}
				HX_STACK_LINE(1153)
				positions->push(vertex->x);
				HX_STACK_LINE(1154)
				positions->push(vertex->y);
				HX_STACK_LINE(1155)
				positions->push(vertex->z);
				HX_STACK_LINE(1156)
				normals->push(normal->x);
				HX_STACK_LINE(1157)
				normals->push(normal->y);
				HX_STACK_LINE(1158)
				normals->push(normal->z);
				HX_STACK_LINE(1159)
				uvs->push(1.0);
				HX_STACK_LINE(1160)
				uvs->push(1.0);
				HX_STACK_LINE(1162)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g61;		HX_STACK_VAR(_g61,"_g61");
				HX_STACK_LINE(1162)
				{
					HX_STACK_LINE(1162)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1162)
					{
						HX_STACK_LINE(1162)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x - side1->x),(normal->y - side1->y),(normal->z - side1->z));		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1162)
						_this = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this1->x + side2->x),(_this1->y + side2->y),(_this1->z + side2->z));
					}
					HX_STACK_LINE(1162)
					Float scale = (Float(size) / Float((int)2));		HX_STACK_VAR(scale,"scale");
					HX_STACK_LINE(1162)
					_g61 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this->x * scale),(_this->y * scale),(_this->z * scale));
				}
				HX_STACK_LINE(1162)
				vertex = _g61;
				HX_STACK_LINE(1163)
				positions->push(vertex->x);
				HX_STACK_LINE(1164)
				positions->push(vertex->y);
				HX_STACK_LINE(1165)
				positions->push(vertex->z);
				HX_STACK_LINE(1166)
				normals->push(normal->x);
				HX_STACK_LINE(1167)
				normals->push(normal->y);
				HX_STACK_LINE(1168)
				normals->push(normal->z);
				HX_STACK_LINE(1169)
				uvs->push(0.0);
				HX_STACK_LINE(1170)
				uvs->push(1.0);
				HX_STACK_LINE(1172)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(1172)
				{
					HX_STACK_LINE(1172)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1172)
					{
						HX_STACK_LINE(1172)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x + side1->x),(normal->y + side1->y),(normal->z + side1->z));		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1172)
						_this = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this1->x + side2->x),(_this1->y + side2->y),(_this1->z + side2->z));
					}
					HX_STACK_LINE(1172)
					Float scale = (Float(size) / Float((int)2));		HX_STACK_VAR(scale,"scale");
					HX_STACK_LINE(1172)
					_g7 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this->x * scale),(_this->y * scale),(_this->z * scale));
				}
				HX_STACK_LINE(1172)
				vertex = _g7;
				HX_STACK_LINE(1173)
				positions->push(vertex->x);
				HX_STACK_LINE(1174)
				positions->push(vertex->y);
				HX_STACK_LINE(1175)
				positions->push(vertex->z);
				HX_STACK_LINE(1176)
				normals->push(normal->x);
				HX_STACK_LINE(1177)
				normals->push(normal->y);
				HX_STACK_LINE(1178)
				normals->push(normal->z);
				HX_STACK_LINE(1179)
				uvs->push(0.0);
				HX_STACK_LINE(1180)
				uvs->push(0.0);
				HX_STACK_LINE(1182)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g8;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(1182)
				{
					HX_STACK_LINE(1182)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1182)
					{
						HX_STACK_LINE(1182)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x + side1->x),(normal->y + side1->y),(normal->z + side1->z));		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1182)
						_this = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this1->x - side2->x),(_this1->y - side2->y),(_this1->z - side2->z));
					}
					HX_STACK_LINE(1182)
					Float scale = (Float(size) / Float((int)2));		HX_STACK_VAR(scale,"scale");
					HX_STACK_LINE(1182)
					_g8 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this->x * scale),(_this->y * scale),(_this->z * scale));
				}
				HX_STACK_LINE(1182)
				vertex = _g8;
				HX_STACK_LINE(1183)
				positions->push(vertex->x);
				HX_STACK_LINE(1184)
				positions->push(vertex->y);
				HX_STACK_LINE(1185)
				positions->push(vertex->z);
				HX_STACK_LINE(1186)
				normals->push(normal->x);
				HX_STACK_LINE(1187)
				normals->push(normal->y);
				HX_STACK_LINE(1188)
				normals->push(normal->z);
				HX_STACK_LINE(1189)
				uvs->push(1.0);
				HX_STACK_LINE(1190)
				uvs->push(0.0);
			}
		}
		HX_STACK_LINE(1193)
		box->setVerticesData(positions,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind,updatable);
		HX_STACK_LINE(1194)
		box->setVerticesData(normals,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind,updatable);
		HX_STACK_LINE(1195)
		box->setVerticesData(uvs,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UVKind,updatable);
		HX_STACK_LINE(1196)
		box->setIndices(indices);
		HX_STACK_LINE(1198)
		return box;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AbstractMesh_obj,CreateBox,return )

::com::gamestudiohx::babylonhx::mesh::Mesh AbstractMesh_obj::CreateCylinder( ::String name,Float height,Float diameterTop,Float diameterBottom,int tessellation,::com::gamestudiohx::babylonhx::Scene scene,bool updatable){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","CreateCylinder",0x914c7042,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.CreateCylinder","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",1201,0x2cff64c0)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(diameterTop,"diameterTop")
	HX_STACK_ARG(diameterBottom,"diameterBottom")
	HX_STACK_ARG(tessellation,"tessellation")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
	HX_STACK_LINE(1201)
	Array< int > tessellation1 = Array_obj< int >::__new().Add(tessellation);		HX_STACK_VAR(tessellation1,"tessellation1");
	HX_STACK_LINE(1201)
	Array< Float > height1 = Array_obj< Float >::__new().Add(height);		HX_STACK_VAR(height1,"height1");
	HX_STACK_LINE(1202)
	Array< Float > radiusTop = Array_obj< Float >::__new().Add((Float(diameterTop) / Float((int)2)));		HX_STACK_VAR(radiusTop,"radiusTop");
	HX_STACK_LINE(1203)
	Array< Float > radiusBottom = Array_obj< Float >::__new().Add((Float(diameterBottom) / Float((int)2)));		HX_STACK_VAR(radiusBottom,"radiusBottom");
	HX_STACK_LINE(1205)
	Array< ::Dynamic > indices = Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new());		HX_STACK_VAR(indices,"indices");
	HX_STACK_LINE(1206)
	Array< ::Dynamic > positions = Array_obj< ::Dynamic >::__new().Add(Array_obj< Float >::__new());		HX_STACK_VAR(positions,"positions");
	HX_STACK_LINE(1207)
	Array< ::Dynamic > normals = Array_obj< ::Dynamic >::__new().Add(Array_obj< Float >::__new());		HX_STACK_VAR(normals,"normals");
	HX_STACK_LINE(1208)
	Array< ::Dynamic > uvs = Array_obj< ::Dynamic >::__new().Add(Array_obj< Float >::__new());		HX_STACK_VAR(uvs,"uvs");
	HX_STACK_LINE(1210)
	::com::gamestudiohx::babylonhx::mesh::Mesh cylinder = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(cylinder,"cylinder");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< int >,tessellation1)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 run(int i){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",1212,0x2cff64c0)
		HX_STACK_ARG(i,"i")
		{
			HX_STACK_LINE(1213)
			Float angle = (Float(((i * (int)2) * ::Math_obj::PI)) / Float(tessellation1->__get((int)0)));		HX_STACK_VAR(angle,"angle");
			HX_STACK_LINE(1214)
			Float dx = ::Math_obj::sin(angle);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(1215)
			Float dz = ::Math_obj::cos(angle);		HX_STACK_VAR(dz,"dz");
			HX_STACK_LINE(1217)
			return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(dx,(int)0,dz);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(1212)
	Dynamic getCircleVector = Dynamic( Array_obj<Dynamic>::__new().Add( Dynamic(new _Function_1_1(tessellation1))));		HX_STACK_VAR(getCircleVector,"getCircleVector");

	HX_BEGIN_LOCAL_FUNC_S9(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,positions,Array< ::Dynamic >,indices,Array< Float >,radiusTop,Dynamic,getCircleVector,Array< int >,tessellation1,Array< Float >,height1,Array< ::Dynamic >,uvs,Array< Float >,radiusBottom,Array< ::Dynamic >,normals)
	Void run(bool isTop){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",1220,0x2cff64c0)
		HX_STACK_ARG(isTop,"isTop")
		{
			HX_STACK_LINE(1221)
			Float radius;		HX_STACK_VAR(radius,"radius");
			HX_STACK_LINE(1221)
			if ((isTop)){
				HX_STACK_LINE(1221)
				radius = radiusTop->__get((int)0);
			}
			else{
				HX_STACK_LINE(1221)
				radius = radiusBottom->__get((int)0);
			}
			HX_STACK_LINE(1223)
			if (((radius == (int)0))){
				HX_STACK_LINE(1224)
				return null();
			}
			HX_STACK_LINE(1228)
			{
				HX_STACK_LINE(1228)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1228)
				int _g = (tessellation1->__get((int)0) - (int)2);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1228)
				while((true)){
					HX_STACK_LINE(1228)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(1228)
						break;
					}
					HX_STACK_LINE(1228)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1229)
					int i1 = hx::Mod(((i + (int)1)),tessellation1->__get((int)0));		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1230)
					int i2 = hx::Mod(((i + (int)2)),tessellation1->__get((int)0));		HX_STACK_VAR(i2,"i2");
					HX_STACK_LINE(1232)
					if ((!(isTop))){
						HX_STACK_LINE(1233)
						int tmp = i1;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(1234)
						int i11 = i2;		HX_STACK_VAR(i11,"i11");
						HX_STACK_LINE(1235)
						i2 = tmp;
					}
					HX_STACK_LINE(1238)
					int vbase = ::Std_obj::_int((Float(positions->__get((int)0).StaticCast< Array< Float > >()->length) / Float((int)3)));		HX_STACK_VAR(vbase,"vbase");
					HX_STACK_LINE(1239)
					indices->__get((int)0).StaticCast< Array< int > >()->push(vbase);
					HX_STACK_LINE(1240)
					indices->__get((int)0).StaticCast< Array< int > >()->push((vbase + i1));
					HX_STACK_LINE(1241)
					indices->__get((int)0).StaticCast< Array< int > >()->push((vbase + i2));
				}
			}
			HX_STACK_LINE(1246)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)-1,(int)0);		HX_STACK_VAR(normal,"normal");
			HX_STACK_LINE(1247)
			::com::gamestudiohx::babylonhx::tools::math::Vector2 textureScale = ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new(-0.5,-0.5);		HX_STACK_VAR(textureScale,"textureScale");
			HX_STACK_LINE(1249)
			if ((!(isTop))){
				HX_STACK_LINE(1250)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x * (int)-1),(normal->y * (int)-1),(normal->z * (int)-1));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1250)
				normal = _g;
				HX_STACK_LINE(1251)
				textureScale->x = -(textureScale->x);
			}
			HX_STACK_LINE(1255)
			{
				HX_STACK_LINE(1255)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1255)
				while((true)){
					HX_STACK_LINE(1255)
					if ((!(((_g < tessellation1->__get((int)0)))))){
						HX_STACK_LINE(1255)
						break;
					}
					HX_STACK_LINE(1255)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1256)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 circleVector = getCircleVector->__GetItem((int)0)(i).Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(circleVector,"circleVector");
					HX_STACK_LINE(1257)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 position;		HX_STACK_VAR(position,"position");
					HX_STACK_LINE(1257)
					{
						HX_STACK_LINE(1257)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((circleVector->x * radius),(circleVector->y * radius),(circleVector->z * radius));		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1257)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x * height1->__get((int)0)),(normal->y * height1->__get((int)0)),(normal->z * height1->__get((int)0)));		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(1257)
						position = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this->x + otherVector->x),(_this->y + otherVector->y),(_this->z + otherVector->z));
					}
					HX_STACK_LINE(1258)
					::com::gamestudiohx::babylonhx::tools::math::Vector2 textureCoordinate = ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new(((circleVector->x * textureScale->x) + 0.5),((circleVector->z * textureScale->y) + 0.5));		HX_STACK_VAR(textureCoordinate,"textureCoordinate");
					HX_STACK_LINE(1260)
					positions->__get((int)0).StaticCast< Array< Float > >()->push(position->x);
					HX_STACK_LINE(1261)
					positions->__get((int)0).StaticCast< Array< Float > >()->push(position->y);
					HX_STACK_LINE(1262)
					positions->__get((int)0).StaticCast< Array< Float > >()->push(position->z);
					HX_STACK_LINE(1263)
					normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->x);
					HX_STACK_LINE(1264)
					normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->y);
					HX_STACK_LINE(1265)
					normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->z);
					HX_STACK_LINE(1266)
					uvs->__get((int)0).StaticCast< Array< Float > >()->push(textureCoordinate->x);
					HX_STACK_LINE(1267)
					uvs->__get((int)0).StaticCast< Array< Float > >()->push(textureCoordinate->y);
				}
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(1220)
	Dynamic createCylinderCap =  Dynamic(new _Function_1_2(positions,indices,radiusTop,getCircleVector,tessellation1,height1,uvs,radiusBottom,normals));		HX_STACK_VAR(createCylinderCap,"createCylinderCap");
	HX_STACK_LINE(1271)
	hx::DivEq(height1[(int)0],(int)2);
	HX_STACK_LINE(1273)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 topOffset;		HX_STACK_VAR(topOffset,"topOffset");
	HX_STACK_LINE(1273)
	{
		HX_STACK_LINE(1273)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)1,(int)0);		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1273)
		topOffset = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this->x * height1->__get((int)0)),(_this->y * height1->__get((int)0)),(_this->z * height1->__get((int)0)));
	}
	HX_STACK_LINE(1275)
	int stride = (tessellation1->__get((int)0) + (int)1);		HX_STACK_VAR(stride,"stride");
	HX_STACK_LINE(1278)
	{
		HX_STACK_LINE(1278)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1278)
		int _g = (tessellation1->__get((int)0) + (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1278)
		while((true)){
			HX_STACK_LINE(1278)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(1278)
				break;
			}
			HX_STACK_LINE(1278)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1279)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = getCircleVector->__GetItem((int)0)(i).Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(normal,"normal");
			HX_STACK_LINE(1280)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 sideOffsetBottom = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x * radiusBottom->__get((int)0)),(normal->y * radiusBottom->__get((int)0)),(normal->z * radiusBottom->__get((int)0)));		HX_STACK_VAR(sideOffsetBottom,"sideOffsetBottom");
			HX_STACK_LINE(1281)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 sideOffsetTop = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x * radiusTop->__get((int)0)),(normal->y * radiusTop->__get((int)0)),(normal->z * radiusTop->__get((int)0)));		HX_STACK_VAR(sideOffsetTop,"sideOffsetTop");
			HX_STACK_LINE(1282)
			::com::gamestudiohx::babylonhx::tools::math::Vector2 textureCoordinate = ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new((Float(i) / Float(tessellation1->__get((int)0))),(int)0);		HX_STACK_VAR(textureCoordinate,"textureCoordinate");
			HX_STACK_LINE(1284)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 position = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((sideOffsetBottom->x + topOffset->x),(sideOffsetBottom->y + topOffset->y),(sideOffsetBottom->z + topOffset->z));		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1285)
			positions->__get((int)0).StaticCast< Array< Float > >()->push(position->x);
			HX_STACK_LINE(1286)
			positions->__get((int)0).StaticCast< Array< Float > >()->push(position->y);
			HX_STACK_LINE(1287)
			positions->__get((int)0).StaticCast< Array< Float > >()->push(position->z);
			HX_STACK_LINE(1288)
			normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->x);
			HX_STACK_LINE(1289)
			normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->y);
			HX_STACK_LINE(1290)
			normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->z);
			HX_STACK_LINE(1291)
			uvs->__get((int)0).StaticCast< Array< Float > >()->push(textureCoordinate->x);
			HX_STACK_LINE(1292)
			uvs->__get((int)0).StaticCast< Array< Float > >()->push(textureCoordinate->y);
			HX_STACK_LINE(1294)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g11 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((sideOffsetTop->x - topOffset->x),(sideOffsetTop->y - topOffset->y),(sideOffsetTop->z - topOffset->z));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1294)
			position = _g11;
			HX_STACK_LINE(1295)
			hx::AddEq(textureCoordinate->y,(int)1);
			HX_STACK_LINE(1296)
			positions->__get((int)0).StaticCast< Array< Float > >()->push(position->x);
			HX_STACK_LINE(1297)
			positions->__get((int)0).StaticCast< Array< Float > >()->push(position->y);
			HX_STACK_LINE(1298)
			positions->__get((int)0).StaticCast< Array< Float > >()->push(position->z);
			HX_STACK_LINE(1299)
			normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->x);
			HX_STACK_LINE(1300)
			normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->y);
			HX_STACK_LINE(1301)
			normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->z);
			HX_STACK_LINE(1302)
			uvs->__get((int)0).StaticCast< Array< Float > >()->push(textureCoordinate->x);
			HX_STACK_LINE(1303)
			uvs->__get((int)0).StaticCast< Array< Float > >()->push(textureCoordinate->y);
			HX_STACK_LINE(1305)
			indices->__get((int)0).StaticCast< Array< int > >()->push((i * (int)2));
			HX_STACK_LINE(1306)
			indices->__get((int)0).StaticCast< Array< int > >()->push(hx::Mod((((i * (int)2) + (int)2)),((stride * (int)2))));
			HX_STACK_LINE(1307)
			indices->__get((int)0).StaticCast< Array< int > >()->push(((i * (int)2) + (int)1));
			HX_STACK_LINE(1309)
			indices->__get((int)0).StaticCast< Array< int > >()->push(((i * (int)2) + (int)1));
			HX_STACK_LINE(1310)
			indices->__get((int)0).StaticCast< Array< int > >()->push(hx::Mod((((i * (int)2) + (int)2)),((stride * (int)2))));
			HX_STACK_LINE(1311)
			indices->__get((int)0).StaticCast< Array< int > >()->push(hx::Mod((((i * (int)2) + (int)3)),((stride * (int)2))));
		}
	}
	HX_STACK_LINE(1315)
	createCylinderCap(true).Cast< Void >();
	HX_STACK_LINE(1316)
	createCylinderCap(false).Cast< Void >();
	HX_STACK_LINE(1318)
	cylinder->setVerticesData(positions->__get((int)0).StaticCast< Array< Float > >(),::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind,updatable);
	HX_STACK_LINE(1319)
	cylinder->setVerticesData(normals->__get((int)0).StaticCast< Array< Float > >(),::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind,updatable);
	HX_STACK_LINE(1320)
	cylinder->setVerticesData(uvs->__get((int)0).StaticCast< Array< Float > >(),::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UVKind,updatable);
	HX_STACK_LINE(1321)
	cylinder->setIndices(indices->__get((int)0).StaticCast< Array< int > >());
	HX_STACK_LINE(1323)
	return cylinder;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(AbstractMesh_obj,CreateCylinder,return )

::com::gamestudiohx::babylonhx::mesh::Mesh AbstractMesh_obj::CreateTorus( ::String name,Float diameter,Float thickness,int tessellation,::com::gamestudiohx::babylonhx::Scene scene,bool updatable){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","CreateTorus",0xa69f1b49,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.CreateTorus","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",1326,0x2cff64c0)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(diameter,"diameter")
	HX_STACK_ARG(thickness,"thickness")
	HX_STACK_ARG(tessellation,"tessellation")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
	HX_STACK_LINE(1327)
	::com::gamestudiohx::babylonhx::mesh::Mesh torus = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(torus,"torus");
	HX_STACK_LINE(1329)
	Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
	HX_STACK_LINE(1330)
	Array< Float > positions = Array_obj< Float >::__new();		HX_STACK_VAR(positions,"positions");
	HX_STACK_LINE(1331)
	Array< Float > normals = Array_obj< Float >::__new();		HX_STACK_VAR(normals,"normals");
	HX_STACK_LINE(1332)
	Array< Float > uvs = Array_obj< Float >::__new();		HX_STACK_VAR(uvs,"uvs");
	HX_STACK_LINE(1334)
	int stride = (tessellation + (int)1);		HX_STACK_VAR(stride,"stride");
	HX_STACK_LINE(1336)
	{
		HX_STACK_LINE(1336)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1336)
		int _g = (tessellation + (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1336)
		while((true)){
			HX_STACK_LINE(1336)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(1336)
				break;
			}
			HX_STACK_LINE(1336)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1337)
			Float u = (Float(i) / Float(tessellation));		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(1339)
			Float outerAngle = ((Float(((i * ::Math_obj::PI) * 2.0)) / Float(tessellation)) - (Float(::Math_obj::PI) / Float(2.0)));		HX_STACK_VAR(outerAngle,"outerAngle");
			HX_STACK_LINE(1341)
			::com::gamestudiohx::babylonhx::tools::math::Matrix transform;		HX_STACK_VAR(transform,"transform");
			HX_STACK_LINE(1341)
			{
				HX_STACK_LINE(1341)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1341)
				{
					HX_STACK_LINE(1341)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(1341)
					{
						HX_STACK_LINE(1341)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(1341)
						result1->m[(int)0] = 1.0;
						HX_STACK_LINE(1341)
						result1->m[(int)1] = (int)0;
						HX_STACK_LINE(1341)
						result1->m[(int)2] = (int)0;
						HX_STACK_LINE(1341)
						result1->m[(int)3] = (int)0;
						HX_STACK_LINE(1341)
						result1->m[(int)4] = (int)0;
						HX_STACK_LINE(1341)
						result1->m[(int)5] = 1.0;
						HX_STACK_LINE(1341)
						result1->m[(int)6] = (int)0;
						HX_STACK_LINE(1341)
						result1->m[(int)7] = (int)0;
						HX_STACK_LINE(1341)
						result1->m[(int)8] = (int)0;
						HX_STACK_LINE(1341)
						result1->m[(int)9] = (int)0;
						HX_STACK_LINE(1341)
						result1->m[(int)10] = 1.0;
						HX_STACK_LINE(1341)
						result1->m[(int)11] = (int)0;
						HX_STACK_LINE(1341)
						result1->m[(int)12] = (int)0;
						HX_STACK_LINE(1341)
						result1->m[(int)13] = (int)0;
						HX_STACK_LINE(1341)
						result1->m[(int)14] = (int)0;
						HX_STACK_LINE(1341)
						result1->m[(int)15] = 1.0;
						HX_STACK_LINE(1341)
						result = result1;
					}
					HX_STACK_LINE(1341)
					{
						HX_STACK_LINE(1341)
						result->m[(int)0] = 1.0;
						HX_STACK_LINE(1341)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)5] = 1.0;
						HX_STACK_LINE(1341)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)10] = 1.0;
						HX_STACK_LINE(1341)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)12] = (Float(diameter) / Float(2.0));
						HX_STACK_LINE(1341)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(1341)
						result;
					}
					HX_STACK_LINE(1341)
					_this = result;
				}
				HX_STACK_LINE(1341)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(1341)
				{
					HX_STACK_LINE(1341)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(1341)
					{
						HX_STACK_LINE(1341)
						Float s = ::Math_obj::sin(outerAngle);		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(1341)
						Float c = ::Math_obj::cos(outerAngle);		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(1341)
						result->m[(int)5] = 1.0;
						HX_STACK_LINE(1341)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(1341)
						result->m[(int)0] = c;
						HX_STACK_LINE(1341)
						result->m[(int)2] = -(s);
						HX_STACK_LINE(1341)
						result->m[(int)8] = s;
						HX_STACK_LINE(1341)
						result->m[(int)10] = c;
						HX_STACK_LINE(1341)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(1341)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(1341)
						result;
					}
					HX_STACK_LINE(1341)
					other = result;
				}
				HX_STACK_LINE(1341)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(1341)
				{
					HX_STACK_LINE(1341)
					Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
					HX_STACK_LINE(1341)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(1341)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(1341)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(1341)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(1341)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(1341)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(1341)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(1341)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(1341)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(1341)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(1341)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(1341)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(1341)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(1341)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(1341)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(1341)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(1341)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(1341)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(1341)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(1341)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(1341)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(1341)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(1341)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(1341)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(1341)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(1341)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(1341)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(1341)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(1341)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(1341)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(1341)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(1341)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(1341)
					result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(1341)
					result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(1341)
					result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(1341)
					result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(1341)
					result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(1341)
					result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(1341)
					result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(1341)
					result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(1341)
					result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(1341)
					result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(1341)
					result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(1341)
					result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(1341)
					result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(1341)
					result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(1341)
					result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(1341)
					result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(1341)
					result1;
				}
				HX_STACK_LINE(1341)
				transform = result;
			}
			HX_STACK_LINE(1343)
			{
				HX_STACK_LINE(1343)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1343)
				int _g2 = (tessellation + (int)1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1343)
				while((true)){
					HX_STACK_LINE(1343)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(1343)
						break;
					}
					HX_STACK_LINE(1343)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(1344)
					Float v = ((int)1 - (Float(j) / Float(tessellation)));		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1346)
					Float innerAngle = ((Float(((j * ::Math_obj::PI) * 2.0)) / Float(tessellation)) + ::Math_obj::PI);		HX_STACK_VAR(innerAngle,"innerAngle");
					HX_STACK_LINE(1347)
					Float dx = ::Math_obj::cos(innerAngle);		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(1348)
					Float dy = ::Math_obj::sin(innerAngle);		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(1351)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(dx,dy,(int)0);		HX_STACK_VAR(normal,"normal");
					HX_STACK_LINE(1352)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 position;		HX_STACK_VAR(position,"position");
					HX_STACK_LINE(1352)
					{
						HX_STACK_LINE(1352)
						Float scale = (Float(thickness) / Float((int)2));		HX_STACK_VAR(scale,"scale");
						HX_STACK_LINE(1352)
						position = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x * scale),(normal->y * scale),(normal->z * scale));
					}
					HX_STACK_LINE(1353)
					::com::gamestudiohx::babylonhx::tools::math::Vector2 textureCoordinate = ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new(u,v);		HX_STACK_VAR(textureCoordinate,"textureCoordinate");
					HX_STACK_LINE(1355)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(1355)
					{
						HX_STACK_LINE(1355)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(1355)
						{
							HX_STACK_LINE(1355)
							Float x = ((((position->x * transform->m->__get((int)0)) + (position->y * transform->m->__get((int)4))) + (position->z * transform->m->__get((int)8))) + transform->m->__get((int)12));		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1355)
							Float y = ((((position->x * transform->m->__get((int)1)) + (position->y * transform->m->__get((int)5))) + (position->z * transform->m->__get((int)9))) + transform->m->__get((int)13));		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1355)
							Float z = ((((position->x * transform->m->__get((int)2)) + (position->y * transform->m->__get((int)6))) + (position->z * transform->m->__get((int)10))) + transform->m->__get((int)14));		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(1355)
							Float w = ((((position->x * transform->m->__get((int)3)) + (position->y * transform->m->__get((int)7))) + (position->z * transform->m->__get((int)11))) + transform->m->__get((int)15));		HX_STACK_VAR(w,"w");
							HX_STACK_LINE(1355)
							result->x = (Float(x) / Float(w));
							HX_STACK_LINE(1355)
							result->y = (Float(y) / Float(w));
							HX_STACK_LINE(1355)
							result->z = (Float(z) / Float(w));
						}
						HX_STACK_LINE(1355)
						_g4 = result;
					}
					HX_STACK_LINE(1355)
					position = _g4;
					HX_STACK_LINE(1356)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(1356)
					{
						HX_STACK_LINE(1356)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(1356)
						{
							HX_STACK_LINE(1356)
							result->x = (((normal->x * transform->m->__get((int)0)) + (normal->y * transform->m->__get((int)4))) + (normal->z * transform->m->__get((int)8)));
							HX_STACK_LINE(1356)
							result->y = (((normal->x * transform->m->__get((int)1)) + (normal->y * transform->m->__get((int)5))) + (normal->z * transform->m->__get((int)9)));
							HX_STACK_LINE(1356)
							result->z = (((normal->x * transform->m->__get((int)2)) + (normal->y * transform->m->__get((int)6))) + (normal->z * transform->m->__get((int)10)));
						}
						HX_STACK_LINE(1356)
						_g11 = result;
					}
					HX_STACK_LINE(1356)
					normal = _g11;
					HX_STACK_LINE(1358)
					positions->push(position->x);
					HX_STACK_LINE(1359)
					positions->push(position->y);
					HX_STACK_LINE(1360)
					positions->push(position->z);
					HX_STACK_LINE(1361)
					normals->push(normal->x);
					HX_STACK_LINE(1362)
					normals->push(normal->y);
					HX_STACK_LINE(1363)
					normals->push(normal->z);
					HX_STACK_LINE(1364)
					uvs->push(textureCoordinate->x);
					HX_STACK_LINE(1365)
					uvs->push(textureCoordinate->y);
					HX_STACK_LINE(1368)
					int nextI = hx::Mod(((i + (int)1)),stride);		HX_STACK_VAR(nextI,"nextI");
					HX_STACK_LINE(1369)
					int nextJ = hx::Mod(((j + (int)1)),stride);		HX_STACK_VAR(nextJ,"nextJ");
					HX_STACK_LINE(1371)
					indices->push(((i * stride) + j));
					HX_STACK_LINE(1372)
					indices->push(((i * stride) + nextJ));
					HX_STACK_LINE(1373)
					indices->push(((nextI * stride) + j));
					HX_STACK_LINE(1375)
					indices->push(((i * stride) + nextJ));
					HX_STACK_LINE(1376)
					indices->push(((nextI * stride) + nextJ));
					HX_STACK_LINE(1377)
					indices->push(((nextI * stride) + j));
				}
			}
		}
	}
	HX_STACK_LINE(1381)
	torus->setVerticesData(positions,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind,updatable);
	HX_STACK_LINE(1382)
	torus->setVerticesData(normals,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind,updatable);
	HX_STACK_LINE(1383)
	torus->setVerticesData(uvs,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UVKind,updatable);
	HX_STACK_LINE(1384)
	torus->setIndices(indices);
	HX_STACK_LINE(1386)
	return torus;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(AbstractMesh_obj,CreateTorus,return )

::com::gamestudiohx::babylonhx::mesh::Mesh AbstractMesh_obj::CreateSphere( ::String name,int segments,Float diameter,::com::gamestudiohx::babylonhx::Scene scene,hx::Null< bool >  __o_updatable){
bool updatable = __o_updatable.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","CreateSphere",0x4afbb5f9,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.CreateSphere","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",1389,0x2cff64c0)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(segments,"segments")
	HX_STACK_ARG(diameter,"diameter")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
{
		HX_STACK_LINE(1390)
		::com::gamestudiohx::babylonhx::mesh::Mesh sphere = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(sphere,"sphere");
		HX_STACK_LINE(1392)
		Float radius = (Float(diameter) / Float((int)2));		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(1394)
		int totalZRotationSteps = ((int)2 + segments);		HX_STACK_VAR(totalZRotationSteps,"totalZRotationSteps");
		HX_STACK_LINE(1395)
		int totalYRotationSteps = ((int)2 * totalZRotationSteps);		HX_STACK_VAR(totalYRotationSteps,"totalYRotationSteps");
		HX_STACK_LINE(1397)
		Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(1398)
		Array< Float > positions = Array_obj< Float >::__new();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(1399)
		Array< Float > normals = Array_obj< Float >::__new();		HX_STACK_VAR(normals,"normals");
		HX_STACK_LINE(1400)
		Array< Float > uvs = Array_obj< Float >::__new();		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(1402)
		{
			HX_STACK_LINE(1402)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1402)
			int _g = (totalZRotationSteps + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1402)
			while((true)){
				HX_STACK_LINE(1402)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(1402)
					break;
				}
				HX_STACK_LINE(1402)
				int zRotationStep = (_g1)++;		HX_STACK_VAR(zRotationStep,"zRotationStep");
				HX_STACK_LINE(1403)
				Float normalizedZ = (Float(zRotationStep) / Float(totalZRotationSteps));		HX_STACK_VAR(normalizedZ,"normalizedZ");
				HX_STACK_LINE(1404)
				Float angleZ = (normalizedZ * ::Math_obj::PI);		HX_STACK_VAR(angleZ,"angleZ");
				HX_STACK_LINE(1406)
				{
					HX_STACK_LINE(1406)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1406)
					int _g2 = (totalYRotationSteps + (int)1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1406)
					while((true)){
						HX_STACK_LINE(1406)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(1406)
							break;
						}
						HX_STACK_LINE(1406)
						int yRotationStep = (_g3)++;		HX_STACK_VAR(yRotationStep,"yRotationStep");
						HX_STACK_LINE(1407)
						Float normalizedY = (Float(yRotationStep) / Float(totalYRotationSteps));		HX_STACK_VAR(normalizedY,"normalizedY");
						HX_STACK_LINE(1409)
						Float angleY = ((normalizedY * ::Math_obj::PI) * (int)2);		HX_STACK_VAR(angleY,"angleY");
						HX_STACK_LINE(1411)
						::com::gamestudiohx::babylonhx::tools::math::Matrix rotationZ;		HX_STACK_VAR(rotationZ,"rotationZ");
						HX_STACK_LINE(1411)
						{
							HX_STACK_LINE(1411)
							Float angle = -(angleZ);		HX_STACK_VAR(angle,"angle");
							HX_STACK_LINE(1411)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(1411)
							{
								HX_STACK_LINE(1411)
								Float s = ::Math_obj::sin(angle);		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1411)
								Float c = ::Math_obj::cos(angle);		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(1411)
								result->m[(int)10] = 1.0;
								HX_STACK_LINE(1411)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(1411)
								result->m[(int)0] = c;
								HX_STACK_LINE(1411)
								result->m[(int)1] = s;
								HX_STACK_LINE(1411)
								result->m[(int)4] = -(s);
								HX_STACK_LINE(1411)
								result->m[(int)5] = c;
								HX_STACK_LINE(1411)
								result->m[(int)2] = (int)0;
								HX_STACK_LINE(1411)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(1411)
								result->m[(int)6] = (int)0;
								HX_STACK_LINE(1411)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(1411)
								result->m[(int)8] = (int)0;
								HX_STACK_LINE(1411)
								result->m[(int)9] = (int)0;
								HX_STACK_LINE(1411)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(1411)
								result->m[(int)12] = (int)0;
								HX_STACK_LINE(1411)
								result->m[(int)13] = (int)0;
								HX_STACK_LINE(1411)
								result->m[(int)14] = (int)0;
								HX_STACK_LINE(1411)
								result;
							}
							HX_STACK_LINE(1411)
							rotationZ = result;
						}
						HX_STACK_LINE(1412)
						::com::gamestudiohx::babylonhx::tools::math::Matrix rotationY;		HX_STACK_VAR(rotationY,"rotationY");
						HX_STACK_LINE(1412)
						{
							HX_STACK_LINE(1412)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(1412)
							{
								HX_STACK_LINE(1412)
								Float s = ::Math_obj::sin(angleY);		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1412)
								Float c = ::Math_obj::cos(angleY);		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(1412)
								result->m[(int)5] = 1.0;
								HX_STACK_LINE(1412)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(1412)
								result->m[(int)0] = c;
								HX_STACK_LINE(1412)
								result->m[(int)2] = -(s);
								HX_STACK_LINE(1412)
								result->m[(int)8] = s;
								HX_STACK_LINE(1412)
								result->m[(int)10] = c;
								HX_STACK_LINE(1412)
								result->m[(int)1] = (int)0;
								HX_STACK_LINE(1412)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(1412)
								result->m[(int)4] = (int)0;
								HX_STACK_LINE(1412)
								result->m[(int)6] = (int)0;
								HX_STACK_LINE(1412)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(1412)
								result->m[(int)9] = (int)0;
								HX_STACK_LINE(1412)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(1412)
								result->m[(int)12] = (int)0;
								HX_STACK_LINE(1412)
								result->m[(int)13] = (int)0;
								HX_STACK_LINE(1412)
								result->m[(int)14] = (int)0;
								HX_STACK_LINE(1412)
								result;
							}
							HX_STACK_LINE(1412)
							rotationY = result;
						}
						HX_STACK_LINE(1413)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 afterRotZ;		HX_STACK_VAR(afterRotZ,"afterRotZ");
						HX_STACK_LINE(1413)
						{
							HX_STACK_LINE(1413)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(vector,"vector");
							HX_STACK_LINE(1413)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(1413)
							{
								HX_STACK_LINE(1413)
								Float x = ((((vector->x * rotationZ->m->__get((int)0)) + (vector->y * rotationZ->m->__get((int)4))) + (vector->z * rotationZ->m->__get((int)8))) + rotationZ->m->__get((int)12));		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1413)
								Float y = ((((vector->x * rotationZ->m->__get((int)1)) + (vector->y * rotationZ->m->__get((int)5))) + (vector->z * rotationZ->m->__get((int)9))) + rotationZ->m->__get((int)13));		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(1413)
								Float z = ((((vector->x * rotationZ->m->__get((int)2)) + (vector->y * rotationZ->m->__get((int)6))) + (vector->z * rotationZ->m->__get((int)10))) + rotationZ->m->__get((int)14));		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(1413)
								Float w = ((((vector->x * rotationZ->m->__get((int)3)) + (vector->y * rotationZ->m->__get((int)7))) + (vector->z * rotationZ->m->__get((int)11))) + rotationZ->m->__get((int)15));		HX_STACK_VAR(w,"w");
								HX_STACK_LINE(1413)
								result->x = (Float(x) / Float(w));
								HX_STACK_LINE(1413)
								result->y = (Float(y) / Float(w));
								HX_STACK_LINE(1413)
								result->z = (Float(z) / Float(w));
							}
							HX_STACK_LINE(1413)
							afterRotZ = result;
						}
						HX_STACK_LINE(1414)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 complete;		HX_STACK_VAR(complete,"complete");
						HX_STACK_LINE(1414)
						{
							HX_STACK_LINE(1414)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(1414)
							{
								HX_STACK_LINE(1414)
								Float x = ((((afterRotZ->x * rotationY->m->__get((int)0)) + (afterRotZ->y * rotationY->m->__get((int)4))) + (afterRotZ->z * rotationY->m->__get((int)8))) + rotationY->m->__get((int)12));		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1414)
								Float y = ((((afterRotZ->x * rotationY->m->__get((int)1)) + (afterRotZ->y * rotationY->m->__get((int)5))) + (afterRotZ->z * rotationY->m->__get((int)9))) + rotationY->m->__get((int)13));		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(1414)
								Float z = ((((afterRotZ->x * rotationY->m->__get((int)2)) + (afterRotZ->y * rotationY->m->__get((int)6))) + (afterRotZ->z * rotationY->m->__get((int)10))) + rotationY->m->__get((int)14));		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(1414)
								Float w = ((((afterRotZ->x * rotationY->m->__get((int)3)) + (afterRotZ->y * rotationY->m->__get((int)7))) + (afterRotZ->z * rotationY->m->__get((int)11))) + rotationY->m->__get((int)15));		HX_STACK_VAR(w,"w");
								HX_STACK_LINE(1414)
								result->x = (Float(x) / Float(w));
								HX_STACK_LINE(1414)
								result->y = (Float(y) / Float(w));
								HX_STACK_LINE(1414)
								result->z = (Float(z) / Float(w));
							}
							HX_STACK_LINE(1414)
							complete = result;
						}
						HX_STACK_LINE(1416)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 vertex = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((complete->x * radius),(complete->y * radius),(complete->z * radius));		HX_STACK_VAR(vertex,"vertex");
						HX_STACK_LINE(1417)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 normal;		HX_STACK_VAR(normal,"normal");
						HX_STACK_LINE(1417)
						{
							HX_STACK_LINE(1417)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(1417)
							{
								HX_STACK_LINE(1417)
								{
									HX_STACK_LINE(1417)
									result->x = vertex->x;
									HX_STACK_LINE(1417)
									result->y = vertex->y;
									HX_STACK_LINE(1417)
									result->z = vertex->z;
								}
								HX_STACK_LINE(1417)
								{
									HX_STACK_LINE(1417)
									Float len = ::Math_obj::sqrt((((result->x * result->x) + (result->y * result->y)) + (result->z * result->z)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(1417)
									if (((len != (int)0))){
										HX_STACK_LINE(1417)
										Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
										HX_STACK_LINE(1417)
										hx::MultEq(result->x,num);
										HX_STACK_LINE(1417)
										hx::MultEq(result->y,num);
										HX_STACK_LINE(1417)
										hx::MultEq(result->z,num);
									}
								}
							}
							HX_STACK_LINE(1417)
							normal = result;
						}
						HX_STACK_LINE(1419)
						positions->push(vertex->x);
						HX_STACK_LINE(1420)
						positions->push(vertex->y);
						HX_STACK_LINE(1421)
						positions->push(vertex->z);
						HX_STACK_LINE(1422)
						normals->push(normal->x);
						HX_STACK_LINE(1423)
						normals->push(normal->y);
						HX_STACK_LINE(1424)
						normals->push(normal->z);
						HX_STACK_LINE(1425)
						uvs->push(normalizedZ);
						HX_STACK_LINE(1426)
						uvs->push(normalizedY);
					}
				}
				HX_STACK_LINE(1429)
				if (((zRotationStep > (int)0))){
					HX_STACK_LINE(1430)
					Float verticesCount = (Float(positions->length) / Float((int)3));		HX_STACK_VAR(verticesCount,"verticesCount");
					HX_STACK_LINE(1431)
					int firstIndex = ::Std_obj::_int((verticesCount - ((int)2 * ((totalYRotationSteps + (int)1)))));		HX_STACK_VAR(firstIndex,"firstIndex");
					HX_STACK_LINE(1432)
					while((true)){
						HX_STACK_LINE(1432)
						if ((!(((((firstIndex + totalYRotationSteps) + (int)2) < verticesCount))))){
							HX_STACK_LINE(1432)
							break;
						}
						HX_STACK_LINE(1433)
						indices->push(firstIndex);
						HX_STACK_LINE(1434)
						indices->push((firstIndex + (int)1));
						HX_STACK_LINE(1435)
						indices->push(((firstIndex + totalYRotationSteps) + (int)1));
						HX_STACK_LINE(1437)
						indices->push(((firstIndex + totalYRotationSteps) + (int)1));
						HX_STACK_LINE(1438)
						indices->push((firstIndex + (int)1));
						HX_STACK_LINE(1439)
						indices->push(((firstIndex + totalYRotationSteps) + (int)2));
						HX_STACK_LINE(1441)
						(firstIndex)++;
					}
				}
			}
		}
		HX_STACK_LINE(1446)
		sphere->setVerticesData(positions,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind,updatable);
		HX_STACK_LINE(1447)
		sphere->setVerticesData(normals,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind,updatable);
		HX_STACK_LINE(1448)
		sphere->setVerticesData(uvs,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UVKind,updatable);
		HX_STACK_LINE(1449)
		sphere->setIndices(indices);
		HX_STACK_LINE(1451)
		return sphere;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AbstractMesh_obj,CreateSphere,return )

::com::gamestudiohx::babylonhx::mesh::Mesh AbstractMesh_obj::CreatePlane( ::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,bool updatable){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","CreatePlane",0x56fc38f0,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.CreatePlane","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",1454,0x2cff64c0)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
	HX_STACK_LINE(1455)
	::com::gamestudiohx::babylonhx::mesh::Mesh plane = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(plane,"plane");
	HX_STACK_LINE(1457)
	Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
	HX_STACK_LINE(1458)
	Array< Float > positions = Array_obj< Float >::__new();		HX_STACK_VAR(positions,"positions");
	HX_STACK_LINE(1459)
	Array< Float > normals = Array_obj< Float >::__new();		HX_STACK_VAR(normals,"normals");
	HX_STACK_LINE(1460)
	Array< Float > uvs = Array_obj< Float >::__new();		HX_STACK_VAR(uvs,"uvs");
	HX_STACK_LINE(1463)
	Float halfSize = (Float(size) / Float(2.0));		HX_STACK_VAR(halfSize,"halfSize");
	HX_STACK_LINE(1464)
	positions->push(-(halfSize));
	HX_STACK_LINE(1465)
	positions->push(-(halfSize));
	HX_STACK_LINE(1466)
	positions->push((int)0);
	HX_STACK_LINE(1467)
	normals->push((int)0);
	HX_STACK_LINE(1468)
	normals->push((int)0);
	HX_STACK_LINE(1469)
	normals->push(-1.0);
	HX_STACK_LINE(1470)
	uvs->push(0.0);
	HX_STACK_LINE(1471)
	uvs->push(0.0);
	HX_STACK_LINE(1473)
	positions->push(halfSize);
	HX_STACK_LINE(1474)
	positions->push(-(halfSize));
	HX_STACK_LINE(1475)
	positions->push((int)0);
	HX_STACK_LINE(1476)
	normals->push((int)0);
	HX_STACK_LINE(1477)
	normals->push((int)0);
	HX_STACK_LINE(1478)
	normals->push(-1.0);
	HX_STACK_LINE(1479)
	uvs->push(1.0);
	HX_STACK_LINE(1480)
	uvs->push(0.0);
	HX_STACK_LINE(1482)
	positions->push(halfSize);
	HX_STACK_LINE(1483)
	positions->push(halfSize);
	HX_STACK_LINE(1484)
	positions->push((int)0);
	HX_STACK_LINE(1485)
	normals->push((int)0);
	HX_STACK_LINE(1486)
	normals->push((int)0);
	HX_STACK_LINE(1487)
	normals->push(-1.0);
	HX_STACK_LINE(1488)
	uvs->push(1.0);
	HX_STACK_LINE(1489)
	uvs->push(1.0);
	HX_STACK_LINE(1491)
	positions->push(-(halfSize));
	HX_STACK_LINE(1492)
	positions->push(halfSize);
	HX_STACK_LINE(1493)
	positions->push((int)0);
	HX_STACK_LINE(1494)
	normals->push((int)0);
	HX_STACK_LINE(1495)
	normals->push((int)0);
	HX_STACK_LINE(1496)
	normals->push(-1.0);
	HX_STACK_LINE(1497)
	uvs->push(0.0);
	HX_STACK_LINE(1498)
	uvs->push(1.0);
	HX_STACK_LINE(1501)
	indices->push((int)0);
	HX_STACK_LINE(1502)
	indices->push((int)1);
	HX_STACK_LINE(1503)
	indices->push((int)2);
	HX_STACK_LINE(1505)
	indices->push((int)0);
	HX_STACK_LINE(1506)
	indices->push((int)2);
	HX_STACK_LINE(1507)
	indices->push((int)3);
	HX_STACK_LINE(1509)
	plane->setVerticesData(positions,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind,updatable);
	HX_STACK_LINE(1510)
	plane->setVerticesData(normals,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind,updatable);
	HX_STACK_LINE(1511)
	plane->setVerticesData(uvs,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UVKind,updatable);
	HX_STACK_LINE(1512)
	plane->setIndices(indices);
	HX_STACK_LINE(1514)
	return plane;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AbstractMesh_obj,CreatePlane,return )

::com::gamestudiohx::babylonhx::mesh::Mesh AbstractMesh_obj::CreateGround( ::String name,Float width,Float height,int subdivisions,::com::gamestudiohx::babylonhx::Scene scene,bool updatable){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","CreateGround",0xaa2d2973,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.CreateGround","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",1517,0x2cff64c0)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(subdivisions,"subdivisions")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
	HX_STACK_LINE(1518)
	::com::gamestudiohx::babylonhx::mesh::Mesh ground = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(ground,"ground");
	HX_STACK_LINE(1520)
	Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
	HX_STACK_LINE(1521)
	Array< Float > positions = Array_obj< Float >::__new();		HX_STACK_VAR(positions,"positions");
	HX_STACK_LINE(1522)
	Array< Float > normals = Array_obj< Float >::__new();		HX_STACK_VAR(normals,"normals");
	HX_STACK_LINE(1523)
	Array< Float > uvs = Array_obj< Float >::__new();		HX_STACK_VAR(uvs,"uvs");
	HX_STACK_LINE(1525)
	{
		HX_STACK_LINE(1525)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1525)
		int _g = (subdivisions + (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1525)
		while((true)){
			HX_STACK_LINE(1525)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(1525)
				break;
			}
			HX_STACK_LINE(1525)
			int row = (_g1)++;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(1526)
			{
				HX_STACK_LINE(1526)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1526)
				while((true)){
					HX_STACK_LINE(1526)
					if ((!(((_g2 < subdivisions))))){
						HX_STACK_LINE(1526)
						break;
					}
					HX_STACK_LINE(1526)
					int col = (_g2)++;		HX_STACK_VAR(col,"col");
					HX_STACK_LINE(1527)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 position = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(((Float((col * width)) / Float(subdivisions)) - (Float(width) / Float(2.0))),(int)0,((Float((((subdivisions - row)) * height)) / Float(subdivisions)) - (Float(height) / Float(2.0))));		HX_STACK_VAR(position,"position");
					HX_STACK_LINE(1528)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,1.0,(int)0);		HX_STACK_VAR(normal,"normal");
					HX_STACK_LINE(1530)
					positions->push(position->x);
					HX_STACK_LINE(1531)
					positions->push(position->y);
					HX_STACK_LINE(1532)
					positions->push(position->z);
					HX_STACK_LINE(1533)
					normals->push(normal->x);
					HX_STACK_LINE(1534)
					normals->push(normal->y);
					HX_STACK_LINE(1535)
					normals->push(normal->z);
					HX_STACK_LINE(1536)
					uvs->push((Float(col) / Float(subdivisions)));
					HX_STACK_LINE(1537)
					uvs->push((1.0 - (Float(row) / Float(subdivisions))));
				}
			}
		}
	}
	HX_STACK_LINE(1541)
	{
		HX_STACK_LINE(1541)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1541)
		while((true)){
			HX_STACK_LINE(1541)
			if ((!(((_g < subdivisions))))){
				HX_STACK_LINE(1541)
				break;
			}
			HX_STACK_LINE(1541)
			int row = (_g)++;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(1542)
			{
				HX_STACK_LINE(1542)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1542)
				while((true)){
					HX_STACK_LINE(1542)
					if ((!(((_g1 < subdivisions))))){
						HX_STACK_LINE(1542)
						break;
					}
					HX_STACK_LINE(1542)
					int col = (_g1)++;		HX_STACK_VAR(col,"col");
					HX_STACK_LINE(1543)
					indices->push(((col + (int)1) + (((row + (int)1)) * ((subdivisions + (int)1)))));
					HX_STACK_LINE(1544)
					indices->push(((col + (int)1) + (row * ((subdivisions + (int)1)))));
					HX_STACK_LINE(1545)
					indices->push((col + (row * ((subdivisions + (int)1)))));
					HX_STACK_LINE(1547)
					indices->push((col + (((row + (int)1)) * ((subdivisions + (int)1)))));
					HX_STACK_LINE(1548)
					indices->push(((col + (int)1) + (((row + (int)1)) * ((subdivisions + (int)1)))));
					HX_STACK_LINE(1549)
					indices->push((col + (row * ((subdivisions + (int)1)))));
				}
			}
		}
	}
	HX_STACK_LINE(1553)
	ground->setVerticesData(positions,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind,updatable);
	HX_STACK_LINE(1554)
	ground->setVerticesData(normals,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind,updatable);
	HX_STACK_LINE(1555)
	ground->setVerticesData(uvs,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UVKind,updatable);
	HX_STACK_LINE(1556)
	ground->setIndices(indices);
	HX_STACK_LINE(1558)
	return ground;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(AbstractMesh_obj,CreateGround,return )

::com::gamestudiohx::babylonhx::mesh::Mesh AbstractMesh_obj::CreateGroundFromHeightMap( ::String name,::String url,Float width,Float height,int subdivisions,Float minHeight,Float maxHeight,::com::gamestudiohx::babylonhx::Scene scene,bool updatable){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","CreateGroundFromHeightMap",0x5e609cb8,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.CreateGroundFromHeightMap","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",1561,0x2cff64c0)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(url,"url")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(subdivisions,"subdivisions")
	HX_STACK_ARG(minHeight,"minHeight")
	HX_STACK_ARG(maxHeight,"maxHeight")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
	HX_STACK_LINE(1561)
	Array< bool > updatable1 = Array_obj< bool >::__new().Add(updatable);		HX_STACK_VAR(updatable1,"updatable1");
	HX_STACK_LINE(1561)
	Array< Float > maxHeight1 = Array_obj< Float >::__new().Add(maxHeight);		HX_STACK_VAR(maxHeight1,"maxHeight1");
	HX_STACK_LINE(1561)
	Array< Float > minHeight1 = Array_obj< Float >::__new().Add(minHeight);		HX_STACK_VAR(minHeight1,"minHeight1");
	HX_STACK_LINE(1561)
	Array< int > subdivisions1 = Array_obj< int >::__new().Add(subdivisions);		HX_STACK_VAR(subdivisions1,"subdivisions1");
	HX_STACK_LINE(1561)
	Array< Float > height1 = Array_obj< Float >::__new().Add(height);		HX_STACK_VAR(height1,"height1");
	HX_STACK_LINE(1561)
	Array< Float > width1 = Array_obj< Float >::__new().Add(width);		HX_STACK_VAR(width1,"width1");
	HX_STACK_LINE(1562)
	Array< ::Dynamic > ground = Array_obj< ::Dynamic >::__new().Add(::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene));		HX_STACK_VAR(ground,"ground");

	HX_BEGIN_LOCAL_FUNC_S7(hx::LocalFunc,_Function_1_1,Array< Float >,maxHeight1,Array< ::Dynamic >,ground,Array< Float >,width1,Array< bool >,updatable1,Array< int >,subdivisions1,Array< Float >,minHeight1,Array< Float >,height1)
	Void run(::openfl::display::BitmapData img){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",1564,0x2cff64c0)
		HX_STACK_ARG(img,"img")
		{
			HX_STACK_LINE(1565)
			Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(1566)
			Array< Float > positions = Array_obj< Float >::__new();		HX_STACK_VAR(positions,"positions");
			HX_STACK_LINE(1567)
			Array< Float > normals = Array_obj< Float >::__new();		HX_STACK_VAR(normals,"normals");
			HX_STACK_LINE(1568)
			Array< Float > uvs = Array_obj< Float >::__new();		HX_STACK_VAR(uvs,"uvs");
			HX_STACK_LINE(1571)
			int heightMapWidth = img->get_width();		HX_STACK_VAR(heightMapWidth,"heightMapWidth");
			HX_STACK_LINE(1572)
			int heightMapHeight = img->get_height();		HX_STACK_VAR(heightMapHeight,"heightMapHeight");
			HX_STACK_LINE(1577)
			::openfl::utils::ByteArray buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1577)
			{
				HX_STACK_LINE(1577)
				int _g = img->get_width();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1577)
				int _g1 = img->get_height();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1577)
				::openfl::geom::Rectangle _g2 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,_g,_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1577)
				::openfl::utils::ByteArray data = img->getPixels(_g2);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(1577)
				int _g3 = img->get_width();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1577)
				int _g4 = img->get_height();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1577)
				int size = (_g3 * _g4);		HX_STACK_VAR(size,"size");
				HX_STACK_LINE(1577)
				int alpha;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(1577)
				int red;		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(1577)
				int green;		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(1577)
				int blue;		HX_STACK_VAR(blue,"blue");
				HX_STACK_LINE(1577)
				{
					HX_STACK_LINE(1577)
					int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(1577)
					while((true)){
						HX_STACK_LINE(1577)
						if ((!(((_g5 < size))))){
							HX_STACK_LINE(1577)
							break;
						}
						HX_STACK_LINE(1577)
						int i = (_g5)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(1577)
						alpha = data->__get((i * (int)4));
						HX_STACK_LINE(1577)
						red = data->__get(((i * (int)4) + (int)1));
						HX_STACK_LINE(1577)
						green = data->__get(((i * (int)4) + (int)2));
						HX_STACK_LINE(1577)
						blue = data->__get(((i * (int)4) + (int)3));
						HX_STACK_LINE(1577)
						hx::__ArrayImplRef(data,(i * (int)4)) = red;
						HX_STACK_LINE(1577)
						hx::__ArrayImplRef(data,((i * (int)4) + (int)1)) = green;
						HX_STACK_LINE(1577)
						hx::__ArrayImplRef(data,((i * (int)4) + (int)2)) = blue;
						HX_STACK_LINE(1577)
						hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = alpha;
					}
				}
				HX_STACK_LINE(1577)
				buffer = data;
			}
			HX_STACK_LINE(1581)
			{
				HX_STACK_LINE(1581)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1581)
				int _g = (subdivisions1->__get((int)0) + (int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1581)
				while((true)){
					HX_STACK_LINE(1581)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(1581)
						break;
					}
					HX_STACK_LINE(1581)
					int row = (_g1)++;		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(1582)
					{
						HX_STACK_LINE(1582)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1582)
						int _g2 = (subdivisions1->__get((int)0) + (int)1);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1582)
						while((true)){
							HX_STACK_LINE(1582)
							if ((!(((_g3 < _g2))))){
								HX_STACK_LINE(1582)
								break;
							}
							HX_STACK_LINE(1582)
							int col = (_g3)++;		HX_STACK_VAR(col,"col");
							HX_STACK_LINE(1583)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 position = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(((Float((col * width1->__get((int)0))) / Float(subdivisions1->__get((int)0))) - (Float(width1->__get((int)0)) / Float(2.0))),(int)0,((Float((((subdivisions1->__get((int)0) - row)) * height1->__get((int)0))) / Float(subdivisions1->__get((int)0))) - (Float(height1->__get((int)0)) / Float(2.0))));		HX_STACK_VAR(position,"position");
							HX_STACK_LINE(1586)
							Float heightMapX = ((Float(((position->x + (Float(width1->__get((int)0)) / Float((int)2))))) / Float(width1->__get((int)0))) * ((heightMapWidth - (int)1)));		HX_STACK_VAR(heightMapX,"heightMapX");
							HX_STACK_LINE(1587)
							Float heightMapY = (((1.0 - (Float(((position->z + (Float(height1->__get((int)0)) / Float((int)2))))) / Float(height1->__get((int)0))))) * ((heightMapHeight - (int)1)));		HX_STACK_VAR(heightMapY,"heightMapY");
							HX_STACK_LINE(1589)
							int pos = ::Std_obj::_int((((heightMapX + (heightMapY * heightMapWidth))) * (int)4));		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(1590)
							Float r = (Float(buffer->__get(pos)) / Float(255.0));		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(1591)
							Float g = (Float(buffer->__get((pos + (int)1))) / Float(255.0));		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(1592)
							Float b = (Float(buffer->__get((pos + (int)2))) / Float(255.0));		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(1594)
							Float gradient = (((r * 0.3) + (g * 0.59)) + (b * 0.11));		HX_STACK_VAR(gradient,"gradient");
							HX_STACK_LINE(1596)
							position->y = (minHeight1->__get((int)0) + (((maxHeight1->__get((int)0) - minHeight1->__get((int)0))) * gradient));
							HX_STACK_LINE(1599)
							positions->push(position->x);
							HX_STACK_LINE(1600)
							positions->push(position->y);
							HX_STACK_LINE(1601)
							positions->push(position->z);
							HX_STACK_LINE(1602)
							normals->push((int)0);
							HX_STACK_LINE(1603)
							normals->push((int)0);
							HX_STACK_LINE(1604)
							normals->push((int)0);
							HX_STACK_LINE(1605)
							uvs->push((Float(col) / Float(subdivisions1->__get((int)0))));
							HX_STACK_LINE(1606)
							uvs->push((1.0 - (Float(row) / Float(subdivisions1->__get((int)0)))));
						}
					}
				}
			}
			HX_STACK_LINE(1611)
			{
				HX_STACK_LINE(1611)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1611)
				while((true)){
					HX_STACK_LINE(1611)
					if ((!(((_g < subdivisions1->__get((int)0)))))){
						HX_STACK_LINE(1611)
						break;
					}
					HX_STACK_LINE(1611)
					int row = (_g)++;		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(1612)
					{
						HX_STACK_LINE(1612)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1612)
						while((true)){
							HX_STACK_LINE(1612)
							if ((!(((_g1 < subdivisions1->__get((int)0)))))){
								HX_STACK_LINE(1612)
								break;
							}
							HX_STACK_LINE(1612)
							int col = (_g1)++;		HX_STACK_VAR(col,"col");
							HX_STACK_LINE(1613)
							indices->push(((col + (int)1) + (((row + (int)1)) * ((subdivisions1->__get((int)0) + (int)1)))));
							HX_STACK_LINE(1614)
							indices->push(((col + (int)1) + (row * ((subdivisions1->__get((int)0) + (int)1)))));
							HX_STACK_LINE(1615)
							indices->push((col + (row * ((subdivisions1->__get((int)0) + (int)1)))));
							HX_STACK_LINE(1617)
							indices->push((col + (((row + (int)1)) * ((subdivisions1->__get((int)0) + (int)1)))));
							HX_STACK_LINE(1618)
							indices->push(((col + (int)1) + (((row + (int)1)) * ((subdivisions1->__get((int)0) + (int)1)))));
							HX_STACK_LINE(1619)
							indices->push((col + (row * ((subdivisions1->__get((int)0) + (int)1)))));
						}
					}
				}
			}
			HX_STACK_LINE(1624)
			::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::ComputeNormal(positions,normals,indices);
			HX_STACK_LINE(1626)
			::haxe::Log_obj::trace(positions->length,hx::SourceInfo(HX_CSTRING("AbstractMesh.hx"),1626,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.AbstractMesh"),HX_CSTRING("CreateGroundFromHeightMap")));
			HX_STACK_LINE(1627)
			::haxe::Log_obj::trace(normals->length,hx::SourceInfo(HX_CSTRING("AbstractMesh.hx"),1627,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.AbstractMesh"),HX_CSTRING("CreateGroundFromHeightMap")));
			HX_STACK_LINE(1628)
			::haxe::Log_obj::trace(indices->length,hx::SourceInfo(HX_CSTRING("AbstractMesh.hx"),1628,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.AbstractMesh"),HX_CSTRING("CreateGroundFromHeightMap")));
			HX_STACK_LINE(1631)
			ground->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Mesh >()->setVerticesData(positions,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind,updatable1->__get((int)0));
			HX_STACK_LINE(1632)
			ground->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Mesh >()->setVerticesData(normals,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind,updatable1->__get((int)0));
			HX_STACK_LINE(1633)
			ground->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Mesh >()->setVerticesData(uvs,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UVKind,updatable1->__get((int)0));
			HX_STACK_LINE(1634)
			ground->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Mesh >()->setIndices(indices);
			HX_STACK_LINE(1636)
			ground->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Mesh >()->_isReady = true;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(1564)
	Dynamic onload =  Dynamic(new _Function_1_1(maxHeight1,ground,width1,updatable1,subdivisions1,minHeight1,height1));		HX_STACK_VAR(onload,"onload");
	HX_STACK_LINE(1639)
	::com::gamestudiohx::babylonhx::tools::Tools_obj::LoadImage(url,onload);
	HX_STACK_LINE(1643)
	return ground->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Mesh >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(AbstractMesh_obj,CreateGroundFromHeightMap,return )

Void AbstractMesh_obj::ComputeNormal( Array< Float > positions,Array< Float > normals,Array< int > indices){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.AbstractMesh","ComputeNormal",0x68fdd02e,"com.gamestudiohx.babylonhx.mesh.AbstractMesh.ComputeNormal","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",1646,0x2cff64c0)
		HX_STACK_ARG(positions,"positions")
		HX_STACK_ARG(normals,"normals")
		HX_STACK_ARG(indices,"indices")
		HX_STACK_LINE(1647)
		Array< ::Dynamic > positionVectors = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(positionVectors,"positionVectors");
		HX_STACK_LINE(1648)
		Array< ::Dynamic > facesOfVertices = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(facesOfVertices,"facesOfVertices");
		HX_STACK_LINE(1650)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(1652)
		while((true)){
			HX_STACK_LINE(1652)
			if ((!(((index < positions->length))))){
				HX_STACK_LINE(1652)
				break;
			}
			HX_STACK_LINE(1653)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 vector3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(positions->__get(index),positions->__get((index + (int)1)),positions->__get((index + (int)2)));		HX_STACK_VAR(vector3,"vector3");
			HX_STACK_LINE(1654)
			positionVectors->push(vector3);
			HX_STACK_LINE(1655)
			facesOfVertices->push(Array_obj< int >::__new());
			HX_STACK_LINE(1656)
			hx::AddEq(index,(int)3);
		}
		HX_STACK_LINE(1660)
		Array< ::Dynamic > facesNormals = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(facesNormals,"facesNormals");
		HX_STACK_LINE(1661)
		{
			HX_STACK_LINE(1661)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1661)
			int _g = ::Std_obj::_int((Float(indices->length) / Float((int)3)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1661)
			while((true)){
				HX_STACK_LINE(1661)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(1661)
					break;
				}
				HX_STACK_LINE(1661)
				int index1 = (_g1)++;		HX_STACK_VAR(index1,"index1");
				HX_STACK_LINE(1662)
				int i1 = indices->__get((index1 * (int)3));		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(1663)
				int i2 = indices->__get(((index1 * (int)3) + (int)1));		HX_STACK_VAR(i2,"i2");
				HX_STACK_LINE(1664)
				int i3 = indices->__get(((index1 * (int)3) + (int)2));		HX_STACK_VAR(i3,"i3");
				HX_STACK_LINE(1666)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 p1 = positionVectors->__get(i1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(1667)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 p2 = positionVectors->__get(i2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p2,"p2");
				HX_STACK_LINE(1668)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 p3 = positionVectors->__get(i3).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p3,"p3");
				HX_STACK_LINE(1670)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 p1p2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((p1->x - p2->x),(p1->y - p2->y),(p1->z - p2->z));		HX_STACK_VAR(p1p2,"p1p2");
				HX_STACK_LINE(1671)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 p3p2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((p3->x - p2->x),(p3->y - p2->y),(p3->z - p2->z));		HX_STACK_VAR(p3p2,"p3p2");
				HX_STACK_LINE(1673)
				{
					HX_STACK_LINE(1673)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 vector;		HX_STACK_VAR(vector,"vector");
					HX_STACK_LINE(1673)
					{
						HX_STACK_LINE(1673)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(1673)
						{
							HX_STACK_LINE(1673)
							result->x = ((p1p2->y * p3p2->z) - (p1p2->z * p3p2->y));
							HX_STACK_LINE(1673)
							result->y = ((p1p2->z * p3p2->x) - (p1p2->x * p3p2->z));
							HX_STACK_LINE(1673)
							result->z = ((p1p2->x * p3p2->y) - (p1p2->y * p3p2->x));
						}
						HX_STACK_LINE(1673)
						vector = result;
					}
					HX_STACK_LINE(1673)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(1673)
					{
						HX_STACK_LINE(1673)
						{
							HX_STACK_LINE(1673)
							result->x = vector->x;
							HX_STACK_LINE(1673)
							result->y = vector->y;
							HX_STACK_LINE(1673)
							result->z = vector->z;
						}
						HX_STACK_LINE(1673)
						{
							HX_STACK_LINE(1673)
							Float len = ::Math_obj::sqrt((((result->x * result->x) + (result->y * result->y)) + (result->z * result->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(1673)
							if (((len != (int)0))){
								HX_STACK_LINE(1673)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(1673)
								hx::MultEq(result->x,num);
								HX_STACK_LINE(1673)
								hx::MultEq(result->y,num);
								HX_STACK_LINE(1673)
								hx::MultEq(result->z,num);
							}
						}
					}
					HX_STACK_LINE(1673)
					facesNormals[index1] = result;
				}
				HX_STACK_LINE(1674)
				facesOfVertices->__get(i1).StaticCast< Array< int > >()->push(index1);
				HX_STACK_LINE(1675)
				facesOfVertices->__get(i2).StaticCast< Array< int > >()->push(index1);
				HX_STACK_LINE(1676)
				facesOfVertices->__get(i3).StaticCast< Array< int > >()->push(index1);
			}
		}
		HX_STACK_LINE(1679)
		{
			HX_STACK_LINE(1679)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1679)
			int _g = positionVectors->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1679)
			while((true)){
				HX_STACK_LINE(1679)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(1679)
					break;
				}
				HX_STACK_LINE(1679)
				int index1 = (_g1)++;		HX_STACK_VAR(index1,"index1");
				HX_STACK_LINE(1680)
				Array< int > faces = facesOfVertices->__get(index1).StaticCast< Array< int > >();		HX_STACK_VAR(faces,"faces");
				HX_STACK_LINE(1682)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(normal,"normal");
				HX_STACK_LINE(1683)
				{
					HX_STACK_LINE(1683)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1683)
					int _g2 = faces->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1683)
					while((true)){
						HX_STACK_LINE(1683)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(1683)
							break;
						}
						HX_STACK_LINE(1683)
						int faceIndex = (_g3)++;		HX_STACK_VAR(faceIndex,"faceIndex");
						HX_STACK_LINE(1684)
						{
							HX_STACK_LINE(1684)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = facesNormals->__get(faces->__get(faceIndex)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(otherVector,"otherVector");
							HX_STACK_LINE(1684)
							hx::AddEq(normal->x,otherVector->x);
							HX_STACK_LINE(1684)
							hx::AddEq(normal->y,otherVector->y);
							HX_STACK_LINE(1684)
							hx::AddEq(normal->z,otherVector->z);
						}
					}
				}
				HX_STACK_LINE(1687)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1687)
				{
					HX_STACK_LINE(1687)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 vector;		HX_STACK_VAR(vector,"vector");
					HX_STACK_LINE(1687)
					{
						HX_STACK_LINE(1687)
						Float scale = (Float(1.0) / Float(faces->length));		HX_STACK_VAR(scale,"scale");
						HX_STACK_LINE(1687)
						vector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x * scale),(normal->y * scale),(normal->z * scale));
					}
					HX_STACK_LINE(1687)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(1687)
					{
						HX_STACK_LINE(1687)
						{
							HX_STACK_LINE(1687)
							result->x = vector->x;
							HX_STACK_LINE(1687)
							result->y = vector->y;
							HX_STACK_LINE(1687)
							result->z = vector->z;
						}
						HX_STACK_LINE(1687)
						{
							HX_STACK_LINE(1687)
							Float len = ::Math_obj::sqrt((((result->x * result->x) + (result->y * result->y)) + (result->z * result->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(1687)
							if (((len != (int)0))){
								HX_STACK_LINE(1687)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(1687)
								hx::MultEq(result->x,num);
								HX_STACK_LINE(1687)
								hx::MultEq(result->y,num);
								HX_STACK_LINE(1687)
								hx::MultEq(result->z,num);
							}
						}
					}
					HX_STACK_LINE(1687)
					_g2 = result;
				}
				HX_STACK_LINE(1687)
				normal = _g2;
				HX_STACK_LINE(1689)
				normals[(index1 * (int)3)] = normal->x;
				HX_STACK_LINE(1690)
				normals[((index1 * (int)3) + (int)1)] = normal->y;
				HX_STACK_LINE(1691)
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
	HX_MARK_MEMBER_NAME(_onBeforeRenderCallbacks,"_onBeforeRenderCallbacks");
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
	HX_VISIT_MEMBER_NAME(_onBeforeRenderCallbacks,"_onBeforeRenderCallbacks");
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
		if (HX_FIELD_EQ(inName,"CreateBox") ) { return CreateBox_dyn(); }
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
		if (HX_FIELD_EQ(inName,"CreateTorus") ) { return CreateTorus_dyn(); }
		if (HX_FIELD_EQ(inName,"CreatePlane") ) { return CreatePlane_dyn(); }
		if (HX_FIELD_EQ(inName,"_isDisposed") ) { return _isDisposed; }
		if (HX_FIELD_EQ(inName,"_localWorld") ) { return _localWorld; }
		if (HX_FIELD_EQ(inName,"isInFrustum") ) { return isInFrustum_dyn(); }
		if (HX_FIELD_EQ(inName,"markAsDirty") ) { return markAsDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"bindAndDraw") ) { return bindAndDraw_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"CreateSphere") ) { return CreateSphere_dyn(); }
		if (HX_FIELD_EQ(inName,"CreateGround") ) { return CreateGround_dyn(); }
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
		if (HX_FIELD_EQ(inName,"CreateCylinder") ) { return CreateCylinder_dyn(); }
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
		if (HX_FIELD_EQ(inName,"_onBeforeRenderCallbacks") ) { return _onBeforeRenderCallbacks; }
		if (HX_FIELD_EQ(inName,"_collisionsScalingMatrix") ) { return _collisionsScalingMatrix; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"CreateGroundFromHeightMap") ) { return CreateGroundFromHeightMap_dyn(); }
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
		if (HX_FIELD_EQ(inName,"_vertexStrideSize") ) { _vertexStrideSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_localTranslation") ) { _localTranslation=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_absolutePosition") ) { _absolutePosition=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BILLBOARDMODE_NONE") ) { BILLBOARDMODE_NONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotationQuaternion") ) { rotationQuaternion=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Quaternion >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_localPivotScaling") ) { _localPivotScaling=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_onBeforeRenderCallbacks") ) { _onBeforeRenderCallbacks=inValue.Cast< Dynamic >(); return inValue; }
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
	outFields->push(HX_CSTRING("_onBeforeRenderCallbacks"));
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
	HX_CSTRING("CreateBox"),
	HX_CSTRING("CreateCylinder"),
	HX_CSTRING("CreateTorus"),
	HX_CSTRING("CreateSphere"),
	HX_CSTRING("CreatePlane"),
	HX_CSTRING("CreateGround"),
	HX_CSTRING("CreateGroundFromHeightMap"),
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
	{hx::fsFloat,(int)offsetof(AbstractMesh_obj,_vertexStrideSize),HX_CSTRING("_vertexStrideSize")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(AbstractMesh_obj,_indices),HX_CSTRING("_indices")},
	{hx::fsInt,(int)offsetof(AbstractMesh_obj,_renderId),HX_CSTRING("_renderId")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AbstractMesh_obj,_onBeforeRenderCallbacks),HX_CSTRING("_onBeforeRenderCallbacks")},
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
	HX_CSTRING("_onBeforeRenderCallbacks"),
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
