#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_MultiMaterial
#define INCLUDED_com_gamestudiohx_babylonhx_materials_MultiMaterial

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Material)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,MultiMaterial)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,IGetSetVerticesData)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Mesh)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{


class HXCPP_CLASS_ATTRIBUTES  MultiMaterial_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MultiMaterial_obj OBJ_;
		MultiMaterial_obj();
		Void __construct(::String name,::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MultiMaterial_obj > __new(::String name,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MultiMaterial_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MultiMaterial"); }

		::String name;
		::String id;
		::com::gamestudiohx::babylonhx::Scene _scene;
		Array< ::Dynamic > subMaterials;
		virtual ::com::gamestudiohx::babylonhx::materials::Material getSubMaterial( int index);
		Dynamic getSubMaterial_dyn();

		virtual bool isReady( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh);
		Dynamic isReady_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials

#endif /* INCLUDED_com_gamestudiohx_babylonhx_materials_MultiMaterial */ 
