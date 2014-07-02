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

Void BoundingBox_obj::__construct(::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingBox","new",0x58067669,"com.gamestudiohx.babylonhx.culling.BoundingBox.new","com/gamestudiohx/babylonhx/culling/BoundingBox.hx",28,0x67ab4509)
HX_STACK_THIS(this)
HX_STACK_ARG(minimum,"minimum")
HX_STACK_ARG(maximum,"maximum")
{
	HX_STACK_LINE(29)
	this->minimum = minimum;
	HX_STACK_LINE(30)
	this->maximum = maximum;
	HX_STACK_LINE(33)
	this->vectors = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(35)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->minimum;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(35)
		_g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
	}
	HX_STACK_LINE(35)
	this->vectors->push(_g);
	HX_STACK_LINE(36)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->maximum;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(36)
		_g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
	}
	HX_STACK_LINE(36)
	this->vectors->push(_g1);
	HX_STACK_LINE(38)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->minimum;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(38)
		_g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
	}
	HX_STACK_LINE(38)
	this->vectors->push(_g2);
	HX_STACK_LINE(39)
	this->vectors->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >()->x = this->maximum->x;
	HX_STACK_LINE(41)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->minimum;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(41)
		_g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
	}
	HX_STACK_LINE(41)
	this->vectors->push(_g3);
	HX_STACK_LINE(42)
	this->vectors->__get((int)3).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >()->y = this->maximum->y;
	HX_STACK_LINE(44)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->minimum;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(44)
		_g4 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
	}
	HX_STACK_LINE(44)
	this->vectors->push(_g4);
	HX_STACK_LINE(45)
	this->vectors->__get((int)4).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >()->z = this->maximum->z;
	HX_STACK_LINE(47)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->maximum;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(47)
		_g5 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
	}
	HX_STACK_LINE(47)
	this->vectors->push(_g5);
	HX_STACK_LINE(48)
	this->vectors->__get((int)5).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >()->z = this->minimum->z;
	HX_STACK_LINE(50)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->maximum;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(50)
		_g6 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
	}
	HX_STACK_LINE(50)
	this->vectors->push(_g6);
	HX_STACK_LINE(51)
	this->vectors->__get((int)6).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >()->x = this->minimum->x;
	HX_STACK_LINE(53)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->maximum;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(53)
		_g7 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
	}
	HX_STACK_LINE(53)
	this->vectors->push(_g7);
	HX_STACK_LINE(54)
	this->vectors->__get((int)7).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >()->y = this->minimum->y;
	HX_STACK_LINE(57)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g8;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = this->maximum;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(57)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->minimum;		HX_STACK_VAR(otherVector,"otherVector");
			HX_STACK_LINE(57)
			_this = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this1->x + otherVector->x),(_this1->y + otherVector->y),(_this1->z + otherVector->z));
		}
		HX_STACK_LINE(57)
		_g8 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this->x * 0.5),(_this->y * 0.5),(_this->z * 0.5));
	}
	HX_STACK_LINE(57)
	this->center = _g8;
	HX_STACK_LINE(58)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g9;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = this->maximum;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(58)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->minimum;		HX_STACK_VAR(otherVector,"otherVector");
			HX_STACK_LINE(58)
			_this = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this1->x - otherVector->x),(_this1->y - otherVector->y),(_this1->z - otherVector->z));
		}
		HX_STACK_LINE(58)
		_g9 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this->x * 0.5),(_this->y * 0.5),(_this->z * 0.5));
	}
	HX_STACK_LINE(58)
	this->_extends = _g9;
	HX_STACK_LINE(59)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g10 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(59)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g11 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(59)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g12 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(59)
	Array< ::Dynamic > _g13 = Array_obj< ::Dynamic >::__new().Add(_g10).Add(_g11).Add(_g12);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(59)
	this->directions = _g13;
	HX_STACK_LINE(62)
	this->vectorsWorld = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		int _g14 = (int)0;		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(63)
		int _g15 = this->vectors->length;		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(63)
		while((true)){
			HX_STACK_LINE(63)
			if ((!(((_g14 < _g15))))){
				HX_STACK_LINE(63)
				break;
			}
			HX_STACK_LINE(63)
			int index = (_g14)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(64)
			this->vectorsWorld[index] = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();
		}
	}
	HX_STACK_LINE(66)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g14 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(66)
	this->minimumWorld = _g14;
	HX_STACK_LINE(67)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g15 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(67)
	this->maximumWorld = _g15;
	HX_STACK_LINE(69)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g16;		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(69)
	{
		HX_STACK_LINE(69)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(69)
		result->m[(int)0] = 1.0;
		HX_STACK_LINE(69)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(69)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(69)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(69)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(69)
		result->m[(int)5] = 1.0;
		HX_STACK_LINE(69)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(69)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(69)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(69)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(69)
		result->m[(int)10] = 1.0;
		HX_STACK_LINE(69)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(69)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(69)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(69)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(69)
		result->m[(int)15] = 1.0;
		HX_STACK_LINE(69)
		_g16 = result;
	}
	HX_STACK_LINE(69)
	this->_update(_g16);
}
;
	return null();
}

//BoundingBox_obj::~BoundingBox_obj() { }

Dynamic BoundingBox_obj::__CreateEmpty() { return  new BoundingBox_obj; }
hx::ObjectPtr< BoundingBox_obj > BoundingBox_obj::__new(::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum)
{  hx::ObjectPtr< BoundingBox_obj > result = new BoundingBox_obj();
	result->__construct(minimum,maximum);
	return result;}

Dynamic BoundingBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BoundingBox_obj > result = new BoundingBox_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void BoundingBox_obj::_update( ::com::gamestudiohx::babylonhx::tools::math::Matrix world){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingBox","_update",0xc1157631,"com.gamestudiohx.babylonhx.culling.BoundingBox._update","com/gamestudiohx/babylonhx/culling/BoundingBox.hx",72,0x67ab4509)
		HX_STACK_THIS(this)
		HX_STACK_ARG(world,"world")
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->minimumWorld;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(73)
			result->x = ::Math_obj::POSITIVE_INFINITY;
			HX_STACK_LINE(73)
			result->y = ::Math_obj::POSITIVE_INFINITY;
			HX_STACK_LINE(73)
			result->z = ::Math_obj::POSITIVE_INFINITY;
		}
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->maximumWorld;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(74)
			result->x = ::Math_obj::NEGATIVE_INFINITY;
			HX_STACK_LINE(74)
			result->y = ::Math_obj::NEGATIVE_INFINITY;
			HX_STACK_LINE(74)
			result->z = ::Math_obj::NEGATIVE_INFINITY;
		}
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(76)
			int _g = this->vectors->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(76)
			while((true)){
				HX_STACK_LINE(76)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(76)
					break;
				}
				HX_STACK_LINE(76)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(77)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 v = this->vectorsWorld->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->vectors->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(vector,"vector");
					HX_STACK_LINE(78)
					Float x = ((((vector->x * world->m->__get((int)0)) + (vector->y * world->m->__get((int)4))) + (vector->z * world->m->__get((int)8))) + world->m->__get((int)12));		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(78)
					Float y = ((((vector->x * world->m->__get((int)1)) + (vector->y * world->m->__get((int)5))) + (vector->z * world->m->__get((int)9))) + world->m->__get((int)13));		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(78)
					Float z = ((((vector->x * world->m->__get((int)2)) + (vector->y * world->m->__get((int)6))) + (vector->z * world->m->__get((int)10))) + world->m->__get((int)14));		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(78)
					Float w = ((((vector->x * world->m->__get((int)3)) + (vector->y * world->m->__get((int)7))) + (vector->z * world->m->__get((int)11))) + world->m->__get((int)15));		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(78)
					v->x = (Float(x) / Float(w));
					HX_STACK_LINE(78)
					v->y = (Float(y) / Float(w));
					HX_STACK_LINE(78)
					v->z = (Float(z) / Float(w));
				}
				HX_STACK_LINE(80)
				if (((v->x < this->minimumWorld->x))){
					HX_STACK_LINE(81)
					this->minimumWorld->x = v->x;
				}
				HX_STACK_LINE(82)
				if (((v->y < this->minimumWorld->y))){
					HX_STACK_LINE(83)
					this->minimumWorld->y = v->y;
				}
				HX_STACK_LINE(84)
				if (((v->z < this->minimumWorld->z))){
					HX_STACK_LINE(85)
					this->minimumWorld->z = v->z;
				}
				HX_STACK_LINE(87)
				if (((v->x > this->maximumWorld->x))){
					HX_STACK_LINE(88)
					this->maximumWorld->x = v->x;
				}
				HX_STACK_LINE(89)
				if (((v->y > this->maximumWorld->y))){
					HX_STACK_LINE(90)
					this->maximumWorld->y = v->y;
				}
				HX_STACK_LINE(91)
				if (((v->z > this->maximumWorld->z))){
					HX_STACK_LINE(92)
					this->maximumWorld->z = v->z;
				}
			}
		}
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->maximumWorld;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(96)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->minimumWorld;		HX_STACK_VAR(otherVector,"otherVector");
			HX_STACK_LINE(96)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->center;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(96)
			result->x = (_this->x + otherVector->x);
			HX_STACK_LINE(96)
			result->y = (_this->y + otherVector->y);
			HX_STACK_LINE(96)
			result->z = (_this->z + otherVector->z);
			HX_STACK_LINE(96)
			result;
		}
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->center;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(97)
			hx::MultEq(_this->x,0.5);
			HX_STACK_LINE(97)
			hx::MultEq(_this->y,0.5);
			HX_STACK_LINE(97)
			hx::MultEq(_this->z,0.5);
		}
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			Array< Float > array = world->m;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(99)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->directions->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(99)
			result->x = array->__get((int)0);
			HX_STACK_LINE(99)
			result->y = array->__get((int)1);
			HX_STACK_LINE(99)
			result->z = array->__get((int)2);
		}
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			Array< Float > array = world->m;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(100)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->directions->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(100)
			result->x = array->__get((int)4);
			HX_STACK_LINE(100)
			result->y = array->__get((int)5);
			HX_STACK_LINE(100)
			result->z = array->__get((int)6);
		}
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			Array< Float > array = world->m;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(101)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->directions->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(101)
			result->x = array->__get((int)8);
			HX_STACK_LINE(101)
			result->y = array->__get((int)9);
			HX_STACK_LINE(101)
			result->z = array->__get((int)10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,_update,(void))

bool BoundingBox_obj::isInFrustrum( Array< ::Dynamic > frustumPlanes){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingBox","isInFrustrum",0xf6ffed66,"com.gamestudiohx.babylonhx.culling.BoundingBox.isInFrustrum","com/gamestudiohx/babylonhx/culling/BoundingBox.hx",105,0x67ab4509)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frustumPlanes,"frustumPlanes")
	HX_STACK_LINE(105)
	return ::com::gamestudiohx::babylonhx::culling::BoundingBox_obj::IsInFrustum(this->vectorsWorld,frustumPlanes);
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,isInFrustrum,return )

bool BoundingBox_obj::intersectsPoint( ::com::gamestudiohx::babylonhx::tools::math::Vector3 point){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingBox","intersectsPoint",0xf6072485,"com.gamestudiohx.babylonhx.culling.BoundingBox.intersectsPoint","com/gamestudiohx/babylonhx/culling/BoundingBox.hx",108,0x67ab4509)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(109)
	if (((bool((this->maximumWorld->x < point->x)) || bool((this->minimumWorld->x > point->x))))){
		HX_STACK_LINE(110)
		return false;
	}
	HX_STACK_LINE(112)
	if (((bool((this->maximumWorld->y < point->y)) || bool((this->minimumWorld->y > point->y))))){
		HX_STACK_LINE(113)
		return false;
	}
	HX_STACK_LINE(115)
	if (((bool((this->maximumWorld->z < point->z)) || bool((this->minimumWorld->z > point->z))))){
		HX_STACK_LINE(116)
		return false;
	}
	HX_STACK_LINE(118)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,intersectsPoint,return )

bool BoundingBox_obj::intersectsSphere( ::com::gamestudiohx::babylonhx::culling::BoundingSphere sphere){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingBox","intersectsSphere",0x16016d38,"com.gamestudiohx.babylonhx.culling.BoundingBox.intersectsSphere","com/gamestudiohx/babylonhx/culling/BoundingBox.hx",121,0x67ab4509)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sphere,"sphere")
	HX_STACK_LINE(122)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 vector;		HX_STACK_VAR(vector,"vector");
	HX_STACK_LINE(122)
	{
		HX_STACK_LINE(122)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 value = sphere->centerWorld;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(122)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 min = this->minimumWorld;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(122)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 max = this->maximumWorld;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(122)
		Float x = value->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(122)
		if (((x > max->x))){
			HX_STACK_LINE(122)
			x = max->x;
		}
		else{
			HX_STACK_LINE(122)
			x = x;
		}
		HX_STACK_LINE(122)
		if (((x < min->x))){
			HX_STACK_LINE(122)
			x = min->x;
		}
		else{
			HX_STACK_LINE(122)
			x = x;
		}
		HX_STACK_LINE(122)
		Float y = value->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(122)
		if (((y > max->y))){
			HX_STACK_LINE(122)
			y = max->y;
		}
		else{
			HX_STACK_LINE(122)
			y = y;
		}
		HX_STACK_LINE(122)
		if (((y < min->y))){
			HX_STACK_LINE(122)
			y = min->y;
		}
		else{
			HX_STACK_LINE(122)
			y = y;
		}
		HX_STACK_LINE(122)
		Float z = value->z;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(122)
		if (((z > max->z))){
			HX_STACK_LINE(122)
			z = max->z;
		}
		else{
			HX_STACK_LINE(122)
			z = z;
		}
		HX_STACK_LINE(122)
		if (((z < min->z))){
			HX_STACK_LINE(122)
			z = min->z;
		}
		else{
			HX_STACK_LINE(122)
			z = z;
		}
		HX_STACK_LINE(122)
		vector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
	}
	HX_STACK_LINE(123)
	Float num;		HX_STACK_VAR(num,"num");
	HX_STACK_LINE(123)
	{
		HX_STACK_LINE(123)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 value1 = sphere->centerWorld;		HX_STACK_VAR(value1,"value1");
		HX_STACK_LINE(123)
		Float x = (value1->x - vector->x);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(123)
		Float y = (value1->y - vector->y);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(123)
		Float z = (value1->z - vector->z);		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(123)
		num = (((x * x) + (y * y)) + (z * z));
	}
	HX_STACK_LINE(124)
	return (num <= (sphere->radiusWorld * sphere->radiusWorld));
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingBox_obj,intersectsSphere,return )

bool BoundingBox_obj::intersectsMinMax( ::com::gamestudiohx::babylonhx::tools::math::Vector3 min,::com::gamestudiohx::babylonhx::tools::math::Vector3 max){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingBox","intersectsMinMax",0xabf4365d,"com.gamestudiohx.babylonhx.culling.BoundingBox.intersectsMinMax","com/gamestudiohx/babylonhx/culling/BoundingBox.hx",127,0x67ab4509)
	HX_STACK_THIS(this)
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(128)
	if (((bool((this->maximumWorld->x < min->x)) || bool((this->minimumWorld->x > max->x))))){
		HX_STACK_LINE(129)
		return false;
	}
	HX_STACK_LINE(131)
	if (((bool((this->maximumWorld->y < min->y)) || bool((this->minimumWorld->y > max->y))))){
		HX_STACK_LINE(132)
		return false;
	}
	HX_STACK_LINE(134)
	if (((bool((this->maximumWorld->z < min->z)) || bool((this->minimumWorld->z > max->z))))){
		HX_STACK_LINE(135)
		return false;
	}
	HX_STACK_LINE(137)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(BoundingBox_obj,intersectsMinMax,return )

bool BoundingBox_obj::intersects( ::com::gamestudiohx::babylonhx::culling::BoundingBox box0,::com::gamestudiohx::babylonhx::culling::BoundingBox box1){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingBox","intersects",0x7f3fdfcb,"com.gamestudiohx.babylonhx.culling.BoundingBox.intersects","com/gamestudiohx/babylonhx/culling/BoundingBox.hx",140,0x67ab4509)
	HX_STACK_ARG(box0,"box0")
	HX_STACK_ARG(box1,"box1")
	HX_STACK_LINE(141)
	if (((bool((box0->maximumWorld->x < box1->minimumWorld->x)) || bool((box0->minimumWorld->x > box1->maximumWorld->x))))){
		HX_STACK_LINE(142)
		return false;
	}
	HX_STACK_LINE(144)
	if (((bool((box0->maximumWorld->y < box1->minimumWorld->y)) || bool((box0->minimumWorld->y > box1->maximumWorld->y))))){
		HX_STACK_LINE(145)
		return false;
	}
	HX_STACK_LINE(147)
	if (((bool((box0->maximumWorld->z < box1->minimumWorld->z)) || bool((box0->minimumWorld->z > box1->maximumWorld->z))))){
		HX_STACK_LINE(148)
		return false;
	}
	HX_STACK_LINE(150)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BoundingBox_obj,intersects,return )

bool BoundingBox_obj::IsInFrustum( Array< ::Dynamic > boundingVectors,Array< ::Dynamic > frustumPlanes){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.BoundingBox","IsInFrustum",0xc7752f9c,"com.gamestudiohx.babylonhx.culling.BoundingBox.IsInFrustum","com/gamestudiohx/babylonhx/culling/BoundingBox.hx",153,0x67ab4509)
	HX_STACK_ARG(boundingVectors,"boundingVectors")
	HX_STACK_ARG(frustumPlanes,"frustumPlanes")
	HX_STACK_LINE(154)
	{
		HX_STACK_LINE(154)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(154)
		while((true)){
			HX_STACK_LINE(154)
			if ((!(((_g < (int)6))))){
				HX_STACK_LINE(154)
				break;
			}
			HX_STACK_LINE(154)
			int p = (_g)++;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(155)
			int inCount = (int)8;		HX_STACK_VAR(inCount,"inCount");
			HX_STACK_LINE(157)
			{
				HX_STACK_LINE(157)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(157)
				while((true)){
					HX_STACK_LINE(157)
					if ((!(((_g1 < (int)8))))){
						HX_STACK_LINE(157)
						break;
					}
					HX_STACK_LINE(157)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					struct _Function_5_1{
						inline static Float Block( int &i,Array< ::Dynamic > &frustumPlanes,int &p,Array< ::Dynamic > &boundingVectors){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/culling/BoundingBox.hx",158,0x67ab4509)
							{
								HX_STACK_LINE(158)
								::com::gamestudiohx::babylonhx::tools::math::Plane _this = frustumPlanes->__get(p).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >();		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(158)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 point = boundingVectors->__get(i).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(point,"point");
								HX_STACK_LINE(158)
								return ((((_this->normal->x * point->x) + (_this->normal->y * point->y)) + (_this->normal->z * point->z)) + _this->d);
							}
							return null();
						}
					};
					HX_STACK_LINE(158)
					if (((_Function_5_1::Block(i,frustumPlanes,p,boundingVectors) < (int)0))){
						HX_STACK_LINE(159)
						--(inCount);
					}
					else{
						HX_STACK_LINE(161)
						break;
					}
				}
			}
			HX_STACK_LINE(164)
			if (((inCount == (int)0))){
				HX_STACK_LINE(165)
				return false;
			}
		}
	}
	HX_STACK_LINE(167)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BoundingBox_obj,IsInFrustum,return )


BoundingBox_obj::BoundingBox_obj()
{
}

void BoundingBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BoundingBox);
	HX_MARK_MEMBER_NAME(minimum,"minimum");
	HX_MARK_MEMBER_NAME(maximum,"maximum");
	HX_MARK_MEMBER_NAME(vectors,"vectors");
	HX_MARK_MEMBER_NAME(vectorsWorld,"vectorsWorld");
	HX_MARK_MEMBER_NAME(center,"center");
	HX_MARK_MEMBER_NAME(_extends,"_extends");
	HX_MARK_MEMBER_NAME(directions,"directions");
	HX_MARK_MEMBER_NAME(minimumWorld,"minimumWorld");
	HX_MARK_MEMBER_NAME(maximumWorld,"maximumWorld");
	HX_MARK_END_CLASS();
}

void BoundingBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(minimum,"minimum");
	HX_VISIT_MEMBER_NAME(maximum,"maximum");
	HX_VISIT_MEMBER_NAME(vectors,"vectors");
	HX_VISIT_MEMBER_NAME(vectorsWorld,"vectorsWorld");
	HX_VISIT_MEMBER_NAME(center,"center");
	HX_VISIT_MEMBER_NAME(_extends,"_extends");
	HX_VISIT_MEMBER_NAME(directions,"directions");
	HX_VISIT_MEMBER_NAME(minimumWorld,"minimumWorld");
	HX_VISIT_MEMBER_NAME(maximumWorld,"maximumWorld");
}

Dynamic BoundingBox_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { return center; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minimum") ) { return minimum; }
		if (HX_FIELD_EQ(inName,"maximum") ) { return maximum; }
		if (HX_FIELD_EQ(inName,"vectors") ) { return vectors; }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_extends") ) { return _extends; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return intersects_dyn(); }
		if (HX_FIELD_EQ(inName,"directions") ) { return directions; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"IsInFrustum") ) { return IsInFrustum_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vectorsWorld") ) { return vectorsWorld; }
		if (HX_FIELD_EQ(inName,"minimumWorld") ) { return minimumWorld; }
		if (HX_FIELD_EQ(inName,"maximumWorld") ) { return maximumWorld; }
		if (HX_FIELD_EQ(inName,"isInFrustrum") ) { return isInFrustrum_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"intersectsPoint") ) { return intersectsPoint_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"intersectsSphere") ) { return intersectsSphere_dyn(); }
		if (HX_FIELD_EQ(inName,"intersectsMinMax") ) { return intersectsMinMax_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BoundingBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { center=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minimum") ) { minimum=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maximum") ) { maximum=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vectors") ) { vectors=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_extends") ) { _extends=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"directions") ) { directions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vectorsWorld") ) { vectorsWorld=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minimumWorld") ) { minimumWorld=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maximumWorld") ) { maximumWorld=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoundingBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("minimum"));
	outFields->push(HX_CSTRING("maximum"));
	outFields->push(HX_CSTRING("vectors"));
	outFields->push(HX_CSTRING("vectorsWorld"));
	outFields->push(HX_CSTRING("center"));
	outFields->push(HX_CSTRING("_extends"));
	outFields->push(HX_CSTRING("directions"));
	outFields->push(HX_CSTRING("minimumWorld"));
	outFields->push(HX_CSTRING("maximumWorld"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("intersects"),
	HX_CSTRING("IsInFrustum"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(BoundingBox_obj,minimum),HX_CSTRING("minimum")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(BoundingBox_obj,maximum),HX_CSTRING("maximum")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(BoundingBox_obj,vectors),HX_CSTRING("vectors")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(BoundingBox_obj,vectorsWorld),HX_CSTRING("vectorsWorld")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(BoundingBox_obj,center),HX_CSTRING("center")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(BoundingBox_obj,_extends),HX_CSTRING("_extends")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(BoundingBox_obj,directions),HX_CSTRING("directions")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(BoundingBox_obj,minimumWorld),HX_CSTRING("minimumWorld")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(BoundingBox_obj,maximumWorld),HX_CSTRING("maximumWorld")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("minimum"),
	HX_CSTRING("maximum"),
	HX_CSTRING("vectors"),
	HX_CSTRING("vectorsWorld"),
	HX_CSTRING("center"),
	HX_CSTRING("_extends"),
	HX_CSTRING("directions"),
	HX_CSTRING("minimumWorld"),
	HX_CSTRING("maximumWorld"),
	HX_CSTRING("_update"),
	HX_CSTRING("isInFrustrum"),
	HX_CSTRING("intersectsPoint"),
	HX_CSTRING("intersectsSphere"),
	HX_CSTRING("intersectsMinMax"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BoundingBox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoundingBox_obj::__mClass,"__mClass");
};

#endif

Class BoundingBox_obj::__mClass;

void BoundingBox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.culling.BoundingBox"), hx::TCanCast< BoundingBox_obj> ,sStaticFields,sMemberFields,
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

void BoundingBox_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace culling
