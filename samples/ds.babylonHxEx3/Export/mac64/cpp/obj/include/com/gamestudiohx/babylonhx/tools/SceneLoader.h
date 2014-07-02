#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_SceneLoader
#define INCLUDED_com_gamestudiohx_babylonhx_tools_SceneLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Engine)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,animations,Animation)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,bones,Skeleton)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,cameras,Camera)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,cameras,FreeCamera)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,lensflare,LensFlareSystem)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,lights,Light)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,lights,shadows,ShadowGenerator)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Material)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,MultiMaterial)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,CubeTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,Texture)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,IGetSetVerticesData)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Mesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,particles,ParticleSystem)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,tools,SceneLoader)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  SceneLoader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SceneLoader_obj OBJ_;
		SceneLoader_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SceneLoader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SceneLoader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SceneLoader"); }

		static ::com::gamestudiohx::babylonhx::materials::textures::CubeTexture loadCubeTexture( ::String rootUrl,Dynamic parsedTexture,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic loadCubeTexture_dyn();

		static Dynamic loadTexture( ::String rootUrl,Dynamic parsedTexture,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic loadTexture_dyn();

		static ::com::gamestudiohx::babylonhx::bones::Skeleton parseSkeleton( Dynamic parsedSkeleton,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic parseSkeleton_dyn();

		static ::com::gamestudiohx::babylonhx::materials::Material parseMaterial( Dynamic parsedMaterial,::com::gamestudiohx::babylonhx::Scene scene,::String rootUrl);
		static Dynamic parseMaterial_dyn();

		static ::com::gamestudiohx::babylonhx::materials::Material parseMaterialById( ::String id,Dynamic parsedData,::com::gamestudiohx::babylonhx::Scene scene,::String rootUrl);
		static Dynamic parseMaterialById_dyn();

		static ::com::gamestudiohx::babylonhx::materials::MultiMaterial parseMultiMaterial( Dynamic parsedMultiMaterial,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic parseMultiMaterial_dyn();

		static ::com::gamestudiohx::babylonhx::lensflare::LensFlareSystem parseLensFlareSystem( Dynamic parsedLensFlareSystem,::com::gamestudiohx::babylonhx::Scene scene,::String rootUrl);
		static Dynamic parseLensFlareSystem_dyn();

		static ::com::gamestudiohx::babylonhx::particles::ParticleSystem parseParticleSystem( Dynamic parsedParticleSystem,::com::gamestudiohx::babylonhx::Scene scene,::String rootUrl);
		static Dynamic parseParticleSystem_dyn();

		static ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator parseShadowGenerator( Dynamic parsedShadowGenerator,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic parseShadowGenerator_dyn();

		static ::com::gamestudiohx::babylonhx::animations::Animation parseAnimation( Dynamic parsedAnimation);
		static Dynamic parseAnimation_dyn();

		static ::com::gamestudiohx::babylonhx::lights::Light parseLight( Dynamic parsedLight,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic parseLight_dyn();

		static ::com::gamestudiohx::babylonhx::cameras::FreeCamera parseCamera( Dynamic parsedCamera,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic parseCamera_dyn();

		static ::com::gamestudiohx::babylonhx::mesh::Mesh parseMesh( Dynamic parsedMesh,::com::gamestudiohx::babylonhx::Scene scene,::String rootUrl);
		static Dynamic parseMesh_dyn();

		static bool isDescendantOf( Dynamic mesh,::String name,Array< ::String > hierarchyIds);
		static Dynamic isDescendantOf_dyn();

		static Void _ImportGeometry( Dynamic parsedGeometry,::com::gamestudiohx::babylonhx::mesh::Mesh mesh);
		static Dynamic _ImportGeometry_dyn();

		static Void ImportMesh( ::String meshName,::String rootUrl,::String sceneFilename,::com::gamestudiohx::babylonhx::Scene scene,Dynamic then,Dynamic progressCallBack);
		static Dynamic ImportMesh_dyn();

		static Void Load( ::String rootUrl,::String sceneFilename,::com::gamestudiohx::babylonhx::Engine engine,Dynamic then);
		static Dynamic Load_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools

#endif /* INCLUDED_com_gamestudiohx_babylonhx_tools_SceneLoader */ 
