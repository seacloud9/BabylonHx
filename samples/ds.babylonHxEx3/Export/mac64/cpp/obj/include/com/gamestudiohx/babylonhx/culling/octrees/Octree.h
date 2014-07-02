#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_octrees_Octree
#define INCLUDED_com_gamestudiohx_babylonhx_culling_octrees_Octree

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,culling,octrees,Octree)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,culling,octrees,OctreeBlock)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Plane)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace culling{
namespace octrees{


class HXCPP_CLASS_ATTRIBUTES  Octree_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Octree_obj OBJ_;
		Octree_obj();
		Void __construct(hx::Null< int >  __o_maxBlockCapacity);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Octree_obj > __new(hx::Null< int >  __o_maxBlockCapacity);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Octree_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Octree"); }

		Array< ::Dynamic > blocks;
		int _maxBlockCapacity;
		Array< ::Dynamic > _selection;
		virtual Void update( ::com::gamestudiohx::babylonhx::tools::math::Vector3 worldMin,::com::gamestudiohx::babylonhx::tools::math::Vector3 worldMax,Array< ::Dynamic > meshes);
		Dynamic update_dyn();

		virtual Void addMesh( ::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh);
		Dynamic addMesh_dyn();

		virtual Array< ::Dynamic > select( Array< ::Dynamic > frustumPlanes);
		Dynamic select_dyn();

		static Void _CreateBlocks( ::com::gamestudiohx::babylonhx::tools::math::Vector3 worldMin,::com::gamestudiohx::babylonhx::tools::math::Vector3 worldMax,Array< ::Dynamic > meshes,int maxBlockCapacity,Dynamic target);
		static Dynamic _CreateBlocks_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace culling
} // end namespace octrees

#endif /* INCLUDED_com_gamestudiohx_babylonhx_culling_octrees_Octree */ 
