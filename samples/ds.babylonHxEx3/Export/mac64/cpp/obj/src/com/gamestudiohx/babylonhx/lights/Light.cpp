#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Node
#include <com/gamestudiohx/babylonhx/Node.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Scene
#include <com/gamestudiohx/babylonhx/Scene.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_animations_Animation
#include <com/gamestudiohx/babylonhx/animations/Animation.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_IGetSetVerticesData
#include <com/gamestudiohx/babylonhx/mesh/IGetSetVerticesData.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_Mesh
#include <com/gamestudiohx/babylonhx/mesh/Mesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color3
#include <com/gamestudiohx/babylonhx/tools/math/Color3.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace lights{

Void Light_obj::__construct(::String name,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.Light","new",0x97a3a709,"com.gamestudiohx.babylonhx.lights.Light.new","com/gamestudiohx/babylonhx/lights/Light.hx",18,0x9735df47)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(20)
	this->intensity = 1.0;
	HX_STACK_LINE(32)
	super::__construct(scene);
	HX_STACK_LINE(34)
	this->name = name;
	HX_STACK_LINE(35)
	this->id = name;
	HX_STACK_LINE(36)
	this->_childrenFlag = (int)1;
	HX_STACK_LINE(38)
	this->_scene = scene;
	HX_STACK_LINE(40)
	this->_scene->lights->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(43)
	this->animations = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(46)
	this->excludedMeshes = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//Light_obj::~Light_obj() { }

Dynamic Light_obj::__CreateEmpty() { return  new Light_obj; }
hx::ObjectPtr< Light_obj > Light_obj::__new(::String name,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< Light_obj > result = new Light_obj();
	result->__construct(name,scene);
	return result;}

Dynamic Light_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Light_obj > result = new Light_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::com::gamestudiohx::babylonhx::Scene Light_obj::getScene( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.Light","getScene",0x54814d8d,"com.gamestudiohx.babylonhx.lights.Light.getScene","com/gamestudiohx/babylonhx/lights/Light.hx",50,0x9735df47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	return this->_scene;
}


HX_DEFINE_DYNAMIC_FUNC0(Light_obj,getScene,return )

::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator Light_obj::getShadowGenerator( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.Light","getShadowGenerator",0x06fcc3d4,"com.gamestudiohx.babylonhx.lights.Light.getShadowGenerator","com/gamestudiohx/babylonhx/lights/Light.hx",54,0x9735df47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	return this->_shadowGenerator;
}


HX_DEFINE_DYNAMIC_FUNC0(Light_obj,getShadowGenerator,return )

Void Light_obj::transferToEffect( ::com::gamestudiohx::babylonhx::materials::Effect effect,::String __o_positionUniformName,::String __o_directionUniformName){
::String positionUniformName = __o_positionUniformName.Default(HX_CSTRING(""));
::String directionUniformName = __o_directionUniformName.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.Light","transferToEffect",0x91c3846e,"com.gamestudiohx.babylonhx.lights.Light.transferToEffect","com/gamestudiohx/babylonhx/lights/Light.hx",57,0x9735df47)
	HX_STACK_THIS(this)
	HX_STACK_ARG(effect,"effect")
	HX_STACK_ARG(positionUniformName,"positionUniformName")
	HX_STACK_ARG(directionUniformName,"directionUniformName")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Light_obj,transferToEffect,(void))

::com::gamestudiohx::babylonhx::tools::math::Matrix Light_obj::_getWorldMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.Light","_getWorldMatrix",0x1f001605,"com.gamestudiohx.babylonhx.lights.Light._getWorldMatrix","com/gamestudiohx/babylonhx/lights/Light.hx",62,0x9735df47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(62)
	result->m[(int)0] = (int)0;
	HX_STACK_LINE(62)
	result->m[(int)1] = (int)0;
	HX_STACK_LINE(62)
	result->m[(int)2] = (int)0;
	HX_STACK_LINE(62)
	result->m[(int)3] = (int)0;
	HX_STACK_LINE(62)
	result->m[(int)4] = (int)0;
	HX_STACK_LINE(62)
	result->m[(int)5] = (int)0;
	HX_STACK_LINE(62)
	result->m[(int)6] = (int)0;
	HX_STACK_LINE(62)
	result->m[(int)7] = (int)0;
	HX_STACK_LINE(62)
	result->m[(int)8] = (int)0;
	HX_STACK_LINE(62)
	result->m[(int)9] = (int)0;
	HX_STACK_LINE(62)
	result->m[(int)10] = (int)0;
	HX_STACK_LINE(62)
	result->m[(int)11] = (int)0;
	HX_STACK_LINE(62)
	result->m[(int)12] = (int)0;
	HX_STACK_LINE(62)
	result->m[(int)13] = (int)0;
	HX_STACK_LINE(62)
	result->m[(int)14] = (int)0;
	HX_STACK_LINE(62)
	result->m[(int)15] = (int)0;
	HX_STACK_LINE(62)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(Light_obj,_getWorldMatrix,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Light_obj::getWorldMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.Light","getWorldMatrix",0x18e76534,"com.gamestudiohx.babylonhx.lights.Light.getWorldMatrix","com/gamestudiohx/babylonhx/lights/Light.hx",65,0x9735df47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	::com::gamestudiohx::babylonhx::tools::math::Matrix worldMatrix = this->_getWorldMatrix();		HX_STACK_VAR(worldMatrix,"worldMatrix");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::lights::Light_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/Light.hx",68,0x9735df47)
			{
				HX_STACK_LINE(68)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _g = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(68)
				return (_g != null());
			}
			return null();
		}
	};
	HX_STACK_LINE(68)
	if (((  (((this->parent != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(69)
		if (((this->_parentedWorldMatrix == null()))){
			HX_STACK_LINE(70)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(70)
				result->m[(int)0] = 1.0;
				HX_STACK_LINE(70)
				result->m[(int)1] = (int)0;
				HX_STACK_LINE(70)
				result->m[(int)2] = (int)0;
				HX_STACK_LINE(70)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(70)
				result->m[(int)4] = (int)0;
				HX_STACK_LINE(70)
				result->m[(int)5] = 1.0;
				HX_STACK_LINE(70)
				result->m[(int)6] = (int)0;
				HX_STACK_LINE(70)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(70)
				result->m[(int)8] = (int)0;
				HX_STACK_LINE(70)
				result->m[(int)9] = (int)0;
				HX_STACK_LINE(70)
				result->m[(int)10] = 1.0;
				HX_STACK_LINE(70)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(70)
				result->m[(int)12] = (int)0;
				HX_STACK_LINE(70)
				result->m[(int)13] = (int)0;
				HX_STACK_LINE(70)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(70)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(70)
				_g1 = result;
			}
			HX_STACK_LINE(70)
			this->_parentedWorldMatrix = _g1;
		}
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->parent->getWorldMatrix();		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				Array< Float > result = this->_parentedWorldMatrix->m;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(73)
				Float tm0 = worldMatrix->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
				HX_STACK_LINE(73)
				Float tm1 = worldMatrix->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
				HX_STACK_LINE(73)
				Float tm2 = worldMatrix->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
				HX_STACK_LINE(73)
				Float tm3 = worldMatrix->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
				HX_STACK_LINE(73)
				Float tm4 = worldMatrix->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
				HX_STACK_LINE(73)
				Float tm5 = worldMatrix->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
				HX_STACK_LINE(73)
				Float tm6 = worldMatrix->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
				HX_STACK_LINE(73)
				Float tm7 = worldMatrix->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
				HX_STACK_LINE(73)
				Float tm8 = worldMatrix->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
				HX_STACK_LINE(73)
				Float tm9 = worldMatrix->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
				HX_STACK_LINE(73)
				Float tm10 = worldMatrix->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
				HX_STACK_LINE(73)
				Float tm11 = worldMatrix->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
				HX_STACK_LINE(73)
				Float tm12 = worldMatrix->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
				HX_STACK_LINE(73)
				Float tm13 = worldMatrix->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
				HX_STACK_LINE(73)
				Float tm14 = worldMatrix->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
				HX_STACK_LINE(73)
				Float tm15 = worldMatrix->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
				HX_STACK_LINE(73)
				Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
				HX_STACK_LINE(73)
				Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
				HX_STACK_LINE(73)
				Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
				HX_STACK_LINE(73)
				Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
				HX_STACK_LINE(73)
				Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
				HX_STACK_LINE(73)
				Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
				HX_STACK_LINE(73)
				Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
				HX_STACK_LINE(73)
				Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
				HX_STACK_LINE(73)
				Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
				HX_STACK_LINE(73)
				Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
				HX_STACK_LINE(73)
				Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
				HX_STACK_LINE(73)
				Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
				HX_STACK_LINE(73)
				Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
				HX_STACK_LINE(73)
				Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
				HX_STACK_LINE(73)
				Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
				HX_STACK_LINE(73)
				Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
				HX_STACK_LINE(73)
				result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
				HX_STACK_LINE(73)
				result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
				HX_STACK_LINE(73)
				result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
				HX_STACK_LINE(73)
				result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
				HX_STACK_LINE(73)
				result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
				HX_STACK_LINE(73)
				result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
				HX_STACK_LINE(73)
				result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
				HX_STACK_LINE(73)
				result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
				HX_STACK_LINE(73)
				result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
				HX_STACK_LINE(73)
				result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
				HX_STACK_LINE(73)
				result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
				HX_STACK_LINE(73)
				result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
				HX_STACK_LINE(73)
				result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
				HX_STACK_LINE(73)
				result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
				HX_STACK_LINE(73)
				result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
				HX_STACK_LINE(73)
				result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
				HX_STACK_LINE(73)
				result;
			}
		}
		HX_STACK_LINE(75)
		return this->_parentedWorldMatrix;
	}
	HX_STACK_LINE(78)
	return worldMatrix;
}


Void Light_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.Light","dispose",0xb4f75fc8,"com.gamestudiohx.babylonhx.lights.Light.dispose","com/gamestudiohx/babylonhx/lights/Light.hx",81,0x9735df47)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		if (((this->_shadowGenerator != null()))){
			HX_STACK_LINE(83)
			this->_shadowGenerator->dispose();
			HX_STACK_LINE(84)
			this->_shadowGenerator = null();
		}
		HX_STACK_LINE(88)
		int index = ::Lambda_obj::indexOf(this->_scene->lights,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(89)
		this->_scene->lights->splice(index,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Light_obj,dispose,(void))


Light_obj::Light_obj()
{
}

void Light_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Light);
	HX_MARK_MEMBER_NAME(intensity,"intensity");
	HX_MARK_MEMBER_NAME(diffuse,"diffuse");
	HX_MARK_MEMBER_NAME(specular,"specular");
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_MEMBER_NAME(excludedMeshes,"excludedMeshes");
	HX_MARK_MEMBER_NAME(_shadowGenerator,"_shadowGenerator");
	HX_MARK_MEMBER_NAME(_parentedWorldMatrix,"_parentedWorldMatrix");
	HX_MARK_MEMBER_NAME(_childrendFlag,"_childrendFlag");
	::com::gamestudiohx::babylonhx::Node_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Light_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(intensity,"intensity");
	HX_VISIT_MEMBER_NAME(diffuse,"diffuse");
	HX_VISIT_MEMBER_NAME(specular,"specular");
	HX_VISIT_MEMBER_NAME(animations,"animations");
	HX_VISIT_MEMBER_NAME(excludedMeshes,"excludedMeshes");
	HX_VISIT_MEMBER_NAME(_shadowGenerator,"_shadowGenerator");
	HX_VISIT_MEMBER_NAME(_parentedWorldMatrix,"_parentedWorldMatrix");
	HX_VISIT_MEMBER_NAME(_childrendFlag,"_childrendFlag");
	::com::gamestudiohx::babylonhx::Node_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Light_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"diffuse") ) { return diffuse; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"specular") ) { return specular; }
		if (HX_FIELD_EQ(inName,"getScene") ) { return getScene_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intensity") ) { return intensity; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { return animations; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"excludedMeshes") ) { return excludedMeshes; }
		if (HX_FIELD_EQ(inName,"_childrendFlag") ) { return _childrendFlag; }
		if (HX_FIELD_EQ(inName,"getWorldMatrix") ) { return getWorldMatrix_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_getWorldMatrix") ) { return _getWorldMatrix_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_shadowGenerator") ) { return _shadowGenerator; }
		if (HX_FIELD_EQ(inName,"transferToEffect") ) { return transferToEffect_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getShadowGenerator") ) { return getShadowGenerator_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_parentedWorldMatrix") ) { return _parentedWorldMatrix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Light_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"diffuse") ) { diffuse=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color3 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"specular") ) { specular=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color3 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intensity") ) { intensity=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"excludedMeshes") ) { excludedMeshes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_childrendFlag") ) { _childrendFlag=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_shadowGenerator") ) { _shadowGenerator=inValue.Cast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_parentedWorldMatrix") ) { _parentedWorldMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Light_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("intensity"));
	outFields->push(HX_CSTRING("diffuse"));
	outFields->push(HX_CSTRING("specular"));
	outFields->push(HX_CSTRING("animations"));
	outFields->push(HX_CSTRING("excludedMeshes"));
	outFields->push(HX_CSTRING("_shadowGenerator"));
	outFields->push(HX_CSTRING("_parentedWorldMatrix"));
	outFields->push(HX_CSTRING("_childrendFlag"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Light_obj,intensity),HX_CSTRING("intensity")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color3*/ ,(int)offsetof(Light_obj,diffuse),HX_CSTRING("diffuse")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color3*/ ,(int)offsetof(Light_obj,specular),HX_CSTRING("specular")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Light_obj,animations),HX_CSTRING("animations")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Light_obj,excludedMeshes),HX_CSTRING("excludedMeshes")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator*/ ,(int)offsetof(Light_obj,_shadowGenerator),HX_CSTRING("_shadowGenerator")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(Light_obj,_parentedWorldMatrix),HX_CSTRING("_parentedWorldMatrix")},
	{hx::fsBool,(int)offsetof(Light_obj,_childrendFlag),HX_CSTRING("_childrendFlag")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("intensity"),
	HX_CSTRING("diffuse"),
	HX_CSTRING("specular"),
	HX_CSTRING("animations"),
	HX_CSTRING("excludedMeshes"),
	HX_CSTRING("_shadowGenerator"),
	HX_CSTRING("_parentedWorldMatrix"),
	HX_CSTRING("_childrendFlag"),
	HX_CSTRING("getScene"),
	HX_CSTRING("getShadowGenerator"),
	HX_CSTRING("transferToEffect"),
	HX_CSTRING("_getWorldMatrix"),
	HX_CSTRING("getWorldMatrix"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Light_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Light_obj::__mClass,"__mClass");
};

#endif

Class Light_obj::__mClass;

void Light_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.lights.Light"), hx::TCanCast< Light_obj> ,sStaticFields,sMemberFields,
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

void Light_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace lights
