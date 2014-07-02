#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color3
#define INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Color3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Color3_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Color3_obj OBJ_;
		Color3_obj();
		Void __construct(hx::Null< Float >  __o_initialR,hx::Null< Float >  __o_initialG,hx::Null< Float >  __o_initialB);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Color3_obj > __new(hx::Null< Float >  __o_initialR,hx::Null< Float >  __o_initialG,hx::Null< Float >  __o_initialB);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Color3_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Color3"); }

		Float r;
		Float g;
		Float b;
		virtual bool equals( ::com::gamestudiohx::babylonhx::tools::math::Color3 otherColor);
		Dynamic equals_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Color3 clone( );
		Dynamic clone_dyn();

		virtual Array< Float > asArray( );
		Dynamic asArray_dyn();

		virtual Void toArray( Array< Float > array,hx::Null< int >  index);
		Dynamic toArray_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Color3 multiply( ::com::gamestudiohx::babylonhx::tools::math::Color3 otherColor);
		Dynamic multiply_dyn();

		virtual Void multiplyToRef( ::com::gamestudiohx::babylonhx::tools::math::Color3 otherColor,::com::gamestudiohx::babylonhx::tools::math::Color3 result);
		Dynamic multiplyToRef_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Color3 scale( Float scale);
		Dynamic scale_dyn();

		virtual Void scaleToRef( Float scale,::com::gamestudiohx::babylonhx::tools::math::Color3 result);
		Dynamic scaleToRef_dyn();

		virtual Void copyFrom( ::com::gamestudiohx::babylonhx::tools::math::Color3 source);
		Dynamic copyFrom_dyn();

		virtual Void copyFromFloats( Float r,Float g,Float b);
		Dynamic copyFromFloats_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Color3 FromArray( Array< Float > array);
		static Dynamic FromArray_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math

#endif /* INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color3 */ 
