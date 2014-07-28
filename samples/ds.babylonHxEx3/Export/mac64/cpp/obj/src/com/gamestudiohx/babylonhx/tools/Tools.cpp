#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_Tools
#include <com/gamestudiohx/babylonhx/tools/Tools.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_AssetType
#include <openfl/AssetType.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_Timer
#include <openfl/utils/Timer.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{

Void Tools_obj::__construct()
{
	return null();
}

//Tools_obj::~Tools_obj() { }

Dynamic Tools_obj::__CreateEmpty() { return  new Tools_obj; }
hx::ObjectPtr< Tools_obj > Tools_obj::__new()
{  hx::ObjectPtr< Tools_obj > result = new Tools_obj();
	result->__construct();
	return result;}

Dynamic Tools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tools_obj > result = new Tools_obj();
	result->__construct();
	return result;}

::openfl::utils::Timer Tools_obj::timer;

Dynamic Tools_obj::ExtractMinAndMax( Array< Float > positions,int start,int count){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.Tools","ExtractMinAndMax",0x91b09bd6,"com.gamestudiohx.babylonhx.tools.Tools.ExtractMinAndMax","com/gamestudiohx/babylonhx/tools/Tools.hx",50,0x515bb32a)
	HX_STACK_ARG(positions,"positions")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(count,"count")
	HX_STACK_LINE(51)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(minimum,"minimum");
	HX_STACK_LINE(52)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY);		HX_STACK_VAR(maximum,"maximum");
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(54)
		int _g1 = start;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(54)
		int _g = (start + count);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		while((true)){
			HX_STACK_LINE(54)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(54)
				break;
			}
			HX_STACK_LINE(54)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(55)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 current = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(positions->__get((index * (int)3)),positions->__get(((index * (int)3) + (int)1)),positions->__get(((index * (int)3) + (int)2)));		HX_STACK_VAR(current,"current");
			HX_STACK_LINE(57)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(57)
				if (((current->x < minimum->x))){
					HX_STACK_LINE(57)
					x = current->x;
				}
				else{
					HX_STACK_LINE(57)
					x = minimum->x;
				}
				HX_STACK_LINE(57)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(57)
				if (((current->y < minimum->y))){
					HX_STACK_LINE(57)
					y = current->y;
				}
				else{
					HX_STACK_LINE(57)
					y = minimum->y;
				}
				HX_STACK_LINE(57)
				Float z;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(57)
				if (((current->z < minimum->z))){
					HX_STACK_LINE(57)
					z = current->z;
				}
				else{
					HX_STACK_LINE(57)
					z = minimum->z;
				}
				HX_STACK_LINE(57)
				_g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
			}
			HX_STACK_LINE(57)
			minimum = _g2;
			HX_STACK_LINE(58)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g11;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(58)
				if (((current->x > maximum->x))){
					HX_STACK_LINE(58)
					x = current->x;
				}
				else{
					HX_STACK_LINE(58)
					x = maximum->x;
				}
				HX_STACK_LINE(58)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(58)
				if (((current->y > maximum->y))){
					HX_STACK_LINE(58)
					y = current->y;
				}
				else{
					HX_STACK_LINE(58)
					y = maximum->y;
				}
				HX_STACK_LINE(58)
				Float z;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(58)
				if (((current->z > maximum->z))){
					HX_STACK_LINE(58)
					z = current->z;
				}
				else{
					HX_STACK_LINE(58)
					z = maximum->z;
				}
				HX_STACK_LINE(58)
				_g11 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
			}
			HX_STACK_LINE(58)
			maximum = _g11;
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 &maximum){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/tools/Tools.hx",61,0x515bb32a)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("minimum") , minimum,false);
				__result->Add(HX_CSTRING("maximum") , maximum,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(61)
	return _Function_1_1::Block(minimum,maximum);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Tools_obj,ExtractMinAndMax,return )

Float Tools_obj::randomNumber( Float min,Float max){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.Tools","randomNumber",0xc0c58324,"com.gamestudiohx.babylonhx.tools.Tools.randomNumber","com/gamestudiohx/babylonhx/tools/Tools.hx",67,0x515bb32a)
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(68)
	Float ret = min;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(69)
	if (((min == max))){
		HX_STACK_LINE(70)
		ret = min;
	}
	else{
		HX_STACK_LINE(72)
		Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
		HX_STACK_LINE(73)
		ret = ((random * ((max - min))) + min);
	}
	HX_STACK_LINE(75)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,randomNumber,return )

bool Tools_obj::WithinEpsilon( Float a,Float b){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.Tools","WithinEpsilon",0xefa91827,"com.gamestudiohx.babylonhx.tools.Tools.WithinEpsilon","com/gamestudiohx/babylonhx/tools/Tools.hx",78,0x515bb32a)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(79)
	Float num = (a - b);		HX_STACK_VAR(num,"num");
	HX_STACK_LINE(80)
	return (bool((-1.401298e-45 <= num)) && bool((num <= 1.401298E-45)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,WithinEpsilon,return )

Void Tools_obj::LoadFile( ::String url,Dynamic callbackFn,Dynamic progressCallBack,Dynamic database,hx::Null< bool >  __o_useArrayBuffer){
bool useArrayBuffer = __o_useArrayBuffer.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.Tools","LoadFile",0x551881da,"com.gamestudiohx.babylonhx.tools.Tools.LoadFile","com/gamestudiohx/babylonhx/tools/Tools.hx",83,0x515bb32a)
	HX_STACK_ARG(url,"url")
	HX_STACK_ARG(callbackFn,"callbackFn")
	HX_STACK_ARG(progressCallBack,"progressCallBack")
	HX_STACK_ARG(database,"database")
	HX_STACK_ARG(useArrayBuffer,"useArrayBuffer")
{
		HX_STACK_LINE(84)
		::haxe::Log_obj::trace((HX_CSTRING("LoadFile URL - ") + url),hx::SourceInfo(HX_CSTRING("Tools.hx"),84,HX_CSTRING("com.gamestudiohx.babylonhx.tools.Tools"),HX_CSTRING("LoadFile")));
		HX_STACK_LINE(94)
		if ((::openfl::Assets_obj::exists(url,null()))){
			HX_STACK_LINE(95)
			::String file = ::openfl::Assets_obj::getText(url);		HX_STACK_VAR(file,"file");
			HX_STACK_LINE(96)
			callbackFn(file).Cast< Void >();
		}
		else{
			HX_STACK_LINE(98)
			::haxe::Log_obj::trace(((HX_CSTRING("File: ") + url) + HX_CSTRING(" doesn't exist !")),hx::SourceInfo(HX_CSTRING("Tools.hx"),98,HX_CSTRING("com.gamestudiohx.babylonhx.tools.Tools"),HX_CSTRING("LoadFile")));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Tools_obj,LoadFile,(void))

Void Tools_obj::LoadImage( ::String url,Dynamic onload){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.Tools","LoadImage",0xdd295e3d,"com.gamestudiohx.babylonhx.tools.Tools.LoadImage","com/gamestudiohx/babylonhx/tools/Tools.hx",141,0x515bb32a)
		HX_STACK_ARG(url,"url")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(141)
		if (((url != null()))){
			HX_STACK_LINE(142)
			if ((::openfl::Assets_obj::exists(url,null()))){
				HX_STACK_LINE(143)
				::openfl::display::BitmapData img = ::openfl::Assets_obj::getBitmapData(url,null());		HX_STACK_VAR(img,"img");
				HX_STACK_LINE(144)
				::haxe::Log_obj::trace(img,hx::SourceInfo(HX_CSTRING("Tools.hx"),144,HX_CSTRING("com.gamestudiohx.babylonhx.tools.Tools"),HX_CSTRING("LoadImage")));
				HX_STACK_LINE(145)
				onload(img).Cast< Void >();
			}
			else{
				HX_STACK_LINE(147)
				::haxe::Log_obj::trace(((HX_CSTRING("Error: Image '") + url) + HX_CSTRING("' doesn't exist !")),hx::SourceInfo(HX_CSTRING("Tools.hx"),147,HX_CSTRING("com.gamestudiohx.babylonhx.tools.Tools"),HX_CSTRING("LoadImage")));
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,LoadImage,(void))

Void Tools_obj::DeepCopy( Dynamic source,Dynamic destination,Array< ::String > doNotCopyList,Array< ::String > mustCopyList){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.Tools","DeepCopy",0x6bf3a219,"com.gamestudiohx.babylonhx.tools.Tools.DeepCopy","com/gamestudiohx/babylonhx/tools/Tools.hx",153,0x515bb32a)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(destination,"destination")
		HX_STACK_ARG(doNotCopyList,"doNotCopyList")
		HX_STACK_ARG(mustCopyList,"mustCopyList")
		HX_STACK_LINE(156)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(157)
		{
			HX_STACK_LINE(157)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(157)
			Array< ::String > _g1 = ::Reflect_obj::fields(source);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(157)
			while((true)){
				HX_STACK_LINE(157)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(157)
					break;
				}
				HX_STACK_LINE(157)
				::String prop = _g1->__get(_g);		HX_STACK_VAR(prop,"prop");
				HX_STACK_LINE(157)
				++(_g);
				HX_STACK_LINE(158)
				(i)++;
				HX_STACK_LINE(159)
				::ValueType _g2 = ::Type_obj::_typeof(prop);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(159)
				::String _g11 = ::Std_obj::string(_g2);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(159)
				::String _g21 = (HX_CSTRING("DeepCopy - PROP = ") + _g11);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(159)
				::haxe::Log_obj::trace(_g21,hx::SourceInfo(HX_CSTRING("Tools.hx"),159,HX_CSTRING("com.gamestudiohx.babylonhx.tools.Tools"),HX_CSTRING("DeepCopy")));
				HX_STACK_LINE(160)
				::haxe::Log_obj::trace((HX_CSTRING("DeepCopy - int ") + i),hx::SourceInfo(HX_CSTRING("Tools.hx"),160,HX_CSTRING("com.gamestudiohx.babylonhx.tools.Tools"),HX_CSTRING("DeepCopy")));
				HX_STACK_LINE(161)
				::String _g3 = prop.charAt((int)0);		HX_STACK_VAR(_g3,"_g3");
				struct _Function_3_1{
					inline static bool Block( ::String &prop,Array< ::String > &mustCopyList){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/tools/Tools.hx",161,0x515bb32a)
						{
							struct _Function_4_1{
								inline static bool Block( ::String &prop,Array< ::String > &mustCopyList){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/tools/Tools.hx",161,0x515bb32a)
									{
										HX_STACK_LINE(161)
										int _g4 = ::Lambda_obj::indexOf(mustCopyList,prop);		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(161)
										return (_g4 == (int)-1);
									}
									return null();
								}
							};
							HX_STACK_LINE(161)
							return (  ((!(((mustCopyList == null()))))) ? bool(_Function_4_1::Block(prop,mustCopyList)) : bool(true) );
						}
						return null();
					}
				};
				HX_STACK_LINE(161)
				if (((  (((_g3 == HX_CSTRING("_")))) ? bool(_Function_3_1::Block(prop,mustCopyList)) : bool(false) ))){
					HX_STACK_LINE(162)
					continue;
				}
				struct _Function_3_2{
					inline static bool Block( ::String &prop,Array< ::String > &doNotCopyList){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/tools/Tools.hx",165,0x515bb32a)
						{
							HX_STACK_LINE(165)
							int _g5 = ::Lambda_obj::indexOf(doNotCopyList,prop);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(165)
							return (_g5 != (int)-1);
						}
						return null();
					}
				};
				HX_STACK_LINE(165)
				if (((  (((doNotCopyList != null()))) ? bool(_Function_3_2::Block(prop,doNotCopyList)) : bool(false) ))){
					HX_STACK_LINE(166)
					continue;
				}
				HX_STACK_LINE(168)
				::haxe::Log_obj::trace((HX_CSTRING("=== DeepCopy hitCount ") + i),hx::SourceInfo(HX_CSTRING("Tools.hx"),168,HX_CSTRING("com.gamestudiohx.babylonhx.tools.Tools"),HX_CSTRING("DeepCopy")));
				HX_STACK_LINE(169)
				::haxe::Log_obj::trace((HX_CSTRING("=== DeepCopy hitCount ") + prop),hx::SourceInfo(HX_CSTRING("Tools.hx"),169,HX_CSTRING("com.gamestudiohx.babylonhx.tools.Tools"),HX_CSTRING("DeepCopy")));
				HX_STACK_LINE(171)
				::String sourceValue = ::Reflect_obj::field(source,prop);		HX_STACK_VAR(sourceValue,"sourceValue");
				HX_STACK_LINE(177)
				if ((::Reflect_obj::isFunction(sourceValue))){
					HX_STACK_LINE(178)
					::haxe::Log_obj::trace((((HX_CSTRING("=== DeepCopy - sourcevalue and prop  ") + sourceValue) + HX_CSTRING("  ")) + prop),hx::SourceInfo(HX_CSTRING("Tools.hx"),178,HX_CSTRING("com.gamestudiohx.babylonhx.tools.Tools"),HX_CSTRING("DeepCopy")));
					HX_STACK_LINE(179)
					::haxe::Log_obj::trace((HX_CSTRING("=== DeepCopy - int ") + i),hx::SourceInfo(HX_CSTRING("Tools.hx"),179,HX_CSTRING("com.gamestudiohx.babylonhx.tools.Tools"),HX_CSTRING("DeepCopy")));
					HX_STACK_LINE(180)
					continue;
				}
				HX_STACK_LINE(182)
				::haxe::Log_obj::trace((((HX_CSTRING("DeepCopy - sourcevalue and prop ") + sourceValue) + HX_CSTRING("  ")) + prop),hx::SourceInfo(HX_CSTRING("Tools.hx"),182,HX_CSTRING("com.gamestudiohx.babylonhx.tools.Tools"),HX_CSTRING("DeepCopy")));
				HX_STACK_LINE(183)
				::haxe::Log_obj::trace((HX_CSTRING("DeepCopy  ") + i),hx::SourceInfo(HX_CSTRING("Tools.hx"),183,HX_CSTRING("com.gamestudiohx.babylonhx.tools.Tools"),HX_CSTRING("DeepCopy")));
				HX_STACK_LINE(184)
				::ValueType _g6 = ::Type_obj::_typeof(sourceValue);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(184)
				::String _g7 = ::Std_obj::string(_g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(184)
				::String _g8 = (HX_CSTRING("DeepCopy type ") + _g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(184)
				::haxe::Log_obj::trace(_g8,hx::SourceInfo(HX_CSTRING("Tools.hx"),184,HX_CSTRING("com.gamestudiohx.babylonhx.tools.Tools"),HX_CSTRING("DeepCopy")));
				HX_STACK_LINE(185)
				::haxe::Log_obj::trace((((HX_CSTRING("DeepCopy -") + sourceValue) + HX_CSTRING(">>>>>PROP>>>> ")) + prop),hx::SourceInfo(HX_CSTRING("Tools.hx"),185,HX_CSTRING("com.gamestudiohx.babylonhx.tools.Tools"),HX_CSTRING("DeepCopy")));
				HX_STACK_LINE(186)
				::haxe::Log_obj::trace(HX_CSTRING("________________"),hx::SourceInfo(HX_CSTRING("Tools.hx"),186,HX_CSTRING("com.gamestudiohx.babylonhx.tools.Tools"),HX_CSTRING("DeepCopy")));
				HX_STACK_LINE(187)
				try
				{
				HX_STACK_CATCHABLE(::String, 0);
				{
					HX_STACK_LINE(189)
					if (((destination != null()))){
						HX_STACK_LINE(189)
						destination->__SetField(prop,sourceValue,false);
					}
				}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(191)
							::haxe::Log_obj::trace((HX_CSTRING("Error: ") + e),hx::SourceInfo(HX_CSTRING("Tools.hx"),191,HX_CSTRING("com.gamestudiohx.babylonhx.tools.Tools"),HX_CSTRING("DeepCopy")));
						}
					}
					else {
					    HX_STACK_DO_THROW(__e);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Tools_obj,DeepCopy,(void))

Float Tools_obj::fpsRange;

Array< Float > Tools_obj::previousFramesDuration;

Float Tools_obj::fps;

Float Tools_obj::deltaTime;

Float Tools_obj::GetFps( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.Tools","GetFps",0x1984ad0b,"com.gamestudiohx.babylonhx.tools.Tools.GetFps","com/gamestudiohx/babylonhx/tools/Tools.hx",206,0x515bb32a)
	HX_STACK_LINE(206)
	return ::com::gamestudiohx::babylonhx::tools::Tools_obj::fps;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tools_obj,GetFps,return )

Float Tools_obj::GetDeltaTime( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.Tools","GetDeltaTime",0x1426a6c7,"com.gamestudiohx.babylonhx.tools.Tools.GetDeltaTime","com/gamestudiohx/babylonhx/tools/Tools.hx",210,0x515bb32a)
	HX_STACK_LINE(210)
	return ::com::gamestudiohx::babylonhx::tools::Tools_obj::deltaTime;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tools_obj,GetDeltaTime,return )

Void Tools_obj::_MeasureFps( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.Tools","_MeasureFps",0xf57e2972,"com.gamestudiohx.babylonhx.tools.Tools._MeasureFps","com/gamestudiohx/babylonhx/tools/Tools.hx",213,0x515bb32a)
		HX_STACK_LINE(214)
		int _g = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(214)
		::com::gamestudiohx::babylonhx::tools::Tools_obj::previousFramesDuration->push(_g);
		HX_STACK_LINE(215)
		int length = ::com::gamestudiohx::babylonhx::tools::Tools_obj::previousFramesDuration->length;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(217)
		if (((length >= (int)2))){
			HX_STACK_LINE(218)
			::com::gamestudiohx::babylonhx::tools::Tools_obj::deltaTime = (::com::gamestudiohx::babylonhx::tools::Tools_obj::previousFramesDuration->__get((length - (int)1)) - ::com::gamestudiohx::babylonhx::tools::Tools_obj::previousFramesDuration->__get((length - (int)2)));
		}
		HX_STACK_LINE(221)
		if (((length >= ::com::gamestudiohx::babylonhx::tools::Tools_obj::fpsRange))){
			HX_STACK_LINE(223)
			if (((length > ::com::gamestudiohx::babylonhx::tools::Tools_obj::fpsRange))){
				HX_STACK_LINE(224)
				::com::gamestudiohx::babylonhx::tools::Tools_obj::previousFramesDuration->splice((int)0,(int)1);
				HX_STACK_LINE(225)
				length = ::com::gamestudiohx::babylonhx::tools::Tools_obj::previousFramesDuration->length;
			}
			HX_STACK_LINE(228)
			Float sum = (int)0;		HX_STACK_VAR(sum,"sum");
			HX_STACK_LINE(229)
			{
				HX_STACK_LINE(229)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(229)
				int _g2 = (length - (int)1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(229)
				while((true)){
					HX_STACK_LINE(229)
					if ((!(((_g1 < _g2))))){
						HX_STACK_LINE(229)
						break;
					}
					HX_STACK_LINE(229)
					int id = (_g1)++;		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(230)
					hx::AddEq(sum,(::com::gamestudiohx::babylonhx::tools::Tools_obj::previousFramesDuration->__get((id + (int)1)) - ::com::gamestudiohx::babylonhx::tools::Tools_obj::previousFramesDuration->__get(id)));
				}
			}
			HX_STACK_LINE(233)
			::com::gamestudiohx::babylonhx::tools::Tools_obj::fps = (Float(1000.0) / Float(((Float(sum) / Float(((length - (int)1)))))));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tools_obj,_MeasureFps,(void))


Tools_obj::Tools_obj()
{
}

Dynamic Tools_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fps") ) { return fps; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"GetFps") ) { return GetFps_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"LoadFile") ) { return LoadFile_dyn(); }
		if (HX_FIELD_EQ(inName,"DeepCopy") ) { return DeepCopy_dyn(); }
		if (HX_FIELD_EQ(inName,"fpsRange") ) { return fpsRange; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"LoadImage") ) { return LoadImage_dyn(); }
		if (HX_FIELD_EQ(inName,"deltaTime") ) { return deltaTime; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_MeasureFps") ) { return _MeasureFps_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"randomNumber") ) { return randomNumber_dyn(); }
		if (HX_FIELD_EQ(inName,"GetDeltaTime") ) { return GetDeltaTime_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"WithinEpsilon") ) { return WithinEpsilon_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ExtractMinAndMax") ) { return ExtractMinAndMax_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"previousFramesDuration") ) { return previousFramesDuration; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tools_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fps") ) { fps=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::openfl::utils::Timer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fpsRange") ) { fpsRange=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"deltaTime") ) { deltaTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"previousFramesDuration") ) { previousFramesDuration=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("timer"),
	HX_CSTRING("ExtractMinAndMax"),
	HX_CSTRING("randomNumber"),
	HX_CSTRING("WithinEpsilon"),
	HX_CSTRING("LoadFile"),
	HX_CSTRING("LoadImage"),
	HX_CSTRING("DeepCopy"),
	HX_CSTRING("fpsRange"),
	HX_CSTRING("previousFramesDuration"),
	HX_CSTRING("fps"),
	HX_CSTRING("deltaTime"),
	HX_CSTRING("GetFps"),
	HX_CSTRING("GetDeltaTime"),
	HX_CSTRING("_MeasureFps"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tools_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tools_obj::timer,"timer");
	HX_MARK_MEMBER_NAME(Tools_obj::fpsRange,"fpsRange");
	HX_MARK_MEMBER_NAME(Tools_obj::previousFramesDuration,"previousFramesDuration");
	HX_MARK_MEMBER_NAME(Tools_obj::fps,"fps");
	HX_MARK_MEMBER_NAME(Tools_obj::deltaTime,"deltaTime");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tools_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tools_obj::timer,"timer");
	HX_VISIT_MEMBER_NAME(Tools_obj::fpsRange,"fpsRange");
	HX_VISIT_MEMBER_NAME(Tools_obj::previousFramesDuration,"previousFramesDuration");
	HX_VISIT_MEMBER_NAME(Tools_obj::fps,"fps");
	HX_VISIT_MEMBER_NAME(Tools_obj::deltaTime,"deltaTime");
};

#endif

Class Tools_obj::__mClass;

void Tools_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.tools.Tools"), hx::TCanCast< Tools_obj> ,sStaticFields,sMemberFields,
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

void Tools_obj::__boot()
{
	fpsRange= 60.0;
	previousFramesDuration= Array_obj< Float >::__new();
	fps= 60.0;
	deltaTime= 0.0;
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
