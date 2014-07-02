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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_HemisphericLight
#include <com/gamestudiohx/babylonhx/lights/HemisphericLight.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_Light
#include <com/gamestudiohx/babylonhx/lights/Light.h>
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

Void HemisphericLight_obj::__construct(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 direction,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.HemisphericLight","new",0x58ba972e,"com.gamestudiohx.babylonhx.lights.HemisphericLight.new","com/gamestudiohx/babylonhx/lights/HemisphericLight.hx",24,0xe89a4d42)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(direction,"direction")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(25)
	super::__construct(name,scene);
	HX_STACK_LINE(27)
	this->direction = direction;
	HX_STACK_LINE(28)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(1.0,1.0,1.0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(28)
	this->diffuse = _g;
	HX_STACK_LINE(29)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(1.0,1.0,1.0);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(29)
	this->specular = _g1;
	HX_STACK_LINE(30)
	::com::gamestudiohx::babylonhx::tools::math::Color3 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new(0.0,0.0,0.0);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(30)
	this->groundColor = _g2;
}
;
	return null();
}

//HemisphericLight_obj::~HemisphericLight_obj() { }

Dynamic HemisphericLight_obj::__CreateEmpty() { return  new HemisphericLight_obj; }
hx::ObjectPtr< HemisphericLight_obj > HemisphericLight_obj::__new(::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 direction,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< HemisphericLight_obj > result = new HemisphericLight_obj();
	result->__construct(name,direction,scene);
	return result;}

Dynamic HemisphericLight_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HemisphericLight_obj > result = new HemisphericLight_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator HemisphericLight_obj::getShadowGenerator( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.HemisphericLight","getShadowGenerator",0xdf29c54f,"com.gamestudiohx.babylonhx.lights.HemisphericLight.getShadowGenerator","com/gamestudiohx/babylonhx/lights/HemisphericLight.hx",34,0xe89a4d42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	return null();
}


Void HemisphericLight_obj::transferToEffect( ::com::gamestudiohx::babylonhx::materials::Effect effect,::String __o_directionUniformName,::String __o_groundColorUniformName){
::String directionUniformName = __o_directionUniformName.Default(HX_CSTRING(""));
::String groundColorUniformName = __o_groundColorUniformName.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.HemisphericLight","transferToEffect",0xfc23a129,"com.gamestudiohx.babylonhx.lights.HemisphericLight.transferToEffect","com/gamestudiohx/babylonhx/lights/HemisphericLight.hx",37,0xe89a4d42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(effect,"effect")
	HX_STACK_ARG(directionUniformName,"directionUniformName")
	HX_STACK_ARG(groundColorUniformName,"groundColorUniformName")
{
		HX_STACK_LINE(38)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 normalizeDirection;		HX_STACK_VAR(normalizeDirection,"normalizeDirection");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->direction;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(38)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				{
					HX_STACK_LINE(38)
					result->x = vector->x;
					HX_STACK_LINE(38)
					result->y = vector->y;
					HX_STACK_LINE(38)
					result->z = vector->z;
				}
				HX_STACK_LINE(38)
				{
					HX_STACK_LINE(38)
					Float len = ::Math_obj::sqrt((((result->x * result->x) + (result->y * result->y)) + (result->z * result->z)));		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(38)
					if (((len != (int)0))){
						HX_STACK_LINE(38)
						Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
						HX_STACK_LINE(38)
						hx::MultEq(result->x,num);
						HX_STACK_LINE(38)
						hx::MultEq(result->y,num);
						HX_STACK_LINE(38)
						hx::MultEq(result->z,num);
					}
				}
			}
			HX_STACK_LINE(38)
			normalizeDirection = result;
		}
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			Float x = normalizeDirection->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(39)
			Float y = normalizeDirection->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(39)
			Float z = normalizeDirection->z;		HX_STACK_VAR(z,"z");
			struct _Function_2_1{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &x,::String &directionUniformName){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/HemisphericLight.hx",39,0xe89a4d42)
					{
						HX_STACK_LINE(39)
						Array< Float > _g = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(39)
						Float _g1 = _g->__get((int)0);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(39)
						return (_g1 == x);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &directionUniformName,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/HemisphericLight.hx",39,0xe89a4d42)
					{
						HX_STACK_LINE(39)
						Array< Float > _g2 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(39)
						Float _g3 = _g2->__get((int)1);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(39)
						return (_g3 == y);
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &directionUniformName,Float &z){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/HemisphericLight.hx",39,0xe89a4d42)
					{
						HX_STACK_LINE(39)
						Array< Float > _g4 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(39)
						Float _g5 = _g4->__get((int)2);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(39)
						return (_g5 == z);
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &directionUniformName){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/HemisphericLight.hx",39,0xe89a4d42)
					{
						HX_STACK_LINE(39)
						Array< Float > _g6 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(39)
						Float _g7 = _g6->__get((int)3);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(39)
						return (_g7 == (int)0);
					}
					return null();
				}
			};
			HX_STACK_LINE(39)
			if ((!(((  (((  (((  (((  ((effect->_valueCache->exists(directionUniformName))) ? bool(_Function_2_1::Block(effect,x,directionUniformName)) : bool(false) ))) ? bool(_Function_2_2::Block(effect,directionUniformName,y)) : bool(false) ))) ? bool(_Function_2_3::Block(effect,directionUniformName,z)) : bool(false) ))) ? bool(_Function_2_4::Block(effect,directionUniformName)) : bool(false) ))))){
				HX_STACK_LINE(39)
				if ((!(effect->_valueCache->exists(directionUniformName)))){
					HX_STACK_LINE(39)
					effect->_valueCache->set(directionUniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add((int)0));
				}
				else{
					HX_STACK_LINE(39)
					Array< Float > _g8 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(39)
					_g8[(int)0] = x;
					HX_STACK_LINE(39)
					Array< Float > _g9 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(39)
					_g9[(int)1] = y;
					HX_STACK_LINE(39)
					Array< Float > _g10 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(39)
					_g10[(int)2] = z;
					HX_STACK_LINE(39)
					Array< Float > _g11 = effect->_valueCache->get(directionUniformName);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(39)
					_g11[(int)3] = (int)0;
				}
				HX_STACK_LINE(39)
				{
					HX_STACK_LINE(39)
					Dynamic uniform = effect->getUniform(directionUniformName);		HX_STACK_VAR(uniform,"uniform");
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
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::com::gamestudiohx::babylonhx::tools::math::Color3 color3;		HX_STACK_VAR(color3,"color3");
			HX_STACK_LINE(40)
			{
				HX_STACK_LINE(40)
				::com::gamestudiohx::babylonhx::tools::math::Color3 _this = this->groundColor;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(40)
				Float scale = this->intensity;		HX_STACK_VAR(scale,"scale");
				HX_STACK_LINE(40)
				color3 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new((_this->r * scale),(_this->g * scale),(_this->b * scale));
			}
			struct _Function_2_1{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &groundColorUniformName,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/HemisphericLight.hx",40,0xe89a4d42)
					{
						HX_STACK_LINE(40)
						Array< Float > _g12 = effect->_valueCache->get(groundColorUniformName);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(40)
						Float _g13 = _g12->__get((int)0);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(40)
						return (_g13 == color3->r);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &groundColorUniformName,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/HemisphericLight.hx",40,0xe89a4d42)
					{
						HX_STACK_LINE(40)
						Array< Float > _g14 = effect->_valueCache->get(groundColorUniformName);		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(40)
						Float _g15 = _g14->__get((int)1);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(40)
						return (_g15 == color3->g);
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::String &groundColorUniformName,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/HemisphericLight.hx",40,0xe89a4d42)
					{
						HX_STACK_LINE(40)
						Array< Float > _g16 = effect->_valueCache->get(groundColorUniformName);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(40)
						Float _g17 = _g16->__get((int)2);		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(40)
						return (_g17 == color3->b);
					}
					return null();
				}
			};
			HX_STACK_LINE(40)
			if ((!(((  (((  (((  ((effect->_valueCache->exists(groundColorUniformName))) ? bool(_Function_2_1::Block(effect,groundColorUniformName,color3)) : bool(false) ))) ? bool(_Function_2_2::Block(effect,groundColorUniformName,color3)) : bool(false) ))) ? bool(_Function_2_3::Block(effect,groundColorUniformName,color3)) : bool(false) ))))){
				HX_STACK_LINE(40)
				{
					HX_STACK_LINE(40)
					Float x = color3->r;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(40)
					Float y = color3->g;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(40)
					Float z = color3->b;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(40)
					if ((!(effect->_valueCache->exists(groundColorUniformName)))){
						HX_STACK_LINE(40)
						effect->_valueCache->set(groundColorUniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z));
					}
					else{
						HX_STACK_LINE(40)
						Array< Float > _g18 = effect->_valueCache->get(groundColorUniformName);		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(40)
						_g18[(int)0] = x;
						HX_STACK_LINE(40)
						Array< Float > _g19 = effect->_valueCache->get(groundColorUniformName);		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(40)
						_g19[(int)1] = y;
						HX_STACK_LINE(40)
						Array< Float > _g20 = effect->_valueCache->get(groundColorUniformName);		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(40)
						_g20[(int)2] = z;
					}
				}
				HX_STACK_LINE(40)
				{
					HX_STACK_LINE(40)
					Dynamic uniform = effect->getUniform(groundColorUniformName);		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(40)
					if (((uniform != null()))){
						HX_STACK_LINE(40)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(40)
						::openfl::gl::GL_obj::lime_gl_uniform3f(location,color3->r,color3->g,color3->b);
					}
				}
			}
		}
	}
return null();
}


::com::gamestudiohx::babylonhx::tools::math::Matrix HemisphericLight_obj::_getWorldMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.HemisphericLight","_getWorldMatrix",0xb39129aa,"com.gamestudiohx.babylonhx.lights.HemisphericLight._getWorldMatrix","com/gamestudiohx/babylonhx/lights/HemisphericLight.hx",43,0xe89a4d42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	if (((this->_worldMatrix == null()))){
		HX_STACK_LINE(45)
		::com::gamestudiohx::babylonhx::tools::math::Matrix _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(45)
			result->m[(int)0] = 1.0;
			HX_STACK_LINE(45)
			result->m[(int)1] = (int)0;
			HX_STACK_LINE(45)
			result->m[(int)2] = (int)0;
			HX_STACK_LINE(45)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(45)
			result->m[(int)4] = (int)0;
			HX_STACK_LINE(45)
			result->m[(int)5] = 1.0;
			HX_STACK_LINE(45)
			result->m[(int)6] = (int)0;
			HX_STACK_LINE(45)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(45)
			result->m[(int)8] = (int)0;
			HX_STACK_LINE(45)
			result->m[(int)9] = (int)0;
			HX_STACK_LINE(45)
			result->m[(int)10] = 1.0;
			HX_STACK_LINE(45)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(45)
			result->m[(int)12] = (int)0;
			HX_STACK_LINE(45)
			result->m[(int)13] = (int)0;
			HX_STACK_LINE(45)
			result->m[(int)14] = (int)0;
			HX_STACK_LINE(45)
			result->m[(int)15] = 1.0;
			HX_STACK_LINE(45)
			_g = result;
		}
		HX_STACK_LINE(45)
		this->_worldMatrix = _g;
	}
	HX_STACK_LINE(48)
	return this->_worldMatrix;
}



HemisphericLight_obj::HemisphericLight_obj()
{
}

void HemisphericLight_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HemisphericLight);
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(groundColor,"groundColor");
	HX_MARK_MEMBER_NAME(_worldMatrix,"_worldMatrix");
	::com::gamestudiohx::babylonhx::lights::Light_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HemisphericLight_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(groundColor,"groundColor");
	HX_VISIT_MEMBER_NAME(_worldMatrix,"_worldMatrix");
	::com::gamestudiohx::babylonhx::lights::Light_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HemisphericLight_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return direction; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"groundColor") ) { return groundColor; }
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
	case 18:
		if (HX_FIELD_EQ(inName,"getShadowGenerator") ) { return getShadowGenerator_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HemisphericLight_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"groundColor") ) { groundColor=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color3 >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_worldMatrix") ) { _worldMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HemisphericLight_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("direction"));
	outFields->push(HX_CSTRING("groundColor"));
	outFields->push(HX_CSTRING("_worldMatrix"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(HemisphericLight_obj,direction),HX_CSTRING("direction")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color3*/ ,(int)offsetof(HemisphericLight_obj,groundColor),HX_CSTRING("groundColor")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(HemisphericLight_obj,_worldMatrix),HX_CSTRING("_worldMatrix")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("direction"),
	HX_CSTRING("groundColor"),
	HX_CSTRING("_worldMatrix"),
	HX_CSTRING("getShadowGenerator"),
	HX_CSTRING("transferToEffect"),
	HX_CSTRING("_getWorldMatrix"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HemisphericLight_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HemisphericLight_obj::__mClass,"__mClass");
};

#endif

Class HemisphericLight_obj::__mClass;

void HemisphericLight_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.lights.HemisphericLight"), hx::TCanCast< HemisphericLight_obj> ,sStaticFields,sMemberFields,
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

void HemisphericLight_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace lights
