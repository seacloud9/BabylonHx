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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_Light
#include <com/gamestudiohx/babylonhx/lights/Light.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_SpotLight
#include <com/gamestudiohx/babylonhx/lights/SpotLight.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_gl_GL
#include <openfl/gl/GL.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace lights{

Void SpotLight_obj::__construct(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 position,::com::gamestudiohx::babylonhx::tools::math::Vector3 direction,Float angle,Float exponent,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.SpotLight","new",0x2afa6427,"com.gamestudiohx.babylonhx.lights.SpotLight.new","com/gamestudiohx/babylonhx/lights/SpotLight.hx",24,0xa0160fe9)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(position,"position")
HX_STACK_ARG(direction,"direction")
HX_STACK_ARG(angle,"angle")
HX_STACK_ARG(exponent,"exponent")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(25)
	super::__construct(name,scene);
	HX_STACK_LINE(27)
	this->position = position;
	HX_STACK_LINE(28)
	this->direction = direction;
	HX_STACK_LINE(29)
	this->angle = angle;
	HX_STACK_LINE(30)
	this->exponent = exponent;
	HX_STACK_LINE(31)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(1.0,1.0,1.0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(31)
	this->diffuse = _g;
	HX_STACK_LINE(32)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(1.0,1.0,1.0);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(32)
	this->specular = _g1;
}
;
	return null();
}

//SpotLight_obj::~SpotLight_obj() { }

Dynamic SpotLight_obj::__CreateEmpty() { return  new SpotLight_obj; }
hx::ObjectPtr< SpotLight_obj > SpotLight_obj::__new(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 position,::com::gamestudiohx::babylonhx::tools::math::Vector3 direction,Float angle,Float exponent,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< SpotLight_obj > result = new SpotLight_obj();
	result->__construct(name,position,direction,angle,exponent,scene);
	return result;}

Dynamic SpotLight_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpotLight_obj > result = new SpotLight_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void SpotLight_obj::transferToEffect( ::com::gamestudiohx::babylonhx::materials::Effect effect,::String __o_positionUniformName,::String __o_directionUniformName){
::String positionUniformName = __o_positionUniformName.Default(HX_CSTRING(""));
::String directionUniformName = __o_directionUniformName.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.SpotLight","transferToEffect",0xe78a6c90,"com.gamestudiohx.babylonhx.lights.SpotLight.transferToEffect","com/gamestudiohx/babylonhx/lights/SpotLight.hx",35,0xa0160fe9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(effect,"effect")
	HX_STACK_ARG(positionUniformName,"positionUniformName")
	HX_STACK_ARG(directionUniformName,"directionUniformName")
{
		HX_STACK_LINE(36)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 normalizeDirection = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(normalizeDirection,"normalizeDirection");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::lights::SpotLight_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/SpotLight.hx",38,0xa0160fe9)
				{
					HX_STACK_LINE(38)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _g = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(38)
					return (_g != null());
				}
				return null();
			}
		};
		HX_STACK_LINE(38)
		if (((  (((this->parent != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(39)
			if (((this->_transformedDirection == null()))){
				HX_STACK_LINE(40)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(40)
				this->_transformedDirection = _g1;
			}
			HX_STACK_LINE(42)
			if (((this->_transformedPosition == null()))){
				HX_STACK_LINE(43)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(43)
				this->_transformedPosition = _g2;
			}
			HX_STACK_LINE(46)
			::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorldMatrix = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorldMatrix,"parentWorldMatrix");
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->position;		HX_STACK_VAR(vector,"vector");
				HX_STACK_LINE(48)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_transformedPosition;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(48)
				Float x = ((((vector->x * parentWorldMatrix->m->__get((int)0)) + (vector->y * parentWorldMatrix->m->__get((int)4))) + (vector->z * parentWorldMatrix->m->__get((int)8))) + parentWorldMatrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(48)
				Float y = ((((vector->x * parentWorldMatrix->m->__get((int)1)) + (vector->y * parentWorldMatrix->m->__get((int)5))) + (vector->z * parentWorldMatrix->m->__get((int)9))) + parentWorldMatrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(48)
				Float z = ((((vector->x * parentWorldMatrix->m->__get((int)2)) + (vector->y * parentWorldMatrix->m->__get((int)6))) + (vector->z * parentWorldMatrix->m->__get((int)10))) + parentWorldMatrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(48)
				Float w = ((((vector->x * parentWorldMatrix->m->__get((int)3)) + (vector->y * parentWorldMatrix->m->__get((int)7))) + (vector->z * parentWorldMatrix->m->__get((int)11))) + parentWorldMatrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(48)
				result->x = (Float(x) / Float(w));
				HX_STACK_LINE(48)
				result->y = (Float(y) / Float(w));
				HX_STACK_LINE(48)
				result->z = (Float(z) / Float(w));
			}
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->direction;		HX_STACK_VAR(vector,"vector");
				HX_STACK_LINE(49)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_transformedDirection;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(49)
				result->x = (((vector->x * parentWorldMatrix->m->__get((int)0)) + (vector->y * parentWorldMatrix->m->__get((int)4))) + (vector->z * parentWorldMatrix->m->__get((int)8)));
				HX_STACK_LINE(49)
				result->y = (((vector->x * parentWorldMatrix->m->__get((int)1)) + (vector->y * parentWorldMatrix->m->__get((int)5))) + (vector->z * parentWorldMatrix->m->__get((int)9)));
				HX_STACK_LINE(49)
				result->z = (((vector->x * parentWorldMatrix->m->__get((int)2)) + (vector->y * parentWorldMatrix->m->__get((int)6))) + (vector->z * parentWorldMatrix->m->__get((int)10)));
			}
			HX_STACK_LINE(51)
			{
				HX_STACK_LINE(51)
				Float x = this->_transformedPosition->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(51)
				Float y = this->_transformedPosition->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(51)
				Float z = this->_transformedPosition->z;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(51)
				Float w = this->exponent;		HX_STACK_VAR(w,"w");
				struct _Function_3_1{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &positionUniformName,Float &x){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/SpotLight.hx",51,0xa0160fe9)
						{
							HX_STACK_LINE(51)
							Array< Float > _g3 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(51)
							Float _g4 = _g3->__get((int)0);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(51)
							return (_g4 == x);
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &positionUniformName,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/SpotLight.hx",51,0xa0160fe9)
						{
							HX_STACK_LINE(51)
							Array< Float > _g5 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(51)
							Float _g6 = _g5->__get((int)1);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(51)
							return (_g6 == y);
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &positionUniformName,Float &z){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/SpotLight.hx",51,0xa0160fe9)
						{
							HX_STACK_LINE(51)
							Array< Float > _g7 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(51)
							Float _g8 = _g7->__get((int)2);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(51)
							return (_g8 == z);
						}
						return null();
					}
				};
				struct _Function_3_4{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &positionUniformName,Float &w){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/SpotLight.hx",51,0xa0160fe9)
						{
							HX_STACK_LINE(51)
							Array< Float > _g9 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(51)
							Float _g10 = _g9->__get((int)3);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(51)
							return (_g10 == w);
						}
						return null();
					}
				};
				HX_STACK_LINE(51)
				if ((!(((  (((  (((  (((  ((effect->_valueCache->exists(positionUniformName))) ? bool(_Function_3_1::Block(effect,positionUniformName,x)) : bool(false) ))) ? bool(_Function_3_2::Block(effect,positionUniformName,y)) : bool(false) ))) ? bool(_Function_3_3::Block(effect,positionUniformName,z)) : bool(false) ))) ? bool(_Function_3_4::Block(effect,positionUniformName,w)) : bool(false) ))))){
					HX_STACK_LINE(51)
					if ((!(effect->_valueCache->exists(positionUniformName)))){
						HX_STACK_LINE(51)
						effect->_valueCache->set(positionUniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add(w));
					}
					else{
						HX_STACK_LINE(51)
						Array< Float > _g11 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(51)
						_g11[(int)0] = x;
						HX_STACK_LINE(51)
						Array< Float > _g12 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(51)
						_g12[(int)1] = y;
						HX_STACK_LINE(51)
						Array< Float > _g13 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(51)
						_g13[(int)2] = z;
						HX_STACK_LINE(51)
						Array< Float > _g14 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(51)
						_g14[(int)3] = w;
					}
					HX_STACK_LINE(51)
					{
						HX_STACK_LINE(51)
						Dynamic uniform = effect->getUniform(positionUniformName);		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(51)
						if (((uniform != null()))){
							HX_STACK_LINE(51)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(51)
							::openfl::gl::GL_obj::lime_gl_uniform4f(location,x,y,z,w);
						}
					}
				}
			}
			HX_STACK_LINE(52)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g15;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->_transformedDirection;		HX_STACK_VAR(vector,"vector");
				HX_STACK_LINE(52)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(52)
				{
					HX_STACK_LINE(52)
					{
						HX_STACK_LINE(52)
						result->x = vector->x;
						HX_STACK_LINE(52)
						result->y = vector->y;
						HX_STACK_LINE(52)
						result->z = vector->z;
					}
					HX_STACK_LINE(52)
					{
						HX_STACK_LINE(52)
						Float len = ::Math_obj::sqrt((((result->x * result->x) + (result->y * result->y)) + (result->z * result->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(52)
						if (((len != (int)0))){
							HX_STACK_LINE(52)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(52)
							hx::MultEq(result->x,num);
							HX_STACK_LINE(52)
							hx::MultEq(result->y,num);
							HX_STACK_LINE(52)
							hx::MultEq(result->z,num);
						}
					}
				}
				HX_STACK_LINE(52)
				_g15 = result;
			}
			HX_STACK_LINE(52)
			normalizeDirection = _g15;
		}
		else{
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				Float x = this->position->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(54)
				Float y = this->position->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(54)
				Float z = this->position->z;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(54)
				Float w = this->exponent;		HX_STACK_VAR(w,"w");
				struct _Function_3_1{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &positionUniformName,Float &x){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/SpotLight.hx",54,0xa0160fe9)
						{
							HX_STACK_LINE(54)
							Array< Float > _g16 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g16,"_g16");
							HX_STACK_LINE(54)
							Float _g17 = _g16->__get((int)0);		HX_STACK_VAR(_g17,"_g17");
							HX_STACK_LINE(54)
							return (_g17 == x);
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &positionUniformName,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/SpotLight.hx",54,0xa0160fe9)
						{
							HX_STACK_LINE(54)
							Array< Float > _g18 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g18,"_g18");
							HX_STACK_LINE(54)
							Float _g19 = _g18->__get((int)1);		HX_STACK_VAR(_g19,"_g19");
							HX_STACK_LINE(54)
							return (_g19 == y);
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &positionUniformName,Float &z){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/SpotLight.hx",54,0xa0160fe9)
						{
							HX_STACK_LINE(54)
							Array< Float > _g20 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g20,"_g20");
							HX_STACK_LINE(54)
							Float _g21 = _g20->__get((int)2);		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(54)
							return (_g21 == z);
						}
						return null();
					}
				};
				struct _Function_3_4{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &positionUniformName,Float &w){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/SpotLight.hx",54,0xa0160fe9)
						{
							HX_STACK_LINE(54)
							Array< Float > _g22 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g22,"_g22");
							HX_STACK_LINE(54)
							Float _g23 = _g22->__get((int)3);		HX_STACK_VAR(_g23,"_g23");
							HX_STACK_LINE(54)
							return (_g23 == w);
						}
						return null();
					}
				};
				HX_STACK_LINE(54)
				if ((!(((  (((  (((  (((  ((effect->_valueCache->exists(positionUniformName))) ? bool(_Function_3_1::Block(effect,positionUniformName,x)) : bool(false) ))) ? bool(_Function_3_2::Block(effect,positionUniformName,y)) : bool(false) ))) ? bool(_Function_3_3::Block(effect,positionUniformName,z)) : bool(false) ))) ? bool(_Function_3_4::Block(effect,positionUniformName,w)) : bool(false) ))))){
					HX_STACK_LINE(54)
					if ((!(effect->_valueCache->exists(positionUniformName)))){
						HX_STACK_LINE(54)
						effect->_valueCache->set(positionUniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add(w));
					}
					else{
						HX_STACK_LINE(54)
						Array< Float > _g24 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g24,"_g24");
						HX_STACK_LINE(54)
						_g24[(int)0] = x;
						HX_STACK_LINE(54)
						Array< Float > _g25 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(54)
						_g25[(int)1] = y;
						HX_STACK_LINE(54)
						Array< Float > _g26 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(54)
						_g26[(int)2] = z;
						HX_STACK_LINE(54)
						Array< Float > _g27 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(54)
						_g27[(int)3] = w;
					}
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						Dynamic uniform = effect->getUniform(positionUniformName);		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(54)
						if (((uniform != null()))){
							HX_STACK_LINE(54)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(54)
							::openfl::gl::GL_obj::lime_gl_uniform4f(location,x,y,z,w);
						}
					}
				}
			}
			HX_STACK_LINE(55)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g28;		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->direction;		HX_STACK_VAR(vector,"vector");
				HX_STACK_LINE(55)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(55)
				{
					HX_STACK_LINE(55)
					{
						HX_STACK_LINE(55)
						result->x = vector->x;
						HX_STACK_LINE(55)
						result->y = vector->y;
						HX_STACK_LINE(55)
						result->z = vector->z;
					}
					HX_STACK_LINE(55)
					{
						HX_STACK_LINE(55)
						Float len = ::Math_obj::sqrt((((result->x * result->x) + (result->y * result->y)) + (result->z * result->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(55)
						if (((len != (int)0))){
							HX_STACK_LINE(55)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(55)
							hx::MultEq(result->x,num);
							HX_STACK_LINE(55)
							hx::MultEq(result->y,num);
							HX_STACK_LINE(55)
							hx::MultEq(result->z,num);
						}
					}
				}
				HX_STACK_LINE(55)
				_g28 = result;
			}
			HX_STACK_LINE(55)
			normalizeDirection = _g28;
		}
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			Float x = normalizeDirection->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(58)
			Float y = normalizeDirection->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(58)
			Float z = normalizeDirection->z;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(58)
			Float w = ::Math_obj::cos((this->angle * 0.5));		HX_STACK_VAR(w,"w");
			struct _Function_2_1{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &x,::String &directionUniformName){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/SpotLight.hx",58,0xa0160fe9)
					{
						HX_STACK_LINE(58)
						Array< Float > _g29 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g29,"_g29");
						HX_STACK_LINE(58)
						Float _g30 = _g29->__get((int)0);		HX_STACK_VAR(_g30,"_g30");
						HX_STACK_LINE(58)
						return (_g30 == x);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &directionUniformName,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/SpotLight.hx",58,0xa0160fe9)
					{
						HX_STACK_LINE(58)
						Array< Float > _g31 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g31,"_g31");
						HX_STACK_LINE(58)
						Float _g32 = _g31->__get((int)1);		HX_STACK_VAR(_g32,"_g32");
						HX_STACK_LINE(58)
						return (_g32 == y);
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &directionUniformName,Float &z){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/SpotLight.hx",58,0xa0160fe9)
					{
						HX_STACK_LINE(58)
						Array< Float > _g33 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g33,"_g33");
						HX_STACK_LINE(58)
						Float _g34 = _g33->__get((int)2);		HX_STACK_VAR(_g34,"_g34");
						HX_STACK_LINE(58)
						return (_g34 == z);
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &w,::String &directionUniformName){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/SpotLight.hx",58,0xa0160fe9)
					{
						HX_STACK_LINE(58)
						Array< Float > _g35 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g35,"_g35");
						HX_STACK_LINE(58)
						Float _g36 = _g35->__get((int)3);		HX_STACK_VAR(_g36,"_g36");
						HX_STACK_LINE(58)
						return (_g36 == w);
					}
					return null();
				}
			};
			HX_STACK_LINE(58)
			if ((!(((  (((  (((  (((  ((effect->_valueCache->exists(directionUniformName))) ? bool(_Function_2_1::Block(effect,x,directionUniformName)) : bool(false) ))) ? bool(_Function_2_2::Block(effect,directionUniformName,y)) : bool(false) ))) ? bool(_Function_2_3::Block(effect,directionUniformName,z)) : bool(false) ))) ? bool(_Function_2_4::Block(effect,w,directionUniformName)) : bool(false) ))))){
				HX_STACK_LINE(58)
				if ((!(effect->_valueCache->exists(directionUniformName)))){
					HX_STACK_LINE(58)
					effect->_valueCache->set(directionUniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add(w));
				}
				else{
					HX_STACK_LINE(58)
					Array< Float > _g37 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g37,"_g37");
					HX_STACK_LINE(58)
					_g37[(int)0] = x;
					HX_STACK_LINE(58)
					Array< Float > _g38 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g38,"_g38");
					HX_STACK_LINE(58)
					_g38[(int)1] = y;
					HX_STACK_LINE(58)
					Array< Float > _g39 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g39,"_g39");
					HX_STACK_LINE(58)
					_g39[(int)2] = z;
					HX_STACK_LINE(58)
					Array< Float > _g40 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g40,"_g40");
					HX_STACK_LINE(58)
					_g40[(int)3] = w;
				}
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					Dynamic uniform = effect->getUniform(directionUniformName);		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(58)
					if (((uniform != null()))){
						HX_STACK_LINE(58)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(58)
						::openfl::gl::GL_obj::lime_gl_uniform4f(location,x,y,z,w);
					}
				}
			}
		}
	}
return null();
}


::com::gamestudiohx::babylonhx::tools::math::Matrix SpotLight_obj::_getWorldMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.SpotLight","_getWorldMatrix",0xa48d0823,"com.gamestudiohx.babylonhx.lights.SpotLight._getWorldMatrix","com/gamestudiohx/babylonhx/lights/SpotLight.hx",61,0xa0160fe9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	if (((this->_worldMatrix == null()))){
		HX_STACK_LINE(63)
		::com::gamestudiohx::babylonhx::tools::math::Matrix _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(63)
			result->m[(int)0] = 1.0;
			HX_STACK_LINE(63)
			result->m[(int)1] = (int)0;
			HX_STACK_LINE(63)
			result->m[(int)2] = (int)0;
			HX_STACK_LINE(63)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(63)
			result->m[(int)4] = (int)0;
			HX_STACK_LINE(63)
			result->m[(int)5] = 1.0;
			HX_STACK_LINE(63)
			result->m[(int)6] = (int)0;
			HX_STACK_LINE(63)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(63)
			result->m[(int)8] = (int)0;
			HX_STACK_LINE(63)
			result->m[(int)9] = (int)0;
			HX_STACK_LINE(63)
			result->m[(int)10] = 1.0;
			HX_STACK_LINE(63)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(63)
			result->m[(int)12] = (int)0;
			HX_STACK_LINE(63)
			result->m[(int)13] = (int)0;
			HX_STACK_LINE(63)
			result->m[(int)14] = (int)0;
			HX_STACK_LINE(63)
			result->m[(int)15] = 1.0;
			HX_STACK_LINE(63)
			_g = result;
		}
		HX_STACK_LINE(63)
		this->_worldMatrix = _g;
	}
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_worldMatrix;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			result->m[(int)0] = 1.0;
			HX_STACK_LINE(66)
			result->m[(int)1] = (int)0;
			HX_STACK_LINE(66)
			result->m[(int)2] = (int)0;
			HX_STACK_LINE(66)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(66)
			result->m[(int)4] = (int)0;
			HX_STACK_LINE(66)
			result->m[(int)5] = 1.0;
			HX_STACK_LINE(66)
			result->m[(int)6] = (int)0;
			HX_STACK_LINE(66)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(66)
			result->m[(int)8] = (int)0;
			HX_STACK_LINE(66)
			result->m[(int)9] = (int)0;
			HX_STACK_LINE(66)
			result->m[(int)10] = 1.0;
			HX_STACK_LINE(66)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(66)
			result->m[(int)12] = this->position->x;
			HX_STACK_LINE(66)
			result->m[(int)13] = this->position->y;
			HX_STACK_LINE(66)
			result->m[(int)14] = this->position->z;
			HX_STACK_LINE(66)
			result->m[(int)15] = 1.0;
			HX_STACK_LINE(66)
			result;
		}
	}
	HX_STACK_LINE(68)
	return this->_worldMatrix;
}



SpotLight_obj::SpotLight_obj()
{
}

void SpotLight_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpotLight);
	HX_MARK_MEMBER_NAME(_transformedPosition,"_transformedPosition");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(_transformedDirection,"_transformedDirection");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(exponent,"exponent");
	HX_MARK_MEMBER_NAME(_worldMatrix,"_worldMatrix");
	::com::gamestudiohx::babylonhx::lights::Light_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpotLight_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_transformedPosition,"_transformedPosition");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(_transformedDirection,"_transformedDirection");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(exponent,"exponent");
	HX_VISIT_MEMBER_NAME(_worldMatrix,"_worldMatrix");
	::com::gamestudiohx::babylonhx::lights::Light_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SpotLight_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"exponent") ) { return exponent; }
		break;
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpotLight_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"exponent") ) { exponent=inValue.Cast< Float >(); return inValue; }
		break;
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

void SpotLight_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_transformedPosition"));
	outFields->push(HX_CSTRING("direction"));
	outFields->push(HX_CSTRING("_transformedDirection"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("exponent"));
	outFields->push(HX_CSTRING("_worldMatrix"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(SpotLight_obj,_transformedPosition),HX_CSTRING("_transformedPosition")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(SpotLight_obj,direction),HX_CSTRING("direction")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(SpotLight_obj,_transformedDirection),HX_CSTRING("_transformedDirection")},
	{hx::fsFloat,(int)offsetof(SpotLight_obj,angle),HX_CSTRING("angle")},
	{hx::fsFloat,(int)offsetof(SpotLight_obj,exponent),HX_CSTRING("exponent")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(SpotLight_obj,_worldMatrix),HX_CSTRING("_worldMatrix")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_transformedPosition"),
	HX_CSTRING("direction"),
	HX_CSTRING("_transformedDirection"),
	HX_CSTRING("angle"),
	HX_CSTRING("exponent"),
	HX_CSTRING("_worldMatrix"),
	HX_CSTRING("transferToEffect"),
	HX_CSTRING("_getWorldMatrix"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpotLight_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpotLight_obj::__mClass,"__mClass");
};

#endif

Class SpotLight_obj::__mClass;

void SpotLight_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.lights.SpotLight"), hx::TCanCast< SpotLight_obj> ,sStaticFields,sMemberFields,
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

void SpotLight_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace lights
