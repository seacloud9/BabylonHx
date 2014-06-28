#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BabylonTexture
#include <com/gamestudiohx/babylonhx/materials/textures/BabylonTexture.h>
#endif
#ifndef INCLUDED_openfl_gl_GLFramebuffer
#include <openfl/gl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLObject
#include <openfl/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl_gl_GLRenderbuffer
#include <openfl/gl/GLRenderbuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLTexture
#include <openfl/gl/GLTexture.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{
namespace textures{

Void BabylonTexture_obj::__construct(::String url,::openfl::gl::GLTexture data)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.BabylonTexture","new",0x0067a9fa,"com.gamestudiohx.babylonhx.materials.textures.BabylonTexture.new","com/gamestudiohx/babylonhx/materials/textures/Texture.hx",23,0xfb5e1644)
HX_STACK_THIS(this)
HX_STACK_ARG(url,"url")
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(35)
	this->noMipmap = true;
	HX_STACK_LINE(49)
	this->url = url;
	HX_STACK_LINE(50)
	this->data = data;
	HX_STACK_LINE(52)
	this->_framebuffer = null();
	HX_STACK_LINE(53)
	this->_depthBuffer = null();
	HX_STACK_LINE(54)
	this->generateMipMaps = false;
	HX_STACK_LINE(55)
	this->isCube = false;
	HX_STACK_LINE(57)
	this->_size = (int)1;
	HX_STACK_LINE(58)
	this->_width = (int)1;
	HX_STACK_LINE(59)
	this->_height = (int)1;
	HX_STACK_LINE(60)
	this->_baseHeight = (int)1;
	HX_STACK_LINE(61)
	this->_baseWidth = (int)1;
	HX_STACK_LINE(62)
	this->_cachedWrapU = (int)-1;
	HX_STACK_LINE(63)
	this->_cachedWrapV = (int)-1;
	HX_STACK_LINE(65)
	this->isReady = false;
	HX_STACK_LINE(66)
	this->noMipmap = false;
	HX_STACK_LINE(67)
	this->references = (int)0;
}
;
	return null();
}

//BabylonTexture_obj::~BabylonTexture_obj() { }

Dynamic BabylonTexture_obj::__CreateEmpty() { return  new BabylonTexture_obj; }
hx::ObjectPtr< BabylonTexture_obj > BabylonTexture_obj::__new(::String url,::openfl::gl::GLTexture data)
{  hx::ObjectPtr< BabylonTexture_obj > result = new BabylonTexture_obj();
	result->__construct(url,data);
	return result;}

Dynamic BabylonTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BabylonTexture_obj > result = new BabylonTexture_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


BabylonTexture_obj::BabylonTexture_obj()
{
}

void BabylonTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BabylonTexture);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(_framebuffer,"_framebuffer");
	HX_MARK_MEMBER_NAME(_depthBuffer,"_depthBuffer");
	HX_MARK_MEMBER_NAME(generateMipMaps,"generateMipMaps");
	HX_MARK_MEMBER_NAME(isCube,"isCube");
	HX_MARK_MEMBER_NAME(_size,"_size");
	HX_MARK_MEMBER_NAME(isReady,"isReady");
	HX_MARK_MEMBER_NAME(noMipmap,"noMipmap");
	HX_MARK_MEMBER_NAME(references,"references");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(_baseHeight,"_baseHeight");
	HX_MARK_MEMBER_NAME(_baseWidth,"_baseWidth");
	HX_MARK_MEMBER_NAME(_cachedWrapU,"_cachedWrapU");
	HX_MARK_MEMBER_NAME(_cachedWrapV,"_cachedWrapV");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_END_CLASS();
}

void BabylonTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(_framebuffer,"_framebuffer");
	HX_VISIT_MEMBER_NAME(_depthBuffer,"_depthBuffer");
	HX_VISIT_MEMBER_NAME(generateMipMaps,"generateMipMaps");
	HX_VISIT_MEMBER_NAME(isCube,"isCube");
	HX_VISIT_MEMBER_NAME(_size,"_size");
	HX_VISIT_MEMBER_NAME(isReady,"isReady");
	HX_VISIT_MEMBER_NAME(noMipmap,"noMipmap");
	HX_VISIT_MEMBER_NAME(references,"references");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(_baseHeight,"_baseHeight");
	HX_VISIT_MEMBER_NAME(_baseWidth,"_baseWidth");
	HX_VISIT_MEMBER_NAME(_cachedWrapU,"_cachedWrapU");
	HX_VISIT_MEMBER_NAME(_cachedWrapV,"_cachedWrapV");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
}

Dynamic BabylonTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_size") ) { return _size; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isCube") ) { return isCube; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isReady") ) { return isReady; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noMipmap") ) { return noMipmap; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"references") ) { return references; }
		if (HX_FIELD_EQ(inName,"_baseWidth") ) { return _baseWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_baseHeight") ) { return _baseHeight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_framebuffer") ) { return _framebuffer; }
		if (HX_FIELD_EQ(inName,"_depthBuffer") ) { return _depthBuffer; }
		if (HX_FIELD_EQ(inName,"_cachedWrapU") ) { return _cachedWrapU; }
		if (HX_FIELD_EQ(inName,"_cachedWrapV") ) { return _cachedWrapV; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"generateMipMaps") ) { return generateMipMaps; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BabylonTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::openfl::gl::GLTexture >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_size") ) { _size=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isCube") ) { isCube=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isReady") ) { isReady=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noMipmap") ) { noMipmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"references") ) { references=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_baseWidth") ) { _baseWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_baseHeight") ) { _baseHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_framebuffer") ) { _framebuffer=inValue.Cast< ::openfl::gl::GLFramebuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_depthBuffer") ) { _depthBuffer=inValue.Cast< ::openfl::gl::GLRenderbuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedWrapU") ) { _cachedWrapU=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedWrapV") ) { _cachedWrapV=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"generateMipMaps") ) { generateMipMaps=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BabylonTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("_framebuffer"));
	outFields->push(HX_CSTRING("_depthBuffer"));
	outFields->push(HX_CSTRING("generateMipMaps"));
	outFields->push(HX_CSTRING("isCube"));
	outFields->push(HX_CSTRING("_size"));
	outFields->push(HX_CSTRING("isReady"));
	outFields->push(HX_CSTRING("noMipmap"));
	outFields->push(HX_CSTRING("references"));
	outFields->push(HX_CSTRING("url"));
	outFields->push(HX_CSTRING("_baseHeight"));
	outFields->push(HX_CSTRING("_baseWidth"));
	outFields->push(HX_CSTRING("_cachedWrapU"));
	outFields->push(HX_CSTRING("_cachedWrapV"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::gl::GLTexture*/ ,(int)offsetof(BabylonTexture_obj,data),HX_CSTRING("data")},
	{hx::fsObject /*::openfl::gl::GLFramebuffer*/ ,(int)offsetof(BabylonTexture_obj,_framebuffer),HX_CSTRING("_framebuffer")},
	{hx::fsObject /*::openfl::gl::GLRenderbuffer*/ ,(int)offsetof(BabylonTexture_obj,_depthBuffer),HX_CSTRING("_depthBuffer")},
	{hx::fsBool,(int)offsetof(BabylonTexture_obj,generateMipMaps),HX_CSTRING("generateMipMaps")},
	{hx::fsBool,(int)offsetof(BabylonTexture_obj,isCube),HX_CSTRING("isCube")},
	{hx::fsFloat,(int)offsetof(BabylonTexture_obj,_size),HX_CSTRING("_size")},
	{hx::fsBool,(int)offsetof(BabylonTexture_obj,isReady),HX_CSTRING("isReady")},
	{hx::fsBool,(int)offsetof(BabylonTexture_obj,noMipmap),HX_CSTRING("noMipmap")},
	{hx::fsInt,(int)offsetof(BabylonTexture_obj,references),HX_CSTRING("references")},
	{hx::fsString,(int)offsetof(BabylonTexture_obj,url),HX_CSTRING("url")},
	{hx::fsInt,(int)offsetof(BabylonTexture_obj,_baseHeight),HX_CSTRING("_baseHeight")},
	{hx::fsInt,(int)offsetof(BabylonTexture_obj,_baseWidth),HX_CSTRING("_baseWidth")},
	{hx::fsInt,(int)offsetof(BabylonTexture_obj,_cachedWrapU),HX_CSTRING("_cachedWrapU")},
	{hx::fsInt,(int)offsetof(BabylonTexture_obj,_cachedWrapV),HX_CSTRING("_cachedWrapV")},
	{hx::fsFloat,(int)offsetof(BabylonTexture_obj,_width),HX_CSTRING("_width")},
	{hx::fsFloat,(int)offsetof(BabylonTexture_obj,_height),HX_CSTRING("_height")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("data"),
	HX_CSTRING("_framebuffer"),
	HX_CSTRING("_depthBuffer"),
	HX_CSTRING("generateMipMaps"),
	HX_CSTRING("isCube"),
	HX_CSTRING("_size"),
	HX_CSTRING("isReady"),
	HX_CSTRING("noMipmap"),
	HX_CSTRING("references"),
	HX_CSTRING("url"),
	HX_CSTRING("_baseHeight"),
	HX_CSTRING("_baseWidth"),
	HX_CSTRING("_cachedWrapU"),
	HX_CSTRING("_cachedWrapV"),
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BabylonTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BabylonTexture_obj::__mClass,"__mClass");
};

#endif

Class BabylonTexture_obj::__mClass;

void BabylonTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.materials.textures.BabylonTexture"), hx::TCanCast< BabylonTexture_obj> ,sStaticFields,sMemberFields,
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

void BabylonTexture_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
} // end namespace textures
