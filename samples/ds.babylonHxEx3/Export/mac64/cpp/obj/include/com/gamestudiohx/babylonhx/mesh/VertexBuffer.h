#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_VertexBuffer
#define INCLUDED_com_gamestudiohx_babylonhx_mesh_VertexBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Engine)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,BabylonGLBuffer)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,IGetSetVerticesData)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Mesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,VertexBuffer)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{


class HXCPP_CLASS_ATTRIBUTES  VertexBuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VertexBuffer_obj OBJ_;
		VertexBuffer_obj();
		Void __construct(Dynamic mesh,Array< Float > data,::String kind,bool updatable,hx::Null< bool >  __o_postponeInternalCreation);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< VertexBuffer_obj > __new(Dynamic mesh,Array< Float > data,::String kind,bool updatable,hx::Null< bool >  __o_postponeInternalCreation);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexBuffer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("VertexBuffer"); }

		::com::gamestudiohx::babylonhx::mesh::Mesh _mesh;
		::com::gamestudiohx::babylonhx::Engine _engine;
		bool _updatable;
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _buffer;
		Array< Float > _data;
		::String _kind;
		int _strideSize;
		virtual bool isUpdatable( );
		Dynamic isUpdatable_dyn();

		virtual Array< Float > getData( );
		Dynamic getData_dyn();

		virtual int getStrideSize( );
		Dynamic getStrideSize_dyn();

		virtual Void create( Array< Float > data);
		Dynamic create_dyn();

		virtual Void update( Array< Float > data);
		Dynamic update_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		static ::String PositionKind;
		static ::String NormalKind;
		static ::String UVKind;
		static ::String UV2Kind;
		static ::String ColorKind;
		static ::String MatricesIndicesKind;
		static ::String MatricesWeightsKind;
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh

#endif /* INCLUDED_com_gamestudiohx_babylonhx_mesh_VertexBuffer */ 
