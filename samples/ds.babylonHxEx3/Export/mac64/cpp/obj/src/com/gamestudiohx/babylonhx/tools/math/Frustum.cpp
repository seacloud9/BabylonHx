#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Frustum
#include <com/gamestudiohx/babylonhx/tools/math/Frustum.h>
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
namespace tools{
namespace math{

Void Frustum_obj::__construct()
{
	return null();
}

//Frustum_obj::~Frustum_obj() { }

Dynamic Frustum_obj::__CreateEmpty() { return  new Frustum_obj; }
hx::ObjectPtr< Frustum_obj > Frustum_obj::__new()
{  hx::ObjectPtr< Frustum_obj > result = new Frustum_obj();
	result->__construct();
	return result;}

Dynamic Frustum_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Frustum_obj > result = new Frustum_obj();
	result->__construct();
	return result;}

Array< ::Dynamic > Frustum_obj::GetPlanes( ::com::gamestudiohx::babylonhx::tools::math::Matrix transform){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Frustum","GetPlanes",0x61fea980,"com.gamestudiohx.babylonhx.tools.math.Frustum.GetPlanes","com/gamestudiohx/babylonhx/tools/math/Frustum.hx",12,0x584d483c)
	HX_STACK_ARG(transform,"transform")
	HX_STACK_LINE(13)
	Array< ::Dynamic > frustumPlanes = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(frustumPlanes,"frustumPlanes");
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(15)
		while((true)){
			HX_STACK_LINE(15)
			if ((!(((_g < (int)6))))){
				HX_STACK_LINE(15)
				break;
			}
			HX_STACK_LINE(15)
			int index = (_g)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(16)
			::com::gamestudiohx::babylonhx::tools::math::Plane _g1 = ::com::gamestudiohx::babylonhx::tools::math::Plane_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(16)
			frustumPlanes->push(_g1);
		}
	}
	HX_STACK_LINE(19)
	{
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->x = (transform->m->__get((int)3) + transform->m->__get((int)2));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->y = (transform->m->__get((int)7) + transform->m->__get((int)6));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->z = (transform->m->__get((int)10) + transform->m->__get((int)10));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->d = (transform->m->__get((int)15) + transform->m->__get((int)14));
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			::com::gamestudiohx::babylonhx::tools::math::Plane _this = frustumPlanes->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(19)
			Float norm = ::Math_obj::sqrt((((_this->normal->x * _this->normal->x) + (_this->normal->y * _this->normal->y)) + (_this->normal->z * _this->normal->z)));		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(19)
			Float magnitude = (int)0;		HX_STACK_VAR(magnitude,"magnitude");
			HX_STACK_LINE(19)
			if (((norm != (int)0))){
				HX_STACK_LINE(19)
				magnitude = (Float(1.0) / Float(norm));
			}
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->x,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->y,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->z,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->d,magnitude);
		}
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->x = (transform->m->__get((int)3) - transform->m->__get((int)2));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->y = (transform->m->__get((int)7) - transform->m->__get((int)6));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->z = (transform->m->__get((int)11) - transform->m->__get((int)10));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->d = (transform->m->__get((int)15) - transform->m->__get((int)14));
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			::com::gamestudiohx::babylonhx::tools::math::Plane _this = frustumPlanes->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(19)
			Float norm = ::Math_obj::sqrt((((_this->normal->x * _this->normal->x) + (_this->normal->y * _this->normal->y)) + (_this->normal->z * _this->normal->z)));		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(19)
			Float magnitude = (int)0;		HX_STACK_VAR(magnitude,"magnitude");
			HX_STACK_LINE(19)
			if (((norm != (int)0))){
				HX_STACK_LINE(19)
				magnitude = (Float(1.0) / Float(norm));
			}
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->x,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->y,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->z,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->d,magnitude);
		}
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->x = (transform->m->__get((int)3) + transform->m->__get((int)0));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->y = (transform->m->__get((int)7) + transform->m->__get((int)4));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->z = (transform->m->__get((int)11) + transform->m->__get((int)8));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->d = (transform->m->__get((int)15) + transform->m->__get((int)12));
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			::com::gamestudiohx::babylonhx::tools::math::Plane _this = frustumPlanes->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(19)
			Float norm = ::Math_obj::sqrt((((_this->normal->x * _this->normal->x) + (_this->normal->y * _this->normal->y)) + (_this->normal->z * _this->normal->z)));		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(19)
			Float magnitude = (int)0;		HX_STACK_VAR(magnitude,"magnitude");
			HX_STACK_LINE(19)
			if (((norm != (int)0))){
				HX_STACK_LINE(19)
				magnitude = (Float(1.0) / Float(norm));
			}
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->x,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->y,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->z,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->d,magnitude);
		}
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)3).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->x = (transform->m->__get((int)3) - transform->m->__get((int)0));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)3).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->y = (transform->m->__get((int)7) - transform->m->__get((int)4));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)3).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->z = (transform->m->__get((int)11) - transform->m->__get((int)8));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)3).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->d = (transform->m->__get((int)15) - transform->m->__get((int)12));
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			::com::gamestudiohx::babylonhx::tools::math::Plane _this = frustumPlanes->__get((int)3).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(19)
			Float norm = ::Math_obj::sqrt((((_this->normal->x * _this->normal->x) + (_this->normal->y * _this->normal->y)) + (_this->normal->z * _this->normal->z)));		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(19)
			Float magnitude = (int)0;		HX_STACK_VAR(magnitude,"magnitude");
			HX_STACK_LINE(19)
			if (((norm != (int)0))){
				HX_STACK_LINE(19)
				magnitude = (Float(1.0) / Float(norm));
			}
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->x,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->y,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->z,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->d,magnitude);
		}
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)4).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->x = (transform->m->__get((int)3) - transform->m->__get((int)1));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)4).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->y = (transform->m->__get((int)7) - transform->m->__get((int)5));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)4).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->z = (transform->m->__get((int)11) - transform->m->__get((int)9));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)4).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->d = (transform->m->__get((int)15) - transform->m->__get((int)13));
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			::com::gamestudiohx::babylonhx::tools::math::Plane _this = frustumPlanes->__get((int)4).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(19)
			Float norm = ::Math_obj::sqrt((((_this->normal->x * _this->normal->x) + (_this->normal->y * _this->normal->y)) + (_this->normal->z * _this->normal->z)));		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(19)
			Float magnitude = (int)0;		HX_STACK_VAR(magnitude,"magnitude");
			HX_STACK_LINE(19)
			if (((norm != (int)0))){
				HX_STACK_LINE(19)
				magnitude = (Float(1.0) / Float(norm));
			}
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->x,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->y,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->z,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->d,magnitude);
		}
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)5).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->x = (transform->m->__get((int)3) + transform->m->__get((int)1));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)5).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->y = (transform->m->__get((int)7) + transform->m->__get((int)5));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)5).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->z = (transform->m->__get((int)11) + transform->m->__get((int)9));
		HX_STACK_LINE(19)
		frustumPlanes->__get((int)5).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->d = (transform->m->__get((int)15) + transform->m->__get((int)13));
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			::com::gamestudiohx::babylonhx::tools::math::Plane _this = frustumPlanes->__get((int)5).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(19)
			Float norm = ::Math_obj::sqrt((((_this->normal->x * _this->normal->x) + (_this->normal->y * _this->normal->y)) + (_this->normal->z * _this->normal->z)));		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(19)
			Float magnitude = (int)0;		HX_STACK_VAR(magnitude,"magnitude");
			HX_STACK_LINE(19)
			if (((norm != (int)0))){
				HX_STACK_LINE(19)
				magnitude = (Float(1.0) / Float(norm));
			}
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->x,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->y,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->normal->z,magnitude);
			HX_STACK_LINE(19)
			hx::MultEq(_this->d,magnitude);
		}
		HX_STACK_LINE(19)
		frustumPlanes;
	}
	HX_STACK_LINE(21)
	return frustumPlanes;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,GetPlanes,return )

Array< ::Dynamic > Frustum_obj::GetPlanesToRef( ::com::gamestudiohx::babylonhx::tools::math::Matrix transform,Array< ::Dynamic > frustumPlanes){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.tools.math.Frustum","GetPlanesToRef",0xca30e0f8,"com.gamestudiohx.babylonhx.tools.math.Frustum.GetPlanesToRef","com/gamestudiohx/babylonhx/tools/math/Frustum.hx",24,0x584d483c)
	HX_STACK_ARG(transform,"transform")
	HX_STACK_ARG(frustumPlanes,"frustumPlanes")
	HX_STACK_LINE(26)
	frustumPlanes->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->x = (transform->m->__get((int)3) + transform->m->__get((int)2));
	HX_STACK_LINE(27)
	frustumPlanes->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->y = (transform->m->__get((int)7) + transform->m->__get((int)6));
	HX_STACK_LINE(28)
	frustumPlanes->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->z = (transform->m->__get((int)10) + transform->m->__get((int)10));
	HX_STACK_LINE(29)
	frustumPlanes->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->d = (transform->m->__get((int)15) + transform->m->__get((int)14));
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		::com::gamestudiohx::babylonhx::tools::math::Plane _this = frustumPlanes->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(30)
		Float norm = ::Math_obj::sqrt((((_this->normal->x * _this->normal->x) + (_this->normal->y * _this->normal->y)) + (_this->normal->z * _this->normal->z)));		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(30)
		Float magnitude = (int)0;		HX_STACK_VAR(magnitude,"magnitude");
		HX_STACK_LINE(30)
		if (((norm != (int)0))){
			HX_STACK_LINE(30)
			magnitude = (Float(1.0) / Float(norm));
		}
		HX_STACK_LINE(30)
		hx::MultEq(_this->normal->x,magnitude);
		HX_STACK_LINE(30)
		hx::MultEq(_this->normal->y,magnitude);
		HX_STACK_LINE(30)
		hx::MultEq(_this->normal->z,magnitude);
		HX_STACK_LINE(30)
		hx::MultEq(_this->d,magnitude);
	}
	HX_STACK_LINE(33)
	frustumPlanes->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->x = (transform->m->__get((int)3) - transform->m->__get((int)2));
	HX_STACK_LINE(34)
	frustumPlanes->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->y = (transform->m->__get((int)7) - transform->m->__get((int)6));
	HX_STACK_LINE(35)
	frustumPlanes->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->z = (transform->m->__get((int)11) - transform->m->__get((int)10));
	HX_STACK_LINE(36)
	frustumPlanes->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->d = (transform->m->__get((int)15) - transform->m->__get((int)14));
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		::com::gamestudiohx::babylonhx::tools::math::Plane _this = frustumPlanes->__get((int)1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(37)
		Float norm = ::Math_obj::sqrt((((_this->normal->x * _this->normal->x) + (_this->normal->y * _this->normal->y)) + (_this->normal->z * _this->normal->z)));		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(37)
		Float magnitude = (int)0;		HX_STACK_VAR(magnitude,"magnitude");
		HX_STACK_LINE(37)
		if (((norm != (int)0))){
			HX_STACK_LINE(37)
			magnitude = (Float(1.0) / Float(norm));
		}
		HX_STACK_LINE(37)
		hx::MultEq(_this->normal->x,magnitude);
		HX_STACK_LINE(37)
		hx::MultEq(_this->normal->y,magnitude);
		HX_STACK_LINE(37)
		hx::MultEq(_this->normal->z,magnitude);
		HX_STACK_LINE(37)
		hx::MultEq(_this->d,magnitude);
	}
	HX_STACK_LINE(40)
	frustumPlanes->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->x = (transform->m->__get((int)3) + transform->m->__get((int)0));
	HX_STACK_LINE(41)
	frustumPlanes->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->y = (transform->m->__get((int)7) + transform->m->__get((int)4));
	HX_STACK_LINE(42)
	frustumPlanes->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->z = (transform->m->__get((int)11) + transform->m->__get((int)8));
	HX_STACK_LINE(43)
	frustumPlanes->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->d = (transform->m->__get((int)15) + transform->m->__get((int)12));
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		::com::gamestudiohx::babylonhx::tools::math::Plane _this = frustumPlanes->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(44)
		Float norm = ::Math_obj::sqrt((((_this->normal->x * _this->normal->x) + (_this->normal->y * _this->normal->y)) + (_this->normal->z * _this->normal->z)));		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(44)
		Float magnitude = (int)0;		HX_STACK_VAR(magnitude,"magnitude");
		HX_STACK_LINE(44)
		if (((norm != (int)0))){
			HX_STACK_LINE(44)
			magnitude = (Float(1.0) / Float(norm));
		}
		HX_STACK_LINE(44)
		hx::MultEq(_this->normal->x,magnitude);
		HX_STACK_LINE(44)
		hx::MultEq(_this->normal->y,magnitude);
		HX_STACK_LINE(44)
		hx::MultEq(_this->normal->z,magnitude);
		HX_STACK_LINE(44)
		hx::MultEq(_this->d,magnitude);
	}
	HX_STACK_LINE(47)
	frustumPlanes->__get((int)3).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->x = (transform->m->__get((int)3) - transform->m->__get((int)0));
	HX_STACK_LINE(48)
	frustumPlanes->__get((int)3).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->y = (transform->m->__get((int)7) - transform->m->__get((int)4));
	HX_STACK_LINE(49)
	frustumPlanes->__get((int)3).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->z = (transform->m->__get((int)11) - transform->m->__get((int)8));
	HX_STACK_LINE(50)
	frustumPlanes->__get((int)3).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->d = (transform->m->__get((int)15) - transform->m->__get((int)12));
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		::com::gamestudiohx::babylonhx::tools::math::Plane _this = frustumPlanes->__get((int)3).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(51)
		Float norm = ::Math_obj::sqrt((((_this->normal->x * _this->normal->x) + (_this->normal->y * _this->normal->y)) + (_this->normal->z * _this->normal->z)));		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(51)
		Float magnitude = (int)0;		HX_STACK_VAR(magnitude,"magnitude");
		HX_STACK_LINE(51)
		if (((norm != (int)0))){
			HX_STACK_LINE(51)
			magnitude = (Float(1.0) / Float(norm));
		}
		HX_STACK_LINE(51)
		hx::MultEq(_this->normal->x,magnitude);
		HX_STACK_LINE(51)
		hx::MultEq(_this->normal->y,magnitude);
		HX_STACK_LINE(51)
		hx::MultEq(_this->normal->z,magnitude);
		HX_STACK_LINE(51)
		hx::MultEq(_this->d,magnitude);
	}
	HX_STACK_LINE(54)
	frustumPlanes->__get((int)4).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->x = (transform->m->__get((int)3) - transform->m->__get((int)1));
	HX_STACK_LINE(55)
	frustumPlanes->__get((int)4).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->y = (transform->m->__get((int)7) - transform->m->__get((int)5));
	HX_STACK_LINE(56)
	frustumPlanes->__get((int)4).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->z = (transform->m->__get((int)11) - transform->m->__get((int)9));
	HX_STACK_LINE(57)
	frustumPlanes->__get((int)4).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->d = (transform->m->__get((int)15) - transform->m->__get((int)13));
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		::com::gamestudiohx::babylonhx::tools::math::Plane _this = frustumPlanes->__get((int)4).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(58)
		Float norm = ::Math_obj::sqrt((((_this->normal->x * _this->normal->x) + (_this->normal->y * _this->normal->y)) + (_this->normal->z * _this->normal->z)));		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(58)
		Float magnitude = (int)0;		HX_STACK_VAR(magnitude,"magnitude");
		HX_STACK_LINE(58)
		if (((norm != (int)0))){
			HX_STACK_LINE(58)
			magnitude = (Float(1.0) / Float(norm));
		}
		HX_STACK_LINE(58)
		hx::MultEq(_this->normal->x,magnitude);
		HX_STACK_LINE(58)
		hx::MultEq(_this->normal->y,magnitude);
		HX_STACK_LINE(58)
		hx::MultEq(_this->normal->z,magnitude);
		HX_STACK_LINE(58)
		hx::MultEq(_this->d,magnitude);
	}
	HX_STACK_LINE(61)
	frustumPlanes->__get((int)5).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->x = (transform->m->__get((int)3) + transform->m->__get((int)1));
	HX_STACK_LINE(62)
	frustumPlanes->__get((int)5).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->y = (transform->m->__get((int)7) + transform->m->__get((int)5));
	HX_STACK_LINE(63)
	frustumPlanes->__get((int)5).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->normal->z = (transform->m->__get((int)11) + transform->m->__get((int)9));
	HX_STACK_LINE(64)
	frustumPlanes->__get((int)5).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >()->d = (transform->m->__get((int)15) + transform->m->__get((int)13));
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		::com::gamestudiohx::babylonhx::tools::math::Plane _this = frustumPlanes->__get((int)5).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Plane >();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(65)
		Float norm = ::Math_obj::sqrt((((_this->normal->x * _this->normal->x) + (_this->normal->y * _this->normal->y)) + (_this->normal->z * _this->normal->z)));		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(65)
		Float magnitude = (int)0;		HX_STACK_VAR(magnitude,"magnitude");
		HX_STACK_LINE(65)
		if (((norm != (int)0))){
			HX_STACK_LINE(65)
			magnitude = (Float(1.0) / Float(norm));
		}
		HX_STACK_LINE(65)
		hx::MultEq(_this->normal->x,magnitude);
		HX_STACK_LINE(65)
		hx::MultEq(_this->normal->y,magnitude);
		HX_STACK_LINE(65)
		hx::MultEq(_this->normal->z,magnitude);
		HX_STACK_LINE(65)
		hx::MultEq(_this->d,magnitude);
	}
	HX_STACK_LINE(67)
	return frustumPlanes;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Frustum_obj,GetPlanesToRef,return )


Frustum_obj::Frustum_obj()
{
}

Dynamic Frustum_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"GetPlanes") ) { return GetPlanes_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"GetPlanesToRef") ) { return GetPlanesToRef_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Frustum_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Frustum_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("GetPlanes"),
	HX_CSTRING("GetPlanesToRef"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Frustum_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Frustum_obj::__mClass,"__mClass");
};

#endif

Class Frustum_obj::__mClass;

void Frustum_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.tools.math.Frustum"), hx::TCanCast< Frustum_obj> ,sStaticFields,sMemberFields,
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

void Frustum_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools
} // end namespace math
