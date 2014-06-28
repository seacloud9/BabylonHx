#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_ArcRotateCamera
#define INCLUDED_com_gamestudiohx_babylonhx_cameras_ArcRotateCamera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/gamestudiohx/babylonhx/cameras/Camera.h>
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,cameras,ArcRotateCamera)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,cameras,Camera)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace cameras{


class HXCPP_CLASS_ATTRIBUTES  ArcRotateCamera_obj : public ::com::gamestudiohx::babylonhx::cameras::Camera_obj{
	public:
		typedef ::com::gamestudiohx::babylonhx::cameras::Camera_obj super;
		typedef ArcRotateCamera_obj OBJ_;
		ArcRotateCamera_obj();
		Void __construct(::String name,Float alpha,Float beta,Float radius,::com::gamestudiohx::babylonhx::tools::math::Vector3 target,::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ArcRotateCamera_obj > __new(::String name,Float alpha,Float beta,Float radius,::com::gamestudiohx::babylonhx::tools::math::Vector3 target,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArcRotateCamera_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ArcRotateCamera"); }

		Float alpha;
		Float beta;
		Float radius;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 target;
		Array< int > _keys;
		Array< int > keysUp;
		Array< int > keysDown;
		Array< int > keysLeft;
		Array< int > keysRight;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _viewMatrix;
		::openfl::display::DisplayObject _attachedCanvas;
		Dynamic _onMouseDown;
		Dynamic &_onMouseDown_dyn() { return _onMouseDown;}
		Dynamic _onMouseUp;
		Dynamic &_onMouseUp_dyn() { return _onMouseUp;}
		Dynamic _onMouseOut;
		Dynamic &_onMouseOut_dyn() { return _onMouseOut;}
		Dynamic _onMouseMove;
		Dynamic &_onMouseMove_dyn() { return _onMouseMove;}
		Dynamic _wheel;
		Dynamic &_wheel_dyn() { return _wheel;}
		Dynamic _onKeyDown;
		Dynamic &_onKeyDown_dyn() { return _onKeyDown;}
		Dynamic _onKeyUp;
		Dynamic &_onKeyUp_dyn() { return _onKeyUp;}
		Dynamic _onLostFocus;
		Dynamic &_onLostFocus_dyn() { return _onLostFocus;}
		Dynamic _reset;
		Dynamic &_reset_dyn() { return _reset;}
		Float inertialAlphaOffset;
		Float inertialBetaOffset;
		Float inertialRadiusOffset;
		Dynamic lowerAlphaLimit;
		Dynamic upperAlphaLimit;
		Dynamic lowerBetaLimit;
		Dynamic upperBetaLimit;
		Dynamic lowerRadiusLimit;
		Dynamic upperRadiusLimit;
		Float angularSensibility;
		virtual Void _initCache( );

		virtual Void _updateCache( hx::Null< bool >  ignoreParentClass);

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector3 _getTargetPosition( );
		Dynamic _getTargetPosition_dyn();

		virtual bool _isSynchronizedViewMatrix( );

		virtual Void setPosition( ::com::gamestudiohx::babylonhx::tools::math::Vector3 position);
		Dynamic setPosition_dyn();

		virtual Void attachControl( ::openfl::display::DisplayObject canvas,hx::Null< bool >  noPreventDefault);

		virtual Void detachControl( ::openfl::display::DisplayObject canvas);

		virtual Void _update( );

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix _getViewMatrix( );

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace cameras

#endif /* INCLUDED_com_gamestudiohx_babylonhx_cameras_ArcRotateCamera */ 
