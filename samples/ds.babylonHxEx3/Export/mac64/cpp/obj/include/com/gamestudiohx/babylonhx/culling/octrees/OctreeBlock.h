#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_octrees_OctreeBlock
#define INCLUDED_com_gamestudiohx_babylonhx_culling_octrees_OctreeBlock

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,culling,octrees,OctreeBlock)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,SubMesh)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Plane)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace culling{
namespace octrees{


class HXCPP_CLASS_ATTRIBUTES  OctreeBlock_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OctreeBlock_obj OBJ_;
		OctreeBlock_obj();
		Void __construct(::com::gamestudiohx::babylonhx::tools::math::Vector3 minPoint,::com::gamestudiohx::babylonhx::tools::math::Vector3 maxPoint,int capacity);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< OctreeBlock_obj > __new(::com::gamestudiohx::babylonhx::tools::math::Vector3 minPoint,::com::gamestudiohx::babylonhx::tools::math::Vector3 maxPoint,int capacity);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OctreeBlock_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("OctreeBlock"); }

		Array< ::Dynamic > meshes;
		Array< ::Dynamic > subMeshes;
		int _capacity;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _minPoint;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _maxPoint;
		Array< ::Dynamic > _boundingVectors;
		Array< ::Dynamic > blocks;
		virtual Void addMesh( ::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh);
		Dynamic addMesh_dyn();

		virtual Void addEntries( Array< ::Dynamic > meshes);
		Dynamic addEntries_dyn();

		virtual Void select( Array< ::Dynamic > frustumPlanes,Array< ::Dynamic > selection);
		Dynamic select_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace culling
} // end namespace octrees

#endif /* INCLUDED_com_gamestudiohx_babylonhx_culling_octrees_OctreeBlock */ 
