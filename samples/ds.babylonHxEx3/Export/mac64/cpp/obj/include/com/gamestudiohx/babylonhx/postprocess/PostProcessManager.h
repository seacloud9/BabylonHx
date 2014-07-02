#ifndef INCLUDED_com_gamestudiohx_babylonhx_postprocess_PostProcessManager
#define INCLUDED_com_gamestudiohx_babylonhx_postprocess_PostProcessManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,BabylonGLBuffer)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,postprocess,PostProcessManager)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace postprocess{


class HXCPP_CLASS_ATTRIBUTES  PostProcessManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PostProcessManager_obj OBJ_;
		PostProcessManager_obj();
		Void __construct(::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PostProcessManager_obj > __new(::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PostProcessManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PostProcessManager"); }

		::com::gamestudiohx::babylonhx::Scene _scene;
		Array< int > _vertexDeclaration;
		int _vertexStrideSize;
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _vertexBuffer;
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _indexBuffer;
		virtual Void _prepareFrame( );
		Dynamic _prepareFrame_dyn();

		virtual Void _finalizeFrame( );
		Dynamic _finalizeFrame_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace postprocess

#endif /* INCLUDED_com_gamestudiohx_babylonhx_postprocess_PostProcessManager */ 
