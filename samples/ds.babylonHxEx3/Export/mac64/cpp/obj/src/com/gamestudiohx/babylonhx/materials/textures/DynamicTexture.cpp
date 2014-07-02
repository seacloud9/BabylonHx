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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_DynamicTexture
#include <com/gamestudiohx/babylonhx/materials/textures/DynamicTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_Texture
#include <com/gamestudiohx/babylonhx/materials/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{
namespace textures{

Void DynamicTexture_obj::__construct(::String name,Dynamic options,::com::gamestudiohx::babylonhx::Scene scene,bool generateMipMaps)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.DynamicTexture","new",0x17a6d7b0,"com.gamestudiohx.babylonhx.materials.textures.DynamicTexture.new","com/gamestudiohx/babylonhx/materials/textures/DynamicTexture.hx",16,0x08388dc1)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(options,"options")
HX_STACK_ARG(scene,"scene")
HX_STACK_ARG(generateMipMaps,"generateMipMaps")
{
	HX_STACK_LINE(17)
	super::__construct(null(),scene,!(generateMipMaps),null());
	HX_STACK_LINE(19)
	this->name = name;
	HX_STACK_LINE(20)
	this->wrapU = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::CLAMP_ADDRESSMODE;
	HX_STACK_LINE(21)
	this->wrapV = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::CLAMP_ADDRESSMODE;
	HX_STACK_LINE(22)
	this->_generateMipMaps = generateMipMaps;
	HX_STACK_LINE(24)
	if ((options->__Field(HX_CSTRING("getContext"),true))){
		HX_STACK_LINE(25)
		this->_canvas = options;
		HX_STACK_LINE(26)
		::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture _g = scene->getEngine()->createDynamicTexture(options->__Field(HX_CSTRING("width"),true),options->__Field(HX_CSTRING("height"),true),generateMipMaps);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		this->_texture = _g;
	}
	else{
		HX_STACK_LINE(28)
		::openfl::display::BitmapData _g1 = ::openfl::display::BitmapData_obj::__new(options->__Field(HX_CSTRING("width"),true),options->__Field(HX_CSTRING("height"),true),false,(int)-1,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(28)
		this->_canvas = _g1;
		HX_STACK_LINE(29)
		if ((options->__Field(HX_CSTRING("width"),true))){
			HX_STACK_LINE(30)
			::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture _g2 = scene->getEngine()->createDynamicTexture(options->__Field(HX_CSTRING("width"),true),options->__Field(HX_CSTRING("height"),true),generateMipMaps);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(30)
			this->_texture = _g2;
		}
		else{
			HX_STACK_LINE(32)
			::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture _g3 = scene->getEngine()->createDynamicTexture(options,options,generateMipMaps);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(32)
			this->_texture = _g3;
		}
	}
	HX_STACK_LINE(36)
	Dynamic textureSize = this->getSize();		HX_STACK_VAR(textureSize,"textureSize");
}
;
	return null();
}

//DynamicTexture_obj::~DynamicTexture_obj() { }

Dynamic DynamicTexture_obj::__CreateEmpty() { return  new DynamicTexture_obj; }
hx::ObjectPtr< DynamicTexture_obj > DynamicTexture_obj::__new(::String name,Dynamic options,::com::gamestudiohx::babylonhx::Scene scene,bool generateMipMaps)
{  hx::ObjectPtr< DynamicTexture_obj > result = new DynamicTexture_obj();
	result->__construct(name,options,scene,generateMipMaps);
	return result;}

Dynamic DynamicTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DynamicTexture_obj > result = new DynamicTexture_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::openfl::display::BitmapData DynamicTexture_obj::getCanvas( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.DynamicTexture","getCanvas",0x2120415e,"com.gamestudiohx.babylonhx.materials.textures.DynamicTexture.getCanvas","com/gamestudiohx/babylonhx/materials/textures/DynamicTexture.hx",48,0x08388dc1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	return this->_canvas;
}


HX_DEFINE_DYNAMIC_FUNC0(DynamicTexture_obj,getCanvas,return )

Void DynamicTexture_obj::update( hx::Null< int >  __o_invertY){
int invertY = __o_invertY.Default(1);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.DynamicTexture","update",0x5af1f0b9,"com.gamestudiohx.babylonhx.materials.textures.DynamicTexture.update","com/gamestudiohx/babylonhx/materials/textures/DynamicTexture.hx",52,0x08388dc1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(invertY,"invertY")
{
		HX_STACK_LINE(52)
		this->getScene()->getEngine()->updateDynamicTexture(this->_texture,this->_canvas,invertY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DynamicTexture_obj,update,(void))

::com::gamestudiohx::babylonhx::materials::textures::Texture DynamicTexture_obj::clone( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.DynamicTexture","clone",0x20028ead,"com.gamestudiohx.babylonhx.materials.textures.DynamicTexture.clone","com/gamestudiohx/babylonhx/materials/textures/DynamicTexture.hx",76,0x08388dc1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	Dynamic textureSize = this->getSize();		HX_STACK_VAR(textureSize,"textureSize");
	HX_STACK_LINE(78)
	::com::gamestudiohx::babylonhx::Scene _g = this->getScene();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(78)
	::com::gamestudiohx::babylonhx::materials::textures::DynamicTexture newTexture = ::com::gamestudiohx::babylonhx::materials::textures::DynamicTexture_obj::__new(this->name,textureSize,_g,this->_generateMipMaps);		HX_STACK_VAR(newTexture,"newTexture");
	HX_STACK_LINE(81)
	newTexture->hasAlpha = this->hasAlpha;
	HX_STACK_LINE(82)
	newTexture->level = this->level;
	HX_STACK_LINE(85)
	newTexture->wrapU = this->wrapU;
	HX_STACK_LINE(86)
	newTexture->wrapV = this->wrapV;
	HX_STACK_LINE(88)
	return newTexture;
}



DynamicTexture_obj::DynamicTexture_obj()
{
}

Dynamic DynamicTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getCanvas") ) { return getCanvas_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_generateMipMaps") ) { return _generateMipMaps; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DynamicTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"_generateMipMaps") ) { _generateMipMaps=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DynamicTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_generateMipMaps"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DynamicTexture_obj,_generateMipMaps),HX_CSTRING("_generateMipMaps")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_generateMipMaps"),
	HX_CSTRING("getCanvas"),
	HX_CSTRING("update"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DynamicTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DynamicTexture_obj::__mClass,"__mClass");
};

#endif

Class DynamicTexture_obj::__mClass;

void DynamicTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.materials.textures.DynamicTexture"), hx::TCanCast< DynamicTexture_obj> ,sStaticFields,sMemberFields,
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

void DynamicTexture_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
} // end namespace textures
