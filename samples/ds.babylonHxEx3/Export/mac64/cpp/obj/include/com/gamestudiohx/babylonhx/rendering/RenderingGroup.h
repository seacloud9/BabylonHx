#ifndef INCLUDED_com_gamestudiohx_babylonhx_rendering_RenderingGroup
#define INCLUDED_com_gamestudiohx_babylonhx_rendering_RenderingGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,SubMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,rendering,RenderingGroup)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,tools,SmartArray)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace rendering{


class HXCPP_CLASS_ATTRIBUTES  RenderingGroup_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RenderingGroup_obj OBJ_;
		RenderingGroup_obj();
		Void __construct(int index,::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RenderingGroup_obj > __new(int index,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderingGroup_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RenderingGroup"); }

		int index;
		::com::gamestudiohx::babylonhx::Scene _scene;
		::com::gamestudiohx::babylonhx::tools::SmartArray _opaqueSubMeshes;
		::com::gamestudiohx::babylonhx::tools::SmartArray _transparentSubMeshes;
		::com::gamestudiohx::babylonhx::tools::SmartArray _alphaTestSubMeshes;
		int _activeVertices;
		virtual bool render( Dynamic customRenderFunction,Dynamic beforeTransparents);
		Dynamic render_dyn();

		virtual Void prepare( );
		Dynamic prepare_dyn();

		virtual Void dispatch( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh);
		Dynamic dispatch_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace rendering

#endif /* INCLUDED_com_gamestudiohx_babylonhx_rendering_RenderingGroup */ 
