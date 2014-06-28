#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Viewport
#define INCLUDED_com_gamestudiohx_babylonhx_tools_math_Viewport

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Engine)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Viewport)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Viewport_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Viewport_obj OBJ_;
		Viewport_obj();
		Void __construct(Float x,Float y,Float width,Float height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Viewport_obj > __new(Float x,Float y,Float width,Float height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Viewport_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Viewport"); }

		Float width;
		Float height;
		Float x;
		Float y;
		virtual ::com::gamestudiohx::babylonhx::tools::math::Viewport toGlobal( ::com::gamestudiohx::babylonhx::Engine engine);
		Dynamic toGlobal_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math

#endif /* INCLUDED_com_gamestudiohx_babylonhx_tools_math_Viewport */ 
