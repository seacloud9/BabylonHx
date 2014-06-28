#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_Geometry
#define INCLUDED_com_gamestudiohx_babylonhx_mesh_Geometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/gamestudiohx/babylonhx/mesh/IGetSetVerticesData.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Engine)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,culling,BoundingInfo)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,BabylonGLBuffer)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Geometry)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,IGetSetVerticesData)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Mesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,VertexBuffer)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,VertexData)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{


class HXCPP_CLASS_ATTRIBUTES  Geometry_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Geometry_obj OBJ_;
		Geometry_obj();
		Void __construct(::String id,::com::gamestudiohx::babylonhx::Engine engine,::com::gamestudiohx::babylonhx::mesh::VertexData vertexData,Dynamic updatable,::com::gamestudiohx::babylonhx::mesh::Mesh mesh);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Geometry_obj > __new(::String id,::com::gamestudiohx::babylonhx::Engine engine,::com::gamestudiohx::babylonhx::mesh::VertexData vertexData,Dynamic updatable,::com::gamestudiohx::babylonhx::mesh::Mesh mesh);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Geometry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::gamestudiohx::babylonhx::mesh::IGetSetVerticesData_obj *()
			{ return new ::com::gamestudiohx::babylonhx::mesh::IGetSetVerticesData_delegate_< Geometry_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Geometry"); }

		::String id;
		int delayLoadState;
		::String delayLoadingFile;
		::com::gamestudiohx::babylonhx::Engine _engine;
		Array< ::Dynamic > _meshes;
		int _totalVertices;
		Array< int > _indices;
		::haxe::ds::StringMap _vertexBuffers;
		Array< ::String > _delayInfo;
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _indexBuffer;
		::com::gamestudiohx::babylonhx::culling::BoundingInfo _boundingInfo;
		Dynamic _delayLoadingFunction;
		Dynamic &_delayLoadingFunction_dyn() { return _delayLoadingFunction;}
		virtual ::com::gamestudiohx::babylonhx::Engine getEngine( );
		Dynamic getEngine_dyn();

		virtual bool isReady( );
		Dynamic isReady_dyn();

		virtual Void setAllVerticesData( ::com::gamestudiohx::babylonhx::mesh::VertexData vertexData,Dynamic updatable);
		Dynamic setAllVerticesData_dyn();

		virtual Void setVerticesData( ::String kind,Array< Float > data,Dynamic updatable);
		Dynamic setVerticesData_dyn();

		virtual Void updateVerticesData( ::String kind,Array< Float > data,Dynamic updateExtends,Dynamic makeItUnique);
		Dynamic updateVerticesData_dyn();

		virtual int getTotalVertices( );
		Dynamic getTotalVertices_dyn();

		virtual Array< Float > getVerticesData( ::String kind);
		Dynamic getVerticesData_dyn();

		virtual ::com::gamestudiohx::babylonhx::mesh::VertexBuffer getVertexBuffer( ::String kind);
		Dynamic getVertexBuffer_dyn();

		virtual ::haxe::ds::StringMap getVertexBuffers( );
		Dynamic getVertexBuffers_dyn();

		virtual bool isVerticesDataPresent( ::String kind);
		Dynamic isVerticesDataPresent_dyn();

		virtual Array< ::String > getVerticesDataKinds( );
		Dynamic getVerticesDataKinds_dyn();

		virtual Void setIndices( Array< int > indices);
		Dynamic setIndices_dyn();

		virtual int getTotalIndices( );
		Dynamic getTotalIndices_dyn();

		virtual Array< int > getIndices( );
		Dynamic getIndices_dyn();

		virtual Dynamic getIndexBuffer( );
		Dynamic getIndexBuffer_dyn();

		virtual Void releaseForMesh( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh);
		Dynamic releaseForMesh_dyn();

		virtual Void applyToMesh( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh);
		Dynamic applyToMesh_dyn();

		virtual Void _applyToMesh( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh);
		Dynamic _applyToMesh_dyn();

		virtual Void load( ::com::gamestudiohx::babylonhx::Scene scene,Dynamic onLoaded);
		Dynamic load_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::com::gamestudiohx::babylonhx::mesh::Geometry copy( ::String id);
		Dynamic copy_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::Geometry ExtractFromMesh( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh,::String id);
		static Dynamic ExtractFromMesh_dyn();

		static ::String RandomId( );
		static Dynamic RandomId_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh

#endif /* INCLUDED_com_gamestudiohx_babylonhx_mesh_Geometry */ 
