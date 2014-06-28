#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingBox
#define INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,culling,BoundingBox)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,culling,BoundingSphere)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Plane)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace culling{


class HXCPP_CLASS_ATTRIBUTES  BoundingBox_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BoundingBox_obj OBJ_;
		BoundingBox_obj();
		Void __construct(::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BoundingBox_obj > __new(::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BoundingBox_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BoundingBox"); }

		::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum;
		Array< ::Dynamic > vectors;
		Array< ::Dynamic > vectorsWorld;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 center;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _extends;
		Array< ::Dynamic > directions;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 minimumWorld;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 maximumWorld;
		virtual Void _update( ::com::gamestudiohx::babylonhx::tools::math::Matrix world);
		Dynamic _update_dyn();

		virtual bool isInFrustrum( Array< ::Dynamic > frustumPlanes);
		Dynamic isInFrustrum_dyn();

		virtual bool intersectsPoint( ::com::gamestudiohx::babylonhx::tools::math::Vector3 point);
		Dynamic intersectsPoint_dyn();

		virtual bool intersectsSphere( ::com::gamestudiohx::babylonhx::culling::BoundingSphere sphere);
		Dynamic intersectsSphere_dyn();

		virtual bool intersectsMinMax( ::com::gamestudiohx::babylonhx::tools::math::Vector3 min,::com::gamestudiohx::babylonhx::tools::math::Vector3 max);
		Dynamic intersectsMinMax_dyn();

		static bool intersects( ::com::gamestudiohx::babylonhx::culling::BoundingBox box0,::com::gamestudiohx::babylonhx::culling::BoundingBox box1);
		static Dynamic intersects_dyn();

		static bool IsInFrustum( Array< ::Dynamic > boundingVectors,Array< ::Dynamic > frustumPlanes);
		static Dynamic IsInFrustum_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace culling

#endif /* INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingBox */ 
