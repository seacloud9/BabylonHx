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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_PointLight
#include <com/gamestudiohx/babylonhx/lights/PointLight.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_shadows_ShadowGenerator
#include <com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.h>
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

Void PointLight_obj::__construct(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 position,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.PointLight","new",0x19385877,"com.gamestudiohx.babylonhx.lights.PointLight.new","com/gamestudiohx/babylonhx/lights/PointLight.hx",22,0x865c9819)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(position,"position")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(23)
	super::__construct(name,scene);
	HX_STACK_LINE(25)
	this->position = position;
	HX_STACK_LINE(26)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(1.0,1.0,1.0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	this->diffuse = _g;
	HX_STACK_LINE(27)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(1.0,1.0,1.0);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(27)
	this->specular = _g1;
}
;
	return null();
}

//PointLight_obj::~PointLight_obj() { }

Dynamic PointLight_obj::__CreateEmpty() { return  new PointLight_obj; }
hx::ObjectPtr< PointLight_obj > PointLight_obj::__new(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 position,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< PointLight_obj > result = new PointLight_obj();
	result->__construct(name,position,scene);
	return result;}

Dynamic PointLight_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PointLight_obj > result = new PointLight_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void PointLight_obj::transferToEffect( ::com::gamestudiohx::babylonhx::materials::Effect effect,::String __o_positionUniformName,::String __o_directionUniformName){
::String positionUniformName = __o_positionUniformName.Default(HX_CSTRING(""));
::String directionUniformName = __o_directionUniformName.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.PointLight","transferToEffect",0x20ce0640,"com.gamestudiohx.babylonhx.lights.PointLight.transferToEffect","com/gamestudiohx/babylonhx/lights/PointLight.hx",31,0x865c9819)
	HX_STACK_THIS(this)
	HX_STACK_ARG(effect,"effect")
	HX_STACK_ARG(positionUniformName,"positionUniformName")
	HX_STACK_ARG(directionUniformName,"directionUniformName")
{
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::lights::PointLight_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/PointLight.hx",31,0x865c9819)
				{
					HX_STACK_LINE(31)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _g = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(31)
					return (_g != null());
				}
				return null();
			}
		};
		HX_STACK_LINE(31)
		if (((  (((this->parent != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(32)
			if (((this->_transformedPosition == null()))){
				HX_STACK_LINE(33)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(33)
				this->_transformedPosition = _g1;
			}
			HX_STACK_LINE(36)
			{
				HX_STACK_LINE(36)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->position;		HX_STACK_VAR(vector,"vector");
				HX_STACK_LINE(36)
				::com::gamestudiohx::babylonhx::tools::math::Matrix transformation = this->parent->getWorldMatrix();		HX_STACK_VAR(transformation,"transformation");
				HX_STACK_LINE(36)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_transformedPosition;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(36)
				Float x = ((((vector->x * transformation->m->__get((int)0)) + (vector->y * transformation->m->__get((int)4))) + (vector->z * transformation->m->__get((int)8))) + transformation->m->__get((int)12));		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(36)
				Float y = ((((vector->x * transformation->m->__get((int)1)) + (vector->y * transformation->m->__get((int)5))) + (vector->z * transformation->m->__get((int)9))) + transformation->m->__get((int)13));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(36)
				Float z = ((((vector->x * transformation->m->__get((int)2)) + (vector->y * transformation->m->__get((int)6))) + (vector->z * transformation->m->__get((int)10))) + transformation->m->__get((int)14));		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(36)
				Float w = ((((vector->x * transformation->m->__get((int)3)) + (vector->y * transformation->m->__get((int)7))) + (vector->z * transformation->m->__get((int)11))) + transformation->m->__get((int)15));		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(36)
				result->x = (Float(x) / Float(w));
				HX_STACK_LINE(36)
				result->y = (Float(y) / Float(w));
				HX_STACK_LINE(36)
				result->z = (Float(z) / Float(w));
			}
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				Float x = this->_transformedPosition->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(37)
				Float y = this->_transformedPosition->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(37)
				Float z = this->_transformedPosition->z;		HX_STACK_VAR(z,"z");
				struct _Function_3_1{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &positionUniformName,Float &x){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/PointLight.hx",37,0x865c9819)
						{
							HX_STACK_LINE(37)
							Array< Float > _g2 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(37)
							Float _g3 = _g2->__get((int)0);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(37)
							return (_g3 == x);
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &positionUniformName,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/PointLight.hx",37,0x865c9819)
						{
							HX_STACK_LINE(37)
							Array< Float > _g4 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(37)
							Float _g5 = _g4->__get((int)1);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(37)
							return (_g5 == y);
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &positionUniformName,Float &z){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/PointLight.hx",37,0x865c9819)
						{
							HX_STACK_LINE(37)
							Array< Float > _g6 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(37)
							Float _g7 = _g6->__get((int)2);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(37)
							return (_g7 == z);
						}
						return null();
					}
				};
				struct _Function_3_4{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &positionUniformName){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/PointLight.hx",37,0x865c9819)
						{
							HX_STACK_LINE(37)
							Array< Float > _g8 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(37)
							Float _g9 = _g8->__get((int)3);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(37)
							return (_g9 == (int)0);
						}
						return null();
					}
				};
				HX_STACK_LINE(37)
				if ((!(((  (((  (((  (((  ((effect->_valueCache->exists(positionUniformName))) ? bool(_Function_3_1::Block(effect,positionUniformName,x)) : bool(false) ))) ? bool(_Function_3_2::Block(effect,positionUniformName,y)) : bool(false) ))) ? bool(_Function_3_3::Block(effect,positionUniformName,z)) : bool(false) ))) ? bool(_Function_3_4::Block(effect,positionUniformName)) : bool(false) ))))){
					HX_STACK_LINE(37)
					if ((!(effect->_valueCache->exists(positionUniformName)))){
						HX_STACK_LINE(37)
						effect->_valueCache->set(positionUniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add((int)0));
					}
					else{
						HX_STACK_LINE(37)
						Array< Float > _g10 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(37)
						_g10[(int)0] = x;
						HX_STACK_LINE(37)
						Array< Float > _g11 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(37)
						_g11[(int)1] = y;
						HX_STACK_LINE(37)
						Array< Float > _g12 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(37)
						_g12[(int)2] = z;
						HX_STACK_LINE(37)
						Array< Float > _g13 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(37)
						_g13[(int)3] = (int)0;
					}
					HX_STACK_LINE(37)
					{
						HX_STACK_LINE(37)
						Dynamic uniform = effect->getUniform(positionUniformName);		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(37)
						if (((uniform != null()))){
							HX_STACK_LINE(37)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(37)
							::openfl::gl::GL_obj::lime_gl_uniform4f(location,x,y,z,(int)0);
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(39)
			Float x = this->position->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(39)
			Float y = this->position->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(39)
			Float z = this->position->z;		HX_STACK_VAR(z,"z");
			struct _Function_2_1{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &positionUniformName,Float &x){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/PointLight.hx",39,0x865c9819)
					{
						HX_STACK_LINE(39)
						Array< Float > _g14 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(39)
						Float _g15 = _g14->__get((int)0);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(39)
						return (_g15 == x);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &positionUniformName,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/PointLight.hx",39,0x865c9819)
					{
						HX_STACK_LINE(39)
						Array< Float > _g16 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(39)
						Float _g17 = _g16->__get((int)1);		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(39)
						return (_g17 == y);
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &positionUniformName,Float &z){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/PointLight.hx",39,0x865c9819)
					{
						HX_STACK_LINE(39)
						Array< Float > _g18 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(39)
						Float _g19 = _g18->__get((int)2);		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(39)
						return (_g19 == z);
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &positionUniformName){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/PointLight.hx",39,0x865c9819)
					{
						HX_STACK_LINE(39)
						Array< Float > _g20 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(39)
						Float _g21 = _g20->__get((int)3);		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(39)
						return (_g21 == (int)0);
					}
					return null();
				}
			};
			HX_STACK_LINE(39)
			if ((!(((  (((  (((  (((  ((effect->_valueCache->exists(positionUniformName))) ? bool(_Function_2_1::Block(effect,positionUniformName,x)) : bool(false) ))) ? bool(_Function_2_2::Block(effect,positionUniformName,y)) : bool(false) ))) ? bool(_Function_2_3::Block(effect,positionUniformName,z)) : bool(false) ))) ? bool(_Function_2_4::Block(effect,positionUniformName)) : bool(false) ))))){
				HX_STACK_LINE(39)
				if ((!(effect->_valueCache->exists(positionUniformName)))){
					HX_STACK_LINE(39)
					effect->_valueCache->set(positionUniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add((int)0));
				}
				else{
					HX_STACK_LINE(39)
					Array< Float > _g22 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(39)
					_g22[(int)0] = x;
					HX_STACK_LINE(39)
					Array< Float > _g23 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(39)
					_g23[(int)1] = y;
					HX_STACK_LINE(39)
					Array< Float > _g24 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(39)
					_g24[(int)2] = z;
					HX_STACK_LINE(39)
					Array< Float > _g25 = effect->_valueCache->get(positionUniformName);		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(39)
					_g25[(int)3] = (int)0;
				}
				HX_STACK_LINE(39)
				{
					HX_STACK_LINE(39)
					Dynamic uniform = effect->getUniform(positionUniformName);		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(39)
					if (((uniform != null()))){
						HX_STACK_LINE(39)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(39)
						::openfl::gl::GL_obj::lime_gl_uniform4f(location,x,y,z,(int)0);
					}
				}
			}
		}
	}
return null();
}


::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator PointLight_obj::getShadowGenerator( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.PointLight","getShadowGenerator",0x4f08de26,"com.gamestudiohx.babylonhx.lights.PointLight.getShadowGenerator","com/gamestudiohx/babylonhx/lights/PointLight.hx",44,0x865c9819)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	return null();
}


::com::gamestudiohx::babylonhx::tools::math::Matrix PointLight_obj::_getWorldMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.PointLight","_getWorldMatrix",0xbe103473,"com.gamestudiohx.babylonhx.lights.PointLight._getWorldMatrix","com/gamestudiohx/babylonhx/lights/PointLight.hx",47,0x865c9819)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	if (((this->_worldMatrix == null()))){
		HX_STACK_LINE(49)
		::com::gamestudiohx::babylonhx::tools::math::Matrix _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(49)
			result->m[(int)0] = 1.0;
			HX_STACK_LINE(49)
			result->m[(int)1] = (int)0;
			HX_STACK_LINE(49)
			result->m[(int)2] = (int)0;
			HX_STACK_LINE(49)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(49)
			result->m[(int)4] = (int)0;
			HX_STACK_LINE(49)
			result->m[(int)5] = 1.0;
			HX_STACK_LINE(49)
			result->m[(int)6] = (int)0;
			HX_STACK_LINE(49)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(49)
			result->m[(int)8] = (int)0;
			HX_STACK_LINE(49)
			result->m[(int)9] = (int)0;
			HX_STACK_LINE(49)
			result->m[(int)10] = 1.0;
			HX_STACK_LINE(49)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(49)
			result->m[(int)12] = (int)0;
			HX_STACK_LINE(49)
			result->m[(int)13] = (int)0;
			HX_STACK_LINE(49)
			result->m[(int)14] = (int)0;
			HX_STACK_LINE(49)
			result->m[(int)15] = 1.0;
			HX_STACK_LINE(49)
			_g = result;
		}
		HX_STACK_LINE(49)
		this->_worldMatrix = _g;
	}
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_worldMatrix;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			result->m[(int)0] = 1.0;
			HX_STACK_LINE(52)
			result->m[(int)1] = (int)0;
			HX_STACK_LINE(52)
			result->m[(int)2] = (int)0;
			HX_STACK_LINE(52)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(52)
			result->m[(int)4] = (int)0;
			HX_STACK_LINE(52)
			result->m[(int)5] = 1.0;
			HX_STACK_LINE(52)
			result->m[(int)6] = (int)0;
			HX_STACK_LINE(52)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(52)
			result->m[(int)8] = (int)0;
			HX_STACK_LINE(52)
			result->m[(int)9] = (int)0;
			HX_STACK_LINE(52)
			result->m[(int)10] = 1.0;
			HX_STACK_LINE(52)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(52)
			result->m[(int)12] = this->position->x;
			HX_STACK_LINE(52)
			result->m[(int)13] = this->position->y;
			HX_STACK_LINE(52)
			result->m[(int)14] = this->position->z;
			HX_STACK_LINE(52)
			result->m[(int)15] = 1.0;
			HX_STACK_LINE(52)
			result;
		}
	}
	HX_STACK_LINE(54)
	return this->_worldMatrix;
}



PointLight_obj::PointLight_obj()
{
}

void PointLight_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PointLight);
	HX_MARK_MEMBER_NAME(_worldMatrix,"_worldMatrix");
	HX_MARK_MEMBER_NAME(_transformedPosition,"_transformedPosition");
	::com::gamestudiohx::babylonhx::lights::Light_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PointLight_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_worldMatrix,"_worldMatrix");
	HX_VISIT_MEMBER_NAME(_transformedPosition,"_transformedPosition");
	::com::gamestudiohx::babylonhx::lights::Light_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PointLight_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_worldMatrix") ) { return _worldMatrix; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_getWorldMatrix") ) { return _getWorldMatrix_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transferToEffect") ) { return transferToEffect_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getShadowGenerator") ) { return getShadowGenerator_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_transformedPosition") ) { return _transformedPosition; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PointLight_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_worldMatrix") ) { _worldMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_transformedPosition") ) { _transformedPosition=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PointLight_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_worldMatrix"));
	outFields->push(HX_CSTRING("_transformedPosition"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(PointLight_obj,_worldMatrix),HX_CSTRING("_worldMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(PointLight_obj,_transformedPosition),HX_CSTRING("_transformedPosition")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_worldMatrix"),
	HX_CSTRING("_transformedPosition"),
	HX_CSTRING("transferToEffect"),
	HX_CSTRING("getShadowGenerator"),
	HX_CSTRING("_getWorldMatrix"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PointLight_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PointLight_obj::__mClass,"__mClass");
};

#endif

Class PointLight_obj::__mClass;

void PointLight_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.lights.PointLight"), hx::TCanCast< PointLight_obj> ,sStaticFields,sMemberFields,
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

void PointLight_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace lights
