#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_BabylonGLBuffer
#include <com/gamestudiohx/babylonhx/mesh/BabylonGLBuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLBuffer
#include <openfl/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLObject
#include <openfl/gl/GLObject.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{

Void BabylonGLBuffer_obj::__construct(::openfl::gl::GLBuffer buffer,hx::Null< int >  __o__capacity)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.BabylonGLBuffer","new",0x15ec94fd,"com.gamestudiohx.babylonhx.mesh.BabylonGLBuffer.new","com/gamestudiohx/babylonhx/mesh/AbstractMesh.hx",51,0x2cff64c0)
HX_STACK_THIS(this)
HX_STACK_ARG(buffer,"buffer")
HX_STACK_ARG(__o__capacity,"_capacity")
int _capacity = __o__capacity.Default(0);
{
	HX_STACK_LINE(52)
	this->buffer = buffer;
	HX_STACK_LINE(53)
	this->references = (int)1;
	HX_STACK_LINE(54)
	this->capacity = _capacity;
}
;
	return null();
}

//BabylonGLBuffer_obj::~BabylonGLBuffer_obj() { }

Dynamic BabylonGLBuffer_obj::__CreateEmpty() { return  new BabylonGLBuffer_obj; }
hx::ObjectPtr< BabylonGLBuffer_obj > BabylonGLBuffer_obj::__new(::openfl::gl::GLBuffer buffer,hx::Null< int >  __o__capacity)
{  hx::ObjectPtr< BabylonGLBuffer_obj > result = new BabylonGLBuffer_obj();
	result->__construct(buffer,__o__capacity);
	return result;}

Dynamic BabylonGLBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BabylonGLBuffer_obj > result = new BabylonGLBuffer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


BabylonGLBuffer_obj::BabylonGLBuffer_obj()
{
}

void BabylonGLBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BabylonGLBuffer);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(references,"references");
	HX_MARK_MEMBER_NAME(capacity,"capacity");
	HX_MARK_END_CLASS();
}

void BabylonGLBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(references,"references");
	HX_VISIT_MEMBER_NAME(capacity,"capacity");
}

Dynamic BabylonGLBuffer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"capacity") ) { return capacity; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"references") ) { return references; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BabylonGLBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::openfl::gl::GLBuffer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"capacity") ) { capacity=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"references") ) { references=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BabylonGLBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("buffer"));
	outFields->push(HX_CSTRING("references"));
	outFields->push(HX_CSTRING("capacity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::gl::GLBuffer*/ ,(int)offsetof(BabylonGLBuffer_obj,buffer),HX_CSTRING("buffer")},
	{hx::fsInt,(int)offsetof(BabylonGLBuffer_obj,references),HX_CSTRING("references")},
	{hx::fsInt,(int)offsetof(BabylonGLBuffer_obj,capacity),HX_CSTRING("capacity")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("buffer"),
	HX_CSTRING("references"),
	HX_CSTRING("capacity"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BabylonGLBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BabylonGLBuffer_obj::__mClass,"__mClass");
};

#endif

Class BabylonGLBuffer_obj::__mClass;

void BabylonGLBuffer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.mesh.BabylonGLBuffer"), hx::TCanCast< BabylonGLBuffer_obj> ,sStaticFields,sMemberFields,
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

void BabylonGLBuffer_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh
