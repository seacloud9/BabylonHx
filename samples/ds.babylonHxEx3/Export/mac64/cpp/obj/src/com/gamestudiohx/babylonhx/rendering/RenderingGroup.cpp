#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Engine
#include <com/gamestudiohx/babylonhx/Engine.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Node
#include <com/gamestudiohx/babylonhx/Node.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Scene
#include <com/gamestudiohx/babylonhx/Scene.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_Camera
#include <com/gamestudiohx/babylonhx/cameras/Camera.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingInfo
#include <com/gamestudiohx/babylonhx/culling/BoundingInfo.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingSphere
#include <com/gamestudiohx/babylonhx/culling/BoundingSphere.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Material
#include <com/gamestudiohx/babylonhx/materials/Material.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_SubMesh
#include <com/gamestudiohx/babylonhx/mesh/SubMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_rendering_RenderingGroup
#include <com/gamestudiohx/babylonhx/rendering/RenderingGroup.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_SmartArray
#include <com/gamestudiohx/babylonhx/tools/SmartArray.h>
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
namespace rendering{

Void RenderingGroup_obj::__construct(int index,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.rendering.RenderingGroup","new",0xa2b1f0f9,"com.gamestudiohx.babylonhx.rendering.RenderingGroup.new","com/gamestudiohx/babylonhx/rendering/RenderingGroup.hx",27,0xfcaccbb5)
HX_STACK_THIS(this)
HX_STACK_ARG(index,"index")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(28)
	this->index = index;
	HX_STACK_LINE(29)
	this->_scene = scene;
	HX_STACK_LINE(31)
	this->_activeVertices = (int)0;
	HX_STACK_LINE(33)
	::com::gamestudiohx::babylonhx::tools::SmartArray _g = ::com::gamestudiohx::babylonhx::tools::SmartArray_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(33)
	this->_opaqueSubMeshes = _g;
	HX_STACK_LINE(34)
	::com::gamestudiohx::babylonhx::tools::SmartArray _g1 = ::com::gamestudiohx::babylonhx::tools::SmartArray_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(34)
	this->_transparentSubMeshes = _g1;
	HX_STACK_LINE(35)
	::com::gamestudiohx::babylonhx::tools::SmartArray _g2 = ::com::gamestudiohx::babylonhx::tools::SmartArray_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(35)
	this->_alphaTestSubMeshes = _g2;
}
;
	return null();
}

//RenderingGroup_obj::~RenderingGroup_obj() { }

Dynamic RenderingGroup_obj::__CreateEmpty() { return  new RenderingGroup_obj; }
hx::ObjectPtr< RenderingGroup_obj > RenderingGroup_obj::__new(int index,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< RenderingGroup_obj > result = new RenderingGroup_obj();
	result->__construct(index,scene);
	return result;}

Dynamic RenderingGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderingGroup_obj > result = new RenderingGroup_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool RenderingGroup_obj::render( Dynamic customRenderFunction,Dynamic beforeTransparents){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.rendering.RenderingGroup","render",0x3d80f05d,"com.gamestudiohx.babylonhx.rendering.RenderingGroup.render","com/gamestudiohx/babylonhx/rendering/RenderingGroup.hx",38,0xfcaccbb5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(customRenderFunction,"customRenderFunction")
	HX_STACK_ARG(beforeTransparents,"beforeTransparents")
	HX_STACK_LINE(39)
	if (((customRenderFunction != null()))){
		HX_STACK_LINE(40)
		customRenderFunction(this->_opaqueSubMeshes,this->_alphaTestSubMeshes,this->_transparentSubMeshes,beforeTransparents).Cast< Void >();
		HX_STACK_LINE(41)
		return true;
	}
	HX_STACK_LINE(44)
	if (((bool((bool((this->_opaqueSubMeshes->length == (int)0)) && bool((this->_alphaTestSubMeshes->length == (int)0)))) && bool((this->_transparentSubMeshes->length == (int)0))))){
		HX_STACK_LINE(45)
		return false;
	}
	HX_STACK_LINE(47)
	::com::gamestudiohx::babylonhx::Engine engine = this->_scene->getEngine();		HX_STACK_VAR(engine,"engine");
	HX_STACK_LINE(49)
	::com::gamestudiohx::babylonhx::mesh::SubMesh submesh = null();		HX_STACK_VAR(submesh,"submesh");
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(50)
		int _g = this->_opaqueSubMeshes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		while((true)){
			HX_STACK_LINE(50)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(50)
				break;
			}
			HX_STACK_LINE(50)
			int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
			HX_STACK_LINE(51)
			submesh = this->_opaqueSubMeshes->data->__GetItem(subIndex);
			HX_STACK_LINE(53)
			hx::AddEq(this->_activeVertices,submesh->verticesCount);
			HX_STACK_LINE(55)
			submesh->render();
		}
	}
	HX_STACK_LINE(59)
	engine->setAlphaTesting(true);
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		int _g = this->_alphaTestSubMeshes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(60)
			int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
			HX_STACK_LINE(61)
			submesh = this->_alphaTestSubMeshes->data->__GetItem(subIndex);
			HX_STACK_LINE(63)
			hx::AddEq(this->_activeVertices,submesh->verticesCount);
			HX_STACK_LINE(65)
			submesh->render();
		}
	}
	HX_STACK_LINE(67)
	engine->setAlphaTesting(false);
	HX_STACK_LINE(69)
	if (((beforeTransparents != null()))){
		HX_STACK_LINE(70)
		beforeTransparents();
	}
	HX_STACK_LINE(74)
	if (((this->_transparentSubMeshes->length > (int)0))){
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(76)
			int _g = this->_transparentSubMeshes->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(76)
			while((true)){
				HX_STACK_LINE(76)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(76)
					break;
				}
				HX_STACK_LINE(76)
				int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
				HX_STACK_LINE(77)
				submesh = this->_transparentSubMeshes->data->__GetItem(subIndex);
				HX_STACK_LINE(78)
				Float _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(78)
					{
						HX_STACK_LINE(78)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = submesh->getBoundingInfo()->boundingSphere->centerWorld;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(78)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_scene->activeCamera->position;		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(78)
						_this = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this1->x - otherVector->x),(_this1->y - otherVector->y),(_this1->z - otherVector->z));
					}
					HX_STACK_LINE(78)
					_g2 = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));
				}
				HX_STACK_LINE(78)
				submesh->_distanceToCamera = _g2;
			}
		}
		HX_STACK_LINE(81)
		Dynamic sortedArray = this->_transparentSubMeshes->data->__Field(HX_CSTRING("slice"),true)((int)0,this->_transparentSubMeshes->length);		HX_STACK_VAR(sortedArray,"sortedArray");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
		int run(::com::gamestudiohx::babylonhx::mesh::SubMesh a,::com::gamestudiohx::babylonhx::mesh::SubMesh b){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","com/gamestudiohx/babylonhx/rendering/RenderingGroup.hx",83,0xfcaccbb5)
			HX_STACK_ARG(a,"a")
			HX_STACK_ARG(b,"b")
			{
				HX_STACK_LINE(84)
				if (((a->_distanceToCamera < b->_distanceToCamera))){
					HX_STACK_LINE(85)
					return (int)1;
				}
				HX_STACK_LINE(87)
				if (((a->_distanceToCamera > b->_distanceToCamera))){
					HX_STACK_LINE(88)
					return (int)-1;
				}
				HX_STACK_LINE(91)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(83)
		sortedArray->__Field(HX_CSTRING("sort"),true)( Dynamic(new _Function_2_1()));
		HX_STACK_LINE(95)
		engine->setAlphaMode(::com::gamestudiohx::babylonhx::Engine_obj::ALPHA_COMBINE);
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(96)
			int _g = sortedArray->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(96)
			while((true)){
				HX_STACK_LINE(96)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(96)
					break;
				}
				HX_STACK_LINE(96)
				int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
				HX_STACK_LINE(97)
				submesh = sortedArray->__GetItem(subIndex);
				HX_STACK_LINE(98)
				hx::AddEq(this->_activeVertices,submesh->verticesCount);
				HX_STACK_LINE(100)
				submesh->render();
			}
		}
		HX_STACK_LINE(102)
		engine->setAlphaMode(::com::gamestudiohx::babylonhx::Engine_obj::ALPHA_DISABLE);
	}
	HX_STACK_LINE(104)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(RenderingGroup_obj,render,return )

Void RenderingGroup_obj::prepare( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.rendering.RenderingGroup","prepare",0x4c1a72a0,"com.gamestudiohx.babylonhx.rendering.RenderingGroup.prepare","com/gamestudiohx/babylonhx/rendering/RenderingGroup.hx",107,0xfcaccbb5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		this->_opaqueSubMeshes->reset();
		HX_STACK_LINE(109)
		this->_transparentSubMeshes->reset();
		HX_STACK_LINE(110)
		this->_alphaTestSubMeshes->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RenderingGroup_obj,prepare,(void))

Void RenderingGroup_obj::dispatch( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.rendering.RenderingGroup","dispatch",0xbf6be381,"com.gamestudiohx.babylonhx.rendering.RenderingGroup.dispatch","com/gamestudiohx/babylonhx/rendering/RenderingGroup.hx",113,0xfcaccbb5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(subMesh,"subMesh")
		HX_STACK_LINE(114)
		Dynamic material = subMesh->getMaterial();		HX_STACK_VAR(material,"material");
		HX_STACK_LINE(115)
		::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh = subMesh->getMesh();		HX_STACK_VAR(mesh,"mesh");
		HX_STACK_LINE(116)
		if (((  ((!(((  ((::Std_obj::is(material,hx::ClassOf< ::com::gamestudiohx::babylonhx::materials::Material >()))) ? bool(material->__Field(HX_CSTRING("needAlphaBlending"),true)()) : bool(false) ))))) ? bool((mesh->visibility < 1.0)) : bool(true) ))){
			HX_STACK_LINE(117)
			if (((bool((material->__Field(HX_CSTRING("alpha"),true) > (int)0)) || bool((mesh->visibility < 1.0))))){
				HX_STACK_LINE(118)
				this->_transparentSubMeshes->push(subMesh);
			}
		}
		else{
			HX_STACK_LINE(120)
			if (((  ((::Std_obj::is(material,hx::ClassOf< ::com::gamestudiohx::babylonhx::materials::Material >()))) ? bool(material->__Field(HX_CSTRING("needAlphaTesting"),true)()) : bool(false) ))){
				HX_STACK_LINE(121)
				this->_alphaTestSubMeshes->push(subMesh);
			}
			else{
				HX_STACK_LINE(123)
				this->_opaqueSubMeshes->push(subMesh);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderingGroup_obj,dispatch,(void))


RenderingGroup_obj::RenderingGroup_obj()
{
}

void RenderingGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderingGroup);
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_opaqueSubMeshes,"_opaqueSubMeshes");
	HX_MARK_MEMBER_NAME(_transparentSubMeshes,"_transparentSubMeshes");
	HX_MARK_MEMBER_NAME(_alphaTestSubMeshes,"_alphaTestSubMeshes");
	HX_MARK_MEMBER_NAME(_activeVertices,"_activeVertices");
	HX_MARK_END_CLASS();
}

void RenderingGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_opaqueSubMeshes,"_opaqueSubMeshes");
	HX_VISIT_MEMBER_NAME(_transparentSubMeshes,"_transparentSubMeshes");
	HX_VISIT_MEMBER_NAME(_alphaTestSubMeshes,"_alphaTestSubMeshes");
	HX_VISIT_MEMBER_NAME(_activeVertices,"_activeVertices");
}

Dynamic RenderingGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"prepare") ) { return prepare_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_activeVertices") ) { return _activeVertices; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_opaqueSubMeshes") ) { return _opaqueSubMeshes; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_alphaTestSubMeshes") ) { return _alphaTestSubMeshes; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_transparentSubMeshes") ) { return _transparentSubMeshes; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderingGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::gamestudiohx::babylonhx::Scene >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_activeVertices") ) { _activeVertices=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_opaqueSubMeshes") ) { _opaqueSubMeshes=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::SmartArray >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_alphaTestSubMeshes") ) { _alphaTestSubMeshes=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::SmartArray >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_transparentSubMeshes") ) { _transparentSubMeshes=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::SmartArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderingGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("_opaqueSubMeshes"));
	outFields->push(HX_CSTRING("_transparentSubMeshes"));
	outFields->push(HX_CSTRING("_alphaTestSubMeshes"));
	outFields->push(HX_CSTRING("_activeVertices"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(RenderingGroup_obj,index),HX_CSTRING("index")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Scene*/ ,(int)offsetof(RenderingGroup_obj,_scene),HX_CSTRING("_scene")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::SmartArray*/ ,(int)offsetof(RenderingGroup_obj,_opaqueSubMeshes),HX_CSTRING("_opaqueSubMeshes")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::SmartArray*/ ,(int)offsetof(RenderingGroup_obj,_transparentSubMeshes),HX_CSTRING("_transparentSubMeshes")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::SmartArray*/ ,(int)offsetof(RenderingGroup_obj,_alphaTestSubMeshes),HX_CSTRING("_alphaTestSubMeshes")},
	{hx::fsInt,(int)offsetof(RenderingGroup_obj,_activeVertices),HX_CSTRING("_activeVertices")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("index"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_opaqueSubMeshes"),
	HX_CSTRING("_transparentSubMeshes"),
	HX_CSTRING("_alphaTestSubMeshes"),
	HX_CSTRING("_activeVertices"),
	HX_CSTRING("render"),
	HX_CSTRING("prepare"),
	HX_CSTRING("dispatch"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderingGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderingGroup_obj::__mClass,"__mClass");
};

#endif

Class RenderingGroup_obj::__mClass;

void RenderingGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.rendering.RenderingGroup"), hx::TCanCast< RenderingGroup_obj> ,sStaticFields,sMemberFields,
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

void RenderingGroup_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace rendering
