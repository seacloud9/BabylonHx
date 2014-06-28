#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_animations_Animation
#include <com/gamestudiohx/babylonhx/animations/Animation.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_animations__Animatable
#include <com/gamestudiohx/babylonhx/animations/_Animatable.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace animations{

Void _Animatable_obj::__construct(Dynamic target,hx::Null< Float >  __o_from,hx::Null< Float >  __o_to,hx::Null< bool >  __o_loop,hx::Null< Float >  __o_speedRatio,Dynamic onAnimationEnd)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.animations._Animatable","new",0x4404e5c2,"com.gamestudiohx.babylonhx.animations._Animatable.new","com/gamestudiohx/babylonhx/animations/_Animatable.hx",9,0xbe02162e)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(__o_from,"from")
HX_STACK_ARG(__o_to,"to")
HX_STACK_ARG(__o_loop,"loop")
HX_STACK_ARG(__o_speedRatio,"speedRatio")
HX_STACK_ARG(onAnimationEnd,"onAnimationEnd")
Float from = __o_from.Default(0);
Float to = __o_to.Default(100);
bool loop = __o_loop.Default(false);
Float speedRatio = __o_speedRatio.Default(1.0);
{
	HX_STACK_LINE(19)
	this->_localDelayOffset = (int)-1;
	HX_STACK_LINE(23)
	this->target = target;
	HX_STACK_LINE(24)
	this->fromFrame = from;
	HX_STACK_LINE(25)
	this->toFrame = to;
	HX_STACK_LINE(26)
	this->loopAnimation = loop;
	HX_STACK_LINE(27)
	this->speedRatio = speedRatio;
	HX_STACK_LINE(28)
	this->onAnimationEnd = onAnimationEnd;
	HX_STACK_LINE(30)
	this->animationStarted = false;
}
;
	return null();
}

//_Animatable_obj::~_Animatable_obj() { }

Dynamic _Animatable_obj::__CreateEmpty() { return  new _Animatable_obj; }
hx::ObjectPtr< _Animatable_obj > _Animatable_obj::__new(Dynamic target,hx::Null< Float >  __o_from,hx::Null< Float >  __o_to,hx::Null< bool >  __o_loop,hx::Null< Float >  __o_speedRatio,Dynamic onAnimationEnd)
{  hx::ObjectPtr< _Animatable_obj > result = new _Animatable_obj();
	result->__construct(target,__o_from,__o_to,__o_loop,__o_speedRatio,onAnimationEnd);
	return result;}

Dynamic _Animatable_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< _Animatable_obj > result = new _Animatable_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

bool _Animatable_obj::_animate( Float delay){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.animations._Animatable","_animate",0x1c415b80,"com.gamestudiohx.babylonhx.animations._Animatable._animate","com/gamestudiohx/babylonhx/animations/_Animatable.hx",33,0xbe02162e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delay,"delay")
	HX_STACK_LINE(34)
	if (((this->_localDelayOffset == (int)-1))){
		HX_STACK_LINE(35)
		this->_localDelayOffset = delay;
	}
	HX_STACK_LINE(39)
	bool running = false;		HX_STACK_VAR(running,"running");
	HX_STACK_LINE(40)
	Array< ::Dynamic > animations = this->target->__Field(HX_CSTRING("animations"),true);		HX_STACK_VAR(animations,"animations");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(41)
		int _g = animations->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		while((true)){
			HX_STACK_LINE(41)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(41)
				break;
			}
			HX_STACK_LINE(41)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(42)
			bool isRunning = animations->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::animations::Animation >()->animate(this->target,(delay - this->_localDelayOffset),this->fromFrame,this->toFrame,this->loopAnimation,this->speedRatio);		HX_STACK_VAR(isRunning,"isRunning");
			HX_STACK_LINE(43)
			running = (bool(running) || bool(isRunning));
		}
	}
	HX_STACK_LINE(46)
	if (((bool(!(running)) && bool((this->onAnimationEnd_dyn() != null()))))){
		HX_STACK_LINE(47)
		this->onAnimationEnd();
	}
	HX_STACK_LINE(50)
	return running;
}


HX_DEFINE_DYNAMIC_FUNC1(_Animatable_obj,_animate,return )


_Animatable_obj::_Animatable_obj()
{
}

void _Animatable_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(_Animatable);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(animationStarted,"animationStarted");
	HX_MARK_MEMBER_NAME(loopAnimation,"loopAnimation");
	HX_MARK_MEMBER_NAME(fromFrame,"fromFrame");
	HX_MARK_MEMBER_NAME(toFrame,"toFrame");
	HX_MARK_MEMBER_NAME(speedRatio,"speedRatio");
	HX_MARK_MEMBER_NAME(onAnimationEnd,"onAnimationEnd");
	HX_MARK_MEMBER_NAME(_localDelayOffset,"_localDelayOffset");
	HX_MARK_END_CLASS();
}

void _Animatable_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(animationStarted,"animationStarted");
	HX_VISIT_MEMBER_NAME(loopAnimation,"loopAnimation");
	HX_VISIT_MEMBER_NAME(fromFrame,"fromFrame");
	HX_VISIT_MEMBER_NAME(toFrame,"toFrame");
	HX_VISIT_MEMBER_NAME(speedRatio,"speedRatio");
	HX_VISIT_MEMBER_NAME(onAnimationEnd,"onAnimationEnd");
	HX_VISIT_MEMBER_NAME(_localDelayOffset,"_localDelayOffset");
}

Dynamic _Animatable_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toFrame") ) { return toFrame; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_animate") ) { return _animate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromFrame") ) { return fromFrame; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"speedRatio") ) { return speedRatio; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loopAnimation") ) { return loopAnimation; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAnimationEnd") ) { return onAnimationEnd; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"animationStarted") ) { return animationStarted; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_localDelayOffset") ) { return _localDelayOffset; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic _Animatable_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toFrame") ) { toFrame=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromFrame") ) { fromFrame=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"speedRatio") ) { speedRatio=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loopAnimation") ) { loopAnimation=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAnimationEnd") ) { onAnimationEnd=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"animationStarted") ) { animationStarted=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_localDelayOffset") ) { _localDelayOffset=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void _Animatable_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("animationStarted"));
	outFields->push(HX_CSTRING("loopAnimation"));
	outFields->push(HX_CSTRING("fromFrame"));
	outFields->push(HX_CSTRING("toFrame"));
	outFields->push(HX_CSTRING("speedRatio"));
	outFields->push(HX_CSTRING("_localDelayOffset"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(_Animatable_obj,target),HX_CSTRING("target")},
	{hx::fsBool,(int)offsetof(_Animatable_obj,animationStarted),HX_CSTRING("animationStarted")},
	{hx::fsBool,(int)offsetof(_Animatable_obj,loopAnimation),HX_CSTRING("loopAnimation")},
	{hx::fsFloat,(int)offsetof(_Animatable_obj,fromFrame),HX_CSTRING("fromFrame")},
	{hx::fsFloat,(int)offsetof(_Animatable_obj,toFrame),HX_CSTRING("toFrame")},
	{hx::fsFloat,(int)offsetof(_Animatable_obj,speedRatio),HX_CSTRING("speedRatio")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(_Animatable_obj,onAnimationEnd),HX_CSTRING("onAnimationEnd")},
	{hx::fsFloat,(int)offsetof(_Animatable_obj,_localDelayOffset),HX_CSTRING("_localDelayOffset")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("target"),
	HX_CSTRING("animationStarted"),
	HX_CSTRING("loopAnimation"),
	HX_CSTRING("fromFrame"),
	HX_CSTRING("toFrame"),
	HX_CSTRING("speedRatio"),
	HX_CSTRING("onAnimationEnd"),
	HX_CSTRING("_localDelayOffset"),
	HX_CSTRING("_animate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(_Animatable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(_Animatable_obj::__mClass,"__mClass");
};

#endif

Class _Animatable_obj::__mClass;

void _Animatable_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.animations._Animatable"), hx::TCanCast< _Animatable_obj> ,sStaticFields,sMemberFields,
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

void _Animatable_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace animations
