#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector2
#define INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector2)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Vector2_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector2_obj OBJ_;
		Vector2_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Vector2_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector2_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Vector2"); }

		Float x;
		Float y;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector2 add( ::com::gamestudiohx::babylonhx::tools::math::Vector2 otherVector);
		Dynamic add_dyn();

		virtual Array< Float > asArray( );
		Dynamic asArray_dyn();

		virtual Void toArray( Array< Float > array,hx::Null< int >  index);
		Dynamic toArray_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector2 subtract( ::com::gamestudiohx::babylonhx::tools::math::Vector2 otherVector);
		Dynamic subtract_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector2 negate( );
		Dynamic negate_dyn();

		virtual Void scaleInPlace( Float scale);
		Dynamic scaleInPlace_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector2 scale( Float scale);
		Dynamic scale_dyn();

		virtual bool equals( ::com::gamestudiohx::babylonhx::tools::math::Vector2 otherVector);
		Dynamic equals_dyn();

		virtual Float length( );
		Dynamic length_dyn();

		virtual Float lengthSquared( );
		Dynamic lengthSquared_dyn();

		virtual Void normalize( );
		Dynamic normalize_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector2 clone( );
		Dynamic clone_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector2 Zero( );
		static Dynamic Zero_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector2 CatmullRom( ::com::gamestudiohx::babylonhx::tools::math::Vector2 value1,::com::gamestudiohx::babylonhx::tools::math::Vector2 value2,::com::gamestudiohx::babylonhx::tools::math::Vector2 value3,::com::gamestudiohx::babylonhx::tools::math::Vector2 value4,Float amount);
		static Dynamic CatmullRom_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector2 Clamp( ::com::gamestudiohx::babylonhx::tools::math::Vector2 value,::com::gamestudiohx::babylonhx::tools::math::Vector2 min,::com::gamestudiohx::babylonhx::tools::math::Vector2 max);
		static Dynamic Clamp_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector2 Hermite( ::com::gamestudiohx::babylonhx::tools::math::Vector2 value1,::com::gamestudiohx::babylonhx::tools::math::Vector2 tangent1,::com::gamestudiohx::babylonhx::tools::math::Vector2 value2,::com::gamestudiohx::babylonhx::tools::math::Vector2 tangent2,Float amount);
		static Dynamic Hermite_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector2 Lerp( ::com::gamestudiohx::babylonhx::tools::math::Vector2 start,::com::gamestudiohx::babylonhx::tools::math::Vector2 end,Float amount);
		static Dynamic Lerp_dyn();

		static Float Dot( ::com::gamestudiohx::babylonhx::tools::math::Vector2 left,::com::gamestudiohx::babylonhx::tools::math::Vector2 right);
		static Dynamic Dot_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector2 Normalize( ::com::gamestudiohx::babylonhx::tools::math::Vector2 vector);
		static Dynamic Normalize_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector2 Minimize( ::com::gamestudiohx::babylonhx::tools::math::Vector2 left,::com::gamestudiohx::babylonhx::tools::math::Vector2 right);
		static Dynamic Minimize_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector2 Maximize( ::com::gamestudiohx::babylonhx::tools::math::Vector2 left,::com::gamestudiohx::babylonhx::tools::math::Vector2 right);
		static Dynamic Maximize_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector2 Transform( ::com::gamestudiohx::babylonhx::tools::math::Vector2 vector,::com::gamestudiohx::babylonhx::tools::math::Matrix transformation);
		static Dynamic Transform_dyn();

		static Float Distance( ::com::gamestudiohx::babylonhx::tools::math::Vector2 value1,::com::gamestudiohx::babylonhx::tools::math::Vector2 value2);
		static Dynamic Distance_dyn();

		static Float DistanceSquared( ::com::gamestudiohx::babylonhx::tools::math::Vector2 value1,::com::gamestudiohx::babylonhx::tools::math::Vector2 value2);
		static Dynamic DistanceSquared_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math

#endif /* INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector2 */ 
