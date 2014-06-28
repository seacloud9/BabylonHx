#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector2
#include <com/gamestudiohx/babylonhx/tools/math/Vector2.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{
namespace math{

Void Vector2_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","new",0x4bef9b20,"com.gamestudiohx.babylonhx.tools.math.Vector2.new","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",16,0xe9bfbfaf)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(17)
	this->x = x;
	HX_STACK_LINE(18)
	this->y = y;
}
;
	return null();
}

//Vector2_obj::~Vector2_obj() { }

Dynamic Vector2_obj::__CreateEmpty() { return  new Vector2_obj; }
hx::ObjectPtr< Vector2_obj > Vector2_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Vector2_obj > result = new Vector2_obj();
	result->__construct(x,y);
	return result;}

Dynamic Vector2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector2_obj > result = new Vector2_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Vector2_obj::toString( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","toString",0xd65c0dec,"com.gamestudiohx.babylonhx.tools.math.Vector2.toString","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",22,0xe9bfbfaf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	return ((((HX_CSTRING("{X: ") + this->x) + HX_CSTRING(" Y:")) + this->y) + HX_CSTRING("}"));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,toString,return )

::com::gamestudiohx::babylonhx::tools::math::Vector2 Vector2_obj::add( ::com::gamestudiohx::babylonhx::tools::math::Vector2 otherVector){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","add",0x4be5bce1,"com.gamestudiohx.babylonhx.tools.math.Vector2.add","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",27,0xe9bfbfaf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherVector,"otherVector")
	HX_STACK_LINE(27)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new((this->x + otherVector->x),(this->y + otherVector->y));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,add,return )

Array< Float > Vector2_obj::asArray( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","asArray",0xa8a18607,"com.gamestudiohx.babylonhx.tools.math.Vector2.asArray","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",30,0xe9bfbfaf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	Array< Float > result = Array_obj< Float >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		result[(int)0] = this->x;
		HX_STACK_LINE(32)
		result[(int)1] = this->y;
	}
	HX_STACK_LINE(33)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,asArray,return )

Void Vector2_obj::toArray( Array< Float > array,hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","toArray",0x254be4de,"com.gamestudiohx.babylonhx.tools.math.Vector2.toArray","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",36,0xe9bfbfaf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(37)
		array[index] = this->x;
		HX_STACK_LINE(38)
		array[(index + (int)1)] = this->y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,toArray,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector2 Vector2_obj::subtract( ::com::gamestudiohx::babylonhx::tools::math::Vector2 otherVector){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","subtract",0x95feb254,"com.gamestudiohx.babylonhx.tools.math.Vector2.subtract","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",42,0xe9bfbfaf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherVector,"otherVector")
	HX_STACK_LINE(42)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new((this->x - otherVector->x),(this->y - otherVector->y));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,subtract,return )

::com::gamestudiohx::babylonhx::tools::math::Vector2 Vector2_obj::negate( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","negate",0x1260af02,"com.gamestudiohx.babylonhx.tools.math.Vector2.negate","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",46,0xe9bfbfaf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new(-(this->x),-(this->y));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,negate,return )

Void Vector2_obj::scaleInPlace( Float scale){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","scaleInPlace",0xdc094678,"com.gamestudiohx.babylonhx.tools.math.Vector2.scaleInPlace","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",49,0xe9bfbfaf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scale,"scale")
		HX_STACK_LINE(50)
		hx::MultEq(this->x,scale);
		HX_STACK_LINE(51)
		hx::MultEq(this->y,scale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,scaleInPlace,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector2 Vector2_obj::scale( Float scale){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","scale",0xbb02c94a,"com.gamestudiohx.babylonhx.tools.math.Vector2.scale","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",55,0xe9bfbfaf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scale,"scale")
	HX_STACK_LINE(55)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new((this->x * scale),(this->y * scale));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,scale,return )

bool Vector2_obj::equals( ::com::gamestudiohx::babylonhx::tools::math::Vector2 otherVector){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","equals",0x6b3a5b7f,"com.gamestudiohx.babylonhx.tools.math.Vector2.equals","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",59,0xe9bfbfaf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherVector,"otherVector")
	HX_STACK_LINE(59)
	return (bool((this->x == otherVector->x)) && bool((this->y == otherVector->y)));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,equals,return )

Float Vector2_obj::length( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","length",0x4a4f0226,"com.gamestudiohx.babylonhx.tools.math.Vector2.length","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",63,0xe9bfbfaf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	return ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,length,return )

Float Vector2_obj::lengthSquared( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","lengthSquared",0x5811dfa1,"com.gamestudiohx.babylonhx.tools.math.Vector2.lengthSquared","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",67,0xe9bfbfaf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	return ((this->x * this->x) + (this->y * this->y));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,lengthSquared,return )

Void Vector2_obj::normalize( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","normalize",0x3d49924d,"com.gamestudiohx.babylonhx.tools.math.Vector2.normalize","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",70,0xe9bfbfaf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		Float len = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(73)
		if (((len != (int)0))){
			HX_STACK_LINE(74)
			Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(76)
			hx::MultEq(this->x,num);
			HX_STACK_LINE(77)
			hx::MultEq(this->y,num);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,normalize,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector2 Vector2_obj::clone( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","clone",0x8a970e1d,"com.gamestudiohx.babylonhx.tools.math.Vector2.clone","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",82,0xe9bfbfaf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new(this->x,this->y);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,clone,return )

::com::gamestudiohx::babylonhx::tools::math::Vector2 Vector2_obj::Zero( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","Zero",0x187fd888,"com.gamestudiohx.babylonhx.tools.math.Vector2.Zero","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",88,0xe9bfbfaf)
	HX_STACK_LINE(88)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new((int)0,(int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,Zero,return )

::com::gamestudiohx::babylonhx::tools::math::Vector2 Vector2_obj::CatmullRom( ::com::gamestudiohx::babylonhx::tools::math::Vector2 value1,::com::gamestudiohx::babylonhx::tools::math::Vector2 value2,::com::gamestudiohx::babylonhx::tools::math::Vector2 value3,::com::gamestudiohx::babylonhx::tools::math::Vector2 value4,Float amount){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","CatmullRom",0x00c5ff12,"com.gamestudiohx.babylonhx.tools.math.Vector2.CatmullRom","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",91,0xe9bfbfaf)
	HX_STACK_ARG(value1,"value1")
	HX_STACK_ARG(value2,"value2")
	HX_STACK_ARG(value3,"value3")
	HX_STACK_ARG(value4,"value4")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_LINE(92)
	Float squared = (amount * amount);		HX_STACK_VAR(squared,"squared");
	HX_STACK_LINE(93)
	Float cubed = (amount * squared);		HX_STACK_VAR(cubed,"cubed");
	HX_STACK_LINE(95)
	Float x = (0.5 * (((((2.0 * value2->x) + (((-(value1->x) + value3->x)) * amount)) + ((((((2.0 * value1->x) - (5.0 * value2->x)) + (4.0 * value3->x)) - value4->x)) * squared)) + (((((-(value1->x) + (3.0 * value2->x)) - (3.0 * value3->x)) + value4->x)) * cubed))));		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(99)
	Float y = (0.5 * (((((2.0 * value2->y) + (((-(value1->y) + value3->y)) * amount)) + ((((((2.0 * value1->y) - (5.0 * value2->y)) + (4.0 * value3->y)) - value4->y)) * squared)) + (((((-(value1->y) + (3.0 * value2->y)) - (3.0 * value3->y)) + value4->y)) * cubed))));		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(103)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new(x,y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Vector2_obj,CatmullRom,return )

::com::gamestudiohx::babylonhx::tools::math::Vector2 Vector2_obj::Clamp( ::com::gamestudiohx::babylonhx::tools::math::Vector2 value,::com::gamestudiohx::babylonhx::tools::math::Vector2 min,::com::gamestudiohx::babylonhx::tools::math::Vector2 max){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","Clamp",0x1db9dd9b,"com.gamestudiohx.babylonhx.tools.math.Vector2.Clamp","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",106,0xe9bfbfaf)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(107)
	Float x = value->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(108)
	if (((x > max->x))){
		HX_STACK_LINE(108)
		x = max->x;
	}
	else{
		HX_STACK_LINE(108)
		x = x;
	}
	HX_STACK_LINE(109)
	if (((x < min->x))){
		HX_STACK_LINE(109)
		x = min->x;
	}
	else{
		HX_STACK_LINE(109)
		x = x;
	}
	HX_STACK_LINE(111)
	Float y = value->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(112)
	if (((y > max->y))){
		HX_STACK_LINE(112)
		y = max->y;
	}
	else{
		HX_STACK_LINE(112)
		y = y;
	}
	HX_STACK_LINE(113)
	if (((y < min->y))){
		HX_STACK_LINE(113)
		y = min->y;
	}
	else{
		HX_STACK_LINE(113)
		y = y;
	}
	HX_STACK_LINE(115)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new(x,y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector2_obj,Clamp,return )

::com::gamestudiohx::babylonhx::tools::math::Vector2 Vector2_obj::Hermite( ::com::gamestudiohx::babylonhx::tools::math::Vector2 value1,::com::gamestudiohx::babylonhx::tools::math::Vector2 tangent1,::com::gamestudiohx::babylonhx::tools::math::Vector2 value2,::com::gamestudiohx::babylonhx::tools::math::Vector2 tangent2,Float amount){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","Hermite",0x335777c2,"com.gamestudiohx.babylonhx.tools.math.Vector2.Hermite","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",118,0xe9bfbfaf)
	HX_STACK_ARG(value1,"value1")
	HX_STACK_ARG(tangent1,"tangent1")
	HX_STACK_ARG(value2,"value2")
	HX_STACK_ARG(tangent2,"tangent2")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_LINE(119)
	Float squared = (amount * amount);		HX_STACK_VAR(squared,"squared");
	HX_STACK_LINE(120)
	Float cubed = (amount * squared);		HX_STACK_VAR(cubed,"cubed");
	HX_STACK_LINE(121)
	Float part1 = (((2.0 * cubed) - (3.0 * squared)) + 1.0);		HX_STACK_VAR(part1,"part1");
	HX_STACK_LINE(122)
	Float part2 = ((-2. * cubed) + (3.0 * squared));		HX_STACK_VAR(part2,"part2");
	HX_STACK_LINE(123)
	Float part3 = ((cubed - (2.0 * squared)) + amount);		HX_STACK_VAR(part3,"part3");
	HX_STACK_LINE(124)
	Float part4 = (cubed - squared);		HX_STACK_VAR(part4,"part4");
	HX_STACK_LINE(126)
	Float _x = ((((value1->x * part1) + (value2->x * part2)) + (tangent1->x * part3)) + (tangent2->x * part4));		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(127)
	Float _y = ((((value1->y * part1) + (value2->y * part2)) + (tangent1->y * part3)) + (tangent2->y * part4));		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(129)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new(_x,_y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Vector2_obj,Hermite,return )

::com::gamestudiohx::babylonhx::tools::math::Vector2 Vector2_obj::Lerp( ::com::gamestudiohx::babylonhx::tools::math::Vector2 start,::com::gamestudiohx::babylonhx::tools::math::Vector2 end,Float amount){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","Lerp",0x0f3edbd7,"com.gamestudiohx.babylonhx.tools.math.Vector2.Lerp","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",132,0xe9bfbfaf)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_LINE(133)
	Float _x = (start->x + (((end->x - start->x)) * amount));		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(134)
	Float _y = (start->y + (((end->y - start->y)) * amount));		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(136)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new(_x,_y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector2_obj,Lerp,return )

Float Vector2_obj::Dot( ::com::gamestudiohx::babylonhx::tools::math::Vector2 left,::com::gamestudiohx::babylonhx::tools::math::Vector2 right){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","Dot",0x4bcfc529,"com.gamestudiohx.babylonhx.tools.math.Vector2.Dot","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",140,0xe9bfbfaf)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_LINE(140)
	return ((left->x * right->x) + (left->y * right->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,Dot,return )

::com::gamestudiohx::babylonhx::tools::math::Vector2 Vector2_obj::Normalize( ::com::gamestudiohx::babylonhx::tools::math::Vector2 vector){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","Normalize",0xdf1c722d,"com.gamestudiohx.babylonhx.tools.math.Vector2.Normalize","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",143,0xe9bfbfaf)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(144)
	::com::gamestudiohx::babylonhx::tools::math::Vector2 newVector = ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new(vector->x,vector->y);		HX_STACK_VAR(newVector,"newVector");
	HX_STACK_LINE(145)
	{
		HX_STACK_LINE(145)
		Float len = ::Math_obj::sqrt(((newVector->x * newVector->x) + (newVector->y * newVector->y)));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(145)
		if (((len != (int)0))){
			HX_STACK_LINE(145)
			Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(145)
			hx::MultEq(newVector->x,num);
			HX_STACK_LINE(145)
			hx::MultEq(newVector->y,num);
		}
	}
	HX_STACK_LINE(146)
	return newVector;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,Normalize,return )

::com::gamestudiohx::babylonhx::tools::math::Vector2 Vector2_obj::Minimize( ::com::gamestudiohx::babylonhx::tools::math::Vector2 left,::com::gamestudiohx::babylonhx::tools::math::Vector2 right){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","Minimize",0x9918387e,"com.gamestudiohx.babylonhx.tools.math.Vector2.Minimize","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",149,0xe9bfbfaf)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_LINE(150)
	Float _x;		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(150)
	if (((left->x < right->x))){
		HX_STACK_LINE(150)
		_x = left->x;
	}
	else{
		HX_STACK_LINE(150)
		_x = right->x;
	}
	HX_STACK_LINE(151)
	Float _y;		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(151)
	if (((left->y < right->y))){
		HX_STACK_LINE(151)
		_y = left->y;
	}
	else{
		HX_STACK_LINE(151)
		_y = right->y;
	}
	HX_STACK_LINE(153)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new(_x,_y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,Minimize,return )

::com::gamestudiohx::babylonhx::tools::math::Vector2 Vector2_obj::Maximize( ::com::gamestudiohx::babylonhx::tools::math::Vector2 left,::com::gamestudiohx::babylonhx::tools::math::Vector2 right){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","Maximize",0x4bfe1e2c,"com.gamestudiohx.babylonhx.tools.math.Vector2.Maximize","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",156,0xe9bfbfaf)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_LINE(157)
	Float _x;		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(157)
	if (((left->x > right->x))){
		HX_STACK_LINE(157)
		_x = left->x;
	}
	else{
		HX_STACK_LINE(157)
		_x = right->x;
	}
	HX_STACK_LINE(158)
	Float _y;		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(158)
	if (((left->y > right->y))){
		HX_STACK_LINE(158)
		_y = left->y;
	}
	else{
		HX_STACK_LINE(158)
		_y = right->y;
	}
	HX_STACK_LINE(160)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new(_x,_y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,Maximize,return )

::com::gamestudiohx::babylonhx::tools::math::Vector2 Vector2_obj::Transform( ::com::gamestudiohx::babylonhx::tools::math::Vector2 vector,::com::gamestudiohx::babylonhx::tools::math::Matrix transformation){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","Transform",0x790e680c,"com.gamestudiohx.babylonhx.tools.math.Vector2.Transform","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",163,0xe9bfbfaf)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(transformation,"transformation")
	HX_STACK_LINE(164)
	Float _x = ((vector->x * transformation->m->__get((int)0)) + (vector->y * transformation->m->__get((int)4)));		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(165)
	Float _y = ((vector->x * transformation->m->__get((int)1)) + (vector->y * transformation->m->__get((int)5)));		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(167)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new(_x,_y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,Transform,return )

Float Vector2_obj::Distance( ::com::gamestudiohx::babylonhx::tools::math::Vector2 value1,::com::gamestudiohx::babylonhx::tools::math::Vector2 value2){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","Distance",0xe3988c95,"com.gamestudiohx.babylonhx.tools.math.Vector2.Distance","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",171,0xe9bfbfaf)
	HX_STACK_ARG(value1,"value1")
	HX_STACK_ARG(value2,"value2")
	struct _Function_1_1{
		inline static Float Block( ::com::gamestudiohx::babylonhx::tools::math::Vector2 &value1,::com::gamestudiohx::babylonhx::tools::math::Vector2 &value2){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",171,0xe9bfbfaf)
			{
				HX_STACK_LINE(171)
				Float _x = (value1->x - value2->x);		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(171)
				Float _y = (value1->y - value2->y);		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(171)
				return ((_x * _x) + (_y * _y));
			}
			return null();
		}
	};
	HX_STACK_LINE(171)
	return ::Math_obj::sqrt(_Function_1_1::Block(value1,value2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,Distance,return )

Float Vector2_obj::DistanceSquared( ::com::gamestudiohx::babylonhx::tools::math::Vector2 value1,::com::gamestudiohx::babylonhx::tools::math::Vector2 value2){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector2","DistanceSquared",0x684d1112,"com.gamestudiohx.babylonhx.tools.math.Vector2.DistanceSquared","com/gamestudiohx/babylonhx/tools/math/Vector2.hx",174,0xe9bfbfaf)
	HX_STACK_ARG(value1,"value1")
	HX_STACK_ARG(value2,"value2")
	HX_STACK_LINE(175)
	Float _x = (value1->x - value2->x);		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(176)
	Float _y = (value1->y - value2->y);		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(178)
	return ((_x * _x) + (_y * _y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,DistanceSquared,return )


Vector2_obj::Vector2_obj()
{
}

Dynamic Vector2_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"Dot") ) { return Dot_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Zero") ) { return Zero_dyn(); }
		if (HX_FIELD_EQ(inName,"Lerp") ) { return Lerp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Clamp") ) { return Clamp_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"negate") ) { return negate_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Hermite") ) { return Hermite_dyn(); }
		if (HX_FIELD_EQ(inName,"asArray") ) { return asArray_dyn(); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Minimize") ) { return Minimize_dyn(); }
		if (HX_FIELD_EQ(inName,"Maximize") ) { return Maximize_dyn(); }
		if (HX_FIELD_EQ(inName,"Distance") ) { return Distance_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"Normalize") ) { return Normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"Transform") ) { return Transform_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"CatmullRom") ) { return CatmullRom_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scaleInPlace") ) { return scaleInPlace_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { return lengthSquared_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"DistanceSquared") ) { return DistanceSquared_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vector2_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("Zero"),
	HX_CSTRING("CatmullRom"),
	HX_CSTRING("Clamp"),
	HX_CSTRING("Hermite"),
	HX_CSTRING("Lerp"),
	HX_CSTRING("Dot"),
	HX_CSTRING("Normalize"),
	HX_CSTRING("Minimize"),
	HX_CSTRING("Maximize"),
	HX_CSTRING("Transform"),
	HX_CSTRING("Distance"),
	HX_CSTRING("DistanceSquared"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector2_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Vector2_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("toString"),
	HX_CSTRING("add"),
	HX_CSTRING("asArray"),
	HX_CSTRING("toArray"),
	HX_CSTRING("subtract"),
	HX_CSTRING("negate"),
	HX_CSTRING("scaleInPlace"),
	HX_CSTRING("scale"),
	HX_CSTRING("equals"),
	HX_CSTRING("length"),
	HX_CSTRING("lengthSquared"),
	HX_CSTRING("normalize"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector2_obj::__mClass,"__mClass");
};

#endif

Class Vector2_obj::__mClass;

void Vector2_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.tools.math.Vector2"), hx::TCanCast< Vector2_obj> ,sStaticFields,sMemberFields,
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

void Vector2_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math
