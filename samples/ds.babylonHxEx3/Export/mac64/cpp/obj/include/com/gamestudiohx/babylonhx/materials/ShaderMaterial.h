#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_ShaderMaterial
#define INCLUDED_com_gamestudiohx_babylonhx_materials_ShaderMaterial

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/gamestudiohx/babylonhx/materials/Material.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Material)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,ShaderMaterial)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,Texture)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,IGetSetVerticesData)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Mesh)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Color3)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Color4)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector2)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{


class HXCPP_CLASS_ATTRIBUTES  ShaderMaterial_obj : public ::com::gamestudiohx::babylonhx::materials::Material_obj{
	public:
		typedef ::com::gamestudiohx::babylonhx::materials::Material_obj super;
		typedef ShaderMaterial_obj OBJ_;
		ShaderMaterial_obj();
		Void __construct(::String name,::com::gamestudiohx::babylonhx::Scene scene,Dynamic shaderPath,Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ShaderMaterial_obj > __new(::String name,::com::gamestudiohx::babylonhx::Scene scene,Dynamic shaderPath,Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderMaterial_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ShaderMaterial"); }

		Dynamic _shaderPath;
		Dynamic _options;
		::haxe::ds::StringMap _textures;
		::haxe::ds::StringMap _floats;
		::haxe::ds::StringMap _floatsArrays;
		::haxe::ds::StringMap _colors3;
		::haxe::ds::StringMap _colors4;
		::haxe::ds::StringMap _vectors2;
		::haxe::ds::StringMap _vectors3;
		::haxe::ds::StringMap _matrices;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _cachedWorldViewMatrix;
		virtual bool needAlphaBlending( );

		virtual bool needAlphaTesting( );

		virtual Void _checkUniform( ::String uniformName);
		Dynamic _checkUniform_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::ShaderMaterial setTexture( ::String name,::com::gamestudiohx::babylonhx::materials::textures::Texture texture);
		Dynamic setTexture_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::ShaderMaterial setFloat( ::String name,Float value);
		Dynamic setFloat_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::ShaderMaterial setFloats( ::String name,Array< Float > value);
		Dynamic setFloats_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::ShaderMaterial setColor3( ::String name,::com::gamestudiohx::babylonhx::tools::math::Color3 value);
		Dynamic setColor3_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::ShaderMaterial setColor4( ::String name,::com::gamestudiohx::babylonhx::tools::math::Color4 value);
		Dynamic setColor4_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::ShaderMaterial setVector2( ::String name,::com::gamestudiohx::babylonhx::tools::math::Vector2 value);
		Dynamic setVector2_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::ShaderMaterial setVector3( ::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 value);
		Dynamic setVector3_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::ShaderMaterial setMatrix( ::String name,::com::gamestudiohx::babylonhx::tools::math::Matrix value);
		Dynamic setMatrix_dyn();

		virtual bool isReady( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh);

		virtual Void bind( ::com::gamestudiohx::babylonhx::tools::math::Matrix world,::com::gamestudiohx::babylonhx::mesh::Mesh mesh);

		virtual Void dispose( );

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials

#endif /* INCLUDED_com_gamestudiohx_babylonhx_materials_ShaderMaterial */ 
