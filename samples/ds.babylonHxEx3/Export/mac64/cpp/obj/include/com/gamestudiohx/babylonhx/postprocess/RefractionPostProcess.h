#ifndef INCLUDED_com_gamestudiohx_babylonhx_postprocess_RefractionPostProcess
#define INCLUDED_com_gamestudiohx_babylonhx_postprocess_RefractionPostProcess

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/gamestudiohx/babylonhx/postprocess/PostProcess.h>
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,cameras,Camera)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,Texture)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,postprocess,PostProcess)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,postprocess,RefractionPostProcess)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Color3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace postprocess{


class HXCPP_CLASS_ATTRIBUTES  RefractionPostProcess_obj : public ::com::gamestudiohx::babylonhx::postprocess::PostProcess_obj{
	public:
		typedef ::com::gamestudiohx::babylonhx::postprocess::PostProcess_obj super;
		typedef RefractionPostProcess_obj OBJ_;
		RefractionPostProcess_obj();
		Void __construct(::String name,::String refractionTextureUrl,::com::gamestudiohx::babylonhx::tools::math::Color3 color,Float depth,Float colorLevel,Float ratio,::com::gamestudiohx::babylonhx::cameras::Camera camera,hx::Null< int >  __o_samplingMode);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RefractionPostProcess_obj > __new(::String name,::String refractionTextureUrl,::com::gamestudiohx::babylonhx::tools::math::Color3 color,Float depth,Float colorLevel,Float ratio,::com::gamestudiohx::babylonhx::cameras::Camera camera,hx::Null< int >  __o_samplingMode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RefractionPostProcess_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RefractionPostProcess"); }

		::com::gamestudiohx::babylonhx::tools::math::Color3 color;
		Float depth;
		Float colorLevel;
		::com::gamestudiohx::babylonhx::materials::textures::Texture _refTexture;
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace postprocess

#endif /* INCLUDED_com_gamestudiohx_babylonhx_postprocess_RefractionPostProcess */ 
