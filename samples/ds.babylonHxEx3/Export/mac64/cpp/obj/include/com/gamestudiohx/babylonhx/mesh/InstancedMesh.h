#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_InstancedMesh
#define INCLUDED_com_gamestudiohx_babylonhx_mesh_InstancedMesh

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,IGetSetVerticesData)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,InstancedMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Mesh)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{


class HXCPP_CLASS_ATTRIBUTES  InstancedMesh_obj : public ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj{
	public:
		typedef ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj super;
		typedef InstancedMesh_obj OBJ_;
		InstancedMesh_obj();
		Void __construct(::String name,::com::gamestudiohx::babylonhx::mesh::Mesh source);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< InstancedMesh_obj > __new(::String name,::com::gamestudiohx::babylonhx::mesh::Mesh source);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InstancedMesh_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("InstancedMesh"); }

		::com::gamestudiohx::babylonhx::mesh::Mesh _sourceMesh;
		virtual Void refreshBoundingInfo( );
		Dynamic refreshBoundingInfo_dyn();

		virtual Void _activate( int renderId);
		Dynamic _activate_dyn();

		virtual Void _syncSubMeshes( );
		Dynamic _syncSubMeshes_dyn();

		virtual bool _generatePointsArray( );

		virtual ::com::gamestudiohx::babylonhx::mesh::AbstractMesh clone( ::String name,::com::gamestudiohx::babylonhx::mesh::Mesh _tmp_newParent,hx::Null< bool >  doNotCloneChildren);

		virtual Void dispose( hx::Null< bool >  doNotRecurse);

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh

#endif /* INCLUDED_com_gamestudiohx_babylonhx_mesh_InstancedMesh */ 
