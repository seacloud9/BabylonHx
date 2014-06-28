#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Effect
#include <com/gamestudiohx/babylonhx/materials/Effect.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BabylonTexture
#include <com/gamestudiohx/babylonhx/materials/textures/BabylonTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_postprocess_PostProcess
#include <com/gamestudiohx/babylonhx/postprocess/PostProcess.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_SmartArray
#include <com/gamestudiohx/babylonhx/tools/SmartArray.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color4
#include <com/gamestudiohx/babylonhx/tools/math/Color4.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace postprocess{

Void PostProcess_obj::__construct(::String name,::String fragmentUrl,Array< ::String > parameters,Array< ::String > samplers,Float ratio,::com::gamestudiohx::babylonhx::cameras::Camera camera,hx::Null< int >  __o_samplingMode,::com::gamestudiohx::babylonhx::Engine engine,hx::Null< bool >  __o_reusable)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.postprocess.PostProcess","new",0xd2f69bf0,"com.gamestudiohx.babylonhx.postprocess.PostProcess.new","com/gamestudiohx/babylonhx/postprocess/PostProcess.hx",17,0xf0b591e2)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(fragmentUrl,"fragmentUrl")
HX_STACK_ARG(parameters,"parameters")
HX_STACK_ARG(samplers,"samplers")
HX_STACK_ARG(ratio,"ratio")
HX_STACK_ARG(camera,"camera")
HX_STACK_ARG(__o_samplingMode,"samplingMode")
HX_STACK_ARG(engine,"engine")
HX_STACK_ARG(__o_reusable,"reusable")
int samplingMode = __o_samplingMode.Default(1);
bool reusable = __o_reusable.Default(false);
{
	HX_STACK_LINE(29)
	this->_currentRenderTextureInd = (int)0;
	HX_STACK_LINE(39)
	this->name = name;
	HX_STACK_LINE(40)
	if (((camera != null()))){
		HX_STACK_LINE(41)
		this->_camera = camera;
		HX_STACK_LINE(42)
		::com::gamestudiohx::babylonhx::Scene _g = camera->getScene();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		this->_scene = _g;
		HX_STACK_LINE(43)
		camera->attachPostProcess(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(44)
		::com::gamestudiohx::babylonhx::Engine _g1 = this->_scene->getEngine();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(44)
		this->_engine = _g1;
	}
	else{
		HX_STACK_LINE(46)
		this->_engine = engine;
	}
	HX_STACK_LINE(48)
	this->_renderRatio = ratio;
	HX_STACK_LINE(49)
	this->width = (int)-1;
	HX_STACK_LINE(50)
	this->height = (int)-1;
	HX_STACK_LINE(51)
	this->renderTargetSamplingMode = samplingMode;
	HX_STACK_LINE(52)
	this->_reusable = reusable;
	HX_STACK_LINE(54)
	::com::gamestudiohx::babylonhx::tools::SmartArray _g2 = ::com::gamestudiohx::babylonhx::tools::SmartArray_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(54)
	this->_textures = _g2;
	HX_STACK_LINE(55)
	this->_currentRenderTextureInd = (int)0;
	HX_STACK_LINE(57)
	if (((samplers == null()))){
		HX_STACK_LINE(57)
		this->samplers = Array_obj< ::String >::__new();
	}
	else{
		HX_STACK_LINE(57)
		this->samplers = samplers;
	}
	HX_STACK_LINE(58)
	this->samplers->push(HX_CSTRING("textureSampler"));
	HX_STACK_LINE(62)
	Array< ::String > _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(62)
	if (((parameters == null()))){
		HX_STACK_LINE(62)
		_g3 = Array_obj< ::String >::__new();
	}
	else{
		HX_STACK_LINE(62)
		_g3 = parameters;
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::String &fragmentUrl){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/postprocess/PostProcess.hx",60,0xf0b591e2)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("vertex") , HX_CSTRING("postprocess"),false);
				__result->Add(HX_CSTRING("fragment") , fragmentUrl,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(60)
	::com::gamestudiohx::babylonhx::materials::Effect _g4 = this->_engine->createEffect(_Function_1_1::Block(fragmentUrl),Array_obj< ::String >::__new().Add(HX_CSTRING("position")),_g3,this->samplers,HX_CSTRING(""),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(60)
	this->_effect = _g4;
}
;
	return null();
}

//PostProcess_obj::~PostProcess_obj() { }

Dynamic PostProcess_obj::__CreateEmpty() { return  new PostProcess_obj; }
hx::ObjectPtr< PostProcess_obj > PostProcess_obj::__new(::String name,::String fragmentUrl,Array< ::String > parameters,Array< ::String > samplers,Float ratio,::com::gamestudiohx::babylonhx::cameras::Camera camera,hx::Null< int >  __o_samplingMode,::com::gamestudiohx::babylonhx::Engine engine,hx::Null< bool >  __o_reusable)
{  hx::ObjectPtr< PostProcess_obj > result = new PostProcess_obj();
	result->__construct(name,fragmentUrl,parameters,samplers,ratio,camera,__o_samplingMode,engine,__o_reusable);
	return result;}

Dynamic PostProcess_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PostProcess_obj > result = new PostProcess_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return result;}

Void PostProcess_obj::activate( ::com::gamestudiohx::babylonhx::cameras::Camera camera){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.postprocess.PostProcess","activate",0x4d6d6623,"com.gamestudiohx.babylonhx.postprocess.PostProcess.activate","com/gamestudiohx/babylonhx/postprocess/PostProcess.hx",66,0xf0b591e2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(67)
		if (((camera != null()))){
			HX_STACK_LINE(67)
			camera = camera;
		}
		else{
			HX_STACK_LINE(67)
			camera = this->_camera;
		}
		HX_STACK_LINE(69)
		::com::gamestudiohx::babylonhx::Scene scene = camera->getScene();		HX_STACK_VAR(scene,"scene");
		HX_STACK_LINE(71)
		int _g = this->_engine->getRenderWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		Float desiredWidth = (_g * this->_renderRatio);		HX_STACK_VAR(desiredWidth,"desiredWidth");
		HX_STACK_LINE(72)
		int _g1 = this->_engine->getRenderHeight();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(72)
		Float desiredHeight = (_g1 * this->_renderRatio);		HX_STACK_VAR(desiredHeight,"desiredHeight");
		HX_STACK_LINE(74)
		if (((bool((this->width != desiredWidth)) || bool((this->height != desiredHeight))))){
			HX_STACK_LINE(75)
			if (((this->_textures->length > (int)0))){
				HX_STACK_LINE(76)
				{
					HX_STACK_LINE(76)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(76)
					int _g2 = this->_textures->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(76)
					while((true)){
						HX_STACK_LINE(76)
						if ((!(((_g11 < _g2))))){
							HX_STACK_LINE(76)
							break;
						}
						HX_STACK_LINE(76)
						int i = (_g11)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(77)
						this->_engine->_releaseTexture(this->_textures->data->__GetItem(i));
					}
				}
				HX_STACK_LINE(79)
				this->_textures->reset();
			}
			HX_STACK_LINE(81)
			this->width = desiredWidth;
			HX_STACK_LINE(82)
			this->height = desiredHeight;
			HX_STACK_LINE(83)
			int _g2 = ::Lambda_obj::indexOf(camera->_postProcesses,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(83)
			bool _g3 = (_g2 == (int)0);		HX_STACK_VAR(_g3,"_g3");
			struct _Function_2_1{
				inline static Dynamic Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::postprocess::PostProcess_obj > __this,bool &_g3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/postprocess/PostProcess.hx",83,0xf0b591e2)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("generateMipMaps") , false,false);
						__result->Add(HX_CSTRING("generateDepthBuffer") , _g3,false);
						__result->Add(HX_CSTRING("samplingMode") , __this->renderTargetSamplingMode,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(83)
			Dynamic _g4 = _Function_2_1::Block(this,_g3);		HX_STACK_VAR(_g4,"_g4");
			struct _Function_2_2{
				inline static Dynamic Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::postprocess::PostProcess_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/postprocess/PostProcess.hx",83,0xf0b591e2)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("width") , __this->width,false);
						__result->Add(HX_CSTRING("height") , __this->height,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(83)
			::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture _g5 = this->_engine->createRenderTargetTexture(_Function_2_2::Block(this),_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(83)
			this->_textures->push(_g5);
			HX_STACK_LINE(85)
			if ((this->_reusable)){
				HX_STACK_LINE(86)
				int _g6 = ::Lambda_obj::indexOf(camera->_postProcesses,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(86)
				bool _g7 = (_g6 == camera->_postProcessesTakenIndices->__get((int)0));		HX_STACK_VAR(_g7,"_g7");
				struct _Function_3_1{
					inline static Dynamic Block( bool &_g7,hx::ObjectPtr< ::com::gamestudiohx::babylonhx::postprocess::PostProcess_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/postprocess/PostProcess.hx",86,0xf0b591e2)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("generateMipMaps") , false,false);
							__result->Add(HX_CSTRING("generateDepthBuffer") , _g7,false);
							__result->Add(HX_CSTRING("samplingMode") , __this->renderTargetSamplingMode,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(86)
				Dynamic _g8 = _Function_3_1::Block(_g7,this);		HX_STACK_VAR(_g8,"_g8");
				struct _Function_3_2{
					inline static Dynamic Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::postprocess::PostProcess_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/postprocess/PostProcess.hx",86,0xf0b591e2)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("width") , __this->width,false);
							__result->Add(HX_CSTRING("height") , __this->height,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(86)
				::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture _g9 = this->_engine->createRenderTargetTexture(_Function_3_2::Block(this),_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(86)
				this->_textures->push(_g9);
			}
			HX_STACK_LINE(89)
			if (((this->onSizeChanged_dyn() != null()))){
				HX_STACK_LINE(90)
				this->onSizeChanged();
			}
		}
		HX_STACK_LINE(94)
		this->_engine->bindFramebuffer(this->_textures->data->__GetItem(this->_currentRenderTextureInd));
		HX_STACK_LINE(97)
		this->_engine->clear(this->_scene->clearColor,(bool(this->_scene->autoClear) || bool(this->_scene->forceWireframe)),true);
		HX_STACK_LINE(99)
		if ((this->_reusable)){
			HX_STACK_LINE(100)
			this->_currentRenderTextureInd = hx::Mod(((this->_currentRenderTextureInd + (int)1)),(int)2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PostProcess_obj,activate,(void))

::com::gamestudiohx::babylonhx::materials::Effect PostProcess_obj::apply( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.postprocess.PostProcess","apply",0xfdd454fe,"com.gamestudiohx.babylonhx.postprocess.PostProcess.apply","com/gamestudiohx/babylonhx/postprocess/PostProcess.hx",104,0xf0b591e2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	if ((!(this->_effect->isReady()))){
		HX_STACK_LINE(107)
		return null();
	}
	HX_STACK_LINE(110)
	this->_engine->enableEffect(this->_effect);
	HX_STACK_LINE(111)
	this->_engine->setState(false);
	HX_STACK_LINE(112)
	this->_engine->setAlphaMode(::com::gamestudiohx::babylonhx::Engine_obj::ALPHA_DISABLE);
	HX_STACK_LINE(113)
	this->_engine->setDepthBuffer(false);
	HX_STACK_LINE(114)
	this->_engine->setDepthWrite(false);
	HX_STACK_LINE(117)
	this->_effect->_bindTexture(HX_CSTRING("textureSampler"),this->_textures->data->__GetItem(this->_currentRenderTextureInd));
	HX_STACK_LINE(120)
	if (((this->onApply_dyn() != null()))){
		HX_STACK_LINE(121)
		this->onApply(this->_effect);
	}
	HX_STACK_LINE(124)
	return this->_effect;
}


HX_DEFINE_DYNAMIC_FUNC0(PostProcess_obj,apply,return )

Void PostProcess_obj::dispose( ::com::gamestudiohx::babylonhx::cameras::Camera camera){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.postprocess.PostProcess","dispose",0xc864542f,"com.gamestudiohx.babylonhx.postprocess.PostProcess.dispose","com/gamestudiohx/babylonhx/postprocess/PostProcess.hx",127,0xf0b591e2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(128)
		if (((camera == null()))){
			HX_STACK_LINE(128)
			camera = this->_camera;
		}
		else{
			HX_STACK_LINE(128)
			camera = camera;
		}
		HX_STACK_LINE(130)
		if (((this->_onDispose_dyn() != null()))){
			HX_STACK_LINE(131)
			this->_onDispose();
		}
		HX_STACK_LINE(134)
		if (((this->_textures->length > (int)0))){
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(135)
				int _g = this->_textures->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(135)
				while((true)){
					HX_STACK_LINE(135)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(135)
						break;
					}
					HX_STACK_LINE(135)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(136)
					this->_engine->_releaseTexture(this->_textures->data->__GetItem(i));
				}
			}
			HX_STACK_LINE(138)
			this->_textures->reset();
		}
		HX_STACK_LINE(141)
		camera->detachPostProcess(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(143)
		int index = ::Lambda_obj::indexOf(camera->_postProcesses,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(144)
		if (((bool((index == camera->_postProcessesTakenIndices->__get((int)0))) && bool((camera->_postProcessesTakenIndices->length > (int)0))))){
			HX_STACK_LINE(145)
			this->_camera->_postProcesses->__get(camera->_postProcessesTakenIndices->__get((int)0)).StaticCast< ::com::gamestudiohx::babylonhx::postprocess::PostProcess >()->width = (int)-1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PostProcess_obj,dispose,(void))


PostProcess_obj::PostProcess_obj()
{
}

void PostProcess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PostProcess);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(_camera,"_camera");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_engine,"_engine");
	HX_MARK_MEMBER_NAME(_renderRatio,"_renderRatio");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(renderTargetSamplingMode,"renderTargetSamplingMode");
	HX_MARK_MEMBER_NAME(_effect,"_effect");
	HX_MARK_MEMBER_NAME(_textures,"_textures");
	HX_MARK_MEMBER_NAME(_currentRenderTextureInd,"_currentRenderTextureInd");
	HX_MARK_MEMBER_NAME(_reusable,"_reusable");
	HX_MARK_MEMBER_NAME(samplers,"samplers");
	HX_MARK_MEMBER_NAME(onApply,"onApply");
	HX_MARK_MEMBER_NAME(_onDispose,"_onDispose");
	HX_MARK_MEMBER_NAME(onSizeChanged,"onSizeChanged");
	HX_MARK_END_CLASS();
}

void PostProcess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(_camera,"_camera");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_engine,"_engine");
	HX_VISIT_MEMBER_NAME(_renderRatio,"_renderRatio");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(renderTargetSamplingMode,"renderTargetSamplingMode");
	HX_VISIT_MEMBER_NAME(_effect,"_effect");
	HX_VISIT_MEMBER_NAME(_textures,"_textures");
	HX_VISIT_MEMBER_NAME(_currentRenderTextureInd,"_currentRenderTextureInd");
	HX_VISIT_MEMBER_NAME(_reusable,"_reusable");
	HX_VISIT_MEMBER_NAME(samplers,"samplers");
	HX_VISIT_MEMBER_NAME(onApply,"onApply");
	HX_VISIT_MEMBER_NAME(_onDispose,"_onDispose");
	HX_VISIT_MEMBER_NAME(onSizeChanged,"onSizeChanged");
}

Dynamic PostProcess_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { return _camera; }
		if (HX_FIELD_EQ(inName,"_engine") ) { return _engine; }
		if (HX_FIELD_EQ(inName,"_effect") ) { return _effect; }
		if (HX_FIELD_EQ(inName,"onApply") ) { return onApply; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"samplers") ) { return samplers; }
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { return _textures; }
		if (HX_FIELD_EQ(inName,"_reusable") ) { return _reusable; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_onDispose") ) { return _onDispose; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_renderRatio") ) { return _renderRatio; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onSizeChanged") ) { return onSizeChanged; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"renderTargetSamplingMode") ) { return renderTargetSamplingMode; }
		if (HX_FIELD_EQ(inName,"_currentRenderTextureInd") ) { return _currentRenderTextureInd; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PostProcess_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::gamestudiohx::babylonhx::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast< ::com::gamestudiohx::babylonhx::cameras::Camera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_engine") ) { _engine=inValue.Cast< ::com::gamestudiohx::babylonhx::Engine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_effect") ) { _effect=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::Effect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onApply") ) { onApply=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"samplers") ) { samplers=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { _textures=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::SmartArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reusable") ) { _reusable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_onDispose") ) { _onDispose=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_renderRatio") ) { _renderRatio=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onSizeChanged") ) { onSizeChanged=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"renderTargetSamplingMode") ) { renderTargetSamplingMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentRenderTextureInd") ) { _currentRenderTextureInd=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PostProcess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("_camera"));
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("_engine"));
	outFields->push(HX_CSTRING("_renderRatio"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("renderTargetSamplingMode"));
	outFields->push(HX_CSTRING("_effect"));
	outFields->push(HX_CSTRING("_textures"));
	outFields->push(HX_CSTRING("_currentRenderTextureInd"));
	outFields->push(HX_CSTRING("_reusable"));
	outFields->push(HX_CSTRING("samplers"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(PostProcess_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::cameras::Camera*/ ,(int)offsetof(PostProcess_obj,_camera),HX_CSTRING("_camera")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Scene*/ ,(int)offsetof(PostProcess_obj,_scene),HX_CSTRING("_scene")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Engine*/ ,(int)offsetof(PostProcess_obj,_engine),HX_CSTRING("_engine")},
	{hx::fsFloat,(int)offsetof(PostProcess_obj,_renderRatio),HX_CSTRING("_renderRatio")},
	{hx::fsFloat,(int)offsetof(PostProcess_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(PostProcess_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,renderTargetSamplingMode),HX_CSTRING("renderTargetSamplingMode")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::Effect*/ ,(int)offsetof(PostProcess_obj,_effect),HX_CSTRING("_effect")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::SmartArray*/ ,(int)offsetof(PostProcess_obj,_textures),HX_CSTRING("_textures")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,_currentRenderTextureInd),HX_CSTRING("_currentRenderTextureInd")},
	{hx::fsBool,(int)offsetof(PostProcess_obj,_reusable),HX_CSTRING("_reusable")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(PostProcess_obj,samplers),HX_CSTRING("samplers")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PostProcess_obj,onApply),HX_CSTRING("onApply")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PostProcess_obj,_onDispose),HX_CSTRING("_onDispose")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PostProcess_obj,onSizeChanged),HX_CSTRING("onSizeChanged")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("_camera"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_engine"),
	HX_CSTRING("_renderRatio"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("renderTargetSamplingMode"),
	HX_CSTRING("_effect"),
	HX_CSTRING("_textures"),
	HX_CSTRING("_currentRenderTextureInd"),
	HX_CSTRING("_reusable"),
	HX_CSTRING("samplers"),
	HX_CSTRING("onApply"),
	HX_CSTRING("_onDispose"),
	HX_CSTRING("onSizeChanged"),
	HX_CSTRING("activate"),
	HX_CSTRING("apply"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PostProcess_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PostProcess_obj::__mClass,"__mClass");
};

#endif

Class PostProcess_obj::__mClass;

void PostProcess_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.postprocess.PostProcess"), hx::TCanCast< PostProcess_obj> ,sStaticFields,sMemberFields,
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

void PostProcess_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace postprocess
