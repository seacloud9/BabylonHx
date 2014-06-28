#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color4
#include <com/gamestudiohx/babylonhx/tools/math/Color4.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{
namespace math{

Void Color4_obj::__construct(Float initialR,Float initialG,Float initialB,hx::Null< Float >  __o_initialA)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color4","new",0xedbfdf24,"com.gamestudiohx.babylonhx.tools.math.Color4.new","com/gamestudiohx/babylonhx/tools/math/Color4.hx",17,0x13060a4d)
HX_STACK_THIS(this)
HX_STACK_ARG(initialR,"initialR")
HX_STACK_ARG(initialG,"initialG")
HX_STACK_ARG(initialB,"initialB")
HX_STACK_ARG(__o_initialA,"initialA")
Float initialA = __o_initialA.Default(1.0);
{
	HX_STACK_LINE(18)
	this->r = initialR;
	HX_STACK_LINE(19)
	this->g = initialG;
	HX_STACK_LINE(20)
	this->b = initialB;
	HX_STACK_LINE(21)
	this->a = initialA;
}
;
	return null();
}

//Color4_obj::~Color4_obj() { }

Dynamic Color4_obj::__CreateEmpty() { return  new Color4_obj; }
hx::ObjectPtr< Color4_obj > Color4_obj::__new(Float initialR,Float initialG,Float initialB,hx::Null< Float >  __o_initialA)
{  hx::ObjectPtr< Color4_obj > result = new Color4_obj();
	result->__construct(initialR,initialG,initialB,__o_initialA);
	return result;}

Dynamic Color4_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Color4_obj > result = new Color4_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Color4_obj::addInPlace( ::com::gamestudiohx::babylonhx::tools::math::Color4 right){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color4","addInPlace",0x2dc6083d,"com.gamestudiohx.babylonhx.tools.math.Color4.addInPlace","com/gamestudiohx/babylonhx/tools/math/Color4.hx",24,0x13060a4d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(right,"right")
		HX_STACK_LINE(25)
		hx::AddEq(this->r,right->r);
		HX_STACK_LINE(26)
		hx::AddEq(this->g,right->g);
		HX_STACK_LINE(27)
		hx::AddEq(this->b,right->b);
		HX_STACK_LINE(28)
		hx::AddEq(this->a,right->a);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Color4_obj,addInPlace,(void))

Array< Float > Color4_obj::asArray( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color4","asArray",0xff7e1c0b,"com.gamestudiohx.babylonhx.tools.math.Color4.asArray","com/gamestudiohx/babylonhx/tools/math/Color4.hx",31,0x13060a4d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	Array< Float > result = Array_obj< Float >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		result[(int)0] = this->r;
		HX_STACK_LINE(33)
		result[(int)1] = this->g;
		HX_STACK_LINE(33)
		result[(int)2] = this->b;
		HX_STACK_LINE(33)
		result[(int)3] = this->a;
	}
	HX_STACK_LINE(34)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(Color4_obj,asArray,return )

Void Color4_obj::toArray( Array< Float > array,hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color4","toArray",0x7c287ae2,"com.gamestudiohx.babylonhx.tools.math.Color4.toArray","com/gamestudiohx/babylonhx/tools/math/Color4.hx",37,0x13060a4d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(38)
		array[index] = this->r;
		HX_STACK_LINE(39)
		array[(index + (int)1)] = this->g;
		HX_STACK_LINE(40)
		array[(index + (int)2)] = this->b;
		HX_STACK_LINE(41)
		array[(index + (int)3)] = this->a;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Color4_obj,toArray,(void))

::com::gamestudiohx::babylonhx::tools::math::Color4 Color4_obj::add( ::com::gamestudiohx::babylonhx::tools::math::Color4 right){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color4","add",0xedb600e5,"com.gamestudiohx.babylonhx.tools.math.Color4.add","com/gamestudiohx/babylonhx/tools/math/Color4.hx",45,0x13060a4d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(right,"right")
	HX_STACK_LINE(45)
	return ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new((this->r + right->r),(this->g + right->g),(this->b + right->b),(this->a + right->a));
}


HX_DEFINE_DYNAMIC_FUNC1(Color4_obj,add,return )

::com::gamestudiohx::babylonhx::tools::math::Color4 Color4_obj::subtract( ::com::gamestudiohx::babylonhx::tools::math::Color4 right){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color4","subtract",0x40255fd0,"com.gamestudiohx.babylonhx.tools.math.Color4.subtract","com/gamestudiohx/babylonhx/tools/math/Color4.hx",49,0x13060a4d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(right,"right")
	HX_STACK_LINE(49)
	return ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new((this->r - right->r),(this->g - right->g),(this->b - right->b),(this->a - right->a));
}


HX_DEFINE_DYNAMIC_FUNC1(Color4_obj,subtract,return )

::com::gamestudiohx::babylonhx::tools::math::Color4 Color4_obj::subtractToRef( ::com::gamestudiohx::babylonhx::tools::math::Color4 right,::com::gamestudiohx::babylonhx::tools::math::Color4 result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color4","subtractToRef",0xd28348a8,"com.gamestudiohx.babylonhx.tools.math.Color4.subtractToRef","com/gamestudiohx/babylonhx/tools/math/Color4.hx",52,0x13060a4d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(right,"right")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(53)
	result->r = (this->r - right->r);
	HX_STACK_LINE(54)
	result->g = (this->g - right->g);
	HX_STACK_LINE(55)
	result->b = (this->b - right->b);
	HX_STACK_LINE(56)
	result->a = (this->a - right->a);
	HX_STACK_LINE(58)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(Color4_obj,subtractToRef,return )

::com::gamestudiohx::babylonhx::tools::math::Color4 Color4_obj::scale( Float scale){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color4","scale",0xa46f164e,"com.gamestudiohx.babylonhx.tools.math.Color4.scale","com/gamestudiohx/babylonhx/tools/math/Color4.hx",62,0x13060a4d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scale,"scale")
	HX_STACK_LINE(62)
	return ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new((this->r * scale),(this->g * scale),(this->b * scale),(this->a * scale));
}


HX_DEFINE_DYNAMIC_FUNC1(Color4_obj,scale,return )

::com::gamestudiohx::babylonhx::tools::math::Color4 Color4_obj::scaleToRef( Float scale,::com::gamestudiohx::babylonhx::tools::math::Color4 result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color4","scaleToRef",0x9a3d496a,"com.gamestudiohx.babylonhx.tools.math.Color4.scaleToRef","com/gamestudiohx/babylonhx/tools/math/Color4.hx",65,0x13060a4d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(66)
	result->r = (this->r * scale);
	HX_STACK_LINE(67)
	result->g = (this->g * scale);
	HX_STACK_LINE(68)
	result->b = (this->b * scale);
	HX_STACK_LINE(69)
	result->a = (this->a * scale);
	HX_STACK_LINE(71)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(Color4_obj,scaleToRef,return )

::String Color4_obj::toString( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color4","toString",0x8082bb68,"com.gamestudiohx.babylonhx.tools.math.Color4.toString","com/gamestudiohx/babylonhx/tools/math/Color4.hx",75,0x13060a4d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	return ((((((((HX_CSTRING("{R: ") + this->r) + HX_CSTRING(" G:")) + this->g) + HX_CSTRING(" B:")) + this->b) + HX_CSTRING(" A:")) + this->a) + HX_CSTRING("}"));
}


HX_DEFINE_DYNAMIC_FUNC0(Color4_obj,toString,return )

::com::gamestudiohx::babylonhx::tools::math::Color4 Color4_obj::clone( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color4","clone",0x74035b21,"com.gamestudiohx.babylonhx.tools.math.Color4.clone","com/gamestudiohx/babylonhx/tools/math/Color4.hx",79,0x13060a4d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	return ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new(this->r,this->g,this->b,this->a);
}


HX_DEFINE_DYNAMIC_FUNC0(Color4_obj,clone,return )

::com::gamestudiohx::babylonhx::tools::math::Color4 Color4_obj::Lerp( ::com::gamestudiohx::babylonhx::tools::math::Color4 left,::com::gamestudiohx::babylonhx::tools::math::Color4 right,Float amount){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color4","Lerp",0x03aa1b53,"com.gamestudiohx.babylonhx.tools.math.Color4.Lerp","com/gamestudiohx/babylonhx/tools/math/Color4.hx",83,0x13060a4d)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_LINE(84)
	::com::gamestudiohx::babylonhx::tools::math::Color4 result = ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(85)
	result->r = (left->r + (((right->r - left->r)) * amount));
	HX_STACK_LINE(85)
	result->g = (left->g + (((right->g - left->g)) * amount));
	HX_STACK_LINE(85)
	result->b = (left->b + (((right->b - left->b)) * amount));
	HX_STACK_LINE(85)
	result->a = (left->a + (((right->a - left->a)) * amount));
	HX_STACK_LINE(85)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Color4_obj,Lerp,return )

::com::gamestudiohx::babylonhx::tools::math::Color4 Color4_obj::LerpToRef( ::com::gamestudiohx::babylonhx::tools::math::Color4 left,::com::gamestudiohx::babylonhx::tools::math::Color4 right,Float amount,::com::gamestudiohx::babylonhx::tools::math::Color4 result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color4","LerpToRef",0xedb8f245,"com.gamestudiohx.babylonhx.tools.math.Color4.LerpToRef","com/gamestudiohx/babylonhx/tools/math/Color4.hx",88,0x13060a4d)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(89)
	result->r = (left->r + (((right->r - left->r)) * amount));
	HX_STACK_LINE(90)
	result->g = (left->g + (((right->g - left->g)) * amount));
	HX_STACK_LINE(91)
	result->b = (left->b + (((right->b - left->b)) * amount));
	HX_STACK_LINE(92)
	result->a = (left->a + (((right->a - left->a)) * amount));
	HX_STACK_LINE(94)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Color4_obj,LerpToRef,return )

::com::gamestudiohx::babylonhx::tools::math::Color4 Color4_obj::FromArray( Array< Float > array,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Color4","FromArray",0x4544b173,"com.gamestudiohx.babylonhx.tools.math.Color4.FromArray","com/gamestudiohx/babylonhx/tools/math/Color4.hx",98,0x13060a4d)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(98)
		return ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new(array->__get(offset),array->__get((offset + (int)1)),array->__get((offset + (int)2)),array->__get((offset + (int)3)));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color4_obj,FromArray,return )


Color4_obj::Color4_obj()
{
}

Dynamic Color4_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Lerp") ) { return Lerp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"asArray") ) { return asArray_dyn(); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"LerpToRef") ) { return LerpToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"FromArray") ) { return FromArray_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addInPlace") ) { return addInPlace_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleToRef") ) { return scaleToRef_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subtractToRef") ) { return subtractToRef_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Color4_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Color4_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("r"));
	outFields->push(HX_CSTRING("g"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("a"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("Lerp"),
	HX_CSTRING("LerpToRef"),
	HX_CSTRING("FromArray"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Color4_obj,r),HX_CSTRING("r")},
	{hx::fsFloat,(int)offsetof(Color4_obj,g),HX_CSTRING("g")},
	{hx::fsFloat,(int)offsetof(Color4_obj,b),HX_CSTRING("b")},
	{hx::fsFloat,(int)offsetof(Color4_obj,a),HX_CSTRING("a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("r"),
	HX_CSTRING("g"),
	HX_CSTRING("b"),
	HX_CSTRING("a"),
	HX_CSTRING("addInPlace"),
	HX_CSTRING("asArray"),
	HX_CSTRING("toArray"),
	HX_CSTRING("add"),
	HX_CSTRING("subtract"),
	HX_CSTRING("subtractToRef"),
	HX_CSTRING("scale"),
	HX_CSTRING("scaleToRef"),
	HX_CSTRING("toString"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Color4_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Color4_obj::__mClass,"__mClass");
};

#endif

Class Color4_obj::__mClass;

void Color4_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.tools.math.Color4"), hx::TCanCast< Color4_obj> ,sStaticFields,sMemberFields,
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

void Color4_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math
