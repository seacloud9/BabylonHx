#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_ArcRotateCamera
#include <com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_Camera
#include <com/gamestudiohx/babylonhx/cameras/Camera.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
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

Void ArcRotateCamera_obj::__construct(::String name,Float alpha,Float beta,Float radius,::com::gamestudiohx::babylonhx::tools::math::Vector3 target,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.ArcRotateCamera","new",0x9d56ca72,"com.gamestudiohx.babylonhx.cameras.ArcRotateCamera.new","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",26,0x866b9e20)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(alpha,"alpha")
HX_STACK_ARG(beta,"beta")
HX_STACK_ARG(radius,"radius")
HX_STACK_ARG(target,"target")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(106)
	this->angularSensibility = 1000.0;
	HX_STACK_LINE(105)
	this->upperRadiusLimit = null();
	HX_STACK_LINE(104)
	this->lowerRadiusLimit = null();
	HX_STACK_LINE(103)
	this->upperBetaLimit = 3.141592653589;
	HX_STACK_LINE(102)
	this->lowerBetaLimit = 0.01;
	HX_STACK_LINE(101)
	this->upperAlphaLimit = null();
	HX_STACK_LINE(100)
	this->lowerAlphaLimit = null();
	HX_STACK_LINE(99)
	this->inertialRadiusOffset = (int)0;
	HX_STACK_LINE(98)
	this->inertialBetaOffset = (int)0;
	HX_STACK_LINE(97)
	this->inertialAlphaOffset = (int)0;
	HX_STACK_LINE(55)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(55)
	super::__construct(name,_g,scene);
	HX_STACK_LINE(57)
	this->alpha = alpha;
	HX_STACK_LINE(58)
	this->beta = beta;
	HX_STACK_LINE(59)
	this->radius = radius;
	HX_STACK_LINE(60)
	this->target = target;
	HX_STACK_LINE(62)
	this->_keys = Array_obj< int >::__new();
	HX_STACK_LINE(63)
	this->keysUp = Array_obj< int >::__new().Add((int)38);
	HX_STACK_LINE(64)
	this->keysDown = Array_obj< int >::__new().Add((int)40);
	HX_STACK_LINE(65)
	this->keysLeft = Array_obj< int >::__new().Add((int)37);
	HX_STACK_LINE(66)
	this->keysRight = Array_obj< int >::__new().Add((int)39);
	HX_STACK_LINE(68)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g1 = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(68)
	this->_viewMatrix = _g1;
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		::com::gamestudiohx::babylonhx::tools::math::Matrix _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			bool force = false;		HX_STACK_VAR(force,"force");
			HX_STACK_LINE(70)
			if ((!(((  ((!(force))) ? bool(this->_isSynchronizedViewMatrix()) : bool(false) ))))){
				HX_STACK_LINE(70)
				this->_syncChildFlag();
				HX_STACK_LINE(70)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _g2 = this->_getViewMatrix();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(70)
				this->_computedViewMatrix = _g2;
			}
			HX_STACK_LINE(70)
			_g3 = this->_computedViewMatrix;
		}
		HX_STACK_LINE(70)
		this->_computedViewMatrix = _g3;
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",70,0x866b9e20)
				{
					HX_STACK_LINE(70)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _g4 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(70)
					return (_g4 == null());
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",70,0x866b9e20)
				{
					HX_STACK_LINE(70)
					return (  ((!(__this->hasNewParent(null())))) ? bool(__this->parent->isSynchronized(null())) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(70)
		if ((!(((  ((!(((  ((!(((this->parent == null()))))) ? bool(_Function_2_1::Block(this)) : bool(true) ))))) ? bool(_Function_2_2::Block(this)) : bool(true) ))))){
			HX_STACK_LINE(70)
			if (((this->_worldMatrix == null()))){
				HX_STACK_LINE(70)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(70)
				{
					HX_STACK_LINE(70)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(70)
					result->m[(int)0] = 1.0;
					HX_STACK_LINE(70)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(70)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(70)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(70)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(70)
					result->m[(int)5] = 1.0;
					HX_STACK_LINE(70)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(70)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(70)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(70)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(70)
					result->m[(int)10] = 1.0;
					HX_STACK_LINE(70)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(70)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(70)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(70)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(70)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(70)
					_g5 = result;
				}
				HX_STACK_LINE(70)
				this->_worldMatrix = _g5;
			}
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_computedViewMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(70)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_worldMatrix;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(70)
				Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
				HX_STACK_LINE(70)
				Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
				HX_STACK_LINE(70)
				Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
				HX_STACK_LINE(70)
				Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
				HX_STACK_LINE(70)
				Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
				HX_STACK_LINE(70)
				Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
				HX_STACK_LINE(70)
				Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
				HX_STACK_LINE(70)
				Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
				HX_STACK_LINE(70)
				Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
				HX_STACK_LINE(70)
				Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
				HX_STACK_LINE(70)
				Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
				HX_STACK_LINE(70)
				Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
				HX_STACK_LINE(70)
				Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
				HX_STACK_LINE(70)
				Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
				HX_STACK_LINE(70)
				Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
				HX_STACK_LINE(70)
				Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
				HX_STACK_LINE(70)
				Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
				HX_STACK_LINE(70)
				Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
				HX_STACK_LINE(70)
				Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
				HX_STACK_LINE(70)
				Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
				HX_STACK_LINE(70)
				Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
				HX_STACK_LINE(70)
				Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
				HX_STACK_LINE(70)
				Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
				HX_STACK_LINE(70)
				Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
				HX_STACK_LINE(70)
				Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
				HX_STACK_LINE(70)
				Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
				HX_STACK_LINE(70)
				Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
				HX_STACK_LINE(70)
				Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
				HX_STACK_LINE(70)
				Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
				HX_STACK_LINE(70)
				Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
				HX_STACK_LINE(70)
				Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
				HX_STACK_LINE(70)
				Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
				HX_STACK_LINE(70)
				Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
				HX_STACK_LINE(70)
				Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
				HX_STACK_LINE(70)
				Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
				HX_STACK_LINE(70)
				Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
				HX_STACK_LINE(70)
				Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
				HX_STACK_LINE(70)
				Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
				HX_STACK_LINE(70)
				Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
				HX_STACK_LINE(70)
				other->m[(int)0] = (l23 * l27);
				HX_STACK_LINE(70)
				other->m[(int)4] = (l24 * l27);
				HX_STACK_LINE(70)
				other->m[(int)8] = (l25 * l27);
				HX_STACK_LINE(70)
				other->m[(int)12] = (l26 * l27);
				HX_STACK_LINE(70)
				other->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
				HX_STACK_LINE(70)
				other->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
				HX_STACK_LINE(70)
				other->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
				HX_STACK_LINE(70)
				other->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
				HX_STACK_LINE(70)
				other->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
				HX_STACK_LINE(70)
				other->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
				HX_STACK_LINE(70)
				other->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
				HX_STACK_LINE(70)
				other->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
				HX_STACK_LINE(70)
				other->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
				HX_STACK_LINE(70)
				other->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
				HX_STACK_LINE(70)
				other->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
				HX_STACK_LINE(70)
				other->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
			}
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_worldMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(70)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->parent->getWorldMatrix();		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(70)
				{
					HX_STACK_LINE(70)
					Array< Float > result = this->_computedViewMatrix->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(70)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(70)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(70)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(70)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(70)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(70)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(70)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(70)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(70)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(70)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(70)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(70)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(70)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(70)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(70)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(70)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(70)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(70)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(70)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(70)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(70)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(70)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(70)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(70)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(70)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(70)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(70)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(70)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(70)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(70)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(70)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(70)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(70)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(70)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(70)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(70)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(70)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(70)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(70)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(70)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(70)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(70)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(70)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(70)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(70)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(70)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(70)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(70)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(70)
					result;
				}
			}
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_computedViewMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(70)
				{
					HX_STACK_LINE(70)
					Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
					HX_STACK_LINE(70)
					Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
					HX_STACK_LINE(70)
					Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
					HX_STACK_LINE(70)
					Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
					HX_STACK_LINE(70)
					Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
					HX_STACK_LINE(70)
					Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
					HX_STACK_LINE(70)
					Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
					HX_STACK_LINE(70)
					Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
					HX_STACK_LINE(70)
					Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
					HX_STACK_LINE(70)
					Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
					HX_STACK_LINE(70)
					Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
					HX_STACK_LINE(70)
					Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
					HX_STACK_LINE(70)
					Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
					HX_STACK_LINE(70)
					Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
					HX_STACK_LINE(70)
					Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
					HX_STACK_LINE(70)
					Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
					HX_STACK_LINE(70)
					Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
					HX_STACK_LINE(70)
					Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
					HX_STACK_LINE(70)
					Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
					HX_STACK_LINE(70)
					Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
					HX_STACK_LINE(70)
					Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
					HX_STACK_LINE(70)
					Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
					HX_STACK_LINE(70)
					Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
					HX_STACK_LINE(70)
					Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
					HX_STACK_LINE(70)
					Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
					HX_STACK_LINE(70)
					Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
					HX_STACK_LINE(70)
					Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
					HX_STACK_LINE(70)
					Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
					HX_STACK_LINE(70)
					Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
					HX_STACK_LINE(70)
					Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
					HX_STACK_LINE(70)
					Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
					HX_STACK_LINE(70)
					Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
					HX_STACK_LINE(70)
					Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
					HX_STACK_LINE(70)
					Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
					HX_STACK_LINE(70)
					Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
					HX_STACK_LINE(70)
					Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
					HX_STACK_LINE(70)
					Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
					HX_STACK_LINE(70)
					Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
					HX_STACK_LINE(70)
					Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
					HX_STACK_LINE(70)
					_this->m[(int)0] = (l23 * l27);
					HX_STACK_LINE(70)
					_this->m[(int)4] = (l24 * l27);
					HX_STACK_LINE(70)
					_this->m[(int)8] = (l25 * l27);
					HX_STACK_LINE(70)
					_this->m[(int)12] = (l26 * l27);
					HX_STACK_LINE(70)
					_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
					HX_STACK_LINE(70)
					_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
					HX_STACK_LINE(70)
					_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
					HX_STACK_LINE(70)
					_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
					HX_STACK_LINE(70)
					_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
					HX_STACK_LINE(70)
					_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
					HX_STACK_LINE(70)
					_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
					HX_STACK_LINE(70)
					_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
					HX_STACK_LINE(70)
					_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
					HX_STACK_LINE(70)
					_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
					HX_STACK_LINE(70)
					_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
					HX_STACK_LINE(70)
					_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
				}
			}
		}
		HX_STACK_LINE(70)
		this->_computedViewMatrix;
	}
	HX_STACK_LINE(74)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g6 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(78)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g7 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(79)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g8 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(_g8,"_g8");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g7,::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g8,::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g6){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",72,0x866b9e20)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("parent") , null(),false);
				__result->Add(HX_CSTRING("target") , _g6,false);
				__result->Add(HX_CSTRING("alpha") , null(),false);
				__result->Add(HX_CSTRING("beta") , null(),false);
				__result->Add(HX_CSTRING("radius") , null(),false);
				__result->Add(HX_CSTRING("position") , _g7,false);
				__result->Add(HX_CSTRING("upVector") , _g8,false);
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
	HX_STACK_LINE(72)
	Dynamic _g9 = _Function_1_1::Block(_g7,_g8,_g6);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(72)
	this->_cache = _g9;
}
;
	return null();
}

//ArcRotateCamera_obj::~ArcRotateCamera_obj() { }

Dynamic ArcRotateCamera_obj::__CreateEmpty() { return  new ArcRotateCamera_obj; }
hx::ObjectPtr< ArcRotateCamera_obj > ArcRotateCamera_obj::__new(::String name,Float alpha,Float beta,Float radius,::com::gamestudiohx::babylonhx::tools::math::Vector3 target,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< ArcRotateCamera_obj > result = new ArcRotateCamera_obj();
	result->__construct(name,alpha,beta,radius,target,scene);
	return result;}

Dynamic ArcRotateCamera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArcRotateCamera_obj > result = new ArcRotateCamera_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void ArcRotateCamera_obj::_initCache( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.ArcRotateCamera","_initCache",0xe8857d01,"com.gamestudiohx.babylonhx.cameras.ArcRotateCamera._initCache","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",108,0x866b9e20)
		HX_STACK_THIS(this)
		HX_STACK_LINE(109)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(109)
		this->_cache->__FieldRef(HX_CSTRING("target")) = _g;
		HX_STACK_LINE(110)
		this->_cache->__FieldRef(HX_CSTRING("alpha")) = null();
		HX_STACK_LINE(111)
		this->_cache->__FieldRef(HX_CSTRING("beta")) = null();
		HX_STACK_LINE(112)
		this->_cache->__FieldRef(HX_CSTRING("radius")) = null();
	}
return null();
}


Void ArcRotateCamera_obj::_updateCache( hx::Null< bool >  __o_ignoreParentClass){
bool ignoreParentClass = __o_ignoreParentClass.Default(true);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.ArcRotateCamera","_updateCache",0x7dc0e528,"com.gamestudiohx.babylonhx.cameras.ArcRotateCamera._updateCache","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",115,0x866b9e20)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ignoreParentClass,"ignoreParentClass")
{
		HX_STACK_LINE(116)
		if ((!(ignoreParentClass))){
			HX_STACK_LINE(117)
			this->super::_updateCache(ignoreParentClass);
		}
		HX_STACK_LINE(119)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = this->_getTargetPosition();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(119)
		this->_cache->__Field(HX_CSTRING("target"),true)->__Field(HX_CSTRING("copyFrom"),true)(_g);
		HX_STACK_LINE(120)
		this->_cache->__FieldRef(HX_CSTRING("alpha")) = this->alpha;
		HX_STACK_LINE(121)
		this->_cache->__FieldRef(HX_CSTRING("beta")) = this->beta;
		HX_STACK_LINE(122)
		this->_cache->__FieldRef(HX_CSTRING("radius")) = this->radius;
	}
return null();
}


::com::gamestudiohx::babylonhx::tools::math::Vector3 ArcRotateCamera_obj::_getTargetPosition( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.ArcRotateCamera","_getTargetPosition",0x80f9073f,"com.gamestudiohx.babylonhx.cameras.ArcRotateCamera._getTargetPosition","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",127,0x866b9e20)
	HX_STACK_THIS(this)
	HX_STACK_LINE(127)
	return this->target;
}


HX_DEFINE_DYNAMIC_FUNC0(ArcRotateCamera_obj,_getTargetPosition,return )

bool ArcRotateCamera_obj::_isSynchronizedViewMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.ArcRotateCamera","_isSynchronizedViewMatrix",0x2f792335,"com.gamestudiohx.babylonhx.cameras.ArcRotateCamera._isSynchronizedViewMatrix","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",130,0x866b9e20)
	HX_STACK_THIS(this)
	HX_STACK_LINE(131)
	if ((!(this->super::_isSynchronizedViewMatrix()))){
		HX_STACK_LINE(132)
		return false;
	}
	HX_STACK_LINE(134)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = this->_getTargetPosition();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(134)
	if (((  (((  ((this->_cache->__Field(HX_CSTRING("target"),true)->__Field(HX_CSTRING("equals"),true)(_g))) ? bool((this->_cache->__Field(HX_CSTRING("alpha"),true) == this->alpha)) : bool(false) ))) ? bool((this->_cache->__Field(HX_CSTRING("beta"),true) == this->beta)) : bool(false) ))){
		HX_STACK_LINE(137)
		return (this->_cache->__Field(HX_CSTRING("radius"),true) == this->radius);
	}
	else{
		HX_STACK_LINE(134)
		return false;
	}
	HX_STACK_LINE(134)
	return false;
}


Void ArcRotateCamera_obj::setPosition( ::com::gamestudiohx::babylonhx::tools::math::Vector3 position){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.ArcRotateCamera","setPosition",0xffe1c67d,"com.gamestudiohx.babylonhx.cameras.ArcRotateCamera.setPosition","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",140,0x866b9e20)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_LINE(141)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 radiusv3;		HX_STACK_VAR(radiusv3,"radiusv3");
		HX_STACK_LINE(141)
		{
			HX_STACK_LINE(141)
			Dynamic _g = ::Reflect_obj::field(this->target,HX_CSTRING("position"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(141)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector;		HX_STACK_VAR(otherVector,"otherVector");
			HX_STACK_LINE(141)
			if (((_g != null()))){
				HX_STACK_LINE(141)
				otherVector = ::Reflect_obj::field(this->target,HX_CSTRING("position"));
			}
			else{
				HX_STACK_LINE(141)
				otherVector = this->target;
			}
			HX_STACK_LINE(141)
			radiusv3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((position->x - otherVector->x),(position->y - otherVector->y),(position->z - otherVector->z));
		}
		HX_STACK_LINE(142)
		Float _g1 = ::Math_obj::sqrt((((radiusv3->x * radiusv3->x) + (radiusv3->y * radiusv3->y)) + (radiusv3->z * radiusv3->z)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(142)
		this->radius = _g1;
		HX_STACK_LINE(144)
		Float _g2 = ::Math_obj::atan((Float(radiusv3->z) / Float(radiusv3->x)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(144)
		this->alpha = _g2;
		HX_STACK_LINE(145)
		Float _g3 = ::Math_obj::acos((Float(radiusv3->y) / Float(this->radius)));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(145)
		this->beta = _g3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ArcRotateCamera_obj,setPosition,(void))

Void ArcRotateCamera_obj::attachControl( ::openfl::display::DisplayObject canvas,hx::Null< bool >  __o_noPreventDefault){
bool noPreventDefault = __o_noPreventDefault.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.ArcRotateCamera","attachControl",0x283cceaa,"com.gamestudiohx.babylonhx.cameras.ArcRotateCamera.attachControl","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",148,0x866b9e20)
	HX_STACK_THIS(this)
	HX_STACK_ARG(canvas,"canvas")
	HX_STACK_ARG(noPreventDefault,"noPreventDefault")
{
		HX_STACK_LINE(148)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(149)
		Dynamic previousPosition = Dynamic( Array_obj<Dynamic>::__new().Add(null()));		HX_STACK_VAR(previousPosition,"previousPosition");
		HX_STACK_LINE(151)
		if (((this->_attachedCanvas != null()))){
			HX_STACK_LINE(152)
			return null();
		}
		HX_STACK_LINE(154)
		this->_attachedCanvas = canvas;
		HX_STACK_LINE(156)
		Array< ::Dynamic > engine = Array_obj< ::Dynamic >::__new().Add(this->_scene->getEngine());		HX_STACK_VAR(engine,"engine");
		HX_STACK_LINE(158)
		if (((this->_onMouseDown_dyn() == null()))){

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g,Dynamic,previousPosition)
			Void run(::openfl::events::MouseEvent evt){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",160,0x866b9e20)
				HX_STACK_ARG(evt,"evt")
				{
					struct _Function_3_1{
						inline static Dynamic Block( Array< ::Dynamic > &_g){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",160,0x866b9e20)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("x") , _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->_attachedCanvas->get_mouseX(),false);
								__result->Add(HX_CSTRING("y") , _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->_attachedCanvas->get_mouseY(),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(160)
					hx::IndexRef((previousPosition).mPtr,(int)0) = _Function_3_1::Block(_g);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(159)
			this->_onMouseDown =  Dynamic(new _Function_2_1(_g,previousPosition));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Dynamic,previousPosition)
			Void run(::openfl::events::MouseEvent evt){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",167,0x866b9e20)
				HX_STACK_ARG(evt,"evt")
				{
					HX_STACK_LINE(167)
					hx::IndexRef((previousPosition).mPtr,(int)0) = null();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(166)
			this->_onMouseUp =  Dynamic(new _Function_2_2(previousPosition));

			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_3,Array< ::Dynamic >,_g,Array< ::Dynamic >,engine,Dynamic,previousPosition)
			Void run(::openfl::events::MouseEvent evt){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",170,0x866b9e20)
				HX_STACK_ARG(evt,"evt")
				{
					HX_STACK_LINE(171)
					if (((bool((previousPosition->__GetItem((int)0) == null())) && bool(!(engine->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->isPointerLock))))){
						HX_STACK_LINE(172)
						return null();
					}
					HX_STACK_LINE(175)
					Float offsetX = (int)0;		HX_STACK_VAR(offsetX,"offsetX");
					HX_STACK_LINE(176)
					Float offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
					HX_STACK_LINE(178)
					if ((!(engine->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->isPointerLock))){
						HX_STACK_LINE(179)
						offsetX = (_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->_attachedCanvas->get_mouseX() - previousPosition->__GetItem((int)0)->__Field(HX_CSTRING("x"),true));
						HX_STACK_LINE(180)
						offsetY = (_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->_attachedCanvas->get_mouseY() - previousPosition->__GetItem((int)0)->__Field(HX_CSTRING("y"),true));
					}
					HX_STACK_LINE(183)
					hx::SubEq(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->inertialAlphaOffset,(Float(offsetX) / Float(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->angularSensibility)));
					HX_STACK_LINE(184)
					hx::SubEq(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->inertialBetaOffset,(Float(offsetY) / Float(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->angularSensibility)));
					struct _Function_3_1{
						inline static Dynamic Block( Array< ::Dynamic > &_g){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",186,0x866b9e20)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("x") , _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->_attachedCanvas->get_mouseX(),false);
								__result->Add(HX_CSTRING("y") , _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->_attachedCanvas->get_mouseY(),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(186)
					hx::IndexRef((previousPosition).mPtr,(int)0) = _Function_3_1::Block(_g);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(170)
			this->_onMouseMove =  Dynamic(new _Function_2_3(_g,engine,previousPosition));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_4,Array< ::Dynamic >,_g)
			Void run(::openfl::events::MouseEvent event){
				HX_STACK_FRAME("*","_Function_2_4",0x5201af7b,"*._Function_2_4","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",192,0x866b9e20)
				HX_STACK_ARG(event,"event")
				{
					HX_STACK_LINE(193)
					Float delta = (Float(event->delta) / Float((int)3));		HX_STACK_VAR(delta,"delta");
					HX_STACK_LINE(195)
					hx::AddEq(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->inertialRadiusOffset,delta);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(192)
			this->_wheel =  Dynamic(new _Function_2_4(_g));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_5,Array< ::Dynamic >,_g)
			Void run(::openfl::events::KeyboardEvent evt){
				HX_STACK_FRAME("*","_Function_2_5",0x5201af7c,"*._Function_2_5","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",199,0x866b9e20)
				HX_STACK_ARG(evt,"evt")
				{
					HX_STACK_LINE(199)
					if (((bool((bool((bool((::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->keysUp,evt->keyCode) != (int)-1)) || bool((::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->keysDown,evt->keyCode) != (int)-1)))) || bool((::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->keysLeft,evt->keyCode) != (int)-1)))) || bool((::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->keysRight,evt->keyCode) != (int)-1))))){
						HX_STACK_LINE(203)
						int index = ::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->_keys,evt->keyCode);		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(205)
						if (((index == (int)-1))){
							HX_STACK_LINE(206)
							_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->_keys->push(evt->keyCode);
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(198)
			this->_onKeyDown =  Dynamic(new _Function_2_5(_g));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_6,Array< ::Dynamic >,_g)
			Void run(::openfl::events::KeyboardEvent evt){
				HX_STACK_FRAME("*","_Function_2_6",0x5201af7d,"*._Function_2_6","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",212,0x866b9e20)
				HX_STACK_ARG(evt,"evt")
				{
					HX_STACK_LINE(212)
					if (((bool((bool((bool((::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->keysUp,evt->keyCode) != (int)-1)) || bool((::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->keysDown,evt->keyCode) != (int)-1)))) || bool((::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->keysLeft,evt->keyCode) != (int)-1)))) || bool((::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->keysRight,evt->keyCode) != (int)-1))))){
						HX_STACK_LINE(216)
						int index = ::Lambda_obj::indexOf(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->_keys,evt->keyCode);		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(218)
						if (((index >= (int)0))){
							HX_STACK_LINE(219)
							_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->_keys->splice(index,(int)1);
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(211)
			this->_onKeyUp =  Dynamic(new _Function_2_6(_g));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_7,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_7",0x5201af7e,"*._Function_2_7","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",225,0x866b9e20)
				{
					HX_STACK_LINE(225)
					_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->_keys = Array_obj< int >::__new();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(224)
			this->_onLostFocus =  Dynamic(new _Function_2_7(_g));

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_8,Array< ::Dynamic >,_g,Dynamic,previousPosition)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_8",0x5201af7f,"*._Function_2_8","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",228,0x866b9e20)
				{
					HX_STACK_LINE(229)
					_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->_keys = Array_obj< int >::__new();
					HX_STACK_LINE(230)
					_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->inertialAlphaOffset = (int)0;
					HX_STACK_LINE(231)
					_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera >()->inertialBetaOffset = (int)0;
					HX_STACK_LINE(232)
					hx::IndexRef((previousPosition).mPtr,(int)0) = null();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(228)
			this->_reset =  Dynamic(new _Function_2_8(_g,previousPosition));
		}
		HX_STACK_LINE(236)
		::openfl::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onMouseDown_dyn(),false,null(),null());
		HX_STACK_LINE(237)
		::openfl::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->_onMouseUp_dyn(),false,null(),null());
		HX_STACK_LINE(238)
		::openfl::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_OUT,this->_onMouseOut_dyn(),false,null(),null());
		HX_STACK_LINE(239)
		::openfl::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->_onMouseMove_dyn(),false,null(),null());
		HX_STACK_LINE(240)
		::openfl::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::events::KeyboardEvent_obj::KEY_DOWN,this->_onKeyDown_dyn(),false,null(),null());
		HX_STACK_LINE(241)
		::openfl::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::events::KeyboardEvent_obj::KEY_UP,this->_onKeyUp_dyn(),false,null(),null());
		HX_STACK_LINE(242)
		::openfl::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_WHEEL,this->_wheel_dyn(),false,null(),null());
	}
return null();
}


Void ArcRotateCamera_obj::detachControl( ::openfl::display::DisplayObject canvas){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.ArcRotateCamera","detachControl",0x1f46dadc,"com.gamestudiohx.babylonhx.cameras.ArcRotateCamera.detachControl","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",246,0x866b9e20)
		HX_STACK_THIS(this)
		HX_STACK_ARG(canvas,"canvas")
		HX_STACK_LINE(247)
		if (((this->_attachedCanvas != canvas))){
			HX_STACK_LINE(248)
			return null();
		}
		HX_STACK_LINE(251)
		::openfl::Lib_obj::get_current()->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onMouseDown_dyn(),null());
		HX_STACK_LINE(252)
		::openfl::Lib_obj::get_current()->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->_onMouseUp_dyn(),null());
		HX_STACK_LINE(253)
		::openfl::Lib_obj::get_current()->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_OUT,this->_onMouseOut_dyn(),null());
		HX_STACK_LINE(254)
		::openfl::Lib_obj::get_current()->get_stage()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->_onMouseMove_dyn(),null());
		HX_STACK_LINE(255)
		::openfl::Lib_obj::get_current()->get_stage()->removeEventListener(::openfl::events::KeyboardEvent_obj::KEY_DOWN,this->_onKeyDown_dyn(),null());
		HX_STACK_LINE(256)
		::openfl::Lib_obj::get_current()->get_stage()->removeEventListener(::openfl::events::KeyboardEvent_obj::KEY_UP,this->_onKeyUp_dyn(),null());
		HX_STACK_LINE(259)
		this->_attachedCanvas = null();
		HX_STACK_LINE(260)
		if (((this->_reset_dyn() != null()))){
			HX_STACK_LINE(261)
			this->_reset();
		}
	}
return null();
}


Void ArcRotateCamera_obj::_update( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.ArcRotateCamera","_update",0xc5bb02ba,"com.gamestudiohx.babylonhx.cameras.ArcRotateCamera._update","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",265,0x866b9e20)
		HX_STACK_THIS(this)
		HX_STACK_LINE(267)
		{
			HX_STACK_LINE(267)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(267)
			int _g = this->_keys->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(267)
			while((true)){
				HX_STACK_LINE(267)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(267)
					break;
				}
				HX_STACK_LINE(267)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(268)
				int keyCode = this->_keys->__get(index);		HX_STACK_VAR(keyCode,"keyCode");
				HX_STACK_LINE(270)
				int _g2 = ::Lambda_obj::indexOf(this->keysLeft,keyCode);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(270)
				if (((_g2 != (int)-1))){
					HX_STACK_LINE(271)
					hx::SubEq(this->inertialAlphaOffset,0.01);
				}
				else{
					HX_STACK_LINE(272)
					int _g11 = ::Lambda_obj::indexOf(this->keysUp,keyCode);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(272)
					if (((_g11 != (int)-1))){
						HX_STACK_LINE(273)
						hx::SubEq(this->inertialBetaOffset,0.01);
					}
					else{
						HX_STACK_LINE(274)
						int _g21 = ::Lambda_obj::indexOf(this->keysRight,keyCode);		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(274)
						if (((_g21 != (int)-1))){
							HX_STACK_LINE(275)
							hx::AddEq(this->inertialAlphaOffset,0.01);
						}
						else{
							HX_STACK_LINE(276)
							int _g3 = ::Lambda_obj::indexOf(this->keysDown,keyCode);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(276)
							if (((_g3 != (int)-1))){
								HX_STACK_LINE(277)
								hx::AddEq(this->inertialBetaOffset,0.01);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(282)
		if (((bool((bool((this->inertialAlphaOffset != (int)0)) || bool((this->inertialBetaOffset != (int)0)))) || bool((this->inertialRadiusOffset != (int)0))))){
			HX_STACK_LINE(284)
			hx::AddEq(this->alpha,this->inertialAlphaOffset);
			HX_STACK_LINE(285)
			hx::AddEq(this->beta,this->inertialBetaOffset);
			HX_STACK_LINE(286)
			hx::SubEq(this->radius,this->inertialRadiusOffset);
			HX_STACK_LINE(288)
			hx::MultEq(this->inertialAlphaOffset,this->inertia);
			HX_STACK_LINE(289)
			hx::MultEq(this->inertialBetaOffset,this->inertia);
			HX_STACK_LINE(290)
			hx::MultEq(this->inertialRadiusOffset,this->inertia);
			HX_STACK_LINE(292)
			Float _g4 = ::Math_obj::abs(this->inertialAlphaOffset);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(292)
			if (((_g4 < ::com::gamestudiohx::babylonhx::Engine_obj::epsilon))){
				HX_STACK_LINE(293)
				this->inertialAlphaOffset = (int)0;
			}
			HX_STACK_LINE(295)
			Float _g5 = ::Math_obj::abs(this->inertialBetaOffset);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(295)
			if (((_g5 < ::com::gamestudiohx::babylonhx::Engine_obj::epsilon))){
				HX_STACK_LINE(296)
				this->inertialBetaOffset = (int)0;
			}
			HX_STACK_LINE(298)
			Float _g6 = ::Math_obj::abs(this->inertialRadiusOffset);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(298)
			if (((_g6 < ::com::gamestudiohx::babylonhx::Engine_obj::epsilon))){
				HX_STACK_LINE(299)
				this->inertialRadiusOffset = (int)0;
			}
		}
		HX_STACK_LINE(303)
		if (((bool((this->lowerAlphaLimit != null())) && bool((this->alpha < this->lowerAlphaLimit))))){
			HX_STACK_LINE(304)
			this->alpha = this->lowerAlphaLimit;
		}
		HX_STACK_LINE(306)
		if (((bool((this->upperAlphaLimit != null())) && bool((this->alpha > this->upperAlphaLimit))))){
			HX_STACK_LINE(307)
			this->alpha = this->upperAlphaLimit;
		}
		HX_STACK_LINE(309)
		if (((bool((this->lowerBetaLimit != null())) && bool((this->beta < this->lowerBetaLimit))))){
			HX_STACK_LINE(310)
			this->beta = this->lowerBetaLimit;
		}
		HX_STACK_LINE(312)
		if (((bool((this->upperBetaLimit != null())) && bool((this->beta > this->upperBetaLimit))))){
			HX_STACK_LINE(313)
			this->beta = this->upperBetaLimit;
		}
		HX_STACK_LINE(315)
		if (((bool((this->lowerRadiusLimit != null())) && bool((this->radius < this->lowerRadiusLimit))))){
			HX_STACK_LINE(316)
			this->radius = this->lowerRadiusLimit;
		}
		HX_STACK_LINE(318)
		if (((bool((this->upperRadiusLimit != null())) && bool((this->radius > this->upperRadiusLimit))))){
			HX_STACK_LINE(319)
			this->radius = this->upperRadiusLimit;
		}
	}
return null();
}


::com::gamestudiohx::babylonhx::tools::math::Matrix ArcRotateCamera_obj::_getViewMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.cameras.ArcRotateCamera","_getViewMatrix",0x869a7e2b,"com.gamestudiohx.babylonhx.cameras.ArcRotateCamera._getViewMatrix","com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.hx",323,0x866b9e20)
	HX_STACK_THIS(this)
	HX_STACK_LINE(324)
	Float cosa = ::Math_obj::cos(this->alpha);		HX_STACK_VAR(cosa,"cosa");
	HX_STACK_LINE(325)
	Float sina = ::Math_obj::sin(this->alpha);		HX_STACK_VAR(sina,"sina");
	HX_STACK_LINE(326)
	Float cosb = ::Math_obj::cos(this->beta);		HX_STACK_VAR(cosb,"cosb");
	HX_STACK_LINE(327)
	Float sinb = ::Math_obj::sin(this->beta);		HX_STACK_VAR(sinb,"sinb");
	HX_STACK_LINE(329)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 target = this->_getTargetPosition();		HX_STACK_VAR(target,"target");
	HX_STACK_LINE(331)
	{
		HX_STACK_LINE(331)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(((this->radius * cosa) * sinb),(this->radius * cosb),((this->radius * sina) * sinb));		HX_STACK_VAR(otherVector,"otherVector");
		HX_STACK_LINE(331)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->position;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(331)
		result->x = (target->x + otherVector->x);
		HX_STACK_LINE(331)
		result->y = (target->y + otherVector->y);
		HX_STACK_LINE(331)
		result->z = (target->z + otherVector->z);
		HX_STACK_LINE(331)
		result;
	}
	HX_STACK_LINE(332)
	{
		HX_STACK_LINE(332)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 eye = this->position;		HX_STACK_VAR(eye,"eye");
		HX_STACK_LINE(332)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 up = this->upVector;		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(332)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_viewMatrix;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(332)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
		HX_STACK_LINE(332)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
		HX_STACK_LINE(332)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
		HX_STACK_LINE(332)
		{
			HX_STACK_LINE(332)
			zAxis->x = (target->x - eye->x);
			HX_STACK_LINE(332)
			zAxis->y = (target->y - eye->y);
			HX_STACK_LINE(332)
			zAxis->z = (target->z - eye->z);
		}
		HX_STACK_LINE(332)
		{
			HX_STACK_LINE(332)
			Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(332)
			if (((len != (int)0))){
				HX_STACK_LINE(332)
				Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(332)
				hx::MultEq(zAxis->x,num);
				HX_STACK_LINE(332)
				hx::MultEq(zAxis->y,num);
				HX_STACK_LINE(332)
				hx::MultEq(zAxis->z,num);
			}
		}
		HX_STACK_LINE(332)
		{
			HX_STACK_LINE(332)
			xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
			HX_STACK_LINE(332)
			xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
			HX_STACK_LINE(332)
			xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
		}
		HX_STACK_LINE(332)
		{
			HX_STACK_LINE(332)
			Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(332)
			if (((len != (int)0))){
				HX_STACK_LINE(332)
				Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(332)
				hx::MultEq(xAxis->x,num);
				HX_STACK_LINE(332)
				hx::MultEq(xAxis->y,num);
				HX_STACK_LINE(332)
				hx::MultEq(xAxis->z,num);
			}
		}
		HX_STACK_LINE(332)
		{
			HX_STACK_LINE(332)
			yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
			HX_STACK_LINE(332)
			yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
			HX_STACK_LINE(332)
			yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
		}
		HX_STACK_LINE(332)
		{
			HX_STACK_LINE(332)
			Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(332)
			if (((len != (int)0))){
				HX_STACK_LINE(332)
				Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(332)
				hx::MultEq(yAxis->x,num);
				HX_STACK_LINE(332)
				hx::MultEq(yAxis->y,num);
				HX_STACK_LINE(332)
				hx::MultEq(yAxis->z,num);
			}
		}
		HX_STACK_LINE(332)
		Float ex = -(((((xAxis->x * eye->x) + (xAxis->y * eye->y)) + (xAxis->z * eye->z))));		HX_STACK_VAR(ex,"ex");
		HX_STACK_LINE(332)
		Float ey = -(((((yAxis->x * eye->x) + (yAxis->y * eye->y)) + (yAxis->z * eye->z))));		HX_STACK_VAR(ey,"ey");
		HX_STACK_LINE(332)
		Float ez = -(((((zAxis->x * eye->x) + (zAxis->y * eye->y)) + (zAxis->z * eye->z))));		HX_STACK_VAR(ez,"ez");
		HX_STACK_LINE(332)
		{
			HX_STACK_LINE(332)
			result->m[(int)0] = xAxis->x;
			HX_STACK_LINE(332)
			result->m[(int)1] = yAxis->x;
			HX_STACK_LINE(332)
			result->m[(int)2] = zAxis->x;
			HX_STACK_LINE(332)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(332)
			result->m[(int)4] = xAxis->y;
			HX_STACK_LINE(332)
			result->m[(int)5] = yAxis->y;
			HX_STACK_LINE(332)
			result->m[(int)6] = zAxis->y;
			HX_STACK_LINE(332)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(332)
			result->m[(int)8] = xAxis->z;
			HX_STACK_LINE(332)
			result->m[(int)9] = yAxis->z;
			HX_STACK_LINE(332)
			result->m[(int)10] = zAxis->z;
			HX_STACK_LINE(332)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(332)
			result->m[(int)12] = ex;
			HX_STACK_LINE(332)
			result->m[(int)13] = ey;
			HX_STACK_LINE(332)
			result->m[(int)14] = ez;
			HX_STACK_LINE(332)
			result->m[(int)15] = (int)1;
			HX_STACK_LINE(332)
			result;
		}
	}
	HX_STACK_LINE(334)
	return this->_viewMatrix;
}



ArcRotateCamera_obj::ArcRotateCamera_obj()
{
}

void ArcRotateCamera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArcRotateCamera);
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(beta,"beta");
	HX_MARK_MEMBER_NAME(radius,"radius");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(_keys,"_keys");
	HX_MARK_MEMBER_NAME(keysUp,"keysUp");
	HX_MARK_MEMBER_NAME(keysDown,"keysDown");
	HX_MARK_MEMBER_NAME(keysLeft,"keysLeft");
	HX_MARK_MEMBER_NAME(keysRight,"keysRight");
	HX_MARK_MEMBER_NAME(_viewMatrix,"_viewMatrix");
	HX_MARK_MEMBER_NAME(_attachedCanvas,"_attachedCanvas");
	HX_MARK_MEMBER_NAME(_onMouseDown,"_onMouseDown");
	HX_MARK_MEMBER_NAME(_onMouseUp,"_onMouseUp");
	HX_MARK_MEMBER_NAME(_onMouseOut,"_onMouseOut");
	HX_MARK_MEMBER_NAME(_onMouseMove,"_onMouseMove");
	HX_MARK_MEMBER_NAME(_wheel,"_wheel");
	HX_MARK_MEMBER_NAME(_onKeyDown,"_onKeyDown");
	HX_MARK_MEMBER_NAME(_onKeyUp,"_onKeyUp");
	HX_MARK_MEMBER_NAME(_onLostFocus,"_onLostFocus");
	HX_MARK_MEMBER_NAME(_reset,"_reset");
	HX_MARK_MEMBER_NAME(inertialAlphaOffset,"inertialAlphaOffset");
	HX_MARK_MEMBER_NAME(inertialBetaOffset,"inertialBetaOffset");
	HX_MARK_MEMBER_NAME(inertialRadiusOffset,"inertialRadiusOffset");
	HX_MARK_MEMBER_NAME(lowerAlphaLimit,"lowerAlphaLimit");
	HX_MARK_MEMBER_NAME(upperAlphaLimit,"upperAlphaLimit");
	HX_MARK_MEMBER_NAME(lowerBetaLimit,"lowerBetaLimit");
	HX_MARK_MEMBER_NAME(upperBetaLimit,"upperBetaLimit");
	HX_MARK_MEMBER_NAME(lowerRadiusLimit,"lowerRadiusLimit");
	HX_MARK_MEMBER_NAME(upperRadiusLimit,"upperRadiusLimit");
	HX_MARK_MEMBER_NAME(angularSensibility,"angularSensibility");
	::com::gamestudiohx::babylonhx::cameras::Camera_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ArcRotateCamera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(beta,"beta");
	HX_VISIT_MEMBER_NAME(radius,"radius");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(_keys,"_keys");
	HX_VISIT_MEMBER_NAME(keysUp,"keysUp");
	HX_VISIT_MEMBER_NAME(keysDown,"keysDown");
	HX_VISIT_MEMBER_NAME(keysLeft,"keysLeft");
	HX_VISIT_MEMBER_NAME(keysRight,"keysRight");
	HX_VISIT_MEMBER_NAME(_viewMatrix,"_viewMatrix");
	HX_VISIT_MEMBER_NAME(_attachedCanvas,"_attachedCanvas");
	HX_VISIT_MEMBER_NAME(_onMouseDown,"_onMouseDown");
	HX_VISIT_MEMBER_NAME(_onMouseUp,"_onMouseUp");
	HX_VISIT_MEMBER_NAME(_onMouseOut,"_onMouseOut");
	HX_VISIT_MEMBER_NAME(_onMouseMove,"_onMouseMove");
	HX_VISIT_MEMBER_NAME(_wheel,"_wheel");
	HX_VISIT_MEMBER_NAME(_onKeyDown,"_onKeyDown");
	HX_VISIT_MEMBER_NAME(_onKeyUp,"_onKeyUp");
	HX_VISIT_MEMBER_NAME(_onLostFocus,"_onLostFocus");
	HX_VISIT_MEMBER_NAME(_reset,"_reset");
	HX_VISIT_MEMBER_NAME(inertialAlphaOffset,"inertialAlphaOffset");
	HX_VISIT_MEMBER_NAME(inertialBetaOffset,"inertialBetaOffset");
	HX_VISIT_MEMBER_NAME(inertialRadiusOffset,"inertialRadiusOffset");
	HX_VISIT_MEMBER_NAME(lowerAlphaLimit,"lowerAlphaLimit");
	HX_VISIT_MEMBER_NAME(upperAlphaLimit,"upperAlphaLimit");
	HX_VISIT_MEMBER_NAME(lowerBetaLimit,"lowerBetaLimit");
	HX_VISIT_MEMBER_NAME(upperBetaLimit,"upperBetaLimit");
	HX_VISIT_MEMBER_NAME(lowerRadiusLimit,"lowerRadiusLimit");
	HX_VISIT_MEMBER_NAME(upperRadiusLimit,"upperRadiusLimit");
	HX_VISIT_MEMBER_NAME(angularSensibility,"angularSensibility");
	::com::gamestudiohx::babylonhx::cameras::Camera_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ArcRotateCamera_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"beta") ) { return beta; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"_keys") ) { return _keys; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return radius; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"keysUp") ) { return keysUp; }
		if (HX_FIELD_EQ(inName,"_wheel") ) { return _wheel; }
		if (HX_FIELD_EQ(inName,"_reset") ) { return _reset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_update") ) { return _update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keysDown") ) { return keysDown; }
		if (HX_FIELD_EQ(inName,"keysLeft") ) { return keysLeft; }
		if (HX_FIELD_EQ(inName,"_onKeyUp") ) { return _onKeyUp; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keysRight") ) { return keysRight; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_onMouseUp") ) { return _onMouseUp; }
		if (HX_FIELD_EQ(inName,"_onKeyDown") ) { return _onKeyDown; }
		if (HX_FIELD_EQ(inName,"_initCache") ) { return _initCache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_viewMatrix") ) { return _viewMatrix; }
		if (HX_FIELD_EQ(inName,"_onMouseOut") ) { return _onMouseOut; }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return _onMouseDown; }
		if (HX_FIELD_EQ(inName,"_onMouseMove") ) { return _onMouseMove; }
		if (HX_FIELD_EQ(inName,"_onLostFocus") ) { return _onLostFocus; }
		if (HX_FIELD_EQ(inName,"_updateCache") ) { return _updateCache_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"attachControl") ) { return attachControl_dyn(); }
		if (HX_FIELD_EQ(inName,"detachControl") ) { return detachControl_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lowerBetaLimit") ) { return lowerBetaLimit; }
		if (HX_FIELD_EQ(inName,"upperBetaLimit") ) { return upperBetaLimit; }
		if (HX_FIELD_EQ(inName,"_getViewMatrix") ) { return _getViewMatrix_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_attachedCanvas") ) { return _attachedCanvas; }
		if (HX_FIELD_EQ(inName,"lowerAlphaLimit") ) { return lowerAlphaLimit; }
		if (HX_FIELD_EQ(inName,"upperAlphaLimit") ) { return upperAlphaLimit; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lowerRadiusLimit") ) { return lowerRadiusLimit; }
		if (HX_FIELD_EQ(inName,"upperRadiusLimit") ) { return upperRadiusLimit; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inertialBetaOffset") ) { return inertialBetaOffset; }
		if (HX_FIELD_EQ(inName,"angularSensibility") ) { return angularSensibility; }
		if (HX_FIELD_EQ(inName,"_getTargetPosition") ) { return _getTargetPosition_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"inertialAlphaOffset") ) { return inertialAlphaOffset; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inertialRadiusOffset") ) { return inertialRadiusOffset; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_isSynchronizedViewMatrix") ) { return _isSynchronizedViewMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArcRotateCamera_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"beta") ) { beta=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keys") ) { _keys=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { radius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keysUp") ) { keysUp=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_wheel") ) { _wheel=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reset") ) { _reset=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keysDown") ) { keysDown=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keysLeft") ) { keysLeft=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onKeyUp") ) { _onKeyUp=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keysRight") ) { keysRight=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_onMouseUp") ) { _onMouseUp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onKeyDown") ) { _onKeyDown=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_viewMatrix") ) { _viewMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onMouseOut") ) { _onMouseOut=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { _onMouseDown=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onMouseMove") ) { _onMouseMove=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onLostFocus") ) { _onLostFocus=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lowerBetaLimit") ) { lowerBetaLimit=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upperBetaLimit") ) { upperBetaLimit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_attachedCanvas") ) { _attachedCanvas=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lowerAlphaLimit") ) { lowerAlphaLimit=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upperAlphaLimit") ) { upperAlphaLimit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lowerRadiusLimit") ) { lowerRadiusLimit=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upperRadiusLimit") ) { upperRadiusLimit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inertialBetaOffset") ) { inertialBetaOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularSensibility") ) { angularSensibility=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"inertialAlphaOffset") ) { inertialAlphaOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inertialRadiusOffset") ) { inertialRadiusOffset=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArcRotateCamera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("beta"));
	outFields->push(HX_CSTRING("radius"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("_keys"));
	outFields->push(HX_CSTRING("keysUp"));
	outFields->push(HX_CSTRING("keysDown"));
	outFields->push(HX_CSTRING("keysLeft"));
	outFields->push(HX_CSTRING("keysRight"));
	outFields->push(HX_CSTRING("_viewMatrix"));
	outFields->push(HX_CSTRING("_attachedCanvas"));
	outFields->push(HX_CSTRING("inertialAlphaOffset"));
	outFields->push(HX_CSTRING("inertialBetaOffset"));
	outFields->push(HX_CSTRING("inertialRadiusOffset"));
	outFields->push(HX_CSTRING("lowerAlphaLimit"));
	outFields->push(HX_CSTRING("upperAlphaLimit"));
	outFields->push(HX_CSTRING("lowerBetaLimit"));
	outFields->push(HX_CSTRING("upperBetaLimit"));
	outFields->push(HX_CSTRING("lowerRadiusLimit"));
	outFields->push(HX_CSTRING("upperRadiusLimit"));
	outFields->push(HX_CSTRING("angularSensibility"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ArcRotateCamera_obj,alpha),HX_CSTRING("alpha")},
	{hx::fsFloat,(int)offsetof(ArcRotateCamera_obj,beta),HX_CSTRING("beta")},
	{hx::fsFloat,(int)offsetof(ArcRotateCamera_obj,radius),HX_CSTRING("radius")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(ArcRotateCamera_obj,target),HX_CSTRING("target")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ArcRotateCamera_obj,_keys),HX_CSTRING("_keys")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ArcRotateCamera_obj,keysUp),HX_CSTRING("keysUp")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ArcRotateCamera_obj,keysDown),HX_CSTRING("keysDown")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ArcRotateCamera_obj,keysLeft),HX_CSTRING("keysLeft")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ArcRotateCamera_obj,keysRight),HX_CSTRING("keysRight")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(ArcRotateCamera_obj,_viewMatrix),HX_CSTRING("_viewMatrix")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(ArcRotateCamera_obj,_attachedCanvas),HX_CSTRING("_attachedCanvas")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ArcRotateCamera_obj,_onMouseDown),HX_CSTRING("_onMouseDown")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ArcRotateCamera_obj,_onMouseUp),HX_CSTRING("_onMouseUp")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ArcRotateCamera_obj,_onMouseOut),HX_CSTRING("_onMouseOut")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ArcRotateCamera_obj,_onMouseMove),HX_CSTRING("_onMouseMove")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ArcRotateCamera_obj,_wheel),HX_CSTRING("_wheel")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ArcRotateCamera_obj,_onKeyDown),HX_CSTRING("_onKeyDown")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ArcRotateCamera_obj,_onKeyUp),HX_CSTRING("_onKeyUp")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ArcRotateCamera_obj,_onLostFocus),HX_CSTRING("_onLostFocus")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ArcRotateCamera_obj,_reset),HX_CSTRING("_reset")},
	{hx::fsFloat,(int)offsetof(ArcRotateCamera_obj,inertialAlphaOffset),HX_CSTRING("inertialAlphaOffset")},
	{hx::fsFloat,(int)offsetof(ArcRotateCamera_obj,inertialBetaOffset),HX_CSTRING("inertialBetaOffset")},
	{hx::fsFloat,(int)offsetof(ArcRotateCamera_obj,inertialRadiusOffset),HX_CSTRING("inertialRadiusOffset")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ArcRotateCamera_obj,lowerAlphaLimit),HX_CSTRING("lowerAlphaLimit")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ArcRotateCamera_obj,upperAlphaLimit),HX_CSTRING("upperAlphaLimit")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ArcRotateCamera_obj,lowerBetaLimit),HX_CSTRING("lowerBetaLimit")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ArcRotateCamera_obj,upperBetaLimit),HX_CSTRING("upperBetaLimit")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ArcRotateCamera_obj,lowerRadiusLimit),HX_CSTRING("lowerRadiusLimit")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ArcRotateCamera_obj,upperRadiusLimit),HX_CSTRING("upperRadiusLimit")},
	{hx::fsFloat,(int)offsetof(ArcRotateCamera_obj,angularSensibility),HX_CSTRING("angularSensibility")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("alpha"),
	HX_CSTRING("beta"),
	HX_CSTRING("radius"),
	HX_CSTRING("target"),
	HX_CSTRING("_keys"),
	HX_CSTRING("keysUp"),
	HX_CSTRING("keysDown"),
	HX_CSTRING("keysLeft"),
	HX_CSTRING("keysRight"),
	HX_CSTRING("_viewMatrix"),
	HX_CSTRING("_attachedCanvas"),
	HX_CSTRING("_onMouseDown"),
	HX_CSTRING("_onMouseUp"),
	HX_CSTRING("_onMouseOut"),
	HX_CSTRING("_onMouseMove"),
	HX_CSTRING("_wheel"),
	HX_CSTRING("_onKeyDown"),
	HX_CSTRING("_onKeyUp"),
	HX_CSTRING("_onLostFocus"),
	HX_CSTRING("_reset"),
	HX_CSTRING("inertialAlphaOffset"),
	HX_CSTRING("inertialBetaOffset"),
	HX_CSTRING("inertialRadiusOffset"),
	HX_CSTRING("lowerAlphaLimit"),
	HX_CSTRING("upperAlphaLimit"),
	HX_CSTRING("lowerBetaLimit"),
	HX_CSTRING("upperBetaLimit"),
	HX_CSTRING("lowerRadiusLimit"),
	HX_CSTRING("upperRadiusLimit"),
	HX_CSTRING("angularSensibility"),
	HX_CSTRING("_initCache"),
	HX_CSTRING("_updateCache"),
	HX_CSTRING("_getTargetPosition"),
	HX_CSTRING("_isSynchronizedViewMatrix"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("attachControl"),
	HX_CSTRING("detachControl"),
	HX_CSTRING("_update"),
	HX_CSTRING("_getViewMatrix"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArcRotateCamera_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArcRotateCamera_obj::__mClass,"__mClass");
};

#endif

Class ArcRotateCamera_obj::__mClass;

void ArcRotateCamera_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.cameras.ArcRotateCamera"), hx::TCanCast< ArcRotateCamera_obj> ,sStaticFields,sMemberFields,
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

void ArcRotateCamera_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace cameras
