#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_InstancesBatch
#define INCLUDED_com_gamestudiohx_babylonhx_mesh_InstancesBatch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,InstancedMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,InstancesBatch)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{


class HXCPP_CLASS_ATTRIBUTES  InstancesBatch_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InstancesBatch_obj OBJ_;
		InstancesBatch_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< InstancesBatch_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InstancesBatch_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("InstancesBatch"); }

		bool mustReturn;
		Array< ::Dynamic > visibleInstances;
		bool renderSelf;
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh

#endif /* INCLUDED_com_gamestudiohx_babylonhx_mesh_InstancesBatch */ 
