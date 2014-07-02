#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#define INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Plane)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Viewport)
HX_DECLARE_CLASS2(openfl,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,utils,Float32Array)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Matrix_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Matrix_obj OBJ_;
		Matrix_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Matrix_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Matrix_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Matrix"); }

		Array< Float > m;
		virtual bool isIdentity( );
		Dynamic isIdentity_dyn();

		virtual Float determinant( );
		Dynamic determinant_dyn();

		virtual Array< Float > toArray( );
		Dynamic toArray_dyn();

		virtual Void copyToArray( ::openfl::utils::Float32Array array,hx::Null< int >  offset);
		Dynamic copyToArray_dyn();

		virtual Void invert( );
		Dynamic invert_dyn();

		virtual Void invertToRef( ::com::gamestudiohx::babylonhx::tools::math::Matrix other);
		Dynamic invertToRef_dyn();

		virtual Void setTranslation( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector3);
		Dynamic setTranslation_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix multiply( ::com::gamestudiohx::babylonhx::tools::math::Matrix other);
		Dynamic multiply_dyn();

		virtual Void copyFrom( ::com::gamestudiohx::babylonhx::tools::math::Matrix other);
		Dynamic copyFrom_dyn();

		virtual Void multiplyToRef( ::com::gamestudiohx::babylonhx::tools::math::Matrix other,::com::gamestudiohx::babylonhx::tools::math::Matrix result);
		Dynamic multiplyToRef_dyn();

		virtual Array< Float > multiplyToArray( ::com::gamestudiohx::babylonhx::tools::math::Matrix other,Array< Float > result,int offset);
		Dynamic multiplyToArray_dyn();

		virtual bool equals( ::com::gamestudiohx::babylonhx::tools::math::Matrix value);
		Dynamic equals_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix clone( );
		Dynamic clone_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix FromArray( Array< Float > array,hx::Null< int >  offset);
		static Dynamic FromArray_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix FromArrayToRef( Array< Float > array,hx::Null< int >  offset,::com::gamestudiohx::babylonhx::tools::math::Matrix result);
		static Dynamic FromArrayToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix FromValues( Float m11,Float m12,Float m13,Float m14,Float m21,Float m22,Float m23,Float m24,Float m31,Float m32,Float m33,Float m34,Float m41,Float m42,Float m43,Float m44);
		static Dynamic FromValues_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix FromValuesToRef( Float m11,Float m12,Float m13,Float m14,Float m21,Float m22,Float m23,Float m24,Float m31,Float m32,Float m33,Float m34,Float m41,Float m42,Float m43,Float m44,::com::gamestudiohx::babylonhx::tools::math::Matrix result);
		static Dynamic FromValuesToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix Identity( );
		static Dynamic Identity_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix IdentityToRef( ::com::gamestudiohx::babylonhx::tools::math::Matrix result);
		static Dynamic IdentityToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix Zero( );
		static Dynamic Zero_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix RotationX( Float angle);
		static Dynamic RotationX_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix RotationXToRef( Float angle,::com::gamestudiohx::babylonhx::tools::math::Matrix result);
		static Dynamic RotationXToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix RotationY( Float angle);
		static Dynamic RotationY_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix RotationYToRef( Float angle,::com::gamestudiohx::babylonhx::tools::math::Matrix result);
		static Dynamic RotationYToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix RotationZ( Float angle);
		static Dynamic RotationZ_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix RotationZToRef( Float angle,::com::gamestudiohx::babylonhx::tools::math::Matrix result);
		static Dynamic RotationZToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix RotationAxis( ::com::gamestudiohx::babylonhx::tools::math::Vector3 axis,Float angle);
		static Dynamic RotationAxis_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix RotationYawPitchRoll( Float yaw,Float pitch,Float roll);
		static Dynamic RotationYawPitchRoll_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix RotationYawPitchRollToRef( Float yaw,Float pitch,Float roll,::com::gamestudiohx::babylonhx::tools::math::Matrix result);
		static Dynamic RotationYawPitchRollToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix Scaling( Float x,Float y,Float z);
		static Dynamic Scaling_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix ScalingToRef( Float x,Float y,Float z,::com::gamestudiohx::babylonhx::tools::math::Matrix result);
		static Dynamic ScalingToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix Translation( Float x,Float y,Float z);
		static Dynamic Translation_dyn();

		static Void TranslationToRef( Float x,Float y,Float z,::com::gamestudiohx::babylonhx::tools::math::Matrix result);
		static Dynamic TranslationToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix LookAtLH( ::com::gamestudiohx::babylonhx::tools::math::Vector3 eye,::com::gamestudiohx::babylonhx::tools::math::Vector3 target,::com::gamestudiohx::babylonhx::tools::math::Vector3 up);
		static Dynamic LookAtLH_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix LookAtLHToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 eye,::com::gamestudiohx::babylonhx::tools::math::Vector3 target,::com::gamestudiohx::babylonhx::tools::math::Vector3 up,::com::gamestudiohx::babylonhx::tools::math::Matrix result);
		static Dynamic LookAtLHToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix OrthoLH( Float width,Float height,Float znear,Float zfar);
		static Dynamic OrthoLH_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix OrthoOffCenterLH( Float left,Float right,Float bottom,Float top,Float znear,Float zfar);
		static Dynamic OrthoOffCenterLH_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix OrthoOffCenterLHToRef( Float left,Float right,Float bottom,Float top,Float znear,Float zfar,::com::gamestudiohx::babylonhx::tools::math::Matrix result);
		static Dynamic OrthoOffCenterLHToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix PerspectiveLH( Float width,Float height,Float znear,Float zfar);
		static Dynamic PerspectiveLH_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix PerspectiveFovLH( Float fov,Float aspect,Float znear,Float zfar);
		static Dynamic PerspectiveFovLH_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix PerspectiveFovLHToRef( Float fov,Float aspect,Float znear,Float zfar,::com::gamestudiohx::babylonhx::tools::math::Matrix result);
		static Dynamic PerspectiveFovLHToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix GetFinalMatrix( ::com::gamestudiohx::babylonhx::tools::math::Viewport viewport,::com::gamestudiohx::babylonhx::tools::math::Matrix world,::com::gamestudiohx::babylonhx::tools::math::Matrix view,::com::gamestudiohx::babylonhx::tools::math::Matrix projection,Float zmin,Float zmax);
		static Dynamic GetFinalMatrix_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix Transpose( ::com::gamestudiohx::babylonhx::tools::math::Matrix matrix);
		static Dynamic Transpose_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix Reflection( ::com::gamestudiohx::babylonhx::tools::math::Plane plane);
		static Dynamic Reflection_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Matrix ReflectionToRef( ::com::gamestudiohx::babylonhx::tools::math::Plane plane,::com::gamestudiohx::babylonhx::tools::math::Matrix result);
		static Dynamic ReflectionToRef_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math

#endif /* INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix */ 
