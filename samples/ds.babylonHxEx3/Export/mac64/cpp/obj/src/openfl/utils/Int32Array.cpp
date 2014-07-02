#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_utils_ArrayBufferView
#include <openfl/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_utils_Int32Array
#include <openfl/utils/Int32Array.h>
#endif
namespace openfl{
namespace utils{

Void Int32Array_obj::__construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{
HX_STACK_FRAME("openfl.utils.Int32Array","new",0x9e067d38,"openfl.utils.Int32Array.new","openfl/utils/Int32Array.hx",14,0xca7f0936)
HX_STACK_THIS(this)
HX_STACK_ARG(bufferOrArray,"bufferOrArray")
HX_STACK_ARG(__o_start,"start")
HX_STACK_ARG(length,"length")
int start = __o_start.Default(0);
{
	HX_STACK_LINE(16)
	this->BYTES_PER_ELEMENT = (int)4;
	HX_STACK_LINE(18)
	if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(20)
		int _g = ::Std_obj::_int(bufferOrArray);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(20)
		int _g1 = (int(_g) << int((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(20)
		super::__construct(_g1,null(),null());
		HX_STACK_LINE(21)
		int _g2 = ::Std_obj::_int(bufferOrArray);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(21)
		this->length = _g2;
	}
	else{
		HX_STACK_LINE(23)
		if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(25)
			Array< int > ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
			HX_STACK_LINE(27)
			if (((length != null()))){
				HX_STACK_LINE(29)
				this->length = length;
			}
			else{
				HX_STACK_LINE(33)
				this->length = (ints->length - start);
			}
			HX_STACK_LINE(37)
			super::__construct((int(this->length) << int((int)2)),null(),null());
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(43)
				int _g = this->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(43)
				while((true)){
					HX_STACK_LINE(43)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(43)
						break;
					}
					HX_STACK_LINE(43)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(46)
					::__hxcpp_memory_set_i32(this->bytes,(int(i) << int((int)2)),ints->__get(i));
				}
			}
		}
		else{
			HX_STACK_LINE(55)
			super::__construct(bufferOrArray,start,length);
			HX_STACK_LINE(57)
			if (((((int(this->byteLength) & int((int)3))) > (int)0))){
				HX_STACK_LINE(59)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid array size"));
			}
			HX_STACK_LINE(63)
			this->length = (int(this->byteLength) >> int((int)2));
			HX_STACK_LINE(65)
			if ((((int(this->length) << int((int)2)) != this->byteLength))){
				HX_STACK_LINE(67)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid length multiple"));
			}
		}
	}
}
;
	return null();
}

//Int32Array_obj::~Int32Array_obj() { }

Dynamic Int32Array_obj::__CreateEmpty() { return  new Int32Array_obj; }
hx::ObjectPtr< Int32Array_obj > Int32Array_obj::__new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{  hx::ObjectPtr< Int32Array_obj > result = new Int32Array_obj();
	result->__construct(bufferOrArray,__o_start,length);
	return result;}

Dynamic Int32Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Int32Array_obj > result = new Int32Array_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

int Int32Array_obj::__get( int index){
	HX_STACK_FRAME("openfl.utils.Int32Array","__get",0x6384744e,"openfl.utils.Int32Array.__get","openfl/utils/Int32Array.hx",76,0xca7f0936)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(76)
	return ::__hxcpp_memory_get_i32(this->bytes,(((int(index) << int((int)2))) + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(Int32Array_obj,__get,return )

Void Int32Array_obj::__set( int index,int value){
{
		HX_STACK_FRAME("openfl.utils.Int32Array","__set",0x638d8f5a,"openfl.utils.Int32Array.__set","openfl/utils/Int32Array.hx",77,0xca7f0936)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(77)
		::__hxcpp_memory_set_i32(this->bytes,(((int(index) << int((int)2))) + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Int32Array_obj,__set,(void))

int Int32Array_obj::SBYTES_PER_ELEMENT;


Int32Array_obj::Int32Array_obj()
{
}

Dynamic Int32Array_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { return BYTES_PER_ELEMENT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Int32Array_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { BYTES_PER_ELEMENT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Int32Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("BYTES_PER_ELEMENT"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SBYTES_PER_ELEMENT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Int32Array_obj,BYTES_PER_ELEMENT),HX_CSTRING("BYTES_PER_ELEMENT")},
	{hx::fsInt,(int)offsetof(Int32Array_obj,length),HX_CSTRING("length")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("BYTES_PER_ELEMENT"),
	HX_CSTRING("length"),
	HX_CSTRING("__get"),
	HX_CSTRING("__set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int32Array_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Int32Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int32Array_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Int32Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

#endif

Class Int32Array_obj::__mClass;

void Int32Array_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.utils.Int32Array"), hx::TCanCast< Int32Array_obj> ,sStaticFields,sMemberFields,
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

void Int32Array_obj::__boot()
{
	SBYTES_PER_ELEMENT= (int)4;
}

} // end namespace openfl
} // end namespace utils
