#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_Node
#include <com/gamestudiohx/babylonhx/Node.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_collisions_PickingInfo
#include <com/gamestudiohx/babylonhx/collisions/PickingInfo.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_IGetSetVerticesData
#include <com/gamestudiohx/babylonhx/mesh/IGetSetVerticesData.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_Mesh
#include <com/gamestudiohx/babylonhx/mesh/Mesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace collisions{

Void PickingInfo_obj::__construct()
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.collisions.PickingInfo","new",0xadb06706,"com.gamestudiohx.babylonhx.collisions.PickingInfo.new","com/gamestudiohx/babylonhx/collisions/PickingInfo.hx",12,0xd1ff696a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->hit = false;
	HX_STACK_LINE(20)
	this->hit = false;
	HX_STACK_LINE(21)
	this->distance = (int)0;
	HX_STACK_LINE(22)
	this->pickedPoint = null();
	HX_STACK_LINE(23)
	this->pickedMesh = null();
}
;
	return null();
}

//PickingInfo_obj::~PickingInfo_obj() { }

Dynamic PickingInfo_obj::__CreateEmpty() { return  new PickingInfo_obj; }
hx::ObjectPtr< PickingInfo_obj > PickingInfo_obj::__new()
{  hx::ObjectPtr< PickingInfo_obj > result = new PickingInfo_obj();
	result->__construct();
	return result;}

Dynamic PickingInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PickingInfo_obj > result = new PickingInfo_obj();
	result->__construct();
	return result;}


PickingInfo_obj::PickingInfo_obj()
{
}

void PickingInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PickingInfo);
	HX_MARK_MEMBER_NAME(hit,"hit");
	HX_MARK_MEMBER_NAME(distance,"distance");
	HX_MARK_MEMBER_NAME(pickedPoint,"pickedPoint");
	HX_MARK_MEMBER_NAME(pickedMesh,"pickedMesh");
	HX_MARK_END_CLASS();
}

void PickingInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hit,"hit");
	HX_VISIT_MEMBER_NAME(distance,"distance");
	HX_VISIT_MEMBER_NAME(pickedPoint,"pickedPoint");
	HX_VISIT_MEMBER_NAME(pickedMesh,"pickedMesh");
}

Dynamic PickingInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { return hit; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pickedMesh") ) { return pickedMesh; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pickedPoint") ) { return pickedPoint; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PickingInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { hit=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pickedMesh") ) { pickedMesh=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::Mesh >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pickedPoint") ) { pickedPoint=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PickingInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("hit"));
	outFields->push(HX_CSTRING("distance"));
	outFields->push(HX_CSTRING("pickedPoint"));
	outFields->push(HX_CSTRING("pickedMesh"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(PickingInfo_obj,hit),HX_CSTRING("hit")},
	{hx::fsFloat,(int)offsetof(PickingInfo_obj,distance),HX_CSTRING("distance")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(PickingInfo_obj,pickedPoint),HX_CSTRING("pickedPoint")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::Mesh*/ ,(int)offsetof(PickingInfo_obj,pickedMesh),HX_CSTRING("pickedMesh")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("hit"),
	HX_CSTRING("distance"),
	HX_CSTRING("pickedPoint"),
	HX_CSTRING("pickedMesh"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PickingInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PickingInfo_obj::__mClass,"__mClass");
};

#endif

Class PickingInfo_obj::__mClass;

void PickingInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.collisions.PickingInfo"), hx::TCanCast< PickingInfo_obj> ,sStaticFields,sMemberFields,
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

void PickingInfo_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace collisions
