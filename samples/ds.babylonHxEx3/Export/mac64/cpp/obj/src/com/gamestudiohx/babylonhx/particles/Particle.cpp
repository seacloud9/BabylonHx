#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_particles_Particle
#include <com/gamestudiohx/babylonhx/particles/Particle.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color4
#include <com/gamestudiohx/babylonhx/tools/math/Color4.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace particles{

Void Particle_obj::__construct()
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.particles.Particle","new",0xd9df4cab,"com.gamestudiohx.babylonhx.particles.Particle.new","com/gamestudiohx/babylonhx/particles/Particle.hx",13,0x8a88a1c3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	this->angularSpeed = (int)0;
	HX_STACK_LINE(18)
	this->angle = (int)0;
	HX_STACK_LINE(17)
	this->size = (int)0;
	HX_STACK_LINE(16)
	this->age = (int)0;
	HX_STACK_LINE(15)
	this->lifeTime = 1.0;
	HX_STACK_LINE(27)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(27)
	this->position = _g;
	HX_STACK_LINE(28)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(28)
	this->direction = _g1;
	HX_STACK_LINE(29)
	::com::gamestudiohx::babylonhx::tools::math::Color4 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(29)
	this->color = _g2;
	HX_STACK_LINE(30)
	::com::gamestudiohx::babylonhx::tools::math::Color4 _g3 = ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(30)
	this->colorStep = _g3;
}
;
	return null();
}

//Particle_obj::~Particle_obj() { }

Dynamic Particle_obj::__CreateEmpty() { return  new Particle_obj; }
hx::ObjectPtr< Particle_obj > Particle_obj::__new()
{  hx::ObjectPtr< Particle_obj > result = new Particle_obj();
	result->__construct();
	return result;}

Dynamic Particle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Particle_obj > result = new Particle_obj();
	result->__construct();
	return result;}


Particle_obj::Particle_obj()
{
}

void Particle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Particle);
	HX_MARK_MEMBER_NAME(lifeTime,"lifeTime");
	HX_MARK_MEMBER_NAME(age,"age");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(angularSpeed,"angularSpeed");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(colorStep,"colorStep");
	HX_MARK_END_CLASS();
}

void Particle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lifeTime,"lifeTime");
	HX_VISIT_MEMBER_NAME(age,"age");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(angularSpeed,"angularSpeed");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(colorStep,"colorStep");
}

Dynamic Particle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"age") ) { return age; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifeTime") ) { return lifeTime; }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return direction; }
		if (HX_FIELD_EQ(inName,"colorStep") ) { return colorStep; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angularSpeed") ) { return angularSpeed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Particle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"age") ) { age=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color4 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifeTime") ) { lifeTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorStep") ) { colorStep=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color4 >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angularSpeed") ) { angularSpeed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Particle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lifeTime"));
	outFields->push(HX_CSTRING("age"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("angularSpeed"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("direction"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("colorStep"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Particle_obj,lifeTime),HX_CSTRING("lifeTime")},
	{hx::fsFloat,(int)offsetof(Particle_obj,age),HX_CSTRING("age")},
	{hx::fsFloat,(int)offsetof(Particle_obj,size),HX_CSTRING("size")},
	{hx::fsFloat,(int)offsetof(Particle_obj,angle),HX_CSTRING("angle")},
	{hx::fsFloat,(int)offsetof(Particle_obj,angularSpeed),HX_CSTRING("angularSpeed")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Particle_obj,position),HX_CSTRING("position")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Particle_obj,direction),HX_CSTRING("direction")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color4*/ ,(int)offsetof(Particle_obj,color),HX_CSTRING("color")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color4*/ ,(int)offsetof(Particle_obj,colorStep),HX_CSTRING("colorStep")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("lifeTime"),
	HX_CSTRING("age"),
	HX_CSTRING("size"),
	HX_CSTRING("angle"),
	HX_CSTRING("angularSpeed"),
	HX_CSTRING("position"),
	HX_CSTRING("direction"),
	HX_CSTRING("color"),
	HX_CSTRING("colorStep"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Particle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Particle_obj::__mClass,"__mClass");
};

#endif

Class Particle_obj::__mClass;

void Particle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.particles.Particle"), hx::TCanCast< Particle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Particle_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace particles
