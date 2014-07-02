#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color4
#define INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Color4)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Color4_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Color4_obj OBJ_;
		Color4_obj();
		Void __construct(Float initialR,Float initialG,Float initialB,hx::Null< Float >  __o_initialA);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Color4_obj > __new(Float initialR,Float initialG,Float initialB,hx::Null< Float >  __o_initialA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Color4_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Color4"); }

		Float r;
		Float g;
		Float b;
		Float a;
		virtual Void addInPlace( ::com::gamestudiohx::babylonhx::tools::math::Color4 right);
		Dynamic addInPlace_dyn();

		virtual Array< Float > asArray( );
		Dynamic asArray_dyn();

		virtual Void toArray( Array< Float > array,hx::Null< int >  index);
		Dynamic toArray_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Color4 add( ::com::gamestudiohx::babylonhx::tools::math::Color4 right);
		Dynamic add_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Color4 subtract( ::com::gamestudiohx::babylonhx::tools::math::Color4 right);
		Dynamic subtract_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Color4 subtractToRef( ::com::gamestudiohx::babylonhx::tools::math::Color4 right,::com::gamestudiohx::babylonhx::tools::math::Color4 result);
		Dynamic subtractToRef_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Color4 scale( Float scale);
		Dynamic scale_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Color4 scaleToRef( Float scale,::com::gamestudiohx::babylonhx::tools::math::Color4 result);
		Dynamic scaleToRef_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Color4 clone( );
		Dynamic clone_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Color4 Lerp( ::com::gamestudiohx::babylonhx::tools::math::Color4 left,::com::gamestudiohx::babylonhx::tools::math::Color4 right,Float amount);
		static Dynamic Lerp_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Color4 LerpToRef( ::com::gamestudiohx::babylonhx::tools::math::Color4 left,::com::gamestudiohx::babylonhx::tools::math::Color4 right,Float amount,::com::gamestudiohx::babylonhx::tools::math::Color4 result);
		static Dynamic LerpToRef_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Color4 FromArray( Array< Float > array,hx::Null< int >  offset);
		static Dynamic FromArray_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math

#endif /* INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color4 */ 
