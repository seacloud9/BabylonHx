#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Viewport
#include <com/gamestudiohx/babylonhx/tools/math/Viewport.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{
namespace math{

Void Vector3_obj::__construct(Float initialX,Float initialY,Float initialZ)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","new",0xdf562fa1,"com.gamestudiohx.babylonhx.tools.math.Vector3.new","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",18,0xea68f64e)
HX_STACK_THIS(this)
HX_STACK_ARG(initialX,"initialX")
HX_STACK_ARG(initialY,"initialY")
HX_STACK_ARG(initialZ,"initialZ")
{
	HX_STACK_LINE(19)
	this->x = initialX;
	HX_STACK_LINE(20)
	this->y = initialY;
	HX_STACK_LINE(21)
	this->z = initialZ;
}
;
	return null();
}

//Vector3_obj::~Vector3_obj() { }

Dynamic Vector3_obj::__CreateEmpty() { return  new Vector3_obj; }
hx::ObjectPtr< Vector3_obj > Vector3_obj::__new(Float initialX,Float initialY,Float initialZ)
{  hx::ObjectPtr< Vector3_obj > result = new Vector3_obj();
	result->__construct(initialX,initialY,initialZ);
	return result;}

Dynamic Vector3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector3_obj > result = new Vector3_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String Vector3_obj::toString( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","toString",0x96a685cb,"com.gamestudiohx.babylonhx.tools.math.Vector3.toString","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",25,0xea68f64e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	return ((((((HX_CSTRING("{X:") + this->x) + HX_CSTRING(" Y:")) + this->y) + HX_CSTRING(" Z:")) + this->z) + HX_CSTRING("}"));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,toString,return )

Array< Float > Vector3_obj::asArray( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","asArray",0x7b92ef08,"com.gamestudiohx.babylonhx.tools.math.Vector3.asArray","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",28,0xea68f64e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	Array< Float > result = Array_obj< Float >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		result[(int)0] = this->x;
		HX_STACK_LINE(30)
		result[(int)1] = this->y;
		HX_STACK_LINE(30)
		result[(int)2] = this->z;
		HX_STACK_LINE(30)
		result;
	}
	HX_STACK_LINE(31)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,asArray,return )

Array< Float > Vector3_obj::toArray( Array< Float > array,hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","toArray",0xf83d4ddf,"com.gamestudiohx.babylonhx.tools.math.Vector3.toArray","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",34,0xea68f64e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(35)
		array[index] = this->x;
		HX_STACK_LINE(36)
		array[(index + (int)1)] = this->y;
		HX_STACK_LINE(37)
		array[(index + (int)2)] = this->z;
		HX_STACK_LINE(38)
		return array;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,toArray,return )

Void Vector3_obj::MinimizeInPlace( ::com::gamestudiohx::babylonhx::tools::math::Vector3 other){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","MinimizeInPlace",0x1b42b7c5,"com.gamestudiohx.babylonhx.tools.math.Vector3.MinimizeInPlace","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",41,0xea68f64e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(42)
		if (((other->x < this->x))){
			HX_STACK_LINE(42)
			this->x = other->x;
		}
		HX_STACK_LINE(43)
		if (((other->y < this->y))){
			HX_STACK_LINE(43)
			this->y = other->y;
		}
		HX_STACK_LINE(44)
		if (((other->z < this->z))){
			HX_STACK_LINE(44)
			this->z = other->z;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,MinimizeInPlace,(void))

Void Vector3_obj::MaximizeInPlace( ::com::gamestudiohx::babylonhx::tools::math::Vector3 other){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","MaximizeInPlace",0xbf5d03d7,"com.gamestudiohx.babylonhx.tools.math.Vector3.MaximizeInPlace","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",47,0xea68f64e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(48)
		if (((other->x > this->x))){
			HX_STACK_LINE(48)
			this->x = other->x;
		}
		HX_STACK_LINE(49)
		if (((other->y > this->y))){
			HX_STACK_LINE(49)
			this->y = other->y;
		}
		HX_STACK_LINE(50)
		if (((other->z > this->z))){
			HX_STACK_LINE(50)
			this->z = other->z;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,MaximizeInPlace,(void))

Void Vector3_obj::addInPlace( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","addInPlace",0xec3b7160,"com.gamestudiohx.babylonhx.tools.math.Vector3.addInPlace","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",59,0xea68f64e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(otherVector,"otherVector")
		HX_STACK_LINE(60)
		hx::AddEq(this->x,otherVector->x);
		HX_STACK_LINE(61)
		hx::AddEq(this->y,otherVector->y);
		HX_STACK_LINE(62)
		hx::AddEq(this->z,otherVector->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,addInPlace,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::add( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","add",0xdf4c5162,"com.gamestudiohx.babylonhx.tools.math.Vector3.add","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",66,0xea68f64e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherVector,"otherVector")
	HX_STACK_LINE(66)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((this->x + otherVector->x),(this->y + otherVector->y),(this->z + otherVector->z));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,add,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::addToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector,::com::gamestudiohx::babylonhx::tools::math::Vector3 result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","addToRef",0xebad65d6,"com.gamestudiohx.babylonhx.tools.math.Vector3.addToRef","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",69,0xea68f64e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherVector,"otherVector")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(70)
	result->x = (this->x + otherVector->x);
	HX_STACK_LINE(71)
	result->y = (this->y + otherVector->y);
	HX_STACK_LINE(72)
	result->z = (this->z + otherVector->z);
	HX_STACK_LINE(73)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,addToRef,return )

Void Vector3_obj::subtractInPlace( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","subtractInPlace",0xcf38c4af,"com.gamestudiohx.babylonhx.tools.math.Vector3.subtractInPlace","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",76,0xea68f64e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(otherVector,"otherVector")
		HX_STACK_LINE(77)
		hx::SubEq(this->x,otherVector->x);
		HX_STACK_LINE(78)
		hx::SubEq(this->y,otherVector->y);
		HX_STACK_LINE(79)
		hx::SubEq(this->z,otherVector->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,subtractInPlace,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::subtract( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","subtract",0x56492a33,"com.gamestudiohx.babylonhx.tools.math.Vector3.subtract","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",83,0xea68f64e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherVector,"otherVector")
	HX_STACK_LINE(83)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((this->x - otherVector->x),(this->y - otherVector->y),(this->z - otherVector->z));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,subtract,return )

Void Vector3_obj::subtractToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector,::com::gamestudiohx::babylonhx::tools::math::Vector3 result){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","subtractToRef",0x49b7f765,"com.gamestudiohx.babylonhx.tools.math.Vector3.subtractToRef","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",86,0xea68f64e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(otherVector,"otherVector")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(87)
		result->x = (this->x - otherVector->x);
		HX_STACK_LINE(88)
		result->y = (this->y - otherVector->y);
		HX_STACK_LINE(89)
		result->z = (this->z - otherVector->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,subtractToRef,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::subtractFromFloats( Float x,Float y,Float z){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","subtractFromFloats",0x10bc3474,"com.gamestudiohx.babylonhx.tools.math.Vector3.subtractFromFloats","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",93,0xea68f64e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(93)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((this->x - x),(this->y - y),(this->z - z));
}


HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,subtractFromFloats,return )

Void Vector3_obj::subtractFromFloatsToRef( Float x,Float y,Float z,::com::gamestudiohx::babylonhx::tools::math::Vector3 result){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","subtractFromFloatsToRef",0x5d332184,"com.gamestudiohx.babylonhx.tools.math.Vector3.subtractFromFloatsToRef","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",96,0xea68f64e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(97)
		result->x = (this->x - x);
		HX_STACK_LINE(98)
		result->y = (this->y - y);
		HX_STACK_LINE(99)
		result->z = (this->z - z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Vector3_obj,subtractFromFloatsToRef,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::negate( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","negate",0x4b932121,"com.gamestudiohx.babylonhx.tools.math.Vector3.negate","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",103,0xea68f64e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(-(this->x),-(this->y),-(this->z));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,negate,return )

Void Vector3_obj::scaleInPlace( Float scale){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","scaleInPlace",0x9eb699d7,"com.gamestudiohx.babylonhx.tools.math.Vector3.scaleInPlace","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",106,0xea68f64e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scale,"scale")
		HX_STACK_LINE(107)
		hx::MultEq(this->x,scale);
		HX_STACK_LINE(108)
		hx::MultEq(this->y,scale);
		HX_STACK_LINE(109)
		hx::MultEq(this->z,scale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,scaleInPlace,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::scale( Float scale){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","scale",0xe498400b,"com.gamestudiohx.babylonhx.tools.math.Vector3.scale","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",113,0xea68f64e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scale,"scale")
	HX_STACK_LINE(113)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((this->x * scale),(this->y * scale),(this->z * scale));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,scale,return )

Void Vector3_obj::scaleToRef( Float scale,::com::gamestudiohx::babylonhx::tools::math::Vector3 result){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","scaleToRef",0x58b2b28d,"com.gamestudiohx.babylonhx.tools.math.Vector3.scaleToRef","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",116,0xea68f64e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scale,"scale")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(117)
		result->x = (this->x * scale);
		HX_STACK_LINE(118)
		result->y = (this->y * scale);
		HX_STACK_LINE(119)
		result->z = (this->z * scale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,scaleToRef,(void))

bool Vector3_obj::equals( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","equals",0xa46ccd9e,"com.gamestudiohx.babylonhx.tools.math.Vector3.equals","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",123,0xea68f64e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherVector,"otherVector")
	HX_STACK_LINE(123)
	return (bool((bool((this->x == otherVector->x)) && bool((this->y == otherVector->y)))) && bool((this->z == otherVector->z)));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,equals,return )

bool Vector3_obj::equalsToFloats( Float x,Float y,Float z){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","equalsToFloats",0xb4c722f0,"com.gamestudiohx.babylonhx.tools.math.Vector3.equalsToFloats","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",127,0xea68f64e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(127)
	return (bool((bool((this->x == x)) && bool((this->y == y)))) && bool((this->z == z)));
}


HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,equalsToFloats,return )

Void Vector3_obj::multiplyInPlace( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","multiplyInPlace",0x4fdc199f,"com.gamestudiohx.babylonhx.tools.math.Vector3.multiplyInPlace","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",130,0xea68f64e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(otherVector,"otherVector")
		HX_STACK_LINE(131)
		hx::MultEq(this->x,otherVector->x);
		HX_STACK_LINE(132)
		hx::MultEq(this->y,otherVector->y);
		HX_STACK_LINE(133)
		hx::MultEq(this->z,otherVector->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,multiplyInPlace,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::multiply( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","multiply",0xf8c49743,"com.gamestudiohx.babylonhx.tools.math.Vector3.multiply","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",137,0xea68f64e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherVector,"otherVector")
	HX_STACK_LINE(137)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((this->x * otherVector->x),(this->y * otherVector->y),(this->z * otherVector->z));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,multiply,return )

Void Vector3_obj::multiplyToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector,::com::gamestudiohx::babylonhx::tools::math::Vector3 result){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","multiplyToRef",0x15673055,"com.gamestudiohx.babylonhx.tools.math.Vector3.multiplyToRef","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",140,0xea68f64e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(otherVector,"otherVector")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(141)
		result->x = (this->x * otherVector->x);
		HX_STACK_LINE(142)
		result->y = (this->y * otherVector->y);
		HX_STACK_LINE(143)
		result->z = (this->z * otherVector->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,multiplyToRef,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::multiplyByFloats( Float x,Float y,Float z){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","multiplyByFloats",0xd37336f1,"com.gamestudiohx.babylonhx.tools.math.Vector3.multiplyByFloats","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",147,0xea68f64e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(147)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((this->x * x),(this->y * y),(this->z * z));
}


HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,multiplyByFloats,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::divide( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","divide",0xa38c0ed8,"com.gamestudiohx.babylonhx.tools.math.Vector3.divide","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",151,0xea68f64e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherVector,"otherVector")
	HX_STACK_LINE(151)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((Float(this->x) / Float(otherVector->x)),(Float(this->y) / Float(otherVector->y)),(Float(this->z) / Float(otherVector->z)));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,divide,return )

Void Vector3_obj::divideToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector,::com::gamestudiohx::babylonhx::tools::math::Vector3 result){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","divideToRef",0x045d1ca0,"com.gamestudiohx.babylonhx.tools.math.Vector3.divideToRef","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",154,0xea68f64e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(otherVector,"otherVector")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(155)
		result->x = (Float(this->x) / Float(otherVector->x));
		HX_STACK_LINE(156)
		result->y = (Float(this->y) / Float(otherVector->y));
		HX_STACK_LINE(157)
		result->z = (Float(this->z) / Float(otherVector->z));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,divideToRef,(void))

Float Vector3_obj::length( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","length",0x83817445,"com.gamestudiohx.babylonhx.tools.math.Vector3.length","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",161,0xea68f64e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	return ::Math_obj::sqrt((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,length,return )

Float Vector3_obj::lengthSquared( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","lengthSquared",0xed0d7f62,"com.gamestudiohx.babylonhx.tools.math.Vector3.lengthSquared","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",165,0xea68f64e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	return (((this->x * this->x) + (this->y * this->y)) + (this->z * this->z));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,lengthSquared,return )

Void Vector3_obj::normalize( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","normalize",0xbe27fd8e,"com.gamestudiohx.babylonhx.tools.math.Vector3.normalize","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",168,0xea68f64e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		Float len = ::Math_obj::sqrt((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(171)
		if (((len != (int)0))){
			HX_STACK_LINE(172)
			Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(174)
			hx::MultEq(this->x,num);
			HX_STACK_LINE(175)
			hx::MultEq(this->y,num);
			HX_STACK_LINE(176)
			hx::MultEq(this->z,num);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,normalize,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::clone( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","clone",0xb42c84de,"com.gamestudiohx.babylonhx.tools.math.Vector3.clone","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",181,0xea68f64e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(this->x,this->y,this->z);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,clone,return )

Void Vector3_obj::copyFrom( ::com::gamestudiohx::babylonhx::tools::math::Vector3 source){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","copyFrom",0x2698c0de,"com.gamestudiohx.babylonhx.tools.math.Vector3.copyFrom","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",184,0xea68f64e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(185)
		this->x = source->x;
		HX_STACK_LINE(186)
		this->y = source->y;
		HX_STACK_LINE(187)
		this->z = source->z;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,copyFrom,(void))

Void Vector3_obj::copyFromFloats( Float x,Float y,Float z){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","copyFromFloats",0xc73052d5,"com.gamestudiohx.babylonhx.tools.math.Vector3.copyFromFloats","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",190,0xea68f64e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(191)
		this->x = x;
		HX_STACK_LINE(192)
		this->y = y;
		HX_STACK_LINE(193)
		this->z = z;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,copyFromFloats,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::Center( ::com::gamestudiohx::babylonhx::tools::math::Vector3 value1,::com::gamestudiohx::babylonhx::tools::math::Vector3 value2){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","Center",0x1ee97954,"com.gamestudiohx.babylonhx.tools.math.Vector3.Center","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",53,0xea68f64e)
	HX_STACK_ARG(value1,"value1")
	HX_STACK_ARG(value2,"value2")
	HX_STACK_LINE(54)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 center = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((value1->x + value2->x),(value1->y + value2->y),(value1->z + value2->z));		HX_STACK_VAR(center,"center");
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		hx::MultEq(center->x,0.5);
		HX_STACK_LINE(55)
		hx::MultEq(center->y,0.5);
		HX_STACK_LINE(55)
		hx::MultEq(center->z,0.5);
	}
	HX_STACK_LINE(56)
	return center;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,Center,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::FromArray( Array< Float > array,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","FromArray",0x8e71fdb0,"com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",198,0xea68f64e)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(198)
		return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,FromArray,return )

Void Vector3_obj::FromArrayToRef( Array< Float > array,hx::Null< int >  __o_offset,::com::gamestudiohx::babylonhx::tools::math::Vector3 result){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","FromArrayToRef",0xc84e5ec8,"com.gamestudiohx.babylonhx.tools.math.Vector3.FromArrayToRef","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",201,0xea68f64e)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(result,"result")
{
		HX_STACK_LINE(202)
		result->x = array->__get(offset);
		HX_STACK_LINE(203)
		result->y = array->__get((offset + (int)1));
		HX_STACK_LINE(204)
		result->z = array->__get((offset + (int)2));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,FromArrayToRef,(void))

Void Vector3_obj::FromFloatsToRef( Float x,Float y,Float z,::com::gamestudiohx::babylonhx::tools::math::Vector3 result){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","FromFloatsToRef",0x22799718,"com.gamestudiohx.babylonhx.tools.math.Vector3.FromFloatsToRef","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",207,0xea68f64e)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(208)
		result->x = x;
		HX_STACK_LINE(209)
		result->y = y;
		HX_STACK_LINE(210)
		result->z = z;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Vector3_obj,FromFloatsToRef,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::Zero( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","Zero",0x7edb34e7,"com.gamestudiohx.babylonhx.tools.math.Vector3.Zero","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",214,0xea68f64e)
	HX_STACK_LINE(214)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(0.0,0.0,0.0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,Zero,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::Up( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","Up",0x45e14e5a,"com.gamestudiohx.babylonhx.tools.math.Vector3.Up","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",218,0xea68f64e)
	HX_STACK_LINE(218)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,1.0,(int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,Up,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::TransformCoordinates( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector,::com::gamestudiohx::babylonhx::tools::math::Matrix transformation){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","TransformCoordinates",0x1d8a90ae,"com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinates","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",221,0xea68f64e)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(transformation,"transformation")
	HX_STACK_LINE(222)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(224)
	{
		HX_STACK_LINE(224)
		Float x = ((((vector->x * transformation->m->__get((int)0)) + (vector->y * transformation->m->__get((int)4))) + (vector->z * transformation->m->__get((int)8))) + transformation->m->__get((int)12));		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(224)
		Float y = ((((vector->x * transformation->m->__get((int)1)) + (vector->y * transformation->m->__get((int)5))) + (vector->z * transformation->m->__get((int)9))) + transformation->m->__get((int)13));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(224)
		Float z = ((((vector->x * transformation->m->__get((int)2)) + (vector->y * transformation->m->__get((int)6))) + (vector->z * transformation->m->__get((int)10))) + transformation->m->__get((int)14));		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(224)
		Float w = ((((vector->x * transformation->m->__get((int)3)) + (vector->y * transformation->m->__get((int)7))) + (vector->z * transformation->m->__get((int)11))) + transformation->m->__get((int)15));		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(224)
		result->x = (Float(x) / Float(w));
		HX_STACK_LINE(224)
		result->y = (Float(y) / Float(w));
		HX_STACK_LINE(224)
		result->z = (Float(z) / Float(w));
	}
	HX_STACK_LINE(226)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,TransformCoordinates,return )

Void Vector3_obj::TransformCoordinatesToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector,::com::gamestudiohx::babylonhx::tools::math::Matrix transformation,::com::gamestudiohx::babylonhx::tools::math::Vector3 result){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","TransformCoordinatesToRef",0x2b8a330a,"com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinatesToRef","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",229,0xea68f64e)
		HX_STACK_ARG(vector,"vector")
		HX_STACK_ARG(transformation,"transformation")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(230)
		Float x = ((((vector->x * transformation->m->__get((int)0)) + (vector->y * transformation->m->__get((int)4))) + (vector->z * transformation->m->__get((int)8))) + transformation->m->__get((int)12));		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(231)
		Float y = ((((vector->x * transformation->m->__get((int)1)) + (vector->y * transformation->m->__get((int)5))) + (vector->z * transformation->m->__get((int)9))) + transformation->m->__get((int)13));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(232)
		Float z = ((((vector->x * transformation->m->__get((int)2)) + (vector->y * transformation->m->__get((int)6))) + (vector->z * transformation->m->__get((int)10))) + transformation->m->__get((int)14));		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(233)
		Float w = ((((vector->x * transformation->m->__get((int)3)) + (vector->y * transformation->m->__get((int)7))) + (vector->z * transformation->m->__get((int)11))) + transformation->m->__get((int)15));		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(235)
		result->x = (Float(x) / Float(w));
		HX_STACK_LINE(236)
		result->y = (Float(y) / Float(w));
		HX_STACK_LINE(237)
		result->z = (Float(z) / Float(w));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,TransformCoordinatesToRef,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::TransformCoordinatesFromFloatsToRef( Float x,Float y,Float z,::com::gamestudiohx::babylonhx::tools::math::Matrix transformation,::com::gamestudiohx::babylonhx::tools::math::Vector3 result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","TransformCoordinatesFromFloatsToRef",0xcb983d69,"com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinatesFromFloatsToRef","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",240,0xea68f64e)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_ARG(transformation,"transformation")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(241)
	Float rx = ((((x * transformation->m->__get((int)0)) + (y * transformation->m->__get((int)4))) + (z * transformation->m->__get((int)8))) + transformation->m->__get((int)12));		HX_STACK_VAR(rx,"rx");
	HX_STACK_LINE(242)
	Float ry = ((((x * transformation->m->__get((int)1)) + (y * transformation->m->__get((int)5))) + (z * transformation->m->__get((int)9))) + transformation->m->__get((int)13));		HX_STACK_VAR(ry,"ry");
	HX_STACK_LINE(243)
	Float rz = ((((x * transformation->m->__get((int)2)) + (y * transformation->m->__get((int)6))) + (z * transformation->m->__get((int)10))) + transformation->m->__get((int)14));		HX_STACK_VAR(rz,"rz");
	HX_STACK_LINE(244)
	Float rw = ((((x * transformation->m->__get((int)3)) + (y * transformation->m->__get((int)7))) + (z * transformation->m->__get((int)11))) + transformation->m->__get((int)15));		HX_STACK_VAR(rw,"rw");
	HX_STACK_LINE(246)
	result->x = (Float(rx) / Float(rw));
	HX_STACK_LINE(247)
	result->y = (Float(ry) / Float(rw));
	HX_STACK_LINE(248)
	result->z = (Float(rz) / Float(rw));
	HX_STACK_LINE(250)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Vector3_obj,TransformCoordinatesFromFloatsToRef,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::TransformNormal( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector,::com::gamestudiohx::babylonhx::tools::math::Matrix transformation){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","TransformNormal",0x4abfb154,"com.gamestudiohx.babylonhx.tools.math.Vector3.TransformNormal","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",253,0xea68f64e)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(transformation,"transformation")
	HX_STACK_LINE(254)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(256)
		result->x = (((vector->x * transformation->m->__get((int)0)) + (vector->y * transformation->m->__get((int)4))) + (vector->z * transformation->m->__get((int)8)));
		HX_STACK_LINE(256)
		result->y = (((vector->x * transformation->m->__get((int)1)) + (vector->y * transformation->m->__get((int)5))) + (vector->z * transformation->m->__get((int)9)));
		HX_STACK_LINE(256)
		result->z = (((vector->x * transformation->m->__get((int)2)) + (vector->y * transformation->m->__get((int)6))) + (vector->z * transformation->m->__get((int)10)));
	}
	HX_STACK_LINE(258)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,TransformNormal,return )

Void Vector3_obj::TransformNormalToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector,::com::gamestudiohx::babylonhx::tools::math::Matrix transformation,::com::gamestudiohx::babylonhx::tools::math::Vector3 result){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","TransformNormalToRef",0xc8fef8a4,"com.gamestudiohx.babylonhx.tools.math.Vector3.TransformNormalToRef","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",261,0xea68f64e)
		HX_STACK_ARG(vector,"vector")
		HX_STACK_ARG(transformation,"transformation")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(262)
		result->x = (((vector->x * transformation->m->__get((int)0)) + (vector->y * transformation->m->__get((int)4))) + (vector->z * transformation->m->__get((int)8)));
		HX_STACK_LINE(263)
		result->y = (((vector->x * transformation->m->__get((int)1)) + (vector->y * transformation->m->__get((int)5))) + (vector->z * transformation->m->__get((int)9)));
		HX_STACK_LINE(264)
		result->z = (((vector->x * transformation->m->__get((int)2)) + (vector->y * transformation->m->__get((int)6))) + (vector->z * transformation->m->__get((int)10)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,TransformNormalToRef,(void))

Void Vector3_obj::TransformNormalFromFloatsToRef( Float x,Float y,Float z,::com::gamestudiohx::babylonhx::tools::math::Matrix transformation,::com::gamestudiohx::babylonhx::tools::math::Vector3 result){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","TransformNormalFromFloatsToRef",0xf061c783,"com.gamestudiohx.babylonhx.tools.math.Vector3.TransformNormalFromFloatsToRef","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",267,0xea68f64e)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(transformation,"transformation")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(268)
		result->x = (((x * transformation->m->__get((int)0)) + (y * transformation->m->__get((int)4))) + (z * transformation->m->__get((int)8)));
		HX_STACK_LINE(269)
		result->y = (((x * transformation->m->__get((int)1)) + (y * transformation->m->__get((int)5))) + (z * transformation->m->__get((int)9)));
		HX_STACK_LINE(270)
		result->z = (((x * transformation->m->__get((int)2)) + (y * transformation->m->__get((int)6))) + (z * transformation->m->__get((int)10)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Vector3_obj,TransformNormalFromFloatsToRef,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::CatmullRom( ::com::gamestudiohx::babylonhx::tools::math::Vector3 value1,::com::gamestudiohx::babylonhx::tools::math::Vector3 value2,::com::gamestudiohx::babylonhx::tools::math::Vector3 value3,::com::gamestudiohx::babylonhx::tools::math::Vector3 value4,Float amount){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","CatmullRom",0x42856cb1,"com.gamestudiohx.babylonhx.tools.math.Vector3.CatmullRom","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",274,0xea68f64e)
	HX_STACK_ARG(value1,"value1")
	HX_STACK_ARG(value2,"value2")
	HX_STACK_ARG(value3,"value3")
	HX_STACK_ARG(value4,"value4")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_LINE(275)
	Float squared = (amount * amount);		HX_STACK_VAR(squared,"squared");
	HX_STACK_LINE(276)
	Float cubed = (amount * squared);		HX_STACK_VAR(cubed,"cubed");
	HX_STACK_LINE(278)
	Float x = (0.5 * (((((2.0 * value2->x) + (((-(value1->x) + value3->x)) * amount)) + ((((((2.0 * value1->x) - (5.0 * value2->x)) + (4.0 * value3->x)) - value4->x)) * squared)) + (((((-(value1->x) + (3.0 * value2->x)) - (3.0 * value3->x)) + value4->x)) * cubed))));		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(282)
	Float y = (0.5 * (((((2.0 * value2->y) + (((-(value1->y) + value3->y)) * amount)) + ((((((2.0 * value1->y) - (5.0 * value2->y)) + (4.0 * value3->y)) - value4->y)) * squared)) + (((((-(value1->y) + (3.0 * value2->y)) - (3.0 * value3->y)) + value4->y)) * cubed))));		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(286)
	Float z = (0.5 * (((((2.0 * value2->z) + (((-(value1->z) + value3->z)) * amount)) + ((((((2.0 * value1->z) - (5.0 * value2->z)) + (4.0 * value3->z)) - value4->z)) * squared)) + (((((-(value1->z) + (3.0 * value2->z)) - (3.0 * value3->z)) + value4->z)) * cubed))));		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(290)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Vector3_obj,CatmullRom,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::Clamp( ::com::gamestudiohx::babylonhx::tools::math::Vector3 value,::com::gamestudiohx::babylonhx::tools::math::Vector3 min,::com::gamestudiohx::babylonhx::tools::math::Vector3 max){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","Clamp",0x474f545c,"com.gamestudiohx.babylonhx.tools.math.Vector3.Clamp","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",293,0xea68f64e)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(294)
	Float x = value->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(295)
	if (((x > max->x))){
		HX_STACK_LINE(295)
		x = max->x;
	}
	else{
		HX_STACK_LINE(295)
		x = x;
	}
	HX_STACK_LINE(296)
	if (((x < min->x))){
		HX_STACK_LINE(296)
		x = min->x;
	}
	else{
		HX_STACK_LINE(296)
		x = x;
	}
	HX_STACK_LINE(298)
	Float y = value->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(299)
	if (((y > max->y))){
		HX_STACK_LINE(299)
		y = max->y;
	}
	else{
		HX_STACK_LINE(299)
		y = y;
	}
	HX_STACK_LINE(300)
	if (((y < min->y))){
		HX_STACK_LINE(300)
		y = min->y;
	}
	else{
		HX_STACK_LINE(300)
		y = y;
	}
	HX_STACK_LINE(302)
	Float z = value->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(303)
	if (((z > max->z))){
		HX_STACK_LINE(303)
		z = max->z;
	}
	else{
		HX_STACK_LINE(303)
		z = z;
	}
	HX_STACK_LINE(304)
	if (((z < min->z))){
		HX_STACK_LINE(304)
		z = min->z;
	}
	else{
		HX_STACK_LINE(304)
		z = z;
	}
	HX_STACK_LINE(306)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,Clamp,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::Hermite( ::com::gamestudiohx::babylonhx::tools::math::Vector3 value1,::com::gamestudiohx::babylonhx::tools::math::Vector3 tangent1,::com::gamestudiohx::babylonhx::tools::math::Vector3 value2,::com::gamestudiohx::babylonhx::tools::math::Vector3 tangent2,Float amount){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","Hermite",0x0648e0c3,"com.gamestudiohx.babylonhx.tools.math.Vector3.Hermite","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",309,0xea68f64e)
	HX_STACK_ARG(value1,"value1")
	HX_STACK_ARG(tangent1,"tangent1")
	HX_STACK_ARG(value2,"value2")
	HX_STACK_ARG(tangent2,"tangent2")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_LINE(310)
	Float squared = (amount * amount);		HX_STACK_VAR(squared,"squared");
	HX_STACK_LINE(311)
	Float cubed = (amount * squared);		HX_STACK_VAR(cubed,"cubed");
	HX_STACK_LINE(312)
	Float part1 = (((2.0 * cubed) - (3.0 * squared)) + 1.0);		HX_STACK_VAR(part1,"part1");
	HX_STACK_LINE(313)
	Float part2 = ((-2. * cubed) + (3.0 * squared));		HX_STACK_VAR(part2,"part2");
	HX_STACK_LINE(314)
	Float part3 = ((cubed - (2.0 * squared)) + amount);		HX_STACK_VAR(part3,"part3");
	HX_STACK_LINE(315)
	Float part4 = (cubed - squared);		HX_STACK_VAR(part4,"part4");
	HX_STACK_LINE(317)
	Float x = ((((value1->x * part1) + (value2->x * part2)) + (tangent1->x * part3)) + (tangent2->x * part4));		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(318)
	Float y = ((((value1->y * part1) + (value2->y * part2)) + (tangent1->y * part3)) + (tangent2->y * part4));		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(319)
	Float z = ((((value1->z * part1) + (value2->z * part2)) + (tangent1->z * part3)) + (tangent2->z * part4));		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(321)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Vector3_obj,Hermite,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::Lerp( ::com::gamestudiohx::babylonhx::tools::math::Vector3 start,::com::gamestudiohx::babylonhx::tools::math::Vector3 end,Float amount){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","Lerp",0x759a3836,"com.gamestudiohx.babylonhx.tools.math.Vector3.Lerp","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",324,0xea68f64e)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_LINE(325)
	Float x = (start->x + (((end->x - start->x)) * amount));		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(326)
	Float y = (start->y + (((end->y - start->y)) * amount));		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(327)
	Float z = (start->z + (((end->z - start->z)) * amount));		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(329)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,Lerp,return )

Float Vector3_obj::Dot( ::com::gamestudiohx::babylonhx::tools::math::Vector3 left,::com::gamestudiohx::babylonhx::tools::math::Vector3 right){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","Dot",0xdf3659aa,"com.gamestudiohx.babylonhx.tools.math.Vector3.Dot","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",333,0xea68f64e)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_LINE(333)
	return (((left->x * right->x) + (left->y * right->y)) + (left->z * right->z));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,Dot,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::Cross( ::com::gamestudiohx::babylonhx::tools::math::Vector3 left,::com::gamestudiohx::babylonhx::tools::math::Vector3 right){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","Cross",0x4b5140e1,"com.gamestudiohx.babylonhx.tools.math.Vector3.Cross","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",336,0xea68f64e)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_LINE(337)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(338)
	{
		HX_STACK_LINE(338)
		result->x = ((left->y * right->z) - (left->z * right->y));
		HX_STACK_LINE(338)
		result->y = ((left->z * right->x) - (left->x * right->z));
		HX_STACK_LINE(338)
		result->z = ((left->x * right->y) - (left->y * right->x));
	}
	HX_STACK_LINE(339)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,Cross,return )

Void Vector3_obj::CrossToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 left,::com::gamestudiohx::babylonhx::tools::math::Vector3 right,::com::gamestudiohx::babylonhx::tools::math::Vector3 result){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","CrossToRef",0x83b8e9f7,"com.gamestudiohx.babylonhx.tools.math.Vector3.CrossToRef","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",342,0xea68f64e)
		HX_STACK_ARG(left,"left")
		HX_STACK_ARG(right,"right")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(343)
		result->x = ((left->y * right->z) - (left->z * right->y));
		HX_STACK_LINE(344)
		result->y = ((left->z * right->x) - (left->x * right->z));
		HX_STACK_LINE(345)
		result->z = ((left->x * right->y) - (left->y * right->x));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector3_obj,CrossToRef,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::Normalize( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","Normalize",0x5ffadd6e,"com.gamestudiohx.babylonhx.tools.math.Vector3.Normalize","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",348,0xea68f64e)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(349)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(350)
	{
		HX_STACK_LINE(350)
		{
			HX_STACK_LINE(350)
			result->x = vector->x;
			HX_STACK_LINE(350)
			result->y = vector->y;
			HX_STACK_LINE(350)
			result->z = vector->z;
		}
		HX_STACK_LINE(350)
		{
			HX_STACK_LINE(350)
			Float len = ::Math_obj::sqrt((((result->x * result->x) + (result->y * result->y)) + (result->z * result->z)));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(350)
			if (((len != (int)0))){
				HX_STACK_LINE(350)
				Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(350)
				hx::MultEq(result->x,num);
				HX_STACK_LINE(350)
				hx::MultEq(result->y,num);
				HX_STACK_LINE(350)
				hx::MultEq(result->z,num);
			}
		}
	}
	HX_STACK_LINE(351)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,Normalize,return )

Void Vector3_obj::NormalizeToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector,::com::gamestudiohx::babylonhx::tools::math::Vector3 result){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","NormalizeToRef",0xf70bae4a,"com.gamestudiohx.babylonhx.tools.math.Vector3.NormalizeToRef","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",354,0xea68f64e)
		HX_STACK_ARG(vector,"vector")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(355)
		{
			HX_STACK_LINE(355)
			result->x = vector->x;
			HX_STACK_LINE(355)
			result->y = vector->y;
			HX_STACK_LINE(355)
			result->z = vector->z;
		}
		HX_STACK_LINE(356)
		{
			HX_STACK_LINE(356)
			Float len = ::Math_obj::sqrt((((result->x * result->x) + (result->y * result->y)) + (result->z * result->z)));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(356)
			if (((len != (int)0))){
				HX_STACK_LINE(356)
				Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(356)
				hx::MultEq(result->x,num);
				HX_STACK_LINE(356)
				hx::MultEq(result->y,num);
				HX_STACK_LINE(356)
				hx::MultEq(result->z,num);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,NormalizeToRef,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::Project( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector,::com::gamestudiohx::babylonhx::tools::math::Matrix world,::com::gamestudiohx::babylonhx::tools::math::Matrix transform,::com::gamestudiohx::babylonhx::tools::math::Viewport viewport){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","Project",0xc965ce7a,"com.gamestudiohx.babylonhx.tools.math.Vector3.Project","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",359,0xea68f64e)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(world,"world")
	HX_STACK_ARG(transform,"transform")
	HX_STACK_ARG(viewport,"viewport")
	HX_STACK_LINE(360)
	Float cw = viewport->width;		HX_STACK_VAR(cw,"cw");
	HX_STACK_LINE(361)
	Float ch = viewport->height;		HX_STACK_VAR(ch,"ch");
	HX_STACK_LINE(362)
	Float cx = viewport->x;		HX_STACK_VAR(cx,"cx");
	HX_STACK_LINE(363)
	Float cy = viewport->y;		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(365)
	::com::gamestudiohx::babylonhx::tools::math::Matrix viewportMatrix;		HX_STACK_VAR(viewportMatrix,"viewportMatrix");
	HX_STACK_LINE(365)
	{
		HX_STACK_LINE(365)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(365)
		result->m[(int)0] = (Float(cw) / Float(2.0));
		HX_STACK_LINE(365)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(365)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(365)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(365)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(365)
		result->m[(int)5] = (Float(-(ch)) / Float(2.0));
		HX_STACK_LINE(365)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(365)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(365)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(365)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(365)
		result->m[(int)10] = (int)1;
		HX_STACK_LINE(365)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(365)
		result->m[(int)12] = (cx + (Float(cw) / Float(2.0)));
		HX_STACK_LINE(365)
		result->m[(int)13] = ((Float(ch) / Float(2.0)) + cy);
		HX_STACK_LINE(365)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(365)
		result->m[(int)15] = (int)1;
		HX_STACK_LINE(365)
		viewportMatrix = result;
	}
	HX_STACK_LINE(371)
	::com::gamestudiohx::babylonhx::tools::math::Matrix finalMatrix;		HX_STACK_VAR(finalMatrix,"finalMatrix");
	HX_STACK_LINE(371)
	{
		HX_STACK_LINE(371)
		::com::gamestudiohx::babylonhx::tools::math::Matrix _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(371)
		{
			HX_STACK_LINE(371)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(371)
			{
				HX_STACK_LINE(371)
				Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
				HX_STACK_LINE(371)
				Float tm0 = world->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
				HX_STACK_LINE(371)
				Float tm1 = world->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
				HX_STACK_LINE(371)
				Float tm2 = world->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
				HX_STACK_LINE(371)
				Float tm3 = world->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
				HX_STACK_LINE(371)
				Float tm4 = world->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
				HX_STACK_LINE(371)
				Float tm5 = world->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
				HX_STACK_LINE(371)
				Float tm6 = world->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
				HX_STACK_LINE(371)
				Float tm7 = world->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
				HX_STACK_LINE(371)
				Float tm8 = world->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
				HX_STACK_LINE(371)
				Float tm9 = world->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
				HX_STACK_LINE(371)
				Float tm10 = world->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
				HX_STACK_LINE(371)
				Float tm11 = world->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
				HX_STACK_LINE(371)
				Float tm12 = world->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
				HX_STACK_LINE(371)
				Float tm13 = world->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
				HX_STACK_LINE(371)
				Float tm14 = world->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
				HX_STACK_LINE(371)
				Float tm15 = world->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
				HX_STACK_LINE(371)
				Float om0 = transform->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
				HX_STACK_LINE(371)
				Float om1 = transform->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
				HX_STACK_LINE(371)
				Float om2 = transform->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
				HX_STACK_LINE(371)
				Float om3 = transform->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
				HX_STACK_LINE(371)
				Float om4 = transform->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
				HX_STACK_LINE(371)
				Float om5 = transform->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
				HX_STACK_LINE(371)
				Float om6 = transform->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
				HX_STACK_LINE(371)
				Float om7 = transform->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
				HX_STACK_LINE(371)
				Float om8 = transform->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
				HX_STACK_LINE(371)
				Float om9 = transform->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
				HX_STACK_LINE(371)
				Float om10 = transform->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
				HX_STACK_LINE(371)
				Float om11 = transform->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
				HX_STACK_LINE(371)
				Float om12 = transform->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
				HX_STACK_LINE(371)
				Float om13 = transform->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
				HX_STACK_LINE(371)
				Float om14 = transform->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
				HX_STACK_LINE(371)
				Float om15 = transform->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
				HX_STACK_LINE(371)
				result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
				HX_STACK_LINE(371)
				result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
				HX_STACK_LINE(371)
				result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
				HX_STACK_LINE(371)
				result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
				HX_STACK_LINE(371)
				result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
				HX_STACK_LINE(371)
				result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
				HX_STACK_LINE(371)
				result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
				HX_STACK_LINE(371)
				result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
				HX_STACK_LINE(371)
				result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
				HX_STACK_LINE(371)
				result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
				HX_STACK_LINE(371)
				result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
				HX_STACK_LINE(371)
				result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
				HX_STACK_LINE(371)
				result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
				HX_STACK_LINE(371)
				result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
				HX_STACK_LINE(371)
				result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
				HX_STACK_LINE(371)
				result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
				HX_STACK_LINE(371)
				result1;
			}
			HX_STACK_LINE(371)
			_this = result;
		}
		HX_STACK_LINE(371)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(371)
		{
			HX_STACK_LINE(371)
			Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
			HX_STACK_LINE(371)
			Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
			HX_STACK_LINE(371)
			Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
			HX_STACK_LINE(371)
			Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
			HX_STACK_LINE(371)
			Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
			HX_STACK_LINE(371)
			Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
			HX_STACK_LINE(371)
			Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
			HX_STACK_LINE(371)
			Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
			HX_STACK_LINE(371)
			Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
			HX_STACK_LINE(371)
			Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
			HX_STACK_LINE(371)
			Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
			HX_STACK_LINE(371)
			Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
			HX_STACK_LINE(371)
			Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
			HX_STACK_LINE(371)
			Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
			HX_STACK_LINE(371)
			Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
			HX_STACK_LINE(371)
			Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
			HX_STACK_LINE(371)
			Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
			HX_STACK_LINE(371)
			Float om0 = viewportMatrix->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
			HX_STACK_LINE(371)
			Float om1 = viewportMatrix->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
			HX_STACK_LINE(371)
			Float om2 = viewportMatrix->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
			HX_STACK_LINE(371)
			Float om3 = viewportMatrix->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
			HX_STACK_LINE(371)
			Float om4 = viewportMatrix->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
			HX_STACK_LINE(371)
			Float om5 = viewportMatrix->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
			HX_STACK_LINE(371)
			Float om6 = viewportMatrix->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
			HX_STACK_LINE(371)
			Float om7 = viewportMatrix->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
			HX_STACK_LINE(371)
			Float om8 = viewportMatrix->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
			HX_STACK_LINE(371)
			Float om9 = viewportMatrix->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
			HX_STACK_LINE(371)
			Float om10 = viewportMatrix->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
			HX_STACK_LINE(371)
			Float om11 = viewportMatrix->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
			HX_STACK_LINE(371)
			Float om12 = viewportMatrix->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
			HX_STACK_LINE(371)
			Float om13 = viewportMatrix->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
			HX_STACK_LINE(371)
			Float om14 = viewportMatrix->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
			HX_STACK_LINE(371)
			Float om15 = viewportMatrix->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
			HX_STACK_LINE(371)
			result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
			HX_STACK_LINE(371)
			result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
			HX_STACK_LINE(371)
			result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
			HX_STACK_LINE(371)
			result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
			HX_STACK_LINE(371)
			result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
			HX_STACK_LINE(371)
			result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
			HX_STACK_LINE(371)
			result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
			HX_STACK_LINE(371)
			result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
			HX_STACK_LINE(371)
			result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
			HX_STACK_LINE(371)
			result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
			HX_STACK_LINE(371)
			result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
			HX_STACK_LINE(371)
			result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
			HX_STACK_LINE(371)
			result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
			HX_STACK_LINE(371)
			result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
			HX_STACK_LINE(371)
			result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
			HX_STACK_LINE(371)
			result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
			HX_STACK_LINE(371)
			result1;
		}
		HX_STACK_LINE(371)
		finalMatrix = result;
	}
	HX_STACK_LINE(373)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(373)
	{
		HX_STACK_LINE(373)
		Float x = ((((vector->x * finalMatrix->m->__get((int)0)) + (vector->y * finalMatrix->m->__get((int)4))) + (vector->z * finalMatrix->m->__get((int)8))) + finalMatrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(373)
		Float y = ((((vector->x * finalMatrix->m->__get((int)1)) + (vector->y * finalMatrix->m->__get((int)5))) + (vector->z * finalMatrix->m->__get((int)9))) + finalMatrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(373)
		Float z = ((((vector->x * finalMatrix->m->__get((int)2)) + (vector->y * finalMatrix->m->__get((int)6))) + (vector->z * finalMatrix->m->__get((int)10))) + finalMatrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(373)
		Float w = ((((vector->x * finalMatrix->m->__get((int)3)) + (vector->y * finalMatrix->m->__get((int)7))) + (vector->z * finalMatrix->m->__get((int)11))) + finalMatrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(373)
		result->x = (Float(x) / Float(w));
		HX_STACK_LINE(373)
		result->y = (Float(y) / Float(w));
		HX_STACK_LINE(373)
		result->z = (Float(z) / Float(w));
	}
	HX_STACK_LINE(373)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Vector3_obj,Project,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::Unproject( ::com::gamestudiohx::babylonhx::tools::math::Vector3 source,Float viewportWidth,Float viewportHeight,::com::gamestudiohx::babylonhx::tools::math::Matrix world,::com::gamestudiohx::babylonhx::tools::math::Matrix view,::com::gamestudiohx::babylonhx::tools::math::Matrix projection){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","Unproject",0xa646bf81,"com.gamestudiohx.babylonhx.tools.math.Vector3.Unproject","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",376,0xea68f64e)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(viewportWidth,"viewportWidth")
	HX_STACK_ARG(viewportHeight,"viewportHeight")
	HX_STACK_ARG(world,"world")
	HX_STACK_ARG(view,"view")
	HX_STACK_ARG(projection,"projection")
	HX_STACK_LINE(377)
	::com::gamestudiohx::babylonhx::tools::math::Matrix matrix;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(377)
	{
		HX_STACK_LINE(377)
		::com::gamestudiohx::babylonhx::tools::math::Matrix _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(377)
			{
				HX_STACK_LINE(377)
				Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
				HX_STACK_LINE(377)
				Float tm0 = world->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
				HX_STACK_LINE(377)
				Float tm1 = world->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
				HX_STACK_LINE(377)
				Float tm2 = world->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
				HX_STACK_LINE(377)
				Float tm3 = world->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
				HX_STACK_LINE(377)
				Float tm4 = world->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
				HX_STACK_LINE(377)
				Float tm5 = world->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
				HX_STACK_LINE(377)
				Float tm6 = world->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
				HX_STACK_LINE(377)
				Float tm7 = world->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
				HX_STACK_LINE(377)
				Float tm8 = world->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
				HX_STACK_LINE(377)
				Float tm9 = world->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
				HX_STACK_LINE(377)
				Float tm10 = world->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
				HX_STACK_LINE(377)
				Float tm11 = world->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
				HX_STACK_LINE(377)
				Float tm12 = world->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
				HX_STACK_LINE(377)
				Float tm13 = world->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
				HX_STACK_LINE(377)
				Float tm14 = world->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
				HX_STACK_LINE(377)
				Float tm15 = world->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
				HX_STACK_LINE(377)
				Float om0 = view->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
				HX_STACK_LINE(377)
				Float om1 = view->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
				HX_STACK_LINE(377)
				Float om2 = view->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
				HX_STACK_LINE(377)
				Float om3 = view->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
				HX_STACK_LINE(377)
				Float om4 = view->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
				HX_STACK_LINE(377)
				Float om5 = view->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
				HX_STACK_LINE(377)
				Float om6 = view->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
				HX_STACK_LINE(377)
				Float om7 = view->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
				HX_STACK_LINE(377)
				Float om8 = view->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
				HX_STACK_LINE(377)
				Float om9 = view->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
				HX_STACK_LINE(377)
				Float om10 = view->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
				HX_STACK_LINE(377)
				Float om11 = view->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
				HX_STACK_LINE(377)
				Float om12 = view->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
				HX_STACK_LINE(377)
				Float om13 = view->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
				HX_STACK_LINE(377)
				Float om14 = view->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
				HX_STACK_LINE(377)
				Float om15 = view->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
				HX_STACK_LINE(377)
				result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
				HX_STACK_LINE(377)
				result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
				HX_STACK_LINE(377)
				result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
				HX_STACK_LINE(377)
				result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
				HX_STACK_LINE(377)
				result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
				HX_STACK_LINE(377)
				result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
				HX_STACK_LINE(377)
				result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
				HX_STACK_LINE(377)
				result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
				HX_STACK_LINE(377)
				result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
				HX_STACK_LINE(377)
				result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
				HX_STACK_LINE(377)
				result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
				HX_STACK_LINE(377)
				result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
				HX_STACK_LINE(377)
				result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
				HX_STACK_LINE(377)
				result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
				HX_STACK_LINE(377)
				result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
				HX_STACK_LINE(377)
				result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
				HX_STACK_LINE(377)
				result1;
			}
			HX_STACK_LINE(377)
			_this = result;
		}
		HX_STACK_LINE(377)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
			HX_STACK_LINE(377)
			Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
			HX_STACK_LINE(377)
			Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
			HX_STACK_LINE(377)
			Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
			HX_STACK_LINE(377)
			Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
			HX_STACK_LINE(377)
			Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
			HX_STACK_LINE(377)
			Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
			HX_STACK_LINE(377)
			Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
			HX_STACK_LINE(377)
			Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
			HX_STACK_LINE(377)
			Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
			HX_STACK_LINE(377)
			Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
			HX_STACK_LINE(377)
			Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
			HX_STACK_LINE(377)
			Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
			HX_STACK_LINE(377)
			Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
			HX_STACK_LINE(377)
			Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
			HX_STACK_LINE(377)
			Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
			HX_STACK_LINE(377)
			Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
			HX_STACK_LINE(377)
			Float om0 = projection->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
			HX_STACK_LINE(377)
			Float om1 = projection->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
			HX_STACK_LINE(377)
			Float om2 = projection->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
			HX_STACK_LINE(377)
			Float om3 = projection->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
			HX_STACK_LINE(377)
			Float om4 = projection->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
			HX_STACK_LINE(377)
			Float om5 = projection->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
			HX_STACK_LINE(377)
			Float om6 = projection->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
			HX_STACK_LINE(377)
			Float om7 = projection->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
			HX_STACK_LINE(377)
			Float om8 = projection->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
			HX_STACK_LINE(377)
			Float om9 = projection->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
			HX_STACK_LINE(377)
			Float om10 = projection->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
			HX_STACK_LINE(377)
			Float om11 = projection->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
			HX_STACK_LINE(377)
			Float om12 = projection->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
			HX_STACK_LINE(377)
			Float om13 = projection->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
			HX_STACK_LINE(377)
			Float om14 = projection->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
			HX_STACK_LINE(377)
			Float om15 = projection->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
			HX_STACK_LINE(377)
			result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
			HX_STACK_LINE(377)
			result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
			HX_STACK_LINE(377)
			result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
			HX_STACK_LINE(377)
			result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
			HX_STACK_LINE(377)
			result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
			HX_STACK_LINE(377)
			result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
			HX_STACK_LINE(377)
			result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
			HX_STACK_LINE(377)
			result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
			HX_STACK_LINE(377)
			result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
			HX_STACK_LINE(377)
			result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
			HX_STACK_LINE(377)
			result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
			HX_STACK_LINE(377)
			result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
			HX_STACK_LINE(377)
			result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
			HX_STACK_LINE(377)
			result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
			HX_STACK_LINE(377)
			result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
			HX_STACK_LINE(377)
			result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
			HX_STACK_LINE(377)
			result1;
		}
		HX_STACK_LINE(377)
		matrix = result;
	}
	HX_STACK_LINE(378)
	{
		HX_STACK_LINE(378)
		Float l1 = matrix->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
		HX_STACK_LINE(378)
		Float l2 = matrix->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
		HX_STACK_LINE(378)
		Float l3 = matrix->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
		HX_STACK_LINE(378)
		Float l4 = matrix->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
		HX_STACK_LINE(378)
		Float l5 = matrix->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
		HX_STACK_LINE(378)
		Float l6 = matrix->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
		HX_STACK_LINE(378)
		Float l7 = matrix->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
		HX_STACK_LINE(378)
		Float l8 = matrix->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
		HX_STACK_LINE(378)
		Float l9 = matrix->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
		HX_STACK_LINE(378)
		Float l10 = matrix->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
		HX_STACK_LINE(378)
		Float l11 = matrix->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
		HX_STACK_LINE(378)
		Float l12 = matrix->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
		HX_STACK_LINE(378)
		Float l13 = matrix->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
		HX_STACK_LINE(378)
		Float l14 = matrix->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
		HX_STACK_LINE(378)
		Float l15 = matrix->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
		HX_STACK_LINE(378)
		Float l16 = matrix->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
		HX_STACK_LINE(378)
		Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
		HX_STACK_LINE(378)
		Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
		HX_STACK_LINE(378)
		Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
		HX_STACK_LINE(378)
		Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
		HX_STACK_LINE(378)
		Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
		HX_STACK_LINE(378)
		Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
		HX_STACK_LINE(378)
		Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
		HX_STACK_LINE(378)
		Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
		HX_STACK_LINE(378)
		Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
		HX_STACK_LINE(378)
		Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
		HX_STACK_LINE(378)
		Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
		HX_STACK_LINE(378)
		Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
		HX_STACK_LINE(378)
		Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
		HX_STACK_LINE(378)
		Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
		HX_STACK_LINE(378)
		Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
		HX_STACK_LINE(378)
		Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
		HX_STACK_LINE(378)
		Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
		HX_STACK_LINE(378)
		Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
		HX_STACK_LINE(378)
		Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
		HX_STACK_LINE(378)
		Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
		HX_STACK_LINE(378)
		Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
		HX_STACK_LINE(378)
		Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
		HX_STACK_LINE(378)
		Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
		HX_STACK_LINE(378)
		matrix->m[(int)0] = (l23 * l27);
		HX_STACK_LINE(378)
		matrix->m[(int)4] = (l24 * l27);
		HX_STACK_LINE(378)
		matrix->m[(int)8] = (l25 * l27);
		HX_STACK_LINE(378)
		matrix->m[(int)12] = (l26 * l27);
		HX_STACK_LINE(378)
		matrix->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
		HX_STACK_LINE(378)
		matrix->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
		HX_STACK_LINE(378)
		matrix->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
		HX_STACK_LINE(378)
		matrix->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
		HX_STACK_LINE(378)
		matrix->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
		HX_STACK_LINE(378)
		matrix->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
		HX_STACK_LINE(378)
		matrix->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
		HX_STACK_LINE(378)
		matrix->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
		HX_STACK_LINE(378)
		matrix->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
		HX_STACK_LINE(378)
		matrix->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
		HX_STACK_LINE(378)
		matrix->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
		HX_STACK_LINE(378)
		matrix->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
	}
	HX_STACK_LINE(379)
	source->x = (((Float(source->x) / Float(viewportWidth)) * (int)2) - (int)1);
	HX_STACK_LINE(380)
	source->y = -(((((Float(source->y) / Float(viewportHeight)) * (int)2) - (int)1)));
	HX_STACK_LINE(381)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 vector;		HX_STACK_VAR(vector,"vector");
	HX_STACK_LINE(381)
	{
		HX_STACK_LINE(381)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(381)
			Float x = ((((source->x * matrix->m->__get((int)0)) + (source->y * matrix->m->__get((int)4))) + (source->z * matrix->m->__get((int)8))) + matrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(381)
			Float y = ((((source->x * matrix->m->__get((int)1)) + (source->y * matrix->m->__get((int)5))) + (source->z * matrix->m->__get((int)9))) + matrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(381)
			Float z = ((((source->x * matrix->m->__get((int)2)) + (source->y * matrix->m->__get((int)6))) + (source->z * matrix->m->__get((int)10))) + matrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(381)
			Float w = ((((source->x * matrix->m->__get((int)3)) + (source->y * matrix->m->__get((int)7))) + (source->z * matrix->m->__get((int)11))) + matrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(381)
			result->x = (Float(x) / Float(w));
			HX_STACK_LINE(381)
			result->y = (Float(y) / Float(w));
			HX_STACK_LINE(381)
			result->z = (Float(z) / Float(w));
		}
		HX_STACK_LINE(381)
		vector = result;
	}
	HX_STACK_LINE(382)
	Float num = ((((source->x * matrix->m->__get((int)3)) + (source->y * matrix->m->__get((int)7))) + (source->z * matrix->m->__get((int)11))) + matrix->m->__get((int)15));		HX_STACK_VAR(num,"num");
	struct _Function_1_1{
		inline static bool Block( Float &num){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",384,0xea68f64e)
			{
				HX_STACK_LINE(384)
				Float num1 = (num - 1.0);		HX_STACK_VAR(num1,"num1");
				HX_STACK_LINE(384)
				return (bool((-1.401298e-45 <= num1)) && bool((num1 <= 1.401298E-45)));
			}
			return null();
		}
	};
	HX_STACK_LINE(384)
	if ((_Function_1_1::Block(num))){
		HX_STACK_LINE(385)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(385)
		{
			HX_STACK_LINE(385)
			Float scale = (Float(1.0) / Float(num));		HX_STACK_VAR(scale,"scale");
			HX_STACK_LINE(385)
			_g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((vector->x * scale),(vector->y * scale),(vector->z * scale));
		}
		HX_STACK_LINE(385)
		vector = _g;
	}
	HX_STACK_LINE(388)
	return vector;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Vector3_obj,Unproject,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::Minimize( ::com::gamestudiohx::babylonhx::tools::math::Vector3 left,::com::gamestudiohx::babylonhx::tools::math::Vector3 right){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","Minimize",0x5962b05d,"com.gamestudiohx.babylonhx.tools.math.Vector3.Minimize","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",391,0xea68f64e)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_LINE(392)
	Float x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(392)
	if (((left->x < right->x))){
		HX_STACK_LINE(392)
		x = left->x;
	}
	else{
		HX_STACK_LINE(392)
		x = right->x;
	}
	HX_STACK_LINE(393)
	Float y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(393)
	if (((left->y < right->y))){
		HX_STACK_LINE(393)
		y = left->y;
	}
	else{
		HX_STACK_LINE(393)
		y = right->y;
	}
	HX_STACK_LINE(394)
	Float z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(394)
	if (((left->z < right->z))){
		HX_STACK_LINE(394)
		z = left->z;
	}
	else{
		HX_STACK_LINE(394)
		z = right->z;
	}
	HX_STACK_LINE(395)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,Minimize,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 Vector3_obj::Maximize( ::com::gamestudiohx::babylonhx::tools::math::Vector3 left,::com::gamestudiohx::babylonhx::tools::math::Vector3 right){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","Maximize",0x0c48960b,"com.gamestudiohx.babylonhx.tools.math.Vector3.Maximize","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",398,0xea68f64e)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_LINE(399)
	Float x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(399)
	if (((left->x > right->x))){
		HX_STACK_LINE(399)
		x = left->x;
	}
	else{
		HX_STACK_LINE(399)
		x = right->x;
	}
	HX_STACK_LINE(400)
	Float y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(400)
	if (((left->y > right->y))){
		HX_STACK_LINE(400)
		y = left->y;
	}
	else{
		HX_STACK_LINE(400)
		y = right->y;
	}
	HX_STACK_LINE(401)
	Float z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(401)
	if (((left->z > right->z))){
		HX_STACK_LINE(401)
		z = left->z;
	}
	else{
		HX_STACK_LINE(401)
		z = right->z;
	}
	HX_STACK_LINE(402)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,Maximize,return )

Float Vector3_obj::Distance( ::com::gamestudiohx::babylonhx::tools::math::Vector3 value1,::com::gamestudiohx::babylonhx::tools::math::Vector3 value2){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","Distance",0xa3e30474,"com.gamestudiohx.babylonhx.tools.math.Vector3.Distance","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",406,0xea68f64e)
	HX_STACK_ARG(value1,"value1")
	HX_STACK_ARG(value2,"value2")
	struct _Function_1_1{
		inline static Float Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &value1,::com::gamestudiohx::babylonhx::tools::math::Vector3 &value2){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",406,0xea68f64e)
			{
				HX_STACK_LINE(406)
				Float x = (value1->x - value2->x);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(406)
				Float y = (value1->y - value2->y);		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(406)
				Float z = (value1->z - value2->z);		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(406)
				return (((x * x) + (y * y)) + (z * z));
			}
			return null();
		}
	};
	HX_STACK_LINE(406)
	return ::Math_obj::sqrt(_Function_1_1::Block(value1,value2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,Distance,return )

Float Vector3_obj::DistanceSquared( ::com::gamestudiohx::babylonhx::tools::math::Vector3 value1,::com::gamestudiohx::babylonhx::tools::math::Vector3 value2){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Vector3","DistanceSquared",0xeb40e313,"com.gamestudiohx.babylonhx.tools.math.Vector3.DistanceSquared","com/gamestudiohx/babylonhx/tools/math/Vector3.hx",409,0xea68f64e)
	HX_STACK_ARG(value1,"value1")
	HX_STACK_ARG(value2,"value2")
	HX_STACK_LINE(410)
	Float x = (value1->x - value2->x);		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(411)
	Float y = (value1->y - value2->y);		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(412)
	Float z = (value1->z - value2->z);		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(414)
	return (((x * x) + (y * y)) + (z * z));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3_obj,DistanceSquared,return )


Vector3_obj::Vector3_obj()
{
}

Dynamic Vector3_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"Up") ) { return Up_dyn(); }
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
		if (HX_FIELD_EQ(inName,"Cross") ) { return Cross_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Center") ) { return Center_dyn(); }
		if (HX_FIELD_EQ(inName,"negate") ) { return negate_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"divide") ) { return divide_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Hermite") ) { return Hermite_dyn(); }
		if (HX_FIELD_EQ(inName,"Project") ) { return Project_dyn(); }
		if (HX_FIELD_EQ(inName,"asArray") ) { return asArray_dyn(); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Minimize") ) { return Minimize_dyn(); }
		if (HX_FIELD_EQ(inName,"Maximize") ) { return Maximize_dyn(); }
		if (HX_FIELD_EQ(inName,"Distance") ) { return Distance_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"addToRef") ) { return addToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FromArray") ) { return FromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"Normalize") ) { return Normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"Unproject") ) { return Unproject_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"CatmullRom") ) { return CatmullRom_dyn(); }
		if (HX_FIELD_EQ(inName,"CrossToRef") ) { return CrossToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"addInPlace") ) { return addInPlace_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleToRef") ) { return scaleToRef_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"divideToRef") ) { return divideToRef_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scaleInPlace") ) { return scaleInPlace_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subtractToRef") ) { return subtractToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"multiplyToRef") ) { return multiplyToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { return lengthSquared_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"FromArrayToRef") ) { return FromArrayToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"NormalizeToRef") ) { return NormalizeToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"equalsToFloats") ) { return equalsToFloats_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFromFloats") ) { return copyFromFloats_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"FromFloatsToRef") ) { return FromFloatsToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"TransformNormal") ) { return TransformNormal_dyn(); }
		if (HX_FIELD_EQ(inName,"DistanceSquared") ) { return DistanceSquared_dyn(); }
		if (HX_FIELD_EQ(inName,"MinimizeInPlace") ) { return MinimizeInPlace_dyn(); }
		if (HX_FIELD_EQ(inName,"MaximizeInPlace") ) { return MaximizeInPlace_dyn(); }
		if (HX_FIELD_EQ(inName,"subtractInPlace") ) { return subtractInPlace_dyn(); }
		if (HX_FIELD_EQ(inName,"multiplyInPlace") ) { return multiplyInPlace_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"multiplyByFloats") ) { return multiplyByFloats_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"subtractFromFloats") ) { return subtractFromFloats_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"TransformCoordinates") ) { return TransformCoordinates_dyn(); }
		if (HX_FIELD_EQ(inName,"TransformNormalToRef") ) { return TransformNormalToRef_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"subtractFromFloatsToRef") ) { return subtractFromFloatsToRef_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"TransformCoordinatesToRef") ) { return TransformCoordinatesToRef_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"TransformNormalFromFloatsToRef") ) { return TransformNormalFromFloatsToRef_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"TransformCoordinatesFromFloatsToRef") ) { return TransformCoordinatesFromFloatsToRef_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vector3_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("z"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("Center"),
	HX_CSTRING("FromArray"),
	HX_CSTRING("FromArrayToRef"),
	HX_CSTRING("FromFloatsToRef"),
	HX_CSTRING("Zero"),
	HX_CSTRING("Up"),
	HX_CSTRING("TransformCoordinates"),
	HX_CSTRING("TransformCoordinatesToRef"),
	HX_CSTRING("TransformCoordinatesFromFloatsToRef"),
	HX_CSTRING("TransformNormal"),
	HX_CSTRING("TransformNormalToRef"),
	HX_CSTRING("TransformNormalFromFloatsToRef"),
	HX_CSTRING("CatmullRom"),
	HX_CSTRING("Clamp"),
	HX_CSTRING("Hermite"),
	HX_CSTRING("Lerp"),
	HX_CSTRING("Dot"),
	HX_CSTRING("Cross"),
	HX_CSTRING("CrossToRef"),
	HX_CSTRING("Normalize"),
	HX_CSTRING("NormalizeToRef"),
	HX_CSTRING("Project"),
	HX_CSTRING("Unproject"),
	HX_CSTRING("Minimize"),
	HX_CSTRING("Maximize"),
	HX_CSTRING("Distance"),
	HX_CSTRING("DistanceSquared"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector3_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Vector3_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(Vector3_obj,z),HX_CSTRING("z")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("z"),
	HX_CSTRING("toString"),
	HX_CSTRING("asArray"),
	HX_CSTRING("toArray"),
	HX_CSTRING("MinimizeInPlace"),
	HX_CSTRING("MaximizeInPlace"),
	HX_CSTRING("addInPlace"),
	HX_CSTRING("add"),
	HX_CSTRING("addToRef"),
	HX_CSTRING("subtractInPlace"),
	HX_CSTRING("subtract"),
	HX_CSTRING("subtractToRef"),
	HX_CSTRING("subtractFromFloats"),
	HX_CSTRING("subtractFromFloatsToRef"),
	HX_CSTRING("negate"),
	HX_CSTRING("scaleInPlace"),
	HX_CSTRING("scale"),
	HX_CSTRING("scaleToRef"),
	HX_CSTRING("equals"),
	HX_CSTRING("equalsToFloats"),
	HX_CSTRING("multiplyInPlace"),
	HX_CSTRING("multiply"),
	HX_CSTRING("multiplyToRef"),
	HX_CSTRING("multiplyByFloats"),
	HX_CSTRING("divide"),
	HX_CSTRING("divideToRef"),
	HX_CSTRING("length"),
	HX_CSTRING("lengthSquared"),
	HX_CSTRING("normalize"),
	HX_CSTRING("clone"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("copyFromFloats"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector3_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector3_obj::__mClass,"__mClass");
};

#endif

Class Vector3_obj::__mClass;

void Vector3_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.tools.math.Vector3"), hx::TCanCast< Vector3_obj> ,sStaticFields,sMemberFields,
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

void Vector3_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math
