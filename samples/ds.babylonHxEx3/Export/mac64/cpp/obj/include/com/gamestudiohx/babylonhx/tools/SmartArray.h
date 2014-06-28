#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_SmartArray
#define INCLUDED_com_gamestudiohx_babylonhx_tools_SmartArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,tools,SmartArray)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  SmartArray_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SmartArray_obj OBJ_;
		SmartArray_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SmartArray_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SmartArray_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SmartArray"); }

		Dynamic data;
		int length;
		virtual Void push( Dynamic value);
		Dynamic push_dyn();

		virtual Void pushNoDuplicate( Dynamic value);
		Dynamic pushNoDuplicate_dyn();

		virtual Void sort( Dynamic compareFn);
		Dynamic sort_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void concat( Dynamic array);
		Dynamic concat_dyn();

		virtual Void concatWithNoDuplicate( Dynamic array);
		Dynamic concatWithNoDuplicate_dyn();

		virtual int indexOf( Dynamic value);
		Dynamic indexOf_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools

#endif /* INCLUDED_com_gamestudiohx_babylonhx_tools_SmartArray */ 
