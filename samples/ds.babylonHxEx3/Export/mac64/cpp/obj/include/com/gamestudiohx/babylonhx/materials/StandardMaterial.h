#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_StandardMaterial
#define INCLUDED_com_gamestudiohx_babylonhx_materials_StandardMaterial

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/gamestudiohx/babylonhx/materials/Material.h>
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Material)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,StandardMaterial)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,Texture)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,IGetSetVerticesData)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Mesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,tools,SmartArray)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Color3)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{


class HXCPP_CLASS_ATTRIBUTES  StandardMaterial_obj : public ::com::gamestudiohx::babylonhx::materials::Material_obj{
	public:
		typedef ::com::gamestudiohx::babylonhx::materials::Material_obj super;
		typedef StandardMaterial_obj OBJ_;
		StandardMaterial_obj();
		Void __construct(::String name,::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StandardMaterial_obj > __new(::String name,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StandardMaterial_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StandardMaterial"); }

		::com::gamestudiohx::babylonhx::materials::textures::Texture diffuseTexture;
		::com::gamestudiohx::babylonhx::materials::textures::Texture ambientTexture;
		::com::gamestudiohx::babylonhx::materials::textures::Texture opacityTexture;
		::com::gamestudiohx::babylonhx::materials::textures::Texture reflectionTexture;
		::com::gamestudiohx::babylonhx::materials::textures::Texture emissiveTexture;
		::com::gamestudiohx::babylonhx::materials::textures::Texture specularTexture;
		::com::gamestudiohx::babylonhx::materials::textures::Texture bumpTexture;
		::com::gamestudiohx::babylonhx::tools::math::Color3 ambientColor;
		::com::gamestudiohx::babylonhx::tools::math::Color3 diffuseColor;
		::com::gamestudiohx::babylonhx::tools::math::Color3 specularColor;
		Float specularPower;
		::com::gamestudiohx::babylonhx::tools::math::Color3 emissiveColor;
		::String _cachedDefines;
		::com::gamestudiohx::babylonhx::tools::SmartArray _renderTargets;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _worldViewProjectionMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _lightMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Color3 _globalAmbientColor;
		::com::gamestudiohx::babylonhx::tools::math::Color3 _baseColor;
		::com::gamestudiohx::babylonhx::tools::math::Color3 _scaledDiffuse;
		::com::gamestudiohx::babylonhx::tools::math::Color3 _scaledSpecular;
		virtual bool needAlphaBlending( );

		virtual bool needAlphaTesting( );

		virtual bool isReady( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh);

		virtual ::com::gamestudiohx::babylonhx::tools::SmartArray getRenderTargetTextures( );
		Dynamic getRenderTargetTextures_dyn();

		virtual Void unbind( );

		virtual Void bind( ::com::gamestudiohx::babylonhx::tools::math::Matrix world,::com::gamestudiohx::babylonhx::mesh::Mesh mesh);

		virtual Array< ::Dynamic > getAnimatables( );
		Dynamic getAnimatables_dyn();

		virtual Void dispose( );

		virtual ::com::gamestudiohx::babylonhx::materials::StandardMaterial clone( ::String name);
		Dynamic clone_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials

#endif /* INCLUDED_com_gamestudiohx_babylonhx_materials_StandardMaterial */ 
