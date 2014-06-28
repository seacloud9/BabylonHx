#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingSphere
#include <com/gamestudiohx/babylonhx/culling/BoundingSphere.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Plane
#include <com/gamestudiohx/babylonhx/tools/math/Plane.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace culling{

Void BoundingSphere_obj::__construct(::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingSphere","new",0x91a82013,"com.gamestudiohx.babylonhx.culling.BoundingSphere.new","com/gamestudiohx/babylonhx/culling/BoundingSphere.hx",25,0x6bfaa01b)
HX_STACK_THIS(this)
HX_STACK_ARG(minimum,"minimum")
HX_STACK_ARG(maximum,"maximum")
{
	HX_STACK_LINE(26)
	this->minimum = minimum;
	HX_STACK_LINE(27)
	this->maximum = maximum;
	struct _Function_1_1{
		inline static Float Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 &maximum){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/culling/BoundingSphere.hx",29,0x6bfaa01b)
			{
				HX_STACK_LINE(29)
				Float x = (minimum->x - maximum->x);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(29)
				Float y = (minimum->y - maximum->y);		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(29)
				Float z = (minimum->z - maximum->z);		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(29)
				return (((x * x) + (y * y)) + (z * z));
			}
			return null();
		}
	};
	HX_STACK_LINE(29)
	Float distance = ::Math_obj::sqrt(_Function_1_1::Block(minimum,maximum));		HX_STACK_VAR(distance,"distance");
	HX_STACK_LINE(31)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		Float x = (minimum->x + (((maximum->x - minimum->x)) * 0.5));		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(31)
		Float y = (minimum->y + (((maximum->y - minimum->y)) * 0.5));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(31)
		Float z = (minimum->z + (((maximum->z - minimum->z)) * 0.5));		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(31)
		_g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
	}
	HX_STACK_LINE(31)
	this->center = _g;
	HX_STACK_LINE(32)
	this->radius = (distance * 0.5);
	HX_STACK_LINE(34)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(34)
	this->centerWorld = _g1;
	HX_STACK_LINE(35)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(35)
		result->m[(int)0] = 1.0;
		HX_STACK_LINE(35)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(35)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(35)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(35)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(35)
		result->m[(int)5] = 1.0;
		HX_STACK_LINE(35)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(35)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(35)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(35)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(35)
		result->m[(int)10] = 1.0;
		HX_STACK_LINE(35)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(35)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(35)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(35)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(35)
		result->m[(int)15] = 1.0;
		HX_STACK_LINE(35)
		_g2 = result;
	}
	HX_STACK_LINE(35)
	this->_update(_g2,null());
}
;
	return null();
}

//BoundingSphere_obj::~BoundingSphere_obj() { }

Dynamic BoundingSphere_obj::__CreateEmpty() { return  new BoundingSphere_obj; }
hx::ObjectPtr< BoundingSphere_obj > BoundingSphere_obj::__new(::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum)
{  hx::ObjectPtr< BoundingSphere_obj > result = new BoundingSphere_obj();
	result->__construct(minimum,maximum);
	return result;}

Dynamic BoundingSphere_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BoundingSphere_obj > result = new BoundingSphere_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void BoundingSphere_obj::_update( ::com::gamestudiohx::babylonhx::tools::math::Matrix world,hx::Null< Float >  __o_scale){
Float scale = __o_scale.Default(1.0);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingSphere","_update",0x795e3cdb,"com.gamestudiohx.babylonhx.culling.BoundingSphere._update","com/gamestudiohx/babylonhx/culling/BoundingSphere.hx",38,0x6bfaa01b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(world,"world")
	HX_STACK_ARG(scale,"scale")
{
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->center;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(39)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->centerWorld;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(39)
			Float x = ((((vector->x * world->m->__get((int)0)) + (vector->y * world->m->__get((int)4))) + (vector->z * world->m->__get((int)8))) + world->m->__get((int)12));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(39)
			Float y = ((((vector->x * world->m->__get((int)1)) + (vector->y * world->m->__get((int)5))) + (vector->z * world->m->__get((int)9))) + world->m->__get((int)13));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(39)
			Float z = ((((vector->x * world->m->__get((int)2)) + (vector->y * world->m->__get((int)6))) + (vector->z * world->m->__get((int)10))) + world->m->__get((int)14));		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(39)
			Float w = ((((vector->x * world->m->__get((int)3)) + (vector->y * world->m->__get((int)7))) + (vector->z * world->m->__get((int)11))) + world->m->__get((int)15));		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(39)
			result->x = (Float(x) / Float(w));
			HX_STACK_LINE(39)
			result->y = (Float(y) / Float(w));
			HX_STACK_LINE(39)
			result->z = (Float(z) / Float(w));
		}
		HX_STACK_LINE(40)
		this->radiusWorld = (this->radius * scale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BoundingSphere_obj,_update,(void))

bool BoundingSphere_obj::isInFrustrum( Array< ::Dynamic > frustumPlanes){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingSphere","isInFrustrum",0xdbd4be7c,"com.gamestudiohx.babylonhx.culling.BoundingSphere.isInFrustrum","com/gamestudiohx/babylonhx/culling/BoundingSphere.hx",43,0x6bfaa01b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frustumPlanes,"frustumPlanes")
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		while((true)){
			HX_STACK_LINE(44)
			if ((!(((_g < (int)6))))){
				HX_STACK_LINE(44)
				break;
			}
			HX_STACK_LINE(44)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			struct _Function_3_1{
				inline static Float Block( int &i,hx::ObjectPtr< ::com::gamestudiohx::babylonhx::culling::BoundingSphere_obj > __this,Array< ::Dynamic > &frustumPlanes){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/culling/BoundingSphere.hx",45,0x6bfaa01b)
					{
						HX_STACK_LINE(45)
						::com::gamestudiohx::babylonhx::tools::math::Plane _this = frustumPlanes->__get(i).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(45)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 point = __this->centerWorld;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(45)
						return ((((_this->normal->x * point->x) + (_this->normal->y * point->y)) + (_this->normal->z * point->z)) + _this->d);
					}
					return null();
				}
			};
			HX_STACK_LINE(45)
			if (((_Function_3_1::Block(i,this,frustumPlanes) <= -(this->radiusWorld)))){
				HX_STACK_LINE(46)
				return false;
			}
		}
	}
	HX_STACK_LINE(49)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingSphere_obj,isInFrustrum,return )

bool BoundingSphere_obj::intersectsPoint( ::com::gamestudiohx::babylonhx::tools::math::Vector3 point){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingSphere","intersectsPoint",0x01d5a52f,"com.gamestudiohx.babylonhx.culling.BoundingSphere.intersectsPoint","com/gamestudiohx/babylonhx/culling/BoundingSphere.hx",52,0x6bfaa01b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(53)
	Float x = (this->centerWorld->x - point->x);		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(54)
	Float y = (this->centerWorld->y - point->y);		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(55)
	Float z = (this->centerWorld->z - point->z);		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(57)
	Float distance = ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)));		HX_STACK_VAR(distance,"distance");
	HX_STACK_LINE(59)
	if (((this->radiusWorld < distance))){
		HX_STACK_LINE(60)
		return false;
	}
	HX_STACK_LINE(62)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingSphere_obj,intersectsPoint,return )

bool BoundingSphere_obj::intersects( ::com::gamestudiohx::babylonhx::culling::BoundingSphere sphere0,::com::gamestudiohx::babylonhx::culling::BoundingSphere sphere1){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingSphere","intersects",0x74951f61,"com.gamestudiohx.babylonhx.culling.BoundingSphere.intersects","com/gamestudiohx/babylonhx/culling/BoundingSphere.hx",65,0x6bfaa01b)
	HX_STACK_ARG(sphere0,"sphere0")
	HX_STACK_ARG(sphere1,"sphere1")
	HX_STACK_LINE(66)
	Float x = (sphere0->centerWorld->x - sphere1->centerWorld->x);		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(67)
	Float y = (sphere0->centerWorld->y - sphere1->centerWorld->y);		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(68)
	Float z = (sphere0->centerWorld->z - sphere1->centerWorld->z);		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(70)
	Float distance = ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)));		HX_STACK_VAR(distance,"distance");
	HX_STACK_LINE(72)
	if ((((sphere0->radiusWorld + sphere1->radiusWorld) < distance))){
		HX_STACK_LINE(73)
		return false;
	}
	HX_STACK_LINE(75)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BoundingSphere_obj,intersects,return )


BoundingSphere_obj::BoundingSphere_obj()
{
}

void BoundingSphere_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BoundingSphere);
	HX_MARK_MEMBER_NAME(minimum,"minimum");
	HX_MARK_MEMBER_NAME(maximum,"maximum");
	HX_MARK_MEMBER_NAME(center,"center");
	HX_MARK_MEMBER_NAME(radius,"radius");
	HX_MARK_MEMBER_NAME(centerWorld,"centerWorld");
	HX_MARK_MEMBER_NAME(radiusWorld,"radiusWorld");
	HX_MARK_END_CLASS();
}

void BoundingSphere_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(minimum,"minimum");
	HX_VISIT_MEMBER_NAME(maximum,"maximum");
	HX_VISIT_MEMBER_NAME(center,"center");
	HX_VISIT_MEMBER_NAME(radius,"radius");
	HX_VISIT_MEMBER_NAME(centerWorld,"centerWorld");
	HX_VISIT_MEMBER_NAME(radiusWorld,"radiusWorld");
}

Dynamic BoundingSphere_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { return center; }
		if (HX_FIELD_EQ(inName,"radius") ) { return radius; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minimum") ) { return minimum; }
		if (HX_FIELD_EQ(inName,"maximum") ) { return maximum; }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return intersects_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"centerWorld") ) { return centerWorld; }
		if (HX_FIELD_EQ(inName,"radiusWorld") ) { return radiusWorld; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isInFrustrum") ) { return isInFrustrum_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"intersectsPoint") ) { return intersectsPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BoundingSphere_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { center=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"radius") ) { radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minimum") ) { minimum=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maximum") ) { maximum=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"centerWorld") ) { centerWorld=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"radiusWorld") ) { radiusWorld=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoundingSphere_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("minimum"));
	outFields->push(HX_CSTRING("maximum"));
	outFields->push(HX_CSTRING("center"));
	outFields->push(HX_CSTRING("radius"));
	outFields->push(HX_CSTRING("centerWorld"));
	outFields->push(HX_CSTRING("radiusWorld"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("intersects"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(BoundingSphere_obj,minimum),HX_CSTRING("minimum")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(BoundingSphere_obj,maximum),HX_CSTRING("maximum")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(BoundingSphere_obj,center),HX_CSTRING("center")},
	{hx::fsFloat,(int)offsetof(BoundingSphere_obj,radius),HX_CSTRING("radius")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(BoundingSphere_obj,centerWorld),HX_CSTRING("centerWorld")},
	{hx::fsFloat,(int)offsetof(BoundingSphere_obj,radiusWorld),HX_CSTRING("radiusWorld")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("minimum"),
	HX_CSTRING("maximum"),
	HX_CSTRING("center"),
	HX_CSTRING("radius"),
	HX_CSTRING("centerWorld"),
	HX_CSTRING("radiusWorld"),
	HX_CSTRING("_update"),
	HX_CSTRING("isInFrustrum"),
	HX_CSTRING("intersectsPoint"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::__mClass,"__mClass");
};

#endif

Class BoundingSphere_obj::__mClass;

void BoundingSphere_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.culling.BoundingSphere"), hx::TCanCast< BoundingSphere_obj> ,sStaticFields,sMemberFields,
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

void BoundingSphere_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace culling
