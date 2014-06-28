#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Frustum
#define INCLUDED_com_gamestudiohx_babylonhx_tools_math_Frustum

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Frustum)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Plane)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Frustum_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Frustum_obj OBJ_;
		Frustum_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Frustum_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Frustum_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Frustum"); }

		static Array< ::Dynamic > GetPlanes( ::com::gamestudiohx::babylonhx::tools::math::Matrix transform);
		static Dynamic GetPlanes_dyn();

		static Array< ::Dynamic > GetPlanesToRef( ::com::gamestudiohx::babylonhx::tools::math::Matrix transform,Array< ::Dynamic > frustumPlanes);
		static Dynamic GetPlanesToRef_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math

#endif /* INCLUDED_com_gamestudiohx_babylonhx_tools_math_Frustum */ 
