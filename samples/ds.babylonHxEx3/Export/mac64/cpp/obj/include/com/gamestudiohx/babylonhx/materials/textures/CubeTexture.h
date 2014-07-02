#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_CubeTexture
#define INCLUDED_com_gamestudiohx_babylonhx_materials_textures_CubeTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/gamestudiohx/babylonhx/materials/textures/Texture.h>
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,CubeTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,Texture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  CubeTexture_obj : public ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj{
	public:
		typedef ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj super;
		typedef CubeTexture_obj OBJ_;
		CubeTexture_obj();
		Void __construct(::String rootUrl,::com::gamestudiohx::babylonhx::Scene scene,Array< ::String > extensions);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CubeTexture_obj > __new(::String rootUrl,::com::gamestudiohx::babylonhx::Scene scene,Array< ::String > extensions);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CubeTexture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CubeTexture"); }

		::com::gamestudiohx::babylonhx::tools::math::Matrix _textureMatrix;
		Array< ::String > _extensions;
		bool isCube;
		virtual Void delayLoad( );

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix _computeReflectionTextureMatrix( );

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
} // end namespace textures

#endif /* INCLUDED_com_gamestudiohx_babylonhx_materials_textures_CubeTexture */ 
