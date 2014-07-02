#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_SubMesh
#define INCLUDED_com_gamestudiohx_babylonhx_mesh_SubMesh

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Engine)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,collisions,Collider)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,culling,BoundingInfo)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,BabylonGLBuffer)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,IGetSetVerticesData)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Mesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,SubMesh)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Plane)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Ray)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{


class HXCPP_CLASS_ATTRIBUTES  SubMesh_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SubMesh_obj OBJ_;
		SubMesh_obj();
		Void __construct(int materialIndex,int verticesStart,int verticesCount,int indexStart,int indexCount,::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh,::com::gamestudiohx::babylonhx::mesh::Mesh renderingMesh,hx::Null< bool >  __o_createBoundingBox);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SubMesh_obj > __new(int materialIndex,int verticesStart,int verticesCount,int indexStart,int indexCount,::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh,::com::gamestudiohx::babylonhx::mesh::Mesh renderingMesh,hx::Null< bool >  __o_createBoundingBox);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SubMesh_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SubMesh"); }

		int materialIndex;
		int verticesStart;
		int verticesCount;
		int indexStart;
		int indexCount;
		::com::gamestudiohx::babylonhx::mesh::AbstractMesh _mesh;
		::com::gamestudiohx::babylonhx::mesh::Mesh _renderingMesh;
		Array< ::Dynamic > _trianglePlanes;
		::com::gamestudiohx::babylonhx::culling::BoundingInfo _boundingInfo;
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _linesIndexBuffer;
		Float _distanceToCamera;
		int linesIndexCount;
		Array< ::Dynamic > _lastColliderWorldVertices;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _lastColliderTransformMatrix;
		int _renderId;
		virtual ::com::gamestudiohx::babylonhx::mesh::Mesh getRenderingMesh( );
		Dynamic getRenderingMesh_dyn();

		virtual ::com::gamestudiohx::babylonhx::culling::BoundingInfo getBoundingInfo( );
		Dynamic getBoundingInfo_dyn();

		virtual ::com::gamestudiohx::babylonhx::mesh::AbstractMesh getMesh( );
		Dynamic getMesh_dyn();

		virtual Dynamic getMaterial( );
		Dynamic getMaterial_dyn();

		virtual Void refreshBoundingInfo( );
		Dynamic refreshBoundingInfo_dyn();

		virtual bool _checkCollision( ::com::gamestudiohx::babylonhx::collisions::Collider collider);
		Dynamic _checkCollision_dyn();

		virtual Void updateBoundingInfo( ::com::gamestudiohx::babylonhx::tools::math::Matrix world,Float scale);
		Dynamic updateBoundingInfo_dyn();

		virtual bool isInFrustrum( Array< ::Dynamic > frustumPlanes);
		Dynamic isInFrustrum_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer getLinesIndexBuffer( Array< int > indices,::com::gamestudiohx::babylonhx::Engine engine);
		Dynamic getLinesIndexBuffer_dyn();

		virtual bool canIntersects( ::com::gamestudiohx::babylonhx::tools::math::Ray ray);
		Dynamic canIntersects_dyn();

		virtual Float intersects( ::com::gamestudiohx::babylonhx::tools::math::Ray ray,Array< ::Dynamic > positions,Array< int > indices,hx::Null< bool >  fastCheck);
		Dynamic intersects_dyn();

		virtual ::com::gamestudiohx::babylonhx::mesh::SubMesh clone( ::com::gamestudiohx::babylonhx::mesh::AbstractMesh newMesh,::com::gamestudiohx::babylonhx::mesh::Mesh newRenderingMesh);
		Dynamic clone_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::SubMesh CreateFromIndices( int materialIndex,int startIndex,int indexCount,::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh);
		static Dynamic CreateFromIndices_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh

#endif /* INCLUDED_com_gamestudiohx_babylonhx_mesh_SubMesh */ 
