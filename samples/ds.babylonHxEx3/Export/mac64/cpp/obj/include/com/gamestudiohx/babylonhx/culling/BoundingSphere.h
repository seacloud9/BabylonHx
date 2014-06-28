#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingSphere
#define INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingSphere

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,culling,BoundingSphere)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Plane)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace culling{


class HXCPP_CLASS_ATTRIBUTES  BoundingSphere_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BoundingSphere_obj OBJ_;
		BoundingSphere_obj();
		Void __construct(::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BoundingSphere_obj > __new(::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BoundingSphere_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BoundingSphere"); }

		::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 center;
		Float radius;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 centerWorld;
		Float radiusWorld;
		virtual Void _update( ::com::gamestudiohx::babylonhx::tools::math::Matrix world,hx::Null< Float >  scale);
		Dynamic _update_dyn();

		virtual bool isInFrustrum( Array< ::Dynamic > frustumPlanes);
		Dynamic isInFrustrum_dyn();

		virtual bool intersectsPoint( ::com::gamestudiohx::babylonhx::tools::math::Vector3 point);
		Dynamic intersectsPoint_dyn();

		static bool intersects( ::com::gamestudiohx::babylonhx::culling::BoundingSphere sphere0,::com::gamestudiohx::babylonhx::culling::BoundingSphere sphere1);
		static Dynamic intersects_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace culling

#endif /* INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingSphere */ 
