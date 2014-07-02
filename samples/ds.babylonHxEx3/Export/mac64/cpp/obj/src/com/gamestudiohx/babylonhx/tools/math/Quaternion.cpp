#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Quaternion
#include <com/gamestudiohx/babylonhx/tools/math/Quaternion.h>
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

Void Quaternion_obj::__construct(hx::Null< Float >  __o_initialX,hx::Null< Float >  __o_initialY,hx::Null< Float >  __o_initialZ,hx::Null< Float >  __o_initialW)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Quaternion","new",0x0736b5d1,"com.gamestudiohx.babylonhx.tools.math.Quaternion.new","com/gamestudiohx/babylonhx/tools/math/Quaternion.hx",21,0x0282bcc0)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_initialX,"initialX")
HX_STACK_ARG(__o_initialY,"initialY")
HX_STACK_ARG(__o_initialZ,"initialZ")
HX_STACK_ARG(__o_initialW,"initialW")
Float initialX = __o_initialX.Default(0);
Float initialY = __o_initialY.Default(0);
Float initialZ = __o_initialZ.Default(0);
Float initialW = __o_initialW.Default(0);
{
	HX_STACK_LINE(22)
	this->x = initialX;
	HX_STACK_LINE(23)
	this->y = initialY;
	HX_STACK_LINE(24)
	this->z = initialZ;
	HX_STACK_LINE(25)
	this->w = initialW;
}
;
	return null();
}

//Quaternion_obj::~Quaternion_obj() { }

Dynamic Quaternion_obj::__CreateEmpty() { return  new Quaternion_obj; }
hx::ObjectPtr< Quaternion_obj > Quaternion_obj::__new(hx::Null< Float >  __o_initialX,hx::Null< Float >  __o_initialY,hx::Null< Float >  __o_initialZ,hx::Null< Float >  __o_initialW)
{  hx::ObjectPtr< Quaternion_obj > result = new Quaternion_obj();
	result->__construct(__o_initialX,__o_initialY,__o_initialZ,__o_initialW);
	return result;}

Dynamic Quaternion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Quaternion_obj > result = new Quaternion_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String Quaternion_obj::toString( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Quaternion","toString",0xe641919b,"com.gamestudiohx.babylonhx.tools.math.Quaternion.toString","com/gamestudiohx/babylonhx/tools/math/Quaternion.hx",18,0x0282bcc0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	return ((((((((HX_CSTRING("{X: ") + this->x) + HX_CSTRING(" Y:")) + this->y) + HX_CSTRING(" Z:")) + this->z) + HX_CSTRING(" W:")) + this->w) + HX_CSTRING("}"));
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,toString,return )

bool Quaternion_obj::equals( ::com::gamestudiohx::babylonhx::tools::math::Quaternion otherQuaternion){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Quaternion","equals",0x5ade456e,"com.gamestudiohx.babylonhx.tools.math.Quaternion.equals","com/gamestudiohx/babylonhx/tools/math/Quaternion.hx",29,0x0282bcc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherQuaternion,"otherQuaternion")
	HX_STACK_LINE(29)
	return (bool((bool((bool((this->x == otherQuaternion->x)) && bool((this->y == otherQuaternion->y)))) && bool((this->z == otherQuaternion->z)))) && bool((this->w == otherQuaternion->w)));
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,equals,return )

::com::gamestudiohx::babylonhx::tools::math::Quaternion Quaternion_obj::clone( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Quaternion","clone",0xf9def70e,"com.gamestudiohx.babylonhx.tools.math.Quaternion.clone","com/gamestudiohx/babylonhx/tools/math/Quaternion.hx",33,0x0282bcc0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	return ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(this->x,this->y,this->z,this->w);
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,clone,return )

Void Quaternion_obj::copyFrom( ::com::gamestudiohx::babylonhx::tools::math::Quaternion other){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Quaternion","copyFrom",0x7633ccae,"com.gamestudiohx.babylonhx.tools.math.Quaternion.copyFrom","com/gamestudiohx/babylonhx/tools/math/Quaternion.hx",36,0x0282bcc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(37)
		this->x = other->x;
		HX_STACK_LINE(38)
		this->y = other->y;
		HX_STACK_LINE(39)
		this->z = other->z;
		HX_STACK_LINE(40)
		this->w = other->w;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,copyFrom,(void))

::com::gamestudiohx::babylonhx::tools::math::Quaternion Quaternion_obj::add( ::com::gamestudiohx::babylonhx::tools::math::Quaternion other){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Quaternion","add",0x072cd792,"com.gamestudiohx.babylonhx.tools.math.Quaternion.add","com/gamestudiohx/babylonhx/tools/math/Quaternion.hx",44,0x0282bcc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(44)
	return ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new((this->x + other->x),(this->y + other->y),(this->z + other->z),(this->w + other->w));
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,add,return )

::com::gamestudiohx::babylonhx::tools::math::Quaternion Quaternion_obj::scale( Float value){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Quaternion","scale",0x2a4ab23b,"com.gamestudiohx.babylonhx.tools.math.Quaternion.scale","com/gamestudiohx/babylonhx/tools/math/Quaternion.hx",48,0x0282bcc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(48)
	return ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new((this->x * value),(this->y * value),(this->z * value),(this->w * value));
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,scale,return )

::com::gamestudiohx::babylonhx::tools::math::Quaternion Quaternion_obj::multiply( ::com::gamestudiohx::babylonhx::tools::math::Quaternion q1){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Quaternion","multiply",0x485fa313,"com.gamestudiohx.babylonhx.tools.math.Quaternion.multiply","com/gamestudiohx/babylonhx/tools/math/Quaternion.hx",51,0x0282bcc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(q1,"q1")
	HX_STACK_LINE(52)
	::com::gamestudiohx::babylonhx::tools::math::Quaternion result = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new((int)0,(int)0,(int)0,1.0);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		result->x = ((((this->x * q1->w) + (this->y * q1->z)) - (this->z * q1->y)) + (this->w * q1->x));
		HX_STACK_LINE(53)
		result->y = ((((-(this->x) * q1->z) + (this->y * q1->w)) + (this->z * q1->x)) + (this->w * q1->y));
		HX_STACK_LINE(53)
		result->z = ((((this->x * q1->y) - (this->y * q1->x)) + (this->z * q1->w)) + (this->w * q1->z));
		HX_STACK_LINE(53)
		result->w = ((((-(this->x) * q1->x) - (this->y * q1->y)) - (this->z * q1->z)) + (this->w * q1->w));
		HX_STACK_LINE(53)
		result;
	}
	HX_STACK_LINE(55)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,multiply,return )

::com::gamestudiohx::babylonhx::tools::math::Quaternion Quaternion_obj::multiplyToRef( ::com::gamestudiohx::babylonhx::tools::math::Quaternion q1,::com::gamestudiohx::babylonhx::tools::math::Quaternion result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Quaternion","multiplyToRef",0x6b1f5285,"com.gamestudiohx.babylonhx.tools.math.Quaternion.multiplyToRef","com/gamestudiohx/babylonhx/tools/math/Quaternion.hx",58,0x0282bcc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(q1,"q1")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(59)
	result->x = ((((this->x * q1->w) + (this->y * q1->z)) - (this->z * q1->y)) + (this->w * q1->x));
	HX_STACK_LINE(60)
	result->y = ((((-(this->x) * q1->z) + (this->y * q1->w)) + (this->z * q1->x)) + (this->w * q1->y));
	HX_STACK_LINE(61)
	result->z = ((((this->x * q1->y) - (this->y * q1->x)) + (this->z * q1->w)) + (this->w * q1->z));
	HX_STACK_LINE(62)
	result->w = ((((-(this->x) * q1->x) - (this->y * q1->y)) - (this->z * q1->z)) + (this->w * q1->w));
	HX_STACK_LINE(64)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,multiplyToRef,return )

Float Quaternion_obj::length( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Quaternion","length",0x39f2ec15,"com.gamestudiohx.babylonhx.tools.math.Quaternion.length","com/gamestudiohx/babylonhx/tools/math/Quaternion.hx",68,0x0282bcc0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return ::Math_obj::sqrt(((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)) + (this->w * this->w)));
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,length,return )

Void Quaternion_obj::normalize( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Quaternion","normalize",0x163747be,"com.gamestudiohx.babylonhx.tools.math.Quaternion.normalize","com/gamestudiohx/babylonhx/tools/math/Quaternion.hx",71,0x0282bcc0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		Float _g = ::Math_obj::sqrt(((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)) + (this->w * this->w)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(72)
		Float length = (Float(1.0) / Float(_g));		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(73)
		hx::MultEq(this->x,length);
		HX_STACK_LINE(74)
		hx::MultEq(this->y,length);
		HX_STACK_LINE(75)
		hx::MultEq(this->z,length);
		HX_STACK_LINE(76)
		hx::MultEq(this->w,length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,normalize,(void))

::com::gamestudiohx::babylonhx::tools::math::Vector3 Quaternion_obj::toEulerAngles( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Quaternion","toEulerAngles",0x73b1527f,"com.gamestudiohx.babylonhx.tools.math.Quaternion.toEulerAngles","com/gamestudiohx/babylonhx/tools/math/Quaternion.hx",79,0x0282bcc0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	Float qx = this->x;		HX_STACK_VAR(qx,"qx");
	HX_STACK_LINE(81)
	Float qy = this->y;		HX_STACK_VAR(qy,"qy");
	HX_STACK_LINE(82)
	Float qz = this->z;		HX_STACK_VAR(qz,"qz");
	HX_STACK_LINE(83)
	Float qw = this->w;		HX_STACK_VAR(qw,"qw");
	HX_STACK_LINE(85)
	Float sqx = (qx * qx);		HX_STACK_VAR(sqx,"sqx");
	HX_STACK_LINE(86)
	Float sqy = (qy * qy);		HX_STACK_VAR(sqy,"sqy");
	HX_STACK_LINE(87)
	Float sqz = (qz * qz);		HX_STACK_VAR(sqz,"sqz");
	HX_STACK_LINE(89)
	Float yaw = ::Math_obj::atan2((2.0 * (((qy * qw) - (qx * qz)))),(1.0 - (2.0 * ((sqy + sqz)))));		HX_STACK_VAR(yaw,"yaw");
	HX_STACK_LINE(90)
	Float pitch = ::Math_obj::asin((2.0 * (((qx * qy) + (qz * qw)))));		HX_STACK_VAR(pitch,"pitch");
	HX_STACK_LINE(91)
	Float roll = ::Math_obj::atan2((2.0 * (((qx * qw) - (qy * qz)))),(1.0 - (2.0 * ((sqx + sqz)))));		HX_STACK_VAR(roll,"roll");
	HX_STACK_LINE(93)
	Float gimbaLockTest = ((qx * qy) + (qz * qw));		HX_STACK_VAR(gimbaLockTest,"gimbaLockTest");
	HX_STACK_LINE(94)
	if (((gimbaLockTest > 0.499))){
		HX_STACK_LINE(95)
		Float _g = ::Math_obj::atan2(qx,qw);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(95)
		Float _g1 = (2.0 * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(95)
		yaw = _g1;
		HX_STACK_LINE(96)
		roll = (int)0;
	}
	else{
		HX_STACK_LINE(97)
		if (((gimbaLockTest < -0.499))){
			HX_STACK_LINE(98)
			Float _g2 = ::Math_obj::atan2(qx,qw);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(98)
			Float _g3 = (-2. * _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(98)
			yaw = _g3;
			HX_STACK_LINE(99)
			roll = (int)0;
		}
	}
	HX_STACK_LINE(102)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(pitch,yaw,roll);
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,toEulerAngles,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Quaternion_obj::toRotationMatrix( ::com::gamestudiohx::babylonhx::tools::math::Matrix result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Quaternion","toRotationMatrix",0x2417ace9,"com.gamestudiohx.babylonhx.tools.math.Quaternion.toRotationMatrix","com/gamestudiohx/babylonhx/tools/math/Quaternion.hx",105,0x0282bcc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(106)
	Float xx = (this->x * this->x);		HX_STACK_VAR(xx,"xx");
	HX_STACK_LINE(107)
	Float yy = (this->y * this->y);		HX_STACK_VAR(yy,"yy");
	HX_STACK_LINE(108)
	Float zz = (this->z * this->z);		HX_STACK_VAR(zz,"zz");
	HX_STACK_LINE(109)
	Float xy = (this->x * this->y);		HX_STACK_VAR(xy,"xy");
	HX_STACK_LINE(110)
	Float zw = (this->z * this->w);		HX_STACK_VAR(zw,"zw");
	HX_STACK_LINE(111)
	Float zx = (this->z * this->x);		HX_STACK_VAR(zx,"zx");
	HX_STACK_LINE(112)
	Float yw = (this->y * this->w);		HX_STACK_VAR(yw,"yw");
	HX_STACK_LINE(113)
	Float yz = (this->y * this->z);		HX_STACK_VAR(yz,"yz");
	HX_STACK_LINE(114)
	Float xw = (this->x * this->w);		HX_STACK_VAR(xw,"xw");
	HX_STACK_LINE(116)
	result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
	HX_STACK_LINE(117)
	result->m[(int)1] = (2.0 * ((xy + zw)));
	HX_STACK_LINE(118)
	result->m[(int)2] = (2.0 * ((zx - yw)));
	HX_STACK_LINE(119)
	result->m[(int)3] = (int)0;
	HX_STACK_LINE(120)
	result->m[(int)4] = (2.0 * ((xy - zw)));
	HX_STACK_LINE(121)
	result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
	HX_STACK_LINE(122)
	result->m[(int)6] = (2.0 * ((yz + xw)));
	HX_STACK_LINE(123)
	result->m[(int)7] = (int)0;
	HX_STACK_LINE(124)
	result->m[(int)8] = (2.0 * ((zx + yw)));
	HX_STACK_LINE(125)
	result->m[(int)9] = (2.0 * ((yz - xw)));
	HX_STACK_LINE(126)
	result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
	HX_STACK_LINE(127)
	result->m[(int)11] = (int)0;
	HX_STACK_LINE(128)
	result->m[(int)12] = (int)0;
	HX_STACK_LINE(129)
	result->m[(int)13] = (int)0;
	HX_STACK_LINE(130)
	result->m[(int)14] = (int)0;
	HX_STACK_LINE(131)
	result->m[(int)15] = 1.0;
	HX_STACK_LINE(133)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,toRotationMatrix,return )

::com::gamestudiohx::babylonhx::tools::math::Quaternion Quaternion_obj::FromArray( Array< Float > array,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Quaternion","FromArray",0xe68147e0,"com.gamestudiohx.babylonhx.tools.math.Quaternion.FromArray","com/gamestudiohx/babylonhx/tools/math/Quaternion.hx",138,0x0282bcc0)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(138)
		return ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)),array->__get((offset + (int)3)));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,FromArray,return )

::com::gamestudiohx::babylonhx::tools::math::Quaternion Quaternion_obj::RotationYawPitchRoll( Float yaw,Float pitch,Float roll){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Quaternion","RotationYawPitchRoll",0x45f5859b,"com.gamestudiohx.babylonhx.tools.math.Quaternion.RotationYawPitchRoll","com/gamestudiohx/babylonhx/tools/math/Quaternion.hx",141,0x0282bcc0)
	HX_STACK_ARG(yaw,"yaw")
	HX_STACK_ARG(pitch,"pitch")
	HX_STACK_ARG(roll,"roll")
	HX_STACK_LINE(142)
	::com::gamestudiohx::babylonhx::tools::math::Quaternion result = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		Float halfRoll = (roll * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
		HX_STACK_LINE(143)
		Float halfPitch = (pitch * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
		HX_STACK_LINE(143)
		Float halfYaw = (yaw * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
		HX_STACK_LINE(143)
		Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
		HX_STACK_LINE(143)
		Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
		HX_STACK_LINE(143)
		Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
		HX_STACK_LINE(143)
		Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
		HX_STACK_LINE(143)
		Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
		HX_STACK_LINE(143)
		Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
		HX_STACK_LINE(143)
		result->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
		HX_STACK_LINE(143)
		result->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
		HX_STACK_LINE(143)
		result->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
		HX_STACK_LINE(143)
		result->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
		HX_STACK_LINE(143)
		result;
	}
	HX_STACK_LINE(145)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Quaternion_obj,RotationYawPitchRoll,return )

::com::gamestudiohx::babylonhx::tools::math::Quaternion Quaternion_obj::RotationYawPitchRollToRef( Float yaw,Float pitch,Float roll,::com::gamestudiohx::babylonhx::tools::math::Quaternion result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Quaternion","RotationYawPitchRollToRef",0x197f42fd,"com.gamestudiohx.babylonhx.tools.math.Quaternion.RotationYawPitchRollToRef","com/gamestudiohx/babylonhx/tools/math/Quaternion.hx",148,0x0282bcc0)
	HX_STACK_ARG(yaw,"yaw")
	HX_STACK_ARG(pitch,"pitch")
	HX_STACK_ARG(roll,"roll")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(149)
	Float halfRoll = (roll * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
	HX_STACK_LINE(150)
	Float halfPitch = (pitch * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
	HX_STACK_LINE(151)
	Float halfYaw = (yaw * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
	HX_STACK_LINE(153)
	Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
	HX_STACK_LINE(154)
	Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
	HX_STACK_LINE(155)
	Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
	HX_STACK_LINE(156)
	Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
	HX_STACK_LINE(157)
	Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
	HX_STACK_LINE(158)
	Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
	HX_STACK_LINE(160)
	result->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
	HX_STACK_LINE(161)
	result->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
	HX_STACK_LINE(162)
	result->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
	HX_STACK_LINE(163)
	result->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
	HX_STACK_LINE(165)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Quaternion_obj,RotationYawPitchRollToRef,return )

::com::gamestudiohx::babylonhx::tools::math::Quaternion Quaternion_obj::Slerp( ::com::gamestudiohx::babylonhx::tools::math::Quaternion left,::com::gamestudiohx::babylonhx::tools::math::Quaternion right,Float amount){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Quaternion","Slerp",0xc36e1bfb,"com.gamestudiohx.babylonhx.tools.math.Quaternion.Slerp","com/gamestudiohx/babylonhx/tools/math/Quaternion.hx",168,0x0282bcc0)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_LINE(169)
	Float num2;		HX_STACK_VAR(num2,"num2");
	HX_STACK_LINE(170)
	Float num3;		HX_STACK_VAR(num3,"num3");
	HX_STACK_LINE(171)
	Float num = amount;		HX_STACK_VAR(num,"num");
	HX_STACK_LINE(172)
	Float num4 = ((((left->x * right->x) + (left->y * right->y)) + (left->z * right->z)) + (left->w * right->w));		HX_STACK_VAR(num4,"num4");
	HX_STACK_LINE(173)
	bool flag = false;		HX_STACK_VAR(flag,"flag");
	HX_STACK_LINE(175)
	if (((num4 < (int)0))){
		HX_STACK_LINE(176)
		flag = true;
		HX_STACK_LINE(177)
		num4 = -(num4);
	}
	HX_STACK_LINE(180)
	if (((num4 > 0.999999))){
		HX_STACK_LINE(181)
		num3 = ((int)1 - num);
		HX_STACK_LINE(182)
		if ((flag)){
			HX_STACK_LINE(182)
			num2 = -(num);
		}
		else{
			HX_STACK_LINE(182)
			num2 = num;
		}
	}
	else{
		HX_STACK_LINE(185)
		Float num5 = ::Math_obj::acos(num4);		HX_STACK_VAR(num5,"num5");
		HX_STACK_LINE(186)
		Float _g = ::Math_obj::sin(num5);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(186)
		Float num6 = (Float(1.0) / Float(_g));		HX_STACK_VAR(num6,"num6");
		HX_STACK_LINE(187)
		Float _g1 = ::Math_obj::sin((((1.0 - num)) * num5));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(187)
		Float _g2 = (_g1 * num6);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(187)
		num3 = _g2;
		HX_STACK_LINE(188)
		Float _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(188)
		if ((flag)){
			HX_STACK_LINE(188)
			Float _g3 = -(::Math_obj::sin((num * num5)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(188)
			_g5 = (_g3 * num6);
		}
		else{
			HX_STACK_LINE(188)
			Float _g4 = ::Math_obj::sin((num * num5));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(188)
			_g5 = (_g4 * num6);
		}
		HX_STACK_LINE(188)
		num2 = _g5;
	}
	HX_STACK_LINE(191)
	return ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(((num3 * left->x) + (num2 * right->x)),((num3 * left->y) + (num2 * right->y)),((num3 * left->z) + (num2 * right->z)),((num3 * left->w) + (num2 * right->w)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Quaternion_obj,Slerp,return )


Quaternion_obj::Quaternion_obj()
{
}

Dynamic Quaternion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Slerp") ) { return Slerp_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return multiply_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FromArray") ) { return FromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplyToRef") ) { return multiplyToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"toEulerAngles") ) { return toEulerAngles_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"toRotationMatrix") ) { return toRotationMatrix_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"RotationYawPitchRoll") ) { return RotationYawPitchRoll_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"RotationYawPitchRollToRef") ) { return RotationYawPitchRollToRef_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Quaternion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Quaternion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("z"));
	outFields->push(HX_CSTRING("w"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FromArray"),
	HX_CSTRING("RotationYawPitchRoll"),
	HX_CSTRING("RotationYawPitchRollToRef"),
	HX_CSTRING("Slerp"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Quaternion_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Quaternion_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(Quaternion_obj,z),HX_CSTRING("z")},
	{hx::fsFloat,(int)offsetof(Quaternion_obj,w),HX_CSTRING("w")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("z"),
	HX_CSTRING("w"),
	HX_CSTRING("toString"),
	HX_CSTRING("equals"),
	HX_CSTRING("clone"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("add"),
	HX_CSTRING("scale"),
	HX_CSTRING("multiply"),
	HX_CSTRING("multiplyToRef"),
	HX_CSTRING("length"),
	HX_CSTRING("normalize"),
	HX_CSTRING("toEulerAngles"),
	HX_CSTRING("toRotationMatrix"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Quaternion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Quaternion_obj::__mClass,"__mClass");
};

#endif

Class Quaternion_obj::__mClass;

void Quaternion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.tools.math.Quaternion"), hx::TCanCast< Quaternion_obj> ,sStaticFields,sMemberFields,
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

void Quaternion_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math
