#ifndef INCLUDED_com_gamestudiohx_babylonhx_collisions_Collider
#define INCLUDED_com_gamestudiohx_babylonhx_collisions_Collider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,collisions,Collider)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,SubMesh)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace collisions{


class HXCPP_CLASS_ATTRIBUTES  Collider_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Collider_obj OBJ_;
		Collider_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Collider_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Collider_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Collider"); }

		::com::gamestudiohx::babylonhx::tools::math::Vector3 radius;
		int retry;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 basePoint;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 basePointWorld;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 velocityWorld;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 normalizedVelocity;
		Float velocityWorldLength;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 velocity;
		bool collisionFound;
		Float epsilon;
		Float nearestDistance;
		::com::gamestudiohx::babylonhx::mesh::AbstractMesh collidedMesh;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 intersectionPoint;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 initialVelocity;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 initialPosition;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _collisionPoint;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _planeIntersectionPoint;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _tempVector;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _tempVector2;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _tempVector3;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _tempVector4;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _edge;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _baseToVertex;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _destinationPoint;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _slidePlaneNormal;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _displacementVector;
		virtual Void _initialize( ::com::gamestudiohx::babylonhx::tools::math::Vector3 source,::com::gamestudiohx::babylonhx::tools::math::Vector3 dir,Float e);
		Dynamic _initialize_dyn();

		virtual bool _checkPointInTriangle( ::com::gamestudiohx::babylonhx::tools::math::Vector3 point,::com::gamestudiohx::babylonhx::tools::math::Vector3 pa,::com::gamestudiohx::babylonhx::tools::math::Vector3 pb,::com::gamestudiohx::babylonhx::tools::math::Vector3 pc,::com::gamestudiohx::babylonhx::tools::math::Vector3 n);
		Dynamic _checkPointInTriangle_dyn();

		virtual bool intersectBoxAASphere( ::com::gamestudiohx::babylonhx::tools::math::Vector3 boxMin,::com::gamestudiohx::babylonhx::tools::math::Vector3 boxMax,::com::gamestudiohx::babylonhx::tools::math::Vector3 sphereCenter,Float sphereRadius);
		Dynamic intersectBoxAASphere_dyn();

		virtual Dynamic getLowestRoot( Float a,Float b,Float c,Float maxR);
		Dynamic getLowestRoot_dyn();

		virtual bool _canDoCollision( ::com::gamestudiohx::babylonhx::tools::math::Vector3 sphereCenter,Float sphereRadius,::com::gamestudiohx::babylonhx::tools::math::Vector3 vecMin,::com::gamestudiohx::babylonhx::tools::math::Vector3 vecMax);
		Dynamic _canDoCollision_dyn();

		virtual Void _testTriangle( int faceIndex,::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,::com::gamestudiohx::babylonhx::tools::math::Vector3 p1,::com::gamestudiohx::babylonhx::tools::math::Vector3 p2,::com::gamestudiohx::babylonhx::tools::math::Vector3 p3);
		Dynamic _testTriangle_dyn();

		virtual Void _collide( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,Array< ::Dynamic > pts,Array< int > indices,int indexStart,int indexEnd,int decal);
		Dynamic _collide_dyn();

		virtual Void _getResponse( ::com::gamestudiohx::babylonhx::tools::math::Vector3 pos,::com::gamestudiohx::babylonhx::tools::math::Vector3 vel);
		Dynamic _getResponse_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace collisions

#endif /* INCLUDED_com_gamestudiohx_babylonhx_collisions_Collider */ 
