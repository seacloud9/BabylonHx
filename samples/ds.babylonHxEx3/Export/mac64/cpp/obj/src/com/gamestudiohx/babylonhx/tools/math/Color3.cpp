#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color3
#include <com/gamestudiohx/babylonhx/tools/math/Color3.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{
namespace math{

Void Color3_obj::__construct(hx::Null< Float >  __o_initialR,hx::Null< Float >  __o_initialG,hx::Null< Float >  __o_initialB)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color3","new",0x5a594aa3,"com.gamestudiohx.babylonhx.tools.math.Color3.new","com/gamestudiohx/babylonhx/tools/math/Color3.hx",16,0x125cd3ae)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_initialR,"initialR")
HX_STACK_ARG(__o_initialG,"initialG")
HX_STACK_ARG(__o_initialB,"initialB")
Float initialR = __o_initialR.Default(0);
Float initialG = __o_initialG.Default(0);
Float initialB = __o_initialB.Default(0);
{
	HX_STACK_LINE(17)
	this->r = initialR;
	HX_STACK_LINE(18)
	this->g = initialG;
	HX_STACK_LINE(19)
	this->b = initialB;
}
;
	return null();
}

//Color3_obj::~Color3_obj() { }

Dynamic Color3_obj::__CreateEmpty() { return  new Color3_obj; }
hx::ObjectPtr< Color3_obj > Color3_obj::__new(hx::Null< Float >  __o_initialR,hx::Null< Float >  __o_initialG,hx::Null< Float >  __o_initialB)
{  hx::ObjectPtr< Color3_obj > result = new Color3_obj();
	result->__construct(__o_initialR,__o_initialG,__o_initialB);
	return result;}

Dynamic Color3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Color3_obj > result = new Color3_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool Color3_obj::equals( ::com::gamestudiohx::babylonhx::tools::math::Color3 otherColor){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color3","equals",0x875effdc,"com.gamestudiohx.babylonhx.tools.math.Color3.equals","com/gamestudiohx/babylonhx/tools/math/Color3.hx",23,0x125cd3ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherColor,"otherColor")
	HX_STACK_LINE(23)
	return (bool((bool((this->r == otherColor->r)) && bool((this->g == otherColor->g)))) && bool((this->b == otherColor->b)));
}


HX_DEFINE_DYNAMIC_FUNC1(Color3_obj,equals,return )

::String Color3_obj::toString( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color3","toString",0xc0384389,"com.gamestudiohx.babylonhx.tools.math.Color3.toString","com/gamestudiohx/babylonhx/tools/math/Color3.hx",27,0x125cd3ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	return ((((((HX_CSTRING("{R: ") + this->r) + HX_CSTRING(" G:")) + this->g) + HX_CSTRING(" B:")) + this->b) + HX_CSTRING("}"));
}


HX_DEFINE_DYNAMIC_FUNC0(Color3_obj,toString,return )

::com::gamestudiohx::babylonhx::tools::math::Color3 Color3_obj::clone( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color3","clone",0x4a6de460,"com.gamestudiohx.babylonhx.tools.math.Color3.clone","com/gamestudiohx/babylonhx/tools/math/Color3.hx",31,0x125cd3ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(this->r,this->g,this->b);
}


HX_DEFINE_DYNAMIC_FUNC0(Color3_obj,clone,return )

Array< Float > Color3_obj::asArray( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color3","asArray",0x2c8cb30a,"com.gamestudiohx.babylonhx.tools.math.Color3.asArray","com/gamestudiohx/babylonhx/tools/math/Color3.hx",34,0x125cd3ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	Array< Float > result = Array_obj< Float >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		result[(int)0] = this->r;
		HX_STACK_LINE(36)
		result[(int)1] = this->g;
		HX_STACK_LINE(36)
		result[(int)2] = this->b;
	}
	HX_STACK_LINE(37)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(Color3_obj,asArray,return )

Void Color3_obj::toArray( Array< Float > array,hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color3","toArray",0xa93711e1,"com.gamestudiohx.babylonhx.tools.math.Color3.toArray","com/gamestudiohx/babylonhx/tools/math/Color3.hx",40,0x125cd3ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(41)
		array[index] = this->r;
		HX_STACK_LINE(42)
		array[(index + (int)1)] = this->g;
		HX_STACK_LINE(43)
		array[(index + (int)2)] = this->b;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Color3_obj,toArray,(void))

::com::gamestudiohx::babylonhx::tools::math::Color3 Color3_obj::multiply( ::com::gamestudiohx::babylonhx::tools::math::Color3 otherColor){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color3","multiply",0x22565501,"com.gamestudiohx.babylonhx.tools.math.Color3.multiply","com/gamestudiohx/babylonhx/tools/math/Color3.hx",47,0x125cd3ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherColor,"otherColor")
	HX_STACK_LINE(47)
	return ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new((this->r * otherColor->r),(this->g * otherColor->g),(this->b * otherColor->b));
}


HX_DEFINE_DYNAMIC_FUNC1(Color3_obj,multiply,return )

Void Color3_obj::multiplyToRef( ::com::gamestudiohx::babylonhx::tools::math::Color3 otherColor,::com::gamestudiohx::babylonhx::tools::math::Color3 result){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color3","multiplyToRef",0x0936e1d7,"com.gamestudiohx.babylonhx.tools.math.Color3.multiplyToRef","com/gamestudiohx/babylonhx/tools/math/Color3.hx",50,0x125cd3ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(otherColor,"otherColor")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(51)
		result->r = (this->r * otherColor->r);
		HX_STACK_LINE(52)
		result->g = (this->g * otherColor->g);
		HX_STACK_LINE(53)
		result->b = (this->b * otherColor->b);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Color3_obj,multiplyToRef,(void))

::com::gamestudiohx::babylonhx::tools::math::Color3 Color3_obj::scale( Float scale){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color3","scale",0x7ad99f8d,"com.gamestudiohx.babylonhx.tools.math.Color3.scale","com/gamestudiohx/babylonhx/tools/math/Color3.hx",57,0x125cd3ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scale,"scale")
	HX_STACK_LINE(57)
	return ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new((this->r * scale),(this->g * scale),(this->b * scale));
}


HX_DEFINE_DYNAMIC_FUNC1(Color3_obj,scale,return )

Void Color3_obj::scaleToRef( Float scale,::com::gamestudiohx::babylonhx::tools::math::Color3 result){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color3","scaleToRef",0x587ddbcb,"com.gamestudiohx.babylonhx.tools.math.Color3.scaleToRef","com/gamestudiohx/babylonhx/tools/math/Color3.hx",60,0x125cd3ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scale,"scale")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(61)
		result->r = (this->r * scale);
		HX_STACK_LINE(62)
		result->g = (this->g * scale);
		HX_STACK_LINE(63)
		result->b = (this->b * scale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Color3_obj,scaleToRef,(void))

Void Color3_obj::copyFrom( ::com::gamestudiohx::babylonhx::tools::math::Color3 source){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color3","copyFrom",0x502a7e9c,"com.gamestudiohx.babylonhx.tools.math.Color3.copyFrom","com/gamestudiohx/babylonhx/tools/math/Color3.hx",66,0x125cd3ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(67)
		this->r = source->r;
		HX_STACK_LINE(68)
		this->g = source->g;
		HX_STACK_LINE(69)
		this->b = source->b;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Color3_obj,copyFrom,(void))

Void Color3_obj::copyFromFloats( Float r,Float g,Float b){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color3","copyFromFloats",0x291bf313,"com.gamestudiohx.babylonhx.tools.math.Color3.copyFromFloats","com/gamestudiohx/babylonhx/tools/math/Color3.hx",72,0x125cd3ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(73)
		this->r = r;
		HX_STACK_LINE(74)
		this->g = g;
		HX_STACK_LINE(75)
		this->b = b;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Color3_obj,copyFromFloats,(void))

::com::gamestudiohx::babylonhx::tools::math::Color3 Color3_obj::FromArray( Array< Float > array){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color3","FromArray",0xc4664632,"com.gamestudiohx.babylonhx.tools.math.Color3.FromArray","com/gamestudiohx/babylonhx/tools/math/Color3.hx",80,0x125cd3ae)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(80)
	return ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(array->__get((int)0),array->__get((int)1),array->__get((int)2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color3_obj,FromArray,return )


Color3_obj::Color3_obj()
{
}

Dynamic Color3_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"asArray") ) { return asArray_dyn(); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FromArray") ) { return FromArray_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scaleToRef") ) { return scaleToRef_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplyToRef") ) { return multiplyToRef_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyFromFloats") ) { return copyFromFloats_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Color3_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Color3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("r"));
	outFields->push(HX_CSTRING("g"));
	outFields->push(HX_CSTRING("b"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FromArray"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Color3_obj,r),HX_CSTRING("r")},
	{hx::fsFloat,(int)offsetof(Color3_obj,g),HX_CSTRING("g")},
	{hx::fsFloat,(int)offsetof(Color3_obj,b),HX_CSTRING("b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("r"),
	HX_CSTRING("g"),
	HX_CSTRING("b"),
	HX_CSTRING("equals"),
	HX_CSTRING("toString"),
	HX_CSTRING("clone"),
	HX_CSTRING("asArray"),
	HX_CSTRING("toArray"),
	HX_CSTRING("multiply"),
	HX_CSTRING("multiplyToRef"),
	HX_CSTRING("scale"),
	HX_CSTRING("scaleToRef"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("copyFromFloats"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Color3_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Color3_obj::__mClass,"__mClass");
};

#endif

Class Color3_obj::__mClass;

void Color3_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.tools.math.Color3"), hx::TCanCast< Color3_obj> ,sStaticFields,sMemberFields,
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

void Color3_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math
