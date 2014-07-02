#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_animations_Animation
#include <com/gamestudiohx/babylonhx/animations/Animation.h>
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
namespace animations{

Void Animation_obj::__construct(::String name,::String targetProperty,int framePerSecond,int dataType,hx::Null< int >  __o_loopMode)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.animations.Animation","new",0xffb42f49,"com.gamestudiohx.babylonhx.animations.Animation.new","com/gamestudiohx/babylonhx/animations/Animation.hx",42,0xf0ba8a87)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(targetProperty,"targetProperty")
HX_STACK_ARG(framePerSecond,"framePerSecond")
HX_STACK_ARG(dataType,"dataType")
HX_STACK_ARG(__o_loopMode,"loopMode")
int loopMode = __o_loopMode.Default(-1);
{
	HX_STACK_LINE(43)
	this->name = name;
	HX_STACK_LINE(44)
	this->targetProperty = targetProperty;
	HX_STACK_LINE(45)
	Array< ::String > _g = targetProperty.split(HX_CSTRING("."));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(45)
	this->targetPropertyPath = _g;
	HX_STACK_LINE(46)
	this->framePerSecond = framePerSecond;
	HX_STACK_LINE(47)
	this->dataType = dataType;
	HX_STACK_LINE(48)
	if (((loopMode == (int)-1))){
		HX_STACK_LINE(48)
		this->loopMode = ::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONLOOPMODE_CYCLE;
	}
	else{
		HX_STACK_LINE(48)
		this->loopMode = loopMode;
	}
	HX_STACK_LINE(50)
	this->_keys = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(53)
	this->_offsetsCache = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(54)
	this->_highLimitsCache = Dynamic( Array_obj<Dynamic>::__new());
}
;
	return null();
}

//Animation_obj::~Animation_obj() { }

Dynamic Animation_obj::__CreateEmpty() { return  new Animation_obj; }
hx::ObjectPtr< Animation_obj > Animation_obj::__new(::String name,::String targetProperty,int framePerSecond,int dataType,hx::Null< int >  __o_loopMode)
{  hx::ObjectPtr< Animation_obj > result = new Animation_obj();
	result->__construct(name,targetProperty,framePerSecond,dataType,__o_loopMode);
	return result;}

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animation_obj > result = new Animation_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Float Animation_obj::floatInterpolateFunction( Float startValue,Float endValue,Float gradient){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.animations.Animation","floatInterpolateFunction",0xdae61b34,"com.gamestudiohx.babylonhx.animations.Animation.floatInterpolateFunction","com/gamestudiohx/babylonhx/animations/Animation.hx",58,0xf0ba8a87)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startValue,"startValue")
	HX_STACK_ARG(endValue,"endValue")
	HX_STACK_ARG(gradient,"gradient")
	HX_STACK_LINE(58)
	return (startValue + (((endValue - startValue)) * gradient));
}


HX_DEFINE_DYNAMIC_FUNC3(Animation_obj,floatInterpolateFunction,return )

::com::gamestudiohx::babylonhx::tools::math::Quaternion Animation_obj::quaternionInterpolateFunction( ::com::gamestudiohx::babylonhx::tools::math::Quaternion startValue,::com::gamestudiohx::babylonhx::tools::math::Quaternion endValue,Float gradient){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.animations.Animation","quaternionInterpolateFunction",0xd91c58a4,"com.gamestudiohx.babylonhx.animations.Animation.quaternionInterpolateFunction","com/gamestudiohx/babylonhx/animations/Animation.hx",62,0xf0ba8a87)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startValue,"startValue")
	HX_STACK_ARG(endValue,"endValue")
	HX_STACK_ARG(gradient,"gradient")
	HX_STACK_LINE(62)
	Float num2;		HX_STACK_VAR(num2,"num2");
	HX_STACK_LINE(62)
	Float num3;		HX_STACK_VAR(num3,"num3");
	HX_STACK_LINE(62)
	Float num = gradient;		HX_STACK_VAR(num,"num");
	HX_STACK_LINE(62)
	Float num4 = ((((startValue->x * endValue->x) + (startValue->y * endValue->y)) + (startValue->z * endValue->z)) + (startValue->w * endValue->w));		HX_STACK_VAR(num4,"num4");
	HX_STACK_LINE(62)
	bool flag = false;		HX_STACK_VAR(flag,"flag");
	HX_STACK_LINE(62)
	if (((num4 < (int)0))){
		HX_STACK_LINE(62)
		flag = true;
		HX_STACK_LINE(62)
		num4 = -(num4);
	}
	HX_STACK_LINE(62)
	if (((num4 > 0.999999))){
		HX_STACK_LINE(62)
		num3 = ((int)1 - num);
		HX_STACK_LINE(62)
		if ((flag)){
			HX_STACK_LINE(62)
			num2 = -(num);
		}
		else{
			HX_STACK_LINE(62)
			num2 = num;
		}
	}
	else{
		HX_STACK_LINE(62)
		Float num5 = ::Math_obj::acos(num4);		HX_STACK_VAR(num5,"num5");
		HX_STACK_LINE(62)
		Float _g = ::Math_obj::sin(num5);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		Float num6 = (Float(1.0) / Float(_g));		HX_STACK_VAR(num6,"num6");
		HX_STACK_LINE(62)
		Float _g1 = ::Math_obj::sin((((1.0 - num)) * num5));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(62)
		Float _g2 = (_g1 * num6);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(62)
		num3 = _g2;
		HX_STACK_LINE(62)
		Float _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(62)
		if ((flag)){
			HX_STACK_LINE(62)
			Float _g3 = -(::Math_obj::sin((num * num5)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(62)
			_g5 = (_g3 * num6);
		}
		else{
			HX_STACK_LINE(62)
			Float _g4 = ::Math_obj::sin((num * num5));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(62)
			_g5 = (_g4 * num6);
		}
		HX_STACK_LINE(62)
		num2 = _g5;
	}
	HX_STACK_LINE(62)
	return ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(((num3 * startValue->x) + (num2 * endValue->x)),((num3 * startValue->y) + (num2 * endValue->y)),((num3 * startValue->z) + (num2 * endValue->z)),((num3 * startValue->w) + (num2 * endValue->w)));
}


HX_DEFINE_DYNAMIC_FUNC3(Animation_obj,quaternionInterpolateFunction,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 Animation_obj::vector3InterpolateFunction( ::com::gamestudiohx::babylonhx::tools::math::Vector3 startValue,::com::gamestudiohx::babylonhx::tools::math::Vector3 endValue,Float gradient){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.animations.Animation","vector3InterpolateFunction",0x50cdcb00,"com.gamestudiohx.babylonhx.animations.Animation.vector3InterpolateFunction","com/gamestudiohx/babylonhx/animations/Animation.hx",66,0xf0ba8a87)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startValue,"startValue")
	HX_STACK_ARG(endValue,"endValue")
	HX_STACK_ARG(gradient,"gradient")
	HX_STACK_LINE(66)
	Float x = (startValue->x + (((endValue->x - startValue->x)) * gradient));		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(66)
	Float y = (startValue->y + (((endValue->y - startValue->y)) * gradient));		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(66)
	Float z = (startValue->z + (((endValue->z - startValue->z)) * gradient));		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(66)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
}


HX_DEFINE_DYNAMIC_FUNC3(Animation_obj,vector3InterpolateFunction,return )

::com::gamestudiohx::babylonhx::animations::Animation Animation_obj::clone( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.animations.Animation","clone",0x27c7be86,"com.gamestudiohx.babylonhx.animations.Animation.clone","com/gamestudiohx/babylonhx/animations/Animation.hx",69,0xf0ba8a87)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	::String _g = this->targetPropertyPath->join(HX_CSTRING("."));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(70)
	::com::gamestudiohx::babylonhx::animations::Animation clone = ::com::gamestudiohx::babylonhx::animations::Animation_obj::__new(this->name,_g,this->framePerSecond,this->dataType,this->loopMode);		HX_STACK_VAR(clone,"clone");
	HX_STACK_LINE(72)
	clone->setKeys(this->_keys);
	HX_STACK_LINE(74)
	return clone;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,clone,return )

Void Animation_obj::setKeys( Dynamic values){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.animations.Animation","setKeys",0x0ecfaa1f,"com.gamestudiohx.babylonhx.animations.Animation.setKeys","com/gamestudiohx/babylonhx/animations/Animation.hx",77,0xf0ba8a87)
		HX_STACK_THIS(this)
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(78)
		Dynamic _g = values->__Field(HX_CSTRING("slice"),true)((int)0,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		this->_keys = _g;
		HX_STACK_LINE(79)
		this->_offsetsCache = Dynamic( Array_obj<Dynamic>::__new());
		HX_STACK_LINE(80)
		this->_highLimitsCache = Dynamic( Array_obj<Dynamic>::__new());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,setKeys,(void))

Dynamic Animation_obj::_interpolate( Float currentFrame,int repeatCount,int loopMode,Dynamic offsetValue,Dynamic highLimitValue){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.animations.Animation","_interpolate",0xf5a77eb9,"com.gamestudiohx.babylonhx.animations.Animation._interpolate","com/gamestudiohx/babylonhx/animations/Animation.hx",84,0xf0ba8a87)
	HX_STACK_THIS(this)
	HX_STACK_ARG(currentFrame,"currentFrame")
	HX_STACK_ARG(repeatCount,"repeatCount")
	HX_STACK_ARG(loopMode,"loopMode")
	HX_STACK_ARG(offsetValue,"offsetValue")
	HX_STACK_ARG(highLimitValue,"highLimitValue")
	HX_STACK_LINE(85)
	if (((bool((loopMode == ::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONLOOPMODE_CONSTANT)) && bool((repeatCount > (int)0))))){
		HX_STACK_LINE(86)
		Dynamic _g = ::Reflect_obj::field(highLimitValue,HX_CSTRING("clone"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		if (((_g != null()))){
			HX_STACK_LINE(86)
			return highLimitValue->__Field(HX_CSTRING("clone"),true)();
		}
		else{
			HX_STACK_LINE(86)
			return highLimitValue;
		}
	}
	HX_STACK_LINE(89)
	this->currentFrame = currentFrame;
	HX_STACK_LINE(91)
	{
		HX_STACK_LINE(91)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(91)
		int _g = (this->_keys->__Field(HX_CSTRING("length"),true) - (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(91)
		while((true)){
			HX_STACK_LINE(91)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(91)
				break;
			}
			HX_STACK_LINE(91)
			int key = (_g1)++;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(92)
			if (((this->_keys->__GetItem((key + (int)1))->__Field(HX_CSTRING("frame"),true) >= currentFrame))){
				HX_STACK_LINE(93)
				Dynamic startValue = this->_keys->__GetItem(key)->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(startValue,"startValue");
				HX_STACK_LINE(94)
				Dynamic endValue = this->_keys->__GetItem((key + (int)1))->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(endValue,"endValue");
				HX_STACK_LINE(95)
				Float gradient = (Float(((currentFrame - this->_keys->__GetItem(key)->__Field(HX_CSTRING("frame"),true)))) / Float(((this->_keys->__GetItem((key + (int)1))->__Field(HX_CSTRING("frame"),true) - this->_keys->__GetItem(key)->__Field(HX_CSTRING("frame"),true)))));		HX_STACK_VAR(gradient,"gradient");
				HX_STACK_LINE(97)
				{
					HX_STACK_LINE(97)
					int _g2 = this->dataType;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(97)
					int _switch_1 = (_g2);
					if (  ( _switch_1==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONTYPE_FLOAT)){
						HX_STACK_LINE(100)
						int _switch_2 = (loopMode);
						if (  ( _switch_2==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONLOOPMODE_CYCLE) ||  ( _switch_2==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONLOOPMODE_CONSTANT)){
							HX_STACK_LINE(102)
							Float startValue1 = startValue;		HX_STACK_VAR(startValue1,"startValue1");
							HX_STACK_LINE(102)
							return (startValue1 + (((endValue - startValue1)) * gradient));
						}
						else if (  ( _switch_2==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONLOOPMODE_RELATIVE)){
							struct _Function_7_1{
								inline static Float Block( Dynamic &endValue,Dynamic &startValue,Float &gradient){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/animations/Animation.hx",104,0xf0ba8a87)
									{
										HX_STACK_LINE(104)
										Float startValue1 = startValue;		HX_STACK_VAR(startValue1,"startValue1");
										HX_STACK_LINE(104)
										return (startValue1 + (((endValue - startValue1)) * gradient));
									}
									return null();
								}
							};
							HX_STACK_LINE(104)
							return ((offsetValue * repeatCount) + _Function_7_1::Block(endValue,startValue,gradient));
						}
					}
					else if (  ( _switch_1==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONTYPE_QUATERNION)){
						HX_STACK_LINE(108)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion quaternion = null();		HX_STACK_VAR(quaternion,"quaternion");
						HX_STACK_LINE(109)
						int _switch_3 = (loopMode);
						if (  ( _switch_3==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONLOOPMODE_CYCLE) ||  ( _switch_3==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONLOOPMODE_CONSTANT)){
							HX_STACK_LINE(111)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion _g7;		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(111)
							{
								HX_STACK_LINE(111)
								::com::gamestudiohx::babylonhx::tools::math::Quaternion startValue1 = startValue;		HX_STACK_VAR(startValue1,"startValue1");
								HX_STACK_LINE(111)
								::com::gamestudiohx::babylonhx::tools::math::Quaternion endValue1 = endValue;		HX_STACK_VAR(endValue1,"endValue1");
								HX_STACK_LINE(111)
								{
									HX_STACK_LINE(111)
									Float num2;		HX_STACK_VAR(num2,"num2");
									HX_STACK_LINE(111)
									Float num3;		HX_STACK_VAR(num3,"num3");
									HX_STACK_LINE(111)
									Float num = gradient;		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(111)
									Float num4 = ((((startValue1->x * endValue1->x) + (startValue1->y * endValue1->y)) + (startValue1->z * endValue1->z)) + (startValue1->w * endValue1->w));		HX_STACK_VAR(num4,"num4");
									HX_STACK_LINE(111)
									bool flag = false;		HX_STACK_VAR(flag,"flag");
									HX_STACK_LINE(111)
									if (((num4 < (int)0))){
										HX_STACK_LINE(111)
										flag = true;
										HX_STACK_LINE(111)
										num4 = -(num4);
									}
									HX_STACK_LINE(111)
									if (((num4 > 0.999999))){
										HX_STACK_LINE(111)
										num3 = ((int)1 - num);
										HX_STACK_LINE(111)
										if ((flag)){
											HX_STACK_LINE(111)
											num2 = -(num);
										}
										else{
											HX_STACK_LINE(111)
											num2 = num;
										}
									}
									else{
										HX_STACK_LINE(111)
										Float num5 = ::Math_obj::acos(num4);		HX_STACK_VAR(num5,"num5");
										HX_STACK_LINE(111)
										Float _g11 = ::Math_obj::sin(num5);		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(111)
										Float num6 = (Float(1.0) / Float(_g11));		HX_STACK_VAR(num6,"num6");
										HX_STACK_LINE(111)
										Float _g21 = ::Math_obj::sin((((1.0 - num)) * num5));		HX_STACK_VAR(_g21,"_g21");
										HX_STACK_LINE(111)
										Float _g3 = (_g21 * num6);		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(111)
										num3 = _g3;
										HX_STACK_LINE(111)
										Float _g6;		HX_STACK_VAR(_g6,"_g6");
										HX_STACK_LINE(111)
										if ((flag)){
											HX_STACK_LINE(111)
											Float _g4 = -(::Math_obj::sin((num * num5)));		HX_STACK_VAR(_g4,"_g4");
											HX_STACK_LINE(111)
											_g6 = (_g4 * num6);
										}
										else{
											HX_STACK_LINE(111)
											Float _g5 = ::Math_obj::sin((num * num5));		HX_STACK_VAR(_g5,"_g5");
											HX_STACK_LINE(111)
											_g6 = (_g5 * num6);
										}
										HX_STACK_LINE(111)
										num2 = _g6;
									}
									HX_STACK_LINE(111)
									_g7 = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(((num3 * startValue1->x) + (num2 * endValue1->x)),((num3 * startValue1->y) + (num2 * endValue1->y)),((num3 * startValue1->z) + (num2 * endValue1->z)),((num3 * startValue1->w) + (num2 * endValue1->w)));
								}
							}
							HX_STACK_LINE(111)
							quaternion = _g7;
						}
						else if (  ( _switch_3==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONLOOPMODE_RELATIVE)){
							HX_STACK_LINE(113)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion _g14;		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(113)
							{
								HX_STACK_LINE(113)
								::com::gamestudiohx::babylonhx::tools::math::Quaternion _this;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(113)
								{
									HX_STACK_LINE(113)
									::com::gamestudiohx::babylonhx::tools::math::Quaternion startValue1 = startValue;		HX_STACK_VAR(startValue1,"startValue1");
									HX_STACK_LINE(113)
									::com::gamestudiohx::babylonhx::tools::math::Quaternion endValue1 = endValue;		HX_STACK_VAR(endValue1,"endValue1");
									HX_STACK_LINE(113)
									{
										HX_STACK_LINE(113)
										Float num2;		HX_STACK_VAR(num2,"num2");
										HX_STACK_LINE(113)
										Float num3;		HX_STACK_VAR(num3,"num3");
										HX_STACK_LINE(113)
										Float num = gradient;		HX_STACK_VAR(num,"num");
										HX_STACK_LINE(113)
										Float num4 = ((((startValue1->x * endValue1->x) + (startValue1->y * endValue1->y)) + (startValue1->z * endValue1->z)) + (startValue1->w * endValue1->w));		HX_STACK_VAR(num4,"num4");
										HX_STACK_LINE(113)
										bool flag = false;		HX_STACK_VAR(flag,"flag");
										HX_STACK_LINE(113)
										if (((num4 < (int)0))){
											HX_STACK_LINE(113)
											flag = true;
											HX_STACK_LINE(113)
											num4 = -(num4);
										}
										HX_STACK_LINE(113)
										if (((num4 > 0.999999))){
											HX_STACK_LINE(113)
											num3 = ((int)1 - num);
											HX_STACK_LINE(113)
											if ((flag)){
												HX_STACK_LINE(113)
												num2 = -(num);
											}
											else{
												HX_STACK_LINE(113)
												num2 = num;
											}
										}
										else{
											HX_STACK_LINE(113)
											Float num5 = ::Math_obj::acos(num4);		HX_STACK_VAR(num5,"num5");
											HX_STACK_LINE(113)
											Float _g8 = ::Math_obj::sin(num5);		HX_STACK_VAR(_g8,"_g8");
											HX_STACK_LINE(113)
											Float num6 = (Float(1.0) / Float(_g8));		HX_STACK_VAR(num6,"num6");
											HX_STACK_LINE(113)
											Float _g9 = ::Math_obj::sin((((1.0 - num)) * num5));		HX_STACK_VAR(_g9,"_g9");
											HX_STACK_LINE(113)
											Float _g10 = (_g9 * num6);		HX_STACK_VAR(_g10,"_g10");
											HX_STACK_LINE(113)
											num3 = _g10;
											HX_STACK_LINE(113)
											Float _g13;		HX_STACK_VAR(_g13,"_g13");
											HX_STACK_LINE(113)
											if ((flag)){
												HX_STACK_LINE(113)
												Float _g11 = -(::Math_obj::sin((num * num5)));		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(113)
												_g13 = (_g11 * num6);
											}
											else{
												HX_STACK_LINE(113)
												Float _g12 = ::Math_obj::sin((num * num5));		HX_STACK_VAR(_g12,"_g12");
												HX_STACK_LINE(113)
												_g13 = (_g12 * num6);
											}
											HX_STACK_LINE(113)
											num2 = _g13;
										}
										HX_STACK_LINE(113)
										_this = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(((num3 * startValue1->x) + (num2 * endValue1->x)),((num3 * startValue1->y) + (num2 * endValue1->y)),((num3 * startValue1->z) + (num2 * endValue1->z)),((num3 * startValue1->w) + (num2 * endValue1->w)));
									}
								}
								HX_STACK_LINE(113)
								::com::gamestudiohx::babylonhx::tools::math::Quaternion other = offsetValue->__Field(HX_CSTRING("scale"),true)(repeatCount);		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(113)
								_g14 = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new((_this->x + other->x),(_this->y + other->y),(_this->z + other->z),(_this->w + other->w));
							}
							HX_STACK_LINE(113)
							quaternion = _g14;
						}
						HX_STACK_LINE(116)
						return quaternion;
					}
					else if (  ( _switch_1==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONTYPE_VECTOR3)){
						HX_STACK_LINE(119)
						int _switch_4 = (loopMode);
						if (  ( _switch_4==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONLOOPMODE_CYCLE) ||  ( _switch_4==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONLOOPMODE_CONSTANT)){
							HX_STACK_LINE(121)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 startValue1 = startValue;		HX_STACK_VAR(startValue1,"startValue1");
							HX_STACK_LINE(121)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 endValue1 = endValue;		HX_STACK_VAR(endValue1,"endValue1");
							HX_STACK_LINE(121)
							{
								HX_STACK_LINE(121)
								Float x = (startValue1->x + (((endValue1->x - startValue1->x)) * gradient));		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(121)
								Float y = (startValue1->y + (((endValue1->y - startValue1->y)) * gradient));		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(121)
								Float z = (startValue1->z + (((endValue1->z - startValue1->z)) * gradient));		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(121)
								return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
							}
						}
						else if (  ( _switch_4==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONLOOPMODE_RELATIVE)){
							HX_STACK_LINE(123)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(123)
							{
								HX_STACK_LINE(123)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 startValue1 = startValue;		HX_STACK_VAR(startValue1,"startValue1");
								HX_STACK_LINE(123)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 endValue1 = endValue;		HX_STACK_VAR(endValue1,"endValue1");
								HX_STACK_LINE(123)
								{
									HX_STACK_LINE(123)
									Float x = (startValue1->x + (((endValue1->x - startValue1->x)) * gradient));		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(123)
									Float y = (startValue1->y + (((endValue1->y - startValue1->y)) * gradient));		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(123)
									Float z = (startValue1->z + (((endValue1->z - startValue1->z)) * gradient));		HX_STACK_VAR(z,"z");
									HX_STACK_LINE(123)
									_this = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
								}
							}
							HX_STACK_LINE(123)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = offsetValue->__Field(HX_CSTRING("scale"),true)(repeatCount);		HX_STACK_VAR(otherVector,"otherVector");
							HX_STACK_LINE(123)
							return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this->x + otherVector->x),(_this->y + otherVector->y),(_this->z + otherVector->z));
						}
					}
					else if (  ( _switch_1==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONTYPE_MATRIX)){
						HX_STACK_LINE(127)
						int _switch_5 = (loopMode);
						if (  ( _switch_5==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONLOOPMODE_CYCLE) ||  ( _switch_5==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONLOOPMODE_CONSTANT) ||  ( _switch_5==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONLOOPMODE_RELATIVE)){
							HX_STACK_LINE(129)
							return startValue;
						}
					}
					else  {
					}
;
;
				}
			}
		}
	}
	HX_STACK_LINE(137)
	return this->_keys->__GetItem((this->_keys->__Field(HX_CSTRING("length"),true) - (int)1))->__Field(HX_CSTRING("value"),true);
}


HX_DEFINE_DYNAMIC_FUNC5(Animation_obj,_interpolate,return )

bool Animation_obj::animate( Dynamic target,Float delay,Float from,Float to,bool loop,Float speedRatio){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.animations.Animation","animate",0x7c91620a,"com.gamestudiohx.babylonhx.animations.Animation.animate","com/gamestudiohx/babylonhx/animations/Animation.hx",140,0xf0ba8a87)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_ARG(loop,"loop")
	HX_STACK_ARG(speedRatio,"speedRatio")
	HX_STACK_LINE(141)
	bool returnValue = true;		HX_STACK_VAR(returnValue,"returnValue");
	HX_STACK_LINE(142)
	if (((bool((this->targetPropertyPath == null())) || bool((this->targetPropertyPath->length < (int)1))))){
		HX_STACK_LINE(143)
		returnValue = false;
	}
	else{
		HX_STACK_LINE(146)
		if (((bool((this->_keys->__Field(HX_CSTRING("length"),true) == (int)0)) || bool((this->_keys->__GetItem((int)0)->__Field(HX_CSTRING("frame"),true) != (int)0))))){
			struct _Function_3_1{
				inline static Dynamic Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::animations::Animation_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/animations/Animation.hx",147,0xf0ba8a87)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("frame") , (int)0,false);
						__result->Add(HX_CSTRING("value") , __this->_keys->__GetItem((int)0)->__Field(HX_CSTRING("value"),true),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(147)
			Dynamic newKey = _Function_3_1::Block(this);		HX_STACK_VAR(newKey,"newKey");
			HX_STACK_LINE(153)
			this->_keys->__Field(HX_CSTRING("push"),true)(newKey);
		}
		HX_STACK_LINE(157)
		if (((bool((from < this->_keys->__GetItem((int)0)->__Field(HX_CSTRING("frame"),true))) || bool((from > this->_keys->__GetItem((this->_keys->__Field(HX_CSTRING("length"),true) - (int)1))->__Field(HX_CSTRING("frame"),true)))))){
			HX_STACK_LINE(158)
			from = this->_keys->__GetItem((int)0)->__Field(HX_CSTRING("frame"),true);
		}
		HX_STACK_LINE(160)
		if (((bool((to < this->_keys->__GetItem((int)0)->__Field(HX_CSTRING("frame"),true))) || bool((to > this->_keys->__GetItem((this->_keys->__Field(HX_CSTRING("length"),true) - (int)1))->__Field(HX_CSTRING("frame"),true)))))){
			HX_STACK_LINE(161)
			to = this->_keys->__GetItem((this->_keys->__Field(HX_CSTRING("length"),true) - (int)1))->__Field(HX_CSTRING("frame"),true);
		}
		HX_STACK_LINE(165)
		Float range = (to - from);		HX_STACK_VAR(range,"range");
		HX_STACK_LINE(166)
		Float ratio = (Float((delay * ((this->framePerSecond * speedRatio)))) / Float(1000.0));		HX_STACK_VAR(ratio,"ratio");
		HX_STACK_LINE(167)
		int offsetValue = (int)0;		HX_STACK_VAR(offsetValue,"offsetValue");
		HX_STACK_LINE(168)
		int highLimitValue = (int)0;		HX_STACK_VAR(highLimitValue,"highLimitValue");
		HX_STACK_LINE(170)
		if (((bool((ratio > range)) && bool(!(loop))))){
			HX_STACK_LINE(172)
			returnValue = false;
		}
		else{
			HX_STACK_LINE(175)
			int offsetValue1 = (int)0;		HX_STACK_VAR(offsetValue1,"offsetValue1");
			HX_STACK_LINE(176)
			if (((this->loopMode != ::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONLOOPMODE_CYCLE))){
				HX_STACK_LINE(177)
				int keyOffset = ::Std_obj::_int((to + from));		HX_STACK_VAR(keyOffset,"keyOffset");
				HX_STACK_LINE(178)
				if (((keyOffset < this->_offsetsCache->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(179)
					int fromValue = this->_interpolate(from,(int)0,::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONLOOPMODE_CYCLE,null(),null());		HX_STACK_VAR(fromValue,"fromValue");
					HX_STACK_LINE(180)
					int toValue = this->_interpolate(to,(int)0,::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONLOOPMODE_CYCLE,null(),null());		HX_STACK_VAR(toValue,"toValue");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						int _g = this->dataType;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(181)
						int _switch_6 = (_g);
						if (  ( _switch_6==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONTYPE_FLOAT)){
							HX_STACK_LINE(184)
							hx::IndexRef((this->_offsetsCache).mPtr,keyOffset) = (toValue - fromValue);
						}
						else if (  ( _switch_6==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONTYPE_QUATERNION)){
							HX_STACK_LINE(188)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(188)
							_this = hx::TCast< com::gamestudiohx::babylonhx::tools::math::Vector3 >::cast(toValue);
							HX_STACK_LINE(188)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector;		HX_STACK_VAR(otherVector,"otherVector");
							HX_STACK_LINE(188)
							otherVector = hx::TCast< com::gamestudiohx::babylonhx::tools::math::Vector3 >::cast(fromValue);
							HX_STACK_LINE(188)
							hx::IndexRef((this->_offsetsCache).mPtr,keyOffset) = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this->x - otherVector->x),(_this->y - otherVector->y),(_this->z - otherVector->z));
						}
						else if (  ( _switch_6==::com::gamestudiohx::babylonhx::animations::Animation_obj::ANIMATIONTYPE_VECTOR3)){
							HX_STACK_LINE(192)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(192)
							_this = hx::TCast< com::gamestudiohx::babylonhx::tools::math::Vector3 >::cast(toValue);
							HX_STACK_LINE(192)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector;		HX_STACK_VAR(otherVector,"otherVector");
							HX_STACK_LINE(192)
							otherVector = hx::TCast< com::gamestudiohx::babylonhx::tools::math::Vector3 >::cast(fromValue);
							HX_STACK_LINE(192)
							hx::IndexRef((this->_offsetsCache).mPtr,keyOffset) = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this->x - otherVector->x),(_this->y - otherVector->y),(_this->z - otherVector->z));
						}
						else  {
						}
;
;
					}
					HX_STACK_LINE(197)
					hx::IndexRef((this->_highLimitsCache).mPtr,keyOffset) = toValue;
				}
				HX_STACK_LINE(200)
				highLimitValue = this->_highLimitsCache->__GetItem(keyOffset);
				HX_STACK_LINE(201)
				offsetValue1 = this->_offsetsCache->__GetItem(keyOffset);
			}
		}
		HX_STACK_LINE(206)
		int repeatCount = ::Std_obj::_int((Float(ratio) / Float(range)));		HX_STACK_VAR(repeatCount,"repeatCount");
		HX_STACK_LINE(207)
		Float currentFrame;		HX_STACK_VAR(currentFrame,"currentFrame");
		HX_STACK_LINE(207)
		if ((returnValue)){
			HX_STACK_LINE(207)
			currentFrame = (from + hx::Mod(ratio,range));
		}
		else{
			HX_STACK_LINE(207)
			currentFrame = to;
		}
		HX_STACK_LINE(208)
		Dynamic currentValue = this->_interpolate(currentFrame,repeatCount,this->loopMode,offsetValue,highLimitValue);		HX_STACK_VAR(currentValue,"currentValue");
		HX_STACK_LINE(211)
		if (((this->targetPropertyPath->length > (int)1))){
			HX_STACK_LINE(212)
			Dynamic property;		HX_STACK_VAR(property,"property");
			HX_STACK_LINE(212)
			property = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(this->targetPropertyPath->__get((int)0),true)) );
			HX_STACK_LINE(214)
			{
				HX_STACK_LINE(214)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(214)
				int _g = (this->targetPropertyPath->length - (int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(214)
				while((true)){
					HX_STACK_LINE(214)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(214)
						break;
					}
					HX_STACK_LINE(214)
					int index = (_g1)++;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(215)
					Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(215)
					_g2 = (  (((property == null()))) ? Dynamic(null()) : Dynamic(property->__Field(this->targetPropertyPath->__get(index),true)) );
					HX_STACK_LINE(215)
					property = _g2;
				}
			}
			HX_STACK_LINE(218)
			if (((property != null()))){
				HX_STACK_LINE(218)
				property->__SetField(this->targetPropertyPath->__get((this->targetPropertyPath->length - (int)1)),currentValue,true);
			}
		}
		else{
			HX_STACK_LINE(220)
			if (((target != null()))){
				HX_STACK_LINE(220)
				target->__SetField(this->targetPropertyPath->__get((int)0),currentValue,true);
			}
		}
		HX_STACK_LINE(223)
		Dynamic _g1 = ::Reflect_obj::field(target,HX_CSTRING("markAsDirty"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(223)
		if (((_g1 != null()))){
			HX_STACK_LINE(224)
			target->__Field(HX_CSTRING("markAsDirty"),true)(this->targetProperty);
		}
	}
	HX_STACK_LINE(228)
	return returnValue;
}


HX_DEFINE_DYNAMIC_FUNC6(Animation_obj,animate,return )

int Animation_obj::ANIMATIONTYPE_FLOAT;

int Animation_obj::ANIMATIONTYPE_VECTOR3;

int Animation_obj::ANIMATIONTYPE_QUATERNION;

int Animation_obj::ANIMATIONTYPE_MATRIX;

int Animation_obj::ANIMATIONLOOPMODE_RELATIVE;

int Animation_obj::ANIMATIONLOOPMODE_CYCLE;

int Animation_obj::ANIMATIONLOOPMODE_CONSTANT;


Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(targetProperty,"targetProperty");
	HX_MARK_MEMBER_NAME(targetPropertyPath,"targetPropertyPath");
	HX_MARK_MEMBER_NAME(framePerSecond,"framePerSecond");
	HX_MARK_MEMBER_NAME(dataType,"dataType");
	HX_MARK_MEMBER_NAME(loopMode,"loopMode");
	HX_MARK_MEMBER_NAME(currentFrame,"currentFrame");
	HX_MARK_MEMBER_NAME(_keys,"_keys");
	HX_MARK_MEMBER_NAME(_offsetsCache,"_offsetsCache");
	HX_MARK_MEMBER_NAME(_highLimitsCache,"_highLimitsCache");
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(targetProperty,"targetProperty");
	HX_VISIT_MEMBER_NAME(targetPropertyPath,"targetPropertyPath");
	HX_VISIT_MEMBER_NAME(framePerSecond,"framePerSecond");
	HX_VISIT_MEMBER_NAME(dataType,"dataType");
	HX_VISIT_MEMBER_NAME(loopMode,"loopMode");
	HX_VISIT_MEMBER_NAME(currentFrame,"currentFrame");
	HX_VISIT_MEMBER_NAME(_keys,"_keys");
	HX_VISIT_MEMBER_NAME(_offsetsCache,"_offsetsCache");
	HX_VISIT_MEMBER_NAME(_highLimitsCache,"_highLimitsCache");
}

Dynamic Animation_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { return _keys; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setKeys") ) { return setKeys_dyn(); }
		if (HX_FIELD_EQ(inName,"animate") ) { return animate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dataType") ) { return dataType; }
		if (HX_FIELD_EQ(inName,"loopMode") ) { return loopMode; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { return currentFrame; }
		if (HX_FIELD_EQ(inName,"_interpolate") ) { return _interpolate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_offsetsCache") ) { return _offsetsCache; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"targetProperty") ) { return targetProperty; }
		if (HX_FIELD_EQ(inName,"framePerSecond") ) { return framePerSecond; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_highLimitsCache") ) { return _highLimitsCache; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"targetPropertyPath") ) { return targetPropertyPath; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ANIMATIONTYPE_FLOAT") ) { return ANIMATIONTYPE_FLOAT; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"ANIMATIONTYPE_MATRIX") ) { return ANIMATIONTYPE_MATRIX; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ANIMATIONTYPE_VECTOR3") ) { return ANIMATIONTYPE_VECTOR3; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"ANIMATIONLOOPMODE_CYCLE") ) { return ANIMATIONLOOPMODE_CYCLE; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ANIMATIONTYPE_QUATERNION") ) { return ANIMATIONTYPE_QUATERNION; }
		if (HX_FIELD_EQ(inName,"floatInterpolateFunction") ) { return floatInterpolateFunction_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"ANIMATIONLOOPMODE_RELATIVE") ) { return ANIMATIONLOOPMODE_RELATIVE; }
		if (HX_FIELD_EQ(inName,"ANIMATIONLOOPMODE_CONSTANT") ) { return ANIMATIONLOOPMODE_CONSTANT; }
		if (HX_FIELD_EQ(inName,"vector3InterpolateFunction") ) { return vector3InterpolateFunction_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"quaternionInterpolateFunction") ) { return quaternionInterpolateFunction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Animation_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { _keys=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dataType") ) { dataType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loopMode") ) { loopMode=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { currentFrame=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_offsetsCache") ) { _offsetsCache=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"targetProperty") ) { targetProperty=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framePerSecond") ) { framePerSecond=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_highLimitsCache") ) { _highLimitsCache=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"targetPropertyPath") ) { targetPropertyPath=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ANIMATIONTYPE_FLOAT") ) { ANIMATIONTYPE_FLOAT=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"ANIMATIONTYPE_MATRIX") ) { ANIMATIONTYPE_MATRIX=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ANIMATIONTYPE_VECTOR3") ) { ANIMATIONTYPE_VECTOR3=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"ANIMATIONLOOPMODE_CYCLE") ) { ANIMATIONLOOPMODE_CYCLE=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ANIMATIONTYPE_QUATERNION") ) { ANIMATIONTYPE_QUATERNION=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"ANIMATIONLOOPMODE_RELATIVE") ) { ANIMATIONLOOPMODE_RELATIVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ANIMATIONLOOPMODE_CONSTANT") ) { ANIMATIONLOOPMODE_CONSTANT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("targetProperty"));
	outFields->push(HX_CSTRING("targetPropertyPath"));
	outFields->push(HX_CSTRING("framePerSecond"));
	outFields->push(HX_CSTRING("dataType"));
	outFields->push(HX_CSTRING("loopMode"));
	outFields->push(HX_CSTRING("currentFrame"));
	outFields->push(HX_CSTRING("_keys"));
	outFields->push(HX_CSTRING("_offsetsCache"));
	outFields->push(HX_CSTRING("_highLimitsCache"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ANIMATIONTYPE_FLOAT"),
	HX_CSTRING("ANIMATIONTYPE_VECTOR3"),
	HX_CSTRING("ANIMATIONTYPE_QUATERNION"),
	HX_CSTRING("ANIMATIONTYPE_MATRIX"),
	HX_CSTRING("ANIMATIONLOOPMODE_RELATIVE"),
	HX_CSTRING("ANIMATIONLOOPMODE_CYCLE"),
	HX_CSTRING("ANIMATIONLOOPMODE_CONSTANT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Animation_obj,name),HX_CSTRING("name")},
	{hx::fsString,(int)offsetof(Animation_obj,targetProperty),HX_CSTRING("targetProperty")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Animation_obj,targetPropertyPath),HX_CSTRING("targetPropertyPath")},
	{hx::fsInt,(int)offsetof(Animation_obj,framePerSecond),HX_CSTRING("framePerSecond")},
	{hx::fsInt,(int)offsetof(Animation_obj,dataType),HX_CSTRING("dataType")},
	{hx::fsInt,(int)offsetof(Animation_obj,loopMode),HX_CSTRING("loopMode")},
	{hx::fsFloat,(int)offsetof(Animation_obj,currentFrame),HX_CSTRING("currentFrame")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Animation_obj,_keys),HX_CSTRING("_keys")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Animation_obj,_offsetsCache),HX_CSTRING("_offsetsCache")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Animation_obj,_highLimitsCache),HX_CSTRING("_highLimitsCache")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("targetProperty"),
	HX_CSTRING("targetPropertyPath"),
	HX_CSTRING("framePerSecond"),
	HX_CSTRING("dataType"),
	HX_CSTRING("loopMode"),
	HX_CSTRING("currentFrame"),
	HX_CSTRING("_keys"),
	HX_CSTRING("_offsetsCache"),
	HX_CSTRING("_highLimitsCache"),
	HX_CSTRING("floatInterpolateFunction"),
	HX_CSTRING("quaternionInterpolateFunction"),
	HX_CSTRING("vector3InterpolateFunction"),
	HX_CSTRING("clone"),
	HX_CSTRING("setKeys"),
	HX_CSTRING("_interpolate"),
	HX_CSTRING("animate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Animation_obj::ANIMATIONTYPE_FLOAT,"ANIMATIONTYPE_FLOAT");
	HX_MARK_MEMBER_NAME(Animation_obj::ANIMATIONTYPE_VECTOR3,"ANIMATIONTYPE_VECTOR3");
	HX_MARK_MEMBER_NAME(Animation_obj::ANIMATIONTYPE_QUATERNION,"ANIMATIONTYPE_QUATERNION");
	HX_MARK_MEMBER_NAME(Animation_obj::ANIMATIONTYPE_MATRIX,"ANIMATIONTYPE_MATRIX");
	HX_MARK_MEMBER_NAME(Animation_obj::ANIMATIONLOOPMODE_RELATIVE,"ANIMATIONLOOPMODE_RELATIVE");
	HX_MARK_MEMBER_NAME(Animation_obj::ANIMATIONLOOPMODE_CYCLE,"ANIMATIONLOOPMODE_CYCLE");
	HX_MARK_MEMBER_NAME(Animation_obj::ANIMATIONLOOPMODE_CONSTANT,"ANIMATIONLOOPMODE_CONSTANT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Animation_obj::ANIMATIONTYPE_FLOAT,"ANIMATIONTYPE_FLOAT");
	HX_VISIT_MEMBER_NAME(Animation_obj::ANIMATIONTYPE_VECTOR3,"ANIMATIONTYPE_VECTOR3");
	HX_VISIT_MEMBER_NAME(Animation_obj::ANIMATIONTYPE_QUATERNION,"ANIMATIONTYPE_QUATERNION");
	HX_VISIT_MEMBER_NAME(Animation_obj::ANIMATIONTYPE_MATRIX,"ANIMATIONTYPE_MATRIX");
	HX_VISIT_MEMBER_NAME(Animation_obj::ANIMATIONLOOPMODE_RELATIVE,"ANIMATIONLOOPMODE_RELATIVE");
	HX_VISIT_MEMBER_NAME(Animation_obj::ANIMATIONLOOPMODE_CYCLE,"ANIMATIONLOOPMODE_CYCLE");
	HX_VISIT_MEMBER_NAME(Animation_obj::ANIMATIONLOOPMODE_CONSTANT,"ANIMATIONLOOPMODE_CONSTANT");
};

#endif

Class Animation_obj::__mClass;

void Animation_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.animations.Animation"), hx::TCanCast< Animation_obj> ,sStaticFields,sMemberFields,
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

void Animation_obj::__boot()
{
	ANIMATIONTYPE_FLOAT= (int)0;
	ANIMATIONTYPE_VECTOR3= (int)1;
	ANIMATIONTYPE_QUATERNION= (int)2;
	ANIMATIONTYPE_MATRIX= (int)3;
	ANIMATIONLOOPMODE_RELATIVE= (int)0;
	ANIMATIONLOOPMODE_CYCLE= (int)1;
	ANIMATIONLOOPMODE_CONSTANT= (int)2;
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace animations
