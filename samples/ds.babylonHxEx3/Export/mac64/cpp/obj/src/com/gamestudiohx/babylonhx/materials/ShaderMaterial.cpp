#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Effect
#include <com/gamestudiohx/babylonhx/materials/Effect.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Material
#include <com/gamestudiohx/babylonhx/materials/Material.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_ShaderMaterial
#include <com/gamestudiohx/babylonhx/materials/ShaderMaterial.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_IGetSetVerticesData
#include <com/gamestudiohx/babylonhx/mesh/IGetSetVerticesData.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_Mesh
#include <com/gamestudiohx/babylonhx/mesh/Mesh.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector2
#include <com/gamestudiohx/babylonhx/tools/math/Vector2.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_gl_GL
#include <openfl/gl/GL.h>
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

Void ShaderMaterial_obj::__construct(::String name,::com::gamestudiohx::babylonhx::Scene scene,Dynamic shaderPath,Dynamic options)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.ShaderMaterial","new",0xd4f72b72,"com.gamestudiohx.babylonhx.materials.ShaderMaterial.new","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",42,0x7570435c)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(scene,"scene")
HX_STACK_ARG(shaderPath,"shaderPath")
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(43)
	super::__construct(name,scene);
	HX_STACK_LINE(44)
	this->_shaderPath = shaderPath;
	HX_STACK_LINE(45)
	if (((options->__Field(HX_CSTRING("needAlphaBlending"),true) == null()))){
		HX_STACK_LINE(46)
		options->__FieldRef(HX_CSTRING("needAlphaBlending")) = false;
	}
	HX_STACK_LINE(48)
	if (((options->__Field(HX_CSTRING("needAlphaTesting"),true) == null()))){
		HX_STACK_LINE(49)
		options->__FieldRef(HX_CSTRING("needAlphaTesting")) = false;
	}
	HX_STACK_LINE(51)
	if (((options->__Field(HX_CSTRING("attributes"),true) == null()))){
		HX_STACK_LINE(52)
		options->__FieldRef(HX_CSTRING("attributes")) = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("position")).Add(HX_CSTRING("normal")).Add(HX_CSTRING("uv")));
	}
	HX_STACK_LINE(54)
	if (((options->__Field(HX_CSTRING("uniforms"),true) == null()))){
		HX_STACK_LINE(55)
		options->__FieldRef(HX_CSTRING("uniforms")) = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("worldViewProjection")));
	}
	HX_STACK_LINE(57)
	if (((options->__Field(HX_CSTRING("samplers"),true) == null()))){
		HX_STACK_LINE(58)
		Array< ::String > _g = Array_obj< ::String >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		options->__FieldRef(HX_CSTRING("samplers")) = _g;
	}
	HX_STACK_LINE(61)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(61)
	this->_textures = _g1;
	HX_STACK_LINE(62)
	::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(62)
	this->_floats = _g2;
	HX_STACK_LINE(63)
	::haxe::ds::StringMap _g3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(63)
	this->_colors3 = _g3;
	HX_STACK_LINE(64)
	::haxe::ds::StringMap _g4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(64)
	this->_colors4 = _g4;
	HX_STACK_LINE(65)
	::haxe::ds::StringMap _g5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(65)
	this->_vectors2 = _g5;
	HX_STACK_LINE(66)
	::haxe::ds::StringMap _g6 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(66)
	this->_vectors3 = _g6;
	HX_STACK_LINE(67)
	::haxe::ds::StringMap _g7 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(67)
	this->_matrices = _g7;
	HX_STACK_LINE(68)
	::haxe::ds::StringMap _g8 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(68)
	this->_floatsArrays = _g8;
	HX_STACK_LINE(69)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g9 = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(69)
	this->_cachedWorldViewMatrix = _g9;
	HX_STACK_LINE(71)
	this->_options = options;
}
;
	return null();
}

//ShaderMaterial_obj::~ShaderMaterial_obj() { }

Dynamic ShaderMaterial_obj::__CreateEmpty() { return  new ShaderMaterial_obj; }
hx::ObjectPtr< ShaderMaterial_obj > ShaderMaterial_obj::__new(::String name,::com::gamestudiohx::babylonhx::Scene scene,Dynamic shaderPath,Dynamic options)
{  hx::ObjectPtr< ShaderMaterial_obj > result = new ShaderMaterial_obj();
	result->__construct(name,scene,shaderPath,options);
	return result;}

Dynamic ShaderMaterial_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderMaterial_obj > result = new ShaderMaterial_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

bool ShaderMaterial_obj::needAlphaBlending( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.ShaderMaterial","needAlphaBlending",0x495f930b,"com.gamestudiohx.babylonhx.materials.ShaderMaterial.needAlphaBlending","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",76,0x7570435c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	return this->_options->__Field(HX_CSTRING("needAlphaBlending"),true);
}


bool ShaderMaterial_obj::needAlphaTesting( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.ShaderMaterial","needAlphaTesting",0x93369736,"com.gamestudiohx.babylonhx.materials.ShaderMaterial.needAlphaTesting","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",80,0x7570435c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	return this->_options->__Field(HX_CSTRING("needAlphaTesting"),true);
}


Void ShaderMaterial_obj::_checkUniform( ::String uniformName){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.ShaderMaterial","_checkUniform",0xc38031bd,"com.gamestudiohx.babylonhx.materials.ShaderMaterial._checkUniform","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",83,0x7570435c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniformName,"uniformName")
		HX_STACK_LINE(84)
		int _g = ::Lambda_obj::indexOf(this->_options->__Field(HX_CSTRING("uniforms"),true),uniformName);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		if (((_g == (int)-1))){
			HX_STACK_LINE(85)
			this->_options->__Field(HX_CSTRING("uniforms"),true)->__Field(HX_CSTRING("push"),true)(uniformName);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMaterial_obj,_checkUniform,(void))

::com::gamestudiohx::babylonhx::materials::ShaderMaterial ShaderMaterial_obj::setTexture( ::String name,::com::gamestudiohx::babylonhx::materials::textures::Texture texture){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.ShaderMaterial","setTexture",0x3b99f887,"com.gamestudiohx.babylonhx.materials.ShaderMaterial.setTexture","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",89,0x7570435c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(texture,"texture")
	HX_STACK_LINE(90)
	int _g = ::Lambda_obj::indexOf(this->_options->__Field(HX_CSTRING("samplers"),true),name);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(90)
	if (((_g == (int)-1))){
		HX_STACK_LINE(91)
		this->_options->__Field(HX_CSTRING("samplers"),true)->__Field(HX_CSTRING("push"),true)(name);
	}
	HX_STACK_LINE(93)
	this->_textures->set(name,texture);
	HX_STACK_LINE(95)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderMaterial_obj,setTexture,return )

::com::gamestudiohx::babylonhx::materials::ShaderMaterial ShaderMaterial_obj::setFloat( ::String name,Float value){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.ShaderMaterial","setFloat",0x398a7248,"com.gamestudiohx.babylonhx.materials.ShaderMaterial.setFloat","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",98,0x7570435c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(99)
	this->_checkUniform(name);
	HX_STACK_LINE(100)
	this->_floats->set(name,value);
	HX_STACK_LINE(102)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderMaterial_obj,setFloat,return )

::com::gamestudiohx::babylonhx::materials::ShaderMaterial ShaderMaterial_obj::setFloats( ::String name,Array< Float > value){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.ShaderMaterial","setFloats",0x1f998d2b,"com.gamestudiohx.babylonhx.materials.ShaderMaterial.setFloats","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",105,0x7570435c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(106)
	this->_checkUniform(name);
	HX_STACK_LINE(107)
	this->_floatsArrays->set(name,value);
	HX_STACK_LINE(109)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderMaterial_obj,setFloats,return )

::com::gamestudiohx::babylonhx::materials::ShaderMaterial ShaderMaterial_obj::setColor3( ::String name,::com::gamestudiohx::babylonhx::tools::math::Color3 value){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.ShaderMaterial","setColor3",0xa4ca2f44,"com.gamestudiohx.babylonhx.materials.ShaderMaterial.setColor3","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",112,0x7570435c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(113)
	this->_checkUniform(name);
	HX_STACK_LINE(114)
	this->_colors3->set(name,value);
	HX_STACK_LINE(116)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderMaterial_obj,setColor3,return )

::com::gamestudiohx::babylonhx::materials::ShaderMaterial ShaderMaterial_obj::setColor4( ::String name,::com::gamestudiohx::babylonhx::tools::math::Color4 value){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.ShaderMaterial","setColor4",0xa4ca2f45,"com.gamestudiohx.babylonhx.materials.ShaderMaterial.setColor4","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",119,0x7570435c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(120)
	this->_checkUniform(name);
	HX_STACK_LINE(121)
	this->_colors4->set(name,value);
	HX_STACK_LINE(123)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderMaterial_obj,setColor4,return )

::com::gamestudiohx::babylonhx::materials::ShaderMaterial ShaderMaterial_obj::setVector2( ::String name,::com::gamestudiohx::babylonhx::tools::math::Vector2 value){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.ShaderMaterial","setVector2",0x775629bb,"com.gamestudiohx.babylonhx.materials.ShaderMaterial.setVector2","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",126,0x7570435c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(127)
	this->_checkUniform(name);
	HX_STACK_LINE(128)
	this->_vectors2->set(name,value);
	HX_STACK_LINE(130)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderMaterial_obj,setVector2,return )

::com::gamestudiohx::babylonhx::materials::ShaderMaterial ShaderMaterial_obj::setVector3( ::String name,::com::gamestudiohx::babylonhx::tools::math::Vector3 value){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.ShaderMaterial","setVector3",0x775629bc,"com.gamestudiohx.babylonhx.materials.ShaderMaterial.setVector3","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",133,0x7570435c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(134)
	this->_checkUniform(name);
	HX_STACK_LINE(135)
	this->_vectors3->set(name,value);
	HX_STACK_LINE(137)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderMaterial_obj,setVector3,return )

::com::gamestudiohx::babylonhx::materials::ShaderMaterial ShaderMaterial_obj::setMatrix( ::String name,::com::gamestudiohx::babylonhx::tools::math::Matrix value){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.ShaderMaterial","setMatrix",0x9a0ba015,"com.gamestudiohx.babylonhx.materials.ShaderMaterial.setMatrix","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",140,0x7570435c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(141)
	this->_checkUniform(name);
	HX_STACK_LINE(142)
	this->_matrices->set(name,value);
	HX_STACK_LINE(144)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderMaterial_obj,setMatrix,return )

bool ShaderMaterial_obj::isReady( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.ShaderMaterial","isReady",0xb963902b,"com.gamestudiohx.babylonhx.materials.ShaderMaterial.isReady","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",147,0x7570435c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mesh,"mesh")
	HX_STACK_LINE(148)
	::com::gamestudiohx::babylonhx::Engine engine = this->_scene->getEngine();		HX_STACK_VAR(engine,"engine");
	HX_STACK_LINE(150)
	::com::gamestudiohx::babylonhx::materials::Effect _g = engine->createEffect(this->_shaderPath,this->_options->__Field(HX_CSTRING("attributes"),true),this->_options->__Field(HX_CSTRING("uniforms"),true),this->_options->__Field(HX_CSTRING("samplers"),true),HX_CSTRING(""),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(150)
	this->_effect = _g;
	HX_STACK_LINE(156)
	if ((!(this->_effect->isReady()))){
		HX_STACK_LINE(157)
		return false;
	}
	HX_STACK_LINE(160)
	return true;
}


Void ShaderMaterial_obj::bind( ::com::gamestudiohx::babylonhx::tools::math::Matrix world,::com::gamestudiohx::babylonhx::mesh::Mesh mesh){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.ShaderMaterial","bind",0x7b634a6b,"com.gamestudiohx.babylonhx.materials.ShaderMaterial.bind","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",163,0x7570435c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(world,"world")
		HX_STACK_ARG(mesh,"mesh")
		HX_STACK_LINE(165)
		Dynamic _g = this->_options->__Field(HX_CSTRING("uniforms"),true)->__Field(HX_CSTRING("indexOf"),true)(HX_CSTRING("world"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(165)
		if (((_g != (int)-1))){
			HX_STACK_LINE(166)
			Dynamic uniform = this->_effect->getUniform(HX_CSTRING("world"));		HX_STACK_VAR(uniform,"uniform");
			HX_STACK_LINE(166)
			if (((uniform != null()))){
				HX_STACK_LINE(166)
				Dynamic location = uniform;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(166)
				Dynamic v;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(world->m,null(),null());		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(166)
					Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(166)
					v = data;
				}
				HX_STACK_LINE(166)
				::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
			}
		}
		HX_STACK_LINE(169)
		Dynamic _g1 = this->_options->__Field(HX_CSTRING("uniforms"),true)->__Field(HX_CSTRING("indexOf"),true)(HX_CSTRING("view"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(169)
		if (((_g1 != (int)-1))){
			HX_STACK_LINE(170)
			::com::gamestudiohx::babylonhx::tools::math::Matrix matrix = this->getScene()->getViewMatrix();		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				Dynamic uniform = this->_effect->getUniform(HX_CSTRING("view"));		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(170)
				if (((uniform != null()))){
					HX_STACK_LINE(170)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(170)
					Dynamic v;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(170)
						Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(170)
						v = data;
					}
					HX_STACK_LINE(170)
					::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
				}
			}
		}
		HX_STACK_LINE(173)
		Dynamic _g2 = this->_options->__Field(HX_CSTRING("uniforms"),true)->__Field(HX_CSTRING("indexOf"),true)(HX_CSTRING("worldView"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(173)
		if (((_g2 != (int)-1))){
			HX_STACK_LINE(174)
			{
				HX_STACK_LINE(174)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->getScene()->getViewMatrix();		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(174)
				{
					HX_STACK_LINE(174)
					Array< Float > result = this->_cachedWorldViewMatrix->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(174)
					Float tm0 = world->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(174)
					Float tm1 = world->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(174)
					Float tm2 = world->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(174)
					Float tm3 = world->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(174)
					Float tm4 = world->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(174)
					Float tm5 = world->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(174)
					Float tm6 = world->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(174)
					Float tm7 = world->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(174)
					Float tm8 = world->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(174)
					Float tm9 = world->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(174)
					Float tm10 = world->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(174)
					Float tm11 = world->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(174)
					Float tm12 = world->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(174)
					Float tm13 = world->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(174)
					Float tm14 = world->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(174)
					Float tm15 = world->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(174)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(174)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(174)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(174)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(174)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(174)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(174)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(174)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(174)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(174)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(174)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(174)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(174)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(174)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(174)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(174)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(174)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(174)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(174)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(174)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(174)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(174)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(174)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(174)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(174)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(174)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(174)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(174)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(174)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(174)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(174)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(174)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(174)
					result;
				}
			}
			HX_STACK_LINE(175)
			{
				HX_STACK_LINE(175)
				Dynamic uniform = this->_effect->getUniform(HX_CSTRING("worldView"));		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(175)
				if (((uniform != null()))){
					HX_STACK_LINE(175)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(175)
					Dynamic v;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(175)
					{
						HX_STACK_LINE(175)
						::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(this->_cachedWorldViewMatrix->m,null(),null());		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(175)
						Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(175)
						v = data;
					}
					HX_STACK_LINE(175)
					::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
				}
			}
		}
		HX_STACK_LINE(178)
		Dynamic _g3 = this->_options->__Field(HX_CSTRING("uniforms"),true)->__Field(HX_CSTRING("indexOf"),true)(HX_CSTRING("projection"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(178)
		if (((_g3 != (int)-1))){
			HX_STACK_LINE(179)
			::com::gamestudiohx::babylonhx::tools::math::Matrix matrix = this->getScene()->getProjectionMatrix();		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(179)
				Dynamic uniform = this->_effect->getUniform(HX_CSTRING("projection"));		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(179)
				if (((uniform != null()))){
					HX_STACK_LINE(179)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(179)
					Dynamic v;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(179)
						Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(179)
						v = data;
					}
					HX_STACK_LINE(179)
					::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
				}
			}
		}
		HX_STACK_LINE(182)
		Dynamic _g4 = this->_options->__Field(HX_CSTRING("uniforms"),true)->__Field(HX_CSTRING("indexOf"),true)(HX_CSTRING("worldViewProjection"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(182)
		if (((_g4 != (int)-1))){
			HX_STACK_LINE(183)
			::com::gamestudiohx::babylonhx::tools::math::Matrix matrix;		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(183)
				{
					HX_STACK_LINE(183)
					::com::gamestudiohx::babylonhx::Scene _this = this->getScene();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(183)
					other = _this->_transformMatrix;
				}
				HX_STACK_LINE(183)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(183)
				{
					HX_STACK_LINE(183)
					Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
					HX_STACK_LINE(183)
					Float tm0 = world->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(183)
					Float tm1 = world->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(183)
					Float tm2 = world->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(183)
					Float tm3 = world->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(183)
					Float tm4 = world->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(183)
					Float tm5 = world->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(183)
					Float tm6 = world->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(183)
					Float tm7 = world->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(183)
					Float tm8 = world->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(183)
					Float tm9 = world->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(183)
					Float tm10 = world->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(183)
					Float tm11 = world->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(183)
					Float tm12 = world->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(183)
					Float tm13 = world->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(183)
					Float tm14 = world->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(183)
					Float tm15 = world->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(183)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(183)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(183)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(183)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(183)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(183)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(183)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(183)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(183)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(183)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(183)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(183)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(183)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(183)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(183)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(183)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(183)
					result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(183)
					result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(183)
					result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(183)
					result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(183)
					result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(183)
					result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(183)
					result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(183)
					result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(183)
					result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(183)
					result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(183)
					result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(183)
					result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(183)
					result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(183)
					result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(183)
					result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(183)
					result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(183)
					result1;
				}
				HX_STACK_LINE(183)
				matrix = result;
			}
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				Dynamic uniform = this->_effect->getUniform(HX_CSTRING("worldViewProjection"));		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(183)
				if (((uniform != null()))){
					HX_STACK_LINE(183)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(183)
					Dynamic v;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(183)
					{
						HX_STACK_LINE(183)
						::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(183)
						Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(183)
						v = data;
					}
					HX_STACK_LINE(183)
					::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
				}
			}
		}
		HX_STACK_LINE(187)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_textures->keys());  __it->hasNext(); ){
			::String name = __it->next();
			{
				HX_STACK_LINE(188)
				::com::gamestudiohx::babylonhx::materials::textures::Texture _g5 = this->_textures->get(name);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(188)
				this->_effect->setTexture(name,_g5);
			}
;
		}
		HX_STACK_LINE(192)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_floats->keys());  __it->hasNext(); ){
			::String name = __it->next();
			{
				HX_STACK_LINE(193)
				::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(193)
				Float value = this->_floats->get(name);		HX_STACK_VAR(value,"value");
				struct _Function_2_1{
					inline static bool Block( Float &value,::com::gamestudiohx::babylonhx::materials::Effect _this,::String &name){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",193,0x7570435c)
						{
							HX_STACK_LINE(193)
							Array< Float > _g6 = _this->_valueCache->get(name);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(193)
							Float _g7 = _g6->__get((int)0);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(193)
							return (_g7 == value);
						}
						return null();
					}
				};
				HX_STACK_LINE(193)
				if ((!(((  ((_this->_valueCache->exists(name))) ? bool(_Function_2_1::Block(value,_this,name)) : bool(false) ))))){
					HX_STACK_LINE(193)
					_this->_valueCache->set(name,Array_obj< Float >::__new().Add(value));
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						Dynamic uniform = _this->getUniform(name);		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(193)
						if (((uniform != null()))){
							HX_STACK_LINE(193)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(193)
							::openfl::gl::GL_obj::lime_gl_uniform1f(location,value);
						}
					}
				}
			}
;
		}
		HX_STACK_LINE(197)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_floatsArrays->keys());  __it->hasNext(); ){
			::String name = __it->next();
			{
				HX_STACK_LINE(198)
				::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(198)
				Array< Float > array = this->_floatsArrays->get(name);		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(198)
				{
					HX_STACK_LINE(198)
					Dynamic uniform = _this->getUniform(name);		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(198)
					if (((uniform != null()))){
						HX_STACK_LINE(198)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(198)
						::openfl::gl::GL_obj::lime_gl_uniform1fv(location,array);
					}
				}
				HX_STACK_LINE(198)
				_this;
			}
;
		}
		HX_STACK_LINE(202)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_colors3->keys());  __it->hasNext(); ){
			::String name = __it->next();
			{
				HX_STACK_LINE(203)
				::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(203)
				::com::gamestudiohx::babylonhx::tools::math::Color3 color3 = this->_colors3->get(name);		HX_STACK_VAR(color3,"color3");
				struct _Function_2_1{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3,::String &name){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",203,0x7570435c)
						{
							HX_STACK_LINE(203)
							Array< Float > _g8 = _this->_valueCache->get(name);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(203)
							Float _g9 = _g8->__get((int)0);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(203)
							return (_g9 == color3->r);
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3,::String &name){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",203,0x7570435c)
						{
							HX_STACK_LINE(203)
							Array< Float > _g10 = _this->_valueCache->get(name);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(203)
							Float _g11 = _g10->__get((int)1);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(203)
							return (_g11 == color3->g);
						}
						return null();
					}
				};
				struct _Function_2_3{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3,::String &name){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",203,0x7570435c)
						{
							HX_STACK_LINE(203)
							Array< Float > _g12 = _this->_valueCache->get(name);		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(203)
							Float _g13 = _g12->__get((int)2);		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(203)
							return (_g13 == color3->b);
						}
						return null();
					}
				};
				HX_STACK_LINE(203)
				if ((!(((  (((  (((  ((_this->_valueCache->exists(name))) ? bool(_Function_2_1::Block(_this,color3,name)) : bool(false) ))) ? bool(_Function_2_2::Block(_this,color3,name)) : bool(false) ))) ? bool(_Function_2_3::Block(_this,color3,name)) : bool(false) ))))){
					HX_STACK_LINE(203)
					{
						HX_STACK_LINE(203)
						Float x = color3->r;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(203)
						Float y = color3->g;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(203)
						Float z = color3->b;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(203)
						if ((!(_this->_valueCache->exists(name)))){
							HX_STACK_LINE(203)
							_this->_valueCache->set(name,Array_obj< Float >::__new().Add(x).Add(y).Add(z));
						}
						else{
							HX_STACK_LINE(203)
							Array< Float > _g14 = _this->_valueCache->get(name);		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(203)
							_g14[(int)0] = x;
							HX_STACK_LINE(203)
							Array< Float > _g15 = _this->_valueCache->get(name);		HX_STACK_VAR(_g15,"_g15");
							HX_STACK_LINE(203)
							_g15[(int)1] = y;
							HX_STACK_LINE(203)
							Array< Float > _g16 = _this->_valueCache->get(name);		HX_STACK_VAR(_g16,"_g16");
							HX_STACK_LINE(203)
							_g16[(int)2] = z;
						}
					}
					HX_STACK_LINE(203)
					{
						HX_STACK_LINE(203)
						Dynamic uniform = _this->getUniform(name);		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(203)
						if (((uniform != null()))){
							HX_STACK_LINE(203)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(203)
							::openfl::gl::GL_obj::lime_gl_uniform3f(location,color3->r,color3->g,color3->b);
						}
					}
				}
			}
;
		}
		HX_STACK_LINE(207)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_colors4->keys());  __it->hasNext(); ){
			::String name = __it->next();
			{
				HX_STACK_LINE(208)
				::com::gamestudiohx::babylonhx::tools::math::Color4 color = this->_colors4->get(name);		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(209)
				{
					HX_STACK_LINE(209)
					::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(209)
					Float x = color->r;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(209)
					Float y = color->g;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(209)
					Float z = color->b;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(209)
					Float w = color->a;		HX_STACK_VAR(w,"w");
					struct _Function_3_1{
						inline static bool Block( Float &x,::com::gamestudiohx::babylonhx::materials::Effect _this,::String &name){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",209,0x7570435c)
							{
								HX_STACK_LINE(209)
								Array< Float > _g17 = _this->_valueCache->get(name);		HX_STACK_VAR(_g17,"_g17");
								HX_STACK_LINE(209)
								Float _g18 = _g17->__get((int)0);		HX_STACK_VAR(_g18,"_g18");
								HX_STACK_LINE(209)
								return (_g18 == x);
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static bool Block( Float &y,::com::gamestudiohx::babylonhx::materials::Effect _this,::String &name){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",209,0x7570435c)
							{
								HX_STACK_LINE(209)
								Array< Float > _g19 = _this->_valueCache->get(name);		HX_STACK_VAR(_g19,"_g19");
								HX_STACK_LINE(209)
								Float _g20 = _g19->__get((int)1);		HX_STACK_VAR(_g20,"_g20");
								HX_STACK_LINE(209)
								return (_g20 == y);
							}
							return null();
						}
					};
					struct _Function_3_3{
						inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,Float &z,::String &name){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",209,0x7570435c)
							{
								HX_STACK_LINE(209)
								Array< Float > _g21 = _this->_valueCache->get(name);		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(209)
								Float _g22 = _g21->__get((int)2);		HX_STACK_VAR(_g22,"_g22");
								HX_STACK_LINE(209)
								return (_g22 == z);
							}
							return null();
						}
					};
					struct _Function_3_4{
						inline static bool Block( Float &w,::com::gamestudiohx::babylonhx::materials::Effect _this,::String &name){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",209,0x7570435c)
							{
								HX_STACK_LINE(209)
								Array< Float > _g23 = _this->_valueCache->get(name);		HX_STACK_VAR(_g23,"_g23");
								HX_STACK_LINE(209)
								Float _g24 = _g23->__get((int)3);		HX_STACK_VAR(_g24,"_g24");
								HX_STACK_LINE(209)
								return (_g24 == w);
							}
							return null();
						}
					};
					HX_STACK_LINE(209)
					if ((!(((  (((  (((  (((  ((_this->_valueCache->exists(name))) ? bool(_Function_3_1::Block(x,_this,name)) : bool(false) ))) ? bool(_Function_3_2::Block(y,_this,name)) : bool(false) ))) ? bool(_Function_3_3::Block(_this,z,name)) : bool(false) ))) ? bool(_Function_3_4::Block(w,_this,name)) : bool(false) ))))){
						HX_STACK_LINE(209)
						if ((!(_this->_valueCache->exists(name)))){
							HX_STACK_LINE(209)
							_this->_valueCache->set(name,Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add(w));
						}
						else{
							HX_STACK_LINE(209)
							Array< Float > _g25 = _this->_valueCache->get(name);		HX_STACK_VAR(_g25,"_g25");
							HX_STACK_LINE(209)
							_g25[(int)0] = x;
							HX_STACK_LINE(209)
							Array< Float > _g26 = _this->_valueCache->get(name);		HX_STACK_VAR(_g26,"_g26");
							HX_STACK_LINE(209)
							_g26[(int)1] = y;
							HX_STACK_LINE(209)
							Array< Float > _g27 = _this->_valueCache->get(name);		HX_STACK_VAR(_g27,"_g27");
							HX_STACK_LINE(209)
							_g27[(int)2] = z;
							HX_STACK_LINE(209)
							Array< Float > _g28 = _this->_valueCache->get(name);		HX_STACK_VAR(_g28,"_g28");
							HX_STACK_LINE(209)
							_g28[(int)3] = w;
						}
						HX_STACK_LINE(209)
						{
							HX_STACK_LINE(209)
							Dynamic uniform = _this->getUniform(name);		HX_STACK_VAR(uniform,"uniform");
							HX_STACK_LINE(209)
							if (((uniform != null()))){
								HX_STACK_LINE(209)
								Dynamic location = uniform;		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(209)
								::openfl::gl::GL_obj::lime_gl_uniform4f(location,x,y,z,w);
							}
						}
					}
				}
			}
;
		}
		HX_STACK_LINE(213)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_vectors2->keys());  __it->hasNext(); ){
			::String name = __it->next();
			{
				HX_STACK_LINE(214)
				::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(214)
				::com::gamestudiohx::babylonhx::tools::math::Vector2 vector2 = this->_vectors2->get(name);		HX_STACK_VAR(vector2,"vector2");
				struct _Function_2_1{
					inline static bool Block( ::com::gamestudiohx::babylonhx::tools::math::Vector2 &vector2,::com::gamestudiohx::babylonhx::materials::Effect _this,::String &name){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",214,0x7570435c)
						{
							HX_STACK_LINE(214)
							Array< Float > _g29 = _this->_valueCache->get(name);		HX_STACK_VAR(_g29,"_g29");
							HX_STACK_LINE(214)
							Float _g30 = _g29->__get((int)0);		HX_STACK_VAR(_g30,"_g30");
							HX_STACK_LINE(214)
							return (_g30 == vector2->x);
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static bool Block( ::com::gamestudiohx::babylonhx::tools::math::Vector2 &vector2,::com::gamestudiohx::babylonhx::materials::Effect _this,::String &name){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",214,0x7570435c)
						{
							HX_STACK_LINE(214)
							Array< Float > _g31 = _this->_valueCache->get(name);		HX_STACK_VAR(_g31,"_g31");
							HX_STACK_LINE(214)
							Float _g32 = _g31->__get((int)1);		HX_STACK_VAR(_g32,"_g32");
							HX_STACK_LINE(214)
							return (_g32 == vector2->y);
						}
						return null();
					}
				};
				HX_STACK_LINE(214)
				if ((!(((  (((  ((_this->_valueCache->exists(name))) ? bool(_Function_2_1::Block(vector2,_this,name)) : bool(false) ))) ? bool(_Function_2_2::Block(vector2,_this,name)) : bool(false) ))))){
					HX_STACK_LINE(214)
					{
						HX_STACK_LINE(214)
						Float x = vector2->x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(214)
						Float y = vector2->y;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(214)
						if ((!(_this->_valueCache->exists(name)))){
							HX_STACK_LINE(214)
							_this->_valueCache->set(name,Array_obj< Float >::__new().Add(x).Add(y));
						}
						else{
							HX_STACK_LINE(214)
							Array< Float > _g33 = _this->_valueCache->get(name);		HX_STACK_VAR(_g33,"_g33");
							HX_STACK_LINE(214)
							_g33[(int)0] = x;
							HX_STACK_LINE(214)
							Array< Float > _g34 = _this->_valueCache->get(name);		HX_STACK_VAR(_g34,"_g34");
							HX_STACK_LINE(214)
							_g34[(int)1] = y;
						}
					}
					HX_STACK_LINE(214)
					{
						HX_STACK_LINE(214)
						Dynamic uniform = _this->getUniform(name);		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(214)
						if (((uniform != null()))){
							HX_STACK_LINE(214)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(214)
							::openfl::gl::GL_obj::lime_gl_uniform2f(location,vector2->x,vector2->y);
						}
					}
				}
			}
;
		}
		HX_STACK_LINE(218)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_vectors3->keys());  __it->hasNext(); ){
			::String name = __it->next();
			{
				HX_STACK_LINE(219)
				::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(219)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 vector3 = this->_vectors3->get(name);		HX_STACK_VAR(vector3,"vector3");
				struct _Function_2_1{
					inline static bool Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &vector3,::com::gamestudiohx::babylonhx::materials::Effect _this,::String &name){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",219,0x7570435c)
						{
							HX_STACK_LINE(219)
							Array< Float > _g35 = _this->_valueCache->get(name);		HX_STACK_VAR(_g35,"_g35");
							HX_STACK_LINE(219)
							Float _g36 = _g35->__get((int)0);		HX_STACK_VAR(_g36,"_g36");
							HX_STACK_LINE(219)
							return (_g36 == vector3->x);
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static bool Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &vector3,::com::gamestudiohx::babylonhx::materials::Effect _this,::String &name){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",219,0x7570435c)
						{
							HX_STACK_LINE(219)
							Array< Float > _g37 = _this->_valueCache->get(name);		HX_STACK_VAR(_g37,"_g37");
							HX_STACK_LINE(219)
							Float _g38 = _g37->__get((int)1);		HX_STACK_VAR(_g38,"_g38");
							HX_STACK_LINE(219)
							return (_g38 == vector3->y);
						}
						return null();
					}
				};
				struct _Function_2_3{
					inline static bool Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &vector3,::com::gamestudiohx::babylonhx::materials::Effect _this,::String &name){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",219,0x7570435c)
						{
							HX_STACK_LINE(219)
							Array< Float > _g39 = _this->_valueCache->get(name);		HX_STACK_VAR(_g39,"_g39");
							HX_STACK_LINE(219)
							Float _g40 = _g39->__get((int)2);		HX_STACK_VAR(_g40,"_g40");
							HX_STACK_LINE(219)
							return (_g40 == vector3->z);
						}
						return null();
					}
				};
				HX_STACK_LINE(219)
				if ((!(((  (((  (((  ((_this->_valueCache->exists(name))) ? bool(_Function_2_1::Block(vector3,_this,name)) : bool(false) ))) ? bool(_Function_2_2::Block(vector3,_this,name)) : bool(false) ))) ? bool(_Function_2_3::Block(vector3,_this,name)) : bool(false) ))))){
					HX_STACK_LINE(219)
					{
						HX_STACK_LINE(219)
						Float x = vector3->x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(219)
						Float y = vector3->y;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(219)
						Float z = vector3->z;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(219)
						if ((!(_this->_valueCache->exists(name)))){
							HX_STACK_LINE(219)
							_this->_valueCache->set(name,Array_obj< Float >::__new().Add(x).Add(y).Add(z));
						}
						else{
							HX_STACK_LINE(219)
							Array< Float > _g41 = _this->_valueCache->get(name);		HX_STACK_VAR(_g41,"_g41");
							HX_STACK_LINE(219)
							_g41[(int)0] = x;
							HX_STACK_LINE(219)
							Array< Float > _g42 = _this->_valueCache->get(name);		HX_STACK_VAR(_g42,"_g42");
							HX_STACK_LINE(219)
							_g42[(int)1] = y;
							HX_STACK_LINE(219)
							Array< Float > _g43 = _this->_valueCache->get(name);		HX_STACK_VAR(_g43,"_g43");
							HX_STACK_LINE(219)
							_g43[(int)2] = z;
						}
					}
					HX_STACK_LINE(219)
					{
						HX_STACK_LINE(219)
						Dynamic uniform = _this->getUniform(name);		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(219)
						if (((uniform != null()))){
							HX_STACK_LINE(219)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(219)
							::openfl::gl::GL_obj::lime_gl_uniform3f(location,vector3->x,vector3->y,vector3->z);
						}
					}
				}
			}
;
		}
		HX_STACK_LINE(223)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_matrices->keys());  __it->hasNext(); ){
			::String name = __it->next();
			{
				HX_STACK_LINE(224)
				::com::gamestudiohx::babylonhx::tools::math::Matrix matrix = this->_matrices->get(name);		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					Dynamic uniform = this->_effect->getUniform(name);		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(224)
					if (((uniform != null()))){
						HX_STACK_LINE(224)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(224)
						Dynamic v;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(224)
						{
							HX_STACK_LINE(224)
							::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(224)
							Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(224)
							v = data;
						}
						HX_STACK_LINE(224)
						::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
					}
				}
			}
;
		}
	}
return null();
}


Void ShaderMaterial_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.ShaderMaterial","dispose",0xf16fccb1,"com.gamestudiohx.babylonhx.materials.ShaderMaterial.dispose","com/gamestudiohx/babylonhx/materials/ShaderMaterial.hx",228,0x7570435c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(229)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_textures->keys());  __it->hasNext(); ){
			::String name = __it->next();
			this->_textures->get(name)->__Field(HX_CSTRING("dispose"),true)();
		}
		HX_STACK_LINE(233)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(233)
		this->_textures = _g;
		HX_STACK_LINE(235)
		this->baseDispose();
	}
return null();
}



ShaderMaterial_obj::ShaderMaterial_obj()
{
}

void ShaderMaterial_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderMaterial);
	HX_MARK_MEMBER_NAME(_shaderPath,"_shaderPath");
	HX_MARK_MEMBER_NAME(_options,"_options");
	HX_MARK_MEMBER_NAME(_textures,"_textures");
	HX_MARK_MEMBER_NAME(_floats,"_floats");
	HX_MARK_MEMBER_NAME(_floatsArrays,"_floatsArrays");
	HX_MARK_MEMBER_NAME(_colors3,"_colors3");
	HX_MARK_MEMBER_NAME(_colors4,"_colors4");
	HX_MARK_MEMBER_NAME(_vectors2,"_vectors2");
	HX_MARK_MEMBER_NAME(_vectors3,"_vectors3");
	HX_MARK_MEMBER_NAME(_matrices,"_matrices");
	HX_MARK_MEMBER_NAME(_cachedWorldViewMatrix,"_cachedWorldViewMatrix");
	::com::gamestudiohx::babylonhx::materials::Material_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShaderMaterial_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_shaderPath,"_shaderPath");
	HX_VISIT_MEMBER_NAME(_options,"_options");
	HX_VISIT_MEMBER_NAME(_textures,"_textures");
	HX_VISIT_MEMBER_NAME(_floats,"_floats");
	HX_VISIT_MEMBER_NAME(_floatsArrays,"_floatsArrays");
	HX_VISIT_MEMBER_NAME(_colors3,"_colors3");
	HX_VISIT_MEMBER_NAME(_colors4,"_colors4");
	HX_VISIT_MEMBER_NAME(_vectors2,"_vectors2");
	HX_VISIT_MEMBER_NAME(_vectors3,"_vectors3");
	HX_VISIT_MEMBER_NAME(_matrices,"_matrices");
	HX_VISIT_MEMBER_NAME(_cachedWorldViewMatrix,"_cachedWorldViewMatrix");
	::com::gamestudiohx::babylonhx::materials::Material_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ShaderMaterial_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_floats") ) { return _floats; }
		if (HX_FIELD_EQ(inName,"isReady") ) { return isReady_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_options") ) { return _options; }
		if (HX_FIELD_EQ(inName,"_colors3") ) { return _colors3; }
		if (HX_FIELD_EQ(inName,"_colors4") ) { return _colors4; }
		if (HX_FIELD_EQ(inName,"setFloat") ) { return setFloat_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { return _textures; }
		if (HX_FIELD_EQ(inName,"_vectors2") ) { return _vectors2; }
		if (HX_FIELD_EQ(inName,"_vectors3") ) { return _vectors3; }
		if (HX_FIELD_EQ(inName,"_matrices") ) { return _matrices; }
		if (HX_FIELD_EQ(inName,"setFloats") ) { return setFloats_dyn(); }
		if (HX_FIELD_EQ(inName,"setColor3") ) { return setColor3_dyn(); }
		if (HX_FIELD_EQ(inName,"setColor4") ) { return setColor4_dyn(); }
		if (HX_FIELD_EQ(inName,"setMatrix") ) { return setMatrix_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setTexture") ) { return setTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector2") ) { return setVector2_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector3") ) { return setVector3_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_shaderPath") ) { return _shaderPath; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_floatsArrays") ) { return _floatsArrays; }
		if (HX_FIELD_EQ(inName,"_checkUniform") ) { return _checkUniform_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"needAlphaTesting") ) { return needAlphaTesting_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needAlphaBlending") ) { return needAlphaBlending_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_cachedWorldViewMatrix") ) { return _cachedWorldViewMatrix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShaderMaterial_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_floats") ) { _floats=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_options") ) { _options=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colors3") ) { _colors3=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colors4") ) { _colors4=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { _textures=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vectors2") ) { _vectors2=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vectors3") ) { _vectors3=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrices") ) { _matrices=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_shaderPath") ) { _shaderPath=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_floatsArrays") ) { _floatsArrays=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_cachedWorldViewMatrix") ) { _cachedWorldViewMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderMaterial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_shaderPath"));
	outFields->push(HX_CSTRING("_options"));
	outFields->push(HX_CSTRING("_textures"));
	outFields->push(HX_CSTRING("_floats"));
	outFields->push(HX_CSTRING("_floatsArrays"));
	outFields->push(HX_CSTRING("_colors3"));
	outFields->push(HX_CSTRING("_colors4"));
	outFields->push(HX_CSTRING("_vectors2"));
	outFields->push(HX_CSTRING("_vectors3"));
	outFields->push(HX_CSTRING("_matrices"));
	outFields->push(HX_CSTRING("_cachedWorldViewMatrix"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ShaderMaterial_obj,_shaderPath),HX_CSTRING("_shaderPath")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ShaderMaterial_obj,_options),HX_CSTRING("_options")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ShaderMaterial_obj,_textures),HX_CSTRING("_textures")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ShaderMaterial_obj,_floats),HX_CSTRING("_floats")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ShaderMaterial_obj,_floatsArrays),HX_CSTRING("_floatsArrays")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ShaderMaterial_obj,_colors3),HX_CSTRING("_colors3")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ShaderMaterial_obj,_colors4),HX_CSTRING("_colors4")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ShaderMaterial_obj,_vectors2),HX_CSTRING("_vectors2")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ShaderMaterial_obj,_vectors3),HX_CSTRING("_vectors3")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ShaderMaterial_obj,_matrices),HX_CSTRING("_matrices")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(ShaderMaterial_obj,_cachedWorldViewMatrix),HX_CSTRING("_cachedWorldViewMatrix")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_shaderPath"),
	HX_CSTRING("_options"),
	HX_CSTRING("_textures"),
	HX_CSTRING("_floats"),
	HX_CSTRING("_floatsArrays"),
	HX_CSTRING("_colors3"),
	HX_CSTRING("_colors4"),
	HX_CSTRING("_vectors2"),
	HX_CSTRING("_vectors3"),
	HX_CSTRING("_matrices"),
	HX_CSTRING("_cachedWorldViewMatrix"),
	HX_CSTRING("needAlphaBlending"),
	HX_CSTRING("needAlphaTesting"),
	HX_CSTRING("_checkUniform"),
	HX_CSTRING("setTexture"),
	HX_CSTRING("setFloat"),
	HX_CSTRING("setFloats"),
	HX_CSTRING("setColor3"),
	HX_CSTRING("setColor4"),
	HX_CSTRING("setVector2"),
	HX_CSTRING("setVector3"),
	HX_CSTRING("setMatrix"),
	HX_CSTRING("isReady"),
	HX_CSTRING("bind"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderMaterial_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderMaterial_obj::__mClass,"__mClass");
};

#endif

Class ShaderMaterial_obj::__mClass;

void ShaderMaterial_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.materials.ShaderMaterial"), hx::TCanCast< ShaderMaterial_obj> ,sStaticFields,sMemberFields,
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

void ShaderMaterial_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
