#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_Engine
#include <com/gamestudiohx/babylonhx/Engine.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Node
#include <com/gamestudiohx/babylonhx/Node.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Scene
#include <com/gamestudiohx/babylonhx/Scene.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BaseTexture
#include <com/gamestudiohx/babylonhx/materials/textures/BaseTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_MirrorTexture
#include <com/gamestudiohx/babylonhx/materials/textures/MirrorTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_RenderTargetTexture
#include <com/gamestudiohx/babylonhx/materials/textures/RenderTargetTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_Texture
#include <com/gamestudiohx/babylonhx/materials/textures/Texture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Plane
#include <com/gamestudiohx/babylonhx/tools/math/Plane.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{
namespace textures{

Void MirrorTexture_obj::__construct(::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,bool generateMipMaps)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.MirrorTexture","new",0x68c0b3ec,"com.gamestudiohx.babylonhx.materials.textures.MirrorTexture.new","com/gamestudiohx/babylonhx/materials/textures/MirrorTexture.hx",21,0x1d680823)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(size,"size")
HX_STACK_ARG(scene,"scene")
HX_STACK_ARG(generateMipMaps,"generateMipMaps")
{
	HX_STACK_LINE(21)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(22)
	super::__construct(name,size,scene,generateMipMaps);
	HX_STACK_LINE(24)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(24)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(24)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(24)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(24)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(24)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(24)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(24)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(24)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(24)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(24)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(24)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(24)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(24)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(24)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(24)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(24)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(24)
		_g1 = result;
	}
	HX_STACK_LINE(24)
	this->_transformMatrix = _g1;
	HX_STACK_LINE(25)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g11;		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(25)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(25)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(25)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(25)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(25)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(25)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(25)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(25)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(25)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(25)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(25)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(25)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(25)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(25)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(25)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(25)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(25)
		_g11 = result;
	}
	HX_STACK_LINE(25)
	this->_mirrorMatrix = _g11;
	HX_STACK_LINE(27)
	::com::gamestudiohx::babylonhx::tools::math::Plane _g2 = ::com::gamestudiohx::babylonhx::tools::math::Plane_obj::__new((int)0,(int)1,(int)0,(int)1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(27)
	this->mirrorPlane = _g2;

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
	Void run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/gamestudiohx/babylonhx/materials/textures/MirrorTexture.hx",29,0x1d680823)
		{
			HX_STACK_LINE(30)
			::com::gamestudiohx::babylonhx::Scene scene1 = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::MirrorTexture >()->_scene;		HX_STACK_VAR(scene1,"scene1");
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				::com::gamestudiohx::babylonhx::tools::math::Plane plane = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::MirrorTexture >()->mirrorPlane;		HX_STACK_VAR(plane,"plane");
				HX_STACK_LINE(32)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::MirrorTexture >()->_mirrorMatrix;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(32)
				{
					HX_STACK_LINE(32)
					Float norm = ::Math_obj::sqrt((((plane->normal->x * plane->normal->x) + (plane->normal->y * plane->normal->y)) + (plane->normal->z * plane->normal->z)));		HX_STACK_VAR(norm,"norm");
					HX_STACK_LINE(32)
					Float magnitude = (int)0;		HX_STACK_VAR(magnitude,"magnitude");
					HX_STACK_LINE(32)
					if (((norm != (int)0))){
						HX_STACK_LINE(32)
						magnitude = (Float(1.0) / Float(norm));
					}
					HX_STACK_LINE(32)
					hx::MultEq(plane->normal->x,magnitude);
					HX_STACK_LINE(32)
					hx::MultEq(plane->normal->y,magnitude);
					HX_STACK_LINE(32)
					hx::MultEq(plane->normal->z,magnitude);
					HX_STACK_LINE(32)
					hx::MultEq(plane->d,magnitude);
				}
				HX_STACK_LINE(32)
				Float x = plane->normal->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(32)
				Float y = plane->normal->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(32)
				Float z = plane->normal->z;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(32)
				Float temp = ((int)-2 * x);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(32)
				Float temp2 = ((int)-2 * y);		HX_STACK_VAR(temp2,"temp2");
				HX_STACK_LINE(32)
				Float temp3 = ((int)-2 * z);		HX_STACK_VAR(temp3,"temp3");
				HX_STACK_LINE(32)
				result->m[(int)0] = ((temp * x) + (int)1);
				HX_STACK_LINE(32)
				result->m[(int)1] = (temp2 * x);
				HX_STACK_LINE(32)
				result->m[(int)2] = (temp3 * x);
				HX_STACK_LINE(32)
				result->m[(int)3] = 0.0;
				HX_STACK_LINE(32)
				result->m[(int)4] = (temp * y);
				HX_STACK_LINE(32)
				result->m[(int)5] = ((temp2 * y) + (int)1);
				HX_STACK_LINE(32)
				result->m[(int)6] = (temp3 * y);
				HX_STACK_LINE(32)
				result->m[(int)7] = 0.0;
				HX_STACK_LINE(32)
				result->m[(int)8] = (temp * z);
				HX_STACK_LINE(32)
				result->m[(int)9] = (temp2 * z);
				HX_STACK_LINE(32)
				result->m[(int)10] = ((temp3 * z) + (int)1);
				HX_STACK_LINE(32)
				result->m[(int)11] = 0.0;
				HX_STACK_LINE(32)
				result->m[(int)12] = (temp * plane->d);
				HX_STACK_LINE(32)
				result->m[(int)13] = (temp2 * plane->d);
				HX_STACK_LINE(32)
				result->m[(int)14] = (temp3 * plane->d);
				HX_STACK_LINE(32)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(32)
				result;
			}
			HX_STACK_LINE(33)
			_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::MirrorTexture >()->_savedViewMatrix = scene1->getViewMatrix();
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::MirrorTexture >()->_mirrorMatrix;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(35)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::MirrorTexture >()->_savedViewMatrix;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(35)
				{
					HX_STACK_LINE(35)
					Array< Float > result = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::MirrorTexture >()->_transformMatrix->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(35)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(35)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(35)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(35)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(35)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(35)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(35)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(35)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(35)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(35)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(35)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(35)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(35)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(35)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(35)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(35)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(35)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(35)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(35)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(35)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(35)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(35)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(35)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(35)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(35)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(35)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(35)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(35)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(35)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(35)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(35)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(35)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(35)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(35)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(35)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(35)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(35)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(35)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(35)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(35)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(35)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(35)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(35)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(35)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(35)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(35)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(35)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(35)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(35)
					result;
				}
			}
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				::com::gamestudiohx::babylonhx::tools::math::Matrix projection = scene1->getProjectionMatrix();		HX_STACK_VAR(projection,"projection");
				HX_STACK_LINE(37)
				scene1->_viewMatrix = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::MirrorTexture >()->_transformMatrix;
				HX_STACK_LINE(37)
				scene1->_projectionMatrix = projection;
				HX_STACK_LINE(37)
				{
					HX_STACK_LINE(37)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = scene1->_viewMatrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(37)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = scene1->_projectionMatrix;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(37)
					{
						HX_STACK_LINE(37)
						Array< Float > result = scene1->_transformMatrix->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(37)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(37)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(37)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(37)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(37)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(37)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(37)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(37)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(37)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(37)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(37)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(37)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(37)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(37)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(37)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(37)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(37)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(37)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(37)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(37)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(37)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(37)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(37)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(37)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(37)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(37)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(37)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(37)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(37)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(37)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(37)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(37)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(37)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(37)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(37)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(37)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(37)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(37)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(37)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(37)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(37)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(37)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(37)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(37)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(37)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(37)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(37)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(37)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(37)
						result;
					}
				}
			}
			HX_STACK_LINE(39)
			::com::gamestudiohx::babylonhx::Engine_obj::clipPlane = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::MirrorTexture >()->mirrorPlane;
			HX_STACK_LINE(41)
			scene1->getEngine()->cullBackFaces = false;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(29)
	this->onBeforeRender =  Dynamic(new _Function_1_1(_g));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
	Void run(){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/gamestudiohx/babylonhx/materials/textures/MirrorTexture.hx",44,0x1d680823)
		{
			HX_STACK_LINE(45)
			::com::gamestudiohx::babylonhx::Scene scene1 = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::MirrorTexture >()->_scene;		HX_STACK_VAR(scene1,"scene1");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				::com::gamestudiohx::babylonhx::tools::math::Matrix projection = scene1->getProjectionMatrix();		HX_STACK_VAR(projection,"projection");
				HX_STACK_LINE(47)
				scene1->_viewMatrix = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::MirrorTexture >()->_savedViewMatrix;
				HX_STACK_LINE(47)
				scene1->_projectionMatrix = projection;
				HX_STACK_LINE(47)
				{
					HX_STACK_LINE(47)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = scene1->_viewMatrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(47)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = scene1->_projectionMatrix;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(47)
					{
						HX_STACK_LINE(47)
						Array< Float > result = scene1->_transformMatrix->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(47)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(47)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(47)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(47)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(47)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(47)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(47)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(47)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(47)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(47)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(47)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(47)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(47)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(47)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(47)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(47)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(47)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(47)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(47)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(47)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(47)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(47)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(47)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(47)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(47)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(47)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(47)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(47)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(47)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(47)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(47)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(47)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(47)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(47)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(47)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(47)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(47)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(47)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(47)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(47)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(47)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(47)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(47)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(47)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(47)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(47)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(47)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(47)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(47)
						result;
					}
				}
			}
			HX_STACK_LINE(48)
			scene1->getEngine()->cullBackFaces = true;
			HX_STACK_LINE(50)
			::com::gamestudiohx::babylonhx::Engine_obj::clipPlane = null();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(44)
	this->onAfterRender =  Dynamic(new _Function_1_2(_g));
}
;
	return null();
}

//MirrorTexture_obj::~MirrorTexture_obj() { }

Dynamic MirrorTexture_obj::__CreateEmpty() { return  new MirrorTexture_obj; }
hx::ObjectPtr< MirrorTexture_obj > MirrorTexture_obj::__new(::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,bool generateMipMaps)
{  hx::ObjectPtr< MirrorTexture_obj > result = new MirrorTexture_obj();
	result->__construct(name,size,scene,generateMipMaps);
	return result;}

Dynamic MirrorTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MirrorTexture_obj > result = new MirrorTexture_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::com::gamestudiohx::babylonhx::materials::textures::Texture MirrorTexture_obj::clone( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.MirrorTexture","clone",0x5078f1e9,"com.gamestudiohx.babylonhx.materials.textures.MirrorTexture.clone","com/gamestudiohx/babylonhx/materials/textures/MirrorTexture.hx",54,0x1d680823)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	Dynamic textureSize = this->getSize();		HX_STACK_VAR(textureSize,"textureSize");
	HX_STACK_LINE(56)
	::com::gamestudiohx::babylonhx::materials::textures::MirrorTexture newTexture = ::com::gamestudiohx::babylonhx::materials::textures::MirrorTexture_obj::__new(this->name,textureSize->__Field(HX_CSTRING("width"),true),this->_scene,this->_generateMipMaps);		HX_STACK_VAR(newTexture,"newTexture");
	HX_STACK_LINE(59)
	newTexture->hasAlpha = this->hasAlpha;
	HX_STACK_LINE(60)
	newTexture->level = this->level;
	HX_STACK_LINE(63)
	::com::gamestudiohx::babylonhx::tools::math::Plane _g = this->mirrorPlane->clone();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(63)
	newTexture->mirrorPlane = _g;
	HX_STACK_LINE(64)
	Array< ::Dynamic > _g1 = this->renderList->slice((int)0,null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(64)
	newTexture->renderList = _g1;
	HX_STACK_LINE(66)
	return newTexture;
}



MirrorTexture_obj::MirrorTexture_obj()
{
}

void MirrorTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MirrorTexture);
	HX_MARK_MEMBER_NAME(_transformMatrix,"_transformMatrix");
	HX_MARK_MEMBER_NAME(_savedViewMatrix,"_savedViewMatrix");
	HX_MARK_MEMBER_NAME(_mirrorMatrix,"_mirrorMatrix");
	HX_MARK_MEMBER_NAME(mirrorPlane,"mirrorPlane");
	::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MirrorTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_transformMatrix,"_transformMatrix");
	HX_VISIT_MEMBER_NAME(_savedViewMatrix,"_savedViewMatrix");
	HX_VISIT_MEMBER_NAME(_mirrorMatrix,"_mirrorMatrix");
	HX_VISIT_MEMBER_NAME(mirrorPlane,"mirrorPlane");
	::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MirrorTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mirrorPlane") ) { return mirrorPlane; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_mirrorMatrix") ) { return _mirrorMatrix; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_transformMatrix") ) { return _transformMatrix; }
		if (HX_FIELD_EQ(inName,"_savedViewMatrix") ) { return _savedViewMatrix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MirrorTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"mirrorPlane") ) { mirrorPlane=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Plane >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_mirrorMatrix") ) { _mirrorMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_transformMatrix") ) { _transformMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_savedViewMatrix") ) { _savedViewMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MirrorTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_transformMatrix"));
	outFields->push(HX_CSTRING("_savedViewMatrix"));
	outFields->push(HX_CSTRING("_mirrorMatrix"));
	outFields->push(HX_CSTRING("mirrorPlane"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(MirrorTexture_obj,_transformMatrix),HX_CSTRING("_transformMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(MirrorTexture_obj,_savedViewMatrix),HX_CSTRING("_savedViewMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(MirrorTexture_obj,_mirrorMatrix),HX_CSTRING("_mirrorMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Plane*/ ,(int)offsetof(MirrorTexture_obj,mirrorPlane),HX_CSTRING("mirrorPlane")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_transformMatrix"),
	HX_CSTRING("_savedViewMatrix"),
	HX_CSTRING("_mirrorMatrix"),
	HX_CSTRING("mirrorPlane"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MirrorTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MirrorTexture_obj::__mClass,"__mClass");
};

#endif

Class MirrorTexture_obj::__mClass;

void MirrorTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.materials.textures.MirrorTexture"), hx::TCanCast< MirrorTexture_obj> ,sStaticFields,sMemberFields,
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

void MirrorTexture_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
} // end namespace textures
