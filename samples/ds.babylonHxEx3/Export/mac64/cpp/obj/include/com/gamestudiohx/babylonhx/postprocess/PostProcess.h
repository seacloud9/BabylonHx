#ifndef INCLUDED_com_gamestudiohx_babylonhx_postprocess_PostProcess
#define INCLUDED_com_gamestudiohx_babylonhx_postprocess_PostProcess

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Engine)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,cameras,Camera)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Effect)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,postprocess,PostProcess)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,tools,SmartArray)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace postprocess{


class HXCPP_CLASS_ATTRIBUTES  PostProcess_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PostProcess_obj OBJ_;
		PostProcess_obj();
		Void __construct(::String name,::String fragmentUrl,Array< ::String > parameters,Array< ::String > samplers,Float ratio,::com::gamestudiohx::babylonhx::cameras::Camera camera,hx::Null< int >  __o_samplingMode,::com::gamestudiohx::babylonhx::Engine engine,hx::Null< bool >  __o_reusable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PostProcess_obj > __new(::String name,::String fragmentUrl,Array< ::String > parameters,Array< ::String > samplers,Float ratio,::com::gamestudiohx::babylonhx::cameras::Camera camera,hx::Null< int >  __o_samplingMode,::com::gamestudiohx::babylonhx::Engine engine,hx::Null< bool >  __o_reusable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PostProcess_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PostProcess"); }

		::String name;
		::com::gamestudiohx::babylonhx::cameras::Camera _camera;
		::com::gamestudiohx::babylonhx::Scene _scene;
		::com::gamestudiohx::babylonhx::Engine _engine;
		Float _renderRatio;
		Float width;
		Float height;
		int renderTargetSamplingMode;
		::com::gamestudiohx::babylonhx::materials::Effect _effect;
		::com::gamestudiohx::babylonhx::tools::SmartArray _textures;
		int _currentRenderTextureInd;
		bool _reusable;
		Array< ::String > samplers;
		Dynamic onApply;
		Dynamic &onApply_dyn() { return onApply;}
		Dynamic _onDispose;
		Dynamic &_onDispose_dyn() { return _onDispose;}
		Dynamic onSizeChanged;
		Dynamic &onSizeChanged_dyn() { return onSizeChanged;}
		virtual Void activate( ::com::gamestudiohx::babylonhx::cameras::Camera camera);
		Dynamic activate_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::Effect apply( );
		Dynamic apply_dyn();

		virtual Void dispose( ::com::gamestudiohx::babylonhx::cameras::Camera camera);
		Dynamic dispose_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace postprocess

#endif /* INCLUDED_com_gamestudiohx_babylonhx_postprocess_PostProcess */ 
