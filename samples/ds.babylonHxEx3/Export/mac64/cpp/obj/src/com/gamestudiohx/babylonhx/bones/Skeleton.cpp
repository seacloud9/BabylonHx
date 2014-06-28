#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Scene
#include <com/gamestudiohx/babylonhx/Scene.h>
#endif
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

Void Skeleton_obj::__construct(::String name,::String id,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.bones.Skeleton","new",0x6921d430,"com.gamestudiohx.babylonhx.bones.Skeleton.new","com/gamestudiohx/babylonhx/bones/Skeleton.hx",26,0x0249065e)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(id,"id")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(27)
	this->id = id;
	HX_STACK_LINE(28)
	this->name = name;
	HX_STACK_LINE(29)
	this->bones = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(31)
	this->_scene = scene;
	HX_STACK_LINE(33)
	scene->skeletons->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(35)
	this->_isDirty = true;
}
;
	return null();
}

//Skeleton_obj::~Skeleton_obj() { }

Dynamic Skeleton_obj::__CreateEmpty() { return  new Skeleton_obj; }
hx::ObjectPtr< Skeleton_obj > Skeleton_obj::__new(::String name,::String id,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< Skeleton_obj > result = new Skeleton_obj();
	result->__construct(name,id,scene);
	return result;}

Dynamic Skeleton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Skeleton_obj > result = new Skeleton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Skeleton_obj::_markAsDirty( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.bones.Skeleton","_markAsDirty",0x18e1a164,"com.gamestudiohx.babylonhx.bones.Skeleton._markAsDirty","com/gamestudiohx/babylonhx/bones/Skeleton.hx",39,0x0249065e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		this->_isDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,_markAsDirty,(void))

Array< Float > Skeleton_obj::getTransformMatrices( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.bones.Skeleton","getTransformMatrices",0x525b8fe0,"com.gamestudiohx.babylonhx.bones.Skeleton.getTransformMatrices","com/gamestudiohx/babylonhx/bones/Skeleton.hx",43,0x0249065e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	return this->_transformMatrices;
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,getTransformMatrices,return )

Void Skeleton_obj::prepare( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.bones.Skeleton","prepare",0x16c1bd57,"com.gamestudiohx.babylonhx.bones.Skeleton.prepare","com/gamestudiohx/babylonhx/bones/Skeleton.hx",46,0x0249065e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		if ((!(this->_isDirty))){
			HX_STACK_LINE(48)
			return null();
		}
		HX_STACK_LINE(51)
		if (((this->_transformMatrices == null()))){
			HX_STACK_LINE(52)
			this->_transformMatrices = Array_obj< Float >::__new();
		}
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(55)
			int _g = this->bones->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(55)
			while((true)){
				HX_STACK_LINE(55)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(55)
					break;
				}
				HX_STACK_LINE(55)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(56)
				::com::gamestudiohx::babylonhx::bones::Bone bone = this->bones->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::bones::Bone >();		HX_STACK_VAR(bone,"bone");
				HX_STACK_LINE(57)
				::com::gamestudiohx::babylonhx::bones::Bone parentBone = bone->getParent();		HX_STACK_VAR(parentBone,"parentBone");
				HX_STACK_LINE(59)
				if (((parentBone != null()))){
					HX_STACK_LINE(60)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = bone->_matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(60)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = parentBone->_worldTransform;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(60)
					{
						HX_STACK_LINE(60)
						Array< Float > result = bone->_worldTransform->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(60)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(60)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(60)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(60)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(60)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(60)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(60)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(60)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(60)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(60)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(60)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(60)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(60)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(60)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(60)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(60)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(60)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(60)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(60)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(60)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(60)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(60)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(60)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(60)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(60)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(60)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(60)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(60)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(60)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(60)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(60)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(60)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(60)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(60)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(60)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(60)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(60)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(60)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(60)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(60)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(60)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(60)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(60)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(60)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(60)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(60)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(60)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(60)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(60)
						result;
					}
				}
				else{
					HX_STACK_LINE(62)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = bone->_worldTransform;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(62)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = bone->_matrix;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(62)
					{
						HX_STACK_LINE(62)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(62)
						while((true)){
							HX_STACK_LINE(62)
							if ((!(((_g2 < (int)16))))){
								HX_STACK_LINE(62)
								break;
							}
							HX_STACK_LINE(62)
							int index1 = (_g2)++;		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(62)
							_this->m[index1] = other->m->__get(index1);
						}
					}
				}
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = bone->_invertedAbsoluteTransform;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(65)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = bone->_worldTransform;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(65)
					Array< Float > result = this->_transformMatrices;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(65)
					int offset = (index * (int)16);		HX_STACK_VAR(offset,"offset");
					HX_STACK_LINE(65)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(65)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(65)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(65)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(65)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(65)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(65)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(65)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(65)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(65)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(65)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(65)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(65)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(65)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(65)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(65)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(65)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(65)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(65)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(65)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(65)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(65)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(65)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(65)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(65)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(65)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(65)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(65)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(65)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(65)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(65)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(65)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(65)
					result[offset] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(65)
					result[(offset + (int)1)] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(65)
					result[(offset + (int)2)] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(65)
					result[(offset + (int)3)] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(65)
					result[(offset + (int)4)] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(65)
					result[(offset + (int)5)] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(65)
					result[(offset + (int)6)] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(65)
					result[(offset + (int)7)] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(65)
					result[(offset + (int)8)] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(65)
					result[(offset + (int)9)] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(65)
					result[(offset + (int)10)] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(65)
					result[(offset + (int)11)] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(65)
					result[(offset + (int)12)] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(65)
					result[(offset + (int)13)] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(65)
					result[(offset + (int)14)] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(65)
					result[(offset + (int)15)] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(65)
					result;
				}
			}
		}
		HX_STACK_LINE(68)
		this->_isDirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,prepare,(void))

Dynamic Skeleton_obj::getAnimatables( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.bones.Skeleton","getAnimatables",0x9126630f,"com.gamestudiohx.babylonhx.bones.Skeleton.getAnimatables","com/gamestudiohx/babylonhx/bones/Skeleton.hx",71,0x0249065e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	if (((bool((this->_animatables == null())) || bool((this->_animatables->__Field(HX_CSTRING("length"),true) != this->bones->length))))){
		HX_STACK_LINE(73)
		this->_animatables = Dynamic( Array_obj<Dynamic>::__new());
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(75)
			int _g = this->bones->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(75)
			while((true)){
				HX_STACK_LINE(75)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(75)
					break;
				}
				HX_STACK_LINE(75)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(76)
				this->_animatables->__Field(HX_CSTRING("push"),true)(this->bones->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::bones::Bone >());
			}
		}
	}
	HX_STACK_LINE(80)
	return this->_animatables;
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,getAnimatables,return )

::com::gamestudiohx::babylonhx::bones::Skeleton Skeleton_obj::clone( ::String name,::String id){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.bones.Skeleton","clone",0x0395ab2d,"com.gamestudiohx.babylonhx.bones.Skeleton.clone","com/gamestudiohx/babylonhx/bones/Skeleton.hx",83,0x0249065e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(84)
	::com::gamestudiohx::babylonhx::bones::Skeleton result = ::com::gamestudiohx::babylonhx::bones::Skeleton_obj::__new(name,id,this->_scene);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(86)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(86)
		int _g = this->bones->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		while((true)){
			HX_STACK_LINE(86)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(86)
				break;
			}
			HX_STACK_LINE(86)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(87)
			::com::gamestudiohx::babylonhx::bones::Bone source = this->bones->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::bones::Bone >();		HX_STACK_VAR(source,"source");
			HX_STACK_LINE(88)
			::com::gamestudiohx::babylonhx::bones::Bone parentBone = null();		HX_STACK_VAR(parentBone,"parentBone");
			HX_STACK_LINE(90)
			::com::gamestudiohx::babylonhx::bones::Bone _g2 = source->getParent();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(90)
			if (((_g2 != null()))){
				HX_STACK_LINE(91)
				::com::gamestudiohx::babylonhx::bones::Bone _g11 = source->getParent();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(91)
				int parentIndex = ::Lambda_obj::indexOf(this->bones,_g11);		HX_STACK_VAR(parentIndex,"parentIndex");
				HX_STACK_LINE(92)
				parentBone = result->bones->__get(parentIndex).StaticCast< ::com::gamestudiohx::babylonhx::bones::Bone >();
			}
			HX_STACK_LINE(95)
			::com::gamestudiohx::babylonhx::bones::Bone bone = ::com::gamestudiohx::babylonhx::bones::Bone_obj::__new(source->name,result,parentBone,source->_baseMatrix);		HX_STACK_VAR(bone,"bone");
			HX_STACK_LINE(98)
			Array< ::Dynamic > _g21 = source->animations->copy();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(98)
			bone->animations = _g21;
		}
	}
	HX_STACK_LINE(101)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(Skeleton_obj,clone,return )


Skeleton_obj::Skeleton_obj()
{
}

void Skeleton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Skeleton);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(bones,"bones");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_isDirty,"_isDirty");
	HX_MARK_MEMBER_NAME(_transformMatrices,"_transformMatrices");
	HX_MARK_MEMBER_NAME(_animatables,"_animatables");
	HX_MARK_END_CLASS();
}

void Skeleton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(bones,"bones");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_isDirty,"_isDirty");
	HX_VISIT_MEMBER_NAME(_transformMatrices,"_transformMatrices");
	HX_VISIT_MEMBER_NAME(_animatables,"_animatables");
}

Dynamic Skeleton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bones") ) { return bones; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"prepare") ) { return prepare_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_isDirty") ) { return _isDirty; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_animatables") ) { return _animatables; }
		if (HX_FIELD_EQ(inName,"_markAsDirty") ) { return _markAsDirty_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAnimatables") ) { return getAnimatables_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_transformMatrices") ) { return _transformMatrices; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getTransformMatrices") ) { return getTransformMatrices_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Skeleton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bones") ) { bones=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::gamestudiohx::babylonhx::Scene >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_isDirty") ) { _isDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_animatables") ) { _animatables=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_transformMatrices") ) { _transformMatrices=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Skeleton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("bones"));
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("_isDirty"));
	outFields->push(HX_CSTRING("_transformMatrices"));
	outFields->push(HX_CSTRING("_animatables"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Skeleton_obj,id),HX_CSTRING("id")},
	{hx::fsString,(int)offsetof(Skeleton_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Skeleton_obj,bones),HX_CSTRING("bones")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Scene*/ ,(int)offsetof(Skeleton_obj,_scene),HX_CSTRING("_scene")},
	{hx::fsBool,(int)offsetof(Skeleton_obj,_isDirty),HX_CSTRING("_isDirty")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Skeleton_obj,_transformMatrices),HX_CSTRING("_transformMatrices")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Skeleton_obj,_animatables),HX_CSTRING("_animatables")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("name"),
	HX_CSTRING("bones"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_isDirty"),
	HX_CSTRING("_transformMatrices"),
	HX_CSTRING("_animatables"),
	HX_CSTRING("_markAsDirty"),
	HX_CSTRING("getTransformMatrices"),
	HX_CSTRING("prepare"),
	HX_CSTRING("getAnimatables"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Skeleton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Skeleton_obj::__mClass,"__mClass");
};

#endif

Class Skeleton_obj::__mClass;

void Skeleton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.bones.Skeleton"), hx::TCanCast< Skeleton_obj> ,sStaticFields,sMemberFields,
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

void Skeleton_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace bones
