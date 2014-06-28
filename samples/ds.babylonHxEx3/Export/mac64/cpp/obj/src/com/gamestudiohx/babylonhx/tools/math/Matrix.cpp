#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Plane
#include <com/gamestudiohx/babylonhx/tools/math/Plane.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Quaternion
#include <com/gamestudiohx/babylonhx/tools/math/Quaternion.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Viewport
#include <com/gamestudiohx/babylonhx/tools/math/Viewport.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_utils_ArrayBufferView
#include <openfl/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_utils_Float32Array
#include <openfl/utils/Float32Array.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{
namespace math{

Void Matrix_obj::__construct()
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","new",0xbbd1f7f4,"com.gamestudiohx.babylonhx.tools.math.Matrix.new","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",24,0xadc6fb7d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	this->m = Array_obj< Float >::__new();
}
;
	return null();
}

//Matrix_obj::~Matrix_obj() { }

Dynamic Matrix_obj::__CreateEmpty() { return  new Matrix_obj; }
hx::ObjectPtr< Matrix_obj > Matrix_obj::__new()
{  hx::ObjectPtr< Matrix_obj > result = new Matrix_obj();
	result->__construct();
	return result;}

Dynamic Matrix_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix_obj > result = new Matrix_obj();
	result->__construct();
	return result;}

bool Matrix_obj::isIdentity( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","isIdentity",0xc4ad0a34,"com.gamestudiohx.babylonhx.tools.math.Matrix.isIdentity","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",28,0xadc6fb7d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	bool ret = true;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(30)
	if (((bool((bool((bool((this->m->__get((int)0) != 1.0)) || bool((this->m->__get((int)5) != 1.0)))) || bool((this->m->__get((int)10) != 1.0)))) || bool((this->m->__get((int)15) != 1.0))))){
		HX_STACK_LINE(31)
		ret = false;
	}
	HX_STACK_LINE(33)
	if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((this->m->__get((int)1) != 0.0)) || bool((this->m->__get((int)2) != 0.0)))) || bool((this->m->__get((int)3) != 0.0)))) || bool((this->m->__get((int)4) != 0.0)))) || bool((this->m->__get((int)6) != 0.0)))) || bool((this->m->__get((int)7) != 0.0)))) || bool((this->m->__get((int)8) != 0.0)))) || bool((this->m->__get((int)9) != 0.0)))) || bool((this->m->__get((int)11) != 0.0)))) || bool((this->m->__get((int)12) != 0.0)))) || bool((this->m->__get((int)13) != 0.0)))) || bool((this->m->__get((int)14) != 0.0))))){
		HX_STACK_LINE(37)
		ret = false;
	}
	HX_STACK_LINE(39)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,isIdentity,return )

Float Matrix_obj::determinant( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","determinant",0x56233929,"com.gamestudiohx.babylonhx.tools.math.Matrix.determinant","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",42,0xadc6fb7d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	Float temp1 = ((this->m->__get((int)10) * this->m->__get((int)15)) - (this->m->__get((int)11) * this->m->__get((int)14)));		HX_STACK_VAR(temp1,"temp1");
	HX_STACK_LINE(44)
	Float temp2 = ((this->m->__get((int)9) * this->m->__get((int)15)) - (this->m->__get((int)11) * this->m->__get((int)13)));		HX_STACK_VAR(temp2,"temp2");
	HX_STACK_LINE(45)
	Float temp3 = ((this->m->__get((int)9) * this->m->__get((int)14)) - (this->m->__get((int)10) * this->m->__get((int)13)));		HX_STACK_VAR(temp3,"temp3");
	HX_STACK_LINE(46)
	Float temp4 = ((this->m->__get((int)8) * this->m->__get((int)15)) - (this->m->__get((int)11) * this->m->__get((int)12)));		HX_STACK_VAR(temp4,"temp4");
	HX_STACK_LINE(47)
	Float temp5 = ((this->m->__get((int)8) * this->m->__get((int)14)) - (this->m->__get((int)10) * this->m->__get((int)12)));		HX_STACK_VAR(temp5,"temp5");
	HX_STACK_LINE(48)
	Float temp6 = ((this->m->__get((int)8) * this->m->__get((int)13)) - (this->m->__get((int)9) * this->m->__get((int)12)));		HX_STACK_VAR(temp6,"temp6");
	HX_STACK_LINE(50)
	return ((((this->m->__get((int)0) * ((((this->m->__get((int)5) * temp1) - (this->m->__get((int)6) * temp2)) + (this->m->__get((int)7) * temp3)))) - (this->m->__get((int)1) * ((((this->m->__get((int)4) * temp1) - (this->m->__get((int)6) * temp4)) + (this->m->__get((int)7) * temp5))))) + (this->m->__get((int)2) * ((((this->m->__get((int)4) * temp2) - (this->m->__get((int)5) * temp4)) + (this->m->__get((int)7) * temp6))))) - (this->m->__get((int)3) * ((((this->m->__get((int)4) * temp3) - (this->m->__get((int)5) * temp5)) + (this->m->__get((int)6) * temp6)))));
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,determinant,return )

Array< Float > Matrix_obj::toArray( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","toArray",0x1c7f3bb2,"com.gamestudiohx.babylonhx.tools.math.Matrix.toArray","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",56,0xadc6fb7d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	return this->m;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toArray,return )

Void Matrix_obj::copyToArray( ::openfl::utils::Float32Array array,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","copyToArray",0x6c36127d,"com.gamestudiohx.babylonhx.tools.math.Matrix.copyToArray","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",60,0xadc6fb7d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(60)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			if ((!(((_g < (int)16))))){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(60)
			int index = (_g)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(61)
			hx::__ArrayImplRef(array,(offset + index)) = this->m->__get(index);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyToArray,(void))

Void Matrix_obj::invert( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","invert",0xd040b402,"com.gamestudiohx.babylonhx.tools.math.Matrix.invert","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",66,0xadc6fb7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		Float l1 = this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
		HX_STACK_LINE(66)
		Float l2 = this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
		HX_STACK_LINE(66)
		Float l3 = this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
		HX_STACK_LINE(66)
		Float l4 = this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
		HX_STACK_LINE(66)
		Float l5 = this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
		HX_STACK_LINE(66)
		Float l6 = this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
		HX_STACK_LINE(66)
		Float l7 = this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
		HX_STACK_LINE(66)
		Float l8 = this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
		HX_STACK_LINE(66)
		Float l9 = this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
		HX_STACK_LINE(66)
		Float l10 = this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
		HX_STACK_LINE(66)
		Float l11 = this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
		HX_STACK_LINE(66)
		Float l12 = this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
		HX_STACK_LINE(66)
		Float l13 = this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
		HX_STACK_LINE(66)
		Float l14 = this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
		HX_STACK_LINE(66)
		Float l15 = this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
		HX_STACK_LINE(66)
		Float l16 = this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
		HX_STACK_LINE(66)
		Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
		HX_STACK_LINE(66)
		Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
		HX_STACK_LINE(66)
		Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
		HX_STACK_LINE(66)
		Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
		HX_STACK_LINE(66)
		Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
		HX_STACK_LINE(66)
		Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
		HX_STACK_LINE(66)
		Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
		HX_STACK_LINE(66)
		Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
		HX_STACK_LINE(66)
		Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
		HX_STACK_LINE(66)
		Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
		HX_STACK_LINE(66)
		Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
		HX_STACK_LINE(66)
		Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
		HX_STACK_LINE(66)
		Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
		HX_STACK_LINE(66)
		Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
		HX_STACK_LINE(66)
		Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
		HX_STACK_LINE(66)
		Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
		HX_STACK_LINE(66)
		Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
		HX_STACK_LINE(66)
		Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
		HX_STACK_LINE(66)
		Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
		HX_STACK_LINE(66)
		Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
		HX_STACK_LINE(66)
		Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
		HX_STACK_LINE(66)
		Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
		HX_STACK_LINE(66)
		Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
		HX_STACK_LINE(66)
		this->m[(int)0] = (l23 * l27);
		HX_STACK_LINE(66)
		this->m[(int)4] = (l24 * l27);
		HX_STACK_LINE(66)
		this->m[(int)8] = (l25 * l27);
		HX_STACK_LINE(66)
		this->m[(int)12] = (l26 * l27);
		HX_STACK_LINE(66)
		this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
		HX_STACK_LINE(66)
		this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
		HX_STACK_LINE(66)
		this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
		HX_STACK_LINE(66)
		this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
		HX_STACK_LINE(66)
		this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
		HX_STACK_LINE(66)
		this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
		HX_STACK_LINE(66)
		this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
		HX_STACK_LINE(66)
		this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
		HX_STACK_LINE(66)
		this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
		HX_STACK_LINE(66)
		this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
		HX_STACK_LINE(66)
		this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
		HX_STACK_LINE(66)
		this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,invert,(void))

Void Matrix_obj::invertToRef( ::com::gamestudiohx::babylonhx::tools::math::Matrix other){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","invertToRef",0xf8af7f36,"com.gamestudiohx.babylonhx.tools.math.Matrix.invertToRef","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",69,0xadc6fb7d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(70)
		Float l1 = this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
		HX_STACK_LINE(71)
		Float l2 = this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
		HX_STACK_LINE(72)
		Float l3 = this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
		HX_STACK_LINE(73)
		Float l4 = this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
		HX_STACK_LINE(74)
		Float l5 = this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
		HX_STACK_LINE(75)
		Float l6 = this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
		HX_STACK_LINE(76)
		Float l7 = this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
		HX_STACK_LINE(77)
		Float l8 = this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
		HX_STACK_LINE(78)
		Float l9 = this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
		HX_STACK_LINE(79)
		Float l10 = this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
		HX_STACK_LINE(80)
		Float l11 = this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
		HX_STACK_LINE(81)
		Float l12 = this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
		HX_STACK_LINE(82)
		Float l13 = this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
		HX_STACK_LINE(83)
		Float l14 = this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
		HX_STACK_LINE(84)
		Float l15 = this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
		HX_STACK_LINE(85)
		Float l16 = this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
		HX_STACK_LINE(86)
		Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
		HX_STACK_LINE(87)
		Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
		HX_STACK_LINE(88)
		Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
		HX_STACK_LINE(89)
		Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
		HX_STACK_LINE(90)
		Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
		HX_STACK_LINE(91)
		Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
		HX_STACK_LINE(92)
		Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
		HX_STACK_LINE(93)
		Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
		HX_STACK_LINE(94)
		Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
		HX_STACK_LINE(95)
		Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
		HX_STACK_LINE(96)
		Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
		HX_STACK_LINE(97)
		Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
		HX_STACK_LINE(98)
		Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
		HX_STACK_LINE(99)
		Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
		HX_STACK_LINE(100)
		Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
		HX_STACK_LINE(101)
		Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
		HX_STACK_LINE(102)
		Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
		HX_STACK_LINE(103)
		Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
		HX_STACK_LINE(104)
		Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
		HX_STACK_LINE(105)
		Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
		HX_STACK_LINE(106)
		Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
		HX_STACK_LINE(107)
		Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
		HX_STACK_LINE(108)
		Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
		HX_STACK_LINE(110)
		other->m[(int)0] = (l23 * l27);
		HX_STACK_LINE(111)
		other->m[(int)4] = (l24 * l27);
		HX_STACK_LINE(112)
		other->m[(int)8] = (l25 * l27);
		HX_STACK_LINE(113)
		other->m[(int)12] = (l26 * l27);
		HX_STACK_LINE(114)
		other->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
		HX_STACK_LINE(115)
		other->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
		HX_STACK_LINE(116)
		other->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
		HX_STACK_LINE(117)
		other->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
		HX_STACK_LINE(118)
		other->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
		HX_STACK_LINE(119)
		other->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
		HX_STACK_LINE(120)
		other->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
		HX_STACK_LINE(121)
		other->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
		HX_STACK_LINE(122)
		other->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
		HX_STACK_LINE(123)
		other->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
		HX_STACK_LINE(124)
		other->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
		HX_STACK_LINE(125)
		other->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,invertToRef,(void))

Void Matrix_obj::setTranslation( ::com::gamestudiohx::babylonhx::tools::math::Vector3 vector3){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","setTranslation",0x7801055b,"com.gamestudiohx.babylonhx.tools.math.Matrix.setTranslation","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",128,0xadc6fb7d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vector3,"vector3")
		HX_STACK_LINE(129)
		this->m[(int)12] = vector3->x;
		HX_STACK_LINE(130)
		this->m[(int)13] = vector3->y;
		HX_STACK_LINE(131)
		this->m[(int)14] = vector3->z;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,setTranslation,(void))

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::multiply( ::com::gamestudiohx::babylonhx::tools::math::Matrix other){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","multiply",0x8e32c210,"com.gamestudiohx.babylonhx.tools.math.Matrix.multiply","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",134,0xadc6fb7d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(135)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
		HX_STACK_LINE(136)
		Float tm0 = this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
		HX_STACK_LINE(136)
		Float tm1 = this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
		HX_STACK_LINE(136)
		Float tm2 = this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
		HX_STACK_LINE(136)
		Float tm3 = this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
		HX_STACK_LINE(136)
		Float tm4 = this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
		HX_STACK_LINE(136)
		Float tm5 = this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
		HX_STACK_LINE(136)
		Float tm6 = this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
		HX_STACK_LINE(136)
		Float tm7 = this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
		HX_STACK_LINE(136)
		Float tm8 = this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
		HX_STACK_LINE(136)
		Float tm9 = this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
		HX_STACK_LINE(136)
		Float tm10 = this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
		HX_STACK_LINE(136)
		Float tm11 = this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
		HX_STACK_LINE(136)
		Float tm12 = this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
		HX_STACK_LINE(136)
		Float tm13 = this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
		HX_STACK_LINE(136)
		Float tm14 = this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
		HX_STACK_LINE(136)
		Float tm15 = this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
		HX_STACK_LINE(136)
		Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
		HX_STACK_LINE(136)
		Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
		HX_STACK_LINE(136)
		Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
		HX_STACK_LINE(136)
		Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
		HX_STACK_LINE(136)
		Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
		HX_STACK_LINE(136)
		Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
		HX_STACK_LINE(136)
		Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
		HX_STACK_LINE(136)
		Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
		HX_STACK_LINE(136)
		Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
		HX_STACK_LINE(136)
		Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
		HX_STACK_LINE(136)
		Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
		HX_STACK_LINE(136)
		Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
		HX_STACK_LINE(136)
		Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
		HX_STACK_LINE(136)
		Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
		HX_STACK_LINE(136)
		Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
		HX_STACK_LINE(136)
		Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
		HX_STACK_LINE(136)
		result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
		HX_STACK_LINE(136)
		result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
		HX_STACK_LINE(136)
		result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
		HX_STACK_LINE(136)
		result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
		HX_STACK_LINE(136)
		result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
		HX_STACK_LINE(136)
		result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
		HX_STACK_LINE(136)
		result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
		HX_STACK_LINE(136)
		result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
		HX_STACK_LINE(136)
		result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
		HX_STACK_LINE(136)
		result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
		HX_STACK_LINE(136)
		result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
		HX_STACK_LINE(136)
		result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
		HX_STACK_LINE(136)
		result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
		HX_STACK_LINE(136)
		result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
		HX_STACK_LINE(136)
		result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
		HX_STACK_LINE(136)
		result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
		HX_STACK_LINE(136)
		result1;
	}
	HX_STACK_LINE(137)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,multiply,return )

Void Matrix_obj::copyFrom( ::com::gamestudiohx::babylonhx::tools::math::Matrix other){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","copyFrom",0xbc06ebab,"com.gamestudiohx.babylonhx.tools.math.Matrix.copyFrom","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",141,0xadc6fb7d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(141)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		while((true)){
			HX_STACK_LINE(141)
			if ((!(((_g < (int)16))))){
				HX_STACK_LINE(141)
				break;
			}
			HX_STACK_LINE(141)
			int index = (_g)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(142)
			this->m[index] = other->m->__get(index);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,copyFrom,(void))

Void Matrix_obj::multiplyToRef( ::com::gamestudiohx::babylonhx::tools::math::Matrix other,::com::gamestudiohx::babylonhx::tools::math::Matrix result){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","multiplyToRef",0x0589be68,"com.gamestudiohx.babylonhx.tools.math.Matrix.multiplyToRef","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",147,0xadc6fb7d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(147)
		Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
		HX_STACK_LINE(147)
		Float tm0 = this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
		HX_STACK_LINE(147)
		Float tm1 = this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
		HX_STACK_LINE(147)
		Float tm2 = this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
		HX_STACK_LINE(147)
		Float tm3 = this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
		HX_STACK_LINE(147)
		Float tm4 = this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
		HX_STACK_LINE(147)
		Float tm5 = this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
		HX_STACK_LINE(147)
		Float tm6 = this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
		HX_STACK_LINE(147)
		Float tm7 = this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
		HX_STACK_LINE(147)
		Float tm8 = this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
		HX_STACK_LINE(147)
		Float tm9 = this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
		HX_STACK_LINE(147)
		Float tm10 = this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
		HX_STACK_LINE(147)
		Float tm11 = this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
		HX_STACK_LINE(147)
		Float tm12 = this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
		HX_STACK_LINE(147)
		Float tm13 = this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
		HX_STACK_LINE(147)
		Float tm14 = this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
		HX_STACK_LINE(147)
		Float tm15 = this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
		HX_STACK_LINE(147)
		Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
		HX_STACK_LINE(147)
		Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
		HX_STACK_LINE(147)
		Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
		HX_STACK_LINE(147)
		Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
		HX_STACK_LINE(147)
		Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
		HX_STACK_LINE(147)
		Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
		HX_STACK_LINE(147)
		Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
		HX_STACK_LINE(147)
		Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
		HX_STACK_LINE(147)
		Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
		HX_STACK_LINE(147)
		Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
		HX_STACK_LINE(147)
		Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
		HX_STACK_LINE(147)
		Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
		HX_STACK_LINE(147)
		Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
		HX_STACK_LINE(147)
		Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
		HX_STACK_LINE(147)
		Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
		HX_STACK_LINE(147)
		Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
		HX_STACK_LINE(147)
		result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
		HX_STACK_LINE(147)
		result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
		HX_STACK_LINE(147)
		result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
		HX_STACK_LINE(147)
		result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
		HX_STACK_LINE(147)
		result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
		HX_STACK_LINE(147)
		result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
		HX_STACK_LINE(147)
		result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
		HX_STACK_LINE(147)
		result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
		HX_STACK_LINE(147)
		result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
		HX_STACK_LINE(147)
		result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
		HX_STACK_LINE(147)
		result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
		HX_STACK_LINE(147)
		result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
		HX_STACK_LINE(147)
		result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
		HX_STACK_LINE(147)
		result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
		HX_STACK_LINE(147)
		result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
		HX_STACK_LINE(147)
		result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
		HX_STACK_LINE(147)
		result1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,multiplyToRef,(void))

Array< Float > Matrix_obj::multiplyToArray( ::com::gamestudiohx::babylonhx::tools::math::Matrix other,Array< Float > result,int offset){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","multiplyToArray",0x091581ee,"com.gamestudiohx.babylonhx.tools.math.Matrix.multiplyToArray","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",150,0xadc6fb7d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_ARG(result,"result")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_LINE(151)
	Float tm0 = this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
	HX_STACK_LINE(152)
	Float tm1 = this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
	HX_STACK_LINE(153)
	Float tm2 = this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
	HX_STACK_LINE(154)
	Float tm3 = this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
	HX_STACK_LINE(155)
	Float tm4 = this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
	HX_STACK_LINE(156)
	Float tm5 = this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
	HX_STACK_LINE(157)
	Float tm6 = this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
	HX_STACK_LINE(158)
	Float tm7 = this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
	HX_STACK_LINE(159)
	Float tm8 = this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
	HX_STACK_LINE(160)
	Float tm9 = this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
	HX_STACK_LINE(161)
	Float tm10 = this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
	HX_STACK_LINE(162)
	Float tm11 = this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
	HX_STACK_LINE(163)
	Float tm12 = this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
	HX_STACK_LINE(164)
	Float tm13 = this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
	HX_STACK_LINE(165)
	Float tm14 = this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
	HX_STACK_LINE(166)
	Float tm15 = this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
	HX_STACK_LINE(168)
	Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
	HX_STACK_LINE(169)
	Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
	HX_STACK_LINE(170)
	Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
	HX_STACK_LINE(171)
	Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
	HX_STACK_LINE(172)
	Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
	HX_STACK_LINE(173)
	Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
	HX_STACK_LINE(174)
	Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
	HX_STACK_LINE(175)
	Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
	HX_STACK_LINE(176)
	Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
	HX_STACK_LINE(177)
	Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
	HX_STACK_LINE(178)
	Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
	HX_STACK_LINE(179)
	Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
	HX_STACK_LINE(180)
	Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
	HX_STACK_LINE(181)
	Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
	HX_STACK_LINE(182)
	Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
	HX_STACK_LINE(183)
	Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
	HX_STACK_LINE(185)
	result[offset] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
	HX_STACK_LINE(186)
	result[(offset + (int)1)] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
	HX_STACK_LINE(187)
	result[(offset + (int)2)] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
	HX_STACK_LINE(188)
	result[(offset + (int)3)] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
	HX_STACK_LINE(190)
	result[(offset + (int)4)] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
	HX_STACK_LINE(191)
	result[(offset + (int)5)] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
	HX_STACK_LINE(192)
	result[(offset + (int)6)] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
	HX_STACK_LINE(193)
	result[(offset + (int)7)] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
	HX_STACK_LINE(195)
	result[(offset + (int)8)] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
	HX_STACK_LINE(196)
	result[(offset + (int)9)] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
	HX_STACK_LINE(197)
	result[(offset + (int)10)] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
	HX_STACK_LINE(198)
	result[(offset + (int)11)] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
	HX_STACK_LINE(200)
	result[(offset + (int)12)] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
	HX_STACK_LINE(201)
	result[(offset + (int)13)] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
	HX_STACK_LINE(202)
	result[(offset + (int)14)] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
	HX_STACK_LINE(203)
	result[(offset + (int)15)] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
	HX_STACK_LINE(205)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,multiplyToArray,return )

bool Matrix_obj::equals( ::com::gamestudiohx::babylonhx::tools::math::Matrix value){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","equals",0xf05abb2b,"com.gamestudiohx.babylonhx.tools.math.Matrix.equals","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",209,0xadc6fb7d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(209)
	return (bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((this->m->__get((int)0) == value->m->__get((int)0))) && bool((this->m->__get((int)1) == value->m->__get((int)1))))) && bool((this->m->__get((int)2) == value->m->__get((int)2))))) && bool((this->m->__get((int)3) == value->m->__get((int)3))))) && bool((this->m->__get((int)4) == value->m->__get((int)4))))) && bool((this->m->__get((int)5) == value->m->__get((int)5))))) && bool((this->m->__get((int)6) == value->m->__get((int)6))))) && bool((this->m->__get((int)7) == value->m->__get((int)7))))) && bool((this->m->__get((int)8) == value->m->__get((int)8))))) && bool((this->m->__get((int)9) == value->m->__get((int)9))))) && bool((this->m->__get((int)10) == value->m->__get((int)10))))) && bool((this->m->__get((int)11) == value->m->__get((int)11))))) && bool((this->m->__get((int)12) == value->m->__get((int)12))))) && bool((this->m->__get((int)13) == value->m->__get((int)13))))) && bool((this->m->__get((int)14) == value->m->__get((int)14))))) && bool((this->m->__get((int)15) == value->m->__get((int)15))));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,equals,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::clone( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","clone",0x7d6947f1,"com.gamestudiohx.babylonhx.tools.math.Matrix.clone","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",216,0xadc6fb7d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(216)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(216)
	result->m[(int)0] = this->m->__get((int)0);
	HX_STACK_LINE(216)
	result->m[(int)1] = this->m->__get((int)1);
	HX_STACK_LINE(216)
	result->m[(int)2] = this->m->__get((int)2);
	HX_STACK_LINE(216)
	result->m[(int)3] = this->m->__get((int)3);
	HX_STACK_LINE(216)
	result->m[(int)4] = this->m->__get((int)4);
	HX_STACK_LINE(216)
	result->m[(int)5] = this->m->__get((int)5);
	HX_STACK_LINE(216)
	result->m[(int)6] = this->m->__get((int)6);
	HX_STACK_LINE(216)
	result->m[(int)7] = this->m->__get((int)7);
	HX_STACK_LINE(216)
	result->m[(int)8] = this->m->__get((int)8);
	HX_STACK_LINE(216)
	result->m[(int)9] = this->m->__get((int)9);
	HX_STACK_LINE(216)
	result->m[(int)10] = this->m->__get((int)10);
	HX_STACK_LINE(216)
	result->m[(int)11] = this->m->__get((int)11);
	HX_STACK_LINE(216)
	result->m[(int)12] = this->m->__get((int)12);
	HX_STACK_LINE(216)
	result->m[(int)13] = this->m->__get((int)13);
	HX_STACK_LINE(216)
	result->m[(int)14] = this->m->__get((int)14);
	HX_STACK_LINE(216)
	result->m[(int)15] = this->m->__get((int)15);
	HX_STACK_LINE(216)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,clone,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::FromArray( Array< Float > array,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","FromArray",0xb9694643,"com.gamestudiohx.babylonhx.tools.math.Matrix.FromArray","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",223,0xadc6fb7d)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(224)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(225)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(225)
				while((true)){
					HX_STACK_LINE(225)
					if ((!(((_g < (int)16))))){
						HX_STACK_LINE(225)
						break;
					}
					HX_STACK_LINE(225)
					int index = (_g)++;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(225)
					result->m[index] = array->__get((index + offset));
				}
			}
			HX_STACK_LINE(225)
			result;
		}
		HX_STACK_LINE(226)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,FromArray,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::FromArrayToRef( Array< Float > array,hx::Null< int >  __o_offset,::com::gamestudiohx::babylonhx::tools::math::Matrix result){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","FromArrayToRef",0xf6682155,"com.gamestudiohx.babylonhx.tools.math.Matrix.FromArrayToRef","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",229,0xadc6fb7d)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(result,"result")
{
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(230)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(230)
			while((true)){
				HX_STACK_LINE(230)
				if ((!(((_g < (int)16))))){
					HX_STACK_LINE(230)
					break;
				}
				HX_STACK_LINE(230)
				int index = (_g)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(231)
				result->m[index] = array->__get((index + offset));
			}
		}
		HX_STACK_LINE(233)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,FromArrayToRef,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::FromValues( Float m11,Float m12,Float m13,Float m14,Float m21,Float m22,Float m23,Float m24,Float m31,Float m32,Float m33,Float m34,Float m41,Float m42,Float m43,Float m44){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","FromValues",0x1a7abff8,"com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",239,0xadc6fb7d)
	HX_STACK_ARG(m11,"m11")
	HX_STACK_ARG(m12,"m12")
	HX_STACK_ARG(m13,"m13")
	HX_STACK_ARG(m14,"m14")
	HX_STACK_ARG(m21,"m21")
	HX_STACK_ARG(m22,"m22")
	HX_STACK_ARG(m23,"m23")
	HX_STACK_ARG(m24,"m24")
	HX_STACK_ARG(m31,"m31")
	HX_STACK_ARG(m32,"m32")
	HX_STACK_ARG(m33,"m33")
	HX_STACK_ARG(m34,"m34")
	HX_STACK_ARG(m41,"m41")
	HX_STACK_ARG(m42,"m42")
	HX_STACK_ARG(m43,"m43")
	HX_STACK_ARG(m44,"m44")
	HX_STACK_LINE(241)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(243)
	result->m[(int)0] = m11;
	HX_STACK_LINE(244)
	result->m[(int)1] = m12;
	HX_STACK_LINE(245)
	result->m[(int)2] = m13;
	HX_STACK_LINE(246)
	result->m[(int)3] = m14;
	HX_STACK_LINE(247)
	result->m[(int)4] = m21;
	HX_STACK_LINE(248)
	result->m[(int)5] = m22;
	HX_STACK_LINE(249)
	result->m[(int)6] = m23;
	HX_STACK_LINE(250)
	result->m[(int)7] = m24;
	HX_STACK_LINE(251)
	result->m[(int)8] = m31;
	HX_STACK_LINE(252)
	result->m[(int)9] = m32;
	HX_STACK_LINE(253)
	result->m[(int)10] = m33;
	HX_STACK_LINE(254)
	result->m[(int)11] = m34;
	HX_STACK_LINE(255)
	result->m[(int)12] = m41;
	HX_STACK_LINE(256)
	result->m[(int)13] = m42;
	HX_STACK_LINE(257)
	result->m[(int)14] = m43;
	HX_STACK_LINE(258)
	result->m[(int)15] = m44;
	HX_STACK_LINE(260)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC16(Matrix_obj,FromValues,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::FromValuesToRef( Float m11,Float m12,Float m13,Float m14,Float m21,Float m22,Float m23,Float m24,Float m31,Float m32,Float m33,Float m34,Float m41,Float m42,Float m43,Float m44,::com::gamestudiohx::babylonhx::tools::math::Matrix result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","FromValuesToRef",0xa4f85780,"com.gamestudiohx.babylonhx.tools.math.Matrix.FromValuesToRef","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",266,0xadc6fb7d)
	HX_STACK_ARG(m11,"m11")
	HX_STACK_ARG(m12,"m12")
	HX_STACK_ARG(m13,"m13")
	HX_STACK_ARG(m14,"m14")
	HX_STACK_ARG(m21,"m21")
	HX_STACK_ARG(m22,"m22")
	HX_STACK_ARG(m23,"m23")
	HX_STACK_ARG(m24,"m24")
	HX_STACK_ARG(m31,"m31")
	HX_STACK_ARG(m32,"m32")
	HX_STACK_ARG(m33,"m33")
	HX_STACK_ARG(m34,"m34")
	HX_STACK_ARG(m41,"m41")
	HX_STACK_ARG(m42,"m42")
	HX_STACK_ARG(m43,"m43")
	HX_STACK_ARG(m44,"m44")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(268)
	result->m[(int)0] = m11;
	HX_STACK_LINE(269)
	result->m[(int)1] = m12;
	HX_STACK_LINE(270)
	result->m[(int)2] = m13;
	HX_STACK_LINE(271)
	result->m[(int)3] = m14;
	HX_STACK_LINE(272)
	result->m[(int)4] = m21;
	HX_STACK_LINE(273)
	result->m[(int)5] = m22;
	HX_STACK_LINE(274)
	result->m[(int)6] = m23;
	HX_STACK_LINE(275)
	result->m[(int)7] = m24;
	HX_STACK_LINE(276)
	result->m[(int)8] = m31;
	HX_STACK_LINE(277)
	result->m[(int)9] = m32;
	HX_STACK_LINE(278)
	result->m[(int)10] = m33;
	HX_STACK_LINE(279)
	result->m[(int)11] = m34;
	HX_STACK_LINE(280)
	result->m[(int)12] = m41;
	HX_STACK_LINE(281)
	result->m[(int)13] = m42;
	HX_STACK_LINE(282)
	result->m[(int)14] = m43;
	HX_STACK_LINE(283)
	result->m[(int)15] = m44;
	HX_STACK_LINE(285)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC17(Matrix_obj,FromValuesToRef,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::Identity( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","Identity",0x8686e14a,"com.gamestudiohx.babylonhx.tools.math.Matrix.Identity","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",289,0xadc6fb7d)
	HX_STACK_LINE(289)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(289)
	result->m[(int)0] = 1.0;
	HX_STACK_LINE(289)
	result->m[(int)1] = (int)0;
	HX_STACK_LINE(289)
	result->m[(int)2] = (int)0;
	HX_STACK_LINE(289)
	result->m[(int)3] = (int)0;
	HX_STACK_LINE(289)
	result->m[(int)4] = (int)0;
	HX_STACK_LINE(289)
	result->m[(int)5] = 1.0;
	HX_STACK_LINE(289)
	result->m[(int)6] = (int)0;
	HX_STACK_LINE(289)
	result->m[(int)7] = (int)0;
	HX_STACK_LINE(289)
	result->m[(int)8] = (int)0;
	HX_STACK_LINE(289)
	result->m[(int)9] = (int)0;
	HX_STACK_LINE(289)
	result->m[(int)10] = 1.0;
	HX_STACK_LINE(289)
	result->m[(int)11] = (int)0;
	HX_STACK_LINE(289)
	result->m[(int)12] = (int)0;
	HX_STACK_LINE(289)
	result->m[(int)13] = (int)0;
	HX_STACK_LINE(289)
	result->m[(int)14] = (int)0;
	HX_STACK_LINE(289)
	result->m[(int)15] = 1.0;
	HX_STACK_LINE(289)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,Identity,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::IdentityToRef( ::com::gamestudiohx::babylonhx::tools::math::Matrix result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","IdentityToRef",0x9d982cee,"com.gamestudiohx.babylonhx.tools.math.Matrix.IdentityToRef","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",297,0xadc6fb7d)
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(298)
	{
		HX_STACK_LINE(298)
		result->m[(int)0] = 1.0;
		HX_STACK_LINE(298)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(298)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(298)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(298)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(298)
		result->m[(int)5] = 1.0;
		HX_STACK_LINE(298)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(298)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(298)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(298)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(298)
		result->m[(int)10] = 1.0;
		HX_STACK_LINE(298)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(298)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(298)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(298)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(298)
		result->m[(int)15] = 1.0;
		HX_STACK_LINE(302)
		result;
	}
	HX_STACK_LINE(305)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,IdentityToRef,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::Zero( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","Zero",0x8eaeb534,"com.gamestudiohx.babylonhx.tools.math.Matrix.Zero","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",309,0xadc6fb7d)
	HX_STACK_LINE(309)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(309)
	result->m[(int)0] = (int)0;
	HX_STACK_LINE(309)
	result->m[(int)1] = (int)0;
	HX_STACK_LINE(309)
	result->m[(int)2] = (int)0;
	HX_STACK_LINE(309)
	result->m[(int)3] = (int)0;
	HX_STACK_LINE(309)
	result->m[(int)4] = (int)0;
	HX_STACK_LINE(309)
	result->m[(int)5] = (int)0;
	HX_STACK_LINE(309)
	result->m[(int)6] = (int)0;
	HX_STACK_LINE(309)
	result->m[(int)7] = (int)0;
	HX_STACK_LINE(309)
	result->m[(int)8] = (int)0;
	HX_STACK_LINE(309)
	result->m[(int)9] = (int)0;
	HX_STACK_LINE(309)
	result->m[(int)10] = (int)0;
	HX_STACK_LINE(309)
	result->m[(int)11] = (int)0;
	HX_STACK_LINE(309)
	result->m[(int)12] = (int)0;
	HX_STACK_LINE(309)
	result->m[(int)13] = (int)0;
	HX_STACK_LINE(309)
	result->m[(int)14] = (int)0;
	HX_STACK_LINE(309)
	result->m[(int)15] = (int)0;
	HX_STACK_LINE(309)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,Zero,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::RotationX( Float angle){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","RotationX",0x4c4047ce,"com.gamestudiohx.babylonhx.tools.math.Matrix.RotationX","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",317,0xadc6fb7d)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(318)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(319)
	{
		HX_STACK_LINE(319)
		Float s = ::Math_obj::sin(angle);		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(319)
		Float c = ::Math_obj::cos(angle);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(319)
		result->m[(int)0] = 1.0;
		HX_STACK_LINE(319)
		result->m[(int)15] = 1.0;
		HX_STACK_LINE(319)
		result->m[(int)5] = c;
		HX_STACK_LINE(319)
		result->m[(int)10] = c;
		HX_STACK_LINE(319)
		result->m[(int)9] = -(s);
		HX_STACK_LINE(319)
		result->m[(int)6] = s;
		HX_STACK_LINE(319)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(319)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(319)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(319)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(319)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(319)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(319)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(319)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(319)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(319)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(319)
		result;
	}
	HX_STACK_LINE(321)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,RotationX,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::RotationXToRef( Float angle,::com::gamestudiohx::babylonhx::tools::math::Matrix result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","RotationXToRef",0xa728a7ea,"com.gamestudiohx.babylonhx.tools.math.Matrix.RotationXToRef","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",324,0xadc6fb7d)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(325)
	Float s = ::Math_obj::sin(angle);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(326)
	Float c = ::Math_obj::cos(angle);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(328)
	result->m[(int)0] = 1.0;
	HX_STACK_LINE(329)
	result->m[(int)15] = 1.0;
	HX_STACK_LINE(331)
	result->m[(int)5] = c;
	HX_STACK_LINE(332)
	result->m[(int)10] = c;
	HX_STACK_LINE(333)
	result->m[(int)9] = -(s);
	HX_STACK_LINE(334)
	result->m[(int)6] = s;
	HX_STACK_LINE(336)
	result->m[(int)1] = (int)0;
	HX_STACK_LINE(337)
	result->m[(int)2] = (int)0;
	HX_STACK_LINE(338)
	result->m[(int)3] = (int)0;
	HX_STACK_LINE(339)
	result->m[(int)4] = (int)0;
	HX_STACK_LINE(340)
	result->m[(int)7] = (int)0;
	HX_STACK_LINE(341)
	result->m[(int)8] = (int)0;
	HX_STACK_LINE(342)
	result->m[(int)11] = (int)0;
	HX_STACK_LINE(343)
	result->m[(int)12] = (int)0;
	HX_STACK_LINE(344)
	result->m[(int)13] = (int)0;
	HX_STACK_LINE(345)
	result->m[(int)14] = (int)0;
	HX_STACK_LINE(347)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,RotationXToRef,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::RotationY( Float angle){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","RotationY",0x4c4047cf,"com.gamestudiohx.babylonhx.tools.math.Matrix.RotationY","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",350,0xadc6fb7d)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(351)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(352)
	{
		HX_STACK_LINE(352)
		Float s = ::Math_obj::sin(angle);		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(352)
		Float c = ::Math_obj::cos(angle);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(352)
		result->m[(int)5] = 1.0;
		HX_STACK_LINE(352)
		result->m[(int)15] = 1.0;
		HX_STACK_LINE(352)
		result->m[(int)0] = c;
		HX_STACK_LINE(352)
		result->m[(int)2] = -(s);
		HX_STACK_LINE(352)
		result->m[(int)8] = s;
		HX_STACK_LINE(352)
		result->m[(int)10] = c;
		HX_STACK_LINE(352)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(352)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(352)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(352)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(352)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(352)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(352)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(352)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(352)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(352)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(352)
		result;
	}
	HX_STACK_LINE(354)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,RotationY,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::RotationYToRef( Float angle,::com::gamestudiohx::babylonhx::tools::math::Matrix result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","RotationYToRef",0x0d840449,"com.gamestudiohx.babylonhx.tools.math.Matrix.RotationYToRef","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",357,0xadc6fb7d)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(358)
	Float s = ::Math_obj::sin(angle);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(359)
	Float c = ::Math_obj::cos(angle);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(361)
	result->m[(int)5] = 1.0;
	HX_STACK_LINE(362)
	result->m[(int)15] = 1.0;
	HX_STACK_LINE(364)
	result->m[(int)0] = c;
	HX_STACK_LINE(365)
	result->m[(int)2] = -(s);
	HX_STACK_LINE(366)
	result->m[(int)8] = s;
	HX_STACK_LINE(367)
	result->m[(int)10] = c;
	HX_STACK_LINE(369)
	result->m[(int)1] = (int)0;
	HX_STACK_LINE(370)
	result->m[(int)3] = (int)0;
	HX_STACK_LINE(371)
	result->m[(int)4] = (int)0;
	HX_STACK_LINE(372)
	result->m[(int)6] = (int)0;
	HX_STACK_LINE(373)
	result->m[(int)7] = (int)0;
	HX_STACK_LINE(374)
	result->m[(int)9] = (int)0;
	HX_STACK_LINE(375)
	result->m[(int)11] = (int)0;
	HX_STACK_LINE(376)
	result->m[(int)12] = (int)0;
	HX_STACK_LINE(377)
	result->m[(int)13] = (int)0;
	HX_STACK_LINE(378)
	result->m[(int)14] = (int)0;
	HX_STACK_LINE(380)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,RotationYToRef,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::RotationZ( Float angle){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","RotationZ",0x4c4047d0,"com.gamestudiohx.babylonhx.tools.math.Matrix.RotationZ","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",383,0xadc6fb7d)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(384)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(385)
	{
		HX_STACK_LINE(385)
		Float s = ::Math_obj::sin(angle);		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(385)
		Float c = ::Math_obj::cos(angle);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(385)
		result->m[(int)10] = 1.0;
		HX_STACK_LINE(385)
		result->m[(int)15] = 1.0;
		HX_STACK_LINE(385)
		result->m[(int)0] = c;
		HX_STACK_LINE(385)
		result->m[(int)1] = s;
		HX_STACK_LINE(385)
		result->m[(int)4] = -(s);
		HX_STACK_LINE(385)
		result->m[(int)5] = c;
		HX_STACK_LINE(385)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(385)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(385)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(385)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(385)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(385)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(385)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(385)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(385)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(385)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(385)
		result;
	}
	HX_STACK_LINE(387)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,RotationZ,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::RotationZToRef( Float angle,::com::gamestudiohx::babylonhx::tools::math::Matrix result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","RotationZToRef",0x73df60a8,"com.gamestudiohx.babylonhx.tools.math.Matrix.RotationZToRef","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",390,0xadc6fb7d)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(391)
	Float s = ::Math_obj::sin(angle);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(392)
	Float c = ::Math_obj::cos(angle);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(394)
	result->m[(int)10] = 1.0;
	HX_STACK_LINE(395)
	result->m[(int)15] = 1.0;
	HX_STACK_LINE(397)
	result->m[(int)0] = c;
	HX_STACK_LINE(398)
	result->m[(int)1] = s;
	HX_STACK_LINE(399)
	result->m[(int)4] = -(s);
	HX_STACK_LINE(400)
	result->m[(int)5] = c;
	HX_STACK_LINE(402)
	result->m[(int)2] = (int)0;
	HX_STACK_LINE(403)
	result->m[(int)3] = (int)0;
	HX_STACK_LINE(404)
	result->m[(int)6] = (int)0;
	HX_STACK_LINE(405)
	result->m[(int)7] = (int)0;
	HX_STACK_LINE(406)
	result->m[(int)8] = (int)0;
	HX_STACK_LINE(407)
	result->m[(int)9] = (int)0;
	HX_STACK_LINE(408)
	result->m[(int)11] = (int)0;
	HX_STACK_LINE(409)
	result->m[(int)12] = (int)0;
	HX_STACK_LINE(410)
	result->m[(int)13] = (int)0;
	HX_STACK_LINE(411)
	result->m[(int)14] = (int)0;
	HX_STACK_LINE(413)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,RotationZToRef,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::RotationAxis( ::com::gamestudiohx::babylonhx::tools::math::Vector3 axis,Float angle){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","RotationAxis",0x43378f0b,"com.gamestudiohx.babylonhx.tools.math.Matrix.RotationAxis","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",416,0xadc6fb7d)
	HX_STACK_ARG(axis,"axis")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(417)
	Float s = ::Math_obj::sin(-(angle));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(418)
	Float c = ::Math_obj::cos(-(angle));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(419)
	Float c1 = ((int)1 - c);		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(421)
	{
		HX_STACK_LINE(421)
		Float len = ::Math_obj::sqrt((((axis->x * axis->x) + (axis->y * axis->y)) + (axis->z * axis->z)));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(421)
		if (((len != (int)0))){
			HX_STACK_LINE(421)
			Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(421)
			hx::MultEq(axis->x,num);
			HX_STACK_LINE(421)
			hx::MultEq(axis->y,num);
			HX_STACK_LINE(421)
			hx::MultEq(axis->z,num);
		}
	}
	HX_STACK_LINE(422)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(422)
	{
		HX_STACK_LINE(422)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result1,"result1");
		HX_STACK_LINE(422)
		result1->m[(int)0] = (int)0;
		HX_STACK_LINE(422)
		result1->m[(int)1] = (int)0;
		HX_STACK_LINE(422)
		result1->m[(int)2] = (int)0;
		HX_STACK_LINE(422)
		result1->m[(int)3] = (int)0;
		HX_STACK_LINE(422)
		result1->m[(int)4] = (int)0;
		HX_STACK_LINE(422)
		result1->m[(int)5] = (int)0;
		HX_STACK_LINE(422)
		result1->m[(int)6] = (int)0;
		HX_STACK_LINE(422)
		result1->m[(int)7] = (int)0;
		HX_STACK_LINE(422)
		result1->m[(int)8] = (int)0;
		HX_STACK_LINE(422)
		result1->m[(int)9] = (int)0;
		HX_STACK_LINE(422)
		result1->m[(int)10] = (int)0;
		HX_STACK_LINE(422)
		result1->m[(int)11] = (int)0;
		HX_STACK_LINE(422)
		result1->m[(int)12] = (int)0;
		HX_STACK_LINE(422)
		result1->m[(int)13] = (int)0;
		HX_STACK_LINE(422)
		result1->m[(int)14] = (int)0;
		HX_STACK_LINE(422)
		result1->m[(int)15] = (int)0;
		HX_STACK_LINE(422)
		result = result1;
	}
	HX_STACK_LINE(424)
	result->m[(int)0] = (((axis->x * axis->x) * c1) + c);
	HX_STACK_LINE(425)
	result->m[(int)1] = (((axis->x * axis->y) * c1) - (axis->z * s));
	HX_STACK_LINE(426)
	result->m[(int)2] = (((axis->x * axis->z) * c1) + (axis->y * s));
	HX_STACK_LINE(427)
	result->m[(int)3] = 0.0;
	HX_STACK_LINE(429)
	result->m[(int)4] = (((axis->y * axis->x) * c1) + (axis->z * s));
	HX_STACK_LINE(430)
	result->m[(int)5] = (((axis->y * axis->y) * c1) + c);
	HX_STACK_LINE(431)
	result->m[(int)6] = (((axis->y * axis->z) * c1) - (axis->x * s));
	HX_STACK_LINE(432)
	result->m[(int)7] = 0.0;
	HX_STACK_LINE(434)
	result->m[(int)8] = (((axis->z * axis->x) * c1) - (axis->y * s));
	HX_STACK_LINE(435)
	result->m[(int)9] = (((axis->z * axis->y) * c1) + (axis->x * s));
	HX_STACK_LINE(436)
	result->m[(int)10] = (((axis->z * axis->z) * c1) + c);
	HX_STACK_LINE(437)
	result->m[(int)11] = 0.0;
	HX_STACK_LINE(439)
	result->m[(int)15] = 1.0;
	HX_STACK_LINE(441)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,RotationAxis,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::RotationYawPitchRoll( Float yaw,Float pitch,Float roll){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","RotationYawPitchRoll",0xfa39ac18,"com.gamestudiohx.babylonhx.tools.math.Matrix.RotationYawPitchRoll","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",444,0xadc6fb7d)
	HX_STACK_ARG(yaw,"yaw")
	HX_STACK_ARG(pitch,"pitch")
	HX_STACK_ARG(roll,"roll")
	HX_STACK_LINE(445)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(446)
	{
		HX_STACK_LINE(446)
		::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
		HX_STACK_LINE(446)
		::com::gamestudiohx::babylonhx::tools::math::Quaternion _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			Float halfRoll = (roll * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
			HX_STACK_LINE(446)
			Float halfPitch = (pitch * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
			HX_STACK_LINE(446)
			Float halfYaw = (yaw * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
			HX_STACK_LINE(446)
			Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
			HX_STACK_LINE(446)
			Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
			HX_STACK_LINE(446)
			Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
			HX_STACK_LINE(446)
			Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
			HX_STACK_LINE(446)
			Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
			HX_STACK_LINE(446)
			Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
			HX_STACK_LINE(446)
			tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
			HX_STACK_LINE(446)
			tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
			HX_STACK_LINE(446)
			tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
			HX_STACK_LINE(446)
			tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
			HX_STACK_LINE(446)
			_g = tempQuaternion;
		}
		HX_STACK_LINE(446)
		tempQuaternion = _g;
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(446)
			Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(446)
			Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
			HX_STACK_LINE(446)
			Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
			HX_STACK_LINE(446)
			Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
			HX_STACK_LINE(446)
			Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
			HX_STACK_LINE(446)
			Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
			HX_STACK_LINE(446)
			Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
			HX_STACK_LINE(446)
			Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
			HX_STACK_LINE(446)
			result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
			HX_STACK_LINE(446)
			result->m[(int)1] = (2.0 * ((xy + zw)));
			HX_STACK_LINE(446)
			result->m[(int)2] = (2.0 * ((zx - yw)));
			HX_STACK_LINE(446)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(446)
			result->m[(int)4] = (2.0 * ((xy - zw)));
			HX_STACK_LINE(446)
			result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
			HX_STACK_LINE(446)
			result->m[(int)6] = (2.0 * ((yz + xw)));
			HX_STACK_LINE(446)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(446)
			result->m[(int)8] = (2.0 * ((zx + yw)));
			HX_STACK_LINE(446)
			result->m[(int)9] = (2.0 * ((yz - xw)));
			HX_STACK_LINE(446)
			result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
			HX_STACK_LINE(446)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(446)
			result->m[(int)12] = (int)0;
			HX_STACK_LINE(446)
			result->m[(int)13] = (int)0;
			HX_STACK_LINE(446)
			result->m[(int)14] = (int)0;
			HX_STACK_LINE(446)
			result->m[(int)15] = 1.0;
			HX_STACK_LINE(446)
			result;
		}
	}
	HX_STACK_LINE(448)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,RotationYawPitchRoll,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::RotationYawPitchRollToRef( Float yaw,Float pitch,Float roll,::com::gamestudiohx::babylonhx::tools::math::Matrix result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","RotationYawPitchRollToRef",0xf90d7760,"com.gamestudiohx.babylonhx.tools.math.Matrix.RotationYawPitchRollToRef","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",451,0xadc6fb7d)
	HX_STACK_ARG(yaw,"yaw")
	HX_STACK_ARG(pitch,"pitch")
	HX_STACK_ARG(roll,"roll")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(452)
	::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
	HX_STACK_LINE(453)
	::com::gamestudiohx::babylonhx::tools::math::Quaternion _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(453)
	{
		HX_STACK_LINE(453)
		Float halfRoll = (roll * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
		HX_STACK_LINE(453)
		Float halfPitch = (pitch * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
		HX_STACK_LINE(453)
		Float halfYaw = (yaw * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
		HX_STACK_LINE(453)
		Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
		HX_STACK_LINE(453)
		Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
		HX_STACK_LINE(453)
		Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
		HX_STACK_LINE(453)
		Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
		HX_STACK_LINE(453)
		Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
		HX_STACK_LINE(453)
		Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
		HX_STACK_LINE(453)
		tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
		HX_STACK_LINE(453)
		tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
		HX_STACK_LINE(453)
		tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
		HX_STACK_LINE(453)
		tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
		HX_STACK_LINE(453)
		_g = tempQuaternion;
	}
	HX_STACK_LINE(453)
	tempQuaternion = _g;
	HX_STACK_LINE(455)
	Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
	HX_STACK_LINE(455)
	Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
	HX_STACK_LINE(455)
	Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
	HX_STACK_LINE(455)
	Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
	HX_STACK_LINE(455)
	Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
	HX_STACK_LINE(455)
	Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
	HX_STACK_LINE(455)
	Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
	HX_STACK_LINE(455)
	Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
	HX_STACK_LINE(455)
	Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
	HX_STACK_LINE(455)
	result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
	HX_STACK_LINE(455)
	result->m[(int)1] = (2.0 * ((xy + zw)));
	HX_STACK_LINE(455)
	result->m[(int)2] = (2.0 * ((zx - yw)));
	HX_STACK_LINE(455)
	result->m[(int)3] = (int)0;
	HX_STACK_LINE(455)
	result->m[(int)4] = (2.0 * ((xy - zw)));
	HX_STACK_LINE(455)
	result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
	HX_STACK_LINE(455)
	result->m[(int)6] = (2.0 * ((yz + xw)));
	HX_STACK_LINE(455)
	result->m[(int)7] = (int)0;
	HX_STACK_LINE(455)
	result->m[(int)8] = (2.0 * ((zx + yw)));
	HX_STACK_LINE(455)
	result->m[(int)9] = (2.0 * ((yz - xw)));
	HX_STACK_LINE(455)
	result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
	HX_STACK_LINE(455)
	result->m[(int)11] = (int)0;
	HX_STACK_LINE(455)
	result->m[(int)12] = (int)0;
	HX_STACK_LINE(455)
	result->m[(int)13] = (int)0;
	HX_STACK_LINE(455)
	result->m[(int)14] = (int)0;
	HX_STACK_LINE(455)
	result->m[(int)15] = 1.0;
	HX_STACK_LINE(455)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,RotationYawPitchRollToRef,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::Scaling( Float x,Float y,Float z){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","Scaling",0x5cc717bb,"com.gamestudiohx.babylonhx.tools.math.Matrix.Scaling","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",458,0xadc6fb7d)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(459)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(459)
	{
		HX_STACK_LINE(459)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result1,"result1");
		HX_STACK_LINE(459)
		result1->m[(int)0] = (int)0;
		HX_STACK_LINE(459)
		result1->m[(int)1] = (int)0;
		HX_STACK_LINE(459)
		result1->m[(int)2] = (int)0;
		HX_STACK_LINE(459)
		result1->m[(int)3] = (int)0;
		HX_STACK_LINE(459)
		result1->m[(int)4] = (int)0;
		HX_STACK_LINE(459)
		result1->m[(int)5] = (int)0;
		HX_STACK_LINE(459)
		result1->m[(int)6] = (int)0;
		HX_STACK_LINE(459)
		result1->m[(int)7] = (int)0;
		HX_STACK_LINE(459)
		result1->m[(int)8] = (int)0;
		HX_STACK_LINE(459)
		result1->m[(int)9] = (int)0;
		HX_STACK_LINE(459)
		result1->m[(int)10] = (int)0;
		HX_STACK_LINE(459)
		result1->m[(int)11] = (int)0;
		HX_STACK_LINE(459)
		result1->m[(int)12] = (int)0;
		HX_STACK_LINE(459)
		result1->m[(int)13] = (int)0;
		HX_STACK_LINE(459)
		result1->m[(int)14] = (int)0;
		HX_STACK_LINE(459)
		result1->m[(int)15] = (int)0;
		HX_STACK_LINE(459)
		result = result1;
	}
	HX_STACK_LINE(460)
	{
		HX_STACK_LINE(460)
		result->m[(int)0] = x;
		HX_STACK_LINE(460)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(460)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(460)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(460)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(460)
		result->m[(int)5] = y;
		HX_STACK_LINE(460)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(460)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(460)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(460)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(460)
		result->m[(int)10] = z;
		HX_STACK_LINE(460)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(460)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(460)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(460)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(460)
		result->m[(int)15] = 1.0;
		HX_STACK_LINE(460)
		result;
	}
	HX_STACK_LINE(462)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,Scaling,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::ScalingToRef( Float x,Float y,Float z,::com::gamestudiohx::babylonhx::tools::math::Matrix result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","ScalingToRef",0x9327fcdd,"com.gamestudiohx.babylonhx.tools.math.Matrix.ScalingToRef","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",465,0xadc6fb7d)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(466)
	result->m[(int)0] = x;
	HX_STACK_LINE(467)
	result->m[(int)1] = (int)0;
	HX_STACK_LINE(468)
	result->m[(int)2] = (int)0;
	HX_STACK_LINE(469)
	result->m[(int)3] = (int)0;
	HX_STACK_LINE(470)
	result->m[(int)4] = (int)0;
	HX_STACK_LINE(471)
	result->m[(int)5] = y;
	HX_STACK_LINE(472)
	result->m[(int)6] = (int)0;
	HX_STACK_LINE(473)
	result->m[(int)7] = (int)0;
	HX_STACK_LINE(474)
	result->m[(int)8] = (int)0;
	HX_STACK_LINE(475)
	result->m[(int)9] = (int)0;
	HX_STACK_LINE(476)
	result->m[(int)10] = z;
	HX_STACK_LINE(477)
	result->m[(int)11] = (int)0;
	HX_STACK_LINE(478)
	result->m[(int)12] = (int)0;
	HX_STACK_LINE(479)
	result->m[(int)13] = (int)0;
	HX_STACK_LINE(480)
	result->m[(int)14] = (int)0;
	HX_STACK_LINE(481)
	result->m[(int)15] = 1.0;
	HX_STACK_LINE(483)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,ScalingToRef,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::Translation( Float x,Float y,Float z){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","Translation",0x92e2a465,"com.gamestudiohx.babylonhx.tools.math.Matrix.Translation","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",486,0xadc6fb7d)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(487)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(487)
	{
		HX_STACK_LINE(487)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result1,"result1");
		HX_STACK_LINE(487)
		result1->m[(int)0] = 1.0;
		HX_STACK_LINE(487)
		result1->m[(int)1] = (int)0;
		HX_STACK_LINE(487)
		result1->m[(int)2] = (int)0;
		HX_STACK_LINE(487)
		result1->m[(int)3] = (int)0;
		HX_STACK_LINE(487)
		result1->m[(int)4] = (int)0;
		HX_STACK_LINE(487)
		result1->m[(int)5] = 1.0;
		HX_STACK_LINE(487)
		result1->m[(int)6] = (int)0;
		HX_STACK_LINE(487)
		result1->m[(int)7] = (int)0;
		HX_STACK_LINE(487)
		result1->m[(int)8] = (int)0;
		HX_STACK_LINE(487)
		result1->m[(int)9] = (int)0;
		HX_STACK_LINE(487)
		result1->m[(int)10] = 1.0;
		HX_STACK_LINE(487)
		result1->m[(int)11] = (int)0;
		HX_STACK_LINE(487)
		result1->m[(int)12] = (int)0;
		HX_STACK_LINE(487)
		result1->m[(int)13] = (int)0;
		HX_STACK_LINE(487)
		result1->m[(int)14] = (int)0;
		HX_STACK_LINE(487)
		result1->m[(int)15] = 1.0;
		HX_STACK_LINE(487)
		result = result1;
	}
	HX_STACK_LINE(488)
	{
		HX_STACK_LINE(488)
		result->m[(int)0] = 1.0;
		HX_STACK_LINE(488)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(488)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(488)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(488)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(488)
		result->m[(int)5] = 1.0;
		HX_STACK_LINE(488)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(488)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(488)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(488)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(488)
		result->m[(int)10] = 1.0;
		HX_STACK_LINE(488)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(488)
		result->m[(int)12] = x;
		HX_STACK_LINE(488)
		result->m[(int)13] = y;
		HX_STACK_LINE(488)
		result->m[(int)14] = z;
		HX_STACK_LINE(488)
		result->m[(int)15] = 1.0;
		HX_STACK_LINE(488)
		result;
	}
	HX_STACK_LINE(490)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,Translation,return )

Void Matrix_obj::TranslationToRef( Float x,Float y,Float z,::com::gamestudiohx::babylonhx::tools::math::Matrix result){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","TranslationToRef",0x4a5c47f3,"com.gamestudiohx.babylonhx.tools.math.Matrix.TranslationToRef","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",494,0xadc6fb7d)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(494)
		result->m[(int)0] = 1.0;
		HX_STACK_LINE(494)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(494)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(494)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(494)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(494)
		result->m[(int)5] = 1.0;
		HX_STACK_LINE(494)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(494)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(494)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(494)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(494)
		result->m[(int)10] = 1.0;
		HX_STACK_LINE(494)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(494)
		result->m[(int)12] = x;
		HX_STACK_LINE(494)
		result->m[(int)13] = y;
		HX_STACK_LINE(494)
		result->m[(int)14] = z;
		HX_STACK_LINE(494)
		result->m[(int)15] = 1.0;
		HX_STACK_LINE(498)
		result;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,TranslationToRef,(void))

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::LookAtLH( ::com::gamestudiohx::babylonhx::tools::math::Vector3 eye,::com::gamestudiohx::babylonhx::tools::math::Vector3 target,::com::gamestudiohx::babylonhx::tools::math::Vector3 up){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","LookAtLH",0x1f3a843a,"com.gamestudiohx.babylonhx.tools.math.Matrix.LookAtLH","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",502,0xadc6fb7d)
	HX_STACK_ARG(eye,"eye")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(up,"up")
	HX_STACK_LINE(503)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(503)
	{
		HX_STACK_LINE(503)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result1,"result1");
		HX_STACK_LINE(503)
		result1->m[(int)0] = (int)0;
		HX_STACK_LINE(503)
		result1->m[(int)1] = (int)0;
		HX_STACK_LINE(503)
		result1->m[(int)2] = (int)0;
		HX_STACK_LINE(503)
		result1->m[(int)3] = (int)0;
		HX_STACK_LINE(503)
		result1->m[(int)4] = (int)0;
		HX_STACK_LINE(503)
		result1->m[(int)5] = (int)0;
		HX_STACK_LINE(503)
		result1->m[(int)6] = (int)0;
		HX_STACK_LINE(503)
		result1->m[(int)7] = (int)0;
		HX_STACK_LINE(503)
		result1->m[(int)8] = (int)0;
		HX_STACK_LINE(503)
		result1->m[(int)9] = (int)0;
		HX_STACK_LINE(503)
		result1->m[(int)10] = (int)0;
		HX_STACK_LINE(503)
		result1->m[(int)11] = (int)0;
		HX_STACK_LINE(503)
		result1->m[(int)12] = (int)0;
		HX_STACK_LINE(503)
		result1->m[(int)13] = (int)0;
		HX_STACK_LINE(503)
		result1->m[(int)14] = (int)0;
		HX_STACK_LINE(503)
		result1->m[(int)15] = (int)0;
		HX_STACK_LINE(503)
		result = result1;
	}
	HX_STACK_LINE(504)
	{
		HX_STACK_LINE(504)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
		HX_STACK_LINE(504)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
		HX_STACK_LINE(504)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			zAxis->x = (target->x - eye->x);
			HX_STACK_LINE(504)
			zAxis->y = (target->y - eye->y);
			HX_STACK_LINE(504)
			zAxis->z = (target->z - eye->z);
		}
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(504)
			if (((len != (int)0))){
				HX_STACK_LINE(504)
				Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(504)
				hx::MultEq(zAxis->x,num);
				HX_STACK_LINE(504)
				hx::MultEq(zAxis->y,num);
				HX_STACK_LINE(504)
				hx::MultEq(zAxis->z,num);
			}
		}
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
			HX_STACK_LINE(504)
			xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
			HX_STACK_LINE(504)
			xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
		}
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(504)
			if (((len != (int)0))){
				HX_STACK_LINE(504)
				Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(504)
				hx::MultEq(xAxis->x,num);
				HX_STACK_LINE(504)
				hx::MultEq(xAxis->y,num);
				HX_STACK_LINE(504)
				hx::MultEq(xAxis->z,num);
			}
		}
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
			HX_STACK_LINE(504)
			yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
			HX_STACK_LINE(504)
			yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
		}
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(504)
			if (((len != (int)0))){
				HX_STACK_LINE(504)
				Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(504)
				hx::MultEq(yAxis->x,num);
				HX_STACK_LINE(504)
				hx::MultEq(yAxis->y,num);
				HX_STACK_LINE(504)
				hx::MultEq(yAxis->z,num);
			}
		}
		HX_STACK_LINE(504)
		Float ex = -(((((xAxis->x * eye->x) + (xAxis->y * eye->y)) + (xAxis->z * eye->z))));		HX_STACK_VAR(ex,"ex");
		HX_STACK_LINE(504)
		Float ey = -(((((yAxis->x * eye->x) + (yAxis->y * eye->y)) + (yAxis->z * eye->z))));		HX_STACK_VAR(ey,"ey");
		HX_STACK_LINE(504)
		Float ez = -(((((zAxis->x * eye->x) + (zAxis->y * eye->y)) + (zAxis->z * eye->z))));		HX_STACK_VAR(ez,"ez");
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			result->m[(int)0] = xAxis->x;
			HX_STACK_LINE(504)
			result->m[(int)1] = yAxis->x;
			HX_STACK_LINE(504)
			result->m[(int)2] = zAxis->x;
			HX_STACK_LINE(504)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(504)
			result->m[(int)4] = xAxis->y;
			HX_STACK_LINE(504)
			result->m[(int)5] = yAxis->y;
			HX_STACK_LINE(504)
			result->m[(int)6] = zAxis->y;
			HX_STACK_LINE(504)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(504)
			result->m[(int)8] = xAxis->z;
			HX_STACK_LINE(504)
			result->m[(int)9] = yAxis->z;
			HX_STACK_LINE(504)
			result->m[(int)10] = zAxis->z;
			HX_STACK_LINE(504)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(504)
			result->m[(int)12] = ex;
			HX_STACK_LINE(504)
			result->m[(int)13] = ey;
			HX_STACK_LINE(504)
			result->m[(int)14] = ez;
			HX_STACK_LINE(504)
			result->m[(int)15] = (int)1;
			HX_STACK_LINE(504)
			result;
		}
	}
	HX_STACK_LINE(506)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,LookAtLH,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::LookAtLHToRef( ::com::gamestudiohx::babylonhx::tools::math::Vector3 eye,::com::gamestudiohx::babylonhx::tools::math::Vector3 target,::com::gamestudiohx::babylonhx::tools::math::Vector3 up,::com::gamestudiohx::babylonhx::tools::math::Matrix result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","LookAtLHToRef",0x621fe3fe,"com.gamestudiohx.babylonhx.tools.math.Matrix.LookAtLHToRef","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",509,0xadc6fb7d)
	HX_STACK_ARG(eye,"eye")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(up,"up")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(510)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
	HX_STACK_LINE(511)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
	HX_STACK_LINE(512)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
	HX_STACK_LINE(515)
	{
		HX_STACK_LINE(515)
		zAxis->x = (target->x - eye->x);
		HX_STACK_LINE(515)
		zAxis->y = (target->y - eye->y);
		HX_STACK_LINE(515)
		zAxis->z = (target->z - eye->z);
	}
	HX_STACK_LINE(516)
	{
		HX_STACK_LINE(516)
		Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(516)
		if (((len != (int)0))){
			HX_STACK_LINE(516)
			Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(516)
			hx::MultEq(zAxis->x,num);
			HX_STACK_LINE(516)
			hx::MultEq(zAxis->y,num);
			HX_STACK_LINE(516)
			hx::MultEq(zAxis->z,num);
		}
	}
	HX_STACK_LINE(519)
	{
		HX_STACK_LINE(519)
		xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
		HX_STACK_LINE(519)
		xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
		HX_STACK_LINE(519)
		xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
	}
	HX_STACK_LINE(520)
	{
		HX_STACK_LINE(520)
		Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(520)
		if (((len != (int)0))){
			HX_STACK_LINE(520)
			Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(520)
			hx::MultEq(xAxis->x,num);
			HX_STACK_LINE(520)
			hx::MultEq(xAxis->y,num);
			HX_STACK_LINE(520)
			hx::MultEq(xAxis->z,num);
		}
	}
	HX_STACK_LINE(523)
	{
		HX_STACK_LINE(523)
		yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
		HX_STACK_LINE(523)
		yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
		HX_STACK_LINE(523)
		yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
	}
	HX_STACK_LINE(524)
	{
		HX_STACK_LINE(524)
		Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(524)
		if (((len != (int)0))){
			HX_STACK_LINE(524)
			Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(524)
			hx::MultEq(yAxis->x,num);
			HX_STACK_LINE(524)
			hx::MultEq(yAxis->y,num);
			HX_STACK_LINE(524)
			hx::MultEq(yAxis->z,num);
		}
	}
	HX_STACK_LINE(527)
	Float ex = -(((((xAxis->x * eye->x) + (xAxis->y * eye->y)) + (xAxis->z * eye->z))));		HX_STACK_VAR(ex,"ex");
	HX_STACK_LINE(528)
	Float ey = -(((((yAxis->x * eye->x) + (yAxis->y * eye->y)) + (yAxis->z * eye->z))));		HX_STACK_VAR(ey,"ey");
	HX_STACK_LINE(529)
	Float ez = -(((((zAxis->x * eye->x) + (zAxis->y * eye->y)) + (zAxis->z * eye->z))));		HX_STACK_VAR(ez,"ez");
	HX_STACK_LINE(531)
	result->m[(int)0] = xAxis->x;
	HX_STACK_LINE(531)
	result->m[(int)1] = yAxis->x;
	HX_STACK_LINE(531)
	result->m[(int)2] = zAxis->x;
	HX_STACK_LINE(531)
	result->m[(int)3] = (int)0;
	HX_STACK_LINE(531)
	result->m[(int)4] = xAxis->y;
	HX_STACK_LINE(531)
	result->m[(int)5] = yAxis->y;
	HX_STACK_LINE(531)
	result->m[(int)6] = zAxis->y;
	HX_STACK_LINE(531)
	result->m[(int)7] = (int)0;
	HX_STACK_LINE(531)
	result->m[(int)8] = xAxis->z;
	HX_STACK_LINE(531)
	result->m[(int)9] = yAxis->z;
	HX_STACK_LINE(531)
	result->m[(int)10] = zAxis->z;
	HX_STACK_LINE(531)
	result->m[(int)11] = (int)0;
	HX_STACK_LINE(531)
	result->m[(int)12] = ex;
	HX_STACK_LINE(531)
	result->m[(int)13] = ey;
	HX_STACK_LINE(531)
	result->m[(int)14] = ez;
	HX_STACK_LINE(531)
	result->m[(int)15] = (int)1;
	HX_STACK_LINE(534)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,LookAtLHToRef,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::OrthoLH( Float width,Float height,Float znear,Float zfar){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","OrthoLH",0xa3c84128,"com.gamestudiohx.babylonhx.tools.math.Matrix.OrthoLH","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",537,0xadc6fb7d)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(znear,"znear")
	HX_STACK_ARG(zfar,"zfar")
	HX_STACK_LINE(538)
	Float hw = (Float(2.0) / Float(width));		HX_STACK_VAR(hw,"hw");
	HX_STACK_LINE(539)
	Float hh = (Float(2.0) / Float(height));		HX_STACK_VAR(hh,"hh");
	HX_STACK_LINE(540)
	Float id = (Float(1.0) / Float(((zfar - znear))));		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(541)
	Float nid = (Float(znear) / Float(((znear - zfar))));		HX_STACK_VAR(nid,"nid");
	HX_STACK_LINE(543)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(543)
	result->m[(int)0] = hw;
	HX_STACK_LINE(543)
	result->m[(int)1] = (int)0;
	HX_STACK_LINE(543)
	result->m[(int)2] = (int)0;
	HX_STACK_LINE(543)
	result->m[(int)3] = (int)0;
	HX_STACK_LINE(543)
	result->m[(int)4] = (int)0;
	HX_STACK_LINE(543)
	result->m[(int)5] = hh;
	HX_STACK_LINE(543)
	result->m[(int)6] = (int)0;
	HX_STACK_LINE(543)
	result->m[(int)7] = (int)0;
	HX_STACK_LINE(543)
	result->m[(int)8] = (int)0;
	HX_STACK_LINE(543)
	result->m[(int)9] = (int)0;
	HX_STACK_LINE(543)
	result->m[(int)10] = id;
	HX_STACK_LINE(543)
	result->m[(int)11] = (int)0;
	HX_STACK_LINE(543)
	result->m[(int)12] = (int)0;
	HX_STACK_LINE(543)
	result->m[(int)13] = (int)0;
	HX_STACK_LINE(543)
	result->m[(int)14] = nid;
	HX_STACK_LINE(543)
	result->m[(int)15] = (int)1;
	HX_STACK_LINE(543)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,OrthoLH,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::OrthoOffCenterLH( Float left,Float right,Float bottom,Float top,Float znear,Float zfar){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","OrthoOffCenterLH",0x17d181d4,"com.gamestudiohx.babylonhx.tools.math.Matrix.OrthoOffCenterLH","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",551,0xadc6fb7d)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_ARG(bottom,"bottom")
	HX_STACK_ARG(top,"top")
	HX_STACK_ARG(znear,"znear")
	HX_STACK_ARG(zfar,"zfar")
	HX_STACK_LINE(552)
	::com::gamestudiohx::babylonhx::tools::math::Matrix matrix;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(552)
	{
		HX_STACK_LINE(552)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(552)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(552)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(552)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(552)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(552)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(552)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(552)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(552)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(552)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(552)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(552)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(552)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(552)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(552)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(552)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(552)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(552)
		matrix = result;
	}
	HX_STACK_LINE(553)
	{
		HX_STACK_LINE(553)
		matrix->m[(int)0] = (Float(2.0) / Float(((right - left))));
		HX_STACK_LINE(553)
		matrix->m[(int)1] = matrix->m[(int)2] = matrix->m[(int)3] = matrix->m[(int)4] = (int)0;
		HX_STACK_LINE(553)
		matrix->m[(int)5] = (Float(2.0) / Float(((top - bottom))));
		HX_STACK_LINE(553)
		matrix->m[(int)6] = matrix->m[(int)7] = (int)0;
		HX_STACK_LINE(553)
		matrix->m[(int)8] = matrix->m[(int)9] = (int)0;
		HX_STACK_LINE(553)
		matrix->m[(int)10] = (Float((int)-1) / Float(((znear - zfar))));
		HX_STACK_LINE(553)
		matrix->m[(int)11] = (int)0;
		HX_STACK_LINE(553)
		matrix->m[(int)12] = (Float(((left + right))) / Float(((left - right))));
		HX_STACK_LINE(553)
		matrix->m[(int)13] = (Float(((top + bottom))) / Float(((bottom - top))));
		HX_STACK_LINE(553)
		matrix->m[(int)14] = (Float(znear) / Float(((znear - zfar))));
		HX_STACK_LINE(553)
		matrix->m[(int)15] = 1.0;
		HX_STACK_LINE(553)
		matrix;
	}
	HX_STACK_LINE(555)
	return matrix;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix_obj,OrthoOffCenterLH,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::OrthoOffCenterLHToRef( Float left,Float right,Float bottom,Float top,Float znear,Float zfar,::com::gamestudiohx::babylonhx::tools::math::Matrix result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","OrthoOffCenterLHToRef",0x67095824,"com.gamestudiohx.babylonhx.tools.math.Matrix.OrthoOffCenterLHToRef","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",558,0xadc6fb7d)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_ARG(bottom,"bottom")
	HX_STACK_ARG(top,"top")
	HX_STACK_ARG(znear,"znear")
	HX_STACK_ARG(zfar,"zfar")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(559)
	result->m[(int)0] = (Float(2.0) / Float(((right - left))));
	HX_STACK_LINE(560)
	result->m[(int)1] = result->m[(int)2] = result->m[(int)3] = result->m[(int)4] = (int)0;
	HX_STACK_LINE(561)
	result->m[(int)5] = (Float(2.0) / Float(((top - bottom))));
	HX_STACK_LINE(562)
	result->m[(int)6] = result->m[(int)7] = (int)0;
	HX_STACK_LINE(563)
	result->m[(int)8] = result->m[(int)9] = (int)0;
	HX_STACK_LINE(564)
	result->m[(int)10] = (Float((int)-1) / Float(((znear - zfar))));
	HX_STACK_LINE(565)
	result->m[(int)11] = (int)0;
	HX_STACK_LINE(566)
	result->m[(int)12] = (Float(((left + right))) / Float(((left - right))));
	HX_STACK_LINE(567)
	result->m[(int)13] = (Float(((top + bottom))) / Float(((bottom - top))));
	HX_STACK_LINE(568)
	result->m[(int)14] = (Float(znear) / Float(((znear - zfar))));
	HX_STACK_LINE(569)
	result->m[(int)15] = 1.0;
	HX_STACK_LINE(572)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Matrix_obj,OrthoOffCenterLHToRef,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::PerspectiveLH( Float width,Float height,Float znear,Float zfar){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","PerspectiveLH",0x3d2eb76c,"com.gamestudiohx.babylonhx.tools.math.Matrix.PerspectiveLH","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",575,0xadc6fb7d)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(znear,"znear")
	HX_STACK_ARG(zfar,"zfar")
	HX_STACK_LINE(576)
	::com::gamestudiohx::babylonhx::tools::math::Matrix matrix;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(576)
	{
		HX_STACK_LINE(576)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(576)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(576)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(576)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(576)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(576)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(576)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(576)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(576)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(576)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(576)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(576)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(576)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(576)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(576)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(576)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(576)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(576)
		matrix = result;
	}
	HX_STACK_LINE(578)
	matrix->m[(int)0] = (Float((2.0 * znear)) / Float(width));
	HX_STACK_LINE(579)
	matrix->m[(int)1] = matrix->m[(int)2] = matrix->m[(int)3] = 0.0;
	HX_STACK_LINE(580)
	matrix->m[(int)5] = (Float((2.0 * znear)) / Float(height));
	HX_STACK_LINE(581)
	matrix->m[(int)4] = matrix->m[(int)6] = matrix->m[(int)7] = 0.0;
	HX_STACK_LINE(582)
	matrix->m[(int)10] = (Float(-(zfar)) / Float(((znear - zfar))));
	HX_STACK_LINE(583)
	matrix->m[(int)8] = matrix->m[(int)9] = 0.0;
	HX_STACK_LINE(584)
	matrix->m[(int)11] = 1.0;
	HX_STACK_LINE(585)
	matrix->m[(int)12] = matrix->m[(int)13] = matrix->m[(int)15] = 0.0;
	HX_STACK_LINE(586)
	matrix->m[(int)14] = (Float((znear * zfar)) / Float(((znear - zfar))));
	HX_STACK_LINE(588)
	return matrix;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,PerspectiveLH,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::PerspectiveFovLH( Float fov,Float aspect,Float znear,Float zfar){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","PerspectiveFovLH",0x96ba57b9,"com.gamestudiohx.babylonhx.tools.math.Matrix.PerspectiveFovLH","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",591,0xadc6fb7d)
	HX_STACK_ARG(fov,"fov")
	HX_STACK_ARG(aspect,"aspect")
	HX_STACK_ARG(znear,"znear")
	HX_STACK_ARG(zfar,"zfar")
	HX_STACK_LINE(592)
	::com::gamestudiohx::babylonhx::tools::math::Matrix matrix;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(592)
	{
		HX_STACK_LINE(592)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(592)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(592)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(592)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(592)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(592)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(592)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(592)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(592)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(592)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(592)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(592)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(592)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(592)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(592)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(592)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(592)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(592)
		matrix = result;
	}
	HX_STACK_LINE(593)
	{
		HX_STACK_LINE(593)
		Float _g = ::Math_obj::tan((fov * 0.5));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(593)
		Float tan = (Float(1.0) / Float(_g));		HX_STACK_VAR(tan,"tan");
		HX_STACK_LINE(593)
		matrix->m[(int)0] = (Float(tan) / Float(aspect));
		HX_STACK_LINE(593)
		matrix->m[(int)1] = matrix->m[(int)2] = matrix->m[(int)3] = 0.0;
		HX_STACK_LINE(593)
		matrix->m[(int)5] = tan;
		HX_STACK_LINE(593)
		matrix->m[(int)4] = matrix->m[(int)6] = matrix->m[(int)7] = 0.0;
		HX_STACK_LINE(593)
		matrix->m[(int)8] = matrix->m[(int)9] = 0.0;
		HX_STACK_LINE(593)
		matrix->m[(int)10] = (Float(-(zfar)) / Float(((znear - zfar))));
		HX_STACK_LINE(593)
		matrix->m[(int)11] = 1.0;
		HX_STACK_LINE(593)
		matrix->m[(int)12] = matrix->m[(int)13] = matrix->m[(int)15] = 0.0;
		HX_STACK_LINE(593)
		matrix->m[(int)14] = (Float((znear * zfar)) / Float(((znear - zfar))));
		HX_STACK_LINE(593)
		matrix;
	}
	HX_STACK_LINE(595)
	return matrix;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,PerspectiveFovLH,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::PerspectiveFovLHToRef( Float fov,Float aspect,Float znear,Float zfar,::com::gamestudiohx::babylonhx::tools::math::Matrix result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","PerspectiveFovLHToRef",0x72b6041f,"com.gamestudiohx.babylonhx.tools.math.Matrix.PerspectiveFovLHToRef","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",598,0xadc6fb7d)
	HX_STACK_ARG(fov,"fov")
	HX_STACK_ARG(aspect,"aspect")
	HX_STACK_ARG(znear,"znear")
	HX_STACK_ARG(zfar,"zfar")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(599)
	Float _g = ::Math_obj::tan((fov * 0.5));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(599)
	Float tan = (Float(1.0) / Float(_g));		HX_STACK_VAR(tan,"tan");
	HX_STACK_LINE(601)
	result->m[(int)0] = (Float(tan) / Float(aspect));
	HX_STACK_LINE(602)
	result->m[(int)1] = result->m[(int)2] = result->m[(int)3] = 0.0;
	HX_STACK_LINE(603)
	result->m[(int)5] = tan;
	HX_STACK_LINE(604)
	result->m[(int)4] = result->m[(int)6] = result->m[(int)7] = 0.0;
	HX_STACK_LINE(605)
	result->m[(int)8] = result->m[(int)9] = 0.0;
	HX_STACK_LINE(606)
	result->m[(int)10] = (Float(-(zfar)) / Float(((znear - zfar))));
	HX_STACK_LINE(607)
	result->m[(int)11] = 1.0;
	HX_STACK_LINE(608)
	result->m[(int)12] = result->m[(int)13] = result->m[(int)15] = 0.0;
	HX_STACK_LINE(609)
	result->m[(int)14] = (Float((znear * zfar)) / Float(((znear - zfar))));
	HX_STACK_LINE(611)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,PerspectiveFovLHToRef,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::GetFinalMatrix( ::com::gamestudiohx::babylonhx::tools::math::Viewport viewport,::com::gamestudiohx::babylonhx::tools::math::Matrix world,::com::gamestudiohx::babylonhx::tools::math::Matrix view,::com::gamestudiohx::babylonhx::tools::math::Matrix projection,Float zmin,Float zmax){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","GetFinalMatrix",0x7a01866d,"com.gamestudiohx.babylonhx.tools.math.Matrix.GetFinalMatrix","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",619,0xadc6fb7d)
	HX_STACK_ARG(viewport,"viewport")
	HX_STACK_ARG(world,"world")
	HX_STACK_ARG(view,"view")
	HX_STACK_ARG(projection,"projection")
	HX_STACK_ARG(zmin,"zmin")
	HX_STACK_ARG(zmax,"zmax")
	HX_STACK_LINE(620)
	Float cw = viewport->width;		HX_STACK_VAR(cw,"cw");
	HX_STACK_LINE(621)
	Float ch = viewport->height;		HX_STACK_VAR(ch,"ch");
	HX_STACK_LINE(622)
	Float cx = viewport->x;		HX_STACK_VAR(cx,"cx");
	HX_STACK_LINE(623)
	Float cy = viewport->y;		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(625)
	::com::gamestudiohx::babylonhx::tools::math::Matrix viewportMatrix;		HX_STACK_VAR(viewportMatrix,"viewportMatrix");
	HX_STACK_LINE(625)
	{
		HX_STACK_LINE(625)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(625)
		result->m[(int)0] = (Float(cw) / Float(2.0));
		HX_STACK_LINE(625)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(625)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(625)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(625)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(625)
		result->m[(int)5] = (Float(-(ch)) / Float(2.0));
		HX_STACK_LINE(625)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(625)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(625)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(625)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(625)
		result->m[(int)10] = (zmax - zmin);
		HX_STACK_LINE(625)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(625)
		result->m[(int)12] = (cx + (Float(cw) / Float(2.0)));
		HX_STACK_LINE(625)
		result->m[(int)13] = ((Float(ch) / Float(2.0)) + cy);
		HX_STACK_LINE(625)
		result->m[(int)14] = zmin;
		HX_STACK_LINE(625)
		result->m[(int)15] = (int)1;
		HX_STACK_LINE(625)
		viewportMatrix = result;
	}
	HX_STACK_LINE(632)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _this;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(632)
	{
		HX_STACK_LINE(632)
		::com::gamestudiohx::babylonhx::tools::math::Matrix _this1;		HX_STACK_VAR(_this1,"_this1");
		HX_STACK_LINE(632)
		{
			HX_STACK_LINE(632)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(632)
			{
				HX_STACK_LINE(632)
				Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
				HX_STACK_LINE(632)
				Float tm0 = world->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
				HX_STACK_LINE(632)
				Float tm1 = world->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
				HX_STACK_LINE(632)
				Float tm2 = world->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
				HX_STACK_LINE(632)
				Float tm3 = world->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
				HX_STACK_LINE(632)
				Float tm4 = world->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
				HX_STACK_LINE(632)
				Float tm5 = world->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
				HX_STACK_LINE(632)
				Float tm6 = world->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
				HX_STACK_LINE(632)
				Float tm7 = world->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
				HX_STACK_LINE(632)
				Float tm8 = world->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
				HX_STACK_LINE(632)
				Float tm9 = world->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
				HX_STACK_LINE(632)
				Float tm10 = world->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
				HX_STACK_LINE(632)
				Float tm11 = world->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
				HX_STACK_LINE(632)
				Float tm12 = world->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
				HX_STACK_LINE(632)
				Float tm13 = world->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
				HX_STACK_LINE(632)
				Float tm14 = world->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
				HX_STACK_LINE(632)
				Float tm15 = world->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
				HX_STACK_LINE(632)
				Float om0 = view->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
				HX_STACK_LINE(632)
				Float om1 = view->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
				HX_STACK_LINE(632)
				Float om2 = view->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
				HX_STACK_LINE(632)
				Float om3 = view->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
				HX_STACK_LINE(632)
				Float om4 = view->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
				HX_STACK_LINE(632)
				Float om5 = view->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
				HX_STACK_LINE(632)
				Float om6 = view->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
				HX_STACK_LINE(632)
				Float om7 = view->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
				HX_STACK_LINE(632)
				Float om8 = view->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
				HX_STACK_LINE(632)
				Float om9 = view->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
				HX_STACK_LINE(632)
				Float om10 = view->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
				HX_STACK_LINE(632)
				Float om11 = view->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
				HX_STACK_LINE(632)
				Float om12 = view->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
				HX_STACK_LINE(632)
				Float om13 = view->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
				HX_STACK_LINE(632)
				Float om14 = view->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
				HX_STACK_LINE(632)
				Float om15 = view->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
				HX_STACK_LINE(632)
				result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
				HX_STACK_LINE(632)
				result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
				HX_STACK_LINE(632)
				result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
				HX_STACK_LINE(632)
				result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
				HX_STACK_LINE(632)
				result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
				HX_STACK_LINE(632)
				result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
				HX_STACK_LINE(632)
				result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
				HX_STACK_LINE(632)
				result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
				HX_STACK_LINE(632)
				result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
				HX_STACK_LINE(632)
				result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
				HX_STACK_LINE(632)
				result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
				HX_STACK_LINE(632)
				result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
				HX_STACK_LINE(632)
				result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
				HX_STACK_LINE(632)
				result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
				HX_STACK_LINE(632)
				result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
				HX_STACK_LINE(632)
				result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
				HX_STACK_LINE(632)
				result1;
			}
			HX_STACK_LINE(632)
			_this1 = result;
		}
		HX_STACK_LINE(632)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(632)
		{
			HX_STACK_LINE(632)
			Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
			HX_STACK_LINE(632)
			Float tm0 = _this1->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
			HX_STACK_LINE(632)
			Float tm1 = _this1->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
			HX_STACK_LINE(632)
			Float tm2 = _this1->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
			HX_STACK_LINE(632)
			Float tm3 = _this1->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
			HX_STACK_LINE(632)
			Float tm4 = _this1->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
			HX_STACK_LINE(632)
			Float tm5 = _this1->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
			HX_STACK_LINE(632)
			Float tm6 = _this1->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
			HX_STACK_LINE(632)
			Float tm7 = _this1->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
			HX_STACK_LINE(632)
			Float tm8 = _this1->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
			HX_STACK_LINE(632)
			Float tm9 = _this1->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
			HX_STACK_LINE(632)
			Float tm10 = _this1->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
			HX_STACK_LINE(632)
			Float tm11 = _this1->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
			HX_STACK_LINE(632)
			Float tm12 = _this1->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
			HX_STACK_LINE(632)
			Float tm13 = _this1->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
			HX_STACK_LINE(632)
			Float tm14 = _this1->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
			HX_STACK_LINE(632)
			Float tm15 = _this1->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
			HX_STACK_LINE(632)
			Float om0 = projection->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
			HX_STACK_LINE(632)
			Float om1 = projection->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
			HX_STACK_LINE(632)
			Float om2 = projection->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
			HX_STACK_LINE(632)
			Float om3 = projection->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
			HX_STACK_LINE(632)
			Float om4 = projection->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
			HX_STACK_LINE(632)
			Float om5 = projection->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
			HX_STACK_LINE(632)
			Float om6 = projection->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
			HX_STACK_LINE(632)
			Float om7 = projection->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
			HX_STACK_LINE(632)
			Float om8 = projection->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
			HX_STACK_LINE(632)
			Float om9 = projection->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
			HX_STACK_LINE(632)
			Float om10 = projection->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
			HX_STACK_LINE(632)
			Float om11 = projection->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
			HX_STACK_LINE(632)
			Float om12 = projection->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
			HX_STACK_LINE(632)
			Float om13 = projection->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
			HX_STACK_LINE(632)
			Float om14 = projection->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
			HX_STACK_LINE(632)
			Float om15 = projection->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
			HX_STACK_LINE(632)
			result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
			HX_STACK_LINE(632)
			result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
			HX_STACK_LINE(632)
			result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
			HX_STACK_LINE(632)
			result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
			HX_STACK_LINE(632)
			result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
			HX_STACK_LINE(632)
			result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
			HX_STACK_LINE(632)
			result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
			HX_STACK_LINE(632)
			result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
			HX_STACK_LINE(632)
			result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
			HX_STACK_LINE(632)
			result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
			HX_STACK_LINE(632)
			result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
			HX_STACK_LINE(632)
			result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
			HX_STACK_LINE(632)
			result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
			HX_STACK_LINE(632)
			result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
			HX_STACK_LINE(632)
			result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
			HX_STACK_LINE(632)
			result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
			HX_STACK_LINE(632)
			result1;
		}
		HX_STACK_LINE(632)
		_this = result;
	}
	HX_STACK_LINE(632)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(632)
	{
		HX_STACK_LINE(632)
		Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
		HX_STACK_LINE(632)
		Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
		HX_STACK_LINE(632)
		Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
		HX_STACK_LINE(632)
		Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
		HX_STACK_LINE(632)
		Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
		HX_STACK_LINE(632)
		Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
		HX_STACK_LINE(632)
		Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
		HX_STACK_LINE(632)
		Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
		HX_STACK_LINE(632)
		Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
		HX_STACK_LINE(632)
		Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
		HX_STACK_LINE(632)
		Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
		HX_STACK_LINE(632)
		Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
		HX_STACK_LINE(632)
		Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
		HX_STACK_LINE(632)
		Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
		HX_STACK_LINE(632)
		Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
		HX_STACK_LINE(632)
		Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
		HX_STACK_LINE(632)
		Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
		HX_STACK_LINE(632)
		Float om0 = viewportMatrix->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
		HX_STACK_LINE(632)
		Float om1 = viewportMatrix->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
		HX_STACK_LINE(632)
		Float om2 = viewportMatrix->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
		HX_STACK_LINE(632)
		Float om3 = viewportMatrix->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
		HX_STACK_LINE(632)
		Float om4 = viewportMatrix->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
		HX_STACK_LINE(632)
		Float om5 = viewportMatrix->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
		HX_STACK_LINE(632)
		Float om6 = viewportMatrix->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
		HX_STACK_LINE(632)
		Float om7 = viewportMatrix->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
		HX_STACK_LINE(632)
		Float om8 = viewportMatrix->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
		HX_STACK_LINE(632)
		Float om9 = viewportMatrix->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
		HX_STACK_LINE(632)
		Float om10 = viewportMatrix->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
		HX_STACK_LINE(632)
		Float om11 = viewportMatrix->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
		HX_STACK_LINE(632)
		Float om12 = viewportMatrix->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
		HX_STACK_LINE(632)
		Float om13 = viewportMatrix->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
		HX_STACK_LINE(632)
		Float om14 = viewportMatrix->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
		HX_STACK_LINE(632)
		Float om15 = viewportMatrix->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
		HX_STACK_LINE(632)
		result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
		HX_STACK_LINE(632)
		result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
		HX_STACK_LINE(632)
		result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
		HX_STACK_LINE(632)
		result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
		HX_STACK_LINE(632)
		result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
		HX_STACK_LINE(632)
		result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
		HX_STACK_LINE(632)
		result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
		HX_STACK_LINE(632)
		result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
		HX_STACK_LINE(632)
		result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
		HX_STACK_LINE(632)
		result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
		HX_STACK_LINE(632)
		result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
		HX_STACK_LINE(632)
		result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
		HX_STACK_LINE(632)
		result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
		HX_STACK_LINE(632)
		result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
		HX_STACK_LINE(632)
		result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
		HX_STACK_LINE(632)
		result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
		HX_STACK_LINE(632)
		result1;
	}
	HX_STACK_LINE(632)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix_obj,GetFinalMatrix,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::Transpose( ::com::gamestudiohx::babylonhx::tools::math::Matrix matrix){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","Transpose",0x2b803eed,"com.gamestudiohx.babylonhx.tools.math.Matrix.Transpose","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",635,0xadc6fb7d)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(636)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(638)
	result->m[(int)0] = matrix->m->__get((int)0);
	HX_STACK_LINE(639)
	result->m[(int)1] = matrix->m->__get((int)4);
	HX_STACK_LINE(640)
	result->m[(int)2] = matrix->m->__get((int)8);
	HX_STACK_LINE(641)
	result->m[(int)3] = matrix->m->__get((int)12);
	HX_STACK_LINE(643)
	result->m[(int)4] = matrix->m->__get((int)1);
	HX_STACK_LINE(644)
	result->m[(int)5] = matrix->m->__get((int)5);
	HX_STACK_LINE(645)
	result->m[(int)6] = matrix->m->__get((int)9);
	HX_STACK_LINE(646)
	result->m[(int)7] = matrix->m->__get((int)13);
	HX_STACK_LINE(648)
	result->m[(int)8] = matrix->m->__get((int)2);
	HX_STACK_LINE(649)
	result->m[(int)9] = matrix->m->__get((int)6);
	HX_STACK_LINE(650)
	result->m[(int)10] = matrix->m->__get((int)10);
	HX_STACK_LINE(651)
	result->m[(int)11] = matrix->m->__get((int)14);
	HX_STACK_LINE(653)
	result->m[(int)12] = matrix->m->__get((int)3);
	HX_STACK_LINE(654)
	result->m[(int)13] = matrix->m->__get((int)7);
	HX_STACK_LINE(655)
	result->m[(int)14] = matrix->m->__get((int)11);
	HX_STACK_LINE(656)
	result->m[(int)15] = matrix->m->__get((int)15);
	HX_STACK_LINE(658)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,Transpose,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::Reflection( ::com::gamestudiohx::babylonhx::tools::math::Plane plane){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","Reflection",0x66c2c4b7,"com.gamestudiohx.babylonhx.tools.math.Matrix.Reflection","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",661,0xadc6fb7d)
	HX_STACK_ARG(plane,"plane")
	HX_STACK_LINE(662)
	::com::gamestudiohx::babylonhx::tools::math::Matrix matrix = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(663)
	{
		HX_STACK_LINE(663)
		{
			HX_STACK_LINE(663)
			Float norm = ::Math_obj::sqrt((((plane->normal->x * plane->normal->x) + (plane->normal->y * plane->normal->y)) + (plane->normal->z * plane->normal->z)));		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(663)
			Float magnitude = (int)0;		HX_STACK_VAR(magnitude,"magnitude");
			HX_STACK_LINE(663)
			if (((norm != (int)0))){
				HX_STACK_LINE(663)
				magnitude = (Float(1.0) / Float(norm));
			}
			HX_STACK_LINE(663)
			hx::MultEq(plane->normal->x,magnitude);
			HX_STACK_LINE(663)
			hx::MultEq(plane->normal->y,magnitude);
			HX_STACK_LINE(663)
			hx::MultEq(plane->normal->z,magnitude);
			HX_STACK_LINE(663)
			hx::MultEq(plane->d,magnitude);
		}
		HX_STACK_LINE(663)
		Float x = plane->normal->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(663)
		Float y = plane->normal->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(663)
		Float z = plane->normal->z;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(663)
		Float temp = ((int)-2 * x);		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(663)
		Float temp2 = ((int)-2 * y);		HX_STACK_VAR(temp2,"temp2");
		HX_STACK_LINE(663)
		Float temp3 = ((int)-2 * z);		HX_STACK_VAR(temp3,"temp3");
		HX_STACK_LINE(663)
		matrix->m[(int)0] = ((temp * x) + (int)1);
		HX_STACK_LINE(663)
		matrix->m[(int)1] = (temp2 * x);
		HX_STACK_LINE(663)
		matrix->m[(int)2] = (temp3 * x);
		HX_STACK_LINE(663)
		matrix->m[(int)3] = 0.0;
		HX_STACK_LINE(663)
		matrix->m[(int)4] = (temp * y);
		HX_STACK_LINE(663)
		matrix->m[(int)5] = ((temp2 * y) + (int)1);
		HX_STACK_LINE(663)
		matrix->m[(int)6] = (temp3 * y);
		HX_STACK_LINE(663)
		matrix->m[(int)7] = 0.0;
		HX_STACK_LINE(663)
		matrix->m[(int)8] = (temp * z);
		HX_STACK_LINE(663)
		matrix->m[(int)9] = (temp2 * z);
		HX_STACK_LINE(663)
		matrix->m[(int)10] = ((temp3 * z) + (int)1);
		HX_STACK_LINE(663)
		matrix->m[(int)11] = 0.0;
		HX_STACK_LINE(663)
		matrix->m[(int)12] = (temp * plane->d);
		HX_STACK_LINE(663)
		matrix->m[(int)13] = (temp2 * plane->d);
		HX_STACK_LINE(663)
		matrix->m[(int)14] = (temp3 * plane->d);
		HX_STACK_LINE(663)
		matrix->m[(int)15] = 1.0;
		HX_STACK_LINE(663)
		matrix;
	}
	HX_STACK_LINE(665)
	return matrix;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,Reflection,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Matrix_obj::ReflectionToRef( ::com::gamestudiohx::babylonhx::tools::math::Plane plane,::com::gamestudiohx::babylonhx::tools::math::Matrix result){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Matrix","ReflectionToRef",0x9f4bbe61,"com.gamestudiohx.babylonhx.tools.math.Matrix.ReflectionToRef","com/gamestudiohx/babylonhx/tools/math/Matrix.hx",668,0xadc6fb7d)
	HX_STACK_ARG(plane,"plane")
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(669)
	{
		HX_STACK_LINE(669)
		Float norm = ::Math_obj::sqrt((((plane->normal->x * plane->normal->x) + (plane->normal->y * plane->normal->y)) + (plane->normal->z * plane->normal->z)));		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(669)
		Float magnitude = (int)0;		HX_STACK_VAR(magnitude,"magnitude");
		HX_STACK_LINE(669)
		if (((norm != (int)0))){
			HX_STACK_LINE(669)
			magnitude = (Float(1.0) / Float(norm));
		}
		HX_STACK_LINE(669)
		hx::MultEq(plane->normal->x,magnitude);
		HX_STACK_LINE(669)
		hx::MultEq(plane->normal->y,magnitude);
		HX_STACK_LINE(669)
		hx::MultEq(plane->normal->z,magnitude);
		HX_STACK_LINE(669)
		hx::MultEq(plane->d,magnitude);
	}
	HX_STACK_LINE(670)
	Float x = plane->normal->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(671)
	Float y = plane->normal->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(672)
	Float z = plane->normal->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(673)
	Float temp = ((int)-2 * x);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(674)
	Float temp2 = ((int)-2 * y);		HX_STACK_VAR(temp2,"temp2");
	HX_STACK_LINE(675)
	Float temp3 = ((int)-2 * z);		HX_STACK_VAR(temp3,"temp3");
	HX_STACK_LINE(676)
	result->m[(int)0] = ((temp * x) + (int)1);
	HX_STACK_LINE(677)
	result->m[(int)1] = (temp2 * x);
	HX_STACK_LINE(678)
	result->m[(int)2] = (temp3 * x);
	HX_STACK_LINE(679)
	result->m[(int)3] = 0.0;
	HX_STACK_LINE(680)
	result->m[(int)4] = (temp * y);
	HX_STACK_LINE(681)
	result->m[(int)5] = ((temp2 * y) + (int)1);
	HX_STACK_LINE(682)
	result->m[(int)6] = (temp3 * y);
	HX_STACK_LINE(683)
	result->m[(int)7] = 0.0;
	HX_STACK_LINE(684)
	result->m[(int)8] = (temp * z);
	HX_STACK_LINE(685)
	result->m[(int)9] = (temp2 * z);
	HX_STACK_LINE(686)
	result->m[(int)10] = ((temp3 * z) + (int)1);
	HX_STACK_LINE(687)
	result->m[(int)11] = 0.0;
	HX_STACK_LINE(688)
	result->m[(int)12] = (temp * plane->d);
	HX_STACK_LINE(689)
	result->m[(int)13] = (temp2 * plane->d);
	HX_STACK_LINE(690)
	result->m[(int)14] = (temp3 * plane->d);
	HX_STACK_LINE(691)
	result->m[(int)15] = 1.0;
	HX_STACK_LINE(693)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,ReflectionToRef,return )


Matrix_obj::Matrix_obj()
{
}

void Matrix_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix);
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_END_CLASS();
}

void Matrix_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m,"m");
}

Dynamic Matrix_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { return m; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Zero") ) { return Zero_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Scaling") ) { return Scaling_dyn(); }
		if (HX_FIELD_EQ(inName,"OrthoLH") ) { return OrthoLH_dyn(); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Identity") ) { return Identity_dyn(); }
		if (HX_FIELD_EQ(inName,"LookAtLH") ) { return LookAtLH_dyn(); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FromArray") ) { return FromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"RotationX") ) { return RotationX_dyn(); }
		if (HX_FIELD_EQ(inName,"RotationY") ) { return RotationY_dyn(); }
		if (HX_FIELD_EQ(inName,"RotationZ") ) { return RotationZ_dyn(); }
		if (HX_FIELD_EQ(inName,"Transpose") ) { return Transpose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FromValues") ) { return FromValues_dyn(); }
		if (HX_FIELD_EQ(inName,"Reflection") ) { return Reflection_dyn(); }
		if (HX_FIELD_EQ(inName,"isIdentity") ) { return isIdentity_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"Translation") ) { return Translation_dyn(); }
		if (HX_FIELD_EQ(inName,"determinant") ) { return determinant_dyn(); }
		if (HX_FIELD_EQ(inName,"copyToArray") ) { return copyToArray_dyn(); }
		if (HX_FIELD_EQ(inName,"invertToRef") ) { return invertToRef_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RotationAxis") ) { return RotationAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"ScalingToRef") ) { return ScalingToRef_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"IdentityToRef") ) { return IdentityToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"LookAtLHToRef") ) { return LookAtLHToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"PerspectiveLH") ) { return PerspectiveLH_dyn(); }
		if (HX_FIELD_EQ(inName,"multiplyToRef") ) { return multiplyToRef_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"FromArrayToRef") ) { return FromArrayToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"RotationXToRef") ) { return RotationXToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"RotationYToRef") ) { return RotationYToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"RotationZToRef") ) { return RotationZToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"GetFinalMatrix") ) { return GetFinalMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"setTranslation") ) { return setTranslation_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"FromValuesToRef") ) { return FromValuesToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"ReflectionToRef") ) { return ReflectionToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"multiplyToArray") ) { return multiplyToArray_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"TranslationToRef") ) { return TranslationToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"OrthoOffCenterLH") ) { return OrthoOffCenterLH_dyn(); }
		if (HX_FIELD_EQ(inName,"PerspectiveFovLH") ) { return PerspectiveFovLH_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"RotationYawPitchRoll") ) { return RotationYawPitchRoll_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"OrthoOffCenterLHToRef") ) { return OrthoOffCenterLHToRef_dyn(); }
		if (HX_FIELD_EQ(inName,"PerspectiveFovLHToRef") ) { return PerspectiveFovLHToRef_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"RotationYawPitchRollToRef") ) { return RotationYawPitchRollToRef_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Matrix_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FromArray"),
	HX_CSTRING("FromArrayToRef"),
	HX_CSTRING("FromValues"),
	HX_CSTRING("FromValuesToRef"),
	HX_CSTRING("Identity"),
	HX_CSTRING("IdentityToRef"),
	HX_CSTRING("Zero"),
	HX_CSTRING("RotationX"),
	HX_CSTRING("RotationXToRef"),
	HX_CSTRING("RotationY"),
	HX_CSTRING("RotationYToRef"),
	HX_CSTRING("RotationZ"),
	HX_CSTRING("RotationZToRef"),
	HX_CSTRING("RotationAxis"),
	HX_CSTRING("RotationYawPitchRoll"),
	HX_CSTRING("RotationYawPitchRollToRef"),
	HX_CSTRING("Scaling"),
	HX_CSTRING("ScalingToRef"),
	HX_CSTRING("Translation"),
	HX_CSTRING("TranslationToRef"),
	HX_CSTRING("LookAtLH"),
	HX_CSTRING("LookAtLHToRef"),
	HX_CSTRING("OrthoLH"),
	HX_CSTRING("OrthoOffCenterLH"),
	HX_CSTRING("OrthoOffCenterLHToRef"),
	HX_CSTRING("PerspectiveLH"),
	HX_CSTRING("PerspectiveFovLH"),
	HX_CSTRING("PerspectiveFovLHToRef"),
	HX_CSTRING("GetFinalMatrix"),
	HX_CSTRING("Transpose"),
	HX_CSTRING("Reflection"),
	HX_CSTRING("ReflectionToRef"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Matrix_obj,m),HX_CSTRING("m")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("m"),
	HX_CSTRING("isIdentity"),
	HX_CSTRING("determinant"),
	HX_CSTRING("toArray"),
	HX_CSTRING("copyToArray"),
	HX_CSTRING("invert"),
	HX_CSTRING("invertToRef"),
	HX_CSTRING("setTranslation"),
	HX_CSTRING("multiply"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("multiplyToRef"),
	HX_CSTRING("multiplyToArray"),
	HX_CSTRING("equals"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

#endif

Class Matrix_obj::__mClass;

void Matrix_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.tools.math.Matrix"), hx::TCanCast< Matrix_obj> ,sStaticFields,sMemberFields,
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

void Matrix_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math
