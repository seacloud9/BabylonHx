#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_Axis
#include <com/gamestudiohx/babylonhx/tools/Axis.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{

Void Axis_obj::__construct()
{
	return null();
}

//Axis_obj::~Axis_obj() { }

Dynamic Axis_obj::__CreateEmpty() { return  new Axis_obj; }
hx::ObjectPtr< Axis_obj > Axis_obj::__new()
{  hx::ObjectPtr< Axis_obj > result = new Axis_obj();
	result->__construct();
	return result;}

Dynamic Axis_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Axis_obj > result = new Axis_obj();
	result->__construct();
	return result;}

::com::gamestudiohx::babylonhx::tools::math::Vector3 Axis_obj::X;

::com::gamestudiohx::babylonhx::tools::math::Vector3 Axis_obj::Y;

::com::gamestudiohx::babylonhx::tools::math::Vector3 Axis_obj::Z;


Axis_obj::Axis_obj()
{
}

Dynamic Axis_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"X") ) { return X; }
		if (HX_FIELD_EQ(inName,"Y") ) { return Y; }
		if (HX_FIELD_EQ(inName,"Z") ) { return Z; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Axis_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"X") ) { X=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Y") ) { Y=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Z") ) { Z=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Axis_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("X"),
	HX_CSTRING("Y"),
	HX_CSTRING("Z"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Axis_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Axis_obj::X,"X");
	HX_MARK_MEMBER_NAME(Axis_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(Axis_obj::Z,"Z");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Axis_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Axis_obj::X,"X");
	HX_VISIT_MEMBER_NAME(Axis_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(Axis_obj::Z,"Z");
};

#endif

Class Axis_obj::__mClass;

void Axis_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.tools.Axis"), hx::TCanCast< Axis_obj> ,sStaticFields,sMemberFields,
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

void Axis_obj::__boot()
{
	X= ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)1,(int)0,(int)0);
	Y= ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)1,(int)0);
	Z= ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)1);
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
