#ifndef INCLUDED_com_gamestudiohx_babylonhx_animations__Animatable
#define INCLUDED_com_gamestudiohx_babylonhx_animations__Animatable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,animations,_Animatable)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace animations{


class HXCPP_CLASS_ATTRIBUTES  _Animatable_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef _Animatable_obj OBJ_;
		_Animatable_obj();
		Void __construct(Dynamic target,hx::Null< Float >  __o_from,hx::Null< Float >  __o_to,hx::Null< bool >  __o_loop,hx::Null< Float >  __o_speedRatio,Dynamic onAnimationEnd);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< _Animatable_obj > __new(Dynamic target,hx::Null< Float >  __o_from,hx::Null< Float >  __o_to,hx::Null< bool >  __o_loop,hx::Null< Float >  __o_speedRatio,Dynamic onAnimationEnd);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~_Animatable_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("_Animatable"); }

		Dynamic target;
		bool animationStarted;
		bool loopAnimation;
		Float fromFrame;
		Float toFrame;
		Float speedRatio;
		Dynamic onAnimationEnd;
		Dynamic &onAnimationEnd_dyn() { return onAnimationEnd;}
		Float _localDelayOffset;
		virtual bool _animate( Float delay);
		Dynamic _animate_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace animations

#endif /* INCLUDED_com_gamestudiohx_babylonhx_animations__Animatable */ 
