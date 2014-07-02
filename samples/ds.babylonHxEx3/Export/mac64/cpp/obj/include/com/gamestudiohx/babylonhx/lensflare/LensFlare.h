#ifndef INCLUDED_com_gamestudiohx_babylonhx_lensflare_LensFlare
#define INCLUDED_com_gamestudiohx_babylonhx_lensflare_LensFlare

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,lensflare,LensFlare)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,lensflare,LensFlareSystem)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,Texture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Color3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace lensflare{


class HXCPP_CLASS_ATTRIBUTES  LensFlare_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LensFlare_obj OBJ_;
		LensFlare_obj();
		Void __construct(Float size,Float position,::com::gamestudiohx::babylonhx::tools::math::Color3 color,::String imgUrl,::com::gamestudiohx::babylonhx::lensflare::LensFlareSystem system);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LensFlare_obj > __new(Float size,Float position,::com::gamestudiohx::babylonhx::tools::math::Color3 color,::String imgUrl,::com::gamestudiohx::babylonhx::lensflare::LensFlareSystem system);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LensFlare_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LensFlare"); }

		Float size;
		Float position;
		::com::gamestudiohx::babylonhx::tools::math::Color3 color;
		::com::gamestudiohx::babylonhx::materials::textures::Texture texture;
		::com::gamestudiohx::babylonhx::lensflare::LensFlareSystem _system;
		virtual Void dispose( );
		Dynamic dispose_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace lensflare

#endif /* INCLUDED_com_gamestudiohx_babylonhx_lensflare_LensFlare */ 
