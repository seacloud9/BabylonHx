#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingBox
#include <com/gamestudiohx/babylonhx/culling/BoundingBox.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingSphere
#include <com/gamestudiohx/babylonhx/culling/BoundingSphere.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Ray
#include <com/gamestudiohx/babylonhx/tools/math/Ray.h>
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
namespace tools{
namespace math{

Void Ray_obj::__construct(::com::gamestudiohx::babylonhx::tools::math::Vector3 origin,::com::gamestudiohx::babylonhx::tools::math::Vector3 direction)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Ray","new",0x184b84fb,"com.gamestudiohx.babylonhx.tools.math.Ray.new","com/gamestudiohx/babylonhx/tools/math/Ray.hx",24,0xc4302eb4)
HX_STACK_THIS(this)
HX_STACK_ARG(origin,"origin")
HX_STACK_ARG(direction,"direction")
{
	HX_STACK_LINE(25)
	this->origin = origin;
	HX_STACK_LINE(26)
	this->direction = direction;
}
;
	return null();
}

//Ray_obj::~Ray_obj() { }

Dynamic Ray_obj::__CreateEmpty() { return  new Ray_obj; }
hx::ObjectPtr< Ray_obj > Ray_obj::__new(::com::gamestudiohx::babylonhx::tools::math::Vector3 origin,::com::gamestudiohx::babylonhx::tools::math::Vector3 direction)
{  hx::ObjectPtr< Ray_obj > result = new Ray_obj();
	result->__construct(origin,direction);
	return result;}

Dynamic Ray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ray_obj > result = new Ray_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool Ray_obj::intersectsBox( ::com::gamestudiohx::babylonhx::culling::BoundingBox box){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Ray","intersectsBox",0x90520012,"com.gamestudiohx.babylonhx.tools.math.Ray.intersectsBox","com/gamestudiohx/babylonhx/tools/math/Ray.hx",29,0xc4302eb4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(box,"box")
	HX_STACK_LINE(30)
	Float d = 0.0;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(31)
	Float maxValue = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(maxValue,"maxValue");
	HX_STACK_LINE(33)
	Float _g = ::Math_obj::abs(this->direction->x);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(33)
	if (((_g < 0.0000001))){
		HX_STACK_LINE(34)
		if (((bool((this->origin->x < box->minimum->x)) || bool((this->origin->x > box->maximum->x))))){
			HX_STACK_LINE(35)
			return false;
		}
	}
	else{
		HX_STACK_LINE(39)
		Float inv = (Float(1.0) / Float(this->direction->x));		HX_STACK_VAR(inv,"inv");
		HX_STACK_LINE(40)
		Float min = (((box->minimum->x - this->origin->x)) * inv);		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(41)
		Float max = (((box->maximum->x - this->origin->x)) * inv);		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(43)
		if (((min > max))){
			HX_STACK_LINE(44)
			Float temp = min;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(45)
			min = max;
			HX_STACK_LINE(46)
			max = temp;
		}
		HX_STACK_LINE(49)
		Float _g1 = ::Math_obj::max(min,d);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(49)
		d = _g1;
		HX_STACK_LINE(50)
		Float _g2 = ::Math_obj::min(max,maxValue);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(50)
		maxValue = _g2;
		HX_STACK_LINE(52)
		if (((d > maxValue))){
			HX_STACK_LINE(53)
			return false;
		}
	}
	HX_STACK_LINE(57)
	Float _g3 = ::Math_obj::abs(this->direction->y);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(57)
	if (((_g3 < 0.0000001))){
		HX_STACK_LINE(58)
		if (((bool((this->origin->y < box->minimum->y)) || bool((this->origin->y > box->maximum->y))))){
			HX_STACK_LINE(59)
			return false;
		}
	}
	else{
		HX_STACK_LINE(63)
		Float inv = (Float(1.0) / Float(this->direction->y));		HX_STACK_VAR(inv,"inv");
		HX_STACK_LINE(64)
		Float min = (((box->minimum->y - this->origin->y)) * inv);		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(65)
		Float max = (((box->maximum->y - this->origin->y)) * inv);		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(67)
		if (((min > max))){
			HX_STACK_LINE(68)
			Float temp = min;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(69)
			min = max;
			HX_STACK_LINE(70)
			max = temp;
		}
		HX_STACK_LINE(73)
		Float _g4 = ::Math_obj::max(min,d);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(73)
		d = _g4;
		HX_STACK_LINE(74)
		Float _g5 = ::Math_obj::min(max,maxValue);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(74)
		maxValue = _g5;
		HX_STACK_LINE(76)
		if (((d > maxValue))){
			HX_STACK_LINE(77)
			return false;
		}
	}
	HX_STACK_LINE(81)
	Float _g6 = ::Math_obj::abs(this->direction->z);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(81)
	if (((_g6 < 0.0000001))){
		HX_STACK_LINE(82)
		if (((bool((this->origin->z < box->minimum->z)) || bool((this->origin->z > box->maximum->z))))){
			HX_STACK_LINE(83)
			return false;
		}
	}
	else{
		HX_STACK_LINE(87)
		Float inv = (Float(1.0) / Float(this->direction->z));		HX_STACK_VAR(inv,"inv");
		HX_STACK_LINE(88)
		Float min = (((box->minimum->z - this->origin->z)) * inv);		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(89)
		Float max = (((box->maximum->z - this->origin->z)) * inv);		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(91)
		if (((min > max))){
			HX_STACK_LINE(92)
			Float temp = min;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(93)
			min = max;
			HX_STACK_LINE(94)
			max = temp;
		}
		HX_STACK_LINE(97)
		Float _g7 = ::Math_obj::max(min,d);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(97)
		d = _g7;
		HX_STACK_LINE(98)
		Float _g8 = ::Math_obj::min(max,maxValue);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(98)
		maxValue = _g8;
		HX_STACK_LINE(100)
		if (((d > maxValue))){
			HX_STACK_LINE(101)
			return false;
		}
	}
	HX_STACK_LINE(104)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,intersectsBox,return )

bool Ray_obj::intersectsSphere( ::com::gamestudiohx::babylonhx::culling::BoundingSphere sphere){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Ray","intersectsSphere",0x50052b66,"com.gamestudiohx.babylonhx.tools.math.Ray.intersectsSphere","com/gamestudiohx/babylonhx/tools/math/Ray.hx",107,0xc4302eb4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sphere,"sphere")
	HX_STACK_LINE(108)
	Float x = (sphere->center->x - this->origin->x);		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(109)
	Float y = (sphere->center->y - this->origin->y);		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(110)
	Float z = (sphere->center->z - this->origin->z);		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(111)
	Float pyth = (((x * x) + (y * y)) + (z * z));		HX_STACK_VAR(pyth,"pyth");
	HX_STACK_LINE(112)
	Float rr = (sphere->radius * sphere->radius);		HX_STACK_VAR(rr,"rr");
	HX_STACK_LINE(114)
	if (((pyth <= rr))){
		HX_STACK_LINE(115)
		return true;
	}
	HX_STACK_LINE(118)
	Float dot = (((x * this->direction->x) + (y * this->direction->y)) + (z * this->direction->z));		HX_STACK_VAR(dot,"dot");
	HX_STACK_LINE(119)
	if (((dot < 0.0))){
		HX_STACK_LINE(120)
		return false;
	}
	HX_STACK_LINE(123)
	Float temp = (pyth - (dot * dot));		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(125)
	return (temp <= rr);
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,intersectsSphere,return )

Float Ray_obj::intersectsTriangle( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vertex0,::com::gamestudiohx::babylonhx::tools::math::Vector3 vertex1,::com::gamestudiohx::babylonhx::tools::math::Vector3 vertex2){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Ray","intersectsTriangle",0xdeaec361,"com.gamestudiohx.babylonhx.tools.math.Ray.intersectsTriangle","com/gamestudiohx/babylonhx/tools/math/Ray.hx",128,0xc4302eb4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertex0,"vertex0")
	HX_STACK_ARG(vertex1,"vertex1")
	HX_STACK_ARG(vertex2,"vertex2")
	HX_STACK_LINE(129)
	if (((this->_edge1 == null()))){
		HX_STACK_LINE(130)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(130)
		this->_edge1 = _g;
		HX_STACK_LINE(131)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(131)
		this->_edge2 = _g1;
		HX_STACK_LINE(132)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(132)
		this->_pvec = _g2;
		HX_STACK_LINE(133)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(133)
		this->_tvec = _g3;
		HX_STACK_LINE(134)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(134)
		this->_qvec = _g4;
	}
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_edge1;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(137)
		result->x = (vertex1->x - vertex0->x);
		HX_STACK_LINE(137)
		result->y = (vertex1->y - vertex0->y);
		HX_STACK_LINE(137)
		result->z = (vertex1->z - vertex0->z);
	}
	HX_STACK_LINE(138)
	{
		HX_STACK_LINE(138)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_edge2;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(138)
		result->x = (vertex2->x - vertex0->x);
		HX_STACK_LINE(138)
		result->y = (vertex2->y - vertex0->y);
		HX_STACK_LINE(138)
		result->z = (vertex2->z - vertex0->z);
	}
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = this->direction;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(139)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 right = this->_edge2;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(139)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_pvec;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(139)
		result->x = ((left->y * right->z) - (left->z * right->y));
		HX_STACK_LINE(139)
		result->y = ((left->z * right->x) - (left->x * right->z));
		HX_STACK_LINE(139)
		result->z = ((left->x * right->y) - (left->y * right->x));
	}
	HX_STACK_LINE(140)
	Float det;		HX_STACK_VAR(det,"det");
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = this->_edge1;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(140)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 right = this->_pvec;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(140)
		det = (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
	}
	HX_STACK_LINE(142)
	if (((det == (int)0))){
		HX_STACK_LINE(143)
		return (int)0;
	}
	HX_STACK_LINE(146)
	Float invdet = (Float((int)1) / Float(det));		HX_STACK_VAR(invdet,"invdet");
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->origin;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(148)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_tvec;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(148)
		result->x = (_this->x - vertex0->x);
		HX_STACK_LINE(148)
		result->y = (_this->y - vertex0->y);
		HX_STACK_LINE(148)
		result->z = (_this->z - vertex0->z);
	}
	HX_STACK_LINE(150)
	Float bu;		HX_STACK_VAR(bu,"bu");
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::tools::math::Ray_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/tools/math/Ray.hx",150,0xc4302eb4)
			{
				HX_STACK_LINE(150)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 left = __this->_tvec;		HX_STACK_VAR(left,"left");
				HX_STACK_LINE(150)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 right = __this->_pvec;		HX_STACK_VAR(right,"right");
				HX_STACK_LINE(150)
				return (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
			}
			return null();
		}
	};
	HX_STACK_LINE(150)
	bu = (_Function_1_1::Block(this) * invdet);
	HX_STACK_LINE(152)
	if (((bool((bu < (int)0)) || bool((bu > 1.0))))){
		HX_STACK_LINE(153)
		return (int)0;
	}
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 left = this->_tvec;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(156)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 right = this->_edge1;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(156)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_qvec;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(156)
		result->x = ((left->y * right->z) - (left->z * right->y));
		HX_STACK_LINE(156)
		result->y = ((left->z * right->x) - (left->x * right->z));
		HX_STACK_LINE(156)
		result->z = ((left->x * right->y) - (left->y * right->x));
	}
	HX_STACK_LINE(158)
	Float bv;		HX_STACK_VAR(bv,"bv");
	struct _Function_1_2{
		inline static Float Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::tools::math::Ray_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/tools/math/Ray.hx",158,0xc4302eb4)
			{
				HX_STACK_LINE(158)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 left = __this->direction;		HX_STACK_VAR(left,"left");
				HX_STACK_LINE(158)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 right = __this->_qvec;		HX_STACK_VAR(right,"right");
				HX_STACK_LINE(158)
				return (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
			}
			return null();
		}
	};
	HX_STACK_LINE(158)
	bv = (_Function_1_2::Block(this) * invdet);
	HX_STACK_LINE(160)
	if (((bool((bv < (int)0)) || bool(((bu + bv) > 1.0))))){
		HX_STACK_LINE(161)
		return (int)0;
	}
	struct _Function_1_3{
		inline static Float Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::tools::math::Ray_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/tools/math/Ray.hx",164,0xc4302eb4)
			{
				HX_STACK_LINE(164)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 left = __this->_edge2;		HX_STACK_VAR(left,"left");
				HX_STACK_LINE(164)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 right = __this->_qvec;		HX_STACK_VAR(right,"right");
				HX_STACK_LINE(164)
				return (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
			}
			return null();
		}
	};
	HX_STACK_LINE(164)
	return (_Function_1_3::Block(this) * invdet);
}


HX_DEFINE_DYNAMIC_FUNC3(Ray_obj,intersectsTriangle,return )

::com::gamestudiohx::babylonhx::tools::math::Ray Ray_obj::CreateNew( Float x,Float y,Float viewportWidth,Float viewportHeight,::com::gamestudiohx::babylonhx::tools::math::Matrix world,::com::gamestudiohx::babylonhx::tools::math::Matrix view,::com::gamestudiohx::babylonhx::tools::math::Matrix projection){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Ray","CreateNew",0x1bea217f,"com.gamestudiohx.babylonhx.tools.math.Ray.CreateNew","com/gamestudiohx/babylonhx/tools/math/Ray.hx",168,0xc4302eb4)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(viewportWidth,"viewportWidth")
	HX_STACK_ARG(viewportHeight,"viewportHeight")
	HX_STACK_ARG(world,"world")
	HX_STACK_ARG(view,"view")
	HX_STACK_ARG(projection,"projection")
	HX_STACK_LINE(169)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 start;		HX_STACK_VAR(start,"start");
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 source = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,(int)0);		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(169)
		::com::gamestudiohx::babylonhx::tools::math::Matrix matrix;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(169)
		{
			HX_STACK_LINE(169)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(169)
			{
				HX_STACK_LINE(169)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(169)
				{
					HX_STACK_LINE(169)
					Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
					HX_STACK_LINE(169)
					Float tm0 = world->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(169)
					Float tm1 = world->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(169)
					Float tm2 = world->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(169)
					Float tm3 = world->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(169)
					Float tm4 = world->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(169)
					Float tm5 = world->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(169)
					Float tm6 = world->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(169)
					Float tm7 = world->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(169)
					Float tm8 = world->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(169)
					Float tm9 = world->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(169)
					Float tm10 = world->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(169)
					Float tm11 = world->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(169)
					Float tm12 = world->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(169)
					Float tm13 = world->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(169)
					Float tm14 = world->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(169)
					Float tm15 = world->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(169)
					Float om0 = view->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(169)
					Float om1 = view->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(169)
					Float om2 = view->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(169)
					Float om3 = view->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(169)
					Float om4 = view->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(169)
					Float om5 = view->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(169)
					Float om6 = view->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(169)
					Float om7 = view->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(169)
					Float om8 = view->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(169)
					Float om9 = view->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(169)
					Float om10 = view->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(169)
					Float om11 = view->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(169)
					Float om12 = view->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(169)
					Float om13 = view->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(169)
					Float om14 = view->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(169)
					Float om15 = view->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(169)
					result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(169)
					result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(169)
					result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(169)
					result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(169)
					result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(169)
					result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(169)
					result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(169)
					result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(169)
					result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(169)
					result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(169)
					result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(169)
					result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(169)
					result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(169)
					result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(169)
					result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(169)
					result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(169)
					result1;
				}
				HX_STACK_LINE(169)
				_this = result;
			}
			HX_STACK_LINE(169)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(169)
			{
				HX_STACK_LINE(169)
				Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
				HX_STACK_LINE(169)
				Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
				HX_STACK_LINE(169)
				Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
				HX_STACK_LINE(169)
				Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
				HX_STACK_LINE(169)
				Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
				HX_STACK_LINE(169)
				Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
				HX_STACK_LINE(169)
				Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
				HX_STACK_LINE(169)
				Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
				HX_STACK_LINE(169)
				Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
				HX_STACK_LINE(169)
				Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
				HX_STACK_LINE(169)
				Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
				HX_STACK_LINE(169)
				Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
				HX_STACK_LINE(169)
				Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
				HX_STACK_LINE(169)
				Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
				HX_STACK_LINE(169)
				Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
				HX_STACK_LINE(169)
				Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
				HX_STACK_LINE(169)
				Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
				HX_STACK_LINE(169)
				Float om0 = projection->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
				HX_STACK_LINE(169)
				Float om1 = projection->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
				HX_STACK_LINE(169)
				Float om2 = projection->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
				HX_STACK_LINE(169)
				Float om3 = projection->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
				HX_STACK_LINE(169)
				Float om4 = projection->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
				HX_STACK_LINE(169)
				Float om5 = projection->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
				HX_STACK_LINE(169)
				Float om6 = projection->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
				HX_STACK_LINE(169)
				Float om7 = projection->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
				HX_STACK_LINE(169)
				Float om8 = projection->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
				HX_STACK_LINE(169)
				Float om9 = projection->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
				HX_STACK_LINE(169)
				Float om10 = projection->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
				HX_STACK_LINE(169)
				Float om11 = projection->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
				HX_STACK_LINE(169)
				Float om12 = projection->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
				HX_STACK_LINE(169)
				Float om13 = projection->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
				HX_STACK_LINE(169)
				Float om14 = projection->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
				HX_STACK_LINE(169)
				Float om15 = projection->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
				HX_STACK_LINE(169)
				result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
				HX_STACK_LINE(169)
				result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
				HX_STACK_LINE(169)
				result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
				HX_STACK_LINE(169)
				result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
				HX_STACK_LINE(169)
				result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
				HX_STACK_LINE(169)
				result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
				HX_STACK_LINE(169)
				result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
				HX_STACK_LINE(169)
				result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
				HX_STACK_LINE(169)
				result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
				HX_STACK_LINE(169)
				result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
				HX_STACK_LINE(169)
				result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
				HX_STACK_LINE(169)
				result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
				HX_STACK_LINE(169)
				result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
				HX_STACK_LINE(169)
				result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
				HX_STACK_LINE(169)
				result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
				HX_STACK_LINE(169)
				result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
				HX_STACK_LINE(169)
				result1;
			}
			HX_STACK_LINE(169)
			matrix = result;
		}
		HX_STACK_LINE(169)
		{
			HX_STACK_LINE(169)
			Float l1 = matrix->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
			HX_STACK_LINE(169)
			Float l2 = matrix->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
			HX_STACK_LINE(169)
			Float l3 = matrix->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
			HX_STACK_LINE(169)
			Float l4 = matrix->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
			HX_STACK_LINE(169)
			Float l5 = matrix->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
			HX_STACK_LINE(169)
			Float l6 = matrix->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
			HX_STACK_LINE(169)
			Float l7 = matrix->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
			HX_STACK_LINE(169)
			Float l8 = matrix->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
			HX_STACK_LINE(169)
			Float l9 = matrix->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
			HX_STACK_LINE(169)
			Float l10 = matrix->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
			HX_STACK_LINE(169)
			Float l11 = matrix->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
			HX_STACK_LINE(169)
			Float l12 = matrix->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
			HX_STACK_LINE(169)
			Float l13 = matrix->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
			HX_STACK_LINE(169)
			Float l14 = matrix->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
			HX_STACK_LINE(169)
			Float l15 = matrix->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
			HX_STACK_LINE(169)
			Float l16 = matrix->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
			HX_STACK_LINE(169)
			Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
			HX_STACK_LINE(169)
			Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
			HX_STACK_LINE(169)
			Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
			HX_STACK_LINE(169)
			Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
			HX_STACK_LINE(169)
			Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
			HX_STACK_LINE(169)
			Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
			HX_STACK_LINE(169)
			Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
			HX_STACK_LINE(169)
			Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
			HX_STACK_LINE(169)
			Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
			HX_STACK_LINE(169)
			Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
			HX_STACK_LINE(169)
			Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
			HX_STACK_LINE(169)
			Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
			HX_STACK_LINE(169)
			Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
			HX_STACK_LINE(169)
			Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
			HX_STACK_LINE(169)
			Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
			HX_STACK_LINE(169)
			Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
			HX_STACK_LINE(169)
			Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
			HX_STACK_LINE(169)
			Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
			HX_STACK_LINE(169)
			Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
			HX_STACK_LINE(169)
			Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
			HX_STACK_LINE(169)
			Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
			HX_STACK_LINE(169)
			Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
			HX_STACK_LINE(169)
			Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
			HX_STACK_LINE(169)
			matrix->m[(int)0] = (l23 * l27);
			HX_STACK_LINE(169)
			matrix->m[(int)4] = (l24 * l27);
			HX_STACK_LINE(169)
			matrix->m[(int)8] = (l25 * l27);
			HX_STACK_LINE(169)
			matrix->m[(int)12] = (l26 * l27);
			HX_STACK_LINE(169)
			matrix->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
			HX_STACK_LINE(169)
			matrix->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
			HX_STACK_LINE(169)
			matrix->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
			HX_STACK_LINE(169)
			matrix->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
			HX_STACK_LINE(169)
			matrix->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
			HX_STACK_LINE(169)
			matrix->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
			HX_STACK_LINE(169)
			matrix->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
			HX_STACK_LINE(169)
			matrix->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
			HX_STACK_LINE(169)
			matrix->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
			HX_STACK_LINE(169)
			matrix->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
			HX_STACK_LINE(169)
			matrix->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
			HX_STACK_LINE(169)
			matrix->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
		}
		HX_STACK_LINE(169)
		source->x = (((Float(source->x) / Float(viewportWidth)) * (int)2) - (int)1);
		HX_STACK_LINE(169)
		source->y = -(((((Float(source->y) / Float(viewportHeight)) * (int)2) - (int)1)));
		HX_STACK_LINE(169)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 vector;		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(169)
		{
			HX_STACK_LINE(169)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(169)
			{
				HX_STACK_LINE(169)
				Float x1 = ((((source->x * matrix->m->__get((int)0)) + (source->y * matrix->m->__get((int)4))) + (source->z * matrix->m->__get((int)8))) + matrix->m->__get((int)12));		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(169)
				Float y1 = ((((source->x * matrix->m->__get((int)1)) + (source->y * matrix->m->__get((int)5))) + (source->z * matrix->m->__get((int)9))) + matrix->m->__get((int)13));		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(169)
				Float z = ((((source->x * matrix->m->__get((int)2)) + (source->y * matrix->m->__get((int)6))) + (source->z * matrix->m->__get((int)10))) + matrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(169)
				Float w = ((((source->x * matrix->m->__get((int)3)) + (source->y * matrix->m->__get((int)7))) + (source->z * matrix->m->__get((int)11))) + matrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(169)
				result->x = (Float(x1) / Float(w));
				HX_STACK_LINE(169)
				result->y = (Float(y1) / Float(w));
				HX_STACK_LINE(169)
				result->z = (Float(z) / Float(w));
			}
			HX_STACK_LINE(169)
			vector = result;
		}
		HX_STACK_LINE(169)
		Float num = ((((source->x * matrix->m->__get((int)3)) + (source->y * matrix->m->__get((int)7))) + (source->z * matrix->m->__get((int)11))) + matrix->m->__get((int)15));		HX_STACK_VAR(num,"num");
		struct _Function_2_1{
			inline static bool Block( Float &num){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/tools/math/Ray.hx",169,0xc4302eb4)
				{
					HX_STACK_LINE(169)
					Float num1 = (num - 1.0);		HX_STACK_VAR(num1,"num1");
					HX_STACK_LINE(169)
					return (bool((-1.401298e-45 <= num1)) && bool((num1 <= 1.401298E-45)));
				}
				return null();
			}
		};
		HX_STACK_LINE(169)
		if ((_Function_2_1::Block(num))){
			HX_STACK_LINE(169)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(169)
			{
				HX_STACK_LINE(169)
				Float scale = (Float(1.0) / Float(num));		HX_STACK_VAR(scale,"scale");
				HX_STACK_LINE(169)
				_g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((vector->x * scale),(vector->y * scale),(vector->z * scale));
			}
			HX_STACK_LINE(169)
			vector = _g;
		}
		HX_STACK_LINE(169)
		start = vector;
	}
	HX_STACK_LINE(170)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 end;		HX_STACK_VAR(end,"end");
	HX_STACK_LINE(170)
	{
		HX_STACK_LINE(170)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 source = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,(int)1);		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(170)
		::com::gamestudiohx::babylonhx::tools::math::Matrix matrix;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(170)
		{
			HX_STACK_LINE(170)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
					HX_STACK_LINE(170)
					Float tm0 = world->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(170)
					Float tm1 = world->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(170)
					Float tm2 = world->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(170)
					Float tm3 = world->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(170)
					Float tm4 = world->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(170)
					Float tm5 = world->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(170)
					Float tm6 = world->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(170)
					Float tm7 = world->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(170)
					Float tm8 = world->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(170)
					Float tm9 = world->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(170)
					Float tm10 = world->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(170)
					Float tm11 = world->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(170)
					Float tm12 = world->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(170)
					Float tm13 = world->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(170)
					Float tm14 = world->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(170)
					Float tm15 = world->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(170)
					Float om0 = view->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(170)
					Float om1 = view->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(170)
					Float om2 = view->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(170)
					Float om3 = view->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(170)
					Float om4 = view->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(170)
					Float om5 = view->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(170)
					Float om6 = view->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(170)
					Float om7 = view->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(170)
					Float om8 = view->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(170)
					Float om9 = view->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(170)
					Float om10 = view->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(170)
					Float om11 = view->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(170)
					Float om12 = view->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(170)
					Float om13 = view->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(170)
					Float om14 = view->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(170)
					Float om15 = view->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(170)
					result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(170)
					result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(170)
					result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(170)
					result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(170)
					result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(170)
					result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(170)
					result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(170)
					result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(170)
					result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(170)
					result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(170)
					result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(170)
					result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(170)
					result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(170)
					result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(170)
					result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(170)
					result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(170)
					result1;
				}
				HX_STACK_LINE(170)
				_this = result;
			}
			HX_STACK_LINE(170)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
				HX_STACK_LINE(170)
				Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
				HX_STACK_LINE(170)
				Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
				HX_STACK_LINE(170)
				Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
				HX_STACK_LINE(170)
				Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
				HX_STACK_LINE(170)
				Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
				HX_STACK_LINE(170)
				Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
				HX_STACK_LINE(170)
				Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
				HX_STACK_LINE(170)
				Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
				HX_STACK_LINE(170)
				Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
				HX_STACK_LINE(170)
				Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
				HX_STACK_LINE(170)
				Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
				HX_STACK_LINE(170)
				Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
				HX_STACK_LINE(170)
				Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
				HX_STACK_LINE(170)
				Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
				HX_STACK_LINE(170)
				Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
				HX_STACK_LINE(170)
				Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
				HX_STACK_LINE(170)
				Float om0 = projection->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
				HX_STACK_LINE(170)
				Float om1 = projection->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
				HX_STACK_LINE(170)
				Float om2 = projection->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
				HX_STACK_LINE(170)
				Float om3 = projection->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
				HX_STACK_LINE(170)
				Float om4 = projection->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
				HX_STACK_LINE(170)
				Float om5 = projection->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
				HX_STACK_LINE(170)
				Float om6 = projection->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
				HX_STACK_LINE(170)
				Float om7 = projection->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
				HX_STACK_LINE(170)
				Float om8 = projection->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
				HX_STACK_LINE(170)
				Float om9 = projection->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
				HX_STACK_LINE(170)
				Float om10 = projection->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
				HX_STACK_LINE(170)
				Float om11 = projection->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
				HX_STACK_LINE(170)
				Float om12 = projection->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
				HX_STACK_LINE(170)
				Float om13 = projection->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
				HX_STACK_LINE(170)
				Float om14 = projection->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
				HX_STACK_LINE(170)
				Float om15 = projection->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
				HX_STACK_LINE(170)
				result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
				HX_STACK_LINE(170)
				result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
				HX_STACK_LINE(170)
				result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
				HX_STACK_LINE(170)
				result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
				HX_STACK_LINE(170)
				result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
				HX_STACK_LINE(170)
				result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
				HX_STACK_LINE(170)
				result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
				HX_STACK_LINE(170)
				result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
				HX_STACK_LINE(170)
				result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
				HX_STACK_LINE(170)
				result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
				HX_STACK_LINE(170)
				result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
				HX_STACK_LINE(170)
				result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
				HX_STACK_LINE(170)
				result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
				HX_STACK_LINE(170)
				result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
				HX_STACK_LINE(170)
				result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
				HX_STACK_LINE(170)
				result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
				HX_STACK_LINE(170)
				result1;
			}
			HX_STACK_LINE(170)
			matrix = result;
		}
		HX_STACK_LINE(170)
		{
			HX_STACK_LINE(170)
			Float l1 = matrix->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
			HX_STACK_LINE(170)
			Float l2 = matrix->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
			HX_STACK_LINE(170)
			Float l3 = matrix->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
			HX_STACK_LINE(170)
			Float l4 = matrix->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
			HX_STACK_LINE(170)
			Float l5 = matrix->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
			HX_STACK_LINE(170)
			Float l6 = matrix->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
			HX_STACK_LINE(170)
			Float l7 = matrix->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
			HX_STACK_LINE(170)
			Float l8 = matrix->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
			HX_STACK_LINE(170)
			Float l9 = matrix->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
			HX_STACK_LINE(170)
			Float l10 = matrix->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
			HX_STACK_LINE(170)
			Float l11 = matrix->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
			HX_STACK_LINE(170)
			Float l12 = matrix->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
			HX_STACK_LINE(170)
			Float l13 = matrix->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
			HX_STACK_LINE(170)
			Float l14 = matrix->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
			HX_STACK_LINE(170)
			Float l15 = matrix->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
			HX_STACK_LINE(170)
			Float l16 = matrix->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
			HX_STACK_LINE(170)
			Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
			HX_STACK_LINE(170)
			Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
			HX_STACK_LINE(170)
			Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
			HX_STACK_LINE(170)
			Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
			HX_STACK_LINE(170)
			Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
			HX_STACK_LINE(170)
			Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
			HX_STACK_LINE(170)
			Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
			HX_STACK_LINE(170)
			Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
			HX_STACK_LINE(170)
			Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
			HX_STACK_LINE(170)
			Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
			HX_STACK_LINE(170)
			Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
			HX_STACK_LINE(170)
			Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
			HX_STACK_LINE(170)
			Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
			HX_STACK_LINE(170)
			Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
			HX_STACK_LINE(170)
			Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
			HX_STACK_LINE(170)
			Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
			HX_STACK_LINE(170)
			Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
			HX_STACK_LINE(170)
			Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
			HX_STACK_LINE(170)
			Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
			HX_STACK_LINE(170)
			Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
			HX_STACK_LINE(170)
			Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
			HX_STACK_LINE(170)
			Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
			HX_STACK_LINE(170)
			Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
			HX_STACK_LINE(170)
			matrix->m[(int)0] = (l23 * l27);
			HX_STACK_LINE(170)
			matrix->m[(int)4] = (l24 * l27);
			HX_STACK_LINE(170)
			matrix->m[(int)8] = (l25 * l27);
			HX_STACK_LINE(170)
			matrix->m[(int)12] = (l26 * l27);
			HX_STACK_LINE(170)
			matrix->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
			HX_STACK_LINE(170)
			matrix->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
			HX_STACK_LINE(170)
			matrix->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
			HX_STACK_LINE(170)
			matrix->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
			HX_STACK_LINE(170)
			matrix->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
			HX_STACK_LINE(170)
			matrix->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
			HX_STACK_LINE(170)
			matrix->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
			HX_STACK_LINE(170)
			matrix->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
			HX_STACK_LINE(170)
			matrix->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
			HX_STACK_LINE(170)
			matrix->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
			HX_STACK_LINE(170)
			matrix->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
			HX_STACK_LINE(170)
			matrix->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
		}
		HX_STACK_LINE(170)
		source->x = (((Float(source->x) / Float(viewportWidth)) * (int)2) - (int)1);
		HX_STACK_LINE(170)
		source->y = -(((((Float(source->y) / Float(viewportHeight)) * (int)2) - (int)1)));
		HX_STACK_LINE(170)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 vector;		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(170)
		{
			HX_STACK_LINE(170)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				Float x1 = ((((source->x * matrix->m->__get((int)0)) + (source->y * matrix->m->__get((int)4))) + (source->z * matrix->m->__get((int)8))) + matrix->m->__get((int)12));		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(170)
				Float y1 = ((((source->x * matrix->m->__get((int)1)) + (source->y * matrix->m->__get((int)5))) + (source->z * matrix->m->__get((int)9))) + matrix->m->__get((int)13));		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(170)
				Float z = ((((source->x * matrix->m->__get((int)2)) + (source->y * matrix->m->__get((int)6))) + (source->z * matrix->m->__get((int)10))) + matrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(170)
				Float w = ((((source->x * matrix->m->__get((int)3)) + (source->y * matrix->m->__get((int)7))) + (source->z * matrix->m->__get((int)11))) + matrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(170)
				result->x = (Float(x1) / Float(w));
				HX_STACK_LINE(170)
				result->y = (Float(y1) / Float(w));
				HX_STACK_LINE(170)
				result->z = (Float(z) / Float(w));
			}
			HX_STACK_LINE(170)
			vector = result;
		}
		HX_STACK_LINE(170)
		Float num = ((((source->x * matrix->m->__get((int)3)) + (source->y * matrix->m->__get((int)7))) + (source->z * matrix->m->__get((int)11))) + matrix->m->__get((int)15));		HX_STACK_VAR(num,"num");
		struct _Function_2_1{
			inline static bool Block( Float &num){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/tools/math/Ray.hx",170,0xc4302eb4)
				{
					HX_STACK_LINE(170)
					Float num1 = (num - 1.0);		HX_STACK_VAR(num1,"num1");
					HX_STACK_LINE(170)
					return (bool((-1.401298e-45 <= num1)) && bool((num1 <= 1.401298E-45)));
				}
				return null();
			}
		};
		HX_STACK_LINE(170)
		if ((_Function_2_1::Block(num))){
			HX_STACK_LINE(170)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				Float scale = (Float(1.0) / Float(num));		HX_STACK_VAR(scale,"scale");
				HX_STACK_LINE(170)
				_g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((vector->x * scale),(vector->y * scale),(vector->z * scale));
			}
			HX_STACK_LINE(170)
			vector = _g1;
		}
		HX_STACK_LINE(170)
		end = vector;
	}
	HX_STACK_LINE(172)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 direction = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((end->x - start->x),(end->y - start->y),(end->z - start->z));		HX_STACK_VAR(direction,"direction");
	HX_STACK_LINE(173)
	{
		HX_STACK_LINE(173)
		Float len = ::Math_obj::sqrt((((direction->x * direction->x) + (direction->y * direction->y)) + (direction->z * direction->z)));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(173)
		if (((len != (int)0))){
			HX_STACK_LINE(173)
			Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(173)
			hx::MultEq(direction->x,num);
			HX_STACK_LINE(173)
			hx::MultEq(direction->y,num);
			HX_STACK_LINE(173)
			hx::MultEq(direction->z,num);
		}
	}
	HX_STACK_LINE(175)
	return ::com::gamestudiohx::babylonhx::tools::math::Ray_obj::__new(start,direction);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Ray_obj,CreateNew,return )

::com::gamestudiohx::babylonhx::tools::math::Ray Ray_obj::Transform( ::com::gamestudiohx::babylonhx::tools::math::Ray ray,::com::gamestudiohx::babylonhx::tools::math::Matrix matrix){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Ray","Transform",0x179ba827,"com.gamestudiohx.babylonhx.tools.math.Ray.Transform","com/gamestudiohx/babylonhx/tools/math/Ray.hx",178,0xc4302eb4)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(179)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 newOrigin;		HX_STACK_VAR(newOrigin,"newOrigin");
	HX_STACK_LINE(179)
	{
		HX_STACK_LINE(179)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = ray->origin;		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(179)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			Float x = ((((vector->x * matrix->m->__get((int)0)) + (vector->y * matrix->m->__get((int)4))) + (vector->z * matrix->m->__get((int)8))) + matrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(179)
			Float y = ((((vector->x * matrix->m->__get((int)1)) + (vector->y * matrix->m->__get((int)5))) + (vector->z * matrix->m->__get((int)9))) + matrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(179)
			Float z = ((((vector->x * matrix->m->__get((int)2)) + (vector->y * matrix->m->__get((int)6))) + (vector->z * matrix->m->__get((int)10))) + matrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(179)
			Float w = ((((vector->x * matrix->m->__get((int)3)) + (vector->y * matrix->m->__get((int)7))) + (vector->z * matrix->m->__get((int)11))) + matrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(179)
			result->x = (Float(x) / Float(w));
			HX_STACK_LINE(179)
			result->y = (Float(y) / Float(w));
			HX_STACK_LINE(179)
			result->z = (Float(z) / Float(w));
		}
		HX_STACK_LINE(179)
		newOrigin = result;
	}
	HX_STACK_LINE(180)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 newDirection;		HX_STACK_VAR(newDirection,"newDirection");
	HX_STACK_LINE(180)
	{
		HX_STACK_LINE(180)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = ray->direction;		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(180)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			result->x = (((vector->x * matrix->m->__get((int)0)) + (vector->y * matrix->m->__get((int)4))) + (vector->z * matrix->m->__get((int)8)));
			HX_STACK_LINE(180)
			result->y = (((vector->x * matrix->m->__get((int)1)) + (vector->y * matrix->m->__get((int)5))) + (vector->z * matrix->m->__get((int)9)));
			HX_STACK_LINE(180)
			result->z = (((vector->x * matrix->m->__get((int)2)) + (vector->y * matrix->m->__get((int)6))) + (vector->z * matrix->m->__get((int)10)));
		}
		HX_STACK_LINE(180)
		newDirection = result;
	}
	HX_STACK_LINE(182)
	return ::com::gamestudiohx::babylonhx::tools::math::Ray_obj::__new(newOrigin,newDirection);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Ray_obj,Transform,return )


Ray_obj::Ray_obj()
{
}

void Ray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ray);
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(_edge1,"_edge1");
	HX_MARK_MEMBER_NAME(_edge2,"_edge2");
	HX_MARK_MEMBER_NAME(_pvec,"_pvec");
	HX_MARK_MEMBER_NAME(_tvec,"_tvec");
	HX_MARK_MEMBER_NAME(_qvec,"_qvec");
	HX_MARK_END_CLASS();
}

void Ray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(_edge1,"_edge1");
	HX_VISIT_MEMBER_NAME(_edge2,"_edge2");
	HX_VISIT_MEMBER_NAME(_pvec,"_pvec");
	HX_VISIT_MEMBER_NAME(_tvec,"_tvec");
	HX_VISIT_MEMBER_NAME(_qvec,"_qvec");
}

Dynamic Ray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pvec") ) { return _pvec; }
		if (HX_FIELD_EQ(inName,"_tvec") ) { return _tvec; }
		if (HX_FIELD_EQ(inName,"_qvec") ) { return _qvec; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"_edge1") ) { return _edge1; }
		if (HX_FIELD_EQ(inName,"_edge2") ) { return _edge2; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"CreateNew") ) { return CreateNew_dyn(); }
		if (HX_FIELD_EQ(inName,"Transform") ) { return Transform_dyn(); }
		if (HX_FIELD_EQ(inName,"direction") ) { return direction; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intersectsBox") ) { return intersectsBox_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"intersectsSphere") ) { return intersectsSphere_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"intersectsTriangle") ) { return intersectsTriangle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pvec") ) { _pvec=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tvec") ) { _tvec=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_qvec") ) { _qvec=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_edge1") ) { _edge1=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_edge2") ) { _edge2=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("direction"));
	outFields->push(HX_CSTRING("_edge1"));
	outFields->push(HX_CSTRING("_edge2"));
	outFields->push(HX_CSTRING("_pvec"));
	outFields->push(HX_CSTRING("_tvec"));
	outFields->push(HX_CSTRING("_qvec"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CreateNew"),
	HX_CSTRING("Transform"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Ray_obj,origin),HX_CSTRING("origin")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Ray_obj,direction),HX_CSTRING("direction")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Ray_obj,_edge1),HX_CSTRING("_edge1")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Ray_obj,_edge2),HX_CSTRING("_edge2")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Ray_obj,_pvec),HX_CSTRING("_pvec")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Ray_obj,_tvec),HX_CSTRING("_tvec")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Ray_obj,_qvec),HX_CSTRING("_qvec")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("origin"),
	HX_CSTRING("direction"),
	HX_CSTRING("_edge1"),
	HX_CSTRING("_edge2"),
	HX_CSTRING("_pvec"),
	HX_CSTRING("_tvec"),
	HX_CSTRING("_qvec"),
	HX_CSTRING("intersectsBox"),
	HX_CSTRING("intersectsSphere"),
	HX_CSTRING("intersectsTriangle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ray_obj::__mClass,"__mClass");
};

#endif

Class Ray_obj::__mClass;

void Ray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.tools.math.Ray"), hx::TCanCast< Ray_obj> ,sStaticFields,sMemberFields,
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

void Ray_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math
