#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_Space
#include <com/gamestudiohx/babylonhx/tools/Space.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{

::com::gamestudiohx::babylonhx::tools::Space Space_obj::LOCAL;

::com::gamestudiohx::babylonhx::tools::Space Space_obj::WORLD;

HX_DEFINE_CREATE_ENUM(Space_obj)

int Space_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("LOCAL")) return 0;
	if (inName==HX_CSTRING("WORLD")) return 1;
	return super::__FindIndex(inName);
}

int Space_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("LOCAL")) return 0;
	if (inName==HX_CSTRING("WORLD")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Space_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("LOCAL")) return LOCAL;
	if (inName==HX_CSTRING("WORLD")) return WORLD;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("LOCAL"),
	HX_CSTRING("WORLD"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Space_obj::LOCAL,"LOCAL");
	HX_MARK_MEMBER_NAME(Space_obj::WORLD,"WORLD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Space_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Space_obj::LOCAL,"LOCAL");
	HX_VISIT_MEMBER_NAME(Space_obj::WORLD,"WORLD");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Space_obj::__mClass;

Dynamic __Create_Space_obj() { return new Space_obj; }

void Space_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.tools.Space"), hx::TCanCast< Space_obj >,sStaticFields,sMemberFields,
	&__Create_Space_obj, &__Create,
	&super::__SGetClass(), &CreateSpace_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Space_obj::__boot()
{
hx::Static(LOCAL) = hx::CreateEnum< Space_obj >(HX_CSTRING("LOCAL"),0);
hx::Static(WORLD) = hx::CreateEnum< Space_obj >(HX_CSTRING("WORLD"),1);
}


} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
