#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_Engine
#include <com/gamestudiohx/babylonhx/Engine.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Viewport
#include <com/gamestudiohx/babylonhx/tools/math/Viewport.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{
namespace math{

Void Viewport_obj::__construct(Float x,Float y,Float width,Float height)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Viewport","new",0x99a9d6d9,"com.gamestudiohx.babylonhx.tools.math.Viewport.new","com/gamestudiohx/babylonhx/tools/math/Viewport.hx",19,0xeeed6278)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(20)
	this->width = width;
	HX_STACK_LINE(21)
	this->height = height;
	HX_STACK_LINE(22)
	this->x = x;
	HX_STACK_LINE(23)
	this->y = y;
}
;
	return null();
}

//Viewport_obj::~Viewport_obj() { }

Dynamic Viewport_obj::__CreateEmpty() { return  new Viewport_obj; }
hx::ObjectPtr< Viewport_obj > Viewport_obj::__new(Float x,Float y,Float width,Float height)
{  hx::ObjectPtr< Viewport_obj > result = new Viewport_obj();
	result->__construct(x,y,width,height);
	return result;}

Dynamic Viewport_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Viewport_obj > result = new Viewport_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::com::gamestudiohx::babylonhx::tools::math::Viewport Viewport_obj::toGlobal( ::com::gamestudiohx::babylonhx::Engine engine){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Viewport","toGlobal",0x2333bc25,"com.gamestudiohx.babylonhx.tools.math.Viewport.toGlobal","com/gamestudiohx/babylonhx/tools/math/Viewport.hx",26,0xeeed6278)
	HX_STACK_THIS(this)
	HX_STACK_ARG(engine,"engine")
	HX_STACK_LINE(27)
	int _g = engine->getRenderWidth();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(27)
	int _g1 = engine->getHardwareScalingLevel();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(27)
	int width = (_g * _g1);		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(28)
	int _g2 = engine->getRenderHeight();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(28)
	int _g3 = engine->getHardwareScalingLevel();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(28)
	int height = (_g2 * _g3);		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(29)
	return ::com::gamestudiohx::babylonhx::tools::math::Viewport_obj::__new((this->x * width),(this->y * height),(this->width * width),(this->height * height));
}


HX_DEFINE_DYNAMIC_FUNC1(Viewport_obj,toGlobal,return )


Viewport_obj::Viewport_obj()
{
}

Dynamic Viewport_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toGlobal") ) { return toGlobal_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Viewport_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Viewport_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Viewport_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(Viewport_obj,height),HX_CSTRING("height")},
	{hx::fsFloat,(int)offsetof(Viewport_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Viewport_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("toGlobal"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Viewport_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Viewport_obj::__mClass,"__mClass");
};

#endif

Class Viewport_obj::__mClass;

void Viewport_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.tools.math.Viewport"), hx::TCanCast< Viewport_obj> ,sStaticFields,sMemberFields,
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

void Viewport_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math
