#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_IGetSetVerticesData
#include <com/gamestudiohx/babylonhx/mesh/IGetSetVerticesData.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{

HX_DEFINE_DYNAMIC_FUNC1(IGetSetVerticesData_obj,isVerticesDataPresent,return )

HX_DEFINE_DYNAMIC_FUNC1(IGetSetVerticesData_obj,getVerticesData,return )

HX_DEFINE_DYNAMIC_FUNC0(IGetSetVerticesData_obj,getIndices,return )

HX_DEFINE_DYNAMIC_FUNC3(IGetSetVerticesData_obj,setVerticesData,)

HX_DEFINE_DYNAMIC_FUNC4(IGetSetVerticesData_obj,updateVerticesData,)

HX_DEFINE_DYNAMIC_FUNC1(IGetSetVerticesData_obj,setIndices,)


static ::String sMemberFields[] = {
	HX_CSTRING("isVerticesDataPresent"),
	HX_CSTRING("getVerticesData"),
	HX_CSTRING("getIndices"),
	HX_CSTRING("setVerticesData"),
	HX_CSTRING("updateVerticesData"),
	HX_CSTRING("setIndices"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IGetSetVerticesData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IGetSetVerticesData_obj::__mClass,"__mClass");
};

#endif

Class IGetSetVerticesData_obj::__mClass;

void IGetSetVerticesData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.mesh.IGetSetVerticesData"), hx::TCanCast< IGetSetVerticesData_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void IGetSetVerticesData_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh
