#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Effect
#include <com/gamestudiohx/babylonhx/materials/Effect.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BabylonTexture
#include <com/gamestudiohx/babylonhx/materials/textures/BabylonTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BaseTexture
#include <com/gamestudiohx/babylonhx/materials/textures/BaseTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_Texture
#include <com/gamestudiohx/babylonhx/materials/textures/Texture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_BabylonGLBuffer
#include <com/gamestudiohx/babylonhx/mesh/BabylonGLBuffer.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_InstancedMesh
#include <com/gamestudiohx/babylonhx/mesh/InstancedMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_VertexBuffer
#include <com/gamestudiohx/babylonhx/mesh/VertexBuffer.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_postprocess_PostProcess
#include <com/gamestudiohx/babylonhx/postprocess/PostProcess.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_SmartArray
#include <com/gamestudiohx/babylonhx/tools/SmartArray.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_Tools
#include <com/gamestudiohx/babylonhx/tools/Tools.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color3
#include <com/gamestudiohx/babylonhx/tools/math/Color3.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color4
#include <com/gamestudiohx/babylonhx/tools/math/Color4.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Plane
#include <com/gamestudiohx/babylonhx/tools/math/Plane.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Viewport
#include <com/gamestudiohx/babylonhx/tools/math/Viewport.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_AssetType
#include <openfl/AssetType.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DirectRenderer
#include <openfl/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLView
#include <openfl/display/OpenGLView.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_gl_GL
#include <openfl/gl/GL.h>
#endif
#ifndef INCLUDED_openfl_gl_GLBuffer
#include <openfl/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLFramebuffer
#include <openfl/gl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLObject
#include <openfl/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl_gl_GLProgram
#include <openfl/gl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl_gl_GLRenderbuffer
#include <openfl/gl/GLRenderbuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLShader
#include <openfl/gl/GLShader.h>
#endif
#ifndef INCLUDED_openfl_gl_GLTexture
#include <openfl/gl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl_system_Capabilities
#include <openfl/system/Capabilities.h>
#endif
#ifndef INCLUDED_openfl_utils_ArrayBufferView
#include <openfl/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArray
#include <openfl/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl_utils_Float32Array
#include <openfl/utils/Float32Array.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_utils_Int16Array
#include <openfl/utils/Int16Array.h>
#endif
#ifndef INCLUDED_openfl_utils_UInt8Array
#include <openfl/utils/UInt8Array.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{

Void Engine_obj::__construct(::openfl::display::Sprite canvas,bool antialias)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","new",0xdc944b86,"com.gamestudiohx.babylonhx.Engine.new","com/gamestudiohx/babylonhx/Engine.hx",124,0x0790c729)
HX_STACK_THIS(this)
HX_STACK_ARG(canvas,"canvas")
HX_STACK_ARG(antialias,"antialias")
{
	HX_STACK_LINE(125)
	this->_renderingCanvas = canvas;
	HX_STACK_LINE(132)
	this->forceWireframe = false;
	HX_STACK_LINE(133)
	this->cullBackFaces = true;
	HX_STACK_LINE(136)
	this->scenes = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(138)
	this->_runningLoop = false;
	HX_STACK_LINE(141)
	::openfl::display::OpenGLView _g = ::openfl::display::OpenGLView_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(141)
	this->_workingContext = _g;
	HX_STACK_LINE(142)
	canvas->addChild(this->_workingContext);
	HX_STACK_LINE(145)
	Float _g1 = ::openfl::system::Capabilities_obj::get_pixelAspectRatio();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(145)
	Float _g2 = (Float(1.0) / Float(_g1));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(145)
	int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(145)
	this->_hardwareScalingLevel = _g3;
	HX_STACK_LINE(146)
	this->resize();
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/Engine.hx",149,0x0790c729)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("maxTexturesImageUnits") , null(),false);
				__result->Add(HX_CSTRING("maxTextureSize") , null(),false);
				__result->Add(HX_CSTRING("maxCubemapTextureSize") , null(),false);
				__result->Add(HX_CSTRING("maxRenderTextureSize") , null(),false);
				__result->Add(HX_CSTRING("standardDerivatives") , null(),false);
				__result->Add(HX_CSTRING("textureFloat") , null(),false);
				__result->Add(HX_CSTRING("textureAnisotropicFilterExtension") , null(),false);
				__result->Add(HX_CSTRING("maxAnisotropy") , null(),false);
				__result->Add(HX_CSTRING("instancedArrays") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(149)
	this->_caps = _Function_1_1::Block();
	HX_STACK_LINE(160)
	Dynamic _g4 = ::openfl::gl::GL_obj::lime_gl_get_parameter((int)34930);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(160)
	this->_caps->__FieldRef(HX_CSTRING("maxTexturesImageUnits")) = _g4;
	HX_STACK_LINE(162)
	Dynamic _g5 = ::openfl::gl::GL_obj::lime_gl_get_parameter((int)3379);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(162)
	this->_caps->__FieldRef(HX_CSTRING("maxTextureSize")) = _g5;
	HX_STACK_LINE(164)
	Dynamic _g6 = ::openfl::gl::GL_obj::lime_gl_get_parameter((int)34076);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(164)
	this->_caps->__FieldRef(HX_CSTRING("maxCubemapTextureSize")) = _g6;
	HX_STACK_LINE(167)
	this->_caps->__FieldRef(HX_CSTRING("maxRenderTextureSize")) = (int)8192;
	HX_STACK_LINE(171)
	this->_caps->__FieldRef(HX_CSTRING("standardDerivatives")) = (null() != null());
	HX_STACK_LINE(172)
	this->_caps->__FieldRef(HX_CSTRING("textureFloat")) = (null() != null());

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	Dynamic run(){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/gamestudiohx/babylonhx/Engine.hx",175,0x0790c729)
		{
			HX_STACK_LINE(176)
			if (((null() != null()))){
				HX_STACK_LINE(177)
				return null();
			}
			HX_STACK_LINE(179)
			if (((null() != null()))){
				HX_STACK_LINE(180)
				return null();
			}
			HX_STACK_LINE(182)
			if (((null() != null()))){
				HX_STACK_LINE(183)
				return null();
			}
			HX_STACK_LINE(185)
			if (((null() != null()))){
				HX_STACK_LINE(186)
				return null();
			}
			HX_STACK_LINE(188)
			return null();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(175)
	Dynamic get_EXT_texture_filter_anisotropic =  Dynamic(new _Function_1_2());		HX_STACK_VAR(get_EXT_texture_filter_anisotropic,"get_EXT_texture_filter_anisotropic");
	HX_STACK_LINE(191)
	Dynamic _g7 = get_EXT_texture_filter_anisotropic();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(191)
	this->_caps->__FieldRef(HX_CSTRING("textureAnisotropicFilterExtension")) = _g7;
	HX_STACK_LINE(193)
	Dynamic _g8;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(193)
	if (((this->_caps->__Field(HX_CSTRING("textureAnisotropicFilterExtension"),true) != null()))){
		HX_STACK_LINE(193)
		int pname = this->_caps->__Field(HX_CSTRING("textureAnisotropicFilterExtension"),true)->__Field(HX_CSTRING("MAX_TEXTURE_MAX_ANISOTROPY_EXT"),true);		HX_STACK_VAR(pname,"pname");
		HX_STACK_LINE(193)
		_g8 = ::openfl::gl::GL_obj::lime_gl_get_parameter(pname);
	}
	else{
		HX_STACK_LINE(193)
		_g8 = (int)1;
	}
	HX_STACK_LINE(193)
	this->_caps->__FieldRef(HX_CSTRING("maxAnisotropy")) = _g8;
	HX_STACK_LINE(196)
	this->_loadedTexturesCache = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(197)
	this->_activeTexturesCache = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(198)
	this->_currentEffect = null();
	struct _Function_1_3{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/Engine.hx",199,0x0790c729)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("culling") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(199)
	this->_currentState = _Function_1_3::Block();
	HX_STACK_LINE(203)
	::haxe::ds::StringMap _g9 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(203)
	this->_compiledEffects = _g9;
	HX_STACK_LINE(205)
	::openfl::gl::GL_obj::lime_gl_enable((int)2929);
	HX_STACK_LINE(206)
	::openfl::gl::GL_obj::lime_gl_depth_func((int)515);
	HX_STACK_LINE(209)
	this->isFullscreen = false;
	HX_STACK_LINE(242)
	this->isPointerLock = false;
}
;
	return null();
}

//Engine_obj::~Engine_obj() { }

Dynamic Engine_obj::__CreateEmpty() { return  new Engine_obj; }
hx::ObjectPtr< Engine_obj > Engine_obj::__new(::openfl::display::Sprite canvas,bool antialias)
{  hx::ObjectPtr< Engine_obj > result = new Engine_obj();
	result->__construct(canvas,antialias);
	return result;}

Dynamic Engine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Engine_obj > result = new Engine_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float Engine_obj::getAspectRatio( ::com::gamestudiohx::babylonhx::cameras::Camera camera){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","getAspectRatio",0x4d37ddb7,"com.gamestudiohx.babylonhx.Engine.getAspectRatio","com/gamestudiohx/babylonhx/Engine.hx",261,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(261)
	return this->_aspectRatio;
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getAspectRatio,return )

int Engine_obj::getRenderWidth( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","getRenderWidth",0xe587e074,"com.gamestudiohx.babylonhx.Engine.getRenderWidth","com/gamestudiohx/babylonhx/Engine.hx",269,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	return ::openfl::Lib_obj::get_current()->get_stage()->get_stageWidth();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getRenderWidth,return )

int Engine_obj::getRenderHeight( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","getRenderHeight",0xa7abfdb9,"com.gamestudiohx.babylonhx.Engine.getRenderHeight","com/gamestudiohx/babylonhx/Engine.hx",274,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_LINE(274)
	return ::openfl::Lib_obj::get_current()->get_stage()->get_stageHeight();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getRenderHeight,return )

::openfl::display::Sprite Engine_obj::getRenderingCanvas( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","getRenderingCanvas",0x5aedc4e8,"com.gamestudiohx.babylonhx.Engine.getRenderingCanvas","com/gamestudiohx/babylonhx/Engine.hx",278,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_LINE(278)
	return this->_renderingCanvas;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getRenderingCanvas,return )

Void Engine_obj::setHardwareScalingLevel( int level){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setHardwareScalingLevel",0x198c176d,"com.gamestudiohx.babylonhx.Engine.setHardwareScalingLevel","com/gamestudiohx/babylonhx/Engine.hx",281,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(level,"level")
		HX_STACK_LINE(282)
		this->_hardwareScalingLevel = level;
		HX_STACK_LINE(283)
		this->resize();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,setHardwareScalingLevel,(void))

int Engine_obj::getHardwareScalingLevel( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","getHardwareScalingLevel",0x172aae61,"com.gamestudiohx.babylonhx.Engine.getHardwareScalingLevel","com/gamestudiohx/babylonhx/Engine.hx",287,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_LINE(287)
	return this->_hardwareScalingLevel;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getHardwareScalingLevel,return )

Array< ::Dynamic > Engine_obj::getLoadedTexturesCache( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","getLoadedTexturesCache",0x02a6d249,"com.gamestudiohx.babylonhx.Engine.getLoadedTexturesCache","com/gamestudiohx/babylonhx/Engine.hx",291,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_LINE(291)
	return this->_loadedTexturesCache;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getLoadedTexturesCache,return )

Dynamic Engine_obj::getCaps( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","getCaps",0x3b10d1fd,"com.gamestudiohx.babylonhx.Engine.getCaps","com/gamestudiohx/babylonhx/Engine.hx",295,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_LINE(295)
	return this->_caps;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getCaps,return )

Void Engine_obj::stopRenderLoop( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","stopRenderLoop",0x95ad1616,"com.gamestudiohx.babylonhx.Engine.stopRenderLoop","com/gamestudiohx/babylonhx/Engine.hx",300,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_LINE(301)
		this->_renderFunction = null();
		HX_STACK_LINE(302)
		this->_runningLoop = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,stopRenderLoop,(void))

Void Engine_obj::_renderLoop( ::openfl::geom::Rectangle rect){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","_renderLoop",0x20d47f1f,"com.gamestudiohx.babylonhx.Engine._renderLoop","com/gamestudiohx/babylonhx/Engine.hx",305,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(307)
		this->beginFrame();
		HX_STACK_LINE(309)
		if (((this->_renderFunction_dyn() != null()))){
			HX_STACK_LINE(310)
			::openfl::geom::Rectangle _g = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(310)
			this->_renderFunction(_g);
		}
		HX_STACK_LINE(314)
		this->endFrame();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,_renderLoop,(void))

Void Engine_obj::runRenderLoop( Dynamic renderFunction){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","runRenderLoop",0x0205deab,"com.gamestudiohx.babylonhx.Engine.runRenderLoop","com/gamestudiohx/babylonhx/Engine.hx",317,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderFunction,"renderFunction")
		HX_STACK_LINE(318)
		this->_runningLoop = true;
		HX_STACK_LINE(319)
		this->_renderFunction = renderFunction;
		HX_STACK_LINE(320)
		this->_workingContext->render = this->_renderLoop_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,runRenderLoop,(void))

Void Engine_obj::switchFullscreen( Dynamic requestPointerLock){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","switchFullscreen",0x903b0669,"com.gamestudiohx.babylonhx.Engine.switchFullscreen","com/gamestudiohx/babylonhx/Engine.hx",323,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(requestPointerLock,"requestPointerLock")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,switchFullscreen,(void))

Void Engine_obj::clear( Dynamic color,bool backBuffer,bool depthStencil){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","clear",0x120d8233,"com.gamestudiohx.babylonhx.Engine.clear","com/gamestudiohx/babylonhx/Engine.hx",334,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(backBuffer,"backBuffer")
		HX_STACK_ARG(depthStencil,"depthStencil")
		HX_STACK_LINE(335)
		if ((::Std_obj::is(color,hx::ClassOf< ::com::gamestudiohx::babylonhx::tools::math::Color4 >()))){
			HX_STACK_LINE(336)
			Float red = color->__Field(HX_CSTRING("r"),true);		HX_STACK_VAR(red,"red");
			HX_STACK_LINE(336)
			Float green = color->__Field(HX_CSTRING("g"),true);		HX_STACK_VAR(green,"green");
			HX_STACK_LINE(336)
			Float blue = color->__Field(HX_CSTRING("b"),true);		HX_STACK_VAR(blue,"blue");
			HX_STACK_LINE(336)
			Float alpha = color->__Field(HX_CSTRING("a"),true);		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(336)
			::openfl::gl::GL_obj::lime_gl_clear_color(red,green,blue,alpha);
		}
		else{
			HX_STACK_LINE(338)
			Float red = color->__Field(HX_CSTRING("r"),true);		HX_STACK_VAR(red,"red");
			HX_STACK_LINE(338)
			Float green = color->__Field(HX_CSTRING("g"),true);		HX_STACK_VAR(green,"green");
			HX_STACK_LINE(338)
			Float blue = color->__Field(HX_CSTRING("b"),true);		HX_STACK_VAR(blue,"blue");
			HX_STACK_LINE(338)
			::openfl::gl::GL_obj::lime_gl_clear_color(red,green,blue,1.0);
		}
		HX_STACK_LINE(340)
		::openfl::gl::GL_obj::lime_gl_clear_depth(1.0);
		HX_STACK_LINE(341)
		int mode = (int)0;		HX_STACK_VAR(mode,"mode");
		HX_STACK_LINE(343)
		if ((backBuffer)){
			HX_STACK_LINE(344)
			hx::OrEq(mode,(int)16384);
		}
		HX_STACK_LINE(346)
		if ((depthStencil)){
			HX_STACK_LINE(347)
			hx::OrEq(mode,(int)256);
		}
		HX_STACK_LINE(349)
		::openfl::gl::GL_obj::lime_gl_clear(mode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,clear,(void))

Void Engine_obj::setViewport( ::com::gamestudiohx::babylonhx::tools::math::Viewport viewport,hx::Null< Float >  __o_requiredWidth,hx::Null< Float >  __o_requiredHeight){
Float requiredWidth = __o_requiredWidth.Default(0);
Float requiredHeight = __o_requiredHeight.Default(0);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setViewport",0x368f274e,"com.gamestudiohx.babylonhx.Engine.setViewport","com/gamestudiohx/babylonhx/Engine.hx",352,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(viewport,"viewport")
	HX_STACK_ARG(requiredWidth,"requiredWidth")
	HX_STACK_ARG(requiredHeight,"requiredHeight")
{
		HX_STACK_LINE(353)
		Float width;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(353)
		if (((requiredWidth == (int)0))){
			HX_STACK_LINE(353)
			width = this->getRenderWidth();
		}
		else{
			HX_STACK_LINE(353)
			width = requiredWidth;
		}
		HX_STACK_LINE(354)
		Float height;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(354)
		if (((requiredHeight == (int)0))){
			HX_STACK_LINE(354)
			height = this->getRenderHeight();
		}
		else{
			HX_STACK_LINE(354)
			height = requiredHeight;
		}
		HX_STACK_LINE(356)
		Float x = viewport->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(357)
		Float y = viewport->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(359)
		this->_cachedViewport = viewport;
		HX_STACK_LINE(361)
		{
			HX_STACK_LINE(361)
			int x1 = ::Std_obj::_int((x * width));		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(361)
			int y1 = ::Std_obj::_int((y * height));		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(361)
			int width1 = ::Std_obj::_int((width * viewport->width));		HX_STACK_VAR(width1,"width1");
			HX_STACK_LINE(361)
			int height1 = ::Std_obj::_int((height * viewport->height));		HX_STACK_VAR(height1,"height1");
			HX_STACK_LINE(361)
			::openfl::gl::GL_obj::lime_gl_viewport(x1,y1,width1,height1);
		}
		HX_STACK_LINE(362)
		this->_aspectRatio = (Float((width * viewport->width)) / Float(((height * viewport->height))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,setViewport,(void))

Void Engine_obj::setDirectViewport( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setDirectViewport",0x946b1d97,"com.gamestudiohx.babylonhx.Engine.setDirectViewport","com/gamestudiohx/babylonhx/Engine.hx",365,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(366)
		this->_cachedViewport = null();
		HX_STACK_LINE(368)
		::openfl::gl::GL_obj::lime_gl_viewport(x,y,width,height);
		HX_STACK_LINE(369)
		this->_aspectRatio = (Float(width) / Float(height));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,setDirectViewport,(void))

Void Engine_obj::beginFrame( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","beginFrame",0x625e5ede,"com.gamestudiohx.babylonhx.Engine.beginFrame","com/gamestudiohx/babylonhx/Engine.hx",373,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_LINE(373)
		int _g = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(373)
		::com::gamestudiohx::babylonhx::tools::Tools_obj::previousFramesDuration->push(_g);
		HX_STACK_LINE(373)
		int length = ::com::gamestudiohx::babylonhx::tools::Tools_obj::previousFramesDuration->length;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(373)
		if (((length >= (int)2))){
			HX_STACK_LINE(373)
			::com::gamestudiohx::babylonhx::tools::Tools_obj::deltaTime = (::com::gamestudiohx::babylonhx::tools::Tools_obj::previousFramesDuration->__get((length - (int)1)) - ::com::gamestudiohx::babylonhx::tools::Tools_obj::previousFramesDuration->__get((length - (int)2)));
		}
		HX_STACK_LINE(373)
		if (((length >= ::com::gamestudiohx::babylonhx::tools::Tools_obj::fpsRange))){
			HX_STACK_LINE(373)
			if (((length > ::com::gamestudiohx::babylonhx::tools::Tools_obj::fpsRange))){
				HX_STACK_LINE(373)
				::com::gamestudiohx::babylonhx::tools::Tools_obj::previousFramesDuration->splice((int)0,(int)1);
				HX_STACK_LINE(373)
				length = ::com::gamestudiohx::babylonhx::tools::Tools_obj::previousFramesDuration->length;
			}
			HX_STACK_LINE(373)
			Float sum = (int)0;		HX_STACK_VAR(sum,"sum");
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(373)
				int _g2 = (length - (int)1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(373)
				while((true)){
					HX_STACK_LINE(373)
					if ((!(((_g1 < _g2))))){
						HX_STACK_LINE(373)
						break;
					}
					HX_STACK_LINE(373)
					int id = (_g1)++;		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(373)
					hx::AddEq(sum,(::com::gamestudiohx::babylonhx::tools::Tools_obj::previousFramesDuration->__get((id + (int)1)) - ::com::gamestudiohx::babylonhx::tools::Tools_obj::previousFramesDuration->__get(id)));
				}
			}
			HX_STACK_LINE(373)
			::com::gamestudiohx::babylonhx::tools::Tools_obj::fps = (Float(1000.0) / Float(((Float(sum) / Float(((length - (int)1)))))));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,beginFrame,(void))

Void Engine_obj::endFrame( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","endFrame",0xd732656c,"com.gamestudiohx.babylonhx.Engine.endFrame","com/gamestudiohx/babylonhx/Engine.hx",377,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_LINE(377)
		::openfl::gl::GL_obj::lime_gl_flush();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,endFrame,(void))

Void Engine_obj::resize( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","resize",0xba97da8e,"com.gamestudiohx.babylonhx.Engine.resize","com/gamestudiohx/babylonhx/Engine.hx",380,0x0790c729)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,resize,(void))

Void Engine_obj::bindFramebuffer( ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texture){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","bindFramebuffer",0xfa816256,"com.gamestudiohx.babylonhx.Engine.bindFramebuffer","com/gamestudiohx/babylonhx/Engine.hx",386,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(387)
			::openfl::gl::GLFramebuffer framebuffer = texture->_framebuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(387)
			::openfl::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,(  (((framebuffer == null()))) ? Dynamic(null()) : Dynamic(framebuffer->id) ));
		}
		HX_STACK_LINE(388)
		{
			HX_STACK_LINE(388)
			int width = ::Std_obj::_int(texture->_width);		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(388)
			int height = ::Std_obj::_int(texture->_height);		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(388)
			::openfl::gl::GL_obj::lime_gl_viewport((int)0,(int)0,width,height);
		}
		HX_STACK_LINE(389)
		this->_aspectRatio = (Float(texture->_width) / Float(texture->_height));
		HX_STACK_LINE(391)
		this->wipeCaches();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,bindFramebuffer,(void))

Void Engine_obj::unBindFramebuffer( ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texture){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","unBindFramebuffer",0x8769e57d,"com.gamestudiohx.babylonhx.Engine.unBindFramebuffer","com/gamestudiohx/babylonhx/Engine.hx",395,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(395)
		if ((texture->generateMipMaps)){
			HX_STACK_LINE(396)
			{
				HX_STACK_LINE(396)
				::openfl::gl::GLTexture texture1 = texture->data;		HX_STACK_VAR(texture1,"texture1");
				HX_STACK_LINE(396)
				::openfl::gl::GL_obj::lime_gl_bind_texture((int)3553,(  (((texture1 == null()))) ? Dynamic(null()) : Dynamic(texture1->id) ));
			}
			HX_STACK_LINE(397)
			::openfl::gl::GL_obj::lime_gl_generate_mipmap((int)3553);
			HX_STACK_LINE(398)
			::openfl::gl::GL_obj::lime_gl_bind_texture((int)3553,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,unBindFramebuffer,(void))

Void Engine_obj::flushFramebuffer( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","flushFramebuffer",0x42cf7da3,"com.gamestudiohx.babylonhx.Engine.flushFramebuffer","com/gamestudiohx/babylonhx/Engine.hx",403,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_LINE(403)
		::openfl::gl::GL_obj::lime_gl_flush();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,flushFramebuffer,(void))

Void Engine_obj::restoreDefaultFramebuffer( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","restoreDefaultFramebuffer",0x0afa7840,"com.gamestudiohx.babylonhx.Engine.restoreDefaultFramebuffer","com/gamestudiohx/babylonhx/Engine.hx",406,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_LINE(407)
		::openfl::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,null());
		HX_STACK_LINE(408)
		this->setViewport(this->_cachedViewport,null(),null());
		HX_STACK_LINE(409)
		this->wipeCaches();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,restoreDefaultFramebuffer,(void))

::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer Engine_obj::createVertexBuffer( Array< Float > vertices){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","createVertexBuffer",0x0b6fec3a,"com.gamestudiohx.babylonhx.Engine.createVertexBuffer","com/gamestudiohx/babylonhx/Engine.hx",413,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_LINE(414)
	int _g = ::openfl::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(414)
	Dynamic _g1 = ::openfl::gl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(414)
	::openfl::gl::GLBuffer vbo = ::openfl::gl::GLBuffer_obj::__new(_g,_g1);		HX_STACK_VAR(vbo,"vbo");
	HX_STACK_LINE(415)
	::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,(  (((vbo == null()))) ? Dynamic(null()) : Dynamic(vbo->id) ));
	HX_STACK_LINE(416)
	{
		HX_STACK_LINE(416)
		::openfl::utils::IMemoryRange data = ::openfl::utils::Float32Array_obj::__new(vertices,null(),null());		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(416)
		::openfl::utils::ByteArray _g2 = data->getByteBuffer();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(416)
		int _g3 = data->getStart();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(416)
		int _g4 = data->getLength();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(416)
		::openfl::gl::GL_obj::lime_gl_buffer_data((int)34962,_g2,_g3,_g4,(int)35044);
	}
	HX_STACK_LINE(417)
	::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,null());
	HX_STACK_LINE(418)
	return ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer_obj::__new(vbo,null());
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,createVertexBuffer,return )

::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer Engine_obj::createDynamicVertexBuffer( int capacity){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","createDynamicVertexBuffer",0x4958c3ad,"com.gamestudiohx.babylonhx.Engine.createDynamicVertexBuffer","com/gamestudiohx/babylonhx/Engine.hx",421,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(capacity,"capacity")
	HX_STACK_LINE(422)
	int _g = ::openfl::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(422)
	Dynamic _g1 = ::openfl::gl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(422)
	::openfl::gl::GLBuffer vbo = ::openfl::gl::GLBuffer_obj::__new(_g,_g1);		HX_STACK_VAR(vbo,"vbo");
	HX_STACK_LINE(423)
	::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,(  (((vbo == null()))) ? Dynamic(null()) : Dynamic(vbo->id) ));
	HX_STACK_LINE(424)
	{
		HX_STACK_LINE(424)
		::openfl::utils::IMemoryRange data = ::openfl::utils::Float32Array_obj::__new(capacity,null(),null());		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(424)
		::openfl::utils::ByteArray _g2 = data->getByteBuffer();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(424)
		int _g3 = data->getStart();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(424)
		int _g4 = data->getLength();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(424)
		::openfl::gl::GL_obj::lime_gl_buffer_data((int)34962,_g2,_g3,_g4,(int)35048);
	}
	HX_STACK_LINE(425)
	::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,null());
	HX_STACK_LINE(426)
	return ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer_obj::__new(vbo,null());
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,createDynamicVertexBuffer,return )

Void Engine_obj::updateDynamicVertexBuffer( ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer vertexBuffer,Dynamic vertices,hx::Null< int >  __o_length){
int length = __o_length.Default(0);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","updateDynamicVertexBuffer",0x132e60c0,"com.gamestudiohx.babylonhx.Engine.updateDynamicVertexBuffer","com/gamestudiohx/babylonhx/Engine.hx",429,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertexBuffer,"vertexBuffer")
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(430)
		{
			HX_STACK_LINE(430)
			::openfl::gl::GLBuffer buffer = vertexBuffer->buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(430)
			::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
		}
		HX_STACK_LINE(432)
		if (((length != (int)0))){
			HX_STACK_LINE(433)
			::openfl::utils::IMemoryRange data = ::openfl::utils::Float32Array_obj::__new(vertices,(int)0,length);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(433)
			::openfl::utils::ByteArray _g = data->getByteBuffer();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(433)
			int _g1 = data->getStart();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(433)
			int _g2 = data->getLength();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(433)
			::openfl::gl::GL_obj::lime_gl_buffer_sub_data((int)34962,(int)0,_g,_g1,_g2);
		}
		else{
			HX_STACK_LINE(435)
			::openfl::utils::IMemoryRange data = ::openfl::utils::Float32Array_obj::__new(vertices,null(),null());		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(435)
			::openfl::utils::ByteArray _g3 = data->getByteBuffer();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(435)
			int _g4 = data->getStart();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(435)
			int _g5 = data->getLength();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(435)
			::openfl::gl::GL_obj::lime_gl_buffer_sub_data((int)34962,(int)0,_g3,_g4,_g5);
		}
		HX_STACK_LINE(438)
		::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,updateDynamicVertexBuffer,(void))

::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer Engine_obj::createIndexBuffer( Array< int > indices){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","createIndexBuffer",0x17a2b1bc,"com.gamestudiohx.babylonhx.Engine.createIndexBuffer","com/gamestudiohx/babylonhx/Engine.hx",441,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(indices,"indices")
	HX_STACK_LINE(442)
	int _g = ::openfl::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(442)
	Dynamic _g1 = ::openfl::gl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(442)
	::openfl::gl::GLBuffer vbo = ::openfl::gl::GLBuffer_obj::__new(_g,_g1);		HX_STACK_VAR(vbo,"vbo");
	HX_STACK_LINE(443)
	::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34963,(  (((vbo == null()))) ? Dynamic(null()) : Dynamic(vbo->id) ));
	HX_STACK_LINE(444)
	{
		HX_STACK_LINE(444)
		::openfl::utils::IMemoryRange data = ::openfl::utils::Int16Array_obj::__new(indices,null(),null());		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(444)
		::openfl::utils::ByteArray _g2 = data->getByteBuffer();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(444)
		int _g3 = data->getStart();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(444)
		int _g4 = data->getLength();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(444)
		::openfl::gl::GL_obj::lime_gl_buffer_data((int)34963,_g2,_g3,_g4,(int)35044);
	}
	HX_STACK_LINE(445)
	::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34963,null());
	HX_STACK_LINE(446)
	return ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer_obj::__new(vbo,null());
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,createIndexBuffer,return )

Void Engine_obj::bindBuffers( ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer vertexBuffer,::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer indexBuffer,Array< int > vertexDeclaration,int vertexStrideSize,::com::gamestudiohx::babylonhx::materials::Effect effect){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","bindBuffers",0x178ac85c,"com.gamestudiohx.babylonhx.Engine.bindBuffers","com/gamestudiohx/babylonhx/Engine.hx",449,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertexBuffer,"vertexBuffer")
		HX_STACK_ARG(indexBuffer,"indexBuffer")
		HX_STACK_ARG(vertexDeclaration,"vertexDeclaration")
		HX_STACK_ARG(vertexStrideSize,"vertexStrideSize")
		HX_STACK_ARG(effect,"effect")
		HX_STACK_LINE(450)
		if (((bool((this->_cachedVertexBuffers != vertexBuffer)) || bool((this->_cachedEffectForVertexBuffers != effect))))){
			HX_STACK_LINE(451)
			this->_cachedVertexBuffers = vertexBuffer;
			HX_STACK_LINE(452)
			this->_cachedEffectForVertexBuffers = effect;
			HX_STACK_LINE(454)
			{
				HX_STACK_LINE(454)
				::openfl::gl::GLBuffer buffer = vertexBuffer->buffer;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(454)
				::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
			}
			HX_STACK_LINE(456)
			int offset = (int)0;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(457)
			{
				HX_STACK_LINE(457)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(457)
				int _g = vertexDeclaration->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(457)
				while((true)){
					HX_STACK_LINE(457)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(457)
						break;
					}
					HX_STACK_LINE(457)
					int index = (_g1)++;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(458)
					int order = effect->getAttribute(index);		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(460)
					if (((order >= (int)0))){
						HX_STACK_LINE(461)
						::openfl::gl::GL_obj::lime_gl_vertex_attrib_pointer(order,vertexDeclaration->__get(index),(int)5126,false,vertexStrideSize,offset);
					}
					HX_STACK_LINE(463)
					hx::AddEq(offset,(vertexDeclaration->__get(index) * (int)4));
				}
			}
		}
		HX_STACK_LINE(467)
		if (((this->_cachedIndexBuffer != indexBuffer))){
			HX_STACK_LINE(468)
			this->_cachedIndexBuffer = indexBuffer;
			HX_STACK_LINE(469)
			{
				HX_STACK_LINE(469)
				::openfl::gl::GLBuffer buffer = indexBuffer->buffer;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(469)
				::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34963,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Engine_obj,bindBuffers,(void))

Void Engine_obj::bindMultiBuffers( ::haxe::ds::StringMap vertexBuffers,::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer indexBuffer,::com::gamestudiohx::babylonhx::materials::Effect effect){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","bindMultiBuffers",0x3f73e071,"com.gamestudiohx.babylonhx.Engine.bindMultiBuffers","com/gamestudiohx/babylonhx/Engine.hx",473,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertexBuffers,"vertexBuffers")
		HX_STACK_ARG(indexBuffer,"indexBuffer")
		HX_STACK_ARG(effect,"effect")
		HX_STACK_LINE(474)
		if (((bool((this->_cachedVertexBuffers != vertexBuffers)) || bool((this->_cachedEffectForVertexBuffers != effect))))){
			HX_STACK_LINE(475)
			this->_cachedVertexBuffers = vertexBuffers;
			HX_STACK_LINE(476)
			this->_cachedEffectForVertexBuffers = effect;
			HX_STACK_LINE(478)
			Array< ::String > attributes = effect->getAttributesNames();		HX_STACK_VAR(attributes,"attributes");
			HX_STACK_LINE(480)
			{
				HX_STACK_LINE(480)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(480)
				int _g = attributes->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(480)
				while((true)){
					HX_STACK_LINE(480)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(480)
						break;
					}
					HX_STACK_LINE(480)
					int index = (_g1)++;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(481)
					int order = effect->getAttribute(index);		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(483)
					if (((order >= (int)0))){
						HX_STACK_LINE(484)
						::com::gamestudiohx::babylonhx::mesh::VertexBuffer vertexBuffer = vertexBuffers->get(attributes->__get(index));		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
						HX_STACK_LINE(485)
						int stride = vertexBuffer->getStrideSize();		HX_STACK_VAR(stride,"stride");
						HX_STACK_LINE(486)
						{
							HX_STACK_LINE(486)
							::openfl::gl::GLBuffer buffer = vertexBuffer->_buffer->buffer;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(486)
							::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
						}
						HX_STACK_LINE(487)
						::openfl::gl::GL_obj::lime_gl_vertex_attrib_pointer(order,stride,(int)5126,false,(stride * (int)4),(int)0);
					}
				}
			}
		}
		HX_STACK_LINE(492)
		if (((this->_cachedIndexBuffer != indexBuffer))){
			HX_STACK_LINE(493)
			this->_cachedIndexBuffer = indexBuffer;
			HX_STACK_LINE(494)
			{
				HX_STACK_LINE(494)
				::openfl::gl::GLBuffer buffer = indexBuffer->buffer;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(494)
				::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34963,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,bindMultiBuffers,(void))

bool Engine_obj::_releaseBuffer( ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer buffer){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","_releaseBuffer",0x4ddf6102,"com.gamestudiohx.babylonhx.Engine._releaseBuffer","com/gamestudiohx/babylonhx/Engine.hx",498,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(499)
	(buffer->references)--;
	HX_STACK_LINE(501)
	if (((buffer->references == (int)0))){
		HX_STACK_LINE(502)
		{
			HX_STACK_LINE(502)
			::openfl::gl::GLBuffer buffer1 = buffer->buffer;		HX_STACK_VAR(buffer1,"buffer1");
			HX_STACK_LINE(502)
			::openfl::gl::GL_obj::lime_gl_delete_buffer(buffer1->id);
			HX_STACK_LINE(502)
			buffer1->invalidate();
		}
		HX_STACK_LINE(503)
		return true;
	}
	HX_STACK_LINE(505)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,_releaseBuffer,return )

Void Engine_obj::deleteInstancesBuffer( ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer buffer){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","deleteInstancesBuffer",0x9f492399,"com.gamestudiohx.babylonhx.Engine.deleteInstancesBuffer","com/gamestudiohx/babylonhx/Engine.hx",510,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(510)
		::openfl::gl::GLBuffer buffer1 = buffer->buffer;		HX_STACK_VAR(buffer1,"buffer1");
		HX_STACK_LINE(510)
		::openfl::gl::GL_obj::lime_gl_delete_buffer(buffer1->id);
		HX_STACK_LINE(510)
		buffer1->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,deleteInstancesBuffer,(void))

Void Engine_obj::updateAndBindInstancesBuffer( ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer instancesBuffer,::openfl::utils::Float32Array data,Array< int > offsetLocations){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","updateAndBindInstancesBuffer",0x9cbad20d,"com.gamestudiohx.babylonhx.Engine.updateAndBindInstancesBuffer","com/gamestudiohx/babylonhx/Engine.hx",514,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instancesBuffer,"instancesBuffer")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(offsetLocations,"offsetLocations")
		HX_STACK_LINE(515)
		{
			HX_STACK_LINE(515)
			::openfl::gl::GLBuffer buffer = instancesBuffer->buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(515)
			::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
		}
		HX_STACK_LINE(516)
		{
			HX_STACK_LINE(516)
			::openfl::utils::ByteArray _g = data->getByteBuffer();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(516)
			int _g1 = data->getStart();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(516)
			int _g2 = data->getLength();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(516)
			::openfl::gl::GL_obj::lime_gl_buffer_sub_data((int)34962,(int)0,_g,_g1,_g2);
		}
		HX_STACK_LINE(518)
		{
			HX_STACK_LINE(518)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(518)
			while((true)){
				HX_STACK_LINE(518)
				if ((!(((_g < (int)4))))){
					HX_STACK_LINE(518)
					break;
				}
				HX_STACK_LINE(518)
				int index = (_g)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(519)
				int offsetLocation = offsetLocations->__get(index);		HX_STACK_VAR(offsetLocation,"offsetLocation");
				HX_STACK_LINE(520)
				::openfl::gl::GL_obj::lime_gl_enable_vertex_attrib_array(offsetLocation);
				HX_STACK_LINE(521)
				::openfl::gl::GL_obj::lime_gl_vertex_attrib_pointer(offsetLocation,(int)4,(int)5126,false,(int)64,(index * (int)16));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,updateAndBindInstancesBuffer,(void))

Void Engine_obj::unBindInstancesBuffer( ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer instancesBuffer,Array< int > offsetLocations){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","unBindInstancesBuffer",0x21b80f6e,"com.gamestudiohx.babylonhx.Engine.unBindInstancesBuffer","com/gamestudiohx/babylonhx/Engine.hx",528,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instancesBuffer,"instancesBuffer")
		HX_STACK_ARG(offsetLocations,"offsetLocations")
		HX_STACK_LINE(529)
		{
			HX_STACK_LINE(529)
			::openfl::gl::GLBuffer buffer = instancesBuffer->buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(529)
			::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
		}
		HX_STACK_LINE(530)
		{
			HX_STACK_LINE(530)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(530)
			while((true)){
				HX_STACK_LINE(530)
				if ((!(((_g < (int)4))))){
					HX_STACK_LINE(530)
					break;
				}
				HX_STACK_LINE(530)
				int index = (_g)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(531)
				int offsetLocation = offsetLocations->__get(index);		HX_STACK_VAR(offsetLocation,"offsetLocation");
				HX_STACK_LINE(532)
				::openfl::gl::GL_obj::lime_gl_disable_vertex_attrib_array(offsetLocation);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,unBindInstancesBuffer,(void))

Void Engine_obj::draw( bool useTriangles,int indexStart,int indexCount,Dynamic instancesCount){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","draw",0x1e9b721e,"com.gamestudiohx.babylonhx.Engine.draw","com/gamestudiohx/babylonhx/Engine.hx",546,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(useTriangles,"useTriangles")
		HX_STACK_ARG(indexStart,"indexStart")
		HX_STACK_ARG(indexCount,"indexCount")
		HX_STACK_ARG(instancesCount,"instancesCount")
		HX_STACK_LINE(546)
		::openfl::gl::GL_obj::lime_gl_draw_elements((  ((useTriangles)) ? int((int)4) : int((int)1) ),indexCount,(int)5123,(indexStart * (int)2));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,draw,(void))

::com::gamestudiohx::babylonhx::materials::Effect Engine_obj::createEffect( Dynamic baseName,Array< ::String > attributesNames,Array< ::String > uniformsNames,Array< ::String > samplers,::String defines,Array< ::String > optionalDefines){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","createEffect",0x715e8ac7,"com.gamestudiohx.babylonhx.Engine.createEffect","com/gamestudiohx/babylonhx/Engine.hx",551,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseName,"baseName")
	HX_STACK_ARG(attributesNames,"attributesNames")
	HX_STACK_ARG(uniformsNames,"uniformsNames")
	HX_STACK_ARG(samplers,"samplers")
	HX_STACK_ARG(defines,"defines")
	HX_STACK_ARG(optionalDefines,"optionalDefines")
	HX_STACK_LINE(552)
	Dynamic _g = ::Reflect_obj::field(baseName,HX_CSTRING("vertex"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(552)
	::String vertex;		HX_STACK_VAR(vertex,"vertex");
	HX_STACK_LINE(552)
	if (((_g != null()))){
		HX_STACK_LINE(552)
		vertex = baseName->__Field(HX_CSTRING("vertex"),true);
	}
	else{
		HX_STACK_LINE(552)
		vertex = baseName;
	}
	HX_STACK_LINE(553)
	Dynamic _g1 = ::Reflect_obj::field(baseName,HX_CSTRING("fragment"));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(553)
	::String fragment;		HX_STACK_VAR(fragment,"fragment");
	HX_STACK_LINE(553)
	if (((_g1 != null()))){
		HX_STACK_LINE(553)
		fragment = baseName->__Field(HX_CSTRING("fragment"),true);
	}
	else{
		HX_STACK_LINE(553)
		fragment = baseName;
	}
	HX_STACK_LINE(555)
	::String name = ((((vertex + HX_CSTRING("+")) + fragment) + HX_CSTRING("@")) + defines);		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(556)
	if ((this->_compiledEffects->exists(name))){
		HX_STACK_LINE(557)
		return this->_compiledEffects->get(name);
	}
	HX_STACK_LINE(560)
	::com::gamestudiohx::babylonhx::materials::Effect effect = ::com::gamestudiohx::babylonhx::materials::Effect_obj::__new(baseName,attributesNames,uniformsNames,samplers,hx::ObjectPtr<OBJ_>(this),defines,optionalDefines);		HX_STACK_VAR(effect,"effect");
	HX_STACK_LINE(561)
	this->_compiledEffects->set(name,effect);
	HX_STACK_LINE(563)
	return effect;
}


HX_DEFINE_DYNAMIC_FUNC6(Engine_obj,createEffect,return )

::openfl::gl::GLShader Engine_obj::compileShader( ::String source,::String type,::String defines){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","compileShader",0x857e979e,"com.gamestudiohx.babylonhx.Engine.compileShader","com/gamestudiohx/babylonhx/Engine.hx",566,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(defines,"defines")
	HX_STACK_LINE(567)
	int _g = ::openfl::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(567)
	Dynamic _g1 = ::openfl::gl::GL_obj::lime_gl_create_shader((  (((type == HX_CSTRING("vertex")))) ? int((int)35633) : int((int)35632) ));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(567)
	::openfl::gl::GLShader shader = ::openfl::gl::GLShader_obj::__new(_g,_g1);		HX_STACK_VAR(shader,"shader");
	HX_STACK_LINE(569)
	::openfl::gl::GL_obj::lime_gl_shader_source(shader->id,(((  (((defines != null()))) ? ::String((defines + HX_CSTRING("\n"))) : ::String(HX_CSTRING("")) )) + source));
	HX_STACK_LINE(570)
	::openfl::gl::GL_obj::lime_gl_compile_shader(shader->id);
	HX_STACK_LINE(572)
	int _g2 = ::openfl::gl::GL_obj::lime_gl_get_shader_parameter(shader->id,(int)35713);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(572)
	if (((_g2 == (int)0))){
		HX_STACK_LINE(573)
		HX_STACK_DO_THROW(::openfl::gl::GL_obj::lime_gl_get_shader_info_log(shader->id));
	}
	HX_STACK_LINE(575)
	return shader;
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,compileShader,return )

::openfl::gl::GLProgram Engine_obj::createShaderProgram( ::String vertexCode,::String fragmentCode,::String defines){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","createShaderProgram",0x4248f469,"com.gamestudiohx.babylonhx.Engine.createShaderProgram","com/gamestudiohx/babylonhx/Engine.hx",578,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertexCode,"vertexCode")
	HX_STACK_ARG(fragmentCode,"fragmentCode")
	HX_STACK_ARG(defines,"defines")
	HX_STACK_LINE(579)
	::openfl::gl::GLShader vertexShader = this->compileShader(vertexCode,HX_CSTRING("vertex"),defines);		HX_STACK_VAR(vertexShader,"vertexShader");
	HX_STACK_LINE(580)
	::openfl::gl::GLShader fragmentShader = this->compileShader(fragmentCode,HX_CSTRING("fragment"),defines);		HX_STACK_VAR(fragmentShader,"fragmentShader");
	HX_STACK_LINE(582)
	int _g = ::openfl::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(582)
	Dynamic _g1 = ::openfl::gl::GL_obj::lime_gl_create_program();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(582)
	::openfl::gl::GLProgram shaderProgram = ::openfl::gl::GLProgram_obj::__new(_g,_g1);		HX_STACK_VAR(shaderProgram,"shaderProgram");
	HX_STACK_LINE(583)
	{
		HX_STACK_LINE(583)
		shaderProgram->attach(vertexShader);
		HX_STACK_LINE(583)
		::openfl::gl::GL_obj::lime_gl_attach_shader(shaderProgram->id,vertexShader->id);
	}
	HX_STACK_LINE(584)
	{
		HX_STACK_LINE(584)
		shaderProgram->attach(fragmentShader);
		HX_STACK_LINE(584)
		::openfl::gl::GL_obj::lime_gl_attach_shader(shaderProgram->id,fragmentShader->id);
	}
	HX_STACK_LINE(586)
	::openfl::gl::GL_obj::lime_gl_link_program(shaderProgram->id);
	HX_STACK_LINE(588)
	::String error = ::openfl::gl::GL_obj::lime_gl_get_program_info_log(shaderProgram->id);		HX_STACK_VAR(error,"error");
	HX_STACK_LINE(589)
	if (((error != HX_CSTRING("")))){
		HX_STACK_LINE(590)
		HX_STACK_DO_THROW(error);
	}
	HX_STACK_LINE(593)
	{
		HX_STACK_LINE(593)
		::openfl::gl::GL_obj::lime_gl_delete_shader(vertexShader->id);
		HX_STACK_LINE(593)
		vertexShader->invalidate();
	}
	HX_STACK_LINE(594)
	{
		HX_STACK_LINE(594)
		::openfl::gl::GL_obj::lime_gl_delete_shader(fragmentShader->id);
		HX_STACK_LINE(594)
		fragmentShader->invalidate();
	}
	HX_STACK_LINE(596)
	return shaderProgram;
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,createShaderProgram,return )

Dynamic Engine_obj::getUniforms( ::openfl::gl::GLProgram shaderProgram,Array< ::String > uniformsNames){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","getUniforms",0x91d1a09b,"com.gamestudiohx.babylonhx.Engine.getUniforms","com/gamestudiohx/babylonhx/Engine.hx",599,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shaderProgram,"shaderProgram")
	HX_STACK_ARG(uniformsNames,"uniformsNames")
	HX_STACK_LINE(600)
	Dynamic results = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(602)
	{
		HX_STACK_LINE(602)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(602)
		int _g = uniformsNames->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(602)
		while((true)){
			HX_STACK_LINE(602)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(602)
				break;
			}
			HX_STACK_LINE(602)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(603)
			Dynamic _g2 = ::openfl::gl::GL_obj::lime_gl_get_uniform_location(shaderProgram->id,uniformsNames->__get(index));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(603)
			results->__Field(HX_CSTRING("push"),true)(_g2);
		}
	}
	HX_STACK_LINE(606)
	return results;
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,getUniforms,return )

Array< int > Engine_obj::getAttributes( ::openfl::gl::GLProgram shaderProgram,Array< ::String > attributesNames){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","getAttributes",0x9eb02bb3,"com.gamestudiohx.babylonhx.Engine.getAttributes","com/gamestudiohx/babylonhx/Engine.hx",609,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shaderProgram,"shaderProgram")
	HX_STACK_ARG(attributesNames,"attributesNames")
	HX_STACK_LINE(610)
	Array< int > results = Array_obj< int >::__new();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(612)
	{
		HX_STACK_LINE(612)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(612)
		int _g = attributesNames->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(612)
		while((true)){
			HX_STACK_LINE(612)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(612)
				break;
			}
			HX_STACK_LINE(612)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(613)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(614)
				int _g2 = ::openfl::gl::GL_obj::lime_gl_get_attrib_location(shaderProgram->id,attributesNames->__get(index));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(614)
				results->push(_g2);
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(616)
						::String _g11 = ::Std_obj::string(e);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(616)
						::String _g2 = (HX_CSTRING("getAttributes() -> ERROR: ") + _g11);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(616)
						::haxe::Log_obj::trace(_g2,hx::SourceInfo(HX_CSTRING("Engine.hx"),616,HX_CSTRING("com.gamestudiohx.babylonhx.Engine"),HX_CSTRING("getAttributes")));
						HX_STACK_LINE(617)
						results->push((int)-1);
					}
				}
			}
		}
	}
	HX_STACK_LINE(621)
	return results;
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,getAttributes,return )

Void Engine_obj::enableEffect( ::com::gamestudiohx::babylonhx::materials::Effect effect){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","enableEffect",0xf997b18e,"com.gamestudiohx.babylonhx.Engine.enableEffect","com/gamestudiohx/babylonhx/Engine.hx",624,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(effect,"effect")
		struct _Function_1_1{
			inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/Engine.hx",626,0x0790c729)
				{
					HX_STACK_LINE(626)
					int _g = effect->getAttributesCount();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(626)
					return (_g == (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(626)
		if (((  ((!(((  ((!(((effect == null()))))) ? bool(_Function_1_1::Block(effect)) : bool(true) ))))) ? bool((this->_currentEffect == effect)) : bool(true) ))){
			HX_STACK_LINE(627)
			return null();
		}
		HX_STACK_LINE(631)
		{
			HX_STACK_LINE(631)
			::openfl::gl::GLProgram program = effect->getProgram();		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(631)
			::openfl::gl::GL_obj::lime_gl_use_program((  (((program == null()))) ? Dynamic(null()) : Dynamic(program->id) ));
		}
		HX_STACK_LINE(633)
		{
			HX_STACK_LINE(633)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(633)
			int _g = effect->getAttributesCount();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(633)
			while((true)){
				HX_STACK_LINE(633)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(633)
					break;
				}
				HX_STACK_LINE(633)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(635)
				int order = effect->getAttribute(index);		HX_STACK_VAR(order,"order");
				HX_STACK_LINE(636)
				if (((order >= (int)0))){
					HX_STACK_LINE(637)
					int index1 = effect->getAttribute(index);		HX_STACK_VAR(index1,"index1");
					HX_STACK_LINE(637)
					::openfl::gl::GL_obj::lime_gl_enable_vertex_attrib_array(index1);
				}
			}
		}
		HX_STACK_LINE(641)
		this->_currentEffect = effect;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,enableEffect,(void))

Void Engine_obj::setArray( Dynamic uniform,Array< Float > array){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setArray",0x067531b1,"com.gamestudiohx.babylonhx.Engine.setArray","com/gamestudiohx/babylonhx/Engine.hx",645,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(645)
		if (((uniform != null()))){
			HX_STACK_LINE(646)
			Dynamic location = uniform;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(646)
			::openfl::gl::GL_obj::lime_gl_uniform1fv(location,array);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,setArray,(void))

Void Engine_obj::setMatrices( Dynamic uniform,Array< Float > matrices){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setMatrices",0x00cd4c82,"com.gamestudiohx.babylonhx.Engine.setMatrices","com/gamestudiohx/babylonhx/Engine.hx",651,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(matrices,"matrices")
		HX_STACK_LINE(651)
		if (((uniform != null()))){
			HX_STACK_LINE(652)
			Dynamic location = uniform;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(652)
			Dynamic v;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(652)
			{
				HX_STACK_LINE(652)
				::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrices,null(),null());		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(652)
				Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(652)
				v = data;
			}
			HX_STACK_LINE(652)
			::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,setMatrices,(void))

Void Engine_obj::setMatrix( Dynamic uniform,::com::gamestudiohx::babylonhx::tools::math::Matrix matrix){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setMatrix",0xa3ee0729,"com.gamestudiohx.babylonhx.Engine.setMatrix","com/gamestudiohx/babylonhx/Engine.hx",657,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(657)
		if (((uniform != null()))){
			HX_STACK_LINE(658)
			Dynamic location = uniform;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(658)
			Dynamic v;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(658)
			{
				HX_STACK_LINE(658)
				::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(658)
				Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(658)
				v = data;
			}
			HX_STACK_LINE(658)
			::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,setMatrix,(void))

Void Engine_obj::setFloat( Dynamic uniform,Float value){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setFloat",0xe37c89b4,"com.gamestudiohx.babylonhx.Engine.setFloat","com/gamestudiohx/babylonhx/Engine.hx",663,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(663)
		if (((uniform != null()))){
			HX_STACK_LINE(664)
			Dynamic location = uniform;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(664)
			::openfl::gl::GL_obj::lime_gl_uniform1f(location,value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,setFloat,(void))

Void Engine_obj::setFloat2( Dynamic uniform,Float x,Float y){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setFloat2",0x297bf3fe,"com.gamestudiohx.babylonhx.Engine.setFloat2","com/gamestudiohx/babylonhx/Engine.hx",669,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(669)
		if (((uniform != null()))){
			HX_STACK_LINE(670)
			Dynamic location = uniform;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(670)
			::openfl::gl::GL_obj::lime_gl_uniform2f(location,x,y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,setFloat2,(void))

Void Engine_obj::setFloat3( Dynamic uniform,Float x,Float y,Float z){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setFloat3",0x297bf3ff,"com.gamestudiohx.babylonhx.Engine.setFloat3","com/gamestudiohx/babylonhx/Engine.hx",675,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(675)
		if (((uniform != null()))){
			HX_STACK_LINE(676)
			Dynamic location = uniform;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(676)
			::openfl::gl::GL_obj::lime_gl_uniform3f(location,x,y,z);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,setFloat3,(void))

Void Engine_obj::setBool( Dynamic uniform,bool _bool){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setBool",0x2d73cb12,"com.gamestudiohx.babylonhx.Engine.setBool","com/gamestudiohx/babylonhx/Engine.hx",681,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(_bool,"bool")
		HX_STACK_LINE(681)
		if (((uniform != null()))){
			HX_STACK_LINE(682)
			Dynamic location = uniform;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(682)
			::openfl::gl::GL_obj::lime_gl_uniform1i(location,(  ((_bool)) ? int((int)1) : int((int)0) ));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,setBool,(void))

Void Engine_obj::setFloat4( Dynamic uniform,Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setFloat4",0x297bf400,"com.gamestudiohx.babylonhx.Engine.setFloat4","com/gamestudiohx/babylonhx/Engine.hx",687,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(687)
		if (((uniform != null()))){
			HX_STACK_LINE(688)
			Dynamic location = uniform;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(688)
			::openfl::gl::GL_obj::lime_gl_uniform4f(location,x,y,z,w);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Engine_obj,setFloat4,(void))

Void Engine_obj::setColor3( Dynamic uniform,::com::gamestudiohx::babylonhx::tools::math::Color3 color3){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setColor3",0xaeac9658,"com.gamestudiohx.babylonhx.Engine.setColor3","com/gamestudiohx/babylonhx/Engine.hx",693,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(color3,"color3")
		HX_STACK_LINE(693)
		if (((uniform != null()))){
			HX_STACK_LINE(694)
			Dynamic location = uniform;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(694)
			::openfl::gl::GL_obj::lime_gl_uniform3f(location,color3->r,color3->g,color3->b);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,setColor3,(void))

Void Engine_obj::setColor4( Dynamic uniform,::com::gamestudiohx::babylonhx::tools::math::Color3 color3,Float alpha){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setColor4",0xaeac9659,"com.gamestudiohx.babylonhx.Engine.setColor4","com/gamestudiohx/babylonhx/Engine.hx",699,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(color3,"color3")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(699)
		if (((uniform != null()))){
			HX_STACK_LINE(700)
			Dynamic location = uniform;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(700)
			::openfl::gl::GL_obj::lime_gl_uniform4f(location,color3->r,color3->g,color3->b,alpha);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,setColor4,(void))

Void Engine_obj::setState( bool culling){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setState",0x64f13a29,"com.gamestudiohx.babylonhx.Engine.setState","com/gamestudiohx/babylonhx/Engine.hx",708,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(culling,"culling")
		HX_STACK_LINE(708)
		if (((this->_currentState->__Field(HX_CSTRING("culling"),true) != culling))){
			HX_STACK_LINE(709)
			if ((culling)){
				HX_STACK_LINE(710)
				::openfl::gl::GL_obj::lime_gl_cull_face((  ((this->cullBackFaces)) ? int((int)1029) : int((int)1028) ));
				HX_STACK_LINE(711)
				::openfl::gl::GL_obj::lime_gl_enable((int)2884);
			}
			else{
				HX_STACK_LINE(713)
				::openfl::gl::GL_obj::lime_gl_disable((int)2884);
			}
			HX_STACK_LINE(716)
			this->_currentState->__FieldRef(HX_CSTRING("culling")) = culling;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,setState,(void))

Void Engine_obj::setDepthBuffer( bool enable){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setDepthBuffer",0xc2322c7b,"com.gamestudiohx.babylonhx.Engine.setDepthBuffer","com/gamestudiohx/babylonhx/Engine.hx",721,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enable,"enable")
		HX_STACK_LINE(721)
		if ((enable)){
			HX_STACK_LINE(722)
			::openfl::gl::GL_obj::lime_gl_enable((int)2929);
		}
		else{
			HX_STACK_LINE(724)
			::openfl::gl::GL_obj::lime_gl_disable((int)2929);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,setDepthBuffer,(void))

Void Engine_obj::setDepthWrite( bool enable){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setDepthWrite",0x7909c5c4,"com.gamestudiohx.babylonhx.Engine.setDepthWrite","com/gamestudiohx/babylonhx/Engine.hx",729,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enable,"enable")
		HX_STACK_LINE(729)
		::openfl::gl::GL_obj::lime_gl_depth_mask(enable);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,setDepthWrite,(void))

Void Engine_obj::setColorWrite( bool enable){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setColorWrite",0x4109e964,"com.gamestudiohx.babylonhx.Engine.setColorWrite","com/gamestudiohx/babylonhx/Engine.hx",733,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enable,"enable")
		HX_STACK_LINE(733)
		::openfl::gl::GL_obj::lime_gl_color_mask(enable,enable,enable,enable);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,setColorWrite,(void))

Void Engine_obj::setAlphaMode( int mode){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setAlphaMode",0xf5105df9,"com.gamestudiohx.babylonhx.Engine.setAlphaMode","com/gamestudiohx/babylonhx/Engine.hx",737,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(737)
		int _switch_1 = (mode);
		if (  ( _switch_1==::com::gamestudiohx::babylonhx::Engine_obj::ALPHA_DISABLE)){
			HX_STACK_LINE(739)
			this->setDepthWrite(true);
			HX_STACK_LINE(740)
			::openfl::gl::GL_obj::lime_gl_blend_func_separate((int)770,(int)771,(int)0,(int)1);
			HX_STACK_LINE(741)
			::openfl::gl::GL_obj::lime_gl_disable((int)3042);
		}
		else if (  ( _switch_1==::com::gamestudiohx::babylonhx::Engine_obj::ALPHA_COMBINE)){
			HX_STACK_LINE(744)
			this->setDepthWrite(false);
			HX_STACK_LINE(745)
			::openfl::gl::GL_obj::lime_gl_blend_func_separate((int)770,(int)771,(int)0,(int)1);
			HX_STACK_LINE(746)
			::openfl::gl::GL_obj::lime_gl_enable((int)3042);
		}
		else if (  ( _switch_1==::com::gamestudiohx::babylonhx::Engine_obj::ALPHA_ADD)){
			HX_STACK_LINE(749)
			this->setDepthWrite(false);
			HX_STACK_LINE(750)
			::openfl::gl::GL_obj::lime_gl_blend_func_separate((int)1,(int)1,(int)0,(int)1);
			HX_STACK_LINE(751)
			::openfl::gl::GL_obj::lime_gl_enable((int)3042);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,setAlphaMode,(void))

Void Engine_obj::setAlphaTesting( bool enable){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setAlphaTesting",0x831f7afa,"com.gamestudiohx.babylonhx.Engine.setAlphaTesting","com/gamestudiohx/babylonhx/Engine.hx",757,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enable,"enable")
		HX_STACK_LINE(757)
		this->_alphaTest = enable;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,setAlphaTesting,(void))

bool Engine_obj::getAlphaTesting( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","getAlphaTesting",0x8753fdee,"com.gamestudiohx.babylonhx.Engine.getAlphaTesting","com/gamestudiohx/babylonhx/Engine.hx",761,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_LINE(761)
	return this->_alphaTest;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getAlphaTesting,return )

Void Engine_obj::wipeCaches( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","wipeCaches",0x21443b72,"com.gamestudiohx.babylonhx.Engine.wipeCaches","com/gamestudiohx/babylonhx/Engine.hx",765,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_LINE(766)
		this->_activeTexturesCache = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(767)
		this->_currentEffect = null();
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/Engine.hx",768,0x0790c729)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("culling") , null(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(768)
		this->_currentState = _Function_1_1::Block();
		HX_STACK_LINE(772)
		this->_cachedVertexBuffers = null();
		HX_STACK_LINE(773)
		this->_cachedEffectForVertexBuffers = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,wipeCaches,(void))

int Engine_obj::getExponantOfTwo( int value,int max){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","getExponantOfTwo",0x7aba75ee,"com.gamestudiohx.babylonhx.Engine.getExponantOfTwo","com/gamestudiohx/babylonhx/Engine.hx",776,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(777)
	int count = (int)1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(779)
	while((true)){
		HX_STACK_LINE(780)
		hx::MultEq(count,(int)2);
		HX_STACK_LINE(779)
		if ((!(((count < value))))){
			HX_STACK_LINE(779)
			break;
		}
	}
	HX_STACK_LINE(783)
	if (((count > max))){
		HX_STACK_LINE(784)
		count = max;
	}
	HX_STACK_LINE(786)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,getExponantOfTwo,return )

::openfl::display::BitmapData Engine_obj::getScaled( ::openfl::display::BitmapData source,int newWidth,int newHeight){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","getScaled",0x40facf76,"com.gamestudiohx.babylonhx.Engine.getScaled","com/gamestudiohx/babylonhx/Engine.hx",789,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(newWidth,"newWidth")
	HX_STACK_ARG(newHeight,"newHeight")
	HX_STACK_LINE(790)
	::openfl::geom::Matrix m = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(791)
	int _g = source->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(791)
	Float _g1 = (Float(newWidth) / Float(_g));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(791)
	int _g2 = source->get_height();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(791)
	Float _g3 = (Float(newHeight) / Float(_g2));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(791)
	m->scale(_g1,_g3);
	HX_STACK_LINE(792)
	::openfl::display::BitmapData bmp = ::openfl::display::BitmapData_obj::__new(newWidth,newHeight,true,null(),null());		HX_STACK_VAR(bmp,"bmp");
	HX_STACK_LINE(793)
	bmp->draw(source,m,null(),null(),null(),null());
	HX_STACK_LINE(794)
	return bmp;
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,getScaled,return )

::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture Engine_obj::createTexture( ::String url,Dynamic noMipmap,Dynamic invertY,::com::gamestudiohx::babylonhx::Scene scene){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","createTexture",0x31efc7e5,"com.gamestudiohx.babylonhx.Engine.createTexture","com/gamestudiohx/babylonhx/Engine.hx",797,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(url,"url")
	HX_STACK_ARG(noMipmap,"noMipmap")
	HX_STACK_ARG(invertY,"invertY")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_LINE(797)
	Array< ::Dynamic > scene1 = Array_obj< ::Dynamic >::__new().Add(scene);		HX_STACK_VAR(scene1,"scene1");
	HX_STACK_LINE(797)
	Array< ::Dynamic > noMipmap1 = Array_obj< ::Dynamic >::__new().Add(noMipmap);		HX_STACK_VAR(noMipmap1,"noMipmap1");
	HX_STACK_LINE(797)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(799)
	int _g1 = ::openfl::gl::GL_obj::get_version();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(799)
	Dynamic _g11 = ::openfl::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(799)
	::openfl::gl::GLTexture _g2 = ::openfl::gl::GLTexture_obj::__new(_g1,_g11);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(799)
	Array< ::Dynamic > texture = Array_obj< ::Dynamic >::__new().Add(::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture_obj::__new(url,_g2));		HX_STACK_VAR(texture,"texture");

	HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,scene1,Array< ::Dynamic >,_g,Array< ::Dynamic >,texture,Array< ::Dynamic >,noMipmap1)
	Void run(::openfl::display::BitmapData img){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/gamestudiohx/babylonhx/Engine.hx",801,0x0790c729)
		HX_STACK_ARG(img,"img")
		{
			HX_STACK_LINE(802)
			int _g3 = img->get_width();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(802)
			int potWidth = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->getExponantOfTwo(_g3,_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->_caps->__Field(HX_CSTRING("maxTextureSize"),true));		HX_STACK_VAR(potWidth,"potWidth");
			HX_STACK_LINE(803)
			int _g4 = img->get_height();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(803)
			int potHeight = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->getExponantOfTwo(_g4,_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->_caps->__Field(HX_CSTRING("maxTextureSize"),true));		HX_STACK_VAR(potHeight,"potHeight");
			HX_STACK_LINE(804)
			int _g5 = img->get_width();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(804)
			bool isPot;		HX_STACK_VAR(isPot,"isPot");
			HX_STACK_LINE(804)
			if (((_g5 == potWidth))){
				HX_STACK_LINE(804)
				int _g6 = img->get_height();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(804)
				isPot = (_g6 == potHeight);
			}
			else{
				HX_STACK_LINE(804)
				isPot = false;
			}
			HX_STACK_LINE(805)
			_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->_workingCanvas = img;
			HX_STACK_LINE(807)
			if ((!(isPot))){
				HX_STACK_LINE(808)
				int _g7 = ::Std_obj::_int((Float(potWidth) / Float((int)2)));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(808)
				int _g8 = ::Std_obj::_int((Float(potHeight) / Float((int)2)));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(808)
				::openfl::display::BitmapData _g9 = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->getScaled(img,_g7,_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(808)
				_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->_workingCanvas = _g9;
			}
			HX_STACK_LINE(814)
			::openfl::utils::ByteArray _g15;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(814)
			{
				HX_STACK_LINE(814)
				::openfl::display::BitmapData bitmapData = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->_workingCanvas;		HX_STACK_VAR(bitmapData,"bitmapData");
				HX_STACK_LINE(814)
				int _g10 = bitmapData->get_width();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(814)
				int _g111 = bitmapData->get_height();		HX_STACK_VAR(_g111,"_g111");
				HX_STACK_LINE(814)
				::openfl::geom::Rectangle _g12 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,_g10,_g111);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(814)
				::openfl::utils::ByteArray data = bitmapData->getPixels(_g12);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(814)
				int _g13 = bitmapData->get_width();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(814)
				int _g14 = bitmapData->get_height();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(814)
				int size = (_g13 * _g14);		HX_STACK_VAR(size,"size");
				HX_STACK_LINE(814)
				int alpha;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(814)
				int red;		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(814)
				int green;		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(814)
				int blue;		HX_STACK_VAR(blue,"blue");
				HX_STACK_LINE(814)
				{
					HX_STACK_LINE(814)
					int _g6 = (int)0;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(814)
					while((true)){
						HX_STACK_LINE(814)
						if ((!(((_g6 < size))))){
							HX_STACK_LINE(814)
							break;
						}
						HX_STACK_LINE(814)
						int i = (_g6)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(814)
						alpha = data->__get((i * (int)4));
						HX_STACK_LINE(814)
						red = data->__get(((i * (int)4) + (int)1));
						HX_STACK_LINE(814)
						green = data->__get(((i * (int)4) + (int)2));
						HX_STACK_LINE(814)
						blue = data->__get(((i * (int)4) + (int)3));
						HX_STACK_LINE(814)
						hx::__ArrayImplRef(data,(i * (int)4)) = red;
						HX_STACK_LINE(814)
						hx::__ArrayImplRef(data,((i * (int)4) + (int)1)) = green;
						HX_STACK_LINE(814)
						hx::__ArrayImplRef(data,((i * (int)4) + (int)2)) = blue;
						HX_STACK_LINE(814)
						hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = alpha;
					}
				}
				HX_STACK_LINE(814)
				_g15 = data;
			}
			HX_STACK_LINE(814)
			::openfl::utils::UInt8Array pixelData = ::openfl::utils::UInt8Array_obj::__new(_g15,null(),null());		HX_STACK_VAR(pixelData,"pixelData");
			HX_STACK_LINE(818)
			{
				HX_STACK_LINE(818)
				::openfl::gl::GLTexture texture1 = texture->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture >()->data;		HX_STACK_VAR(texture1,"texture1");
				HX_STACK_LINE(818)
				::openfl::gl::GL_obj::lime_gl_bind_texture((int)3553,(  (((texture1 == null()))) ? Dynamic(null()) : Dynamic(texture1->id) ));
			}
			HX_STACK_LINE(825)
			{
				HX_STACK_LINE(825)
				int width = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->_workingCanvas->get_width();		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(825)
				int height = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->_workingCanvas->get_height();		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(825)
				::openfl::utils::ByteArray _g16;		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(825)
				if (((pixelData == null()))){
					HX_STACK_LINE(825)
					_g16 = null();
				}
				else{
					HX_STACK_LINE(825)
					_g16 = pixelData->getByteBuffer();
				}
				HX_STACK_LINE(825)
				Dynamic _g17;		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(825)
				if (((pixelData == null()))){
					HX_STACK_LINE(825)
					_g17 = null();
				}
				else{
					HX_STACK_LINE(825)
					_g17 = pixelData->getStart();
				}
				HX_STACK_LINE(825)
				::openfl::gl::GL_obj::lime_gl_tex_image_2d((int)3553,(int)0,(int)6408,width,height,(int)0,(int)6408,(int)5121,_g16,_g17);
			}
			HX_STACK_LINE(826)
			::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9729);
			HX_STACK_LINE(828)
			if (((bool((noMipmap1->__get((int)0) != null())) && bool((noMipmap1->__get((int)0) == true))))){
				HX_STACK_LINE(829)
				::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9729);
			}
			else{
				HX_STACK_LINE(831)
				::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9987);
				HX_STACK_LINE(832)
				::openfl::gl::GL_obj::lime_gl_generate_mipmap((int)3553);
			}
			HX_STACK_LINE(834)
			::openfl::gl::GL_obj::lime_gl_bind_texture((int)3553,null());
			HX_STACK_LINE(836)
			_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->_activeTexturesCache = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(837)
			int _g18 = img->get_width();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(837)
			texture->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture >()->_baseWidth = _g18;
			HX_STACK_LINE(838)
			int _g19 = img->get_height();		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(838)
			texture->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture >()->_baseHeight = _g19;
			HX_STACK_LINE(839)
			texture->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture >()->_width = potWidth;
			HX_STACK_LINE(840)
			texture->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture >()->_height = potHeight;
			HX_STACK_LINE(841)
			texture->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture >()->isReady = true;
			HX_STACK_LINE(842)
			scene1->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >()->_removePendingData(texture->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture >());
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(801)
	Dynamic onload =  Dynamic(new _Function_1_1(scene1,_g,texture,noMipmap1));		HX_STACK_VAR(onload,"onload");
	HX_STACK_LINE(845)
	scene1->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >()->_addPendingData(texture->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture >());
	HX_STACK_LINE(846)
	::com::gamestudiohx::babylonhx::tools::Tools_obj::LoadImage(url,onload);
	HX_STACK_LINE(848)
	texture->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture >()->url = url;
	HX_STACK_LINE(849)
	texture->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture >()->noMipmap = noMipmap1->__get((int)0);
	HX_STACK_LINE(850)
	texture->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture >()->references = (int)1;
	HX_STACK_LINE(851)
	this->_loadedTexturesCache->push(texture->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture >());
	HX_STACK_LINE(853)
	return texture->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture >();
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,createTexture,return )

::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture Engine_obj::createDynamicTexture( int width,int height,bool generateMipMaps){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","createDynamicTexture",0x8dfc2552,"com.gamestudiohx.babylonhx.Engine.createDynamicTexture","com/gamestudiohx/babylonhx/Engine.hx",856,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(generateMipMaps,"generateMipMaps")
	HX_STACK_LINE(857)
	int _g = ::openfl::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(857)
	Dynamic _g1 = ::openfl::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(857)
	::openfl::gl::GLTexture _g2 = ::openfl::gl::GLTexture_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(857)
	::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texture = ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture_obj::__new(HX_CSTRING(""),_g2);		HX_STACK_VAR(texture,"texture");
	HX_STACK_LINE(859)
	int _g3 = this->getExponantOfTwo(width,this->_caps->__Field(HX_CSTRING("maxTextureSize"),true));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(859)
	width = _g3;
	HX_STACK_LINE(860)
	int _g4 = this->getExponantOfTwo(height,this->_caps->__Field(HX_CSTRING("maxTextureSize"),true));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(860)
	height = _g4;
	HX_STACK_LINE(862)
	{
		HX_STACK_LINE(862)
		::openfl::gl::GLTexture texture1 = texture->data;		HX_STACK_VAR(texture1,"texture1");
		HX_STACK_LINE(862)
		::openfl::gl::GL_obj::lime_gl_bind_texture((int)3553,(  (((texture1 == null()))) ? Dynamic(null()) : Dynamic(texture1->id) ));
	}
	HX_STACK_LINE(863)
	::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9729);
	HX_STACK_LINE(865)
	if ((!(generateMipMaps))){
		HX_STACK_LINE(866)
		::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9729);
	}
	else{
		HX_STACK_LINE(868)
		::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9987);
	}
	HX_STACK_LINE(870)
	::openfl::gl::GL_obj::lime_gl_bind_texture((int)3553,null());
	HX_STACK_LINE(872)
	this->_activeTexturesCache = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(873)
	int _g5 = ::Std_obj::_int(width);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(873)
	texture->_baseWidth = _g5;
	HX_STACK_LINE(874)
	int _g6 = ::Std_obj::_int(height);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(874)
	texture->_baseHeight = _g6;
	HX_STACK_LINE(875)
	texture->_width = width;
	HX_STACK_LINE(876)
	texture->_height = height;
	HX_STACK_LINE(877)
	texture->isReady = false;
	HX_STACK_LINE(878)
	texture->generateMipMaps = generateMipMaps;
	HX_STACK_LINE(879)
	texture->references = (int)1;
	HX_STACK_LINE(881)
	this->_loadedTexturesCache->push(texture);
	HX_STACK_LINE(883)
	return texture;
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,createDynamicTexture,return )

Void Engine_obj::updateDynamicTexture( ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texture,::openfl::display::BitmapData canvas,int invertY){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","updateDynamicTexture",0xa491a11f,"com.gamestudiohx.babylonhx.Engine.updateDynamicTexture","com/gamestudiohx/babylonhx/Engine.hx",886,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(canvas,"canvas")
		HX_STACK_ARG(invertY,"invertY")
		HX_STACK_LINE(887)
		{
			HX_STACK_LINE(887)
			::openfl::gl::GLTexture texture1 = texture->data;		HX_STACK_VAR(texture1,"texture1");
			HX_STACK_LINE(887)
			::openfl::gl::GL_obj::lime_gl_bind_texture((int)3553,(  (((texture1 == null()))) ? Dynamic(null()) : Dynamic(texture1->id) ));
		}
		HX_STACK_LINE(895)
		::openfl::utils::ByteArray _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(895)
		{
			HX_STACK_LINE(895)
			int _g = canvas->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(895)
			int _g1 = canvas->get_height();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(895)
			::openfl::geom::Rectangle _g2 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,_g,_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(895)
			::openfl::utils::ByteArray data = canvas->getPixels(_g2);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(895)
			int _g3 = canvas->get_width();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(895)
			int _g4 = canvas->get_height();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(895)
			int size = (_g3 * _g4);		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(895)
			int alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(895)
			int red;		HX_STACK_VAR(red,"red");
			HX_STACK_LINE(895)
			int green;		HX_STACK_VAR(green,"green");
			HX_STACK_LINE(895)
			int blue;		HX_STACK_VAR(blue,"blue");
			HX_STACK_LINE(895)
			{
				HX_STACK_LINE(895)
				int _g6 = (int)0;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(895)
				while((true)){
					HX_STACK_LINE(895)
					if ((!(((_g6 < size))))){
						HX_STACK_LINE(895)
						break;
					}
					HX_STACK_LINE(895)
					int i = (_g6)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(895)
					alpha = data->__get((i * (int)4));
					HX_STACK_LINE(895)
					red = data->__get(((i * (int)4) + (int)1));
					HX_STACK_LINE(895)
					green = data->__get(((i * (int)4) + (int)2));
					HX_STACK_LINE(895)
					blue = data->__get(((i * (int)4) + (int)3));
					HX_STACK_LINE(895)
					hx::__ArrayImplRef(data,(i * (int)4)) = red;
					HX_STACK_LINE(895)
					hx::__ArrayImplRef(data,((i * (int)4) + (int)1)) = green;
					HX_STACK_LINE(895)
					hx::__ArrayImplRef(data,((i * (int)4) + (int)2)) = blue;
					HX_STACK_LINE(895)
					hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = alpha;
				}
			}
			HX_STACK_LINE(895)
			_g5 = data;
		}
		HX_STACK_LINE(895)
		::openfl::utils::UInt8Array pixelData = ::openfl::utils::UInt8Array_obj::__new(_g5,null(),null());		HX_STACK_VAR(pixelData,"pixelData");
		HX_STACK_LINE(898)
		{
			HX_STACK_LINE(898)
			int width = canvas->get_width();		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(898)
			int height = canvas->get_height();		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(898)
			::openfl::utils::ArrayBufferView pixels = pixelData;		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(898)
			::openfl::utils::ByteArray _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(898)
			if (((pixels == null()))){
				HX_STACK_LINE(898)
				_g6 = null();
			}
			else{
				HX_STACK_LINE(898)
				_g6 = pixels->getByteBuffer();
			}
			HX_STACK_LINE(898)
			Dynamic _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(898)
			if (((pixels == null()))){
				HX_STACK_LINE(898)
				_g7 = null();
			}
			else{
				HX_STACK_LINE(898)
				_g7 = pixels->getStart();
			}
			HX_STACK_LINE(898)
			::openfl::gl::GL_obj::lime_gl_tex_image_2d((int)3553,(int)0,(int)6408,width,height,(int)0,(int)6408,(int)5121,_g6,_g7);
		}
		HX_STACK_LINE(899)
		if ((texture->generateMipMaps)){
			HX_STACK_LINE(900)
			::openfl::gl::GL_obj::lime_gl_generate_mipmap((int)3553);
		}
		HX_STACK_LINE(902)
		::openfl::gl::GL_obj::lime_gl_bind_texture((int)3553,null());
		HX_STACK_LINE(903)
		this->_activeTexturesCache = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(904)
		texture->isReady = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,updateDynamicTexture,(void))

Void Engine_obj::updateVideoTexture( ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texture,Dynamic video){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","updateVideoTexture",0xd1926ce3,"com.gamestudiohx.babylonhx.Engine.updateVideoTexture","com/gamestudiohx/babylonhx/Engine.hx",907,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(video,"video")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,updateVideoTexture,(void))

::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture Engine_obj::createRenderTargetTexture( Dynamic size,Dynamic options){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","createRenderTargetTexture",0x91dfe65e,"com.gamestudiohx.babylonhx.Engine.createRenderTargetTexture","com/gamestudiohx/babylonhx/Engine.hx",937,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(941)
	bool generateMipMaps = false;		HX_STACK_VAR(generateMipMaps,"generateMipMaps");
	HX_STACK_LINE(942)
	bool generateDepthBuffer = true;		HX_STACK_VAR(generateDepthBuffer,"generateDepthBuffer");
	HX_STACK_LINE(943)
	int samplingMode = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::TRILINEAR_SAMPLINGMODE;		HX_STACK_VAR(samplingMode,"samplingMode");
	HX_STACK_LINE(944)
	if (((options != null()))){
		HX_STACK_LINE(945)
		Dynamic _g = ::Reflect_obj::field(options,HX_CSTRING("generateMipMaps"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(945)
		bool _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(945)
		if (((_g != null()))){
			HX_STACK_LINE(945)
			_g1 = options->__Field(HX_CSTRING("generateMipmaps"),true);
		}
		else{
			HX_STACK_LINE(945)
			_g1 = options;
		}
		HX_STACK_LINE(945)
		generateMipMaps = _g1;
		HX_STACK_LINE(946)
		Dynamic _g2 = ::Reflect_obj::field(options,HX_CSTRING("generateDepthBuffer"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(946)
		bool _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(946)
		if (((_g2 != null()))){
			HX_STACK_LINE(946)
			_g3 = options->__Field(HX_CSTRING("generateDepthBuffer"),true);
		}
		else{
			HX_STACK_LINE(946)
			_g3 = true;
		}
		HX_STACK_LINE(946)
		generateDepthBuffer = _g3;
		HX_STACK_LINE(947)
		Dynamic _g4 = ::Reflect_obj::field(options,HX_CSTRING("samplingMode"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(947)
		if (((_g4 != null()))){
			HX_STACK_LINE(948)
			samplingMode = options->__Field(HX_CSTRING("samplingMode"),true);
		}
	}
	HX_STACK_LINE(952)
	int _g5 = ::openfl::gl::GL_obj::get_version();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(952)
	Dynamic _g6 = ::openfl::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(952)
	::openfl::gl::GLTexture _g7 = ::openfl::gl::GLTexture_obj::__new(_g5,_g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(952)
	::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texture = ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture_obj::__new(HX_CSTRING(""),_g7);		HX_STACK_VAR(texture,"texture");
	HX_STACK_LINE(953)
	{
		HX_STACK_LINE(953)
		::openfl::gl::GLTexture texture1 = texture->data;		HX_STACK_VAR(texture1,"texture1");
		HX_STACK_LINE(953)
		::openfl::gl::GL_obj::lime_gl_bind_texture((int)3553,(  (((texture1 == null()))) ? Dynamic(null()) : Dynamic(texture1->id) ));
	}
	HX_STACK_LINE(955)
	Dynamic _g8 = ::Reflect_obj::field(size,HX_CSTRING("width"));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(955)
	int width;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(955)
	if (((_g8 != null()))){
		HX_STACK_LINE(955)
		width = size->__Field(HX_CSTRING("width"),true);
	}
	else{
		HX_STACK_LINE(955)
		width = size;
	}
	HX_STACK_LINE(956)
	Dynamic _g9 = ::Reflect_obj::field(size,HX_CSTRING("height"));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(956)
	int height;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(956)
	if (((_g9 != null()))){
		HX_STACK_LINE(956)
		height = size->__Field(HX_CSTRING("height"),true);
	}
	else{
		HX_STACK_LINE(956)
		height = size;
	}
	HX_STACK_LINE(957)
	int magFilter = (int)9728;		HX_STACK_VAR(magFilter,"magFilter");
	HX_STACK_LINE(958)
	int minFilter = (int)9728;		HX_STACK_VAR(minFilter,"minFilter");
	HX_STACK_LINE(959)
	if (((samplingMode == ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::BILINEAR_SAMPLINGMODE))){
		HX_STACK_LINE(960)
		magFilter = (int)9729;
		HX_STACK_LINE(961)
		if ((generateMipMaps)){
			HX_STACK_LINE(962)
			minFilter = (int)9985;
		}
		else{
			HX_STACK_LINE(964)
			minFilter = (int)9729;
		}
	}
	else{
		HX_STACK_LINE(966)
		if (((samplingMode == ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::TRILINEAR_SAMPLINGMODE))){
			HX_STACK_LINE(967)
			magFilter = (int)9729;
			HX_STACK_LINE(968)
			if ((generateMipMaps)){
				HX_STACK_LINE(969)
				minFilter = (int)9987;
			}
			else{
				HX_STACK_LINE(971)
				minFilter = (int)9729;
			}
		}
	}
	HX_STACK_LINE(974)
	::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,magFilter);
	HX_STACK_LINE(975)
	::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,minFilter);
	HX_STACK_LINE(976)
	::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
	HX_STACK_LINE(977)
	::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
	HX_STACK_LINE(978)
	{
		HX_STACK_LINE(978)
		::openfl::utils::ByteArray _g10 = null();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(978)
		Dynamic _g11 = null();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(978)
		::openfl::gl::GL_obj::lime_gl_tex_image_2d((int)3553,(int)0,(int)6408,width,height,(int)0,(int)6408,(int)5121,_g10,_g11);
	}
	HX_STACK_LINE(980)
	::openfl::gl::GLRenderbuffer depthBuffer = null();		HX_STACK_VAR(depthBuffer,"depthBuffer");
	HX_STACK_LINE(982)
	if ((generateDepthBuffer)){
		HX_STACK_LINE(983)
		int _g12 = ::openfl::gl::GL_obj::get_version();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(983)
		Dynamic _g13 = ::openfl::gl::GL_obj::lime_gl_create_render_buffer();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(983)
		::openfl::gl::GLRenderbuffer _g14 = ::openfl::gl::GLRenderbuffer_obj::__new(_g12,_g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(983)
		depthBuffer = _g14;
		HX_STACK_LINE(984)
		::openfl::gl::GL_obj::lime_gl_bind_renderbuffer((int)36161,(  (((depthBuffer == null()))) ? Dynamic(null()) : Dynamic(depthBuffer->id) ));
		HX_STACK_LINE(985)
		::openfl::gl::GL_obj::lime_gl_renderbuffer_storage((int)36161,(int)33189,width,height);
	}
	HX_STACK_LINE(988)
	int _g15 = ::openfl::gl::GL_obj::get_version();		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(988)
	Dynamic _g16 = ::openfl::gl::GL_obj::lime_gl_create_framebuffer();		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(988)
	::openfl::gl::GLFramebuffer framebuffer = ::openfl::gl::GLFramebuffer_obj::__new(_g15,_g16);		HX_STACK_VAR(framebuffer,"framebuffer");
	HX_STACK_LINE(989)
	::openfl::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,(  (((framebuffer == null()))) ? Dynamic(null()) : Dynamic(framebuffer->id) ));
	HX_STACK_LINE(990)
	::openfl::gl::GL_obj::lime_gl_framebuffer_texture2D((int)36160,(int)36064,(int)3553,texture->data->id,(int)0);
	HX_STACK_LINE(991)
	if ((generateDepthBuffer)){
		HX_STACK_LINE(992)
		::openfl::gl::GL_obj::lime_gl_framebuffer_renderbuffer((int)36160,(int)36096,(int)36161,depthBuffer->id);
	}
	HX_STACK_LINE(996)
	::openfl::gl::GL_obj::lime_gl_bind_texture((int)3553,null());
	HX_STACK_LINE(997)
	::openfl::gl::GL_obj::lime_gl_bind_renderbuffer((int)36161,null());
	HX_STACK_LINE(998)
	::openfl::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,null());
	HX_STACK_LINE(1000)
	texture->_framebuffer = framebuffer;
	HX_STACK_LINE(1001)
	if ((generateDepthBuffer)){
		HX_STACK_LINE(1002)
		texture->_depthBuffer = depthBuffer;
	}
	HX_STACK_LINE(1004)
	texture->_width = width;
	HX_STACK_LINE(1005)
	texture->_height = height;
	HX_STACK_LINE(1006)
	texture->isReady = true;
	HX_STACK_LINE(1007)
	texture->generateMipMaps = generateMipMaps;
	HX_STACK_LINE(1008)
	texture->references = (int)1;
	HX_STACK_LINE(1009)
	this->_activeTexturesCache = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(1011)
	this->_loadedTexturesCache->push(texture);
	HX_STACK_LINE(1013)
	return texture;
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,createRenderTargetTexture,return )

::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture Engine_obj::createCubeTexture( ::String rootUrl,::com::gamestudiohx::babylonhx::Scene scene,Array< ::String > extensions){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","createCubeTexture",0x978bb870,"com.gamestudiohx.babylonhx.Engine.createCubeTexture","com/gamestudiohx/babylonhx/Engine.hx",1016,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rootUrl,"rootUrl")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(extensions,"extensions")
	HX_STACK_LINE(1016)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1017)
	if (((extensions == null()))){
		HX_STACK_LINE(1018)
		extensions = Array_obj< ::String >::__new().Add(HX_CSTRING("_px.jpg")).Add(HX_CSTRING("_py.jpg")).Add(HX_CSTRING("_pz.jpg")).Add(HX_CSTRING("_nx.jpg")).Add(HX_CSTRING("_ny.jpg")).Add(HX_CSTRING("_nz.jpg"));
	}
	HX_STACK_LINE(1023)
	int _g1 = ::openfl::gl::GL_obj::get_version();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1023)
	Dynamic _g11 = ::openfl::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(1023)
	::openfl::gl::GLTexture _g2 = ::openfl::gl::GLTexture_obj::__new(_g1,_g11);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1023)
	::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texture = ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture_obj::__new(rootUrl,_g2);		HX_STACK_VAR(texture,"texture");
	HX_STACK_LINE(1024)
	texture->isCube = true;
	HX_STACK_LINE(1025)
	texture->url = rootUrl;
	HX_STACK_LINE(1026)
	texture->references = (int)1;
	HX_STACK_LINE(1028)
	Array< ::Dynamic > faces = Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new().Add((int)34069).Add((int)34071).Add((int)34073).Add((int)34070).Add((int)34072).Add((int)34074));		HX_STACK_VAR(faces,"faces");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g,Array< ::Dynamic >,faces)
	Void run(::String imagePath,int index){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/gamestudiohx/babylonhx/Engine.hx",1033,0x0790c729)
		HX_STACK_ARG(imagePath,"imagePath")
		HX_STACK_ARG(index,"index")
		{
			HX_STACK_LINE(1034)
			::openfl::display::BitmapData img = ::openfl::Assets_obj::getBitmapData(imagePath,null());		HX_STACK_VAR(img,"img");
			HX_STACK_LINE(1036)
			int _g3 = img->get_width();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1036)
			int potWidth = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->getExponantOfTwo(_g3,_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->_caps->__Field(HX_CSTRING("maxTextureSize"),true));		HX_STACK_VAR(potWidth,"potWidth");
			HX_STACK_LINE(1037)
			int _g4 = img->get_height();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1037)
			int potHeight = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->getExponantOfTwo(_g4,_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->_caps->__Field(HX_CSTRING("maxTextureSize"),true));		HX_STACK_VAR(potHeight,"potHeight");
			HX_STACK_LINE(1038)
			int _g5 = img->get_width();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1038)
			bool isPot;		HX_STACK_VAR(isPot,"isPot");
			HX_STACK_LINE(1038)
			if (((_g5 == potWidth))){
				HX_STACK_LINE(1038)
				int _g6 = img->get_height();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1038)
				isPot = (_g6 == potHeight);
			}
			else{
				HX_STACK_LINE(1038)
				isPot = false;
			}
			HX_STACK_LINE(1039)
			_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->_workingCanvas = img;
			HX_STACK_LINE(1041)
			if ((!(isPot))){
				HX_STACK_LINE(1042)
				int _g7 = ::Std_obj::_int((Float(potWidth) / Float((int)2)));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(1042)
				int _g8 = ::Std_obj::_int((Float(potHeight) / Float((int)2)));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(1042)
				::openfl::display::BitmapData _g9 = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->getScaled(img,_g7,_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(1042)
				_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->_workingCanvas = _g9;
			}
			HX_STACK_LINE(1048)
			::openfl::utils::ByteArray _g15;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(1048)
			{
				HX_STACK_LINE(1048)
				::openfl::display::BitmapData bitmapData = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->_workingCanvas;		HX_STACK_VAR(bitmapData,"bitmapData");
				HX_STACK_LINE(1048)
				int _g10 = bitmapData->get_width();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(1048)
				int _g111 = bitmapData->get_height();		HX_STACK_VAR(_g111,"_g111");
				HX_STACK_LINE(1048)
				::openfl::geom::Rectangle _g12 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,_g10,_g111);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(1048)
				::openfl::utils::ByteArray data = bitmapData->getPixels(_g12);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(1048)
				int _g13 = bitmapData->get_width();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(1048)
				int _g14 = bitmapData->get_height();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(1048)
				int size = (_g13 * _g14);		HX_STACK_VAR(size,"size");
				HX_STACK_LINE(1048)
				int alpha;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(1048)
				int red;		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(1048)
				int green;		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(1048)
				int blue;		HX_STACK_VAR(blue,"blue");
				HX_STACK_LINE(1048)
				{
					HX_STACK_LINE(1048)
					int _g6 = (int)0;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(1048)
					while((true)){
						HX_STACK_LINE(1048)
						if ((!(((_g6 < size))))){
							HX_STACK_LINE(1048)
							break;
						}
						HX_STACK_LINE(1048)
						int i = (_g6)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(1048)
						alpha = data->__get((i * (int)4));
						HX_STACK_LINE(1048)
						red = data->__get(((i * (int)4) + (int)1));
						HX_STACK_LINE(1048)
						green = data->__get(((i * (int)4) + (int)2));
						HX_STACK_LINE(1048)
						blue = data->__get(((i * (int)4) + (int)3));
						HX_STACK_LINE(1048)
						hx::__ArrayImplRef(data,(i * (int)4)) = red;
						HX_STACK_LINE(1048)
						hx::__ArrayImplRef(data,((i * (int)4) + (int)1)) = green;
						HX_STACK_LINE(1048)
						hx::__ArrayImplRef(data,((i * (int)4) + (int)2)) = blue;
						HX_STACK_LINE(1048)
						hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = alpha;
					}
				}
				HX_STACK_LINE(1048)
				_g15 = data;
			}
			HX_STACK_LINE(1048)
			::openfl::utils::UInt8Array pixelData = ::openfl::utils::UInt8Array_obj::__new(_g15,null(),null());		HX_STACK_VAR(pixelData,"pixelData");
			HX_STACK_LINE(1051)
			{
				HX_STACK_LINE(1051)
				int width = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->_workingCanvas->get_width();		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(1051)
				int height = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->_workingCanvas->get_height();		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(1051)
				::openfl::utils::ArrayBufferView pixels = pixelData;		HX_STACK_VAR(pixels,"pixels");
				HX_STACK_LINE(1051)
				::openfl::utils::ByteArray _g16;		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(1051)
				if (((pixels == null()))){
					HX_STACK_LINE(1051)
					_g16 = null();
				}
				else{
					HX_STACK_LINE(1051)
					_g16 = pixels->getByteBuffer();
				}
				HX_STACK_LINE(1051)
				Dynamic _g17;		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(1051)
				if (((pixels == null()))){
					HX_STACK_LINE(1051)
					_g17 = null();
				}
				else{
					HX_STACK_LINE(1051)
					_g17 = pixels->getStart();
				}
				HX_STACK_LINE(1051)
				::openfl::gl::GL_obj::lime_gl_tex_image_2d(faces->__get((int)0).StaticCast< Array< int > >()->__get(index),(int)0,(int)6408,width,height,(int)0,(int)6408,(int)5121,_g16,_g17);
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(1033)
	Dynamic _setTex =  Dynamic(new _Function_1_1(_g,faces));		HX_STACK_VAR(_setTex,"_setTex");
	HX_STACK_LINE(1054)
	{
		HX_STACK_LINE(1054)
		::openfl::gl::GLTexture texture1 = texture->data;		HX_STACK_VAR(texture1,"texture1");
		HX_STACK_LINE(1054)
		::openfl::gl::GL_obj::lime_gl_bind_texture((int)34067,(  (((texture1 == null()))) ? Dynamic(null()) : Dynamic(texture1->id) ));
	}
	HX_STACK_LINE(1056)
	::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10242,(int)33071);
	HX_STACK_LINE(1057)
	::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10243,(int)33071);
	HX_STACK_LINE(1059)
	{
		HX_STACK_LINE(1059)
		int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(1059)
		int _g3 = extensions->length;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1059)
		while((true)){
			HX_STACK_LINE(1059)
			if ((!(((_g12 < _g3))))){
				HX_STACK_LINE(1059)
				break;
			}
			HX_STACK_LINE(1059)
			int i = (_g12)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1060)
			if ((::openfl::Assets_obj::exists((rootUrl + extensions->__get(i)),null()))){
				HX_STACK_LINE(1061)
				_setTex((rootUrl + extensions->__get(i)),i).Cast< Void >();
			}
			else{
				HX_STACK_LINE(1063)
				::haxe::Log_obj::trace((((HX_CSTRING("Image '") + rootUrl) + extensions->__get(i)) + HX_CSTRING("' doesn't exist !")),hx::SourceInfo(HX_CSTRING("Engine.hx"),1063,HX_CSTRING("com.gamestudiohx.babylonhx.Engine"),HX_CSTRING("createCubeTexture")));
			}
		}
	}
	HX_STACK_LINE(1067)
	::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10240,(int)9729);
	HX_STACK_LINE(1068)
	::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10241,(int)9987);
	HX_STACK_LINE(1070)
	::openfl::gl::GL_obj::lime_gl_generate_mipmap((int)34067);
	HX_STACK_LINE(1071)
	::openfl::gl::GL_obj::lime_gl_bind_texture((int)34067,null());
	HX_STACK_LINE(1073)
	this->_activeTexturesCache = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(1075)
	texture->isReady = true;
	HX_STACK_LINE(1077)
	this->_loadedTexturesCache->push(texture);
	HX_STACK_LINE(1079)
	return texture;
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,createCubeTexture,return )

Void Engine_obj::_releaseTexture( ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texture){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","_releaseTexture",0xc2e5a699,"com.gamestudiohx.babylonhx.Engine._releaseTexture","com/gamestudiohx/babylonhx/Engine.hx",1082,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(1083)
		if (((texture->_framebuffer != null()))){
			HX_STACK_LINE(1084)
			::openfl::gl::GLFramebuffer framebuffer = texture->_framebuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(1084)
			::openfl::gl::GL_obj::lime_gl_delete_framebuffer(framebuffer->id);
			HX_STACK_LINE(1084)
			framebuffer->invalidate();
		}
		HX_STACK_LINE(1087)
		if (((texture->_depthBuffer != null()))){
			HX_STACK_LINE(1088)
			::openfl::gl::GL_obj::deleteRenderbuffer(texture->_depthBuffer);
		}
		HX_STACK_LINE(1091)
		{
			HX_STACK_LINE(1091)
			::openfl::gl::GLTexture texture1 = texture->data;		HX_STACK_VAR(texture1,"texture1");
			HX_STACK_LINE(1091)
			::openfl::gl::GL_obj::lime_gl_delete_texture(texture1->id);
			HX_STACK_LINE(1091)
			texture1->invalidate();
		}
		HX_STACK_LINE(1094)
		{
			HX_STACK_LINE(1094)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1094)
			int _g = this->_caps->__Field(HX_CSTRING("maxTexturesImageUnits"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1094)
			while((true)){
				HX_STACK_LINE(1094)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(1094)
					break;
				}
				HX_STACK_LINE(1094)
				int channel = (_g1)++;		HX_STACK_VAR(channel,"channel");
				HX_STACK_LINE(1095)
				{
					HX_STACK_LINE(1095)
					int texture1 = this->getGLTexture(channel);		HX_STACK_VAR(texture1,"texture1");
					HX_STACK_LINE(1095)
					::openfl::gl::GL_obj::lime_gl_active_texture(texture1);
				}
				HX_STACK_LINE(1096)
				::openfl::gl::GL_obj::lime_gl_bind_texture((int)3553,null());
				HX_STACK_LINE(1097)
				::openfl::gl::GL_obj::lime_gl_bind_texture((int)34067,null());
				HX_STACK_LINE(1098)
				this->_activeTexturesCache[channel] = null();
			}
		}
		HX_STACK_LINE(1101)
		int index = ::Lambda_obj::indexOf(this->_loadedTexturesCache,texture);		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(1102)
		if (((index != (int)-1))){
			HX_STACK_LINE(1103)
			this->_loadedTexturesCache->splice(index,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,_releaseTexture,(void))

Void Engine_obj::bindSamplers( ::com::gamestudiohx::babylonhx::materials::Effect effect){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","bindSamplers",0xa1a8c962,"com.gamestudiohx.babylonhx.Engine.bindSamplers","com/gamestudiohx/babylonhx/Engine.hx",1107,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(effect,"effect")
		HX_STACK_LINE(1108)
		{
			HX_STACK_LINE(1108)
			::openfl::gl::GLProgram program = effect->getProgram();		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(1108)
			::openfl::gl::GL_obj::lime_gl_use_program((  (((program == null()))) ? Dynamic(null()) : Dynamic(program->id) ));
		}
		HX_STACK_LINE(1109)
		Array< ::String > samplers = effect->getSamplers();		HX_STACK_VAR(samplers,"samplers");
		HX_STACK_LINE(1110)
		{
			HX_STACK_LINE(1110)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1110)
			int _g = samplers->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1110)
			while((true)){
				HX_STACK_LINE(1110)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(1110)
					break;
				}
				HX_STACK_LINE(1110)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(1111)
				Dynamic uniform = effect->getUniform(samplers->__get(index));		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(1112)
				{
					HX_STACK_LINE(1112)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1112)
					::openfl::gl::GL_obj::lime_gl_uniform1i(location,index);
				}
			}
		}
		HX_STACK_LINE(1114)
		this->_currentEffect = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,bindSamplers,(void))

Void Engine_obj::_bindTexture( int channel,::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texture){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","_bindTexture",0xefc17ab9,"com.gamestudiohx.babylonhx.Engine._bindTexture","com/gamestudiohx/babylonhx/Engine.hx",1118,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(channel,"channel")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(1119)
		{
			HX_STACK_LINE(1119)
			int texture1 = this->getGLTexture(channel);		HX_STACK_VAR(texture1,"texture1");
			HX_STACK_LINE(1119)
			::openfl::gl::GL_obj::lime_gl_active_texture(texture1);
		}
		HX_STACK_LINE(1120)
		{
			HX_STACK_LINE(1120)
			::openfl::gl::GLTexture texture1 = texture->data;		HX_STACK_VAR(texture1,"texture1");
			HX_STACK_LINE(1120)
			::openfl::gl::GL_obj::lime_gl_bind_texture((int)3553,(  (((texture1 == null()))) ? Dynamic(null()) : Dynamic(texture1->id) ));
		}
		HX_STACK_LINE(1121)
		this->_activeTexturesCache[channel] = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,_bindTexture,(void))

Void Engine_obj::setTextureFromPostProcess( int channel,::com::gamestudiohx::babylonhx::postprocess::PostProcess postProcess){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setTextureFromPostProcess",0xe9d996f2,"com.gamestudiohx.babylonhx.Engine.setTextureFromPostProcess","com/gamestudiohx/babylonhx/Engine.hx",1125,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(channel,"channel")
		HX_STACK_ARG(postProcess,"postProcess")
		HX_STACK_LINE(1125)
		this->_bindTexture(channel,postProcess->_textures->data->__GetItem(postProcess->_currentRenderTextureInd));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,setTextureFromPostProcess,(void))

int Engine_obj::getGLTexture( int channel){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","getGLTexture",0x44099dfa,"com.gamestudiohx.babylonhx.Engine.getGLTexture","com/gamestudiohx/babylonhx/Engine.hx",1129,0x0790c729)
	HX_STACK_THIS(this)
	HX_STACK_ARG(channel,"channel")
	HX_STACK_LINE(1129)
	return ((int)33984 + channel);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getGLTexture,return )

Void Engine_obj::setTexture( int channel,::com::gamestudiohx::babylonhx::materials::textures::Texture texture){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","setTexture",0xd7d1c2f3,"com.gamestudiohx.babylonhx.Engine.setTexture","com/gamestudiohx/babylonhx/Engine.hx",1132,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(channel,"channel")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(1133)
		if (((channel < (int)0))){
			HX_STACK_LINE(1134)
			return null();
		}
		HX_STACK_LINE(1138)
		if (((  ((!(((texture == null()))))) ? bool(!(texture->isReady())) : bool(true) ))){
			HX_STACK_LINE(1139)
			if (((this->_activeTexturesCache->__get(channel).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::Texture >() != null()))){
				HX_STACK_LINE(1140)
				{
					HX_STACK_LINE(1140)
					int texture1 = this->getGLTexture(channel);		HX_STACK_VAR(texture1,"texture1");
					HX_STACK_LINE(1140)
					::openfl::gl::GL_obj::lime_gl_active_texture(texture1);
				}
				HX_STACK_LINE(1141)
				::openfl::gl::GL_obj::lime_gl_bind_texture((int)3553,null());
				HX_STACK_LINE(1142)
				::openfl::gl::GL_obj::lime_gl_bind_texture((int)34067,null());
				HX_STACK_LINE(1143)
				this->_activeTexturesCache[channel] = null();
			}
			HX_STACK_LINE(1145)
			return null();
		}
		HX_STACK_LINE(1159)
		if (((this->_activeTexturesCache->__get(channel).StaticCast< ::com::gamestudiohx::babylonhx::materials::textures::Texture >() == texture))){
			HX_STACK_LINE(1160)
			return null();
		}
		HX_STACK_LINE(1162)
		this->_activeTexturesCache[channel] = texture;
		HX_STACK_LINE(1164)
		::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture internalTexture = texture->getInternalTexture();		HX_STACK_VAR(internalTexture,"internalTexture");
		HX_STACK_LINE(1165)
		{
			HX_STACK_LINE(1165)
			int texture1 = this->getGLTexture(channel);		HX_STACK_VAR(texture1,"texture1");
			HX_STACK_LINE(1165)
			::openfl::gl::GL_obj::lime_gl_active_texture(texture1);
		}
		HX_STACK_LINE(1167)
		if ((internalTexture->isCube)){
			HX_STACK_LINE(1168)
			{
				HX_STACK_LINE(1168)
				::openfl::gl::GLTexture texture1 = internalTexture->data;		HX_STACK_VAR(texture1,"texture1");
				HX_STACK_LINE(1168)
				::openfl::gl::GL_obj::lime_gl_bind_texture((int)34067,(  (((texture1 == null()))) ? Dynamic(null()) : Dynamic(texture1->id) ));
			}
			HX_STACK_LINE(1177)
			::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10242,(int)33071);
			HX_STACK_LINE(1178)
			::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10243,(int)33071);
			HX_STACK_LINE(1180)
			this->_setAnisotropicLevel((int)34067,texture);
		}
		else{
			HX_STACK_LINE(1182)
			{
				HX_STACK_LINE(1182)
				::openfl::gl::GLTexture texture1 = internalTexture->data;		HX_STACK_VAR(texture1,"texture1");
				HX_STACK_LINE(1182)
				::openfl::gl::GL_obj::lime_gl_bind_texture((int)3553,(  (((texture1 == null()))) ? Dynamic(null()) : Dynamic(texture1->id) ));
			}
			HX_STACK_LINE(1184)
			if (((internalTexture->_cachedWrapU != texture->wrapU))){
				HX_STACK_LINE(1185)
				internalTexture->_cachedWrapU = texture->wrapU;
				HX_STACK_LINE(1186)
				{
					HX_STACK_LINE(1186)
					int _g = texture->wrapU;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1186)
					int _switch_2 = (_g);
					if (  ( _switch_2==::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::WRAP_ADDRESSMODE)){
						HX_STACK_LINE(1188)
						::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)10497);
					}
					else if (  ( _switch_2==::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::CLAMP_ADDRESSMODE)){
						HX_STACK_LINE(1191)
						::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
					}
					else if (  ( _switch_2==::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::MIRROR_ADDRESSMODE)){
						HX_STACK_LINE(1194)
						::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33648);
					}
				}
			}
			HX_STACK_LINE(1199)
			if (((internalTexture->_cachedWrapV != texture->wrapV))){
				HX_STACK_LINE(1200)
				internalTexture->_cachedWrapV = texture->wrapV;
				HX_STACK_LINE(1201)
				{
					HX_STACK_LINE(1201)
					int _g = texture->wrapV;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1201)
					int _switch_3 = (_g);
					if (  ( _switch_3==::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::WRAP_ADDRESSMODE)){
						HX_STACK_LINE(1203)
						::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)10497);
					}
					else if (  ( _switch_3==::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::CLAMP_ADDRESSMODE)){
						HX_STACK_LINE(1206)
						::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
					}
					else if (  ( _switch_3==::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::MIRROR_ADDRESSMODE)){
						HX_STACK_LINE(1209)
						::openfl::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33648);
					}
				}
			}
			HX_STACK_LINE(1214)
			this->_setAnisotropicLevel((int)3553,texture);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,setTexture,(void))

Void Engine_obj::_setAnisotropicLevel( int key,::com::gamestudiohx::babylonhx::materials::textures::Texture texture){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","_setAnisotropicLevel",0x6a48c470,"com.gamestudiohx.babylonhx.Engine._setAnisotropicLevel","com/gamestudiohx/babylonhx/Engine.hx",1218,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(1219)
		Dynamic anisotropicFilterExtension = this->_caps->__Field(HX_CSTRING("textureAnisotropicFilterExtension"),true);		HX_STACK_VAR(anisotropicFilterExtension,"anisotropicFilterExtension");
		HX_STACK_LINE(1220)
		if (((bool((anisotropicFilterExtension != null())) && bool((texture->_cachedAnisotropicFilteringLevel != texture->anisotropicFilteringLevel))))){
			HX_STACK_LINE(1221)
			{
				HX_STACK_LINE(1221)
				int pname = anisotropicFilterExtension->__Field(HX_CSTRING("TEXTURE_MAX_ANISOTROPY_EXT"),true);		HX_STACK_VAR(pname,"pname");
				HX_STACK_LINE(1221)
				Float param = ::Math_obj::min(texture->anisotropicFilteringLevel,this->_caps->__Field(HX_CSTRING("maxAnisotropy"),true));		HX_STACK_VAR(param,"param");
				HX_STACK_LINE(1221)
				::openfl::gl::GL_obj::lime_gl_tex_parameterf(key,pname,param);
			}
			HX_STACK_LINE(1222)
			texture->_cachedAnisotropicFilteringLevel = texture->anisotropicFilteringLevel;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,_setAnisotropicLevel,(void))

Void Engine_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Engine","dispose",0xe22086c5,"com.gamestudiohx.babylonhx.Engine.dispose","com/gamestudiohx/babylonhx/Engine.hx",1227,0x0790c729)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1229)
		while((true)){
			HX_STACK_LINE(1229)
			if ((!(((this->scenes->length > (int)0))))){
				HX_STACK_LINE(1229)
				break;
			}
			HX_STACK_LINE(1230)
			this->scenes->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >()->dispose();
			HX_STACK_LINE(1231)
			this->scenes->shift().StaticCast< ::com::gamestudiohx::babylonhx::Scene >();
		}
		HX_STACK_LINE(1235)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_compiledEffects->keys());  __it->hasNext(); ){
			::String name = __it->next();
			{
				HX_STACK_LINE(1236)
				::openfl::gl::GLProgram program = this->_compiledEffects->get(name)->__Field(HX_CSTRING("_program"),true);		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(1236)
				::openfl::gl::GL_obj::lime_gl_delete_program(program->id);
				HX_STACK_LINE(1236)
				program->invalidate();
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,dispose,(void))

::com::gamestudiohx::babylonhx::tools::math::Plane Engine_obj::clipPlane;

::String Engine_obj::ShadersRepository;

int Engine_obj::ALPHA_DISABLE;

int Engine_obj::ALPHA_ADD;

int Engine_obj::ALPHA_COMBINE;

int Engine_obj::DELAYLOADSTATE_NONE;

int Engine_obj::DELAYLOADSTATE_LOADED;

int Engine_obj::DELAYLOADSTATE_LOADING;

int Engine_obj::DELAYLOADSTATE_NOTLOADED;

Float Engine_obj::epsilon;

Float Engine_obj::collisionsEpsilon;


Engine_obj::Engine_obj()
{
}

void Engine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Engine);
	HX_MARK_MEMBER_NAME(forceWireframe,"forceWireframe");
	HX_MARK_MEMBER_NAME(cullBackFaces,"cullBackFaces");
	HX_MARK_MEMBER_NAME(scenes,"scenes");
	HX_MARK_MEMBER_NAME(_hardwareScalingLevel,"_hardwareScalingLevel");
	HX_MARK_MEMBER_NAME(_aspectRatio,"_aspectRatio");
	HX_MARK_MEMBER_NAME(_cachedViewport,"_cachedViewport");
	HX_MARK_MEMBER_NAME(_caps,"_caps");
	HX_MARK_MEMBER_NAME(_alphaTest,"_alphaTest");
	HX_MARK_MEMBER_NAME(_runningLoop,"_runningLoop");
	HX_MARK_MEMBER_NAME(_loadedTexturesCache,"_loadedTexturesCache");
	HX_MARK_MEMBER_NAME(_activeTexturesCache,"_activeTexturesCache");
	HX_MARK_MEMBER_NAME(_currentEffect,"_currentEffect");
	HX_MARK_MEMBER_NAME(_currentState,"_currentState");
	HX_MARK_MEMBER_NAME(_compiledEffects,"_compiledEffects");
	HX_MARK_MEMBER_NAME(_cachedEffectForVertexBuffers,"_cachedEffectForVertexBuffers");
	HX_MARK_MEMBER_NAME(_cachedVertexBuffers,"_cachedVertexBuffers");
	HX_MARK_MEMBER_NAME(_cachedIndexBuffer,"_cachedIndexBuffer");
	HX_MARK_MEMBER_NAME(_renderingCanvas,"_renderingCanvas");
	HX_MARK_MEMBER_NAME(isFullscreen,"isFullscreen");
	HX_MARK_MEMBER_NAME(isPointerLock,"isPointerLock");
	HX_MARK_MEMBER_NAME(_renderFunction,"_renderFunction");
	HX_MARK_MEMBER_NAME(_workingCanvas,"_workingCanvas");
	HX_MARK_MEMBER_NAME(_workingContext,"_workingContext");
	HX_MARK_END_CLASS();
}

void Engine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(forceWireframe,"forceWireframe");
	HX_VISIT_MEMBER_NAME(cullBackFaces,"cullBackFaces");
	HX_VISIT_MEMBER_NAME(scenes,"scenes");
	HX_VISIT_MEMBER_NAME(_hardwareScalingLevel,"_hardwareScalingLevel");
	HX_VISIT_MEMBER_NAME(_aspectRatio,"_aspectRatio");
	HX_VISIT_MEMBER_NAME(_cachedViewport,"_cachedViewport");
	HX_VISIT_MEMBER_NAME(_caps,"_caps");
	HX_VISIT_MEMBER_NAME(_alphaTest,"_alphaTest");
	HX_VISIT_MEMBER_NAME(_runningLoop,"_runningLoop");
	HX_VISIT_MEMBER_NAME(_loadedTexturesCache,"_loadedTexturesCache");
	HX_VISIT_MEMBER_NAME(_activeTexturesCache,"_activeTexturesCache");
	HX_VISIT_MEMBER_NAME(_currentEffect,"_currentEffect");
	HX_VISIT_MEMBER_NAME(_currentState,"_currentState");
	HX_VISIT_MEMBER_NAME(_compiledEffects,"_compiledEffects");
	HX_VISIT_MEMBER_NAME(_cachedEffectForVertexBuffers,"_cachedEffectForVertexBuffers");
	HX_VISIT_MEMBER_NAME(_cachedVertexBuffers,"_cachedVertexBuffers");
	HX_VISIT_MEMBER_NAME(_cachedIndexBuffer,"_cachedIndexBuffer");
	HX_VISIT_MEMBER_NAME(_renderingCanvas,"_renderingCanvas");
	HX_VISIT_MEMBER_NAME(isFullscreen,"isFullscreen");
	HX_VISIT_MEMBER_NAME(isPointerLock,"isPointerLock");
	HX_VISIT_MEMBER_NAME(_renderFunction,"_renderFunction");
	HX_VISIT_MEMBER_NAME(_workingCanvas,"_workingCanvas");
	HX_VISIT_MEMBER_NAME(_workingContext,"_workingContext");
}

Dynamic Engine_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_caps") ) { return _caps; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scenes") ) { return scenes; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"epsilon") ) { return epsilon; }
		if (HX_FIELD_EQ(inName,"getCaps") ) { return getCaps_dyn(); }
		if (HX_FIELD_EQ(inName,"setBool") ) { return setBool_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endFrame") ) { return endFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"setArray") ) { return setArray_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat") ) { return setFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"setState") ) { return setState_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clipPlane") ) { return clipPlane; }
		if (HX_FIELD_EQ(inName,"ALPHA_ADD") ) { return ALPHA_ADD; }
		if (HX_FIELD_EQ(inName,"setMatrix") ) { return setMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat2") ) { return setFloat2_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat3") ) { return setFloat3_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat4") ) { return setFloat4_dyn(); }
		if (HX_FIELD_EQ(inName,"setColor3") ) { return setColor3_dyn(); }
		if (HX_FIELD_EQ(inName,"setColor4") ) { return setColor4_dyn(); }
		if (HX_FIELD_EQ(inName,"getScaled") ) { return getScaled_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_alphaTest") ) { return _alphaTest; }
		if (HX_FIELD_EQ(inName,"beginFrame") ) { return beginFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"wipeCaches") ) { return wipeCaches_dyn(); }
		if (HX_FIELD_EQ(inName,"setTexture") ) { return setTexture_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_renderLoop") ) { return _renderLoop_dyn(); }
		if (HX_FIELD_EQ(inName,"setViewport") ) { return setViewport_dyn(); }
		if (HX_FIELD_EQ(inName,"bindBuffers") ) { return bindBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniforms") ) { return getUniforms_dyn(); }
		if (HX_FIELD_EQ(inName,"setMatrices") ) { return setMatrices_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_aspectRatio") ) { return _aspectRatio; }
		if (HX_FIELD_EQ(inName,"_runningLoop") ) { return _runningLoop; }
		if (HX_FIELD_EQ(inName,"isFullscreen") ) { return isFullscreen; }
		if (HX_FIELD_EQ(inName,"createEffect") ) { return createEffect_dyn(); }
		if (HX_FIELD_EQ(inName,"enableEffect") ) { return enableEffect_dyn(); }
		if (HX_FIELD_EQ(inName,"setAlphaMode") ) { return setAlphaMode_dyn(); }
		if (HX_FIELD_EQ(inName,"bindSamplers") ) { return bindSamplers_dyn(); }
		if (HX_FIELD_EQ(inName,"_bindTexture") ) { return _bindTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"getGLTexture") ) { return getGLTexture_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ALPHA_DISABLE") ) { return ALPHA_DISABLE; }
		if (HX_FIELD_EQ(inName,"ALPHA_COMBINE") ) { return ALPHA_COMBINE; }
		if (HX_FIELD_EQ(inName,"cullBackFaces") ) { return cullBackFaces; }
		if (HX_FIELD_EQ(inName,"_currentState") ) { return _currentState; }
		if (HX_FIELD_EQ(inName,"isPointerLock") ) { return isPointerLock; }
		if (HX_FIELD_EQ(inName,"runRenderLoop") ) { return runRenderLoop_dyn(); }
		if (HX_FIELD_EQ(inName,"compileShader") ) { return compileShader_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttributes") ) { return getAttributes_dyn(); }
		if (HX_FIELD_EQ(inName,"setDepthWrite") ) { return setDepthWrite_dyn(); }
		if (HX_FIELD_EQ(inName,"setColorWrite") ) { return setColorWrite_dyn(); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forceWireframe") ) { return forceWireframe; }
		if (HX_FIELD_EQ(inName,"_currentEffect") ) { return _currentEffect; }
		if (HX_FIELD_EQ(inName,"_workingCanvas") ) { return _workingCanvas; }
		if (HX_FIELD_EQ(inName,"getAspectRatio") ) { return getAspectRatio_dyn(); }
		if (HX_FIELD_EQ(inName,"getRenderWidth") ) { return getRenderWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"stopRenderLoop") ) { return stopRenderLoop_dyn(); }
		if (HX_FIELD_EQ(inName,"_releaseBuffer") ) { return _releaseBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setDepthBuffer") ) { return setDepthBuffer_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_cachedViewport") ) { return _cachedViewport; }
		if (HX_FIELD_EQ(inName,"_renderFunction") ) { return _renderFunction; }
		if (HX_FIELD_EQ(inName,"_workingContext") ) { return _workingContext; }
		if (HX_FIELD_EQ(inName,"getRenderHeight") ) { return getRenderHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"bindFramebuffer") ) { return bindFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setAlphaTesting") ) { return setAlphaTesting_dyn(); }
		if (HX_FIELD_EQ(inName,"getAlphaTesting") ) { return getAlphaTesting_dyn(); }
		if (HX_FIELD_EQ(inName,"_releaseTexture") ) { return _releaseTexture_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_compiledEffects") ) { return _compiledEffects; }
		if (HX_FIELD_EQ(inName,"_renderingCanvas") ) { return _renderingCanvas; }
		if (HX_FIELD_EQ(inName,"switchFullscreen") ) { return switchFullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"flushFramebuffer") ) { return flushFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"bindMultiBuffers") ) { return bindMultiBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"getExponantOfTwo") ) { return getExponantOfTwo_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ShadersRepository") ) { return ShadersRepository; }
		if (HX_FIELD_EQ(inName,"collisionsEpsilon") ) { return collisionsEpsilon; }
		if (HX_FIELD_EQ(inName,"setDirectViewport") ) { return setDirectViewport_dyn(); }
		if (HX_FIELD_EQ(inName,"unBindFramebuffer") ) { return unBindFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createIndexBuffer") ) { return createIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createCubeTexture") ) { return createCubeTexture_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_cachedIndexBuffer") ) { return _cachedIndexBuffer; }
		if (HX_FIELD_EQ(inName,"getRenderingCanvas") ) { return getRenderingCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"createVertexBuffer") ) { return createVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"updateVideoTexture") ) { return updateVideoTexture_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DELAYLOADSTATE_NONE") ) { return DELAYLOADSTATE_NONE; }
		if (HX_FIELD_EQ(inName,"createShaderProgram") ) { return createShaderProgram_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_loadedTexturesCache") ) { return _loadedTexturesCache; }
		if (HX_FIELD_EQ(inName,"_activeTexturesCache") ) { return _activeTexturesCache; }
		if (HX_FIELD_EQ(inName,"_cachedVertexBuffers") ) { return _cachedVertexBuffers; }
		if (HX_FIELD_EQ(inName,"createDynamicTexture") ) { return createDynamicTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"updateDynamicTexture") ) { return updateDynamicTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"_setAnisotropicLevel") ) { return _setAnisotropicLevel_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"DELAYLOADSTATE_LOADED") ) { return DELAYLOADSTATE_LOADED; }
		if (HX_FIELD_EQ(inName,"_hardwareScalingLevel") ) { return _hardwareScalingLevel; }
		if (HX_FIELD_EQ(inName,"deleteInstancesBuffer") ) { return deleteInstancesBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"unBindInstancesBuffer") ) { return unBindInstancesBuffer_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"DELAYLOADSTATE_LOADING") ) { return DELAYLOADSTATE_LOADING; }
		if (HX_FIELD_EQ(inName,"getLoadedTexturesCache") ) { return getLoadedTexturesCache_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setHardwareScalingLevel") ) { return setHardwareScalingLevel_dyn(); }
		if (HX_FIELD_EQ(inName,"getHardwareScalingLevel") ) { return getHardwareScalingLevel_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"DELAYLOADSTATE_NOTLOADED") ) { return DELAYLOADSTATE_NOTLOADED; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"restoreDefaultFramebuffer") ) { return restoreDefaultFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createDynamicVertexBuffer") ) { return createDynamicVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"updateDynamicVertexBuffer") ) { return updateDynamicVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createRenderTargetTexture") ) { return createRenderTargetTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextureFromPostProcess") ) { return setTextureFromPostProcess_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"updateAndBindInstancesBuffer") ) { return updateAndBindInstancesBuffer_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_cachedEffectForVertexBuffers") ) { return _cachedEffectForVertexBuffers; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Engine_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_caps") ) { _caps=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scenes") ) { scenes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"epsilon") ) { epsilon=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clipPlane") ) { clipPlane=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Plane >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALPHA_ADD") ) { ALPHA_ADD=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_alphaTest") ) { _alphaTest=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_aspectRatio") ) { _aspectRatio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_runningLoop") ) { _runningLoop=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isFullscreen") ) { isFullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ALPHA_DISABLE") ) { ALPHA_DISABLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALPHA_COMBINE") ) { ALPHA_COMBINE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cullBackFaces") ) { cullBackFaces=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentState") ) { _currentState=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isPointerLock") ) { isPointerLock=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forceWireframe") ) { forceWireframe=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentEffect") ) { _currentEffect=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::Effect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_workingCanvas") ) { _workingCanvas=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_cachedViewport") ) { _cachedViewport=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Viewport >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderFunction") ) { _renderFunction=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_workingContext") ) { _workingContext=inValue.Cast< ::openfl::display::OpenGLView >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_compiledEffects") ) { _compiledEffects=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderingCanvas") ) { _renderingCanvas=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ShadersRepository") ) { ShadersRepository=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collisionsEpsilon") ) { collisionsEpsilon=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_cachedIndexBuffer") ) { _cachedIndexBuffer=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DELAYLOADSTATE_NONE") ) { DELAYLOADSTATE_NONE=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_loadedTexturesCache") ) { _loadedTexturesCache=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activeTexturesCache") ) { _activeTexturesCache=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedVertexBuffers") ) { _cachedVertexBuffers=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"DELAYLOADSTATE_LOADED") ) { DELAYLOADSTATE_LOADED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hardwareScalingLevel") ) { _hardwareScalingLevel=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"DELAYLOADSTATE_LOADING") ) { DELAYLOADSTATE_LOADING=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"DELAYLOADSTATE_NOTLOADED") ) { DELAYLOADSTATE_NOTLOADED=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_cachedEffectForVertexBuffers") ) { _cachedEffectForVertexBuffers=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::Effect >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Engine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("forceWireframe"));
	outFields->push(HX_CSTRING("cullBackFaces"));
	outFields->push(HX_CSTRING("scenes"));
	outFields->push(HX_CSTRING("_hardwareScalingLevel"));
	outFields->push(HX_CSTRING("_aspectRatio"));
	outFields->push(HX_CSTRING("_cachedViewport"));
	outFields->push(HX_CSTRING("_caps"));
	outFields->push(HX_CSTRING("_alphaTest"));
	outFields->push(HX_CSTRING("_runningLoop"));
	outFields->push(HX_CSTRING("_loadedTexturesCache"));
	outFields->push(HX_CSTRING("_activeTexturesCache"));
	outFields->push(HX_CSTRING("_currentEffect"));
	outFields->push(HX_CSTRING("_currentState"));
	outFields->push(HX_CSTRING("_compiledEffects"));
	outFields->push(HX_CSTRING("_cachedEffectForVertexBuffers"));
	outFields->push(HX_CSTRING("_cachedVertexBuffers"));
	outFields->push(HX_CSTRING("_cachedIndexBuffer"));
	outFields->push(HX_CSTRING("_renderingCanvas"));
	outFields->push(HX_CSTRING("isFullscreen"));
	outFields->push(HX_CSTRING("isPointerLock"));
	outFields->push(HX_CSTRING("_workingCanvas"));
	outFields->push(HX_CSTRING("_workingContext"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("clipPlane"),
	HX_CSTRING("ShadersRepository"),
	HX_CSTRING("ALPHA_DISABLE"),
	HX_CSTRING("ALPHA_ADD"),
	HX_CSTRING("ALPHA_COMBINE"),
	HX_CSTRING("DELAYLOADSTATE_NONE"),
	HX_CSTRING("DELAYLOADSTATE_LOADED"),
	HX_CSTRING("DELAYLOADSTATE_LOADING"),
	HX_CSTRING("DELAYLOADSTATE_NOTLOADED"),
	HX_CSTRING("epsilon"),
	HX_CSTRING("collisionsEpsilon"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Engine_obj,forceWireframe),HX_CSTRING("forceWireframe")},
	{hx::fsBool,(int)offsetof(Engine_obj,cullBackFaces),HX_CSTRING("cullBackFaces")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Engine_obj,scenes),HX_CSTRING("scenes")},
	{hx::fsInt,(int)offsetof(Engine_obj,_hardwareScalingLevel),HX_CSTRING("_hardwareScalingLevel")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_aspectRatio),HX_CSTRING("_aspectRatio")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Viewport*/ ,(int)offsetof(Engine_obj,_cachedViewport),HX_CSTRING("_cachedViewport")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Engine_obj,_caps),HX_CSTRING("_caps")},
	{hx::fsBool,(int)offsetof(Engine_obj,_alphaTest),HX_CSTRING("_alphaTest")},
	{hx::fsBool,(int)offsetof(Engine_obj,_runningLoop),HX_CSTRING("_runningLoop")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Engine_obj,_loadedTexturesCache),HX_CSTRING("_loadedTexturesCache")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Engine_obj,_activeTexturesCache),HX_CSTRING("_activeTexturesCache")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::Effect*/ ,(int)offsetof(Engine_obj,_currentEffect),HX_CSTRING("_currentEffect")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Engine_obj,_currentState),HX_CSTRING("_currentState")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Engine_obj,_compiledEffects),HX_CSTRING("_compiledEffects")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::Effect*/ ,(int)offsetof(Engine_obj,_cachedEffectForVertexBuffers),HX_CSTRING("_cachedEffectForVertexBuffers")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Engine_obj,_cachedVertexBuffers),HX_CSTRING("_cachedVertexBuffers")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer*/ ,(int)offsetof(Engine_obj,_cachedIndexBuffer),HX_CSTRING("_cachedIndexBuffer")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Engine_obj,_renderingCanvas),HX_CSTRING("_renderingCanvas")},
	{hx::fsBool,(int)offsetof(Engine_obj,isFullscreen),HX_CSTRING("isFullscreen")},
	{hx::fsBool,(int)offsetof(Engine_obj,isPointerLock),HX_CSTRING("isPointerLock")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Engine_obj,_renderFunction),HX_CSTRING("_renderFunction")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Engine_obj,_workingCanvas),HX_CSTRING("_workingCanvas")},
	{hx::fsObject /*::openfl::display::OpenGLView*/ ,(int)offsetof(Engine_obj,_workingContext),HX_CSTRING("_workingContext")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("forceWireframe"),
	HX_CSTRING("cullBackFaces"),
	HX_CSTRING("scenes"),
	HX_CSTRING("_hardwareScalingLevel"),
	HX_CSTRING("_aspectRatio"),
	HX_CSTRING("_cachedViewport"),
	HX_CSTRING("_caps"),
	HX_CSTRING("_alphaTest"),
	HX_CSTRING("_runningLoop"),
	HX_CSTRING("_loadedTexturesCache"),
	HX_CSTRING("_activeTexturesCache"),
	HX_CSTRING("_currentEffect"),
	HX_CSTRING("_currentState"),
	HX_CSTRING("_compiledEffects"),
	HX_CSTRING("_cachedEffectForVertexBuffers"),
	HX_CSTRING("_cachedVertexBuffers"),
	HX_CSTRING("_cachedIndexBuffer"),
	HX_CSTRING("_renderingCanvas"),
	HX_CSTRING("isFullscreen"),
	HX_CSTRING("isPointerLock"),
	HX_CSTRING("_renderFunction"),
	HX_CSTRING("_workingCanvas"),
	HX_CSTRING("_workingContext"),
	HX_CSTRING("getAspectRatio"),
	HX_CSTRING("getRenderWidth"),
	HX_CSTRING("getRenderHeight"),
	HX_CSTRING("getRenderingCanvas"),
	HX_CSTRING("setHardwareScalingLevel"),
	HX_CSTRING("getHardwareScalingLevel"),
	HX_CSTRING("getLoadedTexturesCache"),
	HX_CSTRING("getCaps"),
	HX_CSTRING("stopRenderLoop"),
	HX_CSTRING("_renderLoop"),
	HX_CSTRING("runRenderLoop"),
	HX_CSTRING("switchFullscreen"),
	HX_CSTRING("clear"),
	HX_CSTRING("setViewport"),
	HX_CSTRING("setDirectViewport"),
	HX_CSTRING("beginFrame"),
	HX_CSTRING("endFrame"),
	HX_CSTRING("resize"),
	HX_CSTRING("bindFramebuffer"),
	HX_CSTRING("unBindFramebuffer"),
	HX_CSTRING("flushFramebuffer"),
	HX_CSTRING("restoreDefaultFramebuffer"),
	HX_CSTRING("createVertexBuffer"),
	HX_CSTRING("createDynamicVertexBuffer"),
	HX_CSTRING("updateDynamicVertexBuffer"),
	HX_CSTRING("createIndexBuffer"),
	HX_CSTRING("bindBuffers"),
	HX_CSTRING("bindMultiBuffers"),
	HX_CSTRING("_releaseBuffer"),
	HX_CSTRING("deleteInstancesBuffer"),
	HX_CSTRING("updateAndBindInstancesBuffer"),
	HX_CSTRING("unBindInstancesBuffer"),
	HX_CSTRING("draw"),
	HX_CSTRING("createEffect"),
	HX_CSTRING("compileShader"),
	HX_CSTRING("createShaderProgram"),
	HX_CSTRING("getUniforms"),
	HX_CSTRING("getAttributes"),
	HX_CSTRING("enableEffect"),
	HX_CSTRING("setArray"),
	HX_CSTRING("setMatrices"),
	HX_CSTRING("setMatrix"),
	HX_CSTRING("setFloat"),
	HX_CSTRING("setFloat2"),
	HX_CSTRING("setFloat3"),
	HX_CSTRING("setBool"),
	HX_CSTRING("setFloat4"),
	HX_CSTRING("setColor3"),
	HX_CSTRING("setColor4"),
	HX_CSTRING("setState"),
	HX_CSTRING("setDepthBuffer"),
	HX_CSTRING("setDepthWrite"),
	HX_CSTRING("setColorWrite"),
	HX_CSTRING("setAlphaMode"),
	HX_CSTRING("setAlphaTesting"),
	HX_CSTRING("getAlphaTesting"),
	HX_CSTRING("wipeCaches"),
	HX_CSTRING("getExponantOfTwo"),
	HX_CSTRING("getScaled"),
	HX_CSTRING("createTexture"),
	HX_CSTRING("createDynamicTexture"),
	HX_CSTRING("updateDynamicTexture"),
	HX_CSTRING("updateVideoTexture"),
	HX_CSTRING("createRenderTargetTexture"),
	HX_CSTRING("createCubeTexture"),
	HX_CSTRING("_releaseTexture"),
	HX_CSTRING("bindSamplers"),
	HX_CSTRING("_bindTexture"),
	HX_CSTRING("setTextureFromPostProcess"),
	HX_CSTRING("getGLTexture"),
	HX_CSTRING("setTexture"),
	HX_CSTRING("_setAnisotropicLevel"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Engine_obj::clipPlane,"clipPlane");
	HX_MARK_MEMBER_NAME(Engine_obj::ShadersRepository,"ShadersRepository");
	HX_MARK_MEMBER_NAME(Engine_obj::ALPHA_DISABLE,"ALPHA_DISABLE");
	HX_MARK_MEMBER_NAME(Engine_obj::ALPHA_ADD,"ALPHA_ADD");
	HX_MARK_MEMBER_NAME(Engine_obj::ALPHA_COMBINE,"ALPHA_COMBINE");
	HX_MARK_MEMBER_NAME(Engine_obj::DELAYLOADSTATE_NONE,"DELAYLOADSTATE_NONE");
	HX_MARK_MEMBER_NAME(Engine_obj::DELAYLOADSTATE_LOADED,"DELAYLOADSTATE_LOADED");
	HX_MARK_MEMBER_NAME(Engine_obj::DELAYLOADSTATE_LOADING,"DELAYLOADSTATE_LOADING");
	HX_MARK_MEMBER_NAME(Engine_obj::DELAYLOADSTATE_NOTLOADED,"DELAYLOADSTATE_NOTLOADED");
	HX_MARK_MEMBER_NAME(Engine_obj::epsilon,"epsilon");
	HX_MARK_MEMBER_NAME(Engine_obj::collisionsEpsilon,"collisionsEpsilon");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Engine_obj::clipPlane,"clipPlane");
	HX_VISIT_MEMBER_NAME(Engine_obj::ShadersRepository,"ShadersRepository");
	HX_VISIT_MEMBER_NAME(Engine_obj::ALPHA_DISABLE,"ALPHA_DISABLE");
	HX_VISIT_MEMBER_NAME(Engine_obj::ALPHA_ADD,"ALPHA_ADD");
	HX_VISIT_MEMBER_NAME(Engine_obj::ALPHA_COMBINE,"ALPHA_COMBINE");
	HX_VISIT_MEMBER_NAME(Engine_obj::DELAYLOADSTATE_NONE,"DELAYLOADSTATE_NONE");
	HX_VISIT_MEMBER_NAME(Engine_obj::DELAYLOADSTATE_LOADED,"DELAYLOADSTATE_LOADED");
	HX_VISIT_MEMBER_NAME(Engine_obj::DELAYLOADSTATE_LOADING,"DELAYLOADSTATE_LOADING");
	HX_VISIT_MEMBER_NAME(Engine_obj::DELAYLOADSTATE_NOTLOADED,"DELAYLOADSTATE_NOTLOADED");
	HX_VISIT_MEMBER_NAME(Engine_obj::epsilon,"epsilon");
	HX_VISIT_MEMBER_NAME(Engine_obj::collisionsEpsilon,"collisionsEpsilon");
};

#endif

Class Engine_obj::__mClass;

void Engine_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.Engine"), hx::TCanCast< Engine_obj> ,sStaticFields,sMemberFields,
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

void Engine_obj::__boot()
{
	clipPlane= null();
	ShadersRepository= HX_CSTRING("assets/shaders/");
	ALPHA_DISABLE= (int)0;
	ALPHA_ADD= (int)1;
	ALPHA_COMBINE= (int)2;
	DELAYLOADSTATE_NONE= (int)0;
	DELAYLOADSTATE_LOADED= (int)1;
	DELAYLOADSTATE_LOADING= (int)2;
	DELAYLOADSTATE_NOTLOADED= (int)4;
	epsilon= 0.001;
	collisionsEpsilon= 0.001;
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
