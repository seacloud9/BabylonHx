#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_shadows_ShadowGenerator
#define INCLUDED_com_gamestudiohx_babylonhx_lights_shadows_ShadowGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,lights,Light)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,lights,shadows,ShadowGenerator)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Effect)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,RenderTargetTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,Texture)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace lights{
namespace shadows{


class HXCPP_CLASS_ATTRIBUTES  ShadowGenerator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShadowGenerator_obj OBJ_;
		ShadowGenerator_obj();
		Void __construct(Float mapSize,::com::gamestudiohx::babylonhx::lights::Light light);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ShadowGenerator_obj > __new(Float mapSize,::com::gamestudiohx::babylonhx::lights::Light light);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShadowGenerator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ShadowGenerator"); }

		::com::gamestudiohx::babylonhx::lights::Light _light;
		::com::gamestudiohx::babylonhx::Scene _scene;
		::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture _shadowMap;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _viewMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _projectionMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _transformMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _worldViewProjection;
		bool useVarianceShadowMap;
		::String _cachedDefines;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _cachedPosition;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _cachedDirection;
		::com::gamestudiohx::babylonhx::materials::Effect _effect;
		virtual bool isReady( ::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh);
		Dynamic isReady_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture getShadowMap( );
		Dynamic getShadowMap_dyn();

		virtual ::com::gamestudiohx::babylonhx::lights::Light getLight( );
		Dynamic getLight_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix getTransformMatrix( );
		Dynamic getTransformMatrix_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace lights
} // end namespace shadows

#endif /* INCLUDED_com_gamestudiohx_babylonhx_lights_shadows_ShadowGenerator */ 
