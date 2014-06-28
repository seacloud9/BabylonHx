#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingInfo
#define INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,collisions,Collider)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,culling,BoundingBox)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,culling,BoundingInfo)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,culling,BoundingSphere)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Plane)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace culling{


class HXCPP_CLASS_ATTRIBUTES  BoundingInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BoundingInfo_obj OBJ_;
		BoundingInfo_obj();
		Void __construct(::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BoundingInfo_obj > __new(::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BoundingInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BoundingInfo"); }

		::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum;
		::com::gamestudiohx::babylonhx::culling::BoundingBox boundingBox;
		::com::gamestudiohx::babylonhx::culling::BoundingSphere boundingSphere;
		virtual Void _update( ::com::gamestudiohx::babylonhx::tools::math::Matrix world,Float scale);
		Dynamic _update_dyn();

		virtual bool extentsOverlap( Float min0,Float max0,Float min1,Float max1);
		Dynamic extentsOverlap_dyn();

		virtual Dynamic computeBoxExtents( ::com::gamestudiohx::babylonhx::tools::math::Vector3 axis,::com::gamestudiohx::babylonhx::culling::BoundingBox box);
		Dynamic computeBoxExtents_dyn();

		virtual bool axisOverlap( ::com::gamestudiohx::babylonhx::tools::math::Vector3 axis,::com::gamestudiohx::babylonhx::culling::BoundingBox box0,::com::gamestudiohx::babylonhx::culling::BoundingBox box1);
		Dynamic axisOverlap_dyn();

		virtual bool isInFrustrum( Array< ::Dynamic > frustumPlanes);
		Dynamic isInFrustrum_dyn();

		virtual bool _checkCollision( ::com::gamestudiohx::babylonhx::collisions::Collider collider);
		Dynamic _checkCollision_dyn();

		virtual bool intersectsPoint( ::com::gamestudiohx::babylonhx::tools::math::Vector3 point);
		Dynamic intersectsPoint_dyn();

		virtual bool isInFrustum( Array< ::Dynamic > frustumPlanes);
		Dynamic isInFrustum_dyn();

		virtual bool intersects( ::com::gamestudiohx::babylonhx::culling::BoundingInfo boundingInfo,bool precise);
		Dynamic intersects_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace culling

#endif /* INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingInfo */ 
