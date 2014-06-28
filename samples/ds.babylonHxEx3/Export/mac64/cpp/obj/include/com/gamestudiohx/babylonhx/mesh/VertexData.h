#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_VertexData
#define INCLUDED_com_gamestudiohx_babylonhx_mesh_VertexData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Geometry)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,IGetSetVerticesData)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Mesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,VertexData)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS2(openfl,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,utils,UInt8Array)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{


class HXCPP_CLASS_ATTRIBUTES  VertexData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VertexData_obj OBJ_;
		VertexData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< VertexData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("VertexData"); }

		Array< Float > positions;
		Array< Float > normals;
		Array< Float > uvs;
		Array< Float > uv2s;
		Array< Float > colors;
		Array< Float > matricesIndices;
		Array< Float > matricesWeights;
		Array< int > indices;
		virtual Void set( Array< Float > data,::String kind);
		Dynamic set_dyn();

		virtual Void applyToMesh( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh,Dynamic updatable);
		Dynamic applyToMesh_dyn();

		virtual Void applyToGeometry( ::com::gamestudiohx::babylonhx::mesh::Geometry geometry,Dynamic updatable);
		Dynamic applyToGeometry_dyn();

		virtual Void updateMesh( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh,Dynamic updateExtends,Dynamic makeItUnique);
		Dynamic updateMesh_dyn();

		virtual Void updateGeometry( ::com::gamestudiohx::babylonhx::mesh::Geometry geometry,Dynamic updateExtends,Dynamic makeItUnique);
		Dynamic updateGeometry_dyn();

		virtual Void _applyTo( ::com::gamestudiohx::babylonhx::mesh::IGetSetVerticesData meshOrGeometry,Dynamic updatable);
		Dynamic _applyTo_dyn();

		virtual Void _update( ::com::gamestudiohx::babylonhx::mesh::IGetSetVerticesData meshOrGeometry,Dynamic updateExtends,Dynamic makeItUnique);
		Dynamic _update_dyn();

		virtual Void transform( ::com::gamestudiohx::babylonhx::tools::math::Matrix matrix);
		Dynamic transform_dyn();

		virtual Void merge( ::com::gamestudiohx::babylonhx::mesh::VertexData other);
		Dynamic merge_dyn();

		virtual ::com::gamestudiohx::babylonhx::mesh::VertexData CreateGroundFromHeightMap( Float width,Float height,Float subdivisions,Float minHeight,Float maxHeight,::openfl::utils::UInt8Array buffer,Float bufferWidth,Float bufferHeight);
		Dynamic CreateGroundFromHeightMap_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::VertexData ExtractFromMesh( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh);
		static Dynamic ExtractFromMesh_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::VertexData ExtractFromGeometry( ::com::gamestudiohx::babylonhx::mesh::Geometry geometry);
		static Dynamic ExtractFromGeometry_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::VertexData _ExtractFrom( ::com::gamestudiohx::babylonhx::mesh::IGetSetVerticesData meshOrGeometry);
		static Dynamic _ExtractFrom_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::VertexData CreateBox( hx::Null< Float >  size);
		static Dynamic CreateBox_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::VertexData CreateSphere( hx::Null< Float >  segments,hx::Null< Float >  diameter);
		static Dynamic CreateSphere_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::VertexData CreateCylinder( hx::Null< Float >  height,hx::Null< Float >  diameterTop,hx::Null< Float >  diameterBottom,hx::Null< Float >  tessellation);
		static Dynamic CreateCylinder_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::VertexData CreateTorus( hx::Null< Float >  diameter,hx::Null< Float >  thickness,hx::Null< Float >  tessellation);
		static Dynamic CreateTorus_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::VertexData CreateGround( hx::Null< Float >  width,hx::Null< Float >  height,hx::Null< Float >  subdivisions);
		static Dynamic CreateGround_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::VertexData CreatePlane( hx::Null< Float >  size);
		static Dynamic CreatePlane_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::VertexData CreateTorusKnot( hx::Null< Float >  radius,hx::Null< Float >  tube,hx::Null< Float >  radialSegments,hx::Null< Float >  tubularSegments,hx::Null< Float >  p,hx::Null< Float >  q);
		static Dynamic CreateTorusKnot_dyn();

		static Void ComputeNormals( Array< Float > positions,Array< int > indices,Array< Float > normals);
		static Dynamic ComputeNormals_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh

#endif /* INCLUDED_com_gamestudiohx_babylonhx_mesh_VertexData */ 
