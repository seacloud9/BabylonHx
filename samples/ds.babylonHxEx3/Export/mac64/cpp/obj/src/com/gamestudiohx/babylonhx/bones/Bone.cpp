#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_animations_Animation
#include <com/gamestudiohx/babylonhx/animations/Animation.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_bones_Bone
#include <com/gamestudiohx/babylonhx/bones/Bone.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_bones_Skeleton
#include <com/gamestudiohx/babylonhx/bones/Skeleton.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace bones{

Void Bone_obj::__construct(::String name,::com::gamestudiohx::babylonhx::bones::Skeleton skeleton,::com::gamestudiohx::babylonhx::bones::Bone parentBone,::com::gamestudiohx::babylonhx::tools::math::Matrix matrix)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.bones.Bone","new",0x73c560a7,"com.gamestudiohx.babylonhx.bones.Bone.new","com/gamestudiohx/babylonhx/bones/Bone.hx",27,0xb10a8ec7)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(skeleton,"skeleton")
HX_STACK_ARG(parentBone,"parentBone")
HX_STACK_ARG(matrix,"matrix")
{
	HX_STACK_LINE(28)
	this->name = name;
	HX_STACK_LINE(29)
	this->_skeleton = skeleton;
	HX_STACK_LINE(30)
	this->_matrix = matrix;
	HX_STACK_LINE(31)
	this->_baseMatrix = matrix;
	HX_STACK_LINE(32)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(32)
	this->_worldTransform = _g;
	HX_STACK_LINE(33)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g1 = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(33)
	this->_absoluteTransform = _g1;
	HX_STACK_LINE(34)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g2 = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(34)
	this->_invertedAbsoluteTransform = _g2;
	HX_STACK_LINE(35)
	this->children = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(36)
	this->animations = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(38)
	skeleton->bones->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(40)
	if (((parentBone != null()))){
		HX_STACK_LINE(41)
		this->_parent = parentBone;
		HX_STACK_LINE(42)
		parentBone->children->push(hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(44)
		this->_parent = null();
	}
	HX_STACK_LINE(47)
	this->_updateDifferenceMatrix();
}
;
	return null();
}

//Bone_obj::~Bone_obj() { }

Dynamic Bone_obj::__CreateEmpty() { return  new Bone_obj; }
hx::ObjectPtr< Bone_obj > Bone_obj::__new(::String name,::com::gamestudiohx::babylonhx::bones::Skeleton skeleton,::com::gamestudiohx::babylonhx::bones::Bone parentBone,::com::gamestudiohx::babylonhx::tools::math::Matrix matrix)
{  hx::ObjectPtr< Bone_obj > result = new Bone_obj();
	result->__construct(name,skeleton,parentBone,matrix);
	return result;}

Dynamic Bone_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bone_obj > result = new Bone_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::com::gamestudiohx::babylonhx::bones::Bone Bone_obj::getParent( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.bones.Bone","getParent",0x23460de7,"com.gamestudiohx.babylonhx.bones.Bone.getParent","com/gamestudiohx/babylonhx/bones/Bone.hx",51,0xb10a8ec7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	return this->_parent;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getParent,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Bone_obj::getLocalMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.bones.Bone","getLocalMatrix",0xba91002f,"com.gamestudiohx.babylonhx.bones.Bone.getLocalMatrix","com/gamestudiohx/babylonhx/bones/Bone.hx",55,0xb10a8ec7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	return this->_matrix;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getLocalMatrix,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Bone_obj::getAbsoluteMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.bones.Bone","getAbsoluteMatrix",0x3105b9d5,"com.gamestudiohx.babylonhx.bones.Bone.getAbsoluteMatrix","com/gamestudiohx/babylonhx/bones/Bone.hx",58,0xb10a8ec7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	::com::gamestudiohx::babylonhx::tools::math::Matrix matrix;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_matrix;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(59)
			result->m[(int)0] = _this->m->__get((int)0);
			HX_STACK_LINE(59)
			result->m[(int)1] = _this->m->__get((int)1);
			HX_STACK_LINE(59)
			result->m[(int)2] = _this->m->__get((int)2);
			HX_STACK_LINE(59)
			result->m[(int)3] = _this->m->__get((int)3);
			HX_STACK_LINE(59)
			result->m[(int)4] = _this->m->__get((int)4);
			HX_STACK_LINE(59)
			result->m[(int)5] = _this->m->__get((int)5);
			HX_STACK_LINE(59)
			result->m[(int)6] = _this->m->__get((int)6);
			HX_STACK_LINE(59)
			result->m[(int)7] = _this->m->__get((int)7);
			HX_STACK_LINE(59)
			result->m[(int)8] = _this->m->__get((int)8);
			HX_STACK_LINE(59)
			result->m[(int)9] = _this->m->__get((int)9);
			HX_STACK_LINE(59)
			result->m[(int)10] = _this->m->__get((int)10);
			HX_STACK_LINE(59)
			result->m[(int)11] = _this->m->__get((int)11);
			HX_STACK_LINE(59)
			result->m[(int)12] = _this->m->__get((int)12);
			HX_STACK_LINE(59)
			result->m[(int)13] = _this->m->__get((int)13);
			HX_STACK_LINE(59)
			result->m[(int)14] = _this->m->__get((int)14);
			HX_STACK_LINE(59)
			result->m[(int)15] = _this->m->__get((int)15);
			HX_STACK_LINE(59)
			matrix = result;
		}
	}
	HX_STACK_LINE(60)
	::com::gamestudiohx::babylonhx::bones::Bone parent = this->_parent;		HX_STACK_VAR(parent,"parent");
	HX_STACK_LINE(62)
	while((true)){
		HX_STACK_LINE(62)
		if ((!(((parent != null()))))){
			HX_STACK_LINE(62)
			break;
		}
		HX_STACK_LINE(63)
		::com::gamestudiohx::babylonhx::tools::math::Matrix _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			::com::gamestudiohx::babylonhx::tools::math::Matrix other = parent->getLocalMatrix();		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(63)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
				HX_STACK_LINE(63)
				Float tm0 = matrix->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
				HX_STACK_LINE(63)
				Float tm1 = matrix->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
				HX_STACK_LINE(63)
				Float tm2 = matrix->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
				HX_STACK_LINE(63)
				Float tm3 = matrix->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
				HX_STACK_LINE(63)
				Float tm4 = matrix->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
				HX_STACK_LINE(63)
				Float tm5 = matrix->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
				HX_STACK_LINE(63)
				Float tm6 = matrix->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
				HX_STACK_LINE(63)
				Float tm7 = matrix->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
				HX_STACK_LINE(63)
				Float tm8 = matrix->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
				HX_STACK_LINE(63)
				Float tm9 = matrix->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
				HX_STACK_LINE(63)
				Float tm10 = matrix->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
				HX_STACK_LINE(63)
				Float tm11 = matrix->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
				HX_STACK_LINE(63)
				Float tm12 = matrix->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
				HX_STACK_LINE(63)
				Float tm13 = matrix->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
				HX_STACK_LINE(63)
				Float tm14 = matrix->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
				HX_STACK_LINE(63)
				Float tm15 = matrix->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
				HX_STACK_LINE(63)
				Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
				HX_STACK_LINE(63)
				Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
				HX_STACK_LINE(63)
				Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
				HX_STACK_LINE(63)
				Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
				HX_STACK_LINE(63)
				Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
				HX_STACK_LINE(63)
				Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
				HX_STACK_LINE(63)
				Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
				HX_STACK_LINE(63)
				Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
				HX_STACK_LINE(63)
				Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
				HX_STACK_LINE(63)
				Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
				HX_STACK_LINE(63)
				Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
				HX_STACK_LINE(63)
				Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
				HX_STACK_LINE(63)
				Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
				HX_STACK_LINE(63)
				Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
				HX_STACK_LINE(63)
				Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
				HX_STACK_LINE(63)
				Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
				HX_STACK_LINE(63)
				result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
				HX_STACK_LINE(63)
				result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
				HX_STACK_LINE(63)
				result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
				HX_STACK_LINE(63)
				result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
				HX_STACK_LINE(63)
				result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
				HX_STACK_LINE(63)
				result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
				HX_STACK_LINE(63)
				result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
				HX_STACK_LINE(63)
				result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
				HX_STACK_LINE(63)
				result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
				HX_STACK_LINE(63)
				result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
				HX_STACK_LINE(63)
				result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
				HX_STACK_LINE(63)
				result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
				HX_STACK_LINE(63)
				result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
				HX_STACK_LINE(63)
				result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
				HX_STACK_LINE(63)
				result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
				HX_STACK_LINE(63)
				result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
				HX_STACK_LINE(63)
				result1;
			}
			HX_STACK_LINE(63)
			_g = result;
		}
		HX_STACK_LINE(63)
		matrix = _g;
		HX_STACK_LINE(64)
		::com::gamestudiohx::babylonhx::bones::Bone _g1 = parent->getParent();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(64)
		parent = _g1;
	}
	HX_STACK_LINE(67)
	return matrix;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getAbsoluteMatrix,return )

Void Bone_obj::_updateDifferenceMatrix( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.bones.Bone","_updateDifferenceMatrix",0x7bc523ad,"com.gamestudiohx.babylonhx.bones.Bone._updateDifferenceMatrix","com/gamestudiohx/babylonhx/bones/Bone.hx",70,0xb10a8ec7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		if (((this->_parent != null()))){
			HX_STACK_LINE(72)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_matrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(72)
			::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_parent->_absoluteTransform;		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(72)
			{
				HX_STACK_LINE(72)
				Array< Float > result = this->_absoluteTransform->m;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(72)
				Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
				HX_STACK_LINE(72)
				Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
				HX_STACK_LINE(72)
				Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
				HX_STACK_LINE(72)
				Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
				HX_STACK_LINE(72)
				Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
				HX_STACK_LINE(72)
				Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
				HX_STACK_LINE(72)
				Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
				HX_STACK_LINE(72)
				Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
				HX_STACK_LINE(72)
				Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
				HX_STACK_LINE(72)
				Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
				HX_STACK_LINE(72)
				Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
				HX_STACK_LINE(72)
				Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
				HX_STACK_LINE(72)
				Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
				HX_STACK_LINE(72)
				Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
				HX_STACK_LINE(72)
				Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
				HX_STACK_LINE(72)
				Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
				HX_STACK_LINE(72)
				Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
				HX_STACK_LINE(72)
				Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
				HX_STACK_LINE(72)
				Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
				HX_STACK_LINE(72)
				Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
				HX_STACK_LINE(72)
				Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
				HX_STACK_LINE(72)
				Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
				HX_STACK_LINE(72)
				Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
				HX_STACK_LINE(72)
				Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
				HX_STACK_LINE(72)
				Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
				HX_STACK_LINE(72)
				Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
				HX_STACK_LINE(72)
				Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
				HX_STACK_LINE(72)
				Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
				HX_STACK_LINE(72)
				Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
				HX_STACK_LINE(72)
				Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
				HX_STACK_LINE(72)
				Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
				HX_STACK_LINE(72)
				Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
				HX_STACK_LINE(72)
				result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
				HX_STACK_LINE(72)
				result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
				HX_STACK_LINE(72)
				result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
				HX_STACK_LINE(72)
				result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
				HX_STACK_LINE(72)
				result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
				HX_STACK_LINE(72)
				result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
				HX_STACK_LINE(72)
				result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
				HX_STACK_LINE(72)
				result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
				HX_STACK_LINE(72)
				result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
				HX_STACK_LINE(72)
				result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
				HX_STACK_LINE(72)
				result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
				HX_STACK_LINE(72)
				result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
				HX_STACK_LINE(72)
				result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
				HX_STACK_LINE(72)
				result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
				HX_STACK_LINE(72)
				result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
				HX_STACK_LINE(72)
				result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
				HX_STACK_LINE(72)
				result;
			}
		}
		else{
			HX_STACK_LINE(74)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_absoluteTransform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(74)
			::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_matrix;		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(74)
			{
				HX_STACK_LINE(74)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(74)
				while((true)){
					HX_STACK_LINE(74)
					if ((!(((_g < (int)16))))){
						HX_STACK_LINE(74)
						break;
					}
					HX_STACK_LINE(74)
					int index = (_g)++;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(74)
					_this->m[index] = other->m->__get(index);
				}
			}
		}
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_absoluteTransform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(77)
			::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_invertedAbsoluteTransform;		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(77)
			Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
			HX_STACK_LINE(77)
			Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
			HX_STACK_LINE(77)
			Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
			HX_STACK_LINE(77)
			Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
			HX_STACK_LINE(77)
			Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
			HX_STACK_LINE(77)
			Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
			HX_STACK_LINE(77)
			Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
			HX_STACK_LINE(77)
			Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
			HX_STACK_LINE(77)
			Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
			HX_STACK_LINE(77)
			Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
			HX_STACK_LINE(77)
			Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
			HX_STACK_LINE(77)
			Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
			HX_STACK_LINE(77)
			Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
			HX_STACK_LINE(77)
			Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
			HX_STACK_LINE(77)
			Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
			HX_STACK_LINE(77)
			Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
			HX_STACK_LINE(77)
			Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
			HX_STACK_LINE(77)
			Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
			HX_STACK_LINE(77)
			Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
			HX_STACK_LINE(77)
			Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
			HX_STACK_LINE(77)
			Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
			HX_STACK_LINE(77)
			Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
			HX_STACK_LINE(77)
			Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
			HX_STACK_LINE(77)
			Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
			HX_STACK_LINE(77)
			Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
			HX_STACK_LINE(77)
			Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
			HX_STACK_LINE(77)
			Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
			HX_STACK_LINE(77)
			Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
			HX_STACK_LINE(77)
			Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
			HX_STACK_LINE(77)
			Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
			HX_STACK_LINE(77)
			Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
			HX_STACK_LINE(77)
			Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
			HX_STACK_LINE(77)
			Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
			HX_STACK_LINE(77)
			Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
			HX_STACK_LINE(77)
			Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
			HX_STACK_LINE(77)
			Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
			HX_STACK_LINE(77)
			Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
			HX_STACK_LINE(77)
			Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
			HX_STACK_LINE(77)
			Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
			HX_STACK_LINE(77)
			other->m[(int)0] = (l23 * l27);
			HX_STACK_LINE(77)
			other->m[(int)4] = (l24 * l27);
			HX_STACK_LINE(77)
			other->m[(int)8] = (l25 * l27);
			HX_STACK_LINE(77)
			other->m[(int)12] = (l26 * l27);
			HX_STACK_LINE(77)
			other->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
			HX_STACK_LINE(77)
			other->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
			HX_STACK_LINE(77)
			other->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
			HX_STACK_LINE(77)
			other->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
			HX_STACK_LINE(77)
			other->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
			HX_STACK_LINE(77)
			other->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
			HX_STACK_LINE(77)
			other->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
			HX_STACK_LINE(77)
			other->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
			HX_STACK_LINE(77)
			other->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
			HX_STACK_LINE(77)
			other->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
			HX_STACK_LINE(77)
			other->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
			HX_STACK_LINE(77)
			other->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
		}
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(79)
			int _g = this->children->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(79)
			while((true)){
				HX_STACK_LINE(79)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(79)
					break;
				}
				HX_STACK_LINE(79)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(80)
				this->children->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::bones::Bone >()->_updateDifferenceMatrix();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,_updateDifferenceMatrix,(void))

Void Bone_obj::updateMatrix( ::com::gamestudiohx::babylonhx::tools::math::Matrix matrix){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.bones.Bone","updateMatrix",0x0a0f8c03,"com.gamestudiohx.babylonhx.bones.Bone.updateMatrix","com/gamestudiohx/babylonhx/bones/Bone.hx",84,0xb10a8ec7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(85)
		this->_matrix = matrix;
		HX_STACK_LINE(86)
		this->_skeleton->_markAsDirty();
		HX_STACK_LINE(88)
		this->_updateDifferenceMatrix();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Bone_obj,updateMatrix,(void))

Void Bone_obj::markAsDirty( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.bones.Bone","markAsDirty",0xa1f2a07a,"com.gamestudiohx.babylonhx.bones.Bone.markAsDirty","com/gamestudiohx/babylonhx/bones/Bone.hx",92,0xb10a8ec7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(92)
		this->_skeleton->_markAsDirty();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,markAsDirty,(void))


Bone_obj::Bone_obj()
{
}

void Bone_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bone);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(_skeleton,"_skeleton");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_baseMatrix,"_baseMatrix");
	HX_MARK_MEMBER_NAME(_worldTransform,"_worldTransform");
	HX_MARK_MEMBER_NAME(_absoluteTransform,"_absoluteTransform");
	HX_MARK_MEMBER_NAME(_invertedAbsoluteTransform,"_invertedAbsoluteTransform");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_END_CLASS();
}

void Bone_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(_skeleton,"_skeleton");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_baseMatrix,"_baseMatrix");
	HX_VISIT_MEMBER_NAME(_worldTransform,"_worldTransform");
	HX_VISIT_MEMBER_NAME(_absoluteTransform,"_absoluteTransform");
	HX_VISIT_MEMBER_NAME(_invertedAbsoluteTransform,"_invertedAbsoluteTransform");
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(animations,"animations");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
}

Dynamic Bone_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return children; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_skeleton") ) { return _skeleton; }
		if (HX_FIELD_EQ(inName,"getParent") ) { return getParent_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { return animations; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_baseMatrix") ) { return _baseMatrix; }
		if (HX_FIELD_EQ(inName,"markAsDirty") ) { return markAsDirty_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateMatrix") ) { return updateMatrix_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLocalMatrix") ) { return getLocalMatrix_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_worldTransform") ) { return _worldTransform; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getAbsoluteMatrix") ) { return getAbsoluteMatrix_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_absoluteTransform") ) { return _absoluteTransform; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_updateDifferenceMatrix") ) { return _updateDifferenceMatrix_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_invertedAbsoluteTransform") ) { return _invertedAbsoluteTransform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bone_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::com::gamestudiohx::babylonhx::bones::Bone >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_skeleton") ) { _skeleton=inValue.Cast< ::com::gamestudiohx::babylonhx::bones::Skeleton >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_baseMatrix") ) { _baseMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_worldTransform") ) { _worldTransform=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_absoluteTransform") ) { _absoluteTransform=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_invertedAbsoluteTransform") ) { _invertedAbsoluteTransform=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bone_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("_skeleton"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_baseMatrix"));
	outFields->push(HX_CSTRING("_worldTransform"));
	outFields->push(HX_CSTRING("_absoluteTransform"));
	outFields->push(HX_CSTRING("_invertedAbsoluteTransform"));
	outFields->push(HX_CSTRING("children"));
	outFields->push(HX_CSTRING("animations"));
	outFields->push(HX_CSTRING("_parent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Bone_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::bones::Skeleton*/ ,(int)offsetof(Bone_obj,_skeleton),HX_CSTRING("_skeleton")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(Bone_obj,_matrix),HX_CSTRING("_matrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(Bone_obj,_baseMatrix),HX_CSTRING("_baseMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(Bone_obj,_worldTransform),HX_CSTRING("_worldTransform")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(Bone_obj,_absoluteTransform),HX_CSTRING("_absoluteTransform")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(Bone_obj,_invertedAbsoluteTransform),HX_CSTRING("_invertedAbsoluteTransform")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Bone_obj,children),HX_CSTRING("children")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Bone_obj,animations),HX_CSTRING("animations")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::bones::Bone*/ ,(int)offsetof(Bone_obj,_parent),HX_CSTRING("_parent")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("_skeleton"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_baseMatrix"),
	HX_CSTRING("_worldTransform"),
	HX_CSTRING("_absoluteTransform"),
	HX_CSTRING("_invertedAbsoluteTransform"),
	HX_CSTRING("children"),
	HX_CSTRING("animations"),
	HX_CSTRING("_parent"),
	HX_CSTRING("getParent"),
	HX_CSTRING("getLocalMatrix"),
	HX_CSTRING("getAbsoluteMatrix"),
	HX_CSTRING("_updateDifferenceMatrix"),
	HX_CSTRING("updateMatrix"),
	HX_CSTRING("markAsDirty"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bone_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bone_obj::__mClass,"__mClass");
};

#endif

Class Bone_obj::__mClass;

void Bone_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.bones.Bone"), hx::TCanCast< Bone_obj> ,sStaticFields,sMemberFields,
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

void Bone_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace bones
