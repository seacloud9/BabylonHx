#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_RenderTargetTexture
#define INCLUDED_com_gamestudiohx_babylonhx_materials_textures_RenderTargetTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/gamestudiohx/babylonhx/materials/textures/Texture.h>
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,RenderTargetTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,Texture)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,rendering,RenderingManager)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  RenderTargetTexture_obj : public ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj{
	public:
		typedef ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj super;
		typedef RenderTargetTexture_obj OBJ_;
		RenderTargetTexture_obj();
		Void __construct(::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,bool generateMipMaps);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RenderTargetTexture_obj > __new(::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,bool generateMipMaps);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderTargetTexture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RenderTargetTexture"); }

		bool _generateMipMaps;
		::com::gamestudiohx::babylonhx::rendering::RenderingManager _renderingManager;
		Array< ::Dynamic > renderList;
		bool renderParticles;
		bool renderSprites;
		bool isRenderTarget;
		Dynamic customRenderFunction;
		Dynamic onBeforeRender;
		Dynamic &onBeforeRender_dyn() { return onBeforeRender;}
		Dynamic onAfterRender;
		Dynamic &onAfterRender_dyn() { return onAfterRender;}
		Array< ::String > _waitingRenderList;
		virtual Void resize( Float size,bool generateMipMaps);
		Dynamic resize_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::textures::Texture clone( );

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
} // end namespace textures

#endif /* INCLUDED_com_gamestudiohx_babylonhx_materials_textures_RenderTargetTexture */ 
