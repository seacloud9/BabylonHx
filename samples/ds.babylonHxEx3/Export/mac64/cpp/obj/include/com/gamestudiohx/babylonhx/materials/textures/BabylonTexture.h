#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BabylonTexture
#define INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BabylonTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BabylonTexture)
HX_DECLARE_CLASS2(openfl,gl,GLFramebuffer)
HX_DECLARE_CLASS2(openfl,gl,GLObject)
HX_DECLARE_CLASS2(openfl,gl,GLRenderbuffer)
HX_DECLARE_CLASS2(openfl,gl,GLTexture)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  BabylonTexture_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BabylonTexture_obj OBJ_;
		BabylonTexture_obj();
		Void __construct(::String url,::openfl::gl::GLTexture data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BabylonTexture_obj > __new(::String url,::openfl::gl::GLTexture data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BabylonTexture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BabylonTexture"); }

		::openfl::gl::GLTexture data;
		::openfl::gl::GLFramebuffer _framebuffer;
		::openfl::gl::GLRenderbuffer _depthBuffer;
		bool generateMipMaps;
		bool isCube;
		Float _size;
		bool isReady;
		bool noMipmap;
		int references;
		::String url;
		int _baseHeight;
		int _baseWidth;
		int _cachedWrapU;
		int _cachedWrapV;
		Float _width;
		Float _height;
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
} // end namespace textures

#endif /* INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BabylonTexture */ 
