#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_SmartArray
#include <com/gamestudiohx/babylonhx/tools/SmartArray.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{

Void SmartArray_obj::__construct()
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SmartArray","new",0xddac2507,"com.gamestudiohx.babylonhx.tools.SmartArray.new","com/gamestudiohx/babylonhx/tools/SmartArray.hx",14,0xb30ce0e7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	this->data = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(16)
	this->length = (int)0;
}
;
	return null();
}

//SmartArray_obj::~SmartArray_obj() { }

Dynamic SmartArray_obj::__CreateEmpty() { return  new SmartArray_obj; }
hx::ObjectPtr< SmartArray_obj > SmartArray_obj::__new()
{  hx::ObjectPtr< SmartArray_obj > result = new SmartArray_obj();
	result->__construct();
	return result;}

Dynamic SmartArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SmartArray_obj > result = new SmartArray_obj();
	result->__construct();
	return result;}

Void SmartArray_obj::push( Dynamic value){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SmartArray","push",0x1a52cf53,"com.gamestudiohx.babylonhx.tools.SmartArray.push","com/gamestudiohx/babylonhx/tools/SmartArray.hx",19,0xb30ce0e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(20)
		int _g = (this->length)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(20)
		hx::IndexRef((this->data).mPtr,_g) = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SmartArray_obj,push,(void))

Void SmartArray_obj::pushNoDuplicate( Dynamic value){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SmartArray","pushNoDuplicate",0x449ac477,"com.gamestudiohx.babylonhx.tools.SmartArray.pushNoDuplicate","com/gamestudiohx/babylonhx/tools/SmartArray.hx",27,0xb30ce0e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(28)
		int _g = ::Lambda_obj::indexOf(this->data,value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		if (((_g == (int)-1))){
			HX_STACK_LINE(29)
			this->push(value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SmartArray_obj,pushNoDuplicate,(void))

Void SmartArray_obj::sort( Dynamic compareFn){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SmartArray","sort",0x1c49e4d7,"com.gamestudiohx.babylonhx.tools.SmartArray.sort","com/gamestudiohx/babylonhx/tools/SmartArray.hx",34,0xb30ce0e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(compareFn,"compareFn")
		HX_STACK_LINE(34)
		this->data->__Field(HX_CSTRING("sort"),true)(compareFn);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SmartArray_obj,sort,(void))

Void SmartArray_obj::reset( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SmartArray","reset",0x0a5c5636,"com.gamestudiohx.babylonhx.tools.SmartArray.reset","com/gamestudiohx/babylonhx/tools/SmartArray.hx",38,0xb30ce0e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->length = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SmartArray_obj,reset,(void))

Void SmartArray_obj::concat( Dynamic array){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SmartArray","concat",0xc5c6d6cd,"com.gamestudiohx.babylonhx.tools.SmartArray.concat","com/gamestudiohx/babylonhx/tools/SmartArray.hx",44,0xb30ce0e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(44)
		if (((  ((::Std_obj::is(array,hx::ClassOf< Array<int> >()))) ? bool((array->__Field(HX_CSTRING("length"),true) != (int)0)) : bool(false) ))){
			HX_STACK_LINE(48)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(48)
			int _g = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(48)
			while((true)){
				HX_STACK_LINE(48)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(48)
					break;
				}
				HX_STACK_LINE(48)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(49)
				int _g2 = (this->length)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(49)
				if ((::Std_obj::is(array,hx::ClassOf< Array<int> >()))){
					HX_STACK_LINE(49)
					hx::IndexRef((this->data).mPtr,_g2) = array->__GetItem(index);
				}
				else{
					HX_STACK_LINE(49)
					hx::IndexRef((this->data).mPtr,_g2) = array->__Field(HX_CSTRING("data"),true)->__GetItem(index);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SmartArray_obj,concat,(void))

Void SmartArray_obj::concatWithNoDuplicate( Dynamic array){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SmartArray","concatWithNoDuplicate",0x1f7b6457,"com.gamestudiohx.babylonhx.tools.SmartArray.concatWithNoDuplicate","com/gamestudiohx/babylonhx/tools/SmartArray.hx",54,0xb30ce0e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(55)
		if (((  ((::Std_obj::is(array,hx::ClassOf< Array<int> >()))) ? bool((array->__Field(HX_CSTRING("length"),true) == (int)0)) : bool(false) ))){
			HX_STACK_LINE(56)
			return null();
		}
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(62)
			int _g = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(62)
			while((true)){
				HX_STACK_LINE(62)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(62)
					break;
				}
				HX_STACK_LINE(62)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(63)
				Dynamic item;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(63)
				if ((::Std_obj::is(array,hx::ClassOf< Array<int> >()))){
					HX_STACK_LINE(63)
					item = array->__GetItem(index);
				}
				else{
					HX_STACK_LINE(63)
					item = array->__Field(HX_CSTRING("data"),true)->__GetItem(index);
				}
				HX_STACK_LINE(64)
				int pos = ::Lambda_obj::indexOf(this->data,item);		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(66)
				if (((bool((pos == (int)-1)) || bool((pos >= this->length))))){
					HX_STACK_LINE(67)
					int _g2 = (this->length)++;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(67)
					hx::IndexRef((this->data).mPtr,_g2) = item;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SmartArray_obj,concatWithNoDuplicate,(void))

int SmartArray_obj::indexOf( Dynamic value){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.SmartArray","indexOf",0x1abc7cf0,"com.gamestudiohx.babylonhx.tools.SmartArray.indexOf","com/gamestudiohx/babylonhx/tools/SmartArray.hx",72,0xb30ce0e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(73)
	int position = ::Lambda_obj::indexOf(this->data,value);		HX_STACK_VAR(position,"position");
	HX_STACK_LINE(75)
	if (((position >= this->length))){
		HX_STACK_LINE(76)
		return (int)-1;
	}
	HX_STACK_LINE(79)
	return position;
}


HX_DEFINE_DYNAMIC_FUNC1(SmartArray_obj,indexOf,return )


SmartArray_obj::SmartArray_obj()
{
}

void SmartArray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SmartArray);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void SmartArray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic SmartArray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"pushNoDuplicate") ) { return pushNoDuplicate_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"concatWithNoDuplicate") ) { return concatWithNoDuplicate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SmartArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SmartArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SmartArray_obj,data),HX_CSTRING("data")},
	{hx::fsInt,(int)offsetof(SmartArray_obj,length),HX_CSTRING("length")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("data"),
	HX_CSTRING("length"),
	HX_CSTRING("push"),
	HX_CSTRING("pushNoDuplicate"),
	HX_CSTRING("sort"),
	HX_CSTRING("reset"),
	HX_CSTRING("concat"),
	HX_CSTRING("concatWithNoDuplicate"),
	HX_CSTRING("indexOf"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SmartArray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SmartArray_obj::__mClass,"__mClass");
};

#endif

Class SmartArray_obj::__mClass;

void SmartArray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.tools.SmartArray"), hx::TCanCast< SmartArray_obj> ,sStaticFields,sMemberFields,
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

void SmartArray_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
