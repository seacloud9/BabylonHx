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
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Engine
#include <com/gamestudiohx/babylonhx/Engine.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_postprocess_PostProcess
#include <com/gamestudiohx/babylonhx/postprocess/PostProcess.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_Tools
#include <com/gamestudiohx/babylonhx/tools/Tools.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color3
#include <com/gamestudiohx/babylonhx/tools/math/Color3.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector2
#include <com/gamestudiohx/babylonhx/tools/math/Vector2.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
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
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_gl_GL
#include <openfl/gl/GL.h>
#endif
#ifndef INCLUDED_openfl_gl_GLObject
#include <openfl/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl_gl_GLProgram
#include <openfl/gl/GLProgram.h>
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
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{

Void Effect_obj::__construct(Dynamic baseName,Array< ::String > attributesNames,Array< ::String > uniformsNames,Array< ::String > samplers,::com::gamestudiohx::babylonhx::Engine engine,::String defines,Array< ::String > optionalDefines)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","new",0x34600397,"com.gamestudiohx.babylonhx.materials.Effect.new","com/gamestudiohx/babylonhx/materials/Effect.hx",66,0x03b528d7)
HX_STACK_THIS(this)
HX_STACK_ARG(baseName,"baseName")
HX_STACK_ARG(attributesNames,"attributesNames")
HX_STACK_ARG(uniformsNames,"uniformsNames")
HX_STACK_ARG(samplers,"samplers")
HX_STACK_ARG(engine,"engine")
HX_STACK_ARG(defines,"defines")
HX_STACK_ARG(optionalDefines,"optionalDefines")
{
	HX_STACK_LINE(67)
	this->_engine = engine;
	HX_STACK_LINE(68)
	this->name = baseName;
	HX_STACK_LINE(69)
	this->defines = defines;
	HX_STACK_LINE(70)
	Array< ::String > _g = uniformsNames->concat(samplers);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(70)
	this->_uniformsNames = _g;
	HX_STACK_LINE(71)
	this->_samplers = samplers;
	HX_STACK_LINE(72)
	this->_isReady = false;
	HX_STACK_LINE(73)
	this->_compilationError = HX_CSTRING("");
	HX_STACK_LINE(74)
	this->_attributesNames = attributesNames;
	HX_STACK_LINE(76)
	Dynamic _g1 = ::Reflect_obj::field(baseName,HX_CSTRING("vertex"));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(76)
	::String vertex;		HX_STACK_VAR(vertex,"vertex");
	HX_STACK_LINE(76)
	if (((_g1 != null()))){
		HX_STACK_LINE(76)
		vertex = baseName->__Field(HX_CSTRING("vertex"),true);
	}
	else{
		HX_STACK_LINE(76)
		vertex = baseName;
	}
	HX_STACK_LINE(77)
	Dynamic _g2 = ::Reflect_obj::field(baseName,HX_CSTRING("fragment"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(77)
	::String fragment;		HX_STACK_VAR(fragment,"fragment");
	HX_STACK_LINE(77)
	if (((_g2 != null()))){
		HX_STACK_LINE(77)
		fragment = baseName->__Field(HX_CSTRING("fragment"),true);
	}
	else{
		HX_STACK_LINE(77)
		fragment = baseName;
	}
	HX_STACK_LINE(79)
	::String vertexShaderUrl = HX_CSTRING("");		HX_STACK_VAR(vertexShaderUrl,"vertexShaderUrl");
	HX_STACK_LINE(80)
	::String _g3 = vertex.charAt((int)0);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(80)
	if (((_g3 == HX_CSTRING(".")))){
		HX_STACK_LINE(81)
		vertexShaderUrl = vertex;
	}
	else{
		HX_STACK_LINE(83)
		vertexShaderUrl = (::com::gamestudiohx::babylonhx::Engine_obj::ShadersRepository + vertex);
	}
	HX_STACK_LINE(85)
	::String fragmentShaderUrl = HX_CSTRING("");		HX_STACK_VAR(fragmentShaderUrl,"fragmentShaderUrl");
	HX_STACK_LINE(86)
	::String _g4 = fragment.charAt((int)0);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(86)
	if (((_g4 == HX_CSTRING(".")))){
		HX_STACK_LINE(87)
		fragmentShaderUrl = fragment;
	}
	else{
		HX_STACK_LINE(89)
		fragmentShaderUrl = (::com::gamestudiohx::babylonhx::Engine_obj::ShadersRepository + fragment);
	}
	HX_STACK_LINE(92)
	::String _vertexCode = HX_CSTRING("");		HX_STACK_VAR(_vertexCode,"_vertexCode");
	HX_STACK_LINE(93)
	if ((::com::gamestudiohx::babylonhx::materials::Effect_obj::ShadersStore->exists((vertex + HX_CSTRING("VertexShader"))))){
		HX_STACK_LINE(94)
		::String _g5 = ::com::gamestudiohx::babylonhx::materials::Effect_obj::ShadersStore->get((vertex + HX_CSTRING("VertexShader")));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(94)
		_vertexCode = _g5;
	}
	else{
		HX_STACK_LINE(96)
		::String _g6 = ::openfl::Assets_obj::getText((vertexShaderUrl + HX_CSTRING(".vertex.txt")));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(96)
		::String _g7 = ::StringTools_obj::trim(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(96)
		_vertexCode = _g7;
	}
	HX_STACK_LINE(99)
	::String _fragmentCode = HX_CSTRING("");		HX_STACK_VAR(_fragmentCode,"_fragmentCode");
	HX_STACK_LINE(100)
	if ((::com::gamestudiohx::babylonhx::materials::Effect_obj::ShadersStore->exists((fragment + HX_CSTRING("PixelShader"))))){
		HX_STACK_LINE(101)
		::String _g8 = ::com::gamestudiohx::babylonhx::materials::Effect_obj::ShadersStore->get((fragment + HX_CSTRING("PixelShader")));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(101)
		_fragmentCode = _g8;
	}
	else{
		HX_STACK_LINE(103)
		::String _g9 = ::openfl::Assets_obj::getText((fragmentShaderUrl + HX_CSTRING(".fragment.txt")));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(103)
		::String _g10 = ::StringTools_obj::trim(_g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(103)
		_fragmentCode = _g10;
	}
	HX_STACK_LINE(106)
	this->_prepareEffect(_vertexCode,_fragmentCode,attributesNames,defines,optionalDefines,false);
	HX_STACK_LINE(109)
	::haxe::ds::StringMap _g11 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(109)
	this->_valueCache = _g11;
}
;
	return null();
}

//Effect_obj::~Effect_obj() { }

Dynamic Effect_obj::__CreateEmpty() { return  new Effect_obj; }
hx::ObjectPtr< Effect_obj > Effect_obj::__new(Dynamic baseName,Array< ::String > attributesNames,Array< ::String > uniformsNames,Array< ::String > samplers,::com::gamestudiohx::babylonhx::Engine engine,::String defines,Array< ::String > optionalDefines)
{  hx::ObjectPtr< Effect_obj > result = new Effect_obj();
	result->__construct(baseName,attributesNames,uniformsNames,samplers,engine,defines,optionalDefines);
	return result;}

Dynamic Effect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Effect_obj > result = new Effect_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

bool Effect_obj::isReady( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","isReady",0xc7ebded0,"com.gamestudiohx.babylonhx.materials.Effect.isReady","com/gamestudiohx/babylonhx/materials/Effect.hx",113,0x03b528d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(113)
	return this->_isReady;
}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,isReady,return )

int Effect_obj::getAttributeLocationByName( ::String name){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","getAttributeLocationByName",0x0e52aec6,"com.gamestudiohx.babylonhx.materials.Effect.getAttributeLocationByName","com/gamestudiohx/babylonhx/materials/Effect.hx",116,0x03b528d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(117)
	int index = this->_attributesNames->indexOf(name,null());		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(118)
	return this->_attributes->__get(index);
}


HX_DEFINE_DYNAMIC_FUNC1(Effect_obj,getAttributeLocationByName,return )

::openfl::gl::GLProgram Effect_obj::getProgram( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","getProgram",0x3f618237,"com.gamestudiohx.babylonhx.materials.Effect.getProgram","com/gamestudiohx/babylonhx/materials/Effect.hx",122,0x03b528d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	return this->_program;
}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,getProgram,return )

Array< ::String > Effect_obj::getAttributesNames( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","getAttributesNames",0x33bd8e24,"com.gamestudiohx.babylonhx.materials.Effect.getAttributesNames","com/gamestudiohx/babylonhx/materials/Effect.hx",126,0x03b528d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(126)
	return this->_attributesNames;
}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,getAttributesNames,return )

int Effect_obj::getAttribute( int index){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","getAttribute",0x1a9c3a8f,"com.gamestudiohx.babylonhx.materials.Effect.getAttribute","com/gamestudiohx/babylonhx/materials/Effect.hx",130,0x03b528d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(130)
	return this->_attributes->__get(index);
}


HX_DEFINE_DYNAMIC_FUNC1(Effect_obj,getAttribute,return )

int Effect_obj::getAttributesCount( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","getAttributesCount",0xe79c432b,"com.gamestudiohx.babylonhx.materials.Effect.getAttributesCount","com/gamestudiohx/babylonhx/materials/Effect.hx",134,0x03b528d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	return this->_attributes->length;
}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,getAttributesCount,return )

int Effect_obj::getUniformIndex( ::String uniformName){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","getUniformIndex",0x1cb2ecab,"com.gamestudiohx.babylonhx.materials.Effect.getUniformIndex","com/gamestudiohx/babylonhx/materials/Effect.hx",138,0x03b528d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(uniformName,"uniformName")
	HX_STACK_LINE(138)
	return ::Lambda_obj::indexOf(this->_uniformsNames,uniformName);
}


HX_DEFINE_DYNAMIC_FUNC1(Effect_obj,getUniformIndex,return )

Dynamic Effect_obj::getUniform( ::String uniformName){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","getUniform",0x00cc78e7,"com.gamestudiohx.babylonhx.materials.Effect.getUniform","com/gamestudiohx/babylonhx/materials/Effect.hx",141,0x03b528d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(uniformName,"uniformName")
	HX_STACK_LINE(142)
	int _g = ::Lambda_obj::indexOf(this->_uniformsNames,uniformName);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(142)
	return this->_uniforms->__GetItem(_g);
}


HX_DEFINE_DYNAMIC_FUNC1(Effect_obj,getUniform,return )

Array< ::String > Effect_obj::getSamplers( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","getSamplers",0x7c8b2758,"com.gamestudiohx.babylonhx.materials.Effect.getSamplers","com/gamestudiohx/babylonhx/materials/Effect.hx",146,0x03b528d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(146)
	return this->_samplers;
}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,getSamplers,return )

::String Effect_obj::getCompilationError( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","getCompilationError",0xca34bbf2,"com.gamestudiohx.babylonhx.materials.Effect.getCompilationError","com/gamestudiohx/babylonhx/materials/Effect.hx",150,0x03b528d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(150)
	return this->_compilationError;
}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,getCompilationError,return )

Void Effect_obj::_loadVertexShader( ::String vertex,Dynamic callbackFn){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","_loadVertexShader",0x95faecc5,"com.gamestudiohx.babylonhx.materials.Effect._loadVertexShader","com/gamestudiohx/babylonhx/materials/Effect.hx",154,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertex,"vertex")
		HX_STACK_ARG(callbackFn,"callbackFn")
		HX_STACK_LINE(156)
		if ((::com::gamestudiohx::babylonhx::materials::Effect_obj::ShadersStore->exists((vertex + HX_CSTRING("VertexShader"))))){
			HX_STACK_LINE(157)
			::String _g = ::com::gamestudiohx::babylonhx::materials::Effect_obj::ShadersStore->get((vertex + HX_CSTRING("VertexShader")));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(157)
			callbackFn(_g).Cast< Void >();
			HX_STACK_LINE(158)
			return null();
		}
		HX_STACK_LINE(161)
		::String vertexShaderUrl = HX_CSTRING("");		HX_STACK_VAR(vertexShaderUrl,"vertexShaderUrl");
		HX_STACK_LINE(163)
		::String _g1 = vertex.charAt((int)0);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(163)
		if (((_g1 == HX_CSTRING(".")))){
			HX_STACK_LINE(164)
			vertexShaderUrl = vertex;
		}
		else{
			HX_STACK_LINE(166)
			vertexShaderUrl = (::com::gamestudiohx::babylonhx::Engine_obj::ShadersRepository + vertex);
		}
		HX_STACK_LINE(170)
		::com::gamestudiohx::babylonhx::tools::Tools_obj::LoadFile((vertexShaderUrl + HX_CSTRING(".vertex.fx")),callbackFn,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,_loadVertexShader,(void))

Void Effect_obj::_loadFragmentShader( ::String fragment,Dynamic callbackFn){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","_loadFragmentShader",0xbabb8931,"com.gamestudiohx.babylonhx.materials.Effect._loadFragmentShader","com/gamestudiohx/babylonhx/materials/Effect.hx",173,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fragment,"fragment")
		HX_STACK_ARG(callbackFn,"callbackFn")
		HX_STACK_LINE(175)
		if ((::com::gamestudiohx::babylonhx::materials::Effect_obj::ShadersStore->exists((fragment + HX_CSTRING("PixelShader"))))){
			HX_STACK_LINE(176)
			::String _g = ::com::gamestudiohx::babylonhx::materials::Effect_obj::ShadersStore->get((fragment + HX_CSTRING("PixelShader")));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(176)
			callbackFn(_g).Cast< Void >();
			HX_STACK_LINE(177)
			return null();
		}
		HX_STACK_LINE(180)
		::String fragmentShaderUrl = HX_CSTRING("");		HX_STACK_VAR(fragmentShaderUrl,"fragmentShaderUrl");
		HX_STACK_LINE(182)
		::String _g1 = fragment.charAt((int)0);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(182)
		if (((_g1 == HX_CSTRING(".")))){
			HX_STACK_LINE(183)
			fragmentShaderUrl = fragment;
		}
		else{
			HX_STACK_LINE(185)
			fragmentShaderUrl = (::com::gamestudiohx::babylonhx::Engine_obj::ShadersRepository + fragment);
		}
		HX_STACK_LINE(189)
		::com::gamestudiohx::babylonhx::tools::Tools_obj::LoadFile((fragmentShaderUrl + HX_CSTRING(".fragment.fx")),callbackFn,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,_loadFragmentShader,(void))

Void Effect_obj::_prepareEffect( ::String vertexSourceCode,::String fragmentSourceCode,Array< ::String > attributesNames,::String defines,Array< ::String > optionalDefines,bool useFallback){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","_prepareEffect",0x17a6e9e2,"com.gamestudiohx.babylonhx.materials.Effect._prepareEffect","com/gamestudiohx/babylonhx/materials/Effect.hx",193,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertexSourceCode,"vertexSourceCode")
		HX_STACK_ARG(fragmentSourceCode,"fragmentSourceCode")
		HX_STACK_ARG(attributesNames,"attributesNames")
		HX_STACK_ARG(defines,"defines")
		HX_STACK_ARG(optionalDefines,"optionalDefines")
		HX_STACK_ARG(useFallback,"useFallback")
		HX_STACK_LINE(193)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(194)
			::com::gamestudiohx::babylonhx::Engine engine = this->_engine;		HX_STACK_VAR(engine,"engine");
			HX_STACK_LINE(195)
			::openfl::gl::GLProgram _g = engine->createShaderProgram(vertexSourceCode,fragmentSourceCode,defines);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(195)
			this->_program = _g;
			HX_STACK_LINE(197)
			Dynamic _g1 = engine->getUniforms(this->_program,this->_uniformsNames);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(197)
			this->_uniforms = _g1;
			HX_STACK_LINE(198)
			Array< int > _g2 = engine->getAttributes(this->_program,attributesNames);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(198)
			this->_attributes = _g2;
			HX_STACK_LINE(200)
			int index = (int)0;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(201)
			while((true)){
				HX_STACK_LINE(201)
				if ((!(((index < this->_samplers->length))))){
					HX_STACK_LINE(201)
					break;
				}
				HX_STACK_LINE(202)
				Dynamic sampler = this->getUniform(this->_samplers->__get(index));		HX_STACK_VAR(sampler,"sampler");
				HX_STACK_LINE(206)
				if (((sampler < (int)0))){
					HX_STACK_LINE(208)
					this->_samplers->splice(index,(int)1);
					HX_STACK_LINE(209)
					(index)--;
				}
				HX_STACK_LINE(212)
				(index)++;
			}
			HX_STACK_LINE(215)
			engine->bindSamplers(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(217)
			this->_isReady = true;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(219)
					::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Effect.hx"),219,HX_CSTRING("com.gamestudiohx.babylonhx.materials.Effect"),HX_CSTRING("_prepareEffect")));
					HX_STACK_LINE(220)
					if (((bool(!(useFallback)) && bool((optionalDefines != null()))))){
						HX_STACK_LINE(221)
						{
							HX_STACK_LINE(221)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(221)
							int _g = optionalDefines->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(221)
							while((true)){
								HX_STACK_LINE(221)
								if ((!(((_g1 < _g))))){
									HX_STACK_LINE(221)
									break;
								}
								HX_STACK_LINE(221)
								int index = (_g1)++;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(222)
								::String _g3 = ::StringTools_obj::replace(defines,optionalDefines->__get(index),HX_CSTRING(""));		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(222)
								defines = _g3;
							}
						}
						HX_STACK_LINE(224)
						this->_prepareEffect(vertexSourceCode,fragmentSourceCode,attributesNames,defines,optionalDefines,true);
					}
					else{
						HX_STACK_LINE(226)
						::String _g4 = ::Std_obj::string(this->name);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(226)
						::String _g5 = (HX_CSTRING("Unable to compile effect: ") + _g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(226)
						::haxe::Log_obj::trace(_g5,hx::SourceInfo(HX_CSTRING("Effect.hx"),226,HX_CSTRING("com.gamestudiohx.babylonhx.materials.Effect"),HX_CSTRING("_prepareEffect")));
						HX_STACK_LINE(227)
						::haxe::Log_obj::trace((HX_CSTRING("Defines: ") + defines),hx::SourceInfo(HX_CSTRING("Effect.hx"),227,HX_CSTRING("com.gamestudiohx.babylonhx.materials.Effect"),HX_CSTRING("_prepareEffect")));
						HX_STACK_LINE(228)
						::String _g6 = ::Std_obj::string(optionalDefines);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(228)
						::String _g7 = (HX_CSTRING("Optional defines: ") + _g6);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(228)
						::haxe::Log_obj::trace(_g7,hx::SourceInfo(HX_CSTRING("Effect.hx"),228,HX_CSTRING("com.gamestudiohx.babylonhx.materials.Effect"),HX_CSTRING("_prepareEffect")));
						HX_STACK_LINE(229)
						this->_compilationError = e;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Effect_obj,_prepareEffect,(void))

Void Effect_obj::_bindTexture( ::String channel,::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texture){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","_bindTexture",0x11b0b888,"com.gamestudiohx.babylonhx.materials.Effect._bindTexture","com/gamestudiohx/babylonhx/materials/Effect.hx",234,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(channel,"channel")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(235)
		int _g = ::Lambda_obj::indexOf(this->_samplers,channel);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(235)
		this->_engine->_bindTexture(_g,texture);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,_bindTexture,(void))

Void Effect_obj::setTexture( ::String channel,::com::gamestudiohx::babylonhx::materials::textures::Texture texture){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","setTexture",0xedc69f02,"com.gamestudiohx.babylonhx.materials.Effect.setTexture","com/gamestudiohx/babylonhx/materials/Effect.hx",238,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(channel,"channel")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(239)
		int _g = ::Lambda_obj::indexOf(this->_samplers,channel);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(239)
		this->_engine->setTexture(_g,texture);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,setTexture,(void))

Void Effect_obj::setTextureFromPostProcess( ::String channel,::com::gamestudiohx::babylonhx::postprocess::PostProcess postProcess){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","setTextureFromPostProcess",0xb58ea3c3,"com.gamestudiohx.babylonhx.materials.Effect.setTextureFromPostProcess","com/gamestudiohx/babylonhx/materials/Effect.hx",242,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(channel,"channel")
		HX_STACK_ARG(postProcess,"postProcess")
		HX_STACK_LINE(243)
		int _g = ::Lambda_obj::indexOf(this->_samplers,channel);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(243)
		this->_engine->setTextureFromPostProcess(_g,postProcess);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,setTextureFromPostProcess,(void))

Void Effect_obj::_cacheFloat2( ::String uniformName,Float x,Float y){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","_cacheFloat2",0xd6562ae2,"com.gamestudiohx.babylonhx.materials.Effect._cacheFloat2","com/gamestudiohx/babylonhx/materials/Effect.hx",257,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniformName,"uniformName")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(257)
		if ((!(this->_valueCache->exists(uniformName)))){
			HX_STACK_LINE(258)
			this->_valueCache->set(uniformName,Array_obj< Float >::__new().Add(x).Add(y));
		}
		else{
			HX_STACK_LINE(260)
			Array< Float > _g = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(260)
			_g[(int)0] = x;
			HX_STACK_LINE(261)
			Array< Float > _g1 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(261)
			_g1[(int)1] = y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Effect_obj,_cacheFloat2,(void))

Void Effect_obj::_cacheFloat3( ::String uniformName,Float x,Float y,Float z){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","_cacheFloat3",0xd6562ae3,"com.gamestudiohx.babylonhx.materials.Effect._cacheFloat3","com/gamestudiohx/babylonhx/materials/Effect.hx",266,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniformName,"uniformName")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(266)
		if ((!(this->_valueCache->exists(uniformName)))){
			HX_STACK_LINE(267)
			this->_valueCache->set(uniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z));
		}
		else{
			HX_STACK_LINE(269)
			Array< Float > _g = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(269)
			_g[(int)0] = x;
			HX_STACK_LINE(270)
			Array< Float > _g1 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(270)
			_g1[(int)1] = y;
			HX_STACK_LINE(271)
			Array< Float > _g2 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(271)
			_g2[(int)2] = z;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Effect_obj,_cacheFloat3,(void))

Void Effect_obj::_cacheFloat4( ::String uniformName,Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","_cacheFloat4",0xd6562ae4,"com.gamestudiohx.babylonhx.materials.Effect._cacheFloat4","com/gamestudiohx/babylonhx/materials/Effect.hx",276,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniformName,"uniformName")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(276)
		if ((!(this->_valueCache->exists(uniformName)))){
			HX_STACK_LINE(277)
			this->_valueCache->set(uniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add(w));
		}
		else{
			HX_STACK_LINE(279)
			Array< Float > _g = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(279)
			_g[(int)0] = x;
			HX_STACK_LINE(280)
			Array< Float > _g1 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(280)
			_g1[(int)1] = y;
			HX_STACK_LINE(281)
			Array< Float > _g2 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(281)
			_g2[(int)2] = z;
			HX_STACK_LINE(282)
			Array< Float > _g3 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(282)
			_g3[(int)3] = w;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Effect_obj,_cacheFloat4,(void))

Void Effect_obj::setMatrices( ::String uniformName,Array< Float > matrices){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","setMatrices",0x2118fd93,"com.gamestudiohx.babylonhx.materials.Effect.setMatrices","com/gamestudiohx/babylonhx/materials/Effect.hx",287,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniformName,"uniformName")
		HX_STACK_ARG(matrices,"matrices")
		HX_STACK_LINE(287)
		Dynamic uniform = this->getUniform(uniformName);		HX_STACK_VAR(uniform,"uniform");
		HX_STACK_LINE(287)
		if (((uniform != null()))){
			HX_STACK_LINE(287)
			Dynamic location = uniform;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(287)
			Dynamic v;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(287)
			{
				HX_STACK_LINE(287)
				::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrices,null(),null());		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(287)
				Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(287)
				v = data;
			}
			HX_STACK_LINE(287)
			::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,setMatrices,(void))

::com::gamestudiohx::babylonhx::materials::Effect Effect_obj::setArray( ::String uniformName,Array< Float > array){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","setArray",0x053f9c00,"com.gamestudiohx.babylonhx.materials.Effect.setArray","com/gamestudiohx/babylonhx/materials/Effect.hx",290,0x03b528d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(uniformName,"uniformName")
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(291)
	{
		HX_STACK_LINE(291)
		Dynamic uniform = this->getUniform(uniformName);		HX_STACK_VAR(uniform,"uniform");
		HX_STACK_LINE(291)
		if (((uniform != null()))){
			HX_STACK_LINE(291)
			Dynamic location = uniform;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(291)
			::openfl::gl::GL_obj::lime_gl_uniform1fv(location,array);
		}
	}
	HX_STACK_LINE(292)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,setArray,return )

Void Effect_obj::setMatrix( ::String uniformName,::com::gamestudiohx::babylonhx::tools::math::Matrix matrix){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","setMatrix",0x9640a1fa,"com.gamestudiohx.babylonhx.materials.Effect.setMatrix","com/gamestudiohx/babylonhx/materials/Effect.hx",300,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniformName,"uniformName")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(300)
		Dynamic uniform = this->getUniform(uniformName);		HX_STACK_VAR(uniform,"uniform");
		HX_STACK_LINE(300)
		if (((uniform != null()))){
			HX_STACK_LINE(300)
			Dynamic location = uniform;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(300)
			Dynamic v;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(300)
			{
				HX_STACK_LINE(300)
				::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(300)
				Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(300)
				v = data;
			}
			HX_STACK_LINE(300)
			::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,setMatrix,(void))

Void Effect_obj::setFloat( ::String uniformName,Float value){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","setFloat",0xe246f403,"com.gamestudiohx.babylonhx.materials.Effect.setFloat","com/gamestudiohx/babylonhx/materials/Effect.hx",304,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniformName,"uniformName")
		HX_STACK_ARG(value,"value")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,Float &value,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",304,0x03b528d7)
				{
					HX_STACK_LINE(304)
					Array< Float > _g = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(304)
					Float _g1 = _g->__get((int)0);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(304)
					return (_g1 == value);
				}
				return null();
			}
		};
		HX_STACK_LINE(304)
		if ((!(((  ((this->_valueCache->exists(uniformName))) ? bool(_Function_1_1::Block(this,value,uniformName)) : bool(false) ))))){
			HX_STACK_LINE(305)
			this->_valueCache->set(uniformName,Array_obj< Float >::__new().Add(value));
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				Dynamic uniform = this->getUniform(uniformName);		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(306)
				if (((uniform != null()))){
					HX_STACK_LINE(306)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(306)
					::openfl::gl::GL_obj::lime_gl_uniform1f(location,value);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,setFloat,(void))

Void Effect_obj::setBool( ::String uniformName,bool _bool){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","setBool",0x4b4b5fa3,"com.gamestudiohx.babylonhx.materials.Effect.setBool","com/gamestudiohx/babylonhx/materials/Effect.hx",311,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniformName,"uniformName")
		HX_STACK_ARG(_bool,"bool")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,bool &_bool,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",311,0x03b528d7)
				{
					HX_STACK_LINE(311)
					Array< Float > _g = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(311)
					Float _g1 = _g->__get((int)0);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(311)
					return (_g1 == ((  ((_bool)) ? Float(1.0) : Float(0.0) )));
				}
				return null();
			}
		};
		HX_STACK_LINE(311)
		if ((!(((  ((this->_valueCache->exists(uniformName))) ? bool(_Function_1_1::Block(this,_bool,uniformName)) : bool(false) ))))){
			HX_STACK_LINE(312)
			this->_valueCache->set(uniformName,(  ((_bool)) ? Array< Float >(Array_obj< Float >::__new().Add(1.0)) : Array< Float >(Array_obj< Float >::__new().Add(0.0)) ));
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(313)
				Dynamic uniform = this->getUniform(uniformName);		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(313)
				if (((uniform != null()))){
					HX_STACK_LINE(313)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(313)
					::openfl::gl::GL_obj::lime_gl_uniform1i(location,(  ((_bool)) ? int((int)1) : int((int)0) ));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,setBool,(void))

Void Effect_obj::setVector2( ::String uniformName,::com::gamestudiohx::babylonhx::tools::math::Vector2 vector2){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","setVector2",0x2982d036,"com.gamestudiohx.babylonhx.materials.Effect.setVector2","com/gamestudiohx/babylonhx/materials/Effect.hx",318,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniformName,"uniformName")
		HX_STACK_ARG(vector2,"vector2")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,::com::gamestudiohx::babylonhx::tools::math::Vector2 &vector2,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",318,0x03b528d7)
				{
					HX_STACK_LINE(318)
					Array< Float > _g = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(318)
					Float _g1 = _g->__get((int)0);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(318)
					return (_g1 == vector2->x);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,::com::gamestudiohx::babylonhx::tools::math::Vector2 &vector2,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",318,0x03b528d7)
				{
					HX_STACK_LINE(318)
					Array< Float > _g2 = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(318)
					Float _g3 = _g2->__get((int)1);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(318)
					return (_g3 == vector2->y);
				}
				return null();
			}
		};
		HX_STACK_LINE(318)
		if ((!(((  (((  ((this->_valueCache->exists(uniformName))) ? bool(_Function_1_1::Block(this,vector2,uniformName)) : bool(false) ))) ? bool(_Function_1_2::Block(this,vector2,uniformName)) : bool(false) ))))){
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				Float x = vector2->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(319)
				Float y = vector2->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(319)
				if ((!(this->_valueCache->exists(uniformName)))){
					HX_STACK_LINE(319)
					this->_valueCache->set(uniformName,Array_obj< Float >::__new().Add(x).Add(y));
				}
				else{
					HX_STACK_LINE(319)
					Array< Float > _g4 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(319)
					_g4[(int)0] = x;
					HX_STACK_LINE(319)
					Array< Float > _g5 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(319)
					_g5[(int)1] = y;
				}
			}
			HX_STACK_LINE(320)
			{
				HX_STACK_LINE(320)
				Dynamic uniform = this->getUniform(uniformName);		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(320)
				if (((uniform != null()))){
					HX_STACK_LINE(320)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(320)
					::openfl::gl::GL_obj::lime_gl_uniform2f(location,vector2->x,vector2->y);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,setVector2,(void))

Void Effect_obj::setFloat2( ::String uniformName,Float x,Float y){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","setFloat2",0x1bce8ecf,"com.gamestudiohx.babylonhx.materials.Effect.setFloat2","com/gamestudiohx/babylonhx/materials/Effect.hx",325,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniformName,"uniformName")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,Float &x,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",325,0x03b528d7)
				{
					HX_STACK_LINE(325)
					Array< Float > _g = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(325)
					Float _g1 = _g->__get((int)0);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(325)
					return (_g1 == x);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,Float &y,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",325,0x03b528d7)
				{
					HX_STACK_LINE(325)
					Array< Float > _g2 = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(325)
					Float _g3 = _g2->__get((int)1);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(325)
					return (_g3 == y);
				}
				return null();
			}
		};
		HX_STACK_LINE(325)
		if ((!(((  (((  ((this->_valueCache->exists(uniformName))) ? bool(_Function_1_1::Block(this,x,uniformName)) : bool(false) ))) ? bool(_Function_1_2::Block(this,y,uniformName)) : bool(false) ))))){
			HX_STACK_LINE(326)
			if ((!(this->_valueCache->exists(uniformName)))){
				HX_STACK_LINE(326)
				this->_valueCache->set(uniformName,Array_obj< Float >::__new().Add(x).Add(y));
			}
			else{
				HX_STACK_LINE(326)
				Array< Float > _g4 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(326)
				_g4[(int)0] = x;
				HX_STACK_LINE(326)
				Array< Float > _g5 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(326)
				_g5[(int)1] = y;
			}
			HX_STACK_LINE(327)
			{
				HX_STACK_LINE(327)
				Dynamic uniform = this->getUniform(uniformName);		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(327)
				if (((uniform != null()))){
					HX_STACK_LINE(327)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(327)
					::openfl::gl::GL_obj::lime_gl_uniform2f(location,x,y);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Effect_obj,setFloat2,(void))

Void Effect_obj::setVector3( ::String uniformName,::com::gamestudiohx::babylonhx::tools::math::Vector3 vector3){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","setVector3",0x2982d037,"com.gamestudiohx.babylonhx.materials.Effect.setVector3","com/gamestudiohx/babylonhx/materials/Effect.hx",332,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniformName,"uniformName")
		HX_STACK_ARG(vector3,"vector3")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,::com::gamestudiohx::babylonhx::tools::math::Vector3 &vector3,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",332,0x03b528d7)
				{
					HX_STACK_LINE(332)
					Array< Float > _g = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(332)
					Float _g1 = _g->__get((int)0);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(332)
					return (_g1 == vector3->x);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,::com::gamestudiohx::babylonhx::tools::math::Vector3 &vector3,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",332,0x03b528d7)
				{
					HX_STACK_LINE(332)
					Array< Float > _g2 = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(332)
					Float _g3 = _g2->__get((int)1);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(332)
					return (_g3 == vector3->y);
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,::com::gamestudiohx::babylonhx::tools::math::Vector3 &vector3,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",332,0x03b528d7)
				{
					HX_STACK_LINE(332)
					Array< Float > _g4 = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(332)
					Float _g5 = _g4->__get((int)2);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(332)
					return (_g5 == vector3->z);
				}
				return null();
			}
		};
		HX_STACK_LINE(332)
		if ((!(((  (((  (((  ((this->_valueCache->exists(uniformName))) ? bool(_Function_1_1::Block(this,vector3,uniformName)) : bool(false) ))) ? bool(_Function_1_2::Block(this,vector3,uniformName)) : bool(false) ))) ? bool(_Function_1_3::Block(this,vector3,uniformName)) : bool(false) ))))){
			HX_STACK_LINE(333)
			{
				HX_STACK_LINE(333)
				Float x = vector3->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(333)
				Float y = vector3->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(333)
				Float z = vector3->z;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(333)
				if ((!(this->_valueCache->exists(uniformName)))){
					HX_STACK_LINE(333)
					this->_valueCache->set(uniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z));
				}
				else{
					HX_STACK_LINE(333)
					Array< Float > _g6 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(333)
					_g6[(int)0] = x;
					HX_STACK_LINE(333)
					Array< Float > _g7 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(333)
					_g7[(int)1] = y;
					HX_STACK_LINE(333)
					Array< Float > _g8 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(333)
					_g8[(int)2] = z;
				}
			}
			HX_STACK_LINE(334)
			{
				HX_STACK_LINE(334)
				Dynamic uniform = this->getUniform(uniformName);		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(334)
				if (((uniform != null()))){
					HX_STACK_LINE(334)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(334)
					::openfl::gl::GL_obj::lime_gl_uniform3f(location,vector3->x,vector3->y,vector3->z);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,setVector3,(void))

Void Effect_obj::setFloat3( ::String uniformName,Float x,Float y,Float z){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","setFloat3",0x1bce8ed0,"com.gamestudiohx.babylonhx.materials.Effect.setFloat3","com/gamestudiohx/babylonhx/materials/Effect.hx",339,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniformName,"uniformName")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,Float &x,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",339,0x03b528d7)
				{
					HX_STACK_LINE(339)
					Array< Float > _g = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(339)
					Float _g1 = _g->__get((int)0);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(339)
					return (_g1 == x);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,Float &y,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",339,0x03b528d7)
				{
					HX_STACK_LINE(339)
					Array< Float > _g2 = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(339)
					Float _g3 = _g2->__get((int)1);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(339)
					return (_g3 == y);
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,Float &z,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",339,0x03b528d7)
				{
					HX_STACK_LINE(339)
					Array< Float > _g4 = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(339)
					Float _g5 = _g4->__get((int)2);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(339)
					return (_g5 == z);
				}
				return null();
			}
		};
		HX_STACK_LINE(339)
		if ((!(((  (((  (((  ((this->_valueCache->exists(uniformName))) ? bool(_Function_1_1::Block(this,x,uniformName)) : bool(false) ))) ? bool(_Function_1_2::Block(this,y,uniformName)) : bool(false) ))) ? bool(_Function_1_3::Block(this,z,uniformName)) : bool(false) ))))){
			HX_STACK_LINE(340)
			if ((!(this->_valueCache->exists(uniformName)))){
				HX_STACK_LINE(340)
				this->_valueCache->set(uniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z));
			}
			else{
				HX_STACK_LINE(340)
				Array< Float > _g6 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(340)
				_g6[(int)0] = x;
				HX_STACK_LINE(340)
				Array< Float > _g7 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(340)
				_g7[(int)1] = y;
				HX_STACK_LINE(340)
				Array< Float > _g8 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(340)
				_g8[(int)2] = z;
			}
			HX_STACK_LINE(341)
			{
				HX_STACK_LINE(341)
				Dynamic uniform = this->getUniform(uniformName);		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(341)
				if (((uniform != null()))){
					HX_STACK_LINE(341)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(341)
					::openfl::gl::GL_obj::lime_gl_uniform3f(location,x,y,z);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Effect_obj,setFloat3,(void))

Void Effect_obj::setFloat4( ::String uniformName,Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","setFloat4",0x1bce8ed1,"com.gamestudiohx.babylonhx.materials.Effect.setFloat4","com/gamestudiohx/babylonhx/materials/Effect.hx",346,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniformName,"uniformName")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,Float &x,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",346,0x03b528d7)
				{
					HX_STACK_LINE(346)
					Array< Float > _g = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(346)
					Float _g1 = _g->__get((int)0);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(346)
					return (_g1 == x);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,Float &y,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",346,0x03b528d7)
				{
					HX_STACK_LINE(346)
					Array< Float > _g2 = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(346)
					Float _g3 = _g2->__get((int)1);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(346)
					return (_g3 == y);
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,Float &z,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",346,0x03b528d7)
				{
					HX_STACK_LINE(346)
					Array< Float > _g4 = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(346)
					Float _g5 = _g4->__get((int)2);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(346)
					return (_g5 == z);
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,Float &w,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",346,0x03b528d7)
				{
					HX_STACK_LINE(346)
					Array< Float > _g6 = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(346)
					Float _g7 = _g6->__get((int)3);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(346)
					return (_g7 == w);
				}
				return null();
			}
		};
		HX_STACK_LINE(346)
		if ((!(((  (((  (((  (((  ((this->_valueCache->exists(uniformName))) ? bool(_Function_1_1::Block(this,x,uniformName)) : bool(false) ))) ? bool(_Function_1_2::Block(this,y,uniformName)) : bool(false) ))) ? bool(_Function_1_3::Block(this,z,uniformName)) : bool(false) ))) ? bool(_Function_1_4::Block(this,w,uniformName)) : bool(false) ))))){
			HX_STACK_LINE(347)
			if ((!(this->_valueCache->exists(uniformName)))){
				HX_STACK_LINE(347)
				this->_valueCache->set(uniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add(w));
			}
			else{
				HX_STACK_LINE(347)
				Array< Float > _g8 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(347)
				_g8[(int)0] = x;
				HX_STACK_LINE(347)
				Array< Float > _g9 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(347)
				_g9[(int)1] = y;
				HX_STACK_LINE(347)
				Array< Float > _g10 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(347)
				_g10[(int)2] = z;
				HX_STACK_LINE(347)
				Array< Float > _g11 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(347)
				_g11[(int)3] = w;
			}
			HX_STACK_LINE(348)
			{
				HX_STACK_LINE(348)
				Dynamic uniform = this->getUniform(uniformName);		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(348)
				if (((uniform != null()))){
					HX_STACK_LINE(348)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(348)
					::openfl::gl::GL_obj::lime_gl_uniform4f(location,x,y,z,w);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Effect_obj,setFloat4,(void))

Void Effect_obj::setColor3( ::String uniformName,::com::gamestudiohx::babylonhx::tools::math::Color3 color3){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","setColor3",0xa0ff3129,"com.gamestudiohx.babylonhx.materials.Effect.setColor3","com/gamestudiohx/babylonhx/materials/Effect.hx",353,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniformName,"uniformName")
		HX_STACK_ARG(color3,"color3")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",353,0x03b528d7)
				{
					HX_STACK_LINE(353)
					Array< Float > _g = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(353)
					Float _g1 = _g->__get((int)0);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(353)
					return (_g1 == color3->r);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",353,0x03b528d7)
				{
					HX_STACK_LINE(353)
					Array< Float > _g2 = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(353)
					Float _g3 = _g2->__get((int)1);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(353)
					return (_g3 == color3->g);
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",353,0x03b528d7)
				{
					HX_STACK_LINE(353)
					Array< Float > _g4 = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(353)
					Float _g5 = _g4->__get((int)2);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(353)
					return (_g5 == color3->b);
				}
				return null();
			}
		};
		HX_STACK_LINE(353)
		if ((!(((  (((  (((  ((this->_valueCache->exists(uniformName))) ? bool(_Function_1_1::Block(this,color3,uniformName)) : bool(false) ))) ? bool(_Function_1_2::Block(this,color3,uniformName)) : bool(false) ))) ? bool(_Function_1_3::Block(this,color3,uniformName)) : bool(false) ))))){
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(354)
				Float x = color3->r;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(354)
				Float y = color3->g;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(354)
				Float z = color3->b;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(354)
				if ((!(this->_valueCache->exists(uniformName)))){
					HX_STACK_LINE(354)
					this->_valueCache->set(uniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z));
				}
				else{
					HX_STACK_LINE(354)
					Array< Float > _g6 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(354)
					_g6[(int)0] = x;
					HX_STACK_LINE(354)
					Array< Float > _g7 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(354)
					_g7[(int)1] = y;
					HX_STACK_LINE(354)
					Array< Float > _g8 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(354)
					_g8[(int)2] = z;
				}
			}
			HX_STACK_LINE(355)
			{
				HX_STACK_LINE(355)
				Dynamic uniform = this->getUniform(uniformName);		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(355)
				if (((uniform != null()))){
					HX_STACK_LINE(355)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(355)
					::openfl::gl::GL_obj::lime_gl_uniform3f(location,color3->r,color3->g,color3->b);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,setColor3,(void))

Void Effect_obj::setColor4( ::String uniformName,::com::gamestudiohx::babylonhx::tools::math::Color3 color3,Float alpha){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.Effect","setColor4",0xa0ff312a,"com.gamestudiohx.babylonhx.materials.Effect.setColor4","com/gamestudiohx/babylonhx/materials/Effect.hx",360,0x03b528d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniformName,"uniformName")
		HX_STACK_ARG(color3,"color3")
		HX_STACK_ARG(alpha,"alpha")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",360,0x03b528d7)
				{
					HX_STACK_LINE(360)
					Array< Float > _g = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(360)
					Float _g1 = _g->__get((int)0);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(360)
					return (_g1 == color3->r);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",360,0x03b528d7)
				{
					HX_STACK_LINE(360)
					Array< Float > _g2 = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(360)
					Float _g3 = _g2->__get((int)1);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(360)
					return (_g3 == color3->g);
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",360,0x03b528d7)
				{
					HX_STACK_LINE(360)
					Array< Float > _g4 = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(360)
					Float _g5 = _g4->__get((int)2);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(360)
					return (_g5 == color3->b);
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::materials::Effect_obj > __this,Float &alpha,::String &uniformName){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",360,0x03b528d7)
				{
					HX_STACK_LINE(360)
					Array< Float > _g6 = __this->_valueCache->get(uniformName);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(360)
					Float _g7 = _g6->__get((int)3);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(360)
					return (_g7 == alpha);
				}
				return null();
			}
		};
		HX_STACK_LINE(360)
		if ((!(((  (((  (((  (((  ((this->_valueCache->exists(uniformName))) ? bool(_Function_1_1::Block(this,color3,uniformName)) : bool(false) ))) ? bool(_Function_1_2::Block(this,color3,uniformName)) : bool(false) ))) ? bool(_Function_1_3::Block(this,color3,uniformName)) : bool(false) ))) ? bool(_Function_1_4::Block(this,alpha,uniformName)) : bool(false) ))))){
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				Float x = color3->r;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(361)
				Float y = color3->g;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(361)
				Float z = color3->b;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(361)
				if ((!(this->_valueCache->exists(uniformName)))){
					HX_STACK_LINE(361)
					this->_valueCache->set(uniformName,Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add(alpha));
				}
				else{
					HX_STACK_LINE(361)
					Array< Float > _g8 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(361)
					_g8[(int)0] = x;
					HX_STACK_LINE(361)
					Array< Float > _g9 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(361)
					_g9[(int)1] = y;
					HX_STACK_LINE(361)
					Array< Float > _g10 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(361)
					_g10[(int)2] = z;
					HX_STACK_LINE(361)
					Array< Float > _g11 = this->_valueCache->get(uniformName);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(361)
					_g11[(int)3] = alpha;
				}
			}
			HX_STACK_LINE(362)
			{
				HX_STACK_LINE(362)
				Dynamic uniform = this->getUniform(uniformName);		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(362)
				if (((uniform != null()))){
					HX_STACK_LINE(362)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(362)
					::openfl::gl::GL_obj::lime_gl_uniform4f(location,color3->r,color3->g,color3->b,alpha);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Effect_obj,setColor4,(void))

::haxe::ds::StringMap Effect_obj::ShadersStore;


Effect_obj::Effect_obj()
{
}

void Effect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Effect);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(_engine,"_engine");
	HX_MARK_MEMBER_NAME(defines,"defines");
	HX_MARK_MEMBER_NAME(_uniforms,"_uniforms");
	HX_MARK_MEMBER_NAME(_uniformsNames,"_uniformsNames");
	HX_MARK_MEMBER_NAME(_samplers,"_samplers");
	HX_MARK_MEMBER_NAME(_isReady,"_isReady");
	HX_MARK_MEMBER_NAME(_compilationError,"_compilationError");
	HX_MARK_MEMBER_NAME(_attributes,"_attributes");
	HX_MARK_MEMBER_NAME(_attributesNames,"_attributesNames");
	HX_MARK_MEMBER_NAME(_valueCache,"_valueCache");
	HX_MARK_MEMBER_NAME(_program,"_program");
	HX_MARK_END_CLASS();
}

void Effect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(_engine,"_engine");
	HX_VISIT_MEMBER_NAME(defines,"defines");
	HX_VISIT_MEMBER_NAME(_uniforms,"_uniforms");
	HX_VISIT_MEMBER_NAME(_uniformsNames,"_uniformsNames");
	HX_VISIT_MEMBER_NAME(_samplers,"_samplers");
	HX_VISIT_MEMBER_NAME(_isReady,"_isReady");
	HX_VISIT_MEMBER_NAME(_compilationError,"_compilationError");
	HX_VISIT_MEMBER_NAME(_attributes,"_attributes");
	HX_VISIT_MEMBER_NAME(_attributesNames,"_attributesNames");
	HX_VISIT_MEMBER_NAME(_valueCache,"_valueCache");
	HX_VISIT_MEMBER_NAME(_program,"_program");
}

Dynamic Effect_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_engine") ) { return _engine; }
		if (HX_FIELD_EQ(inName,"defines") ) { return defines; }
		if (HX_FIELD_EQ(inName,"isReady") ) { return isReady_dyn(); }
		if (HX_FIELD_EQ(inName,"setBool") ) { return setBool_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_isReady") ) { return _isReady; }
		if (HX_FIELD_EQ(inName,"_program") ) { return _program; }
		if (HX_FIELD_EQ(inName,"setArray") ) { return setArray_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat") ) { return setFloat_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_uniforms") ) { return _uniforms; }
		if (HX_FIELD_EQ(inName,"_samplers") ) { return _samplers; }
		if (HX_FIELD_EQ(inName,"setMatrix") ) { return setMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat2") ) { return setFloat2_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat3") ) { return setFloat3_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat4") ) { return setFloat4_dyn(); }
		if (HX_FIELD_EQ(inName,"setColor3") ) { return setColor3_dyn(); }
		if (HX_FIELD_EQ(inName,"setColor4") ) { return setColor4_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getProgram") ) { return getProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniform") ) { return getUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"setTexture") ) { return setTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector2") ) { return setVector2_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector3") ) { return setVector3_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_attributes") ) { return _attributes; }
		if (HX_FIELD_EQ(inName,"_valueCache") ) { return _valueCache; }
		if (HX_FIELD_EQ(inName,"getSamplers") ) { return getSamplers_dyn(); }
		if (HX_FIELD_EQ(inName,"setMatrices") ) { return setMatrices_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ShadersStore") ) { return ShadersStore; }
		if (HX_FIELD_EQ(inName,"getAttribute") ) { return getAttribute_dyn(); }
		if (HX_FIELD_EQ(inName,"_bindTexture") ) { return _bindTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"_cacheFloat2") ) { return _cacheFloat2_dyn(); }
		if (HX_FIELD_EQ(inName,"_cacheFloat3") ) { return _cacheFloat3_dyn(); }
		if (HX_FIELD_EQ(inName,"_cacheFloat4") ) { return _cacheFloat4_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_uniformsNames") ) { return _uniformsNames; }
		if (HX_FIELD_EQ(inName,"_prepareEffect") ) { return _prepareEffect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getUniformIndex") ) { return getUniformIndex_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_attributesNames") ) { return _attributesNames; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_compilationError") ) { return _compilationError; }
		if (HX_FIELD_EQ(inName,"_loadVertexShader") ) { return _loadVertexShader_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getAttributesNames") ) { return getAttributesNames_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttributesCount") ) { return getAttributesCount_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getCompilationError") ) { return getCompilationError_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadFragmentShader") ) { return _loadFragmentShader_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"setTextureFromPostProcess") ) { return setTextureFromPostProcess_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getAttributeLocationByName") ) { return getAttributeLocationByName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Effect_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_engine") ) { _engine=inValue.Cast< ::com::gamestudiohx::babylonhx::Engine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defines") ) { defines=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_isReady") ) { _isReady=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_program") ) { _program=inValue.Cast< ::openfl::gl::GLProgram >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_uniforms") ) { _uniforms=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_samplers") ) { _samplers=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_attributes") ) { _attributes=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_valueCache") ) { _valueCache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ShadersStore") ) { ShadersStore=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_uniformsNames") ) { _uniformsNames=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_attributesNames") ) { _attributesNames=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_compilationError") ) { _compilationError=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Effect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("_engine"));
	outFields->push(HX_CSTRING("defines"));
	outFields->push(HX_CSTRING("_uniforms"));
	outFields->push(HX_CSTRING("_uniformsNames"));
	outFields->push(HX_CSTRING("_samplers"));
	outFields->push(HX_CSTRING("_isReady"));
	outFields->push(HX_CSTRING("_compilationError"));
	outFields->push(HX_CSTRING("_attributes"));
	outFields->push(HX_CSTRING("_attributesNames"));
	outFields->push(HX_CSTRING("_valueCache"));
	outFields->push(HX_CSTRING("_program"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ShadersStore"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Effect_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Engine*/ ,(int)offsetof(Effect_obj,_engine),HX_CSTRING("_engine")},
	{hx::fsString,(int)offsetof(Effect_obj,defines),HX_CSTRING("defines")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Effect_obj,_uniforms),HX_CSTRING("_uniforms")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Effect_obj,_uniformsNames),HX_CSTRING("_uniformsNames")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Effect_obj,_samplers),HX_CSTRING("_samplers")},
	{hx::fsBool,(int)offsetof(Effect_obj,_isReady),HX_CSTRING("_isReady")},
	{hx::fsString,(int)offsetof(Effect_obj,_compilationError),HX_CSTRING("_compilationError")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Effect_obj,_attributes),HX_CSTRING("_attributes")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Effect_obj,_attributesNames),HX_CSTRING("_attributesNames")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Effect_obj,_valueCache),HX_CSTRING("_valueCache")},
	{hx::fsObject /*::openfl::gl::GLProgram*/ ,(int)offsetof(Effect_obj,_program),HX_CSTRING("_program")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("_engine"),
	HX_CSTRING("defines"),
	HX_CSTRING("_uniforms"),
	HX_CSTRING("_uniformsNames"),
	HX_CSTRING("_samplers"),
	HX_CSTRING("_isReady"),
	HX_CSTRING("_compilationError"),
	HX_CSTRING("_attributes"),
	HX_CSTRING("_attributesNames"),
	HX_CSTRING("_valueCache"),
	HX_CSTRING("_program"),
	HX_CSTRING("isReady"),
	HX_CSTRING("getAttributeLocationByName"),
	HX_CSTRING("getProgram"),
	HX_CSTRING("getAttributesNames"),
	HX_CSTRING("getAttribute"),
	HX_CSTRING("getAttributesCount"),
	HX_CSTRING("getUniformIndex"),
	HX_CSTRING("getUniform"),
	HX_CSTRING("getSamplers"),
	HX_CSTRING("getCompilationError"),
	HX_CSTRING("_loadVertexShader"),
	HX_CSTRING("_loadFragmentShader"),
	HX_CSTRING("_prepareEffect"),
	HX_CSTRING("_bindTexture"),
	HX_CSTRING("setTexture"),
	HX_CSTRING("setTextureFromPostProcess"),
	HX_CSTRING("_cacheFloat2"),
	HX_CSTRING("_cacheFloat3"),
	HX_CSTRING("_cacheFloat4"),
	HX_CSTRING("setMatrices"),
	HX_CSTRING("setArray"),
	HX_CSTRING("setMatrix"),
	HX_CSTRING("setFloat"),
	HX_CSTRING("setBool"),
	HX_CSTRING("setVector2"),
	HX_CSTRING("setFloat2"),
	HX_CSTRING("setVector3"),
	HX_CSTRING("setFloat3"),
	HX_CSTRING("setFloat4"),
	HX_CSTRING("setColor3"),
	HX_CSTRING("setColor4"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Effect_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Effect_obj::ShadersStore,"ShadersStore");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Effect_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Effect_obj::ShadersStore,"ShadersStore");
};

#endif

Class Effect_obj::__mClass;

void Effect_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.materials.Effect"), hx::TCanCast< Effect_obj> ,sStaticFields,sMemberFields,
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

void Effect_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/Effect.hx",27,0x03b528d7)
		{
			HX_STACK_LINE(27)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("blackAndWhitePixelShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Samplers\nvarying vec2 vUV;\nuniform sampler2D textureSampler;\n\nvoid main(void) \n{\n\tfloat luminance = dot(texture2D(textureSampler, vUV).rgb, vec3(0.3, 0.59, 0.11));\n\tgl_FragColor = vec4(luminance, luminance, luminance, 1.0);\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("blurPixelShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Samplers\nvarying vec2 vUV;\nuniform sampler2D textureSampler;\n\n// Parameters\nuniform vec2 screenSize;\nuniform vec2 direction;\nuniform float blurWidth;\n\nvoid main(void)\n{\n\tfloat weights[7];\n\tweights[0] = 0.05;\n\tweights[1] = 0.1;\n\tweights[2] = 0.2;\n\tweights[3] = 0.3;\n\tweights[4] = 0.2;\n\tweights[5] = 0.1;\n\tweights[6] = 0.05;\n\n\tvec2 texelSize = vec2(1.0 / screenSize.x, 1.0 / screenSize.y);\n\tvec2 texelStep = texelSize * direction * blurWidth;\n\tvec2 start = vUV - 3.0 * texelStep;\n\n\tvec4 baseColor = vec4(0., 0., 0., 0.);\n\tvec2 texelOffset = vec2(0., 0.);\n\n\tfor (int i = 0; i < 7; i++)\n\t{\n\t\tbaseColor += texture2D(textureSampler, start + texelOffset) * weights[i];\n\t\ttexelOffset += texelStep;\n\t}\n\n\tgl_FragColor = baseColor;\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("convolutionPixelShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Samplers\nvarying vec2 vUV;\nuniform sampler2D textureSampler;\n\nuniform mat4 kernelMatrix;\n\nvoid main(void) \n{\n\tvec3 baseColor = texture2D(textureSampler, vUV).rgb;\n\tvec3 updatedColor = (kernelMatrix * vec4(baseColor, 1.0)).rgb;\n\n\tgl_FragColor = vec4(updatedColor, 1.0);\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("defaultPixelShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n#define MAP_EXPLICIT\t0.\n#define MAP_SPHERICAL\t1.\n#define MAP_PLANAR\t\t2.\n#define MAP_CUBIC\t\t3.\n#define MAP_PROJECTION\t4.\n#define MAP_SKYBOX\t\t5.\n\n// Constants\nuniform vec3 vEyePosition;\nuniform vec3 vAmbientColor;\nuniform vec4 vDiffuseColor;\nuniform vec4 vSpecularColor;\nuniform vec3 vEmissiveColor;\n\n// Input\nvarying vec3 vPositionW;\nvarying vec3 vNormalW;\n\n#ifdef VERTEXCOLOR\nvarying vec3 vColor;\n#endif\n\n// Lights\n#ifdef LIGHT0\nuniform vec4 vLightData0;\nuniform vec3 vLightDiffuse0;\nuniform vec3 vLightSpecular0;\n#ifdef SHADOW0\nvarying vec4 vPositionFromLight0;\nuniform sampler2D shadowSampler0;\n#endif\n#ifdef SPOTLIGHT0\nuniform vec4 vLightDirection0;\n#endif\n#ifdef HEMILIGHT0\nuniform vec3 vLightGround0;\n#endif\n#endif\n\n#ifdef LIGHT1\nuniform vec4 vLightData1;\nuniform vec3 vLightDiffuse1;\nuniform vec3 vLightSpecular1;\n#ifdef SHADOW1\nvarying vec4 vPositionFromLight1;\nuniform sampler2D shadowSampler1;\n#endif\n#ifdef SPOTLIGHT1\nuniform vec4 vLightDirection1;\n#endif\n#ifdef HEMILIGHT1\nuniform vec3 vLightGround1;\n#endif\n#endif\n\n#ifdef LIGHT2\nuniform vec4 vLightData2;\nuniform vec3 vLightDiffuse2;\nuniform vec3 vLightSpecular2;\n#ifdef SHADOW2\nvarying vec4 vPositionFromLight2;\nuniform sampler2D shadowSampler2;\n#endif\n#ifdef SPOTLIGHT2\nuniform vec4 vLightDirection2;\n#endif\n#ifdef HEMILIGHT2\nuniform vec3 vLightGround2;\n#endif\n#endif\n\n#ifdef LIGHT3\nuniform vec4 vLightData3;\nuniform vec3 vLightDiffuse3;\nuniform vec3 vLightSpecular3;\n#ifdef SHADOW3\nvarying vec4 vPositionFromLight3;\nuniform sampler2D shadowSampler3;\n#endif\n#ifdef SPOTLIGHT3\nuniform vec4 vLightDirection3;\n#endif\n#ifdef HEMILIGHT3\nuniform vec3 vLightGround3;\n#endif\n#endif\n\n// Samplers\n#ifdef DIFFUSE\nvarying vec2 vDiffuseUV;\nuniform sampler2D diffuseSampler;\nuniform vec2 vDiffuseInfos;\n#endif\n\n#ifdef AMBIENT\nvarying vec2 vAmbientUV;\nuniform sampler2D ambientSampler;\nuniform vec2 vAmbientInfos;\n#endif\n\n#ifdef OPACITY\t\nvarying vec2 vOpacityUV;\nuniform sampler2D opacitySampler;\nuniform vec2 vOpacityInfos;\n#endif\n\n#ifdef EMISSIVE\nvarying vec2 vEmissiveUV;\nuniform vec2 vEmissiveInfos;\nuniform sampler2D emissiveSampler;\n#endif\n\n#ifdef SPECULAR\nvarying vec2 vSpecularUV;\nuniform vec2 vSpecularInfos;\nuniform sampler2D specularSampler;\n#endif\n\n// Reflection\n#ifdef REFLECTION\nvarying vec3 vPositionUVW;\nuniform samplerCube reflectionCubeSampler;\nuniform sampler2D reflection2DSampler;\nuniform vec3 vReflectionInfos;\nuniform mat4 reflectionMatrix;\nuniform mat4 view;\n\nvec3 computeReflectionCoords(float mode, vec4 worldPos, vec3 worldNormal)\n{\n\tif (mode == MAP_SPHERICAL)\n\t{\n\t\tvec3 coords = vec3(view * vec4(worldNormal, 0.0));\n\n\t\treturn vec3(reflectionMatrix * vec4(coords, 1.0));\n\t}\n\telse if (mode == MAP_PLANAR)\n\t{\n\t\tvec3 viewDir = worldPos.xyz - vEyePosition;\n\t\tvec3 coords = normalize(reflect(viewDir, worldNormal));\n\n\t\treturn vec3(reflectionMatrix * vec4(coords, 1));\n\t}\n\telse if (mode == MAP_CUBIC)\n\t{\n\t\tvec3 viewDir = worldPos.xyz - vEyePosition;\n\t\tvec3 coords = reflect(viewDir, worldNormal);\n\n\t\treturn vec3(reflectionMatrix * vec4(coords, 0));\n\t}\n\telse if (mode == MAP_PROJECTION)\n\t{\n\t\treturn vec3(reflectionMatrix * (view * worldPos));\n\t}\n\telse if (mode == MAP_SKYBOX)\n\t{\n\t\treturn vPositionUVW;\n\t}\n\n\treturn vec3(0, 0, 0);\n}\n#endif\n\n// Shadows\n#ifdef SHADOWS\n\nfloat unpack(vec4 color)\n{\n\tconst vec4 bitShift = vec4(1. / (255. * 255. * 255.), 1. / (255. * 255.), 1. / 255., 1.);\n\treturn dot(color, bitShift);\n}\n\nfloat unpackHalf(vec2 color)\n{\n\treturn color.x + (color.y / 255.0);\n}\n\nfloat computeShadow(vec4 vPositionFromLight, sampler2D shadowSampler)\n{\n\tvec3 depth = vPositionFromLight.xyz / vPositionFromLight.w;\n\tvec2 uv = 0.5 * depth.xy + vec2(0.5, 0.5);\n\n\tif (uv.x < 0. || uv.x > 1.0 || uv.y < 0. || uv.y > 1.0)\n\t{\n\t\treturn 1.0;\n\t}\n\n\tfloat shadow = unpack(texture2D(shadowSampler, uv));\n\n\tif (depth.z > shadow)\n\t{\n\t\treturn 0.;\n\t}\n\treturn 1.;\n}\n\n// Thanks to http://devmaster.net/\nfloat ChebychevInequality(vec2 moments, float t)\n{\n\tif (t <= moments.x)\n\t{\n\t\treturn 1.0;\n\t}\n\n\tfloat variance = moments.y - (moments.x * moments.x);\n\tvariance = max(variance, 0.);\n\n\tfloat d = t - moments.x;\n\treturn variance / (variance + d * d);\n}\n\nfloat computeShadowWithVSM(vec4 vPositionFromLight, sampler2D shadowSampler)\n{\n\tvec3 depth = vPositionFromLight.xyz / vPositionFromLight.w;\n\tvec2 uv = 0.5 * depth.xy + vec2(0.5, 0.5);\n\n\tif (uv.x < 0. || uv.x > 1.0 || uv.y < 0. || uv.y > 1.0)\n\t{\n\t\treturn 1.0;\n\t}\n\n\tvec4 texel = texture2D(shadowSampler, uv);\n\n\tvec2 moments = vec2(unpackHalf(texel.xy), unpackHalf(texel.zw));\n\treturn clamp(1.3 - ChebychevInequality(moments, depth.z), 0., 1.0);\n}\n#endif\n\n// Bump\n#ifdef BUMP\n#extension GL_OES_standard_derivatives : enable\nvarying vec2 vBumpUV;\nuniform vec2 vBumpInfos;\nuniform sampler2D bumpSampler;\n\n// Thanks to http://www.thetenthplanet.de/archives/1180\nmat3 cotangent_frame(vec3 normal, vec3 p, vec2 uv)\n{\n\t// get edge vectors of the pixel triangle\n\tvec3 dp1 = dFdx(p);\n\tvec3 dp2 = dFdy(p);\n\tvec2 duv1 = dFdx(uv);\n\tvec2 duv2 = dFdy(uv);\n\n\t// solve the linear system\n\tvec3 dp2perp = cross(dp2, normal);\n\tvec3 dp1perp = cross(normal, dp1);\n\tvec3 tangent = dp2perp * duv1.x + dp1perp * duv2.x;\n\tvec3 binormal = dp2perp * duv1.y + dp1perp * duv2.y;\n\n\t// construct a scale-invariant frame \n\tfloat invmax = inversesqrt(max(dot(tangent, tangent), dot(binormal, binormal)));\n\treturn mat3(tangent * invmax, binormal * invmax, normal);\n}\n\nvec3 perturbNormal(vec3 viewDir)\n{\n\tvec3 map = texture2D(bumpSampler, vBumpUV).xyz * vBumpInfos.y;\n\tmap = map * 255. / 127. - 128. / 127.;\n\tmat3 TBN = cotangent_frame(vNormalW, -viewDir, vBumpUV);\n\treturn normalize(TBN * map);\n}\n#endif\n\n#ifdef CLIPPLANE\nvarying float fClipDistance;\n#endif\n\n// Fog\n#ifdef FOG\n\n#define FOGMODE_NONE    0.\n#define FOGMODE_EXP     1.\n#define FOGMODE_EXP2    2.\n#define FOGMODE_LINEAR  3.\n#define E 2.71828\n\nuniform vec4 vFogInfos;\nuniform vec3 vFogColor;\nvarying float fFogDistance;\n\nfloat CalcFogFactor()\n{\n\tfloat fogCoeff = 1.0;\n\tfloat fogStart = vFogInfos.y;\n\tfloat fogEnd = vFogInfos.z;\n\tfloat fogDensity = vFogInfos.w;\n\n\tif (FOGMODE_LINEAR == vFogInfos.x)\n\t{\n\t\tfogCoeff = (fogEnd - fFogDistance) / (fogEnd - fogStart);\n\t}\n\telse if (FOGMODE_EXP == vFogInfos.x)\n\t{\n\t\tfogCoeff = 1.0 / pow(E, fFogDistance * fogDensity);\n\t}\n\telse if (FOGMODE_EXP2 == vFogInfos.x)\n\t{\n\t\tfogCoeff = 1.0 / pow(E, fFogDistance * fFogDistance * fogDensity * fogDensity);\n\t}\n\n\treturn clamp(fogCoeff, 0.0, 1.0);\n}\n#endif\n\n// Light Computing\nstruct lightingInfo\n{\n\tvec3 diffuse;\n\tvec3 specular;\n};\n\nlightingInfo computeLighting(vec3 viewDirectionW, vec3 vNormal, vec4 lightData, vec3 diffuseColor, vec3 specularColor) {\n\tlightingInfo result;\n\n\tvec3 lightVectorW;\n\tif (lightData.w == 0.)\n\t{\n\t\tlightVectorW = normalize(lightData.xyz - vPositionW);\n\t}\n\telse\n\t{\n\t\tlightVectorW = normalize(-lightData.xyz);\n\t}\n\n\t// diffuse\n\tfloat ndl = max(0., dot(vNormal, lightVectorW));\n\n\t// Specular\n\tvec3 angleW = normalize(viewDirectionW + lightVectorW);\n\tfloat specComp = max(0., dot(vNormal, angleW));\n\tspecComp = pow(specComp, vSpecularColor.a);\n\n\tresult.diffuse = ndl * diffuseColor;\n\tresult.specular = specComp * specularColor;\n\n\treturn result;\n}\n\nlightingInfo computeSpotLighting(vec3 viewDirectionW, vec3 vNormal, vec4 lightData, vec4 lightDirection, vec3 diffuseColor, vec3 specularColor) {\n\tlightingInfo result;\n\n\tvec3 lightVectorW = normalize(lightData.xyz - vPositionW);\n\n\t// diffuse\n\tfloat cosAngle = max(0., dot(-lightDirection.xyz, lightVectorW));\n\tfloat spotAtten = 0.0;\n\n\tif (cosAngle >= lightDirection.w)\n\t{\n\t\tcosAngle = max(0., pow(cosAngle, lightData.w));\n\t\tspotAtten = max(0., (cosAngle - lightDirection.w) / (1. - cosAngle));\n\n\t\t// Diffuse\n\t\tfloat ndl = max(0., dot(vNormal, -lightDirection.xyz));\n\n\t\t// Specular\n\t\tvec3 angleW = normalize(viewDirectionW - lightDirection.xyz);\n\t\tfloat specComp = max(0., dot(vNormal, angleW));\n\t\tspecComp = pow(specComp, vSpecularColor.a);\n\n\t\tresult.diffuse = ndl * spotAtten * diffuseColor;\n\t\tresult.specular = specComp * specularColor * spotAtten;\n\n\t\treturn result;\n\t}\n\n\tresult.diffuse = vec3(0.);\n\tresult.specular = vec3(0.);\n\n\treturn result;\n}\n\nlightingInfo computeHemisphericLighting(vec3 viewDirectionW, vec3 vNormal, vec4 lightData, vec3 diffuseColor, vec3 specularColor, vec3 groundColor) {\n\tlightingInfo result;\n\n\t// Diffuse\n\tfloat ndl = dot(vNormal, lightData.xyz) * 0.5 + 0.5;\n\n\t// Specular\n\tvec3 angleW = normalize(viewDirectionW + lightData.xyz);\n\tfloat specComp = max(0., dot(vNormal, angleW));\n\tspecComp = pow(specComp, vSpecularColor.a);\n\n\tresult.diffuse = mix(groundColor, diffuseColor, ndl);\n\tresult.specular = specComp * specularColor;\n\n\treturn result;\n}\n\nvoid main(void) {\n\t// Clip plane\n#ifdef CLIPPLANE\n\tif (fClipDistance > 0.0)\n\t\tdiscard;\n#endif\n\n\tvec3 viewDirectionW = normalize(vEyePosition - vPositionW);\n\n\t// Base color\n\tvec4 baseColor = vec4(1., 1., 1., 1.);\n\tvec3 diffuseColor = vDiffuseColor.rgb;\n\n#ifdef VERTEXCOLOR\n\tdiffuseColor *= vColor;\n#endif\n\n#ifdef DIFFUSE\n\tbaseColor = texture2D(diffuseSampler, vDiffuseUV);\n\n#ifdef ALPHATEST\n\tif (baseColor.a < 0.4)\n\t\tdiscard;\n#endif\n\n\tbaseColor.rgb *= vDiffuseInfos.y;\n#endif\n\n\t// Bump\n\tvec3 normalW = vNormalW;\n\n#ifdef BUMP\n\tnormalW = perturbNormal(viewDirectionW);\n#endif\n\n\t// Ambient color\n\tvec3 baseAmbientColor = vec3(1., 1., 1.);\n\n#ifdef AMBIENT\n\tbaseAmbientColor = texture2D(ambientSampler, vAmbientUV).rgb * vAmbientInfos.y;\n#endif\n\n\t// Lighting\n\tvec3 diffuseBase = vec3(0., 0., 0.);\n\tvec3 specularBase = vec3(0., 0., 0.);\n\tfloat shadow = 1.;\n\n#ifdef LIGHT0\n#ifdef SPOTLIGHT0\n\tlightingInfo info = computeSpotLighting(viewDirectionW, normalW, vLightData0, vLightDirection0, vLightDiffuse0, vLightSpecular0);\n#endif\n#ifdef HEMILIGHT0\n\tlightingInfo info = computeHemisphericLighting(viewDirectionW, normalW, vLightData0, vLightDiffuse0, vLightSpecular0, vLightGround0);\n#endif\n#ifdef POINTDIRLIGHT0\n\tlightingInfo info = computeLighting(viewDirectionW, normalW, vLightData0, vLightDiffuse0, vLightSpecular0);\n#endif\n#ifdef SHADOW0\n#ifdef SHADOWVSM0\n\tshadow = computeShadowWithVSM(vPositionFromLight0, shadowSampler0);\n#else\n\tshadow = computeShadow(vPositionFromLight0, shadowSampler0);\n#endif\n#else\n\tshadow = 1.;\n#endif\n\tdiffuseBase += info.diffuse * shadow;\n\tspecularBase += info.specular * shadow;\n#endif\n\n#ifdef LIGHT1\n#ifdef SPOTLIGHT1\n\tinfo = computeSpotLighting(viewDirectionW, normalW, vLightData1, vLightDirection1, vLightDiffuse1, vLightSpecular1);\n#endif\n#ifdef HEMILIGHT1\n\tinfo = computeHemisphericLighting(viewDirectionW, normalW, vLightData1, vLightDiffuse1, vLightSpecular1, vLightGround1);\n#endif\n#ifdef POINTDIRLIGHT1\n\tinfo = computeLighting(viewDirectionW, normalW, vLightData1, vLightDiffuse1, vLightSpecular1);\n#endif\n#ifdef SHADOW1\n#ifdef SHADOWVSM1\n\tshadow = computeShadowWithVSM(vPositionFromLight1, shadowSampler1);\n#else\n\tshadow = computeShadow(vPositionFromLight1, shadowSampler1);\n#endif\n#else\n\tshadow = 1.;\n#endif\n\tdiffuseBase += info.diffuse * shadow;\n\tspecularBase += info.specular * shadow;\n#endif\n\n#ifdef LIGHT2\n#ifdef SPOTLIGHT2\n\tinfo = computeSpotLighting(viewDirectionW, normalW, vLightData2, vLightDirection2, vLightDiffuse2, vLightSpecular2);\n#endif\n#ifdef HEMILIGHT2\n\tinfo = computeHemisphericLighting(viewDirectionW, normalW, vLightData2, vLightDiffuse2, vLightSpecular2, vLightGround2);\n#endif\n#ifdef POINTDIRLIGHT2\n\tinfo = computeLighting(viewDirectionW, normalW, vLightData2, vLightDiffuse2, vLightSpecular2);\n#endif\n#ifdef SHADOW2\n#ifdef SHADOWVSM2\n\tshadow = computeShadowWithVSM(vPositionFromLight2, shadowSampler2);\n#else\n\tshadow = computeShadow(vPositionFromLight2, shadowSampler2);\n#endif\t\n#else\n\tshadow = 1.;\n#endif\n\tdiffuseBase += info.diffuse * shadow;\n\tspecularBase += info.specular * shadow;\n#endif\n\n#ifdef LIGHT3\n#ifdef SPOTLIGHT3\n\tinfo = computeSpotLighting(viewDirectionW, normalW, vLightData3, vLightDirection3, vLightDiffuse3, vLightSpecular3);\n#endif\n#ifdef HEMILIGHT3\n\tinfo = computeHemisphericLighting(viewDirectionW, normalW, vLightData3, vLightDiffuse3, vLightSpecular3, vLightGround3);\n#endif\n#ifdef POINTDIRLIGHT3\n\tinfo = computeLighting(viewDirectionW, normalW, vLightData3, vLightDiffuse3, vLightSpecular3);\n#endif\n#ifdef SHADOW3\n#ifdef SHADOWVSM3\n\tshadow = computeShadowWithVSM(vPositionFromLight3, shadowSampler3);\n#else\n\tshadow = computeShadow(vPositionFromLight3, shadowSampler3);\n#endif\t\n#else\n\tshadow = 1.;\n#endif\n\tdiffuseBase += info.diffuse * shadow;\n\tspecularBase += info.specular * shadow;\n#endif\n\n\t// Reflection\n\tvec3 reflectionColor = vec3(0., 0., 0.);\n\n#ifdef REFLECTION\n\tvec3 vReflectionUVW = computeReflectionCoords(vReflectionInfos.x, vec4(vPositionW, 1.0), normalW);\n\n\tif (vReflectionInfos.z != 0.0)\n\t{\n\t\treflectionColor = textureCube(reflectionCubeSampler, vReflectionUVW).rgb * vReflectionInfos.y;\n\t}\n\telse\n\t{\n\t\tvec2 coords = vReflectionUVW.xy;\n\n\t\tif (vReflectionInfos.x == MAP_PROJECTION)\n\t\t{\n\t\t\tcoords /= vReflectionUVW.z;\n\t\t}\n\n\t\tcoords.y = 1.0 - coords.y;\n\n\t\treflectionColor = texture2D(reflection2DSampler, coords).rgb * vReflectionInfos.y;\n\t}\n#endif\n\n\t// Alpha\n\tfloat alpha = vDiffuseColor.a;\n\n#ifdef OPACITY\n\tvec4 opacityMap = texture2D(opacitySampler, vOpacityUV);\n\topacityMap.rgb = opacityMap.rgb * vec3(0.3, 0.59, 0.11) * opacityMap.a;\n\talpha *= (opacityMap.x + opacityMap.y + opacityMap.z)* vOpacityInfos.y;\n#endif\n\n\t// Emissive\n\tvec3 emissiveColor = vEmissiveColor;\n#ifdef EMISSIVE\n\temissiveColor += texture2D(emissiveSampler, vEmissiveUV).rgb * vEmissiveInfos.y;\n#endif\n\n\t// Specular map\n\tvec3 specularColor = vSpecularColor.rgb;\n#ifdef SPECULAR\n\tspecularColor = texture2D(specularSampler, vSpecularUV).rgb * vSpecularInfos.y;\n#endif\n\n\t// Composition\n\tvec3 finalDiffuse = clamp(diffuseBase * diffuseColor + emissiveColor + vAmbientColor, 0.0, 1.0) * baseColor.rgb;\n\tvec3 finalSpecular = specularBase * specularColor;\n\n\tvec4 color = vec4(finalDiffuse * baseAmbientColor + finalSpecular + reflectionColor, alpha);\n\n#ifdef FOG\n\tfloat fog = CalcFogFactor();\n\tcolor.rgb = fog * color.rgb + (1.0 - fog) * vFogColor;\n#endif\n\n\tgl_FragColor = color;\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("defaultVertexShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Attributes\nattribute vec3 position;\nattribute vec3 normal;\n#ifdef UV1\nattribute vec2 uv;\n#endif\n#ifdef UV2\nattribute vec2 uv2;\n#endif\n#ifdef VERTEXCOLOR\nattribute vec3 color;\n#endif\n#ifdef BONES\nattribute vec4 matricesIndices;\nattribute vec4 matricesWeights;\n#endif\n\n// Uniforms\nuniform mat4 world;\nuniform mat4 view;\nuniform mat4 viewProjection;\n\n#ifdef DIFFUSE\nvarying vec2 vDiffuseUV;\nuniform mat4 diffuseMatrix;\nuniform vec2 vDiffuseInfos;\n#endif\n\n#ifdef AMBIENT\nvarying vec2 vAmbientUV;\nuniform mat4 ambientMatrix;\nuniform vec2 vAmbientInfos;\n#endif\n\n#ifdef OPACITY\nvarying vec2 vOpacityUV;\nuniform mat4 opacityMatrix;\nuniform vec2 vOpacityInfos;\n#endif\n\n#ifdef EMISSIVE\nvarying vec2 vEmissiveUV;\nuniform vec2 vEmissiveInfos;\nuniform mat4 emissiveMatrix;\n#endif\n\n#ifdef SPECULAR\nvarying vec2 vSpecularUV;\nuniform vec2 vSpecularInfos;\nuniform mat4 specularMatrix;\n#endif\n\n#ifdef BUMP\nvarying vec2 vBumpUV;\nuniform vec2 vBumpInfos;\nuniform mat4 bumpMatrix;\n#endif\n\n#ifdef BONES\nuniform mat4 mBones[BonesPerMesh];\n#endif\n\n// Output\nvarying vec3 vPositionW;\nvarying vec3 vNormalW;\n\n#ifdef VERTEXCOLOR\nvarying vec3 vColor;\n#endif\n\n#ifdef CLIPPLANE\nuniform vec4 vClipPlane;\nvarying float fClipDistance;\n#endif\n\n#ifdef FOG\nvarying float fFogDistance;\n#endif\n\n#ifdef SHADOWS\n#ifdef LIGHT0\nuniform mat4 lightMatrix0;\nvarying vec4 vPositionFromLight0;\n#endif\n#ifdef LIGHT1\nuniform mat4 lightMatrix1;\nvarying vec4 vPositionFromLight1;\n#endif\n#ifdef LIGHT2\nuniform mat4 lightMatrix2;\nvarying vec4 vPositionFromLight2;\n#endif\n#ifdef LIGHT3\nuniform mat4 lightMatrix3;\nvarying vec4 vPositionFromLight3;\n#endif\n#endif\n\n#ifdef REFLECTION\nvarying vec3 vPositionUVW;\n#endif\n\nvoid main(void) {\n\tmat4 finalWorld;\n\n#ifdef REFLECTION\n\tvPositionUVW = position;\n#endif \n\n#ifdef BONES\n\tmat4 m0 = mBones[int(matricesIndices.x)] * matricesWeights.x;\n\tmat4 m1 = mBones[int(matricesIndices.y)] * matricesWeights.y;\n\tmat4 m2 = mBones[int(matricesIndices.z)] * matricesWeights.z;\n\n#ifdef BONES4\n\tmat4 m3 = mBones[int(matricesIndices.w)] * matricesWeights.w;\n\tfinalWorld = world * (m0 + m1 + m2 + m3);\n#else\n\tfinalWorld = world * (m0 + m1 + m2);\n#endif \n\n#else\n\tfinalWorld = world;\n#endif\n\tgl_Position = viewProjection * finalWorld * vec4(position, 1.0);\n\n\tvec4 worldPos = finalWorld * vec4(position, 1.0);\n\tvPositionW = vec3(worldPos);\n\tvNormalW = normalize(vec3(finalWorld * vec4(normal, 0.0)));\n\n\t// Texture coordinates\n#ifndef UV1\n\tvec2 uv = vec2(0., 0.);\n#endif\n#ifndef UV2\n\tvec2 uv2 = vec2(0., 0.);\n#endif\n\n#ifdef DIFFUSE\n\tif (vDiffuseInfos.x == 0.)\n\t{\n\t\tvDiffuseUV = vec2(diffuseMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvDiffuseUV = vec2(diffuseMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef AMBIENT\n\tif (vAmbientInfos.x == 0.)\n\t{\n\t\tvAmbientUV = vec2(ambientMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvAmbientUV = vec2(ambientMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef OPACITY\n\tif (vOpacityInfos.x == 0.)\n\t{\n\t\tvOpacityUV = vec2(opacityMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvOpacityUV = vec2(opacityMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef EMISSIVE\n\tif (vEmissiveInfos.x == 0.)\n\t{\n\t\tvEmissiveUV = vec2(emissiveMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvEmissiveUV = vec2(emissiveMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef SPECULAR\n\tif (vSpecularInfos.x == 0.)\n\t{\n\t\tvSpecularUV = vec2(specularMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvSpecularUV = vec2(specularMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef BUMP\n\tif (vBumpInfos.x == 0.)\n\t{\n\t\tvBumpUV = vec2(bumpMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvBumpUV = vec2(bumpMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n\t// Clip plane\n#ifdef CLIPPLANE\n\tfClipDistance = dot(worldPos, vClipPlane);\n#endif\n\n\t// Fog\n#ifdef FOG\n\tfFogDistance = (view * worldPos).z;\n#endif\n\n\t// Shadows\n#ifdef SHADOWS\n#ifdef LIGHT0\n\tvPositionFromLight0 = lightMatrix0 * vec4(position, 1.0);\n#endif\n#ifdef LIGHT1\n\tvPositionFromLight1 = lightMatrix1 * vec4(position, 1.0);\n#endif\n#ifdef LIGHT2\n\tvPositionFromLight2 = lightMatrix2 * vec4(position, 1.0);\n#endif\n#ifdef LIGHT3\n\tvPositionFromLight3 = lightMatrix3 * vec4(position, 1.0);\n#endif\n#endif\n\n\t// Vertex color\n#ifdef VERTEXCOLOR\n\tvColor = color;\n#endif\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("fxaaPixelShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n#define FXAA_REDUCE_MIN   (1.0/128.0)\n#define FXAA_REDUCE_MUL   (1.0/8.0)\n#define FXAA_SPAN_MAX     8.0\n\nvarying vec2 vUV;\nuniform sampler2D textureSampler;\nuniform vec2 texelSize;\n\nvoid main(){\n\tvec2 localTexelSize = texelSize;\n\tvec3 rgbNW = texture2D(textureSampler, (vUV + vec2(-1.0, -1.0) * localTexelSize)).xyz;\n\tvec3 rgbNE = texture2D(textureSampler, (vUV + vec2(1.0, -1.0) * localTexelSize)).xyz;\n\tvec3 rgbSW = texture2D(textureSampler, (vUV + vec2(-1.0, 1.0) * localTexelSize)).xyz;\n\tvec3 rgbSE = texture2D(textureSampler, (vUV + vec2(1.0, 1.0) * localTexelSize)).xyz;\n\tvec3 rgbM = texture2D(textureSampler, vUV ).xyz;\n\tvec3 luma = vec3(0.299, 0.587, 0.114);\n\tfloat lumaNW = dot(rgbNW, luma);\n\tfloat lumaNE = dot(rgbNE, luma);\n\tfloat lumaSW = dot(rgbSW, luma);\n\tfloat lumaSE = dot(rgbSE, luma);\n\tfloat lumaM = dot(rgbM, luma);\n\tfloat lumaMin = min(lumaM, min(min(lumaNW, lumaNE), min(lumaSW, lumaSE)));\n\tfloat lumaMax = max(lumaM, max(max(lumaNW, lumaNE), max(lumaSW, lumaSE)));\n\n\tvec2 dir = vec2(-((lumaNW + lumaNE) - (lumaSW + lumaSE)), ((lumaNW + lumaSW) - (lumaNE + lumaSE)));\n\n\tfloat dirReduce = max(\n\t\t(lumaNW + lumaNE + lumaSW + lumaSE) * (0.25 * FXAA_REDUCE_MUL),\n\t\tFXAA_REDUCE_MIN);\n\n\tfloat rcpDirMin = 1.0 / (min(abs(dir.x), abs(dir.y)) + dirReduce);\n\tdir = min(vec2(FXAA_SPAN_MAX, FXAA_SPAN_MAX),\n\t\tmax(vec2(-FXAA_SPAN_MAX, -FXAA_SPAN_MAX),\n\t\tdir * rcpDirMin)) * localTexelSize;\n\n\tvec3 rgbA = 0.5 * (\n\t\ttexture2D(textureSampler, vUV + dir * (1.0 / 3.0 - 0.5)).xyz +\n\t\ttexture2D(textureSampler, vUV + dir * (2.0 / 3.0 - 0.5)).xyz);\n\n\tvec3 rgbB = rgbA * 0.5 + 0.25 * (\n\t\ttexture2D(textureSampler, vUV + dir *  -0.5).xyz +\n\t\ttexture2D(textureSampler, vUV + dir * 0.5).xyz);\n\tfloat lumaB = dot(rgbB, luma);\n\tif ((lumaB < lumaMin) || (lumaB > lumaMax)) {\n\t\tgl_FragColor = vec4(rgbA, 1.0);\n\t}\n\telse {\n\t\tgl_FragColor = vec4(rgbB, 1.0);\n\t}\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("iedefaultPixelShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n#define MAP_PROJECTION\t4.\n\n// Constants\nuniform vec3 vEyePosition;\nuniform vec3 vAmbientColor;\nuniform vec4 vDiffuseColor;\nuniform vec4 vSpecularColor;\nuniform vec3 vEmissiveColor;\n\n// Input\nvarying vec3 vPositionW;\nvarying vec3 vNormalW;\n\n#ifdef VERTEXCOLOR\nvarying vec3 vColor;\n#endif\n\n// Lights\n#ifdef LIGHT0\nuniform vec4 vLightData0;\nuniform vec3 vLightDiffuse0;\nuniform vec3 vLightSpecular0;\n#ifdef SHADOW0\nvarying vec4 vPositionFromLight0;\nuniform sampler2D shadowSampler0;\n#endif\n#ifdef SPOTLIGHT0\nuniform vec4 vLightDirection0;\n#endif\n#ifdef HEMILIGHT0\nuniform vec3 vLightGround0;\n#endif\n#endif\n\n#ifdef LIGHT1\nuniform vec4 vLightData1;\nuniform vec3 vLightDiffuse1;\nuniform vec3 vLightSpecular1;\n#ifdef SHADOW1\nvarying vec4 vPositionFromLight1;\nuniform sampler2D shadowSampler1;\n#endif\n#ifdef SPOTLIGHT1\nuniform vec4 vLightDirection1;\n#endif\n#ifdef HEMILIGHT1\nuniform vec3 vLightGround1;\n#endif\n#endif\n\n#ifdef LIGHT2\nuniform vec4 vLightData2;\nuniform vec3 vLightDiffuse2;\nuniform vec3 vLightSpecular2;\n#ifdef SHADOW2\nvarying vec4 vPositionFromLight2;\nuniform sampler2D shadowSampler2;\n#endif\n#ifdef SPOTLIGHT2\nuniform vec4 vLightDirection2;\n#endif\n#ifdef HEMILIGHT2\nuniform vec3 vLightGround2;\n#endif\n#endif\n\n#ifdef LIGHT3\nuniform vec4 vLightData3;\nuniform vec3 vLightDiffuse3;\nuniform vec3 vLightSpecular3;\n#ifdef SHADOW3\nvarying vec4 vPositionFromLight3;\nuniform sampler2D shadowSampler3;\n#endif\n#ifdef SPOTLIGHT3\nuniform vec4 vLightDirection3;\n#endif\n#ifdef HEMILIGHT3\nuniform vec3 vLightGround3;\n#endif\n#endif\n\n// Samplers\n#ifdef DIFFUSE\nvarying vec2 vDiffuseUV;\nuniform sampler2D diffuseSampler;\nuniform vec2 vDiffuseInfos;\n#endif\n\n#ifdef AMBIENT\nvarying vec2 vAmbientUV;\nuniform sampler2D ambientSampler;\nuniform vec2 vAmbientInfos;\n#endif\n\n#ifdef OPACITY\t\nvarying vec2 vOpacityUV;\nuniform sampler2D opacitySampler;\nuniform vec2 vOpacityInfos;\n#endif\n\n#ifdef REFLECTION\nvarying vec3 vReflectionUVW;\nuniform samplerCube reflectionCubeSampler;\nuniform sampler2D reflection2DSampler;\nuniform vec3 vReflectionInfos;\n#endif\n\n#ifdef EMISSIVE\nvarying vec2 vEmissiveUV;\nuniform vec2 vEmissiveInfos;\nuniform sampler2D emissiveSampler;\n#endif\n\n#ifdef SPECULAR\nvarying vec2 vSpecularUV;\nuniform vec2 vSpecularInfos;\nuniform sampler2D specularSampler;\n#endif\n\n// Shadows\n#ifdef SHADOWS\n\nfloat unpack(vec4 color)\n{\n\tconst vec4 bitShift = vec4(1. / (255. * 255. * 255.), 1. / (255. * 255.), 1. / 255., 1.);\n\treturn dot(color, bitShift);\n}\n\nfloat unpackHalf(vec2 color)\n{\n\treturn color.x + (color.y / 255.0);\n}\n\nfloat computeShadow(vec4 vPositionFromLight, sampler2D shadowSampler)\n{\n\tvec3 depth = vPositionFromLight.xyz / vPositionFromLight.w;\n\tvec2 uv = 0.5 * depth.xy + vec2(0.5, 0.5);\n\n\tif (uv.x < 0. || uv.x > 1.0 || uv.y < 0. || uv.y > 1.0)\n\t{\n\t\treturn 1.0;\n\t}\n\n\tfloat shadow = unpack(texture2D(shadowSampler, uv));\n\n\tif (depth.z > shadow)\n\t{\n\t\treturn 0.;\n\t}\n\treturn 1.;\n}\n\n// Thanks to http://devmaster.net/\nfloat ChebychevInequality(vec2 moments, float t)\n{\n\tif (t <= moments.x)\n\t{\n\t\treturn 1.0;\n\t}\n\n\tfloat variance = moments.y - (moments.x * moments.x);\n\tvariance = max(variance, 0.);\n\n\tfloat d = t - moments.x;\n\treturn variance / (variance + d * d);\n}\n\nfloat computeShadowWithVSM(vec4 vPositionFromLight, sampler2D shadowSampler)\n{\n\tvec3 depth = vPositionFromLight.xyz / vPositionFromLight.w;\n\tvec2 uv = 0.5 * depth.xy + vec2(0.5, 0.5);\n\n\tif (uv.x < 0. || uv.x > 1.0 || uv.y < 0. || uv.y > 1.0)\n\t{\n\t\treturn 1.0;\n\t}\n\n\tvec4 texel = texture2D(shadowSampler, uv);\n\n\tvec2 moments = vec2(unpackHalf(texel.xy), unpackHalf(texel.zw));\n\treturn clamp(1.3 - ChebychevInequality(moments, depth.z), 0., 1.0);\n}\n#endif\n\n#ifdef CLIPPLANE\nvarying float fClipDistance;\n#endif\n\n// Fog\n#ifdef FOG\n\n#define FOGMODE_NONE    0.\n#define FOGMODE_EXP     1.\n#define FOGMODE_EXP2    2.\n#define FOGMODE_LINEAR  3.\n#define E 2.71828\n\nuniform vec4 vFogInfos;\nuniform vec3 vFogColor;\nvarying float fFogDistance;\n\nfloat CalcFogFactor()\n{\n\tfloat fogCoeff = 1.0;\n\tfloat fogStart = vFogInfos.y;\n\tfloat fogEnd = vFogInfos.z;\n\tfloat fogDensity = vFogInfos.w;\n\n\tif (FOGMODE_LINEAR == vFogInfos.x)\n\t{\n\t\tfogCoeff = (fogEnd - fFogDistance) / (fogEnd - fogStart);\n\t}\n\telse if (FOGMODE_EXP == vFogInfos.x)\n\t{\n\t\tfogCoeff = 1.0 / pow(E, fFogDistance * fogDensity);\n\t}\n\telse if (FOGMODE_EXP2 == vFogInfos.x)\n\t{\n\t\tfogCoeff = 1.0 / pow(E, fFogDistance * fFogDistance * fogDensity * fogDensity);\n\t}\n\n\treturn clamp(fogCoeff, 0.0, 1.0);\n}\n#endif\n\n// Light Computing\nmat3 computeLighting(vec3 viewDirectionW, vec3 vNormal, vec4 lightData, vec3 diffuseColor, vec3 specularColor) {\n\tmat3 result;\n\n\tvec3 lightVectorW;\n\tif (lightData.w == 0.)\n\t{\n\t\tlightVectorW = normalize(lightData.xyz - vPositionW);\n\t}\n\telse\n\t{\n\t\tlightVectorW = normalize(-lightData.xyz);\n\t}\n\n\t// diffuse\n\tfloat ndl = max(0., dot(vNormal, lightVectorW));\n\n\t// Specular\n\tvec3 angleW = normalize(viewDirectionW + lightVectorW);\n\tfloat specComp = max(0., dot(vNormal, angleW));\n\tspecComp = max(0., pow(specComp, max(1.0, vSpecularColor.a)));\n\n\tresult[0] = ndl * diffuseColor;\n\tresult[1] = specComp * specularColor;\n\tresult[2] = vec3(0.);\n\n\treturn result;\n}\n\nmat3 computeSpotLighting(vec3 viewDirectionW, vec3 vNormal, vec4 lightData, vec4 lightDirection, vec3 diffuseColor, vec3 specularColor) {\n\tmat3 result;\n\n\tvec3 lightVectorW = normalize(lightData.xyz - vPositionW);\n\n\t// diffuse\n\tfloat cosAngle = max(0., dot(-lightDirection.xyz, lightVectorW));\n\tfloat spotAtten = 0.0;\n\n\tif (cosAngle >= lightDirection.w)\n\t{\n\t\tcosAngle = max(0., pow(cosAngle, lightData.w));\n\t\tspotAtten = max(0., (cosAngle - lightDirection.w) / (1. - cosAngle));\n\n\t\t// Diffuse\n\t\tfloat ndl = max(0., dot(vNormal, -lightDirection.xyz));\n\n\t\t// Specular\n\t\tvec3 angleW = normalize(viewDirectionW - lightDirection.xyz);\n\t\tfloat specComp = max(0., dot(vNormal, angleW));\n\t\tspecComp = pow(specComp, vSpecularColor.a);\n\n\t\tresult[0] = ndl * spotAtten * diffuseColor;\n\t\tresult[1] = specComp * specularColor * spotAtten;\n\t\tresult[2] = vec3(0.);\n\n\t\treturn result;\n\t}\n\n\tresult[0] = vec3(0.);\n\tresult[1] = vec3(0.);\n\tresult[2] = vec3(0.);\n\n\treturn result;\n}\n\nmat3 computeHemisphericLighting(vec3 viewDirectionW, vec3 vNormal, vec4 lightData, vec3 diffuseColor, vec3 specularColor, vec3 groundColor) {\n\tmat3 result;\n\n\t// Diffuse\n\tfloat ndl = dot(vNormal, lightData.xyz) * 0.5 + 0.5;\n\n\t// Specular\n\tvec3 angleW = normalize(viewDirectionW + lightData.xyz);\n\tfloat specComp = max(0., dot(vNormal, angleW));\n\tspecComp = pow(specComp, vSpecularColor.a);\n\n\tresult[0] = mix(groundColor, diffuseColor, ndl);\n\tresult[1] = specComp * specularColor;\n\tresult[2] = vec3(0.);\n\n\treturn result;\n}\n\nvoid main(void) {\n\t// Clip plane\n#ifdef CLIPPLANE\n\tif (fClipDistance > 0.0)\n\t\tdiscard;\n#endif\n\n\tvec3 viewDirectionW = normalize(vEyePosition - vPositionW);\n\n\t// Base color\n\tvec4 baseColor = vec4(1., 1., 1., 1.);\n\tvec3 diffuseColor = vDiffuseColor.rgb;\n\n#ifdef VERTEXCOLOR\n\tdiffuseColor *= vColor;\n#endif\n\n#ifdef DIFFUSE\n\tbaseColor = texture2D(diffuseSampler, vDiffuseUV);\n\n#ifdef ALPHATEST\n\tif (baseColor.a < 0.4)\n\t\tdiscard;\n#endif\n\n\tbaseColor.rgb *= vDiffuseInfos.y;\n#endif\n\n\t// Bump\n\tvec3 normalW = vNormalW;\n\n\t// Ambient color\n\tvec3 baseAmbientColor = vec3(1., 1., 1.);\n\n#ifdef AMBIENT\n\tbaseAmbientColor = texture2D(ambientSampler, vAmbientUV).rgb * vAmbientInfos.y;\n#endif\n\n\t// Lighting\n\tvec3 diffuseBase = vec3(0., 0., 0.);\n\tvec3 specularBase = vec3(0., 0., 0.);\n\tfloat shadow = 1.;\n\n#ifdef LIGHT0\n#ifdef SPOTLIGHT0\n\tmat3 info = computeSpotLighting(viewDirectionW, normalW, vLightData0, vLightDirection0, vLightDiffuse0, vLightSpecular0);\n#endif\n#ifdef HEMILIGHT0\n\tmat3 info = computeHemisphericLighting(viewDirectionW, normalW, vLightData0, vLightDiffuse0, vLightSpecular0, vLightGround0);\n#endif\n#ifdef POINTDIRLIGHT0\n\tmat3 info = computeLighting(viewDirectionW, normalW, vLightData0, vLightDiffuse0, vLightSpecular0);\n#endif\n#ifdef SHADOW0\n#ifdef SHADOWVSM0\n\tshadow = computeShadowWithVSM(vPositionFromLight0, shadowSampler0);\n#else\n\tshadow = computeShadow(vPositionFromLight0, shadowSampler0);\n#endif\n#else\n\tshadow = 1.;\n#endif\n\tdiffuseBase += info[0] * shadow;\n\tspecularBase += info[1] * shadow;\n#endif\n\n#ifdef LIGHT1\n#ifdef SPOTLIGHT1\n\tinfo = computeSpotLighting(viewDirectionW, normalW, vLightData1, vLightDirection1, vLightDiffuse1, vLightSpecular1);\n#endif\n#ifdef HEMILIGHT1\n\tinfo = computeHemisphericLighting(viewDirectionW, normalW, vLightData1, vLightDiffuse1, vLightSpecular1, vLightGround1);\n#endif\n#ifdef POINTDIRLIGHT1\n\tinfo = computeLighting(viewDirectionW, normalW, vLightData1, vLightDiffuse1, vLightSpecular1);\n#endif\n#ifdef SHADOW1\n#ifdef SHADOWVSM1\n\tshadow = computeShadowWithVSM(vPositionFromLight1, shadowSampler1);\n#else\n\tshadow = computeShadow(vPositionFromLight1, shadowSampler1);\n#endif\n#else\n\tshadow = 1.;\n#endif\n\tdiffuseBase += info[0] * shadow;\n\tspecularBase += info[1] * shadow;\n#endif\n\n#ifdef LIGHT2\n#ifdef SPOTLIGHT2\n\tinfo = computeSpotLighting(viewDirectionW, normalW, vLightData2, vLightDirection2, vLightDiffuse2, vLightSpecular2);\n#endif\n#ifdef HEMILIGHT2\n\tinfo = computeHemisphericLighting(viewDirectionW, normalW, vLightData2, vLightDiffuse2, vLightSpecular2, vLightGround2);\n#endif\n#ifdef POINTDIRLIGHT2\n\tinfo = computeLighting(viewDirectionW, normalW, vLightData2, vLightDiffuse2, vLightSpecular2);\n#endif\n#ifdef SHADOW2\n#ifdef SHADOWVSM2\n\tshadow = computeShadowWithVSM(vPositionFromLight2, shadowSampler2);\n#else\n\tshadow = computeShadow(vPositionFromLight2, shadowSampler2);\n#endif\t\n#else\n\tshadow = 1.;\n#endif\n\tdiffuseBase += info[0] * shadow;\n\tspecularBase += info[1] * shadow;\n#endif\n\n#ifdef LIGHT3\n#ifdef SPOTLIGHT3\n\tinfo = computeSpotLighting(viewDirectionW, normalW, vLightData3, vLightDirection3, vLightDiffuse3, vLightSpecular3);\n#endif\n#ifdef HEMILIGHT3\n\tinfo = computeHemisphericLighting(viewDirectionW, normalW, vLightData3, vLightDiffuse3, vLightSpecular3, vLightGround3);\n#endif\n#ifdef POINTDIRLIGHT3\n\tinfo = computeLighting(viewDirectionW, normalW, vLightData3, vLightDiffuse3, vLightSpecular3);\n#endif\n#ifdef SHADOW3\n#ifdef SHADOWVSM3\n\tshadow = computeShadowWithVSM(vPositionFromLight3, shadowSampler3);\n#else\n\tshadow = computeShadow(vPositionFromLight3, shadowSampler3);\n#endif\t\n#else\n\tshadow = 1.;\n#endif\n\tdiffuseBase += info[0] * shadow;\n\tspecularBase += info[1] * shadow;\n#endif\n\n\t// Reflection\n\tvec3 reflectionColor = vec3(0., 0., 0.);\n\n#ifdef REFLECTION\n\tif (vReflectionInfos.z != 0.0)\n\t{\n\t\treflectionColor = textureCube(reflectionCubeSampler, vReflectionUVW).rgb * vReflectionInfos.y;\n\t}\n\telse\n\t{\n\t\tvec2 coords = vReflectionUVW.xy;\n\n\t\tif (vReflectionInfos.x == MAP_PROJECTION)\n\t\t{\n\t\t\tcoords /= vReflectionUVW.z;\n\t\t}\n\n\t\tcoords.y = 1.0 - coords.y;\n\n\t\treflectionColor = texture2D(reflection2DSampler, coords).rgb * vReflectionInfos.y;\n\t}\n#endif\n\n\t// Alpha\n\tfloat alpha = vDiffuseColor.a;\n\n#ifdef OPACITY\n\tvec4 opacityMap = texture2D(opacitySampler, vOpacityUV);\n\topacityMap.rgb = opacityMap.rgb * vec3(0.3, 0.59, 0.11) * opacityMap.a;\n\talpha *= (opacityMap.x + opacityMap.y + opacityMap.z)* vOpacityInfos.y;\n#endif\n\n\t// Emissive\n\tvec3 emissiveColor = vEmissiveColor;\n#ifdef EMISSIVE\n\temissiveColor += texture2D(emissiveSampler, vEmissiveUV).rgb * vEmissiveInfos.y;\n#endif\n\n\t// Specular map\n\tvec3 specularColor = vSpecularColor.rgb;\n#ifdef SPECULAR\n\tspecularColor = texture2D(specularSampler, vSpecularUV).rgb * vSpecularInfos.y;\n#endif\n\n\t// Composition\n\tvec3 finalDiffuse = clamp(diffuseBase * diffuseColor + emissiveColor + vAmbientColor, 0.0, 1.0) * baseColor.rgb;\n\tvec3 finalSpecular = specularBase * specularColor;\n\n\tvec4 color = vec4(finalDiffuse * baseAmbientColor + finalSpecular + reflectionColor, alpha);\n\n#ifdef FOG\n\tfloat fog = CalcFogFactor();\n\tcolor.rgb = fog * color.rgb + (1.0 - fog) * vFogColor;\n#endif\n\n\tgl_FragColor = color;\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("iedefaultVertexShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n#define MAP_EXPLICIT\t0.\n#define MAP_SPHERICAL\t1.\n#define MAP_PLANAR\t\t2.\n#define MAP_CUBIC\t\t3.\n#define MAP_PROJECTION\t4.\n#define MAP_SKYBOX\t\t5.\n\n// Attributes\nattribute vec3 position;\nattribute vec3 normal;\n#ifdef UV1\nattribute vec2 uv;\n#endif\n#ifdef UV2\nattribute vec2 uv2;\n#endif\n#ifdef VERTEXCOLOR\nattribute vec3 color;\n#endif\n#ifdef BONES\nattribute vec4 matricesIndices;\nattribute vec4 matricesWeights;\n#endif\n\n// Uniforms\nuniform mat4 world;\nuniform mat4 view;\nuniform mat4 viewProjection;\n\n#ifdef DIFFUSE\nvarying vec2 vDiffuseUV;\nuniform mat4 diffuseMatrix;\nuniform vec2 vDiffuseInfos;\n#endif\n\n#ifdef AMBIENT\nvarying vec2 vAmbientUV;\nuniform mat4 ambientMatrix;\nuniform vec2 vAmbientInfos;\n#endif\n\n#ifdef OPACITY\nvarying vec2 vOpacityUV;\nuniform mat4 opacityMatrix;\nuniform vec2 vOpacityInfos;\n#endif\n\n#ifdef REFLECTION\nuniform vec3 vEyePosition;\nvarying vec3 vReflectionUVW;\nuniform vec3 vReflectionInfos;\nuniform mat4 reflectionMatrix;\n#endif\n\n#ifdef EMISSIVE\nvarying vec2 vEmissiveUV;\nuniform vec2 vEmissiveInfos;\nuniform mat4 emissiveMatrix;\n#endif\n\n#ifdef SPECULAR\nvarying vec2 vSpecularUV;\nuniform vec2 vSpecularInfos;\nuniform mat4 specularMatrix;\n#endif\n\n#ifdef BUMP\nvarying vec2 vBumpUV;\nuniform vec2 vBumpInfos;\nuniform mat4 bumpMatrix;\n#endif\n\n#ifdef BONES\nuniform mat4 mBones[BonesPerMesh];\n#endif\n\n// Output\nvarying vec3 vPositionW;\nvarying vec3 vNormalW;\n\n#ifdef VERTEXCOLOR\nvarying vec3 vColor;\n#endif\n\n#ifdef CLIPPLANE\nuniform vec4 vClipPlane;\nvarying float fClipDistance;\n#endif\n\n#ifdef FOG\nvarying float fFogDistance;\n#endif\n\n#ifdef SHADOWS\n#ifdef LIGHT0\nuniform mat4 lightMatrix0;\nvarying vec4 vPositionFromLight0;\n#endif\n#ifdef LIGHT1\nuniform mat4 lightMatrix1;\nvarying vec4 vPositionFromLight1;\n#endif\n#ifdef LIGHT2\nuniform mat4 lightMatrix2;\nvarying vec4 vPositionFromLight2;\n#endif\n#ifdef LIGHT3\nuniform mat4 lightMatrix3;\nvarying vec4 vPositionFromLight3;\n#endif\n#endif\n\n#ifdef REFLECTION\nvec3 computeReflectionCoords(float mode, vec4 worldPos, vec3 worldNormal)\n{\n\tif (mode == MAP_SPHERICAL)\n\t{\n\t\tvec3 coords = vec3(view * vec4(worldNormal, 0.0));\n\n\t\treturn vec3(reflectionMatrix * vec4(coords, 1.0));\n\t}\n\telse if (mode == MAP_PLANAR)\n\t{\n\t\tvec3 viewDir = worldPos.xyz - vEyePosition;\n\t\tvec3 coords = normalize(reflect(viewDir, worldNormal));\n\n\t\treturn vec3(reflectionMatrix * vec4(coords, 1));\n\t}\n\telse if (mode == MAP_CUBIC)\n\t{\n\t\tvec3 viewDir = worldPos.xyz - vEyePosition;\n\t\tvec3 coords = reflect(viewDir, worldNormal);\n\n\t\treturn vec3(reflectionMatrix * vec4(coords, 0));\n\t}\n\telse if (mode == MAP_PROJECTION)\n\t{\n\t\treturn vec3(reflectionMatrix * (view * worldPos));\n\t}\n\telse if (mode == MAP_SKYBOX)\n\t{\n\t\treturn position;\n\t}\n\n\treturn vec3(0, 0, 0);\n}\n#endif\n\nvoid main(void) {\n\tmat4 finalWorld;\n\n#ifdef BONES\n\tmat4 m0 = mBones[int(matricesIndices.x)] * matricesWeights.x;\n\tmat4 m1 = mBones[int(matricesIndices.y)] * matricesWeights.y;\n\tmat4 m2 = mBones[int(matricesIndices.z)] * matricesWeights.z;\n\n#ifdef BONES4\n\tmat4 m3 = mBones[int(matricesIndices.w)] * matricesWeights.w;\n\tfinalWorld = world * (m0 + m1 + m2 + m3);\n#else\n\tfinalWorld = world * (m0 + m1 + m2);\n#endif \n\n#else\n\tfinalWorld = world;\n#endif\n\n\tgl_Position = viewProjection * finalWorld * vec4(position, 1.0);\n\n\tvec4 worldPos = finalWorld * vec4(position, 1.0);\n\tvPositionW = vec3(worldPos);\n\tvNormalW = normalize(vec3(finalWorld * vec4(normal, 0.0)));\n\n\t// Texture coordinates\n#ifndef UV1\n\tvec2 uv = vec2(0., 0.);\n#endif\n#ifndef UV2\n\tvec2 uv2 = vec2(0., 0.);\n#endif\n\n#ifdef DIFFUSE\n\tif (vDiffuseInfos.x == 0.)\n\t{\n\t\tvDiffuseUV = vec2(diffuseMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvDiffuseUV = vec2(diffuseMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef AMBIENT\n\tif (vAmbientInfos.x == 0.)\n\t{\n\t\tvAmbientUV = vec2(ambientMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvAmbientUV = vec2(ambientMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef OPACITY\n\tif (vOpacityInfos.x == 0.)\n\t{\n\t\tvOpacityUV = vec2(opacityMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvOpacityUV = vec2(opacityMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef REFLECTION\n\tvReflectionUVW = computeReflectionCoords(vReflectionInfos.x, vec4(vPositionW, 1.0), vNormalW);\n#endif\n\n#ifdef EMISSIVE\n\tif (vEmissiveInfos.x == 0.)\n\t{\n\t\tvEmissiveUV = vec2(emissiveMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvEmissiveUV = vec2(emissiveMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef SPECULAR\n\tif (vSpecularInfos.x == 0.)\n\t{\n\t\tvSpecularUV = vec2(specularMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvSpecularUV = vec2(specularMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef BUMP\n\tif (vBumpInfos.x == 0.)\n\t{\n\t\tvBumpUV = vec2(bumpMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvBumpUV = vec2(bumpMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n\t// Clip plane\n#ifdef CLIPPLANE\n\tfClipDistance = dot(worldPos, vClipPlane);\n#endif\n\n\t// Fog\n#ifdef FOG\n\tfFogDistance = (view * worldPos).z;\n#endif\n\n\t// Shadows\n#ifdef SHADOWS\n#ifdef LIGHT0\n\tvPositionFromLight0 = lightMatrix0 * vec4(position, 1.0);\n#endif\n#ifdef LIGHT1\n\tvPositionFromLight1 = lightMatrix1 * vec4(position, 1.0);\n#endif\n#ifdef LIGHT2\n\tvPositionFromLight2 = lightMatrix2 * vec4(position, 1.0);\n#endif\n#ifdef LIGHT3\n\tvPositionFromLight3 = lightMatrix3 * vec4(position, 1.0);\n#endif\n#endif\n\n\t// Vertex color\n#ifdef VERTEXCOLOR\n\tvColor = color;\n#endif\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("layerPixelShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Samplers\nvarying vec2 vUV;\nuniform sampler2D textureSampler;\n\n// Color\nuniform vec4 color;\n\nvoid main(void) {\n\tvec4 baseColor = texture2D(textureSampler, vUV);\n\n\tgl_FragColor = baseColor * color;\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("layerVertexShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Attributes\nattribute vec2 position;\n\n// Uniforms\nuniform mat4 textureMatrix;\n\n// Output\nvarying vec2 vUV;\n\nconst vec2 madd = vec2(0.5, 0.5);\n\nvoid main(void) {\t\n\n\tvUV = vec2(textureMatrix * vec4(position * madd + madd, 1.0, 0.0));\n\tgl_Position = vec4(position, 0.0, 1.0);\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("lensFlarePixelShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Samplers\nvarying vec2 vUV;\nuniform sampler2D textureSampler;\n\n// Color\nuniform vec4 color;\n\nvoid main(void) {\n\tvec4 baseColor = texture2D(textureSampler, vUV);\n\n\tgl_FragColor = baseColor * color;\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("lensFlareVertexShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Attributes\nattribute vec2 position;\n\n// Uniforms\nuniform mat4 viewportMatrix;\n\n// Output\nvarying vec2 vUV;\n\nconst vec2 madd = vec2(0.5, 0.5);\n\nvoid main(void) {\t\n\n\tvUV = position * madd + madd;\n\tgl_Position = viewportMatrix * vec4(position, 0.0, 1.0);\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("particlesPixelShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Samplers\nvarying vec2 vUV;\nvarying vec4 vColor;\nuniform vec4 textureMask;\nuniform sampler2D diffuseSampler;\n\n#ifdef CLIPPLANE\nvarying float fClipDistance;\n#endif\n\nvoid main(void) {\n#ifdef CLIPPLANE\n\tif (fClipDistance > 0.0)\n\t\tdiscard;\n#endif\n\tvec4 baseColor = texture2D(diffuseSampler, vUV);\n\n\tgl_FragColor = (baseColor * textureMask + (vec4(1., 1., 1., 1.) - textureMask)) * vColor;\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("particlesVertexShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Attributes\nattribute vec3 position;\nattribute vec4 color;\nattribute vec4 options;\n\n// Uniforms\nuniform mat4 view;\nuniform mat4 projection;\n\n// Output\nvarying vec2 vUV;\nvarying vec4 vColor;\n\n#ifdef CLIPPLANE\nuniform vec4 vClipPlane;\nuniform mat4 invView;\nvarying float fClipDistance;\n#endif\n\nvoid main(void) {\t\n\tvec3 viewPos = (view * vec4(position, 1.0)).xyz; \n\tvec3 cornerPos;\n\tfloat size = options.y;\n\tfloat angle = options.x;\n\tvec2 offset = options.zw;\n\n\tcornerPos = vec3(offset.x - 0.5, offset.y  - 0.5, 0.) * size;\n\n\t// Rotate\n\tvec3 rotatedCorner;\n\trotatedCorner.x = cornerPos.x * cos(angle) - cornerPos.y * sin(angle);\n\trotatedCorner.y = cornerPos.x * sin(angle) + cornerPos.y * cos(angle);\n\trotatedCorner.z = 0.;\n\n\t// Position\n\tviewPos += rotatedCorner;\n\tgl_Position = projection * vec4(viewPos, 1.0);   \n\t\n\tvColor = color;\n\tvUV = offset;\n\n\t// Clip plane\n#ifdef CLIPPLANE\n\tvec4 worldPos = invView * vec4(viewPos, 1.0);\n\tfClipDistance = dot(worldPos, vClipPlane);\n#endif\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("passPixelShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Samplers\nvarying vec2 vUV;\nuniform sampler2D textureSampler;\n\nvoid main(void) \n{\n\tgl_FragColor = texture2D(textureSampler, vUV);\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("postprocessVertexShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Attributes\nattribute vec2 position;\n\n// Output\nvarying vec2 vUV;\n\nconst vec2 madd = vec2(0.5, 0.5);\n\nvoid main(void) {\t\n\n\tvUV = position * madd + madd;\n\tgl_Position = vec4(position, 0.0, 1.0);\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("refractionPixelShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Samplers\nvarying vec2 vUV;\nuniform sampler2D textureSampler;\nuniform sampler2D refractionSampler;\n\n// Parameters\nuniform vec3 baseColor;\nuniform float depth;\nuniform float colorLevel;\n\nvoid main() {\n\tfloat ref = 1.0 - texture2D(refractionSampler, vUV).r;\n\n\tvec2 uv = vUV - vec2(0.5);\n\tvec2 offset = uv * depth * ref;\n\tvec3 sourceColor = texture2D(textureSampler, vUV - offset).rgb;\n\n\tgl_FragColor = vec4(sourceColor + sourceColor * ref * colorLevel, 1.0);\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("shadowMapPixelShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\nvec4 pack(float depth)\n{\n\tconst vec4 bitOffset = vec4(255. * 255. * 255., 255. * 255., 255., 1.);\n\tconst vec4 bitMask = vec4(0., 1. / 255., 1. / 255., 1. / 255.);\n\t\n\tvec4 comp = fract(depth * bitOffset);\n\tcomp -= comp.xxyz * bitMask;\n\t\n\treturn comp;\n}\n\n// Thanks to http://devmaster.net/\nvec2 packHalf(float depth) \n{ \n\tconst vec2 bitOffset = vec2(1.0 / 255., 0.);\n\tvec2 color = vec2(depth, fract(depth * 255.));\n\n\treturn color - (color.yy * bitOffset);\n}\n\n#ifndef VSM\nvarying vec4 vPosition;\n#endif\n\nvoid main(void)\n{\n#ifdef VSM\n\tfloat moment1 = gl_FragCoord.z / gl_FragCoord.w;\n\tfloat moment2 = moment1 * moment1;\n\tgl_FragColor = vec4(packHalf(moment1), packHalf(moment2));\n#else\n\tgl_FragColor = pack(vPosition.z / vPosition.w);\n#endif\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("shadowMapVertexShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Attribute\nattribute vec3 position;\n#ifdef BONES\nattribute vec4 matricesIndices;\nattribute vec4 matricesWeights;\n#endif\n\n// Uniform\n#ifdef BONES\nuniform mat4 world;\nuniform mat4 mBones[BonesPerMesh];\nuniform mat4 viewProjection;\n#else\nuniform mat4 worldViewProjection;\n#endif\n\n#ifndef VSM\nvarying vec4 vPosition;\n#endif\n\nvoid main(void)\n{\n#ifdef BONES\n\tmat4 m0 = mBones[int(matricesIndices.x)] * matricesWeights.x;\n\tmat4 m1 = mBones[int(matricesIndices.y)] * matricesWeights.y;\n\tmat4 m2 = mBones[int(matricesIndices.z)] * matricesWeights.z;\n\tmat4 m3 = mBones[int(matricesIndices.w)] * matricesWeights.w;\n\tmat4 finalWorld = world * (m0 + m1 + m2 + m3);\n\tgl_Position = viewProjection * finalWorld * vec4(position, 1.0);\n#else\n#ifndef VSM\n\tvPosition = worldViewProjection * vec4(position, 1.0);\n#endif\n\tgl_Position = worldViewProjection * vec4(position, 1.0);\n#endif\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("spritesPixelShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\nuniform bool alphaTest;\n\nvarying vec4 vColor;\n\n// Samplers\nvarying vec2 vUV;\nuniform sampler2D diffuseSampler;\n\n// Fog\n#ifdef FOG\n\n#define FOGMODE_NONE    0.\n#define FOGMODE_EXP     1.\n#define FOGMODE_EXP2    2.\n#define FOGMODE_LINEAR  3.\n#define E 2.71828\n\nuniform vec4 vFogInfos;\nuniform vec3 vFogColor;\nvarying float fFogDistance;\n\nfloat CalcFogFactor()\n{\n\tfloat fogCoeff = 1.0;\n\tfloat fogStart = vFogInfos.y;\n\tfloat fogEnd = vFogInfos.z;\n\tfloat fogDensity = vFogInfos.w;\n\n\tif (FOGMODE_LINEAR == vFogInfos.x)\n\t{\n\t\tfogCoeff = (fogEnd - fFogDistance) / (fogEnd - fogStart);\n\t}\n\telse if (FOGMODE_EXP == vFogInfos.x)\n\t{\n\t\tfogCoeff = 1.0 / pow(E, fFogDistance * fogDensity);\n\t}\n\telse if (FOGMODE_EXP2 == vFogInfos.x)\n\t{\n\t\tfogCoeff = 1.0 / pow(E, fFogDistance * fFogDistance * fogDensity * fogDensity);\n\t}\n\n\treturn min(1., max(0., fogCoeff));\n}\n#endif\n\n\nvoid main(void) {\n\tvec4 baseColor = texture2D(diffuseSampler, vUV);\n\n\tif (alphaTest) \n\t{\n\t\tif (baseColor.a < 0.95)\n\t\t\tdiscard;\n\t}\n\n\tbaseColor *= vColor;\n\n#ifdef FOG\n\tfloat fog = CalcFogFactor();\n\tbaseColor.rgb = fog * baseColor.rgb + (1.0 - fog) * vFogColor;\n#endif\n\n\tgl_FragColor = baseColor;\n}"));
			HX_STACK_LINE(27)
			_g->set(HX_CSTRING("spritesVertexShader"),HX_CSTRING("#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Attributes\nattribute vec3 position;\nattribute vec4 options;\nattribute vec4 cellInfo;\nattribute vec4 color;\n\n// Uniforms\nuniform vec2 textureInfos;\nuniform mat4 view;\nuniform mat4 projection;\n\n// Output\nvarying vec2 vUV;\nvarying vec4 vColor;\n\n#ifdef FOG\nvarying float fFogDistance;\n#endif\n\nvoid main(void) {\t\n\tvec3 viewPos = (view * vec4(position, 1.0)).xyz; \n\tvec3 cornerPos;\n\t\n\tfloat angle = options.x;\n\tfloat size = options.y;\n\tvec2 offset = options.zw;\n\tvec2 uvScale = textureInfos.xy;\n\n\tcornerPos = vec3(offset.x - 0.5, offset.y  - 0.5, 0.) * size;\n\n\t// Rotate\n\tvec3 rotatedCorner;\n\trotatedCorner.x = cornerPos.x * cos(angle) - cornerPos.y * sin(angle);\n\trotatedCorner.y = cornerPos.x * sin(angle) + cornerPos.y * cos(angle);\n\trotatedCorner.z = 0.;\n\n\t// Position\n\tviewPos += rotatedCorner;\n\tgl_Position = projection * vec4(viewPos, 1.0);   \n\n\t// Color\n\tvColor = color;\n\t\n\t// Texture\n\tvec2 uvOffset = vec2(abs(offset.x - cellInfo.x), 1.0 - abs(offset.y - cellInfo.y));\n\n\tvUV = (uvOffset + cellInfo.zw) * uvScale;\n\n\t// Fog\n#ifdef FOG\n\tfFogDistance = viewPos.z;\n#endif\n}"));
			HX_STACK_LINE(27)
			return _g;
		}
		return null();
	}
};
	ShadersStore= _Function_0_1::Block();
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
