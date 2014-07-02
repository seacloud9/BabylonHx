#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Node
#include <com/gamestudiohx/babylonhx/Node.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Scene
#include <com/gamestudiohx/babylonhx/Scene.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_DirectionalLight
#include <com/gamestudiohx/babylonhx/lights/DirectionalLight.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_Light
#include <com/gamestudiohx/babylonhx/lights/Light.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Effect
#include <com/gamestudiohx/babylonhx/materials/Effect.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color3
#include <com/gamestudiohx/babylonhx/tools/math/Color3.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_gl_GL
#include <openfl/gl/GL.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace lights{

Void DirectionalLight_obj::__construct(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 direction,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.DirectionalLight","new",0x354c05dd,"com.gamestudiohx.babylonhx.lights.DirectionalLight.new","com/gamestudiohx/babylonhx/lights/DirectionalLight.hx",24,0x86dd8973)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(direction,"direction")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(25)
	super::__construct(name,scene);
	HX_STACK_LINE(27)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((direction->x * (int)-1),(direction->y * (int)-1),(direction->z * (int)-1));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(27)
	this->position = _g;
	HX_STACK_LINE(28)
	this->direction = direction;
	HX_STACK_LINE(29)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(1.0,1.0,1.0);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(29)
	this->diffuse = _g1;
	HX_STACK_LINE(30)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(1.0,1.0,1.0);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(30)
	this->specular = _g2;
}
;
	return null();
}

//DirectionalLight_obj::~DirectionalLight_obj() { }

Dynamic DirectionalLight_obj::__CreateEmpty() { return  new DirectionalLight_obj; }
hx::ObjectPtr< DirectionalLight_obj > DirectionalLight_obj::__new(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 direction,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< DirectionalLight_obj > result = new DirectionalLight_obj();
	result->__construct(name,direction,scene);
	return result;}

Dynamic DirectionalLight_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DirectionalLight_obj > result = new DirectionalLight_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool DirectionalLight_obj::_computeTransformedPosition( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.DirectionalLight","_computeTransformedPosition",0x76a4aef9,"com.gamestudiohx.babylonhx.lights.DirectionalLight._computeTransformedPosition","com/gamestudiohx/babylonhx/lights/DirectionalLight.hx",33,0x86dd8973)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::lights::DirectionalLight_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/DirectionalLight.hx",35,0x86dd8973)
			{
				HX_STACK_LINE(35)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _g = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(35)
				return (_g != null());
			}
			return null();
		}
	};
	HX_STACK_LINE(35)
	if (((  (((this->parent != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(36)
		if (((this->_transformedPosition == null()))){
			HX_STACK_LINE(37)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(37)
			this->_transformedPosition = _g1;
		}
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->position;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(40)
			::com::gamestudiohx::babylonhx::tools::math::Matrix transformation = this->parent->getWorldMatrix();		HX_STACK_VAR(transformation,"transformation");
			HX_STACK_LINE(40)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_transformedPosition;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(40)
			Float x = ((((vector->x * transformation->m->__get((int)0)) + (vector->y * transformation->m->__get((int)4))) + (vector->z * transformation->m->__get((int)8))) + transformation->m->__get((int)12));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(40)
			Float y = ((((vector->x * transformation->m->__get((int)1)) + (vector->y * transformation->m->__get((int)5))) + (vector->z * transformation->m->__get((int)9))) + transformation->m->__get((int)13));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(40)
			Float z = ((((vector->x * transformation->m->__get((int)2)) + (vector->y * transformation->m->__get((int)6))) + (vector->z * transformation->m->__get((int)10))) + transformation->m->__get((int)14));		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(40)
			Float w = ((((vector->x * transformation->m->__get((int)3)) + (vector->y * transformation->m->__get((int)7))) + (vector->z * transformation->m->__get((int)11))) + transformation->m->__get((int)15));		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(40)
			result->x = (Float(x) / Float(w));
			HX_STACK_LINE(40)
			result->y = (Float(y) / Float(w));
			HX_STACK_LINE(40)
			result->z = (Float(z) / Float(w));
		}
		HX_STACK_LINE(41)
		ret = true;
	}
	HX_STACK_LINE(44)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(DirectionalLight_obj,_computeTransformedPosition,return )

Void DirectionalLight_obj::transferToEffect( ::com::gamestudiohx::babylonhx::materials::Effect effect,::String __o_positionUniformName,::String __o_directionUniformName){
::String positionUniformName = __o_positionUniformName.Default(HX_CSTRING(""));
::String directionUniformName = __o_directionUniformName.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.DirectionalLight","transferToEffect",0x6741711a,"com.gamestudiohx.babylonhx.lights.DirectionalLight.transferToEffect","com/gamestudiohx/babylonhx/lights/DirectionalLight.hx",48,0x86dd8973)
	HX_STACK_THIS(this)
	HX_STACK_ARG(effect,"effect")
	HX_STACK_ARG(positionUniformName,"positionUniformName")
	HX_STACK_ARG(directionUniformName,"directionUniformName")
{
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::lights::DirectionalLight_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/DirectionalLight.hx",48,0x86dd8973)
				{
					HX_STACK_LINE(48)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _g = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(48)
					return (_g != null());
				}
				return null();
			}
		};
		HX_STACK_LINE(48)
		if (((  (((this->parent != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(49)
			if (((this->_transformedDirection == null()))){
				HX_STACK_LINE(50)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(50)
				this->_transformedDirection = _g1;
			}
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->direction;		HX_STACK_VAR(vector,"vector");
				HX_STACK_LINE(53)
				::com::gamestudiohx::babylonhx::tools::math::Matrix transformation = this->parent->getWorldMatrix();		HX_STACK_VAR(transformation,"transformation");
				HX_STACK_LINE(53)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_transformedDirection;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(53)
				result->x = (((vector->x * transformation->m->__get((int)0)) + (vector->y * transformation->m->__get((int)4))) + (vector->z * transformation->m->__get((int)8)));
				HX_STACK_LINE(53)
				result->y = (((vector->x * transformation->m->__get((int)1)) + (vector->y * transformation->m->__get((int)5))) + (vector->z * transformation->m->__get((int)9)));
				HX_STACK_LINE(53)
				result->z = (((vector->x * transformation->m->__get((int)2)) + (vector->y * transformation->m->__get((int)6))) + (vector->z * transformation->m->__get((int)10)));
			}
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				Float x = this->_transformedDirection->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(54)
				Float y = this->_transformedDirection->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(54)
				Float z = this->_transformedDirection->z;		HX_STACK_VAR(z,"z");
				struct _Function_3_1{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &x,::String &directionUniformName){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/DirectionalLight.hx",54,0x86dd8973)
						{
							HX_STACK_LINE(54)
							Array< Float > _g2 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(54)
							Float _g3 = _g2->__get((int)0);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(54)
							return (_g3 == x);
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &directionUniformName,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/DirectionalLight.hx",54,0x86dd8973)
						{
							HX_STACK_LINE(54)
							Array< Float > _g4 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(54)
							Float _g5 = _g4->__get((int)1);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(54)
							return (_g5 == y);
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &directionUniformName,Float &z){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/DirectionalLight.hx",54,0x86dd8973)
						{
							HX_STACK_LINE(54)
							Array< Float > _g6 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(54)
							Float _g7 = _g6->__get((int)2);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(54)
							return (_g7 == z);
						}
						return null();
					}
				};
				struct _Function_3_4{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &directionUniformName){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/DirectionalLight.hx",54,0x86dd8973)
						{
							HX_STACK_LINE(54)
							Array< Float > _g8 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(54)
							Float _g9 = _g8->__get((int)3);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(54)
							return (_g9 == (int)1);
						}
						return null();
					}
				};
				HX_STACK_LINE(54)
				if ((!(((  (((  (((  (((  ((effect->_valueCache->exists(directionUniformName))) ? bool(_Function_3_1::Block(effect,x,directionUniformName)) : bool(false) ))) ? bool(_Function_3_2::Block(effect,directionUniformName,y)) : bool(false) ))) ? bool(_Function_3_3::Block(effect,directionUniformName,z)) : bool(false) ))) ? bool(_Function_3_4::Block(effect,directionUniformName)) : bool(false) ))))){
					HX_STACK_LINE(54)
					if ((!(effect->_valueCache->exists(directionUniformName)))){
						HX_STACK_LINE(54)
						effect->_valueCache->set(directionUniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add((int)1));
					}
					else{
						HX_STACK_LINE(54)
						Array< Float > _g10 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(54)
						_g10[(int)0] = x;
						HX_STACK_LINE(54)
						Array< Float > _g11 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(54)
						_g11[(int)1] = y;
						HX_STACK_LINE(54)
						Array< Float > _g12 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(54)
						_g12[(int)2] = z;
						HX_STACK_LINE(54)
						Array< Float > _g13 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(54)
						_g13[(int)3] = (int)1;
					}
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						Dynamic uniform = effect->getUniform(directionUniformName);		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(54)
						if (((uniform != null()))){
							HX_STACK_LINE(54)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(54)
							::openfl::gl::GL_obj::lime_gl_uniform4f(location,x,y,z,(int)1);
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(56)
			Float x = this->direction->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(56)
			Float y = this->direction->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(56)
			Float z = this->direction->z;		HX_STACK_VAR(z,"z");
			struct _Function_2_1{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &x,::String &directionUniformName){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/DirectionalLight.hx",56,0x86dd8973)
					{
						HX_STACK_LINE(56)
						Array< Float > _g14 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(56)
						Float _g15 = _g14->__get((int)0);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(56)
						return (_g15 == x);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &directionUniformName,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/DirectionalLight.hx",56,0x86dd8973)
					{
						HX_STACK_LINE(56)
						Array< Float > _g16 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(56)
						Float _g17 = _g16->__get((int)1);		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(56)
						return (_g17 == y);
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &directionUniformName,Float &z){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/DirectionalLight.hx",56,0x86dd8973)
					{
						HX_STACK_LINE(56)
						Array< Float > _g18 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(56)
						Float _g19 = _g18->__get((int)2);		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(56)
						return (_g19 == z);
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &directionUniformName){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/DirectionalLight.hx",56,0x86dd8973)
					{
						HX_STACK_LINE(56)
						Array< Float > _g20 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(56)
						Float _g21 = _g20->__get((int)3);		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(56)
						return (_g21 == (int)1);
					}
					return null();
				}
			};
			HX_STACK_LINE(56)
			if ((!(((  (((  (((  (((  ((effect->_valueCache->exists(directionUniformName))) ? bool(_Function_2_1::Block(effect,x,directionUniformName)) : bool(false) ))) ? bool(_Function_2_2::Block(effect,directionUniformName,y)) : bool(false) ))) ? bool(_Function_2_3::Block(effect,directionUniformName,z)) : bool(false) ))) ? bool(_Function_2_4::Block(effect,directionUniformName)) : bool(false) ))))){
				HX_STACK_LINE(56)
				if ((!(effect->_valueCache->exists(directionUniformName)))){
					HX_STACK_LINE(56)
					effect->_valueCache->set(directionUniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add((int)1));
				}
				else{
					HX_STACK_LINE(56)
					Array< Float > _g22 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(56)
					_g22[(int)0] = x;
					HX_STACK_LINE(56)
					Array< Float > _g23 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(56)
					_g23[(int)1] = y;
					HX_STACK_LINE(56)
					Array< Float > _g24 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(56)
					_g24[(int)2] = z;
					HX_STACK_LINE(56)
					Array< Float > _g25 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(56)
					_g25[(int)3] = (int)1;
				}
				HX_STACK_LINE(56)
				{
					HX_STACK_LINE(56)
					Dynamic uniform = effect->getUniform(directionUniformName);		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(56)
					if (((uniform != null()))){
						HX_STACK_LINE(56)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(56)
						::openfl::gl::GL_obj::lime_gl_uniform4f(location,x,y,z,(int)1);
					}
				}
			}
		}
	}
return null();
}


::com::gamestudiohx::babylonhx::tools::math::Matrix DirectionalLight_obj::_getWorldMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.DirectionalLight","_getWorldMatrix",0x0a2562d9,"com.gamestudiohx.babylonhx.lights.DirectionalLight._getWorldMatrix","com/gamestudiohx/babylonhx/lights/DirectionalLight.hx",60,0x86dd8973)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	if (((this->_worldMatrix == null()))){
		HX_STACK_LINE(62)
		::com::gamestudiohx::babylonhx::tools::math::Matrix _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(62)
			result->m[(int)0] = 1.0;
			HX_STACK_LINE(62)
			result->m[(int)1] = (int)0;
			HX_STACK_LINE(62)
			result->m[(int)2] = (int)0;
			HX_STACK_LINE(62)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(62)
			result->m[(int)4] = (int)0;
			HX_STACK_LINE(62)
			result->m[(int)5] = 1.0;
			HX_STACK_LINE(62)
			result->m[(int)6] = (int)0;
			HX_STACK_LINE(62)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(62)
			result->m[(int)8] = (int)0;
			HX_STACK_LINE(62)
			result->m[(int)9] = (int)0;
			HX_STACK_LINE(62)
			result->m[(int)10] = 1.0;
			HX_STACK_LINE(62)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(62)
			result->m[(int)12] = (int)0;
			HX_STACK_LINE(62)
			result->m[(int)13] = (int)0;
			HX_STACK_LINE(62)
			result->m[(int)14] = (int)0;
			HX_STACK_LINE(62)
			result->m[(int)15] = 1.0;
			HX_STACK_LINE(62)
			_g = result;
		}
		HX_STACK_LINE(62)
		this->_worldMatrix = _g;
	}
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_worldMatrix;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			result->m[(int)0] = 1.0;
			HX_STACK_LINE(65)
			result->m[(int)1] = (int)0;
			HX_STACK_LINE(65)
			result->m[(int)2] = (int)0;
			HX_STACK_LINE(65)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(65)
			result->m[(int)4] = (int)0;
			HX_STACK_LINE(65)
			result->m[(int)5] = 1.0;
			HX_STACK_LINE(65)
			result->m[(int)6] = (int)0;
			HX_STACK_LINE(65)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(65)
			result->m[(int)8] = (int)0;
			HX_STACK_LINE(65)
			result->m[(int)9] = (int)0;
			HX_STACK_LINE(65)
			result->m[(int)10] = 1.0;
			HX_STACK_LINE(65)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(65)
			result->m[(int)12] = this->position->x;
			HX_STACK_LINE(65)
			result->m[(int)13] = this->position->y;
			HX_STACK_LINE(65)
			result->m[(int)14] = this->position->z;
			HX_STACK_LINE(65)
			result->m[(int)15] = 1.0;
			HX_STACK_LINE(65)
			result;
		}
	}
	HX_STACK_LINE(67)
	return this->_worldMatrix;
}



DirectionalLight_obj::DirectionalLight_obj()
{
}

void DirectionalLight_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DirectionalLight);
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(_worldMatrix,"_worldMatrix");
	HX_MARK_MEMBER_NAME(_transformedPosition,"_transformedPosition");
	HX_MARK_MEMBER_NAME(_transformedDirection,"_transformedDirection");
	::com::gamestudiohx::babylonhx::lights::Light_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DirectionalLight_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(_worldMatrix,"_worldMatrix");
	HX_VISIT_MEMBER_NAME(_transformedPosition,"_transformedPosition");
	HX_VISIT_MEMBER_NAME(_transformedDirection,"_transformedDirection");
	::com::gamestudiohx::babylonhx::lights::Light_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DirectionalLight_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return direction; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_worldMatrix") ) { return _worldMatrix; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_getWorldMatrix") ) { return _getWorldMatrix_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transferToEffect") ) { return transferToEffect_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_transformedPosition") ) { return _transformedPosition; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_transformedDirection") ) { return _transformedDirection; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_computeTransformedPosition") ) { return _computeTransformedPosition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DirectionalLight_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_worldMatrix") ) { _worldMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_transformedPosition") ) { _transformedPosition=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_transformedDirection") ) { _transformedDirection=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DirectionalLight_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("direction"));
	outFields->push(HX_CSTRING("_worldMatrix"));
	outFields->push(HX_CSTRING("_transformedPosition"));
	outFields->push(HX_CSTRING("_transformedDirection"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(DirectionalLight_obj,direction),HX_CSTRING("direction")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(DirectionalLight_obj,_worldMatrix),HX_CSTRING("_worldMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(DirectionalLight_obj,_transformedPosition),HX_CSTRING("_transformedPosition")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(DirectionalLight_obj,_transformedDirection),HX_CSTRING("_transformedDirection")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("direction"),
	HX_CSTRING("_worldMatrix"),
	HX_CSTRING("_transformedPosition"),
	HX_CSTRING("_transformedDirection"),
	HX_CSTRING("_computeTransformedPosition"),
	HX_CSTRING("transferToEffect"),
	HX_CSTRING("_getWorldMatrix"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DirectionalLight_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DirectionalLight_obj::__mClass,"__mClass");
};

#endif

Class DirectionalLight_obj::__mClass;

void DirectionalLight_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.lights.DirectionalLight"), hx::TCanCast< DirectionalLight_obj> ,sStaticFields,sMemberFields,
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

void DirectionalLight_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace lights
