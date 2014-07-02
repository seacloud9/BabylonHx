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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_Camera
#include <com/gamestudiohx/babylonhx/cameras/Camera.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Effect
#include <com/gamestudiohx/babylonhx/materials/Effect.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_BabylonGLBuffer
#include <com/gamestudiohx/babylonhx/mesh/BabylonGLBuffer.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_postprocess_PostProcess
#include <com/gamestudiohx/babylonhx/postprocess/PostProcess.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_postprocess_PostProcessManager
#include <com/gamestudiohx/babylonhx/postprocess/PostProcessManager.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace postprocess{

Void PostProcessManager_obj::__construct(::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.postprocess.PostProcessManager","new",0x79138681,"com.gamestudiohx.babylonhx.postprocess.PostProcessManager.new","com/gamestudiohx/babylonhx/postprocess/PostProcessManager.hx",22,0x7ce3d3ed)
HX_STACK_THIS(this)
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(23)
	this->_scene = scene;
	HX_STACK_LINE(26)
	Array< Float > vertices = Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)-1).Add((int)1).Add((int)-1).Add((int)-1).Add((int)1).Add((int)-1);		HX_STACK_VAR(vertices,"vertices");
	HX_STACK_LINE(27)
	this->_vertexDeclaration = Array_obj< int >::__new().Add((int)2);
	HX_STACK_LINE(28)
	this->_vertexStrideSize = (int)8;
	HX_STACK_LINE(29)
	::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g = scene->getEngine()->createVertexBuffer(vertices);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(29)
	this->_vertexBuffer = _g;
	HX_STACK_LINE(32)
	Array< int > indices = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)0).Add((int)2).Add((int)3);		HX_STACK_VAR(indices,"indices");
	HX_STACK_LINE(33)
	::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g1 = scene->getEngine()->createIndexBuffer(indices);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(33)
	this->_indexBuffer = _g1;
}
;
	return null();
}

//PostProcessManager_obj::~PostProcessManager_obj() { }

Dynamic PostProcessManager_obj::__CreateEmpty() { return  new PostProcessManager_obj; }
hx::ObjectPtr< PostProcessManager_obj > PostProcessManager_obj::__new(::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< PostProcessManager_obj > result = new PostProcessManager_obj();
	result->__construct(scene);
	return result;}

Dynamic PostProcessManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PostProcessManager_obj > result = new PostProcessManager_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PostProcessManager_obj::_prepareFrame( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.postprocess.PostProcessManager","_prepareFrame",0x970d0966,"com.gamestudiohx.babylonhx.postprocess.PostProcessManager._prepareFrame","com/gamestudiohx/babylonhx/postprocess/PostProcessManager.hx",36,0x7ce3d3ed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		Array< ::Dynamic > postProcesses = this->_scene->activeCamera->_postProcesses;		HX_STACK_VAR(postProcesses,"postProcesses");
		HX_STACK_LINE(39)
		Array< int > postProcessesTakenIndices = this->_scene->activeCamera->_postProcessesTakenIndices;		HX_STACK_VAR(postProcessesTakenIndices,"postProcessesTakenIndices");
		HX_STACK_LINE(41)
		if (((bool((postProcessesTakenIndices->length == (int)0)) || bool(!(this->_scene->postProcessesEnabled))))){
			HX_STACK_LINE(42)
			return null();
		}
		HX_STACK_LINE(45)
		postProcesses->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::postprocess::PostProcess >()->activate(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PostProcessManager_obj,_prepareFrame,(void))

Void PostProcessManager_obj::_finalizeFrame( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.postprocess.PostProcessManager","_finalizeFrame",0x600ea16f,"com.gamestudiohx.babylonhx.postprocess.PostProcessManager._finalizeFrame","com/gamestudiohx/babylonhx/postprocess/PostProcessManager.hx",48,0x7ce3d3ed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		Array< ::Dynamic > postProcesses = this->_scene->activeCamera->_postProcesses;		HX_STACK_VAR(postProcesses,"postProcesses");
		HX_STACK_LINE(51)
		if (((bool((postProcesses->length == (int)0)) || bool(!(this->_scene->postProcessesEnabled))))){
			HX_STACK_LINE(52)
			return null();
		}
		HX_STACK_LINE(55)
		::com::gamestudiohx::babylonhx::Engine engine = this->_scene->getEngine();		HX_STACK_VAR(engine,"engine");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(57)
			int _g = postProcesses->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(57)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(58)
				if (((index < (postProcesses->length - (int)1)))){
					HX_STACK_LINE(59)
					postProcesses->__get((index + (int)1)).StaticCast< ::com::gamestudiohx::babylonhx::postprocess::PostProcess >()->activate(null());
				}
				else{
					HX_STACK_LINE(61)
					engine->restoreDefaultFramebuffer();
				}
				HX_STACK_LINE(64)
				::com::gamestudiohx::babylonhx::materials::Effect effect = postProcesses->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::postprocess::PostProcess >()->apply();		HX_STACK_VAR(effect,"effect");
				HX_STACK_LINE(66)
				if (((effect != null()))){
					HX_STACK_LINE(68)
					engine->bindBuffers(this->_vertexBuffer,this->_indexBuffer,this->_vertexDeclaration,this->_vertexStrideSize,effect);
					HX_STACK_LINE(71)
					engine->draw(true,(int)0,(int)6,null());
				}
			}
		}
		HX_STACK_LINE(76)
		engine->setDepthBuffer(true);
		HX_STACK_LINE(77)
		engine->setDepthWrite(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PostProcessManager_obj,_finalizeFrame,(void))

Void PostProcessManager_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.postprocess.PostProcessManager","dispose",0xed585b40,"com.gamestudiohx.babylonhx.postprocess.PostProcessManager.dispose","com/gamestudiohx/babylonhx/postprocess/PostProcessManager.hx",80,0x7ce3d3ed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		if (((this->_vertexBuffer != null()))){
			HX_STACK_LINE(82)
			this->_scene->getEngine()->_releaseBuffer(this->_vertexBuffer);
			HX_STACK_LINE(83)
			this->_vertexBuffer = null();
		}
		HX_STACK_LINE(86)
		if (((this->_indexBuffer != null()))){
			HX_STACK_LINE(87)
			this->_scene->getEngine()->_releaseBuffer(this->_indexBuffer);
			HX_STACK_LINE(88)
			this->_indexBuffer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PostProcessManager_obj,dispose,(void))


PostProcessManager_obj::PostProcessManager_obj()
{
}

void PostProcessManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PostProcessManager);
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_vertexDeclaration,"_vertexDeclaration");
	HX_MARK_MEMBER_NAME(_vertexStrideSize,"_vertexStrideSize");
	HX_MARK_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_MARK_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_MARK_END_CLASS();
}

void PostProcessManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_vertexDeclaration,"_vertexDeclaration");
	HX_VISIT_MEMBER_NAME(_vertexStrideSize,"_vertexStrideSize");
	HX_VISIT_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_VISIT_MEMBER_NAME(_indexBuffer,"_indexBuffer");
}

Dynamic PostProcessManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { return _indexBuffer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { return _vertexBuffer; }
		if (HX_FIELD_EQ(inName,"_prepareFrame") ) { return _prepareFrame_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_finalizeFrame") ) { return _finalizeFrame_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_vertexStrideSize") ) { return _vertexStrideSize; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_vertexDeclaration") ) { return _vertexDeclaration; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PostProcessManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::gamestudiohx::babylonhx::Scene >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { _indexBuffer=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { _vertexBuffer=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_vertexStrideSize") ) { _vertexStrideSize=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_vertexDeclaration") ) { _vertexDeclaration=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PostProcessManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("_vertexDeclaration"));
	outFields->push(HX_CSTRING("_vertexStrideSize"));
	outFields->push(HX_CSTRING("_vertexBuffer"));
	outFields->push(HX_CSTRING("_indexBuffer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Scene*/ ,(int)offsetof(PostProcessManager_obj,_scene),HX_CSTRING("_scene")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(PostProcessManager_obj,_vertexDeclaration),HX_CSTRING("_vertexDeclaration")},
	{hx::fsInt,(int)offsetof(PostProcessManager_obj,_vertexStrideSize),HX_CSTRING("_vertexStrideSize")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer*/ ,(int)offsetof(PostProcessManager_obj,_vertexBuffer),HX_CSTRING("_vertexBuffer")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer*/ ,(int)offsetof(PostProcessManager_obj,_indexBuffer),HX_CSTRING("_indexBuffer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_scene"),
	HX_CSTRING("_vertexDeclaration"),
	HX_CSTRING("_vertexStrideSize"),
	HX_CSTRING("_vertexBuffer"),
	HX_CSTRING("_indexBuffer"),
	HX_CSTRING("_prepareFrame"),
	HX_CSTRING("_finalizeFrame"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PostProcessManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PostProcessManager_obj::__mClass,"__mClass");
};

#endif

Class PostProcessManager_obj::__mClass;

void PostProcessManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.postprocess.PostProcessManager"), hx::TCanCast< PostProcessManager_obj> ,sStaticFields,sMemberFields,
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

void PostProcessManager_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace postprocess
