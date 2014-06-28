#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_MirrorTexture
#define INCLUDED_com_gamestudiohx_babylonhx_materials_textures_MirrorTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/gamestudiohx/babylonhx/materials/textures/RenderTargetTexture.h>
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,MirrorTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,RenderTargetTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,Texture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Plane)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  MirrorTexture_obj : public ::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture_obj{
	public:
		typedef ::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture_obj super;
		typedef MirrorTexture_obj OBJ_;
		MirrorTexture_obj();
		Void __construct(::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,bool generateMipMaps);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MirrorTexture_obj > __new(::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,bool generateMipMaps);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MirrorTexture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MirrorTexture"); }

		::com::gamestudiohx::babylonhx::tools::math::Matrix _transformMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _savedViewMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _mirrorMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Plane mirrorPlane;
		virtual ::com::gamestudiohx::babylonhx::materials::textures::Texture clone( );

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
} // end namespace textures

#endif /* INCLUDED_com_gamestudiohx_babylonhx_materials_textures_MirrorTexture */ 
