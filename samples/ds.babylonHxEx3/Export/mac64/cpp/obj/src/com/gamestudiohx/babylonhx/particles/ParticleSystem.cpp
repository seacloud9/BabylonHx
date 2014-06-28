#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_particles_Particle
#include <com/gamestudiohx/babylonhx/particles/Particle.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_particles_ParticleSystem
#include <com/gamestudiohx/babylonhx/particles/ParticleSystem.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_SmartArray
#include <com/gamestudiohx/babylonhx/tools/SmartArray.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_Tools
#include <com/gamestudiohx/babylonhx/tools/Tools.h>
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
namespace particles{

Void ParticleSystem_obj::__construct(::String name,int capacity,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.particles.ParticleSystem","new",0xf3cf9bfa,"com.gamestudiohx.babylonhx.particles.ParticleSystem.new","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",22,0x17713bd4)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(capacity,"capacity")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(99)
	this->maxAngularSpeed = (int)0;
	HX_STACK_LINE(98)
	this->minAngularSpeed = (int)0;
	HX_STACK_LINE(97)
	this->maxSize = (int)1;
	HX_STACK_LINE(96)
	this->minSize = (int)1;
	HX_STACK_LINE(94)
	this->maxLifeTime = (int)1;
	HX_STACK_LINE(93)
	this->minLifeTime = (int)1;
	HX_STACK_LINE(91)
	this->maxEmitPower = (int)1;
	HX_STACK_LINE(90)
	this->minEmitPower = (int)1;
	HX_STACK_LINE(80)
	this->disposeOnStop = false;
	HX_STACK_LINE(79)
	this->targetStopDuration = (int)0;
	HX_STACK_LINE(78)
	this->updateSpeed = 0.01;
	HX_STACK_LINE(77)
	this->manualEmitCount = (int)-1;
	HX_STACK_LINE(76)
	this->emitRate = (int)10;
	HX_STACK_LINE(75)
	this->emitter = null();
	HX_STACK_LINE(74)
	this->renderingGroupId = (int)0;
	HX_STACK_LINE(111)
	this->name = name;
	HX_STACK_LINE(112)
	this->id = name;
	HX_STACK_LINE(113)
	this->_capacity = capacity;
	HX_STACK_LINE(115)
	this->_scene = scene;
	HX_STACK_LINE(116)
	::com::gamestudiohx::babylonhx::Engine _g = scene->getEngine();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(116)
	this->_engine = _g;
	HX_STACK_LINE(118)
	scene->particleSystems->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(121)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(121)
	this->gravity = _g1;
	HX_STACK_LINE(122)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,1.0,(int)0);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(122)
	this->direction1 = _g2;
	HX_STACK_LINE(123)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,1.0,(int)0);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(123)
	this->direction2 = _g3;
	HX_STACK_LINE(124)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(-0.5,-0.5,-0.5);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(124)
	this->minEmitBox = _g4;
	HX_STACK_LINE(125)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g5 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(0.5,0.5,0.5);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(125)
	this->maxEmitBox = _g5;
	HX_STACK_LINE(126)
	::com::gamestudiohx::babylonhx::tools::math::Color4 _g6 = ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new(1.0,1.0,1.0,1.0);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(126)
	this->color1 = _g6;
	HX_STACK_LINE(127)
	::com::gamestudiohx::babylonhx::tools::math::Color4 _g7 = ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new(1.0,1.0,1.0,1.0);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(127)
	this->color2 = _g7;
	HX_STACK_LINE(128)
	::com::gamestudiohx::babylonhx::tools::math::Color4 _g8 = ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new((int)0,(int)0,(int)0,1.0);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(128)
	this->colorDead = _g8;
	HX_STACK_LINE(129)
	::com::gamestudiohx::babylonhx::tools::math::Color4 _g9 = ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new(1.0,1.0,1.0,1.0);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(129)
	this->textureMask = _g9;
	HX_STACK_LINE(132)
	this->particles = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(133)
	this->_stockParticles = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(134)
	this->_newPartsExcess = (int)0;
	HX_STACK_LINE(137)
	this->_vertexDeclaration = Array_obj< int >::__new().Add((int)3).Add((int)4).Add((int)4);
	HX_STACK_LINE(138)
	this->_vertexStrideSize = (int)44;
	HX_STACK_LINE(139)
	::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g10 = this->_engine->createDynamicVertexBuffer(((capacity * this->_vertexStrideSize) * (int)4));		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(139)
	this->_vertexBuffer = _g10;
	HX_STACK_LINE(141)
	Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
	HX_STACK_LINE(142)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(143)
		while((true)){
			HX_STACK_LINE(143)
			if ((!(((_g11 < capacity))))){
				HX_STACK_LINE(143)
				break;
			}
			HX_STACK_LINE(143)
			int count = (_g11)++;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(144)
			indices->push(index);
			HX_STACK_LINE(145)
			indices->push((index + (int)1));
			HX_STACK_LINE(146)
			indices->push((index + (int)2));
			HX_STACK_LINE(147)
			indices->push(index);
			HX_STACK_LINE(148)
			indices->push((index + (int)2));
			HX_STACK_LINE(149)
			indices->push((index + (int)3));
			HX_STACK_LINE(150)
			hx::AddEq(index,(int)4);
		}
	}
	HX_STACK_LINE(153)
	::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g11 = this->_engine->createIndexBuffer(indices);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(153)
	this->_indexBuffer = _g11;
	HX_STACK_LINE(158)
	this->_vertices = Array_obj< Float >::__new();
	HX_STACK_LINE(162)
	::com::gamestudiohx::babylonhx::tools::math::Color4 _g12 = ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(162)
	this->_scaledColorStep = _g12;
	HX_STACK_LINE(163)
	::com::gamestudiohx::babylonhx::tools::math::Color4 _g13 = ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(163)
	this->_colorDiff = _g13;
	HX_STACK_LINE(164)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g14 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(164)
	this->_scaledDirection = _g14;
	HX_STACK_LINE(165)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g15 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(165)
	this->_scaledGravity = _g15;
	HX_STACK_LINE(166)
	this->_currentRenderId = (int)-1;
	HX_STACK_LINE(169)
	this->renderingGroupId = (int)0;
	HX_STACK_LINE(170)
	this->emitter = null();
	HX_STACK_LINE(171)
	this->emitRate = (int)10;
	HX_STACK_LINE(172)
	this->manualEmitCount = (int)-1;
	HX_STACK_LINE(173)
	this->updateSpeed = 0.01;
	HX_STACK_LINE(174)
	this->targetStopDuration = (int)0;
	HX_STACK_LINE(175)
	this->disposeOnStop = false;
	HX_STACK_LINE(177)
	this->minEmitPower = (int)1;
	HX_STACK_LINE(178)
	this->maxEmitPower = (int)1;
	HX_STACK_LINE(180)
	this->minLifeTime = (int)1;
	HX_STACK_LINE(181)
	this->maxLifeTime = (int)1;
	HX_STACK_LINE(183)
	this->minSize = (int)1;
	HX_STACK_LINE(184)
	this->maxSize = (int)1;
	HX_STACK_LINE(185)
	this->minAngularSpeed = (int)0;
	HX_STACK_LINE(186)
	this->maxAngularSpeed = (int)0;
	HX_STACK_LINE(188)
	this->particleTexture = null();
	HX_STACK_LINE(190)
	this->onDispose = null();
	HX_STACK_LINE(192)
	this->blendMode = ::com::gamestudiohx::babylonhx::particles::ParticleSystem_obj::BLENDMODE_ONEONE;
}
;
	return null();
}

//ParticleSystem_obj::~ParticleSystem_obj() { }

Dynamic ParticleSystem_obj::__CreateEmpty() { return  new ParticleSystem_obj; }
hx::ObjectPtr< ParticleSystem_obj > ParticleSystem_obj::__new(::String name,int capacity,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< ParticleSystem_obj > result = new ParticleSystem_obj();
	result->__construct(name,capacity,scene);
	return result;}

Dynamic ParticleSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ParticleSystem_obj > result = new ParticleSystem_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Dynamic ParticleSystem_obj::get_emitterId( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.particles.ParticleSystem","get_emitterId",0xf27910da,"com.gamestudiohx.babylonhx.particles.ParticleSystem.get_emitterId","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",83,0x17713bd4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(84)
	Dynamic _g = ::Reflect_obj::field(this->emitter,HX_CSTRING("id"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(84)
	if (((_g != null()))){
		HX_STACK_LINE(85)
		return ::Reflect_obj::field(this->emitter,HX_CSTRING("id"));
	}
	HX_STACK_LINE(87)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleSystem_obj,get_emitterId,return )

bool ParticleSystem_obj::isAlive( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.particles.ParticleSystem","isAlive",0x8e89a81d,"com.gamestudiohx.babylonhx.particles.ParticleSystem.isAlive","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",196,0x17713bd4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	return this->_alive;
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleSystem_obj,isAlive,return )

Void ParticleSystem_obj::start( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.particles.ParticleSystem","start",0x26c4da7c,"com.gamestudiohx.babylonhx.particles.ParticleSystem.start","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",199,0x17713bd4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(200)
		this->_started = true;
		HX_STACK_LINE(201)
		this->_stopped = false;
		HX_STACK_LINE(202)
		this->_actualFrame = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleSystem_obj,start,(void))

Void ParticleSystem_obj::stop( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.particles.ParticleSystem","stop",0x65324b28,"com.gamestudiohx.babylonhx.particles.ParticleSystem.stop","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",206,0x17713bd4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(206)
		this->_stopped = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleSystem_obj,stop,(void))

Void ParticleSystem_obj::_appendParticleVertex( int index,::com::gamestudiohx::babylonhx::particles::Particle particle,Float offsetX,Float offsetY){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.particles.ParticleSystem","_appendParticleVertex",0x87a989bd,"com.gamestudiohx.babylonhx.particles.ParticleSystem._appendParticleVertex","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",209,0x17713bd4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(particle,"particle")
		HX_STACK_ARG(offsetX,"offsetX")
		HX_STACK_ARG(offsetY,"offsetY")
		HX_STACK_LINE(210)
		int offset = (index * (int)11);		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(211)
		this->_vertices[offset] = particle->position->x;
		HX_STACK_LINE(212)
		this->_vertices[(offset + (int)1)] = particle->position->y;
		HX_STACK_LINE(213)
		this->_vertices[(offset + (int)2)] = particle->position->z;
		HX_STACK_LINE(214)
		this->_vertices[(offset + (int)3)] = particle->color->r;
		HX_STACK_LINE(215)
		this->_vertices[(offset + (int)4)] = particle->color->g;
		HX_STACK_LINE(216)
		this->_vertices[(offset + (int)5)] = particle->color->b;
		HX_STACK_LINE(217)
		this->_vertices[(offset + (int)6)] = particle->color->a;
		HX_STACK_LINE(218)
		this->_vertices[(offset + (int)7)] = particle->angle;
		HX_STACK_LINE(219)
		this->_vertices[(offset + (int)8)] = particle->size;
		HX_STACK_LINE(220)
		this->_vertices[(offset + (int)9)] = offsetX;
		HX_STACK_LINE(221)
		this->_vertices[(offset + (int)10)] = offsetY;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ParticleSystem_obj,_appendParticleVertex,(void))

Void ParticleSystem_obj::_update( int newParticles){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.particles.ParticleSystem","_update",0xc5ef3842,"com.gamestudiohx.babylonhx.particles.ParticleSystem._update","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",224,0x17713bd4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newParticles,"newParticles")
		HX_STACK_LINE(225)
		::com::gamestudiohx::babylonhx::particles::Particle particle = null();		HX_STACK_VAR(particle,"particle");
		HX_STACK_LINE(228)
		this->_alive = (this->particles->length > (int)0);
		HX_STACK_LINE(230)
		int index = (int)-1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(232)
		while((true)){
			HX_STACK_LINE(232)
			int _g = ++(index);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(232)
			if ((!(((_g < this->particles->length))))){
				HX_STACK_LINE(232)
				break;
			}
			HX_STACK_LINE(233)
			particle = this->particles->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::particles::Particle >();
			HX_STACK_LINE(234)
			hx::AddEq(particle->age,this->_scaledUpdateSpeed);
			HX_STACK_LINE(236)
			if (((particle->age >= particle->lifeTime))){
				HX_STACK_LINE(237)
				Array< ::Dynamic > _g1 = this->particles->splice(index,(int)1);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(237)
				::com::gamestudiohx::babylonhx::particles::Particle _g2 = _g1->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::particles::Particle >();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(237)
				this->_stockParticles->push(_g2);
				HX_STACK_LINE(238)
				(index)--;
				HX_STACK_LINE(239)
				continue;
			}
			else{
				HX_STACK_LINE(242)
				{
					HX_STACK_LINE(242)
					::com::gamestudiohx::babylonhx::tools::math::Color4 _this = particle->colorStep;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(242)
					Float scale = this->_scaledUpdateSpeed;		HX_STACK_VAR(scale,"scale");
					HX_STACK_LINE(242)
					::com::gamestudiohx::babylonhx::tools::math::Color4 result = this->_scaledColorStep;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(242)
					result->r = (_this->r * scale);
					HX_STACK_LINE(242)
					result->g = (_this->g * scale);
					HX_STACK_LINE(242)
					result->b = (_this->b * scale);
					HX_STACK_LINE(242)
					result->a = (_this->a * scale);
					HX_STACK_LINE(242)
					result;
				}
				HX_STACK_LINE(243)
				{
					HX_STACK_LINE(243)
					::com::gamestudiohx::babylonhx::tools::math::Color4 _this = particle->color;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(243)
					::com::gamestudiohx::babylonhx::tools::math::Color4 right = this->_scaledColorStep;		HX_STACK_VAR(right,"right");
					HX_STACK_LINE(243)
					hx::AddEq(_this->r,right->r);
					HX_STACK_LINE(243)
					hx::AddEq(_this->g,right->g);
					HX_STACK_LINE(243)
					hx::AddEq(_this->b,right->b);
					HX_STACK_LINE(243)
					hx::AddEq(_this->a,right->a);
				}
				HX_STACK_LINE(245)
				if (((particle->color->a < (int)0))){
					HX_STACK_LINE(246)
					particle->color->a = (int)0;
				}
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = particle->direction;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(248)
					Float scale = this->_scaledUpdateSpeed;		HX_STACK_VAR(scale,"scale");
					HX_STACK_LINE(248)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_scaledDirection;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(248)
					result->x = (_this->x * scale);
					HX_STACK_LINE(248)
					result->y = (_this->y * scale);
					HX_STACK_LINE(248)
					result->z = (_this->z * scale);
				}
				HX_STACK_LINE(249)
				{
					HX_STACK_LINE(249)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = particle->position;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(249)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_scaledDirection;		HX_STACK_VAR(otherVector,"otherVector");
					HX_STACK_LINE(249)
					hx::AddEq(_this->x,otherVector->x);
					HX_STACK_LINE(249)
					hx::AddEq(_this->y,otherVector->y);
					HX_STACK_LINE(249)
					hx::AddEq(_this->z,otherVector->z);
				}
				HX_STACK_LINE(251)
				hx::AddEq(particle->angle,(particle->angularSpeed * this->_scaledUpdateSpeed));
				HX_STACK_LINE(253)
				{
					HX_STACK_LINE(253)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->gravity;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(253)
					Float scale = this->_scaledUpdateSpeed;		HX_STACK_VAR(scale,"scale");
					HX_STACK_LINE(253)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_scaledGravity;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(253)
					result->x = (_this->x * scale);
					HX_STACK_LINE(253)
					result->y = (_this->y * scale);
					HX_STACK_LINE(253)
					result->z = (_this->z * scale);
				}
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = particle->direction;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(254)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_scaledGravity;		HX_STACK_VAR(otherVector,"otherVector");
					HX_STACK_LINE(254)
					hx::AddEq(_this->x,otherVector->x);
					HX_STACK_LINE(254)
					hx::AddEq(_this->y,otherVector->y);
					HX_STACK_LINE(254)
					hx::AddEq(_this->z,otherVector->z);
				}
			}
		}
		HX_STACK_LINE(261)
		::com::gamestudiohx::babylonhx::tools::math::Matrix worldMatrix;		HX_STACK_VAR(worldMatrix,"worldMatrix");
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			Float x = this->emitter->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(261)
			Float y = this->emitter->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(261)
			Float z = this->emitter->__Field(HX_CSTRING("z"),true);		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(261)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result1,"result1");
				HX_STACK_LINE(261)
				result1->m[(int)0] = 1.0;
				HX_STACK_LINE(261)
				result1->m[(int)1] = (int)0;
				HX_STACK_LINE(261)
				result1->m[(int)2] = (int)0;
				HX_STACK_LINE(261)
				result1->m[(int)3] = (int)0;
				HX_STACK_LINE(261)
				result1->m[(int)4] = (int)0;
				HX_STACK_LINE(261)
				result1->m[(int)5] = 1.0;
				HX_STACK_LINE(261)
				result1->m[(int)6] = (int)0;
				HX_STACK_LINE(261)
				result1->m[(int)7] = (int)0;
				HX_STACK_LINE(261)
				result1->m[(int)8] = (int)0;
				HX_STACK_LINE(261)
				result1->m[(int)9] = (int)0;
				HX_STACK_LINE(261)
				result1->m[(int)10] = 1.0;
				HX_STACK_LINE(261)
				result1->m[(int)11] = (int)0;
				HX_STACK_LINE(261)
				result1->m[(int)12] = (int)0;
				HX_STACK_LINE(261)
				result1->m[(int)13] = (int)0;
				HX_STACK_LINE(261)
				result1->m[(int)14] = (int)0;
				HX_STACK_LINE(261)
				result1->m[(int)15] = 1.0;
				HX_STACK_LINE(261)
				result = result1;
			}
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				result->m[(int)0] = 1.0;
				HX_STACK_LINE(261)
				result->m[(int)1] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)2] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)4] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)5] = 1.0;
				HX_STACK_LINE(261)
				result->m[(int)6] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)8] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)9] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)10] = 1.0;
				HX_STACK_LINE(261)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(261)
				result->m[(int)12] = x;
				HX_STACK_LINE(261)
				result->m[(int)13] = y;
				HX_STACK_LINE(261)
				result->m[(int)14] = z;
				HX_STACK_LINE(261)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(261)
				result;
			}
			HX_STACK_LINE(261)
			worldMatrix = result;
		}
		HX_STACK_LINE(263)
		if ((this->emitter->__Field(HX_CSTRING("position"),true))){
			HX_STACK_LINE(264)
			Dynamic _g3 = this->emitter->__Field(HX_CSTRING("getWorldMatrix"),true)();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(264)
			worldMatrix = _g3;
		}
		HX_STACK_LINE(267)
		{
			HX_STACK_LINE(267)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(267)
			while((true)){
				HX_STACK_LINE(267)
				if ((!(((_g < newParticles))))){
					HX_STACK_LINE(267)
					break;
				}
				HX_STACK_LINE(267)
				int index1 = (_g)++;		HX_STACK_VAR(index1,"index1");
				HX_STACK_LINE(268)
				if (((this->particles->length == this->_capacity))){
					HX_STACK_LINE(269)
					break;
				}
				HX_STACK_LINE(272)
				if (((this->_stockParticles->length != (int)0))){
					HX_STACK_LINE(273)
					::com::gamestudiohx::babylonhx::particles::Particle _g4 = this->_stockParticles->pop().StaticCast< ::com::gamestudiohx::babylonhx::particles::Particle >();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(273)
					particle = _g4;
					HX_STACK_LINE(274)
					particle->age = (int)0;
				}
				else{
					HX_STACK_LINE(276)
					::com::gamestudiohx::babylonhx::particles::Particle _g5 = ::com::gamestudiohx::babylonhx::particles::Particle_obj::__new();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(276)
					particle = _g5;
				}
				HX_STACK_LINE(278)
				this->particles->push(particle);
				HX_STACK_LINE(280)
				Float emitPower;		HX_STACK_VAR(emitPower,"emitPower");
				HX_STACK_LINE(280)
				{
					HX_STACK_LINE(280)
					Float min = this->minEmitPower;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(280)
					Float max = this->maxEmitPower;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(280)
					Float ret = min;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(280)
					if (((min == max))){
						HX_STACK_LINE(280)
						ret = min;
					}
					else{
						HX_STACK_LINE(280)
						Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
						HX_STACK_LINE(280)
						ret = ((random * ((max - min))) + min);
					}
					HX_STACK_LINE(280)
					emitPower = ret;
				}
				HX_STACK_LINE(282)
				Float randX;		HX_STACK_VAR(randX,"randX");
				HX_STACK_LINE(282)
				{
					HX_STACK_LINE(282)
					Float min = this->direction1->x;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(282)
					Float max = this->direction2->x;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(282)
					Float ret = min;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(282)
					if (((min == max))){
						HX_STACK_LINE(282)
						ret = min;
					}
					else{
						HX_STACK_LINE(282)
						Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
						HX_STACK_LINE(282)
						ret = ((random * ((max - min))) + min);
					}
					HX_STACK_LINE(282)
					randX = ret;
				}
				HX_STACK_LINE(283)
				Float randY;		HX_STACK_VAR(randY,"randY");
				HX_STACK_LINE(283)
				{
					HX_STACK_LINE(283)
					Float min = this->direction1->y;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(283)
					Float max = this->direction2->y;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(283)
					Float ret = min;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(283)
					if (((min == max))){
						HX_STACK_LINE(283)
						ret = min;
					}
					else{
						HX_STACK_LINE(283)
						Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
						HX_STACK_LINE(283)
						ret = ((random * ((max - min))) + min);
					}
					HX_STACK_LINE(283)
					randY = ret;
				}
				HX_STACK_LINE(284)
				Float randZ;		HX_STACK_VAR(randZ,"randZ");
				HX_STACK_LINE(284)
				{
					HX_STACK_LINE(284)
					Float min = this->direction1->z;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(284)
					Float max = this->direction2->z;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(284)
					Float ret = min;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(284)
					if (((min == max))){
						HX_STACK_LINE(284)
						ret = min;
					}
					else{
						HX_STACK_LINE(284)
						Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
						HX_STACK_LINE(284)
						ret = ((random * ((max - min))) + min);
					}
					HX_STACK_LINE(284)
					randZ = ret;
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					Float x = (randX * emitPower);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(286)
					Float y = (randY * emitPower);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(286)
					Float z = (randZ * emitPower);		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(286)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = particle->direction;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(286)
					result->x = (((x * worldMatrix->m->__get((int)0)) + (y * worldMatrix->m->__get((int)4))) + (z * worldMatrix->m->__get((int)8)));
					HX_STACK_LINE(286)
					result->y = (((x * worldMatrix->m->__get((int)1)) + (y * worldMatrix->m->__get((int)5))) + (z * worldMatrix->m->__get((int)9)));
					HX_STACK_LINE(286)
					result->z = (((x * worldMatrix->m->__get((int)2)) + (y * worldMatrix->m->__get((int)6))) + (z * worldMatrix->m->__get((int)10)));
				}
				HX_STACK_LINE(288)
				Float _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					Float min = this->minLifeTime;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(288)
					Float max = this->maxLifeTime;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(288)
					Float ret = min;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(288)
					if (((min == max))){
						HX_STACK_LINE(288)
						ret = min;
					}
					else{
						HX_STACK_LINE(288)
						Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
						HX_STACK_LINE(288)
						ret = ((random * ((max - min))) + min);
					}
					HX_STACK_LINE(288)
					_g6 = ret;
				}
				HX_STACK_LINE(288)
				particle->lifeTime = _g6;
				HX_STACK_LINE(290)
				Float _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(290)
				{
					HX_STACK_LINE(290)
					Float min = this->minSize;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(290)
					Float max = this->maxSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(290)
					Float ret = min;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(290)
					if (((min == max))){
						HX_STACK_LINE(290)
						ret = min;
					}
					else{
						HX_STACK_LINE(290)
						Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
						HX_STACK_LINE(290)
						ret = ((random * ((max - min))) + min);
					}
					HX_STACK_LINE(290)
					_g7 = ret;
				}
				HX_STACK_LINE(290)
				particle->size = _g7;
				HX_STACK_LINE(291)
				Float _g8;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(291)
				{
					HX_STACK_LINE(291)
					Float min = this->minAngularSpeed;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(291)
					Float max = this->maxAngularSpeed;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(291)
					Float ret = min;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(291)
					if (((min == max))){
						HX_STACK_LINE(291)
						ret = min;
					}
					else{
						HX_STACK_LINE(291)
						Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
						HX_STACK_LINE(291)
						ret = ((random * ((max - min))) + min);
					}
					HX_STACK_LINE(291)
					_g8 = ret;
				}
				HX_STACK_LINE(291)
				particle->angularSpeed = _g8;
				HX_STACK_LINE(293)
				Float _g9;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(293)
				{
					HX_STACK_LINE(293)
					Float min = this->minEmitBox->x;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(293)
					Float max = this->maxEmitBox->x;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(293)
					Float ret = min;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(293)
					if (((min == max))){
						HX_STACK_LINE(293)
						ret = min;
					}
					else{
						HX_STACK_LINE(293)
						Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
						HX_STACK_LINE(293)
						ret = ((random * ((max - min))) + min);
					}
					HX_STACK_LINE(293)
					_g9 = ret;
				}
				HX_STACK_LINE(293)
				randX = _g9;
				HX_STACK_LINE(294)
				Float _g10;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					Float min = this->minEmitBox->y;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(294)
					Float max = this->maxEmitBox->y;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(294)
					Float ret = min;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(294)
					if (((min == max))){
						HX_STACK_LINE(294)
						ret = min;
					}
					else{
						HX_STACK_LINE(294)
						Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
						HX_STACK_LINE(294)
						ret = ((random * ((max - min))) + min);
					}
					HX_STACK_LINE(294)
					_g10 = ret;
				}
				HX_STACK_LINE(294)
				randY = _g10;
				HX_STACK_LINE(295)
				Float _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(295)
				{
					HX_STACK_LINE(295)
					Float min = this->minEmitBox->z;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(295)
					Float max = this->maxEmitBox->z;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(295)
					Float ret = min;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(295)
					if (((min == max))){
						HX_STACK_LINE(295)
						ret = min;
					}
					else{
						HX_STACK_LINE(295)
						Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
						HX_STACK_LINE(295)
						ret = ((random * ((max - min))) + min);
					}
					HX_STACK_LINE(295)
					_g11 = ret;
				}
				HX_STACK_LINE(295)
				randZ = _g11;
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = particle->position;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(297)
					Float rx = ((((randX * worldMatrix->m->__get((int)0)) + (randY * worldMatrix->m->__get((int)4))) + (randZ * worldMatrix->m->__get((int)8))) + worldMatrix->m->__get((int)12));		HX_STACK_VAR(rx,"rx");
					HX_STACK_LINE(297)
					Float ry = ((((randX * worldMatrix->m->__get((int)1)) + (randY * worldMatrix->m->__get((int)5))) + (randZ * worldMatrix->m->__get((int)9))) + worldMatrix->m->__get((int)13));		HX_STACK_VAR(ry,"ry");
					HX_STACK_LINE(297)
					Float rz = ((((randX * worldMatrix->m->__get((int)2)) + (randY * worldMatrix->m->__get((int)6))) + (randZ * worldMatrix->m->__get((int)10))) + worldMatrix->m->__get((int)14));		HX_STACK_VAR(rz,"rz");
					HX_STACK_LINE(297)
					Float rw = ((((randX * worldMatrix->m->__get((int)3)) + (randY * worldMatrix->m->__get((int)7))) + (randZ * worldMatrix->m->__get((int)11))) + worldMatrix->m->__get((int)15));		HX_STACK_VAR(rw,"rw");
					HX_STACK_LINE(297)
					result->x = (Float(rx) / Float(rw));
					HX_STACK_LINE(297)
					result->y = (Float(ry) / Float(rw));
					HX_STACK_LINE(297)
					result->z = (Float(rz) / Float(rw));
					HX_STACK_LINE(297)
					result;
				}
				HX_STACK_LINE(299)
				Float step;		HX_STACK_VAR(step,"step");
				HX_STACK_LINE(299)
				{
					HX_STACK_LINE(299)
					Float ret = (int)0;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(299)
					{
						HX_STACK_LINE(299)
						Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
						HX_STACK_LINE(299)
						ret = random;
					}
					HX_STACK_LINE(299)
					step = ret;
				}
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					::com::gamestudiohx::babylonhx::tools::math::Color4 left = this->color1;		HX_STACK_VAR(left,"left");
					HX_STACK_LINE(301)
					::com::gamestudiohx::babylonhx::tools::math::Color4 right = this->color2;		HX_STACK_VAR(right,"right");
					HX_STACK_LINE(301)
					::com::gamestudiohx::babylonhx::tools::math::Color4 result = particle->color;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(301)
					result->r = (left->r + (((right->r - left->r)) * step));
					HX_STACK_LINE(301)
					result->g = (left->g + (((right->g - left->g)) * step));
					HX_STACK_LINE(301)
					result->b = (left->b + (((right->b - left->b)) * step));
					HX_STACK_LINE(301)
					result->a = (left->a + (((right->a - left->a)) * step));
					HX_STACK_LINE(301)
					result;
				}
				HX_STACK_LINE(303)
				{
					HX_STACK_LINE(303)
					::com::gamestudiohx::babylonhx::tools::math::Color4 _this = this->colorDead;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(303)
					::com::gamestudiohx::babylonhx::tools::math::Color4 right = particle->color;		HX_STACK_VAR(right,"right");
					HX_STACK_LINE(303)
					::com::gamestudiohx::babylonhx::tools::math::Color4 result = this->_colorDiff;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(303)
					result->r = (_this->r - right->r);
					HX_STACK_LINE(303)
					result->g = (_this->g - right->g);
					HX_STACK_LINE(303)
					result->b = (_this->b - right->b);
					HX_STACK_LINE(303)
					result->a = (_this->a - right->a);
					HX_STACK_LINE(303)
					result;
				}
				HX_STACK_LINE(304)
				{
					HX_STACK_LINE(304)
					::com::gamestudiohx::babylonhx::tools::math::Color4 _this = this->_colorDiff;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(304)
					Float scale = (Float(1.0) / Float(particle->lifeTime));		HX_STACK_VAR(scale,"scale");
					HX_STACK_LINE(304)
					::com::gamestudiohx::babylonhx::tools::math::Color4 result = particle->colorStep;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(304)
					result->r = (_this->r * scale);
					HX_STACK_LINE(304)
					result->g = (_this->g * scale);
					HX_STACK_LINE(304)
					result->b = (_this->b * scale);
					HX_STACK_LINE(304)
					result->a = (_this->a * scale);
					HX_STACK_LINE(304)
					result;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ParticleSystem_obj,_update,(void))

::com::gamestudiohx::babylonhx::materials::Effect ParticleSystem_obj::_getEffect( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.particles.ParticleSystem","_getEffect",0xe3589b2e,"com.gamestudiohx.babylonhx.particles.ParticleSystem._getEffect","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",308,0x17713bd4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(309)
	Array< ::String > defines = Array_obj< ::String >::__new();		HX_STACK_VAR(defines,"defines");
	HX_STACK_LINE(311)
	if (((::com::gamestudiohx::babylonhx::Engine_obj::clipPlane != null()))){
		HX_STACK_LINE(312)
		defines->push(HX_CSTRING("#define CLIPPLANE"));
	}
	HX_STACK_LINE(316)
	::String join = defines->join(HX_CSTRING("\n"));		HX_STACK_VAR(join,"join");
	HX_STACK_LINE(317)
	if (((this->_cachedDefines != join))){
		HX_STACK_LINE(318)
		this->_cachedDefines = join;
		HX_STACK_LINE(319)
		::com::gamestudiohx::babylonhx::materials::Effect _g = this->_engine->createEffect(HX_CSTRING("particles"),Array_obj< ::String >::__new().Add(HX_CSTRING("position")).Add(HX_CSTRING("color")).Add(HX_CSTRING("options")),Array_obj< ::String >::__new().Add(HX_CSTRING("invView")).Add(HX_CSTRING("view")).Add(HX_CSTRING("projection")).Add(HX_CSTRING("vClipPlane")).Add(HX_CSTRING("textureMask")),Array_obj< ::String >::__new().Add(HX_CSTRING("diffuseSampler")),join,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(319)
		this->_effect = _g;
	}
	HX_STACK_LINE(325)
	return this->_effect;
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleSystem_obj,_getEffect,return )

Void ParticleSystem_obj::animate( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.particles.ParticleSystem","animate",0x4abf7b3b,"com.gamestudiohx.babylonhx.particles.ParticleSystem.animate","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",328,0x17713bd4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(329)
		if ((!(this->_started))){
			HX_STACK_LINE(330)
			return null();
		}
		HX_STACK_LINE(332)
		::com::gamestudiohx::babylonhx::materials::Effect effect = this->_getEffect();		HX_STACK_VAR(effect,"effect");
		HX_STACK_LINE(335)
		if (((  ((!(((  ((!(((  ((!(((this->emitter == null()))))) ? bool(!(effect->isReady())) : bool(true) ))))) ? bool((this->particleTexture == null())) : bool(true) ))))) ? bool(!(this->particleTexture->isReady())) : bool(true) ))){
			HX_STACK_LINE(336)
			return null();
		}
		HX_STACK_LINE(338)
		int _g = this->_scene->getRenderId();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(338)
		if (((this->_currentRenderId == _g))){
			HX_STACK_LINE(339)
			return null();
		}
		HX_STACK_LINE(342)
		int _g1 = this->_scene->getRenderId();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(342)
		this->_currentRenderId = _g1;
		HX_STACK_LINE(344)
		Float _g2 = this->_scene->getAnimationRatio();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(344)
		Float _g3 = (this->updateSpeed * _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(344)
		this->_scaledUpdateSpeed = _g3;
		HX_STACK_LINE(347)
		int emitCout = this->emitRate;		HX_STACK_VAR(emitCout,"emitCout");
		HX_STACK_LINE(349)
		if (((this->manualEmitCount > (int)-1))){
			HX_STACK_LINE(350)
			emitCout = this->manualEmitCount;
			HX_STACK_LINE(351)
			this->manualEmitCount = (int)0;
		}
		HX_STACK_LINE(354)
		Float newParticles = (emitCout * this->_scaledUpdateSpeed);		HX_STACK_VAR(newParticles,"newParticles");
		HX_STACK_LINE(355)
		hx::AddEq(this->_newPartsExcess,((emitCout * this->_scaledUpdateSpeed) - newParticles));
		HX_STACK_LINE(357)
		if (((this->_newPartsExcess > 1.0))){
			HX_STACK_LINE(358)
			hx::AddEq(newParticles,this->_newPartsExcess);
			HX_STACK_LINE(359)
			hx::SubEq(this->_newPartsExcess,this->_newPartsExcess);
		}
		HX_STACK_LINE(362)
		this->_alive = false;
		HX_STACK_LINE(364)
		if ((!(this->_stopped))){
			HX_STACK_LINE(365)
			hx::AddEq(this->_actualFrame,this->_scaledUpdateSpeed);
			HX_STACK_LINE(367)
			if (((bool((this->targetStopDuration != (int)0)) && bool((this->_actualFrame >= this->targetStopDuration))))){
				HX_STACK_LINE(368)
				this->stop();
			}
		}
		else{
			HX_STACK_LINE(370)
			newParticles = (int)0;
		}
		HX_STACK_LINE(373)
		{
			HX_STACK_LINE(373)
			::com::gamestudiohx::babylonhx::particles::Particle particle = null();		HX_STACK_VAR(particle,"particle");
			HX_STACK_LINE(373)
			this->_alive = (this->particles->length > (int)0);
			HX_STACK_LINE(373)
			int index = (int)-1;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(373)
			while((true)){
				HX_STACK_LINE(373)
				int _g4 = ++(index);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(373)
				if ((!(((_g4 < this->particles->length))))){
					HX_STACK_LINE(373)
					break;
				}
				HX_STACK_LINE(373)
				particle = this->particles->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::particles::Particle >();
				HX_STACK_LINE(373)
				hx::AddEq(particle->age,this->_scaledUpdateSpeed);
				HX_STACK_LINE(373)
				if (((particle->age >= particle->lifeTime))){
					HX_STACK_LINE(373)
					Array< ::Dynamic > _g5 = this->particles->splice(index,(int)1);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(373)
					::com::gamestudiohx::babylonhx::particles::Particle _g6 = _g5->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::particles::Particle >();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(373)
					this->_stockParticles->push(_g6);
					HX_STACK_LINE(373)
					(index)--;
					HX_STACK_LINE(373)
					continue;
				}
				else{
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Color4 _this = particle->colorStep;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(373)
						Float scale = this->_scaledUpdateSpeed;		HX_STACK_VAR(scale,"scale");
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Color4 result = this->_scaledColorStep;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(373)
						result->r = (_this->r * scale);
						HX_STACK_LINE(373)
						result->g = (_this->g * scale);
						HX_STACK_LINE(373)
						result->b = (_this->b * scale);
						HX_STACK_LINE(373)
						result->a = (_this->a * scale);
						HX_STACK_LINE(373)
						result;
					}
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Color4 _this = particle->color;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Color4 right = this->_scaledColorStep;		HX_STACK_VAR(right,"right");
						HX_STACK_LINE(373)
						hx::AddEq(_this->r,right->r);
						HX_STACK_LINE(373)
						hx::AddEq(_this->g,right->g);
						HX_STACK_LINE(373)
						hx::AddEq(_this->b,right->b);
						HX_STACK_LINE(373)
						hx::AddEq(_this->a,right->a);
					}
					HX_STACK_LINE(373)
					if (((particle->color->a < (int)0))){
						HX_STACK_LINE(373)
						particle->color->a = (int)0;
					}
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = particle->direction;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(373)
						Float scale = this->_scaledUpdateSpeed;		HX_STACK_VAR(scale,"scale");
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_scaledDirection;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(373)
						result->x = (_this->x * scale);
						HX_STACK_LINE(373)
						result->y = (_this->y * scale);
						HX_STACK_LINE(373)
						result->z = (_this->z * scale);
					}
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = particle->position;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_scaledDirection;		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(373)
						hx::AddEq(_this->x,otherVector->x);
						HX_STACK_LINE(373)
						hx::AddEq(_this->y,otherVector->y);
						HX_STACK_LINE(373)
						hx::AddEq(_this->z,otherVector->z);
					}
					HX_STACK_LINE(373)
					hx::AddEq(particle->angle,(particle->angularSpeed * this->_scaledUpdateSpeed));
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->gravity;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(373)
						Float scale = this->_scaledUpdateSpeed;		HX_STACK_VAR(scale,"scale");
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 result = this->_scaledGravity;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(373)
						result->x = (_this->x * scale);
						HX_STACK_LINE(373)
						result->y = (_this->y * scale);
						HX_STACK_LINE(373)
						result->z = (_this->z * scale);
					}
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = particle->direction;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_scaledGravity;		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(373)
						hx::AddEq(_this->x,otherVector->x);
						HX_STACK_LINE(373)
						hx::AddEq(_this->y,otherVector->y);
						HX_STACK_LINE(373)
						hx::AddEq(_this->z,otherVector->z);
					}
				}
			}
			HX_STACK_LINE(373)
			::com::gamestudiohx::babylonhx::tools::math::Matrix worldMatrix;		HX_STACK_VAR(worldMatrix,"worldMatrix");
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				Float x = this->emitter->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(373)
				Float y = this->emitter->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(373)
				Float z = this->emitter->__Field(HX_CSTRING("z"),true);		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(373)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result1,"result1");
					HX_STACK_LINE(373)
					result1->m[(int)0] = 1.0;
					HX_STACK_LINE(373)
					result1->m[(int)1] = (int)0;
					HX_STACK_LINE(373)
					result1->m[(int)2] = (int)0;
					HX_STACK_LINE(373)
					result1->m[(int)3] = (int)0;
					HX_STACK_LINE(373)
					result1->m[(int)4] = (int)0;
					HX_STACK_LINE(373)
					result1->m[(int)5] = 1.0;
					HX_STACK_LINE(373)
					result1->m[(int)6] = (int)0;
					HX_STACK_LINE(373)
					result1->m[(int)7] = (int)0;
					HX_STACK_LINE(373)
					result1->m[(int)8] = (int)0;
					HX_STACK_LINE(373)
					result1->m[(int)9] = (int)0;
					HX_STACK_LINE(373)
					result1->m[(int)10] = 1.0;
					HX_STACK_LINE(373)
					result1->m[(int)11] = (int)0;
					HX_STACK_LINE(373)
					result1->m[(int)12] = (int)0;
					HX_STACK_LINE(373)
					result1->m[(int)13] = (int)0;
					HX_STACK_LINE(373)
					result1->m[(int)14] = (int)0;
					HX_STACK_LINE(373)
					result1->m[(int)15] = 1.0;
					HX_STACK_LINE(373)
					result = result1;
				}
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					result->m[(int)0] = 1.0;
					HX_STACK_LINE(373)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(373)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(373)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(373)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(373)
					result->m[(int)5] = 1.0;
					HX_STACK_LINE(373)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(373)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(373)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(373)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(373)
					result->m[(int)10] = 1.0;
					HX_STACK_LINE(373)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(373)
					result->m[(int)12] = x;
					HX_STACK_LINE(373)
					result->m[(int)13] = y;
					HX_STACK_LINE(373)
					result->m[(int)14] = z;
					HX_STACK_LINE(373)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(373)
					result;
				}
				HX_STACK_LINE(373)
				worldMatrix = result;
			}
			HX_STACK_LINE(373)
			if ((this->emitter->__Field(HX_CSTRING("position"),true))){
				HX_STACK_LINE(373)
				Dynamic _g7 = this->emitter->__Field(HX_CSTRING("getWorldMatrix"),true)();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(373)
				worldMatrix = _g7;
			}
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(373)
				while((true)){
					HX_STACK_LINE(373)
					if ((!(((_g4 < newParticles))))){
						HX_STACK_LINE(373)
						break;
					}
					HX_STACK_LINE(373)
					int index1 = (_g4)++;		HX_STACK_VAR(index1,"index1");
					HX_STACK_LINE(373)
					if (((this->particles->length == this->_capacity))){
						HX_STACK_LINE(373)
						break;
					}
					HX_STACK_LINE(373)
					if (((this->_stockParticles->length != (int)0))){
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::particles::Particle _g8 = this->_stockParticles->pop().StaticCast< ::com::gamestudiohx::babylonhx::particles::Particle >();		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(373)
						particle = _g8;
						HX_STACK_LINE(373)
						particle->age = (int)0;
					}
					else{
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::particles::Particle _g9 = ::com::gamestudiohx::babylonhx::particles::Particle_obj::__new();		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(373)
						particle = _g9;
					}
					HX_STACK_LINE(373)
					this->particles->push(particle);
					HX_STACK_LINE(373)
					Float emitPower;		HX_STACK_VAR(emitPower,"emitPower");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						Float min = this->minEmitPower;		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(373)
						Float max = this->maxEmitPower;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(373)
						Float ret = min;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(373)
						if (((min == max))){
							HX_STACK_LINE(373)
							ret = min;
						}
						else{
							HX_STACK_LINE(373)
							Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
							HX_STACK_LINE(373)
							ret = ((random * ((max - min))) + min);
						}
						HX_STACK_LINE(373)
						emitPower = ret;
					}
					HX_STACK_LINE(373)
					Float randX;		HX_STACK_VAR(randX,"randX");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						Float min = this->direction1->x;		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(373)
						Float max = this->direction2->x;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(373)
						Float ret = min;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(373)
						if (((min == max))){
							HX_STACK_LINE(373)
							ret = min;
						}
						else{
							HX_STACK_LINE(373)
							Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
							HX_STACK_LINE(373)
							ret = ((random * ((max - min))) + min);
						}
						HX_STACK_LINE(373)
						randX = ret;
					}
					HX_STACK_LINE(373)
					Float randY;		HX_STACK_VAR(randY,"randY");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						Float min = this->direction1->y;		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(373)
						Float max = this->direction2->y;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(373)
						Float ret = min;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(373)
						if (((min == max))){
							HX_STACK_LINE(373)
							ret = min;
						}
						else{
							HX_STACK_LINE(373)
							Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
							HX_STACK_LINE(373)
							ret = ((random * ((max - min))) + min);
						}
						HX_STACK_LINE(373)
						randY = ret;
					}
					HX_STACK_LINE(373)
					Float randZ;		HX_STACK_VAR(randZ,"randZ");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						Float min = this->direction1->z;		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(373)
						Float max = this->direction2->z;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(373)
						Float ret = min;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(373)
						if (((min == max))){
							HX_STACK_LINE(373)
							ret = min;
						}
						else{
							HX_STACK_LINE(373)
							Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
							HX_STACK_LINE(373)
							ret = ((random * ((max - min))) + min);
						}
						HX_STACK_LINE(373)
						randZ = ret;
					}
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						Float x = (randX * emitPower);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(373)
						Float y = (randY * emitPower);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(373)
						Float z = (randZ * emitPower);		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 result = particle->direction;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(373)
						result->x = (((x * worldMatrix->m->__get((int)0)) + (y * worldMatrix->m->__get((int)4))) + (z * worldMatrix->m->__get((int)8)));
						HX_STACK_LINE(373)
						result->y = (((x * worldMatrix->m->__get((int)1)) + (y * worldMatrix->m->__get((int)5))) + (z * worldMatrix->m->__get((int)9)));
						HX_STACK_LINE(373)
						result->z = (((x * worldMatrix->m->__get((int)2)) + (y * worldMatrix->m->__get((int)6))) + (z * worldMatrix->m->__get((int)10)));
					}
					HX_STACK_LINE(373)
					Float _g10;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						Float min = this->minLifeTime;		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(373)
						Float max = this->maxLifeTime;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(373)
						Float ret = min;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(373)
						if (((min == max))){
							HX_STACK_LINE(373)
							ret = min;
						}
						else{
							HX_STACK_LINE(373)
							Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
							HX_STACK_LINE(373)
							ret = ((random * ((max - min))) + min);
						}
						HX_STACK_LINE(373)
						_g10 = ret;
					}
					HX_STACK_LINE(373)
					particle->lifeTime = _g10;
					HX_STACK_LINE(373)
					Float _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						Float min = this->minSize;		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(373)
						Float max = this->maxSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(373)
						Float ret = min;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(373)
						if (((min == max))){
							HX_STACK_LINE(373)
							ret = min;
						}
						else{
							HX_STACK_LINE(373)
							Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
							HX_STACK_LINE(373)
							ret = ((random * ((max - min))) + min);
						}
						HX_STACK_LINE(373)
						_g11 = ret;
					}
					HX_STACK_LINE(373)
					particle->size = _g11;
					HX_STACK_LINE(373)
					Float _g12;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						Float min = this->minAngularSpeed;		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(373)
						Float max = this->maxAngularSpeed;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(373)
						Float ret = min;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(373)
						if (((min == max))){
							HX_STACK_LINE(373)
							ret = min;
						}
						else{
							HX_STACK_LINE(373)
							Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
							HX_STACK_LINE(373)
							ret = ((random * ((max - min))) + min);
						}
						HX_STACK_LINE(373)
						_g12 = ret;
					}
					HX_STACK_LINE(373)
					particle->angularSpeed = _g12;
					HX_STACK_LINE(373)
					Float _g13;		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						Float min = this->minEmitBox->x;		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(373)
						Float max = this->maxEmitBox->x;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(373)
						Float ret = min;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(373)
						if (((min == max))){
							HX_STACK_LINE(373)
							ret = min;
						}
						else{
							HX_STACK_LINE(373)
							Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
							HX_STACK_LINE(373)
							ret = ((random * ((max - min))) + min);
						}
						HX_STACK_LINE(373)
						_g13 = ret;
					}
					HX_STACK_LINE(373)
					randX = _g13;
					HX_STACK_LINE(373)
					Float _g14;		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						Float min = this->minEmitBox->y;		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(373)
						Float max = this->maxEmitBox->y;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(373)
						Float ret = min;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(373)
						if (((min == max))){
							HX_STACK_LINE(373)
							ret = min;
						}
						else{
							HX_STACK_LINE(373)
							Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
							HX_STACK_LINE(373)
							ret = ((random * ((max - min))) + min);
						}
						HX_STACK_LINE(373)
						_g14 = ret;
					}
					HX_STACK_LINE(373)
					randY = _g14;
					HX_STACK_LINE(373)
					Float _g15;		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						Float min = this->minEmitBox->z;		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(373)
						Float max = this->maxEmitBox->z;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(373)
						Float ret = min;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(373)
						if (((min == max))){
							HX_STACK_LINE(373)
							ret = min;
						}
						else{
							HX_STACK_LINE(373)
							Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
							HX_STACK_LINE(373)
							ret = ((random * ((max - min))) + min);
						}
						HX_STACK_LINE(373)
						_g15 = ret;
					}
					HX_STACK_LINE(373)
					randZ = _g15;
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 result = particle->position;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(373)
						Float rx = ((((randX * worldMatrix->m->__get((int)0)) + (randY * worldMatrix->m->__get((int)4))) + (randZ * worldMatrix->m->__get((int)8))) + worldMatrix->m->__get((int)12));		HX_STACK_VAR(rx,"rx");
						HX_STACK_LINE(373)
						Float ry = ((((randX * worldMatrix->m->__get((int)1)) + (randY * worldMatrix->m->__get((int)5))) + (randZ * worldMatrix->m->__get((int)9))) + worldMatrix->m->__get((int)13));		HX_STACK_VAR(ry,"ry");
						HX_STACK_LINE(373)
						Float rz = ((((randX * worldMatrix->m->__get((int)2)) + (randY * worldMatrix->m->__get((int)6))) + (randZ * worldMatrix->m->__get((int)10))) + worldMatrix->m->__get((int)14));		HX_STACK_VAR(rz,"rz");
						HX_STACK_LINE(373)
						Float rw = ((((randX * worldMatrix->m->__get((int)3)) + (randY * worldMatrix->m->__get((int)7))) + (randZ * worldMatrix->m->__get((int)11))) + worldMatrix->m->__get((int)15));		HX_STACK_VAR(rw,"rw");
						HX_STACK_LINE(373)
						result->x = (Float(rx) / Float(rw));
						HX_STACK_LINE(373)
						result->y = (Float(ry) / Float(rw));
						HX_STACK_LINE(373)
						result->z = (Float(rz) / Float(rw));
						HX_STACK_LINE(373)
						result;
					}
					HX_STACK_LINE(373)
					Float step;		HX_STACK_VAR(step,"step");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						Float ret = (int)0;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(373)
						{
							HX_STACK_LINE(373)
							Float random = ::Math_obj::random();		HX_STACK_VAR(random,"random");
							HX_STACK_LINE(373)
							ret = random;
						}
						HX_STACK_LINE(373)
						step = ret;
					}
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Color4 left = this->color1;		HX_STACK_VAR(left,"left");
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Color4 right = this->color2;		HX_STACK_VAR(right,"right");
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Color4 result = particle->color;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(373)
						result->r = (left->r + (((right->r - left->r)) * step));
						HX_STACK_LINE(373)
						result->g = (left->g + (((right->g - left->g)) * step));
						HX_STACK_LINE(373)
						result->b = (left->b + (((right->b - left->b)) * step));
						HX_STACK_LINE(373)
						result->a = (left->a + (((right->a - left->a)) * step));
						HX_STACK_LINE(373)
						result;
					}
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Color4 _this = this->colorDead;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Color4 right = particle->color;		HX_STACK_VAR(right,"right");
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Color4 result = this->_colorDiff;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(373)
						result->r = (_this->r - right->r);
						HX_STACK_LINE(373)
						result->g = (_this->g - right->g);
						HX_STACK_LINE(373)
						result->b = (_this->b - right->b);
						HX_STACK_LINE(373)
						result->a = (_this->a - right->a);
						HX_STACK_LINE(373)
						result;
					}
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Color4 _this = this->_colorDiff;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(373)
						Float scale = (Float(1.0) / Float(particle->lifeTime));		HX_STACK_VAR(scale,"scale");
						HX_STACK_LINE(373)
						::com::gamestudiohx::babylonhx::tools::math::Color4 result = particle->colorStep;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(373)
						result->r = (_this->r * scale);
						HX_STACK_LINE(373)
						result->g = (_this->g * scale);
						HX_STACK_LINE(373)
						result->b = (_this->b * scale);
						HX_STACK_LINE(373)
						result->a = (_this->a * scale);
						HX_STACK_LINE(373)
						result;
					}
				}
			}
		}
		HX_STACK_LINE(376)
		if ((this->_stopped)){
			HX_STACK_LINE(377)
			if ((!(this->_alive))){
				HX_STACK_LINE(378)
				this->_started = false;
				HX_STACK_LINE(379)
				if ((this->disposeOnStop)){
					HX_STACK_LINE(380)
					this->_scene->_toBeDisposed->push(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
		HX_STACK_LINE(386)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(387)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(387)
			int _g4 = this->particles->length;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(387)
			while((true)){
				HX_STACK_LINE(387)
				if ((!(((_g11 < _g4))))){
					HX_STACK_LINE(387)
					break;
				}
				HX_STACK_LINE(387)
				int index = (_g11)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(388)
				::com::gamestudiohx::babylonhx::particles::Particle particle = this->particles->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::particles::Particle >();		HX_STACK_VAR(particle,"particle");
				HX_STACK_LINE(390)
				{
					HX_STACK_LINE(390)
					int index1 = (offset)++;		HX_STACK_VAR(index1,"index1");
					HX_STACK_LINE(390)
					int offset1 = (index1 * (int)11);		HX_STACK_VAR(offset1,"offset1");
					HX_STACK_LINE(390)
					this->_vertices[offset1] = particle->position->x;
					HX_STACK_LINE(390)
					this->_vertices[(offset1 + (int)1)] = particle->position->y;
					HX_STACK_LINE(390)
					this->_vertices[(offset1 + (int)2)] = particle->position->z;
					HX_STACK_LINE(390)
					this->_vertices[(offset1 + (int)3)] = particle->color->r;
					HX_STACK_LINE(390)
					this->_vertices[(offset1 + (int)4)] = particle->color->g;
					HX_STACK_LINE(390)
					this->_vertices[(offset1 + (int)5)] = particle->color->b;
					HX_STACK_LINE(390)
					this->_vertices[(offset1 + (int)6)] = particle->color->a;
					HX_STACK_LINE(390)
					this->_vertices[(offset1 + (int)7)] = particle->angle;
					HX_STACK_LINE(390)
					this->_vertices[(offset1 + (int)8)] = particle->size;
					HX_STACK_LINE(390)
					this->_vertices[(offset1 + (int)9)] = (int)0;
					HX_STACK_LINE(390)
					this->_vertices[(offset1 + (int)10)] = (int)0;
				}
				HX_STACK_LINE(391)
				{
					HX_STACK_LINE(391)
					int index1 = (offset)++;		HX_STACK_VAR(index1,"index1");
					HX_STACK_LINE(391)
					int offset1 = (index1 * (int)11);		HX_STACK_VAR(offset1,"offset1");
					HX_STACK_LINE(391)
					this->_vertices[offset1] = particle->position->x;
					HX_STACK_LINE(391)
					this->_vertices[(offset1 + (int)1)] = particle->position->y;
					HX_STACK_LINE(391)
					this->_vertices[(offset1 + (int)2)] = particle->position->z;
					HX_STACK_LINE(391)
					this->_vertices[(offset1 + (int)3)] = particle->color->r;
					HX_STACK_LINE(391)
					this->_vertices[(offset1 + (int)4)] = particle->color->g;
					HX_STACK_LINE(391)
					this->_vertices[(offset1 + (int)5)] = particle->color->b;
					HX_STACK_LINE(391)
					this->_vertices[(offset1 + (int)6)] = particle->color->a;
					HX_STACK_LINE(391)
					this->_vertices[(offset1 + (int)7)] = particle->angle;
					HX_STACK_LINE(391)
					this->_vertices[(offset1 + (int)8)] = particle->size;
					HX_STACK_LINE(391)
					this->_vertices[(offset1 + (int)9)] = (int)1;
					HX_STACK_LINE(391)
					this->_vertices[(offset1 + (int)10)] = (int)0;
				}
				HX_STACK_LINE(392)
				{
					HX_STACK_LINE(392)
					int index1 = (offset)++;		HX_STACK_VAR(index1,"index1");
					HX_STACK_LINE(392)
					int offset1 = (index1 * (int)11);		HX_STACK_VAR(offset1,"offset1");
					HX_STACK_LINE(392)
					this->_vertices[offset1] = particle->position->x;
					HX_STACK_LINE(392)
					this->_vertices[(offset1 + (int)1)] = particle->position->y;
					HX_STACK_LINE(392)
					this->_vertices[(offset1 + (int)2)] = particle->position->z;
					HX_STACK_LINE(392)
					this->_vertices[(offset1 + (int)3)] = particle->color->r;
					HX_STACK_LINE(392)
					this->_vertices[(offset1 + (int)4)] = particle->color->g;
					HX_STACK_LINE(392)
					this->_vertices[(offset1 + (int)5)] = particle->color->b;
					HX_STACK_LINE(392)
					this->_vertices[(offset1 + (int)6)] = particle->color->a;
					HX_STACK_LINE(392)
					this->_vertices[(offset1 + (int)7)] = particle->angle;
					HX_STACK_LINE(392)
					this->_vertices[(offset1 + (int)8)] = particle->size;
					HX_STACK_LINE(392)
					this->_vertices[(offset1 + (int)9)] = (int)1;
					HX_STACK_LINE(392)
					this->_vertices[(offset1 + (int)10)] = (int)1;
				}
				HX_STACK_LINE(393)
				{
					HX_STACK_LINE(393)
					int index1 = (offset)++;		HX_STACK_VAR(index1,"index1");
					HX_STACK_LINE(393)
					int offset1 = (index1 * (int)11);		HX_STACK_VAR(offset1,"offset1");
					HX_STACK_LINE(393)
					this->_vertices[offset1] = particle->position->x;
					HX_STACK_LINE(393)
					this->_vertices[(offset1 + (int)1)] = particle->position->y;
					HX_STACK_LINE(393)
					this->_vertices[(offset1 + (int)2)] = particle->position->z;
					HX_STACK_LINE(393)
					this->_vertices[(offset1 + (int)3)] = particle->color->r;
					HX_STACK_LINE(393)
					this->_vertices[(offset1 + (int)4)] = particle->color->g;
					HX_STACK_LINE(393)
					this->_vertices[(offset1 + (int)5)] = particle->color->b;
					HX_STACK_LINE(393)
					this->_vertices[(offset1 + (int)6)] = particle->color->a;
					HX_STACK_LINE(393)
					this->_vertices[(offset1 + (int)7)] = particle->angle;
					HX_STACK_LINE(393)
					this->_vertices[(offset1 + (int)8)] = particle->size;
					HX_STACK_LINE(393)
					this->_vertices[(offset1 + (int)9)] = (int)0;
					HX_STACK_LINE(393)
					this->_vertices[(offset1 + (int)10)] = (int)1;
				}
			}
		}
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			Dynamic vertices = this->_vertices;		HX_STACK_VAR(vertices,"vertices");
			HX_STACK_LINE(396)
			int length = (this->particles->length * this->_vertexStrideSize);		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(396)
			{
				HX_STACK_LINE(396)
				::openfl::gl::GLBuffer buffer = this->_vertexBuffer->buffer;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(396)
				::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
			}
			HX_STACK_LINE(396)
			if (((length != (int)0))){
				HX_STACK_LINE(396)
				::openfl::utils::IMemoryRange data = ::openfl::utils::Float32Array_obj::__new(vertices,(int)0,length);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(396)
				::openfl::utils::ByteArray _g16 = data->getByteBuffer();		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(396)
				int _g17 = data->getStart();		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(396)
				int _g18 = data->getLength();		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(396)
				::openfl::gl::GL_obj::lime_gl_buffer_sub_data((int)34962,(int)0,_g16,_g17,_g18);
			}
			else{
				HX_STACK_LINE(396)
				::openfl::utils::IMemoryRange data = ::openfl::utils::Float32Array_obj::__new(vertices,null(),null());		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(396)
				::openfl::utils::ByteArray _g19 = data->getByteBuffer();		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(396)
				int _g20 = data->getStart();		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(396)
				int _g21 = data->getLength();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(396)
				::openfl::gl::GL_obj::lime_gl_buffer_sub_data((int)34962,(int)0,_g19,_g20,_g21);
			}
			HX_STACK_LINE(396)
			::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleSystem_obj,animate,(void))

int ParticleSystem_obj::render( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.particles.ParticleSystem","render",0xc4a95bfc,"com.gamestudiohx.babylonhx.particles.ParticleSystem.render","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",399,0x17713bd4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(400)
	::com::gamestudiohx::babylonhx::materials::Effect effect = this->_getEffect();		HX_STACK_VAR(effect,"effect");
	HX_STACK_LINE(403)
	if (((  ((!(((  ((!(((  ((!(((  ((!(((this->emitter == null()))))) ? bool(!(effect->isReady())) : bool(true) ))))) ? bool((this->particleTexture == null())) : bool(true) ))))) ? bool(!(this->particleTexture->isReady())) : bool(true) ))))) ? bool((this->particles->length == (int)0)) : bool(true) ))){
		HX_STACK_LINE(404)
		return (int)0;
	}
	HX_STACK_LINE(407)
	this->_engine->enableEffect(effect);
	HX_STACK_LINE(409)
	::com::gamestudiohx::babylonhx::tools::math::Matrix viewMatrix = this->_scene->getViewMatrix();		HX_STACK_VAR(viewMatrix,"viewMatrix");
	HX_STACK_LINE(410)
	effect->setTexture(HX_CSTRING("diffuseSampler"),this->particleTexture);
	HX_STACK_LINE(411)
	{
		HX_STACK_LINE(411)
		Dynamic uniform = effect->getUniform(HX_CSTRING("view"));		HX_STACK_VAR(uniform,"uniform");
		HX_STACK_LINE(411)
		if (((uniform != null()))){
			HX_STACK_LINE(411)
			Dynamic location = uniform;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(411)
			Dynamic v;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(411)
			{
				HX_STACK_LINE(411)
				::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(viewMatrix->m,null(),null());		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(411)
				Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(411)
				v = data;
			}
			HX_STACK_LINE(411)
			::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
		}
	}
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		::com::gamestudiohx::babylonhx::tools::math::Matrix matrix = this->_scene->getProjectionMatrix();		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(412)
		{
			HX_STACK_LINE(412)
			Dynamic uniform = effect->getUniform(HX_CSTRING("projection"));		HX_STACK_VAR(uniform,"uniform");
			HX_STACK_LINE(412)
			if (((uniform != null()))){
				HX_STACK_LINE(412)
				Dynamic location = uniform;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(412)
				Dynamic v;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(412)
				{
					HX_STACK_LINE(412)
					::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(412)
					Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(412)
					v = data;
				}
				HX_STACK_LINE(412)
				::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
			}
		}
	}
	HX_STACK_LINE(413)
	{
		HX_STACK_LINE(413)
		Float x = this->textureMask->r;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(413)
		Float y = this->textureMask->g;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(413)
		Float z = this->textureMask->b;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(413)
		Float w = this->textureMask->a;		HX_STACK_VAR(w,"w");
		struct _Function_2_1{
			inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &x){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",413,0x17713bd4)
				{
					HX_STACK_LINE(413)
					Array< Float > _g = effect->_valueCache->get(HX_CSTRING("textureMask"));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(413)
					Float _g1 = _g->__get((int)0);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(413)
					return (_g1 == x);
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &y){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",413,0x17713bd4)
				{
					HX_STACK_LINE(413)
					Array< Float > _g2 = effect->_valueCache->get(HX_CSTRING("textureMask"));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(413)
					Float _g3 = _g2->__get((int)1);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(413)
					return (_g3 == y);
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &z){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",413,0x17713bd4)
				{
					HX_STACK_LINE(413)
					Array< Float > _g4 = effect->_valueCache->get(HX_CSTRING("textureMask"));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(413)
					Float _g5 = _g4->__get((int)2);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(413)
					return (_g5 == z);
				}
				return null();
			}
		};
		struct _Function_2_4{
			inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &w){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",413,0x17713bd4)
				{
					HX_STACK_LINE(413)
					Array< Float > _g6 = effect->_valueCache->get(HX_CSTRING("textureMask"));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(413)
					Float _g7 = _g6->__get((int)3);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(413)
					return (_g7 == w);
				}
				return null();
			}
		};
		HX_STACK_LINE(413)
		if ((!(((  (((  (((  (((  ((effect->_valueCache->exists(HX_CSTRING("textureMask")))) ? bool(_Function_2_1::Block(effect,x)) : bool(false) ))) ? bool(_Function_2_2::Block(effect,y)) : bool(false) ))) ? bool(_Function_2_3::Block(effect,z)) : bool(false) ))) ? bool(_Function_2_4::Block(effect,w)) : bool(false) ))))){
			HX_STACK_LINE(413)
			if ((!(effect->_valueCache->exists(HX_CSTRING("textureMask"))))){
				HX_STACK_LINE(413)
				effect->_valueCache->set(HX_CSTRING("textureMask"),Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add(w));
			}
			else{
				HX_STACK_LINE(413)
				Array< Float > _g8 = effect->_valueCache->get(HX_CSTRING("textureMask"));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(413)
				_g8[(int)0] = x;
				HX_STACK_LINE(413)
				Array< Float > _g9 = effect->_valueCache->get(HX_CSTRING("textureMask"));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(413)
				_g9[(int)1] = y;
				HX_STACK_LINE(413)
				Array< Float > _g10 = effect->_valueCache->get(HX_CSTRING("textureMask"));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(413)
				_g10[(int)2] = z;
				HX_STACK_LINE(413)
				Array< Float > _g11 = effect->_valueCache->get(HX_CSTRING("textureMask"));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(413)
				_g11[(int)3] = w;
			}
			HX_STACK_LINE(413)
			{
				HX_STACK_LINE(413)
				Dynamic uniform = effect->getUniform(HX_CSTRING("textureMask"));		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(413)
				if (((uniform != null()))){
					HX_STACK_LINE(413)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(413)
					::openfl::gl::GL_obj::lime_gl_uniform4f(location,x,y,z,w);
				}
			}
		}
	}
	HX_STACK_LINE(415)
	if (((::com::gamestudiohx::babylonhx::Engine_obj::clipPlane != null()))){
		HX_STACK_LINE(416)
		::com::gamestudiohx::babylonhx::tools::math::Matrix invView;		HX_STACK_VAR(invView,"invView");
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(416)
			result->m[(int)0] = viewMatrix->m->__get((int)0);
			HX_STACK_LINE(416)
			result->m[(int)1] = viewMatrix->m->__get((int)1);
			HX_STACK_LINE(416)
			result->m[(int)2] = viewMatrix->m->__get((int)2);
			HX_STACK_LINE(416)
			result->m[(int)3] = viewMatrix->m->__get((int)3);
			HX_STACK_LINE(416)
			result->m[(int)4] = viewMatrix->m->__get((int)4);
			HX_STACK_LINE(416)
			result->m[(int)5] = viewMatrix->m->__get((int)5);
			HX_STACK_LINE(416)
			result->m[(int)6] = viewMatrix->m->__get((int)6);
			HX_STACK_LINE(416)
			result->m[(int)7] = viewMatrix->m->__get((int)7);
			HX_STACK_LINE(416)
			result->m[(int)8] = viewMatrix->m->__get((int)8);
			HX_STACK_LINE(416)
			result->m[(int)9] = viewMatrix->m->__get((int)9);
			HX_STACK_LINE(416)
			result->m[(int)10] = viewMatrix->m->__get((int)10);
			HX_STACK_LINE(416)
			result->m[(int)11] = viewMatrix->m->__get((int)11);
			HX_STACK_LINE(416)
			result->m[(int)12] = viewMatrix->m->__get((int)12);
			HX_STACK_LINE(416)
			result->m[(int)13] = viewMatrix->m->__get((int)13);
			HX_STACK_LINE(416)
			result->m[(int)14] = viewMatrix->m->__get((int)14);
			HX_STACK_LINE(416)
			result->m[(int)15] = viewMatrix->m->__get((int)15);
			HX_STACK_LINE(416)
			invView = result;
		}
		HX_STACK_LINE(417)
		{
			HX_STACK_LINE(417)
			Float l1 = invView->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
			HX_STACK_LINE(417)
			Float l2 = invView->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
			HX_STACK_LINE(417)
			Float l3 = invView->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
			HX_STACK_LINE(417)
			Float l4 = invView->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
			HX_STACK_LINE(417)
			Float l5 = invView->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
			HX_STACK_LINE(417)
			Float l6 = invView->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
			HX_STACK_LINE(417)
			Float l7 = invView->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
			HX_STACK_LINE(417)
			Float l8 = invView->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
			HX_STACK_LINE(417)
			Float l9 = invView->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
			HX_STACK_LINE(417)
			Float l10 = invView->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
			HX_STACK_LINE(417)
			Float l11 = invView->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
			HX_STACK_LINE(417)
			Float l12 = invView->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
			HX_STACK_LINE(417)
			Float l13 = invView->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
			HX_STACK_LINE(417)
			Float l14 = invView->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
			HX_STACK_LINE(417)
			Float l15 = invView->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
			HX_STACK_LINE(417)
			Float l16 = invView->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
			HX_STACK_LINE(417)
			Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
			HX_STACK_LINE(417)
			Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
			HX_STACK_LINE(417)
			Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
			HX_STACK_LINE(417)
			Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
			HX_STACK_LINE(417)
			Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
			HX_STACK_LINE(417)
			Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
			HX_STACK_LINE(417)
			Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
			HX_STACK_LINE(417)
			Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
			HX_STACK_LINE(417)
			Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
			HX_STACK_LINE(417)
			Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
			HX_STACK_LINE(417)
			Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
			HX_STACK_LINE(417)
			Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
			HX_STACK_LINE(417)
			Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
			HX_STACK_LINE(417)
			Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
			HX_STACK_LINE(417)
			Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
			HX_STACK_LINE(417)
			Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
			HX_STACK_LINE(417)
			Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
			HX_STACK_LINE(417)
			Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
			HX_STACK_LINE(417)
			Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
			HX_STACK_LINE(417)
			Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
			HX_STACK_LINE(417)
			Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
			HX_STACK_LINE(417)
			Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
			HX_STACK_LINE(417)
			Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
			HX_STACK_LINE(417)
			invView->m[(int)0] = (l23 * l27);
			HX_STACK_LINE(417)
			invView->m[(int)4] = (l24 * l27);
			HX_STACK_LINE(417)
			invView->m[(int)8] = (l25 * l27);
			HX_STACK_LINE(417)
			invView->m[(int)12] = (l26 * l27);
			HX_STACK_LINE(417)
			invView->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
			HX_STACK_LINE(417)
			invView->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
			HX_STACK_LINE(417)
			invView->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
			HX_STACK_LINE(417)
			invView->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
			HX_STACK_LINE(417)
			invView->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
			HX_STACK_LINE(417)
			invView->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
			HX_STACK_LINE(417)
			invView->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
			HX_STACK_LINE(417)
			invView->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
			HX_STACK_LINE(417)
			invView->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
			HX_STACK_LINE(417)
			invView->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
			HX_STACK_LINE(417)
			invView->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
			HX_STACK_LINE(417)
			invView->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
		}
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(418)
			Dynamic uniform = effect->getUniform(HX_CSTRING("invView"));		HX_STACK_VAR(uniform,"uniform");
			HX_STACK_LINE(418)
			if (((uniform != null()))){
				HX_STACK_LINE(418)
				Dynamic location = uniform;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(418)
				Dynamic v;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(418)
				{
					HX_STACK_LINE(418)
					::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(invView->m,null(),null());		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(418)
					Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(418)
					v = data;
				}
				HX_STACK_LINE(418)
				::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
			}
		}
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			Float x = ::com::gamestudiohx::babylonhx::Engine_obj::clipPlane->normal->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(419)
			Float y = ::com::gamestudiohx::babylonhx::Engine_obj::clipPlane->normal->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(419)
			Float z = ::com::gamestudiohx::babylonhx::Engine_obj::clipPlane->normal->z;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(419)
			Float w = ::com::gamestudiohx::babylonhx::Engine_obj::clipPlane->d;		HX_STACK_VAR(w,"w");
			struct _Function_3_1{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &x){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",419,0x17713bd4)
					{
						HX_STACK_LINE(419)
						Array< Float > _g12 = effect->_valueCache->get(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(419)
						Float _g13 = _g12->__get((int)0);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(419)
						return (_g13 == x);
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",419,0x17713bd4)
					{
						HX_STACK_LINE(419)
						Array< Float > _g14 = effect->_valueCache->get(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(419)
						Float _g15 = _g14->__get((int)1);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(419)
						return (_g15 == y);
					}
					return null();
				}
			};
			struct _Function_3_3{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &z){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",419,0x17713bd4)
					{
						HX_STACK_LINE(419)
						Array< Float > _g16 = effect->_valueCache->get(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(419)
						Float _g17 = _g16->__get((int)2);		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(419)
						return (_g17 == z);
					}
					return null();
				}
			};
			struct _Function_3_4{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect &effect,Float &w){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",419,0x17713bd4)
					{
						HX_STACK_LINE(419)
						Array< Float > _g18 = effect->_valueCache->get(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(419)
						Float _g19 = _g18->__get((int)3);		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(419)
						return (_g19 == w);
					}
					return null();
				}
			};
			HX_STACK_LINE(419)
			if ((!(((  (((  (((  (((  ((effect->_valueCache->exists(HX_CSTRING("vClipPlane")))) ? bool(_Function_3_1::Block(effect,x)) : bool(false) ))) ? bool(_Function_3_2::Block(effect,y)) : bool(false) ))) ? bool(_Function_3_3::Block(effect,z)) : bool(false) ))) ? bool(_Function_3_4::Block(effect,w)) : bool(false) ))))){
				HX_STACK_LINE(419)
				if ((!(effect->_valueCache->exists(HX_CSTRING("vClipPlane"))))){
					HX_STACK_LINE(419)
					effect->_valueCache->set(HX_CSTRING("vClipPlane"),Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add(w));
				}
				else{
					HX_STACK_LINE(419)
					Array< Float > _g20 = effect->_valueCache->get(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(419)
					_g20[(int)0] = x;
					HX_STACK_LINE(419)
					Array< Float > _g21 = effect->_valueCache->get(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(419)
					_g21[(int)1] = y;
					HX_STACK_LINE(419)
					Array< Float > _g22 = effect->_valueCache->get(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(419)
					_g22[(int)2] = z;
					HX_STACK_LINE(419)
					Array< Float > _g23 = effect->_valueCache->get(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(419)
					_g23[(int)3] = w;
				}
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					Dynamic uniform = effect->getUniform(HX_CSTRING("vClipPlane"));		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(419)
					if (((uniform != null()))){
						HX_STACK_LINE(419)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(419)
						::openfl::gl::GL_obj::lime_gl_uniform4f(location,x,y,z,w);
					}
				}
			}
		}
	}
	HX_STACK_LINE(423)
	this->_engine->bindBuffers(this->_vertexBuffer,this->_indexBuffer,this->_vertexDeclaration,this->_vertexStrideSize,effect);
	HX_STACK_LINE(426)
	if (((this->blendMode == ::com::gamestudiohx::babylonhx::particles::ParticleSystem_obj::BLENDMODE_ONEONE))){
		HX_STACK_LINE(427)
		this->_engine->setAlphaMode(::com::gamestudiohx::babylonhx::Engine_obj::ALPHA_ADD);
	}
	else{
		HX_STACK_LINE(429)
		this->_engine->setAlphaMode(::com::gamestudiohx::babylonhx::Engine_obj::ALPHA_COMBINE);
	}
	HX_STACK_LINE(431)
	this->_engine->draw(true,(int)0,(this->particles->length * (int)6),null());
	HX_STACK_LINE(432)
	this->_engine->setAlphaMode(::com::gamestudiohx::babylonhx::Engine_obj::ALPHA_DISABLE);
	HX_STACK_LINE(434)
	return this->particles->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleSystem_obj,render,return )

Void ParticleSystem_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.particles.ParticleSystem","dispose",0x8bbf2139,"com.gamestudiohx.babylonhx.particles.ParticleSystem.dispose","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",437,0x17713bd4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(438)
		if (((this->_vertexBuffer != null()))){
			HX_STACK_LINE(439)
			this->_engine->_releaseBuffer(this->_vertexBuffer);
			HX_STACK_LINE(440)
			this->_vertexBuffer = null();
		}
		HX_STACK_LINE(443)
		if (((this->_indexBuffer != null()))){
			HX_STACK_LINE(444)
			this->_engine->_releaseBuffer(this->_indexBuffer);
			HX_STACK_LINE(445)
			this->_indexBuffer = null();
		}
		HX_STACK_LINE(448)
		if (((this->particleTexture != null()))){
			HX_STACK_LINE(449)
			this->particleTexture->dispose();
			HX_STACK_LINE(450)
			this->particleTexture = null();
		}
		HX_STACK_LINE(456)
		this->_scene->particleSystems->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(459)
		if (((this->onDispose_dyn() != null()))){
			HX_STACK_LINE(460)
			this->onDispose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleSystem_obj,dispose,(void))

::com::gamestudiohx::babylonhx::particles::ParticleSystem ParticleSystem_obj::clone( ::String name,Dynamic newEmitter){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.particles.ParticleSystem","clone",0xeb1c7977,"com.gamestudiohx.babylonhx.particles.ParticleSystem.clone","com/gamestudiohx/babylonhx/particles/ParticleSystem.hx",464,0x17713bd4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(newEmitter,"newEmitter")
	HX_STACK_LINE(465)
	::com::gamestudiohx::babylonhx::particles::ParticleSystem result = ::com::gamestudiohx::babylonhx::particles::ParticleSystem_obj::__new(name,this->_capacity,this->_scene);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(467)
	::com::gamestudiohx::babylonhx::tools::Tools_obj::DeepCopy(hx::ObjectPtr<OBJ_>(this),result,Array_obj< ::String >::__new().Add(HX_CSTRING("particles")),Array_obj< ::String >::__new().Add(HX_CSTRING("_vertexDeclaration")).Add(HX_CSTRING("_vertexStrideSize")));
	HX_STACK_LINE(469)
	if (((newEmitter == null()))){
		HX_STACK_LINE(470)
		newEmitter = this->emitter;
	}
	HX_STACK_LINE(473)
	result->emitter = newEmitter;
	HX_STACK_LINE(474)
	if (((this->particleTexture != null()))){
		HX_STACK_LINE(475)
		::com::gamestudiohx::babylonhx::materials::textures::Texture _g = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::__new(this->particleTexture->name,this->_scene,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(475)
		result->particleTexture = _g;
	}
	HX_STACK_LINE(478)
	result->start();
	HX_STACK_LINE(480)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(ParticleSystem_obj,clone,return )

int ParticleSystem_obj::BLENDMODE_ONEONE;

int ParticleSystem_obj::BLENDMODE_STANDARD;


ParticleSystem_obj::ParticleSystem_obj()
{
}

void ParticleSystem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ParticleSystem);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(_capacity,"_capacity");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_effect,"_effect");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(direction1,"direction1");
	HX_MARK_MEMBER_NAME(direction2,"direction2");
	HX_MARK_MEMBER_NAME(minEmitBox,"minEmitBox");
	HX_MARK_MEMBER_NAME(maxEmitBox,"maxEmitBox");
	HX_MARK_MEMBER_NAME(color1,"color1");
	HX_MARK_MEMBER_NAME(color2,"color2");
	HX_MARK_MEMBER_NAME(colorDead,"colorDead");
	HX_MARK_MEMBER_NAME(textureMask,"textureMask");
	HX_MARK_MEMBER_NAME(particles,"particles");
	HX_MARK_MEMBER_NAME(_stockParticles,"_stockParticles");
	HX_MARK_MEMBER_NAME(_newPartsExcess,"_newPartsExcess");
	HX_MARK_MEMBER_NAME(_alive,"_alive");
	HX_MARK_MEMBER_NAME(_started,"_started");
	HX_MARK_MEMBER_NAME(_stopped,"_stopped");
	HX_MARK_MEMBER_NAME(_actualFrame,"_actualFrame");
	HX_MARK_MEMBER_NAME(_vertexDeclaration,"_vertexDeclaration");
	HX_MARK_MEMBER_NAME(_vertexStrideSize,"_vertexStrideSize");
	HX_MARK_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_MARK_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_MARK_MEMBER_NAME(_vertices,"_vertices");
	HX_MARK_MEMBER_NAME(_cachedDefines,"_cachedDefines");
	HX_MARK_MEMBER_NAME(_scaledUpdateSpeed,"_scaledUpdateSpeed");
	HX_MARK_MEMBER_NAME(_scaledColorStep,"_scaledColorStep");
	HX_MARK_MEMBER_NAME(_colorDiff,"_colorDiff");
	HX_MARK_MEMBER_NAME(_scaledDirection,"_scaledDirection");
	HX_MARK_MEMBER_NAME(_scaledGravity,"_scaledGravity");
	HX_MARK_MEMBER_NAME(_currentRenderId,"_currentRenderId");
	HX_MARK_MEMBER_NAME(renderingGroupId,"renderingGroupId");
	HX_MARK_MEMBER_NAME(emitter,"emitter");
	HX_MARK_MEMBER_NAME(emitRate,"emitRate");
	HX_MARK_MEMBER_NAME(manualEmitCount,"manualEmitCount");
	HX_MARK_MEMBER_NAME(updateSpeed,"updateSpeed");
	HX_MARK_MEMBER_NAME(targetStopDuration,"targetStopDuration");
	HX_MARK_MEMBER_NAME(disposeOnStop,"disposeOnStop");
	HX_MARK_MEMBER_NAME(emitterId,"emitterId");
	HX_MARK_MEMBER_NAME(minEmitPower,"minEmitPower");
	HX_MARK_MEMBER_NAME(maxEmitPower,"maxEmitPower");
	HX_MARK_MEMBER_NAME(minLifeTime,"minLifeTime");
	HX_MARK_MEMBER_NAME(maxLifeTime,"maxLifeTime");
	HX_MARK_MEMBER_NAME(minSize,"minSize");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(minAngularSpeed,"minAngularSpeed");
	HX_MARK_MEMBER_NAME(maxAngularSpeed,"maxAngularSpeed");
	HX_MARK_MEMBER_NAME(particleTexture,"particleTexture");
	HX_MARK_MEMBER_NAME(onDispose,"onDispose");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(_engine,"_engine");
	HX_MARK_END_CLASS();
}

void ParticleSystem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(_capacity,"_capacity");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_effect,"_effect");
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(direction1,"direction1");
	HX_VISIT_MEMBER_NAME(direction2,"direction2");
	HX_VISIT_MEMBER_NAME(minEmitBox,"minEmitBox");
	HX_VISIT_MEMBER_NAME(maxEmitBox,"maxEmitBox");
	HX_VISIT_MEMBER_NAME(color1,"color1");
	HX_VISIT_MEMBER_NAME(color2,"color2");
	HX_VISIT_MEMBER_NAME(colorDead,"colorDead");
	HX_VISIT_MEMBER_NAME(textureMask,"textureMask");
	HX_VISIT_MEMBER_NAME(particles,"particles");
	HX_VISIT_MEMBER_NAME(_stockParticles,"_stockParticles");
	HX_VISIT_MEMBER_NAME(_newPartsExcess,"_newPartsExcess");
	HX_VISIT_MEMBER_NAME(_alive,"_alive");
	HX_VISIT_MEMBER_NAME(_started,"_started");
	HX_VISIT_MEMBER_NAME(_stopped,"_stopped");
	HX_VISIT_MEMBER_NAME(_actualFrame,"_actualFrame");
	HX_VISIT_MEMBER_NAME(_vertexDeclaration,"_vertexDeclaration");
	HX_VISIT_MEMBER_NAME(_vertexStrideSize,"_vertexStrideSize");
	HX_VISIT_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_VISIT_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_VISIT_MEMBER_NAME(_vertices,"_vertices");
	HX_VISIT_MEMBER_NAME(_cachedDefines,"_cachedDefines");
	HX_VISIT_MEMBER_NAME(_scaledUpdateSpeed,"_scaledUpdateSpeed");
	HX_VISIT_MEMBER_NAME(_scaledColorStep,"_scaledColorStep");
	HX_VISIT_MEMBER_NAME(_colorDiff,"_colorDiff");
	HX_VISIT_MEMBER_NAME(_scaledDirection,"_scaledDirection");
	HX_VISIT_MEMBER_NAME(_scaledGravity,"_scaledGravity");
	HX_VISIT_MEMBER_NAME(_currentRenderId,"_currentRenderId");
	HX_VISIT_MEMBER_NAME(renderingGroupId,"renderingGroupId");
	HX_VISIT_MEMBER_NAME(emitter,"emitter");
	HX_VISIT_MEMBER_NAME(emitRate,"emitRate");
	HX_VISIT_MEMBER_NAME(manualEmitCount,"manualEmitCount");
	HX_VISIT_MEMBER_NAME(updateSpeed,"updateSpeed");
	HX_VISIT_MEMBER_NAME(targetStopDuration,"targetStopDuration");
	HX_VISIT_MEMBER_NAME(disposeOnStop,"disposeOnStop");
	HX_VISIT_MEMBER_NAME(emitterId,"emitterId");
	HX_VISIT_MEMBER_NAME(minEmitPower,"minEmitPower");
	HX_VISIT_MEMBER_NAME(maxEmitPower,"maxEmitPower");
	HX_VISIT_MEMBER_NAME(minLifeTime,"minLifeTime");
	HX_VISIT_MEMBER_NAME(maxLifeTime,"maxLifeTime");
	HX_VISIT_MEMBER_NAME(minSize,"minSize");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(minAngularSpeed,"minAngularSpeed");
	HX_VISIT_MEMBER_NAME(maxAngularSpeed,"maxAngularSpeed");
	HX_VISIT_MEMBER_NAME(particleTexture,"particleTexture");
	HX_VISIT_MEMBER_NAME(onDispose,"onDispose");
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(_engine,"_engine");
}

Dynamic ParticleSystem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"color1") ) { return color1; }
		if (HX_FIELD_EQ(inName,"color2") ) { return color2; }
		if (HX_FIELD_EQ(inName,"_alive") ) { return _alive; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_effect") ) { return _effect; }
		if (HX_FIELD_EQ(inName,"gravity") ) { return gravity; }
		if (HX_FIELD_EQ(inName,"emitter") ) { return emitter; }
		if (HX_FIELD_EQ(inName,"minSize") ) { return minSize; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		if (HX_FIELD_EQ(inName,"_engine") ) { return _engine; }
		if (HX_FIELD_EQ(inName,"isAlive") ) { return isAlive_dyn(); }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update_dyn(); }
		if (HX_FIELD_EQ(inName,"animate") ) { return animate_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_started") ) { return _started; }
		if (HX_FIELD_EQ(inName,"_stopped") ) { return _stopped; }
		if (HX_FIELD_EQ(inName,"emitRate") ) { return emitRate; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_capacity") ) { return _capacity; }
		if (HX_FIELD_EQ(inName,"colorDead") ) { return colorDead; }
		if (HX_FIELD_EQ(inName,"particles") ) { return particles; }
		if (HX_FIELD_EQ(inName,"_vertices") ) { return _vertices; }
		if (HX_FIELD_EQ(inName,"emitterId") ) { return inCallProp ? get_emitterId() : emitterId; }
		if (HX_FIELD_EQ(inName,"onDispose") ) { return onDispose; }
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"direction1") ) { return direction1; }
		if (HX_FIELD_EQ(inName,"direction2") ) { return direction2; }
		if (HX_FIELD_EQ(inName,"minEmitBox") ) { return minEmitBox; }
		if (HX_FIELD_EQ(inName,"maxEmitBox") ) { return maxEmitBox; }
		if (HX_FIELD_EQ(inName,"_colorDiff") ) { return _colorDiff; }
		if (HX_FIELD_EQ(inName,"_getEffect") ) { return _getEffect_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"textureMask") ) { return textureMask; }
		if (HX_FIELD_EQ(inName,"updateSpeed") ) { return updateSpeed; }
		if (HX_FIELD_EQ(inName,"minLifeTime") ) { return minLifeTime; }
		if (HX_FIELD_EQ(inName,"maxLifeTime") ) { return maxLifeTime; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_actualFrame") ) { return _actualFrame; }
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { return _indexBuffer; }
		if (HX_FIELD_EQ(inName,"minEmitPower") ) { return minEmitPower; }
		if (HX_FIELD_EQ(inName,"maxEmitPower") ) { return maxEmitPower; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { return _vertexBuffer; }
		if (HX_FIELD_EQ(inName,"disposeOnStop") ) { return disposeOnStop; }
		if (HX_FIELD_EQ(inName,"get_emitterId") ) { return get_emitterId_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_cachedDefines") ) { return _cachedDefines; }
		if (HX_FIELD_EQ(inName,"_scaledGravity") ) { return _scaledGravity; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_stockParticles") ) { return _stockParticles; }
		if (HX_FIELD_EQ(inName,"_newPartsExcess") ) { return _newPartsExcess; }
		if (HX_FIELD_EQ(inName,"manualEmitCount") ) { return manualEmitCount; }
		if (HX_FIELD_EQ(inName,"minAngularSpeed") ) { return minAngularSpeed; }
		if (HX_FIELD_EQ(inName,"maxAngularSpeed") ) { return maxAngularSpeed; }
		if (HX_FIELD_EQ(inName,"particleTexture") ) { return particleTexture; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"BLENDMODE_ONEONE") ) { return BLENDMODE_ONEONE; }
		if (HX_FIELD_EQ(inName,"_scaledColorStep") ) { return _scaledColorStep; }
		if (HX_FIELD_EQ(inName,"_scaledDirection") ) { return _scaledDirection; }
		if (HX_FIELD_EQ(inName,"_currentRenderId") ) { return _currentRenderId; }
		if (HX_FIELD_EQ(inName,"renderingGroupId") ) { return renderingGroupId; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_vertexStrideSize") ) { return _vertexStrideSize; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BLENDMODE_STANDARD") ) { return BLENDMODE_STANDARD; }
		if (HX_FIELD_EQ(inName,"_vertexDeclaration") ) { return _vertexDeclaration; }
		if (HX_FIELD_EQ(inName,"_scaledUpdateSpeed") ) { return _scaledUpdateSpeed; }
		if (HX_FIELD_EQ(inName,"targetStopDuration") ) { return targetStopDuration; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_appendParticleVertex") ) { return _appendParticleVertex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ParticleSystem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::gamestudiohx::babylonhx::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color1") ) { color1=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color2") ) { color2=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alive") ) { _alive=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_effect") ) { _effect=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::Effect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravity") ) { gravity=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emitter") ) { emitter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minSize") ) { minSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { maxSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_engine") ) { _engine=inValue.Cast< ::com::gamestudiohx::babylonhx::Engine >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_started") ) { _started=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stopped") ) { _stopped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emitRate") ) { emitRate=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_capacity") ) { _capacity=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorDead") ) { colorDead=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"particles") ) { particles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertices") ) { _vertices=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emitterId") ) { emitterId=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDispose") ) { onDispose=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"direction1") ) { direction1=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"direction2") ) { direction2=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minEmitBox") ) { minEmitBox=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxEmitBox") ) { maxEmitBox=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colorDiff") ) { _colorDiff=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color4 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"textureMask") ) { textureMask=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"updateSpeed") ) { updateSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minLifeTime") ) { minLifeTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLifeTime") ) { maxLifeTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_actualFrame") ) { _actualFrame=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { _indexBuffer=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minEmitPower") ) { minEmitPower=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxEmitPower") ) { maxEmitPower=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { _vertexBuffer=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disposeOnStop") ) { disposeOnStop=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_cachedDefines") ) { _cachedDefines=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaledGravity") ) { _scaledGravity=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_stockParticles") ) { _stockParticles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_newPartsExcess") ) { _newPartsExcess=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"manualEmitCount") ) { manualEmitCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minAngularSpeed") ) { minAngularSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxAngularSpeed") ) { maxAngularSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"particleTexture") ) { particleTexture=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::textures::Texture >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"BLENDMODE_ONEONE") ) { BLENDMODE_ONEONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaledColorStep") ) { _scaledColorStep=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaledDirection") ) { _scaledDirection=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentRenderId") ) { _currentRenderId=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderingGroupId") ) { renderingGroupId=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_vertexStrideSize") ) { _vertexStrideSize=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BLENDMODE_STANDARD") ) { BLENDMODE_STANDARD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexDeclaration") ) { _vertexDeclaration=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaledUpdateSpeed") ) { _scaledUpdateSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetStopDuration") ) { targetStopDuration=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ParticleSystem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("_capacity"));
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("_effect"));
	outFields->push(HX_CSTRING("gravity"));
	outFields->push(HX_CSTRING("direction1"));
	outFields->push(HX_CSTRING("direction2"));
	outFields->push(HX_CSTRING("minEmitBox"));
	outFields->push(HX_CSTRING("maxEmitBox"));
	outFields->push(HX_CSTRING("color1"));
	outFields->push(HX_CSTRING("color2"));
	outFields->push(HX_CSTRING("colorDead"));
	outFields->push(HX_CSTRING("textureMask"));
	outFields->push(HX_CSTRING("particles"));
	outFields->push(HX_CSTRING("_stockParticles"));
	outFields->push(HX_CSTRING("_newPartsExcess"));
	outFields->push(HX_CSTRING("_alive"));
	outFields->push(HX_CSTRING("_started"));
	outFields->push(HX_CSTRING("_stopped"));
	outFields->push(HX_CSTRING("_actualFrame"));
	outFields->push(HX_CSTRING("_vertexDeclaration"));
	outFields->push(HX_CSTRING("_vertexStrideSize"));
	outFields->push(HX_CSTRING("_vertexBuffer"));
	outFields->push(HX_CSTRING("_indexBuffer"));
	outFields->push(HX_CSTRING("_vertices"));
	outFields->push(HX_CSTRING("_cachedDefines"));
	outFields->push(HX_CSTRING("_scaledUpdateSpeed"));
	outFields->push(HX_CSTRING("_scaledColorStep"));
	outFields->push(HX_CSTRING("_colorDiff"));
	outFields->push(HX_CSTRING("_scaledDirection"));
	outFields->push(HX_CSTRING("_scaledGravity"));
	outFields->push(HX_CSTRING("_currentRenderId"));
	outFields->push(HX_CSTRING("renderingGroupId"));
	outFields->push(HX_CSTRING("emitter"));
	outFields->push(HX_CSTRING("emitRate"));
	outFields->push(HX_CSTRING("manualEmitCount"));
	outFields->push(HX_CSTRING("updateSpeed"));
	outFields->push(HX_CSTRING("targetStopDuration"));
	outFields->push(HX_CSTRING("disposeOnStop"));
	outFields->push(HX_CSTRING("emitterId"));
	outFields->push(HX_CSTRING("minEmitPower"));
	outFields->push(HX_CSTRING("maxEmitPower"));
	outFields->push(HX_CSTRING("minLifeTime"));
	outFields->push(HX_CSTRING("maxLifeTime"));
	outFields->push(HX_CSTRING("minSize"));
	outFields->push(HX_CSTRING("maxSize"));
	outFields->push(HX_CSTRING("minAngularSpeed"));
	outFields->push(HX_CSTRING("maxAngularSpeed"));
	outFields->push(HX_CSTRING("particleTexture"));
	outFields->push(HX_CSTRING("blendMode"));
	outFields->push(HX_CSTRING("_engine"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BLENDMODE_ONEONE"),
	HX_CSTRING("BLENDMODE_STANDARD"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ParticleSystem_obj,name),HX_CSTRING("name")},
	{hx::fsString,(int)offsetof(ParticleSystem_obj,id),HX_CSTRING("id")},
	{hx::fsInt,(int)offsetof(ParticleSystem_obj,_capacity),HX_CSTRING("_capacity")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Scene*/ ,(int)offsetof(ParticleSystem_obj,_scene),HX_CSTRING("_scene")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::Effect*/ ,(int)offsetof(ParticleSystem_obj,_effect),HX_CSTRING("_effect")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(ParticleSystem_obj,gravity),HX_CSTRING("gravity")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(ParticleSystem_obj,direction1),HX_CSTRING("direction1")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(ParticleSystem_obj,direction2),HX_CSTRING("direction2")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(ParticleSystem_obj,minEmitBox),HX_CSTRING("minEmitBox")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(ParticleSystem_obj,maxEmitBox),HX_CSTRING("maxEmitBox")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color4*/ ,(int)offsetof(ParticleSystem_obj,color1),HX_CSTRING("color1")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color4*/ ,(int)offsetof(ParticleSystem_obj,color2),HX_CSTRING("color2")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color4*/ ,(int)offsetof(ParticleSystem_obj,colorDead),HX_CSTRING("colorDead")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color4*/ ,(int)offsetof(ParticleSystem_obj,textureMask),HX_CSTRING("textureMask")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ParticleSystem_obj,particles),HX_CSTRING("particles")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ParticleSystem_obj,_stockParticles),HX_CSTRING("_stockParticles")},
	{hx::fsFloat,(int)offsetof(ParticleSystem_obj,_newPartsExcess),HX_CSTRING("_newPartsExcess")},
	{hx::fsBool,(int)offsetof(ParticleSystem_obj,_alive),HX_CSTRING("_alive")},
	{hx::fsBool,(int)offsetof(ParticleSystem_obj,_started),HX_CSTRING("_started")},
	{hx::fsBool,(int)offsetof(ParticleSystem_obj,_stopped),HX_CSTRING("_stopped")},
	{hx::fsFloat,(int)offsetof(ParticleSystem_obj,_actualFrame),HX_CSTRING("_actualFrame")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ParticleSystem_obj,_vertexDeclaration),HX_CSTRING("_vertexDeclaration")},
	{hx::fsInt,(int)offsetof(ParticleSystem_obj,_vertexStrideSize),HX_CSTRING("_vertexStrideSize")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer*/ ,(int)offsetof(ParticleSystem_obj,_vertexBuffer),HX_CSTRING("_vertexBuffer")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer*/ ,(int)offsetof(ParticleSystem_obj,_indexBuffer),HX_CSTRING("_indexBuffer")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ParticleSystem_obj,_vertices),HX_CSTRING("_vertices")},
	{hx::fsString,(int)offsetof(ParticleSystem_obj,_cachedDefines),HX_CSTRING("_cachedDefines")},
	{hx::fsFloat,(int)offsetof(ParticleSystem_obj,_scaledUpdateSpeed),HX_CSTRING("_scaledUpdateSpeed")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color4*/ ,(int)offsetof(ParticleSystem_obj,_scaledColorStep),HX_CSTRING("_scaledColorStep")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color4*/ ,(int)offsetof(ParticleSystem_obj,_colorDiff),HX_CSTRING("_colorDiff")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(ParticleSystem_obj,_scaledDirection),HX_CSTRING("_scaledDirection")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(ParticleSystem_obj,_scaledGravity),HX_CSTRING("_scaledGravity")},
	{hx::fsInt,(int)offsetof(ParticleSystem_obj,_currentRenderId),HX_CSTRING("_currentRenderId")},
	{hx::fsInt,(int)offsetof(ParticleSystem_obj,renderingGroupId),HX_CSTRING("renderingGroupId")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ParticleSystem_obj,emitter),HX_CSTRING("emitter")},
	{hx::fsInt,(int)offsetof(ParticleSystem_obj,emitRate),HX_CSTRING("emitRate")},
	{hx::fsInt,(int)offsetof(ParticleSystem_obj,manualEmitCount),HX_CSTRING("manualEmitCount")},
	{hx::fsFloat,(int)offsetof(ParticleSystem_obj,updateSpeed),HX_CSTRING("updateSpeed")},
	{hx::fsFloat,(int)offsetof(ParticleSystem_obj,targetStopDuration),HX_CSTRING("targetStopDuration")},
	{hx::fsBool,(int)offsetof(ParticleSystem_obj,disposeOnStop),HX_CSTRING("disposeOnStop")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ParticleSystem_obj,emitterId),HX_CSTRING("emitterId")},
	{hx::fsFloat,(int)offsetof(ParticleSystem_obj,minEmitPower),HX_CSTRING("minEmitPower")},
	{hx::fsFloat,(int)offsetof(ParticleSystem_obj,maxEmitPower),HX_CSTRING("maxEmitPower")},
	{hx::fsFloat,(int)offsetof(ParticleSystem_obj,minLifeTime),HX_CSTRING("minLifeTime")},
	{hx::fsFloat,(int)offsetof(ParticleSystem_obj,maxLifeTime),HX_CSTRING("maxLifeTime")},
	{hx::fsFloat,(int)offsetof(ParticleSystem_obj,minSize),HX_CSTRING("minSize")},
	{hx::fsFloat,(int)offsetof(ParticleSystem_obj,maxSize),HX_CSTRING("maxSize")},
	{hx::fsFloat,(int)offsetof(ParticleSystem_obj,minAngularSpeed),HX_CSTRING("minAngularSpeed")},
	{hx::fsFloat,(int)offsetof(ParticleSystem_obj,maxAngularSpeed),HX_CSTRING("maxAngularSpeed")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::textures::Texture*/ ,(int)offsetof(ParticleSystem_obj,particleTexture),HX_CSTRING("particleTexture")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ParticleSystem_obj,onDispose),HX_CSTRING("onDispose")},
	{hx::fsInt,(int)offsetof(ParticleSystem_obj,blendMode),HX_CSTRING("blendMode")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Engine*/ ,(int)offsetof(ParticleSystem_obj,_engine),HX_CSTRING("_engine")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("id"),
	HX_CSTRING("_capacity"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_effect"),
	HX_CSTRING("gravity"),
	HX_CSTRING("direction1"),
	HX_CSTRING("direction2"),
	HX_CSTRING("minEmitBox"),
	HX_CSTRING("maxEmitBox"),
	HX_CSTRING("color1"),
	HX_CSTRING("color2"),
	HX_CSTRING("colorDead"),
	HX_CSTRING("textureMask"),
	HX_CSTRING("particles"),
	HX_CSTRING("_stockParticles"),
	HX_CSTRING("_newPartsExcess"),
	HX_CSTRING("_alive"),
	HX_CSTRING("_started"),
	HX_CSTRING("_stopped"),
	HX_CSTRING("_actualFrame"),
	HX_CSTRING("_vertexDeclaration"),
	HX_CSTRING("_vertexStrideSize"),
	HX_CSTRING("_vertexBuffer"),
	HX_CSTRING("_indexBuffer"),
	HX_CSTRING("_vertices"),
	HX_CSTRING("_cachedDefines"),
	HX_CSTRING("_scaledUpdateSpeed"),
	HX_CSTRING("_scaledColorStep"),
	HX_CSTRING("_colorDiff"),
	HX_CSTRING("_scaledDirection"),
	HX_CSTRING("_scaledGravity"),
	HX_CSTRING("_currentRenderId"),
	HX_CSTRING("renderingGroupId"),
	HX_CSTRING("emitter"),
	HX_CSTRING("emitRate"),
	HX_CSTRING("manualEmitCount"),
	HX_CSTRING("updateSpeed"),
	HX_CSTRING("targetStopDuration"),
	HX_CSTRING("disposeOnStop"),
	HX_CSTRING("emitterId"),
	HX_CSTRING("get_emitterId"),
	HX_CSTRING("minEmitPower"),
	HX_CSTRING("maxEmitPower"),
	HX_CSTRING("minLifeTime"),
	HX_CSTRING("maxLifeTime"),
	HX_CSTRING("minSize"),
	HX_CSTRING("maxSize"),
	HX_CSTRING("minAngularSpeed"),
	HX_CSTRING("maxAngularSpeed"),
	HX_CSTRING("particleTexture"),
	HX_CSTRING("onDispose"),
	HX_CSTRING("blendMode"),
	HX_CSTRING("_engine"),
	HX_CSTRING("isAlive"),
	HX_CSTRING("start"),
	HX_CSTRING("stop"),
	HX_CSTRING("_appendParticleVertex"),
	HX_CSTRING("_update"),
	HX_CSTRING("_getEffect"),
	HX_CSTRING("animate"),
	HX_CSTRING("render"),
	HX_CSTRING("dispose"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ParticleSystem_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ParticleSystem_obj::BLENDMODE_ONEONE,"BLENDMODE_ONEONE");
	HX_MARK_MEMBER_NAME(ParticleSystem_obj::BLENDMODE_STANDARD,"BLENDMODE_STANDARD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ParticleSystem_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ParticleSystem_obj::BLENDMODE_ONEONE,"BLENDMODE_ONEONE");
	HX_VISIT_MEMBER_NAME(ParticleSystem_obj::BLENDMODE_STANDARD,"BLENDMODE_STANDARD");
};

#endif

Class ParticleSystem_obj::__mClass;

void ParticleSystem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.particles.ParticleSystem"), hx::TCanCast< ParticleSystem_obj> ,sStaticFields,sMemberFields,
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

void ParticleSystem_obj::__boot()
{
	BLENDMODE_ONEONE= (int)0;
	BLENDMODE_STANDARD= (int)1;
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace particles
