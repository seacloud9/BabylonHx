#ifndef INCLUDED_com_gamestudiohx_babylonhx_Scene
#define INCLUDED_com_gamestudiohx_babylonhx_Scene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Engine)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,animations,_Animatable)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,bones,Skeleton)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,cameras,Camera)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,collisions,Collider)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,collisions,PickingInfo)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,culling,octrees,Octree)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,layer,Layer)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,lensflare,LensFlareSystem)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,lights,Light)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Material)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,MultiMaterial)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,StandardMaterial)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Geometry)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,IGetSetVerticesData)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,SubMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,particles,ParticleSystem)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,postprocess,PostProcessManager)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,rendering,RenderingManager)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,sprites,SpriteManager)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,tools,SmartArray)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Color3)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Color4)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Plane)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Ray)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace com{
namespace gamestudiohx{
namespace babylonhx{


class HXCPP_CLASS_ATTRIBUTES  Scene_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Scene_obj OBJ_;
		Scene_obj();
		Void __construct(::com::gamestudiohx::babylonhx::Engine engine);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Scene_obj > __new(::com::gamestudiohx::babylonhx::Engine engine);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Scene_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Scene"); }

		::com::gamestudiohx::babylonhx::Engine _engine;
		Dynamic beforeRender;
		Dynamic &beforeRender_dyn() { return beforeRender;}
		Dynamic afterRender;
		Dynamic &afterRender_dyn() { return afterRender;}
		::com::gamestudiohx::babylonhx::tools::math::Matrix _viewMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _projectionMatrix;
		Dynamic _physicsEngine;
		bool useDelayedTextureLoading;
		int _totalVertices;
		int _activeVertices;
		int _activeParticles;
		Float _lastFrameDuration;
		Float _evaluateActiveMeshesDuration;
		Float _renderTargetsDuration;
		Float _renderDuration;
		Float _particlesDuration;
		Float _spritesDuration;
		Float _animationRatio;
		int _renderId;
		int _executeWhenReadyTimeoutId;
		Array< ::Dynamic > _frustumPlanes;
		::com::gamestudiohx::babylonhx::culling::octrees::Octree _selectionOctree;
		::com::gamestudiohx::babylonhx::tools::SmartArray _toBeDisposed;
		Dynamic _onReadyCallbacks;
		Dynamic _pendingData;
		Dynamic _onBeforeRenderCallbacks;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _pickWithRayInverseMatrix;
		bool autoClear;
		bool forceWireframe;
		::com::gamestudiohx::babylonhx::tools::math::Color4 clearColor;
		::com::gamestudiohx::babylonhx::tools::math::Color3 ambientColor;
		int fogMode;
		::com::gamestudiohx::babylonhx::tools::math::Color3 fogColor;
		Float fogDensity;
		Float fogStart;
		Float fogEnd;
		::com::gamestudiohx::babylonhx::tools::SmartArray _activeMeshes;
		::com::gamestudiohx::babylonhx::tools::SmartArray _processedMaterials;
		::com::gamestudiohx::babylonhx::tools::SmartArray _renderTargets;
		::com::gamestudiohx::babylonhx::tools::SmartArray _activeParticleSystems;
		::com::gamestudiohx::babylonhx::tools::SmartArray _activeSkeletons;
		bool renderTargetsEnabled;
		Dynamic customRenderTargets;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _scaledVelocity;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _scaledPosition;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _transformMatrix;
		Array< ::Dynamic > _activeAnimatables;
		Array< ::Dynamic > lensFlareSystems;
		::com::gamestudiohx::babylonhx::rendering::RenderingManager _renderingManager;
		Array< ::Dynamic > _geometries;
		Dynamic database;
		bool lightsEnabled;
		Array< ::Dynamic > lights;
		Array< ::Dynamic > cameras;
		::com::gamestudiohx::babylonhx::cameras::Camera activeCamera;
		Array< ::Dynamic > activeCameras;
		Array< ::Dynamic > meshes;
		Array< ::Dynamic > materials;
		Array< ::Dynamic > multiMaterials;
		::com::gamestudiohx::babylonhx::materials::StandardMaterial defaultMaterial;
		bool texturesEnabled;
		Array< ::Dynamic > textures;
		bool particlesEnabled;
		Array< ::Dynamic > particleSystems;
		Array< ::Dynamic > spriteManagers;
		Array< ::Dynamic > layers;
		Array< ::Dynamic > skeletons;
		bool collisionsEnabled;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 gravity;
		bool postProcessesEnabled;
		::com::gamestudiohx::babylonhx::postprocess::PostProcessManager postProcessManager;
		int _animationStartDate;
		virtual ::com::gamestudiohx::babylonhx::Engine getEngine( );
		Dynamic getEngine_dyn();

		virtual int getTotalVertices( );
		Dynamic getTotalVertices_dyn();

		virtual int getActiveVertices( );
		Dynamic getActiveVertices_dyn();

		virtual int getActiveParticles( );
		Dynamic getActiveParticles_dyn();

		virtual Float getLastFrameDuration( );
		Dynamic getLastFrameDuration_dyn();

		virtual Float getEvaluateActiveMeshesDuration( );
		Dynamic getEvaluateActiveMeshesDuration_dyn();

		virtual Float getRenderTargetsDuration( );
		Dynamic getRenderTargetsDuration_dyn();

		virtual Float getRenderDuration( );
		Dynamic getRenderDuration_dyn();

		virtual Float getParticlesDuration( );
		Dynamic getParticlesDuration_dyn();

		virtual Float getSpritesDuration( );
		Dynamic getSpritesDuration_dyn();

		virtual Float getAnimationRatio( );
		Dynamic getAnimationRatio_dyn();

		virtual int getRenderId( );
		Dynamic getRenderId_dyn();

		virtual bool isReady( );
		Dynamic isReady_dyn();

		virtual Void registerBeforeRender( Dynamic func);
		Dynamic registerBeforeRender_dyn();

		virtual Void unregisterBeforeRender( Dynamic func);
		Dynamic unregisterBeforeRender_dyn();

		virtual Void _addPendingData( Dynamic data);
		Dynamic _addPendingData_dyn();

		virtual Void _removePendingData( Dynamic data);
		Dynamic _removePendingData_dyn();

		virtual int getWaitingItemsCount( );
		Dynamic getWaitingItemsCount_dyn();

		virtual Void executeWhenReady( Dynamic func);
		Dynamic executeWhenReady_dyn();

		virtual Void _checkIsReady( );
		Dynamic _checkIsReady_dyn();

		virtual Void beginAnimation( Dynamic target,Float from,Float to,bool loop,hx::Null< Float >  speedRatio,Dynamic onAnimationEnd);
		Dynamic beginAnimation_dyn();

		virtual Void stopAnimation( Dynamic target);
		Dynamic stopAnimation_dyn();

		virtual Void _animate( );
		Dynamic _animate_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix getViewMatrix( );
		Dynamic getViewMatrix_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix getProjectionMatrix( );
		Dynamic getProjectionMatrix_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix getTransformMatrix( );
		Dynamic getTransformMatrix_dyn();

		virtual Void setTransformMatrix( ::com::gamestudiohx::babylonhx::tools::math::Matrix view,::com::gamestudiohx::babylonhx::tools::math::Matrix projection);
		Dynamic setTransformMatrix_dyn();

		virtual Void activeCameraByID( ::String id);
		Dynamic activeCameraByID_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::Material getMaterialByID( ::String id);
		Dynamic getMaterialByID_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::Material getMaterialByName( ::String name);
		Dynamic getMaterialByName_dyn();

		virtual ::com::gamestudiohx::babylonhx::lights::Light getLightByID( ::String id);
		Dynamic getLightByID_dyn();

		virtual ::com::gamestudiohx::babylonhx::mesh::AbstractMesh getMeshByID( ::String id);
		Dynamic getMeshByID_dyn();

		virtual ::com::gamestudiohx::babylonhx::mesh::AbstractMesh getLastMeshByID( ::String id);
		Dynamic getLastMeshByID_dyn();

		virtual Dynamic getLastEntryByID( ::String id);
		Dynamic getLastEntryByID_dyn();

		virtual ::com::gamestudiohx::babylonhx::mesh::AbstractMesh getMeshByName( ::String name);
		Dynamic getMeshByName_dyn();

		virtual bool isActiveMesh( ::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh);
		Dynamic isActiveMesh_dyn();

		virtual ::com::gamestudiohx::babylonhx::bones::Skeleton getLastSkeletonByID( ::String id);
		Dynamic getLastSkeletonByID_dyn();

		virtual ::com::gamestudiohx::babylonhx::bones::Skeleton getSkeletonByID( ::String id);
		Dynamic getSkeletonByID_dyn();

		virtual ::com::gamestudiohx::babylonhx::bones::Skeleton getSkeletonByName( ::String name);
		Dynamic getSkeletonByName_dyn();

		virtual Void _evaluateSubMesh( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh);
		Dynamic _evaluateSubMesh_dyn();

		virtual Void _evaluateActiveMeshes( );
		Dynamic _evaluateActiveMeshes_dyn();

		virtual Void _renderForCamera( ::com::gamestudiohx::babylonhx::cameras::Camera camera,hx::Null< bool >  mustClearDepth);
		Dynamic _renderForCamera_dyn();

		virtual Void render( ::openfl::geom::Rectangle rect);
		Dynamic render_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::com::gamestudiohx::babylonhx::mesh::Geometry getGeometryByID( ::String id);
		Dynamic getGeometryByID_dyn();

		virtual bool pushGeometry( ::com::gamestudiohx::babylonhx::mesh::Geometry geometry,hx::Null< bool >  force);
		Dynamic pushGeometry_dyn();

		virtual Void _getNewPosition( ::com::gamestudiohx::babylonhx::tools::math::Vector3 position,::com::gamestudiohx::babylonhx::tools::math::Vector3 velocity,::com::gamestudiohx::babylonhx::collisions::Collider collider,int maximumRetry,::com::gamestudiohx::babylonhx::tools::math::Vector3 finalPosition);
		Dynamic _getNewPosition_dyn();

		virtual Void _collideWithWorld( ::com::gamestudiohx::babylonhx::tools::math::Vector3 position,::com::gamestudiohx::babylonhx::tools::math::Vector3 velocity,::com::gamestudiohx::babylonhx::collisions::Collider collider,int maximumRetry,::com::gamestudiohx::babylonhx::tools::math::Vector3 finalPosition);
		Dynamic _collideWithWorld_dyn();

		virtual Void createOrUpdateSelectionOctree( );
		Dynamic createOrUpdateSelectionOctree_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Ray createPickingRay( Float x,Float y,::com::gamestudiohx::babylonhx::tools::math::Matrix world,::com::gamestudiohx::babylonhx::cameras::Camera camera);
		Dynamic createPickingRay_dyn();

		virtual ::com::gamestudiohx::babylonhx::collisions::PickingInfo _internalPick( Dynamic rayFunction,Dynamic predicate,bool fastCheck);
		Dynamic _internalPick_dyn();

		virtual ::com::gamestudiohx::babylonhx::collisions::PickingInfo pick( Float x,Float y,Dynamic predicate,bool fastCheck,::com::gamestudiohx::babylonhx::cameras::Camera camera);
		Dynamic pick_dyn();

		virtual ::com::gamestudiohx::babylonhx::collisions::PickingInfo pickWithRay( ::com::gamestudiohx::babylonhx::tools::math::Ray ray,Dynamic predicate,bool fastCheck);
		Dynamic pickWithRay_dyn();

		static int FOGMODE_NONE;
		static int FOGMODE_EXP;
		static int FOGMODE_EXP2;
		static int FOGMODE_LINEAR;
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx

#endif /* INCLUDED_com_gamestudiohx_babylonhx_Scene */ 
