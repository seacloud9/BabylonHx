#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_Mesh
#define INCLUDED_com_gamestudiohx_babylonhx_mesh_Mesh

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#include <com/gamestudiohx/babylonhx/mesh/IGetSetVerticesData.h>
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Engine)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Effect)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,BabylonGLBuffer)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Geometry)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,IGetSetVerticesData)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,InstancedMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,InstancesBatch)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Mesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,SubMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,VertexBuffer)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,particles,ParticleSystem)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,tools,IAnimatable)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Plane)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
HX_DECLARE_CLASS2(openfl,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,utils,Float32Array)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{


class HXCPP_CLASS_ATTRIBUTES  Mesh_obj : public ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj{
	public:
		typedef ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj super;
		typedef Mesh_obj OBJ_;
		Mesh_obj();
		Void __construct(::String name,::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Mesh_obj > __new(::String name,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mesh_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::gamestudiohx::babylonhx::mesh::IGetSetVerticesData_obj *()
			{ return new ::com::gamestudiohx::babylonhx::mesh::IGetSetVerticesData_delegate_< Mesh_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Mesh"); }

		int delayLoadState;
		Array< ::Dynamic > instances;
		::String delayLoadingFile;
		::com::gamestudiohx::babylonhx::mesh::Geometry _geometry;
		Dynamic _onBeforeRenderCallbacks;
		::String _delayLoadingFunction;
		Dynamic _visibleInstances;
		int _renderIdForInstances;
		::com::gamestudiohx::babylonhx::mesh::InstancesBatch _batchCache;
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _worldMatricesInstancesBuffer;
		::openfl::utils::Float32Array _worldMatricesInstancesArray;
		int _instancesBufferSize;
		virtual int getTotalVertices( );

		virtual Array< Float > getVerticesData( ::String kind);

		virtual ::com::gamestudiohx::babylonhx::mesh::VertexBuffer getVertexBuffer( ::String kind);
		Dynamic getVertexBuffer_dyn();

		virtual bool isVerticesDataPresent( ::String kind);

		virtual Array< ::String > getVerticesDataKinds( );
		Dynamic getVerticesDataKinds_dyn();

		virtual int getTotalIndices( );
		Dynamic getTotalIndices_dyn();

		virtual Array< int > getIndices( );

		virtual bool isReady( );

		virtual Void _preActivate( );
		Dynamic _preActivate_dyn();

		virtual Void _registerInstanceForRenderId( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh instance,int renderId);
		Dynamic _registerInstanceForRenderId_dyn();

		virtual Void refreshBoundingInfo( );
		Dynamic refreshBoundingInfo_dyn();

		virtual ::com::gamestudiohx::babylonhx::mesh::SubMesh _createGlobalSubMesh( );
		Dynamic _createGlobalSubMesh_dyn();

		virtual Void subdivide( Float count);
		Dynamic subdivide_dyn();

		virtual Void setVerticesData( ::String _tmp_kind,Array< Float > _tmp_data,Dynamic updatable);
		Dynamic setVerticesData_dyn();

		virtual Void updateVerticesData( ::String kind,Array< Float > data,Dynamic updateExtends,Dynamic makeItUnique);
		Dynamic updateVerticesData_dyn();

		virtual Void makeGeometryUnique( );
		Dynamic makeGeometryUnique_dyn();

		virtual Void setIndices( Array< int > indices);
		Dynamic setIndices_dyn();

		virtual Void _bind( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,::com::gamestudiohx::babylonhx::materials::Effect effect,Dynamic wireframe);
		Dynamic _bind_dyn();

		virtual Void _draw( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,bool useTriangles,Dynamic instancesCount);
		Dynamic _draw_dyn();

		virtual Void registerBeforeRender( Dynamic func);
		Dynamic registerBeforeRender_dyn();

		virtual Void unregisterBeforeRender( Dynamic func);
		Dynamic unregisterBeforeRender_dyn();

		virtual ::com::gamestudiohx::babylonhx::mesh::InstancesBatch _getInstancesRenderList( );
		Dynamic _getInstancesRenderList_dyn();

		virtual Void _renderWithInstances( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,bool wireFrame,::com::gamestudiohx::babylonhx::mesh::InstancesBatch batch,::com::gamestudiohx::babylonhx::materials::Effect effect,::com::gamestudiohx::babylonhx::Engine engine);
		Dynamic _renderWithInstances_dyn();

		virtual Void render( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh);
		Dynamic render_dyn();

		virtual Array< ::Dynamic > getEmittedParticleSystems( );
		Dynamic getEmittedParticleSystems_dyn();

		virtual Array< ::Dynamic > getHierarchyEmittedParticleSystems( );
		Dynamic getHierarchyEmittedParticleSystems_dyn();

		virtual Array< ::Dynamic > getChildren( );
		Dynamic getChildren_dyn();

		virtual Void _checkDelayState( );
		Dynamic _checkDelayState_dyn();

		virtual bool isInFrustum( Array< ::Dynamic > frustumPlanes);

		virtual Void setMaterialByID( ::String id);
		Dynamic setMaterialByID_dyn();

		virtual Array< ::com::gamestudiohx::babylonhx::tools::IAnimatable > getAnimatables( );
		Dynamic getAnimatables_dyn();

		virtual Void bakeTransformIntoVertices( ::com::gamestudiohx::babylonhx::tools::math::Matrix transform);
		Dynamic bakeTransformIntoVertices_dyn();

		virtual bool _generatePointsArray( );

		virtual ::com::gamestudiohx::babylonhx::mesh::AbstractMesh clone( ::String name,::com::gamestudiohx::babylonhx::mesh::Mesh _tmp_newParent,hx::Null< bool >  doNotCloneChildren);

		virtual Void dispose( hx::Null< bool >  doNotRecurse);

		virtual Void convertToFlatShadedMesh( );
		Dynamic convertToFlatShadedMesh_dyn();

		virtual ::com::gamestudiohx::babylonhx::mesh::InstancedMesh createInstance( ::String name);
		Dynamic createInstance_dyn();

		virtual Void synchronizeInstances( );
		Dynamic synchronizeInstances_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::Mesh CreateBox( ::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable);
		static Dynamic CreateBox_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::Mesh CreateSphere( ::String name,Float segments,Float diameter,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable);
		static Dynamic CreateSphere_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::Mesh CreateCylinder( ::String name,int height,Float diameterTop,Float diameterBottom,int tessellation,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable);
		static Dynamic CreateCylinder_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::Mesh CreateTorus( ::String name,Float diameter,Float thickness,int tessellation,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable);
		static Dynamic CreateTorus_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::Mesh CreateTorusKnot( ::String name,Float radius,Float tube,Float radialSegments,Float tubularSegments,Float p,Float q,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable);
		static Dynamic CreateTorusKnot_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::Mesh CreatePlane( ::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable);
		static Dynamic CreatePlane_dyn();

		static Dynamic MinMax( Array< ::Dynamic > meshes);
		static Dynamic MinMax_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Vector3 Center( Dynamic meshesOrMinMaxVector);
		static Dynamic Center_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh

#endif /* INCLUDED_com_gamestudiohx_babylonhx_mesh_Mesh */ 
