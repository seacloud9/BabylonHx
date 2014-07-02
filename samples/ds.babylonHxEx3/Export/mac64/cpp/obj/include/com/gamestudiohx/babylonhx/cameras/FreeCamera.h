#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_FreeCamera
#define INCLUDED_com_gamestudiohx_babylonhx_cameras_FreeCamera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/gamestudiohx/babylonhx/cameras/Camera.h>
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,cameras,Camera)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,cameras,FreeCamera)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,collisions,Collider)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector2)
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


class HXCPP_CLASS_ATTRIBUTES  FreeCamera_obj : public ::com::gamestudiohx::babylonhx::cameras::Camera_obj{
	public:
		typedef ::com::gamestudiohx::babylonhx::cameras::Camera_obj super;
		typedef FreeCamera_obj OBJ_;
		FreeCamera_obj();
		Void __construct(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 position,::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FreeCamera_obj > __new(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 position,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FreeCamera_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FreeCamera"); }

		::com::gamestudiohx::babylonhx::tools::math::Vector3 cameraDirection;
		::com::gamestudiohx::babylonhx::tools::math::Vector2 cameraRotation;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 rotation;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 ellipsoid;
		::openfl::display::DisplayObject _attachedCanvas;
		Array< int > _keys;
		Array< int > keysUp;
		Array< int > keysDown;
		Array< int > keysLeft;
		Array< int > keysRight;
		::com::gamestudiohx::babylonhx::collisions::Collider _collider;
		bool _needMoveForGravity;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _currentTarget;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _viewMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _camMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _cameraTransformMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _cameraRotationMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _referencePoint;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _transformedReferencePoint;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _oldPosition;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _diffPosition;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _newPosition;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _lookAtTemp;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _tempMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _localDirection;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _transformedDirection;
		Float speed;
		bool checkCollisions;
		bool applyGravity;
		bool noRotationConstraint;
		Float angularSensibility;
		Dynamic lockedTarget;
		Dynamic onCollide;
		Dynamic &onCollide_dyn() { return onCollide;}
		Dynamic _onMouseDown;
		Dynamic &_onMouseDown_dyn() { return _onMouseDown;}
		Dynamic _onMouseUp;
		Dynamic &_onMouseUp_dyn() { return _onMouseUp;}
		Dynamic _onMouseOut;
		Dynamic &_onMouseOut_dyn() { return _onMouseOut;}
		Dynamic _onMouseMove;
		Dynamic &_onMouseMove_dyn() { return _onMouseMove;}
		Dynamic _onKeyDown;
		Dynamic &_onKeyDown_dyn() { return _onKeyDown;}
		Dynamic _onKeyUp;
		Dynamic &_onKeyUp_dyn() { return _onKeyUp;}
		Dynamic _onLostFocus;
		Dynamic &_onLostFocus_dyn() { return _onLostFocus;}
		Dynamic _reset;
		Dynamic &_reset_dyn() { return _reset;}
		::String _waitingParentId;
		::String _waitingLockedTargetId;
		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector3 _getLockedTargetPosition( );
		Dynamic _getLockedTargetPosition_dyn();

		virtual Void _updateCache( hx::Null< bool >  ignoreParentClass);

		virtual bool _isSynchronizedViewMatrix( );

		virtual Float _computeLocalCameraSpeed( );
		Dynamic _computeLocalCameraSpeed_dyn();

		virtual Void setTarget( ::com::gamestudiohx::babylonhx::tools::math::Vector3 target);
		Dynamic setTarget_dyn();

		virtual Void attachControl( ::openfl::display::DisplayObject canvas,hx::Null< bool >  noPreventDefault);

		virtual Void detachControl( ::openfl::display::DisplayObject canvas);

		virtual Void _collideWithWorld( ::com::gamestudiohx::babylonhx::tools::math::Vector3 velocity);
		Dynamic _collideWithWorld_dyn();

		virtual Void _checkInputs( );
		Dynamic _checkInputs_dyn();

		virtual Void _update( );

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix _getViewMatrix( );

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace cameras

#endif /* INCLUDED_com_gamestudiohx_babylonhx_cameras_FreeCamera */ 
