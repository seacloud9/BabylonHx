#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_Light
#define INCLUDED_com_gamestudiohx_babylonhx_lights_Light

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/gamestudiohx/babylonhx/Node.h>
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,animations,Animation)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,lights,Light)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,lights,shadows,ShadowGenerator)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Effect)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,AbstractMesh)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,IGetSetVerticesData)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,Mesh)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Color3)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace lights{


class HXCPP_CLASS_ATTRIBUTES  Light_obj : public ::com::gamestudiohx::babylonhx::Node_obj{
	public:
		typedef ::com::gamestudiohx::babylonhx::Node_obj super;
		typedef Light_obj OBJ_;
		Light_obj();
		Void __construct(::String name,::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Light_obj > __new(::String name,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Light_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Light"); }

		Float intensity;
		::com::gamestudiohx::babylonhx::tools::math::Color3 diffuse;
		::com::gamestudiohx::babylonhx::tools::math::Color3 specular;
		Array< ::Dynamic > animations;
		Array< ::Dynamic > excludedMeshes;
		::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator _shadowGenerator;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _parentedWorldMatrix;
		bool _childrendFlag;
		virtual ::com::gamestudiohx::babylonhx::Scene getScene( );
		Dynamic getScene_dyn();

		virtual ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator getShadowGenerator( );
		Dynamic getShadowGenerator_dyn();

		virtual Void transferToEffect( ::com::gamestudiohx::babylonhx::materials::Effect effect,::String positionUniformName,::String directionUniformName);
		Dynamic transferToEffect_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix _getWorldMatrix( );
		Dynamic _getWorldMatrix_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix getWorldMatrix( );

		virtual Void dispose( );
		Dynamic dispose_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace lights

#endif /* INCLUDED_com_gamestudiohx_babylonhx_lights_Light */ 
