#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_BabylonGLBuffer
#define INCLUDED_com_gamestudiohx_babylonhx_mesh_BabylonGLBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,BabylonGLBuffer)
HX_DECLARE_CLASS2(openfl,gl,GLBuffer)
HX_DECLARE_CLASS2(openfl,gl,GLObject)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{


class HXCPP_CLASS_ATTRIBUTES  BabylonGLBuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BabylonGLBuffer_obj OBJ_;
		BabylonGLBuffer_obj();
		Void __construct(::openfl::gl::GLBuffer buffer,hx::Null< int >  __o__capacity);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BabylonGLBuffer_obj > __new(::openfl::gl::GLBuffer buffer,hx::Null< int >  __o__capacity);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BabylonGLBuffer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BabylonGLBuffer"); }

		::openfl::gl::GLBuffer buffer;
		int references;
		int capacity;
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh

#endif /* INCLUDED_com_gamestudiohx_babylonhx_mesh_BabylonGLBuffer */ 
