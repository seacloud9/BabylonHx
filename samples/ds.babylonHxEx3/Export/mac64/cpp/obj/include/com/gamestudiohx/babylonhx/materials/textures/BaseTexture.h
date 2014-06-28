#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BaseTexture
#define INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BaseTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BabylonTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  BaseTexture_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BaseTexture_obj OBJ_;
		BaseTexture_obj();
		Void __construct(::String url,::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BaseTexture_obj > __new(::String url,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BaseTexture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BaseTexture"); }

		::com::gamestudiohx::babylonhx::Scene _scene;
		int delayLoadState;
		bool hasAlpha;
		Float level;
		::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture _texture;
		Dynamic onDispose;
		Dynamic &onDispose_dyn() { return onDispose;}
		virtual ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture getInternalTexture( );
		Dynamic getInternalTexture_dyn();

		virtual bool isReady( );
		Dynamic isReady_dyn();

		virtual ::com::gamestudiohx::babylonhx::Scene getScene( );
		Dynamic getScene_dyn();

		virtual Dynamic getSize( );
		Dynamic getSize_dyn();

		virtual Dynamic getBaseSize( );
		Dynamic getBaseSize_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture _getFromCache( ::String url,bool noMipmap);
		Dynamic _getFromCache_dyn();

		virtual Void delayLoad( );
		Dynamic delayLoad_dyn();

		virtual Void releaseInternalTexture( );
		Dynamic releaseInternalTexture_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
} // end namespace textures

#endif /* INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BaseTexture */ 
