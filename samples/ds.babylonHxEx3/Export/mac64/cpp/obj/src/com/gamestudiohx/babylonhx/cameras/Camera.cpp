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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_animations_Animation
#include <com/gamestudiohx/babylonhx/animations/Animation.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_Camera
#include <com/gamestudiohx/babylonhx/cameras/Camera.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_postprocess_PostProcess
#include <com/gamestudiohx/babylonhx/postprocess/PostProcess.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Viewport
#include <com/gamestudiohx/babylonhx/tools/math/Viewport.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace cameras{

Void Camera_obj::__construct(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 position,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","new",0xa704a829,"com.gamestudiohx.babylonhx.cameras.Camera.new","com/gamestudiohx/babylonhx/cameras/Camera.hx",38,0x2d4d9ec5)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(position,"position")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(56)
	this->inertia = 0.9;
	HX_STACK_LINE(55)
	this->maxZ = 1000.0;
	HX_STACK_LINE(54)
	this->minZ = 0.1;
	HX_STACK_LINE(53)
	this->orthoTop = null();
	HX_STACK_LINE(52)
	this->orthoBottom = null();
	HX_STACK_LINE(51)
	this->orthoRight = null();
	HX_STACK_LINE(50)
	this->orthoLeft = null();
	HX_STACK_LINE(49)
	this->fov = 0.8;
	HX_STACK_LINE(66)
	super::__construct(scene);
	HX_STACK_LINE(68)
	this->name = name;
	HX_STACK_LINE(69)
	this->id = name;
	HX_STACK_LINE(70)
	this->position = position;
	HX_STACK_LINE(71)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(71)
	this->upVector = _g;
	HX_STACK_LINE(74)
	this->mode = ::com::gamestudiohx::babylonhx::cameras::Camera_obj::PERSPECTIVE_CAMERA;
	HX_STACK_LINE(76)
	scene->cameras->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(78)
	if (((scene->activeCamera == null()))){
		HX_STACK_LINE(79)
		scene->activeCamera = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(82)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(82)
		result->m[(int)0] = 1.0;
		HX_STACK_LINE(82)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(82)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(82)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(82)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(82)
		result->m[(int)5] = 1.0;
		HX_STACK_LINE(82)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(82)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(82)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(82)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(82)
		result->m[(int)10] = 1.0;
		HX_STACK_LINE(82)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(82)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(82)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(82)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(82)
		result->m[(int)15] = 1.0;
		HX_STACK_LINE(82)
		_g1 = result;
	}
	HX_STACK_LINE(82)
	this->_computedViewMatrix = _g1;
	HX_STACK_LINE(83)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(83)
		result->m[(int)0] = 1.0;
		HX_STACK_LINE(83)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(83)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(83)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(83)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(83)
		result->m[(int)5] = 1.0;
		HX_STACK_LINE(83)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(83)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(83)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(83)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(83)
		result->m[(int)10] = 1.0;
		HX_STACK_LINE(83)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(83)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(83)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(83)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(83)
		result->m[(int)15] = 1.0;
		HX_STACK_LINE(83)
		_g2 = result;
	}
	HX_STACK_LINE(83)
	this->_projectionMatrix = _g2;
	HX_STACK_LINE(86)
	this->animations = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(89)
	this->_postProcesses = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(90)
	this->_postProcessesTakenIndices = Array_obj< int >::__new();
	HX_STACK_LINE(93)
	::com::gamestudiohx::babylonhx::tools::math::Viewport _g3 = ::com::gamestudiohx::babylonhx::tools::math::Viewport_obj::__new((int)0,(int)0,1.0,1.0);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(93)
	this->viewport = _g3;
	HX_STACK_LINE(98)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(99)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g5 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(_g5,"_g5");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g5,::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g4){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/Camera.hx",96,0x2d4d9ec5)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("parent") , null(),false);
				__result->Add(HX_CSTRING("position") , _g4,false);
				__result->Add(HX_CSTRING("upVector") , _g5,false);
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
	HX_STACK_LINE(96)
	Dynamic _g6 = _Function_1_1::Block(_g5,_g4);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(96)
	this->_cache = _g6;
}
;
	return null();
}

//Camera_obj::~Camera_obj() { }

Dynamic Camera_obj::__CreateEmpty() { return  new Camera_obj; }
hx::ObjectPtr< Camera_obj > Camera_obj::__new(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 position,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< Camera_obj > result = new Camera_obj();
	result->__construct(name,position,scene);
	return result;}

Dynamic Camera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Camera_obj > result = new Camera_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Camera_obj::_initCache( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","_initCache",0x8e0cd42a,"com.gamestudiohx.babylonhx.cameras.Camera._initCache","com/gamestudiohx/babylonhx/cameras/Camera.hx",117,0x2d4d9ec5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(_g1,"_g1");
		struct _Function_1_1{
			inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g1,::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/Camera.hx",118,0x2d4d9ec5)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("position") , _g,false);
					__result->Add(HX_CSTRING("upVector") , _g1,false);
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
		HX_STACK_LINE(118)
		Dynamic _g2 = _Function_1_1::Block(_g1,_g);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(118)
		this->_cache = _g2;
	}
return null();
}


Void Camera_obj::_updateCache( hx::Null< bool >  __o_ignoreParentClass){
bool ignoreParentClass = __o_ignoreParentClass.Default(true);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","_updateCache",0x152b1891,"com.gamestudiohx.babylonhx.cameras.Camera._updateCache","com/gamestudiohx/babylonhx/cameras/Camera.hx",138,0x2d4d9ec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ignoreParentClass,"ignoreParentClass")
{
		HX_STACK_LINE(139)
		if ((!(ignoreParentClass))){
			HX_STACK_LINE(140)
			this->super::_updateCache(ignoreParentClass);
		}
		HX_STACK_LINE(143)
		::com::gamestudiohx::babylonhx::Engine engine = this->_scene->getEngine();		HX_STACK_VAR(engine,"engine");
		HX_STACK_LINE(145)
		this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
		HX_STACK_LINE(146)
		this->_cache->__Field(HX_CSTRING("upVector"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->upVector);
		HX_STACK_LINE(148)
		this->_cache->__FieldRef(HX_CSTRING("mode")) = this->mode;
		HX_STACK_LINE(149)
		this->_cache->__FieldRef(HX_CSTRING("minZ")) = this->minZ;
		HX_STACK_LINE(150)
		this->_cache->__FieldRef(HX_CSTRING("maxZ")) = this->maxZ;
		HX_STACK_LINE(152)
		this->_cache->__FieldRef(HX_CSTRING("fov")) = this->fov;
		HX_STACK_LINE(153)
		Float _g = engine->getAspectRatio(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(153)
		this->_cache->__FieldRef(HX_CSTRING("aspectRatio")) = _g;
		HX_STACK_LINE(155)
		this->_cache->__FieldRef(HX_CSTRING("orthoLeft")) = this->orthoLeft;
		HX_STACK_LINE(156)
		this->_cache->__FieldRef(HX_CSTRING("orthoRight")) = this->orthoRight;
		HX_STACK_LINE(157)
		this->_cache->__FieldRef(HX_CSTRING("orthoBottom")) = this->orthoBottom;
		HX_STACK_LINE(158)
		this->_cache->__FieldRef(HX_CSTRING("orthoTop")) = this->orthoTop;
		HX_STACK_LINE(159)
		int _g1 = engine->getRenderWidth();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(159)
		this->_cache->__FieldRef(HX_CSTRING("renderWidth")) = _g1;
		HX_STACK_LINE(160)
		int _g2 = engine->getRenderHeight();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(160)
		this->_cache->__FieldRef(HX_CSTRING("renderHeight")) = _g2;
	}
return null();
}


Void Camera_obj::_updateFromScene( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","_updateFromScene",0xbe301551,"com.gamestudiohx.babylonhx.cameras.Camera._updateFromScene","com/gamestudiohx/babylonhx/cameras/Camera.hx",163,0x2d4d9ec5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(164)
		this->updateCache(null());
		HX_STACK_LINE(165)
		this->_update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,_updateFromScene,(void))

bool Camera_obj::_isSynchronized( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","_isSynchronized",0x00388406,"com.gamestudiohx.babylonhx.cameras.Camera._isSynchronized","com/gamestudiohx/babylonhx/cameras/Camera.hx",169,0x2d4d9ec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(169)
	if ((this->_isSynchronizedViewMatrix())){
		HX_STACK_LINE(169)
		return this->_isSynchronizedProjectionMatrix();
	}
	else{
		HX_STACK_LINE(169)
		return false;
	}
	HX_STACK_LINE(169)
	return false;
}


bool Camera_obj::_isSynchronizedViewMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","_isSynchronizedViewMatrix",0x1e82422c,"com.gamestudiohx.babylonhx.cameras.Camera._isSynchronizedViewMatrix","com/gamestudiohx/babylonhx/cameras/Camera.hx",172,0x2d4d9ec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(173)
	if ((!(this->super::_isSynchronized()))){
		HX_STACK_LINE(174)
		return false;
	}
	HX_STACK_LINE(176)
	if (((  ((this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("equals"),true)(this->position))) ? bool(this->_cache->__Field(HX_CSTRING("upVector"),true)->__Field(HX_CSTRING("equals"),true)(this->upVector)) : bool(false) ))){
		HX_STACK_LINE(178)
		return this->isSynchronizedWithParent();
	}
	else{
		HX_STACK_LINE(176)
		return false;
	}
	HX_STACK_LINE(176)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,_isSynchronizedViewMatrix,return )

bool Camera_obj::_isSynchronizedProjectionMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","_isSynchronizedProjectionMatrix",0xa4edd456,"com.gamestudiohx.babylonhx.cameras.Camera._isSynchronizedProjectionMatrix","com/gamestudiohx/babylonhx/cameras/Camera.hx",181,0x2d4d9ec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(182)
	bool check = (bool((bool((this->_cache->__Field(HX_CSTRING("mode"),true) == this->mode)) && bool((this->_cache->__Field(HX_CSTRING("minZ"),true) == this->minZ)))) && bool((this->_cache->__Field(HX_CSTRING("maxZ"),true) == this->maxZ)));		HX_STACK_VAR(check,"check");
	HX_STACK_LINE(186)
	if ((!(check))){
		HX_STACK_LINE(187)
		return false;
	}
	HX_STACK_LINE(190)
	::com::gamestudiohx::babylonhx::Engine engine = this->_scene->getEngine();		HX_STACK_VAR(engine,"engine");
	HX_STACK_LINE(192)
	if (((this->mode == ::com::gamestudiohx::babylonhx::cameras::Camera_obj::PERSPECTIVE_CAMERA))){
		HX_STACK_LINE(193)
		bool _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(193)
		if (((this->_cache->__Field(HX_CSTRING("fov"),true) == this->fov))){
			HX_STACK_LINE(194)
			Float _g = engine->getAspectRatio(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(194)
			_g1 = (this->_cache->__Field(HX_CSTRING("aspectRatio"),true) == _g);
		}
		else{
			HX_STACK_LINE(193)
			_g1 = false;
		}
		HX_STACK_LINE(193)
		check = _g1;
	}
	else{
		HX_STACK_LINE(197)
		bool _g4;		HX_STACK_VAR(_g4,"_g4");
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::cameras::Camera_obj > __this,::com::gamestudiohx::babylonhx::Engine &engine){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/Camera.hx",201,0x2d4d9ec5)
				{
					HX_STACK_LINE(201)
					int _g2 = engine->getRenderWidth();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(201)
					return (__this->_cache->__Field(HX_CSTRING("renderWidth"),true) == _g2);
				}
				return null();
			}
		};
		HX_STACK_LINE(197)
		if (((  (((bool((bool((bool((this->_cache->__Field(HX_CSTRING("orthoLeft"),true) == this->orthoLeft)) && bool((this->_cache->__Field(HX_CSTRING("orthoRight"),true) == this->orthoRight)))) && bool((this->_cache->__Field(HX_CSTRING("orthoBottom"),true) == this->orthoBottom)))) && bool((this->_cache->__Field(HX_CSTRING("orthoTop"),true) == this->orthoTop))))) ? bool(_Function_2_1::Block(this,engine)) : bool(false) ))){
			HX_STACK_LINE(202)
			int _g3 = engine->getRenderHeight();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(202)
			_g4 = (this->_cache->__Field(HX_CSTRING("renderHeight"),true) == _g3);
		}
		else{
			HX_STACK_LINE(197)
			_g4 = false;
		}
		HX_STACK_LINE(197)
		check = _g4;
	}
	HX_STACK_LINE(205)
	return check;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,_isSynchronizedProjectionMatrix,return )

::com::gamestudiohx::babylonhx::Scene Camera_obj::getScene( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","getScene",0x0c48386d,"com.gamestudiohx.babylonhx.cameras.Camera.getScene","com/gamestudiohx/babylonhx/cameras/Camera.hx",209,0x2d4d9ec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(209)
	return this->_scene;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getScene,return )

Void Camera_obj::attachControl( ::openfl::display::DisplayObject canvas,hx::Null< bool >  __o_noPreventDefault){
bool noPreventDefault = __o_noPreventDefault.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","attachControl",0x0dbf9721,"com.gamestudiohx.babylonhx.cameras.Camera.attachControl","com/gamestudiohx/babylonhx/cameras/Camera.hx",212,0x2d4d9ec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(canvas,"canvas")
	HX_STACK_ARG(noPreventDefault,"noPreventDefault")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,attachControl,(void))

Void Camera_obj::detachControl( ::openfl::display::DisplayObject canvas){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","detachControl",0x04c9a353,"com.gamestudiohx.babylonhx.cameras.Camera.detachControl","com/gamestudiohx/babylonhx/cameras/Camera.hx",216,0x2d4d9ec5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(canvas,"canvas")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,detachControl,(void))

Void Camera_obj::_update( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","_update",0x966f87f1,"com.gamestudiohx.babylonhx.cameras.Camera._update","com/gamestudiohx/babylonhx/cameras/Camera.hx",220,0x2d4d9ec5)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,_update,(void))

int Camera_obj::attachPostProcess( ::com::gamestudiohx::babylonhx::postprocess::PostProcess postProcess,Dynamic insertAt){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","attachPostProcess",0x2e3befb3,"com.gamestudiohx.babylonhx.cameras.Camera.attachPostProcess","com/gamestudiohx/babylonhx/cameras/Camera.hx",224,0x2d4d9ec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(postProcess,"postProcess")
	HX_STACK_ARG(insertAt,"insertAt")
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::cameras::Camera_obj > __this,::com::gamestudiohx::babylonhx::postprocess::PostProcess &postProcess){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/Camera.hx",225,0x2d4d9ec5)
			{
				HX_STACK_LINE(225)
				int _g = ::Lambda_obj::indexOf(__this->_postProcesses,postProcess);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(225)
				return (_g > (int)-1);
			}
			return null();
		}
	};
	HX_STACK_LINE(225)
	if (((  ((!(postProcess->_reusable))) ? bool(_Function_1_1::Block(this,postProcess)) : bool(false) ))){
		HX_STACK_LINE(226)
		::haxe::Log_obj::trace(HX_CSTRING("You're trying to reuse a post process not defined as reusable."),hx::SourceInfo(HX_CSTRING("Camera.hx"),226,HX_CSTRING("com.gamestudiohx.babylonhx.cameras.Camera"),HX_CSTRING("attachPostProcess")));
		HX_STACK_LINE(227)
		return (int)-1;
	}
	HX_STACK_LINE(230)
	if (((bool((insertAt == null())) || bool((insertAt < (int)0))))){
		HX_STACK_LINE(231)
		this->_postProcesses->push(postProcess);
		HX_STACK_LINE(232)
		this->_postProcessesTakenIndices->push((this->_postProcesses->length - (int)1));
		HX_STACK_LINE(234)
		return (this->_postProcesses->length - (int)1);
	}
	HX_STACK_LINE(237)
	int add = (int)0;		HX_STACK_VAR(add,"add");
	HX_STACK_LINE(238)
	if (((this->_postProcesses->length > insertAt))){
		HX_STACK_LINE(239)
		int i = (this->_postProcesses->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(240)
		while((true)){
			HX_STACK_LINE(240)
			if ((!(((i >= insertAt))))){
				HX_STACK_LINE(240)
				break;
			}
			HX_STACK_LINE(241)
			this->_postProcesses[(i + (int)1)] = this->_postProcesses->__get(i).StaticCast< ::com::gamestudiohx::babylonhx::postprocess::PostProcess >();
			HX_STACK_LINE(242)
			--(i);
		}
		HX_STACK_LINE(244)
		add = (int)1;
	}
	HX_STACK_LINE(247)
	{
		HX_STACK_LINE(247)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(247)
		int _g = this->_postProcessesTakenIndices->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(247)
		while((true)){
			HX_STACK_LINE(247)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(247)
				break;
			}
			HX_STACK_LINE(247)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(248)
			if (((this->_postProcessesTakenIndices->__get(i) < insertAt))){
				HX_STACK_LINE(249)
				continue;
			}
			HX_STACK_LINE(252)
			int j = (this->_postProcessesTakenIndices->length - (int)1);		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(253)
			while((true)){
				HX_STACK_LINE(253)
				if ((!(((j >= i))))){
					HX_STACK_LINE(253)
					break;
				}
				HX_STACK_LINE(254)
				this->_postProcessesTakenIndices[(j + (int)1)] = (this->_postProcessesTakenIndices->__get(j) + add);
				HX_STACK_LINE(255)
				--(j);
			}
			HX_STACK_LINE(257)
			this->_postProcessesTakenIndices[i] = insertAt;
			HX_STACK_LINE(258)
			break;
		}
	}
	struct _Function_1_2{
		inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::cameras::Camera_obj > __this,Dynamic &insertAt){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/Camera.hx",261,0x2d4d9ec5)
			{
				HX_STACK_LINE(261)
				int _g1 = ::Lambda_obj::indexOf(__this->_postProcessesTakenIndices,insertAt);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(261)
				return (_g1 == (int)-1);
			}
			return null();
		}
	};
	HX_STACK_LINE(261)
	if (((  (((add > (int)0))) ? bool(_Function_1_2::Block(this,insertAt)) : bool(false) ))){
		HX_STACK_LINE(262)
		this->_postProcessesTakenIndices->push(insertAt);
	}
	HX_STACK_LINE(265)
	int result = (insertAt + add);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(267)
	this->_postProcesses[result] = postProcess;
	HX_STACK_LINE(269)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,attachPostProcess,return )

Array< int > Camera_obj::detachPostProcess( ::com::gamestudiohx::babylonhx::postprocess::PostProcess postProcess,Dynamic atIndices){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","detachPostProcess",0x0b44fce5,"com.gamestudiohx.babylonhx.cameras.Camera.detachPostProcess","com/gamestudiohx/babylonhx/cameras/Camera.hx",272,0x2d4d9ec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(postProcess,"postProcess")
	HX_STACK_ARG(atIndices,"atIndices")
	HX_STACK_LINE(273)
	Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(276)
	if (((atIndices == null()))){
		HX_STACK_LINE(277)
		int length = this->_postProcesses->length;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(279)
		{
			HX_STACK_LINE(279)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(279)
			while((true)){
				HX_STACK_LINE(279)
				if ((!(((_g < length))))){
					HX_STACK_LINE(279)
					break;
				}
				HX_STACK_LINE(279)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(280)
				if (((this->_postProcesses->__get(i).StaticCast< ::com::gamestudiohx::babylonhx::postprocess::PostProcess >() != postProcess))){
					HX_STACK_LINE(281)
					continue;
				}
				HX_STACK_LINE(284)
				this->_postProcesses[i] = null();
				HX_STACK_LINE(286)
				int index = ::Lambda_obj::indexOf(this->_postProcessesTakenIndices,i);		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(287)
				this->_postProcessesTakenIndices->splice(index,(int)1);
			}
		}
	}
	else{
		HX_STACK_LINE(292)
		Array< ::Dynamic > _atIndices;		HX_STACK_VAR(_atIndices,"_atIndices");
		HX_STACK_LINE(292)
		if ((::Std_obj::is(atIndices,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(292)
			_atIndices = atIndices;
		}
		else{
			HX_STACK_LINE(292)
			_atIndices = Array_obj< ::Dynamic >::__new().Add(atIndices);
		}
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(293)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(293)
			int _g = _atIndices->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(293)
			while((true)){
				HX_STACK_LINE(293)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(293)
					break;
				}
				HX_STACK_LINE(293)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(294)
				::com::gamestudiohx::babylonhx::postprocess::PostProcess foundPostProcess = this->_postProcesses->__get(atIndices->__GetItem(i)).StaticCast< ::com::gamestudiohx::babylonhx::postprocess::PostProcess >();		HX_STACK_VAR(foundPostProcess,"foundPostProcess");
				HX_STACK_LINE(296)
				if (((foundPostProcess != postProcess))){
					HX_STACK_LINE(297)
					result->push(i);
					HX_STACK_LINE(298)
					continue;
				}
				HX_STACK_LINE(301)
				this->_postProcesses[atIndices->__GetItem(i)] = null();
				HX_STACK_LINE(303)
				int index = ::Lambda_obj::indexOf(this->_postProcessesTakenIndices,atIndices->__GetItem(i));		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(304)
				this->_postProcessesTakenIndices->splice(index,(int)1);
			}
		}
	}
	HX_STACK_LINE(307)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,detachPostProcess,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Camera_obj::getWorldMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","getWorldMatrix",0xea81b814,"com.gamestudiohx.babylonhx.cameras.Camera.getWorldMatrix","com/gamestudiohx/babylonhx/cameras/Camera.hx",310,0x2d4d9ec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(311)
	if (((this->_worldMatrix == null()))){
		HX_STACK_LINE(312)
		::com::gamestudiohx::babylonhx::tools::math::Matrix _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(312)
		{
			HX_STACK_LINE(312)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(312)
			result->m[(int)0] = 1.0;
			HX_STACK_LINE(312)
			result->m[(int)1] = (int)0;
			HX_STACK_LINE(312)
			result->m[(int)2] = (int)0;
			HX_STACK_LINE(312)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(312)
			result->m[(int)4] = (int)0;
			HX_STACK_LINE(312)
			result->m[(int)5] = 1.0;
			HX_STACK_LINE(312)
			result->m[(int)6] = (int)0;
			HX_STACK_LINE(312)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(312)
			result->m[(int)8] = (int)0;
			HX_STACK_LINE(312)
			result->m[(int)9] = (int)0;
			HX_STACK_LINE(312)
			result->m[(int)10] = 1.0;
			HX_STACK_LINE(312)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(312)
			result->m[(int)12] = (int)0;
			HX_STACK_LINE(312)
			result->m[(int)13] = (int)0;
			HX_STACK_LINE(312)
			result->m[(int)14] = (int)0;
			HX_STACK_LINE(312)
			result->m[(int)15] = 1.0;
			HX_STACK_LINE(312)
			_g = result;
		}
		HX_STACK_LINE(312)
		this->_worldMatrix = _g;
	}
	HX_STACK_LINE(315)
	::com::gamestudiohx::babylonhx::tools::math::Matrix viewMatrix;		HX_STACK_VAR(viewMatrix,"viewMatrix");
	HX_STACK_LINE(315)
	{
		HX_STACK_LINE(315)
		::com::gamestudiohx::babylonhx::tools::math::Matrix _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(315)
		{
			HX_STACK_LINE(315)
			bool force = false;		HX_STACK_VAR(force,"force");
			HX_STACK_LINE(315)
			if ((!(((  ((!(force))) ? bool(this->_isSynchronizedViewMatrix()) : bool(false) ))))){
				HX_STACK_LINE(315)
				this->_syncChildFlag();
				HX_STACK_LINE(315)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _g1 = this->_getViewMatrix();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(315)
				this->_computedViewMatrix = _g1;
			}
			HX_STACK_LINE(315)
			_g2 = this->_computedViewMatrix;
		}
		HX_STACK_LINE(315)
		this->_computedViewMatrix = _g2;
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::cameras::Camera_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/Camera.hx",315,0x2d4d9ec5)
				{
					HX_STACK_LINE(315)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _g3 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(315)
					return (_g3 == null());
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::cameras::Camera_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/Camera.hx",315,0x2d4d9ec5)
				{
					HX_STACK_LINE(315)
					return (  ((!(__this->hasNewParent(null())))) ? bool(__this->parent->isSynchronized(null())) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(315)
		if ((!(((  ((!(((  ((!(((this->parent == null()))))) ? bool(_Function_2_1::Block(this)) : bool(true) ))))) ? bool(_Function_2_2::Block(this)) : bool(true) ))))){
			HX_STACK_LINE(315)
			if (((this->_worldMatrix == null()))){
				HX_STACK_LINE(315)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(315)
					result->m[(int)0] = 1.0;
					HX_STACK_LINE(315)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(315)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(315)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(315)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(315)
					result->m[(int)5] = 1.0;
					HX_STACK_LINE(315)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(315)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(315)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(315)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(315)
					result->m[(int)10] = 1.0;
					HX_STACK_LINE(315)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(315)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(315)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(315)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(315)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(315)
					_g4 = result;
				}
				HX_STACK_LINE(315)
				this->_worldMatrix = _g4;
			}
			HX_STACK_LINE(315)
			{
				HX_STACK_LINE(315)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_computedViewMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(315)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_worldMatrix;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(315)
				Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
				HX_STACK_LINE(315)
				Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
				HX_STACK_LINE(315)
				Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
				HX_STACK_LINE(315)
				Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
				HX_STACK_LINE(315)
				Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
				HX_STACK_LINE(315)
				Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
				HX_STACK_LINE(315)
				Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
				HX_STACK_LINE(315)
				Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
				HX_STACK_LINE(315)
				Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
				HX_STACK_LINE(315)
				Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
				HX_STACK_LINE(315)
				Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
				HX_STACK_LINE(315)
				Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
				HX_STACK_LINE(315)
				Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
				HX_STACK_LINE(315)
				Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
				HX_STACK_LINE(315)
				Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
				HX_STACK_LINE(315)
				Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
				HX_STACK_LINE(315)
				Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
				HX_STACK_LINE(315)
				Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
				HX_STACK_LINE(315)
				Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
				HX_STACK_LINE(315)
				Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
				HX_STACK_LINE(315)
				Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
				HX_STACK_LINE(315)
				Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
				HX_STACK_LINE(315)
				Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
				HX_STACK_LINE(315)
				Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
				HX_STACK_LINE(315)
				Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
				HX_STACK_LINE(315)
				Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
				HX_STACK_LINE(315)
				Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
				HX_STACK_LINE(315)
				Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
				HX_STACK_LINE(315)
				Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
				HX_STACK_LINE(315)
				Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
				HX_STACK_LINE(315)
				Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
				HX_STACK_LINE(315)
				Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
				HX_STACK_LINE(315)
				Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
				HX_STACK_LINE(315)
				Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
				HX_STACK_LINE(315)
				Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
				HX_STACK_LINE(315)
				Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
				HX_STACK_LINE(315)
				Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
				HX_STACK_LINE(315)
				Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
				HX_STACK_LINE(315)
				Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
				HX_STACK_LINE(315)
				other->m[(int)0] = (l23 * l27);
				HX_STACK_LINE(315)
				other->m[(int)4] = (l24 * l27);
				HX_STACK_LINE(315)
				other->m[(int)8] = (l25 * l27);
				HX_STACK_LINE(315)
				other->m[(int)12] = (l26 * l27);
				HX_STACK_LINE(315)
				other->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
				HX_STACK_LINE(315)
				other->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
				HX_STACK_LINE(315)
				other->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
				HX_STACK_LINE(315)
				other->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
				HX_STACK_LINE(315)
				other->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
				HX_STACK_LINE(315)
				other->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
				HX_STACK_LINE(315)
				other->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
				HX_STACK_LINE(315)
				other->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
				HX_STACK_LINE(315)
				other->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
				HX_STACK_LINE(315)
				other->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
				HX_STACK_LINE(315)
				other->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
				HX_STACK_LINE(315)
				other->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
			}
			HX_STACK_LINE(315)
			{
				HX_STACK_LINE(315)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_worldMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(315)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->parent->getWorldMatrix();		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					Array< Float > result = this->_computedViewMatrix->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(315)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(315)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(315)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(315)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(315)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(315)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(315)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(315)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(315)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(315)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(315)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(315)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(315)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(315)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(315)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(315)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(315)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(315)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(315)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(315)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(315)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(315)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(315)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(315)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(315)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(315)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(315)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(315)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(315)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(315)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(315)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(315)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(315)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(315)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(315)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(315)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(315)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(315)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(315)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(315)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(315)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(315)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(315)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(315)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(315)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(315)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(315)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(315)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(315)
					result;
				}
			}
			HX_STACK_LINE(315)
			{
				HX_STACK_LINE(315)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_computedViewMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
					HX_STACK_LINE(315)
					Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
					HX_STACK_LINE(315)
					Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
					HX_STACK_LINE(315)
					Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
					HX_STACK_LINE(315)
					Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
					HX_STACK_LINE(315)
					Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
					HX_STACK_LINE(315)
					Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
					HX_STACK_LINE(315)
					Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
					HX_STACK_LINE(315)
					Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
					HX_STACK_LINE(315)
					Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
					HX_STACK_LINE(315)
					Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
					HX_STACK_LINE(315)
					Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
					HX_STACK_LINE(315)
					Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
					HX_STACK_LINE(315)
					Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
					HX_STACK_LINE(315)
					Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
					HX_STACK_LINE(315)
					Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
					HX_STACK_LINE(315)
					Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
					HX_STACK_LINE(315)
					Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
					HX_STACK_LINE(315)
					Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
					HX_STACK_LINE(315)
					Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
					HX_STACK_LINE(315)
					Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
					HX_STACK_LINE(315)
					Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
					HX_STACK_LINE(315)
					Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
					HX_STACK_LINE(315)
					Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
					HX_STACK_LINE(315)
					Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
					HX_STACK_LINE(315)
					Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
					HX_STACK_LINE(315)
					Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
					HX_STACK_LINE(315)
					Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
					HX_STACK_LINE(315)
					Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
					HX_STACK_LINE(315)
					Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
					HX_STACK_LINE(315)
					Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
					HX_STACK_LINE(315)
					Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
					HX_STACK_LINE(315)
					Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
					HX_STACK_LINE(315)
					Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
					HX_STACK_LINE(315)
					Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
					HX_STACK_LINE(315)
					Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
					HX_STACK_LINE(315)
					Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
					HX_STACK_LINE(315)
					Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
					HX_STACK_LINE(315)
					Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
					HX_STACK_LINE(315)
					_this->m[(int)0] = (l23 * l27);
					HX_STACK_LINE(315)
					_this->m[(int)4] = (l24 * l27);
					HX_STACK_LINE(315)
					_this->m[(int)8] = (l25 * l27);
					HX_STACK_LINE(315)
					_this->m[(int)12] = (l26 * l27);
					HX_STACK_LINE(315)
					_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
					HX_STACK_LINE(315)
					_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
					HX_STACK_LINE(315)
					_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
					HX_STACK_LINE(315)
					_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
					HX_STACK_LINE(315)
					_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
					HX_STACK_LINE(315)
					_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
					HX_STACK_LINE(315)
					_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
					HX_STACK_LINE(315)
					_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
					HX_STACK_LINE(315)
					_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
					HX_STACK_LINE(315)
					_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
					HX_STACK_LINE(315)
					_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
					HX_STACK_LINE(315)
					_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
				}
			}
		}
		HX_STACK_LINE(315)
		viewMatrix = this->_computedViewMatrix;
	}
	HX_STACK_LINE(316)
	{
		HX_STACK_LINE(316)
		::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_worldMatrix;		HX_STACK_VAR(other,"other");
		HX_STACK_LINE(316)
		Float l1 = viewMatrix->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
		HX_STACK_LINE(316)
		Float l2 = viewMatrix->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
		HX_STACK_LINE(316)
		Float l3 = viewMatrix->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
		HX_STACK_LINE(316)
		Float l4 = viewMatrix->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
		HX_STACK_LINE(316)
		Float l5 = viewMatrix->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
		HX_STACK_LINE(316)
		Float l6 = viewMatrix->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
		HX_STACK_LINE(316)
		Float l7 = viewMatrix->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
		HX_STACK_LINE(316)
		Float l8 = viewMatrix->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
		HX_STACK_LINE(316)
		Float l9 = viewMatrix->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
		HX_STACK_LINE(316)
		Float l10 = viewMatrix->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
		HX_STACK_LINE(316)
		Float l11 = viewMatrix->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
		HX_STACK_LINE(316)
		Float l12 = viewMatrix->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
		HX_STACK_LINE(316)
		Float l13 = viewMatrix->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
		HX_STACK_LINE(316)
		Float l14 = viewMatrix->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
		HX_STACK_LINE(316)
		Float l15 = viewMatrix->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
		HX_STACK_LINE(316)
		Float l16 = viewMatrix->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
		HX_STACK_LINE(316)
		Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
		HX_STACK_LINE(316)
		Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
		HX_STACK_LINE(316)
		Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
		HX_STACK_LINE(316)
		Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
		HX_STACK_LINE(316)
		Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
		HX_STACK_LINE(316)
		Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
		HX_STACK_LINE(316)
		Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
		HX_STACK_LINE(316)
		Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
		HX_STACK_LINE(316)
		Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
		HX_STACK_LINE(316)
		Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
		HX_STACK_LINE(316)
		Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
		HX_STACK_LINE(316)
		Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
		HX_STACK_LINE(316)
		Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
		HX_STACK_LINE(316)
		Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
		HX_STACK_LINE(316)
		Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
		HX_STACK_LINE(316)
		Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
		HX_STACK_LINE(316)
		Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
		HX_STACK_LINE(316)
		Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
		HX_STACK_LINE(316)
		Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
		HX_STACK_LINE(316)
		Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
		HX_STACK_LINE(316)
		Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
		HX_STACK_LINE(316)
		Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
		HX_STACK_LINE(316)
		Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
		HX_STACK_LINE(316)
		other->m[(int)0] = (l23 * l27);
		HX_STACK_LINE(316)
		other->m[(int)4] = (l24 * l27);
		HX_STACK_LINE(316)
		other->m[(int)8] = (l25 * l27);
		HX_STACK_LINE(316)
		other->m[(int)12] = (l26 * l27);
		HX_STACK_LINE(316)
		other->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
		HX_STACK_LINE(316)
		other->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
		HX_STACK_LINE(316)
		other->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
		HX_STACK_LINE(316)
		other->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
		HX_STACK_LINE(316)
		other->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
		HX_STACK_LINE(316)
		other->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
		HX_STACK_LINE(316)
		other->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
		HX_STACK_LINE(316)
		other->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
		HX_STACK_LINE(316)
		other->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
		HX_STACK_LINE(316)
		other->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
		HX_STACK_LINE(316)
		other->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
		HX_STACK_LINE(316)
		other->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
	}
	HX_STACK_LINE(318)
	return this->_worldMatrix;
}


::com::gamestudiohx::babylonhx::tools::math::Matrix Camera_obj::_getViewMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","_getViewMatrix",0x73871dd4,"com.gamestudiohx.babylonhx.cameras.Camera._getViewMatrix","com/gamestudiohx/babylonhx/cameras/Camera.hx",322,0x2d4d9ec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(322)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(322)
	result->m[(int)0] = 1.0;
	HX_STACK_LINE(322)
	result->m[(int)1] = (int)0;
	HX_STACK_LINE(322)
	result->m[(int)2] = (int)0;
	HX_STACK_LINE(322)
	result->m[(int)3] = (int)0;
	HX_STACK_LINE(322)
	result->m[(int)4] = (int)0;
	HX_STACK_LINE(322)
	result->m[(int)5] = 1.0;
	HX_STACK_LINE(322)
	result->m[(int)6] = (int)0;
	HX_STACK_LINE(322)
	result->m[(int)7] = (int)0;
	HX_STACK_LINE(322)
	result->m[(int)8] = (int)0;
	HX_STACK_LINE(322)
	result->m[(int)9] = (int)0;
	HX_STACK_LINE(322)
	result->m[(int)10] = 1.0;
	HX_STACK_LINE(322)
	result->m[(int)11] = (int)0;
	HX_STACK_LINE(322)
	result->m[(int)12] = (int)0;
	HX_STACK_LINE(322)
	result->m[(int)13] = (int)0;
	HX_STACK_LINE(322)
	result->m[(int)14] = (int)0;
	HX_STACK_LINE(322)
	result->m[(int)15] = 1.0;
	HX_STACK_LINE(322)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,_getViewMatrix,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Camera_obj::getViewMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","getViewMatrix",0x36ed5fc5,"com.gamestudiohx.babylonhx.cameras.Camera.getViewMatrix","com/gamestudiohx/babylonhx/cameras/Camera.hx",325,0x2d4d9ec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(326)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(326)
	{
		HX_STACK_LINE(326)
		bool force = false;		HX_STACK_VAR(force,"force");
		HX_STACK_LINE(326)
		if ((!(((  ((!(force))) ? bool(this->_isSynchronizedViewMatrix()) : bool(false) ))))){
			HX_STACK_LINE(326)
			this->_syncChildFlag();
			HX_STACK_LINE(326)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _g = this->_getViewMatrix();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(326)
			this->_computedViewMatrix = _g;
		}
		HX_STACK_LINE(326)
		_g1 = this->_computedViewMatrix;
	}
	HX_STACK_LINE(326)
	this->_computedViewMatrix = _g1;
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::cameras::Camera_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/Camera.hx",329,0x2d4d9ec5)
			{
				HX_STACK_LINE(329)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _g2 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(329)
				return (_g2 == null());
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::cameras::Camera_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/Camera.hx",330,0x2d4d9ec5)
			{
				HX_STACK_LINE(330)
				return (  ((!(__this->hasNewParent(null())))) ? bool(__this->parent->isSynchronized(null())) : bool(false) );
			}
			return null();
		}
	};
	HX_STACK_LINE(328)
	if ((!(((  ((!(((  ((!(((this->parent == null()))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))))) ? bool(_Function_1_2::Block(this)) : bool(true) ))))){
		HX_STACK_LINE(332)
		if (((this->_worldMatrix == null()))){
			HX_STACK_LINE(333)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(333)
			{
				HX_STACK_LINE(333)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(333)
				result->m[(int)0] = 1.0;
				HX_STACK_LINE(333)
				result->m[(int)1] = (int)0;
				HX_STACK_LINE(333)
				result->m[(int)2] = (int)0;
				HX_STACK_LINE(333)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(333)
				result->m[(int)4] = (int)0;
				HX_STACK_LINE(333)
				result->m[(int)5] = 1.0;
				HX_STACK_LINE(333)
				result->m[(int)6] = (int)0;
				HX_STACK_LINE(333)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(333)
				result->m[(int)8] = (int)0;
				HX_STACK_LINE(333)
				result->m[(int)9] = (int)0;
				HX_STACK_LINE(333)
				result->m[(int)10] = 1.0;
				HX_STACK_LINE(333)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(333)
				result->m[(int)12] = (int)0;
				HX_STACK_LINE(333)
				result->m[(int)13] = (int)0;
				HX_STACK_LINE(333)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(333)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(333)
				_g3 = result;
			}
			HX_STACK_LINE(333)
			this->_worldMatrix = _g3;
		}
		HX_STACK_LINE(336)
		{
			HX_STACK_LINE(336)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_computedViewMatrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(336)
			::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_worldMatrix;		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(336)
			Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
			HX_STACK_LINE(336)
			Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
			HX_STACK_LINE(336)
			Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
			HX_STACK_LINE(336)
			Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
			HX_STACK_LINE(336)
			Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
			HX_STACK_LINE(336)
			Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
			HX_STACK_LINE(336)
			Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
			HX_STACK_LINE(336)
			Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
			HX_STACK_LINE(336)
			Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
			HX_STACK_LINE(336)
			Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
			HX_STACK_LINE(336)
			Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
			HX_STACK_LINE(336)
			Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
			HX_STACK_LINE(336)
			Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
			HX_STACK_LINE(336)
			Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
			HX_STACK_LINE(336)
			Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
			HX_STACK_LINE(336)
			Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
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
			other->m[(int)0] = (l23 * l27);
			HX_STACK_LINE(336)
			other->m[(int)4] = (l24 * l27);
			HX_STACK_LINE(336)
			other->m[(int)8] = (l25 * l27);
			HX_STACK_LINE(336)
			other->m[(int)12] = (l26 * l27);
			HX_STACK_LINE(336)
			other->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
			HX_STACK_LINE(336)
			other->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
			HX_STACK_LINE(336)
			other->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
			HX_STACK_LINE(336)
			other->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
			HX_STACK_LINE(336)
			other->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
			HX_STACK_LINE(336)
			other->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
			HX_STACK_LINE(336)
			other->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
			HX_STACK_LINE(336)
			other->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
			HX_STACK_LINE(336)
			other->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
			HX_STACK_LINE(336)
			other->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
			HX_STACK_LINE(336)
			other->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
			HX_STACK_LINE(336)
			other->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
		}
		HX_STACK_LINE(337)
		{
			HX_STACK_LINE(337)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_worldMatrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(337)
			::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->parent->getWorldMatrix();		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(337)
			{
				HX_STACK_LINE(337)
				Array< Float > result = this->_computedViewMatrix->m;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(337)
				Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
				HX_STACK_LINE(337)
				Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
				HX_STACK_LINE(337)
				Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
				HX_STACK_LINE(337)
				Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
				HX_STACK_LINE(337)
				Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
				HX_STACK_LINE(337)
				Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
				HX_STACK_LINE(337)
				Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
				HX_STACK_LINE(337)
				Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
				HX_STACK_LINE(337)
				Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
				HX_STACK_LINE(337)
				Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
				HX_STACK_LINE(337)
				Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
				HX_STACK_LINE(337)
				Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
				HX_STACK_LINE(337)
				Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
				HX_STACK_LINE(337)
				Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
				HX_STACK_LINE(337)
				Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
				HX_STACK_LINE(337)
				Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
				HX_STACK_LINE(337)
				Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
				HX_STACK_LINE(337)
				Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
				HX_STACK_LINE(337)
				Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
				HX_STACK_LINE(337)
				Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
				HX_STACK_LINE(337)
				Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
				HX_STACK_LINE(337)
				Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
				HX_STACK_LINE(337)
				Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
				HX_STACK_LINE(337)
				Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
				HX_STACK_LINE(337)
				Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
				HX_STACK_LINE(337)
				Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
				HX_STACK_LINE(337)
				Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
				HX_STACK_LINE(337)
				Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
				HX_STACK_LINE(337)
				Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
				HX_STACK_LINE(337)
				Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
				HX_STACK_LINE(337)
				Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
				HX_STACK_LINE(337)
				Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
				HX_STACK_LINE(337)
				result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
				HX_STACK_LINE(337)
				result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
				HX_STACK_LINE(337)
				result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
				HX_STACK_LINE(337)
				result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
				HX_STACK_LINE(337)
				result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
				HX_STACK_LINE(337)
				result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
				HX_STACK_LINE(337)
				result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
				HX_STACK_LINE(337)
				result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
				HX_STACK_LINE(337)
				result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
				HX_STACK_LINE(337)
				result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
				HX_STACK_LINE(337)
				result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
				HX_STACK_LINE(337)
				result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
				HX_STACK_LINE(337)
				result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
				HX_STACK_LINE(337)
				result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
				HX_STACK_LINE(337)
				result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
				HX_STACK_LINE(337)
				result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
				HX_STACK_LINE(337)
				result;
			}
		}
		HX_STACK_LINE(338)
		{
			HX_STACK_LINE(338)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_computedViewMatrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(338)
			{
				HX_STACK_LINE(338)
				Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
				HX_STACK_LINE(338)
				Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
				HX_STACK_LINE(338)
				Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
				HX_STACK_LINE(338)
				Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
				HX_STACK_LINE(338)
				Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
				HX_STACK_LINE(338)
				Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
				HX_STACK_LINE(338)
				Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
				HX_STACK_LINE(338)
				Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
				HX_STACK_LINE(338)
				Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
				HX_STACK_LINE(338)
				Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
				HX_STACK_LINE(338)
				Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
				HX_STACK_LINE(338)
				Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
				HX_STACK_LINE(338)
				Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
				HX_STACK_LINE(338)
				Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
				HX_STACK_LINE(338)
				Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
				HX_STACK_LINE(338)
				Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
				HX_STACK_LINE(338)
				Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
				HX_STACK_LINE(338)
				Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
				HX_STACK_LINE(338)
				Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
				HX_STACK_LINE(338)
				Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
				HX_STACK_LINE(338)
				Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
				HX_STACK_LINE(338)
				Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
				HX_STACK_LINE(338)
				Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
				HX_STACK_LINE(338)
				Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
				HX_STACK_LINE(338)
				Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
				HX_STACK_LINE(338)
				Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
				HX_STACK_LINE(338)
				Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
				HX_STACK_LINE(338)
				Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
				HX_STACK_LINE(338)
				Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
				HX_STACK_LINE(338)
				Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
				HX_STACK_LINE(338)
				Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
				HX_STACK_LINE(338)
				Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
				HX_STACK_LINE(338)
				Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
				HX_STACK_LINE(338)
				Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
				HX_STACK_LINE(338)
				Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
				HX_STACK_LINE(338)
				Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
				HX_STACK_LINE(338)
				Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
				HX_STACK_LINE(338)
				Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
				HX_STACK_LINE(338)
				Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
				HX_STACK_LINE(338)
				_this->m[(int)0] = (l23 * l27);
				HX_STACK_LINE(338)
				_this->m[(int)4] = (l24 * l27);
				HX_STACK_LINE(338)
				_this->m[(int)8] = (l25 * l27);
				HX_STACK_LINE(338)
				_this->m[(int)12] = (l26 * l27);
				HX_STACK_LINE(338)
				_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
				HX_STACK_LINE(338)
				_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
				HX_STACK_LINE(338)
				_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
				HX_STACK_LINE(338)
				_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
				HX_STACK_LINE(338)
				_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
				HX_STACK_LINE(338)
				_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
				HX_STACK_LINE(338)
				_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
				HX_STACK_LINE(338)
				_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
				HX_STACK_LINE(338)
				_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
				HX_STACK_LINE(338)
				_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
				HX_STACK_LINE(338)
				_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
				HX_STACK_LINE(338)
				_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
			}
		}
	}
	HX_STACK_LINE(341)
	return this->_computedViewMatrix;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getViewMatrix,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Camera_obj::_computeViewMatrix( hx::Null< bool >  __o_force){
bool force = __o_force.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","_computeViewMatrix",0x1e2013f5,"com.gamestudiohx.babylonhx.cameras.Camera._computeViewMatrix","com/gamestudiohx/babylonhx/cameras/Camera.hx",344,0x2d4d9ec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(force,"force")
{
		HX_STACK_LINE(345)
		if ((!(((  ((!(force))) ? bool(this->_isSynchronizedViewMatrix()) : bool(false) ))))){
			HX_STACK_LINE(346)
			this->_syncChildFlag();
			HX_STACK_LINE(347)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _g = this->_getViewMatrix();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(347)
			this->_computedViewMatrix = _g;
		}
		HX_STACK_LINE(349)
		return this->_computedViewMatrix;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,_computeViewMatrix,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Camera_obj::getProjectionMatrix( hx::Null< bool >  __o_force){
bool force = __o_force.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","getProjectionMatrix",0x2860aaaf,"com.gamestudiohx.babylonhx.cameras.Camera.getProjectionMatrix","com/gamestudiohx/babylonhx/cameras/Camera.hx",352,0x2d4d9ec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(force,"force")
{
		HX_STACK_LINE(353)
		if ((!(((  ((!(force))) ? bool(this->_isSynchronizedProjectionMatrix()) : bool(false) ))))){
			HX_STACK_LINE(354)
			::com::gamestudiohx::babylonhx::Engine engine = this->_scene->getEngine();		HX_STACK_VAR(engine,"engine");
			HX_STACK_LINE(355)
			if (((this->mode == ::com::gamestudiohx::babylonhx::cameras::Camera_obj::PERSPECTIVE_CAMERA))){
				HX_STACK_LINE(356)
				Float aspect = engine->getAspectRatio(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(aspect,"aspect");
				HX_STACK_LINE(356)
				Float znear = this->minZ;		HX_STACK_VAR(znear,"znear");
				HX_STACK_LINE(356)
				Float zfar = this->maxZ;		HX_STACK_VAR(zfar,"zfar");
				HX_STACK_LINE(356)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_projectionMatrix;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(356)
				Float _g = ::Math_obj::tan((this->fov * 0.5));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(356)
				Float tan = (Float(1.0) / Float(_g));		HX_STACK_VAR(tan,"tan");
				HX_STACK_LINE(356)
				result->m[(int)0] = (Float(tan) / Float(aspect));
				HX_STACK_LINE(356)
				result->m[(int)1] = result->m[(int)2] = result->m[(int)3] = 0.0;
				HX_STACK_LINE(356)
				result->m[(int)5] = tan;
				HX_STACK_LINE(356)
				result->m[(int)4] = result->m[(int)6] = result->m[(int)7] = 0.0;
				HX_STACK_LINE(356)
				result->m[(int)8] = result->m[(int)9] = 0.0;
				HX_STACK_LINE(356)
				result->m[(int)10] = (Float(-(zfar)) / Float(((znear - zfar))));
				HX_STACK_LINE(356)
				result->m[(int)11] = 1.0;
				HX_STACK_LINE(356)
				result->m[(int)12] = result->m[(int)13] = result->m[(int)15] = 0.0;
				HX_STACK_LINE(356)
				result->m[(int)14] = (Float((znear * zfar)) / Float(((znear - zfar))));
				HX_STACK_LINE(356)
				result;
			}
			else{
				HX_STACK_LINE(358)
				int _g1 = engine->getRenderWidth();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(358)
				Float halfWidth = (Float(_g1) / Float(2.0));		HX_STACK_VAR(halfWidth,"halfWidth");
				HX_STACK_LINE(359)
				int _g2 = engine->getRenderHeight();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(359)
				Float halfHeight = (Float(_g2) / Float(2.0));		HX_STACK_VAR(halfHeight,"halfHeight");
				HX_STACK_LINE(360)
				{
					HX_STACK_LINE(360)
					Float left;		HX_STACK_VAR(left,"left");
					HX_STACK_LINE(360)
					if (((this->orthoLeft == null()))){
						HX_STACK_LINE(360)
						left = -(halfWidth);
					}
					else{
						HX_STACK_LINE(360)
						left = this->orthoLeft;
					}
					HX_STACK_LINE(360)
					Float right;		HX_STACK_VAR(right,"right");
					HX_STACK_LINE(360)
					if (((this->orthoRight == null()))){
						HX_STACK_LINE(360)
						right = halfWidth;
					}
					else{
						HX_STACK_LINE(360)
						right = this->orthoRight;
					}
					HX_STACK_LINE(360)
					Float bottom;		HX_STACK_VAR(bottom,"bottom");
					HX_STACK_LINE(360)
					if (((this->orthoBottom == null()))){
						HX_STACK_LINE(360)
						bottom = -(halfHeight);
					}
					else{
						HX_STACK_LINE(360)
						bottom = this->orthoBottom;
					}
					HX_STACK_LINE(360)
					Float top;		HX_STACK_VAR(top,"top");
					HX_STACK_LINE(360)
					if (((this->orthoTop == null()))){
						HX_STACK_LINE(360)
						top = halfHeight;
					}
					else{
						HX_STACK_LINE(360)
						top = this->orthoTop;
					}
					HX_STACK_LINE(360)
					Float znear = this->minZ;		HX_STACK_VAR(znear,"znear");
					HX_STACK_LINE(360)
					Float zfar = this->maxZ;		HX_STACK_VAR(zfar,"zfar");
					HX_STACK_LINE(360)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_projectionMatrix;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(360)
					result->m[(int)0] = (Float(2.0) / Float(((right - left))));
					HX_STACK_LINE(360)
					result->m[(int)1] = result->m[(int)2] = result->m[(int)3] = result->m[(int)4] = (int)0;
					HX_STACK_LINE(360)
					result->m[(int)5] = (Float(2.0) / Float(((top - bottom))));
					HX_STACK_LINE(360)
					result->m[(int)6] = result->m[(int)7] = (int)0;
					HX_STACK_LINE(360)
					result->m[(int)8] = result->m[(int)9] = (int)0;
					HX_STACK_LINE(360)
					result->m[(int)10] = (Float((int)-1) / Float(((znear - zfar))));
					HX_STACK_LINE(360)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(360)
					result->m[(int)12] = (Float(((left + right))) / Float(((left - right))));
					HX_STACK_LINE(360)
					result->m[(int)13] = (Float(((top + bottom))) / Float(((bottom - top))));
					HX_STACK_LINE(360)
					result->m[(int)14] = (Float(znear) / Float(((znear - zfar))));
					HX_STACK_LINE(360)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(360)
					result;
				}
			}
		}
		HX_STACK_LINE(364)
		return this->_projectionMatrix;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,getProjectionMatrix,return )

Void Camera_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.Camera","dispose",0x5c3f70e8,"com.gamestudiohx.babylonhx.cameras.Camera.dispose","com/gamestudiohx/babylonhx/cameras/Camera.hx",367,0x2d4d9ec5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(369)
		int index = ::Lambda_obj::indexOf(this->_scene->cameras,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(370)
		this->_scene->cameras->splice(index,(int)1);
		HX_STACK_LINE(373)
		{
			HX_STACK_LINE(373)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(373)
			int _g = this->_postProcessesTakenIndices->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(373)
			while((true)){
				HX_STACK_LINE(373)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(373)
					break;
				}
				HX_STACK_LINE(373)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(374)
				this->_postProcesses->__get(this->_postProcessesTakenIndices->__get(i)).StaticCast< ::com::gamestudiohx::babylonhx::postprocess::PostProcess >()->dispose(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,dispose,(void))

int Camera_obj::PERSPECTIVE_CAMERA;

int Camera_obj::ORTHOGRAPHIC_CAMERA;


Camera_obj::Camera_obj()
{
}

void Camera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Camera);
	HX_MARK_MEMBER_NAME(upVector,"upVector");
	HX_MARK_MEMBER_NAME(_worldMatrix,"_worldMatrix");
	HX_MARK_MEMBER_NAME(_computedViewMatrix,"_computedViewMatrix");
	HX_MARK_MEMBER_NAME(_projectionMatrix,"_projectionMatrix");
	HX_MARK_MEMBER_NAME(fov,"fov");
	HX_MARK_MEMBER_NAME(orthoLeft,"orthoLeft");
	HX_MARK_MEMBER_NAME(orthoRight,"orthoRight");
	HX_MARK_MEMBER_NAME(orthoBottom,"orthoBottom");
	HX_MARK_MEMBER_NAME(orthoTop,"orthoTop");
	HX_MARK_MEMBER_NAME(minZ,"minZ");
	HX_MARK_MEMBER_NAME(maxZ,"maxZ");
	HX_MARK_MEMBER_NAME(inertia,"inertia");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(viewport,"viewport");
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_MEMBER_NAME(_postProcesses,"_postProcesses");
	HX_MARK_MEMBER_NAME(_postProcessesTakenIndices,"_postProcessesTakenIndices");
	::com::gamestudiohx::babylonhx::Node_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Camera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(upVector,"upVector");
	HX_VISIT_MEMBER_NAME(_worldMatrix,"_worldMatrix");
	HX_VISIT_MEMBER_NAME(_computedViewMatrix,"_computedViewMatrix");
	HX_VISIT_MEMBER_NAME(_projectionMatrix,"_projectionMatrix");
	HX_VISIT_MEMBER_NAME(fov,"fov");
	HX_VISIT_MEMBER_NAME(orthoLeft,"orthoLeft");
	HX_VISIT_MEMBER_NAME(orthoRight,"orthoRight");
	HX_VISIT_MEMBER_NAME(orthoBottom,"orthoBottom");
	HX_VISIT_MEMBER_NAME(orthoTop,"orthoTop");
	HX_VISIT_MEMBER_NAME(minZ,"minZ");
	HX_VISIT_MEMBER_NAME(maxZ,"maxZ");
	HX_VISIT_MEMBER_NAME(inertia,"inertia");
	HX_VISIT_MEMBER_NAME(mode,"mode");
	HX_VISIT_MEMBER_NAME(viewport,"viewport");
	HX_VISIT_MEMBER_NAME(animations,"animations");
	HX_VISIT_MEMBER_NAME(_postProcesses,"_postProcesses");
	HX_VISIT_MEMBER_NAME(_postProcessesTakenIndices,"_postProcessesTakenIndices");
	::com::gamestudiohx::babylonhx::Node_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Camera_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fov") ) { return fov; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"minZ") ) { return minZ; }
		if (HX_FIELD_EQ(inName,"maxZ") ) { return maxZ; }
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inertia") ) { return inertia; }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"upVector") ) { return upVector; }
		if (HX_FIELD_EQ(inName,"orthoTop") ) { return orthoTop; }
		if (HX_FIELD_EQ(inName,"viewport") ) { return viewport; }
		if (HX_FIELD_EQ(inName,"getScene") ) { return getScene_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"orthoLeft") ) { return orthoLeft; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"orthoRight") ) { return orthoRight; }
		if (HX_FIELD_EQ(inName,"animations") ) { return animations; }
		if (HX_FIELD_EQ(inName,"_initCache") ) { return _initCache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orthoBottom") ) { return orthoBottom; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_worldMatrix") ) { return _worldMatrix; }
		if (HX_FIELD_EQ(inName,"_updateCache") ) { return _updateCache_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"attachControl") ) { return attachControl_dyn(); }
		if (HX_FIELD_EQ(inName,"detachControl") ) { return detachControl_dyn(); }
		if (HX_FIELD_EQ(inName,"getViewMatrix") ) { return getViewMatrix_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_postProcesses") ) { return _postProcesses; }
		if (HX_FIELD_EQ(inName,"getWorldMatrix") ) { return getWorldMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"_getViewMatrix") ) { return _getViewMatrix_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_isSynchronized") ) { return _isSynchronized_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_updateFromScene") ) { return _updateFromScene_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_projectionMatrix") ) { return _projectionMatrix; }
		if (HX_FIELD_EQ(inName,"attachPostProcess") ) { return attachPostProcess_dyn(); }
		if (HX_FIELD_EQ(inName,"detachPostProcess") ) { return detachPostProcess_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PERSPECTIVE_CAMERA") ) { return PERSPECTIVE_CAMERA; }
		if (HX_FIELD_EQ(inName,"_computeViewMatrix") ) { return _computeViewMatrix_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ORTHOGRAPHIC_CAMERA") ) { return ORTHOGRAPHIC_CAMERA; }
		if (HX_FIELD_EQ(inName,"_computedViewMatrix") ) { return _computedViewMatrix; }
		if (HX_FIELD_EQ(inName,"getProjectionMatrix") ) { return getProjectionMatrix_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_isSynchronizedViewMatrix") ) { return _isSynchronizedViewMatrix_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_postProcessesTakenIndices") ) { return _postProcessesTakenIndices; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_isSynchronizedProjectionMatrix") ) { return _isSynchronizedProjectionMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Camera_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fov") ) { fov=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"minZ") ) { minZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxZ") ) { maxZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inertia") ) { inertia=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"upVector") ) { upVector=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"orthoTop") ) { orthoTop=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewport") ) { viewport=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Viewport >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"orthoLeft") ) { orthoLeft=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"orthoRight") ) { orthoRight=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orthoBottom") ) { orthoBottom=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_worldMatrix") ) { _worldMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_postProcesses") ) { _postProcesses=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_projectionMatrix") ) { _projectionMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PERSPECTIVE_CAMERA") ) { PERSPECTIVE_CAMERA=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ORTHOGRAPHIC_CAMERA") ) { ORTHOGRAPHIC_CAMERA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_computedViewMatrix") ) { _computedViewMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_postProcessesTakenIndices") ) { _postProcessesTakenIndices=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Camera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("upVector"));
	outFields->push(HX_CSTRING("_worldMatrix"));
	outFields->push(HX_CSTRING("_computedViewMatrix"));
	outFields->push(HX_CSTRING("_projectionMatrix"));
	outFields->push(HX_CSTRING("fov"));
	outFields->push(HX_CSTRING("orthoLeft"));
	outFields->push(HX_CSTRING("orthoRight"));
	outFields->push(HX_CSTRING("orthoBottom"));
	outFields->push(HX_CSTRING("orthoTop"));
	outFields->push(HX_CSTRING("minZ"));
	outFields->push(HX_CSTRING("maxZ"));
	outFields->push(HX_CSTRING("inertia"));
	outFields->push(HX_CSTRING("mode"));
	outFields->push(HX_CSTRING("viewport"));
	outFields->push(HX_CSTRING("animations"));
	outFields->push(HX_CSTRING("_postProcesses"));
	outFields->push(HX_CSTRING("_postProcessesTakenIndices"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PERSPECTIVE_CAMERA"),
	HX_CSTRING("ORTHOGRAPHIC_CAMERA"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Camera_obj,upVector),HX_CSTRING("upVector")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(Camera_obj,_worldMatrix),HX_CSTRING("_worldMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(Camera_obj,_computedViewMatrix),HX_CSTRING("_computedViewMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(Camera_obj,_projectionMatrix),HX_CSTRING("_projectionMatrix")},
	{hx::fsFloat,(int)offsetof(Camera_obj,fov),HX_CSTRING("fov")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Camera_obj,orthoLeft),HX_CSTRING("orthoLeft")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Camera_obj,orthoRight),HX_CSTRING("orthoRight")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Camera_obj,orthoBottom),HX_CSTRING("orthoBottom")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Camera_obj,orthoTop),HX_CSTRING("orthoTop")},
	{hx::fsFloat,(int)offsetof(Camera_obj,minZ),HX_CSTRING("minZ")},
	{hx::fsFloat,(int)offsetof(Camera_obj,maxZ),HX_CSTRING("maxZ")},
	{hx::fsFloat,(int)offsetof(Camera_obj,inertia),HX_CSTRING("inertia")},
	{hx::fsInt,(int)offsetof(Camera_obj,mode),HX_CSTRING("mode")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Viewport*/ ,(int)offsetof(Camera_obj,viewport),HX_CSTRING("viewport")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Camera_obj,animations),HX_CSTRING("animations")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Camera_obj,_postProcesses),HX_CSTRING("_postProcesses")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Camera_obj,_postProcessesTakenIndices),HX_CSTRING("_postProcessesTakenIndices")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("upVector"),
	HX_CSTRING("_worldMatrix"),
	HX_CSTRING("_computedViewMatrix"),
	HX_CSTRING("_projectionMatrix"),
	HX_CSTRING("fov"),
	HX_CSTRING("orthoLeft"),
	HX_CSTRING("orthoRight"),
	HX_CSTRING("orthoBottom"),
	HX_CSTRING("orthoTop"),
	HX_CSTRING("minZ"),
	HX_CSTRING("maxZ"),
	HX_CSTRING("inertia"),
	HX_CSTRING("mode"),
	HX_CSTRING("viewport"),
	HX_CSTRING("animations"),
	HX_CSTRING("_postProcesses"),
	HX_CSTRING("_postProcessesTakenIndices"),
	HX_CSTRING("_initCache"),
	HX_CSTRING("_updateCache"),
	HX_CSTRING("_updateFromScene"),
	HX_CSTRING("_isSynchronized"),
	HX_CSTRING("_isSynchronizedViewMatrix"),
	HX_CSTRING("_isSynchronizedProjectionMatrix"),
	HX_CSTRING("getScene"),
	HX_CSTRING("attachControl"),
	HX_CSTRING("detachControl"),
	HX_CSTRING("_update"),
	HX_CSTRING("attachPostProcess"),
	HX_CSTRING("detachPostProcess"),
	HX_CSTRING("getWorldMatrix"),
	HX_CSTRING("_getViewMatrix"),
	HX_CSTRING("getViewMatrix"),
	HX_CSTRING("_computeViewMatrix"),
	HX_CSTRING("getProjectionMatrix"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Camera_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Camera_obj::PERSPECTIVE_CAMERA,"PERSPECTIVE_CAMERA");
	HX_MARK_MEMBER_NAME(Camera_obj::ORTHOGRAPHIC_CAMERA,"ORTHOGRAPHIC_CAMERA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Camera_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Camera_obj::PERSPECTIVE_CAMERA,"PERSPECTIVE_CAMERA");
	HX_VISIT_MEMBER_NAME(Camera_obj::ORTHOGRAPHIC_CAMERA,"ORTHOGRAPHIC_CAMERA");
};

#endif

Class Camera_obj::__mClass;

void Camera_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.cameras.Camera"), hx::TCanCast< Camera_obj> ,sStaticFields,sMemberFields,
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

void Camera_obj::__boot()
{
	PERSPECTIVE_CAMERA= (int)0;
	ORTHOGRAPHIC_CAMERA= (int)1;
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace cameras
