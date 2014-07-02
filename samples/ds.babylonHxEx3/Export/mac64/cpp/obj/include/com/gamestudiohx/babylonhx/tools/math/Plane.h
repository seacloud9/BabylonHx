#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Plane
#define INCLUDED_com_gamestudiohx_babylonhx_tools_math_Plane

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Plane)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Plane_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Plane_obj OBJ_;
		Plane_obj();
		Void __construct(Float a,Float b,Float c,Float d);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Plane_obj > __new(Float a,Float b,Float c,Float d);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Plane_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Plane"); }

		::com::gamestudiohx::babylonhx::tools::math::Vector3 normal;
		Float d;
		virtual ::com::gamestudiohx::babylonhx::tools::math::Plane clone( );
		Dynamic clone_dyn();

		virtual Void normalize( );
		Dynamic normalize_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Plane transform( ::com::gamestudiohx::babylonhx::tools::math::Matrix transformation);
		Dynamic transform_dyn();

		virtual Float dotCoordinate( ::com::gamestudiohx::babylonhx::tools::math::Vector3 point);
		Dynamic dotCoordinate_dyn();

		virtual Void copyFromPoints( ::com::gamestudiohx::babylonhx::tools::math::Vector3 point1,::com::gamestudiohx::babylonhx::tools::math::Vector3 point2,::com::gamestudiohx::babylonhx::tools::math::Vector3 point3);
		Dynamic copyFromPoints_dyn();

		virtual bool isFrontFacingTo( ::com::gamestudiohx::babylonhx::tools::math::Vector3 direction,Float epsilon);
		Dynamic isFrontFacingTo_dyn();

		virtual Float signedDistanceTo( ::com::gamestudiohx::babylonhx::tools::math::Vector3 point);
		Dynamic signedDistanceTo_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Plane FromArray( Array< Float > array);
		static Dynamic FromArray_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Plane FromPoints( ::com::gamestudiohx::babylonhx::tools::math::Vector3 point1,::com::gamestudiohx::babylonhx::tools::math::Vector3 point2,::com::gamestudiohx::babylonhx::tools::math::Vector3 point3);
		static Dynamic FromPoints_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Plane FromPositionAndNormal( ::com::gamestudiohx::babylonhx::tools::math::Vector3 origin,::com::gamestudiohx::babylonhx::tools::math::Vector3 normal);
		static Dynamic FromPositionAndNormal_dyn();

		static Float SignedDistanceToPlaneFromPositionAndNormal( ::com::gamestudiohx::babylonhx::tools::math::Vector3 origin,::com::gamestudiohx::babylonhx::tools::math::Vector3 normal,::com::gamestudiohx::babylonhx::tools::math::Vector3 point);
		static Dynamic SignedDistanceToPlaneFromPositionAndNormal_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math

#endif /* INCLUDED_com_gamestudiohx_babylonhx_tools_math_Plane */ 
