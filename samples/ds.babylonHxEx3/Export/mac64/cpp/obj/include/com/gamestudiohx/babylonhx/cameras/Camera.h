#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_Camera
#define INCLUDED_com_gamestudiohx_babylonhx_cameras_Camera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/gamestudiohx/babylonhx/Node.h>
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,animations,Animation)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,cameras,Camera)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,postprocess,PostProcess)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Viewport)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace cameras{


class HXCPP_CLASS_ATTRIBUTES  Camera_obj : public ::com::gamestudiohx::babylonhx::Node_obj{
	public:
		typedef ::com::gamestudiohx::babylonhx::Node_obj super;
		typedef Camera_obj OBJ_;
		Camera_obj();
		Void __construct(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 position,::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Camera_obj > __new(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 position,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Camera_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Camera"); }

		::com::gamestudiohx::babylonhx::tools::math::Vector3 upVector;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _worldMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _computedViewMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _projectionMatrix;
		Float fov;
		Dynamic orthoLeft;
		Dynamic orthoRight;
		Dynamic orthoBottom;
		Dynamic orthoTop;
		Float minZ;
		Float maxZ;
		Float inertia;
		int mode;
		::com::gamestudiohx::babylonhx::tools::math::Viewport viewport;
		Array< ::Dynamic > animations;
		Array< ::Dynamic > _postProcesses;
		Array< int > _postProcessesTakenIndices;
		virtual Void _initCache( );

		virtual Void _updateCache( hx::Null< bool >  ignoreParentClass);

		virtual Void _updateFromScene( );
		Dynamic _updateFromScene_dyn();

		virtual bool _isSynchronized( );

		virtual bool _isSynchronizedViewMatrix( );
		Dynamic _isSynchronizedViewMatrix_dyn();

		virtual bool _isSynchronizedProjectionMatrix( );
		Dynamic _isSynchronizedProjectionMatrix_dyn();

		virtual ::com::gamestudiohx::babylonhx::Scene getScene( );
		Dynamic getScene_dyn();

		virtual Void attachControl( ::openfl::display::DisplayObject canvas,hx::Null< bool >  noPreventDefault);
		Dynamic attachControl_dyn();

		virtual Void detachControl( ::openfl::display::DisplayObject canvas);
		Dynamic detachControl_dyn();

		virtual Void _update( );
		Dynamic _update_dyn();

		virtual int attachPostProcess( ::com::gamestudiohx::babylonhx::postprocess::PostProcess postProcess,Dynamic insertAt);
		Dynamic attachPostProcess_dyn();

		virtual Array< int > detachPostProcess( ::com::gamestudiohx::babylonhx::postprocess::PostProcess postProcess,Dynamic atIndices);
		Dynamic detachPostProcess_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix getWorldMatrix( );

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix _getViewMatrix( );
		Dynamic _getViewMatrix_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix getViewMatrix( );
		Dynamic getViewMatrix_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix _computeViewMatrix( hx::Null< bool >  force);
		Dynamic _computeViewMatrix_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix getProjectionMatrix( hx::Null< bool >  force);
		Dynamic getProjectionMatrix_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		static int PERSPECTIVE_CAMERA;
		static int ORTHOGRAPHIC_CAMERA;
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace cameras

#endif /* INCLUDED_com_gamestudiohx_babylonhx_cameras_Camera */ 
