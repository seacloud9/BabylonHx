#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_Node
#include <com/gamestudiohx/babylonhx/Node.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_collisions_Collider
#include <com/gamestudiohx/babylonhx/collisions/Collider.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_SubMesh
#include <com/gamestudiohx/babylonhx/mesh/SubMesh.h>
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
namespace collisions{

Void Collider_obj::__construct()
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.collisions.Collider","new",0x9e81c621,"com.gamestudiohx.babylonhx.collisions.Collider.new","com/gamestudiohx/babylonhx/collisions/Collider.hx",49,0xf5c1222f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(50)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)1,(int)1,(int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(50)
	this->radius = _g;
	HX_STACK_LINE(51)
	this->retry = (int)0;
	HX_STACK_LINE(53)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(53)
	this->basePoint = _g1;
	HX_STACK_LINE(54)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(54)
	this->velocity = _g2;
	HX_STACK_LINE(56)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(56)
	this->basePointWorld = _g3;
	HX_STACK_LINE(57)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(57)
	this->velocityWorld = _g4;
	HX_STACK_LINE(58)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g5 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(58)
	this->normalizedVelocity = _g5;
	HX_STACK_LINE(61)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g6 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(61)
	this->_collisionPoint = _g6;
	HX_STACK_LINE(62)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g7 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(62)
	this->_planeIntersectionPoint = _g7;
	HX_STACK_LINE(63)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g8 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(63)
	this->_tempVector = _g8;
	HX_STACK_LINE(64)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g9 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(64)
	this->_tempVector2 = _g9;
	HX_STACK_LINE(65)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g10 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(65)
	this->_tempVector3 = _g10;
	HX_STACK_LINE(66)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g11 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(66)
	this->_tempVector4 = _g11;
	HX_STACK_LINE(67)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g12 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(67)
	this->_edge = _g12;
	HX_STACK_LINE(68)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g13 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(68)
	this->_baseToVertex = _g13;
	HX_STACK_LINE(69)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g14 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(69)
	this->_destinationPoint = _g14;
	HX_STACK_LINE(70)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g15 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(70)
	this->_slidePlaneNormal = _g15;
	HX_STACK_LINE(71)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g16 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(71)
	this->_displacementVector = _g16;
}
;
	return null();
}

//Collider_obj::~Collider_obj() { }

Dynamic Collider_obj::__CreateEmpty() { return  new Collider_obj; }
hx::ObjectPtr< Collider_obj > Collider_obj::__new()
{  hx::ObjectPtr< Collider_obj > result = new Collider_obj();
	result->__construct();
	return result;}

Dynamic Collider_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Collider_obj > result = new Collider_obj();
	result->__construct();
	return result;}

Void Collider_obj::_initialize( ::com::gamestudiohx::babylonhx::tools::math::Vector3 source,::com::gamestudiohx::babylonhx::tools::math::Vector3 dir,Float e){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.collisions.Collider","_initialize",0xe3f01d30,"com.gamestudiohx.babylonhx.collisions.Collider._initialize","com/gamestudiohx/babylonhx/collisions/Collider.hx",74,0xf5c1222f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(dir,"dir")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(75)
		this->velocity = dir;
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->normalizedVelocity;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				result->x = dir->x;
				HX_STACK_LINE(76)
				result->y = dir->y;
				HX_STACK_LINE(76)
				result->z = dir->z;
			}
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				Float len = ::Math_obj::sqrt((((result->x * result->x) + (result->y * result->y)) + (result->z * result->z)));		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(76)
				if (((len != (int)0))){
					HX_STACK_LINE(76)
					Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
					HX_STACK_LINE(76)
					hx::MultEq(result->x,num);
					HX_STACK_LINE(76)
					hx::MultEq(result->y,num);
					HX_STACK_LINE(76)
					hx::MultEq(result->z,num);
				}
			}
		}
		HX_STACK_LINE(77)
		this->basePoint = source;
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->radius;		HX_STACK_VAR(otherVector,"otherVector");
			HX_STACK_LINE(79)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->basePointWorld;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(79)
			result->x = (source->x * otherVector->x);
			HX_STACK_LINE(79)
			result->y = (source->y * otherVector->y);
			HX_STACK_LINE(79)
			result->z = (source->z * otherVector->z);
		}
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->radius;		HX_STACK_VAR(otherVector,"otherVector");
			HX_STACK_LINE(80)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->velocityWorld;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(80)
			result->x = (dir->x * otherVector->x);
			HX_STACK_LINE(80)
			result->y = (dir->y * otherVector->y);
			HX_STACK_LINE(80)
			result->z = (dir->z * otherVector->z);
		}
		HX_STACK_LINE(82)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->velocityWorld;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(82)
			_g = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));
		}
		HX_STACK_LINE(82)
		this->velocityWorldLength = _g;
		HX_STACK_LINE(84)
		this->epsilon = e;
		HX_STACK_LINE(85)
		this->collisionFound = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Collider_obj,_initialize,(void))

bool Collider_obj::_checkPointInTriangle( ::com::gamestudiohx::babylonhx::tools::math::Vector3 point,::com::gamestudiohx::babylonhx::tools::math::Vector3 pa,::com::gamestudiohx::babylonhx::tools::math::Vector3 pb,::com::gamestudiohx::babylonhx::tools::math::Vector3 pc,::com::gamestudiohx::babylonhx::tools::math::Vector3 n){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.collisions.Collider","_checkPointInTriangle",0x55901435,"com.gamestudiohx.babylonhx.collisions.Collider._checkPointInTriangle","com/gamestudiohx/babylonhx/collisions/Collider.hx",88,0xf5c1222f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(pa,"pa")
	HX_STACK_ARG(pb,"pb")
	HX_STACK_ARG(pc,"pc")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(89)
	{
		HX_STACK_LINE(89)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_tempVector;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(89)
		result->x = (pa->x - point->x);
		HX_STACK_LINE(89)
		result->y = (pa->y - point->y);
		HX_STACK_LINE(89)
		result->z = (pa->z - point->z);
	}
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_tempVector2;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(90)
		result->x = (pb->x - point->x);
		HX_STACK_LINE(90)
		result->y = (pb->y - point->y);
		HX_STACK_LINE(90)
		result->z = (pb->z - point->z);
	}
	HX_STACK_LINE(92)
	{
		HX_STACK_LINE(92)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = this->_tempVector;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(92)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 right = this->_tempVector2;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(92)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_tempVector4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(92)
		result->x = ((left->y * right->z) - (left->z * right->y));
		HX_STACK_LINE(92)
		result->y = ((left->z * right->x) - (left->x * right->z));
		HX_STACK_LINE(92)
		result->z = ((left->x * right->y) - (left->y * right->x));
	}
	HX_STACK_LINE(93)
	Float d;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = this->_tempVector4;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(93)
		d = (((left->x * n->x) + (left->y * n->y)) + (left->z * n->z));
	}
	HX_STACK_LINE(94)
	if (((d < (int)0))){
		HX_STACK_LINE(95)
		return false;
	}
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_tempVector3;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(97)
		result->x = (pc->x - point->x);
		HX_STACK_LINE(97)
		result->y = (pc->y - point->y);
		HX_STACK_LINE(97)
		result->z = (pc->z - point->z);
	}
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = this->_tempVector2;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(98)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 right = this->_tempVector3;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(98)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_tempVector4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(98)
		result->x = ((left->y * right->z) - (left->z * right->y));
		HX_STACK_LINE(98)
		result->y = ((left->z * right->x) - (left->x * right->z));
		HX_STACK_LINE(98)
		result->z = ((left->x * right->y) - (left->y * right->x));
	}
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = this->_tempVector4;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(99)
		d = (((left->x * n->x) + (left->y * n->y)) + (left->z * n->z));
	}
	HX_STACK_LINE(100)
	if (((d < (int)0))){
		HX_STACK_LINE(101)
		return false;
	}
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = this->_tempVector3;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(103)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 right = this->_tempVector;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(103)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_tempVector4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(103)
		result->x = ((left->y * right->z) - (left->z * right->y));
		HX_STACK_LINE(103)
		result->y = ((left->z * right->x) - (left->x * right->z));
		HX_STACK_LINE(103)
		result->z = ((left->x * right->y) - (left->y * right->x));
	}
	HX_STACK_LINE(104)
	{
		HX_STACK_LINE(104)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = this->_tempVector4;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(104)
		d = (((left->x * n->x) + (left->y * n->y)) + (left->z * n->z));
	}
	HX_STACK_LINE(105)
	return (d >= (int)0);
}


HX_DEFINE_DYNAMIC_FUNC5(Collider_obj,_checkPointInTriangle,return )

bool Collider_obj::intersectBoxAASphere( ::com::gamestudiohx::babylonhx::tools::math::Vector3 boxMin,::com::gamestudiohx::babylonhx::tools::math::Vector3 boxMax,::com::gamestudiohx::babylonhx::tools::math::Vector3 sphereCenter,Float sphereRadius){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.collisions.Collider","intersectBoxAASphere",0xfea91b98,"com.gamestudiohx.babylonhx.collisions.Collider.intersectBoxAASphere","com/gamestudiohx/babylonhx/collisions/Collider.hx",108,0xf5c1222f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(boxMin,"boxMin")
	HX_STACK_ARG(boxMax,"boxMax")
	HX_STACK_ARG(sphereCenter,"sphereCenter")
	HX_STACK_ARG(sphereRadius,"sphereRadius")
	HX_STACK_LINE(109)
	if (((boxMin->x > (sphereCenter->x + sphereRadius)))){
		HX_STACK_LINE(110)
		return false;
	}
	HX_STACK_LINE(112)
	if ((((sphereCenter->x - sphereRadius) > boxMax->x))){
		HX_STACK_LINE(113)
		return false;
	}
	HX_STACK_LINE(115)
	if (((boxMin->y > (sphereCenter->y + sphereRadius)))){
		HX_STACK_LINE(116)
		return false;
	}
	HX_STACK_LINE(118)
	if ((((sphereCenter->y - sphereRadius) > boxMax->y))){
		HX_STACK_LINE(119)
		return false;
	}
	HX_STACK_LINE(121)
	if (((boxMin->z > (sphereCenter->z + sphereRadius)))){
		HX_STACK_LINE(122)
		return false;
	}
	HX_STACK_LINE(124)
	if ((((sphereCenter->z - sphereRadius) > boxMax->z))){
		HX_STACK_LINE(125)
		return false;
	}
	HX_STACK_LINE(127)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC4(Collider_obj,intersectBoxAASphere,return )

Dynamic Collider_obj::getLowestRoot( Float a,Float b,Float c,Float maxR){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.collisions.Collider","getLowestRoot",0xe9c350ab,"com.gamestudiohx.babylonhx.collisions.Collider.getLowestRoot","com/gamestudiohx/babylonhx/collisions/Collider.hx",130,0xf5c1222f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(maxR,"maxR")
	HX_STACK_LINE(131)
	Float determinant = ((b * b) - ((4.0 * a) * c));		HX_STACK_VAR(determinant,"determinant");
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/collisions/Collider.hx",132,0xf5c1222f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("root") , (int)0,false);
				__result->Add(HX_CSTRING("found") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(132)
	Dynamic result = _Function_1_1::Block();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(134)
	if (((determinant < (int)0))){
		HX_STACK_LINE(135)
		return result;
	}
	HX_STACK_LINE(137)
	Float sqrtD = ::Math_obj::sqrt(determinant);		HX_STACK_VAR(sqrtD,"sqrtD");
	HX_STACK_LINE(138)
	Float r1 = (Float(((-(b) - sqrtD))) / Float(((2.0 * a))));		HX_STACK_VAR(r1,"r1");
	HX_STACK_LINE(139)
	Float r2 = (Float(((-(b) + sqrtD))) / Float(((2.0 * a))));		HX_STACK_VAR(r2,"r2");
	HX_STACK_LINE(141)
	if (((r1 > r2))){
		HX_STACK_LINE(142)
		Float temp = r2;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(143)
		r2 = r1;
		HX_STACK_LINE(144)
		r1 = temp;
	}
	HX_STACK_LINE(147)
	if (((bool((r1 > (int)0)) && bool((r1 < maxR))))){
		HX_STACK_LINE(148)
		result->__FieldRef(HX_CSTRING("root")) = r1;
		HX_STACK_LINE(149)
		result->__FieldRef(HX_CSTRING("found")) = true;
		HX_STACK_LINE(150)
		return result;
	}
	HX_STACK_LINE(153)
	if (((bool((r2 > (int)0)) && bool((r2 < maxR))))){
		HX_STACK_LINE(154)
		result->__FieldRef(HX_CSTRING("root")) = r2;
		HX_STACK_LINE(155)
		result->__FieldRef(HX_CSTRING("found")) = true;
		HX_STACK_LINE(156)
		return result;
	}
	HX_STACK_LINE(159)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC4(Collider_obj,getLowestRoot,return )

bool Collider_obj::_canDoCollision( ::com::gamestudiohx::babylonhx::tools::math::Vector3 sphereCenter,Float sphereRadius,::com::gamestudiohx::babylonhx::tools::math::Vector3 vecMin,::com::gamestudiohx::babylonhx::tools::math::Vector3 vecMax){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.collisions.Collider","_canDoCollision",0xd4ec4117,"com.gamestudiohx.babylonhx.collisions.Collider._canDoCollision","com/gamestudiohx/babylonhx/collisions/Collider.hx",162,0xf5c1222f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sphereCenter,"sphereCenter")
	HX_STACK_ARG(sphereRadius,"sphereRadius")
	HX_STACK_ARG(vecMin,"vecMin")
	HX_STACK_ARG(vecMax,"vecMax")
	HX_STACK_LINE(163)
	Float distance;		HX_STACK_VAR(distance,"distance");
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 value1 = this->basePointWorld;		HX_STACK_VAR(value1,"value1");
		struct _Function_2_1{
			inline static Float Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &sphereCenter,::com::gamestudiohx::babylonhx::tools::math::Vector3 &value1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/collisions/Collider.hx",163,0xf5c1222f)
				{
					HX_STACK_LINE(163)
					Float x = (value1->x - sphereCenter->x);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(163)
					Float y = (value1->y - sphereCenter->y);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(163)
					Float z = (value1->z - sphereCenter->z);		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(163)
					return (((x * x) + (y * y)) + (z * z));
				}
				return null();
			}
		};
		HX_STACK_LINE(163)
		distance = ::Math_obj::sqrt(_Function_2_1::Block(sphereCenter,value1));
	}
	HX_STACK_LINE(165)
	Float max = ::Math_obj::max(this->radius->x,this->radius->y);		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(166)
	Float _g = ::Math_obj::max(max,this->radius->z);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(166)
	max = _g;
	HX_STACK_LINE(168)
	if (((distance > ((this->velocityWorldLength + max) + sphereRadius)))){
		HX_STACK_LINE(169)
		return false;
	}
	HX_STACK_LINE(172)
	if ((!(this->intersectBoxAASphere(vecMin,vecMax,this->basePointWorld,(this->velocityWorldLength + max))))){
		HX_STACK_LINE(173)
		return false;
	}
	HX_STACK_LINE(175)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC4(Collider_obj,_canDoCollision,return )

Void Collider_obj::_testTriangle( int faceIndex,::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,::com::gamestudiohx::babylonhx::tools::math::Vector3 p1,::com::gamestudiohx::babylonhx::tools::math::Vector3 p2,::com::gamestudiohx::babylonhx::tools::math::Vector3 p3){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.collisions.Collider","_testTriangle",0xdffc891a,"com.gamestudiohx.babylonhx.collisions.Collider._testTriangle","com/gamestudiohx/babylonhx/collisions/Collider.hx",178,0xf5c1222f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(faceIndex,"faceIndex")
		HX_STACK_ARG(subMesh,"subMesh")
		HX_STACK_ARG(p1,"p1")
		HX_STACK_ARG(p2,"p2")
		HX_STACK_ARG(p3,"p3")
		HX_STACK_LINE(179)
		Float t0 = (int)0;		HX_STACK_VAR(t0,"t0");
		HX_STACK_LINE(180)
		bool embeddedInPlane = false;		HX_STACK_VAR(embeddedInPlane,"embeddedInPlane");
		HX_STACK_LINE(182)
		if (((subMesh->_trianglePlanes == null()))){
			HX_STACK_LINE(183)
			subMesh->_trianglePlanes = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(186)
		if (((faceIndex >= subMesh->_trianglePlanes->length))){
			HX_STACK_LINE(187)
			subMesh->_trianglePlanes[faceIndex] = ::com::gamestudiohx::babylonhx::tools::math::Plane_obj::__new((int)0,(int)0,(int)0,(int)0);
			HX_STACK_LINE(188)
			{
				HX_STACK_LINE(188)
				::com::gamestudiohx::babylonhx::tools::math::Plane _this = subMesh->_trianglePlanes->__get(faceIndex).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(188)
				Float x1 = (p2->x - p1->x);		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(188)
				Float y1 = (p2->y - p1->y);		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(188)
				Float z1 = (p2->z - p1->z);		HX_STACK_VAR(z1,"z1");
				HX_STACK_LINE(188)
				Float x2 = (p3->x - p1->x);		HX_STACK_VAR(x2,"x2");
				HX_STACK_LINE(188)
				Float y2 = (p3->y - p1->y);		HX_STACK_VAR(y2,"y2");
				HX_STACK_LINE(188)
				Float z2 = (p3->z - p1->z);		HX_STACK_VAR(z2,"z2");
				HX_STACK_LINE(188)
				Float yz = ((y1 * z2) - (z1 * y2));		HX_STACK_VAR(yz,"yz");
				HX_STACK_LINE(188)
				Float xz = ((z1 * x2) - (x1 * z2));		HX_STACK_VAR(xz,"xz");
				HX_STACK_LINE(188)
				Float xy = ((x1 * y2) - (y1 * x2));		HX_STACK_VAR(xy,"xy");
				HX_STACK_LINE(188)
				Float pyth = ::Math_obj::sqrt((((yz * yz) + (xz * xz)) + (xy * xy)));		HX_STACK_VAR(pyth,"pyth");
				HX_STACK_LINE(188)
				Float invPyth;		HX_STACK_VAR(invPyth,"invPyth");
				HX_STACK_LINE(188)
				if (((pyth != (int)0))){
					HX_STACK_LINE(188)
					invPyth = (Float(1.0) / Float(pyth));
				}
				else{
					HX_STACK_LINE(188)
					invPyth = (int)0;
				}
				HX_STACK_LINE(188)
				_this->normal->x = (yz * invPyth);
				HX_STACK_LINE(188)
				_this->normal->y = (xz * invPyth);
				HX_STACK_LINE(188)
				_this->normal->z = (xy * invPyth);
				HX_STACK_LINE(188)
				_this->d = -(((((_this->normal->x * p1->x) + (_this->normal->y * p1->y)) + (_this->normal->z * p1->z))));
			}
		}
		HX_STACK_LINE(191)
		::com::gamestudiohx::babylonhx::tools::math::Plane trianglePlane = subMesh->_trianglePlanes->__get(faceIndex).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >();		HX_STACK_VAR(trianglePlane,"trianglePlane");
		HX_STACK_LINE(193)
		Dynamic _g = subMesh->getMaterial();		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::collisions::Collider_obj > __this,::com::gamestudiohx::babylonhx::tools::math::Plane &trianglePlane){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/collisions/Collider.hx",193,0xf5c1222f)
				{
					HX_STACK_LINE(193)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 direction = __this->normalizedVelocity;		HX_STACK_VAR(direction,"direction");
					HX_STACK_LINE(193)
					Float dot;		HX_STACK_VAR(dot,"dot");
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 left = trianglePlane->normal;		HX_STACK_VAR(left,"left");
						HX_STACK_LINE(193)
						dot = (((left->x * direction->x) + (left->y * direction->y)) + (left->z * direction->z));
					}
					HX_STACK_LINE(193)
					return (dot <= (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(193)
		if (((  (((_g == null()))) ? bool(!(_Function_1_1::Block(this,trianglePlane))) : bool(false) ))){
			HX_STACK_LINE(194)
			return null();
		}
		HX_STACK_LINE(196)
		Float signedDistToTrianglePlane;		HX_STACK_VAR(signedDistToTrianglePlane,"signedDistToTrianglePlane");
		HX_STACK_LINE(196)
		{
			HX_STACK_LINE(196)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 point = this->basePoint;		HX_STACK_VAR(point,"point");
			struct _Function_2_1{
				inline static Float Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &point,::com::gamestudiohx::babylonhx::tools::math::Plane &trianglePlane){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/collisions/Collider.hx",196,0xf5c1222f)
					{
						HX_STACK_LINE(196)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 right = trianglePlane->normal;		HX_STACK_VAR(right,"right");
						HX_STACK_LINE(196)
						return (((point->x * right->x) + (point->y * right->y)) + (point->z * right->z));
					}
					return null();
				}
			};
			HX_STACK_LINE(196)
			signedDistToTrianglePlane = (_Function_2_1::Block(point,trianglePlane) + trianglePlane->d);
		}
		HX_STACK_LINE(197)
		Float normalDotVelocity;		HX_STACK_VAR(normalDotVelocity,"normalDotVelocity");
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 left = trianglePlane->normal;		HX_STACK_VAR(left,"left");
			HX_STACK_LINE(197)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 right = this->velocity;		HX_STACK_VAR(right,"right");
			HX_STACK_LINE(197)
			normalDotVelocity = (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
		}
		HX_STACK_LINE(199)
		if (((normalDotVelocity == (int)0))){
			HX_STACK_LINE(200)
			Float _g1 = ::Math_obj::abs(signedDistToTrianglePlane);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(200)
			if (((_g1 >= 1.0))){
				HX_STACK_LINE(201)
				return null();
			}
			HX_STACK_LINE(202)
			embeddedInPlane = true;
			HX_STACK_LINE(203)
			t0 = (int)0;
		}
		else{
			HX_STACK_LINE(206)
			t0 = (Float(((-1. - signedDistToTrianglePlane))) / Float(normalDotVelocity));
			HX_STACK_LINE(207)
			Float t1 = (Float(((1.0 - signedDistToTrianglePlane))) / Float(normalDotVelocity));		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(209)
			if (((t0 > t1))){
				HX_STACK_LINE(210)
				Float temp = t1;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(211)
				t1 = t0;
				HX_STACK_LINE(212)
				t0 = temp;
			}
			HX_STACK_LINE(215)
			if (((bool((t0 > 1.0)) || bool((t1 < 0.0))))){
				HX_STACK_LINE(216)
				return null();
			}
			HX_STACK_LINE(218)
			if (((t0 < (int)0))){
				HX_STACK_LINE(219)
				t0 = (int)0;
			}
			HX_STACK_LINE(220)
			if (((t0 > 1.0))){
				HX_STACK_LINE(221)
				t0 = 1.0;
			}
		}
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_collisionPoint;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(224)
			_this->x = (int)0;
			HX_STACK_LINE(224)
			_this->y = (int)0;
			HX_STACK_LINE(224)
			_this->z = (int)0;
		}
		HX_STACK_LINE(226)
		bool found = false;		HX_STACK_VAR(found,"found");
		HX_STACK_LINE(227)
		Float t = 1.0;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(229)
		if ((!(embeddedInPlane))){
			HX_STACK_LINE(230)
			{
				HX_STACK_LINE(230)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->basePoint;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(230)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = trianglePlane->normal;		HX_STACK_VAR(otherVector,"otherVector");
				HX_STACK_LINE(230)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_planeIntersectionPoint;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(230)
				result->x = (_this->x - otherVector->x);
				HX_STACK_LINE(230)
				result->y = (_this->y - otherVector->y);
				HX_STACK_LINE(230)
				result->z = (_this->z - otherVector->z);
			}
			HX_STACK_LINE(231)
			{
				HX_STACK_LINE(231)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->velocity;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(231)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_tempVector;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(231)
				result->x = (_this->x * t0);
				HX_STACK_LINE(231)
				result->y = (_this->y * t0);
				HX_STACK_LINE(231)
				result->z = (_this->z * t0);
			}
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_planeIntersectionPoint;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(232)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_tempVector;		HX_STACK_VAR(otherVector,"otherVector");
				HX_STACK_LINE(232)
				hx::AddEq(_this->x,otherVector->x);
				HX_STACK_LINE(232)
				hx::AddEq(_this->y,otherVector->y);
				HX_STACK_LINE(232)
				hx::AddEq(_this->z,otherVector->z);
			}
			HX_STACK_LINE(234)
			if ((this->_checkPointInTriangle(this->_planeIntersectionPoint,p1,p2,p3,trianglePlane->normal))){
				HX_STACK_LINE(235)
				found = true;
				HX_STACK_LINE(236)
				t = t0;
				HX_STACK_LINE(237)
				{
					HX_STACK_LINE(237)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_collisionPoint;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(237)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 source = this->_planeIntersectionPoint;		HX_STACK_VAR(source,"source");
					HX_STACK_LINE(237)
					_this->x = source->x;
					HX_STACK_LINE(237)
					_this->y = source->y;
					HX_STACK_LINE(237)
					_this->z = source->z;
				}
			}
		}
		HX_STACK_LINE(241)
		if ((!(found))){
			HX_STACK_LINE(242)
			Float velocitySquaredLength;		HX_STACK_VAR(velocitySquaredLength,"velocitySquaredLength");
			HX_STACK_LINE(242)
			{
				HX_STACK_LINE(242)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->velocity;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(242)
				velocitySquaredLength = (((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z));
			}
			HX_STACK_LINE(244)
			Float a = velocitySquaredLength;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(246)
			{
				HX_STACK_LINE(246)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->basePoint;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(246)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_tempVector;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(246)
				result->x = (_this->x - p1->x);
				HX_STACK_LINE(246)
				result->y = (_this->y - p1->y);
				HX_STACK_LINE(246)
				result->z = (_this->z - p1->z);
			}
			HX_STACK_LINE(247)
			Float b;		HX_STACK_VAR(b,"b");
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::collisions::Collider_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/collisions/Collider.hx",247,0xf5c1222f)
					{
						HX_STACK_LINE(247)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 left = __this->velocity;		HX_STACK_VAR(left,"left");
						HX_STACK_LINE(247)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 right = __this->_tempVector;		HX_STACK_VAR(right,"right");
						HX_STACK_LINE(247)
						return (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
					}
					return null();
				}
			};
			HX_STACK_LINE(247)
			b = (2.0 * _Function_2_1::Block(this));
			HX_STACK_LINE(248)
			Float c;		HX_STACK_VAR(c,"c");
			struct _Function_2_2{
				inline static Float Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::collisions::Collider_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/collisions/Collider.hx",248,0xf5c1222f)
					{
						HX_STACK_LINE(248)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = __this->_tempVector;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(248)
						return (((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z));
					}
					return null();
				}
			};
			HX_STACK_LINE(248)
			c = (_Function_2_2::Block(this) - 1.0);
			HX_STACK_LINE(250)
			Dynamic lowestRoot = this->getLowestRoot(a,b,c,t);		HX_STACK_VAR(lowestRoot,"lowestRoot");
			HX_STACK_LINE(251)
			if ((lowestRoot->__Field(HX_CSTRING("found"),true))){
				HX_STACK_LINE(252)
				t = lowestRoot->__Field(HX_CSTRING("root"),true);
				HX_STACK_LINE(253)
				found = true;
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_collisionPoint;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(254)
					_this->x = p1->x;
					HX_STACK_LINE(254)
					_this->y = p1->y;
					HX_STACK_LINE(254)
					_this->z = p1->z;
				}
			}
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->basePoint;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(257)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_tempVector;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(257)
				result->x = (_this->x - p2->x);
				HX_STACK_LINE(257)
				result->y = (_this->y - p2->y);
				HX_STACK_LINE(257)
				result->z = (_this->z - p2->z);
			}
			struct _Function_2_3{
				inline static Float Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::collisions::Collider_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/collisions/Collider.hx",258,0xf5c1222f)
					{
						HX_STACK_LINE(258)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 left = __this->velocity;		HX_STACK_VAR(left,"left");
						HX_STACK_LINE(258)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 right = __this->_tempVector;		HX_STACK_VAR(right,"right");
						HX_STACK_LINE(258)
						return (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
					}
					return null();
				}
			};
			HX_STACK_LINE(258)
			b = (2.0 * _Function_2_3::Block(this));
			struct _Function_2_4{
				inline static Float Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::collisions::Collider_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/collisions/Collider.hx",259,0xf5c1222f)
					{
						HX_STACK_LINE(259)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = __this->_tempVector;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(259)
						return (((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z));
					}
					return null();
				}
			};
			HX_STACK_LINE(259)
			c = (_Function_2_4::Block(this) - 1.0);
			HX_STACK_LINE(261)
			Dynamic _g2 = this->getLowestRoot(a,b,c,t);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(261)
			lowestRoot = _g2;
			HX_STACK_LINE(262)
			if ((lowestRoot->__Field(HX_CSTRING("found"),true))){
				HX_STACK_LINE(263)
				t = lowestRoot->__Field(HX_CSTRING("root"),true);
				HX_STACK_LINE(264)
				found = true;
				HX_STACK_LINE(265)
				{
					HX_STACK_LINE(265)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_collisionPoint;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(265)
					_this->x = p2->x;
					HX_STACK_LINE(265)
					_this->y = p2->y;
					HX_STACK_LINE(265)
					_this->z = p2->z;
				}
			}
			HX_STACK_LINE(268)
			{
				HX_STACK_LINE(268)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->basePoint;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(268)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_tempVector;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(268)
				result->x = (_this->x - p3->x);
				HX_STACK_LINE(268)
				result->y = (_this->y - p3->y);
				HX_STACK_LINE(268)
				result->z = (_this->z - p3->z);
			}
			struct _Function_2_5{
				inline static Float Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::collisions::Collider_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/collisions/Collider.hx",269,0xf5c1222f)
					{
						HX_STACK_LINE(269)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 left = __this->velocity;		HX_STACK_VAR(left,"left");
						HX_STACK_LINE(269)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 right = __this->_tempVector;		HX_STACK_VAR(right,"right");
						HX_STACK_LINE(269)
						return (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
					}
					return null();
				}
			};
			HX_STACK_LINE(269)
			b = (2.0 * _Function_2_5::Block(this));
			struct _Function_2_6{
				inline static Float Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::collisions::Collider_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/collisions/Collider.hx",270,0xf5c1222f)
					{
						HX_STACK_LINE(270)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = __this->_tempVector;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(270)
						return (((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z));
					}
					return null();
				}
			};
			HX_STACK_LINE(270)
			c = (_Function_2_6::Block(this) - 1.0);
			HX_STACK_LINE(272)
			Dynamic _g3 = this->getLowestRoot(a,b,c,t);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(272)
			lowestRoot = _g3;
			HX_STACK_LINE(273)
			if ((lowestRoot->__Field(HX_CSTRING("found"),true))){
				HX_STACK_LINE(274)
				t = lowestRoot->__Field(HX_CSTRING("root"),true);
				HX_STACK_LINE(275)
				found = true;
				HX_STACK_LINE(276)
				{
					HX_STACK_LINE(276)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_collisionPoint;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(276)
					_this->x = p3->x;
					HX_STACK_LINE(276)
					_this->y = p3->y;
					HX_STACK_LINE(276)
					_this->z = p3->z;
				}
			}
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_edge;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(279)
				result->x = (p2->x - p1->x);
				HX_STACK_LINE(279)
				result->y = (p2->y - p1->y);
				HX_STACK_LINE(279)
				result->z = (p2->z - p1->z);
			}
			HX_STACK_LINE(280)
			{
				HX_STACK_LINE(280)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->basePoint;		HX_STACK_VAR(otherVector,"otherVector");
				HX_STACK_LINE(280)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_baseToVertex;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(280)
				result->x = (p1->x - otherVector->x);
				HX_STACK_LINE(280)
				result->y = (p1->y - otherVector->y);
				HX_STACK_LINE(280)
				result->z = (p1->z - otherVector->z);
			}
			HX_STACK_LINE(281)
			Float edgeSquaredLength;		HX_STACK_VAR(edgeSquaredLength,"edgeSquaredLength");
			HX_STACK_LINE(281)
			{
				HX_STACK_LINE(281)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_edge;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(281)
				edgeSquaredLength = (((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z));
			}
			HX_STACK_LINE(282)
			Float edgeDotVelocity;		HX_STACK_VAR(edgeDotVelocity,"edgeDotVelocity");
			HX_STACK_LINE(282)
			{
				HX_STACK_LINE(282)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 left = this->_edge;		HX_STACK_VAR(left,"left");
				HX_STACK_LINE(282)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 right = this->velocity;		HX_STACK_VAR(right,"right");
				HX_STACK_LINE(282)
				edgeDotVelocity = (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
			}
			HX_STACK_LINE(283)
			Float edgeDotBaseToVertex;		HX_STACK_VAR(edgeDotBaseToVertex,"edgeDotBaseToVertex");
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 left = this->_edge;		HX_STACK_VAR(left,"left");
				HX_STACK_LINE(283)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 right = this->_baseToVertex;		HX_STACK_VAR(right,"right");
				HX_STACK_LINE(283)
				edgeDotBaseToVertex = (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
			}
			HX_STACK_LINE(285)
			a = ((edgeSquaredLength * -(velocitySquaredLength)) + (edgeDotVelocity * edgeDotVelocity));
			struct _Function_2_7{
				inline static Float Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::collisions::Collider_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/collisions/Collider.hx",286,0xf5c1222f)
					{
						HX_STACK_LINE(286)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 left = __this->velocity;		HX_STACK_VAR(left,"left");
						HX_STACK_LINE(286)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 right = __this->_baseToVertex;		HX_STACK_VAR(right,"right");
						HX_STACK_LINE(286)
						return (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
					}
					return null();
				}
			};
			HX_STACK_LINE(286)
			b = ((edgeSquaredLength * ((2.0 * _Function_2_7::Block(this)))) - ((2.0 * edgeDotVelocity) * edgeDotBaseToVertex));
			struct _Function_2_8{
				inline static Float Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::collisions::Collider_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/collisions/Collider.hx",287,0xf5c1222f)
					{
						HX_STACK_LINE(287)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = __this->_baseToVertex;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(287)
						return (((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z));
					}
					return null();
				}
			};
			HX_STACK_LINE(287)
			c = ((edgeSquaredLength * ((1.0 - _Function_2_8::Block(this)))) + (edgeDotBaseToVertex * edgeDotBaseToVertex));
			HX_STACK_LINE(289)
			Dynamic _g4 = this->getLowestRoot(a,b,c,t);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(289)
			lowestRoot = _g4;
			HX_STACK_LINE(290)
			if ((lowestRoot->__Field(HX_CSTRING("found"),true))){
				HX_STACK_LINE(291)
				Float f = (Float((((edgeDotVelocity * lowestRoot->__Field(HX_CSTRING("root"),true)) - edgeDotBaseToVertex))) / Float(edgeSquaredLength));		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(293)
				if (((bool((f >= 0.0)) && bool((f <= 1.0))))){
					HX_STACK_LINE(294)
					t = lowestRoot->__Field(HX_CSTRING("root"),true);
					HX_STACK_LINE(295)
					found = true;
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_edge;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(296)
						hx::MultEq(_this->x,f);
						HX_STACK_LINE(296)
						hx::MultEq(_this->y,f);
						HX_STACK_LINE(296)
						hx::MultEq(_this->z,f);
					}
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_edge;		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(297)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_collisionPoint;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(297)
						result->x = (p1->x + otherVector->x);
						HX_STACK_LINE(297)
						result->y = (p1->y + otherVector->y);
						HX_STACK_LINE(297)
						result->z = (p1->z + otherVector->z);
						HX_STACK_LINE(297)
						result;
					}
				}
			}
			HX_STACK_LINE(301)
			{
				HX_STACK_LINE(301)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_edge;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(301)
				result->x = (p3->x - p2->x);
				HX_STACK_LINE(301)
				result->y = (p3->y - p2->y);
				HX_STACK_LINE(301)
				result->z = (p3->z - p2->z);
			}
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->basePoint;		HX_STACK_VAR(otherVector,"otherVector");
				HX_STACK_LINE(302)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_baseToVertex;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(302)
				result->x = (p2->x - otherVector->x);
				HX_STACK_LINE(302)
				result->y = (p2->y - otherVector->y);
				HX_STACK_LINE(302)
				result->z = (p2->z - otherVector->z);
			}
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_edge;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(303)
				edgeSquaredLength = (((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z));
			}
			HX_STACK_LINE(304)
			{
				HX_STACK_LINE(304)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 left = this->_edge;		HX_STACK_VAR(left,"left");
				HX_STACK_LINE(304)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 right = this->velocity;		HX_STACK_VAR(right,"right");
				HX_STACK_LINE(304)
				edgeDotVelocity = (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
			}
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 left = this->_edge;		HX_STACK_VAR(left,"left");
				HX_STACK_LINE(305)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 right = this->_baseToVertex;		HX_STACK_VAR(right,"right");
				HX_STACK_LINE(305)
				edgeDotBaseToVertex = (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
			}
			HX_STACK_LINE(307)
			a = ((edgeSquaredLength * -(velocitySquaredLength)) + (edgeDotVelocity * edgeDotVelocity));
			struct _Function_2_9{
				inline static Float Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::collisions::Collider_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/collisions/Collider.hx",308,0xf5c1222f)
					{
						HX_STACK_LINE(308)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 left = __this->velocity;		HX_STACK_VAR(left,"left");
						HX_STACK_LINE(308)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 right = __this->_baseToVertex;		HX_STACK_VAR(right,"right");
						HX_STACK_LINE(308)
						return (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
					}
					return null();
				}
			};
			HX_STACK_LINE(308)
			b = ((edgeSquaredLength * ((2.0 * _Function_2_9::Block(this)))) - ((2.0 * edgeDotVelocity) * edgeDotBaseToVertex));
			struct _Function_2_10{
				inline static Float Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::collisions::Collider_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/collisions/Collider.hx",309,0xf5c1222f)
					{
						HX_STACK_LINE(309)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = __this->_baseToVertex;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(309)
						return (((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z));
					}
					return null();
				}
			};
			HX_STACK_LINE(309)
			c = ((edgeSquaredLength * ((1.0 - _Function_2_10::Block(this)))) + (edgeDotBaseToVertex * edgeDotBaseToVertex));
			HX_STACK_LINE(310)
			Dynamic _g5 = this->getLowestRoot(a,b,c,t);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(310)
			lowestRoot = _g5;
			HX_STACK_LINE(311)
			if ((lowestRoot->__Field(HX_CSTRING("found"),true))){
				HX_STACK_LINE(312)
				Float f = (Float((((edgeDotVelocity * lowestRoot->__Field(HX_CSTRING("root"),true)) - edgeDotBaseToVertex))) / Float(edgeSquaredLength));		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(314)
				if (((bool((f >= 0.0)) && bool((f <= 1.0))))){
					HX_STACK_LINE(315)
					t = lowestRoot->__Field(HX_CSTRING("root"),true);
					HX_STACK_LINE(316)
					found = true;
					HX_STACK_LINE(317)
					{
						HX_STACK_LINE(317)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_edge;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(317)
						hx::MultEq(_this->x,f);
						HX_STACK_LINE(317)
						hx::MultEq(_this->y,f);
						HX_STACK_LINE(317)
						hx::MultEq(_this->z,f);
					}
					HX_STACK_LINE(318)
					{
						HX_STACK_LINE(318)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_edge;		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(318)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_collisionPoint;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(318)
						result->x = (p2->x + otherVector->x);
						HX_STACK_LINE(318)
						result->y = (p2->y + otherVector->y);
						HX_STACK_LINE(318)
						result->z = (p2->z + otherVector->z);
						HX_STACK_LINE(318)
						result;
					}
				}
			}
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(322)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_edge;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(322)
				result->x = (p1->x - p3->x);
				HX_STACK_LINE(322)
				result->y = (p1->y - p3->y);
				HX_STACK_LINE(322)
				result->z = (p1->z - p3->z);
			}
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->basePoint;		HX_STACK_VAR(otherVector,"otherVector");
				HX_STACK_LINE(323)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_baseToVertex;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(323)
				result->x = (p3->x - otherVector->x);
				HX_STACK_LINE(323)
				result->y = (p3->y - otherVector->y);
				HX_STACK_LINE(323)
				result->z = (p3->z - otherVector->z);
			}
			HX_STACK_LINE(324)
			{
				HX_STACK_LINE(324)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_edge;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(324)
				edgeSquaredLength = (((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z));
			}
			HX_STACK_LINE(325)
			{
				HX_STACK_LINE(325)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 left = this->_edge;		HX_STACK_VAR(left,"left");
				HX_STACK_LINE(325)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 right = this->velocity;		HX_STACK_VAR(right,"right");
				HX_STACK_LINE(325)
				edgeDotVelocity = (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
			}
			HX_STACK_LINE(326)
			{
				HX_STACK_LINE(326)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 left = this->_edge;		HX_STACK_VAR(left,"left");
				HX_STACK_LINE(326)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 right = this->_baseToVertex;		HX_STACK_VAR(right,"right");
				HX_STACK_LINE(326)
				edgeDotBaseToVertex = (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
			}
			HX_STACK_LINE(328)
			a = ((edgeSquaredLength * -(velocitySquaredLength)) + (edgeDotVelocity * edgeDotVelocity));
			struct _Function_2_11{
				inline static Float Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::collisions::Collider_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/collisions/Collider.hx",329,0xf5c1222f)
					{
						HX_STACK_LINE(329)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 left = __this->velocity;		HX_STACK_VAR(left,"left");
						HX_STACK_LINE(329)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 right = __this->_baseToVertex;		HX_STACK_VAR(right,"right");
						HX_STACK_LINE(329)
						return (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
					}
					return null();
				}
			};
			HX_STACK_LINE(329)
			b = ((edgeSquaredLength * ((2.0 * _Function_2_11::Block(this)))) - ((2.0 * edgeDotVelocity) * edgeDotBaseToVertex));
			struct _Function_2_12{
				inline static Float Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::collisions::Collider_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/collisions/Collider.hx",330,0xf5c1222f)
					{
						HX_STACK_LINE(330)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = __this->_baseToVertex;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(330)
						return (((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z));
					}
					return null();
				}
			};
			HX_STACK_LINE(330)
			c = ((edgeSquaredLength * ((1.0 - _Function_2_12::Block(this)))) + (edgeDotBaseToVertex * edgeDotBaseToVertex));
			HX_STACK_LINE(332)
			Dynamic _g6 = this->getLowestRoot(a,b,c,t);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(332)
			lowestRoot = _g6;
			HX_STACK_LINE(333)
			if ((lowestRoot->__Field(HX_CSTRING("found"),true))){
				HX_STACK_LINE(334)
				Float f = (Float((((edgeDotVelocity * lowestRoot->__Field(HX_CSTRING("root"),true)) - edgeDotBaseToVertex))) / Float(edgeSquaredLength));		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(336)
				if (((bool((f >= 0.0)) && bool((f <= 1.0))))){
					HX_STACK_LINE(337)
					t = lowestRoot->__Field(HX_CSTRING("root"),true);
					HX_STACK_LINE(338)
					found = true;
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_edge;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(339)
						hx::MultEq(_this->x,f);
						HX_STACK_LINE(339)
						hx::MultEq(_this->y,f);
						HX_STACK_LINE(339)
						hx::MultEq(_this->z,f);
					}
					HX_STACK_LINE(340)
					{
						HX_STACK_LINE(340)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_edge;		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(340)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_collisionPoint;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(340)
						result->x = (p3->x + otherVector->x);
						HX_STACK_LINE(340)
						result->y = (p3->y + otherVector->y);
						HX_STACK_LINE(340)
						result->z = (p3->z + otherVector->z);
						HX_STACK_LINE(340)
						result;
					}
				}
			}
		}
		HX_STACK_LINE(345)
		if ((found)){
			HX_STACK_LINE(346)
			Float _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(346)
			{
				HX_STACK_LINE(346)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->velocity;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(346)
				_g7 = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));
			}
			HX_STACK_LINE(346)
			Float distToCollision = (t * _g7);		HX_STACK_VAR(distToCollision,"distToCollision");
			HX_STACK_LINE(348)
			if (((bool(!(this->collisionFound)) || bool((distToCollision < this->nearestDistance))))){
				HX_STACK_LINE(349)
				if (((this->intersectionPoint == null()))){
					HX_STACK_LINE(350)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _g8;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_collisionPoint;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(350)
						_g8 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
					}
					HX_STACK_LINE(350)
					this->intersectionPoint = _g8;
				}
				else{
					HX_STACK_LINE(352)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->intersectionPoint;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(352)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 source = this->_collisionPoint;		HX_STACK_VAR(source,"source");
					HX_STACK_LINE(352)
					_this->x = source->x;
					HX_STACK_LINE(352)
					_this->y = source->y;
					HX_STACK_LINE(352)
					_this->z = source->z;
				}
				HX_STACK_LINE(354)
				this->nearestDistance = distToCollision;
				HX_STACK_LINE(355)
				this->collisionFound = true;
				HX_STACK_LINE(356)
				::com::gamestudiohx::babylonhx::mesh::AbstractMesh _g9 = subMesh->getMesh();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(356)
				this->collidedMesh = _g9;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Collider_obj,_testTriangle,(void))

Void Collider_obj::_collide( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,Array< ::Dynamic > pts,Array< int > indices,int indexStart,int indexEnd,int decal){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.collisions.Collider","_collide",0xa016979e,"com.gamestudiohx.babylonhx.collisions.Collider._collide","com/gamestudiohx/babylonhx/collisions/Collider.hx",361,0xf5c1222f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(subMesh,"subMesh")
		HX_STACK_ARG(pts,"pts")
		HX_STACK_ARG(indices,"indices")
		HX_STACK_ARG(indexStart,"indexStart")
		HX_STACK_ARG(indexEnd,"indexEnd")
		HX_STACK_ARG(decal,"decal")
		HX_STACK_LINE(362)
		int i = indexStart;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(363)
		while((true)){
			HX_STACK_LINE(363)
			if ((!(((i < indexEnd))))){
				HX_STACK_LINE(363)
				break;
			}
			HX_STACK_LINE(364)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p1 = pts->__get((indices->__get(i) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(365)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p2 = pts->__get((indices->__get((i + (int)1)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p2,"p2");
			HX_STACK_LINE(366)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p3 = pts->__get((indices->__get((i + (int)2)) - decal)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p3,"p3");
			HX_STACK_LINE(367)
			this->_testTriangle(i,subMesh,p3,p2,p1);
			HX_STACK_LINE(368)
			hx::AddEq(i,(int)3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Collider_obj,_collide,(void))

Void Collider_obj::_getResponse( ::com::gamestudiohx::babylonhx::tools::math::Vector3 pos,::com::gamestudiohx::babylonhx::tools::math::Vector3 vel){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.collisions.Collider","_getResponse",0x1f19e957,"com.gamestudiohx.babylonhx.collisions.Collider._getResponse","com/gamestudiohx/babylonhx/collisions/Collider.hx",372,0xf5c1222f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(vel,"vel")
		HX_STACK_LINE(373)
		{
			HX_STACK_LINE(373)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_destinationPoint;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(373)
			result->x = (pos->x + vel->x);
			HX_STACK_LINE(373)
			result->y = (pos->y + vel->y);
			HX_STACK_LINE(373)
			result->z = (pos->z + vel->z);
			HX_STACK_LINE(373)
			result;
		}
		HX_STACK_LINE(374)
		{
			HX_STACK_LINE(374)
			Float _g = ::Math_obj::sqrt((((vel->x * vel->x) + (vel->y * vel->y)) + (vel->z * vel->z)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(374)
			Float scale = (Float(this->nearestDistance) / Float(_g));		HX_STACK_VAR(scale,"scale");
			HX_STACK_LINE(374)
			hx::MultEq(vel->x,scale);
			HX_STACK_LINE(374)
			hx::MultEq(vel->y,scale);
			HX_STACK_LINE(374)
			hx::MultEq(vel->z,scale);
		}
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->basePoint;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(376)
			pos->x = (_this->x + vel->x);
			HX_STACK_LINE(376)
			pos->y = (_this->y + vel->y);
			HX_STACK_LINE(376)
			pos->z = (_this->z + vel->z);
			HX_STACK_LINE(376)
			pos;
		}
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->intersectionPoint;		HX_STACK_VAR(otherVector,"otherVector");
			HX_STACK_LINE(377)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_slidePlaneNormal;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(377)
			result->x = (pos->x - otherVector->x);
			HX_STACK_LINE(377)
			result->y = (pos->y - otherVector->y);
			HX_STACK_LINE(377)
			result->z = (pos->z - otherVector->z);
		}
		HX_STACK_LINE(378)
		{
			HX_STACK_LINE(378)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_slidePlaneNormal;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(378)
			Float len = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(378)
			if (((len != (int)0))){
				HX_STACK_LINE(378)
				Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(378)
				hx::MultEq(_this->x,num);
				HX_STACK_LINE(378)
				hx::MultEq(_this->y,num);
				HX_STACK_LINE(378)
				hx::MultEq(_this->z,num);
			}
		}
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(379)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_slidePlaneNormal;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(379)
			Float scale = this->epsilon;		HX_STACK_VAR(scale,"scale");
			HX_STACK_LINE(379)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_displacementVector;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(379)
			result->x = (_this->x * scale);
			HX_STACK_LINE(379)
			result->y = (_this->y * scale);
			HX_STACK_LINE(379)
			result->z = (_this->z * scale);
		}
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(381)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_displacementVector;		HX_STACK_VAR(otherVector,"otherVector");
			HX_STACK_LINE(381)
			hx::AddEq(pos->x,otherVector->x);
			HX_STACK_LINE(381)
			hx::AddEq(pos->y,otherVector->y);
			HX_STACK_LINE(381)
			hx::AddEq(pos->z,otherVector->z);
		}
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(382)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->intersectionPoint;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(382)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_displacementVector;		HX_STACK_VAR(otherVector,"otherVector");
			HX_STACK_LINE(382)
			hx::AddEq(_this->x,otherVector->x);
			HX_STACK_LINE(382)
			hx::AddEq(_this->y,otherVector->y);
			HX_STACK_LINE(382)
			hx::AddEq(_this->z,otherVector->z);
		}
		HX_STACK_LINE(384)
		{
			HX_STACK_LINE(384)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_slidePlaneNormal;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(384)
			Float scale;		HX_STACK_VAR(scale,"scale");
			HX_STACK_LINE(384)
			{
				HX_STACK_LINE(384)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 origin = this->intersectionPoint;		HX_STACK_VAR(origin,"origin");
				HX_STACK_LINE(384)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = this->_slidePlaneNormal;		HX_STACK_VAR(normal,"normal");
				HX_STACK_LINE(384)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 point = this->_destinationPoint;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(384)
				Float d = -(((((normal->x * origin->x) + (normal->y * origin->y)) + (normal->z * origin->z))));		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(384)
				scale = ((((point->x * normal->x) + (point->y * normal->y)) + (point->z * normal->z)) + d);
			}
			HX_STACK_LINE(384)
			hx::MultEq(_this->x,scale);
			HX_STACK_LINE(384)
			hx::MultEq(_this->y,scale);
			HX_STACK_LINE(384)
			hx::MultEq(_this->z,scale);
		}
		HX_STACK_LINE(385)
		{
			HX_STACK_LINE(385)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_destinationPoint;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(385)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_slidePlaneNormal;		HX_STACK_VAR(otherVector,"otherVector");
			HX_STACK_LINE(385)
			hx::SubEq(_this->x,otherVector->x);
			HX_STACK_LINE(385)
			hx::SubEq(_this->y,otherVector->y);
			HX_STACK_LINE(385)
			hx::SubEq(_this->z,otherVector->z);
		}
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(387)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_destinationPoint;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(387)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->intersectionPoint;		HX_STACK_VAR(otherVector,"otherVector");
			HX_STACK_LINE(387)
			vel->x = (_this->x - otherVector->x);
			HX_STACK_LINE(387)
			vel->y = (_this->y - otherVector->y);
			HX_STACK_LINE(387)
			vel->z = (_this->z - otherVector->z);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Collider_obj,_getResponse,(void))


Collider_obj::Collider_obj()
{
}

void Collider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Collider);
	HX_MARK_MEMBER_NAME(radius,"radius");
	HX_MARK_MEMBER_NAME(retry,"retry");
	HX_MARK_MEMBER_NAME(basePoint,"basePoint");
	HX_MARK_MEMBER_NAME(basePointWorld,"basePointWorld");
	HX_MARK_MEMBER_NAME(velocityWorld,"velocityWorld");
	HX_MARK_MEMBER_NAME(normalizedVelocity,"normalizedVelocity");
	HX_MARK_MEMBER_NAME(velocityWorldLength,"velocityWorldLength");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(collisionFound,"collisionFound");
	HX_MARK_MEMBER_NAME(epsilon,"epsilon");
	HX_MARK_MEMBER_NAME(nearestDistance,"nearestDistance");
	HX_MARK_MEMBER_NAME(collidedMesh,"collidedMesh");
	HX_MARK_MEMBER_NAME(intersectionPoint,"intersectionPoint");
	HX_MARK_MEMBER_NAME(initialVelocity,"initialVelocity");
	HX_MARK_MEMBER_NAME(initialPosition,"initialPosition");
	HX_MARK_MEMBER_NAME(_collisionPoint,"_collisionPoint");
	HX_MARK_MEMBER_NAME(_planeIntersectionPoint,"_planeIntersectionPoint");
	HX_MARK_MEMBER_NAME(_tempVector,"_tempVector");
	HX_MARK_MEMBER_NAME(_tempVector2,"_tempVector2");
	HX_MARK_MEMBER_NAME(_tempVector3,"_tempVector3");
	HX_MARK_MEMBER_NAME(_tempVector4,"_tempVector4");
	HX_MARK_MEMBER_NAME(_edge,"_edge");
	HX_MARK_MEMBER_NAME(_baseToVertex,"_baseToVertex");
	HX_MARK_MEMBER_NAME(_destinationPoint,"_destinationPoint");
	HX_MARK_MEMBER_NAME(_slidePlaneNormal,"_slidePlaneNormal");
	HX_MARK_MEMBER_NAME(_displacementVector,"_displacementVector");
	HX_MARK_END_CLASS();
}

void Collider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(radius,"radius");
	HX_VISIT_MEMBER_NAME(retry,"retry");
	HX_VISIT_MEMBER_NAME(basePoint,"basePoint");
	HX_VISIT_MEMBER_NAME(basePointWorld,"basePointWorld");
	HX_VISIT_MEMBER_NAME(velocityWorld,"velocityWorld");
	HX_VISIT_MEMBER_NAME(normalizedVelocity,"normalizedVelocity");
	HX_VISIT_MEMBER_NAME(velocityWorldLength,"velocityWorldLength");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(collisionFound,"collisionFound");
	HX_VISIT_MEMBER_NAME(epsilon,"epsilon");
	HX_VISIT_MEMBER_NAME(nearestDistance,"nearestDistance");
	HX_VISIT_MEMBER_NAME(collidedMesh,"collidedMesh");
	HX_VISIT_MEMBER_NAME(intersectionPoint,"intersectionPoint");
	HX_VISIT_MEMBER_NAME(initialVelocity,"initialVelocity");
	HX_VISIT_MEMBER_NAME(initialPosition,"initialPosition");
	HX_VISIT_MEMBER_NAME(_collisionPoint,"_collisionPoint");
	HX_VISIT_MEMBER_NAME(_planeIntersectionPoint,"_planeIntersectionPoint");
	HX_VISIT_MEMBER_NAME(_tempVector,"_tempVector");
	HX_VISIT_MEMBER_NAME(_tempVector2,"_tempVector2");
	HX_VISIT_MEMBER_NAME(_tempVector3,"_tempVector3");
	HX_VISIT_MEMBER_NAME(_tempVector4,"_tempVector4");
	HX_VISIT_MEMBER_NAME(_edge,"_edge");
	HX_VISIT_MEMBER_NAME(_baseToVertex,"_baseToVertex");
	HX_VISIT_MEMBER_NAME(_destinationPoint,"_destinationPoint");
	HX_VISIT_MEMBER_NAME(_slidePlaneNormal,"_slidePlaneNormal");
	HX_VISIT_MEMBER_NAME(_displacementVector,"_displacementVector");
}

Dynamic Collider_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"retry") ) { return retry; }
		if (HX_FIELD_EQ(inName,"_edge") ) { return _edge; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return radius; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"epsilon") ) { return epsilon; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		if (HX_FIELD_EQ(inName,"_collide") ) { return _collide_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"basePoint") ) { return basePoint; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tempVector") ) { return _tempVector; }
		if (HX_FIELD_EQ(inName,"_initialize") ) { return _initialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"collidedMesh") ) { return collidedMesh; }
		if (HX_FIELD_EQ(inName,"_tempVector2") ) { return _tempVector2; }
		if (HX_FIELD_EQ(inName,"_tempVector3") ) { return _tempVector3; }
		if (HX_FIELD_EQ(inName,"_tempVector4") ) { return _tempVector4; }
		if (HX_FIELD_EQ(inName,"_getResponse") ) { return _getResponse_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"velocityWorld") ) { return velocityWorld; }
		if (HX_FIELD_EQ(inName,"_baseToVertex") ) { return _baseToVertex; }
		if (HX_FIELD_EQ(inName,"getLowestRoot") ) { return getLowestRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"_testTriangle") ) { return _testTriangle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"basePointWorld") ) { return basePointWorld; }
		if (HX_FIELD_EQ(inName,"collisionFound") ) { return collisionFound; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nearestDistance") ) { return nearestDistance; }
		if (HX_FIELD_EQ(inName,"initialVelocity") ) { return initialVelocity; }
		if (HX_FIELD_EQ(inName,"initialPosition") ) { return initialPosition; }
		if (HX_FIELD_EQ(inName,"_collisionPoint") ) { return _collisionPoint; }
		if (HX_FIELD_EQ(inName,"_canDoCollision") ) { return _canDoCollision_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"intersectionPoint") ) { return intersectionPoint; }
		if (HX_FIELD_EQ(inName,"_destinationPoint") ) { return _destinationPoint; }
		if (HX_FIELD_EQ(inName,"_slidePlaneNormal") ) { return _slidePlaneNormal; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"normalizedVelocity") ) { return normalizedVelocity; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"velocityWorldLength") ) { return velocityWorldLength; }
		if (HX_FIELD_EQ(inName,"_displacementVector") ) { return _displacementVector; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"intersectBoxAASphere") ) { return intersectBoxAASphere_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_checkPointInTriangle") ) { return _checkPointInTriangle_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_planeIntersectionPoint") ) { return _planeIntersectionPoint; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Collider_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"retry") ) { retry=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_edge") ) { _edge=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { radius=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"epsilon") ) { epsilon=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"basePoint") ) { basePoint=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tempVector") ) { _tempVector=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"collidedMesh") ) { collidedMesh=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tempVector2") ) { _tempVector2=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tempVector3") ) { _tempVector3=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tempVector4") ) { _tempVector4=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"velocityWorld") ) { velocityWorld=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_baseToVertex") ) { _baseToVertex=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"basePointWorld") ) { basePointWorld=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collisionFound") ) { collisionFound=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nearestDistance") ) { nearestDistance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initialVelocity") ) { initialVelocity=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initialPosition") ) { initialPosition=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_collisionPoint") ) { _collisionPoint=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"intersectionPoint") ) { intersectionPoint=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_destinationPoint") ) { _destinationPoint=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slidePlaneNormal") ) { _slidePlaneNormal=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"normalizedVelocity") ) { normalizedVelocity=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"velocityWorldLength") ) { velocityWorldLength=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_displacementVector") ) { _displacementVector=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_planeIntersectionPoint") ) { _planeIntersectionPoint=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Collider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("radius"));
	outFields->push(HX_CSTRING("retry"));
	outFields->push(HX_CSTRING("basePoint"));
	outFields->push(HX_CSTRING("basePointWorld"));
	outFields->push(HX_CSTRING("velocityWorld"));
	outFields->push(HX_CSTRING("normalizedVelocity"));
	outFields->push(HX_CSTRING("velocityWorldLength"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("collisionFound"));
	outFields->push(HX_CSTRING("epsilon"));
	outFields->push(HX_CSTRING("nearestDistance"));
	outFields->push(HX_CSTRING("collidedMesh"));
	outFields->push(HX_CSTRING("intersectionPoint"));
	outFields->push(HX_CSTRING("initialVelocity"));
	outFields->push(HX_CSTRING("initialPosition"));
	outFields->push(HX_CSTRING("_collisionPoint"));
	outFields->push(HX_CSTRING("_planeIntersectionPoint"));
	outFields->push(HX_CSTRING("_tempVector"));
	outFields->push(HX_CSTRING("_tempVector2"));
	outFields->push(HX_CSTRING("_tempVector3"));
	outFields->push(HX_CSTRING("_tempVector4"));
	outFields->push(HX_CSTRING("_edge"));
	outFields->push(HX_CSTRING("_baseToVertex"));
	outFields->push(HX_CSTRING("_destinationPoint"));
	outFields->push(HX_CSTRING("_slidePlaneNormal"));
	outFields->push(HX_CSTRING("_displacementVector"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,radius),HX_CSTRING("radius")},
	{hx::fsInt,(int)offsetof(Collider_obj,retry),HX_CSTRING("retry")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,basePoint),HX_CSTRING("basePoint")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,basePointWorld),HX_CSTRING("basePointWorld")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,velocityWorld),HX_CSTRING("velocityWorld")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,normalizedVelocity),HX_CSTRING("normalizedVelocity")},
	{hx::fsFloat,(int)offsetof(Collider_obj,velocityWorldLength),HX_CSTRING("velocityWorldLength")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,velocity),HX_CSTRING("velocity")},
	{hx::fsBool,(int)offsetof(Collider_obj,collisionFound),HX_CSTRING("collisionFound")},
	{hx::fsFloat,(int)offsetof(Collider_obj,epsilon),HX_CSTRING("epsilon")},
	{hx::fsFloat,(int)offsetof(Collider_obj,nearestDistance),HX_CSTRING("nearestDistance")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::AbstractMesh*/ ,(int)offsetof(Collider_obj,collidedMesh),HX_CSTRING("collidedMesh")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,intersectionPoint),HX_CSTRING("intersectionPoint")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,initialVelocity),HX_CSTRING("initialVelocity")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,initialPosition),HX_CSTRING("initialPosition")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,_collisionPoint),HX_CSTRING("_collisionPoint")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,_planeIntersectionPoint),HX_CSTRING("_planeIntersectionPoint")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,_tempVector),HX_CSTRING("_tempVector")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,_tempVector2),HX_CSTRING("_tempVector2")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,_tempVector3),HX_CSTRING("_tempVector3")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,_tempVector4),HX_CSTRING("_tempVector4")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,_edge),HX_CSTRING("_edge")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,_baseToVertex),HX_CSTRING("_baseToVertex")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,_destinationPoint),HX_CSTRING("_destinationPoint")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,_slidePlaneNormal),HX_CSTRING("_slidePlaneNormal")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Collider_obj,_displacementVector),HX_CSTRING("_displacementVector")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("radius"),
	HX_CSTRING("retry"),
	HX_CSTRING("basePoint"),
	HX_CSTRING("basePointWorld"),
	HX_CSTRING("velocityWorld"),
	HX_CSTRING("normalizedVelocity"),
	HX_CSTRING("velocityWorldLength"),
	HX_CSTRING("velocity"),
	HX_CSTRING("collisionFound"),
	HX_CSTRING("epsilon"),
	HX_CSTRING("nearestDistance"),
	HX_CSTRING("collidedMesh"),
	HX_CSTRING("intersectionPoint"),
	HX_CSTRING("initialVelocity"),
	HX_CSTRING("initialPosition"),
	HX_CSTRING("_collisionPoint"),
	HX_CSTRING("_planeIntersectionPoint"),
	HX_CSTRING("_tempVector"),
	HX_CSTRING("_tempVector2"),
	HX_CSTRING("_tempVector3"),
	HX_CSTRING("_tempVector4"),
	HX_CSTRING("_edge"),
	HX_CSTRING("_baseToVertex"),
	HX_CSTRING("_destinationPoint"),
	HX_CSTRING("_slidePlaneNormal"),
	HX_CSTRING("_displacementVector"),
	HX_CSTRING("_initialize"),
	HX_CSTRING("_checkPointInTriangle"),
	HX_CSTRING("intersectBoxAASphere"),
	HX_CSTRING("getLowestRoot"),
	HX_CSTRING("_canDoCollision"),
	HX_CSTRING("_testTriangle"),
	HX_CSTRING("_collide"),
	HX_CSTRING("_getResponse"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Collider_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Collider_obj::__mClass,"__mClass");
};

#endif

Class Collider_obj::__mClass;

void Collider_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.collisions.Collider"), hx::TCanCast< Collider_obj> ,sStaticFields,sMemberFields,
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

void Collider_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace collisions
