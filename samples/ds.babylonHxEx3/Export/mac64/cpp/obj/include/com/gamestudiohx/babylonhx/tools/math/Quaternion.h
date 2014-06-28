#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Quaternion
#define INCLUDED_com_gamestudiohx_babylonhx_tools_math_Quaternion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Quaternion)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Quaternion_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Quaternion_obj OBJ_;
		Quaternion_obj();
		Void __construct(hx::Null< Float >  __o_initialX,hx::Null< Float >  __o_initialY,hx::Null< Float >  __o_initialZ,hx::Null< Float >  __o_initialW);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Quaternion_obj > __new(hx::Null< Float >  __o_initialX,hx::Null< Float >  __o_initialY,hx::Null< Float >  __o_initialZ,hx::Null< Float >  __o_initialW);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Quaternion_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Quaternion"); }

		Float x;
		Float y;
		Float z;
		Float w;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual bool equals( ::com::gamestudiohx::babylonhx::tools::math::Quaternion otherQuaternion);
		Dynamic equals_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Quaternion clone( );
		Dynamic clone_dyn();

		virtual Void copyFrom( ::com::gamestudiohx::babylonhx::tools::math::Quaternion other);
		Dynamic copyFrom_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Quaternion add( ::com::gamestudiohx::babylonhx::tools::math::Quaternion other);
		Dynamic add_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Quaternion scale( Float value);
		Dynamic scale_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Quaternion multiply( ::com::gamestudiohx::babylonhx::tools::math::Quaternion q1);
		Dynamic multiply_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Quaternion multiplyToRef( ::com::gamestudiohx::babylonhx::tools::math::Quaternion q1,::com::gamestudiohx::babylonhx::tools::math::Quaternion result);
		Dynamic multiplyToRef_dyn();

		virtual Float length( );
		Dynamic length_dyn();

		virtual Void normalize( );
		Dynamic normalize_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector3 toEulerAngles( );
		Dynamic toEulerAngles_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix toRotationMatrix( ::com::gamestudiohx::babylonhx::tools::math::Matrix result);
		Dynamic toRotationMatrix_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Quaternion FromArray( Array< Float > array,hx::Null< int >  offset);
		static Dynamic FromArray_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Quaternion RotationYawPitchRoll( Float yaw,Float pitch,Float roll);
		static Dynamic RotationYawPitchRoll_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Quaternion RotationYawPitchRollToRef( Float yaw,Float pitch,Float roll,::com::gamestudiohx::babylonhx::tools::math::Quaternion result);
		static Dynamic RotationYawPitchRollToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Quaternion Slerp( ::com::gamestudiohx::babylonhx::tools::math::Quaternion left,::com::gamestudiohx::babylonhx::tools::math::Quaternion right,Float amount);
		static Dynamic Slerp_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math

#endif /* INCLUDED_com_gamestudiohx_babylonhx_tools_math_Quaternion */ 
