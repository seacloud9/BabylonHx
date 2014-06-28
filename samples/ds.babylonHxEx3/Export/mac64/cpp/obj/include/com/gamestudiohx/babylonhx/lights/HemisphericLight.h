#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_HemisphericLight
#define INCLUDED_com_gamestudiohx_babylonhx_lights_HemisphericLight

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/gamestudiohx/babylonhx/lights/Light.h>
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,lights,HemisphericLight)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,lights,Light)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,lights,shadows,ShadowGenerator)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Effect)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Color3)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace lights{


class HXCPP_CLASS_ATTRIBUTES  HemisphericLight_obj : public ::com::gamestudiohx::babylonhx::lights::Light_obj{
	public:
		typedef ::com::gamestudiohx::babylonhx::lights::Light_obj super;
		typedef HemisphericLight_obj OBJ_;
		HemisphericLight_obj();
		Void __construct(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 direction,::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< HemisphericLight_obj > __new(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 direction,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HemisphericLight_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("HemisphericLight"); }

		::com::gamestudiohx::babylonhx::tools::math::Vector3 direction;
		::com::gamestudiohx::babylonhx::tools::math::Color3 groundColor;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _worldMatrix;
		virtual ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator getShadowGenerator( );

		virtual Void transferToEffect( ::com::gamestudiohx::babylonhx::materials::Effect effect,::String directionUniformName,::String groundColorUniformName);

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix _getWorldMatrix( );

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace lights

#endif /* INCLUDED_com_gamestudiohx_babylonhx_lights_HemisphericLight */ 