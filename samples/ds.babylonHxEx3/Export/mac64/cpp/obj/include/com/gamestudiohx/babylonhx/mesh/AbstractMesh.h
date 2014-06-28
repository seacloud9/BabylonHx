#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#define INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/gamestudiohx/babylonhx/Node.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,animations,Animation)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,bones,Skeleton)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,collisions,Collider)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,collisions,PickingInfo)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,culling,BoundingInfo)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Effect)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,BabylonGLBuffer)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,IGetSetVerticesData)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Mesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,SubMesh)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Plane)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Quaternion)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Ray)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{


class HXCPP_CLASS_ATTRIBUTES  AbstractMesh_obj : public ::com::gamestudiohx::babylonhx::Node_obj{
	public:
		typedef ::com::gamestudiohx::babylonhx::Node_obj super;
		typedef AbstractMesh_obj OBJ_;
		AbstractMesh_obj();
		Void __construct(::String name,::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AbstractMesh_obj > __new(::String name,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AbstractMesh_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AbstractMesh"); }

		::com::gamestudiohx::babylonhx::tools::math::Vector3 rotation;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 scaling;
		::com::gamestudiohx::babylonhx::tools::math::Quaternion rotationQuaternion;
		Array< ::Dynamic > subMeshes;
		Array< ::Dynamic > animations;
		bool infiniteDistance;
		Dynamic material;
		bool isVisible;
		bool isPickable;
		Float visibility;
		int billboardMode;
		bool checkCollisions;
		bool receiveShadows;
		Dynamic onDispose;
		Dynamic &onDispose_dyn() { return onDispose;}
		::com::gamestudiohx::babylonhx::bones::Skeleton skeleton;
		int renderingGroupId;
		bool _animationStarted;
		Float _scaleFactor;
		bool _isDisposed;
		int _totalVertices;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _worldMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _pivotMatrix;
		Float _vertexStrideSize;
		Array< int > _indices;
		int _renderId;
		Dynamic _onBeforeRenderCallbacks;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _localScaling;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _localRotation;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _localTranslation;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _localBillboard;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _localPivotScaling;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _localPivotScalingRotation;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _localWorld;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _rotateYByPI;
		::com::gamestudiohx::babylonhx::culling::BoundingInfo _boundingInfo;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _collisionsTransformMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _collisionsScalingMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _absolutePosition;
		int _currentRenderId;
		Array< ::Dynamic > _positions;
		::haxe::ds::StringMap _vertexBuffers;
		::haxe::ds::StringMap _vertexBuffersB;
		Array< ::String > _delayInfo;
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _indexBuffer;
		::String parentId;
		virtual ::String get_parentId( );
		Dynamic get_parentId_dyn();

		virtual Void _resetPointsArrayCache( );
		Dynamic _resetPointsArrayCache_dyn();

		virtual bool _generatePointsArray( );
		Dynamic _generatePointsArray_dyn();

		virtual Void _collideForSubMesh( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,::com::gamestudiohx::babylonhx::tools::math::Matrix transformMatrix,::com::gamestudiohx::babylonhx::collisions::Collider collider);
		Dynamic _collideForSubMesh_dyn();

		virtual Void _processCollisionsForSubModels( ::com::gamestudiohx::babylonhx::collisions::Collider collider,::com::gamestudiohx::babylonhx::tools::math::Matrix transformMatrix);
		Dynamic _processCollisionsForSubModels_dyn();

		virtual Void _checkCollision( ::com::gamestudiohx::babylonhx::collisions::Collider collider);
		Dynamic _checkCollision_dyn();

		virtual bool isInFrustum( Array< ::Dynamic > frustumPlanes);
		Dynamic isInFrustum_dyn();

		virtual ::com::gamestudiohx::babylonhx::culling::BoundingInfo getBoundingInfo( );
		Dynamic getBoundingInfo_dyn();

		virtual ::com::gamestudiohx::babylonhx::Scene getScene( );
		Dynamic getScene_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix getWorldMatrix( );

		virtual int getTotalVertices( );
		Dynamic getTotalVertices_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector3 getAbsolutePosition( );
		Dynamic getAbsolutePosition_dyn();

		virtual Void setAbsolutePosition( Dynamic absolutePosition);
		Dynamic setAbsolutePosition_dyn();

		virtual Array< Float > getVerticesData( ::String kind);
		Dynamic getVerticesData_dyn();

		virtual bool isVerticesDataPresent( ::String kind);
		Dynamic isVerticesDataPresent_dyn();

		virtual int getTotalIndicies( );
		Dynamic getTotalIndicies_dyn();

		virtual Array< int > getIndices( );
		Dynamic getIndices_dyn();

		virtual Float getVertexStrideSize( );
		Dynamic getVertexStrideSize_dyn();

		virtual Void setPivotMatrix( ::com::gamestudiohx::babylonhx::tools::math::Matrix matrix);
		Dynamic setPivotMatrix_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix getPivotMatrix( );
		Dynamic getPivotMatrix_dyn();

		virtual bool isSynchronized( hx::Null< bool >  updateCache);

		virtual bool isAnimated( );
		Dynamic isAnimated_dyn();

		virtual bool isDisposed( );
		Dynamic isDisposed_dyn();

		virtual Void _initCache( );

		virtual Void markAsDirty( ::String property);
		Dynamic markAsDirty_dyn();

		virtual Void refreshBoudningInfo( );
		Dynamic refreshBoudningInfo_dyn();

		virtual Void _updateBoundingInfo( );
		Dynamic _updateBoundingInfo_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix computeWorldMatrix( hx::Null< bool >  force);
		Dynamic computeWorldMatrix_dyn();

		virtual Void bindAndDraw( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,::com::gamestudiohx::babylonhx::materials::Effect effect,bool wireframe);
		Dynamic bindAndDraw_dyn();

		virtual Void setLocalTranslation( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector3);
		Dynamic setLocalTranslation_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector3 getLocalTranslation( );
		Dynamic getLocalTranslation_dyn();

		virtual bool intersectsMesh( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh,bool precise);
		Dynamic intersectsMesh_dyn();

		virtual bool intersectsPoint( ::com::gamestudiohx::babylonhx::tools::math::Vector3 point);
		Dynamic intersectsPoint_dyn();

		virtual ::com::gamestudiohx::babylonhx::collisions::PickingInfo intersects( ::com::gamestudiohx::babylonhx::tools::math::Ray ray,bool fastCheck);
		Dynamic intersects_dyn();

		virtual ::com::gamestudiohx::babylonhx::mesh::AbstractMesh clone( ::String name,::com::gamestudiohx::babylonhx::mesh::Mesh newParent,hx::Null< bool >  doNotCloneChildren);
		Dynamic clone_dyn();

		virtual Void releaseSubMeshes( );
		Dynamic releaseSubMeshes_dyn();

		virtual Void dispose( hx::Null< bool >  doNotRecurse);
		Dynamic dispose_dyn();

		static int BILLBOARDMODE_NONE;
		static int BILLBOARDMODE_X;
		static int BILLBOARDMODE_Y;
		static int BILLBOARDMODE_Z;
		static int BILLBOARDMODE_ALL;
		static ::com::gamestudiohx::babylonhx::mesh::Mesh CreateBox( ::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,hx::Null< bool >  updatable);
		static Dynamic CreateBox_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::Mesh CreateCylinder( ::String name,Float height,Float diameterTop,Float diameterBottom,int tessellation,::com::gamestudiohx::babylonhx::Scene scene,bool updatable);
		static Dynamic CreateCylinder_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::Mesh CreateTorus( ::String name,Float diameter,Float thickness,int tessellation,::com::gamestudiohx::babylonhx::Scene scene,bool updatable);
		static Dynamic CreateTorus_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::Mesh CreateSphere( ::String name,int segments,Float diameter,::com::gamestudiohx::babylonhx::Scene scene,hx::Null< bool >  updatable);
		static Dynamic CreateSphere_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::Mesh CreatePlane( ::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,bool updatable);
		static Dynamic CreatePlane_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::Mesh CreateGround( ::String name,Float width,Float height,int subdivisions,::com::gamestudiohx::babylonhx::Scene scene,bool updatable);
		static Dynamic CreateGround_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::Mesh CreateGroundFromHeightMap( ::String name,::String url,Float width,Float height,int subdivisions,Float minHeight,Float maxHeight,::com::gamestudiohx::babylonhx::Scene scene,bool updatable);
		static Dynamic CreateGroundFromHeightMap_dyn();

		static Void ComputeNormal( Array< Float > positions,Array< Float > normals,Array< int > indices);
		static Dynamic ComputeNormal_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh

#endif /* INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh */ 
