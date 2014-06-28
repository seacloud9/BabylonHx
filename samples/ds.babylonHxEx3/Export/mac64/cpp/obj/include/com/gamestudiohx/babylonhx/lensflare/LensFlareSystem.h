#ifndef INCLUDED_com_gamestudiohx_babylonhx_lensflare_LensFlareSystem
#define INCLUDED_com_gamestudiohx_babylonhx_lensflare_LensFlareSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,lensflare,LensFlare)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,lensflare,LensFlareSystem)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Effect)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,BabylonGLBuffer)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Viewport)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace lensflare{


class HXCPP_CLASS_ATTRIBUTES  LensFlareSystem_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LensFlareSystem_obj OBJ_;
		LensFlareSystem_obj();
		Void __construct(::String name,Dynamic emitter,::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LensFlareSystem_obj > __new(::String name,Dynamic emitter,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LensFlareSystem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LensFlareSystem"); }

		::String name;
		Float borderLimit;
		Array< ::Dynamic > lensFlares;
		Dynamic _emitter;
		::com::gamestudiohx::babylonhx::Scene _scene;
		Array< int > _vertexDeclaration;
		int _vertexStrideSize;
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _vertexBuffer;
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _indexBuffer;
		::com::gamestudiohx::babylonhx::materials::Effect _effect;
		Float _positionX;
		Float _positionY;
		Dynamic meshesSelectionPredicate;
		Dynamic &meshesSelectionPredicate_dyn() { return meshesSelectionPredicate;}
		virtual ::com::gamestudiohx::babylonhx::Scene getScene( );
		Dynamic getScene_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector3 getEmitterPosition( );
		Dynamic getEmitterPosition_dyn();

		virtual bool computeEffectivePosition( ::com::gamestudiohx::babylonhx::tools::math::Viewport globalViewport);
		Dynamic computeEffectivePosition_dyn();

		virtual bool _isVisible( );
		Dynamic _isVisible_dyn();

		virtual bool render( );
		Dynamic render_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace lensflare

#endif /* INCLUDED_com_gamestudiohx_babylonhx_lensflare_LensFlareSystem */ 
