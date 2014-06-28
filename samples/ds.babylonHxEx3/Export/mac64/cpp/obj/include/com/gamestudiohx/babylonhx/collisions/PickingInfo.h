#ifndef INCLUDED_com_gamestudiohx_babylonhx_collisions_PickingInfo
#define INCLUDED_com_gamestudiohx_babylonhx_collisions_PickingInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,collisions,PickingInfo)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,IGetSetVerticesData)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Mesh)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace collisions{


class HXCPP_CLASS_ATTRIBUTES  PickingInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PickingInfo_obj OBJ_;
		PickingInfo_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PickingInfo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PickingInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PickingInfo"); }

		bool hit;
		Float distance;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 pickedPoint;
		::com::gamestudiohx::babylonhx::mesh::Mesh pickedMesh;
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace collisions

#endif /* INCLUDED_com_gamestudiohx_babylonhx_collisions_PickingInfo */ 
