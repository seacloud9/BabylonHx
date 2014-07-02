#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_Node
#include <com/gamestudiohx/babylonhx/Node.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_InstancedMesh
#include <com/gamestudiohx/babylonhx/mesh/InstancedMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_InstancesBatch
#include <com/gamestudiohx/babylonhx/mesh/InstancesBatch.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{

Void InstancesBatch_obj::__construct()
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.InstancesBatch","new",0x8932fb9d,"com.gamestudiohx.babylonhx.mesh.InstancesBatch.new","com/gamestudiohx/babylonhx/mesh/Mesh.hx",26,0xf4cec482)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(29)
	this->renderSelf = true;
	HX_STACK_LINE(27)
	this->mustReturn = false;
}
;
	return null();
}

//InstancesBatch_obj::~InstancesBatch_obj() { }

Dynamic InstancesBatch_obj::__CreateEmpty() { return  new InstancesBatch_obj; }
hx::ObjectPtr< InstancesBatch_obj > InstancesBatch_obj::__new()
{  hx::ObjectPtr< InstancesBatch_obj > result = new InstancesBatch_obj();
	result->__construct();
	return result;}

Dynamic InstancesBatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InstancesBatch_obj > result = new InstancesBatch_obj();
	result->__construct();
	return result;}


InstancesBatch_obj::InstancesBatch_obj()
{
}

void InstancesBatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InstancesBatch);
	HX_MARK_MEMBER_NAME(mustReturn,"mustReturn");
	HX_MARK_MEMBER_NAME(visibleInstances,"visibleInstances");
	HX_MARK_MEMBER_NAME(renderSelf,"renderSelf");
	HX_MARK_END_CLASS();
}

void InstancesBatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mustReturn,"mustReturn");
	HX_VISIT_MEMBER_NAME(visibleInstances,"visibleInstances");
	HX_VISIT_MEMBER_NAME(renderSelf,"renderSelf");
}

Dynamic InstancesBatch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"mustReturn") ) { return mustReturn; }
		if (HX_FIELD_EQ(inName,"renderSelf") ) { return renderSelf; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"visibleInstances") ) { return visibleInstances; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InstancesBatch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"mustReturn") ) { mustReturn=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderSelf") ) { renderSelf=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"visibleInstances") ) { visibleInstances=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InstancesBatch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mustReturn"));
	outFields->push(HX_CSTRING("visibleInstances"));
	outFields->push(HX_CSTRING("renderSelf"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(InstancesBatch_obj,mustReturn),HX_CSTRING("mustReturn")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(InstancesBatch_obj,visibleInstances),HX_CSTRING("visibleInstances")},
	{hx::fsBool,(int)offsetof(InstancesBatch_obj,renderSelf),HX_CSTRING("renderSelf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mustReturn"),
	HX_CSTRING("visibleInstances"),
	HX_CSTRING("renderSelf"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InstancesBatch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InstancesBatch_obj::__mClass,"__mClass");
};

#endif

Class InstancesBatch_obj::__mClass;

void InstancesBatch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.mesh.InstancesBatch"), hx::TCanCast< InstancesBatch_obj> ,sStaticFields,sMemberFields,
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

void InstancesBatch_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh
