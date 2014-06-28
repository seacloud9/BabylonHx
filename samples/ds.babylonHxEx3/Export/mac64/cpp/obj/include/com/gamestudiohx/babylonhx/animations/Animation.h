#ifndef INCLUDED_com_gamestudiohx_babylonhx_animations_Animation
#define INCLUDED_com_gamestudiohx_babylonhx_animations_Animation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,animations,Animation)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Quaternion)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace animations{


class HXCPP_CLASS_ATTRIBUTES  Animation_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Animation_obj OBJ_;
		Animation_obj();
		Void __construct(::String name,::String targetProperty,int framePerSecond,int dataType,hx::Null< int >  __o_loopMode);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Animation_obj > __new(::String name,::String targetProperty,int framePerSecond,int dataType,hx::Null< int >  __o_loopMode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Animation_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Animation"); }

		::String name;
		::String targetProperty;
		Array< ::String > targetPropertyPath;
		int framePerSecond;
		int dataType;
		int loopMode;
		Float currentFrame;
		Dynamic _keys;
		Dynamic _offsetsCache;
		Dynamic _highLimitsCache;
		virtual Float floatInterpolateFunction( Float startValue,Float endValue,Float gradient);
		Dynamic floatInterpolateFunction_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Quaternion quaternionInterpolateFunction( ::com::gamestudiohx::babylonhx::tools::math::Quaternion startValue,::com::gamestudiohx::babylonhx::tools::math::Quaternion endValue,Float gradient);
		Dynamic quaternionInterpolateFunction_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector3InterpolateFunction( ::com::gamestudiohx::babylonhx::tools::math::Vector3 startValue,::com::gamestudiohx::babylonhx::tools::math::Vector3 endValue,Float gradient);
		Dynamic vector3InterpolateFunction_dyn();

		virtual ::com::gamestudiohx::babylonhx::animations::Animation clone( );
		Dynamic clone_dyn();

		virtual Void setKeys( Dynamic values);
		Dynamic setKeys_dyn();

		virtual Dynamic _interpolate( Float currentFrame,int repeatCount,int loopMode,Dynamic offsetValue,Dynamic highLimitValue);
		Dynamic _interpolate_dyn();

		virtual bool animate( Dynamic target,Float delay,Float from,Float to,bool loop,Float speedRatio);
		Dynamic animate_dyn();

		static int ANIMATIONTYPE_FLOAT;
		static int ANIMATIONTYPE_VECTOR3;
		static int ANIMATIONTYPE_QUATERNION;
		static int ANIMATIONTYPE_MATRIX;
		static int ANIMATIONLOOPMODE_RELATIVE;
		static int ANIMATIONLOOPMODE_CYCLE;
		static int ANIMATIONLOOPMODE_CONSTANT;
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace animations

#endif /* INCLUDED_com_gamestudiohx_babylonhx_animations_Animation */ 
