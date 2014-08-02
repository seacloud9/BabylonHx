#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_DynamicTexture
#define INCLUDED_com_gamestudiohx_babylonhx_materials_textures_DynamicTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/gamestudiohx/babylonhx/materials/textures/Texture.h>
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,DynamicTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,Texture)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  DynamicTexture_obj : public ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj{
	public:
		typedef ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj super;
		typedef DynamicTexture_obj OBJ_;
		DynamicTexture_obj();
		Void __construct(::String name,Dynamic options,::com::gamestudiohx::babylonhx::Scene scene,bool generateMipMaps);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DynamicTexture_obj > __new(::String name,Dynamic options,::com::gamestudiohx::babylonhx::Scene scene,bool generateMipMaps);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DynamicTexture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("DynamicTexture"); }

		bool _generateMipMaps;
		virtual ::openfl::display::BitmapData getCanvas( );
		Dynamic getCanvas_dyn();

		virtual Void update( hx::Null< int >  invertY);

		virtual ::com::gamestudiohx::babylonhx::materials::textures::Texture clone( );

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
} // end namespace textures

#endif /* INCLUDED_com_gamestudiohx_babylonhx_materials_textures_DynamicTexture */ 
