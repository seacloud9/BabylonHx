#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_Tools
#define INCLUDED_com_gamestudiohx_babylonhx_tools_Tools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,tools,Tools)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,Timer)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  Tools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tools_obj OBJ_;
		Tools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Tools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tools_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Tools"); }

		static ::openfl::utils::Timer timer;
		static Dynamic ExtractMinAndMax( Array< Float > positions,int start,int count);
		static Dynamic ExtractMinAndMax_dyn();

		static Float randomNumber( Float min,Float max);
		static Dynamic randomNumber_dyn();

		static bool WithinEpsilon( Float a,Float b);
		static Dynamic WithinEpsilon_dyn();

		static Void LoadFile( ::String url,Dynamic callbackFn,Dynamic progressCallBack,Dynamic database,hx::Null< bool >  useArrayBuffer);
		static Dynamic LoadFile_dyn();

		static Void LoadImage( ::String url,Dynamic onload);
		static Dynamic LoadImage_dyn();

		static Void DeepCopy( Dynamic source,Dynamic destination,Array< ::String > doNotCopyList,Array< ::String > mustCopyList);
		static Dynamic DeepCopy_dyn();

		static Float fpsRange;
		static Array< Float > previousFramesDuration;
		static Float fps;
		static Float deltaTime;
		static Float GetFps( );
		static Dynamic GetFps_dyn();

		static Float GetDeltaTime( );
		static Dynamic GetDeltaTime_dyn();

		static Void _MeasureFps( );
		static Dynamic _MeasureFps_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools

#endif /* INCLUDED_com_gamestudiohx_babylonhx_tools_Tools */ 
