#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Effect
#include <com/gamestudiohx/babylonhx/materials/Effect.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Material
#include <com/gamestudiohx/babylonhx/materials/Material.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{

Void Material_obj::__construct(::String name,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Material","new",0xc65cd5ad,"com.gamestudiohx.babylonhx.materials.Material.new","com/gamestudiohx/babylonhx/materials/Material.hx",34,0x7256af01)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(35)
	this->name = name;
	HX_STACK_LINE(36)
	this->id = name;
	HX_STACK_LINE(38)
	this->_scene = scene;
	HX_STACK_LINE(39)
	scene->materials->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(42)
	this->checkReadyOnEveryCall = true;
	HX_STACK_LINE(43)
	this->checkReadyOnlyOnce = false;
	HX_STACK_LINE(44)
	this->alpha = 1.0;
	HX_STACK_LINE(45)
	this->wireframe = false;
	HX_STACK_LINE(46)
	this->backFaceCulling = true;
	HX_STACK_LINE(47)
	this->_effect = null();
	HX_STACK_LINE(48)
	this->_wasPreviouslyReady = false;
	HX_STACK_LINE(50)
	this->onDispose = null();
}
;
	return null();
}

//Material_obj::~Material_obj() { }

Dynamic Material_obj::__CreateEmpty() { return  new Material_obj; }
hx::ObjectPtr< Material_obj > Material_obj::__new(::String name,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< Material_obj > result = new Material_obj();
	result->__construct(name,scene);
	return result;}

Dynamic Material_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Material_obj > result = new Material_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool Material_obj::isReady( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Material","isReady",0xd88a73e6,"com.gamestudiohx.babylonhx.materials.Material.isReady","com/gamestudiohx/babylonhx/materials/Material.hx",54,0x7256af01)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mesh,"mesh")
	HX_STACK_LINE(54)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,isReady,return )

::com::gamestudiohx::babylonhx::materials::Effect Material_obj::getEffect( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Material","getEffect",0xbd0960d4,"com.gamestudiohx.babylonhx.materials.Material.getEffect","com/gamestudiohx/babylonhx/materials/Material.hx",58,0x7256af01)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	return this->_effect;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,getEffect,return )

::com::gamestudiohx::babylonhx::Scene Material_obj::getScene( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Material","getScene",0x24488c69,"com.gamestudiohx.babylonhx.materials.Material.getScene","com/gamestudiohx/babylonhx/materials/Material.hx",62,0x7256af01)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return this->_scene;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,getScene,return )

bool Material_obj::needAlphaBlending( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Material","needAlphaBlending",0x6f988e86,"com.gamestudiohx.babylonhx.materials.Material.needAlphaBlending","com/gamestudiohx/babylonhx/materials/Material.hx",66,0x7256af01)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	return (this->alpha < 1.0);
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,needAlphaBlending,return )

bool Material_obj::needAlphaTesting( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Material","needAlphaTesting",0xde00e41b,"com.gamestudiohx.babylonhx.materials.Material.needAlphaTesting","com/gamestudiohx/babylonhx/materials/Material.hx",70,0x7256af01)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,needAlphaTesting,return )

Void Material_obj::_preBind( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Material","_preBind",0x9ed3cc94,"com.gamestudiohx.babylonhx.materials.Material._preBind","com/gamestudiohx/babylonhx/materials/Material.hx",73,0x7256af01)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		::com::gamestudiohx::babylonhx::Engine engine = this->_scene->getEngine();		HX_STACK_VAR(engine,"engine");
		HX_STACK_LINE(76)
		engine->enableEffect(this->_effect);
		HX_STACK_LINE(77)
		engine->setState(this->backFaceCulling);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,_preBind,(void))

Void Material_obj::bind( ::com::gamestudiohx::babylonhx::tools::math::Matrix world,::com::gamestudiohx::babylonhx::mesh::Mesh mesh){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Material","bind",0xc2f293d0,"com.gamestudiohx.babylonhx.materials.Material.bind","com/gamestudiohx/babylonhx/materials/Material.hx",80,0x7256af01)
		HX_STACK_THIS(this)
		HX_STACK_ARG(world,"world")
		HX_STACK_ARG(mesh,"mesh")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,bind,(void))

Void Material_obj::unbind( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Material","unbind",0xc5798569,"com.gamestudiohx.babylonhx.materials.Material.unbind","com/gamestudiohx/babylonhx/materials/Material.hx",84,0x7256af01)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,unbind,(void))

Void Material_obj::baseDispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Material","baseDispose",0xae05eedb,"com.gamestudiohx.babylonhx.materials.Material.baseDispose","com/gamestudiohx/babylonhx/materials/Material.hx",88,0x7256af01)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		int index = ::Lambda_obj::indexOf(this->_scene->materials,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(91)
		this->_scene->materials->splice(index,(int)1);
		HX_STACK_LINE(95)
		if (((this->onDispose_dyn() != null()))){
			HX_STACK_LINE(96)
			this->onDispose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,baseDispose,(void))

Void Material_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Material","dispose",0x1096b06c,"com.gamestudiohx.babylonhx.materials.Material.dispose","com/gamestudiohx/babylonhx/materials/Material.hx",101,0x7256af01)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		this->baseDispose();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,dispose,(void))


Material_obj::Material_obj()
{
}

void Material_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Material);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(_renderId,"_renderId");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(checkReadyOnEveryCall,"checkReadyOnEveryCall");
	HX_MARK_MEMBER_NAME(checkReadyOnlyOnce,"checkReadyOnlyOnce");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(wireframe,"wireframe");
	HX_MARK_MEMBER_NAME(backFaceCulling,"backFaceCulling");
	HX_MARK_MEMBER_NAME(_effect,"_effect");
	HX_MARK_MEMBER_NAME(_wasPreviouslyReady,"_wasPreviouslyReady");
	HX_MARK_MEMBER_NAME(onDispose,"onDispose");
	HX_MARK_END_CLASS();
}

void Material_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(_renderId,"_renderId");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(checkReadyOnEveryCall,"checkReadyOnEveryCall");
	HX_VISIT_MEMBER_NAME(checkReadyOnlyOnce,"checkReadyOnlyOnce");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(wireframe,"wireframe");
	HX_VISIT_MEMBER_NAME(backFaceCulling,"backFaceCulling");
	HX_VISIT_MEMBER_NAME(_effect,"_effect");
	HX_VISIT_MEMBER_NAME(_wasPreviouslyReady,"_wasPreviouslyReady");
	HX_VISIT_MEMBER_NAME(onDispose,"onDispose");
}

Dynamic Material_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"unbind") ) { return unbind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_effect") ) { return _effect; }
		if (HX_FIELD_EQ(inName,"isReady") ) { return isReady_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getScene") ) { return getScene_dyn(); }
		if (HX_FIELD_EQ(inName,"_preBind") ) { return _preBind_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_renderId") ) { return _renderId; }
		if (HX_FIELD_EQ(inName,"wireframe") ) { return wireframe; }
		if (HX_FIELD_EQ(inName,"onDispose") ) { return onDispose; }
		if (HX_FIELD_EQ(inName,"getEffect") ) { return getEffect_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"baseDispose") ) { return baseDispose_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backFaceCulling") ) { return backFaceCulling; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"needAlphaTesting") ) { return needAlphaTesting_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needAlphaBlending") ) { return needAlphaBlending_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"checkReadyOnlyOnce") ) { return checkReadyOnlyOnce; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasPreviouslyReady") ) { return _wasPreviouslyReady; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"checkReadyOnEveryCall") ) { return checkReadyOnEveryCall; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Material_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::gamestudiohx::babylonhx::Scene >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_effect") ) { _effect=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::Effect >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_renderId") ) { _renderId=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wireframe") ) { wireframe=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDispose") ) { onDispose=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backFaceCulling") ) { backFaceCulling=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"checkReadyOnlyOnce") ) { checkReadyOnlyOnce=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasPreviouslyReady") ) { _wasPreviouslyReady=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"checkReadyOnEveryCall") ) { checkReadyOnEveryCall=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Material_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("_renderId"));
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("checkReadyOnEveryCall"));
	outFields->push(HX_CSTRING("checkReadyOnlyOnce"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("wireframe"));
	outFields->push(HX_CSTRING("backFaceCulling"));
	outFields->push(HX_CSTRING("_effect"));
	outFields->push(HX_CSTRING("_wasPreviouslyReady"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Material_obj,name),HX_CSTRING("name")},
	{hx::fsString,(int)offsetof(Material_obj,id),HX_CSTRING("id")},
	{hx::fsInt,(int)offsetof(Material_obj,_renderId),HX_CSTRING("_renderId")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Scene*/ ,(int)offsetof(Material_obj,_scene),HX_CSTRING("_scene")},
	{hx::fsBool,(int)offsetof(Material_obj,checkReadyOnEveryCall),HX_CSTRING("checkReadyOnEveryCall")},
	{hx::fsBool,(int)offsetof(Material_obj,checkReadyOnlyOnce),HX_CSTRING("checkReadyOnlyOnce")},
	{hx::fsFloat,(int)offsetof(Material_obj,alpha),HX_CSTRING("alpha")},
	{hx::fsBool,(int)offsetof(Material_obj,wireframe),HX_CSTRING("wireframe")},
	{hx::fsBool,(int)offsetof(Material_obj,backFaceCulling),HX_CSTRING("backFaceCulling")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::Effect*/ ,(int)offsetof(Material_obj,_effect),HX_CSTRING("_effect")},
	{hx::fsBool,(int)offsetof(Material_obj,_wasPreviouslyReady),HX_CSTRING("_wasPreviouslyReady")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Material_obj,onDispose),HX_CSTRING("onDispose")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("id"),
	HX_CSTRING("_renderId"),
	HX_CSTRING("_scene"),
	HX_CSTRING("checkReadyOnEveryCall"),
	HX_CSTRING("checkReadyOnlyOnce"),
	HX_CSTRING("alpha"),
	HX_CSTRING("wireframe"),
	HX_CSTRING("backFaceCulling"),
	HX_CSTRING("_effect"),
	HX_CSTRING("_wasPreviouslyReady"),
	HX_CSTRING("onDispose"),
	HX_CSTRING("isReady"),
	HX_CSTRING("getEffect"),
	HX_CSTRING("getScene"),
	HX_CSTRING("needAlphaBlending"),
	HX_CSTRING("needAlphaTesting"),
	HX_CSTRING("_preBind"),
	HX_CSTRING("bind"),
	HX_CSTRING("unbind"),
	HX_CSTRING("baseDispose"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Material_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Material_obj::__mClass,"__mClass");
};

#endif

Class Material_obj::__mClass;

void Material_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.materials.Material"), hx::TCanCast< Material_obj> ,sStaticFields,sMemberFields,
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

void Material_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
