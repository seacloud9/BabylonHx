#ifndef INCLUDED_com_gamestudiohx_babylonhx_particles_Particle
#define INCLUDED_com_gamestudiohx_babylonhx_particles_Particle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,particles,Particle)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Color4)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace particles{


class HXCPP_CLASS_ATTRIBUTES  Particle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Particle_obj OBJ_;
		Particle_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Particle_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Particle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Particle"); }

		Float lifeTime;
		Float age;
		Float size;
		Float angle;
		Float angularSpeed;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 position;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 direction;
		::com::gamestudiohx::babylonhx::tools::math::Color4 color;
		::com::gamestudiohx::babylonhx::tools::math::Color4 colorStep;
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace particles

#endif /* INCLUDED_com_gamestudiohx_babylonhx_particles_Particle */ 
