#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_Engine
#include <com/gamestudiohx/babylonhx/Engine.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Scene
#include <com/gamestudiohx/babylonhx/Scene.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BabylonTexture
#include <com/gamestudiohx/babylonhx/materials/textures/BabylonTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BaseTexture
#include <com/gamestudiohx/babylonhx/materials/textures/BaseTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_CubeTexture
#include <com/gamestudiohx/babylonhx/materials/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_Texture
#include <com/gamestudiohx/babylonhx/materials/textures/Texture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{
namespace textures{

Void CubeTexture_obj::__construct(::String rootUrl,::com::gamestudiohx::babylonhx::Scene scene,Array< ::String > extensions)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.CubeTexture","new",0xcdf21576,"com.gamestudiohx.babylonhx.materials.textures.CubeTexture.new","com/gamestudiohx/babylonhx/materials/textures/CubeTexture.hx",16,0x544d5019)
HX_STACK_THIS(this)
HX_STACK_ARG(rootUrl,"rootUrl")
HX_STACK_ARG(scene,"scene")
HX_STACK_ARG(extensions,"extensions")
{
	HX_STACK_LINE(20)
	this->isCube = true;
	HX_STACK_LINE(26)
	this->_scene = scene;
	HX_STACK_LINE(28)
	if (((null() == extensions))){
		HX_STACK_LINE(29)
		extensions = Array_obj< ::String >::__new().Add(HX_CSTRING("_px.jpg")).Add(HX_CSTRING("_py.jpg")).Add(HX_CSTRING("_pz.jpg")).Add(HX_CSTRING("_nx.jpg")).Add(HX_CSTRING("_ny.jpg")).Add(HX_CSTRING("_nz.jpg"));
	}
	HX_STACK_LINE(32)
	this->_extensions = extensions;
	HX_STACK_LINE(34)
	::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture _g = this->_getFromCache(rootUrl,false);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(34)
	this->_texture = _g;
	HX_STACK_LINE(35)
	if (((this->_texture == null()))){
		HX_STACK_LINE(36)
		::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture _g1 = scene->getEngine()->createCubeTexture(rootUrl,scene,extensions);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		this->_texture = _g1;
	}
	HX_STACK_LINE(38)
	super::__construct(rootUrl,scene,null(),null());
	HX_STACK_LINE(40)
	this->name = rootUrl;
	HX_STACK_LINE(41)
	this->url = rootUrl;
	HX_STACK_LINE(42)
	this->hasAlpha = false;
	HX_STACK_LINE(43)
	this->coordinatesMode = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::CUBIC_MODE;
	HX_STACK_LINE(45)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(45)
		result->m[(int)0] = 1.0;
		HX_STACK_LINE(45)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(45)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(45)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(45)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(45)
		result->m[(int)5] = 1.0;
		HX_STACK_LINE(45)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(45)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(45)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(45)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(45)
		result->m[(int)10] = 1.0;
		HX_STACK_LINE(45)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(45)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(45)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(45)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(45)
		result->m[(int)15] = 1.0;
		HX_STACK_LINE(45)
		_g2 = result;
	}
	HX_STACK_LINE(45)
	this->_textureMatrix = _g2;
}
;
	return null();
}

//CubeTexture_obj::~CubeTexture_obj() { }

Dynamic CubeTexture_obj::__CreateEmpty() { return  new CubeTexture_obj; }
hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__new(::String rootUrl,::com::gamestudiohx::babylonhx::Scene scene,Array< ::String > extensions)
{  hx::ObjectPtr< CubeTexture_obj > result = new CubeTexture_obj();
	result->__construct(rootUrl,scene,extensions);
	return result;}

Dynamic CubeTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubeTexture_obj > result = new CubeTexture_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void CubeTexture_obj::delayLoad( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.CubeTexture","delayLoad",0xdce554df,"com.gamestudiohx.babylonhx.materials.textures.CubeTexture.delayLoad","com/gamestudiohx/babylonhx/materials/textures/CubeTexture.hx",48,0x544d5019)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		if (((this->delayLoadState != ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_NOTLOADED))){
			HX_STACK_LINE(50)
			return null();
		}
		HX_STACK_LINE(53)
		this->delayLoadState = ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_LOADED;
		HX_STACK_LINE(54)
		::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture _g = this->_getFromCache(this->url,false);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		this->_texture = _g;
		HX_STACK_LINE(56)
		if (((this->_texture == null()))){
			HX_STACK_LINE(57)
			::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture _g1 = this->_scene->getEngine()->createCubeTexture(this->url,this->_scene,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(57)
			this->_texture = _g1;
		}
	}
return null();
}


::com::gamestudiohx::babylonhx::tools::math::Matrix CubeTexture_obj::_computeReflectionTextureMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.CubeTexture","_computeReflectionTextureMatrix",0xa49fdccf,"com.gamestudiohx.babylonhx.materials.textures.CubeTexture._computeReflectionTextureMatrix","com/gamestudiohx/babylonhx/materials/textures/CubeTexture.hx",62,0x544d5019)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return this->_textureMatrix;
}



CubeTexture_obj::CubeTexture_obj()
{
}

void CubeTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubeTexture);
	HX_MARK_MEMBER_NAME(_textureMatrix,"_textureMatrix");
	HX_MARK_MEMBER_NAME(_extensions,"_extensions");
	HX_MARK_MEMBER_NAME(isCube,"isCube");
	::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CubeTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textureMatrix,"_textureMatrix");
	HX_VISIT_MEMBER_NAME(_extensions,"_extensions");
	HX_VISIT_MEMBER_NAME(isCube,"isCube");
	::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CubeTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"isCube") ) { return isCube; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"delayLoad") ) { return delayLoad_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_extensions") ) { return _extensions; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureMatrix") ) { return _textureMatrix; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_computeReflectionTextureMatrix") ) { return _computeReflectionTextureMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CubeTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"isCube") ) { isCube=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_extensions") ) { _extensions=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureMatrix") ) { _textureMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_textureMatrix"));
	outFields->push(HX_CSTRING("_extensions"));
	outFields->push(HX_CSTRING("isCube"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(CubeTexture_obj,_textureMatrix),HX_CSTRING("_textureMatrix")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(CubeTexture_obj,_extensions),HX_CSTRING("_extensions")},
	{hx::fsBool,(int)offsetof(CubeTexture_obj,isCube),HX_CSTRING("isCube")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_textureMatrix"),
	HX_CSTRING("_extensions"),
	HX_CSTRING("isCube"),
	HX_CSTRING("delayLoad"),
	HX_CSTRING("_computeReflectionTextureMatrix"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#endif

Class CubeTexture_obj::__mClass;

void CubeTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.materials.textures.CubeTexture"), hx::TCanCast< CubeTexture_obj> ,sStaticFields,sMemberFields,
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

void CubeTexture_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
} // end namespace textures
