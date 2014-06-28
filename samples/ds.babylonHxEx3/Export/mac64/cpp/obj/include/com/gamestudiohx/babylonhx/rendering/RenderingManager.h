#ifndef INCLUDED_com_gamestudiohx_babylonhx_rendering_RenderingManager
#define INCLUDED_com_gamestudiohx_babylonhx_rendering_RenderingManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,SubMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,rendering,RenderingGroup)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,rendering,RenderingManager)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,tools,SmartArray)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace rendering{


class HXCPP_CLASS_ATTRIBUTES  RenderingManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RenderingManager_obj OBJ_;
		RenderingManager_obj();
		Void __construct(::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RenderingManager_obj > __new(::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderingManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RenderingManager"); }

		::com::gamestudiohx::babylonhx::Scene _scene;
		Array< ::Dynamic > _renderingGroups;
		bool _depthBufferAlreadyCleaned;
		virtual Void _renderParticles( int index,Array< ::Dynamic > activeMeshes);
		Dynamic _renderParticles_dyn();

		virtual Void _renderSprites( int index);
		Dynamic _renderSprites_dyn();

		virtual Void _clearDepthBuffer( );
		Dynamic _clearDepthBuffer_dyn();

		virtual Void render( Dynamic customRenderFunction,Array< ::Dynamic > activeMeshes,bool renderParticles,bool renderSprites);
		Dynamic render_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void dispatch( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh);
		Dynamic dispatch_dyn();

		static int MAX_RENDERINGGROUPS;
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace rendering

#endif /* INCLUDED_com_gamestudiohx_babylonhx_rendering_RenderingManager */ 
