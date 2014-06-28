#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
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
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{
namespace textures{

Void BaseTexture_obj::__construct(::String url,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.BaseTexture","new",0xa53447da,"com.gamestudiohx.babylonhx.materials.textures.BaseTexture.new","com/gamestudiohx/babylonhx/materials/textures/BaseTexture.hx",16,0x7c4c7635)
HX_STACK_THIS(this)
HX_STACK_ARG(url,"url")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(21)
	this->level = 1.0;
	HX_STACK_LINE(20)
	this->hasAlpha = false;
	HX_STACK_LINE(28)
	this->_scene = scene;
	HX_STACK_LINE(29)
	this->_scene->textures->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(30)
	this->delayLoadState = ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_NONE;
}
;
	return null();
}

//BaseTexture_obj::~BaseTexture_obj() { }

Dynamic BaseTexture_obj::__CreateEmpty() { return  new BaseTexture_obj; }
hx::ObjectPtr< BaseTexture_obj > BaseTexture_obj::__new(::String url,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< BaseTexture_obj > result = new BaseTexture_obj();
	result->__construct(url,scene);
	return result;}

Dynamic BaseTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseTexture_obj > result = new BaseTexture_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture BaseTexture_obj::getInternalTexture( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.BaseTexture","getInternalTexture",0xa5623cee,"com.gamestudiohx.babylonhx.materials.textures.BaseTexture.getInternalTexture","com/gamestudiohx/babylonhx/materials/textures/BaseTexture.hx",34,0x7c4c7635)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	return this->_texture;
}


HX_DEFINE_DYNAMIC_FUNC0(BaseTexture_obj,getInternalTexture,return )

bool BaseTexture_obj::isReady( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.BaseTexture","isReady",0x060b0093,"com.gamestudiohx.babylonhx.materials.textures.BaseTexture.isReady","com/gamestudiohx/babylonhx/materials/textures/BaseTexture.hx",37,0x7c4c7635)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	if (((this->_texture != null()))){
		HX_STACK_LINE(39)
		return this->_texture->isReady;
	}
	HX_STACK_LINE(42)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(BaseTexture_obj,isReady,return )

::com::gamestudiohx::babylonhx::Scene BaseTexture_obj::getScene( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.BaseTexture","getScene",0xc743171c,"com.gamestudiohx.babylonhx.materials.textures.BaseTexture.getScene","com/gamestudiohx/babylonhx/materials/textures/BaseTexture.hx",46,0x7c4c7635)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	return this->_scene;
}


HX_DEFINE_DYNAMIC_FUNC0(BaseTexture_obj,getScene,return )

Dynamic BaseTexture_obj::getSize( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.BaseTexture","getSize",0xa1a10cf1,"com.gamestudiohx.babylonhx.materials.textures.BaseTexture.getSize","com/gamestudiohx/babylonhx/materials/textures/BaseTexture.hx",49,0x7c4c7635)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	if (((this->_texture->_width != (int)-1))){
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::textures::BaseTexture_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/textures/BaseTexture.hx",51,0x7c4c7635)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("width") , __this->_texture->_width,false);
					__result->Add(HX_CSTRING("height") , __this->_texture->_height,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(51)
		return _Function_2_1::Block(this);
	}
	HX_STACK_LINE(54)
	if (((this->_texture->_size != (int)-1))){
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::textures::BaseTexture_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/textures/BaseTexture.hx",55,0x7c4c7635)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("width") , __this->_texture->_size,false);
					__result->Add(HX_CSTRING("height") , __this->_texture->_size,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(55)
		return _Function_2_1::Block(this);
	}
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/textures/BaseTexture.hx",58,0x7c4c7635)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)0,false);
				__result->Add(HX_CSTRING("height") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(58)
	return _Function_1_1::Block();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseTexture_obj,getSize,return )

Dynamic BaseTexture_obj::getBaseSize( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.BaseTexture","getBaseSize",0x6a50d5a2,"com.gamestudiohx.babylonhx.materials.textures.BaseTexture.getBaseSize","com/gamestudiohx/babylonhx/materials/textures/BaseTexture.hx",61,0x7c4c7635)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	if ((!(this->isReady()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/textures/BaseTexture.hx",63,0x7c4c7635)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("width") , (int)0,false);
					__result->Add(HX_CSTRING("height") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(63)
		return _Function_2_1::Block();
	}
	HX_STACK_LINE(65)
	if (((this->_texture->_size != (int)-1))){
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::textures::BaseTexture_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/textures/BaseTexture.hx",66,0x7c4c7635)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("width") , __this->_texture->_size,false);
					__result->Add(HX_CSTRING("height") , __this->_texture->_size,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(66)
		return _Function_2_1::Block(this);
	}
	struct _Function_1_1{
		inline static Dynamic Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::textures::BaseTexture_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/textures/BaseTexture.hx",69,0x7c4c7635)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , __this->_texture->_baseWidth,false);
				__result->Add(HX_CSTRING("height") , __this->_texture->_baseHeight,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(69)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(BaseTexture_obj,getBaseSize,return )

::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture BaseTexture_obj::_getFromCache( ::String url,bool noMipmap){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.BaseTexture","_getFromCache",0x321d07db,"com.gamestudiohx.babylonhx.materials.textures.BaseTexture._getFromCache","com/gamestudiohx/babylonhx/materials/textures/BaseTexture.hx",72,0x7c4c7635)
	HX_STACK_THIS(this)
	HX_STACK_ARG(url,"url")
	HX_STACK_ARG(noMipmap,"noMipmap")
	HX_STACK_LINE(73)
	Array< ::Dynamic > texturesCache = this->_scene->getEngine()->getLoadedTexturesCache();		HX_STACK_VAR(texturesCache,"texturesCache");
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(74)
		int _g = texturesCache->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		while((true)){
			HX_STACK_LINE(74)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(74)
				break;
			}
			HX_STACK_LINE(74)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(75)
			::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texturesCacheEntry = texturesCache->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture >();		HX_STACK_VAR(texturesCacheEntry,"texturesCacheEntry");
			HX_STACK_LINE(77)
			if (((bool((texturesCacheEntry->url == url)) && bool((texturesCacheEntry->noMipmap == noMipmap))))){
				HX_STACK_LINE(78)
				(texturesCacheEntry->references)++;
				HX_STACK_LINE(79)
				return texturesCacheEntry;
			}
		}
	}
	HX_STACK_LINE(83)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BaseTexture_obj,_getFromCache,return )

Void BaseTexture_obj::delayLoad( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.BaseTexture","delayLoad",0x013b6a43,"com.gamestudiohx.babylonhx.materials.textures.BaseTexture.delayLoad","com/gamestudiohx/babylonhx/materials/textures/BaseTexture.hx",86,0x7c4c7635)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseTexture_obj,delayLoad,(void))

Void BaseTexture_obj::releaseInternalTexture( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.BaseTexture","releaseInternalTexture",0x3d1411dd,"com.gamestudiohx.babylonhx.materials.textures.BaseTexture.releaseInternalTexture","com/gamestudiohx/babylonhx/materials/textures/BaseTexture.hx",90,0x7c4c7635)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		if (((this->_texture == null()))){
			HX_STACK_LINE(92)
			return null();
		}
		HX_STACK_LINE(94)
		Array< ::Dynamic > texturesCache = this->_scene->getEngine()->getLoadedTexturesCache();		HX_STACK_VAR(texturesCache,"texturesCache");
		HX_STACK_LINE(95)
		(this->_texture->references)--;
		HX_STACK_LINE(98)
		if (((this->_texture->references == (int)0))){
			HX_STACK_LINE(101)
			texturesCache->remove(this->_texture);
			HX_STACK_LINE(103)
			this->_scene->getEngine()->_releaseTexture(this->_texture);
			HX_STACK_LINE(105)
			this->_texture = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseTexture_obj,releaseInternalTexture,(void))

Void BaseTexture_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.BaseTexture","dispose",0x3e173d19,"com.gamestudiohx.babylonhx.materials.textures.BaseTexture.dispose","com/gamestudiohx/babylonhx/materials/textures/BaseTexture.hx",109,0x7c4c7635)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		int index = ::Lambda_obj::indexOf(this->_scene->textures,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(113)
		if (((index >= (int)0))){
			HX_STACK_LINE(114)
			this->_scene->textures->splice(index,(int)1);
		}
		HX_STACK_LINE(117)
		if (((this->_texture == null()))){
			HX_STACK_LINE(118)
			return null();
		}
		HX_STACK_LINE(121)
		this->releaseInternalTexture();
		HX_STACK_LINE(125)
		if (((this->onDispose_dyn() != null()))){
			HX_STACK_LINE(126)
			this->onDispose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseTexture_obj,dispose,(void))


BaseTexture_obj::BaseTexture_obj()
{
}

void BaseTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseTexture);
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(delayLoadState,"delayLoadState");
	HX_MARK_MEMBER_NAME(hasAlpha,"hasAlpha");
	HX_MARK_MEMBER_NAME(level,"level");
	HX_MARK_MEMBER_NAME(_texture,"_texture");
	HX_MARK_MEMBER_NAME(onDispose,"onDispose");
	HX_MARK_END_CLASS();
}

void BaseTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(delayLoadState,"delayLoadState");
	HX_VISIT_MEMBER_NAME(hasAlpha,"hasAlpha");
	HX_VISIT_MEMBER_NAME(level,"level");
	HX_VISIT_MEMBER_NAME(_texture,"_texture");
	HX_VISIT_MEMBER_NAME(onDispose,"onDispose");
}

Dynamic BaseTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isReady") ) { return isReady_dyn(); }
		if (HX_FIELD_EQ(inName,"getSize") ) { return getSize_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasAlpha") ) { return hasAlpha; }
		if (HX_FIELD_EQ(inName,"_texture") ) { return _texture; }
		if (HX_FIELD_EQ(inName,"getScene") ) { return getScene_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onDispose") ) { return onDispose; }
		if (HX_FIELD_EQ(inName,"delayLoad") ) { return delayLoad_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getBaseSize") ) { return getBaseSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_getFromCache") ) { return _getFromCache_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"delayLoadState") ) { return delayLoadState; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getInternalTexture") ) { return getInternalTexture_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"releaseInternalTexture") ) { return releaseInternalTexture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BaseTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::gamestudiohx::babylonhx::Scene >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasAlpha") ) { hasAlpha=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_texture") ) { _texture=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onDispose") ) { onDispose=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"delayLoadState") ) { delayLoadState=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("delayLoadState"));
	outFields->push(HX_CSTRING("hasAlpha"));
	outFields->push(HX_CSTRING("level"));
	outFields->push(HX_CSTRING("_texture"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Scene*/ ,(int)offsetof(BaseTexture_obj,_scene),HX_CSTRING("_scene")},
	{hx::fsInt,(int)offsetof(BaseTexture_obj,delayLoadState),HX_CSTRING("delayLoadState")},
	{hx::fsBool,(int)offsetof(BaseTexture_obj,hasAlpha),HX_CSTRING("hasAlpha")},
	{hx::fsFloat,(int)offsetof(BaseTexture_obj,level),HX_CSTRING("level")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture*/ ,(int)offsetof(BaseTexture_obj,_texture),HX_CSTRING("_texture")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BaseTexture_obj,onDispose),HX_CSTRING("onDispose")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_scene"),
	HX_CSTRING("delayLoadState"),
	HX_CSTRING("hasAlpha"),
	HX_CSTRING("level"),
	HX_CSTRING("_texture"),
	HX_CSTRING("onDispose"),
	HX_CSTRING("getInternalTexture"),
	HX_CSTRING("isReady"),
	HX_CSTRING("getScene"),
	HX_CSTRING("getSize"),
	HX_CSTRING("getBaseSize"),
	HX_CSTRING("_getFromCache"),
	HX_CSTRING("delayLoad"),
	HX_CSTRING("releaseInternalTexture"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseTexture_obj::__mClass,"__mClass");
};

#endif

Class BaseTexture_obj::__mClass;

void BaseTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.materials.textures.BaseTexture"), hx::TCanCast< BaseTexture_obj> ,sStaticFields,sMemberFields,
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

void BaseTexture_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
} // end namespace textures
