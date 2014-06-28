#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_Scene
#include <com/gamestudiohx/babylonhx/Scene.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lensflare_LensFlare
#include <com/gamestudiohx/babylonhx/lensflare/LensFlare.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lensflare_LensFlareSystem
#include <com/gamestudiohx/babylonhx/lensflare/LensFlareSystem.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BaseTexture
#include <com/gamestudiohx/babylonhx/materials/textures/BaseTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_Texture
#include <com/gamestudiohx/babylonhx/materials/textures/Texture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color3
#include <com/gamestudiohx/babylonhx/tools/math/Color3.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace lensflare{

Void LensFlare_obj::__construct(Float size,Float position,::com::gamestudiohx::babylonhx::tools::math::Color3 color,::String imgUrl,::com::gamestudiohx::babylonhx::lensflare::LensFlareSystem system)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.lensflare.LensFlare","new",0xdc67ecf2,"com.gamestudiohx.babylonhx.lensflare.LensFlare.new","com/gamestudiohx/babylonhx/lensflare/LensFlare.hx",23,0x8aae9060)
HX_STACK_THIS(this)
HX_STACK_ARG(size,"size")
HX_STACK_ARG(position,"position")
HX_STACK_ARG(color,"color")
HX_STACK_ARG(imgUrl,"imgUrl")
HX_STACK_ARG(system,"system")
{
	HX_STACK_LINE(24)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	if (((color != null()))){
		HX_STACK_LINE(24)
		_g = color;
	}
	else{
		HX_STACK_LINE(24)
		_g = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new((int)1,(int)1,(int)1);
	}
	HX_STACK_LINE(24)
	this->color = _g;
	HX_STACK_LINE(25)
	this->position = position;
	HX_STACK_LINE(26)
	this->size = size;
	HX_STACK_LINE(27)
	::com::gamestudiohx::babylonhx::materials::textures::Texture _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(27)
	if (((imgUrl != null()))){
		HX_STACK_LINE(27)
		::com::gamestudiohx::babylonhx::Scene _g1 = system->getScene();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		_g2 = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::__new(imgUrl,_g1,true,null());
	}
	else{
		HX_STACK_LINE(27)
		_g2 = null();
	}
	HX_STACK_LINE(27)
	this->texture = _g2;
	HX_STACK_LINE(28)
	this->_system = system;
	HX_STACK_LINE(30)
	this->_system->lensFlares->push(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//LensFlare_obj::~LensFlare_obj() { }

Dynamic LensFlare_obj::__CreateEmpty() { return  new LensFlare_obj; }
hx::ObjectPtr< LensFlare_obj > LensFlare_obj::__new(Float size,Float position,::com::gamestudiohx::babylonhx::tools::math::Color3 color,::String imgUrl,::com::gamestudiohx::babylonhx::lensflare::LensFlareSystem system)
{  hx::ObjectPtr< LensFlare_obj > result = new LensFlare_obj();
	result->__construct(size,position,color,imgUrl,system);
	return result;}

Dynamic LensFlare_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LensFlare_obj > result = new LensFlare_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void LensFlare_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.lensflare.LensFlare","dispose",0x7a1f4e31,"com.gamestudiohx.babylonhx.lensflare.LensFlare.dispose","com/gamestudiohx/babylonhx/lensflare/LensFlare.hx",33,0x8aae9060)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		if (((this->texture != null()))){
			HX_STACK_LINE(35)
			this->texture->dispose();
		}
		HX_STACK_LINE(41)
		this->_system->lensFlares->remove(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LensFlare_obj,dispose,(void))


LensFlare_obj::LensFlare_obj()
{
}

void LensFlare_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LensFlare);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(_system,"_system");
	HX_MARK_END_CLASS();
}

void LensFlare_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(_system,"_system");
}

Dynamic LensFlare_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		if (HX_FIELD_EQ(inName,"_system") ) { return _system; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LensFlare_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color3 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::textures::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_system") ) { _system=inValue.Cast< ::com::gamestudiohx::babylonhx::lensflare::LensFlareSystem >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LensFlare_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("_system"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(LensFlare_obj,size),HX_CSTRING("size")},
	{hx::fsFloat,(int)offsetof(LensFlare_obj,position),HX_CSTRING("position")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color3*/ ,(int)offsetof(LensFlare_obj,color),HX_CSTRING("color")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::textures::Texture*/ ,(int)offsetof(LensFlare_obj,texture),HX_CSTRING("texture")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::lensflare::LensFlareSystem*/ ,(int)offsetof(LensFlare_obj,_system),HX_CSTRING("_system")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("size"),
	HX_CSTRING("position"),
	HX_CSTRING("color"),
	HX_CSTRING("texture"),
	HX_CSTRING("_system"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LensFlare_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LensFlare_obj::__mClass,"__mClass");
};

#endif

Class LensFlare_obj::__mClass;

void LensFlare_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.lensflare.LensFlare"), hx::TCanCast< LensFlare_obj> ,sStaticFields,sMemberFields,
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

void LensFlare_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace lensflare
