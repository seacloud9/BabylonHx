#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_collisions_Collider
#include <com/gamestudiohx/babylonhx/collisions/Collider.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingBox
#include <com/gamestudiohx/babylonhx/culling/BoundingBox.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingInfo
#include <com/gamestudiohx/babylonhx/culling/BoundingInfo.h>
#endif
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

Void BoundingInfo_obj::__construct(::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingInfo","new",0x24c520f4,"com.gamestudiohx.babylonhx.culling.BoundingInfo.new","com/gamestudiohx/babylonhx/culling/BoundingInfo.hx",25,0xd88062da)
HX_STACK_THIS(this)
HX_STACK_ARG(minimum,"minimum")
HX_STACK_ARG(maximum,"maximum")
{
	HX_STACK_LINE(26)
	this->minimum = minimum;
	HX_STACK_LINE(27)
	this->maximum = maximum;
	HX_STACK_LINE(28)
	::com::gamestudiohx::babylonhx::culling::BoundingBox _g = ::com::gamestudiohx::babylonhx::culling::BoundingBox_obj::__new(minimum,maximum);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(28)
	this->boundingBox = _g;
	HX_STACK_LINE(29)
	::com::gamestudiohx::babylonhx::culling::BoundingSphere _g1 = ::com::gamestudiohx::babylonhx::culling::BoundingSphere_obj::__new(minimum,maximum);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(29)
	this->boundingSphere = _g1;
}
;
	return null();
}

//BoundingInfo_obj::~BoundingInfo_obj() { }

Dynamic BoundingInfo_obj::__CreateEmpty() { return  new BoundingInfo_obj; }
hx::ObjectPtr< BoundingInfo_obj > BoundingInfo_obj::__new(::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum)
{  hx::ObjectPtr< BoundingInfo_obj > result = new BoundingInfo_obj();
	result->__construct(minimum,maximum);
	return result;}

Dynamic BoundingInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BoundingInfo_obj > result = new BoundingInfo_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void BoundingInfo_obj::_update( ::com::gamestudiohx::babylonhx::tools::math::Matrix world,Float scale){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingInfo","_update",0xec23c23c,"com.gamestudiohx.babylonhx.culling.BoundingInfo._update","com/gamestudiohx/babylonhx/culling/BoundingInfo.hx",32,0xd88062da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(world,"world")
		HX_STACK_ARG(scale,"scale")
		HX_STACK_LINE(33)
		this->boundingBox->_update(world);
		HX_STACK_LINE(34)
		this->boundingSphere->_update(world,scale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BoundingInfo_obj,_update,(void))

bool BoundingInfo_obj::extentsOverlap( Float min0,Float max0,Float min1,Float max1){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingInfo","extentsOverlap",0x14a48b2a,"com.gamestudiohx.babylonhx.culling.BoundingInfo.extentsOverlap","com/gamestudiohx/babylonhx/culling/BoundingInfo.hx",38,0xd88062da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(min0,"min0")
	HX_STACK_ARG(max0,"max0")
	HX_STACK_ARG(min1,"min1")
	HX_STACK_ARG(max1,"max1")
	HX_STACK_LINE(38)
	return !(((bool((min0 > max1)) || bool((min1 > max0)))));
}


HX_DEFINE_DYNAMIC_FUNC4(BoundingInfo_obj,extentsOverlap,return )

Dynamic BoundingInfo_obj::computeBoxExtents( ::com::gamestudiohx::babylonhx::tools::math::Vector3 axis,::com::gamestudiohx::babylonhx::culling::BoundingBox box){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingInfo","computeBoxExtents",0xa3637e69,"com.gamestudiohx.babylonhx.culling.BoundingInfo.computeBoxExtents","com/gamestudiohx/babylonhx/culling/BoundingInfo.hx",41,0xd88062da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(axis,"axis")
	HX_STACK_ARG(box,"box")
	HX_STACK_LINE(42)
	Float p;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = box->center;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(42)
		p = (((left->x * axis->x) + (left->y * axis->y)) + (left->z * axis->z));
	}
	struct _Function_1_1{
		inline static Float Block( ::com::gamestudiohx::babylonhx::culling::BoundingBox &box,::com::gamestudiohx::babylonhx::tools::math::Vector3 &axis){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/culling/BoundingInfo.hx",44,0xd88062da)
			{
				HX_STACK_LINE(44)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 left = box->directions->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(left,"left");
				HX_STACK_LINE(44)
				return (((left->x * axis->x) + (left->y * axis->y)) + (left->z * axis->z));
			}
			return null();
		}
	};
	HX_STACK_LINE(44)
	Float _g = ::Math_obj::abs(_Function_1_1::Block(box,axis));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(44)
	Float r0 = (_g * box->_extends->x);		HX_STACK_VAR(r0,"r0");
	struct _Function_1_2{
		inline static Float Block( ::com::gamestudiohx::babylonhx::culling::BoundingBox &box,::com::gamestudiohx::babylonhx::tools::math::Vector3 &axis){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/culling/BoundingInfo.hx",45,0xd88062da)
			{
				HX_STACK_LINE(45)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 left = box->directions->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(left,"left");
				HX_STACK_LINE(45)
				return (((left->x * axis->x) + (left->y * axis->y)) + (left->z * axis->z));
			}
			return null();
		}
	};
	HX_STACK_LINE(45)
	Float _g1 = ::Math_obj::abs(_Function_1_2::Block(box,axis));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(45)
	Float r1 = (_g1 * box->_extends->y);		HX_STACK_VAR(r1,"r1");
	struct _Function_1_3{
		inline static Float Block( ::com::gamestudiohx::babylonhx::culling::BoundingBox &box,::com::gamestudiohx::babylonhx::tools::math::Vector3 &axis){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/culling/BoundingInfo.hx",46,0xd88062da)
			{
				HX_STACK_LINE(46)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 left = box->directions->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(left,"left");
				HX_STACK_LINE(46)
				return (((left->x * axis->x) + (left->y * axis->y)) + (left->z * axis->z));
			}
			return null();
		}
	};
	HX_STACK_LINE(46)
	Float _g2 = ::Math_obj::abs(_Function_1_3::Block(box,axis));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(46)
	Float r2 = (_g2 * box->_extends->z);		HX_STACK_VAR(r2,"r2");
	HX_STACK_LINE(48)
	Float r = ((r0 + r1) + r2);		HX_STACK_VAR(r,"r");
	struct _Function_1_4{
		inline static Dynamic Block( Float &r,Float &p){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/culling/BoundingInfo.hx",49,0xd88062da)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("min") , (p - r),false);
				__result->Add(HX_CSTRING("max") , (p + r),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(49)
	return _Function_1_4::Block(r,p);
}


HX_DEFINE_DYNAMIC_FUNC2(BoundingInfo_obj,computeBoxExtents,return )

bool BoundingInfo_obj::axisOverlap( ::com::gamestudiohx::babylonhx::tools::math::Vector3 axis,::com::gamestudiohx::babylonhx::culling::BoundingBox box0,::com::gamestudiohx::babylonhx::culling::BoundingBox box1){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingInfo","axisOverlap",0x860f997a,"com.gamestudiohx.babylonhx.culling.BoundingInfo.axisOverlap","com/gamestudiohx/babylonhx/culling/BoundingInfo.hx",55,0xd88062da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(axis,"axis")
	HX_STACK_ARG(box0,"box0")
	HX_STACK_ARG(box1,"box1")
	HX_STACK_LINE(56)
	Dynamic result0 = this->computeBoxExtents(axis,box0);		HX_STACK_VAR(result0,"result0");
	HX_STACK_LINE(57)
	Dynamic result1 = this->computeBoxExtents(axis,box1);		HX_STACK_VAR(result1,"result1");
	HX_STACK_LINE(59)
	return this->extentsOverlap(result0->__Field(HX_CSTRING("min"),true),result0->__Field(HX_CSTRING("max"),true),result1->__Field(HX_CSTRING("min"),true),result1->__Field(HX_CSTRING("max"),true));
}


HX_DEFINE_DYNAMIC_FUNC3(BoundingInfo_obj,axisOverlap,return )

bool BoundingInfo_obj::isInFrustrum( Array< ::Dynamic > frustumPlanes){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingInfo","isInFrustrum",0x7e8b197b,"com.gamestudiohx.babylonhx.culling.BoundingInfo.isInFrustrum","com/gamestudiohx/babylonhx/culling/BoundingInfo.hx",62,0xd88062da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frustumPlanes,"frustumPlanes")
	HX_STACK_LINE(63)
	if ((!(this->boundingSphere->isInFrustrum(frustumPlanes)))){
		HX_STACK_LINE(64)
		return false;
	}
	HX_STACK_LINE(66)
	return this->boundingBox->isInFrustrum(frustumPlanes);
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingInfo_obj,isInFrustrum,return )

bool BoundingInfo_obj::_checkCollision( ::com::gamestudiohx::babylonhx::collisions::Collider collider){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingInfo","_checkCollision",0x8fc3bdbd,"com.gamestudiohx.babylonhx.culling.BoundingInfo._checkCollision","com/gamestudiohx/babylonhx/culling/BoundingInfo.hx",70,0xd88062da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collider,"collider")
	HX_STACK_LINE(70)
	return collider->_canDoCollision(this->boundingSphere->centerWorld,this->boundingSphere->radiusWorld,this->boundingBox->minimumWorld,this->boundingBox->maximumWorld);
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingInfo_obj,_checkCollision,return )

bool BoundingInfo_obj::intersectsPoint( ::com::gamestudiohx::babylonhx::tools::math::Vector3 point){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingInfo","intersectsPoint",0x9aa0f390,"com.gamestudiohx.babylonhx.culling.BoundingInfo.intersectsPoint","com/gamestudiohx/babylonhx/culling/BoundingInfo.hx",73,0xd88062da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(74)
	if (((this->boundingSphere->centerWorld == null()))){
		HX_STACK_LINE(75)
		return false;
	}
	HX_STACK_LINE(78)
	if ((!(this->boundingSphere->intersectsPoint(point)))){
		HX_STACK_LINE(79)
		return false;
	}
	HX_STACK_LINE(82)
	if ((!(this->boundingBox->intersectsPoint(point)))){
		HX_STACK_LINE(83)
		return false;
	}
	HX_STACK_LINE(86)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingInfo_obj,intersectsPoint,return )

bool BoundingInfo_obj::isInFrustum( Array< ::Dynamic > frustumPlanes){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingInfo","isInFrustum",0x76cf4547,"com.gamestudiohx.babylonhx.culling.BoundingInfo.isInFrustum","com/gamestudiohx/babylonhx/culling/BoundingInfo.hx",89,0xd88062da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frustumPlanes,"frustumPlanes")
	HX_STACK_LINE(90)
	if ((!(this->boundingSphere->isInFrustrum(frustumPlanes)))){
		HX_STACK_LINE(91)
		return false;
	}
	HX_STACK_LINE(95)
	return this->boundingBox->isInFrustrum(frustumPlanes);
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingInfo_obj,isInFrustum,return )

bool BoundingInfo_obj::intersects( ::com::gamestudiohx::babylonhx::culling::BoundingInfo boundingInfo,bool precise){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingInfo","intersects",0x746e6ca0,"com.gamestudiohx.babylonhx.culling.BoundingInfo.intersects","com/gamestudiohx/babylonhx/culling/BoundingInfo.hx",98,0xd88062da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(boundingInfo,"boundingInfo")
	HX_STACK_ARG(precise,"precise")
	HX_STACK_LINE(99)
	if (((bool((this->boundingSphere->centerWorld == null())) || bool((boundingInfo->boundingSphere->centerWorld == null()))))){
		HX_STACK_LINE(100)
		return false;
	}
	HX_STACK_LINE(103)
	if ((!(::com::gamestudiohx::babylonhx::culling::BoundingSphere_obj::intersects(this->boundingSphere,boundingInfo->boundingSphere)))){
		HX_STACK_LINE(104)
		return false;
	}
	HX_STACK_LINE(107)
	if ((!(::com::gamestudiohx::babylonhx::culling::BoundingBox_obj::intersects(this->boundingBox,boundingInfo->boundingBox)))){
		HX_STACK_LINE(108)
		return false;
	}
	HX_STACK_LINE(111)
	if ((!(precise))){
		HX_STACK_LINE(112)
		return true;
	}
	HX_STACK_LINE(115)
	::com::gamestudiohx::babylonhx::culling::BoundingBox box0 = this->boundingBox;		HX_STACK_VAR(box0,"box0");
	HX_STACK_LINE(116)
	::com::gamestudiohx::babylonhx::culling::BoundingBox box1 = boundingInfo->boundingBox;		HX_STACK_VAR(box1,"box1");
	HX_STACK_LINE(118)
	if ((!(this->axisOverlap(box0->directions->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(),box0,box1)))){
		HX_STACK_LINE(118)
		return false;
	}
	HX_STACK_LINE(119)
	if ((!(this->axisOverlap(box0->directions->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(),box0,box1)))){
		HX_STACK_LINE(119)
		return false;
	}
	HX_STACK_LINE(120)
	if ((!(this->axisOverlap(box0->directions->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(),box0,box1)))){
		HX_STACK_LINE(120)
		return false;
	}
	HX_STACK_LINE(121)
	if ((!(this->axisOverlap(box1->directions->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(),box0,box1)))){
		HX_STACK_LINE(121)
		return false;
	}
	HX_STACK_LINE(122)
	if ((!(this->axisOverlap(box1->directions->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(),box0,box1)))){
		HX_STACK_LINE(122)
		return false;
	}
	HX_STACK_LINE(123)
	if ((!(this->axisOverlap(box1->directions->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(),box0,box1)))){
		HX_STACK_LINE(123)
		return false;
	}
	HX_STACK_LINE(124)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(124)
	{
		HX_STACK_LINE(124)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = box0->directions->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(124)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 right = box1->directions->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(124)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			result->x = ((left->y * right->z) - (left->z * right->y));
			HX_STACK_LINE(124)
			result->y = ((left->z * right->x) - (left->x * right->z));
			HX_STACK_LINE(124)
			result->z = ((left->x * right->y) - (left->y * right->x));
		}
		HX_STACK_LINE(124)
		_g = result;
	}
	HX_STACK_LINE(124)
	if ((!(this->axisOverlap(_g,box0,box1)))){
		HX_STACK_LINE(124)
		return false;
	}
	HX_STACK_LINE(125)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(125)
	{
		HX_STACK_LINE(125)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = box0->directions->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(125)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 right = box1->directions->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(125)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			result->x = ((left->y * right->z) - (left->z * right->y));
			HX_STACK_LINE(125)
			result->y = ((left->z * right->x) - (left->x * right->z));
			HX_STACK_LINE(125)
			result->z = ((left->x * right->y) - (left->y * right->x));
		}
		HX_STACK_LINE(125)
		_g1 = result;
	}
	HX_STACK_LINE(125)
	if ((!(this->axisOverlap(_g1,box0,box1)))){
		HX_STACK_LINE(125)
		return false;
	}
	HX_STACK_LINE(126)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(126)
	{
		HX_STACK_LINE(126)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = box0->directions->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(126)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 right = box1->directions->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(126)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			result->x = ((left->y * right->z) - (left->z * right->y));
			HX_STACK_LINE(126)
			result->y = ((left->z * right->x) - (left->x * right->z));
			HX_STACK_LINE(126)
			result->z = ((left->x * right->y) - (left->y * right->x));
		}
		HX_STACK_LINE(126)
		_g2 = result;
	}
	HX_STACK_LINE(126)
	if ((!(this->axisOverlap(_g2,box0,box1)))){
		HX_STACK_LINE(126)
		return false;
	}
	HX_STACK_LINE(127)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(127)
	{
		HX_STACK_LINE(127)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = box0->directions->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(127)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 right = box1->directions->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(127)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			result->x = ((left->y * right->z) - (left->z * right->y));
			HX_STACK_LINE(127)
			result->y = ((left->z * right->x) - (left->x * right->z));
			HX_STACK_LINE(127)
			result->z = ((left->x * right->y) - (left->y * right->x));
		}
		HX_STACK_LINE(127)
		_g3 = result;
	}
	HX_STACK_LINE(127)
	if ((!(this->axisOverlap(_g3,box0,box1)))){
		HX_STACK_LINE(127)
		return false;
	}
	HX_STACK_LINE(128)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(128)
	{
		HX_STACK_LINE(128)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = box0->directions->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(128)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 right = box1->directions->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(128)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			result->x = ((left->y * right->z) - (left->z * right->y));
			HX_STACK_LINE(128)
			result->y = ((left->z * right->x) - (left->x * right->z));
			HX_STACK_LINE(128)
			result->z = ((left->x * right->y) - (left->y * right->x));
		}
		HX_STACK_LINE(128)
		_g4 = result;
	}
	HX_STACK_LINE(128)
	if ((!(this->axisOverlap(_g4,box0,box1)))){
		HX_STACK_LINE(128)
		return false;
	}
	HX_STACK_LINE(129)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(129)
	{
		HX_STACK_LINE(129)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = box0->directions->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(129)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 right = box1->directions->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(129)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			result->x = ((left->y * right->z) - (left->z * right->y));
			HX_STACK_LINE(129)
			result->y = ((left->z * right->x) - (left->x * right->z));
			HX_STACK_LINE(129)
			result->z = ((left->x * right->y) - (left->y * right->x));
		}
		HX_STACK_LINE(129)
		_g5 = result;
	}
	HX_STACK_LINE(129)
	if ((!(this->axisOverlap(_g5,box0,box1)))){
		HX_STACK_LINE(129)
		return false;
	}
	HX_STACK_LINE(130)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(130)
	{
		HX_STACK_LINE(130)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = box0->directions->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(130)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 right = box1->directions->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(130)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			result->x = ((left->y * right->z) - (left->z * right->y));
			HX_STACK_LINE(130)
			result->y = ((left->z * right->x) - (left->x * right->z));
			HX_STACK_LINE(130)
			result->z = ((left->x * right->y) - (left->y * right->x));
		}
		HX_STACK_LINE(130)
		_g6 = result;
	}
	HX_STACK_LINE(130)
	if ((!(this->axisOverlap(_g6,box0,box1)))){
		HX_STACK_LINE(130)
		return false;
	}
	HX_STACK_LINE(131)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(131)
	{
		HX_STACK_LINE(131)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = box0->directions->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(131)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 right = box1->directions->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(131)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			result->x = ((left->y * right->z) - (left->z * right->y));
			HX_STACK_LINE(131)
			result->y = ((left->z * right->x) - (left->x * right->z));
			HX_STACK_LINE(131)
			result->z = ((left->x * right->y) - (left->y * right->x));
		}
		HX_STACK_LINE(131)
		_g7 = result;
	}
	HX_STACK_LINE(131)
	if ((!(this->axisOverlap(_g7,box0,box1)))){
		HX_STACK_LINE(131)
		return false;
	}
	HX_STACK_LINE(132)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g8;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(132)
	{
		HX_STACK_LINE(132)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = box0->directions->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(132)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 right = box1->directions->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(132)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			result->x = ((left->y * right->z) - (left->z * right->y));
			HX_STACK_LINE(132)
			result->y = ((left->z * right->x) - (left->x * right->z));
			HX_STACK_LINE(132)
			result->z = ((left->x * right->y) - (left->y * right->x));
		}
		HX_STACK_LINE(132)
		_g8 = result;
	}
	HX_STACK_LINE(132)
	if ((!(this->axisOverlap(_g8,box0,box1)))){
		HX_STACK_LINE(132)
		return false;
	}
	HX_STACK_LINE(134)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(BoundingInfo_obj,intersects,return )


BoundingInfo_obj::BoundingInfo_obj()
{
}

void BoundingInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BoundingInfo);
	HX_MARK_MEMBER_NAME(minimum,"minimum");
	HX_MARK_MEMBER_NAME(maximum,"maximum");
	HX_MARK_MEMBER_NAME(boundingBox,"boundingBox");
	HX_MARK_MEMBER_NAME(boundingSphere,"boundingSphere");
	HX_MARK_END_CLASS();
}

void BoundingInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(minimum,"minimum");
	HX_VISIT_MEMBER_NAME(maximum,"maximum");
	HX_VISIT_MEMBER_NAME(boundingBox,"boundingBox");
	HX_VISIT_MEMBER_NAME(boundingSphere,"boundingSphere");
}

Dynamic BoundingInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"minimum") ) { return minimum; }
		if (HX_FIELD_EQ(inName,"maximum") ) { return maximum; }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return intersects_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"boundingBox") ) { return boundingBox; }
		if (HX_FIELD_EQ(inName,"axisOverlap") ) { return axisOverlap_dyn(); }
		if (HX_FIELD_EQ(inName,"isInFrustum") ) { return isInFrustum_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isInFrustrum") ) { return isInFrustrum_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"boundingSphere") ) { return boundingSphere; }
		if (HX_FIELD_EQ(inName,"extentsOverlap") ) { return extentsOverlap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_checkCollision") ) { return _checkCollision_dyn(); }
		if (HX_FIELD_EQ(inName,"intersectsPoint") ) { return intersectsPoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"computeBoxExtents") ) { return computeBoxExtents_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BoundingInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"minimum") ) { minimum=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maximum") ) { maximum=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"boundingBox") ) { boundingBox=inValue.Cast< ::com::gamestudiohx::babylonhx::culling::BoundingBox >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"boundingSphere") ) { boundingSphere=inValue.Cast< ::com::gamestudiohx::babylonhx::culling::BoundingSphere >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoundingInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("minimum"));
	outFields->push(HX_CSTRING("maximum"));
	outFields->push(HX_CSTRING("boundingBox"));
	outFields->push(HX_CSTRING("boundingSphere"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(BoundingInfo_obj,minimum),HX_CSTRING("minimum")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(BoundingInfo_obj,maximum),HX_CSTRING("maximum")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::culling::BoundingBox*/ ,(int)offsetof(BoundingInfo_obj,boundingBox),HX_CSTRING("boundingBox")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::culling::BoundingSphere*/ ,(int)offsetof(BoundingInfo_obj,boundingSphere),HX_CSTRING("boundingSphere")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("minimum"),
	HX_CSTRING("maximum"),
	HX_CSTRING("boundingBox"),
	HX_CSTRING("boundingSphere"),
	HX_CSTRING("_update"),
	HX_CSTRING("extentsOverlap"),
	HX_CSTRING("computeBoxExtents"),
	HX_CSTRING("axisOverlap"),
	HX_CSTRING("isInFrustrum"),
	HX_CSTRING("_checkCollision"),
	HX_CSTRING("intersectsPoint"),
	HX_CSTRING("isInFrustum"),
	HX_CSTRING("intersects"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BoundingInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoundingInfo_obj::__mClass,"__mClass");
};

#endif

Class BoundingInfo_obj::__mClass;

void BoundingInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.culling.BoundingInfo"), hx::TCanCast< BoundingInfo_obj> ,sStaticFields,sMemberFields,
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

void BoundingInfo_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace culling
