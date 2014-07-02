#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_Texture
#define INCLUDED_com_gamestudiohx_babylonhx_materials_textures_Texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/gamestudiohx/babylonhx/materials/textures/BaseTexture.h>
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,animations,Animation)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,Texture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  Texture_obj : public ::com::gamestudiohx::babylonhx::materials::textures::BaseTexture_obj{
	public:
		typedef ::com::gamestudiohx::babylonhx::materials::textures::BaseTexture_obj super;
		typedef Texture_obj OBJ_;
		Texture_obj();
		Void __construct(::String url,::com::gamestudiohx::babylonhx::Scene scene,Dynamic noMipmap,Dynamic invertY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Texture_obj > __new(::String url,::com::gamestudiohx::babylonhx::Scene scene,Dynamic noMipmap,Dynamic invertY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Texture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Texture"); }

		Float uOffset;
		Float _cachedUOffset;
		Float vOffset;
		Float _cachedVOffset;
		Float uScale;
		Float _cachedUScale;
		Float vScale;
		Float _cachedVScale;
		Float uAng;
		Float _cachedUAng;
		Float vAng;
		Float _cachedVAng;
		Float wAng;
		Float _cachedWAng;
		int wrapU;
		int wrapV;
		Float coordinatesIndex;
		Float coordinatesMode;
		Float _cachedCoordinatesMode;
		Float anisotropicFilteringLevel;
		Float _cachedAnisotropicFilteringLevel;
		::openfl::display::BitmapData _canvas;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _rowGenerationMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _cachedTextureMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _projectionModeMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _t0;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _t1;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _t2;
		::String name;
		::String url;
		Array< ::Dynamic > animations;
		bool _noMipmap;
		Dynamic _invertY;
		virtual Void delayLoad( );

		virtual Void _prepareRowForTextureGeneration( Float x,Float y,Float z,::com::gamestudiohx::babylonhx::tools::math::Vector3 t);
		Dynamic _prepareRowForTextureGeneration_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix _computeTextureMatrix( );
		Dynamic _computeTextureMatrix_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix _computeReflectionTextureMatrix( );
		Dynamic _computeReflectionTextureMatrix_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::textures::Texture clone( );
		Dynamic clone_dyn();

		static int NEAREST_SAMPLINGMODE;
		static int BILINEAR_SAMPLINGMODE;
		static int TRILINEAR_SAMPLINGMODE;
		static int EXPLICIT_MODE;
		static int SPHERICAL_MODE;
		static int PLANAR_MODE;
		static int CUBIC_MODE;
		static int PROJECTION_MODE;
		static int SKYBOX_MODE;
		static int CLAMP_ADDRESSMODE;
		static int WRAP_ADDRESSMODE;
		static int MIRROR_ADDRESSMODE;
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
} // end namespace textures

#endif /* INCLUDED_com_gamestudiohx_babylonhx_materials_textures_Texture */ 
