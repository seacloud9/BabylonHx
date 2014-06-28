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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Node
#include <com/gamestudiohx/babylonhx/Node.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Scene
#include <com/gamestudiohx/babylonhx/Scene.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_Camera
#include <com/gamestudiohx/babylonhx/cameras/Camera.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_collisions_PickingInfo
#include <com/gamestudiohx/babylonhx/collisions/PickingInfo.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lensflare_LensFlare
#include <com/gamestudiohx/babylonhx/lensflare/LensFlare.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lensflare_LensFlareSystem
#include <com/gamestudiohx/babylonhx/lensflare/LensFlareSystem.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_BabylonGLBuffer
#include <com/gamestudiohx/babylonhx/mesh/BabylonGLBuffer.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color3
#include <com/gamestudiohx/babylonhx/tools/math/Color3.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Ray
#include <com/gamestudiohx/babylonhx/tools/math/Ray.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Viewport
#include <com/gamestudiohx/babylonhx/tools/math/Viewport.h>
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
namespace lensflare{

Void LensFlareSystem_obj::__construct(::String name,Dynamic emitter,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.lensflare.LensFlareSystem","new",0x7f042b81,"com.gamestudiohx.babylonhx.lensflare.LensFlareSystem.new","com/gamestudiohx/babylonhx/lensflare/LensFlareSystem.hx",39,0xb6677e31)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(emitter,"emitter")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(40)
	this->lensFlares = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(41)
	this->_scene = scene;
	HX_STACK_LINE(42)
	this->_emitter = emitter;
	HX_STACK_LINE(43)
	this->name = name;
	HX_STACK_LINE(45)
	this->borderLimit = (int)300;
	HX_STACK_LINE(47)
	scene->lensFlareSystems->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(50)
	Array< Float > vertices = Array_obj< Float >::__new();		HX_STACK_VAR(vertices,"vertices");
	HX_STACK_LINE(51)
	vertices->push((int)1);
	HX_STACK_LINE(52)
	vertices->push((int)1);
	HX_STACK_LINE(53)
	vertices->push((int)-1);
	HX_STACK_LINE(54)
	vertices->push((int)1);
	HX_STACK_LINE(55)
	vertices->push((int)-1);
	HX_STACK_LINE(56)
	vertices->push((int)-1);
	HX_STACK_LINE(57)
	vertices->push((int)1);
	HX_STACK_LINE(58)
	vertices->push((int)-1);
	HX_STACK_LINE(59)
	this->_vertexDeclaration = Array_obj< int >::__new().Add((int)2);
	HX_STACK_LINE(60)
	this->_vertexStrideSize = (int)8;
	HX_STACK_LINE(61)
	::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g = scene->getEngine()->createVertexBuffer(vertices);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(61)
	this->_vertexBuffer = _g;
	HX_STACK_LINE(64)
	Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
	HX_STACK_LINE(65)
	indices->push((int)0);
	HX_STACK_LINE(66)
	indices->push((int)1);
	HX_STACK_LINE(67)
	indices->push((int)2);
	HX_STACK_LINE(69)
	indices->push((int)0);
	HX_STACK_LINE(70)
	indices->push((int)2);
	HX_STACK_LINE(71)
	indices->push((int)3);
	HX_STACK_LINE(73)
	::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g1 = scene->getEngine()->createIndexBuffer(indices);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(73)
	this->_indexBuffer = _g1;
	HX_STACK_LINE(76)
	::com::gamestudiohx::babylonhx::materials::Effect _g2 = this->_scene->getEngine()->createEffect(HX_CSTRING("lensFlare"),Array_obj< ::String >::__new().Add(HX_CSTRING("position")),Array_obj< ::String >::__new().Add(HX_CSTRING("color")).Add(HX_CSTRING("viewportMatrix")),Array_obj< ::String >::__new().Add(HX_CSTRING("textureSampler")),HX_CSTRING(""),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(76)
	this->_effect = _g2;

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	bool run(::com::gamestudiohx::babylonhx::mesh::AbstractMesh m){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/gamestudiohx/babylonhx/lensflare/LensFlareSystem.hx",82,0xb6677e31)
		HX_STACK_ARG(m,"m")
		{
			HX_STACK_LINE(82)
			return (bool((bool((bool((m->material != null())) && bool(m->isVisible))) && bool(m->isEnabled()))) && bool(m->checkCollisions));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(81)
	this->meshesSelectionPredicate =  Dynamic(new _Function_1_1());
}
;
	return null();
}

//LensFlareSystem_obj::~LensFlareSystem_obj() { }

Dynamic LensFlareSystem_obj::__CreateEmpty() { return  new LensFlareSystem_obj; }
hx::ObjectPtr< LensFlareSystem_obj > LensFlareSystem_obj::__new(::String name,Dynamic emitter,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< LensFlareSystem_obj > result = new LensFlareSystem_obj();
	result->__construct(name,emitter,scene);
	return result;}

Dynamic LensFlareSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LensFlareSystem_obj > result = new LensFlareSystem_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::com::gamestudiohx::babylonhx::Scene LensFlareSystem_obj::getScene( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lensflare.LensFlareSystem","getScene",0xc7959615,"com.gamestudiohx.babylonhx.lensflare.LensFlareSystem.getScene","com/gamestudiohx/babylonhx/lensflare/LensFlareSystem.hx",87,0xb6677e31)
	HX_STACK_THIS(this)
	HX_STACK_LINE(87)
	return this->_scene;
}


HX_DEFINE_DYNAMIC_FUNC0(LensFlareSystem_obj,getScene,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 LensFlareSystem_obj::getEmitterPosition( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lensflare.LensFlareSystem","getEmitterPosition",0xee03a240,"com.gamestudiohx.babylonhx.lensflare.LensFlareSystem.getEmitterPosition","com/gamestudiohx/babylonhx/lensflare/LensFlareSystem.hx",90,0xb6677e31)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	Dynamic _g = ::Reflect_obj::field(this->_emitter,HX_CSTRING("getAbsolutePosition"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(91)
	if (((_g != null()))){
		HX_STACK_LINE(91)
		return this->_emitter->__Field(HX_CSTRING("getAbsolutePosition"),true)();
	}
	else{
		HX_STACK_LINE(91)
		return this->_emitter->__Field(HX_CSTRING("position"),true);
	}
	HX_STACK_LINE(91)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LensFlareSystem_obj,getEmitterPosition,return )

bool LensFlareSystem_obj::computeEffectivePosition( ::com::gamestudiohx::babylonhx::tools::math::Viewport globalViewport){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lensflare.LensFlareSystem","computeEffectivePosition",0xd2450378,"com.gamestudiohx.babylonhx.lensflare.LensFlareSystem.computeEffectivePosition","com/gamestudiohx/babylonhx/lensflare/LensFlareSystem.hx",94,0xb6677e31)
	HX_STACK_THIS(this)
	HX_STACK_ARG(globalViewport,"globalViewport")
	HX_STACK_LINE(95)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 position = this->getEmitterPosition();		HX_STACK_VAR(position,"position");
	HX_STACK_LINE(97)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		::com::gamestudiohx::babylonhx::tools::math::Matrix world;		HX_STACK_VAR(world,"world");
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(97)
			result->m[(int)0] = 1.0;
			HX_STACK_LINE(97)
			result->m[(int)1] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)2] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)4] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)5] = 1.0;
			HX_STACK_LINE(97)
			result->m[(int)6] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)8] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)9] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)10] = 1.0;
			HX_STACK_LINE(97)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)12] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)13] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)14] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)15] = 1.0;
			HX_STACK_LINE(97)
			world = result;
		}
		HX_STACK_LINE(97)
		::com::gamestudiohx::babylonhx::tools::math::Matrix transform = this->_scene->_transformMatrix;		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(97)
		Float cw = globalViewport->width;		HX_STACK_VAR(cw,"cw");
		HX_STACK_LINE(97)
		Float ch = globalViewport->height;		HX_STACK_VAR(ch,"ch");
		HX_STACK_LINE(97)
		Float cx = globalViewport->x;		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(97)
		Float cy = globalViewport->y;		HX_STACK_VAR(cy,"cy");
		HX_STACK_LINE(97)
		::com::gamestudiohx::babylonhx::tools::math::Matrix viewportMatrix;		HX_STACK_VAR(viewportMatrix,"viewportMatrix");
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(97)
			result->m[(int)0] = (Float(cw) / Float(2.0));
			HX_STACK_LINE(97)
			result->m[(int)1] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)2] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)3] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)4] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)5] = (Float(-(ch)) / Float(2.0));
			HX_STACK_LINE(97)
			result->m[(int)6] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)7] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)8] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)9] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)10] = (int)1;
			HX_STACK_LINE(97)
			result->m[(int)11] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)12] = (cx + (Float(cw) / Float(2.0)));
			HX_STACK_LINE(97)
			result->m[(int)13] = ((Float(ch) / Float(2.0)) + cy);
			HX_STACK_LINE(97)
			result->m[(int)14] = (int)0;
			HX_STACK_LINE(97)
			result->m[(int)15] = (int)1;
			HX_STACK_LINE(97)
			viewportMatrix = result;
		}
		HX_STACK_LINE(97)
		::com::gamestudiohx::babylonhx::tools::math::Matrix finalMatrix;		HX_STACK_VAR(finalMatrix,"finalMatrix");
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(97)
				{
					HX_STACK_LINE(97)
					Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
					HX_STACK_LINE(97)
					Float tm0 = world->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(97)
					Float tm1 = world->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(97)
					Float tm2 = world->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(97)
					Float tm3 = world->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(97)
					Float tm4 = world->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(97)
					Float tm5 = world->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(97)
					Float tm6 = world->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(97)
					Float tm7 = world->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(97)
					Float tm8 = world->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(97)
					Float tm9 = world->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(97)
					Float tm10 = world->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(97)
					Float tm11 = world->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(97)
					Float tm12 = world->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(97)
					Float tm13 = world->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(97)
					Float tm14 = world->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(97)
					Float tm15 = world->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(97)
					Float om0 = transform->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(97)
					Float om1 = transform->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(97)
					Float om2 = transform->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(97)
					Float om3 = transform->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(97)
					Float om4 = transform->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(97)
					Float om5 = transform->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(97)
					Float om6 = transform->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(97)
					Float om7 = transform->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(97)
					Float om8 = transform->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(97)
					Float om9 = transform->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(97)
					Float om10 = transform->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(97)
					Float om11 = transform->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(97)
					Float om12 = transform->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(97)
					Float om13 = transform->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(97)
					Float om14 = transform->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(97)
					Float om15 = transform->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(97)
					result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(97)
					result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(97)
					result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(97)
					result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(97)
					result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(97)
					result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(97)
					result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(97)
					result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(97)
					result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(97)
					result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(97)
					result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(97)
					result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(97)
					result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(97)
					result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(97)
					result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(97)
					result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(97)
					result1;
				}
				HX_STACK_LINE(97)
				_this = result;
			}
			HX_STACK_LINE(97)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
				HX_STACK_LINE(97)
				Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
				HX_STACK_LINE(97)
				Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
				HX_STACK_LINE(97)
				Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
				HX_STACK_LINE(97)
				Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
				HX_STACK_LINE(97)
				Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
				HX_STACK_LINE(97)
				Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
				HX_STACK_LINE(97)
				Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
				HX_STACK_LINE(97)
				Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
				HX_STACK_LINE(97)
				Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
				HX_STACK_LINE(97)
				Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
				HX_STACK_LINE(97)
				Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
				HX_STACK_LINE(97)
				Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
				HX_STACK_LINE(97)
				Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
				HX_STACK_LINE(97)
				Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
				HX_STACK_LINE(97)
				Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
				HX_STACK_LINE(97)
				Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
				HX_STACK_LINE(97)
				Float om0 = viewportMatrix->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
				HX_STACK_LINE(97)
				Float om1 = viewportMatrix->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
				HX_STACK_LINE(97)
				Float om2 = viewportMatrix->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
				HX_STACK_LINE(97)
				Float om3 = viewportMatrix->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
				HX_STACK_LINE(97)
				Float om4 = viewportMatrix->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
				HX_STACK_LINE(97)
				Float om5 = viewportMatrix->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
				HX_STACK_LINE(97)
				Float om6 = viewportMatrix->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
				HX_STACK_LINE(97)
				Float om7 = viewportMatrix->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
				HX_STACK_LINE(97)
				Float om8 = viewportMatrix->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
				HX_STACK_LINE(97)
				Float om9 = viewportMatrix->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
				HX_STACK_LINE(97)
				Float om10 = viewportMatrix->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
				HX_STACK_LINE(97)
				Float om11 = viewportMatrix->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
				HX_STACK_LINE(97)
				Float om12 = viewportMatrix->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
				HX_STACK_LINE(97)
				Float om13 = viewportMatrix->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
				HX_STACK_LINE(97)
				Float om14 = viewportMatrix->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
				HX_STACK_LINE(97)
				Float om15 = viewportMatrix->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
				HX_STACK_LINE(97)
				result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
				HX_STACK_LINE(97)
				result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
				HX_STACK_LINE(97)
				result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
				HX_STACK_LINE(97)
				result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
				HX_STACK_LINE(97)
				result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
				HX_STACK_LINE(97)
				result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
				HX_STACK_LINE(97)
				result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
				HX_STACK_LINE(97)
				result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
				HX_STACK_LINE(97)
				result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
				HX_STACK_LINE(97)
				result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
				HX_STACK_LINE(97)
				result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
				HX_STACK_LINE(97)
				result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
				HX_STACK_LINE(97)
				result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
				HX_STACK_LINE(97)
				result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
				HX_STACK_LINE(97)
				result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
				HX_STACK_LINE(97)
				result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
				HX_STACK_LINE(97)
				result1;
			}
			HX_STACK_LINE(97)
			finalMatrix = result;
		}
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				Float x = ((((position->x * finalMatrix->m->__get((int)0)) + (position->y * finalMatrix->m->__get((int)4))) + (position->z * finalMatrix->m->__get((int)8))) + finalMatrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(97)
				Float y = ((((position->x * finalMatrix->m->__get((int)1)) + (position->y * finalMatrix->m->__get((int)5))) + (position->z * finalMatrix->m->__get((int)9))) + finalMatrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(97)
				Float z = ((((position->x * finalMatrix->m->__get((int)2)) + (position->y * finalMatrix->m->__get((int)6))) + (position->z * finalMatrix->m->__get((int)10))) + finalMatrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(97)
				Float w = ((((position->x * finalMatrix->m->__get((int)3)) + (position->y * finalMatrix->m->__get((int)7))) + (position->z * finalMatrix->m->__get((int)11))) + finalMatrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(97)
				result->x = (Float(x) / Float(w));
				HX_STACK_LINE(97)
				result->y = (Float(y) / Float(w));
				HX_STACK_LINE(97)
				result->z = (Float(z) / Float(w));
			}
			HX_STACK_LINE(97)
			_g = result;
		}
	}
	HX_STACK_LINE(97)
	position = _g;
	HX_STACK_LINE(99)
	this->_positionX = position->x;
	HX_STACK_LINE(100)
	this->_positionY = position->y;
	HX_STACK_LINE(102)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = this->getEmitterPosition();		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(102)
		::com::gamestudiohx::babylonhx::tools::math::Matrix transformation = this->_scene->getViewMatrix();		HX_STACK_VAR(transformation,"transformation");
		HX_STACK_LINE(102)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			Float x = ((((vector->x * transformation->m->__get((int)0)) + (vector->y * transformation->m->__get((int)4))) + (vector->z * transformation->m->__get((int)8))) + transformation->m->__get((int)12));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(102)
			Float y = ((((vector->x * transformation->m->__get((int)1)) + (vector->y * transformation->m->__get((int)5))) + (vector->z * transformation->m->__get((int)9))) + transformation->m->__get((int)13));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(102)
			Float z = ((((vector->x * transformation->m->__get((int)2)) + (vector->y * transformation->m->__get((int)6))) + (vector->z * transformation->m->__get((int)10))) + transformation->m->__get((int)14));		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(102)
			Float w = ((((vector->x * transformation->m->__get((int)3)) + (vector->y * transformation->m->__get((int)7))) + (vector->z * transformation->m->__get((int)11))) + transformation->m->__get((int)15));		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(102)
			result->x = (Float(x) / Float(w));
			HX_STACK_LINE(102)
			result->y = (Float(y) / Float(w));
			HX_STACK_LINE(102)
			result->z = (Float(z) / Float(w));
		}
		HX_STACK_LINE(102)
		_g1 = result;
	}
	HX_STACK_LINE(102)
	position = _g1;
	HX_STACK_LINE(104)
	if (((position->z > (int)0))){
		HX_STACK_LINE(105)
		if (((bool((this->_positionX > globalViewport->x)) && bool((this->_positionX < (globalViewport->x + globalViewport->width)))))){
			HX_STACK_LINE(106)
			if (((bool((this->_positionY > globalViewport->y)) && bool((this->_positionY < (globalViewport->y + globalViewport->height)))))){
				HX_STACK_LINE(107)
				return true;
			}
		}
	}
	HX_STACK_LINE(111)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(LensFlareSystem_obj,computeEffectivePosition,return )

bool LensFlareSystem_obj::_isVisible( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lensflare.LensFlareSystem","_isVisible",0x08272c68,"com.gamestudiohx.babylonhx.lensflare.LensFlareSystem._isVisible","com/gamestudiohx/babylonhx/lensflare/LensFlareSystem.hx",114,0xb6677e31)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 emitterPosition = this->getEmitterPosition();		HX_STACK_VAR(emitterPosition,"emitterPosition");
	HX_STACK_LINE(116)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 direction;		HX_STACK_VAR(direction,"direction");
	HX_STACK_LINE(116)
	{
		HX_STACK_LINE(116)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->_scene->activeCamera->position;		HX_STACK_VAR(otherVector,"otherVector");
		HX_STACK_LINE(116)
		direction = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((emitterPosition->x - otherVector->x),(emitterPosition->y - otherVector->y),(emitterPosition->z - otherVector->z));
	}
	HX_STACK_LINE(117)
	Float distance = ::Math_obj::sqrt((((direction->x * direction->x) + (direction->y * direction->y)) + (direction->z * direction->z)));		HX_STACK_VAR(distance,"distance");
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		Float len = ::Math_obj::sqrt((((direction->x * direction->x) + (direction->y * direction->y)) + (direction->z * direction->z)));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(118)
		if (((len != (int)0))){
			HX_STACK_LINE(118)
			Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(118)
			hx::MultEq(direction->x,num);
			HX_STACK_LINE(118)
			hx::MultEq(direction->y,num);
			HX_STACK_LINE(118)
			hx::MultEq(direction->z,num);
		}
	}
	HX_STACK_LINE(120)
	::com::gamestudiohx::babylonhx::tools::math::Ray ray = ::com::gamestudiohx::babylonhx::tools::math::Ray_obj::__new(this->_scene->activeCamera->position,direction);		HX_STACK_VAR(ray,"ray");
	HX_STACK_LINE(121)
	::com::gamestudiohx::babylonhx::collisions::PickingInfo pickInfo = this->_scene->pickWithRay(ray,this->meshesSelectionPredicate_dyn(),true);		HX_STACK_VAR(pickInfo,"pickInfo");
	HX_STACK_LINE(123)
	return (bool(!(pickInfo->hit)) || bool((pickInfo->distance > distance)));
}


HX_DEFINE_DYNAMIC_FUNC0(LensFlareSystem_obj,_isVisible,return )

bool LensFlareSystem_obj::render( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lensflare.LensFlareSystem","render",0x10b3fad5,"com.gamestudiohx.babylonhx.lensflare.LensFlareSystem.render","com/gamestudiohx/babylonhx/lensflare/LensFlareSystem.hx",126,0xb6677e31)
	HX_STACK_THIS(this)
	HX_STACK_LINE(127)
	if ((!(this->_effect->isReady()))){
		HX_STACK_LINE(128)
		return false;
	}
	HX_STACK_LINE(130)
	::com::gamestudiohx::babylonhx::Engine engine = this->_scene->getEngine();		HX_STACK_VAR(engine,"engine");
	HX_STACK_LINE(131)
	::com::gamestudiohx::babylonhx::tools::math::Viewport viewport = this->_scene->activeCamera->viewport;		HX_STACK_VAR(viewport,"viewport");
	HX_STACK_LINE(132)
	::com::gamestudiohx::babylonhx::tools::math::Viewport globalViewport;		HX_STACK_VAR(globalViewport,"globalViewport");
	HX_STACK_LINE(132)
	{
		HX_STACK_LINE(132)
		int _g = engine->getRenderWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(132)
		int _g1 = engine->getHardwareScalingLevel();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(132)
		int width = (_g * _g1);		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(132)
		int _g2 = engine->getRenderHeight();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(132)
		int _g3 = engine->getHardwareScalingLevel();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(132)
		int height = (_g2 * _g3);		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(132)
		globalViewport = ::com::gamestudiohx::babylonhx::tools::math::Viewport_obj::__new((viewport->x * width),(viewport->y * height),(viewport->width * width),(viewport->height * height));
	}
	HX_STACK_LINE(135)
	if ((!(this->computeEffectivePosition(globalViewport)))){
		HX_STACK_LINE(136)
		return false;
	}
	HX_STACK_LINE(140)
	if ((!(this->_isVisible()))){
		HX_STACK_LINE(141)
		return false;
	}
	HX_STACK_LINE(145)
	Float awayX = (int)0;		HX_STACK_VAR(awayX,"awayX");
	HX_STACK_LINE(146)
	Float awayY = (int)0;		HX_STACK_VAR(awayY,"awayY");
	HX_STACK_LINE(148)
	if (((this->_positionX < (this->borderLimit + globalViewport->x)))){
		HX_STACK_LINE(149)
		awayX = ((this->borderLimit + globalViewport->x) - this->_positionX);
	}
	else{
		HX_STACK_LINE(150)
		if (((this->_positionX > ((globalViewport->x + globalViewport->width) - this->borderLimit)))){
			HX_STACK_LINE(151)
			awayX = (((this->_positionX - globalViewport->x) - globalViewport->width) + this->borderLimit);
		}
		else{
			HX_STACK_LINE(153)
			awayX = (int)0;
		}
	}
	HX_STACK_LINE(156)
	if (((this->_positionY < (this->borderLimit + globalViewport->y)))){
		HX_STACK_LINE(157)
		awayY = ((this->borderLimit + globalViewport->y) - this->_positionY);
	}
	else{
		HX_STACK_LINE(158)
		if (((this->_positionY > ((globalViewport->y + globalViewport->height) - this->borderLimit)))){
			HX_STACK_LINE(159)
			awayY = (((this->_positionY - globalViewport->y) - globalViewport->height) + this->borderLimit);
		}
		else{
			HX_STACK_LINE(161)
			awayY = (int)0;
		}
	}
	HX_STACK_LINE(164)
	Float away;		HX_STACK_VAR(away,"away");
	HX_STACK_LINE(164)
	if (((awayX > awayY))){
		HX_STACK_LINE(164)
		away = awayX;
	}
	else{
		HX_STACK_LINE(164)
		away = awayY;
	}
	HX_STACK_LINE(165)
	if (((away > this->borderLimit))){
		HX_STACK_LINE(166)
		away = this->borderLimit;
	}
	HX_STACK_LINE(169)
	Float intensity = (1.0 - (Float(away) / Float(this->borderLimit)));		HX_STACK_VAR(intensity,"intensity");
	HX_STACK_LINE(170)
	if (((intensity < (int)0))){
		HX_STACK_LINE(171)
		return false;
	}
	HX_STACK_LINE(174)
	if (((intensity > 1.0))){
		HX_STACK_LINE(175)
		intensity = 1.0;
	}
	HX_STACK_LINE(179)
	Float centerX = (globalViewport->x + (Float(globalViewport->width) / Float((int)2)));		HX_STACK_VAR(centerX,"centerX");
	HX_STACK_LINE(180)
	Float centerY = (globalViewport->y + (Float(globalViewport->height) / Float((int)2)));		HX_STACK_VAR(centerY,"centerY");
	HX_STACK_LINE(181)
	Float distX = (centerX - this->_positionX);		HX_STACK_VAR(distX,"distX");
	HX_STACK_LINE(182)
	Float distY = (centerY - this->_positionY);		HX_STACK_VAR(distY,"distY");
	HX_STACK_LINE(185)
	engine->enableEffect(this->_effect);
	HX_STACK_LINE(186)
	engine->setState(false);
	HX_STACK_LINE(187)
	engine->setDepthBuffer(false);
	HX_STACK_LINE(188)
	engine->setAlphaMode(::com::gamestudiohx::babylonhx::Engine_obj::ALPHA_ADD);
	HX_STACK_LINE(191)
	engine->bindBuffers(this->_vertexBuffer,this->_indexBuffer,this->_vertexDeclaration,this->_vertexStrideSize,this->_effect);
	HX_STACK_LINE(194)
	{
		HX_STACK_LINE(194)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(194)
		int _g = this->lensFlares->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(194)
		while((true)){
			HX_STACK_LINE(194)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(194)
				break;
			}
			HX_STACK_LINE(194)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(195)
			::com::gamestudiohx::babylonhx::lensflare::LensFlare flare = this->lensFlares->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::lensflare::LensFlare >();		HX_STACK_VAR(flare,"flare");
			HX_STACK_LINE(197)
			Float x = (centerX - (distX * flare->position));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(198)
			Float y = (centerY - (distY * flare->position));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(200)
			Float cw = flare->size;		HX_STACK_VAR(cw,"cw");
			HX_STACK_LINE(201)
			Float _g4 = engine->getAspectRatio(this->_scene->activeCamera);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(201)
			Float ch = (flare->size * _g4);		HX_STACK_VAR(ch,"ch");
			HX_STACK_LINE(202)
			Float cx = (((int)2 * ((Float(x) / Float(globalViewport->width)))) - 1.0);		HX_STACK_VAR(cx,"cx");
			HX_STACK_LINE(203)
			Float cy = (1.0 - ((int)2 * ((Float(y) / Float(globalViewport->height)))));		HX_STACK_VAR(cy,"cy");
			HX_STACK_LINE(205)
			::com::gamestudiohx::babylonhx::tools::math::Matrix viewportMatrix;		HX_STACK_VAR(viewportMatrix,"viewportMatrix");
			HX_STACK_LINE(205)
			{
				HX_STACK_LINE(205)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(205)
				result->m[(int)0] = (Float(cw) / Float((int)2));
				HX_STACK_LINE(205)
				result->m[(int)1] = (int)0;
				HX_STACK_LINE(205)
				result->m[(int)2] = (int)0;
				HX_STACK_LINE(205)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(205)
				result->m[(int)4] = (int)0;
				HX_STACK_LINE(205)
				result->m[(int)5] = (Float(ch) / Float((int)2));
				HX_STACK_LINE(205)
				result->m[(int)6] = (int)0;
				HX_STACK_LINE(205)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(205)
				result->m[(int)8] = (int)0;
				HX_STACK_LINE(205)
				result->m[(int)9] = (int)0;
				HX_STACK_LINE(205)
				result->m[(int)10] = (int)1;
				HX_STACK_LINE(205)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(205)
				result->m[(int)12] = cx;
				HX_STACK_LINE(205)
				result->m[(int)13] = cy;
				HX_STACK_LINE(205)
				result->m[(int)14] = (int)0;
				HX_STACK_LINE(205)
				result->m[(int)15] = (int)1;
				HX_STACK_LINE(205)
				viewportMatrix = result;
			}
			HX_STACK_LINE(211)
			{
				HX_STACK_LINE(211)
				Dynamic uniform = this->_effect->getUniform(HX_CSTRING("viewportMatrix"));		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(211)
				if (((uniform != null()))){
					HX_STACK_LINE(211)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(211)
					Dynamic v;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(211)
					{
						HX_STACK_LINE(211)
						::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(viewportMatrix->m,null(),null());		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(211)
						Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(211)
						v = data;
					}
					HX_STACK_LINE(211)
					::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
				}
			}
			HX_STACK_LINE(214)
			this->_effect->setTexture(HX_CSTRING("textureSampler"),flare->texture);
			HX_STACK_LINE(217)
			{
				HX_STACK_LINE(217)
				::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(217)
				Float x1 = (flare->color->r * intensity);		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(217)
				Float y1 = (flare->color->g * intensity);		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(217)
				Float z = (flare->color->b * intensity);		HX_STACK_VAR(z,"z");
				struct _Function_4_1{
					inline static bool Block( Float &x1,::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lensflare/LensFlareSystem.hx",217,0xb6677e31)
						{
							HX_STACK_LINE(217)
							Array< Float > _g5 = _this->_valueCache->get(HX_CSTRING("color"));		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(217)
							Float _g6 = _g5->__get((int)0);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(217)
							return (_g6 == x1);
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,Float &y1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lensflare/LensFlareSystem.hx",217,0xb6677e31)
						{
							HX_STACK_LINE(217)
							Array< Float > _g7 = _this->_valueCache->get(HX_CSTRING("color"));		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(217)
							Float _g8 = _g7->__get((int)1);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(217)
							return (_g8 == y1);
						}
						return null();
					}
				};
				struct _Function_4_3{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,Float &z){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lensflare/LensFlareSystem.hx",217,0xb6677e31)
						{
							HX_STACK_LINE(217)
							Array< Float > _g9 = _this->_valueCache->get(HX_CSTRING("color"));		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(217)
							Float _g10 = _g9->__get((int)2);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(217)
							return (_g10 == z);
						}
						return null();
					}
				};
				struct _Function_4_4{
					inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lensflare/LensFlareSystem.hx",217,0xb6677e31)
						{
							HX_STACK_LINE(217)
							Array< Float > _g11 = _this->_valueCache->get(HX_CSTRING("color"));		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(217)
							Float _g12 = _g11->__get((int)3);		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(217)
							return (_g12 == 1.0);
						}
						return null();
					}
				};
				HX_STACK_LINE(217)
				if ((!(((  (((  (((  (((  ((_this->_valueCache->exists(HX_CSTRING("color")))) ? bool(_Function_4_1::Block(x1,_this)) : bool(false) ))) ? bool(_Function_4_2::Block(_this,y1)) : bool(false) ))) ? bool(_Function_4_3::Block(_this,z)) : bool(false) ))) ? bool(_Function_4_4::Block(_this)) : bool(false) ))))){
					HX_STACK_LINE(217)
					if ((!(_this->_valueCache->exists(HX_CSTRING("color"))))){
						HX_STACK_LINE(217)
						_this->_valueCache->set(HX_CSTRING("color"),Array_obj< Float >::__new().Add(x1).Add(y1).Add(z).Add(1.0));
					}
					else{
						HX_STACK_LINE(217)
						Array< Float > _g13 = _this->_valueCache->get(HX_CSTRING("color"));		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(217)
						_g13[(int)0] = x1;
						HX_STACK_LINE(217)
						Array< Float > _g14 = _this->_valueCache->get(HX_CSTRING("color"));		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(217)
						_g14[(int)1] = y1;
						HX_STACK_LINE(217)
						Array< Float > _g15 = _this->_valueCache->get(HX_CSTRING("color"));		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(217)
						_g15[(int)2] = z;
						HX_STACK_LINE(217)
						Array< Float > _g16 = _this->_valueCache->get(HX_CSTRING("color"));		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(217)
						_g16[(int)3] = 1.0;
					}
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						Dynamic uniform = _this->getUniform(HX_CSTRING("color"));		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(217)
						if (((uniform != null()))){
							HX_STACK_LINE(217)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(217)
							::openfl::gl::GL_obj::lime_gl_uniform4f(location,x1,y1,z,1.0);
						}
					}
				}
			}
			HX_STACK_LINE(220)
			engine->draw(true,(int)0,(int)6,null());
		}
	}
	HX_STACK_LINE(223)
	engine->setDepthBuffer(true);
	HX_STACK_LINE(224)
	engine->setAlphaMode(::com::gamestudiohx::babylonhx::Engine_obj::ALPHA_DISABLE);
	HX_STACK_LINE(225)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(LensFlareSystem_obj,render,return )

Void LensFlareSystem_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.lensflare.LensFlareSystem","dispose",0xc8ff8040,"com.gamestudiohx.babylonhx.lensflare.LensFlareSystem.dispose","com/gamestudiohx/babylonhx/lensflare/LensFlareSystem.hx",228,0xb6677e31)
		HX_STACK_THIS(this)
		HX_STACK_LINE(229)
		if (((this->_vertexBuffer != null()))){
			HX_STACK_LINE(230)
			this->_scene->getEngine()->_releaseBuffer(this->_vertexBuffer);
			HX_STACK_LINE(231)
			this->_vertexBuffer = null();
		}
		HX_STACK_LINE(234)
		if (((this->_indexBuffer != null()))){
			HX_STACK_LINE(235)
			this->_scene->getEngine()->_releaseBuffer(this->_indexBuffer);
			HX_STACK_LINE(236)
			this->_indexBuffer = null();
		}
		HX_STACK_LINE(240)
		while((true)){
			HX_STACK_LINE(240)
			if ((!(((this->lensFlares->length > (int)0))))){
				HX_STACK_LINE(240)
				break;
			}
			HX_STACK_LINE(241)
			this->lensFlares->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lensflare::LensFlare >()->dispose();
		}
		HX_STACK_LINE(247)
		this->_scene->lensFlareSystems->remove(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LensFlareSystem_obj,dispose,(void))


LensFlareSystem_obj::LensFlareSystem_obj()
{
}

void LensFlareSystem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LensFlareSystem);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(borderLimit,"borderLimit");
	HX_MARK_MEMBER_NAME(lensFlares,"lensFlares");
	HX_MARK_MEMBER_NAME(_emitter,"_emitter");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_vertexDeclaration,"_vertexDeclaration");
	HX_MARK_MEMBER_NAME(_vertexStrideSize,"_vertexStrideSize");
	HX_MARK_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_MARK_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_MARK_MEMBER_NAME(_effect,"_effect");
	HX_MARK_MEMBER_NAME(_positionX,"_positionX");
	HX_MARK_MEMBER_NAME(_positionY,"_positionY");
	HX_MARK_MEMBER_NAME(meshesSelectionPredicate,"meshesSelectionPredicate");
	HX_MARK_END_CLASS();
}

void LensFlareSystem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(borderLimit,"borderLimit");
	HX_VISIT_MEMBER_NAME(lensFlares,"lensFlares");
	HX_VISIT_MEMBER_NAME(_emitter,"_emitter");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_vertexDeclaration,"_vertexDeclaration");
	HX_VISIT_MEMBER_NAME(_vertexStrideSize,"_vertexStrideSize");
	HX_VISIT_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_VISIT_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_VISIT_MEMBER_NAME(_effect,"_effect");
	HX_VISIT_MEMBER_NAME(_positionX,"_positionX");
	HX_VISIT_MEMBER_NAME(_positionY,"_positionY");
	HX_VISIT_MEMBER_NAME(meshesSelectionPredicate,"meshesSelectionPredicate");
}

Dynamic LensFlareSystem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_effect") ) { return _effect; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_emitter") ) { return _emitter; }
		if (HX_FIELD_EQ(inName,"getScene") ) { return getScene_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lensFlares") ) { return lensFlares; }
		if (HX_FIELD_EQ(inName,"_positionX") ) { return _positionX; }
		if (HX_FIELD_EQ(inName,"_positionY") ) { return _positionY; }
		if (HX_FIELD_EQ(inName,"_isVisible") ) { return _isVisible_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderLimit") ) { return borderLimit; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { return _indexBuffer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { return _vertexBuffer; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_vertexStrideSize") ) { return _vertexStrideSize; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_vertexDeclaration") ) { return _vertexDeclaration; }
		if (HX_FIELD_EQ(inName,"getEmitterPosition") ) { return getEmitterPosition_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"meshesSelectionPredicate") ) { return meshesSelectionPredicate; }
		if (HX_FIELD_EQ(inName,"computeEffectivePosition") ) { return computeEffectivePosition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LensFlareSystem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::gamestudiohx::babylonhx::Scene >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_effect") ) { _effect=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::Effect >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_emitter") ) { _emitter=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lensFlares") ) { lensFlares=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_positionX") ) { _positionX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_positionY") ) { _positionY=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderLimit") ) { borderLimit=inValue.Cast< Float >(); return inValue; }
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
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"meshesSelectionPredicate") ) { meshesSelectionPredicate=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LensFlareSystem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("borderLimit"));
	outFields->push(HX_CSTRING("lensFlares"));
	outFields->push(HX_CSTRING("_emitter"));
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("_vertexDeclaration"));
	outFields->push(HX_CSTRING("_vertexStrideSize"));
	outFields->push(HX_CSTRING("_vertexBuffer"));
	outFields->push(HX_CSTRING("_indexBuffer"));
	outFields->push(HX_CSTRING("_effect"));
	outFields->push(HX_CSTRING("_positionX"));
	outFields->push(HX_CSTRING("_positionY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(LensFlareSystem_obj,name),HX_CSTRING("name")},
	{hx::fsFloat,(int)offsetof(LensFlareSystem_obj,borderLimit),HX_CSTRING("borderLimit")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LensFlareSystem_obj,lensFlares),HX_CSTRING("lensFlares")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LensFlareSystem_obj,_emitter),HX_CSTRING("_emitter")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Scene*/ ,(int)offsetof(LensFlareSystem_obj,_scene),HX_CSTRING("_scene")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(LensFlareSystem_obj,_vertexDeclaration),HX_CSTRING("_vertexDeclaration")},
	{hx::fsInt,(int)offsetof(LensFlareSystem_obj,_vertexStrideSize),HX_CSTRING("_vertexStrideSize")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer*/ ,(int)offsetof(LensFlareSystem_obj,_vertexBuffer),HX_CSTRING("_vertexBuffer")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer*/ ,(int)offsetof(LensFlareSystem_obj,_indexBuffer),HX_CSTRING("_indexBuffer")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::Effect*/ ,(int)offsetof(LensFlareSystem_obj,_effect),HX_CSTRING("_effect")},
	{hx::fsFloat,(int)offsetof(LensFlareSystem_obj,_positionX),HX_CSTRING("_positionX")},
	{hx::fsFloat,(int)offsetof(LensFlareSystem_obj,_positionY),HX_CSTRING("_positionY")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LensFlareSystem_obj,meshesSelectionPredicate),HX_CSTRING("meshesSelectionPredicate")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("borderLimit"),
	HX_CSTRING("lensFlares"),
	HX_CSTRING("_emitter"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_vertexDeclaration"),
	HX_CSTRING("_vertexStrideSize"),
	HX_CSTRING("_vertexBuffer"),
	HX_CSTRING("_indexBuffer"),
	HX_CSTRING("_effect"),
	HX_CSTRING("_positionX"),
	HX_CSTRING("_positionY"),
	HX_CSTRING("meshesSelectionPredicate"),
	HX_CSTRING("getScene"),
	HX_CSTRING("getEmitterPosition"),
	HX_CSTRING("computeEffectivePosition"),
	HX_CSTRING("_isVisible"),
	HX_CSTRING("render"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LensFlareSystem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LensFlareSystem_obj::__mClass,"__mClass");
};

#endif

Class LensFlareSystem_obj::__mClass;

void LensFlareSystem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.lensflare.LensFlareSystem"), hx::TCanCast< LensFlareSystem_obj> ,sStaticFields,sMemberFields,
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

void LensFlareSystem_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace lensflare
