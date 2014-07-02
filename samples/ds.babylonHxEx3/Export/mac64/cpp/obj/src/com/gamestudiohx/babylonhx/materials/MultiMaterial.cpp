#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_Node
#include <com/gamestudiohx/babylonhx/Node.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Scene
#include <com/gamestudiohx/babylonhx/Scene.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Material
#include <com/gamestudiohx/babylonhx/materials/Material.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_MultiMaterial
#include <com/gamestudiohx/babylonhx/materials/MultiMaterial.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_StandardMaterial
#include <com/gamestudiohx/babylonhx/materials/StandardMaterial.h>
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
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{

Void MultiMaterial_obj::__construct(::String name,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.MultiMaterial","new",0xe88f741e,"com.gamestudiohx.babylonhx.materials.MultiMaterial.new","com/gamestudiohx/babylonhx/materials/MultiMaterial.hx",22,0x10238bb4)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(23)
	this->name = name;
	HX_STACK_LINE(24)
	this->id = name;
	HX_STACK_LINE(26)
	this->_scene = scene;
	HX_STACK_LINE(27)
	scene->multiMaterials->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(29)
	this->subMaterials = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//MultiMaterial_obj::~MultiMaterial_obj() { }

Dynamic MultiMaterial_obj::__CreateEmpty() { return  new MultiMaterial_obj; }
hx::ObjectPtr< MultiMaterial_obj > MultiMaterial_obj::__new(::String name,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< MultiMaterial_obj > result = new MultiMaterial_obj();
	result->__construct(name,scene);
	return result;}

Dynamic MultiMaterial_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MultiMaterial_obj > result = new MultiMaterial_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::com::gamestudiohx::babylonhx::materials::Material MultiMaterial_obj::getSubMaterial( int index){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.MultiMaterial","getSubMaterial",0xe2d72e53,"com.gamestudiohx.babylonhx.materials.MultiMaterial.getSubMaterial","com/gamestudiohx/babylonhx/materials/MultiMaterial.hx",32,0x10238bb4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(33)
	if (((bool((index < (int)0)) || bool((index >= this->subMaterials->length))))){
		HX_STACK_LINE(34)
		return this->_scene->defaultMaterial;
	}
	HX_STACK_LINE(37)
	return this->subMaterials->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::materials::Material >();
}


HX_DEFINE_DYNAMIC_FUNC1(MultiMaterial_obj,getSubMaterial,return )

bool MultiMaterial_obj::isReady( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.MultiMaterial","isReady",0x5bab9ed7,"com.gamestudiohx.babylonhx.materials.MultiMaterial.isReady","com/gamestudiohx/babylonhx/materials/MultiMaterial.hx",40,0x10238bb4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mesh,"mesh")
	HX_STACK_LINE(41)
	bool result = true;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		int _g = this->subMaterials->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		while((true)){
			HX_STACK_LINE(42)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(42)
				break;
			}
			HX_STACK_LINE(42)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(43)
			::com::gamestudiohx::babylonhx::materials::Material subMaterial = this->subMaterials->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::materials::Material >();		HX_STACK_VAR(subMaterial,"subMaterial");
			HX_STACK_LINE(45)
			bool _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(45)
			if ((result)){
				HX_STACK_LINE(45)
				_g2 = this->subMaterials->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::materials::Material >()->isReady(mesh);
			}
			else{
				HX_STACK_LINE(45)
				_g2 = false;
			}
			HX_STACK_LINE(45)
			result = _g2;
		}
	}
	HX_STACK_LINE(49)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(MultiMaterial_obj,isReady,return )


MultiMaterial_obj::MultiMaterial_obj()
{
}

void MultiMaterial_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MultiMaterial);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(subMaterials,"subMaterials");
	HX_MARK_END_CLASS();
}

void MultiMaterial_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(subMaterials,"subMaterials");
}

Dynamic MultiMaterial_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isReady") ) { return isReady_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"subMaterials") ) { return subMaterials; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getSubMaterial") ) { return getSubMaterial_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MultiMaterial_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::gamestudiohx::babylonhx::Scene >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"subMaterials") ) { subMaterials=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MultiMaterial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("subMaterials"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(MultiMaterial_obj,name),HX_CSTRING("name")},
	{hx::fsString,(int)offsetof(MultiMaterial_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Scene*/ ,(int)offsetof(MultiMaterial_obj,_scene),HX_CSTRING("_scene")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MultiMaterial_obj,subMaterials),HX_CSTRING("subMaterials")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("id"),
	HX_CSTRING("_scene"),
	HX_CSTRING("subMaterials"),
	HX_CSTRING("getSubMaterial"),
	HX_CSTRING("isReady"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MultiMaterial_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MultiMaterial_obj::__mClass,"__mClass");
};

#endif

Class MultiMaterial_obj::__mClass;

void MultiMaterial_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.materials.MultiMaterial"), hx::TCanCast< MultiMaterial_obj> ,sStaticFields,sMemberFields,
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

void MultiMaterial_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
