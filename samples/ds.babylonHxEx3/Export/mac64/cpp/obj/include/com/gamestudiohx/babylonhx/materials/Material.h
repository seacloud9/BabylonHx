#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Material
#define INCLUDED_com_gamestudiohx_babylonhx_materials_Material

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Effect)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Material)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,IGetSetVerticesData)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Mesh)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{


class HXCPP_CLASS_ATTRIBUTES  Material_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Material_obj OBJ_;
		Material_obj();
		Void __construct(::String name,::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Material_obj > __new(::String name,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Material_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Material"); }

		::String name;
		::String id;
		int _renderId;
		::com::gamestudiohx::babylonhx::Scene _scene;
		bool checkReadyOnEveryCall;
		bool checkReadyOnlyOnce;
		Float alpha;
		bool wireframe;
		bool backFaceCulling;
		::com::gamestudiohx::babylonhx::materials::Effect _effect;
		bool _wasPreviouslyReady;
		Dynamic onDispose;
		Dynamic &onDispose_dyn() { return onDispose;}
		virtual bool isReady( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh);
		Dynamic isReady_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::Effect getEffect( );
		Dynamic getEffect_dyn();

		virtual ::com::gamestudiohx::babylonhx::Scene getScene( );
		Dynamic getScene_dyn();

		virtual bool needAlphaBlending( );
		Dynamic needAlphaBlending_dyn();

		virtual bool needAlphaTesting( );
		Dynamic needAlphaTesting_dyn();

		virtual Void _preBind( );
		Dynamic _preBind_dyn();

		virtual Void bind( ::com::gamestudiohx::babylonhx::tools::math::Matrix world,::com::gamestudiohx::babylonhx::mesh::Mesh mesh);
		Dynamic bind_dyn();

		virtual Void unbind( );
		Dynamic unbind_dyn();

		virtual Void baseDispose( );
		Dynamic baseDispose_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials

#endif /* INCLUDED_com_gamestudiohx_babylonhx_materials_Material */ 
