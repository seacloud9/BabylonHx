#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_Engine
#include <com/gamestudiohx/babylonhx/Engine.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Scene
#include <com/gamestudiohx/babylonhx/Scene.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_animations_Animation
#include <com/gamestudiohx/babylonhx/animations/Animation.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Quaternion
#include <com/gamestudiohx/babylonhx/tools/math/Quaternion.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{
namespace textures{

Void Texture_obj::__construct(::String url,::com::gamestudiohx::babylonhx::Scene scene,Dynamic noMipmap,Dynamic invertY)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.Texture","new",0x980ae96b,"com.gamestudiohx.babylonhx.materials.textures.Texture.new","com/gamestudiohx/babylonhx/materials/textures/Texture.hx",127,0xfb5e1644)
HX_STACK_THIS(this)
HX_STACK_ARG(url,"url")
HX_STACK_ARG(scene,"scene")
HX_STACK_ARG(noMipmap,"noMipmap")
HX_STACK_ARG(invertY,"invertY")
{
	HX_STACK_LINE(128)
	super::__construct(url,scene);
	HX_STACK_LINE(130)
	this->name = url;
	HX_STACK_LINE(131)
	this->url = url;
	HX_STACK_LINE(132)
	this->_noMipmap = noMipmap;
	HX_STACK_LINE(133)
	this->_invertY = invertY;
	HX_STACK_LINE(136)
	if (((this->_texture == null()))){
		HX_STACK_LINE(137)
		::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture _g = this->_getFromCache(url,noMipmap);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(137)
		this->_texture = _g;
	}
	HX_STACK_LINE(140)
	if (((this->_texture == null()))){
		HX_STACK_LINE(141)
		::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture _g1 = scene->getEngine()->createTexture(url,noMipmap,(  (((invertY != null()))) ? Dynamic((int)1) : Dynamic((int)0) ),scene);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(141)
		this->_texture = _g1;
	}
	HX_STACK_LINE(144)
	this->uOffset = (int)0;
	HX_STACK_LINE(145)
	this->_cachedUOffset = -1.123412341234;
	HX_STACK_LINE(146)
	this->vOffset = (int)0;
	HX_STACK_LINE(147)
	this->_cachedVOffset = -1.123412341234;
	HX_STACK_LINE(148)
	this->uScale = 1.0;
	HX_STACK_LINE(149)
	this->_cachedUScale = -1.123412341234;
	HX_STACK_LINE(150)
	this->vScale = 1.0;
	HX_STACK_LINE(151)
	this->_cachedVScale = -1.123412341234;
	HX_STACK_LINE(152)
	this->uAng = (int)0;
	HX_STACK_LINE(153)
	this->_cachedUAng = -1.123412341234;
	HX_STACK_LINE(154)
	this->vAng = (int)0;
	HX_STACK_LINE(155)
	this->_cachedVAng = -1.123412341234;
	HX_STACK_LINE(156)
	this->wAng = (int)0;
	HX_STACK_LINE(157)
	this->_cachedWAng = -1.123412341234;
	HX_STACK_LINE(158)
	this->wrapU = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::WRAP_ADDRESSMODE;
	HX_STACK_LINE(159)
	this->wrapV = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::WRAP_ADDRESSMODE;
	HX_STACK_LINE(160)
	this->coordinatesIndex = (int)0;
	HX_STACK_LINE(161)
	this->coordinatesMode = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::EXPLICIT_MODE;
	HX_STACK_LINE(162)
	this->anisotropicFilteringLevel = (int)4;
	HX_STACK_LINE(165)
	this->animations = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//Texture_obj::~Texture_obj() { }

Dynamic Texture_obj::__CreateEmpty() { return  new Texture_obj; }
hx::ObjectPtr< Texture_obj > Texture_obj::__new(::String url,::com::gamestudiohx::babylonhx::Scene scene,Dynamic noMipmap,Dynamic invertY)
{  hx::ObjectPtr< Texture_obj > result = new Texture_obj();
	result->__construct(url,scene,noMipmap,invertY);
	return result;}

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture_obj > result = new Texture_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Texture_obj::delayLoad( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.Texture","delayLoad",0x45e90e94,"com.gamestudiohx.babylonhx.materials.textures.Texture.delayLoad","com/gamestudiohx/babylonhx/materials/textures/Texture.hx",168,0xfb5e1644)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		if (((this->delayLoadState != ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_NOTLOADED))){
			HX_STACK_LINE(170)
			return null();
		}
		HX_STACK_LINE(173)
		this->delayLoadState = ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_LOADED;
		HX_STACK_LINE(174)
		::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture _g = this->_getFromCache(this->url,this->_noMipmap);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(174)
		this->_texture = _g;
		HX_STACK_LINE(176)
		if (((this->_texture == null()))){
			HX_STACK_LINE(177)
			::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture _g1 = this->_scene->getEngine()->createTexture(this->url,this->_noMipmap,(  ((this->_invertY)) ? Dynamic((int)1) : Dynamic((int)0) ),this->_scene);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(177)
			this->_texture = _g1;
		}
	}
return null();
}


Void Texture_obj::_prepareRowForTextureGeneration( Float x,Float y,Float z,::com::gamestudiohx::babylonhx::tools::math::Vector3 t){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.Texture","_prepareRowForTextureGeneration",0x1e78e4a7,"com.gamestudiohx.babylonhx.materials.textures.Texture._prepareRowForTextureGeneration","com/gamestudiohx/babylonhx/materials/textures/Texture.hx",181,0xfb5e1644)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(182)
		hx::SubEq(x,(this->uOffset + 0.5));
		HX_STACK_LINE(183)
		hx::SubEq(y,(this->vOffset + 0.5));
		HX_STACK_LINE(184)
		hx::SubEq(z,0.5);
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			::com::gamestudiohx::babylonhx::tools::math::Matrix transformation = this->_rowGenerationMatrix;		HX_STACK_VAR(transformation,"transformation");
			HX_STACK_LINE(186)
			Float rx = ((((x * transformation->m->__get((int)0)) + (y * transformation->m->__get((int)4))) + (z * transformation->m->__get((int)8))) + transformation->m->__get((int)12));		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(186)
			Float ry = ((((x * transformation->m->__get((int)1)) + (y * transformation->m->__get((int)5))) + (z * transformation->m->__get((int)9))) + transformation->m->__get((int)13));		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(186)
			Float rz = ((((x * transformation->m->__get((int)2)) + (y * transformation->m->__get((int)6))) + (z * transformation->m->__get((int)10))) + transformation->m->__get((int)14));		HX_STACK_VAR(rz,"rz");
			HX_STACK_LINE(186)
			Float rw = ((((x * transformation->m->__get((int)3)) + (y * transformation->m->__get((int)7))) + (z * transformation->m->__get((int)11))) + transformation->m->__get((int)15));		HX_STACK_VAR(rw,"rw");
			HX_STACK_LINE(186)
			t->x = (Float(rx) / Float(rw));
			HX_STACK_LINE(186)
			t->y = (Float(ry) / Float(rw));
			HX_STACK_LINE(186)
			t->z = (Float(rz) / Float(rw));
			HX_STACK_LINE(186)
			t;
		}
		HX_STACK_LINE(188)
		hx::MultEq(t->x,this->uScale);
		HX_STACK_LINE(189)
		hx::MultEq(t->y,this->vScale);
		HX_STACK_LINE(191)
		hx::AddEq(t->x,0.5);
		HX_STACK_LINE(192)
		hx::AddEq(t->y,0.5);
		HX_STACK_LINE(193)
		hx::AddEq(t->z,0.5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Texture_obj,_prepareRowForTextureGeneration,(void))

::com::gamestudiohx::babylonhx::tools::math::Matrix Texture_obj::_computeTextureMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.Texture","_computeTextureMatrix",0x97a5b52f,"com.gamestudiohx.babylonhx.materials.textures.Texture._computeTextureMatrix","com/gamestudiohx/babylonhx/materials/textures/Texture.hx",196,0xfb5e1644)
	HX_STACK_THIS(this)
	HX_STACK_LINE(197)
	::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_cachedTextureMatrix;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(198)
	if ((!(((bool((bool((bool((bool((bool((bool((this->uOffset == this->_cachedUOffset)) && bool((this->vOffset == this->_cachedVOffset)))) && bool((this->uScale == this->_cachedUScale)))) && bool((this->vScale == this->_cachedVScale)))) && bool((this->uAng == this->_cachedUAng)))) && bool((this->vAng == this->_cachedVAng)))) && bool((this->wAng == this->_cachedWAng))))))){
		HX_STACK_LINE(207)
		this->_cachedUOffset = this->uOffset;
		HX_STACK_LINE(208)
		this->_cachedVOffset = this->vOffset;
		HX_STACK_LINE(209)
		this->_cachedUScale = this->uScale;
		HX_STACK_LINE(210)
		this->_cachedVScale = this->vScale;
		HX_STACK_LINE(211)
		this->_cachedUAng = this->uAng;
		HX_STACK_LINE(212)
		this->_cachedVAng = this->vAng;
		HX_STACK_LINE(213)
		this->_cachedWAng = this->wAng;
		HX_STACK_LINE(215)
		if (((this->_cachedTextureMatrix == null()))){
			HX_STACK_LINE(216)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(216)
			{
				HX_STACK_LINE(216)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(216)
				result->m[(int)0] = (int)0;
				HX_STACK_LINE(216)
				result->m[(int)1] = (int)0;
				HX_STACK_LINE(216)
				result->m[(int)2] = (int)0;
				HX_STACK_LINE(216)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(216)
				result->m[(int)4] = (int)0;
				HX_STACK_LINE(216)
				result->m[(int)5] = (int)0;
				HX_STACK_LINE(216)
				result->m[(int)6] = (int)0;
				HX_STACK_LINE(216)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(216)
				result->m[(int)8] = (int)0;
				HX_STACK_LINE(216)
				result->m[(int)9] = (int)0;
				HX_STACK_LINE(216)
				result->m[(int)10] = (int)0;
				HX_STACK_LINE(216)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(216)
				result->m[(int)12] = (int)0;
				HX_STACK_LINE(216)
				result->m[(int)13] = (int)0;
				HX_STACK_LINE(216)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(216)
				result->m[(int)15] = (int)0;
				HX_STACK_LINE(216)
				_g = result;
			}
			HX_STACK_LINE(216)
			this->_cachedTextureMatrix = _g;
			HX_STACK_LINE(217)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _g1 = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(217)
			this->_rowGenerationMatrix = _g1;
			HX_STACK_LINE(218)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(218)
			this->_t0 = _g2;
			HX_STACK_LINE(219)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(219)
			this->_t1 = _g3;
			HX_STACK_LINE(220)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(220)
			this->_t2 = _g4;
		}
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_rowGenerationMatrix;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(223)
			::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
			HX_STACK_LINE(223)
			::com::gamestudiohx::babylonhx::tools::math::Quaternion _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				Float halfRoll = (this->wAng * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
				HX_STACK_LINE(223)
				Float halfPitch = (this->uAng * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
				HX_STACK_LINE(223)
				Float halfYaw = (this->vAng * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
				HX_STACK_LINE(223)
				Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
				HX_STACK_LINE(223)
				Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
				HX_STACK_LINE(223)
				Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
				HX_STACK_LINE(223)
				Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
				HX_STACK_LINE(223)
				Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
				HX_STACK_LINE(223)
				Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
				HX_STACK_LINE(223)
				tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
				HX_STACK_LINE(223)
				tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
				HX_STACK_LINE(223)
				tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
				HX_STACK_LINE(223)
				tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
				HX_STACK_LINE(223)
				_g5 = tempQuaternion;
			}
			HX_STACK_LINE(223)
			tempQuaternion = _g5;
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
				HX_STACK_LINE(223)
				Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
				HX_STACK_LINE(223)
				Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
				HX_STACK_LINE(223)
				Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
				HX_STACK_LINE(223)
				Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
				HX_STACK_LINE(223)
				Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
				HX_STACK_LINE(223)
				Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
				HX_STACK_LINE(223)
				Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
				HX_STACK_LINE(223)
				Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
				HX_STACK_LINE(223)
				result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
				HX_STACK_LINE(223)
				result->m[(int)1] = (2.0 * ((xy + zw)));
				HX_STACK_LINE(223)
				result->m[(int)2] = (2.0 * ((zx - yw)));
				HX_STACK_LINE(223)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(223)
				result->m[(int)4] = (2.0 * ((xy - zw)));
				HX_STACK_LINE(223)
				result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
				HX_STACK_LINE(223)
				result->m[(int)6] = (2.0 * ((yz + xw)));
				HX_STACK_LINE(223)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(223)
				result->m[(int)8] = (2.0 * ((zx + yw)));
				HX_STACK_LINE(223)
				result->m[(int)9] = (2.0 * ((yz - xw)));
				HX_STACK_LINE(223)
				result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
				HX_STACK_LINE(223)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(223)
				result->m[(int)12] = (int)0;
				HX_STACK_LINE(223)
				result->m[(int)13] = (int)0;
				HX_STACK_LINE(223)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(223)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(223)
				result;
			}
		}
		HX_STACK_LINE(225)
		this->_prepareRowForTextureGeneration((int)0,(int)0,(int)0,this->_t0);
		HX_STACK_LINE(226)
		this->_prepareRowForTextureGeneration(1.0,(int)0,(int)0,this->_t1);
		HX_STACK_LINE(227)
		this->_prepareRowForTextureGeneration((int)0,1.0,(int)0,this->_t2);
		HX_STACK_LINE(229)
		{
			HX_STACK_LINE(229)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_t1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(229)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_t0;		HX_STACK_VAR(otherVector,"otherVector");
			HX_STACK_LINE(229)
			hx::SubEq(_this->x,otherVector->x);
			HX_STACK_LINE(229)
			hx::SubEq(_this->y,otherVector->y);
			HX_STACK_LINE(229)
			hx::SubEq(_this->z,otherVector->z);
		}
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(230)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_t2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(230)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_t0;		HX_STACK_VAR(otherVector,"otherVector");
			HX_STACK_LINE(230)
			hx::SubEq(_this->x,otherVector->x);
			HX_STACK_LINE(230)
			hx::SubEq(_this->y,otherVector->y);
			HX_STACK_LINE(230)
			hx::SubEq(_this->z,otherVector->z);
		}
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_cachedTextureMatrix;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				result->m[(int)0] = 1.0;
				HX_STACK_LINE(232)
				result->m[(int)1] = (int)0;
				HX_STACK_LINE(232)
				result->m[(int)2] = (int)0;
				HX_STACK_LINE(232)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(232)
				result->m[(int)4] = (int)0;
				HX_STACK_LINE(232)
				result->m[(int)5] = 1.0;
				HX_STACK_LINE(232)
				result->m[(int)6] = (int)0;
				HX_STACK_LINE(232)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(232)
				result->m[(int)8] = (int)0;
				HX_STACK_LINE(232)
				result->m[(int)9] = (int)0;
				HX_STACK_LINE(232)
				result->m[(int)10] = 1.0;
				HX_STACK_LINE(232)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(232)
				result->m[(int)12] = (int)0;
				HX_STACK_LINE(232)
				result->m[(int)13] = (int)0;
				HX_STACK_LINE(232)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(232)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(232)
				result;
			}
			HX_STACK_LINE(232)
			result;
		}
		HX_STACK_LINE(233)
		this->_cachedTextureMatrix->m[(int)0] = this->_t1->x;
		HX_STACK_LINE(233)
		this->_cachedTextureMatrix->m[(int)1] = this->_t1->y;
		HX_STACK_LINE(233)
		this->_cachedTextureMatrix->m[(int)2] = this->_t1->z;
		HX_STACK_LINE(234)
		this->_cachedTextureMatrix->m[(int)4] = this->_t2->x;
		HX_STACK_LINE(234)
		this->_cachedTextureMatrix->m[(int)5] = this->_t2->y;
		HX_STACK_LINE(234)
		this->_cachedTextureMatrix->m[(int)6] = this->_t2->z;
		HX_STACK_LINE(235)
		this->_cachedTextureMatrix->m[(int)8] = this->_t0->x;
		HX_STACK_LINE(235)
		this->_cachedTextureMatrix->m[(int)9] = this->_t0->y;
		HX_STACK_LINE(235)
		this->_cachedTextureMatrix->m[(int)10] = this->_t0->z;
	}
	HX_STACK_LINE(238)
	return this->_cachedTextureMatrix;
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,_computeTextureMatrix,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix Texture_obj::_computeReflectionTextureMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.Texture","_computeReflectionTextureMatrix",0x7ede4644,"com.gamestudiohx.babylonhx.materials.textures.Texture._computeReflectionTextureMatrix","com/gamestudiohx/babylonhx/materials/textures/Texture.hx",241,0xfb5e1644)
	HX_STACK_THIS(this)
	HX_STACK_LINE(242)
	if (((bool((bool((bool((bool((this->uOffset == this->_cachedUOffset)) && bool((this->vOffset == this->_cachedVOffset)))) && bool((this->uScale == this->_cachedUScale)))) && bool((this->vScale == this->_cachedVScale)))) && bool((this->coordinatesMode == this->_cachedCoordinatesMode))))){
		HX_STACK_LINE(248)
		return this->_cachedTextureMatrix;
	}
	HX_STACK_LINE(251)
	if (((this->_cachedTextureMatrix == null()))){
		HX_STACK_LINE(252)
		::com::gamestudiohx::babylonhx::tools::math::Matrix _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(252)
		{
			HX_STACK_LINE(252)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(252)
			result->m[(int)0] = (int)0;
			HX_STACK_LINE(252)
			result->m[(int)1] = (int)0;
			HX_STACK_LINE(252)
			result->m[(int)2] = (int)0;
			HX_STACK_LINE(252)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(252)
			result->m[(int)4] = (int)0;
			HX_STACK_LINE(252)
			result->m[(int)5] = (int)0;
			HX_STACK_LINE(252)
			result->m[(int)6] = (int)0;
			HX_STACK_LINE(252)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(252)
			result->m[(int)8] = (int)0;
			HX_STACK_LINE(252)
			result->m[(int)9] = (int)0;
			HX_STACK_LINE(252)
			result->m[(int)10] = (int)0;
			HX_STACK_LINE(252)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(252)
			result->m[(int)12] = (int)0;
			HX_STACK_LINE(252)
			result->m[(int)13] = (int)0;
			HX_STACK_LINE(252)
			result->m[(int)14] = (int)0;
			HX_STACK_LINE(252)
			result->m[(int)15] = (int)0;
			HX_STACK_LINE(252)
			_g = result;
		}
		HX_STACK_LINE(252)
		this->_cachedTextureMatrix = _g;
		HX_STACK_LINE(253)
		::com::gamestudiohx::babylonhx::tools::math::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(253)
		{
			HX_STACK_LINE(253)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(253)
			result->m[(int)0] = (int)0;
			HX_STACK_LINE(253)
			result->m[(int)1] = (int)0;
			HX_STACK_LINE(253)
			result->m[(int)2] = (int)0;
			HX_STACK_LINE(253)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(253)
			result->m[(int)4] = (int)0;
			HX_STACK_LINE(253)
			result->m[(int)5] = (int)0;
			HX_STACK_LINE(253)
			result->m[(int)6] = (int)0;
			HX_STACK_LINE(253)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(253)
			result->m[(int)8] = (int)0;
			HX_STACK_LINE(253)
			result->m[(int)9] = (int)0;
			HX_STACK_LINE(253)
			result->m[(int)10] = (int)0;
			HX_STACK_LINE(253)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(253)
			result->m[(int)12] = (int)0;
			HX_STACK_LINE(253)
			result->m[(int)13] = (int)0;
			HX_STACK_LINE(253)
			result->m[(int)14] = (int)0;
			HX_STACK_LINE(253)
			result->m[(int)15] = (int)0;
			HX_STACK_LINE(253)
			_g1 = result;
		}
		HX_STACK_LINE(253)
		this->_projectionModeMatrix = _g1;
	}
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(256)
		Float _g = this->coordinatesMode;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(256)
		Float _switch_1 = (_g);
		if (  ( _switch_1==::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::SPHERICAL_MODE)){
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_cachedTextureMatrix;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					result->m[(int)0] = 1.0;
					HX_STACK_LINE(258)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(258)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(258)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(258)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(258)
					result->m[(int)5] = 1.0;
					HX_STACK_LINE(258)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(258)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(258)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(258)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(258)
					result->m[(int)10] = 1.0;
					HX_STACK_LINE(258)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(258)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(258)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(258)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(258)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(258)
					result;
				}
				HX_STACK_LINE(258)
				result;
			}
			HX_STACK_LINE(259)
			this->_cachedTextureMatrix->m[(int)0] = (-0.5 * this->uScale);
			HX_STACK_LINE(260)
			this->_cachedTextureMatrix->m[(int)5] = (-0.5 * this->vScale);
			HX_STACK_LINE(261)
			this->_cachedTextureMatrix->m[(int)12] = (0.5 + this->uOffset);
			HX_STACK_LINE(262)
			this->_cachedTextureMatrix->m[(int)13] = (0.5 + this->vOffset);
		}
		else if (  ( _switch_1==::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::PLANAR_MODE)){
			HX_STACK_LINE(265)
			{
				HX_STACK_LINE(265)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_cachedTextureMatrix;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(265)
				{
					HX_STACK_LINE(265)
					result->m[(int)0] = 1.0;
					HX_STACK_LINE(265)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(265)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(265)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(265)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(265)
					result->m[(int)5] = 1.0;
					HX_STACK_LINE(265)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(265)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(265)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(265)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(265)
					result->m[(int)10] = 1.0;
					HX_STACK_LINE(265)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(265)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(265)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(265)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(265)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(265)
					result;
				}
				HX_STACK_LINE(265)
				result;
			}
			HX_STACK_LINE(266)
			this->_cachedTextureMatrix->m[(int)0] = this->uScale;
			HX_STACK_LINE(267)
			this->_cachedTextureMatrix->m[(int)5] = this->vScale;
			HX_STACK_LINE(268)
			this->_cachedTextureMatrix->m[(int)12] = this->uOffset;
			HX_STACK_LINE(269)
			this->_cachedTextureMatrix->m[(int)13] = this->vOffset;
		}
		else if (  ( _switch_1==::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::PROJECTION_MODE)){
			HX_STACK_LINE(272)
			{
				HX_STACK_LINE(272)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_projectionModeMatrix;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(272)
				{
					HX_STACK_LINE(272)
					result->m[(int)0] = 1.0;
					HX_STACK_LINE(272)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(272)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(272)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(272)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(272)
					result->m[(int)5] = 1.0;
					HX_STACK_LINE(272)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(272)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(272)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(272)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(272)
					result->m[(int)10] = 1.0;
					HX_STACK_LINE(272)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(272)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(272)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(272)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(272)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(272)
					result;
				}
				HX_STACK_LINE(272)
				result;
			}
			HX_STACK_LINE(274)
			this->_projectionModeMatrix->m[(int)0] = 0.5;
			HX_STACK_LINE(275)
			this->_projectionModeMatrix->m[(int)5] = -0.5;
			HX_STACK_LINE(276)
			this->_projectionModeMatrix->m[(int)10] = 0.0;
			HX_STACK_LINE(277)
			this->_projectionModeMatrix->m[(int)12] = 0.5;
			HX_STACK_LINE(278)
			this->_projectionModeMatrix->m[(int)13] = 0.5;
			HX_STACK_LINE(279)
			this->_projectionModeMatrix->m[(int)14] = 1.0;
			HX_STACK_LINE(280)
			this->_projectionModeMatrix->m[(int)15] = 1.0;
			HX_STACK_LINE(282)
			{
				HX_STACK_LINE(282)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_scene->getProjectionMatrix();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(282)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_projectionModeMatrix;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(282)
				{
					HX_STACK_LINE(282)
					Array< Float > result = this->_cachedTextureMatrix->m;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(282)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(282)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(282)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(282)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(282)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(282)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(282)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(282)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(282)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(282)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(282)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(282)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(282)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(282)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(282)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(282)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(282)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(282)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(282)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(282)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(282)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(282)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(282)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(282)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(282)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(282)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(282)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(282)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(282)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(282)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(282)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(282)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(282)
					result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(282)
					result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(282)
					result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(282)
					result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(282)
					result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(282)
					result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(282)
					result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(282)
					result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(282)
					result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(282)
					result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(282)
					result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(282)
					result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(282)
					result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(282)
					result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(282)
					result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(282)
					result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(282)
					result;
				}
			}
		}
		else  {
			HX_STACK_LINE(285)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_cachedTextureMatrix;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(285)
				result->m[(int)0] = 1.0;
				HX_STACK_LINE(285)
				result->m[(int)1] = (int)0;
				HX_STACK_LINE(285)
				result->m[(int)2] = (int)0;
				HX_STACK_LINE(285)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(285)
				result->m[(int)4] = (int)0;
				HX_STACK_LINE(285)
				result->m[(int)5] = 1.0;
				HX_STACK_LINE(285)
				result->m[(int)6] = (int)0;
				HX_STACK_LINE(285)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(285)
				result->m[(int)8] = (int)0;
				HX_STACK_LINE(285)
				result->m[(int)9] = (int)0;
				HX_STACK_LINE(285)
				result->m[(int)10] = 1.0;
				HX_STACK_LINE(285)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(285)
				result->m[(int)12] = (int)0;
				HX_STACK_LINE(285)
				result->m[(int)13] = (int)0;
				HX_STACK_LINE(285)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(285)
				result->m[(int)15] = 1.0;
				HX_STACK_LINE(285)
				result;
			}
			HX_STACK_LINE(285)
			result;
		}
;
;
	}
	HX_STACK_LINE(288)
	return this->_cachedTextureMatrix;
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,_computeReflectionTextureMatrix,return )

::com::gamestudiohx::babylonhx::materials::textures::Texture Texture_obj::clone( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.Texture","clone",0x8edac528,"com.gamestudiohx.babylonhx.materials.textures.Texture.clone","com/gamestudiohx/babylonhx/materials/textures/Texture.hx",291,0xfb5e1644)
	HX_STACK_THIS(this)
	HX_STACK_LINE(292)
	::com::gamestudiohx::babylonhx::materials::textures::Texture newTexture = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::__new(this->_texture->url,this->_scene,this->_noMipmap,this->_invertY);		HX_STACK_VAR(newTexture,"newTexture");
	HX_STACK_LINE(295)
	newTexture->hasAlpha = this->hasAlpha;
	HX_STACK_LINE(296)
	newTexture->level = this->level;
	HX_STACK_LINE(299)
	newTexture->uOffset = this->uOffset;
	HX_STACK_LINE(300)
	newTexture->vOffset = this->vOffset;
	HX_STACK_LINE(301)
	newTexture->uScale = this->uScale;
	HX_STACK_LINE(302)
	newTexture->vScale = this->vScale;
	HX_STACK_LINE(303)
	newTexture->uAng = this->uAng;
	HX_STACK_LINE(304)
	newTexture->vAng = this->vAng;
	HX_STACK_LINE(305)
	newTexture->wAng = this->wAng;
	HX_STACK_LINE(306)
	newTexture->wrapU = this->wrapU;
	HX_STACK_LINE(307)
	newTexture->wrapV = this->wrapV;
	HX_STACK_LINE(308)
	newTexture->coordinatesIndex = this->coordinatesIndex;
	HX_STACK_LINE(309)
	newTexture->coordinatesMode = this->coordinatesMode;
	HX_STACK_LINE(311)
	return newTexture;
}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,clone,return )

int Texture_obj::NEAREST_SAMPLINGMODE;

int Texture_obj::BILINEAR_SAMPLINGMODE;

int Texture_obj::TRILINEAR_SAMPLINGMODE;

int Texture_obj::EXPLICIT_MODE;

int Texture_obj::SPHERICAL_MODE;

int Texture_obj::PLANAR_MODE;

int Texture_obj::CUBIC_MODE;

int Texture_obj::PROJECTION_MODE;

int Texture_obj::SKYBOX_MODE;

int Texture_obj::CLAMP_ADDRESSMODE;

int Texture_obj::WRAP_ADDRESSMODE;

int Texture_obj::MIRROR_ADDRESSMODE;


Texture_obj::Texture_obj()
{
}

void Texture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Texture);
	HX_MARK_MEMBER_NAME(uOffset,"uOffset");
	HX_MARK_MEMBER_NAME(_cachedUOffset,"_cachedUOffset");
	HX_MARK_MEMBER_NAME(vOffset,"vOffset");
	HX_MARK_MEMBER_NAME(_cachedVOffset,"_cachedVOffset");
	HX_MARK_MEMBER_NAME(uScale,"uScale");
	HX_MARK_MEMBER_NAME(_cachedUScale,"_cachedUScale");
	HX_MARK_MEMBER_NAME(vScale,"vScale");
	HX_MARK_MEMBER_NAME(_cachedVScale,"_cachedVScale");
	HX_MARK_MEMBER_NAME(uAng,"uAng");
	HX_MARK_MEMBER_NAME(_cachedUAng,"_cachedUAng");
	HX_MARK_MEMBER_NAME(vAng,"vAng");
	HX_MARK_MEMBER_NAME(_cachedVAng,"_cachedVAng");
	HX_MARK_MEMBER_NAME(wAng,"wAng");
	HX_MARK_MEMBER_NAME(_cachedWAng,"_cachedWAng");
	HX_MARK_MEMBER_NAME(wrapU,"wrapU");
	HX_MARK_MEMBER_NAME(wrapV,"wrapV");
	HX_MARK_MEMBER_NAME(coordinatesIndex,"coordinatesIndex");
	HX_MARK_MEMBER_NAME(coordinatesMode,"coordinatesMode");
	HX_MARK_MEMBER_NAME(_cachedCoordinatesMode,"_cachedCoordinatesMode");
	HX_MARK_MEMBER_NAME(anisotropicFilteringLevel,"anisotropicFilteringLevel");
	HX_MARK_MEMBER_NAME(_cachedAnisotropicFilteringLevel,"_cachedAnisotropicFilteringLevel");
	HX_MARK_MEMBER_NAME(_canvas,"_canvas");
	HX_MARK_MEMBER_NAME(_rowGenerationMatrix,"_rowGenerationMatrix");
	HX_MARK_MEMBER_NAME(_cachedTextureMatrix,"_cachedTextureMatrix");
	HX_MARK_MEMBER_NAME(_projectionModeMatrix,"_projectionModeMatrix");
	HX_MARK_MEMBER_NAME(_t0,"_t0");
	HX_MARK_MEMBER_NAME(_t1,"_t1");
	HX_MARK_MEMBER_NAME(_t2,"_t2");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_MEMBER_NAME(_noMipmap,"_noMipmap");
	HX_MARK_MEMBER_NAME(_invertY,"_invertY");
	::com::gamestudiohx::babylonhx::materials::textures::BaseTexture_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Texture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uOffset,"uOffset");
	HX_VISIT_MEMBER_NAME(_cachedUOffset,"_cachedUOffset");
	HX_VISIT_MEMBER_NAME(vOffset,"vOffset");
	HX_VISIT_MEMBER_NAME(_cachedVOffset,"_cachedVOffset");
	HX_VISIT_MEMBER_NAME(uScale,"uScale");
	HX_VISIT_MEMBER_NAME(_cachedUScale,"_cachedUScale");
	HX_VISIT_MEMBER_NAME(vScale,"vScale");
	HX_VISIT_MEMBER_NAME(_cachedVScale,"_cachedVScale");
	HX_VISIT_MEMBER_NAME(uAng,"uAng");
	HX_VISIT_MEMBER_NAME(_cachedUAng,"_cachedUAng");
	HX_VISIT_MEMBER_NAME(vAng,"vAng");
	HX_VISIT_MEMBER_NAME(_cachedVAng,"_cachedVAng");
	HX_VISIT_MEMBER_NAME(wAng,"wAng");
	HX_VISIT_MEMBER_NAME(_cachedWAng,"_cachedWAng");
	HX_VISIT_MEMBER_NAME(wrapU,"wrapU");
	HX_VISIT_MEMBER_NAME(wrapV,"wrapV");
	HX_VISIT_MEMBER_NAME(coordinatesIndex,"coordinatesIndex");
	HX_VISIT_MEMBER_NAME(coordinatesMode,"coordinatesMode");
	HX_VISIT_MEMBER_NAME(_cachedCoordinatesMode,"_cachedCoordinatesMode");
	HX_VISIT_MEMBER_NAME(anisotropicFilteringLevel,"anisotropicFilteringLevel");
	HX_VISIT_MEMBER_NAME(_cachedAnisotropicFilteringLevel,"_cachedAnisotropicFilteringLevel");
	HX_VISIT_MEMBER_NAME(_canvas,"_canvas");
	HX_VISIT_MEMBER_NAME(_rowGenerationMatrix,"_rowGenerationMatrix");
	HX_VISIT_MEMBER_NAME(_cachedTextureMatrix,"_cachedTextureMatrix");
	HX_VISIT_MEMBER_NAME(_projectionModeMatrix,"_projectionModeMatrix");
	HX_VISIT_MEMBER_NAME(_t0,"_t0");
	HX_VISIT_MEMBER_NAME(_t1,"_t1");
	HX_VISIT_MEMBER_NAME(_t2,"_t2");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(animations,"animations");
	HX_VISIT_MEMBER_NAME(_noMipmap,"_noMipmap");
	HX_VISIT_MEMBER_NAME(_invertY,"_invertY");
	::com::gamestudiohx::babylonhx::materials::textures::BaseTexture_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Texture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_t0") ) { return _t0; }
		if (HX_FIELD_EQ(inName,"_t1") ) { return _t1; }
		if (HX_FIELD_EQ(inName,"_t2") ) { return _t2; }
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"uAng") ) { return uAng; }
		if (HX_FIELD_EQ(inName,"vAng") ) { return vAng; }
		if (HX_FIELD_EQ(inName,"wAng") ) { return wAng; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wrapU") ) { return wrapU; }
		if (HX_FIELD_EQ(inName,"wrapV") ) { return wrapV; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"uScale") ) { return uScale; }
		if (HX_FIELD_EQ(inName,"vScale") ) { return vScale; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uOffset") ) { return uOffset; }
		if (HX_FIELD_EQ(inName,"vOffset") ) { return vOffset; }
		if (HX_FIELD_EQ(inName,"_canvas") ) { return _canvas; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_invertY") ) { return _invertY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_noMipmap") ) { return _noMipmap; }
		if (HX_FIELD_EQ(inName,"delayLoad") ) { return delayLoad_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"CUBIC_MODE") ) { return CUBIC_MODE; }
		if (HX_FIELD_EQ(inName,"animations") ) { return animations; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"PLANAR_MODE") ) { return PLANAR_MODE; }
		if (HX_FIELD_EQ(inName,"SKYBOX_MODE") ) { return SKYBOX_MODE; }
		if (HX_FIELD_EQ(inName,"_cachedUAng") ) { return _cachedUAng; }
		if (HX_FIELD_EQ(inName,"_cachedVAng") ) { return _cachedVAng; }
		if (HX_FIELD_EQ(inName,"_cachedWAng") ) { return _cachedWAng; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"EXPLICIT_MODE") ) { return EXPLICIT_MODE; }
		if (HX_FIELD_EQ(inName,"_cachedUScale") ) { return _cachedUScale; }
		if (HX_FIELD_EQ(inName,"_cachedVScale") ) { return _cachedVScale; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SPHERICAL_MODE") ) { return SPHERICAL_MODE; }
		if (HX_FIELD_EQ(inName,"_cachedUOffset") ) { return _cachedUOffset; }
		if (HX_FIELD_EQ(inName,"_cachedVOffset") ) { return _cachedVOffset; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"PROJECTION_MODE") ) { return PROJECTION_MODE; }
		if (HX_FIELD_EQ(inName,"coordinatesMode") ) { return coordinatesMode; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"WRAP_ADDRESSMODE") ) { return WRAP_ADDRESSMODE; }
		if (HX_FIELD_EQ(inName,"coordinatesIndex") ) { return coordinatesIndex; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CLAMP_ADDRESSMODE") ) { return CLAMP_ADDRESSMODE; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"MIRROR_ADDRESSMODE") ) { return MIRROR_ADDRESSMODE; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"NEAREST_SAMPLINGMODE") ) { return NEAREST_SAMPLINGMODE; }
		if (HX_FIELD_EQ(inName,"_rowGenerationMatrix") ) { return _rowGenerationMatrix; }
		if (HX_FIELD_EQ(inName,"_cachedTextureMatrix") ) { return _cachedTextureMatrix; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"BILINEAR_SAMPLINGMODE") ) { return BILINEAR_SAMPLINGMODE; }
		if (HX_FIELD_EQ(inName,"_projectionModeMatrix") ) { return _projectionModeMatrix; }
		if (HX_FIELD_EQ(inName,"_computeTextureMatrix") ) { return _computeTextureMatrix_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"TRILINEAR_SAMPLINGMODE") ) { return TRILINEAR_SAMPLINGMODE; }
		if (HX_FIELD_EQ(inName,"_cachedCoordinatesMode") ) { return _cachedCoordinatesMode; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"anisotropicFilteringLevel") ) { return anisotropicFilteringLevel; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_prepareRowForTextureGeneration") ) { return _prepareRowForTextureGeneration_dyn(); }
		if (HX_FIELD_EQ(inName,"_computeReflectionTextureMatrix") ) { return _computeReflectionTextureMatrix_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"_cachedAnisotropicFilteringLevel") ) { return _cachedAnisotropicFilteringLevel; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_t0") ) { _t0=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_t1") ) { _t1=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_t2") ) { _t2=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"uAng") ) { uAng=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vAng") ) { vAng=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wAng") ) { wAng=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wrapU") ) { wrapU=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrapV") ) { wrapV=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"uScale") ) { uScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vScale") ) { vScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uOffset") ) { uOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vOffset") ) { vOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_canvas") ) { _canvas=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_invertY") ) { _invertY=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_noMipmap") ) { _noMipmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"CUBIC_MODE") ) { CUBIC_MODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"PLANAR_MODE") ) { PLANAR_MODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SKYBOX_MODE") ) { SKYBOX_MODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedUAng") ) { _cachedUAng=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedVAng") ) { _cachedVAng=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedWAng") ) { _cachedWAng=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"EXPLICIT_MODE") ) { EXPLICIT_MODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedUScale") ) { _cachedUScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedVScale") ) { _cachedVScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SPHERICAL_MODE") ) { SPHERICAL_MODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedUOffset") ) { _cachedUOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedVOffset") ) { _cachedVOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"PROJECTION_MODE") ) { PROJECTION_MODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coordinatesMode") ) { coordinatesMode=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"WRAP_ADDRESSMODE") ) { WRAP_ADDRESSMODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coordinatesIndex") ) { coordinatesIndex=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CLAMP_ADDRESSMODE") ) { CLAMP_ADDRESSMODE=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"MIRROR_ADDRESSMODE") ) { MIRROR_ADDRESSMODE=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"NEAREST_SAMPLINGMODE") ) { NEAREST_SAMPLINGMODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rowGenerationMatrix") ) { _rowGenerationMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedTextureMatrix") ) { _cachedTextureMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"BILINEAR_SAMPLINGMODE") ) { BILINEAR_SAMPLINGMODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_projectionModeMatrix") ) { _projectionModeMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"TRILINEAR_SAMPLINGMODE") ) { TRILINEAR_SAMPLINGMODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedCoordinatesMode") ) { _cachedCoordinatesMode=inValue.Cast< Float >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"anisotropicFilteringLevel") ) { anisotropicFilteringLevel=inValue.Cast< Float >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"_cachedAnisotropicFilteringLevel") ) { _cachedAnisotropicFilteringLevel=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("uOffset"));
	outFields->push(HX_CSTRING("_cachedUOffset"));
	outFields->push(HX_CSTRING("vOffset"));
	outFields->push(HX_CSTRING("_cachedVOffset"));
	outFields->push(HX_CSTRING("uScale"));
	outFields->push(HX_CSTRING("_cachedUScale"));
	outFields->push(HX_CSTRING("vScale"));
	outFields->push(HX_CSTRING("_cachedVScale"));
	outFields->push(HX_CSTRING("uAng"));
	outFields->push(HX_CSTRING("_cachedUAng"));
	outFields->push(HX_CSTRING("vAng"));
	outFields->push(HX_CSTRING("_cachedVAng"));
	outFields->push(HX_CSTRING("wAng"));
	outFields->push(HX_CSTRING("_cachedWAng"));
	outFields->push(HX_CSTRING("wrapU"));
	outFields->push(HX_CSTRING("wrapV"));
	outFields->push(HX_CSTRING("coordinatesIndex"));
	outFields->push(HX_CSTRING("coordinatesMode"));
	outFields->push(HX_CSTRING("_cachedCoordinatesMode"));
	outFields->push(HX_CSTRING("anisotropicFilteringLevel"));
	outFields->push(HX_CSTRING("_cachedAnisotropicFilteringLevel"));
	outFields->push(HX_CSTRING("_canvas"));
	outFields->push(HX_CSTRING("_rowGenerationMatrix"));
	outFields->push(HX_CSTRING("_cachedTextureMatrix"));
	outFields->push(HX_CSTRING("_projectionModeMatrix"));
	outFields->push(HX_CSTRING("_t0"));
	outFields->push(HX_CSTRING("_t1"));
	outFields->push(HX_CSTRING("_t2"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("url"));
	outFields->push(HX_CSTRING("animations"));
	outFields->push(HX_CSTRING("_noMipmap"));
	outFields->push(HX_CSTRING("_invertY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NEAREST_SAMPLINGMODE"),
	HX_CSTRING("BILINEAR_SAMPLINGMODE"),
	HX_CSTRING("TRILINEAR_SAMPLINGMODE"),
	HX_CSTRING("EXPLICIT_MODE"),
	HX_CSTRING("SPHERICAL_MODE"),
	HX_CSTRING("PLANAR_MODE"),
	HX_CSTRING("CUBIC_MODE"),
	HX_CSTRING("PROJECTION_MODE"),
	HX_CSTRING("SKYBOX_MODE"),
	HX_CSTRING("CLAMP_ADDRESSMODE"),
	HX_CSTRING("WRAP_ADDRESSMODE"),
	HX_CSTRING("MIRROR_ADDRESSMODE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Texture_obj,uOffset),HX_CSTRING("uOffset")},
	{hx::fsFloat,(int)offsetof(Texture_obj,_cachedUOffset),HX_CSTRING("_cachedUOffset")},
	{hx::fsFloat,(int)offsetof(Texture_obj,vOffset),HX_CSTRING("vOffset")},
	{hx::fsFloat,(int)offsetof(Texture_obj,_cachedVOffset),HX_CSTRING("_cachedVOffset")},
	{hx::fsFloat,(int)offsetof(Texture_obj,uScale),HX_CSTRING("uScale")},
	{hx::fsFloat,(int)offsetof(Texture_obj,_cachedUScale),HX_CSTRING("_cachedUScale")},
	{hx::fsFloat,(int)offsetof(Texture_obj,vScale),HX_CSTRING("vScale")},
	{hx::fsFloat,(int)offsetof(Texture_obj,_cachedVScale),HX_CSTRING("_cachedVScale")},
	{hx::fsFloat,(int)offsetof(Texture_obj,uAng),HX_CSTRING("uAng")},
	{hx::fsFloat,(int)offsetof(Texture_obj,_cachedUAng),HX_CSTRING("_cachedUAng")},
	{hx::fsFloat,(int)offsetof(Texture_obj,vAng),HX_CSTRING("vAng")},
	{hx::fsFloat,(int)offsetof(Texture_obj,_cachedVAng),HX_CSTRING("_cachedVAng")},
	{hx::fsFloat,(int)offsetof(Texture_obj,wAng),HX_CSTRING("wAng")},
	{hx::fsFloat,(int)offsetof(Texture_obj,_cachedWAng),HX_CSTRING("_cachedWAng")},
	{hx::fsInt,(int)offsetof(Texture_obj,wrapU),HX_CSTRING("wrapU")},
	{hx::fsInt,(int)offsetof(Texture_obj,wrapV),HX_CSTRING("wrapV")},
	{hx::fsFloat,(int)offsetof(Texture_obj,coordinatesIndex),HX_CSTRING("coordinatesIndex")},
	{hx::fsFloat,(int)offsetof(Texture_obj,coordinatesMode),HX_CSTRING("coordinatesMode")},
	{hx::fsFloat,(int)offsetof(Texture_obj,_cachedCoordinatesMode),HX_CSTRING("_cachedCoordinatesMode")},
	{hx::fsFloat,(int)offsetof(Texture_obj,anisotropicFilteringLevel),HX_CSTRING("anisotropicFilteringLevel")},
	{hx::fsFloat,(int)offsetof(Texture_obj,_cachedAnisotropicFilteringLevel),HX_CSTRING("_cachedAnisotropicFilteringLevel")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Texture_obj,_canvas),HX_CSTRING("_canvas")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(Texture_obj,_rowGenerationMatrix),HX_CSTRING("_rowGenerationMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(Texture_obj,_cachedTextureMatrix),HX_CSTRING("_cachedTextureMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(Texture_obj,_projectionModeMatrix),HX_CSTRING("_projectionModeMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Texture_obj,_t0),HX_CSTRING("_t0")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Texture_obj,_t1),HX_CSTRING("_t1")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Texture_obj,_t2),HX_CSTRING("_t2")},
	{hx::fsString,(int)offsetof(Texture_obj,name),HX_CSTRING("name")},
	{hx::fsString,(int)offsetof(Texture_obj,url),HX_CSTRING("url")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Texture_obj,animations),HX_CSTRING("animations")},
	{hx::fsBool,(int)offsetof(Texture_obj,_noMipmap),HX_CSTRING("_noMipmap")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Texture_obj,_invertY),HX_CSTRING("_invertY")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("uOffset"),
	HX_CSTRING("_cachedUOffset"),
	HX_CSTRING("vOffset"),
	HX_CSTRING("_cachedVOffset"),
	HX_CSTRING("uScale"),
	HX_CSTRING("_cachedUScale"),
	HX_CSTRING("vScale"),
	HX_CSTRING("_cachedVScale"),
	HX_CSTRING("uAng"),
	HX_CSTRING("_cachedUAng"),
	HX_CSTRING("vAng"),
	HX_CSTRING("_cachedVAng"),
	HX_CSTRING("wAng"),
	HX_CSTRING("_cachedWAng"),
	HX_CSTRING("wrapU"),
	HX_CSTRING("wrapV"),
	HX_CSTRING("coordinatesIndex"),
	HX_CSTRING("coordinatesMode"),
	HX_CSTRING("_cachedCoordinatesMode"),
	HX_CSTRING("anisotropicFilteringLevel"),
	HX_CSTRING("_cachedAnisotropicFilteringLevel"),
	HX_CSTRING("_canvas"),
	HX_CSTRING("_rowGenerationMatrix"),
	HX_CSTRING("_cachedTextureMatrix"),
	HX_CSTRING("_projectionModeMatrix"),
	HX_CSTRING("_t0"),
	HX_CSTRING("_t1"),
	HX_CSTRING("_t2"),
	HX_CSTRING("name"),
	HX_CSTRING("url"),
	HX_CSTRING("animations"),
	HX_CSTRING("_noMipmap"),
	HX_CSTRING("_invertY"),
	HX_CSTRING("delayLoad"),
	HX_CSTRING("_prepareRowForTextureGeneration"),
	HX_CSTRING("_computeTextureMatrix"),
	HX_CSTRING("_computeReflectionTextureMatrix"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Texture_obj::NEAREST_SAMPLINGMODE,"NEAREST_SAMPLINGMODE");
	HX_MARK_MEMBER_NAME(Texture_obj::BILINEAR_SAMPLINGMODE,"BILINEAR_SAMPLINGMODE");
	HX_MARK_MEMBER_NAME(Texture_obj::TRILINEAR_SAMPLINGMODE,"TRILINEAR_SAMPLINGMODE");
	HX_MARK_MEMBER_NAME(Texture_obj::EXPLICIT_MODE,"EXPLICIT_MODE");
	HX_MARK_MEMBER_NAME(Texture_obj::SPHERICAL_MODE,"SPHERICAL_MODE");
	HX_MARK_MEMBER_NAME(Texture_obj::PLANAR_MODE,"PLANAR_MODE");
	HX_MARK_MEMBER_NAME(Texture_obj::CUBIC_MODE,"CUBIC_MODE");
	HX_MARK_MEMBER_NAME(Texture_obj::PROJECTION_MODE,"PROJECTION_MODE");
	HX_MARK_MEMBER_NAME(Texture_obj::SKYBOX_MODE,"SKYBOX_MODE");
	HX_MARK_MEMBER_NAME(Texture_obj::CLAMP_ADDRESSMODE,"CLAMP_ADDRESSMODE");
	HX_MARK_MEMBER_NAME(Texture_obj::WRAP_ADDRESSMODE,"WRAP_ADDRESSMODE");
	HX_MARK_MEMBER_NAME(Texture_obj::MIRROR_ADDRESSMODE,"MIRROR_ADDRESSMODE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Texture_obj::NEAREST_SAMPLINGMODE,"NEAREST_SAMPLINGMODE");
	HX_VISIT_MEMBER_NAME(Texture_obj::BILINEAR_SAMPLINGMODE,"BILINEAR_SAMPLINGMODE");
	HX_VISIT_MEMBER_NAME(Texture_obj::TRILINEAR_SAMPLINGMODE,"TRILINEAR_SAMPLINGMODE");
	HX_VISIT_MEMBER_NAME(Texture_obj::EXPLICIT_MODE,"EXPLICIT_MODE");
	HX_VISIT_MEMBER_NAME(Texture_obj::SPHERICAL_MODE,"SPHERICAL_MODE");
	HX_VISIT_MEMBER_NAME(Texture_obj::PLANAR_MODE,"PLANAR_MODE");
	HX_VISIT_MEMBER_NAME(Texture_obj::CUBIC_MODE,"CUBIC_MODE");
	HX_VISIT_MEMBER_NAME(Texture_obj::PROJECTION_MODE,"PROJECTION_MODE");
	HX_VISIT_MEMBER_NAME(Texture_obj::SKYBOX_MODE,"SKYBOX_MODE");
	HX_VISIT_MEMBER_NAME(Texture_obj::CLAMP_ADDRESSMODE,"CLAMP_ADDRESSMODE");
	HX_VISIT_MEMBER_NAME(Texture_obj::WRAP_ADDRESSMODE,"WRAP_ADDRESSMODE");
	HX_VISIT_MEMBER_NAME(Texture_obj::MIRROR_ADDRESSMODE,"MIRROR_ADDRESSMODE");
};

#endif

Class Texture_obj::__mClass;

void Texture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.materials.textures.Texture"), hx::TCanCast< Texture_obj> ,sStaticFields,sMemberFields,
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

void Texture_obj::__boot()
{
	NEAREST_SAMPLINGMODE= (int)1;
	BILINEAR_SAMPLINGMODE= (int)2;
	TRILINEAR_SAMPLINGMODE= (int)3;
	EXPLICIT_MODE= (int)0;
	SPHERICAL_MODE= (int)1;
	PLANAR_MODE= (int)2;
	CUBIC_MODE= (int)3;
	PROJECTION_MODE= (int)4;
	SKYBOX_MODE= (int)5;
	CLAMP_ADDRESSMODE= (int)0;
	WRAP_ADDRESSMODE= (int)1;
	MIRROR_ADDRESSMODE= (int)2;
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
} // end namespace textures
