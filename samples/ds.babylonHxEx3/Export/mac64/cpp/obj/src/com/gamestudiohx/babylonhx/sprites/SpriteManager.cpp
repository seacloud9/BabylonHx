#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Engine
#include <com/gamestudiohx/babylonhx/Engine.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Scene
#include <com/gamestudiohx/babylonhx/Scene.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Effect
#include <com/gamestudiohx/babylonhx/materials/Effect.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BaseTexture
#include <com/gamestudiohx/babylonhx/materials/textures/BaseTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_Texture
#include <com/gamestudiohx/babylonhx/materials/textures/Texture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_BabylonGLBuffer
#include <com/gamestudiohx/babylonhx/mesh/BabylonGLBuffer.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_sprites_Sprite
#include <com/gamestudiohx/babylonhx/sprites/Sprite.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_sprites_SpriteManager
#include <com/gamestudiohx/babylonhx/sprites/SpriteManager.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
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
#ifndef INCLUDED_openfl_gl_GL
#include <openfl/gl/GL.h>
#endif
#ifndef INCLUDED_openfl_gl_GLBuffer
#include <openfl/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLObject
#include <openfl/gl/GLObject.h>
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
namespace sprites{

Void SpriteManager_obj::__construct(::String name,::String imgUrl,int capacity,int cellSize,::com::gamestudiohx::babylonhx::Scene scene,hx::Null< Float >  __o_epsilon)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.sprites.SpriteManager","new",0x14ad50a8,"com.gamestudiohx.babylonhx.sprites.SpriteManager.new","com/gamestudiohx/babylonhx/sprites/SpriteManager.hx",44,0x7578f42a)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(imgUrl,"imgUrl")
HX_STACK_ARG(capacity,"capacity")
HX_STACK_ARG(cellSize,"cellSize")
HX_STACK_ARG(scene,"scene")
HX_STACK_ARG(__o_epsilon,"epsilon")
Float epsilon = __o_epsilon.Default(0.01);
{
	HX_STACK_LINE(45)
	this->name = name;
	HX_STACK_LINE(46)
	this->_capacity = capacity;
	HX_STACK_LINE(47)
	this->cellSize = cellSize;
	HX_STACK_LINE(48)
	::com::gamestudiohx::babylonhx::materials::textures::Texture _g = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::__new(imgUrl,scene,true,false);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(48)
	this->_spriteTexture = _g;
	HX_STACK_LINE(49)
	this->_spriteTexture->wrapU = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::CLAMP_ADDRESSMODE;
	HX_STACK_LINE(50)
	this->_spriteTexture->wrapV = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::CLAMP_ADDRESSMODE;
	HX_STACK_LINE(51)
	this->_epsilon = epsilon;
	HX_STACK_LINE(53)
	this->_scene = scene;
	HX_STACK_LINE(54)
	this->_scene->spriteManagers->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(57)
	this->_vertexDeclaration = Array_obj< int >::__new().Add((int)3).Add((int)4).Add((int)4).Add((int)4);
	HX_STACK_LINE(58)
	this->_vertexStrideSize = (int)60;
	HX_STACK_LINE(59)
	::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g1 = scene->getEngine()->createDynamicVertexBuffer(((capacity * this->_vertexStrideSize) * (int)4));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(59)
	this->_vertexBuffer = _g1;
	HX_STACK_LINE(61)
	Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
	HX_STACK_LINE(62)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(63)
		while((true)){
			HX_STACK_LINE(63)
			if ((!(((_g2 < capacity))))){
				HX_STACK_LINE(63)
				break;
			}
			HX_STACK_LINE(63)
			int count = (_g2)++;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(64)
			indices->push(index);
			HX_STACK_LINE(65)
			indices->push((index + (int)1));
			HX_STACK_LINE(66)
			indices->push((index + (int)2));
			HX_STACK_LINE(67)
			indices->push(index);
			HX_STACK_LINE(68)
			indices->push((index + (int)2));
			HX_STACK_LINE(69)
			indices->push((index + (int)3));
			HX_STACK_LINE(70)
			hx::AddEq(index,(int)4);
		}
	}
	HX_STACK_LINE(73)
	::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g2 = scene->getEngine()->createIndexBuffer(indices);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(73)
	this->_indexBuffer = _g2;
	HX_STACK_LINE(74)
	this->_vertices = Array_obj< Float >::__new();
	HX_STACK_LINE(77)
	this->sprites = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(80)
	::com::gamestudiohx::babylonhx::materials::Effect _g3 = this->_scene->getEngine()->createEffect(HX_CSTRING("sprites"),Array_obj< ::String >::__new().Add(HX_CSTRING("position")).Add(HX_CSTRING("options")).Add(HX_CSTRING("cellInfo")).Add(HX_CSTRING("color")),Array_obj< ::String >::__new().Add(HX_CSTRING("view")).Add(HX_CSTRING("projection")).Add(HX_CSTRING("textureInfos")).Add(HX_CSTRING("alphaTest")),Array_obj< ::String >::__new().Add(HX_CSTRING("diffuseSampler")),HX_CSTRING(""),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(80)
	this->_effectBase = _g3;
	HX_STACK_LINE(85)
	::com::gamestudiohx::babylonhx::materials::Effect _g4 = this->_scene->getEngine()->createEffect(HX_CSTRING("sprites"),Array_obj< ::String >::__new().Add(HX_CSTRING("position")).Add(HX_CSTRING("options")).Add(HX_CSTRING("cellInfo")).Add(HX_CSTRING("color")),Array_obj< ::String >::__new().Add(HX_CSTRING("view")).Add(HX_CSTRING("projection")).Add(HX_CSTRING("textureInfos")).Add(HX_CSTRING("alphaTest")).Add(HX_CSTRING("vFogInfos")).Add(HX_CSTRING("vFogColor")),Array_obj< ::String >::__new().Add(HX_CSTRING("diffuseSampler")),HX_CSTRING("#define FOG"),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(85)
	this->_effectFog = _g4;
}
;
	return null();
}

//SpriteManager_obj::~SpriteManager_obj() { }

Dynamic SpriteManager_obj::__CreateEmpty() { return  new SpriteManager_obj; }
hx::ObjectPtr< SpriteManager_obj > SpriteManager_obj::__new(::String name,::String imgUrl,int capacity,int cellSize,::com::gamestudiohx::babylonhx::Scene scene,hx::Null< Float >  __o_epsilon)
{  hx::ObjectPtr< SpriteManager_obj > result = new SpriteManager_obj();
	result->__construct(name,imgUrl,capacity,cellSize,scene,__o_epsilon);
	return result;}

Dynamic SpriteManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpriteManager_obj > result = new SpriteManager_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void SpriteManager_obj::onDispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.sprites.SpriteManager","onDispose",0x5d7a1f88,"com.gamestudiohx.babylonhx.sprites.SpriteManager.onDispose","com/gamestudiohx/babylonhx/sprites/SpriteManager.hx",91,0x7578f42a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteManager_obj,onDispose,(void))

int SpriteManager_obj::render( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.sprites.SpriteManager","render",0x3957480e,"com.gamestudiohx.babylonhx.sprites.SpriteManager.render","com/gamestudiohx/babylonhx/sprites/SpriteManager.hx",95,0x7578f42a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	if (((  ((!(((  ((!(((  ((!((!(this->_effectBase->isReady()))))) ? bool(!(this->_effectFog->isReady())) : bool(true) ))))) ? bool((this->_spriteTexture != null())) : bool(true) ))))) ? bool(!(this->_spriteTexture->isReady())) : bool(true) ))){
		HX_STACK_LINE(98)
		return (int)0;
	}
	HX_STACK_LINE(100)
	::com::gamestudiohx::babylonhx::Engine engine = this->_scene->getEngine();		HX_STACK_VAR(engine,"engine");
	HX_STACK_LINE(101)
	Dynamic baseSize = this->_spriteTexture->getBaseSize();		HX_STACK_VAR(baseSize,"baseSize");
	HX_STACK_LINE(104)
	Float deltaTime = ::com::gamestudiohx::babylonhx::tools::Tools_obj::GetDeltaTime();		HX_STACK_VAR(deltaTime,"deltaTime");
	HX_STACK_LINE(105)
	Float _g = ::Math_obj::min(this->_capacity,this->sprites->length);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(105)
	int max = ::Std_obj::_int(_g);		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(106)
	Float rowSize = (Float(baseSize->__Field(HX_CSTRING("width"),true)) / Float(this->cellSize));		HX_STACK_VAR(rowSize,"rowSize");
	HX_STACK_LINE(108)
	int offset = (int)0;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(109)
	{
		HX_STACK_LINE(109)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(109)
		while((true)){
			HX_STACK_LINE(109)
			if ((!(((_g1 < max))))){
				HX_STACK_LINE(109)
				break;
			}
			HX_STACK_LINE(109)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(110)
			::com::gamestudiohx::babylonhx::sprites::Sprite sprite = this->sprites->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::sprites::Sprite >();		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(111)
			if (((sprite == null()))){
				HX_STACK_LINE(112)
				continue;
			}
			HX_STACK_LINE(115)
			sprite->animate(deltaTime);
			HX_STACK_LINE(117)
			int _g11 = (offset)++;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(117)
			this->_appendSpriteVertex(_g11,sprite,(int)0,(int)0,rowSize);
			HX_STACK_LINE(118)
			int _g2 = (offset)++;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(118)
			this->_appendSpriteVertex(_g2,sprite,(int)1,(int)0,rowSize);
			HX_STACK_LINE(119)
			int _g3 = (offset)++;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(119)
			this->_appendSpriteVertex(_g3,sprite,(int)1,(int)1,rowSize);
			HX_STACK_LINE(120)
			int _g4 = (offset)++;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(120)
			this->_appendSpriteVertex(_g4,sprite,(int)0,(int)1,rowSize);
		}
	}
	HX_STACK_LINE(122)
	{
		HX_STACK_LINE(122)
		Dynamic vertices = this->_vertices;		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(122)
		int length = (max * this->_vertexStrideSize);		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			::openfl::gl::GLBuffer buffer = this->_vertexBuffer->buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(122)
			::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
		}
		HX_STACK_LINE(122)
		if (((length != (int)0))){
			HX_STACK_LINE(122)
			::openfl::utils::IMemoryRange data = ::openfl::utils::Float32Array_obj::__new(vertices,(int)0,length);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(122)
			::openfl::utils::ByteArray _g5 = data->getByteBuffer();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(122)
			int _g6 = data->getStart();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(122)
			int _g7 = data->getLength();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(122)
			::openfl::gl::GL_obj::lime_gl_buffer_sub_data((int)34962,(int)0,_g5,_g6,_g7);
		}
		else{
			HX_STACK_LINE(122)
			::openfl::utils::IMemoryRange data = ::openfl::utils::Float32Array_obj::__new(vertices,null(),null());		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(122)
			::openfl::utils::ByteArray _g8 = data->getByteBuffer();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(122)
			int _g9 = data->getStart();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(122)
			int _g10 = data->getLength();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(122)
			::openfl::gl::GL_obj::lime_gl_buffer_sub_data((int)34962,(int)0,_g8,_g9,_g10);
		}
		HX_STACK_LINE(122)
		::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,null());
	}
	HX_STACK_LINE(125)
	::com::gamestudiohx::babylonhx::materials::Effect effect = this->_effectBase;		HX_STACK_VAR(effect,"effect");
	HX_STACK_LINE(127)
	if (((this->_scene->fogMode != ::com::gamestudiohx::babylonhx::Scene_obj::FOGMODE_NONE))){
		HX_STACK_LINE(128)
		effect = this->_effectFog;
	}
	HX_STACK_LINE(131)
	engine->enableEffect(effect);
	HX_STACK_LINE(133)
	::com::gamestudiohx::babylonhx::tools::math::Matrix viewMatrix = this->_scene->getViewMatrix();		HX_STACK_VAR(viewMatrix,"viewMatrix");
	HX_STACK_LINE(134)
	effect->setTexture(HX_CSTRING("diffuseSampler"),this->_spriteTexture);
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		Dynamic uniform = effect->getUniform(HX_CSTRING("view"));		HX_STACK_VAR(uniform,"uniform");
		HX_STACK_LINE(135)
		if (((uniform != null()))){
			HX_STACK_LINE(135)
			Dynamic location = uniform;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(135)
			Dynamic v;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(viewMatrix->m,null(),null());		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(135)
				Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(135)
				v = data;
			}
			HX_STACK_LINE(135)
			::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
		}
	}
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		::com::gamestudiohx::babylonhx::tools::math::Matrix matrix = this->_scene->getProjectionMatrix();		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			Dynamic uniform = effect->getUniform(HX_CSTRING("projection"));		HX_STACK_VAR(uniform,"uniform");
			HX_STACK_LINE(136)
			if (((uniform != null()))){
				HX_STACK_LINE(136)
				Dynamic location = uniform;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(136)
				Dynamic v;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(136)
				{
					HX_STACK_LINE(136)
					::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(136)
					Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(136)
					v = data;
				}
				HX_STACK_LINE(136)
				::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
			}
		}
	}
	HX_STACK_LINE(138)
	{
		HX_STACK_LINE(138)
		Float x = (Float(this->cellSize) / Float(baseSize->__Field(HX_CSTRING("width"),true)));		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(138)
		Float y = (Float(this->cellSize) / Float(baseSize->__Field(HX_CSTRING("height"),true)));		HX_STACK_VAR(y,"y");
		struct _Function_2_1{
			inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &x){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/sprites/SpriteManager.hx",138,0x7578f42a)
				{
					HX_STACK_LINE(138)
					Array< Float > _g11 = effect->_valueCache->get(HX_CSTRING("textureInfos"));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(138)
					Float _g12 = _g11->__get((int)0);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(138)
					return (_g12 == x);
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &y){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/sprites/SpriteManager.hx",138,0x7578f42a)
				{
					HX_STACK_LINE(138)
					Array< Float > _g13 = effect->_valueCache->get(HX_CSTRING("textureInfos"));		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(138)
					Float _g14 = _g13->__get((int)1);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(138)
					return (_g14 == y);
				}
				return null();
			}
		};
		HX_STACK_LINE(138)
		if ((!(((  (((  ((effect->_valueCache->exists(HX_CSTRING("textureInfos")))) ? bool(_Function_2_1::Block(effect,x)) : bool(false) ))) ? bool(_Function_2_2::Block(effect,y)) : bool(false) ))))){
			HX_STACK_LINE(138)
			if ((!(effect->_valueCache->exists(HX_CSTRING("textureInfos"))))){
				HX_STACK_LINE(138)
				effect->_valueCache->set(HX_CSTRING("textureInfos"),Array_obj< Float >::__new().Add(x).Add(y));
			}
			else{
				HX_STACK_LINE(138)
				Array< Float > _g15 = effect->_valueCache->get(HX_CSTRING("textureInfos"));		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(138)
				_g15[(int)0] = x;
				HX_STACK_LINE(138)
				Array< Float > _g16 = effect->_valueCache->get(HX_CSTRING("textureInfos"));		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(138)
				_g16[(int)1] = y;
			}
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				Dynamic uniform = effect->getUniform(HX_CSTRING("textureInfos"));		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(138)
				if (((uniform != null()))){
					HX_STACK_LINE(138)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(138)
					::openfl::gl::GL_obj::lime_gl_uniform2f(location,x,y);
				}
			}
		}
	}
	HX_STACK_LINE(141)
	if (((this->_scene->fogMode != ::com::gamestudiohx::babylonhx::Scene_obj::FOGMODE_NONE))){
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			Float x = this->_scene->fogMode;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(142)
			Float y = this->_scene->fogStart;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(142)
			Float z = this->_scene->fogEnd;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(142)
			Float w = this->_scene->fogDensity;		HX_STACK_VAR(w,"w");
			struct _Function_3_1{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &x){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/sprites/SpriteManager.hx",142,0x7578f42a)
					{
						HX_STACK_LINE(142)
						Array< Float > _g17 = effect->_valueCache->get(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(142)
						Float _g18 = _g17->__get((int)0);		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(142)
						return (_g18 == x);
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/sprites/SpriteManager.hx",142,0x7578f42a)
					{
						HX_STACK_LINE(142)
						Array< Float > _g19 = effect->_valueCache->get(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(142)
						Float _g20 = _g19->__get((int)1);		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(142)
						return (_g20 == y);
					}
					return null();
				}
			};
			struct _Function_3_3{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &z){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/sprites/SpriteManager.hx",142,0x7578f42a)
					{
						HX_STACK_LINE(142)
						Array< Float > _g21 = effect->_valueCache->get(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(142)
						Float _g22 = _g21->__get((int)2);		HX_STACK_VAR(_g22,"_g22");
						HX_STACK_LINE(142)
						return (_g22 == z);
					}
					return null();
				}
			};
			struct _Function_3_4{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &w){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/sprites/SpriteManager.hx",142,0x7578f42a)
					{
						HX_STACK_LINE(142)
						Array< Float > _g23 = effect->_valueCache->get(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(_g23,"_g23");
						HX_STACK_LINE(142)
						Float _g24 = _g23->__get((int)3);		HX_STACK_VAR(_g24,"_g24");
						HX_STACK_LINE(142)
						return (_g24 == w);
					}
					return null();
				}
			};
			HX_STACK_LINE(142)
			if ((!(((  (((  (((  (((  ((effect->_valueCache->exists(HX_CSTRING("vFogInfos")))) ? bool(_Function_3_1::Block(effect,x)) : bool(false) ))) ? bool(_Function_3_2::Block(effect,y)) : bool(false) ))) ? bool(_Function_3_3::Block(effect,z)) : bool(false) ))) ? bool(_Function_3_4::Block(effect,w)) : bool(false) ))))){
				HX_STACK_LINE(142)
				if ((!(effect->_valueCache->exists(HX_CSTRING("vFogInfos"))))){
					HX_STACK_LINE(142)
					effect->_valueCache->set(HX_CSTRING("vFogInfos"),Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add(w));
				}
				else{
					HX_STACK_LINE(142)
					Array< Float > _g25 = effect->_valueCache->get(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(142)
					_g25[(int)0] = x;
					HX_STACK_LINE(142)
					Array< Float > _g26 = effect->_valueCache->get(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(142)
					_g26[(int)1] = y;
					HX_STACK_LINE(142)
					Array< Float > _g27 = effect->_valueCache->get(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(142)
					_g27[(int)2] = z;
					HX_STACK_LINE(142)
					Array< Float > _g28 = effect->_valueCache->get(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(_g28,"_g28");
					HX_STACK_LINE(142)
					_g28[(int)3] = w;
				}
				HX_STACK_LINE(142)
				{
					HX_STACK_LINE(142)
					Dynamic uniform = effect->getUniform(HX_CSTRING("vFogInfos"));		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(142)
					if (((uniform != null()))){
						HX_STACK_LINE(142)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(142)
						::openfl::gl::GL_obj::lime_gl_uniform4f(location,x,y,z,w);
					}
				}
			}
		}
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(143)
			::com::gamestudiohx::babylonhx::tools::math::Color3 color3 = this->_scene->fogColor;		HX_STACK_VAR(color3,"color3");
			struct _Function_3_1{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/sprites/SpriteManager.hx",143,0x7578f42a)
					{
						HX_STACK_LINE(143)
						Array< Float > _g29 = effect->_valueCache->get(HX_CSTRING("vFogColor"));		HX_STACK_VAR(_g29,"_g29");
						HX_STACK_LINE(143)
						Float _g30 = _g29->__get((int)0);		HX_STACK_VAR(_g30,"_g30");
						HX_STACK_LINE(143)
						return (_g30 == color3->r);
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/sprites/SpriteManager.hx",143,0x7578f42a)
					{
						HX_STACK_LINE(143)
						Array< Float > _g31 = effect->_valueCache->get(HX_CSTRING("vFogColor"));		HX_STACK_VAR(_g31,"_g31");
						HX_STACK_LINE(143)
						Float _g32 = _g31->__get((int)1);		HX_STACK_VAR(_g32,"_g32");
						HX_STACK_LINE(143)
						return (_g32 == color3->g);
					}
					return null();
				}
			};
			struct _Function_3_3{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,::com::gamestudiohx::babylonhx::tools::math::Color3 &color3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/sprites/SpriteManager.hx",143,0x7578f42a)
					{
						HX_STACK_LINE(143)
						Array< Float > _g33 = effect->_valueCache->get(HX_CSTRING("vFogColor"));		HX_STACK_VAR(_g33,"_g33");
						HX_STACK_LINE(143)
						Float _g34 = _g33->__get((int)2);		HX_STACK_VAR(_g34,"_g34");
						HX_STACK_LINE(143)
						return (_g34 == color3->b);
					}
					return null();
				}
			};
			HX_STACK_LINE(143)
			if ((!(((  (((  (((  ((effect->_valueCache->exists(HX_CSTRING("vFogColor")))) ? bool(_Function_3_1::Block(effect,color3)) : bool(false) ))) ? bool(_Function_3_2::Block(effect,color3)) : bool(false) ))) ? bool(_Function_3_3::Block(effect,color3)) : bool(false) ))))){
				HX_STACK_LINE(143)
				{
					HX_STACK_LINE(143)
					Float x = color3->r;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(143)
					Float y = color3->g;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(143)
					Float z = color3->b;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(143)
					if ((!(effect->_valueCache->exists(HX_CSTRING("vFogColor"))))){
						HX_STACK_LINE(143)
						effect->_valueCache->set(HX_CSTRING("vFogColor"),Array_obj< Float >::__new().Add(x).Add(y).Add(z));
					}
					else{
						HX_STACK_LINE(143)
						Array< Float > _g35 = effect->_valueCache->get(HX_CSTRING("vFogColor"));		HX_STACK_VAR(_g35,"_g35");
						HX_STACK_LINE(143)
						_g35[(int)0] = x;
						HX_STACK_LINE(143)
						Array< Float > _g36 = effect->_valueCache->get(HX_CSTRING("vFogColor"));		HX_STACK_VAR(_g36,"_g36");
						HX_STACK_LINE(143)
						_g36[(int)1] = y;
						HX_STACK_LINE(143)
						Array< Float > _g37 = effect->_valueCache->get(HX_CSTRING("vFogColor"));		HX_STACK_VAR(_g37,"_g37");
						HX_STACK_LINE(143)
						_g37[(int)2] = z;
					}
				}
				HX_STACK_LINE(143)
				{
					HX_STACK_LINE(143)
					Dynamic uniform = effect->getUniform(HX_CSTRING("vFogColor"));		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(143)
					if (((uniform != null()))){
						HX_STACK_LINE(143)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(143)
						::openfl::gl::GL_obj::lime_gl_uniform3f(location,color3->r,color3->g,color3->b);
					}
				}
			}
		}
	}
	HX_STACK_LINE(147)
	engine->bindBuffers(this->_vertexBuffer,this->_indexBuffer,this->_vertexDeclaration,this->_vertexStrideSize,effect);
	struct _Function_1_1{
		inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/sprites/SpriteManager.hx",150,0x7578f42a)
			{
				HX_STACK_LINE(150)
				Array< Float > _g38 = effect->_valueCache->get(HX_CSTRING("alphaTest"));		HX_STACK_VAR(_g38,"_g38");
				HX_STACK_LINE(150)
				Float _g39 = _g38->__get((int)0);		HX_STACK_VAR(_g39,"_g39");
				HX_STACK_LINE(150)
				return (_g39 == 1.0);
			}
			return null();
		}
	};
	HX_STACK_LINE(150)
	if ((!(((  ((effect->_valueCache->exists(HX_CSTRING("alphaTest")))) ? bool(_Function_1_1::Block(effect)) : bool(false) ))))){
		HX_STACK_LINE(150)
		effect->_valueCache->set(HX_CSTRING("alphaTest"),Array_obj< Float >::__new().Add(1.0));
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			Dynamic uniform = effect->getUniform(HX_CSTRING("alphaTest"));		HX_STACK_VAR(uniform,"uniform");
			HX_STACK_LINE(150)
			if (((uniform != null()))){
				HX_STACK_LINE(150)
				Dynamic location = uniform;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(150)
				::openfl::gl::GL_obj::lime_gl_uniform1i(location,(int)1);
			}
		}
	}
	HX_STACK_LINE(151)
	engine->setColorWrite(false);
	HX_STACK_LINE(152)
	engine->draw(true,(int)0,(max * (int)6),null());
	HX_STACK_LINE(153)
	engine->setColorWrite(true);
	struct _Function_1_2{
		inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/sprites/SpriteManager.hx",154,0x7578f42a)
			{
				HX_STACK_LINE(154)
				Array< Float > _g40 = effect->_valueCache->get(HX_CSTRING("alphaTest"));		HX_STACK_VAR(_g40,"_g40");
				HX_STACK_LINE(154)
				Float _g41 = _g40->__get((int)0);		HX_STACK_VAR(_g41,"_g41");
				HX_STACK_LINE(154)
				return (_g41 == 0.0);
			}
			return null();
		}
	};
	HX_STACK_LINE(154)
	if ((!(((  ((effect->_valueCache->exists(HX_CSTRING("alphaTest")))) ? bool(_Function_1_2::Block(effect)) : bool(false) ))))){
		HX_STACK_LINE(154)
		effect->_valueCache->set(HX_CSTRING("alphaTest"),Array_obj< Float >::__new().Add(0.0));
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			Dynamic uniform = effect->getUniform(HX_CSTRING("alphaTest"));		HX_STACK_VAR(uniform,"uniform");
			HX_STACK_LINE(154)
			if (((uniform != null()))){
				HX_STACK_LINE(154)
				Dynamic location = uniform;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(154)
				::openfl::gl::GL_obj::lime_gl_uniform1i(location,(int)0);
			}
		}
	}
	HX_STACK_LINE(156)
	engine->setAlphaMode(::com::gamestudiohx::babylonhx::Engine_obj::ALPHA_COMBINE);
	HX_STACK_LINE(157)
	engine->draw(true,(int)0,(max * (int)6),null());
	HX_STACK_LINE(158)
	engine->setAlphaMode(::com::gamestudiohx::babylonhx::Engine_obj::ALPHA_DISABLE);
	HX_STACK_LINE(159)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteManager_obj,render,return )

Void SpriteManager_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.sprites.SpriteManager","dispose",0x2f3fc4e7,"com.gamestudiohx.babylonhx.sprites.SpriteManager.dispose","com/gamestudiohx/babylonhx/sprites/SpriteManager.hx",162,0x7578f42a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(163)
		if (((this->_vertexBuffer != null()))){
			HX_STACK_LINE(164)
			this->_scene->getEngine()->_releaseBuffer(this->_vertexBuffer);
			HX_STACK_LINE(165)
			this->_vertexBuffer = null();
		}
		HX_STACK_LINE(168)
		if (((this->_indexBuffer != null()))){
			HX_STACK_LINE(169)
			this->_scene->getEngine()->_releaseBuffer(this->_indexBuffer);
			HX_STACK_LINE(170)
			this->_indexBuffer = null();
		}
		HX_STACK_LINE(173)
		if (((this->_spriteTexture != null()))){
			HX_STACK_LINE(174)
			this->_spriteTexture->dispose();
			HX_STACK_LINE(175)
			this->_spriteTexture = null();
		}
		HX_STACK_LINE(181)
		this->_scene->spriteManagers->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(184)
		if (((this->onDispose_dyn() != null()))){
			HX_STACK_LINE(185)
			this->onDispose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteManager_obj,dispose,(void))

Void SpriteManager_obj::_appendSpriteVertex( int index,::com::gamestudiohx::babylonhx::sprites::Sprite sprite,Float offsetX,Float offsetY,Float rowSize){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.sprites.SpriteManager","_appendSpriteVertex",0xc9901eaa,"com.gamestudiohx.babylonhx.sprites.SpriteManager._appendSpriteVertex","com/gamestudiohx/babylonhx/sprites/SpriteManager.hx",189,0x7578f42a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(offsetX,"offsetX")
		HX_STACK_ARG(offsetY,"offsetY")
		HX_STACK_ARG(rowSize,"rowSize")
		HX_STACK_LINE(190)
		int arrayOffset = (index * (int)15);		HX_STACK_VAR(arrayOffset,"arrayOffset");
		HX_STACK_LINE(192)
		if (((offsetX == (int)0))){
			HX_STACK_LINE(193)
			offsetX = this->_epsilon;
		}
		else{
			HX_STACK_LINE(194)
			if (((offsetX == (int)1))){
				HX_STACK_LINE(195)
				offsetX = ((int)1 - this->_epsilon);
			}
		}
		HX_STACK_LINE(197)
		if (((offsetY == (int)0))){
			HX_STACK_LINE(198)
			offsetY = this->_epsilon;
		}
		else{
			HX_STACK_LINE(199)
			if (((offsetY == (int)1))){
				HX_STACK_LINE(200)
				offsetY = ((int)1 - this->_epsilon);
			}
		}
		HX_STACK_LINE(202)
		this->_vertices[arrayOffset] = sprite->position->x;
		HX_STACK_LINE(203)
		this->_vertices[(arrayOffset + (int)1)] = sprite->position->y;
		HX_STACK_LINE(204)
		this->_vertices[(arrayOffset + (int)2)] = sprite->position->z;
		HX_STACK_LINE(205)
		this->_vertices[(arrayOffset + (int)3)] = sprite->angle;
		HX_STACK_LINE(206)
		this->_vertices[(arrayOffset + (int)4)] = sprite->size;
		HX_STACK_LINE(207)
		this->_vertices[(arrayOffset + (int)5)] = offsetX;
		HX_STACK_LINE(208)
		this->_vertices[(arrayOffset + (int)6)] = offsetY;
		HX_STACK_LINE(209)
		if ((sprite->invertU)){
			HX_STACK_LINE(209)
			this->_vertices[(arrayOffset + (int)7)] = (int)1;
		}
		else{
			HX_STACK_LINE(209)
			this->_vertices[(arrayOffset + (int)7)] = (int)0;
		}
		HX_STACK_LINE(210)
		if ((sprite->invertV)){
			HX_STACK_LINE(210)
			this->_vertices[(arrayOffset + (int)8)] = (int)1;
		}
		else{
			HX_STACK_LINE(210)
			this->_vertices[(arrayOffset + (int)8)] = (int)0;
		}
		HX_STACK_LINE(211)
		int offset = ::Std_obj::_int((Float(sprite->cellIndex) / Float(rowSize)));		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(212)
		this->_vertices[(arrayOffset + (int)9)] = (sprite->cellIndex - (offset * rowSize));
		HX_STACK_LINE(213)
		this->_vertices[(arrayOffset + (int)10)] = offset;
		HX_STACK_LINE(215)
		this->_vertices[(arrayOffset + (int)11)] = sprite->color->r;
		HX_STACK_LINE(216)
		this->_vertices[(arrayOffset + (int)12)] = sprite->color->g;
		HX_STACK_LINE(217)
		this->_vertices[(arrayOffset + (int)13)] = sprite->color->b;
		HX_STACK_LINE(218)
		this->_vertices[(arrayOffset + (int)14)] = sprite->color->a;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(SpriteManager_obj,_appendSpriteVertex,(void))


SpriteManager_obj::SpriteManager_obj()
{
}

void SpriteManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteManager);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(cellSize,"cellSize");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(sprites,"sprites");
	HX_MARK_MEMBER_NAME(renderingGroupId,"renderingGroupId");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_vertexDeclaration,"_vertexDeclaration");
	HX_MARK_MEMBER_NAME(_vertexStrideSize,"_vertexStrideSize");
	HX_MARK_MEMBER_NAME(_epsilon,"_epsilon");
	HX_MARK_MEMBER_NAME(_spriteTexture,"_spriteTexture");
	HX_MARK_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_MARK_MEMBER_NAME(_vertices,"_vertices");
	HX_MARK_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_MARK_MEMBER_NAME(_effectBase,"_effectBase");
	HX_MARK_MEMBER_NAME(_effectFog,"_effectFog");
	HX_MARK_MEMBER_NAME(_capacity,"_capacity");
	HX_MARK_END_CLASS();
}

void SpriteManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(cellSize,"cellSize");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(sprites,"sprites");
	HX_VISIT_MEMBER_NAME(renderingGroupId,"renderingGroupId");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_vertexDeclaration,"_vertexDeclaration");
	HX_VISIT_MEMBER_NAME(_vertexStrideSize,"_vertexStrideSize");
	HX_VISIT_MEMBER_NAME(_epsilon,"_epsilon");
	HX_VISIT_MEMBER_NAME(_spriteTexture,"_spriteTexture");
	HX_VISIT_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_VISIT_MEMBER_NAME(_vertices,"_vertices");
	HX_VISIT_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_VISIT_MEMBER_NAME(_effectBase,"_effectBase");
	HX_VISIT_MEMBER_NAME(_effectFog,"_effectFog");
	HX_VISIT_MEMBER_NAME(_capacity,"_capacity");
}

Dynamic SpriteManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sprites") ) { return sprites; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cellSize") ) { return cellSize; }
		if (HX_FIELD_EQ(inName,"_epsilon") ) { return _epsilon; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_vertices") ) { return _vertices; }
		if (HX_FIELD_EQ(inName,"_capacity") ) { return _capacity; }
		if (HX_FIELD_EQ(inName,"onDispose") ) { return onDispose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_effectFog") ) { return _effectFog; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_effectBase") ) { return _effectBase; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { return _indexBuffer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { return _vertexBuffer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_spriteTexture") ) { return _spriteTexture; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"renderingGroupId") ) { return renderingGroupId; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_vertexStrideSize") ) { return _vertexStrideSize; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_vertexDeclaration") ) { return _vertexDeclaration; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_appendSpriteVertex") ) { return _appendSpriteVertex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpriteManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::gamestudiohx::babylonhx::Scene >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sprites") ) { sprites=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cellSize") ) { cellSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_epsilon") ) { _epsilon=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_vertices") ) { _vertices=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_capacity") ) { _capacity=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_effectFog") ) { _effectFog=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::Effect >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_effectBase") ) { _effectBase=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::Effect >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { _indexBuffer=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { _vertexBuffer=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_spriteTexture") ) { _spriteTexture=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::textures::Texture >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"renderingGroupId") ) { renderingGroupId=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_vertexStrideSize") ) { _vertexStrideSize=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_vertexDeclaration") ) { _vertexDeclaration=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpriteManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("cellSize"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("sprites"));
	outFields->push(HX_CSTRING("renderingGroupId"));
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("_vertexDeclaration"));
	outFields->push(HX_CSTRING("_vertexStrideSize"));
	outFields->push(HX_CSTRING("_epsilon"));
	outFields->push(HX_CSTRING("_spriteTexture"));
	outFields->push(HX_CSTRING("_vertexBuffer"));
	outFields->push(HX_CSTRING("_vertices"));
	outFields->push(HX_CSTRING("_indexBuffer"));
	outFields->push(HX_CSTRING("_effectBase"));
	outFields->push(HX_CSTRING("_effectFog"));
	outFields->push(HX_CSTRING("_capacity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(SpriteManager_obj,name),HX_CSTRING("name")},
	{hx::fsInt,(int)offsetof(SpriteManager_obj,cellSize),HX_CSTRING("cellSize")},
	{hx::fsInt,(int)offsetof(SpriteManager_obj,index),HX_CSTRING("index")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SpriteManager_obj,sprites),HX_CSTRING("sprites")},
	{hx::fsInt,(int)offsetof(SpriteManager_obj,renderingGroupId),HX_CSTRING("renderingGroupId")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Scene*/ ,(int)offsetof(SpriteManager_obj,_scene),HX_CSTRING("_scene")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(SpriteManager_obj,_vertexDeclaration),HX_CSTRING("_vertexDeclaration")},
	{hx::fsInt,(int)offsetof(SpriteManager_obj,_vertexStrideSize),HX_CSTRING("_vertexStrideSize")},
	{hx::fsFloat,(int)offsetof(SpriteManager_obj,_epsilon),HX_CSTRING("_epsilon")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::textures::Texture*/ ,(int)offsetof(SpriteManager_obj,_spriteTexture),HX_CSTRING("_spriteTexture")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer*/ ,(int)offsetof(SpriteManager_obj,_vertexBuffer),HX_CSTRING("_vertexBuffer")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(SpriteManager_obj,_vertices),HX_CSTRING("_vertices")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer*/ ,(int)offsetof(SpriteManager_obj,_indexBuffer),HX_CSTRING("_indexBuffer")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::Effect*/ ,(int)offsetof(SpriteManager_obj,_effectBase),HX_CSTRING("_effectBase")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::Effect*/ ,(int)offsetof(SpriteManager_obj,_effectFog),HX_CSTRING("_effectFog")},
	{hx::fsInt,(int)offsetof(SpriteManager_obj,_capacity),HX_CSTRING("_capacity")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("cellSize"),
	HX_CSTRING("index"),
	HX_CSTRING("sprites"),
	HX_CSTRING("renderingGroupId"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_vertexDeclaration"),
	HX_CSTRING("_vertexStrideSize"),
	HX_CSTRING("_epsilon"),
	HX_CSTRING("_spriteTexture"),
	HX_CSTRING("_vertexBuffer"),
	HX_CSTRING("_vertices"),
	HX_CSTRING("_indexBuffer"),
	HX_CSTRING("_effectBase"),
	HX_CSTRING("_effectFog"),
	HX_CSTRING("_capacity"),
	HX_CSTRING("onDispose"),
	HX_CSTRING("render"),
	HX_CSTRING("dispose"),
	HX_CSTRING("_appendSpriteVertex"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteManager_obj::__mClass,"__mClass");
};

#endif

Class SpriteManager_obj::__mClass;

void SpriteManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.sprites.SpriteManager"), hx::TCanCast< SpriteManager_obj> ,sStaticFields,sMemberFields,
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

void SpriteManager_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace sprites
