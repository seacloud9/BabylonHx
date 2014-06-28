#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Ray
#define INCLUDED_com_gamestudiohx_babylonhx_tools_math_Ray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,culling,BoundingBox)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,culling,BoundingSphere)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Ray)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Ray_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Ray_obj OBJ_;
		Ray_obj();
		Void __construct(::com::gamestudiohx::babylonhx::tools::math::Vector3 origin,::com::gamestudiohx::babylonhx::tools::math::Vector3 direction);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Ray_obj > __new(::com::gamestudiohx::babylonhx::tools::math::Vector3 origin,::com::gamestudiohx::babylonhx::tools::math::Vector3 direction);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ray_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Ray"); }

		::com::gamestudiohx::babylonhx::tools::math::Vector3 origin;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 direction;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _edge1;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _edge2;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _pvec;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _tvec;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _qvec;
		virtual bool intersectsBox( ::com::gamestudiohx::babylonhx::culling::BoundingBox box);
		Dynamic intersectsBox_dyn();

		virtual bool intersectsSphere( ::com::gamestudiohx::babylonhx::culling::BoundingSphere sphere);
		Dynamic intersectsSphere_dyn();

		virtual Float intersectsTriangle( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vertex0,::com::gamestudiohx::babylonhx::tools::math::Vector3 vertex1,::com::gamestudiohx::babylonhx::tools::math::Vector3 vertex2);
		Dynamic intersectsTriangle_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Ray CreateNew( Float x,Float y,Float viewportWidth,Float viewportHeight,::com::gamestudiohx::babylonhx::tools::math::Matrix world,::com::gamestudiohx::babylonhx::tools::math::Matrix view,::com::gamestudiohx::babylonhx::tools::math::Matrix projection);
		static Dynamic CreateNew_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Ray Transform( ::com::gamestudiohx::babylonhx::tools::math::Ray ray,::com::gamestudiohx::babylonhx::tools::math::Matrix matrix);
		static Dynamic Transform_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math

#endif /* INCLUDED_com_gamestudiohx_babylonhx_tools_math_Ray */ 
