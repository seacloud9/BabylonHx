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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_bones_Bone
#include <com/gamestudiohx/babylonhx/bones/Bone.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_bones_Skeleton
#include <com/gamestudiohx/babylonhx/bones/Skeleton.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_Camera
#include <com/gamestudiohx/babylonhx/cameras/Camera.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingInfo
#include <com/gamestudiohx/babylonhx/culling/BoundingInfo.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_DirectionalLight
#include <com/gamestudiohx/babylonhx/lights/DirectionalLight.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_Light
#include <com/gamestudiohx/babylonhx/lights/Light.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_shadows_ShadowGenerator
#include <com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Effect
#include <com/gamestudiohx/babylonhx/materials/Effect.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BaseTexture
#include <com/gamestudiohx/babylonhx/materials/textures/BaseTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_RenderTargetTexture
#include <com/gamestudiohx/babylonhx/materials/textures/RenderTargetTexture.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_SubMesh
#include <com/gamestudiohx/babylonhx/mesh/SubMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_VertexBuffer
#include <com/gamestudiohx/babylonhx/mesh/VertexBuffer.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_SmartArray
#include <com/gamestudiohx/babylonhx/tools/SmartArray.h>
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
namespace lights{
namespace shadows{

Void ShadowGenerator_obj::__construct(Float mapSize,::com::gamestudiohx::babylonhx::lights::Light light)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator","new",0x9cff7deb,"com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator.new","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",45,0x293abee6)
HX_STACK_THIS(this)
HX_STACK_ARG(mapSize,"mapSize")
HX_STACK_ARG(light,"light")
{
	HX_STACK_LINE(45)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(46)
	this->_light = light;
	HX_STACK_LINE(47)
	::com::gamestudiohx::babylonhx::Scene _g1 = light->getScene();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(47)
	this->_scene = _g1;
	HX_STACK_LINE(49)
	light->_shadowGenerator = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(52)
	::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture _g11 = ::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture_obj::__new((light->name + HX_CSTRING("_shadowMap")),mapSize,this->_scene,false);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(52)
	this->_shadowMap = _g11;
	HX_STACK_LINE(53)
	this->_shadowMap->wrapU = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::CLAMP_ADDRESSMODE;
	HX_STACK_LINE(54)
	this->_shadowMap->wrapV = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::CLAMP_ADDRESSMODE;
	HX_STACK_LINE(55)
	this->_shadowMap->renderParticles = false;

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
	Void run(::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",58,0x293abee6)
		HX_STACK_ARG(subMesh,"subMesh")
		{
			HX_STACK_LINE(59)
			::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh = subMesh->getMesh();		HX_STACK_VAR(mesh,"mesh");
			HX_STACK_LINE(60)
			::com::gamestudiohx::babylonhx::tools::math::Matrix world;		HX_STACK_VAR(world,"world");
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				int _g2 = mesh->_scene->getRenderId();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(60)
				if (((mesh->_currentRenderId != _g2))){
					HX_STACK_LINE(60)
					bool force = false;		HX_STACK_VAR(force,"force");
					HX_STACK_LINE(60)
					::com::gamestudiohx::babylonhx::tools::math::Matrix ret = mesh->_worldMatrix;		HX_STACK_VAR(ret,"ret");
					struct _Function_4_1{
						inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::AbstractMesh &mesh){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",60,0x293abee6)
							{
								HX_STACK_LINE(60)
								int _g3 = mesh->_scene->getRenderId();		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(60)
								return (  ((!(((mesh->_currentRenderId == _g3))))) ? bool(mesh->isSynchronized(null())) : bool(true) );
							}
							return null();
						}
					};
					HX_STACK_LINE(60)
					if (((  ((!(force))) ? bool(_Function_4_1::Block(mesh)) : bool(false) ))){
						HX_STACK_LINE(60)
						mesh->_childrenFlag = (int)0;
					}
					else{
						HX_STACK_LINE(60)
						mesh->_childrenFlag = (int)1;
						HX_STACK_LINE(60)
						mesh->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(mesh->position);
						HX_STACK_LINE(60)
						mesh->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(mesh->scaling);
						HX_STACK_LINE(60)
						mesh->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
						HX_STACK_LINE(60)
						int _g4 = mesh->_scene->getRenderId();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(60)
						mesh->_currentRenderId = _g4;
						HX_STACK_LINE(60)
						{
							HX_STACK_LINE(60)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localScaling;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(60)
							result->m[(int)0] = mesh->scaling->x;
							HX_STACK_LINE(60)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(60)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(60)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(60)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(60)
							result->m[(int)5] = mesh->scaling->y;
							HX_STACK_LINE(60)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(60)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(60)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(60)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(60)
							result->m[(int)10] = mesh->scaling->z;
							HX_STACK_LINE(60)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(60)
							result->m[(int)12] = (int)0;
							HX_STACK_LINE(60)
							result->m[(int)13] = (int)0;
							HX_STACK_LINE(60)
							result->m[(int)14] = (int)0;
							HX_STACK_LINE(60)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(60)
							result;
						}
						HX_STACK_LINE(60)
						if (((mesh->rotationQuaternion != null()))){
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = mesh->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localRotation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(60)
								Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
								HX_STACK_LINE(60)
								Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
								HX_STACK_LINE(60)
								Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
								HX_STACK_LINE(60)
								Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
								HX_STACK_LINE(60)
								Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
								HX_STACK_LINE(60)
								Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
								HX_STACK_LINE(60)
								Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
								HX_STACK_LINE(60)
								Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
								HX_STACK_LINE(60)
								Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
								HX_STACK_LINE(60)
								result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
								HX_STACK_LINE(60)
								result->m[(int)1] = (2.0 * ((xy + zw)));
								HX_STACK_LINE(60)
								result->m[(int)2] = (2.0 * ((zx - yw)));
								HX_STACK_LINE(60)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(60)
								result->m[(int)4] = (2.0 * ((xy - zw)));
								HX_STACK_LINE(60)
								result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
								HX_STACK_LINE(60)
								result->m[(int)6] = (2.0 * ((yz + xw)));
								HX_STACK_LINE(60)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(60)
								result->m[(int)8] = (2.0 * ((zx + yw)));
								HX_STACK_LINE(60)
								result->m[(int)9] = (2.0 * ((yz - xw)));
								HX_STACK_LINE(60)
								result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
								HX_STACK_LINE(60)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(60)
								result->m[(int)12] = (int)0;
								HX_STACK_LINE(60)
								result->m[(int)13] = (int)0;
								HX_STACK_LINE(60)
								result->m[(int)14] = (int)0;
								HX_STACK_LINE(60)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(60)
								result;
							}
							HX_STACK_LINE(60)
							mesh->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(mesh->rotationQuaternion);
						}
						else{
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localRotation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Quaternion _g5;		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									Float halfRoll = (mesh->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
									HX_STACK_LINE(60)
									Float halfPitch = (mesh->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
									HX_STACK_LINE(60)
									Float halfYaw = (mesh->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
									HX_STACK_LINE(60)
									Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
									HX_STACK_LINE(60)
									Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
									HX_STACK_LINE(60)
									Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
									HX_STACK_LINE(60)
									Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
									HX_STACK_LINE(60)
									Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
									HX_STACK_LINE(60)
									Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
									HX_STACK_LINE(60)
									tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
									HX_STACK_LINE(60)
									tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
									HX_STACK_LINE(60)
									tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
									HX_STACK_LINE(60)
									tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
									HX_STACK_LINE(60)
									_g5 = tempQuaternion;
								}
								HX_STACK_LINE(60)
								tempQuaternion = _g5;
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
									HX_STACK_LINE(60)
									Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
									HX_STACK_LINE(60)
									Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
									HX_STACK_LINE(60)
									Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
									HX_STACK_LINE(60)
									Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
									HX_STACK_LINE(60)
									Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
									HX_STACK_LINE(60)
									Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
									HX_STACK_LINE(60)
									Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
									HX_STACK_LINE(60)
									Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
									HX_STACK_LINE(60)
									result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
									HX_STACK_LINE(60)
									result->m[(int)1] = (2.0 * ((xy + zw)));
									HX_STACK_LINE(60)
									result->m[(int)2] = (2.0 * ((zx - yw)));
									HX_STACK_LINE(60)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)4] = (2.0 * ((xy - zw)));
									HX_STACK_LINE(60)
									result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
									HX_STACK_LINE(60)
									result->m[(int)6] = (2.0 * ((yz + xw)));
									HX_STACK_LINE(60)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)8] = (2.0 * ((zx + yw)));
									HX_STACK_LINE(60)
									result->m[(int)9] = (2.0 * ((yz - xw)));
									HX_STACK_LINE(60)
									result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
									HX_STACK_LINE(60)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)12] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)13] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)14] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(60)
									result;
								}
							}
							HX_STACK_LINE(60)
							mesh->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(mesh->rotation);
						}
						HX_STACK_LINE(60)
						if ((mesh->infiniteDistance)){
							HX_STACK_LINE(60)
							::com::gamestudiohx::babylonhx::cameras::Camera camera = mesh->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localTranslation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									result->m[(int)0] = 1.0;
									HX_STACK_LINE(60)
									result->m[(int)1] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)2] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)4] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)5] = 1.0;
									HX_STACK_LINE(60)
									result->m[(int)6] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)8] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)9] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)10] = 1.0;
									HX_STACK_LINE(60)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)12] = (mesh->position->x + camera->position->x);
									HX_STACK_LINE(60)
									result->m[(int)13] = (mesh->position->y + camera->position->y);
									HX_STACK_LINE(60)
									result->m[(int)14] = (mesh->position->z + camera->position->z);
									HX_STACK_LINE(60)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(60)
									result;
								}
							}
						}
						else{
							HX_STACK_LINE(60)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localTranslation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								result->m[(int)0] = 1.0;
								HX_STACK_LINE(60)
								result->m[(int)1] = (int)0;
								HX_STACK_LINE(60)
								result->m[(int)2] = (int)0;
								HX_STACK_LINE(60)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(60)
								result->m[(int)4] = (int)0;
								HX_STACK_LINE(60)
								result->m[(int)5] = 1.0;
								HX_STACK_LINE(60)
								result->m[(int)6] = (int)0;
								HX_STACK_LINE(60)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(60)
								result->m[(int)8] = (int)0;
								HX_STACK_LINE(60)
								result->m[(int)9] = (int)0;
								HX_STACK_LINE(60)
								result->m[(int)10] = 1.0;
								HX_STACK_LINE(60)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(60)
								result->m[(int)12] = mesh->position->x;
								HX_STACK_LINE(60)
								result->m[(int)13] = mesh->position->y;
								HX_STACK_LINE(60)
								result->m[(int)14] = mesh->position->z;
								HX_STACK_LINE(60)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(60)
								result;
							}
						}
						HX_STACK_LINE(60)
						{
							HX_STACK_LINE(60)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(60)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localScaling;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								Array< Float > result = mesh->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(60)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(60)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(60)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(60)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(60)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(60)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(60)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(60)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(60)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(60)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(60)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(60)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(60)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(60)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(60)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(60)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(60)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(60)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(60)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(60)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(60)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(60)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(60)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(60)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(60)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(60)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(60)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(60)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(60)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(60)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(60)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(60)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(60)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(60)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(60)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(60)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(60)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(60)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(60)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(60)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(60)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(60)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(60)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(60)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(60)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(60)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(60)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(60)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(60)
								result;
							}
						}
						HX_STACK_LINE(60)
						{
							HX_STACK_LINE(60)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(60)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localRotation;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								Array< Float > result = mesh->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(60)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(60)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(60)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(60)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(60)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(60)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(60)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(60)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(60)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(60)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(60)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(60)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(60)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(60)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(60)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(60)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(60)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(60)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(60)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(60)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(60)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(60)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(60)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(60)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(60)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(60)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(60)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(60)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(60)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(60)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(60)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(60)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(60)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(60)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(60)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(60)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(60)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(60)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(60)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(60)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(60)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(60)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(60)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(60)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(60)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(60)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(60)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(60)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(60)
								result;
							}
						}
						HX_STACK_LINE(60)
						if (((mesh->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
							HX_STACK_LINE(60)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = mesh->position;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(60)
								localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
							}
							HX_STACK_LINE(60)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = mesh->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(60)
								zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
							}
							HX_STACK_LINE(60)
							if (((bool((mesh->parent != null())) && bool((mesh->parent->position != null()))))){
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = mesh->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
									HX_STACK_LINE(60)
									hx::AddEq(localPosition->x,otherVector->x);
									HX_STACK_LINE(60)
									hx::AddEq(localPosition->y,otherVector->y);
									HX_STACK_LINE(60)
									hx::AddEq(localPosition->z,otherVector->z);
								}
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localTranslation;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(60)
									{
										HX_STACK_LINE(60)
										result->m[(int)0] = 1.0;
										HX_STACK_LINE(60)
										result->m[(int)1] = (int)0;
										HX_STACK_LINE(60)
										result->m[(int)2] = (int)0;
										HX_STACK_LINE(60)
										result->m[(int)3] = (int)0;
										HX_STACK_LINE(60)
										result->m[(int)4] = (int)0;
										HX_STACK_LINE(60)
										result->m[(int)5] = 1.0;
										HX_STACK_LINE(60)
										result->m[(int)6] = (int)0;
										HX_STACK_LINE(60)
										result->m[(int)7] = (int)0;
										HX_STACK_LINE(60)
										result->m[(int)8] = (int)0;
										HX_STACK_LINE(60)
										result->m[(int)9] = (int)0;
										HX_STACK_LINE(60)
										result->m[(int)10] = 1.0;
										HX_STACK_LINE(60)
										result->m[(int)11] = (int)0;
										HX_STACK_LINE(60)
										result->m[(int)12] = localPosition->x;
										HX_STACK_LINE(60)
										result->m[(int)13] = localPosition->y;
										HX_STACK_LINE(60)
										result->m[(int)14] = localPosition->z;
										HX_STACK_LINE(60)
										result->m[(int)15] = 1.0;
										HX_STACK_LINE(60)
										result;
									}
								}
							}
							HX_STACK_LINE(60)
							if (((((int(mesh->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
								HX_STACK_LINE(60)
								zero = mesh->_scene->activeCamera->position;
							}
							else{
								HX_STACK_LINE(60)
								if (((((int(mesh->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
									HX_STACK_LINE(60)
									zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
								}
								HX_STACK_LINE(60)
								if (((((int(mesh->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
									HX_STACK_LINE(60)
									zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
								}
								HX_STACK_LINE(60)
								if (((((int(mesh->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
									HX_STACK_LINE(60)
									zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
								}
							}
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localBillboard;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									zAxis->x = (zero->x - localPosition->x);
									HX_STACK_LINE(60)
									zAxis->y = (zero->y - localPosition->y);
									HX_STACK_LINE(60)
									zAxis->z = (zero->z - localPosition->z);
								}
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(60)
									if (((len != (int)0))){
										HX_STACK_LINE(60)
										Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
										HX_STACK_LINE(60)
										hx::MultEq(zAxis->x,num);
										HX_STACK_LINE(60)
										hx::MultEq(zAxis->y,num);
										HX_STACK_LINE(60)
										hx::MultEq(zAxis->z,num);
									}
								}
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
									HX_STACK_LINE(60)
									xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
									HX_STACK_LINE(60)
									xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
								}
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(60)
									if (((len != (int)0))){
										HX_STACK_LINE(60)
										Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
										HX_STACK_LINE(60)
										hx::MultEq(xAxis->x,num);
										HX_STACK_LINE(60)
										hx::MultEq(xAxis->y,num);
										HX_STACK_LINE(60)
										hx::MultEq(xAxis->z,num);
									}
								}
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
									HX_STACK_LINE(60)
									yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
									HX_STACK_LINE(60)
									yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
								}
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(60)
									if (((len != (int)0))){
										HX_STACK_LINE(60)
										Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
										HX_STACK_LINE(60)
										hx::MultEq(yAxis->x,num);
										HX_STACK_LINE(60)
										hx::MultEq(yAxis->y,num);
										HX_STACK_LINE(60)
										hx::MultEq(yAxis->z,num);
									}
								}
								HX_STACK_LINE(60)
								Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
								HX_STACK_LINE(60)
								Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
								HX_STACK_LINE(60)
								Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									result->m[(int)0] = xAxis->x;
									HX_STACK_LINE(60)
									result->m[(int)1] = yAxis->x;
									HX_STACK_LINE(60)
									result->m[(int)2] = zAxis->x;
									HX_STACK_LINE(60)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)4] = xAxis->y;
									HX_STACK_LINE(60)
									result->m[(int)5] = yAxis->y;
									HX_STACK_LINE(60)
									result->m[(int)6] = zAxis->y;
									HX_STACK_LINE(60)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)8] = xAxis->z;
									HX_STACK_LINE(60)
									result->m[(int)9] = yAxis->z;
									HX_STACK_LINE(60)
									result->m[(int)10] = zAxis->z;
									HX_STACK_LINE(60)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(60)
									result->m[(int)12] = ex;
									HX_STACK_LINE(60)
									result->m[(int)13] = ey;
									HX_STACK_LINE(60)
									result->m[(int)14] = ez;
									HX_STACK_LINE(60)
									result->m[(int)15] = (int)1;
									HX_STACK_LINE(60)
									result;
								}
							}
							HX_STACK_LINE(60)
							mesh->_localBillboard->m[(int)12] = mesh->_localBillboard->m[(int)13] = mesh->_localBillboard->m[(int)14] = (int)0;
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localBillboard;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
									HX_STACK_LINE(60)
									Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
									HX_STACK_LINE(60)
									Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
									HX_STACK_LINE(60)
									Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
									HX_STACK_LINE(60)
									Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
									HX_STACK_LINE(60)
									Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
									HX_STACK_LINE(60)
									Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
									HX_STACK_LINE(60)
									Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
									HX_STACK_LINE(60)
									Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
									HX_STACK_LINE(60)
									Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
									HX_STACK_LINE(60)
									Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
									HX_STACK_LINE(60)
									Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
									HX_STACK_LINE(60)
									Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
									HX_STACK_LINE(60)
									Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
									HX_STACK_LINE(60)
									Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
									HX_STACK_LINE(60)
									Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
									HX_STACK_LINE(60)
									Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
									HX_STACK_LINE(60)
									Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
									HX_STACK_LINE(60)
									Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
									HX_STACK_LINE(60)
									Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
									HX_STACK_LINE(60)
									Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
									HX_STACK_LINE(60)
									Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
									HX_STACK_LINE(60)
									Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
									HX_STACK_LINE(60)
									Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
									HX_STACK_LINE(60)
									Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
									HX_STACK_LINE(60)
									Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
									HX_STACK_LINE(60)
									Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
									HX_STACK_LINE(60)
									Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
									HX_STACK_LINE(60)
									Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
									HX_STACK_LINE(60)
									Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
									HX_STACK_LINE(60)
									Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
									HX_STACK_LINE(60)
									Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
									HX_STACK_LINE(60)
									Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
									HX_STACK_LINE(60)
									Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
									HX_STACK_LINE(60)
									Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
									HX_STACK_LINE(60)
									Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
									HX_STACK_LINE(60)
									Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
									HX_STACK_LINE(60)
									Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
									HX_STACK_LINE(60)
									Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
									HX_STACK_LINE(60)
									_this->m[(int)0] = (l23 * l27);
									HX_STACK_LINE(60)
									_this->m[(int)4] = (l24 * l27);
									HX_STACK_LINE(60)
									_this->m[(int)8] = (l25 * l27);
									HX_STACK_LINE(60)
									_this->m[(int)12] = (l26 * l27);
									HX_STACK_LINE(60)
									_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
									HX_STACK_LINE(60)
									_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
									HX_STACK_LINE(60)
									_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
									HX_STACK_LINE(60)
									_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
									HX_STACK_LINE(60)
									_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
									HX_STACK_LINE(60)
									_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
									HX_STACK_LINE(60)
									_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
									HX_STACK_LINE(60)
									_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
									HX_STACK_LINE(60)
									_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
									HX_STACK_LINE(60)
									_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
									HX_STACK_LINE(60)
									_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
									HX_STACK_LINE(60)
									_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
								}
							}
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localBillboard;		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									Array< Float > result = mesh->_localWorld->m;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(60)
									Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
									HX_STACK_LINE(60)
									Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
									HX_STACK_LINE(60)
									Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
									HX_STACK_LINE(60)
									Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
									HX_STACK_LINE(60)
									Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
									HX_STACK_LINE(60)
									Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
									HX_STACK_LINE(60)
									Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
									HX_STACK_LINE(60)
									Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
									HX_STACK_LINE(60)
									Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
									HX_STACK_LINE(60)
									Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
									HX_STACK_LINE(60)
									Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
									HX_STACK_LINE(60)
									Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
									HX_STACK_LINE(60)
									Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
									HX_STACK_LINE(60)
									Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
									HX_STACK_LINE(60)
									Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
									HX_STACK_LINE(60)
									Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
									HX_STACK_LINE(60)
									Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
									HX_STACK_LINE(60)
									Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
									HX_STACK_LINE(60)
									Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
									HX_STACK_LINE(60)
									Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
									HX_STACK_LINE(60)
									Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
									HX_STACK_LINE(60)
									Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
									HX_STACK_LINE(60)
									Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
									HX_STACK_LINE(60)
									Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
									HX_STACK_LINE(60)
									Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
									HX_STACK_LINE(60)
									Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
									HX_STACK_LINE(60)
									Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
									HX_STACK_LINE(60)
									Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
									HX_STACK_LINE(60)
									Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
									HX_STACK_LINE(60)
									Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
									HX_STACK_LINE(60)
									Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
									HX_STACK_LINE(60)
									Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
									HX_STACK_LINE(60)
									result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
									HX_STACK_LINE(60)
									result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
									HX_STACK_LINE(60)
									result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
									HX_STACK_LINE(60)
									result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
									HX_STACK_LINE(60)
									result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
									HX_STACK_LINE(60)
									result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
									HX_STACK_LINE(60)
									result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
									HX_STACK_LINE(60)
									result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
									HX_STACK_LINE(60)
									result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
									HX_STACK_LINE(60)
									result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
									HX_STACK_LINE(60)
									result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
									HX_STACK_LINE(60)
									result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
									HX_STACK_LINE(60)
									result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
									HX_STACK_LINE(60)
									result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
									HX_STACK_LINE(60)
									result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
									HX_STACK_LINE(60)
									result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
									HX_STACK_LINE(60)
									result;
								}
							}
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localWorld;		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									Array< Float > result = mesh->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(60)
									Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
									HX_STACK_LINE(60)
									Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
									HX_STACK_LINE(60)
									Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
									HX_STACK_LINE(60)
									Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
									HX_STACK_LINE(60)
									Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
									HX_STACK_LINE(60)
									Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
									HX_STACK_LINE(60)
									Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
									HX_STACK_LINE(60)
									Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
									HX_STACK_LINE(60)
									Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
									HX_STACK_LINE(60)
									Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
									HX_STACK_LINE(60)
									Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
									HX_STACK_LINE(60)
									Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
									HX_STACK_LINE(60)
									Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
									HX_STACK_LINE(60)
									Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
									HX_STACK_LINE(60)
									Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
									HX_STACK_LINE(60)
									Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
									HX_STACK_LINE(60)
									Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
									HX_STACK_LINE(60)
									Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
									HX_STACK_LINE(60)
									Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
									HX_STACK_LINE(60)
									Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
									HX_STACK_LINE(60)
									Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
									HX_STACK_LINE(60)
									Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
									HX_STACK_LINE(60)
									Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
									HX_STACK_LINE(60)
									Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
									HX_STACK_LINE(60)
									Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
									HX_STACK_LINE(60)
									Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
									HX_STACK_LINE(60)
									Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
									HX_STACK_LINE(60)
									Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
									HX_STACK_LINE(60)
									Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
									HX_STACK_LINE(60)
									Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
									HX_STACK_LINE(60)
									Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
									HX_STACK_LINE(60)
									Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
									HX_STACK_LINE(60)
									result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
									HX_STACK_LINE(60)
									result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
									HX_STACK_LINE(60)
									result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
									HX_STACK_LINE(60)
									result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
									HX_STACK_LINE(60)
									result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
									HX_STACK_LINE(60)
									result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
									HX_STACK_LINE(60)
									result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
									HX_STACK_LINE(60)
									result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
									HX_STACK_LINE(60)
									result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
									HX_STACK_LINE(60)
									result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
									HX_STACK_LINE(60)
									result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
									HX_STACK_LINE(60)
									result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
									HX_STACK_LINE(60)
									result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
									HX_STACK_LINE(60)
									result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
									HX_STACK_LINE(60)
									result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
									HX_STACK_LINE(60)
									result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
									HX_STACK_LINE(60)
									result;
								}
							}
						}
						struct _Function_5_1{
							inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::AbstractMesh &mesh){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",60,0x293abee6)
								{
									HX_STACK_LINE(60)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _g6 = mesh->parent->getWorldMatrix();		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(60)
									return (_g6 != null());
								}
								return null();
							}
						};
						HX_STACK_LINE(60)
						if (((  (((  (((mesh->parent != null()))) ? bool(_Function_5_1::Block(mesh)) : bool(false) ))) ? bool((mesh->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localTranslation;		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									Array< Float > result = mesh->_localWorld->m;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(60)
									Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
									HX_STACK_LINE(60)
									Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
									HX_STACK_LINE(60)
									Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
									HX_STACK_LINE(60)
									Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
									HX_STACK_LINE(60)
									Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
									HX_STACK_LINE(60)
									Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
									HX_STACK_LINE(60)
									Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
									HX_STACK_LINE(60)
									Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
									HX_STACK_LINE(60)
									Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
									HX_STACK_LINE(60)
									Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
									HX_STACK_LINE(60)
									Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
									HX_STACK_LINE(60)
									Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
									HX_STACK_LINE(60)
									Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
									HX_STACK_LINE(60)
									Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
									HX_STACK_LINE(60)
									Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
									HX_STACK_LINE(60)
									Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
									HX_STACK_LINE(60)
									Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
									HX_STACK_LINE(60)
									Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
									HX_STACK_LINE(60)
									Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
									HX_STACK_LINE(60)
									Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
									HX_STACK_LINE(60)
									Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
									HX_STACK_LINE(60)
									Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
									HX_STACK_LINE(60)
									Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
									HX_STACK_LINE(60)
									Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
									HX_STACK_LINE(60)
									Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
									HX_STACK_LINE(60)
									Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
									HX_STACK_LINE(60)
									Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
									HX_STACK_LINE(60)
									Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
									HX_STACK_LINE(60)
									Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
									HX_STACK_LINE(60)
									Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
									HX_STACK_LINE(60)
									Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
									HX_STACK_LINE(60)
									Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
									HX_STACK_LINE(60)
									result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
									HX_STACK_LINE(60)
									result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
									HX_STACK_LINE(60)
									result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
									HX_STACK_LINE(60)
									result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
									HX_STACK_LINE(60)
									result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
									HX_STACK_LINE(60)
									result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
									HX_STACK_LINE(60)
									result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
									HX_STACK_LINE(60)
									result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
									HX_STACK_LINE(60)
									result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
									HX_STACK_LINE(60)
									result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
									HX_STACK_LINE(60)
									result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
									HX_STACK_LINE(60)
									result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
									HX_STACK_LINE(60)
									result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
									HX_STACK_LINE(60)
									result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
									HX_STACK_LINE(60)
									result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
									HX_STACK_LINE(60)
									result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
									HX_STACK_LINE(60)
									result;
								}
							}
							HX_STACK_LINE(60)
							::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = mesh->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localWorld;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									Array< Float > result = mesh->_worldMatrix->m;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(60)
									Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
									HX_STACK_LINE(60)
									Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
									HX_STACK_LINE(60)
									Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
									HX_STACK_LINE(60)
									Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
									HX_STACK_LINE(60)
									Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
									HX_STACK_LINE(60)
									Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
									HX_STACK_LINE(60)
									Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
									HX_STACK_LINE(60)
									Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
									HX_STACK_LINE(60)
									Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
									HX_STACK_LINE(60)
									Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
									HX_STACK_LINE(60)
									Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
									HX_STACK_LINE(60)
									Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
									HX_STACK_LINE(60)
									Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
									HX_STACK_LINE(60)
									Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
									HX_STACK_LINE(60)
									Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
									HX_STACK_LINE(60)
									Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
									HX_STACK_LINE(60)
									Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
									HX_STACK_LINE(60)
									Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
									HX_STACK_LINE(60)
									Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
									HX_STACK_LINE(60)
									Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
									HX_STACK_LINE(60)
									Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
									HX_STACK_LINE(60)
									Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
									HX_STACK_LINE(60)
									Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
									HX_STACK_LINE(60)
									Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
									HX_STACK_LINE(60)
									Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
									HX_STACK_LINE(60)
									Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
									HX_STACK_LINE(60)
									Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
									HX_STACK_LINE(60)
									Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
									HX_STACK_LINE(60)
									Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
									HX_STACK_LINE(60)
									Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
									HX_STACK_LINE(60)
									Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
									HX_STACK_LINE(60)
									Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
									HX_STACK_LINE(60)
									result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
									HX_STACK_LINE(60)
									result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
									HX_STACK_LINE(60)
									result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
									HX_STACK_LINE(60)
									result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
									HX_STACK_LINE(60)
									result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
									HX_STACK_LINE(60)
									result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
									HX_STACK_LINE(60)
									result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
									HX_STACK_LINE(60)
									result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
									HX_STACK_LINE(60)
									result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
									HX_STACK_LINE(60)
									result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
									HX_STACK_LINE(60)
									result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
									HX_STACK_LINE(60)
									result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
									HX_STACK_LINE(60)
									result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
									HX_STACK_LINE(60)
									result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
									HX_STACK_LINE(60)
									result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
									HX_STACK_LINE(60)
									result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
									HX_STACK_LINE(60)
									result;
								}
							}
						}
						else{
							HX_STACK_LINE(60)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(60)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localTranslation;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								Array< Float > result = mesh->_worldMatrix->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(60)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(60)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(60)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(60)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(60)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(60)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(60)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(60)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(60)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(60)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(60)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(60)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(60)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(60)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(60)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(60)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(60)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(60)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(60)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(60)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(60)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(60)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(60)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(60)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(60)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(60)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(60)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(60)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(60)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(60)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(60)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(60)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(60)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(60)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(60)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(60)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(60)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(60)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(60)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(60)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(60)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(60)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(60)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(60)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(60)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(60)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(60)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(60)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(60)
								result;
							}
						}
						HX_STACK_LINE(60)
						if (((mesh->_boundingInfo != null()))){
							HX_STACK_LINE(60)
							Float _g7 = ::Math_obj::max(mesh->scaling->x,mesh->scaling->y);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(60)
							mesh->_scaleFactor = _g7;
							HX_STACK_LINE(60)
							Float _g8 = ::Math_obj::max(mesh->_scaleFactor,mesh->scaling->z);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(60)
							mesh->_scaleFactor = _g8;
							struct _Function_6_1{
								inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::AbstractMesh &mesh){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",60,0x293abee6)
									{
										HX_STACK_LINE(60)
										Dynamic _g9 = ::Reflect_obj::field(mesh->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g9,"_g9");
										HX_STACK_LINE(60)
										return (_g9 != null());
									}
									return null();
								}
							};
							HX_STACK_LINE(60)
							if (((  (((mesh->parent != null()))) ? bool(_Function_6_1::Block(mesh)) : bool(false) ))){
								HX_STACK_LINE(60)
								Dynamic _g10 = ::Reflect_obj::field(mesh->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(60)
								Float _g111 = (mesh->_scaleFactor * _g10);		HX_STACK_VAR(_g111,"_g111");
								HX_STACK_LINE(60)
								mesh->_scaleFactor = _g111;
							}
							HX_STACK_LINE(60)
							mesh->_boundingInfo->_update(mesh->_worldMatrix,mesh->_scaleFactor);
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(60)
								int _g3 = mesh->subMeshes->length;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(60)
								while((true)){
									HX_STACK_LINE(60)
									if ((!(((_g12 < _g3))))){
										HX_STACK_LINE(60)
										break;
									}
									HX_STACK_LINE(60)
									int subIndex = (_g12)++;		HX_STACK_VAR(subIndex,"subIndex");
									HX_STACK_LINE(60)
									::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh1 = mesh->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh1,"subMesh1");
									HX_STACK_LINE(60)
									subMesh1->_boundingInfo->_update(mesh->_worldMatrix,mesh->_scaleFactor);
								}
							}
						}
						HX_STACK_LINE(60)
						{
							HX_STACK_LINE(60)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = mesh->_absolutePosition;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(60)
							_this->x = mesh->_worldMatrix->m->__get((int)12);
							HX_STACK_LINE(60)
							_this->y = mesh->_worldMatrix->m->__get((int)13);
							HX_STACK_LINE(60)
							_this->z = mesh->_worldMatrix->m->__get((int)14);
						}
						HX_STACK_LINE(60)
						ret = mesh->_worldMatrix;
					}
					HX_STACK_LINE(60)
					ret;
				}
				HX_STACK_LINE(60)
				world = mesh->_worldMatrix;
			}
			HX_STACK_LINE(61)
			::com::gamestudiohx::babylonhx::Engine engine = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_scene->getEngine();		HX_STACK_VAR(engine,"engine");
			HX_STACK_LINE(63)
			if ((_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->isReady(mesh))){
				HX_STACK_LINE(64)
				engine->enableEffect(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_effect);
				HX_STACK_LINE(67)
				if (((  (((  (((mesh->skeleton != null()))) ? bool(mesh->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesIndicesKind)) : bool(false) ))) ? bool(mesh->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesWeightsKind)) : bool(false) ))){
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						Dynamic uniform = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_effect->getUniform(HX_CSTRING("world"));		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(68)
						if (((uniform != null()))){
							HX_STACK_LINE(68)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(68)
							Dynamic v;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(68)
							{
								HX_STACK_LINE(68)
								::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(world->m,null(),null());		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(68)
								Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
								HX_STACK_LINE(68)
								v = data;
							}
							HX_STACK_LINE(68)
							::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
						}
					}
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						::com::gamestudiohx::babylonhx::tools::math::Matrix matrix;		HX_STACK_VAR(matrix,"matrix");
						HX_STACK_LINE(69)
						{
							HX_STACK_LINE(69)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 lightPosition = ::Reflect_obj::field(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_light,HX_CSTRING("position"));		HX_STACK_VAR(lightPosition,"lightPosition");
							HX_STACK_LINE(69)
							Dynamic lightDirection = ::Reflect_obj::field(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_light,HX_CSTRING("direction"));		HX_STACK_VAR(lightDirection,"lightDirection");
							struct _Function_6_1{
								inline static bool Block( Array< ::Dynamic > &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",69,0x293abee6)
									{
										HX_STACK_LINE(69)
										::com::gamestudiohx::babylonhx::lights::DirectionalLight _this;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(69)
										_this = hx::TCast< com::gamestudiohx::babylonhx::lights::DirectionalLight >::cast(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_light);
										HX_STACK_LINE(69)
										bool ret = false;		HX_STACK_VAR(ret,"ret");
										struct _Function_7_1{
											inline static bool Block( ::com::gamestudiohx::babylonhx::lights::DirectionalLight _this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",69,0x293abee6)
												{
													HX_STACK_LINE(69)
													::com::gamestudiohx::babylonhx::tools::math::Matrix _g12 = _this->parent->getWorldMatrix();		HX_STACK_VAR(_g12,"_g12");
													HX_STACK_LINE(69)
													return (_g12 != null());
												}
												return null();
											}
										};
										HX_STACK_LINE(69)
										if (((  (((_this->parent != null()))) ? bool(_Function_7_1::Block(_this)) : bool(false) ))){
											HX_STACK_LINE(69)
											if (((_this->_transformedPosition == null()))){
												HX_STACK_LINE(69)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 _g13 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g13,"_g13");
												HX_STACK_LINE(69)
												_this->_transformedPosition = _g13;
											}
											HX_STACK_LINE(69)
											{
												HX_STACK_LINE(69)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = _this->position;		HX_STACK_VAR(vector,"vector");
												HX_STACK_LINE(69)
												::com::gamestudiohx::babylonhx::tools::math::Matrix transformation = _this->parent->getWorldMatrix();		HX_STACK_VAR(transformation,"transformation");
												HX_STACK_LINE(69)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 result = _this->_transformedPosition;		HX_STACK_VAR(result,"result");
												HX_STACK_LINE(69)
												Float x = ((((vector->x * transformation->m->__get((int)0)) + (vector->y * transformation->m->__get((int)4))) + (vector->z * transformation->m->__get((int)8))) + transformation->m->__get((int)12));		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(69)
												Float y = ((((vector->x * transformation->m->__get((int)1)) + (vector->y * transformation->m->__get((int)5))) + (vector->z * transformation->m->__get((int)9))) + transformation->m->__get((int)13));		HX_STACK_VAR(y,"y");
												HX_STACK_LINE(69)
												Float z = ((((vector->x * transformation->m->__get((int)2)) + (vector->y * transformation->m->__get((int)6))) + (vector->z * transformation->m->__get((int)10))) + transformation->m->__get((int)14));		HX_STACK_VAR(z,"z");
												HX_STACK_LINE(69)
												Float w = ((((vector->x * transformation->m->__get((int)3)) + (vector->y * transformation->m->__get((int)7))) + (vector->z * transformation->m->__get((int)11))) + transformation->m->__get((int)15));		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(69)
												result->x = (Float(x) / Float(w));
												HX_STACK_LINE(69)
												result->y = (Float(y) / Float(w));
												HX_STACK_LINE(69)
												result->z = (Float(z) / Float(w));
											}
											HX_STACK_LINE(69)
											ret = true;
										}
										HX_STACK_LINE(69)
										return ret;
									}
									return null();
								}
							};
							HX_STACK_LINE(69)
							if ((_Function_6_1::Block(_g))){
								HX_STACK_LINE(69)
								lightPosition = (hx::TCast< com::gamestudiohx::babylonhx::lights::DirectionalLight >::cast(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_light))->_transformedPosition;
							}
							struct _Function_6_2{
								inline static bool Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &lightPosition,Array< ::Dynamic > &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",69,0x293abee6)
									{
										HX_STACK_LINE(69)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_cachedPosition;		HX_STACK_VAR(otherVector,"otherVector");
										HX_STACK_LINE(69)
										return (bool((bool((lightPosition->x == otherVector->x)) && bool((lightPosition->y == otherVector->y)))) && bool((lightPosition->z == otherVector->z)));
									}
									return null();
								}
							};
							HX_STACK_LINE(69)
							if (((  ((!(((bool((bool((_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_cachedPosition == null())) || bool((_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_cachedDirection == null())))) || bool(!(_Function_6_2::Block(lightPosition,_g)))))))) ? bool(!(lightDirection->__Field(HX_CSTRING("equals"),true)(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_cachedDirection))) : bool(true) ))){
								HX_STACK_LINE(69)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _g14 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(lightPosition->x,lightPosition->y,lightPosition->z);		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(69)
								_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_cachedPosition = _g14;
								HX_STACK_LINE(69)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _g15 = lightDirection->__Field(HX_CSTRING("clone"),true)();		HX_STACK_VAR(_g15,"_g15");
								HX_STACK_LINE(69)
								_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_cachedDirection = _g15;
								HX_STACK_LINE(69)
								::com::gamestudiohx::babylonhx::cameras::Camera activeCamera = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_scene->activeCamera;		HX_STACK_VAR(activeCamera,"activeCamera");
								HX_STACK_LINE(69)
								{
									HX_STACK_LINE(69)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 target = ::Reflect_obj::field(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_light,HX_CSTRING("position"))->__Field(HX_CSTRING("add"),true)(lightDirection);		HX_STACK_VAR(target,"target");
									HX_STACK_LINE(69)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
									HX_STACK_LINE(69)
									::com::gamestudiohx::babylonhx::tools::math::Matrix result = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_viewMatrix;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(69)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
									HX_STACK_LINE(69)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
									HX_STACK_LINE(69)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										zAxis->x = (target->x - lightPosition->x);
										HX_STACK_LINE(69)
										zAxis->y = (target->y - lightPosition->y);
										HX_STACK_LINE(69)
										zAxis->z = (target->z - lightPosition->z);
									}
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(69)
										if (((len != (int)0))){
											HX_STACK_LINE(69)
											Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
											HX_STACK_LINE(69)
											hx::MultEq(zAxis->x,num);
											HX_STACK_LINE(69)
											hx::MultEq(zAxis->y,num);
											HX_STACK_LINE(69)
											hx::MultEq(zAxis->z,num);
										}
									}
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
										HX_STACK_LINE(69)
										xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
										HX_STACK_LINE(69)
										xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
									}
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(69)
										if (((len != (int)0))){
											HX_STACK_LINE(69)
											Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
											HX_STACK_LINE(69)
											hx::MultEq(xAxis->x,num);
											HX_STACK_LINE(69)
											hx::MultEq(xAxis->y,num);
											HX_STACK_LINE(69)
											hx::MultEq(xAxis->z,num);
										}
									}
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
										HX_STACK_LINE(69)
										yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
										HX_STACK_LINE(69)
										yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
									}
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(69)
										if (((len != (int)0))){
											HX_STACK_LINE(69)
											Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
											HX_STACK_LINE(69)
											hx::MultEq(yAxis->x,num);
											HX_STACK_LINE(69)
											hx::MultEq(yAxis->y,num);
											HX_STACK_LINE(69)
											hx::MultEq(yAxis->z,num);
										}
									}
									HX_STACK_LINE(69)
									Float ex = -(((((xAxis->x * lightPosition->x) + (xAxis->y * lightPosition->y)) + (xAxis->z * lightPosition->z))));		HX_STACK_VAR(ex,"ex");
									HX_STACK_LINE(69)
									Float ey = -(((((yAxis->x * lightPosition->x) + (yAxis->y * lightPosition->y)) + (yAxis->z * lightPosition->z))));		HX_STACK_VAR(ey,"ey");
									HX_STACK_LINE(69)
									Float ez = -(((((zAxis->x * lightPosition->x) + (zAxis->y * lightPosition->y)) + (zAxis->z * lightPosition->z))));		HX_STACK_VAR(ez,"ez");
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										result->m[(int)0] = xAxis->x;
										HX_STACK_LINE(69)
										result->m[(int)1] = yAxis->x;
										HX_STACK_LINE(69)
										result->m[(int)2] = zAxis->x;
										HX_STACK_LINE(69)
										result->m[(int)3] = (int)0;
										HX_STACK_LINE(69)
										result->m[(int)4] = xAxis->y;
										HX_STACK_LINE(69)
										result->m[(int)5] = yAxis->y;
										HX_STACK_LINE(69)
										result->m[(int)6] = zAxis->y;
										HX_STACK_LINE(69)
										result->m[(int)7] = (int)0;
										HX_STACK_LINE(69)
										result->m[(int)8] = xAxis->z;
										HX_STACK_LINE(69)
										result->m[(int)9] = yAxis->z;
										HX_STACK_LINE(69)
										result->m[(int)10] = zAxis->z;
										HX_STACK_LINE(69)
										result->m[(int)11] = (int)0;
										HX_STACK_LINE(69)
										result->m[(int)12] = ex;
										HX_STACK_LINE(69)
										result->m[(int)13] = ey;
										HX_STACK_LINE(69)
										result->m[(int)14] = ez;
										HX_STACK_LINE(69)
										result->m[(int)15] = (int)1;
										HX_STACK_LINE(69)
										result;
									}
								}
								HX_STACK_LINE(69)
								{
									HX_STACK_LINE(69)
									Float znear = activeCamera->minZ;		HX_STACK_VAR(znear,"znear");
									HX_STACK_LINE(69)
									Float zfar = activeCamera->maxZ;		HX_STACK_VAR(zfar,"zfar");
									HX_STACK_LINE(69)
									::com::gamestudiohx::babylonhx::tools::math::Matrix result = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_projectionMatrix;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(69)
									Float _g16 = ::Math_obj::tan(((Float(::Math_obj::PI) / Float(2.0)) * 0.5));		HX_STACK_VAR(_g16,"_g16");
									HX_STACK_LINE(69)
									Float tan = (Float(1.0) / Float(_g16));		HX_STACK_VAR(tan,"tan");
									HX_STACK_LINE(69)
									result->m[(int)0] = (Float(tan) / Float(1.0));
									HX_STACK_LINE(69)
									result->m[(int)1] = result->m[(int)2] = result->m[(int)3] = 0.0;
									HX_STACK_LINE(69)
									result->m[(int)5] = tan;
									HX_STACK_LINE(69)
									result->m[(int)4] = result->m[(int)6] = result->m[(int)7] = 0.0;
									HX_STACK_LINE(69)
									result->m[(int)8] = result->m[(int)9] = 0.0;
									HX_STACK_LINE(69)
									result->m[(int)10] = (Float(-(zfar)) / Float(((znear - zfar))));
									HX_STACK_LINE(69)
									result->m[(int)11] = 1.0;
									HX_STACK_LINE(69)
									result->m[(int)12] = result->m[(int)13] = result->m[(int)15] = 0.0;
									HX_STACK_LINE(69)
									result->m[(int)14] = (Float((znear * zfar)) / Float(((znear - zfar))));
									HX_STACK_LINE(69)
									result;
								}
								HX_STACK_LINE(69)
								{
									HX_STACK_LINE(69)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _this = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_viewMatrix;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(69)
									::com::gamestudiohx::babylonhx::tools::math::Matrix other = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_projectionMatrix;		HX_STACK_VAR(other,"other");
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										Array< Float > result = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_transformMatrix->m;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(69)
										Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
										HX_STACK_LINE(69)
										Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
										HX_STACK_LINE(69)
										Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
										HX_STACK_LINE(69)
										Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
										HX_STACK_LINE(69)
										Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
										HX_STACK_LINE(69)
										Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
										HX_STACK_LINE(69)
										Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
										HX_STACK_LINE(69)
										Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
										HX_STACK_LINE(69)
										Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
										HX_STACK_LINE(69)
										Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
										HX_STACK_LINE(69)
										Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
										HX_STACK_LINE(69)
										Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
										HX_STACK_LINE(69)
										Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
										HX_STACK_LINE(69)
										Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
										HX_STACK_LINE(69)
										Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
										HX_STACK_LINE(69)
										Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
										HX_STACK_LINE(69)
										Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
										HX_STACK_LINE(69)
										Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
										HX_STACK_LINE(69)
										Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
										HX_STACK_LINE(69)
										Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
										HX_STACK_LINE(69)
										Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
										HX_STACK_LINE(69)
										Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
										HX_STACK_LINE(69)
										Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
										HX_STACK_LINE(69)
										Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
										HX_STACK_LINE(69)
										Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
										HX_STACK_LINE(69)
										Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
										HX_STACK_LINE(69)
										Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
										HX_STACK_LINE(69)
										Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
										HX_STACK_LINE(69)
										Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
										HX_STACK_LINE(69)
										Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
										HX_STACK_LINE(69)
										Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
										HX_STACK_LINE(69)
										Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
										HX_STACK_LINE(69)
										result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
										HX_STACK_LINE(69)
										result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
										HX_STACK_LINE(69)
										result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
										HX_STACK_LINE(69)
										result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
										HX_STACK_LINE(69)
										result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
										HX_STACK_LINE(69)
										result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
										HX_STACK_LINE(69)
										result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
										HX_STACK_LINE(69)
										result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
										HX_STACK_LINE(69)
										result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
										HX_STACK_LINE(69)
										result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
										HX_STACK_LINE(69)
										result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
										HX_STACK_LINE(69)
										result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
										HX_STACK_LINE(69)
										result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
										HX_STACK_LINE(69)
										result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
										HX_STACK_LINE(69)
										result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
										HX_STACK_LINE(69)
										result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
										HX_STACK_LINE(69)
										result;
									}
								}
							}
							HX_STACK_LINE(69)
							matrix = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_transformMatrix;
						}
						HX_STACK_LINE(69)
						{
							HX_STACK_LINE(69)
							Dynamic uniform = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_effect->getUniform(HX_CSTRING("viewProjection"));		HX_STACK_VAR(uniform,"uniform");
							HX_STACK_LINE(69)
							if (((uniform != null()))){
								HX_STACK_LINE(69)
								Dynamic location = uniform;		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(69)
								Dynamic v;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(69)
								{
									HX_STACK_LINE(69)
									::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
									HX_STACK_LINE(69)
									Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
									HX_STACK_LINE(69)
									v = data;
								}
								HX_STACK_LINE(69)
								::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
							}
						}
					}
					HX_STACK_LINE(71)
					{
						HX_STACK_LINE(71)
						Array< Float > matrices = mesh->skeleton->getTransformMatrices();		HX_STACK_VAR(matrices,"matrices");
						HX_STACK_LINE(71)
						{
							HX_STACK_LINE(71)
							Dynamic uniform = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_effect->getUniform(HX_CSTRING("mBones"));		HX_STACK_VAR(uniform,"uniform");
							HX_STACK_LINE(71)
							if (((uniform != null()))){
								HX_STACK_LINE(71)
								Dynamic location = uniform;		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(71)
								Dynamic v;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(71)
								{
									HX_STACK_LINE(71)
									::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrices,null(),null());		HX_STACK_VAR(f,"f");
									HX_STACK_LINE(71)
									Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
									HX_STACK_LINE(71)
									v = data;
								}
								HX_STACK_LINE(71)
								::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(73)
						{
							HX_STACK_LINE(73)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 lightPosition = ::Reflect_obj::field(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_light,HX_CSTRING("position"));		HX_STACK_VAR(lightPosition,"lightPosition");
							HX_STACK_LINE(73)
							Dynamic lightDirection = ::Reflect_obj::field(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_light,HX_CSTRING("direction"));		HX_STACK_VAR(lightDirection,"lightDirection");
							struct _Function_6_1{
								inline static bool Block( Array< ::Dynamic > &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",73,0x293abee6)
									{
										HX_STACK_LINE(73)
										::com::gamestudiohx::babylonhx::lights::DirectionalLight _this;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(73)
										_this = hx::TCast< com::gamestudiohx::babylonhx::lights::DirectionalLight >::cast(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_light);
										HX_STACK_LINE(73)
										bool ret = false;		HX_STACK_VAR(ret,"ret");
										struct _Function_7_1{
											inline static bool Block( ::com::gamestudiohx::babylonhx::lights::DirectionalLight _this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",73,0x293abee6)
												{
													HX_STACK_LINE(73)
													::com::gamestudiohx::babylonhx::tools::math::Matrix _g17 = _this->parent->getWorldMatrix();		HX_STACK_VAR(_g17,"_g17");
													HX_STACK_LINE(73)
													return (_g17 != null());
												}
												return null();
											}
										};
										HX_STACK_LINE(73)
										if (((  (((_this->parent != null()))) ? bool(_Function_7_1::Block(_this)) : bool(false) ))){
											HX_STACK_LINE(73)
											if (((_this->_transformedPosition == null()))){
												HX_STACK_LINE(73)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 _g18 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g18,"_g18");
												HX_STACK_LINE(73)
												_this->_transformedPosition = _g18;
											}
											HX_STACK_LINE(73)
											{
												HX_STACK_LINE(73)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = _this->position;		HX_STACK_VAR(vector,"vector");
												HX_STACK_LINE(73)
												::com::gamestudiohx::babylonhx::tools::math::Matrix transformation = _this->parent->getWorldMatrix();		HX_STACK_VAR(transformation,"transformation");
												HX_STACK_LINE(73)
												::com::gamestudiohx::babylonhx::tools::math::Vector3 result = _this->_transformedPosition;		HX_STACK_VAR(result,"result");
												HX_STACK_LINE(73)
												Float x = ((((vector->x * transformation->m->__get((int)0)) + (vector->y * transformation->m->__get((int)4))) + (vector->z * transformation->m->__get((int)8))) + transformation->m->__get((int)12));		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(73)
												Float y = ((((vector->x * transformation->m->__get((int)1)) + (vector->y * transformation->m->__get((int)5))) + (vector->z * transformation->m->__get((int)9))) + transformation->m->__get((int)13));		HX_STACK_VAR(y,"y");
												HX_STACK_LINE(73)
												Float z = ((((vector->x * transformation->m->__get((int)2)) + (vector->y * transformation->m->__get((int)6))) + (vector->z * transformation->m->__get((int)10))) + transformation->m->__get((int)14));		HX_STACK_VAR(z,"z");
												HX_STACK_LINE(73)
												Float w = ((((vector->x * transformation->m->__get((int)3)) + (vector->y * transformation->m->__get((int)7))) + (vector->z * transformation->m->__get((int)11))) + transformation->m->__get((int)15));		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(73)
												result->x = (Float(x) / Float(w));
												HX_STACK_LINE(73)
												result->y = (Float(y) / Float(w));
												HX_STACK_LINE(73)
												result->z = (Float(z) / Float(w));
											}
											HX_STACK_LINE(73)
											ret = true;
										}
										HX_STACK_LINE(73)
										return ret;
									}
									return null();
								}
							};
							HX_STACK_LINE(73)
							if ((_Function_6_1::Block(_g))){
								HX_STACK_LINE(73)
								lightPosition = (hx::TCast< com::gamestudiohx::babylonhx::lights::DirectionalLight >::cast(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_light))->_transformedPosition;
							}
							struct _Function_6_2{
								inline static bool Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &lightPosition,Array< ::Dynamic > &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",73,0x293abee6)
									{
										HX_STACK_LINE(73)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_cachedPosition;		HX_STACK_VAR(otherVector,"otherVector");
										HX_STACK_LINE(73)
										return (bool((bool((lightPosition->x == otherVector->x)) && bool((lightPosition->y == otherVector->y)))) && bool((lightPosition->z == otherVector->z)));
									}
									return null();
								}
							};
							HX_STACK_LINE(73)
							if (((  ((!(((bool((bool((_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_cachedPosition == null())) || bool((_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_cachedDirection == null())))) || bool(!(_Function_6_2::Block(lightPosition,_g)))))))) ? bool(!(lightDirection->__Field(HX_CSTRING("equals"),true)(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_cachedDirection))) : bool(true) ))){
								HX_STACK_LINE(73)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _g19 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(lightPosition->x,lightPosition->y,lightPosition->z);		HX_STACK_VAR(_g19,"_g19");
								HX_STACK_LINE(73)
								_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_cachedPosition = _g19;
								HX_STACK_LINE(73)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _g20 = lightDirection->__Field(HX_CSTRING("clone"),true)();		HX_STACK_VAR(_g20,"_g20");
								HX_STACK_LINE(73)
								_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_cachedDirection = _g20;
								HX_STACK_LINE(73)
								::com::gamestudiohx::babylonhx::cameras::Camera activeCamera = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_scene->activeCamera;		HX_STACK_VAR(activeCamera,"activeCamera");
								HX_STACK_LINE(73)
								{
									HX_STACK_LINE(73)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 target = ::Reflect_obj::field(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_light,HX_CSTRING("position"))->__Field(HX_CSTRING("add"),true)(lightDirection);		HX_STACK_VAR(target,"target");
									HX_STACK_LINE(73)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
									HX_STACK_LINE(73)
									::com::gamestudiohx::babylonhx::tools::math::Matrix result = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_viewMatrix;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(73)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
									HX_STACK_LINE(73)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
									HX_STACK_LINE(73)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
									HX_STACK_LINE(73)
									{
										HX_STACK_LINE(73)
										zAxis->x = (target->x - lightPosition->x);
										HX_STACK_LINE(73)
										zAxis->y = (target->y - lightPosition->y);
										HX_STACK_LINE(73)
										zAxis->z = (target->z - lightPosition->z);
									}
									HX_STACK_LINE(73)
									{
										HX_STACK_LINE(73)
										Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(73)
										if (((len != (int)0))){
											HX_STACK_LINE(73)
											Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
											HX_STACK_LINE(73)
											hx::MultEq(zAxis->x,num);
											HX_STACK_LINE(73)
											hx::MultEq(zAxis->y,num);
											HX_STACK_LINE(73)
											hx::MultEq(zAxis->z,num);
										}
									}
									HX_STACK_LINE(73)
									{
										HX_STACK_LINE(73)
										xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
										HX_STACK_LINE(73)
										xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
										HX_STACK_LINE(73)
										xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
									}
									HX_STACK_LINE(73)
									{
										HX_STACK_LINE(73)
										Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(73)
										if (((len != (int)0))){
											HX_STACK_LINE(73)
											Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
											HX_STACK_LINE(73)
											hx::MultEq(xAxis->x,num);
											HX_STACK_LINE(73)
											hx::MultEq(xAxis->y,num);
											HX_STACK_LINE(73)
											hx::MultEq(xAxis->z,num);
										}
									}
									HX_STACK_LINE(73)
									{
										HX_STACK_LINE(73)
										yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
										HX_STACK_LINE(73)
										yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
										HX_STACK_LINE(73)
										yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
									}
									HX_STACK_LINE(73)
									{
										HX_STACK_LINE(73)
										Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(73)
										if (((len != (int)0))){
											HX_STACK_LINE(73)
											Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
											HX_STACK_LINE(73)
											hx::MultEq(yAxis->x,num);
											HX_STACK_LINE(73)
											hx::MultEq(yAxis->y,num);
											HX_STACK_LINE(73)
											hx::MultEq(yAxis->z,num);
										}
									}
									HX_STACK_LINE(73)
									Float ex = -(((((xAxis->x * lightPosition->x) + (xAxis->y * lightPosition->y)) + (xAxis->z * lightPosition->z))));		HX_STACK_VAR(ex,"ex");
									HX_STACK_LINE(73)
									Float ey = -(((((yAxis->x * lightPosition->x) + (yAxis->y * lightPosition->y)) + (yAxis->z * lightPosition->z))));		HX_STACK_VAR(ey,"ey");
									HX_STACK_LINE(73)
									Float ez = -(((((zAxis->x * lightPosition->x) + (zAxis->y * lightPosition->y)) + (zAxis->z * lightPosition->z))));		HX_STACK_VAR(ez,"ez");
									HX_STACK_LINE(73)
									{
										HX_STACK_LINE(73)
										result->m[(int)0] = xAxis->x;
										HX_STACK_LINE(73)
										result->m[(int)1] = yAxis->x;
										HX_STACK_LINE(73)
										result->m[(int)2] = zAxis->x;
										HX_STACK_LINE(73)
										result->m[(int)3] = (int)0;
										HX_STACK_LINE(73)
										result->m[(int)4] = xAxis->y;
										HX_STACK_LINE(73)
										result->m[(int)5] = yAxis->y;
										HX_STACK_LINE(73)
										result->m[(int)6] = zAxis->y;
										HX_STACK_LINE(73)
										result->m[(int)7] = (int)0;
										HX_STACK_LINE(73)
										result->m[(int)8] = xAxis->z;
										HX_STACK_LINE(73)
										result->m[(int)9] = yAxis->z;
										HX_STACK_LINE(73)
										result->m[(int)10] = zAxis->z;
										HX_STACK_LINE(73)
										result->m[(int)11] = (int)0;
										HX_STACK_LINE(73)
										result->m[(int)12] = ex;
										HX_STACK_LINE(73)
										result->m[(int)13] = ey;
										HX_STACK_LINE(73)
										result->m[(int)14] = ez;
										HX_STACK_LINE(73)
										result->m[(int)15] = (int)1;
										HX_STACK_LINE(73)
										result;
									}
								}
								HX_STACK_LINE(73)
								{
									HX_STACK_LINE(73)
									Float znear = activeCamera->minZ;		HX_STACK_VAR(znear,"znear");
									HX_STACK_LINE(73)
									Float zfar = activeCamera->maxZ;		HX_STACK_VAR(zfar,"zfar");
									HX_STACK_LINE(73)
									::com::gamestudiohx::babylonhx::tools::math::Matrix result = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_projectionMatrix;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(73)
									Float _g21 = ::Math_obj::tan(((Float(::Math_obj::PI) / Float(2.0)) * 0.5));		HX_STACK_VAR(_g21,"_g21");
									HX_STACK_LINE(73)
									Float tan = (Float(1.0) / Float(_g21));		HX_STACK_VAR(tan,"tan");
									HX_STACK_LINE(73)
									result->m[(int)0] = (Float(tan) / Float(1.0));
									HX_STACK_LINE(73)
									result->m[(int)1] = result->m[(int)2] = result->m[(int)3] = 0.0;
									HX_STACK_LINE(73)
									result->m[(int)5] = tan;
									HX_STACK_LINE(73)
									result->m[(int)4] = result->m[(int)6] = result->m[(int)7] = 0.0;
									HX_STACK_LINE(73)
									result->m[(int)8] = result->m[(int)9] = 0.0;
									HX_STACK_LINE(73)
									result->m[(int)10] = (Float(-(zfar)) / Float(((znear - zfar))));
									HX_STACK_LINE(73)
									result->m[(int)11] = 1.0;
									HX_STACK_LINE(73)
									result->m[(int)12] = result->m[(int)13] = result->m[(int)15] = 0.0;
									HX_STACK_LINE(73)
									result->m[(int)14] = (Float((znear * zfar)) / Float(((znear - zfar))));
									HX_STACK_LINE(73)
									result;
								}
								HX_STACK_LINE(73)
								{
									HX_STACK_LINE(73)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _this = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_viewMatrix;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(73)
									::com::gamestudiohx::babylonhx::tools::math::Matrix other1 = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_projectionMatrix;		HX_STACK_VAR(other1,"other1");
									HX_STACK_LINE(73)
									{
										HX_STACK_LINE(73)
										Array< Float > result = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_transformMatrix->m;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(73)
										Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
										HX_STACK_LINE(73)
										Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
										HX_STACK_LINE(73)
										Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
										HX_STACK_LINE(73)
										Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
										HX_STACK_LINE(73)
										Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
										HX_STACK_LINE(73)
										Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
										HX_STACK_LINE(73)
										Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
										HX_STACK_LINE(73)
										Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
										HX_STACK_LINE(73)
										Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
										HX_STACK_LINE(73)
										Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
										HX_STACK_LINE(73)
										Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
										HX_STACK_LINE(73)
										Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
										HX_STACK_LINE(73)
										Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
										HX_STACK_LINE(73)
										Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
										HX_STACK_LINE(73)
										Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
										HX_STACK_LINE(73)
										Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
										HX_STACK_LINE(73)
										Float om0 = other1->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
										HX_STACK_LINE(73)
										Float om1 = other1->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
										HX_STACK_LINE(73)
										Float om2 = other1->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
										HX_STACK_LINE(73)
										Float om3 = other1->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
										HX_STACK_LINE(73)
										Float om4 = other1->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
										HX_STACK_LINE(73)
										Float om5 = other1->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
										HX_STACK_LINE(73)
										Float om6 = other1->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
										HX_STACK_LINE(73)
										Float om7 = other1->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
										HX_STACK_LINE(73)
										Float om8 = other1->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
										HX_STACK_LINE(73)
										Float om9 = other1->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
										HX_STACK_LINE(73)
										Float om10 = other1->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
										HX_STACK_LINE(73)
										Float om11 = other1->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
										HX_STACK_LINE(73)
										Float om12 = other1->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
										HX_STACK_LINE(73)
										Float om13 = other1->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
										HX_STACK_LINE(73)
										Float om14 = other1->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
										HX_STACK_LINE(73)
										Float om15 = other1->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
										HX_STACK_LINE(73)
										result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
										HX_STACK_LINE(73)
										result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
										HX_STACK_LINE(73)
										result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
										HX_STACK_LINE(73)
										result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
										HX_STACK_LINE(73)
										result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
										HX_STACK_LINE(73)
										result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
										HX_STACK_LINE(73)
										result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
										HX_STACK_LINE(73)
										result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
										HX_STACK_LINE(73)
										result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
										HX_STACK_LINE(73)
										result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
										HX_STACK_LINE(73)
										result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
										HX_STACK_LINE(73)
										result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
										HX_STACK_LINE(73)
										result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
										HX_STACK_LINE(73)
										result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
										HX_STACK_LINE(73)
										result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
										HX_STACK_LINE(73)
										result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
										HX_STACK_LINE(73)
										result;
									}
								}
							}
							HX_STACK_LINE(73)
							other = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_transformMatrix;
						}
						HX_STACK_LINE(73)
						{
							HX_STACK_LINE(73)
							Array< Float > result = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_worldViewProjection->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(73)
							Float tm0 = world->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(73)
							Float tm1 = world->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(73)
							Float tm2 = world->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(73)
							Float tm3 = world->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(73)
							Float tm4 = world->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(73)
							Float tm5 = world->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(73)
							Float tm6 = world->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(73)
							Float tm7 = world->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(73)
							Float tm8 = world->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(73)
							Float tm9 = world->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(73)
							Float tm10 = world->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(73)
							Float tm11 = world->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(73)
							Float tm12 = world->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(73)
							Float tm13 = world->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(73)
							Float tm14 = world->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(73)
							Float tm15 = world->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(73)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(73)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(73)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(73)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(73)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(73)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(73)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(73)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(73)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(73)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(73)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(73)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(73)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(73)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(73)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(73)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(73)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(73)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(73)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(73)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(73)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(73)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(73)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(73)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(73)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(73)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(73)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(73)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(73)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(73)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(73)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(73)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(73)
							result;
						}
					}
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						Dynamic uniform = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_effect->getUniform(HX_CSTRING("worldViewProjection"));		HX_STACK_VAR(uniform,"uniform");
						HX_STACK_LINE(74)
						if (((uniform != null()))){
							HX_STACK_LINE(74)
							Dynamic location = uniform;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(74)
							Dynamic v;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(74)
							{
								HX_STACK_LINE(74)
								::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_worldViewProjection->m,null(),null());		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(74)
								Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
								HX_STACK_LINE(74)
								v = data;
							}
							HX_STACK_LINE(74)
							::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
						}
					}
				}
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					::com::gamestudiohx::babylonhx::Engine engine1 = mesh->_scene->getEngine();		HX_STACK_VAR(engine1,"engine1");
					HX_STACK_LINE(78)
					::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer indexToBind = mesh->_indexBuffer;		HX_STACK_VAR(indexToBind,"indexToBind");
					HX_STACK_LINE(78)
					bool useTriangles = true;		HX_STACK_VAR(useTriangles,"useTriangles");
					HX_STACK_LINE(78)
					engine1->bindMultiBuffers(mesh->_vertexBuffers,indexToBind,_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator >()->_effect);
					HX_STACK_LINE(78)
					engine1->draw(useTriangles,(  ((useTriangles)) ? int(subMesh->indexStart) : int((int)0) ),(  ((useTriangles)) ? int(subMesh->indexCount) : int(subMesh->linesIndexCount) ),null());
				}
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(58)
	Dynamic renderSubMesh = Dynamic( Array_obj<Dynamic>::__new().Add( Dynamic(new _Function_1_1(_g))));		HX_STACK_VAR(renderSubMesh,"renderSubMesh");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Dynamic,renderSubMesh)
	Void run(::com::gamestudiohx::babylonhx::tools::SmartArray opaqueSubMeshes,::com::gamestudiohx::babylonhx::tools::SmartArray alphaTestSubMeshes){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",82,0x293abee6)
		HX_STACK_ARG(opaqueSubMeshes,"opaqueSubMeshes")
		HX_STACK_ARG(alphaTestSubMeshes,"alphaTestSubMeshes")
		{
			HX_STACK_LINE(83)
			{
				HX_STACK_LINE(83)
				int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(83)
				int _g2 = opaqueSubMeshes->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(83)
				while(((_g12 < _g2))){
					HX_STACK_LINE(83)
					int index = (_g12)++;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(84)
					renderSubMesh->__GetItem((int)0)(opaqueSubMeshes->data->__GetItem(index)).Cast< Void >();
				}
			}
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(87)
				int _g2 = alphaTestSubMeshes->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(87)
				while(((_g12 < _g2))){
					HX_STACK_LINE(87)
					int index = (_g12)++;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(88)
					renderSubMesh->__GetItem((int)0)(alphaTestSubMeshes->data->__GetItem(index)).Cast< Void >();
				}
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(82)
	this->_shadowMap->customRenderFunction =  Dynamic(new _Function_1_2(renderSubMesh));
	HX_STACK_LINE(93)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g24;		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(93)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(93)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(93)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(93)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(93)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(93)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(93)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(93)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(93)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(93)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(93)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(93)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(93)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(93)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(93)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(93)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(93)
		_g24 = result;
	}
	HX_STACK_LINE(93)
	this->_viewMatrix = _g24;
	HX_STACK_LINE(94)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g25;		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(94)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(94)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(94)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(94)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(94)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(94)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(94)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(94)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(94)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(94)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(94)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(94)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(94)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(94)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(94)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(94)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(94)
		_g25 = result;
	}
	HX_STACK_LINE(94)
	this->_projectionMatrix = _g25;
	HX_STACK_LINE(95)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g26;		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(95)
	{
		HX_STACK_LINE(95)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(95)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(95)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(95)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(95)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(95)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(95)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(95)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(95)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(95)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(95)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(95)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(95)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(95)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(95)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(95)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(95)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(95)
		_g26 = result;
	}
	HX_STACK_LINE(95)
	this->_transformMatrix = _g26;
	HX_STACK_LINE(96)
	::com::gamestudiohx::babylonhx::tools::math::Matrix _g27;		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(96)
		result->m[(int)0] = (int)0;
		HX_STACK_LINE(96)
		result->m[(int)1] = (int)0;
		HX_STACK_LINE(96)
		result->m[(int)2] = (int)0;
		HX_STACK_LINE(96)
		result->m[(int)3] = (int)0;
		HX_STACK_LINE(96)
		result->m[(int)4] = (int)0;
		HX_STACK_LINE(96)
		result->m[(int)5] = (int)0;
		HX_STACK_LINE(96)
		result->m[(int)6] = (int)0;
		HX_STACK_LINE(96)
		result->m[(int)7] = (int)0;
		HX_STACK_LINE(96)
		result->m[(int)8] = (int)0;
		HX_STACK_LINE(96)
		result->m[(int)9] = (int)0;
		HX_STACK_LINE(96)
		result->m[(int)10] = (int)0;
		HX_STACK_LINE(96)
		result->m[(int)11] = (int)0;
		HX_STACK_LINE(96)
		result->m[(int)12] = (int)0;
		HX_STACK_LINE(96)
		result->m[(int)13] = (int)0;
		HX_STACK_LINE(96)
		result->m[(int)14] = (int)0;
		HX_STACK_LINE(96)
		result->m[(int)15] = (int)0;
		HX_STACK_LINE(96)
		_g27 = result;
	}
	HX_STACK_LINE(96)
	this->_worldViewProjection = _g27;
	HX_STACK_LINE(98)
	this->useVarianceShadowMap = true;
}
;
	return null();
}

//ShadowGenerator_obj::~ShadowGenerator_obj() { }

Dynamic ShadowGenerator_obj::__CreateEmpty() { return  new ShadowGenerator_obj; }
hx::ObjectPtr< ShadowGenerator_obj > ShadowGenerator_obj::__new(Float mapSize,::com::gamestudiohx::babylonhx::lights::Light light)
{  hx::ObjectPtr< ShadowGenerator_obj > result = new ShadowGenerator_obj();
	result->__construct(mapSize,light);
	return result;}

Dynamic ShadowGenerator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShadowGenerator_obj > result = new ShadowGenerator_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool ShadowGenerator_obj::isReady( ::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator","isReady",0xac791324,"com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator.isReady","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",101,0x293abee6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mesh,"mesh")
	HX_STACK_LINE(102)
	Array< ::String > defines = Array_obj< ::String >::__new();		HX_STACK_VAR(defines,"defines");
	HX_STACK_LINE(104)
	if ((this->useVarianceShadowMap)){
		HX_STACK_LINE(105)
		defines->push(HX_CSTRING("#define VSM"));
	}
	HX_STACK_LINE(108)
	Array< ::String > attribs = Array_obj< ::String >::__new().Add(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(attribs,"attribs");
	HX_STACK_LINE(109)
	if (((  (((  (((mesh->skeleton != null()))) ? bool(mesh->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesIndicesKind)) : bool(false) ))) ? bool(mesh->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesWeightsKind)) : bool(false) ))){
		HX_STACK_LINE(110)
		attribs->push(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesIndicesKind);
		HX_STACK_LINE(111)
		attribs->push(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesWeightsKind);
		HX_STACK_LINE(112)
		defines->push(HX_CSTRING("#define BONES"));
		HX_STACK_LINE(113)
		defines->push((HX_CSTRING("#define BonesPerMesh ") + mesh->skeleton->bones->length));
	}
	HX_STACK_LINE(117)
	::String join = defines->join(HX_CSTRING("\n"));		HX_STACK_VAR(join,"join");
	HX_STACK_LINE(118)
	if (((this->_cachedDefines != join))){
		HX_STACK_LINE(119)
		this->_cachedDefines = join;
		HX_STACK_LINE(120)
		::com::gamestudiohx::babylonhx::materials::Effect _g = this->_scene->getEngine()->createEffect(HX_CSTRING("shadowMap"),attribs,Array_obj< ::String >::__new().Add(HX_CSTRING("world")).Add(HX_CSTRING("mBones")).Add(HX_CSTRING("viewProjection")).Add(HX_CSTRING("worldViewProjection")),Array_obj< ::String >::__new(),join,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		this->_effect = _g;
	}
	HX_STACK_LINE(126)
	return this->_effect->isReady();
}


HX_DEFINE_DYNAMIC_FUNC1(ShadowGenerator_obj,isReady,return )

::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture ShadowGenerator_obj::getShadowMap( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator","getShadowMap",0xb55c8c3b,"com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator.getShadowMap","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",130,0x293abee6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	return this->_shadowMap;
}


HX_DEFINE_DYNAMIC_FUNC0(ShadowGenerator_obj,getShadowMap,return )

::com::gamestudiohx::babylonhx::lights::Light ShadowGenerator_obj::getLight( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator","getLight",0xbd4ffaf5,"com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator.getLight","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",134,0x293abee6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	return this->_light;
}


HX_DEFINE_DYNAMIC_FUNC0(ShadowGenerator_obj,getLight,return )

::com::gamestudiohx::babylonhx::tools::math::Matrix ShadowGenerator_obj::getTransformMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator","getTransformMatrix",0xb88897ac,"com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator.getTransformMatrix","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",137,0x293abee6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 lightPosition = ::Reflect_obj::field(this->_light,HX_CSTRING("position"));		HX_STACK_VAR(lightPosition,"lightPosition");
	HX_STACK_LINE(139)
	Dynamic lightDirection = ::Reflect_obj::field(this->_light,HX_CSTRING("direction"));		HX_STACK_VAR(lightDirection,"lightDirection");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",141,0x293abee6)
			{
				HX_STACK_LINE(141)
				::com::gamestudiohx::babylonhx::lights::DirectionalLight _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(141)
				_this = hx::TCast< com::gamestudiohx::babylonhx::lights::DirectionalLight >::cast(__this->_light);
				HX_STACK_LINE(141)
				bool ret = false;		HX_STACK_VAR(ret,"ret");
				struct _Function_2_1{
					inline static bool Block( ::com::gamestudiohx::babylonhx::lights::DirectionalLight _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",141,0x293abee6)
						{
							HX_STACK_LINE(141)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _g = _this->parent->getWorldMatrix();		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(141)
							return (_g != null());
						}
						return null();
					}
				};
				HX_STACK_LINE(141)
				if (((  (((_this->parent != null()))) ? bool(_Function_2_1::Block(_this)) : bool(false) ))){
					HX_STACK_LINE(141)
					if (((_this->_transformedPosition == null()))){
						HX_STACK_LINE(141)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(141)
						_this->_transformedPosition = _g1;
					}
					HX_STACK_LINE(141)
					{
						HX_STACK_LINE(141)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = _this->position;		HX_STACK_VAR(vector,"vector");
						HX_STACK_LINE(141)
						::com::gamestudiohx::babylonhx::tools::math::Matrix transformation = _this->parent->getWorldMatrix();		HX_STACK_VAR(transformation,"transformation");
						HX_STACK_LINE(141)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 result = _this->_transformedPosition;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(141)
						Float x = ((((vector->x * transformation->m->__get((int)0)) + (vector->y * transformation->m->__get((int)4))) + (vector->z * transformation->m->__get((int)8))) + transformation->m->__get((int)12));		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(141)
						Float y = ((((vector->x * transformation->m->__get((int)1)) + (vector->y * transformation->m->__get((int)5))) + (vector->z * transformation->m->__get((int)9))) + transformation->m->__get((int)13));		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(141)
						Float z = ((((vector->x * transformation->m->__get((int)2)) + (vector->y * transformation->m->__get((int)6))) + (vector->z * transformation->m->__get((int)10))) + transformation->m->__get((int)14));		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(141)
						Float w = ((((vector->x * transformation->m->__get((int)3)) + (vector->y * transformation->m->__get((int)7))) + (vector->z * transformation->m->__get((int)11))) + transformation->m->__get((int)15));		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(141)
						result->x = (Float(x) / Float(w));
						HX_STACK_LINE(141)
						result->y = (Float(y) / Float(w));
						HX_STACK_LINE(141)
						result->z = (Float(z) / Float(w));
					}
					HX_STACK_LINE(141)
					ret = true;
				}
				HX_STACK_LINE(141)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(141)
	if ((_Function_1_1::Block(this))){
		HX_STACK_LINE(142)
		lightPosition = (hx::TCast< com::gamestudiohx::babylonhx::lights::DirectionalLight >::cast(this->_light))->_transformedPosition;
	}
	struct _Function_1_2{
		inline static bool Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &lightPosition,hx::ObjectPtr< ::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",145,0x293abee6)
			{
				HX_STACK_LINE(145)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = __this->_cachedPosition;		HX_STACK_VAR(otherVector,"otherVector");
				HX_STACK_LINE(145)
				return (bool((bool((lightPosition->x == otherVector->x)) && bool((lightPosition->y == otherVector->y)))) && bool((lightPosition->z == otherVector->z)));
			}
			return null();
		}
	};
	HX_STACK_LINE(145)
	if (((  ((!(((bool((bool((this->_cachedPosition == null())) || bool((this->_cachedDirection == null())))) || bool(!(_Function_1_2::Block(lightPosition,this)))))))) ? bool(!(lightDirection->__Field(HX_CSTRING("equals"),true)(this->_cachedDirection))) : bool(true) ))){
		HX_STACK_LINE(147)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(lightPosition->x,lightPosition->y,lightPosition->z);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(147)
		this->_cachedPosition = _g2;
		HX_STACK_LINE(148)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3 = lightDirection->__Field(HX_CSTRING("clone"),true)();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(148)
		this->_cachedDirection = _g3;
		HX_STACK_LINE(150)
		::com::gamestudiohx::babylonhx::cameras::Camera activeCamera = this->_scene->activeCamera;		HX_STACK_VAR(activeCamera,"activeCamera");
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 target = ::Reflect_obj::field(this->_light,HX_CSTRING("position"))->__Field(HX_CSTRING("add"),true)(lightDirection);		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(152)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
			HX_STACK_LINE(152)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_viewMatrix;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(152)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
			HX_STACK_LINE(152)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
			HX_STACK_LINE(152)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				zAxis->x = (target->x - lightPosition->x);
				HX_STACK_LINE(152)
				zAxis->y = (target->y - lightPosition->y);
				HX_STACK_LINE(152)
				zAxis->z = (target->z - lightPosition->z);
			}
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(152)
				if (((len != (int)0))){
					HX_STACK_LINE(152)
					Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
					HX_STACK_LINE(152)
					hx::MultEq(zAxis->x,num);
					HX_STACK_LINE(152)
					hx::MultEq(zAxis->y,num);
					HX_STACK_LINE(152)
					hx::MultEq(zAxis->z,num);
				}
			}
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
				HX_STACK_LINE(152)
				xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
				HX_STACK_LINE(152)
				xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
			}
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(152)
				if (((len != (int)0))){
					HX_STACK_LINE(152)
					Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
					HX_STACK_LINE(152)
					hx::MultEq(xAxis->x,num);
					HX_STACK_LINE(152)
					hx::MultEq(xAxis->y,num);
					HX_STACK_LINE(152)
					hx::MultEq(xAxis->z,num);
				}
			}
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
				HX_STACK_LINE(152)
				yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
				HX_STACK_LINE(152)
				yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
			}
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(152)
				if (((len != (int)0))){
					HX_STACK_LINE(152)
					Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
					HX_STACK_LINE(152)
					hx::MultEq(yAxis->x,num);
					HX_STACK_LINE(152)
					hx::MultEq(yAxis->y,num);
					HX_STACK_LINE(152)
					hx::MultEq(yAxis->z,num);
				}
			}
			HX_STACK_LINE(152)
			Float ex = -(((((xAxis->x * lightPosition->x) + (xAxis->y * lightPosition->y)) + (xAxis->z * lightPosition->z))));		HX_STACK_VAR(ex,"ex");
			HX_STACK_LINE(152)
			Float ey = -(((((yAxis->x * lightPosition->x) + (yAxis->y * lightPosition->y)) + (yAxis->z * lightPosition->z))));		HX_STACK_VAR(ey,"ey");
			HX_STACK_LINE(152)
			Float ez = -(((((zAxis->x * lightPosition->x) + (zAxis->y * lightPosition->y)) + (zAxis->z * lightPosition->z))));		HX_STACK_VAR(ez,"ez");
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				result->m[(int)0] = xAxis->x;
				HX_STACK_LINE(152)
				result->m[(int)1] = yAxis->x;
				HX_STACK_LINE(152)
				result->m[(int)2] = zAxis->x;
				HX_STACK_LINE(152)
				result->m[(int)3] = (int)0;
				HX_STACK_LINE(152)
				result->m[(int)4] = xAxis->y;
				HX_STACK_LINE(152)
				result->m[(int)5] = yAxis->y;
				HX_STACK_LINE(152)
				result->m[(int)6] = zAxis->y;
				HX_STACK_LINE(152)
				result->m[(int)7] = (int)0;
				HX_STACK_LINE(152)
				result->m[(int)8] = xAxis->z;
				HX_STACK_LINE(152)
				result->m[(int)9] = yAxis->z;
				HX_STACK_LINE(152)
				result->m[(int)10] = zAxis->z;
				HX_STACK_LINE(152)
				result->m[(int)11] = (int)0;
				HX_STACK_LINE(152)
				result->m[(int)12] = ex;
				HX_STACK_LINE(152)
				result->m[(int)13] = ey;
				HX_STACK_LINE(152)
				result->m[(int)14] = ez;
				HX_STACK_LINE(152)
				result->m[(int)15] = (int)1;
				HX_STACK_LINE(152)
				result;
			}
		}
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			Float znear = activeCamera->minZ;		HX_STACK_VAR(znear,"znear");
			HX_STACK_LINE(153)
			Float zfar = activeCamera->maxZ;		HX_STACK_VAR(zfar,"zfar");
			HX_STACK_LINE(153)
			::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_projectionMatrix;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(153)
			Float _g4 = ::Math_obj::tan(((Float(::Math_obj::PI) / Float(2.0)) * 0.5));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(153)
			Float tan = (Float(1.0) / Float(_g4));		HX_STACK_VAR(tan,"tan");
			HX_STACK_LINE(153)
			result->m[(int)0] = (Float(tan) / Float(1.0));
			HX_STACK_LINE(153)
			result->m[(int)1] = result->m[(int)2] = result->m[(int)3] = 0.0;
			HX_STACK_LINE(153)
			result->m[(int)5] = tan;
			HX_STACK_LINE(153)
			result->m[(int)4] = result->m[(int)6] = result->m[(int)7] = 0.0;
			HX_STACK_LINE(153)
			result->m[(int)8] = result->m[(int)9] = 0.0;
			HX_STACK_LINE(153)
			result->m[(int)10] = (Float(-(zfar)) / Float(((znear - zfar))));
			HX_STACK_LINE(153)
			result->m[(int)11] = 1.0;
			HX_STACK_LINE(153)
			result->m[(int)12] = result->m[(int)13] = result->m[(int)15] = 0.0;
			HX_STACK_LINE(153)
			result->m[(int)14] = (Float((znear * zfar)) / Float(((znear - zfar))));
			HX_STACK_LINE(153)
			result;
		}
		HX_STACK_LINE(155)
		{
			HX_STACK_LINE(155)
			::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_viewMatrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(155)
			::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_projectionMatrix;		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(155)
			{
				HX_STACK_LINE(155)
				Array< Float > result = this->_transformMatrix->m;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(155)
				Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
				HX_STACK_LINE(155)
				Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
				HX_STACK_LINE(155)
				Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
				HX_STACK_LINE(155)
				Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
				HX_STACK_LINE(155)
				Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
				HX_STACK_LINE(155)
				Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
				HX_STACK_LINE(155)
				Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
				HX_STACK_LINE(155)
				Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
				HX_STACK_LINE(155)
				Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
				HX_STACK_LINE(155)
				Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
				HX_STACK_LINE(155)
				Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
				HX_STACK_LINE(155)
				Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
				HX_STACK_LINE(155)
				Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
				HX_STACK_LINE(155)
				Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
				HX_STACK_LINE(155)
				Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
				HX_STACK_LINE(155)
				Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
				HX_STACK_LINE(155)
				Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
				HX_STACK_LINE(155)
				Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
				HX_STACK_LINE(155)
				Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
				HX_STACK_LINE(155)
				Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
				HX_STACK_LINE(155)
				Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
				HX_STACK_LINE(155)
				Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
				HX_STACK_LINE(155)
				Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
				HX_STACK_LINE(155)
				Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
				HX_STACK_LINE(155)
				Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
				HX_STACK_LINE(155)
				Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
				HX_STACK_LINE(155)
				Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
				HX_STACK_LINE(155)
				Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
				HX_STACK_LINE(155)
				Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
				HX_STACK_LINE(155)
				Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
				HX_STACK_LINE(155)
				Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
				HX_STACK_LINE(155)
				Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
				HX_STACK_LINE(155)
				result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
				HX_STACK_LINE(155)
				result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
				HX_STACK_LINE(155)
				result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
				HX_STACK_LINE(155)
				result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
				HX_STACK_LINE(155)
				result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
				HX_STACK_LINE(155)
				result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
				HX_STACK_LINE(155)
				result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
				HX_STACK_LINE(155)
				result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
				HX_STACK_LINE(155)
				result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
				HX_STACK_LINE(155)
				result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
				HX_STACK_LINE(155)
				result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
				HX_STACK_LINE(155)
				result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
				HX_STACK_LINE(155)
				result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
				HX_STACK_LINE(155)
				result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
				HX_STACK_LINE(155)
				result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
				HX_STACK_LINE(155)
				result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
				HX_STACK_LINE(155)
				result;
			}
		}
	}
	HX_STACK_LINE(158)
	return this->_transformMatrix;
}


HX_DEFINE_DYNAMIC_FUNC0(ShadowGenerator_obj,getTransformMatrix,return )

Void ShadowGenerator_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator","dispose",0xe4854faa,"com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator.dispose","com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.hx",161,0x293abee6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(162)
		this->_shadowMap->dispose();
		HX_STACK_LINE(163)
		this->_shadowMap = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShadowGenerator_obj,dispose,(void))


ShadowGenerator_obj::ShadowGenerator_obj()
{
}

void ShadowGenerator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShadowGenerator);
	HX_MARK_MEMBER_NAME(_light,"_light");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_shadowMap,"_shadowMap");
	HX_MARK_MEMBER_NAME(_viewMatrix,"_viewMatrix");
	HX_MARK_MEMBER_NAME(_projectionMatrix,"_projectionMatrix");
	HX_MARK_MEMBER_NAME(_transformMatrix,"_transformMatrix");
	HX_MARK_MEMBER_NAME(_worldViewProjection,"_worldViewProjection");
	HX_MARK_MEMBER_NAME(useVarianceShadowMap,"useVarianceShadowMap");
	HX_MARK_MEMBER_NAME(_cachedDefines,"_cachedDefines");
	HX_MARK_MEMBER_NAME(_cachedPosition,"_cachedPosition");
	HX_MARK_MEMBER_NAME(_cachedDirection,"_cachedDirection");
	HX_MARK_MEMBER_NAME(_effect,"_effect");
	HX_MARK_END_CLASS();
}

void ShadowGenerator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_light,"_light");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_shadowMap,"_shadowMap");
	HX_VISIT_MEMBER_NAME(_viewMatrix,"_viewMatrix");
	HX_VISIT_MEMBER_NAME(_projectionMatrix,"_projectionMatrix");
	HX_VISIT_MEMBER_NAME(_transformMatrix,"_transformMatrix");
	HX_VISIT_MEMBER_NAME(_worldViewProjection,"_worldViewProjection");
	HX_VISIT_MEMBER_NAME(useVarianceShadowMap,"useVarianceShadowMap");
	HX_VISIT_MEMBER_NAME(_cachedDefines,"_cachedDefines");
	HX_VISIT_MEMBER_NAME(_cachedPosition,"_cachedPosition");
	HX_VISIT_MEMBER_NAME(_cachedDirection,"_cachedDirection");
	HX_VISIT_MEMBER_NAME(_effect,"_effect");
}

Dynamic ShadowGenerator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_light") ) { return _light; }
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_effect") ) { return _effect; }
		if (HX_FIELD_EQ(inName,"isReady") ) { return isReady_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getLight") ) { return getLight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_shadowMap") ) { return _shadowMap; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_viewMatrix") ) { return _viewMatrix; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getShadowMap") ) { return getShadowMap_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_cachedDefines") ) { return _cachedDefines; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_cachedPosition") ) { return _cachedPosition; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_transformMatrix") ) { return _transformMatrix; }
		if (HX_FIELD_EQ(inName,"_cachedDirection") ) { return _cachedDirection; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_projectionMatrix") ) { return _projectionMatrix; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getTransformMatrix") ) { return getTransformMatrix_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_worldViewProjection") ) { return _worldViewProjection; }
		if (HX_FIELD_EQ(inName,"useVarianceShadowMap") ) { return useVarianceShadowMap; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShadowGenerator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_light") ) { _light=inValue.Cast< ::com::gamestudiohx::babylonhx::lights::Light >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::gamestudiohx::babylonhx::Scene >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_effect") ) { _effect=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::Effect >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_shadowMap") ) { _shadowMap=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_viewMatrix") ) { _viewMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_cachedDefines") ) { _cachedDefines=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_cachedPosition") ) { _cachedPosition=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_transformMatrix") ) { _transformMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedDirection") ) { _cachedDirection=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_projectionMatrix") ) { _projectionMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_worldViewProjection") ) { _worldViewProjection=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useVarianceShadowMap") ) { useVarianceShadowMap=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShadowGenerator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_light"));
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("_shadowMap"));
	outFields->push(HX_CSTRING("_viewMatrix"));
	outFields->push(HX_CSTRING("_projectionMatrix"));
	outFields->push(HX_CSTRING("_transformMatrix"));
	outFields->push(HX_CSTRING("_worldViewProjection"));
	outFields->push(HX_CSTRING("useVarianceShadowMap"));
	outFields->push(HX_CSTRING("_cachedDefines"));
	outFields->push(HX_CSTRING("_cachedPosition"));
	outFields->push(HX_CSTRING("_cachedDirection"));
	outFields->push(HX_CSTRING("_effect"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::lights::Light*/ ,(int)offsetof(ShadowGenerator_obj,_light),HX_CSTRING("_light")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Scene*/ ,(int)offsetof(ShadowGenerator_obj,_scene),HX_CSTRING("_scene")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture*/ ,(int)offsetof(ShadowGenerator_obj,_shadowMap),HX_CSTRING("_shadowMap")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(ShadowGenerator_obj,_viewMatrix),HX_CSTRING("_viewMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(ShadowGenerator_obj,_projectionMatrix),HX_CSTRING("_projectionMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(ShadowGenerator_obj,_transformMatrix),HX_CSTRING("_transformMatrix")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(ShadowGenerator_obj,_worldViewProjection),HX_CSTRING("_worldViewProjection")},
	{hx::fsBool,(int)offsetof(ShadowGenerator_obj,useVarianceShadowMap),HX_CSTRING("useVarianceShadowMap")},
	{hx::fsString,(int)offsetof(ShadowGenerator_obj,_cachedDefines),HX_CSTRING("_cachedDefines")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(ShadowGenerator_obj,_cachedPosition),HX_CSTRING("_cachedPosition")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(ShadowGenerator_obj,_cachedDirection),HX_CSTRING("_cachedDirection")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::Effect*/ ,(int)offsetof(ShadowGenerator_obj,_effect),HX_CSTRING("_effect")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_light"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_shadowMap"),
	HX_CSTRING("_viewMatrix"),
	HX_CSTRING("_projectionMatrix"),
	HX_CSTRING("_transformMatrix"),
	HX_CSTRING("_worldViewProjection"),
	HX_CSTRING("useVarianceShadowMap"),
	HX_CSTRING("_cachedDefines"),
	HX_CSTRING("_cachedPosition"),
	HX_CSTRING("_cachedDirection"),
	HX_CSTRING("_effect"),
	HX_CSTRING("isReady"),
	HX_CSTRING("getShadowMap"),
	HX_CSTRING("getLight"),
	HX_CSTRING("getTransformMatrix"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShadowGenerator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShadowGenerator_obj::__mClass,"__mClass");
};

#endif

Class ShadowGenerator_obj::__mClass;

void ShadowGenerator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator"), hx::TCanCast< ShadowGenerator_obj> ,sStaticFields,sMemberFields,
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

void ShadowGenerator_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace lights
} // end namespace shadows
