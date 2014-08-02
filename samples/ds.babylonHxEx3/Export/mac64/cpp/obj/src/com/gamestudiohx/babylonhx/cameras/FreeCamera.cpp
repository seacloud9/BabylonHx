#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_Camera
#include <com/gamestudiohx/babylonhx/cameras/Camera.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_FreeCamera
#include <com/gamestudiohx/babylonhx/cameras/FreeCamera.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_collisions_Collider
#include <com/gamestudiohx/babylonhx/collisions/Collider.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingInfo
#include <com/gamestudiohx/babylonhx/culling/BoundingInfo.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_SubMesh
#include <com/gamestudiohx/babylonhx/mesh/SubMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_Tools
#include <com/gamestudiohx/babylonhx/tools/Tools.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Quaternion
#include <com/gamestudiohx/babylonhx/tools/math/Quaternion.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector2
#include <com/gamestudiohx/babylonhx/tools/math/Vector2.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace cameras{

Void FreeCamera_obj::__construct(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 position,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.FreeCamera","new",0x37c6c8f5,"com.gamestudiohx.babylonhx.cameras.FreeCamera.new","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",25,0x57a6a279)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(position,"position")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(65)
	this->onCollide = null();
	HX_STACK_LINE(64)
	this->lockedTarget = null();
	HX_STACK_LINE(63)
	this->angularSensibility = 2000.0;
	HX_STACK_LINE(62)
	this->noRotationConstraint = false;
	HX_STACK_LINE(61)
	this->applyGravity = false;
	HX_STACK_LINE(60)
	this->checkCollisions = false;
	HX_STACK_LINE(59)
	this->speed = 2.0;
	HX_STACK_LINE(83)
	super::__construct(name,position,scene);
	HX_STACK_LINE(85)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(85)
	this->cameraDirection = _g;
	HX_STACK_LINE(86)
	::com::gamestudiohx::babylonhx::tools::math::Vector2 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(86)
	this->cameraRotation = _g1;
	HX_STACK_LINE(87)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(87)
	this->rotation = _g2;
	HX_STACK_LINE(88)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(0.5,(int)1,0.5);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(88)
	this->ellipsoid = _g3;
	HX_STACK_LINE(90)
	this->_keys = Array_obj< int >::__new();
	HX_STACK_LINE(91)
	this->keysUp = Array_obj< int >::__new().Add((int)38);
	HX_STACK_LINE(92)
	this->keysDown = Array_obj< int >::__new().Add((int)40);
	HX_STACK_LINE(93)
	this->keysLeft = Array_obj< int >::__new().Add((int)37);
	HX_STACK_LINE(94)
	this->keysRight = Array_obj< int >::__new().Add((int)39);
	HX_STACK_LINE(97)
	::com::gamestudiohx::babylonhx::collisions::Collider _g4 = ::com::gamestudiohx::babylonhx::collisions::Collider_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(97)
	this->_collider = _g4;
	HX_STACK_LINE(98)
	this->_needMoveForGravity = true;
	HX_STACK_LINE(101)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g5 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(101)
	this->_currentTarget = _g5;
	HX_STACK_LINE(102)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(102)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(102)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(102)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(102)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(102)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(102)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(102)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(102)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(102)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(102)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(102)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(102)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(102)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(102)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(102)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(102)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(102)
		_g6 = result;
	}
	HX_STACK_LINE(102)
	this->_viewMatrix = _g6;
	HX_STACK_LINE(103)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(103)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(103)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(103)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(103)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(103)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(103)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(103)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(103)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(103)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(103)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(103)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(103)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(103)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(103)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(103)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(103)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(103)
		_g7 = result;
	}
	HX_STACK_LINE(103)
	this->_camMatrix = _g7;
	HX_STACK_LINE(104)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g8;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(104)
	{
		HX_STACK_LINE(104)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(104)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(104)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(104)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(104)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(104)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(104)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(104)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(104)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(104)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(104)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(104)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(104)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(104)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(104)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(104)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(104)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(104)
		_g8 = result;
	}
	HX_STACK_LINE(104)
	this->_cameraTransformMatrix = _g8;
	HX_STACK_LINE(105)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g9;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(105)
	{
		HX_STACK_LINE(105)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(105)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(105)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(105)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(105)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(105)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(105)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(105)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(105)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(105)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(105)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(105)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(105)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(105)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(105)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(105)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(105)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(105)
		_g9 = result;
	}
	HX_STACK_LINE(105)
	this->_cameraRotationMatrix = _g9;
	HX_STACK_LINE(106)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g10 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(106)
	this->_referencePoint = _g10;
	HX_STACK_LINE(107)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g11 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(107)
	this->_transformedReferencePoint = _g11;
	HX_STACK_LINE(108)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g12 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(108)
	this->_oldPosition = _g12;
	HX_STACK_LINE(109)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g13 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(109)
	this->_diffPosition = _g13;
	HX_STACK_LINE(110)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g14 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(110)
	this->_newPosition = _g14;
	HX_STACK_LINE(111)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g15;		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(111)
	{
		HX_STACK_LINE(111)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(111)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(111)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(111)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(111)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(111)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(111)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(111)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(111)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(111)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(111)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(111)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(111)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(111)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(111)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(111)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(111)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(111)
		_g15 = result;
	}
	HX_STACK_LINE(111)
	this->_lookAtTemp = _g15;
	HX_STACK_LINE(112)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g16;		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(112)
	{
		HX_STACK_LINE(112)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(112)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(112)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(112)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(112)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(112)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(112)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(112)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(112)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(112)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(112)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(112)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(112)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(112)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(112)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(112)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(112)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(112)
		_g16 = result;
	}
	HX_STACK_LINE(112)
	this->_tempMatrix = _g16;
	HX_STACK_LINE(116)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g17 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(117)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g18 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(118)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g19 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(119)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g20 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(_g20,"_g20");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g17,::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g19,::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g18,::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g20){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",114,0x57a6a279)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("parent") , null(),false);
				__result->Add(HX_CSTRING("lockedTarget") , _g17,false);
				__result->Add(HX_CSTRING("rotation") , _g18,false);
				__result->Add(HX_CSTRING("position") , _g19,false);
				__result->Add(HX_CSTRING("upVector") , _g20,false);
				__result->Add(HX_CSTRING("mode") , null(),false);
				__result->Add(HX_CSTRING("minZ") , null(),false);
				__result->Add(HX_CSTRING("maxZ") , null(),false);
				__result->Add(HX_CSTRING("fov") , null(),false);
				__result->Add(HX_CSTRING("aspectRatio") , null(),false);
				__result->Add(HX_CSTRING("orthoLeft") , null(),false);
				__result->Add(HX_CSTRING("orthoRight") , null(),false);
				__result->Add(HX_CSTRING("orthoBottom") , null(),false);
				__result->Add(HX_CSTRING("orthoTop") , null(),false);
				__result->Add(HX_CSTRING("renderWidth") , null(),false);
				__result->Add(HX_CSTRING("renderHeight") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(114)
	Dynamic _g21 = _Function_1_1::Block(_g17,_g19,_g18,_g20);		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(114)
	this->_cache = _g21;
}
;
	return null();
}

//FreeCamera_obj::~FreeCamera_obj() { }

Dynamic FreeCamera_obj::__CreateEmpty() { return  new FreeCamera_obj; }
hx::ObjectPtr< FreeCamera_obj > FreeCamera_obj::__new(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 position,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< FreeCamera_obj > result = new FreeCamera_obj();
	result->__construct(name,position,scene);
	return result;}

Dynamic FreeCamera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FreeCamera_obj > result = new FreeCamera_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::com::gamestudiohx::babylonhx::tools::math::Vector3 FreeCamera_obj::_getLockedTargetPosition( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.FreeCamera","_getLockedTargetPosition",0xd2e09846,"com.gamestudiohx.babylonhx.cameras.FreeCamera._getLockedTargetPosition","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",137,0x57a6a279)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(139)
	if (((this->lockedTarget != null()))){
		HX_STACK_LINE(140)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		if ((::Std_obj::is(this->lockedTarget,hx::ClassOf< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >()))){
			HX_STACK_LINE(140)
			_g = this->lockedTarget;
		}
		else{
			HX_STACK_LINE(140)
			_g = this->lockedTarget->__Field(HX_CSTRING("position"),true);
		}
		HX_STACK_LINE(140)
		ret = _g;
	}
	HX_STACK_LINE(142)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(FreeCamera_obj,_getLockedTargetPosition,return )

Void FreeCamera_obj::_updateCache( hx::Null< bool >  __o_ignoreParentClass){
bool ignoreParentClass = __o_ignoreParentClass.Default(true);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.FreeCamera","_updateCache",0xe67c7e45,"com.gamestudiohx.babylonhx.cameras.FreeCamera._updateCache","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",145,0x57a6a279)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ignoreParentClass,"ignoreParentClass")
{
		HX_STACK_LINE(146)
		if ((!(ignoreParentClass))){
			HX_STACK_LINE(147)
			this->super::_updateCache(ignoreParentClass);
		}
		HX_STACK_LINE(149)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 lockedTargetPosition = this->_getLockedTargetPosition();		HX_STACK_VAR(lockedTargetPosition,"lockedTargetPosition");
		HX_STACK_LINE(150)
		if (((lockedTargetPosition == null()))){
			HX_STACK_LINE(151)
			this->_cache->__FieldRef(HX_CSTRING("lockedTarget")) = null();
		}
		else{
			HX_STACK_LINE(154)
			if (((this->_cache->__Field(HX_CSTRING("lockedTarget"),true) == null()))){
				HX_STACK_LINE(155)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(lockedTargetPosition->x,lockedTargetPosition->y,lockedTargetPosition->z);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(155)
				this->_cache->__FieldRef(HX_CSTRING("lockedTarget")) = _g;
			}
			else{
				HX_STACK_LINE(157)
				this->_cache->__Field(HX_CSTRING("lockedTarget"),true)->__Field(HX_CSTRING("copyFrom"),true)(lockedTargetPosition);
			}
		}
		HX_STACK_LINE(160)
		this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
	}
return null();
}


bool FreeCamera_obj::_isSynchronizedViewMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.FreeCamera","_isSynchronizedViewMatrix",0x52545bf8,"com.gamestudiohx.babylonhx.cameras.FreeCamera._isSynchronizedViewMatrix","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",163,0x57a6a279)
	HX_STACK_THIS(this)
	HX_STACK_LINE(164)
	if ((!(this->super::_isSynchronizedViewMatrix()))){
		HX_STACK_LINE(165)
		return false;
	}
	HX_STACK_LINE(168)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 lockedTargetPosition = this->_getLockedTargetPosition();		HX_STACK_VAR(lockedTargetPosition,"lockedTargetPosition");
	HX_STACK_LINE(169)
	bool _t = (lockedTargetPosition != null());		HX_STACK_VAR(_t,"_t");
	HX_STACK_LINE(171)
	if (((  (((this->_cache->__Field(HX_CSTRING("lockedTarget"),true) != null()))) ? bool(this->_cache->__Field(HX_CSTRING("lockedTarget"),true)->__Field(HX_CSTRING("equals"),true)(lockedTargetPosition)) : bool(!(_t)) ))){
		HX_STACK_LINE(172)
		return this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("equals"),true)(this->rotation);
	}
	else{
		HX_STACK_LINE(171)
		return false;
	}
	HX_STACK_LINE(171)
	return false;
}


Float FreeCamera_obj::_computeLocalCameraSpeed( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.FreeCamera","_computeLocalCameraSpeed",0x0691095a,"com.gamestudiohx.babylonhx.cameras.FreeCamera._computeLocalCameraSpeed","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",175,0x57a6a279)
	HX_STACK_THIS(this)
	HX_STACK_LINE(176)
	Float _g = ::com::gamestudiohx::babylonhx::tools::Tools_obj::GetDeltaTime();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(176)
	Float _g1 = ::com::gamestudiohx::babylonhx::tools::Tools_obj::GetFps();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(176)
	Float _g2 = (_g1 * 10.0);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(176)
	Float _g3 = (Float(_g) / Float(_g2));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(176)
	return (this->speed * _g3);
}


HX_DEFINE_DYNAMIC_FUNC0(FreeCamera_obj,_computeLocalCameraSpeed,return )

Void FreeCamera_obj::setTarget( ::com::gamestudiohx::babylonhx::tools::math::Vector3 target){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.FreeCamera","setTarget",0x3e8f7ee8,"com.gamestudiohx.babylonhx.cameras.FreeCamera.setTarget","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",179,0x57a6a279)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->upVector;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(180)
			Float len = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(180)
			if (((len != (int)0))){
				HX_STACK_LINE(180)
				Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(180)
				hx::MultEq(_this->x,num);
				HX_STACK_LINE(180)
				hx::MultEq(_this->y,num);
				HX_STACK_LINE(180)
				hx::MultEq(_this->z,num);
			}
		}
		HX_STACK_LINE(182)
		{
			HX_STACK_LINE(182)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 eye = this->position;		HX_STACK_VAR(eye,"eye");
			HX_STACK_LINE(182)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 up = this->upVector;		HX_STACK_VAR(up,"up");
			HX_STACK_LINE(182)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_camMatrix;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(182)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
			HX_STACK_LINE(182)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
			HX_STACK_LINE(182)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				zAxis->x = (target->x - eye->x);
				HX_STACK_LINE(182)
				zAxis->y = (target->y - eye->y);
				HX_STACK_LINE(182)
				zAxis->z = (target->z - eye->z);
			}
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(182)
				if (((len != (int)0))){
					HX_STACK_LINE(182)
					Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
					HX_STACK_LINE(182)
					hx::MultEq(zAxis->x,num);
					HX_STACK_LINE(182)
					hx::MultEq(zAxis->y,num);
					HX_STACK_LINE(182)
					hx::MultEq(zAxis->z,num);
				}
			}
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
				HX_STACK_LINE(182)
				xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
				HX_STACK_LINE(182)
				xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
			}
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(182)
				if (((len != (int)0))){
					HX_STACK_LINE(182)
					Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
					HX_STACK_LINE(182)
					hx::MultEq(xAxis->x,num);
					HX_STACK_LINE(182)
					hx::MultEq(xAxis->y,num);
					HX_STACK_LINE(182)
					hx::MultEq(xAxis->z,num);
				}
			}
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
				HX_STACK_LINE(182)
				yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
				HX_STACK_LINE(182)
				yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
			}
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(182)
				if (((len != (int)0))){
					HX_STACK_LINE(182)
					Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
					HX_STACK_LINE(182)
					hx::MultEq(yAxis->x,num);
					HX_STACK_LINE(182)
					hx::MultEq(yAxis->y,num);
					HX_STACK_LINE(182)
					hx::MultEq(yAxis->z,num);
				}
			}
			HX_STACK_LINE(182)
			Float ex = -(((((xAxis->x * eye->x) + (xAxis->y * eye->y)) + (xAxis->z * eye->z))));		HX_STACK_VAR(ex,"ex");
			HX_STACK_LINE(182)
			Float ey = -(((((yAxis->x * eye->x) + (yAxis->y * eye->y)) + (yAxis->z * eye->z))));		HX_STACK_VAR(ey,"ey");
			HX_STACK_LINE(182)
			Float ez = -(((((zAxis->x * eye->x) + (zAxis->y * eye->y)) + (zAxis->z * eye->z))));		HX_STACK_VAR(ez,"ez");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				result->m[(int)0] = xAxis->x;
				HX_STACK_LINE(182)
				result->m[(int)1] = yAxis->x;
				HX_STACK_LINE(182)
				result->m[(int)2] = zAxis->x;
				HX_STACK_LINE(182)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(182)
				result->m[(int)4] = xAxis->y;
				HX_STACK_LINE(182)
				result->m[(int)5] = yAxis->y;
				HX_STACK_LINE(182)
				result->m[(int)6] = zAxis->y;
				HX_STACK_LINE(182)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(182)
				result->m[(int)8] = xAxis->z;
				HX_STACK_LINE(182)
				result->m[(int)9] = yAxis->z;
				HX_STACK_LINE(182)
				result->m[(int)10] = zAxis->z;
				HX_STACK_LINE(182)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(182)
				result->m[(int)12] = ex;
				HX_STACK_LINE(182)
				result->m[(int)13] = ey;
				HX_STACK_LINE(182)
				result->m[(int)14] = ez;
				HX_STACK_LINE(182)
				result->m[(int)15] = (int)1;
				HX_STACK_LINE(182)
				result;
			}
		}
		HX_STACK_LINE(183)
		{
			HX_STACK_LINE(183)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_camMatrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
				HX_STACK_LINE(183)
				Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
				HX_STACK_LINE(183)
				Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
				HX_STACK_LINE(183)
				Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
				HX_STACK_LINE(183)
				Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
				HX_STACK_LINE(183)
				Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
				HX_STACK_LINE(183)
				Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
				HX_STACK_LINE(183)
				Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
				HX_STACK_LINE(183)
				Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
				HX_STACK_LINE(183)
				Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
				HX_STACK_LINE(183)
				Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
				HX_STACK_LINE(183)
				Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
				HX_STACK_LINE(183)
				Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
				HX_STACK_LINE(183)
				Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
				HX_STACK_LINE(183)
				Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
				HX_STACK_LINE(183)
				Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
				HX_STACK_LINE(183)
				Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
				HX_STACK_LINE(183)
				Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
				HX_STACK_LINE(183)
				Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
				HX_STACK_LINE(183)
				Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
				HX_STACK_LINE(183)
				Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
				HX_STACK_LINE(183)
				Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
				HX_STACK_LINE(183)
				Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
				HX_STACK_LINE(183)
				Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
				HX_STACK_LINE(183)
				Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
				HX_STACK_LINE(183)
				Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
				HX_STACK_LINE(183)
				Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
				HX_STACK_LINE(183)
				Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
				HX_STACK_LINE(183)
				Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
				HX_STACK_LINE(183)
				Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
				HX_STACK_LINE(183)
				Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
				HX_STACK_LINE(183)
				Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
				HX_STACK_LINE(183)
				Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
				HX_STACK_LINE(183)
				Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
				HX_STACK_LINE(183)
				Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
				HX_STACK_LINE(183)
				Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
				HX_STACK_LINE(183)
				Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
				HX_STACK_LINE(183)
				Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
				HX_STACK_LINE(183)
				Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
				HX_STACK_LINE(183)
				_this->m[(int)0] = (l23 * l27);
				HX_STACK_LINE(183)
				_this->m[(int)4] = (l24 * l27);
				HX_STACK_LINE(183)
				_this->m[(int)8] = (l25 * l27);
				HX_STACK_LINE(183)
				_this->m[(int)12] = (l26 * l27);
				HX_STACK_LINE(183)
				_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
				HX_STACK_LINE(183)
				_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
				HX_STACK_LINE(183)
				_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
				HX_STACK_LINE(183)
				_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
				HX_STACK_LINE(183)
				_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
				HX_STACK_LINE(183)
				_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
				HX_STACK_LINE(183)
				_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
				HX_STACK_LINE(183)
				_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
				HX_STACK_LINE(183)
				_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
				HX_STACK_LINE(183)
				_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
				HX_STACK_LINE(183)
				_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
				HX_STACK_LINE(183)
				_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
			}
		}
		HX_STACK_LINE(185)
		Float _g = ::Math_obj::atan((Float(this->_camMatrix->m->__get((int)6)) / Float(this->_camMatrix->m->__get((int)10))));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(185)
		this->rotation->x = _g;
		HX_STACK_LINE(187)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 vDir;		HX_STACK_VAR(vDir,"vDir");
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->position;		HX_STACK_VAR(otherVector,"otherVector");
			HX_STACK_LINE(187)
			vDir = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((target->x - otherVector->x),(target->y - otherVector->y),(target->z - otherVector->z));
		}
		HX_STACK_LINE(189)
		if (((vDir->x >= 0.0))){
			HX_STACK_LINE(190)
			Float _g1 = -(::Math_obj::atan((Float(vDir->z) / Float(vDir->x))));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(190)
			Float _g2 = (_g1 + (Float(::Math_obj::PI) / Float(2.0)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(190)
			this->rotation->y = _g2;
		}
		else{
			HX_STACK_LINE(192)
			Float _g3 = -(::Math_obj::atan((Float(vDir->z) / Float(vDir->x))));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(192)
			Float _g4 = (_g3 - (Float(::Math_obj::PI) / Float(2.0)));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(192)
			this->rotation->y = _g4;
		}
		HX_STACK_LINE(195)
		Float _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 left = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,1.0,(int)0);		HX_STACK_VAR(left,"left");
			HX_STACK_LINE(195)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 right = this->upVector;		HX_STACK_VAR(right,"right");
			HX_STACK_LINE(195)
			_g5 = (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
		}
		HX_STACK_LINE(195)
		Float _g6 = -(::Math_obj::acos(_g5));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(195)
		this->rotation->z = _g6;
		HX_STACK_LINE(197)
		if ((::Math_obj::isNaN(this->rotation->x))){
			HX_STACK_LINE(198)
			this->rotation->x = (int)0;
		}
		HX_STACK_LINE(200)
		if ((::Math_obj::isNaN(this->rotation->y))){
			HX_STACK_LINE(201)
			this->rotation->y = (int)0;
		}
		HX_STACK_LINE(203)
		if ((::Math_obj::isNaN(this->rotation->z))){
			HX_STACK_LINE(204)
			this->rotation->z = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FreeCamera_obj,setTarget,(void))

Void FreeCamera_obj::attachControl( ::openfl::display::DisplayObject canvas,hx::Null< bool >  __o_noPreventDefault){
bool noPreventDefault = __o_noPreventDefault.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.FreeCamera","attachControl",0x63a72eed,"com.gamestudiohx.babylonhx.cameras.FreeCamera.attachControl","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",207,0x57a6a279)
	HX_STACK_THIS(this)
	HX_STACK_ARG(canvas,"canvas")
	HX_STACK_ARG(noPreventDefault,"noPreventDefault")
{
		HX_STACK_LINE(207)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(208)
		Dynamic previousPosition = Dynamic( Array_obj<Dynamic>::__new().Add(null()));		HX_STACK_VAR(previousPosition,"previousPosition");
		HX_STACK_LINE(209)
		Array< ::Dynamic > engine = Array_obj< ::Dynamic >::__new().Add(this->_scene->getEngine());		HX_STACK_VAR(engine,"engine");
		HX_STACK_LINE(211)
		if (((this->_attachedCanvas != null()))){
			HX_STACK_LINE(212)
			return null();
		}
		HX_STACK_LINE(214)
		this->_attachedCanvas = canvas;
		HX_STACK_LINE(216)
		if (((this->_onMouseDown_dyn() == null()))){

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g,Dynamic,previousPosition)
			Void run(::openfl::events::MouseEvent evt){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",218,0x57a6a279)
				HX_STACK_ARG(evt,"evt")
				{
					struct _Function_3_1{
						inline static Dynamic Block( Array< ::Dynamic > &_g){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",218,0x57a6a279)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("x") , _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->_attachedCanvas->get_mouseX(),false);
								__result->Add(HX_CSTRING("y") , _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->_attachedCanvas->get_mouseY(),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(218)
					hx::IndexRef((previousPosition).mPtr,(int)0) = _Function_3_1::Block(_g);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(217)
			this->_onMouseDown =  Dynamic(new _Function_2_1(_g,previousPosition));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Dynamic,previousPosition)
			Void run(::openfl::events::MouseEvent evt){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",225,0x57a6a279)
				HX_STACK_ARG(evt,"evt")
				{
					HX_STACK_LINE(225)
					hx::IndexRef((previousPosition).mPtr,(int)0) = null();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(224)
			this->_onMouseUp =  Dynamic(new _Function_2_2(previousPosition));

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_3,Array< ::Dynamic >,_g,Dynamic,previousPosition)
			Void run(::openfl::events::MouseEvent evt){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",228,0x57a6a279)
				HX_STACK_ARG(evt,"evt")
				{
					HX_STACK_LINE(229)
					hx::IndexRef((previousPosition).mPtr,(int)0) = null();
					HX_STACK_LINE(230)
					_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->_keys = Array_obj< int >::__new();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(228)
			this->_onMouseOut =  Dynamic(new _Function_2_3(_g,previousPosition));

			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_4,Array< ::Dynamic >,_g,Array< ::Dynamic >,engine,Dynamic,previousPosition)
			Void run(::openfl::events::MouseEvent evt){
				HX_STACK_FRAME("*","_Function_2_4",0x5201af7b,"*._Function_2_4","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",233,0x57a6a279)
				HX_STACK_ARG(evt,"evt")
				{
					HX_STACK_LINE(234)
					if (((bool((previousPosition->__GetItem((int)0) == null())) && bool(!(engine->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->isPointerLock))))){
						HX_STACK_LINE(235)
						return null();
					}
					HX_STACK_LINE(238)
					Float offsetX = (int)0;		HX_STACK_VAR(offsetX,"offsetX");
					HX_STACK_LINE(239)
					Float offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
					HX_STACK_LINE(241)
					if ((!(engine->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->isPointerLock))){
						HX_STACK_LINE(242)
						offsetX = (_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->_attachedCanvas->get_mouseX() - previousPosition->__GetItem((int)0)->__Field(HX_CSTRING("x"),true));
						HX_STACK_LINE(243)
						offsetY = (_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->_attachedCanvas->get_mouseY() - previousPosition->__GetItem((int)0)->__Field(HX_CSTRING("y"),true));
					}
					HX_STACK_LINE(246)
					hx::AddEq(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->cameraRotation->y,(Float(offsetX) / Float(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->angularSensibility)));
					HX_STACK_LINE(247)
					hx::AddEq(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->cameraRotation->x,(Float(offsetY) / Float(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->angularSensibility)));
					struct _Function_3_1{
						inline static Dynamic Block( Array< ::Dynamic > &_g){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",249,0x57a6a279)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("x") , _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->_attachedCanvas->get_mouseX(),false);
								__result->Add(HX_CSTRING("y") , _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->_attachedCanvas->get_mouseY(),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(249)
					hx::IndexRef((previousPosition).mPtr,(int)0) = _Function_3_1::Block(_g);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(233)
			this->_onMouseMove =  Dynamic(new _Function_2_4(_g,engine,previousPosition));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_5,Array< ::Dynamic >,_g)
			Void run(::openfl::events::KeyboardEvent evt){
				HX_STACK_FRAME("*","_Function_2_5",0x5201af7c,"*._Function_2_5","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",256,0x57a6a279)
				HX_STACK_ARG(evt,"evt")
				{
					HX_STACK_LINE(256)
					if (((bool((bool((bool((::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->keysUp,evt->keyCode) != (int)-1)) || bool((::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->keysDown,evt->keyCode) != (int)-1)))) || bool((::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->keysLeft,evt->keyCode) != (int)-1)))) || bool((::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->keysRight,evt->keyCode) != (int)-1))))){
						HX_STACK_LINE(260)
						int index = ::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->_keys,evt->keyCode);		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(262)
						if (((index == (int)-1))){
							HX_STACK_LINE(263)
							_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->_keys->push(evt->keyCode);
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(255)
			this->_onKeyDown =  Dynamic(new _Function_2_5(_g));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_6,Array< ::Dynamic >,_g)
			Void run(::openfl::events::KeyboardEvent evt){
				HX_STACK_FRAME("*","_Function_2_6",0x5201af7d,"*._Function_2_6","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",272,0x57a6a279)
				HX_STACK_ARG(evt,"evt")
				{
					HX_STACK_LINE(272)
					if (((bool((bool((bool((::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->keysUp,evt->keyCode) != (int)-1)) || bool((::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->keysDown,evt->keyCode) != (int)-1)))) || bool((::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->keysLeft,evt->keyCode) != (int)-1)))) || bool((::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->keysRight,evt->keyCode) != (int)-1))))){
						HX_STACK_LINE(276)
						int index = ::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->_keys,evt->keyCode);		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(278)
						if (((index >= (int)0))){
							HX_STACK_LINE(279)
							_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->_keys->splice(index,(int)1);
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(271)
			this->_onKeyUp =  Dynamic(new _Function_2_6(_g));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_7,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_7",0x5201af7e,"*._Function_2_7","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",288,0x57a6a279)
				{
					HX_STACK_LINE(288)
					_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->_keys = Array_obj< int >::__new();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(287)
			this->_onLostFocus =  Dynamic(new _Function_2_7(_g));

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_8,Array< ::Dynamic >,_g,Dynamic,previousPosition)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_8",0x5201af7f,"*._Function_2_8","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",291,0x57a6a279)
				{
					HX_STACK_LINE(292)
					_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->_keys = Array_obj< int >::__new();
					HX_STACK_LINE(293)
					hx::IndexRef((previousPosition).mPtr,(int)0) = null();
					HX_STACK_LINE(294)
					_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->cameraDirection = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)0);
					HX_STACK_LINE(295)
					_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::FreeCamera >()->cameraRotation = ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new((int)0,(int)0);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(291)
			this->_reset =  Dynamic(new _Function_2_8(_g,previousPosition));
		}
		HX_STACK_LINE(299)
		::openfl::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onMouseDown_dyn(),false,null(),null());
		HX_STACK_LINE(300)
		::openfl::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->_onMouseUp_dyn(),false,null(),null());
		HX_STACK_LINE(301)
		::openfl::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_OUT,this->_onMouseOut_dyn(),false,null(),null());
		HX_STACK_LINE(302)
		::openfl::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->_onMouseMove_dyn(),false,null(),null());
		HX_STACK_LINE(303)
		::openfl::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::events::KeyboardEvent_obj::KEY_DOWN,this->_onKeyDown_dyn(),false,null(),null());
		HX_STACK_LINE(304)
		::openfl::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::events::KeyboardEvent_obj::KEY_UP,this->_onKeyUp_dyn(),false,null(),null());
	}
return null();
}


Void FreeCamera_obj::detachControl( ::openfl::display::DisplayObject canvas){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.FreeCamera","detachControl",0x5ab13b1f,"com.gamestudiohx.babylonhx.cameras.FreeCamera.detachControl","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",308,0x57a6a279)
		HX_STACK_THIS(this)
		HX_STACK_ARG(canvas,"canvas")
		HX_STACK_LINE(309)
		if (((this->_attachedCanvas != canvas))){
			HX_STACK_LINE(310)
			return null();
		}
		HX_STACK_LINE(313)
		::openfl::Lib_obj::get_current()->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onMouseDown_dyn(),null());
		HX_STACK_LINE(314)
		::openfl::Lib_obj::get_current()->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->_onMouseUp_dyn(),null());
		HX_STACK_LINE(315)
		::openfl::Lib_obj::get_current()->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_OUT,this->_onMouseOut_dyn(),null());
		HX_STACK_LINE(316)
		::openfl::Lib_obj::get_current()->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->_onMouseMove_dyn(),null());
		HX_STACK_LINE(317)
		::openfl::Lib_obj::get_current()->get_stage()->removeEventListener(::openfl::events::KeyboardEvent_obj::KEY_DOWN,this->_onKeyDown_dyn(),null());
		HX_STACK_LINE(318)
		::openfl::Lib_obj::get_current()->get_stage()->removeEventListener(::openfl::events::KeyboardEvent_obj::KEY_UP,this->_onKeyUp_dyn(),null());
		HX_STACK_LINE(321)
		this->_attachedCanvas = null();
		HX_STACK_LINE(322)
		if (((this->_reset_dyn() != null()))){
			HX_STACK_LINE(323)
			this->_reset();
		}
	}
return null();
}


Void FreeCamera_obj::_collideWithWorld( ::com::gamestudiohx::babylonhx::tools::math::Vector3 velocity){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.FreeCamera","_collideWithWorld",0xfb9e2cc2,"com.gamestudiohx.babylonhx.cameras.FreeCamera._collideWithWorld","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",327,0x57a6a279)
		HX_STACK_THIS(this)
		HX_STACK_ARG(velocity,"velocity")
		HX_STACK_LINE(328)
		{
			HX_STACK_LINE(328)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(328)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_oldPosition;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(328)
			result->x = _this->x;
			HX_STACK_LINE(328)
			result->y = (_this->y - this->ellipsoid->y);
			HX_STACK_LINE(328)
			result->z = _this->z;
		}
		HX_STACK_LINE(329)
		this->_collider->radius = this->ellipsoid;
		HX_STACK_LINE(330)
		{
			HX_STACK_LINE(330)
			::com::gamestudiohx::babylonhx::Scene _this = this->_scene;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(330)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 position = this->_oldPosition;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(330)
			::com::gamestudiohx::babylonhx::collisions::Collider collider = this->_collider;		HX_STACK_VAR(collider,"collider");
			HX_STACK_LINE(330)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 finalPosition = this->_newPosition;		HX_STACK_VAR(finalPosition,"finalPosition");
			HX_STACK_LINE(330)
			{
				HX_STACK_LINE(330)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->radius;		HX_STACK_VAR(otherVector,"otherVector");
				HX_STACK_LINE(330)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = _this->_scaledPosition;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(330)
				result->x = (Float(position->x) / Float(otherVector->x));
				HX_STACK_LINE(330)
				result->y = (Float(position->y) / Float(otherVector->y));
				HX_STACK_LINE(330)
				result->z = (Float(position->z) / Float(otherVector->z));
			}
			HX_STACK_LINE(330)
			{
				HX_STACK_LINE(330)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->radius;		HX_STACK_VAR(otherVector,"otherVector");
				HX_STACK_LINE(330)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = _this->_scaledVelocity;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(330)
				result->x = (Float(velocity->x) / Float(otherVector->x));
				HX_STACK_LINE(330)
				result->y = (Float(velocity->y) / Float(otherVector->y));
				HX_STACK_LINE(330)
				result->z = (Float(velocity->z) / Float(otherVector->z));
			}
			HX_STACK_LINE(330)
			collider->retry = (int)0;
			HX_STACK_LINE(330)
			collider->initialVelocity = _this->_scaledVelocity;
			HX_STACK_LINE(330)
			collider->initialPosition = _this->_scaledPosition;
			HX_STACK_LINE(330)
			{
				HX_STACK_LINE(330)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 position1 = _this->_scaledPosition;		HX_STACK_VAR(position1,"position1");
				HX_STACK_LINE(330)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 velocity1 = _this->_scaledVelocity;		HX_STACK_VAR(velocity1,"velocity1");
				HX_STACK_LINE(330)
				Float closeDistance = (::com::gamestudiohx::babylonhx::Engine_obj::collisionsEpsilon * 10.0);		HX_STACK_VAR(closeDistance,"closeDistance");
				HX_STACK_LINE(330)
				if (((collider->retry >= (int)3))){
					HX_STACK_LINE(330)
					finalPosition->x = position1->x;
					HX_STACK_LINE(330)
					finalPosition->y = position1->y;
					HX_STACK_LINE(330)
					finalPosition->z = position1->z;
				}
				else{
					HX_STACK_LINE(330)
					collider->_initialize(position1,velocity1,closeDistance);
					HX_STACK_LINE(330)
					{
						HX_STACK_LINE(330)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(330)
						int _g = _this->meshes->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(330)
						while((true)){
							HX_STACK_LINE(330)
							if ((!(((_g1 < _g))))){
								HX_STACK_LINE(330)
								break;
							}
							HX_STACK_LINE(330)
							int index = (_g1)++;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(330)
							::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh = _this->meshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >();		HX_STACK_VAR(mesh,"mesh");
							HX_STACK_LINE(330)
							if (((  ((mesh->isEnabled())) ? bool(mesh->checkCollisions) : bool(false) ))){
								HX_STACK_LINE(330)
								if ((mesh->_boundingInfo->_checkCollision(collider))){
									HX_STACK_LINE(330)
									{
										HX_STACK_LINE(330)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_collisionsScalingMatrix;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(330)
										result->m[(int)0] = (Float(1.0) / Float(collider->radius->x));
										HX_STACK_LINE(330)
										result->m[(int)1] = (int)0;
										HX_STACK_LINE(330)
										result->m[(int)2] = (int)0;
										HX_STACK_LINE(330)
										result->m[(int)3] = (int)0;
										HX_STACK_LINE(330)
										result->m[(int)4] = (int)0;
										HX_STACK_LINE(330)
										result->m[(int)5] = (Float(1.0) / Float(collider->radius->y));
										HX_STACK_LINE(330)
										result->m[(int)6] = (int)0;
										HX_STACK_LINE(330)
										result->m[(int)7] = (int)0;
										HX_STACK_LINE(330)
										result->m[(int)8] = (int)0;
										HX_STACK_LINE(330)
										result->m[(int)9] = (int)0;
										HX_STACK_LINE(330)
										result->m[(int)10] = (Float(1.0) / Float(collider->radius->z));
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
									{
										HX_STACK_LINE(330)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = mesh->_worldMatrix;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(330)
										::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_collisionsScalingMatrix;		HX_STACK_VAR(other,"other");
										HX_STACK_LINE(330)
										{
											HX_STACK_LINE(330)
											Array< Float > result = mesh->_collisionsTransformMatrix->m;		HX_STACK_VAR(result,"result");
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
										::com::gamestudiohx::babylonhx::tools::math::Matrix transformMatrix = mesh->_collisionsTransformMatrix;		HX_STACK_VAR(transformMatrix,"transformMatrix");
										HX_STACK_LINE(330)
										{
											HX_STACK_LINE(330)
											int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(330)
											int _g2 = mesh->subMeshes->length;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(330)
											while((true)){
												HX_STACK_LINE(330)
												if ((!(((_g11 < _g2))))){
													HX_STACK_LINE(330)
													break;
												}
												HX_STACK_LINE(330)
												int index1 = (_g11)++;		HX_STACK_VAR(index1,"index1");
												HX_STACK_LINE(330)
												::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = mesh->subMeshes->__get(index1).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
												HX_STACK_LINE(330)
												if (((  (((mesh->subMeshes->length > (int)1))) ? bool(!(subMesh->_boundingInfo->_checkCollision(collider))) : bool(false) ))){
													HX_STACK_LINE(330)
													continue;
												}
												HX_STACK_LINE(330)
												{
													HX_STACK_LINE(330)
													mesh->_generatePointsArray();
													struct _Function_12_1{
														inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::SubMesh &subMesh,::com::gamestudiohx::babylonhx::tools::math::Matrix &transformMatrix){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",330,0x57a6a279)
															{
																HX_STACK_LINE(330)
																::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = subMesh->_lastColliderTransformMatrix;		HX_STACK_VAR(_this1,"_this1");
																HX_STACK_LINE(330)
																return (bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((_this1->m->__get((int)0) == transformMatrix->m->__get((int)0))) && bool((_this1->m->__get((int)1) == transformMatrix->m->__get((int)1))))) && bool((_this1->m->__get((int)2) == transformMatrix->m->__get((int)2))))) && bool((_this1->m->__get((int)3) == transformMatrix->m->__get((int)3))))) && bool((_this1->m->__get((int)4) == transformMatrix->m->__get((int)4))))) && bool((_this1->m->__get((int)5) == transformMatrix->m->__get((int)5))))) && bool((_this1->m->__get((int)6) == transformMatrix->m->__get((int)6))))) && bool((_this1->m->__get((int)7) == transformMatrix->m->__get((int)7))))) && bool((_this1->m->__get((int)8) == transformMatrix->m->__get((int)8))))) && bool((_this1->m->__get((int)9) == transformMatrix->m->__get((int)9))))) && bool((_this1->m->__get((int)10) == transformMatrix->m->__get((int)10))))) && bool((_this1->m->__get((int)11) == transformMatrix->m->__get((int)11))))) && bool((_this1->m->__get((int)12) == transformMatrix->m->__get((int)12))))) && bool((_this1->m->__get((int)13) == transformMatrix->m->__get((int)13))))) && bool((_this1->m->__get((int)14) == transformMatrix->m->__get((int)14))))) && bool((_this1->m->__get((int)15) == transformMatrix->m->__get((int)15))));
															}
															return null();
														}
													};
													HX_STACK_LINE(330)
													if (((bool((subMesh->_lastColliderWorldVertices == null())) || bool(!(_Function_12_1::Block(subMesh,transformMatrix)))))){
														HX_STACK_LINE(330)
														subMesh->_lastColliderTransformMatrix = transformMatrix;
														HX_STACK_LINE(330)
														Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
														HX_STACK_LINE(330)
														subMesh->_lastColliderWorldVertices = _g3;
														HX_STACK_LINE(330)
														int start = subMesh->verticesStart;		HX_STACK_VAR(start,"start");
														HX_STACK_LINE(330)
														int end = (subMesh->verticesStart + subMesh->verticesCount);		HX_STACK_VAR(end,"end");
														HX_STACK_LINE(330)
														{
															HX_STACK_LINE(330)
															int _g4 = start;		HX_STACK_VAR(_g4,"_g4");
															HX_STACK_LINE(330)
															while((true)){
																HX_STACK_LINE(330)
																if ((!(((_g4 < end))))){
																	HX_STACK_LINE(330)
																	break;
																}
																HX_STACK_LINE(330)
																int i = (_g4)++;		HX_STACK_VAR(i,"i");
																HX_STACK_LINE(330)
																::com::gamestudiohx::babylonhx::tools::math::Vector3 _g12;		HX_STACK_VAR(_g12,"_g12");
																HX_STACK_LINE(330)
																{
																	HX_STACK_LINE(330)
																	::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = mesh->_positions->__get(i).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(vector,"vector");
																	HX_STACK_LINE(330)
																	::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
																	HX_STACK_LINE(330)
																	{
																		HX_STACK_LINE(330)
																		Float x = ((((vector->x * transformMatrix->m->__get((int)0)) + (vector->y * transformMatrix->m->__get((int)4))) + (vector->z * transformMatrix->m->__get((int)8))) + transformMatrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(330)
																		Float y = ((((vector->x * transformMatrix->m->__get((int)1)) + (vector->y * transformMatrix->m->__get((int)5))) + (vector->z * transformMatrix->m->__get((int)9))) + transformMatrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(330)
																		Float z = ((((vector->x * transformMatrix->m->__get((int)2)) + (vector->y * transformMatrix->m->__get((int)6))) + (vector->z * transformMatrix->m->__get((int)10))) + transformMatrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
																		HX_STACK_LINE(330)
																		Float w = ((((vector->x * transformMatrix->m->__get((int)3)) + (vector->y * transformMatrix->m->__get((int)7))) + (vector->z * transformMatrix->m->__get((int)11))) + transformMatrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
																		HX_STACK_LINE(330)
																		result->x = (Float(x) / Float(w));
																		HX_STACK_LINE(330)
																		result->y = (Float(y) / Float(w));
																		HX_STACK_LINE(330)
																		result->z = (Float(z) / Float(w));
																	}
																	HX_STACK_LINE(330)
																	_g12 = result;
																}
																HX_STACK_LINE(330)
																subMesh->_lastColliderWorldVertices->push(_g12);
															}
														}
													}
													HX_STACK_LINE(330)
													{
														HX_STACK_LINE(330)
														Array< ::Dynamic > pts = subMesh->_lastColliderWorldVertices;		HX_STACK_VAR(pts,"pts");
														HX_STACK_LINE(330)
														Array< int > indices = mesh->getIndices();		HX_STACK_VAR(indices,"indices");
														HX_STACK_LINE(330)
														int decal = subMesh->verticesStart;		HX_STACK_VAR(decal,"decal");
														HX_STACK_LINE(330)
														int i = subMesh->indexStart;		HX_STACK_VAR(i,"i");
														HX_STACK_LINE(330)
														while((true)){
															HX_STACK_LINE(330)
															if ((!(((i < (subMesh->indexStart + subMesh->indexCount)))))){
																HX_STACK_LINE(330)
																break;
															}
															HX_STACK_LINE(330)
															::com::gamestudiohx::babylonhx::tools::math::Vector3 p1 = pts->__get((indices->__get(i) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p1,"p1");
															HX_STACK_LINE(330)
															::com::gamestudiohx::babylonhx::tools::math::Vector3 p2 = pts->__get((indices->__get((i + (int)1)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p2,"p2");
															HX_STACK_LINE(330)
															::com::gamestudiohx::babylonhx::tools::math::Vector3 p3 = pts->__get((indices->__get((i + (int)2)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p3,"p3");
															HX_STACK_LINE(330)
															collider->_testTriangle(i,subMesh,p3,p2,p1);
															HX_STACK_LINE(330)
															hx::AddEq(i,(int)3);
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(330)
					if ((!(collider->collisionFound))){
						HX_STACK_LINE(330)
						finalPosition->x = (position1->x + velocity1->x);
						HX_STACK_LINE(330)
						finalPosition->y = (position1->y + velocity1->y);
						HX_STACK_LINE(330)
						finalPosition->z = (position1->z + velocity1->z);
						HX_STACK_LINE(330)
						finalPosition;
					}
					else{
						HX_STACK_LINE(330)
						if (((bool((bool((velocity1->x != (int)0)) || bool((velocity1->y != (int)0)))) || bool((velocity1->z != (int)0))))){
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 result = collider->_destinationPoint;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(330)
								result->x = (position1->x + velocity1->x);
								HX_STACK_LINE(330)
								result->y = (position1->y + velocity1->y);
								HX_STACK_LINE(330)
								result->z = (position1->z + velocity1->z);
								HX_STACK_LINE(330)
								result;
							}
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								Float _g2 = ::Math_obj::sqrt((((velocity1->x * velocity1->x) + (velocity1->y * velocity1->y)) + (velocity1->z * velocity1->z)));		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(330)
								Float scale = (Float(collider->nearestDistance) / Float(_g2));		HX_STACK_VAR(scale,"scale");
								HX_STACK_LINE(330)
								hx::MultEq(velocity1->x,scale);
								HX_STACK_LINE(330)
								hx::MultEq(velocity1->y,scale);
								HX_STACK_LINE(330)
								hx::MultEq(velocity1->z,scale);
							}
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->basePoint;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(330)
								position1->x = (_this1->x + velocity1->x);
								HX_STACK_LINE(330)
								position1->y = (_this1->y + velocity1->y);
								HX_STACK_LINE(330)
								position1->z = (_this1->z + velocity1->z);
								HX_STACK_LINE(330)
								position1;
							}
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->intersectionPoint;		HX_STACK_VAR(otherVector,"otherVector");
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 result = collider->_slidePlaneNormal;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(330)
								result->x = (position1->x - otherVector->x);
								HX_STACK_LINE(330)
								result->y = (position1->y - otherVector->y);
								HX_STACK_LINE(330)
								result->z = (position1->z - otherVector->z);
							}
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->_slidePlaneNormal;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(330)
								Float len = ::Math_obj::sqrt((((_this1->x * _this1->x) + (_this1->y * _this1->y)) + (_this1->z * _this1->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(330)
								if (((len != (int)0))){
									HX_STACK_LINE(330)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(330)
									hx::MultEq(_this1->x,num);
									HX_STACK_LINE(330)
									hx::MultEq(_this1->y,num);
									HX_STACK_LINE(330)
									hx::MultEq(_this1->z,num);
								}
							}
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->_slidePlaneNormal;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(330)
								Float scale = collider->epsilon;		HX_STACK_VAR(scale,"scale");
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 result = collider->_displacementVector;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(330)
								result->x = (_this1->x * scale);
								HX_STACK_LINE(330)
								result->y = (_this1->y * scale);
								HX_STACK_LINE(330)
								result->z = (_this1->z * scale);
							}
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->_displacementVector;		HX_STACK_VAR(otherVector,"otherVector");
								HX_STACK_LINE(330)
								hx::AddEq(position1->x,otherVector->x);
								HX_STACK_LINE(330)
								hx::AddEq(position1->y,otherVector->y);
								HX_STACK_LINE(330)
								hx::AddEq(position1->z,otherVector->z);
							}
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->intersectionPoint;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->_displacementVector;		HX_STACK_VAR(otherVector,"otherVector");
								HX_STACK_LINE(330)
								hx::AddEq(_this1->x,otherVector->x);
								HX_STACK_LINE(330)
								hx::AddEq(_this1->y,otherVector->y);
								HX_STACK_LINE(330)
								hx::AddEq(_this1->z,otherVector->z);
							}
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->_slidePlaneNormal;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(330)
								Float scale;		HX_STACK_VAR(scale,"scale");
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 origin = collider->intersectionPoint;		HX_STACK_VAR(origin,"origin");
									HX_STACK_LINE(330)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = collider->_slidePlaneNormal;		HX_STACK_VAR(normal,"normal");
									HX_STACK_LINE(330)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 point = collider->_destinationPoint;		HX_STACK_VAR(point,"point");
									HX_STACK_LINE(330)
									Float d = -(((((normal->x * origin->x) + (normal->y * origin->y)) + (normal->z * origin->z))));		HX_STACK_VAR(d,"d");
									HX_STACK_LINE(330)
									scale = ((((point->x * normal->x) + (point->y * normal->y)) + (point->z * normal->z)) + d);
								}
								HX_STACK_LINE(330)
								hx::MultEq(_this1->x,scale);
								HX_STACK_LINE(330)
								hx::MultEq(_this1->y,scale);
								HX_STACK_LINE(330)
								hx::MultEq(_this1->z,scale);
							}
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->_destinationPoint;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->_slidePlaneNormal;		HX_STACK_VAR(otherVector,"otherVector");
								HX_STACK_LINE(330)
								hx::SubEq(_this1->x,otherVector->x);
								HX_STACK_LINE(330)
								hx::SubEq(_this1->y,otherVector->y);
								HX_STACK_LINE(330)
								hx::SubEq(_this1->z,otherVector->z);
							}
							HX_STACK_LINE(330)
							{
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->_destinationPoint;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(330)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->intersectionPoint;		HX_STACK_VAR(otherVector,"otherVector");
								HX_STACK_LINE(330)
								velocity1->x = (_this1->x - otherVector->x);
								HX_STACK_LINE(330)
								velocity1->y = (_this1->y - otherVector->y);
								HX_STACK_LINE(330)
								velocity1->z = (_this1->z - otherVector->z);
							}
						}
						HX_STACK_LINE(330)
						Float _g3 = ::Math_obj::sqrt((((velocity1->x * velocity1->x) + (velocity1->y * velocity1->y)) + (velocity1->z * velocity1->z)));		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(330)
						if (((_g3 <= closeDistance))){
							HX_STACK_LINE(330)
							finalPosition->x = position1->x;
							HX_STACK_LINE(330)
							finalPosition->y = position1->y;
							HX_STACK_LINE(330)
							finalPosition->z = position1->z;
						}
						else{
							HX_STACK_LINE(330)
							(collider->retry)++;
							HX_STACK_LINE(330)
							_this->_collideWithWorld(position1,velocity1,collider,(int)3,finalPosition);
						}
					}
				}
			}
			HX_STACK_LINE(330)
			{
				HX_STACK_LINE(330)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->radius;		HX_STACK_VAR(otherVector,"otherVector");
				HX_STACK_LINE(330)
				hx::MultEq(finalPosition->x,otherVector->x);
				HX_STACK_LINE(330)
				hx::MultEq(finalPosition->y,otherVector->y);
				HX_STACK_LINE(330)
				hx::MultEq(finalPosition->z,otherVector->z);
			}
		}
		HX_STACK_LINE(331)
		{
			HX_STACK_LINE(331)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_newPosition;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(331)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_oldPosition;		HX_STACK_VAR(otherVector,"otherVector");
			HX_STACK_LINE(331)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_diffPosition;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(331)
			result->x = (_this->x - otherVector->x);
			HX_STACK_LINE(331)
			result->y = (_this->y - otherVector->y);
			HX_STACK_LINE(331)
			result->z = (_this->z - otherVector->z);
		}
		HX_STACK_LINE(332)
		Float _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(332)
		{
			HX_STACK_LINE(332)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_diffPosition;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(332)
			_g4 = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));
		}
		HX_STACK_LINE(332)
		if (((_g4 > ::com::gamestudiohx::babylonhx::Engine_obj::collisionsEpsilon))){
			HX_STACK_LINE(333)
			{
				HX_STACK_LINE(333)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(333)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_diffPosition;		HX_STACK_VAR(otherVector,"otherVector");
				HX_STACK_LINE(333)
				hx::AddEq(_this->x,otherVector->x);
				HX_STACK_LINE(333)
				hx::AddEq(_this->y,otherVector->y);
				HX_STACK_LINE(333)
				hx::AddEq(_this->z,otherVector->z);
			}
			HX_STACK_LINE(334)
			if (((this->onCollide_dyn() != null()))){
				HX_STACK_LINE(335)
				this->onCollide(this->_collider->collidedMesh);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FreeCamera_obj,_collideWithWorld,(void))

Void FreeCamera_obj::_checkInputs( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.FreeCamera","_checkInputs",0x3dcf12dd,"com.gamestudiohx.babylonhx.cameras.FreeCamera._checkInputs","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",340,0x57a6a279)
		HX_STACK_THIS(this)
		HX_STACK_LINE(341)
		if (((this->_localDirection == null()))){
			HX_STACK_LINE(342)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(342)
			this->_localDirection = _g;
			HX_STACK_LINE(343)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(343)
			this->_transformedDirection = _g1;
		}
		HX_STACK_LINE(347)
		{
			HX_STACK_LINE(347)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(347)
			int _g = this->_keys->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(347)
			while((true)){
				HX_STACK_LINE(347)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(347)
					break;
				}
				HX_STACK_LINE(347)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(348)
				int keyCode = this->_keys->__get(index);		HX_STACK_VAR(keyCode,"keyCode");
				HX_STACK_LINE(349)
				Float _g2 = ::com::gamestudiohx::babylonhx::tools::Tools_obj::GetDeltaTime();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(349)
				Float _g3 = ::com::gamestudiohx::babylonhx::tools::Tools_obj::GetFps();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(349)
				Float _g4 = (_g3 * 10.0);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(349)
				Float _g5 = (Float(_g2) / Float(_g4));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(349)
				Float speed = (this->speed * _g5);		HX_STACK_VAR(speed,"speed");
				HX_STACK_LINE(351)
				int _g6 = ::Lambda_obj::indexOf(this->keysLeft,keyCode);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(351)
				if (((_g6 != (int)-1))){
					HX_STACK_LINE(352)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_localDirection;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(352)
					_this->x = -(speed);
					HX_STACK_LINE(352)
					_this->y = (int)0;
					HX_STACK_LINE(352)
					_this->z = (int)0;
				}
				else{
					HX_STACK_LINE(353)
					int _g7 = ::Lambda_obj::indexOf(this->keysUp,keyCode);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(353)
					if (((_g7 != (int)-1))){
						HX_STACK_LINE(354)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_localDirection;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(354)
						_this->x = (int)0;
						HX_STACK_LINE(354)
						_this->y = (int)0;
						HX_STACK_LINE(354)
						_this->z = speed;
					}
					else{
						HX_STACK_LINE(355)
						int _g8 = ::Lambda_obj::indexOf(this->keysRight,keyCode);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(355)
						if (((_g8 != (int)-1))){
							HX_STACK_LINE(356)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_localDirection;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(356)
							_this->x = speed;
							HX_STACK_LINE(356)
							_this->y = (int)0;
							HX_STACK_LINE(356)
							_this->z = (int)0;
						}
						else{
							HX_STACK_LINE(357)
							int _g9 = ::Lambda_obj::indexOf(this->keysDown,keyCode);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(357)
							if (((_g9 != (int)-1))){
								HX_STACK_LINE(358)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_localDirection;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(358)
								_this->x = (int)0;
								HX_STACK_LINE(358)
								_this->y = (int)0;
								HX_STACK_LINE(358)
								_this->z = -(speed);
							}
						}
					}
				}
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(361)
					{
						HX_STACK_LINE(361)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(361)
						{
							HX_STACK_LINE(361)
							bool force = false;		HX_STACK_VAR(force,"force");
							HX_STACK_LINE(361)
							if ((!(((  ((!(force))) ? bool(this->_isSynchronizedViewMatrix()) : bool(false) ))))){
								HX_STACK_LINE(361)
								this->_syncChildFlag();
								HX_STACK_LINE(361)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _g10 = this->_getViewMatrix();		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(361)
								this->_computedViewMatrix = _g10;
							}
							HX_STACK_LINE(361)
							_g11 = this->_computedViewMatrix;
						}
						HX_STACK_LINE(361)
						this->_computedViewMatrix = _g11;
						struct _Function_5_1{
							inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::cameras::FreeCamera_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",361,0x57a6a279)
								{
									HX_STACK_LINE(361)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _g12 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(361)
									return (_g12 == null());
								}
								return null();
							}
						};
						struct _Function_5_2{
							inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::cameras::FreeCamera_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",361,0x57a6a279)
								{
									HX_STACK_LINE(361)
									return (  ((!(__this->hasNewParent(null())))) ? bool(__this->parent->isSynchronized(null())) : bool(false) );
								}
								return null();
							}
						};
						HX_STACK_LINE(361)
						if ((!(((  ((!(((  ((!(((this->parent == null()))))) ? bool(_Function_5_1::Block(this)) : bool(true) ))))) ? bool(_Function_5_2::Block(this)) : bool(true) ))))){
							HX_STACK_LINE(361)
							if (((this->_worldMatrix == null()))){
								HX_STACK_LINE(361)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _g13;		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(361)
								{
									HX_STACK_LINE(361)
									::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(361)
									result->m[(int)0] = 1.0;
									HX_STACK_LINE(361)
									result->m[(int)1] = (int)0;
									HX_STACK_LINE(361)
									result->m[(int)2] = (int)0;
									HX_STACK_LINE(361)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(361)
									result->m[(int)4] = (int)0;
									HX_STACK_LINE(361)
									result->m[(int)5] = 1.0;
									HX_STACK_LINE(361)
									result->m[(int)6] = (int)0;
									HX_STACK_LINE(361)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(361)
									result->m[(int)8] = (int)0;
									HX_STACK_LINE(361)
									result->m[(int)9] = (int)0;
									HX_STACK_LINE(361)
									result->m[(int)10] = 1.0;
									HX_STACK_LINE(361)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(361)
									result->m[(int)12] = (int)0;
									HX_STACK_LINE(361)
									result->m[(int)13] = (int)0;
									HX_STACK_LINE(361)
									result->m[(int)14] = (int)0;
									HX_STACK_LINE(361)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(361)
									_g13 = result;
								}
								HX_STACK_LINE(361)
								this->_worldMatrix = _g13;
							}
							HX_STACK_LINE(361)
							{
								HX_STACK_LINE(361)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_computedViewMatrix;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(361)
								::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_worldMatrix;		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(361)
								Float l1 = _this1->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
								HX_STACK_LINE(361)
								Float l2 = _this1->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
								HX_STACK_LINE(361)
								Float l3 = _this1->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
								HX_STACK_LINE(361)
								Float l4 = _this1->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
								HX_STACK_LINE(361)
								Float l5 = _this1->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
								HX_STACK_LINE(361)
								Float l6 = _this1->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
								HX_STACK_LINE(361)
								Float l7 = _this1->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
								HX_STACK_LINE(361)
								Float l8 = _this1->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
								HX_STACK_LINE(361)
								Float l9 = _this1->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
								HX_STACK_LINE(361)
								Float l10 = _this1->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
								HX_STACK_LINE(361)
								Float l11 = _this1->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
								HX_STACK_LINE(361)
								Float l12 = _this1->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
								HX_STACK_LINE(361)
								Float l13 = _this1->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
								HX_STACK_LINE(361)
								Float l14 = _this1->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
								HX_STACK_LINE(361)
								Float l15 = _this1->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
								HX_STACK_LINE(361)
								Float l16 = _this1->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
								HX_STACK_LINE(361)
								Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
								HX_STACK_LINE(361)
								Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
								HX_STACK_LINE(361)
								Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
								HX_STACK_LINE(361)
								Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
								HX_STACK_LINE(361)
								Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
								HX_STACK_LINE(361)
								Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
								HX_STACK_LINE(361)
								Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
								HX_STACK_LINE(361)
								Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
								HX_STACK_LINE(361)
								Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
								HX_STACK_LINE(361)
								Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
								HX_STACK_LINE(361)
								Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
								HX_STACK_LINE(361)
								Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
								HX_STACK_LINE(361)
								Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
								HX_STACK_LINE(361)
								Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
								HX_STACK_LINE(361)
								Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
								HX_STACK_LINE(361)
								Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
								HX_STACK_LINE(361)
								Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
								HX_STACK_LINE(361)
								Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
								HX_STACK_LINE(361)
								Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
								HX_STACK_LINE(361)
								Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
								HX_STACK_LINE(361)
								Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
								HX_STACK_LINE(361)
								Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
								HX_STACK_LINE(361)
								Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
								HX_STACK_LINE(361)
								other->m[(int)0] = (l23 * l27);
								HX_STACK_LINE(361)
								other->m[(int)4] = (l24 * l27);
								HX_STACK_LINE(361)
								other->m[(int)8] = (l25 * l27);
								HX_STACK_LINE(361)
								other->m[(int)12] = (l26 * l27);
								HX_STACK_LINE(361)
								other->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
								HX_STACK_LINE(361)
								other->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
								HX_STACK_LINE(361)
								other->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
								HX_STACK_LINE(361)
								other->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
								HX_STACK_LINE(361)
								other->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
								HX_STACK_LINE(361)
								other->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
								HX_STACK_LINE(361)
								other->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
								HX_STACK_LINE(361)
								other->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
								HX_STACK_LINE(361)
								other->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
								HX_STACK_LINE(361)
								other->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
								HX_STACK_LINE(361)
								other->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
								HX_STACK_LINE(361)
								other->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
							}
							HX_STACK_LINE(361)
							{
								HX_STACK_LINE(361)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_worldMatrix;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(361)
								::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->parent->getWorldMatrix();		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(361)
								{
									HX_STACK_LINE(361)
									Array< Float > result = this->_computedViewMatrix->m;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(361)
									Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
									HX_STACK_LINE(361)
									Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
									HX_STACK_LINE(361)
									Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
									HX_STACK_LINE(361)
									Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
									HX_STACK_LINE(361)
									Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
									HX_STACK_LINE(361)
									Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
									HX_STACK_LINE(361)
									Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
									HX_STACK_LINE(361)
									Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
									HX_STACK_LINE(361)
									Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
									HX_STACK_LINE(361)
									Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
									HX_STACK_LINE(361)
									Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
									HX_STACK_LINE(361)
									Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
									HX_STACK_LINE(361)
									Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
									HX_STACK_LINE(361)
									Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
									HX_STACK_LINE(361)
									Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
									HX_STACK_LINE(361)
									Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
									HX_STACK_LINE(361)
									Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
									HX_STACK_LINE(361)
									Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
									HX_STACK_LINE(361)
									Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
									HX_STACK_LINE(361)
									Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
									HX_STACK_LINE(361)
									Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
									HX_STACK_LINE(361)
									Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
									HX_STACK_LINE(361)
									Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
									HX_STACK_LINE(361)
									Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
									HX_STACK_LINE(361)
									Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
									HX_STACK_LINE(361)
									Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
									HX_STACK_LINE(361)
									Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
									HX_STACK_LINE(361)
									Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
									HX_STACK_LINE(361)
									Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
									HX_STACK_LINE(361)
									Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
									HX_STACK_LINE(361)
									Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
									HX_STACK_LINE(361)
									Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
									HX_STACK_LINE(361)
									result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
									HX_STACK_LINE(361)
									result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
									HX_STACK_LINE(361)
									result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
									HX_STACK_LINE(361)
									result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
									HX_STACK_LINE(361)
									result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
									HX_STACK_LINE(361)
									result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
									HX_STACK_LINE(361)
									result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
									HX_STACK_LINE(361)
									result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
									HX_STACK_LINE(361)
									result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
									HX_STACK_LINE(361)
									result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
									HX_STACK_LINE(361)
									result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
									HX_STACK_LINE(361)
									result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
									HX_STACK_LINE(361)
									result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
									HX_STACK_LINE(361)
									result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
									HX_STACK_LINE(361)
									result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
									HX_STACK_LINE(361)
									result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
									HX_STACK_LINE(361)
									result;
								}
							}
							HX_STACK_LINE(361)
							{
								HX_STACK_LINE(361)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_computedViewMatrix;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(361)
								{
									HX_STACK_LINE(361)
									Float l1 = _this1->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
									HX_STACK_LINE(361)
									Float l2 = _this1->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
									HX_STACK_LINE(361)
									Float l3 = _this1->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
									HX_STACK_LINE(361)
									Float l4 = _this1->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
									HX_STACK_LINE(361)
									Float l5 = _this1->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
									HX_STACK_LINE(361)
									Float l6 = _this1->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
									HX_STACK_LINE(361)
									Float l7 = _this1->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
									HX_STACK_LINE(361)
									Float l8 = _this1->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
									HX_STACK_LINE(361)
									Float l9 = _this1->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
									HX_STACK_LINE(361)
									Float l10 = _this1->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
									HX_STACK_LINE(361)
									Float l11 = _this1->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
									HX_STACK_LINE(361)
									Float l12 = _this1->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
									HX_STACK_LINE(361)
									Float l13 = _this1->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
									HX_STACK_LINE(361)
									Float l14 = _this1->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
									HX_STACK_LINE(361)
									Float l15 = _this1->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
									HX_STACK_LINE(361)
									Float l16 = _this1->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
									HX_STACK_LINE(361)
									Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
									HX_STACK_LINE(361)
									Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
									HX_STACK_LINE(361)
									Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
									HX_STACK_LINE(361)
									Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
									HX_STACK_LINE(361)
									Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
									HX_STACK_LINE(361)
									Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
									HX_STACK_LINE(361)
									Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
									HX_STACK_LINE(361)
									Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
									HX_STACK_LINE(361)
									Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
									HX_STACK_LINE(361)
									Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
									HX_STACK_LINE(361)
									Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
									HX_STACK_LINE(361)
									Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
									HX_STACK_LINE(361)
									Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
									HX_STACK_LINE(361)
									Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
									HX_STACK_LINE(361)
									Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
									HX_STACK_LINE(361)
									Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
									HX_STACK_LINE(361)
									Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
									HX_STACK_LINE(361)
									Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
									HX_STACK_LINE(361)
									Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
									HX_STACK_LINE(361)
									Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
									HX_STACK_LINE(361)
									Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
									HX_STACK_LINE(361)
									Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
									HX_STACK_LINE(361)
									Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
									HX_STACK_LINE(361)
									_this1->m[(int)0] = (l23 * l27);
									HX_STACK_LINE(361)
									_this1->m[(int)4] = (l24 * l27);
									HX_STACK_LINE(361)
									_this1->m[(int)8] = (l25 * l27);
									HX_STACK_LINE(361)
									_this1->m[(int)12] = (l26 * l27);
									HX_STACK_LINE(361)
									_this1->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
									HX_STACK_LINE(361)
									_this1->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
									HX_STACK_LINE(361)
									_this1->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
									HX_STACK_LINE(361)
									_this1->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
									HX_STACK_LINE(361)
									_this1->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
									HX_STACK_LINE(361)
									_this1->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
									HX_STACK_LINE(361)
									_this1->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
									HX_STACK_LINE(361)
									_this1->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
									HX_STACK_LINE(361)
									_this1->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
									HX_STACK_LINE(361)
									_this1->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
									HX_STACK_LINE(361)
									_this1->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
									HX_STACK_LINE(361)
									_this1->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
								}
							}
						}
						HX_STACK_LINE(361)
						_this = this->_computedViewMatrix;
					}
					HX_STACK_LINE(361)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_cameraTransformMatrix;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(361)
					Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
					HX_STACK_LINE(361)
					Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
					HX_STACK_LINE(361)
					Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
					HX_STACK_LINE(361)
					Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
					HX_STACK_LINE(361)
					Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
					HX_STACK_LINE(361)
					Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
					HX_STACK_LINE(361)
					Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
					HX_STACK_LINE(361)
					Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
					HX_STACK_LINE(361)
					Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
					HX_STACK_LINE(361)
					Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
					HX_STACK_LINE(361)
					Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
					HX_STACK_LINE(361)
					Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
					HX_STACK_LINE(361)
					Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
					HX_STACK_LINE(361)
					Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
					HX_STACK_LINE(361)
					Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
					HX_STACK_LINE(361)
					Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
					HX_STACK_LINE(361)
					Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
					HX_STACK_LINE(361)
					Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
					HX_STACK_LINE(361)
					Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
					HX_STACK_LINE(361)
					Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
					HX_STACK_LINE(361)
					Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
					HX_STACK_LINE(361)
					Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
					HX_STACK_LINE(361)
					Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
					HX_STACK_LINE(361)
					Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
					HX_STACK_LINE(361)
					Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
					HX_STACK_LINE(361)
					Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
					HX_STACK_LINE(361)
					Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
					HX_STACK_LINE(361)
					Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
					HX_STACK_LINE(361)
					Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
					HX_STACK_LINE(361)
					Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
					HX_STACK_LINE(361)
					Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
					HX_STACK_LINE(361)
					Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
					HX_STACK_LINE(361)
					Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
					HX_STACK_LINE(361)
					Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
					HX_STACK_LINE(361)
					Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
					HX_STACK_LINE(361)
					Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
					HX_STACK_LINE(361)
					Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
					HX_STACK_LINE(361)
					Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
					HX_STACK_LINE(361)
					Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
					HX_STACK_LINE(361)
					other->m[(int)0] = (l23 * l27);
					HX_STACK_LINE(361)
					other->m[(int)4] = (l24 * l27);
					HX_STACK_LINE(361)
					other->m[(int)8] = (l25 * l27);
					HX_STACK_LINE(361)
					other->m[(int)12] = (l26 * l27);
					HX_STACK_LINE(361)
					other->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
					HX_STACK_LINE(361)
					other->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
					HX_STACK_LINE(361)
					other->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
					HX_STACK_LINE(361)
					other->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
					HX_STACK_LINE(361)
					other->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
					HX_STACK_LINE(361)
					other->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
					HX_STACK_LINE(361)
					other->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
					HX_STACK_LINE(361)
					other->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
					HX_STACK_LINE(361)
					other->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
					HX_STACK_LINE(361)
					other->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
					HX_STACK_LINE(361)
					other->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
					HX_STACK_LINE(361)
					other->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
				}
				HX_STACK_LINE(362)
				{
					HX_STACK_LINE(362)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->_localDirection;		HX_STACK_VAR(vector,"vector");
					HX_STACK_LINE(362)
					::com::gamestudiohx::babylonhx::tools::math::Matrix transformation = this->_cameraTransformMatrix;		HX_STACK_VAR(transformation,"transformation");
					HX_STACK_LINE(362)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_transformedDirection;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(362)
					result->x = (((vector->x * transformation->m->__get((int)0)) + (vector->y * transformation->m->__get((int)4))) + (vector->z * transformation->m->__get((int)8)));
					HX_STACK_LINE(362)
					result->y = (((vector->x * transformation->m->__get((int)1)) + (vector->y * transformation->m->__get((int)5))) + (vector->z * transformation->m->__get((int)9)));
					HX_STACK_LINE(362)
					result->z = (((vector->x * transformation->m->__get((int)2)) + (vector->y * transformation->m->__get((int)6))) + (vector->z * transformation->m->__get((int)10)));
				}
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->cameraDirection;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(363)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_transformedDirection;		HX_STACK_VAR(otherVector,"otherVector");
					HX_STACK_LINE(363)
					hx::AddEq(_this->x,otherVector->x);
					HX_STACK_LINE(363)
					hx::AddEq(_this->y,otherVector->y);
					HX_STACK_LINE(363)
					hx::AddEq(_this->z,otherVector->z);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FreeCamera_obj,_checkInputs,(void))

Void FreeCamera_obj::_update( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.FreeCamera","_update",0xf87ffebd,"com.gamestudiohx.babylonhx.cameras.FreeCamera._update","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",367,0x57a6a279)
		HX_STACK_THIS(this)
		HX_STACK_LINE(368)
		{
			HX_STACK_LINE(368)
			if (((this->_localDirection == null()))){
				HX_STACK_LINE(368)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(368)
				this->_localDirection = _g;
				HX_STACK_LINE(368)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(368)
				this->_transformedDirection = _g1;
			}
			HX_STACK_LINE(368)
			{
				HX_STACK_LINE(368)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(368)
				int _g = this->_keys->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(368)
				while((true)){
					HX_STACK_LINE(368)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(368)
						break;
					}
					HX_STACK_LINE(368)
					int index = (_g1)++;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(368)
					int keyCode = this->_keys->__get(index);		HX_STACK_VAR(keyCode,"keyCode");
					HX_STACK_LINE(368)
					Float _g2 = ::com::gamestudiohx::babylonhx::tools::Tools_obj::GetDeltaTime();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(368)
					Float _g3 = ::com::gamestudiohx::babylonhx::tools::Tools_obj::GetFps();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(368)
					Float _g4 = (_g3 * 10.0);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(368)
					Float _g5 = (Float(_g2) / Float(_g4));		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(368)
					Float speed = (this->speed * _g5);		HX_STACK_VAR(speed,"speed");
					HX_STACK_LINE(368)
					int _g6 = ::Lambda_obj::indexOf(this->keysLeft,keyCode);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(368)
					if (((_g6 != (int)-1))){
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_localDirection;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(368)
						_this->x = -(speed);
						HX_STACK_LINE(368)
						_this->y = (int)0;
						HX_STACK_LINE(368)
						_this->z = (int)0;
					}
					else{
						HX_STACK_LINE(368)
						int _g7 = ::Lambda_obj::indexOf(this->keysUp,keyCode);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(368)
						if (((_g7 != (int)-1))){
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_localDirection;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(368)
							_this->x = (int)0;
							HX_STACK_LINE(368)
							_this->y = (int)0;
							HX_STACK_LINE(368)
							_this->z = speed;
						}
						else{
							HX_STACK_LINE(368)
							int _g8 = ::Lambda_obj::indexOf(this->keysRight,keyCode);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(368)
							if (((_g8 != (int)-1))){
								HX_STACK_LINE(368)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_localDirection;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(368)
								_this->x = speed;
								HX_STACK_LINE(368)
								_this->y = (int)0;
								HX_STACK_LINE(368)
								_this->z = (int)0;
							}
							else{
								HX_STACK_LINE(368)
								int _g9 = ::Lambda_obj::indexOf(this->keysDown,keyCode);		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(368)
								if (((_g9 != (int)-1))){
									HX_STACK_LINE(368)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_localDirection;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(368)
									_this->x = (int)0;
									HX_STACK_LINE(368)
									_this->y = (int)0;
									HX_STACK_LINE(368)
									_this->z = -(speed);
								}
							}
						}
					}
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _g11;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								bool force = false;		HX_STACK_VAR(force,"force");
								HX_STACK_LINE(368)
								if ((!(((  ((!(force))) ? bool(this->_isSynchronizedViewMatrix()) : bool(false) ))))){
									HX_STACK_LINE(368)
									this->_syncChildFlag();
									HX_STACK_LINE(368)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _g10 = this->_getViewMatrix();		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(368)
									this->_computedViewMatrix = _g10;
								}
								HX_STACK_LINE(368)
								_g11 = this->_computedViewMatrix;
							}
							HX_STACK_LINE(368)
							this->_computedViewMatrix = _g11;
							struct _Function_6_1{
								inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::cameras::FreeCamera_obj > __this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",368,0x57a6a279)
									{
										HX_STACK_LINE(368)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _g12 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g12,"_g12");
										HX_STACK_LINE(368)
										return (_g12 == null());
									}
									return null();
								}
							};
							struct _Function_6_2{
								inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::cameras::FreeCamera_obj > __this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",368,0x57a6a279)
									{
										HX_STACK_LINE(368)
										return (  ((!(__this->hasNewParent(null())))) ? bool(__this->parent->isSynchronized(null())) : bool(false) );
									}
									return null();
								}
							};
							HX_STACK_LINE(368)
							if ((!(((  ((!(((  ((!(((this->parent == null()))))) ? bool(_Function_6_1::Block(this)) : bool(true) ))))) ? bool(_Function_6_2::Block(this)) : bool(true) ))))){
								HX_STACK_LINE(368)
								if (((this->_worldMatrix == null()))){
									HX_STACK_LINE(368)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _g13;		HX_STACK_VAR(_g13,"_g13");
									HX_STACK_LINE(368)
									{
										HX_STACK_LINE(368)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(368)
										result->m[(int)0] = 1.0;
										HX_STACK_LINE(368)
										result->m[(int)1] = (int)0;
										HX_STACK_LINE(368)
										result->m[(int)2] = (int)0;
										HX_STACK_LINE(368)
										result->m[(int)3] = (int)0;
										HX_STACK_LINE(368)
										result->m[(int)4] = (int)0;
										HX_STACK_LINE(368)
										result->m[(int)5] = 1.0;
										HX_STACK_LINE(368)
										result->m[(int)6] = (int)0;
										HX_STACK_LINE(368)
										result->m[(int)7] = (int)0;
										HX_STACK_LINE(368)
										result->m[(int)8] = (int)0;
										HX_STACK_LINE(368)
										result->m[(int)9] = (int)0;
										HX_STACK_LINE(368)
										result->m[(int)10] = 1.0;
										HX_STACK_LINE(368)
										result->m[(int)11] = (int)0;
										HX_STACK_LINE(368)
										result->m[(int)12] = (int)0;
										HX_STACK_LINE(368)
										result->m[(int)13] = (int)0;
										HX_STACK_LINE(368)
										result->m[(int)14] = (int)0;
										HX_STACK_LINE(368)
										result->m[(int)15] = 1.0;
										HX_STACK_LINE(368)
										_g13 = result;
									}
									HX_STACK_LINE(368)
									this->_worldMatrix = _g13;
								}
								HX_STACK_LINE(368)
								{
									HX_STACK_LINE(368)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_computedViewMatrix;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(368)
									::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_worldMatrix;		HX_STACK_VAR(other,"other");
									HX_STACK_LINE(368)
									Float l1 = _this1->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
									HX_STACK_LINE(368)
									Float l2 = _this1->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
									HX_STACK_LINE(368)
									Float l3 = _this1->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
									HX_STACK_LINE(368)
									Float l4 = _this1->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
									HX_STACK_LINE(368)
									Float l5 = _this1->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
									HX_STACK_LINE(368)
									Float l6 = _this1->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
									HX_STACK_LINE(368)
									Float l7 = _this1->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
									HX_STACK_LINE(368)
									Float l8 = _this1->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
									HX_STACK_LINE(368)
									Float l9 = _this1->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
									HX_STACK_LINE(368)
									Float l10 = _this1->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
									HX_STACK_LINE(368)
									Float l11 = _this1->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
									HX_STACK_LINE(368)
									Float l12 = _this1->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
									HX_STACK_LINE(368)
									Float l13 = _this1->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
									HX_STACK_LINE(368)
									Float l14 = _this1->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
									HX_STACK_LINE(368)
									Float l15 = _this1->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
									HX_STACK_LINE(368)
									Float l16 = _this1->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
									HX_STACK_LINE(368)
									Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
									HX_STACK_LINE(368)
									Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
									HX_STACK_LINE(368)
									Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
									HX_STACK_LINE(368)
									Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
									HX_STACK_LINE(368)
									Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
									HX_STACK_LINE(368)
									Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
									HX_STACK_LINE(368)
									Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
									HX_STACK_LINE(368)
									Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
									HX_STACK_LINE(368)
									Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
									HX_STACK_LINE(368)
									Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
									HX_STACK_LINE(368)
									Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
									HX_STACK_LINE(368)
									Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
									HX_STACK_LINE(368)
									Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
									HX_STACK_LINE(368)
									Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
									HX_STACK_LINE(368)
									Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
									HX_STACK_LINE(368)
									Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
									HX_STACK_LINE(368)
									Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
									HX_STACK_LINE(368)
									Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
									HX_STACK_LINE(368)
									Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
									HX_STACK_LINE(368)
									Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
									HX_STACK_LINE(368)
									Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
									HX_STACK_LINE(368)
									Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
									HX_STACK_LINE(368)
									Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
									HX_STACK_LINE(368)
									other->m[(int)0] = (l23 * l27);
									HX_STACK_LINE(368)
									other->m[(int)4] = (l24 * l27);
									HX_STACK_LINE(368)
									other->m[(int)8] = (l25 * l27);
									HX_STACK_LINE(368)
									other->m[(int)12] = (l26 * l27);
									HX_STACK_LINE(368)
									other->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
									HX_STACK_LINE(368)
									other->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
									HX_STACK_LINE(368)
									other->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
									HX_STACK_LINE(368)
									other->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
									HX_STACK_LINE(368)
									other->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
									HX_STACK_LINE(368)
									other->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
									HX_STACK_LINE(368)
									other->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
									HX_STACK_LINE(368)
									other->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
									HX_STACK_LINE(368)
									other->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
									HX_STACK_LINE(368)
									other->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
									HX_STACK_LINE(368)
									other->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
									HX_STACK_LINE(368)
									other->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
								}
								HX_STACK_LINE(368)
								{
									HX_STACK_LINE(368)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_worldMatrix;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(368)
									::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->parent->getWorldMatrix();		HX_STACK_VAR(other,"other");
									HX_STACK_LINE(368)
									{
										HX_STACK_LINE(368)
										Array< Float > result = this->_computedViewMatrix->m;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(368)
										Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
										HX_STACK_LINE(368)
										Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
										HX_STACK_LINE(368)
										Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
										HX_STACK_LINE(368)
										Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
										HX_STACK_LINE(368)
										Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
										HX_STACK_LINE(368)
										Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
										HX_STACK_LINE(368)
										Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
										HX_STACK_LINE(368)
										Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
										HX_STACK_LINE(368)
										Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
										HX_STACK_LINE(368)
										Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
										HX_STACK_LINE(368)
										Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
										HX_STACK_LINE(368)
										Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
										HX_STACK_LINE(368)
										Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
										HX_STACK_LINE(368)
										Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
										HX_STACK_LINE(368)
										Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
										HX_STACK_LINE(368)
										Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
										HX_STACK_LINE(368)
										Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
										HX_STACK_LINE(368)
										Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
										HX_STACK_LINE(368)
										Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
										HX_STACK_LINE(368)
										Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
										HX_STACK_LINE(368)
										Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
										HX_STACK_LINE(368)
										Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
										HX_STACK_LINE(368)
										Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
										HX_STACK_LINE(368)
										Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
										HX_STACK_LINE(368)
										Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
										HX_STACK_LINE(368)
										Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
										HX_STACK_LINE(368)
										Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
										HX_STACK_LINE(368)
										Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
										HX_STACK_LINE(368)
										Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
										HX_STACK_LINE(368)
										Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
										HX_STACK_LINE(368)
										Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
										HX_STACK_LINE(368)
										Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
										HX_STACK_LINE(368)
										result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
										HX_STACK_LINE(368)
										result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
										HX_STACK_LINE(368)
										result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
										HX_STACK_LINE(368)
										result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
										HX_STACK_LINE(368)
										result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
										HX_STACK_LINE(368)
										result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
										HX_STACK_LINE(368)
										result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
										HX_STACK_LINE(368)
										result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
										HX_STACK_LINE(368)
										result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
										HX_STACK_LINE(368)
										result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
										HX_STACK_LINE(368)
										result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
										HX_STACK_LINE(368)
										result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
										HX_STACK_LINE(368)
										result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
										HX_STACK_LINE(368)
										result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
										HX_STACK_LINE(368)
										result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
										HX_STACK_LINE(368)
										result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
										HX_STACK_LINE(368)
										result;
									}
								}
								HX_STACK_LINE(368)
								{
									HX_STACK_LINE(368)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = this->_computedViewMatrix;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(368)
									{
										HX_STACK_LINE(368)
										Float l1 = _this1->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
										HX_STACK_LINE(368)
										Float l2 = _this1->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
										HX_STACK_LINE(368)
										Float l3 = _this1->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
										HX_STACK_LINE(368)
										Float l4 = _this1->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
										HX_STACK_LINE(368)
										Float l5 = _this1->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
										HX_STACK_LINE(368)
										Float l6 = _this1->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
										HX_STACK_LINE(368)
										Float l7 = _this1->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
										HX_STACK_LINE(368)
										Float l8 = _this1->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
										HX_STACK_LINE(368)
										Float l9 = _this1->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
										HX_STACK_LINE(368)
										Float l10 = _this1->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
										HX_STACK_LINE(368)
										Float l11 = _this1->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
										HX_STACK_LINE(368)
										Float l12 = _this1->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
										HX_STACK_LINE(368)
										Float l13 = _this1->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
										HX_STACK_LINE(368)
										Float l14 = _this1->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
										HX_STACK_LINE(368)
										Float l15 = _this1->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
										HX_STACK_LINE(368)
										Float l16 = _this1->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
										HX_STACK_LINE(368)
										Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
										HX_STACK_LINE(368)
										Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
										HX_STACK_LINE(368)
										Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
										HX_STACK_LINE(368)
										Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
										HX_STACK_LINE(368)
										Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
										HX_STACK_LINE(368)
										Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
										HX_STACK_LINE(368)
										Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
										HX_STACK_LINE(368)
										Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
										HX_STACK_LINE(368)
										Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
										HX_STACK_LINE(368)
										Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
										HX_STACK_LINE(368)
										Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
										HX_STACK_LINE(368)
										Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
										HX_STACK_LINE(368)
										Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
										HX_STACK_LINE(368)
										Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
										HX_STACK_LINE(368)
										Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
										HX_STACK_LINE(368)
										Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
										HX_STACK_LINE(368)
										Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
										HX_STACK_LINE(368)
										Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
										HX_STACK_LINE(368)
										Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
										HX_STACK_LINE(368)
										Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
										HX_STACK_LINE(368)
										Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
										HX_STACK_LINE(368)
										Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
										HX_STACK_LINE(368)
										Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
										HX_STACK_LINE(368)
										_this1->m[(int)0] = (l23 * l27);
										HX_STACK_LINE(368)
										_this1->m[(int)4] = (l24 * l27);
										HX_STACK_LINE(368)
										_this1->m[(int)8] = (l25 * l27);
										HX_STACK_LINE(368)
										_this1->m[(int)12] = (l26 * l27);
										HX_STACK_LINE(368)
										_this1->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
										HX_STACK_LINE(368)
										_this1->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
										HX_STACK_LINE(368)
										_this1->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
										HX_STACK_LINE(368)
										_this1->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
										HX_STACK_LINE(368)
										_this1->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
										HX_STACK_LINE(368)
										_this1->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
										HX_STACK_LINE(368)
										_this1->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
										HX_STACK_LINE(368)
										_this1->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
										HX_STACK_LINE(368)
										_this1->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
										HX_STACK_LINE(368)
										_this1->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
										HX_STACK_LINE(368)
										_this1->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
										HX_STACK_LINE(368)
										_this1->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
									}
								}
							}
							HX_STACK_LINE(368)
							_this = this->_computedViewMatrix;
						}
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_cameraTransformMatrix;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(368)
						Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
						HX_STACK_LINE(368)
						Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
						HX_STACK_LINE(368)
						Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
						HX_STACK_LINE(368)
						Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
						HX_STACK_LINE(368)
						Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
						HX_STACK_LINE(368)
						Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
						HX_STACK_LINE(368)
						Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
						HX_STACK_LINE(368)
						Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
						HX_STACK_LINE(368)
						Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
						HX_STACK_LINE(368)
						Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
						HX_STACK_LINE(368)
						Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
						HX_STACK_LINE(368)
						Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
						HX_STACK_LINE(368)
						Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
						HX_STACK_LINE(368)
						Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
						HX_STACK_LINE(368)
						Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
						HX_STACK_LINE(368)
						Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
						HX_STACK_LINE(368)
						Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
						HX_STACK_LINE(368)
						Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
						HX_STACK_LINE(368)
						Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
						HX_STACK_LINE(368)
						Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
						HX_STACK_LINE(368)
						Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
						HX_STACK_LINE(368)
						Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
						HX_STACK_LINE(368)
						Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
						HX_STACK_LINE(368)
						Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
						HX_STACK_LINE(368)
						Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
						HX_STACK_LINE(368)
						Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
						HX_STACK_LINE(368)
						Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
						HX_STACK_LINE(368)
						Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
						HX_STACK_LINE(368)
						Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
						HX_STACK_LINE(368)
						Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
						HX_STACK_LINE(368)
						Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
						HX_STACK_LINE(368)
						Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
						HX_STACK_LINE(368)
						Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
						HX_STACK_LINE(368)
						Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
						HX_STACK_LINE(368)
						Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
						HX_STACK_LINE(368)
						Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
						HX_STACK_LINE(368)
						Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
						HX_STACK_LINE(368)
						Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
						HX_STACK_LINE(368)
						Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
						HX_STACK_LINE(368)
						other->m[(int)0] = (l23 * l27);
						HX_STACK_LINE(368)
						other->m[(int)4] = (l24 * l27);
						HX_STACK_LINE(368)
						other->m[(int)8] = (l25 * l27);
						HX_STACK_LINE(368)
						other->m[(int)12] = (l26 * l27);
						HX_STACK_LINE(368)
						other->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
						HX_STACK_LINE(368)
						other->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
						HX_STACK_LINE(368)
						other->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
						HX_STACK_LINE(368)
						other->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
						HX_STACK_LINE(368)
						other->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
						HX_STACK_LINE(368)
						other->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
						HX_STACK_LINE(368)
						other->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
						HX_STACK_LINE(368)
						other->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
						HX_STACK_LINE(368)
						other->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
						HX_STACK_LINE(368)
						other->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
						HX_STACK_LINE(368)
						other->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
						HX_STACK_LINE(368)
						other->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
					}
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->_localDirection;		HX_STACK_VAR(vector,"vector");
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Matrix transformation = this->_cameraTransformMatrix;		HX_STACK_VAR(transformation,"transformation");
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_transformedDirection;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(368)
						result->x = (((vector->x * transformation->m->__get((int)0)) + (vector->y * transformation->m->__get((int)4))) + (vector->z * transformation->m->__get((int)8)));
						HX_STACK_LINE(368)
						result->y = (((vector->x * transformation->m->__get((int)1)) + (vector->y * transformation->m->__get((int)5))) + (vector->z * transformation->m->__get((int)9)));
						HX_STACK_LINE(368)
						result->z = (((vector->x * transformation->m->__get((int)2)) + (vector->y * transformation->m->__get((int)6))) + (vector->z * transformation->m->__get((int)10)));
					}
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->cameraDirection;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_transformedDirection;		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(368)
						hx::AddEq(_this->x,otherVector->x);
						HX_STACK_LINE(368)
						hx::AddEq(_this->y,otherVector->y);
						HX_STACK_LINE(368)
						hx::AddEq(_this->z,otherVector->z);
					}
				}
			}
		}
		HX_STACK_LINE(370)
		bool needToMove;		HX_STACK_VAR(needToMove,"needToMove");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::cameras::FreeCamera_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",370,0x57a6a279)
				{
					HX_STACK_LINE(370)
					Float _g14 = ::Math_obj::abs(__this->cameraDirection->x);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(370)
					return (_g14 > (int)0);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::cameras::FreeCamera_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",370,0x57a6a279)
				{
					HX_STACK_LINE(370)
					Float _g15 = ::Math_obj::abs(__this->cameraDirection->y);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(370)
					return (_g15 > (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(370)
		if ((!(((  ((!(((  ((!(this->_needMoveForGravity))) ? bool(_Function_1_1::Block(this)) : bool(true) ))))) ? bool(_Function_1_2::Block(this)) : bool(true) ))))){
			HX_STACK_LINE(370)
			Float _g16 = ::Math_obj::abs(this->cameraDirection->z);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(370)
			needToMove = (_g16 > (int)0);
		}
		else{
			HX_STACK_LINE(370)
			needToMove = true;
		}
		HX_STACK_LINE(371)
		Float _g17 = ::Math_obj::abs(this->cameraRotation->x);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(371)
		bool needToRotate;		HX_STACK_VAR(needToRotate,"needToRotate");
		HX_STACK_LINE(371)
		if ((!(((_g17 > (int)0))))){
			HX_STACK_LINE(371)
			Float _g18 = ::Math_obj::abs(this->cameraRotation->y);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(371)
			needToRotate = (_g18 > (int)0);
		}
		else{
			HX_STACK_LINE(371)
			needToRotate = true;
		}
		HX_STACK_LINE(374)
		if ((needToMove)){
			HX_STACK_LINE(375)
			if (((bool(this->checkCollisions) && bool(this->_scene->collisionsEnabled)))){
				HX_STACK_LINE(376)
				{
					HX_STACK_LINE(376)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 velocity = this->cameraDirection;		HX_STACK_VAR(velocity,"velocity");
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(376)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_oldPosition;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(376)
						result->x = _this->x;
						HX_STACK_LINE(376)
						result->y = (_this->y - this->ellipsoid->y);
						HX_STACK_LINE(376)
						result->z = _this->z;
					}
					HX_STACK_LINE(376)
					this->_collider->radius = this->ellipsoid;
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						::com::gamestudiohx::babylonhx::Scene _this = this->_scene;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(376)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 position = this->_oldPosition;		HX_STACK_VAR(position,"position");
						HX_STACK_LINE(376)
						::com::gamestudiohx::babylonhx::collisions::Collider collider = this->_collider;		HX_STACK_VAR(collider,"collider");
						HX_STACK_LINE(376)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 finalPosition = this->_newPosition;		HX_STACK_VAR(finalPosition,"finalPosition");
						HX_STACK_LINE(376)
						{
							HX_STACK_LINE(376)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->radius;		HX_STACK_VAR(otherVector,"otherVector");
							HX_STACK_LINE(376)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 result = _this->_scaledPosition;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(376)
							result->x = (Float(position->x) / Float(otherVector->x));
							HX_STACK_LINE(376)
							result->y = (Float(position->y) / Float(otherVector->y));
							HX_STACK_LINE(376)
							result->z = (Float(position->z) / Float(otherVector->z));
						}
						HX_STACK_LINE(376)
						{
							HX_STACK_LINE(376)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->radius;		HX_STACK_VAR(otherVector,"otherVector");
							HX_STACK_LINE(376)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 result = _this->_scaledVelocity;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(376)
							result->x = (Float(velocity->x) / Float(otherVector->x));
							HX_STACK_LINE(376)
							result->y = (Float(velocity->y) / Float(otherVector->y));
							HX_STACK_LINE(376)
							result->z = (Float(velocity->z) / Float(otherVector->z));
						}
						HX_STACK_LINE(376)
						collider->retry = (int)0;
						HX_STACK_LINE(376)
						collider->initialVelocity = _this->_scaledVelocity;
						HX_STACK_LINE(376)
						collider->initialPosition = _this->_scaledPosition;
						HX_STACK_LINE(376)
						{
							HX_STACK_LINE(376)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 position1 = _this->_scaledPosition;		HX_STACK_VAR(position1,"position1");
							HX_STACK_LINE(376)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 velocity1 = _this->_scaledVelocity;		HX_STACK_VAR(velocity1,"velocity1");
							HX_STACK_LINE(376)
							Float closeDistance = (::com::gamestudiohx::babylonhx::Engine_obj::collisionsEpsilon * 10.0);		HX_STACK_VAR(closeDistance,"closeDistance");
							HX_STACK_LINE(376)
							if (((collider->retry >= (int)3))){
								HX_STACK_LINE(376)
								finalPosition->x = position1->x;
								HX_STACK_LINE(376)
								finalPosition->y = position1->y;
								HX_STACK_LINE(376)
								finalPosition->z = position1->z;
							}
							else{
								HX_STACK_LINE(376)
								collider->_initialize(position1,velocity1,closeDistance);
								HX_STACK_LINE(376)
								{
									HX_STACK_LINE(376)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(376)
									int _g = _this->meshes->length;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(376)
									while((true)){
										HX_STACK_LINE(376)
										if ((!(((_g1 < _g))))){
											HX_STACK_LINE(376)
											break;
										}
										HX_STACK_LINE(376)
										int index = (_g1)++;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh = _this->meshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >();		HX_STACK_VAR(mesh,"mesh");
										HX_STACK_LINE(376)
										if (((  ((mesh->isEnabled())) ? bool(mesh->checkCollisions) : bool(false) ))){
											HX_STACK_LINE(376)
											if ((mesh->_boundingInfo->_checkCollision(collider))){
												HX_STACK_LINE(376)
												{
													HX_STACK_LINE(376)
													::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_collisionsScalingMatrix;		HX_STACK_VAR(result,"result");
													HX_STACK_LINE(376)
													result->m[(int)0] = (Float(1.0) / Float(collider->radius->x));
													HX_STACK_LINE(376)
													result->m[(int)1] = (int)0;
													HX_STACK_LINE(376)
													result->m[(int)2] = (int)0;
													HX_STACK_LINE(376)
													result->m[(int)3] = (int)0;
													HX_STACK_LINE(376)
													result->m[(int)4] = (int)0;
													HX_STACK_LINE(376)
													result->m[(int)5] = (Float(1.0) / Float(collider->radius->y));
													HX_STACK_LINE(376)
													result->m[(int)6] = (int)0;
													HX_STACK_LINE(376)
													result->m[(int)7] = (int)0;
													HX_STACK_LINE(376)
													result->m[(int)8] = (int)0;
													HX_STACK_LINE(376)
													result->m[(int)9] = (int)0;
													HX_STACK_LINE(376)
													result->m[(int)10] = (Float(1.0) / Float(collider->radius->z));
													HX_STACK_LINE(376)
													result->m[(int)11] = (int)0;
													HX_STACK_LINE(376)
													result->m[(int)12] = (int)0;
													HX_STACK_LINE(376)
													result->m[(int)13] = (int)0;
													HX_STACK_LINE(376)
													result->m[(int)14] = (int)0;
													HX_STACK_LINE(376)
													result->m[(int)15] = 1.0;
													HX_STACK_LINE(376)
													result;
												}
												HX_STACK_LINE(376)
												{
													HX_STACK_LINE(376)
													::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = mesh->_worldMatrix;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(376)
													::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_collisionsScalingMatrix;		HX_STACK_VAR(other,"other");
													HX_STACK_LINE(376)
													{
														HX_STACK_LINE(376)
														Array< Float > result = mesh->_collisionsTransformMatrix->m;		HX_STACK_VAR(result,"result");
														HX_STACK_LINE(376)
														Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
														HX_STACK_LINE(376)
														Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
														HX_STACK_LINE(376)
														Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
														HX_STACK_LINE(376)
														Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
														HX_STACK_LINE(376)
														Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
														HX_STACK_LINE(376)
														Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
														HX_STACK_LINE(376)
														Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
														HX_STACK_LINE(376)
														Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
														HX_STACK_LINE(376)
														Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
														HX_STACK_LINE(376)
														Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
														HX_STACK_LINE(376)
														Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
														HX_STACK_LINE(376)
														Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
														HX_STACK_LINE(376)
														Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
														HX_STACK_LINE(376)
														Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
														HX_STACK_LINE(376)
														Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
														HX_STACK_LINE(376)
														Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
														HX_STACK_LINE(376)
														Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
														HX_STACK_LINE(376)
														Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
														HX_STACK_LINE(376)
														Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
														HX_STACK_LINE(376)
														Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
														HX_STACK_LINE(376)
														Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
														HX_STACK_LINE(376)
														Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
														HX_STACK_LINE(376)
														Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
														HX_STACK_LINE(376)
														Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
														HX_STACK_LINE(376)
														Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
														HX_STACK_LINE(376)
														Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
														HX_STACK_LINE(376)
														Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
														HX_STACK_LINE(376)
														Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
														HX_STACK_LINE(376)
														Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
														HX_STACK_LINE(376)
														Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
														HX_STACK_LINE(376)
														Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
														HX_STACK_LINE(376)
														Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
														HX_STACK_LINE(376)
														result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
														HX_STACK_LINE(376)
														result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
														HX_STACK_LINE(376)
														result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
														HX_STACK_LINE(376)
														result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
														HX_STACK_LINE(376)
														result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
														HX_STACK_LINE(376)
														result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
														HX_STACK_LINE(376)
														result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
														HX_STACK_LINE(376)
														result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
														HX_STACK_LINE(376)
														result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
														HX_STACK_LINE(376)
														result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
														HX_STACK_LINE(376)
														result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
														HX_STACK_LINE(376)
														result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
														HX_STACK_LINE(376)
														result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
														HX_STACK_LINE(376)
														result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
														HX_STACK_LINE(376)
														result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
														HX_STACK_LINE(376)
														result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
														HX_STACK_LINE(376)
														result;
													}
												}
												HX_STACK_LINE(376)
												{
													HX_STACK_LINE(376)
													::com::gamestudiohx::babylonhx::tools::math::Matrix transformMatrix = mesh->_collisionsTransformMatrix;		HX_STACK_VAR(transformMatrix,"transformMatrix");
													HX_STACK_LINE(376)
													{
														HX_STACK_LINE(376)
														int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
														HX_STACK_LINE(376)
														int _g2 = mesh->subMeshes->length;		HX_STACK_VAR(_g2,"_g2");
														HX_STACK_LINE(376)
														while((true)){
															HX_STACK_LINE(376)
															if ((!(((_g11 < _g2))))){
																HX_STACK_LINE(376)
																break;
															}
															HX_STACK_LINE(376)
															int index1 = (_g11)++;		HX_STACK_VAR(index1,"index1");
															HX_STACK_LINE(376)
															::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = mesh->subMeshes->__get(index1).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
															HX_STACK_LINE(376)
															if (((  (((mesh->subMeshes->length > (int)1))) ? bool(!(subMesh->_boundingInfo->_checkCollision(collider))) : bool(false) ))){
																HX_STACK_LINE(376)
																continue;
															}
															HX_STACK_LINE(376)
															{
																HX_STACK_LINE(376)
																mesh->_generatePointsArray();
																struct _Function_15_1{
																	inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::SubMesh &subMesh,::com::gamestudiohx::babylonhx::tools::math::Matrix &transformMatrix){
																		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",376,0x57a6a279)
																		{
																			HX_STACK_LINE(376)
																			::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = subMesh->_lastColliderTransformMatrix;		HX_STACK_VAR(_this1,"_this1");
																			HX_STACK_LINE(376)
																			return (bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((_this1->m->__get((int)0) == transformMatrix->m->__get((int)0))) && bool((_this1->m->__get((int)1) == transformMatrix->m->__get((int)1))))) && bool((_this1->m->__get((int)2) == transformMatrix->m->__get((int)2))))) && bool((_this1->m->__get((int)3) == transformMatrix->m->__get((int)3))))) && bool((_this1->m->__get((int)4) == transformMatrix->m->__get((int)4))))) && bool((_this1->m->__get((int)5) == transformMatrix->m->__get((int)5))))) && bool((_this1->m->__get((int)6) == transformMatrix->m->__get((int)6))))) && bool((_this1->m->__get((int)7) == transformMatrix->m->__get((int)7))))) && bool((_this1->m->__get((int)8) == transformMatrix->m->__get((int)8))))) && bool((_this1->m->__get((int)9) == transformMatrix->m->__get((int)9))))) && bool((_this1->m->__get((int)10) == transformMatrix->m->__get((int)10))))) && bool((_this1->m->__get((int)11) == transformMatrix->m->__get((int)11))))) && bool((_this1->m->__get((int)12) == transformMatrix->m->__get((int)12))))) && bool((_this1->m->__get((int)13) == transformMatrix->m->__get((int)13))))) && bool((_this1->m->__get((int)14) == transformMatrix->m->__get((int)14))))) && bool((_this1->m->__get((int)15) == transformMatrix->m->__get((int)15))));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(376)
																if (((bool((subMesh->_lastColliderWorldVertices == null())) || bool(!(_Function_15_1::Block(subMesh,transformMatrix)))))){
																	HX_STACK_LINE(376)
																	subMesh->_lastColliderTransformMatrix = transformMatrix;
																	HX_STACK_LINE(376)
																	Array< ::Dynamic > _g19 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g19,"_g19");
																	HX_STACK_LINE(376)
																	subMesh->_lastColliderWorldVertices = _g19;
																	HX_STACK_LINE(376)
																	int start = subMesh->verticesStart;		HX_STACK_VAR(start,"start");
																	HX_STACK_LINE(376)
																	int end = (subMesh->verticesStart + subMesh->verticesCount);		HX_STACK_VAR(end,"end");
																	HX_STACK_LINE(376)
																	{
																		HX_STACK_LINE(376)
																		int _g3 = start;		HX_STACK_VAR(_g3,"_g3");
																		HX_STACK_LINE(376)
																		while((true)){
																			HX_STACK_LINE(376)
																			if ((!(((_g3 < end))))){
																				HX_STACK_LINE(376)
																				break;
																			}
																			HX_STACK_LINE(376)
																			int i = (_g3)++;		HX_STACK_VAR(i,"i");
																			HX_STACK_LINE(376)
																			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g20;		HX_STACK_VAR(_g20,"_g20");
																			HX_STACK_LINE(376)
																			{
																				HX_STACK_LINE(376)
																				::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = mesh->_positions->__get(i).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(vector,"vector");
																				HX_STACK_LINE(376)
																				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
																				HX_STACK_LINE(376)
																				{
																					HX_STACK_LINE(376)
																					Float x = ((((vector->x * transformMatrix->m->__get((int)0)) + (vector->y * transformMatrix->m->__get((int)4))) + (vector->z * transformMatrix->m->__get((int)8))) + transformMatrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
																					HX_STACK_LINE(376)
																					Float y = ((((vector->x * transformMatrix->m->__get((int)1)) + (vector->y * transformMatrix->m->__get((int)5))) + (vector->z * transformMatrix->m->__get((int)9))) + transformMatrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
																					HX_STACK_LINE(376)
																					Float z = ((((vector->x * transformMatrix->m->__get((int)2)) + (vector->y * transformMatrix->m->__get((int)6))) + (vector->z * transformMatrix->m->__get((int)10))) + transformMatrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
																					HX_STACK_LINE(376)
																					Float w = ((((vector->x * transformMatrix->m->__get((int)3)) + (vector->y * transformMatrix->m->__get((int)7))) + (vector->z * transformMatrix->m->__get((int)11))) + transformMatrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
																					HX_STACK_LINE(376)
																					result->x = (Float(x) / Float(w));
																					HX_STACK_LINE(376)
																					result->y = (Float(y) / Float(w));
																					HX_STACK_LINE(376)
																					result->z = (Float(z) / Float(w));
																				}
																				HX_STACK_LINE(376)
																				_g20 = result;
																			}
																			HX_STACK_LINE(376)
																			subMesh->_lastColliderWorldVertices->push(_g20);
																		}
																	}
																}
																HX_STACK_LINE(376)
																{
																	HX_STACK_LINE(376)
																	Array< ::Dynamic > pts = subMesh->_lastColliderWorldVertices;		HX_STACK_VAR(pts,"pts");
																	HX_STACK_LINE(376)
																	Array< int > indices = mesh->getIndices();		HX_STACK_VAR(indices,"indices");
																	HX_STACK_LINE(376)
																	int decal = subMesh->verticesStart;		HX_STACK_VAR(decal,"decal");
																	HX_STACK_LINE(376)
																	int i = subMesh->indexStart;		HX_STACK_VAR(i,"i");
																	HX_STACK_LINE(376)
																	while((true)){
																		HX_STACK_LINE(376)
																		if ((!(((i < (subMesh->indexStart + subMesh->indexCount)))))){
																			HX_STACK_LINE(376)
																			break;
																		}
																		HX_STACK_LINE(376)
																		::com::gamestudiohx::babylonhx::tools::math::Vector3 p1 = pts->__get((indices->__get(i) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p1,"p1");
																		HX_STACK_LINE(376)
																		::com::gamestudiohx::babylonhx::tools::math::Vector3 p2 = pts->__get((indices->__get((i + (int)1)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p2,"p2");
																		HX_STACK_LINE(376)
																		::com::gamestudiohx::babylonhx::tools::math::Vector3 p3 = pts->__get((indices->__get((i + (int)2)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p3,"p3");
																		HX_STACK_LINE(376)
																		collider->_testTriangle(i,subMesh,p3,p2,p1);
																		HX_STACK_LINE(376)
																		hx::AddEq(i,(int)3);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
								HX_STACK_LINE(376)
								if ((!(collider->collisionFound))){
									HX_STACK_LINE(376)
									finalPosition->x = (position1->x + velocity1->x);
									HX_STACK_LINE(376)
									finalPosition->y = (position1->y + velocity1->y);
									HX_STACK_LINE(376)
									finalPosition->z = (position1->z + velocity1->z);
									HX_STACK_LINE(376)
									finalPosition;
								}
								else{
									HX_STACK_LINE(376)
									if (((bool((bool((velocity1->x != (int)0)) || bool((velocity1->y != (int)0)))) || bool((velocity1->z != (int)0))))){
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 result = collider->_destinationPoint;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(376)
											result->x = (position1->x + velocity1->x);
											HX_STACK_LINE(376)
											result->y = (position1->y + velocity1->y);
											HX_STACK_LINE(376)
											result->z = (position1->z + velocity1->z);
											HX_STACK_LINE(376)
											result;
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											Float _g21 = ::Math_obj::sqrt((((velocity1->x * velocity1->x) + (velocity1->y * velocity1->y)) + (velocity1->z * velocity1->z)));		HX_STACK_VAR(_g21,"_g21");
											HX_STACK_LINE(376)
											Float scale = (Float(collider->nearestDistance) / Float(_g21));		HX_STACK_VAR(scale,"scale");
											HX_STACK_LINE(376)
											hx::MultEq(velocity1->x,scale);
											HX_STACK_LINE(376)
											hx::MultEq(velocity1->y,scale);
											HX_STACK_LINE(376)
											hx::MultEq(velocity1->z,scale);
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->basePoint;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(376)
											position1->x = (_this1->x + velocity1->x);
											HX_STACK_LINE(376)
											position1->y = (_this1->y + velocity1->y);
											HX_STACK_LINE(376)
											position1->z = (_this1->z + velocity1->z);
											HX_STACK_LINE(376)
											position1;
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->intersectionPoint;		HX_STACK_VAR(otherVector,"otherVector");
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 result = collider->_slidePlaneNormal;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(376)
											result->x = (position1->x - otherVector->x);
											HX_STACK_LINE(376)
											result->y = (position1->y - otherVector->y);
											HX_STACK_LINE(376)
											result->z = (position1->z - otherVector->z);
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->_slidePlaneNormal;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(376)
											Float len = ::Math_obj::sqrt((((_this1->x * _this1->x) + (_this1->y * _this1->y)) + (_this1->z * _this1->z)));		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(376)
											if (((len != (int)0))){
												HX_STACK_LINE(376)
												Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(376)
												hx::MultEq(_this1->x,num);
												HX_STACK_LINE(376)
												hx::MultEq(_this1->y,num);
												HX_STACK_LINE(376)
												hx::MultEq(_this1->z,num);
											}
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->_slidePlaneNormal;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(376)
											Float scale = collider->epsilon;		HX_STACK_VAR(scale,"scale");
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 result = collider->_displacementVector;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(376)
											result->x = (_this1->x * scale);
											HX_STACK_LINE(376)
											result->y = (_this1->y * scale);
											HX_STACK_LINE(376)
											result->z = (_this1->z * scale);
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->_displacementVector;		HX_STACK_VAR(otherVector,"otherVector");
											HX_STACK_LINE(376)
											hx::AddEq(position1->x,otherVector->x);
											HX_STACK_LINE(376)
											hx::AddEq(position1->y,otherVector->y);
											HX_STACK_LINE(376)
											hx::AddEq(position1->z,otherVector->z);
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->intersectionPoint;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->_displacementVector;		HX_STACK_VAR(otherVector,"otherVector");
											HX_STACK_LINE(376)
											hx::AddEq(_this1->x,otherVector->x);
											HX_STACK_LINE(376)
											hx::AddEq(_this1->y,otherVector->y);
											HX_STACK_LINE(376)
											hx::AddEq(_this1->z,otherVector->z);
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->_slidePlaneNormal;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(376)
											Float scale;		HX_STACK_VAR(scale,"scale");
											HX_STACK_LINE(376)
											{
												HX_STACK_LINE(376)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 origin = collider->intersectionPoint;		HX_STACK_VAR(origin,"origin");
												HX_STACK_LINE(376)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = collider->_slidePlaneNormal;		HX_STACK_VAR(normal,"normal");
												HX_STACK_LINE(376)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 point = collider->_destinationPoint;		HX_STACK_VAR(point,"point");
												HX_STACK_LINE(376)
												Float d = -(((((normal->x * origin->x) + (normal->y * origin->y)) + (normal->z * origin->z))));		HX_STACK_VAR(d,"d");
												HX_STACK_LINE(376)
												scale = ((((point->x * normal->x) + (point->y * normal->y)) + (point->z * normal->z)) + d);
											}
											HX_STACK_LINE(376)
											hx::MultEq(_this1->x,scale);
											HX_STACK_LINE(376)
											hx::MultEq(_this1->y,scale);
											HX_STACK_LINE(376)
											hx::MultEq(_this1->z,scale);
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->_destinationPoint;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->_slidePlaneNormal;		HX_STACK_VAR(otherVector,"otherVector");
											HX_STACK_LINE(376)
											hx::SubEq(_this1->x,otherVector->x);
											HX_STACK_LINE(376)
											hx::SubEq(_this1->y,otherVector->y);
											HX_STACK_LINE(376)
											hx::SubEq(_this1->z,otherVector->z);
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->_destinationPoint;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->intersectionPoint;		HX_STACK_VAR(otherVector,"otherVector");
											HX_STACK_LINE(376)
											velocity1->x = (_this1->x - otherVector->x);
											HX_STACK_LINE(376)
											velocity1->y = (_this1->y - otherVector->y);
											HX_STACK_LINE(376)
											velocity1->z = (_this1->z - otherVector->z);
										}
									}
									HX_STACK_LINE(376)
									Float _g22 = ::Math_obj::sqrt((((velocity1->x * velocity1->x) + (velocity1->y * velocity1->y)) + (velocity1->z * velocity1->z)));		HX_STACK_VAR(_g22,"_g22");
									HX_STACK_LINE(376)
									if (((_g22 <= closeDistance))){
										HX_STACK_LINE(376)
										finalPosition->x = position1->x;
										HX_STACK_LINE(376)
										finalPosition->y = position1->y;
										HX_STACK_LINE(376)
										finalPosition->z = position1->z;
									}
									else{
										HX_STACK_LINE(376)
										(collider->retry)++;
										HX_STACK_LINE(376)
										_this->_collideWithWorld(position1,velocity1,collider,(int)3,finalPosition);
									}
								}
							}
						}
						HX_STACK_LINE(376)
						{
							HX_STACK_LINE(376)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->radius;		HX_STACK_VAR(otherVector,"otherVector");
							HX_STACK_LINE(376)
							hx::MultEq(finalPosition->x,otherVector->x);
							HX_STACK_LINE(376)
							hx::MultEq(finalPosition->y,otherVector->y);
							HX_STACK_LINE(376)
							hx::MultEq(finalPosition->z,otherVector->z);
						}
					}
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_newPosition;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(376)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_oldPosition;		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(376)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_diffPosition;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(376)
						result->x = (_this->x - otherVector->x);
						HX_STACK_LINE(376)
						result->y = (_this->y - otherVector->y);
						HX_STACK_LINE(376)
						result->z = (_this->z - otherVector->z);
					}
					HX_STACK_LINE(376)
					Float _g23;		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_diffPosition;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(376)
						_g23 = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));
					}
					HX_STACK_LINE(376)
					if (((_g23 > ::com::gamestudiohx::babylonhx::Engine_obj::collisionsEpsilon))){
						HX_STACK_LINE(376)
						{
							HX_STACK_LINE(376)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(376)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_diffPosition;		HX_STACK_VAR(otherVector,"otherVector");
							HX_STACK_LINE(376)
							hx::AddEq(_this->x,otherVector->x);
							HX_STACK_LINE(376)
							hx::AddEq(_this->y,otherVector->y);
							HX_STACK_LINE(376)
							hx::AddEq(_this->z,otherVector->z);
						}
						HX_STACK_LINE(376)
						if (((this->onCollide_dyn() != null()))){
							HX_STACK_LINE(376)
							this->onCollide(this->_collider->collidedMesh);
						}
					}
				}
				HX_STACK_LINE(377)
				if ((this->applyGravity)){
					HX_STACK_LINE(378)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 oldPosition = this->position;		HX_STACK_VAR(oldPosition,"oldPosition");
					HX_STACK_LINE(379)
					{
						HX_STACK_LINE(379)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 velocity = this->_scene->gravity;		HX_STACK_VAR(velocity,"velocity");
						HX_STACK_LINE(379)
						{
							HX_STACK_LINE(379)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(379)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_oldPosition;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(379)
							result->x = _this->x;
							HX_STACK_LINE(379)
							result->y = (_this->y - this->ellipsoid->y);
							HX_STACK_LINE(379)
							result->z = _this->z;
						}
						HX_STACK_LINE(379)
						this->_collider->radius = this->ellipsoid;
						HX_STACK_LINE(379)
						{
							HX_STACK_LINE(379)
							::com::gamestudiohx::babylonhx::Scene _this = this->_scene;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(379)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 position = this->_oldPosition;		HX_STACK_VAR(position,"position");
							HX_STACK_LINE(379)
							::com::gamestudiohx::babylonhx::collisions::Collider collider = this->_collider;		HX_STACK_VAR(collider,"collider");
							HX_STACK_LINE(379)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 finalPosition = this->_newPosition;		HX_STACK_VAR(finalPosition,"finalPosition");
							HX_STACK_LINE(379)
							{
								HX_STACK_LINE(379)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->radius;		HX_STACK_VAR(otherVector,"otherVector");
								HX_STACK_LINE(379)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 result = _this->_scaledPosition;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(379)
								result->x = (Float(position->x) / Float(otherVector->x));
								HX_STACK_LINE(379)
								result->y = (Float(position->y) / Float(otherVector->y));
								HX_STACK_LINE(379)
								result->z = (Float(position->z) / Float(otherVector->z));
							}
							HX_STACK_LINE(379)
							{
								HX_STACK_LINE(379)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->radius;		HX_STACK_VAR(otherVector,"otherVector");
								HX_STACK_LINE(379)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 result = _this->_scaledVelocity;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(379)
								result->x = (Float(velocity->x) / Float(otherVector->x));
								HX_STACK_LINE(379)
								result->y = (Float(velocity->y) / Float(otherVector->y));
								HX_STACK_LINE(379)
								result->z = (Float(velocity->z) / Float(otherVector->z));
							}
							HX_STACK_LINE(379)
							collider->retry = (int)0;
							HX_STACK_LINE(379)
							collider->initialVelocity = _this->_scaledVelocity;
							HX_STACK_LINE(379)
							collider->initialPosition = _this->_scaledPosition;
							HX_STACK_LINE(379)
							{
								HX_STACK_LINE(379)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 position1 = _this->_scaledPosition;		HX_STACK_VAR(position1,"position1");
								HX_STACK_LINE(379)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 velocity1 = _this->_scaledVelocity;		HX_STACK_VAR(velocity1,"velocity1");
								HX_STACK_LINE(379)
								Float closeDistance = (::com::gamestudiohx::babylonhx::Engine_obj::collisionsEpsilon * 10.0);		HX_STACK_VAR(closeDistance,"closeDistance");
								HX_STACK_LINE(379)
								if (((collider->retry >= (int)3))){
									HX_STACK_LINE(379)
									finalPosition->x = position1->x;
									HX_STACK_LINE(379)
									finalPosition->y = position1->y;
									HX_STACK_LINE(379)
									finalPosition->z = position1->z;
								}
								else{
									HX_STACK_LINE(379)
									collider->_initialize(position1,velocity1,closeDistance);
									HX_STACK_LINE(379)
									{
										HX_STACK_LINE(379)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(379)
										int _g = _this->meshes->length;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(379)
										while((true)){
											HX_STACK_LINE(379)
											if ((!(((_g1 < _g))))){
												HX_STACK_LINE(379)
												break;
											}
											HX_STACK_LINE(379)
											int index = (_g1)++;		HX_STACK_VAR(index,"index");
											HX_STACK_LINE(379)
											::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh = _this->meshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >();		HX_STACK_VAR(mesh,"mesh");
											HX_STACK_LINE(379)
											if (((  ((mesh->isEnabled())) ? bool(mesh->checkCollisions) : bool(false) ))){
												HX_STACK_LINE(379)
												if ((mesh->_boundingInfo->_checkCollision(collider))){
													HX_STACK_LINE(379)
													{
														HX_STACK_LINE(379)
														::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_collisionsScalingMatrix;		HX_STACK_VAR(result,"result");
														HX_STACK_LINE(379)
														result->m[(int)0] = (Float(1.0) / Float(collider->radius->x));
														HX_STACK_LINE(379)
														result->m[(int)1] = (int)0;
														HX_STACK_LINE(379)
														result->m[(int)2] = (int)0;
														HX_STACK_LINE(379)
														result->m[(int)3] = (int)0;
														HX_STACK_LINE(379)
														result->m[(int)4] = (int)0;
														HX_STACK_LINE(379)
														result->m[(int)5] = (Float(1.0) / Float(collider->radius->y));
														HX_STACK_LINE(379)
														result->m[(int)6] = (int)0;
														HX_STACK_LINE(379)
														result->m[(int)7] = (int)0;
														HX_STACK_LINE(379)
														result->m[(int)8] = (int)0;
														HX_STACK_LINE(379)
														result->m[(int)9] = (int)0;
														HX_STACK_LINE(379)
														result->m[(int)10] = (Float(1.0) / Float(collider->radius->z));
														HX_STACK_LINE(379)
														result->m[(int)11] = (int)0;
														HX_STACK_LINE(379)
														result->m[(int)12] = (int)0;
														HX_STACK_LINE(379)
														result->m[(int)13] = (int)0;
														HX_STACK_LINE(379)
														result->m[(int)14] = (int)0;
														HX_STACK_LINE(379)
														result->m[(int)15] = 1.0;
														HX_STACK_LINE(379)
														result;
													}
													HX_STACK_LINE(379)
													{
														HX_STACK_LINE(379)
														::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = mesh->_worldMatrix;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(379)
														::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_collisionsScalingMatrix;		HX_STACK_VAR(other,"other");
														HX_STACK_LINE(379)
														{
															HX_STACK_LINE(379)
															Array< Float > result = mesh->_collisionsTransformMatrix->m;		HX_STACK_VAR(result,"result");
															HX_STACK_LINE(379)
															Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
															HX_STACK_LINE(379)
															Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
															HX_STACK_LINE(379)
															Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
															HX_STACK_LINE(379)
															Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
															HX_STACK_LINE(379)
															Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
															HX_STACK_LINE(379)
															Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
															HX_STACK_LINE(379)
															Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
															HX_STACK_LINE(379)
															Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
															HX_STACK_LINE(379)
															Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
															HX_STACK_LINE(379)
															Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
															HX_STACK_LINE(379)
															Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
															HX_STACK_LINE(379)
															Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
															HX_STACK_LINE(379)
															Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
															HX_STACK_LINE(379)
															Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
															HX_STACK_LINE(379)
															Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
															HX_STACK_LINE(379)
															Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
															HX_STACK_LINE(379)
															Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
															HX_STACK_LINE(379)
															Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
															HX_STACK_LINE(379)
															Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
															HX_STACK_LINE(379)
															Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
															HX_STACK_LINE(379)
															Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
															HX_STACK_LINE(379)
															Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
															HX_STACK_LINE(379)
															Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
															HX_STACK_LINE(379)
															Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
															HX_STACK_LINE(379)
															Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
															HX_STACK_LINE(379)
															Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
															HX_STACK_LINE(379)
															Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
															HX_STACK_LINE(379)
															Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
															HX_STACK_LINE(379)
															Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
															HX_STACK_LINE(379)
															Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
															HX_STACK_LINE(379)
															Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
															HX_STACK_LINE(379)
															Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
															HX_STACK_LINE(379)
															result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
															HX_STACK_LINE(379)
															result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
															HX_STACK_LINE(379)
															result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
															HX_STACK_LINE(379)
															result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
															HX_STACK_LINE(379)
															result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
															HX_STACK_LINE(379)
															result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
															HX_STACK_LINE(379)
															result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
															HX_STACK_LINE(379)
															result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
															HX_STACK_LINE(379)
															result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
															HX_STACK_LINE(379)
															result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
															HX_STACK_LINE(379)
															result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
															HX_STACK_LINE(379)
															result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
															HX_STACK_LINE(379)
															result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
															HX_STACK_LINE(379)
															result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
															HX_STACK_LINE(379)
															result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
															HX_STACK_LINE(379)
															result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
															HX_STACK_LINE(379)
															result;
														}
													}
													HX_STACK_LINE(379)
													{
														HX_STACK_LINE(379)
														::com::gamestudiohx::babylonhx::tools::math::Matrix transformMatrix = mesh->_collisionsTransformMatrix;		HX_STACK_VAR(transformMatrix,"transformMatrix");
														HX_STACK_LINE(379)
														{
															HX_STACK_LINE(379)
															int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
															HX_STACK_LINE(379)
															int _g2 = mesh->subMeshes->length;		HX_STACK_VAR(_g2,"_g2");
															HX_STACK_LINE(379)
															while((true)){
																HX_STACK_LINE(379)
																if ((!(((_g11 < _g2))))){
																	HX_STACK_LINE(379)
																	break;
																}
																HX_STACK_LINE(379)
																int index1 = (_g11)++;		HX_STACK_VAR(index1,"index1");
																HX_STACK_LINE(379)
																::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = mesh->subMeshes->__get(index1).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
																HX_STACK_LINE(379)
																if (((  (((mesh->subMeshes->length > (int)1))) ? bool(!(subMesh->_boundingInfo->_checkCollision(collider))) : bool(false) ))){
																	HX_STACK_LINE(379)
																	continue;
																}
																HX_STACK_LINE(379)
																{
																	HX_STACK_LINE(379)
																	mesh->_generatePointsArray();
																	struct _Function_16_1{
																		inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::SubMesh &subMesh,::com::gamestudiohx::babylonhx::tools::math::Matrix &transformMatrix){
																			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",379,0x57a6a279)
																			{
																				HX_STACK_LINE(379)
																				::com::gamestudiohx::babylonhx::tools::math::Matrix _this1 = subMesh->_lastColliderTransformMatrix;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(379)
																				return (bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((_this1->m->__get((int)0) == transformMatrix->m->__get((int)0))) && bool((_this1->m->__get((int)1) == transformMatrix->m->__get((int)1))))) && bool((_this1->m->__get((int)2) == transformMatrix->m->__get((int)2))))) && bool((_this1->m->__get((int)3) == transformMatrix->m->__get((int)3))))) && bool((_this1->m->__get((int)4) == transformMatrix->m->__get((int)4))))) && bool((_this1->m->__get((int)5) == transformMatrix->m->__get((int)5))))) && bool((_this1->m->__get((int)6) == transformMatrix->m->__get((int)6))))) && bool((_this1->m->__get((int)7) == transformMatrix->m->__get((int)7))))) && bool((_this1->m->__get((int)8) == transformMatrix->m->__get((int)8))))) && bool((_this1->m->__get((int)9) == transformMatrix->m->__get((int)9))))) && bool((_this1->m->__get((int)10) == transformMatrix->m->__get((int)10))))) && bool((_this1->m->__get((int)11) == transformMatrix->m->__get((int)11))))) && bool((_this1->m->__get((int)12) == transformMatrix->m->__get((int)12))))) && bool((_this1->m->__get((int)13) == transformMatrix->m->__get((int)13))))) && bool((_this1->m->__get((int)14) == transformMatrix->m->__get((int)14))))) && bool((_this1->m->__get((int)15) == transformMatrix->m->__get((int)15))));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(379)
																	if (((bool((subMesh->_lastColliderWorldVertices == null())) || bool(!(_Function_16_1::Block(subMesh,transformMatrix)))))){
																		HX_STACK_LINE(379)
																		subMesh->_lastColliderTransformMatrix = transformMatrix;
																		HX_STACK_LINE(379)
																		Array< ::Dynamic > _g24 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g24,"_g24");
																		HX_STACK_LINE(379)
																		subMesh->_lastColliderWorldVertices = _g24;
																		HX_STACK_LINE(379)
																		int start = subMesh->verticesStart;		HX_STACK_VAR(start,"start");
																		HX_STACK_LINE(379)
																		int end = (subMesh->verticesStart + subMesh->verticesCount);		HX_STACK_VAR(end,"end");
																		HX_STACK_LINE(379)
																		{
																			HX_STACK_LINE(379)
																			int _g3 = start;		HX_STACK_VAR(_g3,"_g3");
																			HX_STACK_LINE(379)
																			while((true)){
																				HX_STACK_LINE(379)
																				if ((!(((_g3 < end))))){
																					HX_STACK_LINE(379)
																					break;
																				}
																				HX_STACK_LINE(379)
																				int i = (_g3)++;		HX_STACK_VAR(i,"i");
																				HX_STACK_LINE(379)
																				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g25;		HX_STACK_VAR(_g25,"_g25");
																				HX_STACK_LINE(379)
																				{
																					HX_STACK_LINE(379)
																					::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = mesh->_positions->__get(i).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(vector,"vector");
																					HX_STACK_LINE(379)
																					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
																					HX_STACK_LINE(379)
																					{
																						HX_STACK_LINE(379)
																						Float x = ((((vector->x * transformMatrix->m->__get((int)0)) + (vector->y * transformMatrix->m->__get((int)4))) + (vector->z * transformMatrix->m->__get((int)8))) + transformMatrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
																						HX_STACK_LINE(379)
																						Float y = ((((vector->x * transformMatrix->m->__get((int)1)) + (vector->y * transformMatrix->m->__get((int)5))) + (vector->z * transformMatrix->m->__get((int)9))) + transformMatrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
																						HX_STACK_LINE(379)
																						Float z = ((((vector->x * transformMatrix->m->__get((int)2)) + (vector->y * transformMatrix->m->__get((int)6))) + (vector->z * transformMatrix->m->__get((int)10))) + transformMatrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
																						HX_STACK_LINE(379)
																						Float w = ((((vector->x * transformMatrix->m->__get((int)3)) + (vector->y * transformMatrix->m->__get((int)7))) + (vector->z * transformMatrix->m->__get((int)11))) + transformMatrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
																						HX_STACK_LINE(379)
																						result->x = (Float(x) / Float(w));
																						HX_STACK_LINE(379)
																						result->y = (Float(y) / Float(w));
																						HX_STACK_LINE(379)
																						result->z = (Float(z) / Float(w));
																					}
																					HX_STACK_LINE(379)
																					_g25 = result;
																				}
																				HX_STACK_LINE(379)
																				subMesh->_lastColliderWorldVertices->push(_g25);
																			}
																		}
																	}
																	HX_STACK_LINE(379)
																	{
																		HX_STACK_LINE(379)
																		Array< ::Dynamic > pts = subMesh->_lastColliderWorldVertices;		HX_STACK_VAR(pts,"pts");
																		HX_STACK_LINE(379)
																		Array< int > indices = mesh->getIndices();		HX_STACK_VAR(indices,"indices");
																		HX_STACK_LINE(379)
																		int decal = subMesh->verticesStart;		HX_STACK_VAR(decal,"decal");
																		HX_STACK_LINE(379)
																		int i = subMesh->indexStart;		HX_STACK_VAR(i,"i");
																		HX_STACK_LINE(379)
																		while((true)){
																			HX_STACK_LINE(379)
																			if ((!(((i < (subMesh->indexStart + subMesh->indexCount)))))){
																				HX_STACK_LINE(379)
																				break;
																			}
																			HX_STACK_LINE(379)
																			::com::gamestudiohx::babylonhx::tools::math::Vector3 p1 = pts->__get((indices->__get(i) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p1,"p1");
																			HX_STACK_LINE(379)
																			::com::gamestudiohx::babylonhx::tools::math::Vector3 p2 = pts->__get((indices->__get((i + (int)1)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p2,"p2");
																			HX_STACK_LINE(379)
																			::com::gamestudiohx::babylonhx::tools::math::Vector3 p3 = pts->__get((indices->__get((i + (int)2)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p3,"p3");
																			HX_STACK_LINE(379)
																			collider->_testTriangle(i,subMesh,p3,p2,p1);
																			HX_STACK_LINE(379)
																			hx::AddEq(i,(int)3);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(379)
									if ((!(collider->collisionFound))){
										HX_STACK_LINE(379)
										finalPosition->x = (position1->x + velocity1->x);
										HX_STACK_LINE(379)
										finalPosition->y = (position1->y + velocity1->y);
										HX_STACK_LINE(379)
										finalPosition->z = (position1->z + velocity1->z);
										HX_STACK_LINE(379)
										finalPosition;
									}
									else{
										HX_STACK_LINE(379)
										if (((bool((bool((velocity1->x != (int)0)) || bool((velocity1->y != (int)0)))) || bool((velocity1->z != (int)0))))){
											HX_STACK_LINE(379)
											{
												HX_STACK_LINE(379)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 result = collider->_destinationPoint;		HX_STACK_VAR(result,"result");
												HX_STACK_LINE(379)
												result->x = (position1->x + velocity1->x);
												HX_STACK_LINE(379)
												result->y = (position1->y + velocity1->y);
												HX_STACK_LINE(379)
												result->z = (position1->z + velocity1->z);
												HX_STACK_LINE(379)
												result;
											}
											HX_STACK_LINE(379)
											{
												HX_STACK_LINE(379)
												Float _g26 = ::Math_obj::sqrt((((velocity1->x * velocity1->x) + (velocity1->y * velocity1->y)) + (velocity1->z * velocity1->z)));		HX_STACK_VAR(_g26,"_g26");
												HX_STACK_LINE(379)
												Float scale = (Float(collider->nearestDistance) / Float(_g26));		HX_STACK_VAR(scale,"scale");
												HX_STACK_LINE(379)
												hx::MultEq(velocity1->x,scale);
												HX_STACK_LINE(379)
												hx::MultEq(velocity1->y,scale);
												HX_STACK_LINE(379)
												hx::MultEq(velocity1->z,scale);
											}
											HX_STACK_LINE(379)
											{
												HX_STACK_LINE(379)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->basePoint;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(379)
												position1->x = (_this1->x + velocity1->x);
												HX_STACK_LINE(379)
												position1->y = (_this1->y + velocity1->y);
												HX_STACK_LINE(379)
												position1->z = (_this1->z + velocity1->z);
												HX_STACK_LINE(379)
												position1;
											}
											HX_STACK_LINE(379)
											{
												HX_STACK_LINE(379)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->intersectionPoint;		HX_STACK_VAR(otherVector,"otherVector");
												HX_STACK_LINE(379)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 result = collider->_slidePlaneNormal;		HX_STACK_VAR(result,"result");
												HX_STACK_LINE(379)
												result->x = (position1->x - otherVector->x);
												HX_STACK_LINE(379)
												result->y = (position1->y - otherVector->y);
												HX_STACK_LINE(379)
												result->z = (position1->z - otherVector->z);
											}
											HX_STACK_LINE(379)
											{
												HX_STACK_LINE(379)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->_slidePlaneNormal;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(379)
												Float len = ::Math_obj::sqrt((((_this1->x * _this1->x) + (_this1->y * _this1->y)) + (_this1->z * _this1->z)));		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(379)
												if (((len != (int)0))){
													HX_STACK_LINE(379)
													Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
													HX_STACK_LINE(379)
													hx::MultEq(_this1->x,num);
													HX_STACK_LINE(379)
													hx::MultEq(_this1->y,num);
													HX_STACK_LINE(379)
													hx::MultEq(_this1->z,num);
												}
											}
											HX_STACK_LINE(379)
											{
												HX_STACK_LINE(379)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->_slidePlaneNormal;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(379)
												Float scale = collider->epsilon;		HX_STACK_VAR(scale,"scale");
												HX_STACK_LINE(379)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 result = collider->_displacementVector;		HX_STACK_VAR(result,"result");
												HX_STACK_LINE(379)
												result->x = (_this1->x * scale);
												HX_STACK_LINE(379)
												result->y = (_this1->y * scale);
												HX_STACK_LINE(379)
												result->z = (_this1->z * scale);
											}
											HX_STACK_LINE(379)
											{
												HX_STACK_LINE(379)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->_displacementVector;		HX_STACK_VAR(otherVector,"otherVector");
												HX_STACK_LINE(379)
												hx::AddEq(position1->x,otherVector->x);
												HX_STACK_LINE(379)
												hx::AddEq(position1->y,otherVector->y);
												HX_STACK_LINE(379)
												hx::AddEq(position1->z,otherVector->z);
											}
											HX_STACK_LINE(379)
											{
												HX_STACK_LINE(379)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->intersectionPoint;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(379)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->_displacementVector;		HX_STACK_VAR(otherVector,"otherVector");
												HX_STACK_LINE(379)
												hx::AddEq(_this1->x,otherVector->x);
												HX_STACK_LINE(379)
												hx::AddEq(_this1->y,otherVector->y);
												HX_STACK_LINE(379)
												hx::AddEq(_this1->z,otherVector->z);
											}
											HX_STACK_LINE(379)
											{
												HX_STACK_LINE(379)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->_slidePlaneNormal;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(379)
												Float scale;		HX_STACK_VAR(scale,"scale");
												HX_STACK_LINE(379)
												{
													HX_STACK_LINE(379)
													::com::gamestudiohx::babylonhx::tools::math::Vector3 origin = collider->intersectionPoint;		HX_STACK_VAR(origin,"origin");
													HX_STACK_LINE(379)
													::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = collider->_slidePlaneNormal;		HX_STACK_VAR(normal,"normal");
													HX_STACK_LINE(379)
													::com::gamestudiohx::babylonhx::tools::math::Vector3 point = collider->_destinationPoint;		HX_STACK_VAR(point,"point");
													HX_STACK_LINE(379)
													Float d = -(((((normal->x * origin->x) + (normal->y * origin->y)) + (normal->z * origin->z))));		HX_STACK_VAR(d,"d");
													HX_STACK_LINE(379)
													scale = ((((point->x * normal->x) + (point->y * normal->y)) + (point->z * normal->z)) + d);
												}
												HX_STACK_LINE(379)
												hx::MultEq(_this1->x,scale);
												HX_STACK_LINE(379)
												hx::MultEq(_this1->y,scale);
												HX_STACK_LINE(379)
												hx::MultEq(_this1->z,scale);
											}
											HX_STACK_LINE(379)
											{
												HX_STACK_LINE(379)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->_destinationPoint;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(379)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->_slidePlaneNormal;		HX_STACK_VAR(otherVector,"otherVector");
												HX_STACK_LINE(379)
												hx::SubEq(_this1->x,otherVector->x);
												HX_STACK_LINE(379)
												hx::SubEq(_this1->y,otherVector->y);
												HX_STACK_LINE(379)
												hx::SubEq(_this1->z,otherVector->z);
											}
											HX_STACK_LINE(379)
											{
												HX_STACK_LINE(379)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = collider->_destinationPoint;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(379)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->intersectionPoint;		HX_STACK_VAR(otherVector,"otherVector");
												HX_STACK_LINE(379)
												velocity1->x = (_this1->x - otherVector->x);
												HX_STACK_LINE(379)
												velocity1->y = (_this1->y - otherVector->y);
												HX_STACK_LINE(379)
												velocity1->z = (_this1->z - otherVector->z);
											}
										}
										HX_STACK_LINE(379)
										Float _g27 = ::Math_obj::sqrt((((velocity1->x * velocity1->x) + (velocity1->y * velocity1->y)) + (velocity1->z * velocity1->z)));		HX_STACK_VAR(_g27,"_g27");
										HX_STACK_LINE(379)
										if (((_g27 <= closeDistance))){
											HX_STACK_LINE(379)
											finalPosition->x = position1->x;
											HX_STACK_LINE(379)
											finalPosition->y = position1->y;
											HX_STACK_LINE(379)
											finalPosition->z = position1->z;
										}
										else{
											HX_STACK_LINE(379)
											(collider->retry)++;
											HX_STACK_LINE(379)
											_this->_collideWithWorld(position1,velocity1,collider,(int)3,finalPosition);
										}
									}
								}
							}
							HX_STACK_LINE(379)
							{
								HX_STACK_LINE(379)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = collider->radius;		HX_STACK_VAR(otherVector,"otherVector");
								HX_STACK_LINE(379)
								hx::MultEq(finalPosition->x,otherVector->x);
								HX_STACK_LINE(379)
								hx::MultEq(finalPosition->y,otherVector->y);
								HX_STACK_LINE(379)
								hx::MultEq(finalPosition->z,otherVector->z);
							}
						}
						HX_STACK_LINE(379)
						{
							HX_STACK_LINE(379)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_newPosition;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(379)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_oldPosition;		HX_STACK_VAR(otherVector,"otherVector");
							HX_STACK_LINE(379)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_diffPosition;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(379)
							result->x = (_this->x - otherVector->x);
							HX_STACK_LINE(379)
							result->y = (_this->y - otherVector->y);
							HX_STACK_LINE(379)
							result->z = (_this->z - otherVector->z);
						}
						HX_STACK_LINE(379)
						Float _g28;		HX_STACK_VAR(_g28,"_g28");
						HX_STACK_LINE(379)
						{
							HX_STACK_LINE(379)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_diffPosition;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(379)
							_g28 = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));
						}
						HX_STACK_LINE(379)
						if (((_g28 > ::com::gamestudiohx::babylonhx::Engine_obj::collisionsEpsilon))){
							HX_STACK_LINE(379)
							{
								HX_STACK_LINE(379)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(379)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_diffPosition;		HX_STACK_VAR(otherVector,"otherVector");
								HX_STACK_LINE(379)
								hx::AddEq(_this->x,otherVector->x);
								HX_STACK_LINE(379)
								hx::AddEq(_this->y,otherVector->y);
								HX_STACK_LINE(379)
								hx::AddEq(_this->z,otherVector->z);
							}
							HX_STACK_LINE(379)
							if (((this->onCollide_dyn() != null()))){
								HX_STACK_LINE(379)
								this->onCollide(this->_collider->collidedMesh);
							}
						}
					}
					struct _Function_4_1{
						inline static Float Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::cameras::FreeCamera_obj > __this,::com::gamestudiohx::babylonhx::tools::math::Vector3 &oldPosition){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",380,0x57a6a279)
							{
								HX_STACK_LINE(380)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 value2 = __this->position;		HX_STACK_VAR(value2,"value2");
								HX_STACK_LINE(380)
								Float x = (oldPosition->x - value2->x);		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(380)
								Float y = (oldPosition->y - value2->y);		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(380)
								Float z = (oldPosition->z - value2->z);		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(380)
								return (((x * x) + (y * y)) + (z * z));
							}
							return null();
						}
					};
					HX_STACK_LINE(380)
					this->_needMoveForGravity = (_Function_4_1::Block(this,oldPosition) != (int)0);
				}
			}
			else{
				HX_STACK_LINE(383)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(383)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->cameraDirection;		HX_STACK_VAR(otherVector,"otherVector");
				HX_STACK_LINE(383)
				hx::AddEq(_this->x,otherVector->x);
				HX_STACK_LINE(383)
				hx::AddEq(_this->y,otherVector->y);
				HX_STACK_LINE(383)
				hx::AddEq(_this->z,otherVector->z);
			}
		}
		HX_STACK_LINE(388)
		if ((needToRotate)){
			HX_STACK_LINE(389)
			hx::AddEq(this->rotation->x,this->cameraRotation->x);
			HX_STACK_LINE(390)
			hx::AddEq(this->rotation->y,this->cameraRotation->y);
			HX_STACK_LINE(392)
			if ((!(this->noRotationConstraint))){
				HX_STACK_LINE(393)
				Float limit = ((Float(::Math_obj::PI) / Float((int)2)) * 0.95);		HX_STACK_VAR(limit,"limit");
				HX_STACK_LINE(395)
				if (((this->rotation->x > limit))){
					HX_STACK_LINE(396)
					this->rotation->x = limit;
				}
				HX_STACK_LINE(397)
				if (((this->rotation->x < -(limit)))){
					HX_STACK_LINE(398)
					this->rotation->x = -(limit);
				}
			}
		}
		HX_STACK_LINE(403)
		if ((needToMove)){
			HX_STACK_LINE(404)
			Float _g29 = ::Math_obj::abs(this->cameraDirection->x);		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(404)
			if (((_g29 < ::com::gamestudiohx::babylonhx::Engine_obj::epsilon))){
				HX_STACK_LINE(405)
				this->cameraDirection->x = (int)0;
			}
			HX_STACK_LINE(407)
			Float _g30 = ::Math_obj::abs(this->cameraDirection->y);		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(407)
			if (((_g30 < ::com::gamestudiohx::babylonhx::Engine_obj::epsilon))){
				HX_STACK_LINE(408)
				this->cameraDirection->y = (int)0;
			}
			HX_STACK_LINE(410)
			Float _g31 = ::Math_obj::abs(this->cameraDirection->z);		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(410)
			if (((_g31 < ::com::gamestudiohx::babylonhx::Engine_obj::epsilon))){
				HX_STACK_LINE(411)
				this->cameraDirection->z = (int)0;
			}
			HX_STACK_LINE(413)
			{
				HX_STACK_LINE(413)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->cameraDirection;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(413)
				Float scale = this->inertia;		HX_STACK_VAR(scale,"scale");
				HX_STACK_LINE(413)
				hx::MultEq(_this->x,scale);
				HX_STACK_LINE(413)
				hx::MultEq(_this->y,scale);
				HX_STACK_LINE(413)
				hx::MultEq(_this->z,scale);
			}
		}
		HX_STACK_LINE(415)
		if ((needToRotate)){
			HX_STACK_LINE(416)
			Float _g32 = ::Math_obj::abs(this->cameraRotation->x);		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(416)
			if (((_g32 < ::com::gamestudiohx::babylonhx::Engine_obj::epsilon))){
				HX_STACK_LINE(417)
				this->cameraRotation->x = (int)0;
			}
			HX_STACK_LINE(419)
			Float _g33 = ::Math_obj::abs(this->cameraRotation->y);		HX_STACK_VAR(_g33,"_g33");
			HX_STACK_LINE(419)
			if (((_g33 < ::com::gamestudiohx::babylonhx::Engine_obj::epsilon))){
				HX_STACK_LINE(420)
				this->cameraRotation->y = (int)0;
			}
			HX_STACK_LINE(422)
			{
				HX_STACK_LINE(422)
				::com::gamestudiohx::babylonhx::tools::math::Vector2 _this = this->cameraRotation;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(422)
				Float scale = this->inertia;		HX_STACK_VAR(scale,"scale");
				HX_STACK_LINE(422)
				hx::MultEq(_this->x,scale);
				HX_STACK_LINE(422)
				hx::MultEq(_this->y,scale);
			}
		}
	}
return null();
}


::com::gamestudiohx::babylonhx::tools::math::Matrix FreeCamera_obj::_getViewMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.FreeCamera","_getViewMatrix",0x48445888,"com.gamestudiohx.babylonhx.cameras.FreeCamera._getViewMatrix","com/gamestudiohx/babylonhx/cameras/FreeCamera.hx",426,0x57a6a279)
	HX_STACK_THIS(this)
	HX_STACK_LINE(427)
	{
		HX_STACK_LINE(427)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_referencePoint;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(427)
		result->x = (int)0;
		HX_STACK_LINE(427)
		result->y = (int)0;
		HX_STACK_LINE(427)
		result->z = (int)1;
	}
	HX_STACK_LINE(429)
	if (((this->lockedTarget == null()))){
		HX_STACK_LINE(431)
		if (((bool((bool((this->upVector->x != (int)0)) || bool((this->upVector->y != 1.0)))) || bool((this->upVector->z != (int)0))))){
			HX_STACK_LINE(432)
			{
				HX_STACK_LINE(432)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 eye = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(eye,"eye");
				HX_STACK_LINE(432)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 target = this->_referencePoint;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(432)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 up = this->upVector;		HX_STACK_VAR(up,"up");
				HX_STACK_LINE(432)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_lookAtTemp;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(432)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
				HX_STACK_LINE(432)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
				HX_STACK_LINE(432)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					zAxis->x = (target->x - eye->x);
					HX_STACK_LINE(432)
					zAxis->y = (target->y - eye->y);
					HX_STACK_LINE(432)
					zAxis->z = (target->z - eye->z);
				}
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(432)
					if (((len != (int)0))){
						HX_STACK_LINE(432)
						Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
						HX_STACK_LINE(432)
						hx::MultEq(zAxis->x,num);
						HX_STACK_LINE(432)
						hx::MultEq(zAxis->y,num);
						HX_STACK_LINE(432)
						hx::MultEq(zAxis->z,num);
					}
				}
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
					HX_STACK_LINE(432)
					xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
					HX_STACK_LINE(432)
					xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
				}
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(432)
					if (((len != (int)0))){
						HX_STACK_LINE(432)
						Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
						HX_STACK_LINE(432)
						hx::MultEq(xAxis->x,num);
						HX_STACK_LINE(432)
						hx::MultEq(xAxis->y,num);
						HX_STACK_LINE(432)
						hx::MultEq(xAxis->z,num);
					}
				}
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
					HX_STACK_LINE(432)
					yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
					HX_STACK_LINE(432)
					yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
				}
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(432)
					if (((len != (int)0))){
						HX_STACK_LINE(432)
						Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
						HX_STACK_LINE(432)
						hx::MultEq(yAxis->x,num);
						HX_STACK_LINE(432)
						hx::MultEq(yAxis->y,num);
						HX_STACK_LINE(432)
						hx::MultEq(yAxis->z,num);
					}
				}
				HX_STACK_LINE(432)
				Float ex = -(((((xAxis->x * eye->x) + (xAxis->y * eye->y)) + (xAxis->z * eye->z))));		HX_STACK_VAR(ex,"ex");
				HX_STACK_LINE(432)
				Float ey = -(((((yAxis->x * eye->x) + (yAxis->y * eye->y)) + (yAxis->z * eye->z))));		HX_STACK_VAR(ey,"ey");
				HX_STACK_LINE(432)
				Float ez = -(((((zAxis->x * eye->x) + (zAxis->y * eye->y)) + (zAxis->z * eye->z))));		HX_STACK_VAR(ez,"ez");
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					result->m[(int)0] = xAxis->x;
					HX_STACK_LINE(432)
					result->m[(int)1] = yAxis->x;
					HX_STACK_LINE(432)
					result->m[(int)2] = zAxis->x;
					HX_STACK_LINE(432)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(432)
					result->m[(int)4] = xAxis->y;
					HX_STACK_LINE(432)
					result->m[(int)5] = yAxis->y;
					HX_STACK_LINE(432)
					result->m[(int)6] = zAxis->y;
					HX_STACK_LINE(432)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(432)
					result->m[(int)8] = xAxis->z;
					HX_STACK_LINE(432)
					result->m[(int)9] = yAxis->z;
					HX_STACK_LINE(432)
					result->m[(int)10] = zAxis->z;
					HX_STACK_LINE(432)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(432)
					result->m[(int)12] = ex;
					HX_STACK_LINE(432)
					result->m[(int)13] = ey;
					HX_STACK_LINE(432)
					result->m[(int)14] = ez;
					HX_STACK_LINE(432)
					result->m[(int)15] = (int)1;
					HX_STACK_LINE(432)
					result;
				}
			}
			HX_STACK_LINE(433)
			{
				HX_STACK_LINE(433)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_cameraRotationMatrix;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(433)
				::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
				HX_STACK_LINE(433)
				::com::gamestudiohx::babylonhx::tools::math::Quaternion _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(433)
				{
					HX_STACK_LINE(433)
					Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
					HX_STACK_LINE(433)
					Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
					HX_STACK_LINE(433)
					Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
					HX_STACK_LINE(433)
					Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
					HX_STACK_LINE(433)
					Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
					HX_STACK_LINE(433)
					Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
					HX_STACK_LINE(433)
					Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
					HX_STACK_LINE(433)
					Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
					HX_STACK_LINE(433)
					Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
					HX_STACK_LINE(433)
					tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
					HX_STACK_LINE(433)
					tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
					HX_STACK_LINE(433)
					tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
					HX_STACK_LINE(433)
					tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
					HX_STACK_LINE(433)
					_g = tempQuaternion;
				}
				HX_STACK_LINE(433)
				tempQuaternion = _g;
				HX_STACK_LINE(433)
				{
					HX_STACK_LINE(433)
					Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(433)
					Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(433)
					Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
					HX_STACK_LINE(433)
					Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
					HX_STACK_LINE(433)
					Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
					HX_STACK_LINE(433)
					Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
					HX_STACK_LINE(433)
					Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
					HX_STACK_LINE(433)
					Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
					HX_STACK_LINE(433)
					Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
					HX_STACK_LINE(433)
					result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
					HX_STACK_LINE(433)
					result->m[(int)1] = (2.0 * ((xy + zw)));
					HX_STACK_LINE(433)
					result->m[(int)2] = (2.0 * ((zx - yw)));
					HX_STACK_LINE(433)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(433)
					result->m[(int)4] = (2.0 * ((xy - zw)));
					HX_STACK_LINE(433)
					result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
					HX_STACK_LINE(433)
					result->m[(int)6] = (2.0 * ((yz + xw)));
					HX_STACK_LINE(433)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(433)
					result->m[(int)8] = (2.0 * ((zx + yw)));
					HX_STACK_LINE(433)
					result->m[(int)9] = (2.0 * ((yz - xw)));
					HX_STACK_LINE(433)
					result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
					HX_STACK_LINE(433)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(433)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(433)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(433)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(433)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(433)
					result;
				}
			}
			HX_STACK_LINE(435)
			{
				HX_STACK_LINE(435)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_lookAtTemp;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(435)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_cameraRotationMatrix;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(435)
				{
					HX_STACK_LINE(435)
					Array< Float > result = this->_tempMatrix->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(435)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(435)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(435)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(435)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(435)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(435)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(435)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(435)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(435)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(435)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(435)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(435)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(435)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(435)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(435)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(435)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(435)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(435)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(435)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(435)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(435)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(435)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(435)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(435)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(435)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(435)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(435)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(435)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(435)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(435)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(435)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(435)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(435)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(435)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(435)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(435)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(435)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(435)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(435)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(435)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(435)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(435)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(435)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(435)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(435)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(435)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(435)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(435)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(435)
					result;
				}
			}
			HX_STACK_LINE(436)
			{
				HX_STACK_LINE(436)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_lookAtTemp;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(436)
				{
					HX_STACK_LINE(436)
					Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
					HX_STACK_LINE(436)
					Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
					HX_STACK_LINE(436)
					Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
					HX_STACK_LINE(436)
					Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
					HX_STACK_LINE(436)
					Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
					HX_STACK_LINE(436)
					Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
					HX_STACK_LINE(436)
					Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
					HX_STACK_LINE(436)
					Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
					HX_STACK_LINE(436)
					Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
					HX_STACK_LINE(436)
					Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
					HX_STACK_LINE(436)
					Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
					HX_STACK_LINE(436)
					Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
					HX_STACK_LINE(436)
					Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
					HX_STACK_LINE(436)
					Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
					HX_STACK_LINE(436)
					Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
					HX_STACK_LINE(436)
					Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
					HX_STACK_LINE(436)
					Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
					HX_STACK_LINE(436)
					Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
					HX_STACK_LINE(436)
					Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
					HX_STACK_LINE(436)
					Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
					HX_STACK_LINE(436)
					Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
					HX_STACK_LINE(436)
					Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
					HX_STACK_LINE(436)
					Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
					HX_STACK_LINE(436)
					Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
					HX_STACK_LINE(436)
					Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
					HX_STACK_LINE(436)
					Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
					HX_STACK_LINE(436)
					Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
					HX_STACK_LINE(436)
					Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
					HX_STACK_LINE(436)
					Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
					HX_STACK_LINE(436)
					Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
					HX_STACK_LINE(436)
					Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
					HX_STACK_LINE(436)
					Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
					HX_STACK_LINE(436)
					Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
					HX_STACK_LINE(436)
					Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
					HX_STACK_LINE(436)
					Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
					HX_STACK_LINE(436)
					Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
					HX_STACK_LINE(436)
					Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
					HX_STACK_LINE(436)
					Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
					HX_STACK_LINE(436)
					Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
					HX_STACK_LINE(436)
					_this->m[(int)0] = (l23 * l27);
					HX_STACK_LINE(436)
					_this->m[(int)4] = (l24 * l27);
					HX_STACK_LINE(436)
					_this->m[(int)8] = (l25 * l27);
					HX_STACK_LINE(436)
					_this->m[(int)12] = (l26 * l27);
					HX_STACK_LINE(436)
					_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
					HX_STACK_LINE(436)
					_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
					HX_STACK_LINE(436)
					_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
					HX_STACK_LINE(436)
					_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
					HX_STACK_LINE(436)
					_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
					HX_STACK_LINE(436)
					_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
					HX_STACK_LINE(436)
					_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
					HX_STACK_LINE(436)
					_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
					HX_STACK_LINE(436)
					_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
					HX_STACK_LINE(436)
					_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
					HX_STACK_LINE(436)
					_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
					HX_STACK_LINE(436)
					_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
				}
			}
			HX_STACK_LINE(437)
			{
				HX_STACK_LINE(437)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_tempMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(437)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_lookAtTemp;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(437)
				{
					HX_STACK_LINE(437)
					Array< Float > result = this->_cameraRotationMatrix->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(437)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(437)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(437)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(437)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(437)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(437)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(437)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(437)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(437)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(437)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(437)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(437)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(437)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(437)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(437)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(437)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(437)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(437)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(437)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(437)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(437)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(437)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(437)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(437)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(437)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(437)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(437)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(437)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(437)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(437)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(437)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(437)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(437)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(437)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(437)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(437)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(437)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(437)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(437)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(437)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(437)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(437)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(437)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(437)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(437)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(437)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(437)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(437)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(437)
					result;
				}
			}
		}
		else{
			HX_STACK_LINE(439)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_cameraRotationMatrix;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(439)
			::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
			HX_STACK_LINE(439)
			::com::gamestudiohx::babylonhx::tools::math::Quaternion _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(439)
			{
				HX_STACK_LINE(439)
				Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
				HX_STACK_LINE(439)
				Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
				HX_STACK_LINE(439)
				Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
				HX_STACK_LINE(439)
				Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
				HX_STACK_LINE(439)
				Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
				HX_STACK_LINE(439)
				Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
				HX_STACK_LINE(439)
				Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
				HX_STACK_LINE(439)
				Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
				HX_STACK_LINE(439)
				Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
				HX_STACK_LINE(439)
				tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
				HX_STACK_LINE(439)
				tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
				HX_STACK_LINE(439)
				tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
				HX_STACK_LINE(439)
				tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
				HX_STACK_LINE(439)
				_g1 = tempQuaternion;
			}
			HX_STACK_LINE(439)
			tempQuaternion = _g1;
			HX_STACK_LINE(439)
			{
				HX_STACK_LINE(439)
				Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
				HX_STACK_LINE(439)
				Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
				HX_STACK_LINE(439)
				Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
				HX_STACK_LINE(439)
				Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
				HX_STACK_LINE(439)
				Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
				HX_STACK_LINE(439)
				Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
				HX_STACK_LINE(439)
				Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
				HX_STACK_LINE(439)
				Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
				HX_STACK_LINE(439)
				Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
				HX_STACK_LINE(439)
				result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
				HX_STACK_LINE(439)
				result->m[(int)1] = (2.0 * ((xy + zw)));
				HX_STACK_LINE(439)
				result->m[(int)2] = (2.0 * ((zx - yw)));
				HX_STACK_LINE(439)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(439)
				result->m[(int)4] = (2.0 * ((xy - zw)));
				HX_STACK_LINE(439)
				result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
				HX_STACK_LINE(439)
				result->m[(int)6] = (2.0 * ((yz + xw)));
				HX_STACK_LINE(439)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(439)
				result->m[(int)8] = (2.0 * ((zx + yw)));
				HX_STACK_LINE(439)
				result->m[(int)9] = (2.0 * ((yz - xw)));
				HX_STACK_LINE(439)
				result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
				HX_STACK_LINE(439)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(439)
				result->m[(int)12] = (int)0;
				HX_STACK_LINE(439)
				result->m[(int)13] = (int)0;
				HX_STACK_LINE(439)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(439)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(439)
				result;
			}
		}
		HX_STACK_LINE(442)
		{
			HX_STACK_LINE(442)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->_referencePoint;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(442)
			::com::gamestudiohx::babylonhx::tools::math::Matrix transformation = this->_cameraRotationMatrix;		HX_STACK_VAR(transformation,"transformation");
			HX_STACK_LINE(442)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_transformedReferencePoint;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(442)
			Float x = ((((vector->x * transformation->m->__get((int)0)) + (vector->y * transformation->m->__get((int)4))) + (vector->z * transformation->m->__get((int)8))) + transformation->m->__get((int)12));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(442)
			Float y = ((((vector->x * transformation->m->__get((int)1)) + (vector->y * transformation->m->__get((int)5))) + (vector->z * transformation->m->__get((int)9))) + transformation->m->__get((int)13));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(442)
			Float z = ((((vector->x * transformation->m->__get((int)2)) + (vector->y * transformation->m->__get((int)6))) + (vector->z * transformation->m->__get((int)10))) + transformation->m->__get((int)14));		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(442)
			Float w = ((((vector->x * transformation->m->__get((int)3)) + (vector->y * transformation->m->__get((int)7))) + (vector->z * transformation->m->__get((int)11))) + transformation->m->__get((int)15));		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(442)
			result->x = (Float(x) / Float(w));
			HX_STACK_LINE(442)
			result->y = (Float(y) / Float(w));
			HX_STACK_LINE(442)
			result->z = (Float(z) / Float(w));
		}
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(445)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_transformedReferencePoint;		HX_STACK_VAR(otherVector,"otherVector");
			HX_STACK_LINE(445)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_currentTarget;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(445)
			result->x = (_this->x + otherVector->x);
			HX_STACK_LINE(445)
			result->y = (_this->y + otherVector->y);
			HX_STACK_LINE(445)
			result->z = (_this->z + otherVector->z);
			HX_STACK_LINE(445)
			result;
		}
	}
	else{
		HX_STACK_LINE(447)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_currentTarget;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(447)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 source = this->_getLockedTargetPosition();		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(447)
		_this->x = source->x;
		HX_STACK_LINE(447)
		_this->y = source->y;
		HX_STACK_LINE(447)
		_this->z = source->z;
	}
	HX_STACK_LINE(450)
	{
		HX_STACK_LINE(450)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 eye = this->position;		HX_STACK_VAR(eye,"eye");
		HX_STACK_LINE(450)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 target = this->_currentTarget;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(450)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 up = this->upVector;		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(450)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_viewMatrix;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(450)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
		HX_STACK_LINE(450)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
		HX_STACK_LINE(450)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
		HX_STACK_LINE(450)
		{
			HX_STACK_LINE(450)
			zAxis->x = (target->x - eye->x);
			HX_STACK_LINE(450)
			zAxis->y = (target->y - eye->y);
			HX_STACK_LINE(450)
			zAxis->z = (target->z - eye->z);
		}
		HX_STACK_LINE(450)
		{
			HX_STACK_LINE(450)
			Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(450)
			if (((len != (int)0))){
				HX_STACK_LINE(450)
				Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(450)
				hx::MultEq(zAxis->x,num);
				HX_STACK_LINE(450)
				hx::MultEq(zAxis->y,num);
				HX_STACK_LINE(450)
				hx::MultEq(zAxis->z,num);
			}
		}
		HX_STACK_LINE(450)
		{
			HX_STACK_LINE(450)
			xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
			HX_STACK_LINE(450)
			xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
			HX_STACK_LINE(450)
			xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
		}
		HX_STACK_LINE(450)
		{
			HX_STACK_LINE(450)
			Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(450)
			if (((len != (int)0))){
				HX_STACK_LINE(450)
				Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(450)
				hx::MultEq(xAxis->x,num);
				HX_STACK_LINE(450)
				hx::MultEq(xAxis->y,num);
				HX_STACK_LINE(450)
				hx::MultEq(xAxis->z,num);
			}
		}
		HX_STACK_LINE(450)
		{
			HX_STACK_LINE(450)
			yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
			HX_STACK_LINE(450)
			yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
			HX_STACK_LINE(450)
			yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
		}
		HX_STACK_LINE(450)
		{
			HX_STACK_LINE(450)
			Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(450)
			if (((len != (int)0))){
				HX_STACK_LINE(450)
				Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(450)
				hx::MultEq(yAxis->x,num);
				HX_STACK_LINE(450)
				hx::MultEq(yAxis->y,num);
				HX_STACK_LINE(450)
				hx::MultEq(yAxis->z,num);
			}
		}
		HX_STACK_LINE(450)
		Float ex = -(((((xAxis->x * eye->x) + (xAxis->y * eye->y)) + (xAxis->z * eye->z))));		HX_STACK_VAR(ex,"ex");
		HX_STACK_LINE(450)
		Float ey = -(((((yAxis->x * eye->x) + (yAxis->y * eye->y)) + (yAxis->z * eye->z))));		HX_STACK_VAR(ey,"ey");
		HX_STACK_LINE(450)
		Float ez = -(((((zAxis->x * eye->x) + (zAxis->y * eye->y)) + (zAxis->z * eye->z))));		HX_STACK_VAR(ez,"ez");
		HX_STACK_LINE(450)
		{
			HX_STACK_LINE(450)
			result->m[(int)0] = xAxis->x;
			HX_STACK_LINE(450)
			result->m[(int)1] = yAxis->x;
			HX_STACK_LINE(450)
			result->m[(int)2] = zAxis->x;
			HX_STACK_LINE(450)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(450)
			result->m[(int)4] = xAxis->y;
			HX_STACK_LINE(450)
			result->m[(int)5] = yAxis->y;
			HX_STACK_LINE(450)
			result->m[(int)6] = zAxis->y;
			HX_STACK_LINE(450)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(450)
			result->m[(int)8] = xAxis->z;
			HX_STACK_LINE(450)
			result->m[(int)9] = yAxis->z;
			HX_STACK_LINE(450)
			result->m[(int)10] = zAxis->z;
			HX_STACK_LINE(450)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(450)
			result->m[(int)12] = ex;
			HX_STACK_LINE(450)
			result->m[(int)13] = ey;
			HX_STACK_LINE(450)
			result->m[(int)14] = ez;
			HX_STACK_LINE(450)
			result->m[(int)15] = (int)1;
			HX_STACK_LINE(450)
			result;
		}
	}
	HX_STACK_LINE(451)
	return this->_viewMatrix;
}



FreeCamera_obj::FreeCamera_obj()
{
}

void FreeCamera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FreeCamera);
	HX_MARK_MEMBER_NAME(cameraDirection,"cameraDirection");
	HX_MARK_MEMBER_NAME(cameraRotation,"cameraRotation");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(ellipsoid,"ellipsoid");
	HX_MARK_MEMBER_NAME(_attachedCanvas,"_attachedCanvas");
	HX_MARK_MEMBER_NAME(_keys,"_keys");
	HX_MARK_MEMBER_NAME(keysUp,"keysUp");
	HX_MARK_MEMBER_NAME(keysDown,"keysDown");
	HX_MARK_MEMBER_NAME(keysLeft,"keysLeft");
	HX_MARK_MEMBER_NAME(keysRight,"keysRight");
	HX_MARK_MEMBER_NAME(_collider,"_collider");
	HX_MARK_MEMBER_NAME(_needMoveForGravity,"_needMoveForGravity");
	HX_MARK_MEMBER_NAME(_currentTarget,"_currentTarget");
	HX_MARK_MEMBER_NAME(_viewMatrix,"_viewMatrix");
	HX_MARK_MEMBER_NAME(_camMatrix,"_camMatrix");
	HX_MARK_MEMBER_NAME(_cameraTransformMatrix,"_cameraTransformMatrix");
	HX_MARK_MEMBER_NAME(_cameraRotationMatrix,"_cameraRotationMatrix");
	HX_MARK_MEMBER_NAME(_referencePoint,"_referencePoint");
	HX_MARK_MEMBER_NAME(_transformedReferencePoint,"_transformedReferencePoint");
	HX_MARK_MEMBER_NAME(_oldPosition,"_oldPosition");
	HX_MARK_MEMBER_NAME(_diffPosition,"_diffPosition");
	HX_MARK_MEMBER_NAME(_newPosition,"_newPosition");
	HX_MARK_MEMBER_NAME(_lookAtTemp,"_lookAtTemp");
	HX_MARK_MEMBER_NAME(_tempMatrix,"_tempMatrix");
	HX_MARK_MEMBER_NAME(_localDirection,"_localDirection");
	HX_MARK_MEMBER_NAME(_transformedDirection,"_transformedDirection");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(checkCollisions,"checkCollisions");
	HX_MARK_MEMBER_NAME(applyGravity,"applyGravity");
	HX_MARK_MEMBER_NAME(noRotationConstraint,"noRotationConstraint");
	HX_MARK_MEMBER_NAME(angularSensibility,"angularSensibility");
	HX_MARK_MEMBER_NAME(lockedTarget,"lockedTarget");
	HX_MARK_MEMBER_NAME(onCollide,"onCollide");
	HX_MARK_MEMBER_NAME(_onMouseDown,"_onMouseDown");
	HX_MARK_MEMBER_NAME(_onMouseUp,"_onMouseUp");
	HX_MARK_MEMBER_NAME(_onMouseOut,"_onMouseOut");
	HX_MARK_MEMBER_NAME(_onMouseMove,"_onMouseMove");
	HX_MARK_MEMBER_NAME(_onKeyDown,"_onKeyDown");
	HX_MARK_MEMBER_NAME(_onKeyUp,"_onKeyUp");
	HX_MARK_MEMBER_NAME(_onLostFocus,"_onLostFocus");
	HX_MARK_MEMBER_NAME(_reset,"_reset");
	HX_MARK_MEMBER_NAME(_waitingParentId,"_waitingParentId");
	HX_MARK_MEMBER_NAME(_waitingLockedTargetId,"_waitingLockedTargetId");
	::com::gamestudiohx::babylonhx::cameras::Camera_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FreeCamera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cameraDirection,"cameraDirection");
	HX_VISIT_MEMBER_NAME(cameraRotation,"cameraRotation");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(ellipsoid,"ellipsoid");
	HX_VISIT_MEMBER_NAME(_attachedCanvas,"_attachedCanvas");
	HX_VISIT_MEMBER_NAME(_keys,"_keys");
	HX_VISIT_MEMBER_NAME(keysUp,"keysUp");
	HX_VISIT_MEMBER_NAME(keysDown,"keysDown");
	HX_VISIT_MEMBER_NAME(keysLeft,"keysLeft");
	HX_VISIT_MEMBER_NAME(keysRight,"keysRight");
	HX_VISIT_MEMBER_NAME(_collider,"_collider");
	HX_VISIT_MEMBER_NAME(_needMoveForGravity,"_needMoveForGravity");
	HX_VISIT_MEMBER_NAME(_currentTarget,"_currentTarget");
	HX_VISIT_MEMBER_NAME(_viewMatrix,"_viewMatrix");
	HX_VISIT_MEMBER_NAME(_camMatrix,"_camMatrix");
	HX_VISIT_MEMBER_NAME(_cameraTransformMatrix,"_cameraTransformMatrix");
	HX_VISIT_MEMBER_NAME(_cameraRotationMatrix,"_cameraRotationMatrix");
	HX_VISIT_MEMBER_NAME(_referencePoint,"_referencePoint");
	HX_VISIT_MEMBER_NAME(_transformedReferencePoint,"_transformedReferencePoint");
	HX_VISIT_MEMBER_NAME(_oldPosition,"_oldPosition");
	HX_VISIT_MEMBER_NAME(_diffPosition,"_diffPosition");
	HX_VISIT_MEMBER_NAME(_newPosition,"_newPosition");
	HX_VISIT_MEMBER_NAME(_lookAtTemp,"_lookAtTemp");
	HX_VISIT_MEMBER_NAME(_tempMatrix,"_tempMatrix");
	HX_VISIT_MEMBER_NAME(_localDirection,"_localDirection");
	HX_VISIT_MEMBER_NAME(_transformedDirection,"_transformedDirection");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(checkCollisions,"checkCollisions");
	HX_VISIT_MEMBER_NAME(applyGravity,"applyGravity");
	HX_VISIT_MEMBER_NAME(noRotationConstraint,"noRotationConstraint");
	HX_VISIT_MEMBER_NAME(angularSensibility,"angularSensibility");
	HX_VISIT_MEMBER_NAME(lockedTarget,"lockedTarget");
	HX_VISIT_MEMBER_NAME(onCollide,"onCollide");
	HX_VISIT_MEMBER_NAME(_onMouseDown,"_onMouseDown");
	HX_VISIT_MEMBER_NAME(_onMouseUp,"_onMouseUp");
	HX_VISIT_MEMBER_NAME(_onMouseOut,"_onMouseOut");
	HX_VISIT_MEMBER_NAME(_onMouseMove,"_onMouseMove");
	HX_VISIT_MEMBER_NAME(_onKeyDown,"_onKeyDown");
	HX_VISIT_MEMBER_NAME(_onKeyUp,"_onKeyUp");
	HX_VISIT_MEMBER_NAME(_onLostFocus,"_onLostFocus");
	HX_VISIT_MEMBER_NAME(_reset,"_reset");
	HX_VISIT_MEMBER_NAME(_waitingParentId,"_waitingParentId");
	HX_VISIT_MEMBER_NAME(_waitingLockedTargetId,"_waitingLockedTargetId");
	::com::gamestudiohx::babylonhx::cameras::Camera_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FreeCamera_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { return _keys; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"keysUp") ) { return keysUp; }
		if (HX_FIELD_EQ(inName,"_reset") ) { return _reset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_update") ) { return _update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		if (HX_FIELD_EQ(inName,"keysDown") ) { return keysDown; }
		if (HX_FIELD_EQ(inName,"keysLeft") ) { return keysLeft; }
		if (HX_FIELD_EQ(inName,"_onKeyUp") ) { return _onKeyUp; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ellipsoid") ) { return ellipsoid; }
		if (HX_FIELD_EQ(inName,"keysRight") ) { return keysRight; }
		if (HX_FIELD_EQ(inName,"_collider") ) { return _collider; }
		if (HX_FIELD_EQ(inName,"onCollide") ) { return onCollide; }
		if (HX_FIELD_EQ(inName,"setTarget") ) { return setTarget_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_camMatrix") ) { return _camMatrix; }
		if (HX_FIELD_EQ(inName,"_onMouseUp") ) { return _onMouseUp; }
		if (HX_FIELD_EQ(inName,"_onKeyDown") ) { return _onKeyDown; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_viewMatrix") ) { return _viewMatrix; }
		if (HX_FIELD_EQ(inName,"_lookAtTemp") ) { return _lookAtTemp; }
		if (HX_FIELD_EQ(inName,"_tempMatrix") ) { return _tempMatrix; }
		if (HX_FIELD_EQ(inName,"_onMouseOut") ) { return _onMouseOut; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_oldPosition") ) { return _oldPosition; }
		if (HX_FIELD_EQ(inName,"_newPosition") ) { return _newPosition; }
		if (HX_FIELD_EQ(inName,"applyGravity") ) { return applyGravity; }
		if (HX_FIELD_EQ(inName,"lockedTarget") ) { return lockedTarget; }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return _onMouseDown; }
		if (HX_FIELD_EQ(inName,"_onMouseMove") ) { return _onMouseMove; }
		if (HX_FIELD_EQ(inName,"_onLostFocus") ) { return _onLostFocus; }
		if (HX_FIELD_EQ(inName,"_updateCache") ) { return _updateCache_dyn(); }
		if (HX_FIELD_EQ(inName,"_checkInputs") ) { return _checkInputs_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_diffPosition") ) { return _diffPosition; }
		if (HX_FIELD_EQ(inName,"attachControl") ) { return attachControl_dyn(); }
		if (HX_FIELD_EQ(inName,"detachControl") ) { return detachControl_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cameraRotation") ) { return cameraRotation; }
		if (HX_FIELD_EQ(inName,"_currentTarget") ) { return _currentTarget; }
		if (HX_FIELD_EQ(inName,"_getViewMatrix") ) { return _getViewMatrix_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cameraDirection") ) { return cameraDirection; }
		if (HX_FIELD_EQ(inName,"_attachedCanvas") ) { return _attachedCanvas; }
		if (HX_FIELD_EQ(inName,"_referencePoint") ) { return _referencePoint; }
		if (HX_FIELD_EQ(inName,"_localDirection") ) { return _localDirection; }
		if (HX_FIELD_EQ(inName,"checkCollisions") ) { return checkCollisions; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_waitingParentId") ) { return _waitingParentId; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_collideWithWorld") ) { return _collideWithWorld_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"angularSensibility") ) { return angularSensibility; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_needMoveForGravity") ) { return _needMoveForGravity; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"noRotationConstraint") ) { return noRotationConstraint; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_cameraRotationMatrix") ) { return _cameraRotationMatrix; }
		if (HX_FIELD_EQ(inName,"_transformedDirection") ) { return _transformedDirection; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_cameraTransformMatrix") ) { return _cameraTransformMatrix; }
		if (HX_FIELD_EQ(inName,"_waitingLockedTargetId") ) { return _waitingLockedTargetId; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_getLockedTargetPosition") ) { return _getLockedTargetPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"_computeLocalCameraSpeed") ) { return _computeLocalCameraSpeed_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_isSynchronizedViewMatrix") ) { return _isSynchronizedViewMatrix_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_transformedReferencePoint") ) { return _transformedReferencePoint; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FreeCamera_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { _keys=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"keysUp") ) { keysUp=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reset") ) { _reset=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keysDown") ) { keysDown=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keysLeft") ) { keysLeft=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onKeyUp") ) { _onKeyUp=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ellipsoid") ) { ellipsoid=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keysRight") ) { keysRight=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_collider") ) { _collider=inValue.Cast< ::com::gamestudiohx::babylonhx::collisions::Collider >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onCollide") ) { onCollide=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_camMatrix") ) { _camMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onMouseUp") ) { _onMouseUp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onKeyDown") ) { _onKeyDown=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_viewMatrix") ) { _viewMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lookAtTemp") ) { _lookAtTemp=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tempMatrix") ) { _tempMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onMouseOut") ) { _onMouseOut=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_oldPosition") ) { _oldPosition=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_newPosition") ) { _newPosition=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"applyGravity") ) { applyGravity=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lockedTarget") ) { lockedTarget=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { _onMouseDown=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onMouseMove") ) { _onMouseMove=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onLostFocus") ) { _onLostFocus=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_diffPosition") ) { _diffPosition=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cameraRotation") ) { cameraRotation=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentTarget") ) { _currentTarget=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cameraDirection") ) { cameraDirection=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_attachedCanvas") ) { _attachedCanvas=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_referencePoint") ) { _referencePoint=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_localDirection") ) { _localDirection=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"checkCollisions") ) { checkCollisions=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_waitingParentId") ) { _waitingParentId=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"angularSensibility") ) { angularSensibility=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_needMoveForGravity") ) { _needMoveForGravity=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"noRotationConstraint") ) { noRotationConstraint=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_cameraRotationMatrix") ) { _cameraRotationMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_transformedDirection") ) { _transformedDirection=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_cameraTransformMatrix") ) { _cameraTransformMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_waitingLockedTargetId") ) { _waitingLockedTargetId=inValue.Cast< ::String >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_transformedReferencePoint") ) { _transformedReferencePoint=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FreeCamera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cameraDirection"));
	outFields->push(HX_CSTRING("cameraRotation"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("ellipsoid"));
	outFields->push(HX_CSTRING("_attachedCanvas"));
	outFields->push(HX_CSTRING("_keys"));
	outFields->push(HX_CSTRING("keysUp"));
	outFields->push(HX_CSTRING("keysDown"));
	outFields->push(HX_CSTRING("keysLeft"));
	outFields->push(HX_CSTRING("keysRight"));
	outFields->push(HX_CSTRING("_collider"));
	outFields->push(HX_CSTRING("_needMoveForGravity"));
	outFields->push(HX_CSTRING("_currentTarget"));
	outFields->push(HX_CSTRING("_viewMatrix"));
	outFields->push(HX_CSTRING("_camMatrix"));
	outFields->push(HX_CSTRING("_cameraTransformMatrix"));
	outFields->push(HX_CSTRING("_cameraRotationMatrix"));
	outFields->push(HX_CSTRING("_referencePoint"));
	outFields->push(HX_CSTRING("_transformedReferencePoint"));
	outFields->push(HX_CSTRING("_oldPosition"));
	outFields->push(HX_CSTRING("_diffPosition"));
	outFields->push(HX_CSTRING("_newPosition"));
	outFields->push(HX_CSTRING("_lookAtTemp"));
	outFields->push(HX_CSTRING("_tempMatrix"));
	outFields->push(HX_CSTRING("_localDirection"));
	outFields->push(HX_CSTRING("_transformedDirection"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("checkCollisions"));
	outFields->push(HX_CSTRING("applyGravity"));
	outFields->push(HX_CSTRING("noRotationConstraint"));
	outFields->push(HX_CSTRING("angularSensibility"));
	outFields->push(HX_CSTRING("lockedTarget"));
	outFields->push(HX_CSTRING("_waitingParentId"));
	outFields->push(HX_CSTRING("_waitingLockedTargetId"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(FreeCamera_obj,cameraDirection),HX_CSTRING("cameraDirection")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector2*/ ,(int)offsetof(FreeCamera_obj,cameraRotation),HX_CSTRING("cameraRotation")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(FreeCamera_obj,rotation),HX_CSTRING("rotation")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(FreeCamera_obj,ellipsoid),HX_CSTRING("ellipsoid")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(FreeCamera_obj,_attachedCanvas),HX_CSTRING("_attachedCanvas")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FreeCamera_obj,_keys),HX_CSTRING("_keys")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FreeCamera_obj,keysUp),HX_CSTRING("keysUp")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FreeCamera_obj,keysDown),HX_CSTRING("keysDown")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FreeCamera_obj,keysLeft),HX_CSTRING("keysLeft")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FreeCamera_obj,keysRight),HX_CSTRING("keysRight")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::collisions::Collider*/ ,(int)offsetof(FreeCamera_obj,_collider),HX_CSTRING("_collider")},
	{hx::fsBool,(int)offsetof(FreeCamera_obj,_needMoveForGravity),HX_CSTRING("_needMoveForGravity")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(FreeCamera_obj,_currentTarget),HX_CSTRING("_currentTarget")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(FreeCamera_obj,_viewMatrix),HX_CSTRING("_viewMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(FreeCamera_obj,_camMatrix),HX_CSTRING("_camMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(FreeCamera_obj,_cameraTransformMatrix),HX_CSTRING("_cameraTransformMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(FreeCamera_obj,_cameraRotationMatrix),HX_CSTRING("_cameraRotationMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(FreeCamera_obj,_referencePoint),HX_CSTRING("_referencePoint")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(FreeCamera_obj,_transformedReferencePoint),HX_CSTRING("_transformedReferencePoint")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(FreeCamera_obj,_oldPosition),HX_CSTRING("_oldPosition")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(FreeCamera_obj,_diffPosition),HX_CSTRING("_diffPosition")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(FreeCamera_obj,_newPosition),HX_CSTRING("_newPosition")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(FreeCamera_obj,_lookAtTemp),HX_CSTRING("_lookAtTemp")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(FreeCamera_obj,_tempMatrix),HX_CSTRING("_tempMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(FreeCamera_obj,_localDirection),HX_CSTRING("_localDirection")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(FreeCamera_obj,_transformedDirection),HX_CSTRING("_transformedDirection")},
	{hx::fsFloat,(int)offsetof(FreeCamera_obj,speed),HX_CSTRING("speed")},
	{hx::fsBool,(int)offsetof(FreeCamera_obj,checkCollisions),HX_CSTRING("checkCollisions")},
	{hx::fsBool,(int)offsetof(FreeCamera_obj,applyGravity),HX_CSTRING("applyGravity")},
	{hx::fsBool,(int)offsetof(FreeCamera_obj,noRotationConstraint),HX_CSTRING("noRotationConstraint")},
	{hx::fsFloat,(int)offsetof(FreeCamera_obj,angularSensibility),HX_CSTRING("angularSensibility")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FreeCamera_obj,lockedTarget),HX_CSTRING("lockedTarget")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FreeCamera_obj,onCollide),HX_CSTRING("onCollide")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FreeCamera_obj,_onMouseDown),HX_CSTRING("_onMouseDown")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FreeCamera_obj,_onMouseUp),HX_CSTRING("_onMouseUp")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FreeCamera_obj,_onMouseOut),HX_CSTRING("_onMouseOut")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FreeCamera_obj,_onMouseMove),HX_CSTRING("_onMouseMove")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FreeCamera_obj,_onKeyDown),HX_CSTRING("_onKeyDown")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FreeCamera_obj,_onKeyUp),HX_CSTRING("_onKeyUp")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FreeCamera_obj,_onLostFocus),HX_CSTRING("_onLostFocus")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FreeCamera_obj,_reset),HX_CSTRING("_reset")},
	{hx::fsString,(int)offsetof(FreeCamera_obj,_waitingParentId),HX_CSTRING("_waitingParentId")},
	{hx::fsString,(int)offsetof(FreeCamera_obj,_waitingLockedTargetId),HX_CSTRING("_waitingLockedTargetId")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("cameraDirection"),
	HX_CSTRING("cameraRotation"),
	HX_CSTRING("rotation"),
	HX_CSTRING("ellipsoid"),
	HX_CSTRING("_attachedCanvas"),
	HX_CSTRING("_keys"),
	HX_CSTRING("keysUp"),
	HX_CSTRING("keysDown"),
	HX_CSTRING("keysLeft"),
	HX_CSTRING("keysRight"),
	HX_CSTRING("_collider"),
	HX_CSTRING("_needMoveForGravity"),
	HX_CSTRING("_currentTarget"),
	HX_CSTRING("_viewMatrix"),
	HX_CSTRING("_camMatrix"),
	HX_CSTRING("_cameraTransformMatrix"),
	HX_CSTRING("_cameraRotationMatrix"),
	HX_CSTRING("_referencePoint"),
	HX_CSTRING("_transformedReferencePoint"),
	HX_CSTRING("_oldPosition"),
	HX_CSTRING("_diffPosition"),
	HX_CSTRING("_newPosition"),
	HX_CSTRING("_lookAtTemp"),
	HX_CSTRING("_tempMatrix"),
	HX_CSTRING("_localDirection"),
	HX_CSTRING("_transformedDirection"),
	HX_CSTRING("speed"),
	HX_CSTRING("checkCollisions"),
	HX_CSTRING("applyGravity"),
	HX_CSTRING("noRotationConstraint"),
	HX_CSTRING("angularSensibility"),
	HX_CSTRING("lockedTarget"),
	HX_CSTRING("onCollide"),
	HX_CSTRING("_onMouseDown"),
	HX_CSTRING("_onMouseUp"),
	HX_CSTRING("_onMouseOut"),
	HX_CSTRING("_onMouseMove"),
	HX_CSTRING("_onKeyDown"),
	HX_CSTRING("_onKeyUp"),
	HX_CSTRING("_onLostFocus"),
	HX_CSTRING("_reset"),
	HX_CSTRING("_waitingParentId"),
	HX_CSTRING("_waitingLockedTargetId"),
	HX_CSTRING("_getLockedTargetPosition"),
	HX_CSTRING("_updateCache"),
	HX_CSTRING("_isSynchronizedViewMatrix"),
	HX_CSTRING("_computeLocalCameraSpeed"),
	HX_CSTRING("setTarget"),
	HX_CSTRING("attachControl"),
	HX_CSTRING("detachControl"),
	HX_CSTRING("_collideWithWorld"),
	HX_CSTRING("_checkInputs"),
	HX_CSTRING("_update"),
	HX_CSTRING("_getViewMatrix"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FreeCamera_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FreeCamera_obj::__mClass,"__mClass");
};

#endif

Class FreeCamera_obj::__mClass;

void FreeCamera_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.cameras.FreeCamera"), hx::TCanCast< FreeCamera_obj> ,sStaticFields,sMemberFields,
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

void FreeCamera_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace cameras
