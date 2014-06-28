#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_Camera
#include <com/gamestudiohx/babylonhx/cameras/Camera.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Effect
#include <com/gamestudiohx/babylonhx/materials/Effect.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BaseTexture
#include <com/gamestudiohx/babylonhx/materials/textures/BaseTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_Texture
#include <com/gamestudiohx/babylonhx/materials/textures/Texture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_postprocess_PostProcess
#include <com/gamestudiohx/babylonhx/postprocess/PostProcess.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_postprocess_RefractionPostProcess
#include <com/gamestudiohx/babylonhx/postprocess/RefractionPostProcess.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color3
#include <com/gamestudiohx/babylonhx/tools/math/Color3.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_gl_GL
#include <openfl/gl/GL.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace postprocess{

Void RefractionPostProcess_obj::__construct(::String name,::String refractionTextureUrl,::com::gamestudiohx::babylonhx::tools::math::Color3 color,Float depth,Float colorLevel,Float ratio,::com::gamestudiohx::babylonhx::cameras::Camera camera,hx::Null< int >  __o_samplingMode)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.postprocess.RefractionPostProcess","new",0xcbeffb7b,"com.gamestudiohx.babylonhx.postprocess.RefractionPostProcess.new","com/gamestudiohx/babylonhx/postprocess/RefractionPostProcess.hx",22,0x8270bb37)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(refractionTextureUrl,"refractionTextureUrl")
HX_STACK_ARG(color,"color")
HX_STACK_ARG(depth,"depth")
HX_STACK_ARG(colorLevel,"colorLevel")
HX_STACK_ARG(ratio,"ratio")
HX_STACK_ARG(camera,"camera")
HX_STACK_ARG(__o_samplingMode,"samplingMode")
int samplingMode = __o_samplingMode.Default(1);
{
	HX_STACK_LINE(22)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(23)
	super::__construct(name,HX_CSTRING("refraction"),Array_obj< ::String >::__new().Add(HX_CSTRING("baseColor")).Add(HX_CSTRING("depth")).Add(HX_CSTRING("colorLevel")),Array_obj< ::String >::__new().Add(HX_CSTRING("refractionSampler")),ratio,camera,samplingMode,null(),null());
	HX_STACK_LINE(25)
	this->color = color;
	HX_STACK_LINE(26)
	this->depth = depth;
	HX_STACK_LINE(27)
	this->colorLevel = colorLevel;
	HX_STACK_LINE(29)
	::com::gamestudiohx::babylonhx::Scene _g1 = camera->getScene();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(29)
	::com::gamestudiohx::babylonhx::materials::textures::Texture _g11 = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::__new(refractionTextureUrl,_g1,null(),null());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(29)
	this->_refTexture = _g11;

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
	Void run(::com::gamestudiohx::babylonhx::materials::Effect effect){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/gamestudiohx/babylonhx/postprocess/RefractionPostProcess.hx",31,0x8270bb37)
		HX_STACK_ARG(effect,"effect")
		{
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				::com::gamestudiohx::babylonhx::tools::math::Color3 color3 = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::postprocess::RefractionPostProcess >()->color;		HX_STACK_VAR(color3,"color3");
				HX_STACK_LINE(32)
				if ((!(((bool((bool((bool(effect->_valueCache->exists(HX_CSTRING("baseColor"))) && bool((effect->_valueCache->get(HX_CSTRING("baseColor"))->__GetItem((int)0) == color3->r)))) && bool((effect->_valueCache->get(HX_CSTRING("baseColor"))->__GetItem((int)1) == color3->g)))) && bool((effect->_valueCache->get(HX_CSTRING("baseColor"))->__GetItem((int)2) == color3->b))))))){
					HX_STACK_LINE(32)
					{
						HX_STACK_LINE(32)
						Float x = color3->r;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(32)
						Float y = color3->g;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(32)
						Float z = color3->b;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(32)
						if ((!(effect->_valueCache->exists(HX_CSTRING("baseColor"))))){
							HX_STACK_LINE(32)
							effect->_valueCache->set(HX_CSTRING("baseColor"),Array_obj< Float >::__new().Add(x).Add(y).Add(z));
						}
						else{
							HX_STACK_LINE(32)
							hx::IndexRef((effect->_valueCache->get(HX_CSTRING("baseColor"))).mPtr,(int)0) = x;
							HX_STACK_LINE(32)
							hx::IndexRef((effect->_valueCache->get(HX_CSTRING("baseColor"))).mPtr,(int)1) = y;
							HX_STACK_LINE(32)
							hx::IndexRef((effect->_valueCache->get(HX_CSTRING("baseColor"))).mPtr,(int)2) = z;
						}
					}
					HX_STACK_LINE(32)
					{
						HX_STACK_LINE(32)
						Dynamic uniform = effect->getUniform(HX_CSTRING("baseColor"));		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(32)
						if (((uniform != null()))){
							HX_STACK_LINE(32)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(32)
							::openfl::gl::GL_obj::lime_gl_uniform3f(location,color3->r,color3->g,color3->b);
						}
					}
				}
			}
			HX_STACK_LINE(33)
			{
				HX_STACK_LINE(33)
				Float value = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::postprocess::RefractionPostProcess >()->depth;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(33)
				if ((!(((bool(effect->_valueCache->exists(HX_CSTRING("depth"))) && bool((effect->_valueCache->get(HX_CSTRING("depth"))->__GetItem((int)0) == value))))))){
					HX_STACK_LINE(33)
					effect->_valueCache->set(HX_CSTRING("depth"),Array_obj< Float >::__new().Add(value));
					HX_STACK_LINE(33)
					{
						HX_STACK_LINE(33)
						Dynamic uniform = effect->getUniform(HX_CSTRING("depth"));		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(33)
						if (((uniform != null()))){
							HX_STACK_LINE(33)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(33)
							::openfl::gl::GL_obj::lime_gl_uniform1f(location,value);
						}
					}
				}
			}
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				Float value = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::postprocess::RefractionPostProcess >()->colorLevel;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(34)
				if ((!(((bool(effect->_valueCache->exists(HX_CSTRING("colorLevel"))) && bool((effect->_valueCache->get(HX_CSTRING("colorLevel"))->__GetItem((int)0) == value))))))){
					HX_STACK_LINE(34)
					effect->_valueCache->set(HX_CSTRING("colorLevel"),Array_obj< Float >::__new().Add(value));
					HX_STACK_LINE(34)
					{
						HX_STACK_LINE(34)
						Dynamic uniform = effect->getUniform(HX_CSTRING("colorLevel"));		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(34)
						if (((uniform != null()))){
							HX_STACK_LINE(34)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(34)
							::openfl::gl::GL_obj::lime_gl_uniform1f(location,value);
						}
					}
				}
			}
			HX_STACK_LINE(36)
			effect->setTexture(HX_CSTRING("refractionSampler"),_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::postprocess::RefractionPostProcess >()->_refTexture);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(31)
	this->onApply =  Dynamic(new _Function_1_1(_g));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
	Void run(){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/gamestudiohx/babylonhx/postprocess/RefractionPostProcess.hx",40,0x8270bb37)
		{
			HX_STACK_LINE(40)
			if (((_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::postprocess::RefractionPostProcess >()->_refTexture != null()))){
				HX_STACK_LINE(41)
				_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::postprocess::RefractionPostProcess >()->_refTexture->dispose();
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(39)
	this->_onDispose =  Dynamic(new _Function_1_2(_g));
}
;
	return null();
}

//RefractionPostProcess_obj::~RefractionPostProcess_obj() { }

Dynamic RefractionPostProcess_obj::__CreateEmpty() { return  new RefractionPostProcess_obj; }
hx::ObjectPtr< RefractionPostProcess_obj > RefractionPostProcess_obj::__new(::String name,::String refractionTextureUrl,::com::gamestudiohx::babylonhx::tools::math::Color3 color,Float depth,Float colorLevel,Float ratio,::com::gamestudiohx::babylonhx::cameras::Camera camera,hx::Null< int >  __o_samplingMode)
{  hx::ObjectPtr< RefractionPostProcess_obj > result = new RefractionPostProcess_obj();
	result->__construct(name,refractionTextureUrl,color,depth,colorLevel,ratio,camera,__o_samplingMode);
	return result;}

Dynamic RefractionPostProcess_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RefractionPostProcess_obj > result = new RefractionPostProcess_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}


RefractionPostProcess_obj::RefractionPostProcess_obj()
{
}

void RefractionPostProcess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RefractionPostProcess);
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(colorLevel,"colorLevel");
	HX_MARK_MEMBER_NAME(_refTexture,"_refTexture");
	::com::gamestudiohx::babylonhx::postprocess::PostProcess_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RefractionPostProcess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(colorLevel,"colorLevel");
	HX_VISIT_MEMBER_NAME(_refTexture,"_refTexture");
	::com::gamestudiohx::babylonhx::postprocess::PostProcess_obj::__Visit(HX_VISIT_ARG);
}

Dynamic RefractionPostProcess_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorLevel") ) { return colorLevel; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_refTexture") ) { return _refTexture; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RefractionPostProcess_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorLevel") ) { colorLevel=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_refTexture") ) { _refTexture=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::textures::Texture >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RefractionPostProcess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("depth"));
	outFields->push(HX_CSTRING("colorLevel"));
	outFields->push(HX_CSTRING("_refTexture"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color3*/ ,(int)offsetof(RefractionPostProcess_obj,color),HX_CSTRING("color")},
	{hx::fsFloat,(int)offsetof(RefractionPostProcess_obj,depth),HX_CSTRING("depth")},
	{hx::fsFloat,(int)offsetof(RefractionPostProcess_obj,colorLevel),HX_CSTRING("colorLevel")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::textures::Texture*/ ,(int)offsetof(RefractionPostProcess_obj,_refTexture),HX_CSTRING("_refTexture")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("color"),
	HX_CSTRING("depth"),
	HX_CSTRING("colorLevel"),
	HX_CSTRING("_refTexture"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RefractionPostProcess_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RefractionPostProcess_obj::__mClass,"__mClass");
};

#endif

Class RefractionPostProcess_obj::__mClass;

void RefractionPostProcess_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.postprocess.RefractionPostProcess"), hx::TCanCast< RefractionPostProcess_obj> ,sStaticFields,sMemberFields,
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

void RefractionPostProcess_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace postprocess
