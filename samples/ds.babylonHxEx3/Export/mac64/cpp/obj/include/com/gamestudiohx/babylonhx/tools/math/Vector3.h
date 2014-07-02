#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#define INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Viewport)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Vector3_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector3_obj OBJ_;
		Vector3_obj();
		Void __construct(Float initialX,Float initialY,Float initialZ);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Vector3_obj > __new(Float initialX,Float initialY,Float initialZ);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector3_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Vector3"); }

		Float x;
		Float y;
		Float z;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Array< Float > asArray( );
		Dynamic asArray_dyn();

		virtual Array< Float > toArray( Array< Float > array,hx::Null< int >  index);
		Dynamic toArray_dyn();

		virtual Void MinimizeInPlace( ::com::gamestudiohx::babylonhx::tools::math::Vector3 other);
		Dynamic MinimizeInPlace_dyn();

		virtual Void MaximizeInPlace( ::com::gamestudiohx::babylonhx::tools::math::Vector3 other);
		Dynamic MaximizeInPlace_dyn();

		virtual Void addInPlace( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector);
		Dynamic addInPlace_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector3 add( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector);
		Dynamic add_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector3 addToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector,::com::gamestudiohx::babylonhx::tools::math::Vector3 result);
		Dynamic addToRef_dyn();

		virtual Void subtractInPlace( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector);
		Dynamic subtractInPlace_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector3 subtract( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector);
		Dynamic subtract_dyn();

		virtual Void subtractToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector,::com::gamestudiohx::babylonhx::tools::math::Vector3 result);
		Dynamic subtractToRef_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector3 subtractFromFloats( Float x,Float y,Float z);
		Dynamic subtractFromFloats_dyn();

		virtual Void subtractFromFloatsToRef( Float x,Float y,Float z,::com::gamestudiohx::babylonhx::tools::math::Vector3 result);
		Dynamic subtractFromFloatsToRef_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector3 negate( );
		Dynamic negate_dyn();

		virtual Void scaleInPlace( Float scale);
		Dynamic scaleInPlace_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector3 scale( Float scale);
		Dynamic scale_dyn();

		virtual Void scaleToRef( Float scale,::com::gamestudiohx::babylonhx::tools::math::Vector3 result);
		Dynamic scaleToRef_dyn();

		virtual bool equals( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector);
		Dynamic equals_dyn();

		virtual bool equalsToFloats( Float x,Float y,Float z);
		Dynamic equalsToFloats_dyn();

		virtual Void multiplyInPlace( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector);
		Dynamic multiplyInPlace_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector3 multiply( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector);
		Dynamic multiply_dyn();

		virtual Void multiplyToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector,::com::gamestudiohx::babylonhx::tools::math::Vector3 result);
		Dynamic multiplyToRef_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector3 multiplyByFloats( Float x,Float y,Float z);
		Dynamic multiplyByFloats_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector3 divide( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector);
		Dynamic divide_dyn();

		virtual Void divideToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector,::com::gamestudiohx::babylonhx::tools::math::Vector3 result);
		Dynamic divideToRef_dyn();

		virtual Float length( );
		Dynamic length_dyn();

		virtual Float lengthSquared( );
		Dynamic lengthSquared_dyn();

		virtual Void normalize( );
		Dynamic normalize_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector3 clone( );
		Dynamic clone_dyn();

		virtual Void copyFrom( ::com::gamestudiohx::babylonhx::tools::math::Vector3 source);
		Dynamic copyFrom_dyn();

		virtual Void copyFromFloats( Float x,Float y,Float z);
		Dynamic copyFromFloats_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 Center( ::com::gamestudiohx::babylonhx::tools::math::Vector3 value1,::com::gamestudiohx::babylonhx::tools::math::Vector3 value2);
		static Dynamic Center_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 FromArray( Array< Float > array,hx::Null< int >  offset);
		static Dynamic FromArray_dyn();

		static Void FromArrayToRef( Array< Float > array,hx::Null< int >  offset,::com::gamestudiohx::babylonhx::tools::math::Vector3 result);
		static Dynamic FromArrayToRef_dyn();

		static Void FromFloatsToRef( Float x,Float y,Float z,::com::gamestudiohx::babylonhx::tools::math::Vector3 result);
		static Dynamic FromFloatsToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 Zero( );
		static Dynamic Zero_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 Up( );
		static Dynamic Up_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 TransformCoordinates( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector,::com::gamestudiohx::babylonhx::tools::math::Matrix transformation);
		static Dynamic TransformCoordinates_dyn();

		static Void TransformCoordinatesToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector,::com::gamestudiohx::babylonhx::tools::math::Matrix transformation,::com::gamestudiohx::babylonhx::tools::math::Vector3 result);
		static Dynamic TransformCoordinatesToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 TransformCoordinatesFromFloatsToRef( Float x,Float y,Float z,::com::gamestudiohx::babylonhx::tools::math::Matrix transformation,::com::gamestudiohx::babylonhx::tools::math::Vector3 result);
		static Dynamic TransformCoordinatesFromFloatsToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 TransformNormal( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector,::com::gamestudiohx::babylonhx::tools::math::Matrix transformation);
		static Dynamic TransformNormal_dyn();

		static Void TransformNormalToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector,::com::gamestudiohx::babylonhx::tools::math::Matrix transformation,::com::gamestudiohx::babylonhx::tools::math::Vector3 result);
		static Dynamic TransformNormalToRef_dyn();

		static Void TransformNormalFromFloatsToRef( Float x,Float y,Float z,::com::gamestudiohx::babylonhx::tools::math::Matrix transformation,::com::gamestudiohx::babylonhx::tools::math::Vector3 result);
		static Dynamic TransformNormalFromFloatsToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 CatmullRom( ::com::gamestudiohx::babylonhx::tools::math::Vector3 value1,::com::gamestudiohx::babylonhx::tools::math::Vector3 value2,::com::gamestudiohx::babylonhx::tools::math::Vector3 value3,::com::gamestudiohx::babylonhx::tools::math::Vector3 value4,Float amount);
		static Dynamic CatmullRom_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 Clamp( ::com::gamestudiohx::babylonhx::tools::math::Vector3 value,::com::gamestudiohx::babylonhx::tools::math::Vector3 min,::com::gamestudiohx::babylonhx::tools::math::Vector3 max);
		static Dynamic Clamp_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 Hermite( ::com::gamestudiohx::babylonhx::tools::math::Vector3 value1,::com::gamestudiohx::babylonhx::tools::math::Vector3 tangent1,::com::gamestudiohx::babylonhx::tools::math::Vector3 value2,::com::gamestudiohx::babylonhx::tools::math::Vector3 tangent2,Float amount);
		static Dynamic Hermite_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 Lerp( ::com::gamestudiohx::babylonhx::tools::math::Vector3 start,::com::gamestudiohx::babylonhx::tools::math::Vector3 end,Float amount);
		static Dynamic Lerp_dyn();

		static Float Dot( ::com::gamestudiohx::babylonhx::tools::math::Vector3 left,::com::gamestudiohx::babylonhx::tools::math::Vector3 right);
		static Dynamic Dot_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 Cross( ::com::gamestudiohx::babylonhx::tools::math::Vector3 left,::com::gamestudiohx::babylonhx::tools::math::Vector3 right);
		static Dynamic Cross_dyn();

		static Void CrossToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 left,::com::gamestudiohx::babylonhx::tools::math::Vector3 right,::com::gamestudiohx::babylonhx::tools::math::Vector3 result);
		static Dynamic CrossToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 Normalize( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector);
		static Dynamic Normalize_dyn();

		static Void NormalizeToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector,::com::gamestudiohx::babylonhx::tools::math::Vector3 result);
		static Dynamic NormalizeToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 Project( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector,::com::gamestudiohx::babylonhx::tools::math::Matrix world,::com::gamestudiohx::babylonhx::tools::math::Matrix transform,::com::gamestudiohx::babylonhx::tools::math::Viewport viewport);
		static Dynamic Project_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 Unproject( ::com::gamestudiohx::babylonhx::tools::math::Vector3 source,Float viewportWidth,Float viewportHeight,::com::gamestudiohx::babylonhx::tools::math::Matrix world,::com::gamestudiohx::babylonhx::tools::math::Matrix view,::com::gamestudiohx::babylonhx::tools::math::Matrix projection);
		static Dynamic Unproject_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 Minimize( ::com::gamestudiohx::babylonhx::tools::math::Vector3 left,::com::gamestudiohx::babylonhx::tools::math::Vector3 right);
		static Dynamic Minimize_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 Maximize( ::com::gamestudiohx::babylonhx::tools::math::Vector3 left,::com::gamestudiohx::babylonhx::tools::math::Vector3 right);
		static Dynamic Maximize_dyn();

		static Float Distance( ::com::gamestudiohx::babylonhx::tools::math::Vector3 value1,::com::gamestudiohx::babylonhx::tools::math::Vector3 value2);
		static Dynamic Distance_dyn();

		static Float DistanceSquared( ::com::gamestudiohx::babylonhx::tools::math::Vector3 value1,::com::gamestudiohx::babylonhx::tools::math::Vector3 value2);
		static Dynamic DistanceSquared_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math

#endif /* INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3 */ 
