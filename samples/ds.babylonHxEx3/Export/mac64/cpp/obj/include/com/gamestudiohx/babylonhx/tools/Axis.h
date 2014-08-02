#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_Axis
#define INCLUDED_com_gamestudiohx_babylonhx_tools_Axis

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,tools,Axis)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  Axis_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Axis_obj OBJ_;
		Axis_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Axis_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Axis_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Axis"); }

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 X;
		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 Y;
		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 Z;
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools

#endif /* INCLUDED_com_gamestudiohx_babylonhx_tools_Axis */ 
