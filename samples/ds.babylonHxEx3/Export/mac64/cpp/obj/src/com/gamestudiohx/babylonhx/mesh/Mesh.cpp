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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingBox
#include <com/gamestudiohx/babylonhx/culling/BoundingBox.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingInfo
#include <com/gamestudiohx/babylonhx/culling/BoundingInfo.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Effect
#include <com/gamestudiohx/babylonhx/materials/Effect.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Material
#include <com/gamestudiohx/babylonhx/materials/Material.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_MultiMaterial
#include <com/gamestudiohx/babylonhx/materials/MultiMaterial.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_BabylonGLBuffer
#include <com/gamestudiohx/babylonhx/mesh/BabylonGLBuffer.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_Geometry
#include <com/gamestudiohx/babylonhx/mesh/Geometry.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_IGetSetVerticesData
#include <com/gamestudiohx/babylonhx/mesh/IGetSetVerticesData.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_InstancedMesh
#include <com/gamestudiohx/babylonhx/mesh/InstancedMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_InstancesBatch
#include <com/gamestudiohx/babylonhx/mesh/InstancesBatch.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_Mesh
#include <com/gamestudiohx/babylonhx/mesh/Mesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_SubMesh
#include <com/gamestudiohx/babylonhx/mesh/SubMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_VertexBuffer
#include <com/gamestudiohx/babylonhx/mesh/VertexBuffer.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_VertexData
#include <com/gamestudiohx/babylonhx/mesh/VertexData.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_particles_ParticleSystem
#include <com/gamestudiohx/babylonhx/particles/ParticleSystem.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_IAnimatable
#include <com/gamestudiohx/babylonhx/tools/IAnimatable.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_Tools
#include <com/gamestudiohx/babylonhx/tools/Tools.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Plane
#include <com/gamestudiohx/babylonhx/tools/math/Plane.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Quaternion
#include <com/gamestudiohx/babylonhx/tools/math/Quaternion.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_utils_ArrayBufferView
#include <openfl/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_utils_Float32Array
#include <openfl/utils/Float32Array.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{

Void Mesh_obj::__construct(::String name,::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","new",0x6411d5ae,"com.gamestudiohx.babylonhx.mesh.Mesh.new","com/gamestudiohx/babylonhx/mesh/Mesh.hx",33,0xf4cec482)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(51)
	this->_instancesBufferSize = (int)2048;
	HX_STACK_LINE(48)
	this->_batchCache = ::com::gamestudiohx::babylonhx::mesh::InstancesBatch_obj::__new();
	HX_STACK_LINE(47)
	this->_renderIdForInstances = (int)-1;
	HX_STACK_LINE(36)
	this->instances = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(35)
	this->delayLoadState = ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_NONE;
	HX_STACK_LINE(54)
	super::__construct(name,scene);
}
;
	return null();
}

//Mesh_obj::~Mesh_obj() { }

Dynamic Mesh_obj::__CreateEmpty() { return  new Mesh_obj; }
hx::ObjectPtr< Mesh_obj > Mesh_obj::__new(::String name,::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< Mesh_obj > result = new Mesh_obj();
	result->__construct(name,scene);
	return result;}

Dynamic Mesh_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mesh_obj > result = new Mesh_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Mesh_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::gamestudiohx::babylonhx::mesh::IGetSetVerticesData_obj)) return operator ::com::gamestudiohx::babylonhx::mesh::IGetSetVerticesData_obj *();
	return super::__ToInterface(inType);
}

int Mesh_obj::getTotalVertices( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","getTotalVertices",0x5aec1f59,"com.gamestudiohx.babylonhx.mesh.Mesh.getTotalVertices","com/gamestudiohx/babylonhx/mesh/Mesh.hx",57,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	if (((this->_geometry == null()))){
		HX_STACK_LINE(59)
		return (int)0;
	}
	HX_STACK_LINE(61)
	return this->_geometry->getTotalVertices();
}


Array< Float > Mesh_obj::getVerticesData( ::String kind){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","getVerticesData",0xdc264ac7,"com.gamestudiohx.babylonhx.mesh.Mesh.getVerticesData","com/gamestudiohx/babylonhx/mesh/Mesh.hx",64,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(kind,"kind")
	HX_STACK_LINE(65)
	if (((this->_geometry == null()))){
		HX_STACK_LINE(66)
		return null();
	}
	HX_STACK_LINE(68)
	return this->_geometry->getVerticesData(kind);
}


::com::gamestudiohx::babylonhx::mesh::VertexBuffer Mesh_obj::getVertexBuffer( ::String kind){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","getVertexBuffer",0x9f6bc788,"com.gamestudiohx.babylonhx.mesh.Mesh.getVertexBuffer","com/gamestudiohx/babylonhx/mesh/Mesh.hx",71,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(kind,"kind")
	HX_STACK_LINE(72)
	if (((this->_geometry == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	HX_STACK_LINE(75)
	return this->_geometry->getVertexBuffer(kind);
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,getVertexBuffer,return )

bool Mesh_obj::isVerticesDataPresent( ::String kind){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","isVerticesDataPresent",0xad80457c,"com.gamestudiohx.babylonhx.mesh.Mesh.isVerticesDataPresent","com/gamestudiohx/babylonhx/mesh/Mesh.hx",78,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(kind,"kind")
	HX_STACK_LINE(79)
	if (((this->_geometry == null()))){
		HX_STACK_LINE(80)
		if (((this->_delayInfo->length > (int)0))){
			HX_STACK_LINE(81)
			int _g = this->_delayInfo->indexOf(kind,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(81)
			return (_g != (int)-1);
		}
		HX_STACK_LINE(83)
		return false;
	}
	HX_STACK_LINE(85)
	return this->_geometry->isVerticesDataPresent(kind);
}


Array< ::String > Mesh_obj::getVerticesDataKinds( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","getVerticesDataKinds",0xc89afc58,"com.gamestudiohx.babylonhx.mesh.Mesh.getVerticesDataKinds","com/gamestudiohx/babylonhx/mesh/Mesh.hx",88,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	if (((this->_geometry == null()))){
		HX_STACK_LINE(90)
		Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(91)
		if (((this->_delayInfo->length > (int)0))){
			HX_STACK_LINE(94)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(94)
			Array< ::String > _g1 = this->_delayInfo;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(94)
			while((true)){
				HX_STACK_LINE(94)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(94)
					break;
				}
				HX_STACK_LINE(94)
				::String kind = _g1->__get(_g);		HX_STACK_VAR(kind,"kind");
				HX_STACK_LINE(94)
				++(_g);
				HX_STACK_LINE(95)
				result->push(kind);
			}
		}
		HX_STACK_LINE(99)
		return result;
	}
	HX_STACK_LINE(101)
	return this->_geometry->getVerticesDataKinds();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getVerticesDataKinds,return )

int Mesh_obj::getTotalIndices( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","getTotalIndices",0xbb14f3c7,"com.gamestudiohx.babylonhx.mesh.Mesh.getTotalIndices","com/gamestudiohx/babylonhx/mesh/Mesh.hx",104,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	if (((this->_geometry == null()))){
		HX_STACK_LINE(106)
		return (int)0;
	}
	HX_STACK_LINE(108)
	return this->_geometry->getTotalIndices();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getTotalIndices,return )

Array< int > Mesh_obj::getIndices( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","getIndices",0x4c512da3,"com.gamestudiohx.babylonhx.mesh.Mesh.getIndices","com/gamestudiohx/babylonhx/mesh/Mesh.hx",111,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	if (((this->_geometry == null()))){
		HX_STACK_LINE(113)
		return Array_obj< int >::__new();
	}
	HX_STACK_LINE(115)
	return this->_geometry->getIndices();
}


bool Mesh_obj::isReady( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","isReady",0x88260867,"com.gamestudiohx.babylonhx.mesh.Mesh.isReady","com/gamestudiohx/babylonhx/mesh/Mesh.hx",118,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	if (((this->delayLoadState == ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_LOADING))){
		HX_STACK_LINE(120)
		return false;
	}
	HX_STACK_LINE(123)
	return this->super::isReady();
}


Void Mesh_obj::_preActivate( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","_preActivate",0xa0a821e9,"com.gamestudiohx.babylonhx.mesh.Mesh._preActivate","com/gamestudiohx/babylonhx/mesh/Mesh.hx",134,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		this->_visibleInstances = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,_preActivate,(void))

Void Mesh_obj::_registerInstanceForRenderId( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh instance,int renderId){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","_registerInstanceForRenderId",0x9be2a7b5,"com.gamestudiohx.babylonhx.mesh.Mesh._registerInstanceForRenderId","com/gamestudiohx/babylonhx/mesh/Mesh.hx",137,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instance,"instance")
		HX_STACK_ARG(renderId,"renderId")
		HX_STACK_LINE(138)
		if (((this->_visibleInstances != null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",139,0xf4cec482)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(139)
			this->_visibleInstances = _Function_2_1::Block();
			HX_STACK_LINE(140)
			this->_visibleInstances->__FieldRef(HX_CSTRING("defaultRenderId")) = renderId;
			HX_STACK_LINE(141)
			this->_visibleInstances->__FieldRef(HX_CSTRING("selfDefaultRenderId")) = this->_renderId;
		}
		HX_STACK_LINE(144)
		if (((this->_visibleInstances->__GetItem(renderId) != null()))){
			HX_STACK_LINE(145)
			hx::IndexRef((this->_visibleInstances).mPtr,renderId) = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(148)
		this->_visibleInstances->__GetItem(renderId)->__Field(HX_CSTRING("push"),true)(instance);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Mesh_obj,_registerInstanceForRenderId,(void))

Void Mesh_obj::refreshBoundingInfo( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","refreshBoundingInfo",0x15fc81bb,"com.gamestudiohx.babylonhx.mesh.Mesh.refreshBoundingInfo","com/gamestudiohx/babylonhx/mesh/Mesh.hx",151,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(152)
		Array< Float > data = this->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(154)
		if (((data->length > (int)0))){
			HX_STACK_LINE(155)
			Dynamic extend;		HX_STACK_VAR(extend,"extend");
			HX_STACK_LINE(155)
			{
				HX_STACK_LINE(155)
				int count = this->getTotalVertices();		HX_STACK_VAR(count,"count");
				HX_STACK_LINE(155)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(minimum,"minimum");
				HX_STACK_LINE(155)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY);		HX_STACK_VAR(maximum,"maximum");
				HX_STACK_LINE(155)
				{
					HX_STACK_LINE(155)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(155)
					int _g = count;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(155)
					while((true)){
						HX_STACK_LINE(155)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(155)
							break;
						}
						HX_STACK_LINE(155)
						int index = (_g1)++;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(155)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 current = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data->__get((index * (int)3)),data->__get(((index * (int)3) + (int)1)),data->__get(((index * (int)3) + (int)2)));		HX_STACK_VAR(current,"current");
						HX_STACK_LINE(155)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(155)
						{
							HX_STACK_LINE(155)
							Float x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(155)
							if (((current->x < minimum->x))){
								HX_STACK_LINE(155)
								x = current->x;
							}
							else{
								HX_STACK_LINE(155)
								x = minimum->x;
							}
							HX_STACK_LINE(155)
							Float y;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(155)
							if (((current->y < minimum->y))){
								HX_STACK_LINE(155)
								y = current->y;
							}
							else{
								HX_STACK_LINE(155)
								y = minimum->y;
							}
							HX_STACK_LINE(155)
							Float z;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(155)
							if (((current->z < minimum->z))){
								HX_STACK_LINE(155)
								z = current->z;
							}
							else{
								HX_STACK_LINE(155)
								z = minimum->z;
							}
							HX_STACK_LINE(155)
							_g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
						}
						HX_STACK_LINE(155)
						minimum = _g2;
						HX_STACK_LINE(155)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(155)
						{
							HX_STACK_LINE(155)
							Float x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(155)
							if (((current->x > maximum->x))){
								HX_STACK_LINE(155)
								x = current->x;
							}
							else{
								HX_STACK_LINE(155)
								x = maximum->x;
							}
							HX_STACK_LINE(155)
							Float y;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(155)
							if (((current->y > maximum->y))){
								HX_STACK_LINE(155)
								y = current->y;
							}
							else{
								HX_STACK_LINE(155)
								y = maximum->y;
							}
							HX_STACK_LINE(155)
							Float z;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(155)
							if (((current->z > maximum->z))){
								HX_STACK_LINE(155)
								z = current->z;
							}
							else{
								HX_STACK_LINE(155)
								z = maximum->z;
							}
							HX_STACK_LINE(155)
							_g11 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
						}
						HX_STACK_LINE(155)
						maximum = _g11;
					}
				}
				struct _Function_3_1{
					inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 &maximum){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",155,0xf4cec482)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("minimum") , minimum,false);
							__result->Add(HX_CSTRING("maximum") , maximum,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(155)
				extend = _Function_3_1::Block(minimum,maximum);
			}
			HX_STACK_LINE(156)
			::com::gamestudiohx::babylonhx::culling::BoundingInfo _g2 = ::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__new(extend->__Field(HX_CSTRING("minimum"),true),extend->__Field(HX_CSTRING("maximum"),true));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(156)
			this->_boundingInfo = _g2;
		}
		HX_STACK_LINE(159)
		if (((this->subMeshes->length > (int)0))){
			HX_STACK_LINE(162)
			int index = (int)0;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(163)
			while((true)){
				HX_STACK_LINE(163)
				if ((!(((index < this->subMeshes->length))))){
					HX_STACK_LINE(163)
					break;
				}
				HX_STACK_LINE(164)
				{
					HX_STACK_LINE(164)
					::com::gamestudiohx::babylonhx::mesh::SubMesh _this = this->subMeshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(164)
					Array< Float > data1 = _this->_renderingMesh->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(164)
					if (((data1 != null()))){
						HX_STACK_LINE(164)
						Dynamic extend;		HX_STACK_VAR(extend,"extend");
						HX_STACK_LINE(164)
						{
							HX_STACK_LINE(164)
							int start = _this->verticesStart;		HX_STACK_VAR(start,"start");
							HX_STACK_LINE(164)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(minimum,"minimum");
							HX_STACK_LINE(164)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY);		HX_STACK_VAR(maximum,"maximum");
							HX_STACK_LINE(164)
							{
								HX_STACK_LINE(164)
								int _g1 = start;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(164)
								int _g = (start + _this->verticesCount);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(164)
								while((true)){
									HX_STACK_LINE(164)
									if ((!(((_g1 < _g))))){
										HX_STACK_LINE(164)
										break;
									}
									HX_STACK_LINE(164)
									int index1 = (_g1)++;		HX_STACK_VAR(index1,"index1");
									HX_STACK_LINE(164)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 current = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data1->__get((index1 * (int)3)),data1->__get(((index1 * (int)3) + (int)1)),data1->__get(((index1 * (int)3) + (int)2)));		HX_STACK_VAR(current,"current");
									HX_STACK_LINE(164)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3;		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(164)
									{
										HX_STACK_LINE(164)
										Float x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(164)
										if (((current->x < minimum->x))){
											HX_STACK_LINE(164)
											x = current->x;
										}
										else{
											HX_STACK_LINE(164)
											x = minimum->x;
										}
										HX_STACK_LINE(164)
										Float y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(164)
										if (((current->y < minimum->y))){
											HX_STACK_LINE(164)
											y = current->y;
										}
										else{
											HX_STACK_LINE(164)
											y = minimum->y;
										}
										HX_STACK_LINE(164)
										Float z;		HX_STACK_VAR(z,"z");
										HX_STACK_LINE(164)
										if (((current->z < minimum->z))){
											HX_STACK_LINE(164)
											z = current->z;
										}
										else{
											HX_STACK_LINE(164)
											z = minimum->z;
										}
										HX_STACK_LINE(164)
										_g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
									}
									HX_STACK_LINE(164)
									minimum = _g3;
									HX_STACK_LINE(164)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4;		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(164)
									{
										HX_STACK_LINE(164)
										Float x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(164)
										if (((current->x > maximum->x))){
											HX_STACK_LINE(164)
											x = current->x;
										}
										else{
											HX_STACK_LINE(164)
											x = maximum->x;
										}
										HX_STACK_LINE(164)
										Float y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(164)
										if (((current->y > maximum->y))){
											HX_STACK_LINE(164)
											y = current->y;
										}
										else{
											HX_STACK_LINE(164)
											y = maximum->y;
										}
										HX_STACK_LINE(164)
										Float z;		HX_STACK_VAR(z,"z");
										HX_STACK_LINE(164)
										if (((current->z > maximum->z))){
											HX_STACK_LINE(164)
											z = current->z;
										}
										else{
											HX_STACK_LINE(164)
											z = maximum->z;
										}
										HX_STACK_LINE(164)
										_g4 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
									}
									HX_STACK_LINE(164)
									maximum = _g4;
								}
							}
							struct _Function_6_1{
								inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 &maximum){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",164,0xf4cec482)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("minimum") , minimum,false);
										__result->Add(HX_CSTRING("maximum") , maximum,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(164)
							extend = _Function_6_1::Block(minimum,maximum);
						}
						HX_STACK_LINE(164)
						::com::gamestudiohx::babylonhx::culling::BoundingInfo _g5 = ::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__new(extend->__Field(HX_CSTRING("minimum"),true),extend->__Field(HX_CSTRING("maximum"),true));		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(164)
						_this->_boundingInfo = _g5;
					}
				}
				HX_STACK_LINE(165)
				(index)++;
			}
		}
		HX_STACK_LINE(170)
		if (((this->_boundingInfo != null()))){
			HX_STACK_LINE(170)
			Float _g6 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(170)
			this->_scaleFactor = _g6;
			HX_STACK_LINE(170)
			Float _g7 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(170)
			this->_scaleFactor = _g7;
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",170,0xf4cec482)
					{
						HX_STACK_LINE(170)
						Dynamic _g8 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(170)
						return (_g8 != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(170)
			if (((  (((this->parent != null()))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(170)
				Dynamic _g9 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(170)
				Float _g10 = (this->_scaleFactor * _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(170)
				this->_scaleFactor = _g10;
			}
			HX_STACK_LINE(170)
			this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(170)
				int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(170)
				while((true)){
					HX_STACK_LINE(170)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(170)
						break;
					}
					HX_STACK_LINE(170)
					int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
					HX_STACK_LINE(170)
					::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
					HX_STACK_LINE(170)
					subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,refreshBoundingInfo,(void))

::com::gamestudiohx::babylonhx::mesh::SubMesh Mesh_obj::_createGlobalSubMesh( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","_createGlobalSubMesh",0x30e58dc1,"com.gamestudiohx.babylonhx.mesh.Mesh._createGlobalSubMesh","com/gamestudiohx/babylonhx/mesh/Mesh.hx",173,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(174)
	int totalVertices = this->getTotalVertices();		HX_STACK_VAR(totalVertices,"totalVertices");
	HX_STACK_LINE(176)
	if (((bool((totalVertices == (int)0)) || bool((this->getIndices()->length == (int)0))))){
		HX_STACK_LINE(177)
		return null();
	}
	HX_STACK_LINE(180)
	this->releaseSubMeshes();
	HX_STACK_LINE(181)
	int _g = this->getTotalIndices();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(181)
	return ::com::gamestudiohx::babylonhx::mesh::SubMesh_obj::__new((int)0,(int)0,totalVertices,(int)0,_g,hx::ObjectPtr<OBJ_>(this),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,_createGlobalSubMesh,return )

Void Mesh_obj::subdivide( Float count){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","subdivide",0xede3ecc7,"com.gamestudiohx.babylonhx.mesh.Mesh.subdivide","com/gamestudiohx/babylonhx/mesh/Mesh.hx",184,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(185)
		if (((count < (int)1))){
			HX_STACK_LINE(186)
			return null();
		}
		HX_STACK_LINE(189)
		int totalIndices = this->getTotalIndices();		HX_STACK_VAR(totalIndices,"totalIndices");
		HX_STACK_LINE(190)
		int _g = ::Std_obj::_int((Float(totalIndices) / Float(count)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(190)
		int subdivisionSize = (int(_g) | int((int)0));		HX_STACK_VAR(subdivisionSize,"subdivisionSize");
		HX_STACK_LINE(191)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(194)
		while((true)){
			HX_STACK_LINE(194)
			if ((!(((hx::Mod(subdivisionSize,(int)3) != (int)0))))){
				HX_STACK_LINE(194)
				break;
			}
			HX_STACK_LINE(195)
			(subdivisionSize)++;
		}
		HX_STACK_LINE(198)
		this->releaseSubMeshes();
		HX_STACK_LINE(201)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(202)
		while((true)){
			HX_STACK_LINE(202)
			if ((!(((index < count))))){
				HX_STACK_LINE(202)
				break;
			}
			HX_STACK_LINE(203)
			if (((offset >= totalIndices))){
				HX_STACK_LINE(204)
				break;
			}
			HX_STACK_LINE(207)
			Float _g1 = ::Math_obj::min(subdivisionSize,(totalIndices - offset));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(207)
			int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(207)
			::com::gamestudiohx::babylonhx::mesh::SubMesh_obj::CreateFromIndices((int)0,offset,_g2,hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(209)
			hx::AddEq(offset,subdivisionSize);
			HX_STACK_LINE(210)
			(index)++;
		}
		HX_STACK_LINE(214)
		this->synchronizeInstances();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,subdivide,(void))

Void Mesh_obj::setVerticesData( ::String _tmp_kind,Array< Float > _tmp_data,Dynamic updatable){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","setVerticesData",0xd7f1c7d3,"com.gamestudiohx.babylonhx.mesh.Mesh.setVerticesData","com/gamestudiohx/babylonhx/mesh/Mesh.hx",217,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_tmp_kind,"_tmp_kind")
		HX_STACK_ARG(_tmp_data,"_tmp_data")
		HX_STACK_ARG(updatable,"updatable")
		HX_STACK_LINE(218)
		Dynamic kind = _tmp_kind;		HX_STACK_VAR(kind,"kind");
		HX_STACK_LINE(218)
		Dynamic data = _tmp_data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(218)
		if ((::Std_obj::is(kind,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(219)
			Dynamic temp = data;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(220)
			data = kind;
			HX_STACK_LINE(221)
			kind = temp;
			HX_STACK_LINE(223)
			::haxe::Log_obj::trace(HX_CSTRING("Deprecated usage of setVerticesData detected (since v1.12). Current signature is setVerticesData(kind, data, updatable)."),hx::SourceInfo(HX_CSTRING("Mesh.hx"),223,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Mesh"),HX_CSTRING("setVerticesData")));
		}
		HX_STACK_LINE(226)
		if (((this->_geometry == null()))){
			HX_STACK_LINE(227)
			::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::__new();		HX_STACK_VAR(vertexData,"vertexData");
			HX_STACK_LINE(228)
			vertexData->set(data,kind);
			HX_STACK_LINE(230)
			::com::gamestudiohx::babylonhx::Scene scene = this->getScene();		HX_STACK_VAR(scene,"scene");
			HX_STACK_LINE(232)
			::String _g = ::com::gamestudiohx::babylonhx::mesh::Geometry_obj::RandomId();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(232)
			::com::gamestudiohx::babylonhx::Engine _g1 = scene->getEngine();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(232)
			::com::gamestudiohx::babylonhx::mesh::Geometry_obj::__new(_g,_g1,vertexData,updatable,hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(235)
			this->_geometry->setVerticesData(kind,data,updatable);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Mesh_obj,setVerticesData,(void))

Void Mesh_obj::updateVerticesData( ::String kind,Array< Float > data,Dynamic updateExtends,Dynamic makeItUnique){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","updateVerticesData",0x48ed90de,"com.gamestudiohx.babylonhx.mesh.Mesh.updateVerticesData","com/gamestudiohx/babylonhx/mesh/Mesh.hx",239,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(kind,"kind")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(updateExtends,"updateExtends")
		HX_STACK_ARG(makeItUnique,"makeItUnique")
		HX_STACK_LINE(240)
		if (((this->_geometry == null()))){
			HX_STACK_LINE(241)
			return null();
		}
		HX_STACK_LINE(243)
		if ((!(makeItUnique))){
			HX_STACK_LINE(244)
			this->_geometry->updateVerticesData(kind,data,updateExtends,null());
		}
		else{
			HX_STACK_LINE(247)
			this->makeGeometryUnique();
			HX_STACK_LINE(248)
			this->updateVerticesData(kind,data,updateExtends,false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Mesh_obj,updateVerticesData,(void))

Void Mesh_obj::makeGeometryUnique( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","makeGeometryUnique",0xad925063,"com.gamestudiohx.babylonhx.mesh.Mesh.makeGeometryUnique","com/gamestudiohx/babylonhx/mesh/Mesh.hx",252,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(253)
		if (((this->_geometry == null()))){
			HX_STACK_LINE(254)
			return null();
		}
		HX_STACK_LINE(256)
		::String _g = ::com::gamestudiohx::babylonhx::mesh::Geometry_obj::RandomId();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(256)
		::com::gamestudiohx::babylonhx::mesh::Geometry geometry = this->_geometry->copy(_g);		HX_STACK_VAR(geometry,"geometry");
		HX_STACK_LINE(257)
		geometry->applyToMesh(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,makeGeometryUnique,(void))

Void Mesh_obj::setIndices( Array< int > indices){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","setIndices",0x4fcecc17,"com.gamestudiohx.babylonhx.mesh.Mesh.setIndices","com/gamestudiohx/babylonhx/mesh/Mesh.hx",261,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indices,"indices")
		HX_STACK_LINE(261)
		if (((this->_geometry == null()))){
			HX_STACK_LINE(262)
			::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::__new();		HX_STACK_VAR(vertexData,"vertexData");
			HX_STACK_LINE(263)
			vertexData->indices = indices;
			HX_STACK_LINE(265)
			::com::gamestudiohx::babylonhx::Scene scene = this->getScene();		HX_STACK_VAR(scene,"scene");
			HX_STACK_LINE(267)
			::String _g = ::com::gamestudiohx::babylonhx::mesh::Geometry_obj::RandomId();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(267)
			::com::gamestudiohx::babylonhx::Engine _g1 = scene->getEngine();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(267)
			::com::gamestudiohx::babylonhx::mesh::Geometry_obj::__new(_g,_g1,vertexData,false,hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(270)
			this->_geometry->setIndices(indices);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,setIndices,(void))

Void Mesh_obj::_bind( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,::com::gamestudiohx::babylonhx::materials::Effect effect,Dynamic wireframe){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","_bind",0x476c866a,"com.gamestudiohx.babylonhx.mesh.Mesh._bind","com/gamestudiohx/babylonhx/mesh/Mesh.hx",274,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(subMesh,"subMesh")
		HX_STACK_ARG(effect,"effect")
		HX_STACK_ARG(wireframe,"wireframe")
		HX_STACK_LINE(275)
		::com::gamestudiohx::babylonhx::Engine engine = this->getScene()->getEngine();		HX_STACK_VAR(engine,"engine");
		HX_STACK_LINE(278)
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer indexToBind = this->_geometry->getIndexBuffer();		HX_STACK_VAR(indexToBind,"indexToBind");
		HX_STACK_LINE(280)
		if ((wireframe)){
			HX_STACK_LINE(281)
			::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(281)
			{
				HX_STACK_LINE(281)
				Array< int > indices = this->getIndices();		HX_STACK_VAR(indices,"indices");
				HX_STACK_LINE(281)
				if (((subMesh->_linesIndexBuffer == null()))){
					HX_STACK_LINE(281)
					Array< int > linesIndices = Array_obj< int >::__new();		HX_STACK_VAR(linesIndices,"linesIndices");
					HX_STACK_LINE(281)
					int index = subMesh->indexStart;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(281)
					while((true)){
						HX_STACK_LINE(281)
						if ((!(((index < (subMesh->indexStart + subMesh->indexCount)))))){
							HX_STACK_LINE(281)
							break;
						}
						HX_STACK_LINE(281)
						linesIndices->push(indices->__get(index));
						HX_STACK_LINE(281)
						linesIndices->push(indices->__get((index + (int)1)));
						HX_STACK_LINE(281)
						linesIndices->push(indices->__get((index + (int)1)));
						HX_STACK_LINE(281)
						linesIndices->push(indices->__get((index + (int)2)));
						HX_STACK_LINE(281)
						linesIndices->push(indices->__get((index + (int)2)));
						HX_STACK_LINE(281)
						linesIndices->push(indices->__get(index));
						HX_STACK_LINE(281)
						hx::AddEq(index,(int)3);
					}
					HX_STACK_LINE(281)
					::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g = engine->createIndexBuffer(linesIndices);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(281)
					subMesh->_linesIndexBuffer = _g;
					HX_STACK_LINE(281)
					subMesh->linesIndexCount = linesIndices->length;
				}
				HX_STACK_LINE(281)
				_g1 = subMesh->_linesIndexBuffer;
			}
			HX_STACK_LINE(281)
			indexToBind = _g1;
		}
		HX_STACK_LINE(285)
		::haxe::ds::StringMap _g2 = this->_geometry->getVertexBuffers();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(285)
		engine->bindMultiBuffers(_g2,indexToBind,effect);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Mesh_obj,_bind,(void))

Void Mesh_obj::_draw( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,bool useTriangles,Dynamic instancesCount){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","_draw",0x48c5bcb1,"com.gamestudiohx.babylonhx.mesh.Mesh._draw","com/gamestudiohx/babylonhx/mesh/Mesh.hx",288,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(subMesh,"subMesh")
		HX_STACK_ARG(useTriangles,"useTriangles")
		HX_STACK_ARG(instancesCount,"instancesCount")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",289,0xf4cec482)
				{
					HX_STACK_LINE(289)
					::haxe::ds::StringMap _g = __this->_geometry->getVertexBuffers();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(289)
					int _g1 = ::Lambda_obj::count(_g,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(289)
					return (_g1 == (int)0);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",289,0xf4cec482)
				{
					HX_STACK_LINE(289)
					Dynamic _g2 = __this->_geometry->getIndexBuffer();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(289)
					return (_g2 == (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(289)
		if (((  ((!(((  ((!(((this->_geometry == null()))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))))) ? bool(_Function_1_2::Block(this)) : bool(true) ))){
			HX_STACK_LINE(290)
			return null();
		}
		HX_STACK_LINE(293)
		::com::gamestudiohx::babylonhx::Engine engine = this->getScene()->getEngine();		HX_STACK_VAR(engine,"engine");
		HX_STACK_LINE(296)
		engine->draw(useTriangles,(  ((useTriangles)) ? int(subMesh->indexStart) : int((int)0) ),(  ((useTriangles)) ? int(subMesh->indexCount) : int(subMesh->linesIndexCount) ),instancesCount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Mesh_obj,_draw,(void))

Void Mesh_obj::registerBeforeRender( Dynamic func){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","registerBeforeRender",0x9c2fbb2a,"com.gamestudiohx.babylonhx.mesh.Mesh.registerBeforeRender","com/gamestudiohx/babylonhx/mesh/Mesh.hx",300,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(300)
		this->_onBeforeRenderCallbacks->__Field(HX_CSTRING("push"),true)(func);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,registerBeforeRender,(void))

Void Mesh_obj::unregisterBeforeRender( Dynamic func){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","unregisterBeforeRender",0xebe1e483,"com.gamestudiohx.babylonhx.mesh.Mesh.unregisterBeforeRender","com/gamestudiohx/babylonhx/mesh/Mesh.hx",303,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(304)
		int index = this->_onBeforeRenderCallbacks->__Field(HX_CSTRING("indexOf"),true)(func,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(306)
		if (((index > (int)-1))){
			HX_STACK_LINE(307)
			this->_onBeforeRenderCallbacks->__Field(HX_CSTRING("splice"),true)(index,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,unregisterBeforeRender,(void))

::com::gamestudiohx::babylonhx::mesh::InstancesBatch Mesh_obj::_getInstancesRenderList( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","_getInstancesRenderList",0xaeb004a9,"com.gamestudiohx.babylonhx.mesh.Mesh._getInstancesRenderList","com/gamestudiohx/babylonhx/mesh/Mesh.hx",311,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(312)
	::com::gamestudiohx::babylonhx::Scene scene = this->getScene();		HX_STACK_VAR(scene,"scene");
	HX_STACK_LINE(313)
	this->_batchCache->mustReturn = false;
	HX_STACK_LINE(314)
	this->_batchCache->renderSelf = true;
	HX_STACK_LINE(315)
	this->_batchCache->visibleInstances = null();
	HX_STACK_LINE(317)
	if ((this->_visibleInstances)){
		HX_STACK_LINE(318)
		int currentRenderId = scene->getRenderId();		HX_STACK_VAR(currentRenderId,"currentRenderId");
		HX_STACK_LINE(319)
		this->_batchCache->visibleInstances = this->_visibleInstances->__GetItem(currentRenderId);
		HX_STACK_LINE(320)
		int selfRenderId = this->_renderId;		HX_STACK_VAR(selfRenderId,"selfRenderId");
		HX_STACK_LINE(322)
		if (((bool((this->_batchCache->visibleInstances == null())) && bool(this->_visibleInstances->__Field(HX_CSTRING("defaultRenderId"),true))))){
			HX_STACK_LINE(323)
			this->_batchCache->visibleInstances = this->_visibleInstances->__GetItem(this->_visibleInstances->__Field(HX_CSTRING("defaultRenderId"),true));
			HX_STACK_LINE(324)
			currentRenderId = this->_visibleInstances->__Field(HX_CSTRING("defaultRenderId"),true);
			HX_STACK_LINE(325)
			selfRenderId = this->_visibleInstances->__Field(HX_CSTRING("selfDefaultRenderId"),true);
		}
		HX_STACK_LINE(328)
		if (((bool((this->_batchCache->visibleInstances != null())) && bool((this->_batchCache->visibleInstances->length > (int)0))))){
			HX_STACK_LINE(329)
			if (((this->_renderIdForInstances == currentRenderId))){
				HX_STACK_LINE(330)
				this->_batchCache->mustReturn = true;
				HX_STACK_LINE(331)
				return this->_batchCache;
			}
			HX_STACK_LINE(334)
			if (((currentRenderId != selfRenderId))){
				HX_STACK_LINE(335)
				this->_batchCache->renderSelf = false;
			}
		}
		HX_STACK_LINE(339)
		this->_renderIdForInstances = currentRenderId;
	}
	HX_STACK_LINE(342)
	return this->_batchCache;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,_getInstancesRenderList,return )

Void Mesh_obj::_renderWithInstances( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,bool wireFrame,::com::gamestudiohx::babylonhx::mesh::InstancesBatch batch,::com::gamestudiohx::babylonhx::materials::Effect effect,::com::gamestudiohx::babylonhx::Engine engine){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","_renderWithInstances",0x3d273d15,"com.gamestudiohx.babylonhx.mesh.Mesh._renderWithInstances","com/gamestudiohx/babylonhx/mesh/Mesh.hx",345,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(subMesh,"subMesh")
		HX_STACK_ARG(wireFrame,"wireFrame")
		HX_STACK_ARG(batch,"batch")
		HX_STACK_ARG(effect,"effect")
		HX_STACK_ARG(engine,"engine")
		HX_STACK_LINE(346)
		int matricesCount = (this->instances->length + (int)1);		HX_STACK_VAR(matricesCount,"matricesCount");
		HX_STACK_LINE(347)
		int bufferSize = ((matricesCount * (int)16) * (int)4);		HX_STACK_VAR(bufferSize,"bufferSize");
		HX_STACK_LINE(349)
		while((true)){
			HX_STACK_LINE(349)
			if ((!(((this->_instancesBufferSize < bufferSize))))){
				HX_STACK_LINE(349)
				break;
			}
			HX_STACK_LINE(350)
			hx::MultEq(this->_instancesBufferSize,(int)2);
		}
		HX_STACK_LINE(353)
		if (((bool((this->_worldMatricesInstancesBuffer == null())) || bool((this->_worldMatricesInstancesBuffer->capacity < this->_instancesBufferSize))))){
			HX_STACK_LINE(354)
			if (((this->_worldMatricesInstancesBuffer != null()))){
				HX_STACK_LINE(355)
				engine->_releaseBuffer(this->_worldMatricesInstancesBuffer);
			}
			HX_STACK_LINE(358)
			::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g = engine->createDynamicVertexBuffer(this->_instancesBufferSize);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(358)
			this->_worldMatricesInstancesBuffer = _g;
			HX_STACK_LINE(359)
			::openfl::utils::Float32Array _g1 = ::openfl::utils::Float32Array_obj::__new((Float(this->_instancesBufferSize) / Float((int)4)),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(359)
			this->_worldMatricesInstancesArray = _g1;
		}
		HX_STACK_LINE(362)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(363)
		int instancesCount = (int)0;		HX_STACK_VAR(instancesCount,"instancesCount");
		HX_STACK_LINE(365)
		::com::gamestudiohx::babylonhx::tools::math::Matrix world;		HX_STACK_VAR(world,"world");
		HX_STACK_LINE(365)
		{
			HX_STACK_LINE(365)
			int _g2 = this->_scene->getRenderId();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(365)
			if (((this->_currentRenderId != _g2))){
				HX_STACK_LINE(365)
				bool force = false;		HX_STACK_VAR(force,"force");
				HX_STACK_LINE(365)
				::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",365,0xf4cec482)
						{
							HX_STACK_LINE(365)
							int _g3 = __this->_scene->getRenderId();		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(365)
							return (  ((!(((__this->_currentRenderId == _g3))))) ? bool(__this->isSynchronized(null())) : bool(true) );
						}
						return null();
					}
				};
				HX_STACK_LINE(365)
				if (((  ((!(force))) ? bool(_Function_3_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(365)
					this->_childrenFlag = (int)0;
				}
				else{
					HX_STACK_LINE(365)
					this->_childrenFlag = (int)1;
					HX_STACK_LINE(365)
					this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
					HX_STACK_LINE(365)
					this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
					HX_STACK_LINE(365)
					this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
					HX_STACK_LINE(365)
					int _g4 = this->_scene->getRenderId();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(365)
					this->_currentRenderId = _g4;
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(365)
						result->m[(int)0] = this->scaling->x;
						HX_STACK_LINE(365)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(365)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(365)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(365)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(365)
						result->m[(int)5] = this->scaling->y;
						HX_STACK_LINE(365)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(365)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(365)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(365)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(365)
						result->m[(int)10] = this->scaling->z;
						HX_STACK_LINE(365)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(365)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(365)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(365)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(365)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(365)
						result;
					}
					HX_STACK_LINE(365)
					if (((this->rotationQuaternion != null()))){
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = this->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(365)
							Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(365)
							Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
							HX_STACK_LINE(365)
							Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
							HX_STACK_LINE(365)
							Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
							HX_STACK_LINE(365)
							Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
							HX_STACK_LINE(365)
							Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
							HX_STACK_LINE(365)
							Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
							HX_STACK_LINE(365)
							Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
							HX_STACK_LINE(365)
							Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
							HX_STACK_LINE(365)
							result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
							HX_STACK_LINE(365)
							result->m[(int)1] = (2.0 * ((xy + zw)));
							HX_STACK_LINE(365)
							result->m[(int)2] = (2.0 * ((zx - yw)));
							HX_STACK_LINE(365)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(365)
							result->m[(int)4] = (2.0 * ((xy - zw)));
							HX_STACK_LINE(365)
							result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
							HX_STACK_LINE(365)
							result->m[(int)6] = (2.0 * ((yz + xw)));
							HX_STACK_LINE(365)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(365)
							result->m[(int)8] = (2.0 * ((zx + yw)));
							HX_STACK_LINE(365)
							result->m[(int)9] = (2.0 * ((yz - xw)));
							HX_STACK_LINE(365)
							result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
							HX_STACK_LINE(365)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(365)
							result->m[(int)12] = (int)0;
							HX_STACK_LINE(365)
							result->m[(int)13] = (int)0;
							HX_STACK_LINE(365)
							result->m[(int)14] = (int)0;
							HX_STACK_LINE(365)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(365)
							result;
						}
						HX_STACK_LINE(365)
						this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
					}
					else{
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion _g5;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
								HX_STACK_LINE(365)
								Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
								HX_STACK_LINE(365)
								Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
								HX_STACK_LINE(365)
								Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
								HX_STACK_LINE(365)
								Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
								HX_STACK_LINE(365)
								Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
								HX_STACK_LINE(365)
								Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
								HX_STACK_LINE(365)
								Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
								HX_STACK_LINE(365)
								Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
								HX_STACK_LINE(365)
								tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
								HX_STACK_LINE(365)
								tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
								HX_STACK_LINE(365)
								tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
								HX_STACK_LINE(365)
								tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
								HX_STACK_LINE(365)
								_g5 = tempQuaternion;
							}
							HX_STACK_LINE(365)
							tempQuaternion = _g5;
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
								HX_STACK_LINE(365)
								Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
								HX_STACK_LINE(365)
								Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
								HX_STACK_LINE(365)
								Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
								HX_STACK_LINE(365)
								Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
								HX_STACK_LINE(365)
								Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
								HX_STACK_LINE(365)
								Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
								HX_STACK_LINE(365)
								Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
								HX_STACK_LINE(365)
								Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
								HX_STACK_LINE(365)
								result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
								HX_STACK_LINE(365)
								result->m[(int)1] = (2.0 * ((xy + zw)));
								HX_STACK_LINE(365)
								result->m[(int)2] = (2.0 * ((zx - yw)));
								HX_STACK_LINE(365)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)4] = (2.0 * ((xy - zw)));
								HX_STACK_LINE(365)
								result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
								HX_STACK_LINE(365)
								result->m[(int)6] = (2.0 * ((yz + xw)));
								HX_STACK_LINE(365)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)8] = (2.0 * ((zx + yw)));
								HX_STACK_LINE(365)
								result->m[(int)9] = (2.0 * ((yz - xw)));
								HX_STACK_LINE(365)
								result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
								HX_STACK_LINE(365)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)12] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)13] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)14] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(365)
								result;
							}
						}
						HX_STACK_LINE(365)
						this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
					}
					HX_STACK_LINE(365)
					if ((this->infiniteDistance)){
						HX_STACK_LINE(365)
						::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								result->m[(int)0] = 1.0;
								HX_STACK_LINE(365)
								result->m[(int)1] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)2] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)4] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)5] = 1.0;
								HX_STACK_LINE(365)
								result->m[(int)6] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)8] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)9] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)10] = 1.0;
								HX_STACK_LINE(365)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)12] = (this->position->x + camera->position->x);
								HX_STACK_LINE(365)
								result->m[(int)13] = (this->position->y + camera->position->y);
								HX_STACK_LINE(365)
								result->m[(int)14] = (this->position->z + camera->position->z);
								HX_STACK_LINE(365)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(365)
								result;
							}
						}
					}
					else{
						HX_STACK_LINE(365)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(365)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(365)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(365)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(365)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(365)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(365)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(365)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(365)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(365)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(365)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(365)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(365)
							result->m[(int)12] = this->position->x;
							HX_STACK_LINE(365)
							result->m[(int)13] = this->position->y;
							HX_STACK_LINE(365)
							result->m[(int)14] = this->position->z;
							HX_STACK_LINE(365)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(365)
							result;
						}
					}
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(365)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(365)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(365)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(365)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(365)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(365)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(365)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(365)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(365)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(365)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(365)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(365)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(365)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(365)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(365)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(365)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(365)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(365)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(365)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(365)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(365)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(365)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(365)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(365)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(365)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(365)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(365)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(365)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(365)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(365)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(365)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(365)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(365)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(365)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(365)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(365)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(365)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(365)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(365)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(365)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(365)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(365)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(365)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(365)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(365)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(365)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(365)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(365)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(365)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(365)
							result;
						}
					}
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(365)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(365)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(365)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(365)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(365)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(365)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(365)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(365)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(365)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(365)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(365)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(365)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(365)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(365)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(365)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(365)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(365)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(365)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(365)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(365)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(365)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(365)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(365)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(365)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(365)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(365)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(365)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(365)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(365)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(365)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(365)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(365)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(365)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(365)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(365)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(365)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(365)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(365)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(365)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(365)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(365)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(365)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(365)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(365)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(365)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(365)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(365)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(365)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(365)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(365)
							result;
						}
					}
					HX_STACK_LINE(365)
					if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
						HX_STACK_LINE(365)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(365)
							localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
						}
						HX_STACK_LINE(365)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(365)
							zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
						}
						HX_STACK_LINE(365)
						if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
								HX_STACK_LINE(365)
								hx::AddEq(localPosition->x,otherVector->x);
								HX_STACK_LINE(365)
								hx::AddEq(localPosition->y,otherVector->y);
								HX_STACK_LINE(365)
								hx::AddEq(localPosition->z,otherVector->z);
							}
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(365)
								{
									HX_STACK_LINE(365)
									result->m[(int)0] = 1.0;
									HX_STACK_LINE(365)
									result->m[(int)1] = (int)0;
									HX_STACK_LINE(365)
									result->m[(int)2] = (int)0;
									HX_STACK_LINE(365)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(365)
									result->m[(int)4] = (int)0;
									HX_STACK_LINE(365)
									result->m[(int)5] = 1.0;
									HX_STACK_LINE(365)
									result->m[(int)6] = (int)0;
									HX_STACK_LINE(365)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(365)
									result->m[(int)8] = (int)0;
									HX_STACK_LINE(365)
									result->m[(int)9] = (int)0;
									HX_STACK_LINE(365)
									result->m[(int)10] = 1.0;
									HX_STACK_LINE(365)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(365)
									result->m[(int)12] = localPosition->x;
									HX_STACK_LINE(365)
									result->m[(int)13] = localPosition->y;
									HX_STACK_LINE(365)
									result->m[(int)14] = localPosition->z;
									HX_STACK_LINE(365)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(365)
									result;
								}
							}
						}
						HX_STACK_LINE(365)
						if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
							HX_STACK_LINE(365)
							zero = this->_scene->activeCamera->position;
						}
						else{
							HX_STACK_LINE(365)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
								HX_STACK_LINE(365)
								zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
							HX_STACK_LINE(365)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
								HX_STACK_LINE(365)
								zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
							HX_STACK_LINE(365)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
								HX_STACK_LINE(365)
								zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
						}
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								zAxis->x = (zero->x - localPosition->x);
								HX_STACK_LINE(365)
								zAxis->y = (zero->y - localPosition->y);
								HX_STACK_LINE(365)
								zAxis->z = (zero->z - localPosition->z);
							}
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(365)
								if (((len != (int)0))){
									HX_STACK_LINE(365)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(365)
									hx::MultEq(zAxis->x,num);
									HX_STACK_LINE(365)
									hx::MultEq(zAxis->y,num);
									HX_STACK_LINE(365)
									hx::MultEq(zAxis->z,num);
								}
							}
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
								HX_STACK_LINE(365)
								xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
								HX_STACK_LINE(365)
								xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
							}
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(365)
								if (((len != (int)0))){
									HX_STACK_LINE(365)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(365)
									hx::MultEq(xAxis->x,num);
									HX_STACK_LINE(365)
									hx::MultEq(xAxis->y,num);
									HX_STACK_LINE(365)
									hx::MultEq(xAxis->z,num);
								}
							}
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
								HX_STACK_LINE(365)
								yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
								HX_STACK_LINE(365)
								yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
							}
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(365)
								if (((len != (int)0))){
									HX_STACK_LINE(365)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(365)
									hx::MultEq(yAxis->x,num);
									HX_STACK_LINE(365)
									hx::MultEq(yAxis->y,num);
									HX_STACK_LINE(365)
									hx::MultEq(yAxis->z,num);
								}
							}
							HX_STACK_LINE(365)
							Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
							HX_STACK_LINE(365)
							Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
							HX_STACK_LINE(365)
							Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								result->m[(int)0] = xAxis->x;
								HX_STACK_LINE(365)
								result->m[(int)1] = yAxis->x;
								HX_STACK_LINE(365)
								result->m[(int)2] = zAxis->x;
								HX_STACK_LINE(365)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)4] = xAxis->y;
								HX_STACK_LINE(365)
								result->m[(int)5] = yAxis->y;
								HX_STACK_LINE(365)
								result->m[(int)6] = zAxis->y;
								HX_STACK_LINE(365)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)8] = xAxis->z;
								HX_STACK_LINE(365)
								result->m[(int)9] = yAxis->z;
								HX_STACK_LINE(365)
								result->m[(int)10] = zAxis->z;
								HX_STACK_LINE(365)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(365)
								result->m[(int)12] = ex;
								HX_STACK_LINE(365)
								result->m[(int)13] = ey;
								HX_STACK_LINE(365)
								result->m[(int)14] = ez;
								HX_STACK_LINE(365)
								result->m[(int)15] = (int)1;
								HX_STACK_LINE(365)
								result;
							}
						}
						HX_STACK_LINE(365)
						this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localBillboard;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
								HX_STACK_LINE(365)
								Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
								HX_STACK_LINE(365)
								Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
								HX_STACK_LINE(365)
								Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
								HX_STACK_LINE(365)
								Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
								HX_STACK_LINE(365)
								Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
								HX_STACK_LINE(365)
								Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
								HX_STACK_LINE(365)
								Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
								HX_STACK_LINE(365)
								Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
								HX_STACK_LINE(365)
								Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
								HX_STACK_LINE(365)
								Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
								HX_STACK_LINE(365)
								Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
								HX_STACK_LINE(365)
								Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
								HX_STACK_LINE(365)
								Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
								HX_STACK_LINE(365)
								Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
								HX_STACK_LINE(365)
								Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
								HX_STACK_LINE(365)
								Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
								HX_STACK_LINE(365)
								Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
								HX_STACK_LINE(365)
								Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
								HX_STACK_LINE(365)
								Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
								HX_STACK_LINE(365)
								Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
								HX_STACK_LINE(365)
								Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
								HX_STACK_LINE(365)
								Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
								HX_STACK_LINE(365)
								Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
								HX_STACK_LINE(365)
								Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
								HX_STACK_LINE(365)
								Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
								HX_STACK_LINE(365)
								Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
								HX_STACK_LINE(365)
								Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
								HX_STACK_LINE(365)
								Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
								HX_STACK_LINE(365)
								Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
								HX_STACK_LINE(365)
								Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
								HX_STACK_LINE(365)
								Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
								HX_STACK_LINE(365)
								Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
								HX_STACK_LINE(365)
								Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
								HX_STACK_LINE(365)
								Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
								HX_STACK_LINE(365)
								Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
								HX_STACK_LINE(365)
								Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
								HX_STACK_LINE(365)
								Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
								HX_STACK_LINE(365)
								Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
								HX_STACK_LINE(365)
								_this->m[(int)0] = (l23 * l27);
								HX_STACK_LINE(365)
								_this->m[(int)4] = (l24 * l27);
								HX_STACK_LINE(365)
								_this->m[(int)8] = (l25 * l27);
								HX_STACK_LINE(365)
								_this->m[(int)12] = (l26 * l27);
								HX_STACK_LINE(365)
								_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
								HX_STACK_LINE(365)
								_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
								HX_STACK_LINE(365)
								_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
								HX_STACK_LINE(365)
								_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
								HX_STACK_LINE(365)
								_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
								HX_STACK_LINE(365)
								_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
								HX_STACK_LINE(365)
								_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
								HX_STACK_LINE(365)
								_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
								HX_STACK_LINE(365)
								_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
								HX_STACK_LINE(365)
								_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
								HX_STACK_LINE(365)
								_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
								HX_STACK_LINE(365)
								_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
							}
						}
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(365)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(365)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(365)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(365)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(365)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(365)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(365)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(365)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(365)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(365)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(365)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(365)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(365)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(365)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(365)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(365)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(365)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(365)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(365)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(365)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(365)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(365)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(365)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(365)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(365)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(365)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(365)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(365)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(365)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(365)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(365)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(365)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(365)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(365)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(365)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(365)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(365)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(365)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(365)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(365)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(365)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(365)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(365)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(365)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(365)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(365)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(365)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(365)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(365)
								result;
							}
						}
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(365)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(365)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(365)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(365)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(365)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(365)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(365)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(365)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(365)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(365)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(365)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(365)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(365)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(365)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(365)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(365)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(365)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(365)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(365)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(365)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(365)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(365)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(365)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(365)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(365)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(365)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(365)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(365)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(365)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(365)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(365)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(365)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(365)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(365)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(365)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(365)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(365)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(365)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(365)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(365)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(365)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(365)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(365)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(365)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(365)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(365)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(365)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(365)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(365)
								result;
							}
						}
					}
					struct _Function_4_1{
						inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",365,0xf4cec482)
							{
								HX_STACK_LINE(365)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _g6 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(365)
								return (_g6 != null());
							}
							return null();
						}
					};
					HX_STACK_LINE(365)
					if (((  (((  (((this->parent != null()))) ? bool(_Function_4_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(365)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(365)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(365)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(365)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(365)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(365)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(365)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(365)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(365)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(365)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(365)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(365)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(365)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(365)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(365)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(365)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(365)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(365)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(365)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(365)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(365)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(365)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(365)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(365)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(365)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(365)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(365)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(365)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(365)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(365)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(365)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(365)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(365)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(365)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(365)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(365)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(365)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(365)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(365)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(365)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(365)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(365)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(365)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(365)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(365)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(365)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(365)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(365)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(365)
								result;
							}
						}
						HX_STACK_LINE(365)
						::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localWorld;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(365)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(365)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(365)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(365)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(365)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(365)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(365)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(365)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(365)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(365)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(365)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(365)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(365)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(365)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(365)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(365)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(365)
								Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(365)
								Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(365)
								Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(365)
								Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(365)
								Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(365)
								Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(365)
								Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(365)
								Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(365)
								Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(365)
								Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(365)
								Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(365)
								Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(365)
								Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(365)
								Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(365)
								Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(365)
								Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(365)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(365)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(365)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(365)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(365)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(365)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(365)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(365)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(365)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(365)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(365)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(365)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(365)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(365)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(365)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(365)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(365)
								result;
							}
						}
					}
					else{
						HX_STACK_LINE(365)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(365)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(365)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(365)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(365)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(365)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(365)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(365)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(365)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(365)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(365)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(365)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(365)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(365)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(365)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(365)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(365)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(365)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(365)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(365)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(365)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(365)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(365)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(365)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(365)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(365)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(365)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(365)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(365)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(365)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(365)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(365)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(365)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(365)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(365)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(365)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(365)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(365)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(365)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(365)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(365)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(365)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(365)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(365)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(365)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(365)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(365)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(365)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(365)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(365)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(365)
							result;
						}
					}
					HX_STACK_LINE(365)
					if (((this->_boundingInfo != null()))){
						HX_STACK_LINE(365)
						Float _g7 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(365)
						this->_scaleFactor = _g7;
						HX_STACK_LINE(365)
						Float _g8 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(365)
						this->_scaleFactor = _g8;
						struct _Function_5_1{
							inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",365,0xf4cec482)
								{
									HX_STACK_LINE(365)
									Dynamic _g9 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(365)
									return (_g9 != null());
								}
								return null();
							}
						};
						HX_STACK_LINE(365)
						if (((  (((this->parent != null()))) ? bool(_Function_5_1::Block(this)) : bool(false) ))){
							HX_STACK_LINE(365)
							Dynamic _g10 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(365)
							Float _g11 = (this->_scaleFactor * _g10);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(365)
							this->_scaleFactor = _g11;
						}
						HX_STACK_LINE(365)
						this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(365)
							int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(365)
							while((true)){
								HX_STACK_LINE(365)
								if ((!(((_g1 < _g))))){
									HX_STACK_LINE(365)
									break;
								}
								HX_STACK_LINE(365)
								int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
								HX_STACK_LINE(365)
								::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh1 = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh1,"subMesh1");
								HX_STACK_LINE(365)
								subMesh1->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
							}
						}
					}
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_absolutePosition;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(365)
						_this->x = this->_worldMatrix->m->__get((int)12);
						HX_STACK_LINE(365)
						_this->y = this->_worldMatrix->m->__get((int)13);
						HX_STACK_LINE(365)
						_this->z = this->_worldMatrix->m->__get((int)14);
					}
					HX_STACK_LINE(365)
					ret = this->_worldMatrix;
				}
				HX_STACK_LINE(365)
				ret;
			}
			HX_STACK_LINE(365)
			world = this->_worldMatrix;
		}
		HX_STACK_LINE(366)
		if ((batch->renderSelf)){
			HX_STACK_LINE(367)
			world->copyToArray(this->_worldMatricesInstancesArray,offset);
			HX_STACK_LINE(368)
			hx::AddEq(offset,(int)16);
			HX_STACK_LINE(369)
			(instancesCount)++;
		}
		HX_STACK_LINE(373)
		int instanceIndex = (int)0;		HX_STACK_VAR(instanceIndex,"instanceIndex");
		HX_STACK_LINE(374)
		while((true)){
			HX_STACK_LINE(374)
			if ((!(((instanceIndex < batch->visibleInstances->length))))){
				HX_STACK_LINE(374)
				break;
			}
			HX_STACK_LINE(375)
			::com::gamestudiohx::babylonhx::mesh::InstancedMesh instance = batch->visibleInstances->__get(instanceIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::InstancedMesh >();		HX_STACK_VAR(instance,"instance");
			struct _Function_2_1{
				inline static ::com::gamestudiohx::babylonhx::tools::math::Matrix Block( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh &instance){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",376,0xf4cec482)
					{
						HX_STACK_LINE(376)
						int _g12 = instance->_scene->getRenderId();		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(376)
						if (((instance->_currentRenderId != _g12))){
							HX_STACK_LINE(376)
							bool force = false;		HX_STACK_VAR(force,"force");
							HX_STACK_LINE(376)
							::com::gamestudiohx::babylonhx::tools::math::Matrix ret = instance->_worldMatrix;		HX_STACK_VAR(ret,"ret");
							struct _Function_4_1{
								inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh &instance){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",376,0xf4cec482)
									{
										HX_STACK_LINE(376)
										int _g13 = instance->_scene->getRenderId();		HX_STACK_VAR(_g13,"_g13");
										HX_STACK_LINE(376)
										return (  ((!(((instance->_currentRenderId == _g13))))) ? bool(instance->isSynchronized(null())) : bool(true) );
									}
									return null();
								}
							};
							HX_STACK_LINE(376)
							if (((  ((!(force))) ? bool(_Function_4_1::Block(instance)) : bool(false) ))){
								HX_STACK_LINE(376)
								instance->_childrenFlag = (int)0;
							}
							else{
								HX_STACK_LINE(376)
								instance->_childrenFlag = (int)1;
								HX_STACK_LINE(376)
								instance->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(instance->position);
								HX_STACK_LINE(376)
								instance->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(instance->scaling);
								HX_STACK_LINE(376)
								instance->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
								HX_STACK_LINE(376)
								int _g14 = instance->_scene->getRenderId();		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(376)
								instance->_currentRenderId = _g14;
								HX_STACK_LINE(376)
								{
									HX_STACK_LINE(376)
									::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localScaling;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(376)
									result->m[(int)0] = instance->scaling->x;
									HX_STACK_LINE(376)
									result->m[(int)1] = (int)0;
									HX_STACK_LINE(376)
									result->m[(int)2] = (int)0;
									HX_STACK_LINE(376)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(376)
									result->m[(int)4] = (int)0;
									HX_STACK_LINE(376)
									result->m[(int)5] = instance->scaling->y;
									HX_STACK_LINE(376)
									result->m[(int)6] = (int)0;
									HX_STACK_LINE(376)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(376)
									result->m[(int)8] = (int)0;
									HX_STACK_LINE(376)
									result->m[(int)9] = (int)0;
									HX_STACK_LINE(376)
									result->m[(int)10] = instance->scaling->z;
									HX_STACK_LINE(376)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(376)
									result->m[(int)12] = (int)0;
									HX_STACK_LINE(376)
									result->m[(int)13] = (int)0;
									HX_STACK_LINE(376)
									result->m[(int)14] = (int)0;
									HX_STACK_LINE(376)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(376)
									result;
								}
								HX_STACK_LINE(376)
								if (((instance->rotationQuaternion != null()))){
									HX_STACK_LINE(376)
									{
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = instance->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localRotation;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(376)
										Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
										HX_STACK_LINE(376)
										Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
										HX_STACK_LINE(376)
										Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
										HX_STACK_LINE(376)
										Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
										HX_STACK_LINE(376)
										Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
										HX_STACK_LINE(376)
										Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
										HX_STACK_LINE(376)
										Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
										HX_STACK_LINE(376)
										Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
										HX_STACK_LINE(376)
										Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
										HX_STACK_LINE(376)
										result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
										HX_STACK_LINE(376)
										result->m[(int)1] = (2.0 * ((xy + zw)));
										HX_STACK_LINE(376)
										result->m[(int)2] = (2.0 * ((zx - yw)));
										HX_STACK_LINE(376)
										result->m[(int)3] = (int)0;
										HX_STACK_LINE(376)
										result->m[(int)4] = (2.0 * ((xy - zw)));
										HX_STACK_LINE(376)
										result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
										HX_STACK_LINE(376)
										result->m[(int)6] = (2.0 * ((yz + xw)));
										HX_STACK_LINE(376)
										result->m[(int)7] = (int)0;
										HX_STACK_LINE(376)
										result->m[(int)8] = (2.0 * ((zx + yw)));
										HX_STACK_LINE(376)
										result->m[(int)9] = (2.0 * ((yz - xw)));
										HX_STACK_LINE(376)
										result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
										HX_STACK_LINE(376)
										result->m[(int)11] = (int)0;
										HX_STACK_LINE(376)
										result->m[(int)12] = (int)0;
										HX_STACK_LINE(376)
										result->m[(int)13] = (int)0;
										HX_STACK_LINE(376)
										result->m[(int)14] = (int)0;
										HX_STACK_LINE(376)
										result->m[(int)15] = 1.0;
										HX_STACK_LINE(376)
										result;
									}
									HX_STACK_LINE(376)
									instance->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(instance->rotationQuaternion);
								}
								else{
									HX_STACK_LINE(376)
									{
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localRotation;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Quaternion _g15;		HX_STACK_VAR(_g15,"_g15");
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											Float halfRoll = (instance->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
											HX_STACK_LINE(376)
											Float halfPitch = (instance->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
											HX_STACK_LINE(376)
											Float halfYaw = (instance->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
											HX_STACK_LINE(376)
											Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
											HX_STACK_LINE(376)
											Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
											HX_STACK_LINE(376)
											Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
											HX_STACK_LINE(376)
											Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
											HX_STACK_LINE(376)
											Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
											HX_STACK_LINE(376)
											Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
											HX_STACK_LINE(376)
											tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
											HX_STACK_LINE(376)
											tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
											HX_STACK_LINE(376)
											tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
											HX_STACK_LINE(376)
											tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
											HX_STACK_LINE(376)
											_g15 = tempQuaternion;
										}
										HX_STACK_LINE(376)
										tempQuaternion = _g15;
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
											HX_STACK_LINE(376)
											Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
											HX_STACK_LINE(376)
											Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
											HX_STACK_LINE(376)
											Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
											HX_STACK_LINE(376)
											Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
											HX_STACK_LINE(376)
											Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
											HX_STACK_LINE(376)
											Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
											HX_STACK_LINE(376)
											Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
											HX_STACK_LINE(376)
											Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
											HX_STACK_LINE(376)
											result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
											HX_STACK_LINE(376)
											result->m[(int)1] = (2.0 * ((xy + zw)));
											HX_STACK_LINE(376)
											result->m[(int)2] = (2.0 * ((zx - yw)));
											HX_STACK_LINE(376)
											result->m[(int)3] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)4] = (2.0 * ((xy - zw)));
											HX_STACK_LINE(376)
											result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
											HX_STACK_LINE(376)
											result->m[(int)6] = (2.0 * ((yz + xw)));
											HX_STACK_LINE(376)
											result->m[(int)7] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)8] = (2.0 * ((zx + yw)));
											HX_STACK_LINE(376)
											result->m[(int)9] = (2.0 * ((yz - xw)));
											HX_STACK_LINE(376)
											result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
											HX_STACK_LINE(376)
											result->m[(int)11] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)12] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)13] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)14] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)15] = 1.0;
											HX_STACK_LINE(376)
											result;
										}
									}
									HX_STACK_LINE(376)
									instance->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(instance->rotation);
								}
								HX_STACK_LINE(376)
								if ((instance->infiniteDistance)){
									HX_STACK_LINE(376)
									::com::gamestudiohx::babylonhx::cameras::Camera camera = instance->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
									HX_STACK_LINE(376)
									{
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localTranslation;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											result->m[(int)0] = 1.0;
											HX_STACK_LINE(376)
											result->m[(int)1] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)2] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)3] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)4] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)5] = 1.0;
											HX_STACK_LINE(376)
											result->m[(int)6] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)7] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)8] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)9] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)10] = 1.0;
											HX_STACK_LINE(376)
											result->m[(int)11] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)12] = (instance->position->x + camera->position->x);
											HX_STACK_LINE(376)
											result->m[(int)13] = (instance->position->y + camera->position->y);
											HX_STACK_LINE(376)
											result->m[(int)14] = (instance->position->z + camera->position->z);
											HX_STACK_LINE(376)
											result->m[(int)15] = 1.0;
											HX_STACK_LINE(376)
											result;
										}
									}
								}
								else{
									HX_STACK_LINE(376)
									::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localTranslation;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(376)
									{
										HX_STACK_LINE(376)
										result->m[(int)0] = 1.0;
										HX_STACK_LINE(376)
										result->m[(int)1] = (int)0;
										HX_STACK_LINE(376)
										result->m[(int)2] = (int)0;
										HX_STACK_LINE(376)
										result->m[(int)3] = (int)0;
										HX_STACK_LINE(376)
										result->m[(int)4] = (int)0;
										HX_STACK_LINE(376)
										result->m[(int)5] = 1.0;
										HX_STACK_LINE(376)
										result->m[(int)6] = (int)0;
										HX_STACK_LINE(376)
										result->m[(int)7] = (int)0;
										HX_STACK_LINE(376)
										result->m[(int)8] = (int)0;
										HX_STACK_LINE(376)
										result->m[(int)9] = (int)0;
										HX_STACK_LINE(376)
										result->m[(int)10] = 1.0;
										HX_STACK_LINE(376)
										result->m[(int)11] = (int)0;
										HX_STACK_LINE(376)
										result->m[(int)12] = instance->position->x;
										HX_STACK_LINE(376)
										result->m[(int)13] = instance->position->y;
										HX_STACK_LINE(376)
										result->m[(int)14] = instance->position->z;
										HX_STACK_LINE(376)
										result->m[(int)15] = 1.0;
										HX_STACK_LINE(376)
										result;
									}
								}
								HX_STACK_LINE(376)
								{
									HX_STACK_LINE(376)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(376)
									::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localScaling;		HX_STACK_VAR(other,"other");
									HX_STACK_LINE(376)
									{
										HX_STACK_LINE(376)
										Array< Float > result = instance->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(376)
										Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
										HX_STACK_LINE(376)
										Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
										HX_STACK_LINE(376)
										Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
										HX_STACK_LINE(376)
										Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
										HX_STACK_LINE(376)
										Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
										HX_STACK_LINE(376)
										Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
										HX_STACK_LINE(376)
										Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
										HX_STACK_LINE(376)
										Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
										HX_STACK_LINE(376)
										Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
										HX_STACK_LINE(376)
										Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
										HX_STACK_LINE(376)
										Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
										HX_STACK_LINE(376)
										Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
										HX_STACK_LINE(376)
										Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
										HX_STACK_LINE(376)
										Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
										HX_STACK_LINE(376)
										Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
										HX_STACK_LINE(376)
										Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
										HX_STACK_LINE(376)
										Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
										HX_STACK_LINE(376)
										Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
										HX_STACK_LINE(376)
										Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
										HX_STACK_LINE(376)
										Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
										HX_STACK_LINE(376)
										Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
										HX_STACK_LINE(376)
										Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
										HX_STACK_LINE(376)
										Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
										HX_STACK_LINE(376)
										Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
										HX_STACK_LINE(376)
										Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
										HX_STACK_LINE(376)
										Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
										HX_STACK_LINE(376)
										Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
										HX_STACK_LINE(376)
										Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
										HX_STACK_LINE(376)
										Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
										HX_STACK_LINE(376)
										Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
										HX_STACK_LINE(376)
										Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
										HX_STACK_LINE(376)
										Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
										HX_STACK_LINE(376)
										result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
										HX_STACK_LINE(376)
										result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
										HX_STACK_LINE(376)
										result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
										HX_STACK_LINE(376)
										result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
										HX_STACK_LINE(376)
										result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
										HX_STACK_LINE(376)
										result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
										HX_STACK_LINE(376)
										result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
										HX_STACK_LINE(376)
										result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
										HX_STACK_LINE(376)
										result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
										HX_STACK_LINE(376)
										result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
										HX_STACK_LINE(376)
										result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
										HX_STACK_LINE(376)
										result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
										HX_STACK_LINE(376)
										result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
										HX_STACK_LINE(376)
										result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
										HX_STACK_LINE(376)
										result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
										HX_STACK_LINE(376)
										result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
										HX_STACK_LINE(376)
										result;
									}
								}
								HX_STACK_LINE(376)
								{
									HX_STACK_LINE(376)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(376)
									::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localRotation;		HX_STACK_VAR(other,"other");
									HX_STACK_LINE(376)
									{
										HX_STACK_LINE(376)
										Array< Float > result = instance->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(376)
										Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
										HX_STACK_LINE(376)
										Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
										HX_STACK_LINE(376)
										Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
										HX_STACK_LINE(376)
										Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
										HX_STACK_LINE(376)
										Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
										HX_STACK_LINE(376)
										Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
										HX_STACK_LINE(376)
										Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
										HX_STACK_LINE(376)
										Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
										HX_STACK_LINE(376)
										Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
										HX_STACK_LINE(376)
										Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
										HX_STACK_LINE(376)
										Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
										HX_STACK_LINE(376)
										Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
										HX_STACK_LINE(376)
										Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
										HX_STACK_LINE(376)
										Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
										HX_STACK_LINE(376)
										Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
										HX_STACK_LINE(376)
										Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
										HX_STACK_LINE(376)
										Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
										HX_STACK_LINE(376)
										Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
										HX_STACK_LINE(376)
										Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
										HX_STACK_LINE(376)
										Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
										HX_STACK_LINE(376)
										Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
										HX_STACK_LINE(376)
										Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
										HX_STACK_LINE(376)
										Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
										HX_STACK_LINE(376)
										Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
										HX_STACK_LINE(376)
										Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
										HX_STACK_LINE(376)
										Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
										HX_STACK_LINE(376)
										Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
										HX_STACK_LINE(376)
										Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
										HX_STACK_LINE(376)
										Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
										HX_STACK_LINE(376)
										Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
										HX_STACK_LINE(376)
										Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
										HX_STACK_LINE(376)
										Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
										HX_STACK_LINE(376)
										result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
										HX_STACK_LINE(376)
										result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
										HX_STACK_LINE(376)
										result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
										HX_STACK_LINE(376)
										result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
										HX_STACK_LINE(376)
										result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
										HX_STACK_LINE(376)
										result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
										HX_STACK_LINE(376)
										result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
										HX_STACK_LINE(376)
										result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
										HX_STACK_LINE(376)
										result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
										HX_STACK_LINE(376)
										result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
										HX_STACK_LINE(376)
										result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
										HX_STACK_LINE(376)
										result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
										HX_STACK_LINE(376)
										result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
										HX_STACK_LINE(376)
										result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
										HX_STACK_LINE(376)
										result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
										HX_STACK_LINE(376)
										result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
										HX_STACK_LINE(376)
										result;
									}
								}
								HX_STACK_LINE(376)
								if (((instance->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
									HX_STACK_LINE(376)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
									HX_STACK_LINE(376)
									{
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = instance->position;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(376)
										localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
									}
									HX_STACK_LINE(376)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
									HX_STACK_LINE(376)
									{
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = instance->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(376)
										zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
									}
									HX_STACK_LINE(376)
									if (((bool((instance->parent != null())) && bool((instance->parent->position != null()))))){
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = instance->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
											HX_STACK_LINE(376)
											hx::AddEq(localPosition->x,otherVector->x);
											HX_STACK_LINE(376)
											hx::AddEq(localPosition->y,otherVector->y);
											HX_STACK_LINE(376)
											hx::AddEq(localPosition->z,otherVector->z);
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localTranslation;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(376)
											{
												HX_STACK_LINE(376)
												result->m[(int)0] = 1.0;
												HX_STACK_LINE(376)
												result->m[(int)1] = (int)0;
												HX_STACK_LINE(376)
												result->m[(int)2] = (int)0;
												HX_STACK_LINE(376)
												result->m[(int)3] = (int)0;
												HX_STACK_LINE(376)
												result->m[(int)4] = (int)0;
												HX_STACK_LINE(376)
												result->m[(int)5] = 1.0;
												HX_STACK_LINE(376)
												result->m[(int)6] = (int)0;
												HX_STACK_LINE(376)
												result->m[(int)7] = (int)0;
												HX_STACK_LINE(376)
												result->m[(int)8] = (int)0;
												HX_STACK_LINE(376)
												result->m[(int)9] = (int)0;
												HX_STACK_LINE(376)
												result->m[(int)10] = 1.0;
												HX_STACK_LINE(376)
												result->m[(int)11] = (int)0;
												HX_STACK_LINE(376)
												result->m[(int)12] = localPosition->x;
												HX_STACK_LINE(376)
												result->m[(int)13] = localPosition->y;
												HX_STACK_LINE(376)
												result->m[(int)14] = localPosition->z;
												HX_STACK_LINE(376)
												result->m[(int)15] = 1.0;
												HX_STACK_LINE(376)
												result;
											}
										}
									}
									HX_STACK_LINE(376)
									if (((((int(instance->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
										HX_STACK_LINE(376)
										zero = instance->_scene->activeCamera->position;
									}
									else{
										HX_STACK_LINE(376)
										if (((((int(instance->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
											HX_STACK_LINE(376)
											zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
										}
										HX_STACK_LINE(376)
										if (((((int(instance->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
											HX_STACK_LINE(376)
											zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
										}
										HX_STACK_LINE(376)
										if (((((int(instance->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
											HX_STACK_LINE(376)
											zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
										}
									}
									HX_STACK_LINE(376)
									{
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localBillboard;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											zAxis->x = (zero->x - localPosition->x);
											HX_STACK_LINE(376)
											zAxis->y = (zero->y - localPosition->y);
											HX_STACK_LINE(376)
											zAxis->z = (zero->z - localPosition->z);
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(376)
											if (((len != (int)0))){
												HX_STACK_LINE(376)
												Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(376)
												hx::MultEq(zAxis->x,num);
												HX_STACK_LINE(376)
												hx::MultEq(zAxis->y,num);
												HX_STACK_LINE(376)
												hx::MultEq(zAxis->z,num);
											}
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
											HX_STACK_LINE(376)
											xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
											HX_STACK_LINE(376)
											xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(376)
											if (((len != (int)0))){
												HX_STACK_LINE(376)
												Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(376)
												hx::MultEq(xAxis->x,num);
												HX_STACK_LINE(376)
												hx::MultEq(xAxis->y,num);
												HX_STACK_LINE(376)
												hx::MultEq(xAxis->z,num);
											}
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
											HX_STACK_LINE(376)
											yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
											HX_STACK_LINE(376)
											yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(376)
											if (((len != (int)0))){
												HX_STACK_LINE(376)
												Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(376)
												hx::MultEq(yAxis->x,num);
												HX_STACK_LINE(376)
												hx::MultEq(yAxis->y,num);
												HX_STACK_LINE(376)
												hx::MultEq(yAxis->z,num);
											}
										}
										HX_STACK_LINE(376)
										Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
										HX_STACK_LINE(376)
										Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
										HX_STACK_LINE(376)
										Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											result->m[(int)0] = xAxis->x;
											HX_STACK_LINE(376)
											result->m[(int)1] = yAxis->x;
											HX_STACK_LINE(376)
											result->m[(int)2] = zAxis->x;
											HX_STACK_LINE(376)
											result->m[(int)3] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)4] = xAxis->y;
											HX_STACK_LINE(376)
											result->m[(int)5] = yAxis->y;
											HX_STACK_LINE(376)
											result->m[(int)6] = zAxis->y;
											HX_STACK_LINE(376)
											result->m[(int)7] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)8] = xAxis->z;
											HX_STACK_LINE(376)
											result->m[(int)9] = yAxis->z;
											HX_STACK_LINE(376)
											result->m[(int)10] = zAxis->z;
											HX_STACK_LINE(376)
											result->m[(int)11] = (int)0;
											HX_STACK_LINE(376)
											result->m[(int)12] = ex;
											HX_STACK_LINE(376)
											result->m[(int)13] = ey;
											HX_STACK_LINE(376)
											result->m[(int)14] = ez;
											HX_STACK_LINE(376)
											result->m[(int)15] = (int)1;
											HX_STACK_LINE(376)
											result;
										}
									}
									HX_STACK_LINE(376)
									instance->_localBillboard->m[(int)12] = instance->_localBillboard->m[(int)13] = instance->_localBillboard->m[(int)14] = (int)0;
									HX_STACK_LINE(376)
									{
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localBillboard;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
											HX_STACK_LINE(376)
											Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
											HX_STACK_LINE(376)
											Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
											HX_STACK_LINE(376)
											Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
											HX_STACK_LINE(376)
											Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
											HX_STACK_LINE(376)
											Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
											HX_STACK_LINE(376)
											Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
											HX_STACK_LINE(376)
											Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
											HX_STACK_LINE(376)
											Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
											HX_STACK_LINE(376)
											Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
											HX_STACK_LINE(376)
											Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
											HX_STACK_LINE(376)
											Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
											HX_STACK_LINE(376)
											Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
											HX_STACK_LINE(376)
											Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
											HX_STACK_LINE(376)
											Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
											HX_STACK_LINE(376)
											Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
											HX_STACK_LINE(376)
											Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
											HX_STACK_LINE(376)
											Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
											HX_STACK_LINE(376)
											Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
											HX_STACK_LINE(376)
											Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
											HX_STACK_LINE(376)
											Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
											HX_STACK_LINE(376)
											Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
											HX_STACK_LINE(376)
											Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
											HX_STACK_LINE(376)
											Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
											HX_STACK_LINE(376)
											Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
											HX_STACK_LINE(376)
											Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
											HX_STACK_LINE(376)
											Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
											HX_STACK_LINE(376)
											Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
											HX_STACK_LINE(376)
											Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
											HX_STACK_LINE(376)
											Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
											HX_STACK_LINE(376)
											Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
											HX_STACK_LINE(376)
											Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
											HX_STACK_LINE(376)
											Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
											HX_STACK_LINE(376)
											Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
											HX_STACK_LINE(376)
											Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
											HX_STACK_LINE(376)
											Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
											HX_STACK_LINE(376)
											Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
											HX_STACK_LINE(376)
											Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
											HX_STACK_LINE(376)
											Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
											HX_STACK_LINE(376)
											_this->m[(int)0] = (l23 * l27);
											HX_STACK_LINE(376)
											_this->m[(int)4] = (l24 * l27);
											HX_STACK_LINE(376)
											_this->m[(int)8] = (l25 * l27);
											HX_STACK_LINE(376)
											_this->m[(int)12] = (l26 * l27);
											HX_STACK_LINE(376)
											_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
											HX_STACK_LINE(376)
											_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
											HX_STACK_LINE(376)
											_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
											HX_STACK_LINE(376)
											_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
											HX_STACK_LINE(376)
											_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
											HX_STACK_LINE(376)
											_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
											HX_STACK_LINE(376)
											_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
											HX_STACK_LINE(376)
											_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
											HX_STACK_LINE(376)
											_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
											HX_STACK_LINE(376)
											_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
											HX_STACK_LINE(376)
											_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
											HX_STACK_LINE(376)
											_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
										}
									}
									HX_STACK_LINE(376)
									{
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localBillboard;		HX_STACK_VAR(other,"other");
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											Array< Float > result = instance->_localWorld->m;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(376)
											Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
											HX_STACK_LINE(376)
											Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
											HX_STACK_LINE(376)
											Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
											HX_STACK_LINE(376)
											Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
											HX_STACK_LINE(376)
											Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
											HX_STACK_LINE(376)
											Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
											HX_STACK_LINE(376)
											Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
											HX_STACK_LINE(376)
											Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
											HX_STACK_LINE(376)
											Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
											HX_STACK_LINE(376)
											Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
											HX_STACK_LINE(376)
											Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
											HX_STACK_LINE(376)
											Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
											HX_STACK_LINE(376)
											Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
											HX_STACK_LINE(376)
											Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
											HX_STACK_LINE(376)
											Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
											HX_STACK_LINE(376)
											Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
											HX_STACK_LINE(376)
											Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
											HX_STACK_LINE(376)
											Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
											HX_STACK_LINE(376)
											Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
											HX_STACK_LINE(376)
											Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
											HX_STACK_LINE(376)
											Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
											HX_STACK_LINE(376)
											Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
											HX_STACK_LINE(376)
											Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
											HX_STACK_LINE(376)
											Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
											HX_STACK_LINE(376)
											Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
											HX_STACK_LINE(376)
											Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
											HX_STACK_LINE(376)
											Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
											HX_STACK_LINE(376)
											Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
											HX_STACK_LINE(376)
											Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
											HX_STACK_LINE(376)
											Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
											HX_STACK_LINE(376)
											Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
											HX_STACK_LINE(376)
											Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
											HX_STACK_LINE(376)
											result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
											HX_STACK_LINE(376)
											result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
											HX_STACK_LINE(376)
											result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
											HX_STACK_LINE(376)
											result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
											HX_STACK_LINE(376)
											result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
											HX_STACK_LINE(376)
											result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
											HX_STACK_LINE(376)
											result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
											HX_STACK_LINE(376)
											result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
											HX_STACK_LINE(376)
											result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
											HX_STACK_LINE(376)
											result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
											HX_STACK_LINE(376)
											result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
											HX_STACK_LINE(376)
											result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
											HX_STACK_LINE(376)
											result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
											HX_STACK_LINE(376)
											result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
											HX_STACK_LINE(376)
											result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
											HX_STACK_LINE(376)
											result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
											HX_STACK_LINE(376)
											result;
										}
									}
									HX_STACK_LINE(376)
									{
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localWorld;		HX_STACK_VAR(other,"other");
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											Array< Float > result = instance->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(376)
											Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
											HX_STACK_LINE(376)
											Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
											HX_STACK_LINE(376)
											Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
											HX_STACK_LINE(376)
											Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
											HX_STACK_LINE(376)
											Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
											HX_STACK_LINE(376)
											Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
											HX_STACK_LINE(376)
											Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
											HX_STACK_LINE(376)
											Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
											HX_STACK_LINE(376)
											Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
											HX_STACK_LINE(376)
											Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
											HX_STACK_LINE(376)
											Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
											HX_STACK_LINE(376)
											Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
											HX_STACK_LINE(376)
											Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
											HX_STACK_LINE(376)
											Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
											HX_STACK_LINE(376)
											Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
											HX_STACK_LINE(376)
											Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
											HX_STACK_LINE(376)
											Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
											HX_STACK_LINE(376)
											Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
											HX_STACK_LINE(376)
											Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
											HX_STACK_LINE(376)
											Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
											HX_STACK_LINE(376)
											Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
											HX_STACK_LINE(376)
											Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
											HX_STACK_LINE(376)
											Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
											HX_STACK_LINE(376)
											Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
											HX_STACK_LINE(376)
											Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
											HX_STACK_LINE(376)
											Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
											HX_STACK_LINE(376)
											Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
											HX_STACK_LINE(376)
											Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
											HX_STACK_LINE(376)
											Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
											HX_STACK_LINE(376)
											Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
											HX_STACK_LINE(376)
											Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
											HX_STACK_LINE(376)
											Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
											HX_STACK_LINE(376)
											result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
											HX_STACK_LINE(376)
											result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
											HX_STACK_LINE(376)
											result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
											HX_STACK_LINE(376)
											result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
											HX_STACK_LINE(376)
											result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
											HX_STACK_LINE(376)
											result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
											HX_STACK_LINE(376)
											result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
											HX_STACK_LINE(376)
											result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
											HX_STACK_LINE(376)
											result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
											HX_STACK_LINE(376)
											result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
											HX_STACK_LINE(376)
											result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
											HX_STACK_LINE(376)
											result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
											HX_STACK_LINE(376)
											result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
											HX_STACK_LINE(376)
											result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
											HX_STACK_LINE(376)
											result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
											HX_STACK_LINE(376)
											result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
											HX_STACK_LINE(376)
											result;
										}
									}
								}
								struct _Function_5_1{
									inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh &instance){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",376,0xf4cec482)
										{
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::tools::math::Matrix _g16 = instance->parent->getWorldMatrix();		HX_STACK_VAR(_g16,"_g16");
											HX_STACK_LINE(376)
											return (_g16 != null());
										}
										return null();
									}
								};
								HX_STACK_LINE(376)
								if (((  (((  (((instance->parent != null()))) ? bool(_Function_5_1::Block(instance)) : bool(false) ))) ? bool((instance->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
									HX_STACK_LINE(376)
									{
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localTranslation;		HX_STACK_VAR(other,"other");
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											Array< Float > result = instance->_localWorld->m;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(376)
											Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
											HX_STACK_LINE(376)
											Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
											HX_STACK_LINE(376)
											Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
											HX_STACK_LINE(376)
											Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
											HX_STACK_LINE(376)
											Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
											HX_STACK_LINE(376)
											Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
											HX_STACK_LINE(376)
											Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
											HX_STACK_LINE(376)
											Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
											HX_STACK_LINE(376)
											Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
											HX_STACK_LINE(376)
											Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
											HX_STACK_LINE(376)
											Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
											HX_STACK_LINE(376)
											Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
											HX_STACK_LINE(376)
											Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
											HX_STACK_LINE(376)
											Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
											HX_STACK_LINE(376)
											Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
											HX_STACK_LINE(376)
											Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
											HX_STACK_LINE(376)
											Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
											HX_STACK_LINE(376)
											Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
											HX_STACK_LINE(376)
											Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
											HX_STACK_LINE(376)
											Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
											HX_STACK_LINE(376)
											Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
											HX_STACK_LINE(376)
											Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
											HX_STACK_LINE(376)
											Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
											HX_STACK_LINE(376)
											Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
											HX_STACK_LINE(376)
											Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
											HX_STACK_LINE(376)
											Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
											HX_STACK_LINE(376)
											Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
											HX_STACK_LINE(376)
											Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
											HX_STACK_LINE(376)
											Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
											HX_STACK_LINE(376)
											Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
											HX_STACK_LINE(376)
											Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
											HX_STACK_LINE(376)
											Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
											HX_STACK_LINE(376)
											result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
											HX_STACK_LINE(376)
											result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
											HX_STACK_LINE(376)
											result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
											HX_STACK_LINE(376)
											result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
											HX_STACK_LINE(376)
											result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
											HX_STACK_LINE(376)
											result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
											HX_STACK_LINE(376)
											result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
											HX_STACK_LINE(376)
											result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
											HX_STACK_LINE(376)
											result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
											HX_STACK_LINE(376)
											result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
											HX_STACK_LINE(376)
											result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
											HX_STACK_LINE(376)
											result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
											HX_STACK_LINE(376)
											result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
											HX_STACK_LINE(376)
											result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
											HX_STACK_LINE(376)
											result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
											HX_STACK_LINE(376)
											result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
											HX_STACK_LINE(376)
											result;
										}
									}
									HX_STACK_LINE(376)
									::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = instance->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
									HX_STACK_LINE(376)
									{
										HX_STACK_LINE(376)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localWorld;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											Array< Float > result = instance->_worldMatrix->m;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(376)
											Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
											HX_STACK_LINE(376)
											Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
											HX_STACK_LINE(376)
											Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
											HX_STACK_LINE(376)
											Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
											HX_STACK_LINE(376)
											Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
											HX_STACK_LINE(376)
											Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
											HX_STACK_LINE(376)
											Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
											HX_STACK_LINE(376)
											Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
											HX_STACK_LINE(376)
											Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
											HX_STACK_LINE(376)
											Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
											HX_STACK_LINE(376)
											Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
											HX_STACK_LINE(376)
											Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
											HX_STACK_LINE(376)
											Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
											HX_STACK_LINE(376)
											Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
											HX_STACK_LINE(376)
											Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
											HX_STACK_LINE(376)
											Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
											HX_STACK_LINE(376)
											Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
											HX_STACK_LINE(376)
											Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
											HX_STACK_LINE(376)
											Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
											HX_STACK_LINE(376)
											Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
											HX_STACK_LINE(376)
											Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
											HX_STACK_LINE(376)
											Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
											HX_STACK_LINE(376)
											Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
											HX_STACK_LINE(376)
											Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
											HX_STACK_LINE(376)
											Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
											HX_STACK_LINE(376)
											Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
											HX_STACK_LINE(376)
											Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
											HX_STACK_LINE(376)
											Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
											HX_STACK_LINE(376)
											Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
											HX_STACK_LINE(376)
											Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
											HX_STACK_LINE(376)
											Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
											HX_STACK_LINE(376)
											Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
											HX_STACK_LINE(376)
											result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
											HX_STACK_LINE(376)
											result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
											HX_STACK_LINE(376)
											result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
											HX_STACK_LINE(376)
											result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
											HX_STACK_LINE(376)
											result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
											HX_STACK_LINE(376)
											result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
											HX_STACK_LINE(376)
											result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
											HX_STACK_LINE(376)
											result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
											HX_STACK_LINE(376)
											result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
											HX_STACK_LINE(376)
											result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
											HX_STACK_LINE(376)
											result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
											HX_STACK_LINE(376)
											result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
											HX_STACK_LINE(376)
											result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
											HX_STACK_LINE(376)
											result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
											HX_STACK_LINE(376)
											result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
											HX_STACK_LINE(376)
											result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
											HX_STACK_LINE(376)
											result;
										}
									}
								}
								else{
									HX_STACK_LINE(376)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(376)
									::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localTranslation;		HX_STACK_VAR(other,"other");
									HX_STACK_LINE(376)
									{
										HX_STACK_LINE(376)
										Array< Float > result = instance->_worldMatrix->m;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(376)
										Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
										HX_STACK_LINE(376)
										Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
										HX_STACK_LINE(376)
										Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
										HX_STACK_LINE(376)
										Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
										HX_STACK_LINE(376)
										Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
										HX_STACK_LINE(376)
										Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
										HX_STACK_LINE(376)
										Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
										HX_STACK_LINE(376)
										Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
										HX_STACK_LINE(376)
										Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
										HX_STACK_LINE(376)
										Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
										HX_STACK_LINE(376)
										Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
										HX_STACK_LINE(376)
										Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
										HX_STACK_LINE(376)
										Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
										HX_STACK_LINE(376)
										Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
										HX_STACK_LINE(376)
										Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
										HX_STACK_LINE(376)
										Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
										HX_STACK_LINE(376)
										Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
										HX_STACK_LINE(376)
										Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
										HX_STACK_LINE(376)
										Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
										HX_STACK_LINE(376)
										Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
										HX_STACK_LINE(376)
										Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
										HX_STACK_LINE(376)
										Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
										HX_STACK_LINE(376)
										Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
										HX_STACK_LINE(376)
										Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
										HX_STACK_LINE(376)
										Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
										HX_STACK_LINE(376)
										Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
										HX_STACK_LINE(376)
										Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
										HX_STACK_LINE(376)
										Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
										HX_STACK_LINE(376)
										Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
										HX_STACK_LINE(376)
										Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
										HX_STACK_LINE(376)
										Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
										HX_STACK_LINE(376)
										Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
										HX_STACK_LINE(376)
										result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
										HX_STACK_LINE(376)
										result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
										HX_STACK_LINE(376)
										result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
										HX_STACK_LINE(376)
										result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
										HX_STACK_LINE(376)
										result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
										HX_STACK_LINE(376)
										result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
										HX_STACK_LINE(376)
										result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
										HX_STACK_LINE(376)
										result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
										HX_STACK_LINE(376)
										result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
										HX_STACK_LINE(376)
										result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
										HX_STACK_LINE(376)
										result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
										HX_STACK_LINE(376)
										result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
										HX_STACK_LINE(376)
										result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
										HX_STACK_LINE(376)
										result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
										HX_STACK_LINE(376)
										result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
										HX_STACK_LINE(376)
										result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
										HX_STACK_LINE(376)
										result;
									}
								}
								HX_STACK_LINE(376)
								if (((instance->_boundingInfo != null()))){
									HX_STACK_LINE(376)
									Float _g17 = ::Math_obj::max(instance->scaling->x,instance->scaling->y);		HX_STACK_VAR(_g17,"_g17");
									HX_STACK_LINE(376)
									instance->_scaleFactor = _g17;
									HX_STACK_LINE(376)
									Float _g18 = ::Math_obj::max(instance->_scaleFactor,instance->scaling->z);		HX_STACK_VAR(_g18,"_g18");
									HX_STACK_LINE(376)
									instance->_scaleFactor = _g18;
									struct _Function_6_1{
										inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh &instance){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",376,0xf4cec482)
											{
												HX_STACK_LINE(376)
												Dynamic _g19 = ::Reflect_obj::field(instance->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g19,"_g19");
												HX_STACK_LINE(376)
												return (_g19 != null());
											}
											return null();
										}
									};
									HX_STACK_LINE(376)
									if (((  (((instance->parent != null()))) ? bool(_Function_6_1::Block(instance)) : bool(false) ))){
										HX_STACK_LINE(376)
										Dynamic _g20 = ::Reflect_obj::field(instance->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g20,"_g20");
										HX_STACK_LINE(376)
										Float _g21 = (instance->_scaleFactor * _g20);		HX_STACK_VAR(_g21,"_g21");
										HX_STACK_LINE(376)
										instance->_scaleFactor = _g21;
									}
									HX_STACK_LINE(376)
									instance->_boundingInfo->_update(instance->_worldMatrix,instance->_scaleFactor);
									HX_STACK_LINE(376)
									{
										HX_STACK_LINE(376)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(376)
										int _g = instance->subMeshes->length;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(376)
										while((true)){
											HX_STACK_LINE(376)
											if ((!(((_g1 < _g))))){
												HX_STACK_LINE(376)
												break;
											}
											HX_STACK_LINE(376)
											int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
											HX_STACK_LINE(376)
											::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh1 = instance->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh1,"subMesh1");
											HX_STACK_LINE(376)
											subMesh1->_boundingInfo->_update(instance->_worldMatrix,instance->_scaleFactor);
										}
									}
								}
								HX_STACK_LINE(376)
								{
									HX_STACK_LINE(376)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = instance->_absolutePosition;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(376)
									_this->x = instance->_worldMatrix->m->__get((int)12);
									HX_STACK_LINE(376)
									_this->y = instance->_worldMatrix->m->__get((int)13);
									HX_STACK_LINE(376)
									_this->z = instance->_worldMatrix->m->__get((int)14);
								}
								HX_STACK_LINE(376)
								ret = instance->_worldMatrix;
							}
							HX_STACK_LINE(376)
							ret;
						}
						HX_STACK_LINE(376)
						return instance->_worldMatrix;
					}
					return null();
				}
			};
			HX_STACK_LINE(376)
			(_Function_2_1::Block(instance))->copyToArray(this->_worldMatricesInstancesArray,offset);
			HX_STACK_LINE(377)
			hx::AddEq(offset,(int)16);
			HX_STACK_LINE(378)
			(instancesCount)++;
			HX_STACK_LINE(379)
			(instanceIndex)++;
		}
		HX_STACK_LINE(383)
		int offsetLocation0 = effect->getAttributeLocationByName(HX_CSTRING("world0"));		HX_STACK_VAR(offsetLocation0,"offsetLocation0");
		HX_STACK_LINE(384)
		int offsetLocation1 = effect->getAttributeLocationByName(HX_CSTRING("world1"));		HX_STACK_VAR(offsetLocation1,"offsetLocation1");
		HX_STACK_LINE(385)
		int offsetLocation2 = effect->getAttributeLocationByName(HX_CSTRING("world2"));		HX_STACK_VAR(offsetLocation2,"offsetLocation2");
		HX_STACK_LINE(386)
		int offsetLocation3 = effect->getAttributeLocationByName(HX_CSTRING("world3"));		HX_STACK_VAR(offsetLocation3,"offsetLocation3");
		HX_STACK_LINE(388)
		Array< int > offsetLocations = Array_obj< int >::__new().Add(offsetLocation0).Add(offsetLocation1).Add(offsetLocation2).Add(offsetLocation3);		HX_STACK_VAR(offsetLocations,"offsetLocations");
		HX_STACK_LINE(390)
		engine->updateAndBindInstancesBuffer(this->_worldMatricesInstancesBuffer,this->_worldMatricesInstancesArray,offsetLocations);
		HX_STACK_LINE(392)
		this->_draw(subMesh,!(wireFrame),instancesCount);
		HX_STACK_LINE(394)
		engine->unBindInstancesBuffer(this->_worldMatricesInstancesBuffer,offsetLocations);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Mesh_obj,_renderWithInstances,(void))

Void Mesh_obj::render( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","render",0x8dcb2ac8,"com.gamestudiohx.babylonhx.mesh.Mesh.render","com/gamestudiohx/babylonhx/mesh/Mesh.hx",397,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(subMesh,"subMesh")
		HX_STACK_LINE(398)
		::com::gamestudiohx::babylonhx::Scene scene = this->getScene();		HX_STACK_VAR(scene,"scene");
		HX_STACK_LINE(401)
		::com::gamestudiohx::babylonhx::mesh::InstancesBatch batch = this->_getInstancesRenderList();		HX_STACK_VAR(batch,"batch");
		HX_STACK_LINE(403)
		if ((batch->mustReturn)){
			HX_STACK_LINE(404)
			return null();
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",408,0xf4cec482)
				{
					HX_STACK_LINE(408)
					::haxe::ds::StringMap _g = __this->_geometry->getVertexBuffers();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(408)
					return (_g == null());
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",408,0xf4cec482)
				{
					HX_STACK_LINE(408)
					Dynamic _g1 = __this->_geometry->getIndexBuffer();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(408)
					return (_g1 == null());
				}
				return null();
			}
		};
		HX_STACK_LINE(408)
		if (((  ((!(((  ((!(((this->_geometry == null()))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))))) ? bool(_Function_1_2::Block(this)) : bool(true) ))){
			HX_STACK_LINE(409)
			return null();
		}
		HX_STACK_LINE(413)
		{
			HX_STACK_LINE(413)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(413)
			int _g = this->_onBeforeRenderCallbacks->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(413)
			while((true)){
				HX_STACK_LINE(413)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(413)
					break;
				}
				HX_STACK_LINE(413)
				int callbackIndex = (_g1)++;		HX_STACK_VAR(callbackIndex,"callbackIndex");
				HX_STACK_LINE(414)
				this->_onBeforeRenderCallbacks->__GetItem(callbackIndex)();
			}
		}
		HX_STACK_LINE(417)
		::com::gamestudiohx::babylonhx::Engine engine = scene->getEngine();		HX_STACK_VAR(engine,"engine");
		HX_STACK_LINE(418)
		bool hardwareInstancedRendering = (bool((engine->getCaps()->__Field(HX_CSTRING("instancedArrays"),true) != null())) && bool((batch->visibleInstances != null())));		HX_STACK_VAR(hardwareInstancedRendering,"hardwareInstancedRendering");
		HX_STACK_LINE(421)
		Dynamic effectiveMaterial = subMesh->getMaterial();		HX_STACK_VAR(effectiveMaterial,"effectiveMaterial");
		struct _Function_1_3{
			inline static bool Block( Dynamic &effectiveMaterial,hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this,bool &hardwareInstancedRendering){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",423,0xf4cec482)
				{
					HX_STACK_LINE(423)
					Dynamic _g2 = effectiveMaterial->__Field(HX_CSTRING("isReady"),true)(__this,hardwareInstancedRendering);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(423)
					return (_g2 == null());
				}
				return null();
			}
		};
		HX_STACK_LINE(423)
		if (((  ((!(((effectiveMaterial == null()))))) ? bool(_Function_1_3::Block(effectiveMaterial,this,hardwareInstancedRendering)) : bool(true) ))){
			HX_STACK_LINE(424)
			return null();
		}
		HX_STACK_LINE(428)
		::com::gamestudiohx::babylonhx::tools::math::Matrix world;		HX_STACK_VAR(world,"world");
		HX_STACK_LINE(428)
		{
			HX_STACK_LINE(428)
			int _g3 = this->_scene->getRenderId();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(428)
			if (((this->_currentRenderId != _g3))){
				HX_STACK_LINE(428)
				bool force = false;		HX_STACK_VAR(force,"force");
				HX_STACK_LINE(428)
				::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",428,0xf4cec482)
						{
							HX_STACK_LINE(428)
							int _g4 = __this->_scene->getRenderId();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(428)
							return (  ((!(((__this->_currentRenderId == _g4))))) ? bool(__this->isSynchronized(null())) : bool(true) );
						}
						return null();
					}
				};
				HX_STACK_LINE(428)
				if (((  ((!(force))) ? bool(_Function_3_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(428)
					this->_childrenFlag = (int)0;
				}
				else{
					HX_STACK_LINE(428)
					this->_childrenFlag = (int)1;
					HX_STACK_LINE(428)
					this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
					HX_STACK_LINE(428)
					this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
					HX_STACK_LINE(428)
					this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
					HX_STACK_LINE(428)
					int _g5 = this->_scene->getRenderId();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(428)
					this->_currentRenderId = _g5;
					HX_STACK_LINE(428)
					{
						HX_STACK_LINE(428)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(428)
						result->m[(int)0] = this->scaling->x;
						HX_STACK_LINE(428)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(428)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(428)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(428)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(428)
						result->m[(int)5] = this->scaling->y;
						HX_STACK_LINE(428)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(428)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(428)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(428)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(428)
						result->m[(int)10] = this->scaling->z;
						HX_STACK_LINE(428)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(428)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(428)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(428)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(428)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(428)
						result;
					}
					HX_STACK_LINE(428)
					if (((this->rotationQuaternion != null()))){
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = this->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(428)
							Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(428)
							Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
							HX_STACK_LINE(428)
							Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
							HX_STACK_LINE(428)
							Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
							HX_STACK_LINE(428)
							Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
							HX_STACK_LINE(428)
							Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
							HX_STACK_LINE(428)
							Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
							HX_STACK_LINE(428)
							Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
							HX_STACK_LINE(428)
							Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
							HX_STACK_LINE(428)
							result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
							HX_STACK_LINE(428)
							result->m[(int)1] = (2.0 * ((xy + zw)));
							HX_STACK_LINE(428)
							result->m[(int)2] = (2.0 * ((zx - yw)));
							HX_STACK_LINE(428)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(428)
							result->m[(int)4] = (2.0 * ((xy - zw)));
							HX_STACK_LINE(428)
							result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
							HX_STACK_LINE(428)
							result->m[(int)6] = (2.0 * ((yz + xw)));
							HX_STACK_LINE(428)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(428)
							result->m[(int)8] = (2.0 * ((zx + yw)));
							HX_STACK_LINE(428)
							result->m[(int)9] = (2.0 * ((yz - xw)));
							HX_STACK_LINE(428)
							result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
							HX_STACK_LINE(428)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(428)
							result->m[(int)12] = (int)0;
							HX_STACK_LINE(428)
							result->m[(int)13] = (int)0;
							HX_STACK_LINE(428)
							result->m[(int)14] = (int)0;
							HX_STACK_LINE(428)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(428)
							result;
						}
						HX_STACK_LINE(428)
						this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
					}
					else{
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion _g6;		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
								HX_STACK_LINE(428)
								Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
								HX_STACK_LINE(428)
								Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
								HX_STACK_LINE(428)
								Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
								HX_STACK_LINE(428)
								Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
								HX_STACK_LINE(428)
								Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
								HX_STACK_LINE(428)
								Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
								HX_STACK_LINE(428)
								Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
								HX_STACK_LINE(428)
								Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
								HX_STACK_LINE(428)
								tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
								HX_STACK_LINE(428)
								tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
								HX_STACK_LINE(428)
								tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
								HX_STACK_LINE(428)
								tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
								HX_STACK_LINE(428)
								_g6 = tempQuaternion;
							}
							HX_STACK_LINE(428)
							tempQuaternion = _g6;
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
								HX_STACK_LINE(428)
								Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
								HX_STACK_LINE(428)
								Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
								HX_STACK_LINE(428)
								Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
								HX_STACK_LINE(428)
								Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
								HX_STACK_LINE(428)
								Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
								HX_STACK_LINE(428)
								Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
								HX_STACK_LINE(428)
								Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
								HX_STACK_LINE(428)
								Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
								HX_STACK_LINE(428)
								result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
								HX_STACK_LINE(428)
								result->m[(int)1] = (2.0 * ((xy + zw)));
								HX_STACK_LINE(428)
								result->m[(int)2] = (2.0 * ((zx - yw)));
								HX_STACK_LINE(428)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)4] = (2.0 * ((xy - zw)));
								HX_STACK_LINE(428)
								result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
								HX_STACK_LINE(428)
								result->m[(int)6] = (2.0 * ((yz + xw)));
								HX_STACK_LINE(428)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)8] = (2.0 * ((zx + yw)));
								HX_STACK_LINE(428)
								result->m[(int)9] = (2.0 * ((yz - xw)));
								HX_STACK_LINE(428)
								result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
								HX_STACK_LINE(428)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)12] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)13] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)14] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(428)
								result;
							}
						}
						HX_STACK_LINE(428)
						this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
					}
					HX_STACK_LINE(428)
					if ((this->infiniteDistance)){
						HX_STACK_LINE(428)
						::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								result->m[(int)0] = 1.0;
								HX_STACK_LINE(428)
								result->m[(int)1] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)2] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)4] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)5] = 1.0;
								HX_STACK_LINE(428)
								result->m[(int)6] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)8] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)9] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)10] = 1.0;
								HX_STACK_LINE(428)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)12] = (this->position->x + camera->position->x);
								HX_STACK_LINE(428)
								result->m[(int)13] = (this->position->y + camera->position->y);
								HX_STACK_LINE(428)
								result->m[(int)14] = (this->position->z + camera->position->z);
								HX_STACK_LINE(428)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(428)
								result;
							}
						}
					}
					else{
						HX_STACK_LINE(428)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(428)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(428)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(428)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(428)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(428)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(428)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(428)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(428)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(428)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(428)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(428)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(428)
							result->m[(int)12] = this->position->x;
							HX_STACK_LINE(428)
							result->m[(int)13] = this->position->y;
							HX_STACK_LINE(428)
							result->m[(int)14] = this->position->z;
							HX_STACK_LINE(428)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(428)
							result;
						}
					}
					HX_STACK_LINE(428)
					{
						HX_STACK_LINE(428)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(428)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(428)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(428)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(428)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(428)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(428)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(428)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(428)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(428)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(428)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(428)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(428)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(428)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(428)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(428)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(428)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(428)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(428)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(428)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(428)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(428)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(428)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(428)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(428)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(428)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(428)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(428)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(428)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(428)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(428)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(428)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(428)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(428)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(428)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(428)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(428)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(428)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(428)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(428)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(428)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(428)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(428)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(428)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(428)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(428)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(428)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(428)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(428)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(428)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(428)
							result;
						}
					}
					HX_STACK_LINE(428)
					{
						HX_STACK_LINE(428)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(428)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(428)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(428)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(428)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(428)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(428)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(428)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(428)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(428)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(428)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(428)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(428)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(428)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(428)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(428)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(428)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(428)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(428)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(428)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(428)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(428)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(428)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(428)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(428)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(428)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(428)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(428)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(428)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(428)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(428)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(428)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(428)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(428)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(428)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(428)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(428)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(428)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(428)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(428)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(428)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(428)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(428)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(428)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(428)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(428)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(428)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(428)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(428)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(428)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(428)
							result;
						}
					}
					HX_STACK_LINE(428)
					if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
						HX_STACK_LINE(428)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
						}
						HX_STACK_LINE(428)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
						}
						HX_STACK_LINE(428)
						if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
								HX_STACK_LINE(428)
								hx::AddEq(localPosition->x,otherVector->x);
								HX_STACK_LINE(428)
								hx::AddEq(localPosition->y,otherVector->y);
								HX_STACK_LINE(428)
								hx::AddEq(localPosition->z,otherVector->z);
							}
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(428)
								{
									HX_STACK_LINE(428)
									result->m[(int)0] = 1.0;
									HX_STACK_LINE(428)
									result->m[(int)1] = (int)0;
									HX_STACK_LINE(428)
									result->m[(int)2] = (int)0;
									HX_STACK_LINE(428)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(428)
									result->m[(int)4] = (int)0;
									HX_STACK_LINE(428)
									result->m[(int)5] = 1.0;
									HX_STACK_LINE(428)
									result->m[(int)6] = (int)0;
									HX_STACK_LINE(428)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(428)
									result->m[(int)8] = (int)0;
									HX_STACK_LINE(428)
									result->m[(int)9] = (int)0;
									HX_STACK_LINE(428)
									result->m[(int)10] = 1.0;
									HX_STACK_LINE(428)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(428)
									result->m[(int)12] = localPosition->x;
									HX_STACK_LINE(428)
									result->m[(int)13] = localPosition->y;
									HX_STACK_LINE(428)
									result->m[(int)14] = localPosition->z;
									HX_STACK_LINE(428)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(428)
									result;
								}
							}
						}
						HX_STACK_LINE(428)
						if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
							HX_STACK_LINE(428)
							zero = this->_scene->activeCamera->position;
						}
						else{
							HX_STACK_LINE(428)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
								HX_STACK_LINE(428)
								zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
							HX_STACK_LINE(428)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
								HX_STACK_LINE(428)
								zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
							HX_STACK_LINE(428)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
								HX_STACK_LINE(428)
								zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
						}
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								zAxis->x = (zero->x - localPosition->x);
								HX_STACK_LINE(428)
								zAxis->y = (zero->y - localPosition->y);
								HX_STACK_LINE(428)
								zAxis->z = (zero->z - localPosition->z);
							}
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(428)
								if (((len != (int)0))){
									HX_STACK_LINE(428)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(428)
									hx::MultEq(zAxis->x,num);
									HX_STACK_LINE(428)
									hx::MultEq(zAxis->y,num);
									HX_STACK_LINE(428)
									hx::MultEq(zAxis->z,num);
								}
							}
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
								HX_STACK_LINE(428)
								xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
								HX_STACK_LINE(428)
								xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
							}
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(428)
								if (((len != (int)0))){
									HX_STACK_LINE(428)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(428)
									hx::MultEq(xAxis->x,num);
									HX_STACK_LINE(428)
									hx::MultEq(xAxis->y,num);
									HX_STACK_LINE(428)
									hx::MultEq(xAxis->z,num);
								}
							}
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
								HX_STACK_LINE(428)
								yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
								HX_STACK_LINE(428)
								yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
							}
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(428)
								if (((len != (int)0))){
									HX_STACK_LINE(428)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(428)
									hx::MultEq(yAxis->x,num);
									HX_STACK_LINE(428)
									hx::MultEq(yAxis->y,num);
									HX_STACK_LINE(428)
									hx::MultEq(yAxis->z,num);
								}
							}
							HX_STACK_LINE(428)
							Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
							HX_STACK_LINE(428)
							Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
							HX_STACK_LINE(428)
							Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								result->m[(int)0] = xAxis->x;
								HX_STACK_LINE(428)
								result->m[(int)1] = yAxis->x;
								HX_STACK_LINE(428)
								result->m[(int)2] = zAxis->x;
								HX_STACK_LINE(428)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)4] = xAxis->y;
								HX_STACK_LINE(428)
								result->m[(int)5] = yAxis->y;
								HX_STACK_LINE(428)
								result->m[(int)6] = zAxis->y;
								HX_STACK_LINE(428)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)8] = xAxis->z;
								HX_STACK_LINE(428)
								result->m[(int)9] = yAxis->z;
								HX_STACK_LINE(428)
								result->m[(int)10] = zAxis->z;
								HX_STACK_LINE(428)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(428)
								result->m[(int)12] = ex;
								HX_STACK_LINE(428)
								result->m[(int)13] = ey;
								HX_STACK_LINE(428)
								result->m[(int)14] = ez;
								HX_STACK_LINE(428)
								result->m[(int)15] = (int)1;
								HX_STACK_LINE(428)
								result;
							}
						}
						HX_STACK_LINE(428)
						this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localBillboard;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
								HX_STACK_LINE(428)
								Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
								HX_STACK_LINE(428)
								Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
								HX_STACK_LINE(428)
								Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
								HX_STACK_LINE(428)
								Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
								HX_STACK_LINE(428)
								Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
								HX_STACK_LINE(428)
								Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
								HX_STACK_LINE(428)
								Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
								HX_STACK_LINE(428)
								Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
								HX_STACK_LINE(428)
								Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
								HX_STACK_LINE(428)
								Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
								HX_STACK_LINE(428)
								Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
								HX_STACK_LINE(428)
								Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
								HX_STACK_LINE(428)
								Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
								HX_STACK_LINE(428)
								Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
								HX_STACK_LINE(428)
								Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
								HX_STACK_LINE(428)
								Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
								HX_STACK_LINE(428)
								Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
								HX_STACK_LINE(428)
								Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
								HX_STACK_LINE(428)
								Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
								HX_STACK_LINE(428)
								Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
								HX_STACK_LINE(428)
								Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
								HX_STACK_LINE(428)
								Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
								HX_STACK_LINE(428)
								Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
								HX_STACK_LINE(428)
								Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
								HX_STACK_LINE(428)
								Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
								HX_STACK_LINE(428)
								Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
								HX_STACK_LINE(428)
								Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
								HX_STACK_LINE(428)
								Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
								HX_STACK_LINE(428)
								Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
								HX_STACK_LINE(428)
								Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
								HX_STACK_LINE(428)
								Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
								HX_STACK_LINE(428)
								Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
								HX_STACK_LINE(428)
								Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
								HX_STACK_LINE(428)
								Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
								HX_STACK_LINE(428)
								Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
								HX_STACK_LINE(428)
								Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
								HX_STACK_LINE(428)
								Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
								HX_STACK_LINE(428)
								Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
								HX_STACK_LINE(428)
								_this->m[(int)0] = (l23 * l27);
								HX_STACK_LINE(428)
								_this->m[(int)4] = (l24 * l27);
								HX_STACK_LINE(428)
								_this->m[(int)8] = (l25 * l27);
								HX_STACK_LINE(428)
								_this->m[(int)12] = (l26 * l27);
								HX_STACK_LINE(428)
								_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
								HX_STACK_LINE(428)
								_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
								HX_STACK_LINE(428)
								_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
								HX_STACK_LINE(428)
								_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
								HX_STACK_LINE(428)
								_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
								HX_STACK_LINE(428)
								_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
								HX_STACK_LINE(428)
								_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
								HX_STACK_LINE(428)
								_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
								HX_STACK_LINE(428)
								_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
								HX_STACK_LINE(428)
								_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
								HX_STACK_LINE(428)
								_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
								HX_STACK_LINE(428)
								_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
							}
						}
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(428)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(428)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(428)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(428)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(428)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(428)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(428)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(428)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(428)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(428)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(428)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(428)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(428)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(428)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(428)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(428)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(428)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(428)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(428)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(428)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(428)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(428)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(428)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(428)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(428)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(428)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(428)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(428)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(428)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(428)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(428)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(428)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(428)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(428)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(428)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(428)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(428)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(428)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(428)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(428)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(428)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(428)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(428)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(428)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(428)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(428)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(428)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(428)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(428)
								result;
							}
						}
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(428)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(428)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(428)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(428)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(428)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(428)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(428)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(428)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(428)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(428)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(428)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(428)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(428)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(428)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(428)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(428)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(428)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(428)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(428)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(428)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(428)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(428)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(428)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(428)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(428)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(428)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(428)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(428)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(428)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(428)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(428)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(428)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(428)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(428)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(428)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(428)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(428)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(428)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(428)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(428)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(428)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(428)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(428)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(428)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(428)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(428)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(428)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(428)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(428)
								result;
							}
						}
					}
					struct _Function_4_1{
						inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",428,0xf4cec482)
							{
								HX_STACK_LINE(428)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _g7 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(428)
								return (_g7 != null());
							}
							return null();
						}
					};
					HX_STACK_LINE(428)
					if (((  (((  (((this->parent != null()))) ? bool(_Function_4_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(428)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(428)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(428)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(428)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(428)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(428)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(428)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(428)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(428)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(428)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(428)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(428)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(428)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(428)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(428)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(428)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(428)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(428)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(428)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(428)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(428)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(428)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(428)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(428)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(428)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(428)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(428)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(428)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(428)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(428)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(428)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(428)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(428)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(428)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(428)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(428)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(428)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(428)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(428)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(428)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(428)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(428)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(428)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(428)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(428)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(428)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(428)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(428)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(428)
								result;
							}
						}
						HX_STACK_LINE(428)
						::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localWorld;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(428)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(428)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(428)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(428)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(428)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(428)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(428)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(428)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(428)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(428)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(428)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(428)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(428)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(428)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(428)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(428)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(428)
								Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(428)
								Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(428)
								Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(428)
								Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(428)
								Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(428)
								Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(428)
								Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(428)
								Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(428)
								Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(428)
								Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(428)
								Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(428)
								Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(428)
								Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(428)
								Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(428)
								Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(428)
								Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(428)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(428)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(428)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(428)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(428)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(428)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(428)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(428)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(428)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(428)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(428)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(428)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(428)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(428)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(428)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(428)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(428)
								result;
							}
						}
					}
					else{
						HX_STACK_LINE(428)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(428)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(428)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(428)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(428)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(428)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(428)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(428)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(428)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(428)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(428)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(428)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(428)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(428)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(428)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(428)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(428)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(428)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(428)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(428)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(428)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(428)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(428)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(428)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(428)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(428)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(428)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(428)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(428)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(428)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(428)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(428)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(428)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(428)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(428)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(428)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(428)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(428)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(428)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(428)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(428)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(428)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(428)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(428)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(428)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(428)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(428)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(428)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(428)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(428)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(428)
							result;
						}
					}
					HX_STACK_LINE(428)
					if (((this->_boundingInfo != null()))){
						HX_STACK_LINE(428)
						Float _g8 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(428)
						this->_scaleFactor = _g8;
						HX_STACK_LINE(428)
						Float _g9 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(428)
						this->_scaleFactor = _g9;
						struct _Function_5_1{
							inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",428,0xf4cec482)
								{
									HX_STACK_LINE(428)
									Dynamic _g10 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(428)
									return (_g10 != null());
								}
								return null();
							}
						};
						HX_STACK_LINE(428)
						if (((  (((this->parent != null()))) ? bool(_Function_5_1::Block(this)) : bool(false) ))){
							HX_STACK_LINE(428)
							Dynamic _g11 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(428)
							Float _g12 = (this->_scaleFactor * _g11);		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(428)
							this->_scaleFactor = _g12;
						}
						HX_STACK_LINE(428)
						this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(428)
							int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(428)
							while((true)){
								HX_STACK_LINE(428)
								if ((!(((_g1 < _g))))){
									HX_STACK_LINE(428)
									break;
								}
								HX_STACK_LINE(428)
								int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
								HX_STACK_LINE(428)
								::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh1 = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh1,"subMesh1");
								HX_STACK_LINE(428)
								subMesh1->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
							}
						}
					}
					HX_STACK_LINE(428)
					{
						HX_STACK_LINE(428)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_absolutePosition;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(428)
						_this->x = this->_worldMatrix->m->__get((int)12);
						HX_STACK_LINE(428)
						_this->y = this->_worldMatrix->m->__get((int)13);
						HX_STACK_LINE(428)
						_this->z = this->_worldMatrix->m->__get((int)14);
					}
					HX_STACK_LINE(428)
					ret = this->_worldMatrix;
				}
				HX_STACK_LINE(428)
				ret;
			}
			HX_STACK_LINE(428)
			world = this->_worldMatrix;
		}
		HX_STACK_LINE(435)
		::com::gamestudiohx::babylonhx::materials::Effect effect = effectiveMaterial->__Field(HX_CSTRING("getEffect"),true)();		HX_STACK_VAR(effect,"effect");
		HX_STACK_LINE(436)
		bool wireFrame = (bool(engine->forceWireframe) || bool(effectiveMaterial->__Field(HX_CSTRING("wireframe"),true)));		HX_STACK_VAR(wireFrame,"wireFrame");
		HX_STACK_LINE(437)
		this->_bind(subMesh,effect,wireFrame);
		HX_STACK_LINE(439)
		if ((::Std_obj::is(effectiveMaterial,hx::ClassOf< ::com::gamestudiohx::babylonhx::materials::Material >()))){
			HX_STACK_LINE(440)
			effectiveMaterial->__Field(HX_CSTRING("_preBind"),true)();
			HX_STACK_LINE(441)
			effectiveMaterial->__Field(HX_CSTRING("bind"),true)(world,hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(458)
		if ((hardwareInstancedRendering)){
			HX_STACK_LINE(459)
			this->_renderWithInstances(subMesh,wireFrame,batch,effect,engine);
		}
		else{
			HX_STACK_LINE(461)
			if ((batch->renderSelf)){
				HX_STACK_LINE(463)
				this->_draw(subMesh,!(wireFrame),null());
			}
			HX_STACK_LINE(465)
			if (((batch->visibleInstances != null()))){
				HX_STACK_LINE(468)
				int instanceIndex = (int)0;		HX_STACK_VAR(instanceIndex,"instanceIndex");
				HX_STACK_LINE(469)
				while((true)){
					HX_STACK_LINE(469)
					if ((!(((instanceIndex < batch->visibleInstances->length))))){
						HX_STACK_LINE(469)
						break;
					}
					HX_STACK_LINE(470)
					::com::gamestudiohx::babylonhx::mesh::InstancedMesh instance = batch->visibleInstances->__get(instanceIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::InstancedMesh >();		HX_STACK_VAR(instance,"instance");
					HX_STACK_LINE(473)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _g23;		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(473)
					{
						HX_STACK_LINE(473)
						int _g13 = instance->_scene->getRenderId();		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(473)
						if (((instance->_currentRenderId != _g13))){
							HX_STACK_LINE(473)
							bool force = false;		HX_STACK_VAR(force,"force");
							HX_STACK_LINE(473)
							::com::gamestudiohx::babylonhx::tools::math::Matrix ret = instance->_worldMatrix;		HX_STACK_VAR(ret,"ret");
							struct _Function_6_1{
								inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh &instance){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",473,0xf4cec482)
									{
										HX_STACK_LINE(473)
										int _g14 = instance->_scene->getRenderId();		HX_STACK_VAR(_g14,"_g14");
										HX_STACK_LINE(473)
										return (  ((!(((instance->_currentRenderId == _g14))))) ? bool(instance->isSynchronized(null())) : bool(true) );
									}
									return null();
								}
							};
							HX_STACK_LINE(473)
							if (((  ((!(force))) ? bool(_Function_6_1::Block(instance)) : bool(false) ))){
								HX_STACK_LINE(473)
								instance->_childrenFlag = (int)0;
							}
							else{
								HX_STACK_LINE(473)
								instance->_childrenFlag = (int)1;
								HX_STACK_LINE(473)
								instance->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(instance->position);
								HX_STACK_LINE(473)
								instance->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(instance->scaling);
								HX_STACK_LINE(473)
								instance->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
								HX_STACK_LINE(473)
								int _g15 = instance->_scene->getRenderId();		HX_STACK_VAR(_g15,"_g15");
								HX_STACK_LINE(473)
								instance->_currentRenderId = _g15;
								HX_STACK_LINE(473)
								{
									HX_STACK_LINE(473)
									::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localScaling;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(473)
									result->m[(int)0] = instance->scaling->x;
									HX_STACK_LINE(473)
									result->m[(int)1] = (int)0;
									HX_STACK_LINE(473)
									result->m[(int)2] = (int)0;
									HX_STACK_LINE(473)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(473)
									result->m[(int)4] = (int)0;
									HX_STACK_LINE(473)
									result->m[(int)5] = instance->scaling->y;
									HX_STACK_LINE(473)
									result->m[(int)6] = (int)0;
									HX_STACK_LINE(473)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(473)
									result->m[(int)8] = (int)0;
									HX_STACK_LINE(473)
									result->m[(int)9] = (int)0;
									HX_STACK_LINE(473)
									result->m[(int)10] = instance->scaling->z;
									HX_STACK_LINE(473)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(473)
									result->m[(int)12] = (int)0;
									HX_STACK_LINE(473)
									result->m[(int)13] = (int)0;
									HX_STACK_LINE(473)
									result->m[(int)14] = (int)0;
									HX_STACK_LINE(473)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(473)
									result;
								}
								HX_STACK_LINE(473)
								if (((instance->rotationQuaternion != null()))){
									HX_STACK_LINE(473)
									{
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = instance->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localRotation;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(473)
										Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
										HX_STACK_LINE(473)
										Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
										HX_STACK_LINE(473)
										Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
										HX_STACK_LINE(473)
										Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
										HX_STACK_LINE(473)
										Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
										HX_STACK_LINE(473)
										Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
										HX_STACK_LINE(473)
										Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
										HX_STACK_LINE(473)
										Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
										HX_STACK_LINE(473)
										Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
										HX_STACK_LINE(473)
										result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
										HX_STACK_LINE(473)
										result->m[(int)1] = (2.0 * ((xy + zw)));
										HX_STACK_LINE(473)
										result->m[(int)2] = (2.0 * ((zx - yw)));
										HX_STACK_LINE(473)
										result->m[(int)3] = (int)0;
										HX_STACK_LINE(473)
										result->m[(int)4] = (2.0 * ((xy - zw)));
										HX_STACK_LINE(473)
										result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
										HX_STACK_LINE(473)
										result->m[(int)6] = (2.0 * ((yz + xw)));
										HX_STACK_LINE(473)
										result->m[(int)7] = (int)0;
										HX_STACK_LINE(473)
										result->m[(int)8] = (2.0 * ((zx + yw)));
										HX_STACK_LINE(473)
										result->m[(int)9] = (2.0 * ((yz - xw)));
										HX_STACK_LINE(473)
										result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
										HX_STACK_LINE(473)
										result->m[(int)11] = (int)0;
										HX_STACK_LINE(473)
										result->m[(int)12] = (int)0;
										HX_STACK_LINE(473)
										result->m[(int)13] = (int)0;
										HX_STACK_LINE(473)
										result->m[(int)14] = (int)0;
										HX_STACK_LINE(473)
										result->m[(int)15] = 1.0;
										HX_STACK_LINE(473)
										result;
									}
									HX_STACK_LINE(473)
									instance->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(instance->rotationQuaternion);
								}
								else{
									HX_STACK_LINE(473)
									{
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localRotation;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Quaternion _g16;		HX_STACK_VAR(_g16,"_g16");
										HX_STACK_LINE(473)
										{
											HX_STACK_LINE(473)
											Float halfRoll = (instance->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
											HX_STACK_LINE(473)
											Float halfPitch = (instance->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
											HX_STACK_LINE(473)
											Float halfYaw = (instance->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
											HX_STACK_LINE(473)
											Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
											HX_STACK_LINE(473)
											Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
											HX_STACK_LINE(473)
											Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
											HX_STACK_LINE(473)
											Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
											HX_STACK_LINE(473)
											Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
											HX_STACK_LINE(473)
											Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
											HX_STACK_LINE(473)
											tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
											HX_STACK_LINE(473)
											tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
											HX_STACK_LINE(473)
											tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
											HX_STACK_LINE(473)
											tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
											HX_STACK_LINE(473)
											_g16 = tempQuaternion;
										}
										HX_STACK_LINE(473)
										tempQuaternion = _g16;
										HX_STACK_LINE(473)
										{
											HX_STACK_LINE(473)
											Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
											HX_STACK_LINE(473)
											Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
											HX_STACK_LINE(473)
											Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
											HX_STACK_LINE(473)
											Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
											HX_STACK_LINE(473)
											Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
											HX_STACK_LINE(473)
											Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
											HX_STACK_LINE(473)
											Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
											HX_STACK_LINE(473)
											Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
											HX_STACK_LINE(473)
											Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
											HX_STACK_LINE(473)
											result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
											HX_STACK_LINE(473)
											result->m[(int)1] = (2.0 * ((xy + zw)));
											HX_STACK_LINE(473)
											result->m[(int)2] = (2.0 * ((zx - yw)));
											HX_STACK_LINE(473)
											result->m[(int)3] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)4] = (2.0 * ((xy - zw)));
											HX_STACK_LINE(473)
											result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
											HX_STACK_LINE(473)
											result->m[(int)6] = (2.0 * ((yz + xw)));
											HX_STACK_LINE(473)
											result->m[(int)7] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)8] = (2.0 * ((zx + yw)));
											HX_STACK_LINE(473)
											result->m[(int)9] = (2.0 * ((yz - xw)));
											HX_STACK_LINE(473)
											result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
											HX_STACK_LINE(473)
											result->m[(int)11] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)12] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)13] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)14] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)15] = 1.0;
											HX_STACK_LINE(473)
											result;
										}
									}
									HX_STACK_LINE(473)
									instance->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(instance->rotation);
								}
								HX_STACK_LINE(473)
								if ((instance->infiniteDistance)){
									HX_STACK_LINE(473)
									::com::gamestudiohx::babylonhx::cameras::Camera camera = instance->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
									HX_STACK_LINE(473)
									{
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localTranslation;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(473)
										{
											HX_STACK_LINE(473)
											result->m[(int)0] = 1.0;
											HX_STACK_LINE(473)
											result->m[(int)1] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)2] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)3] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)4] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)5] = 1.0;
											HX_STACK_LINE(473)
											result->m[(int)6] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)7] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)8] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)9] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)10] = 1.0;
											HX_STACK_LINE(473)
											result->m[(int)11] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)12] = (instance->position->x + camera->position->x);
											HX_STACK_LINE(473)
											result->m[(int)13] = (instance->position->y + camera->position->y);
											HX_STACK_LINE(473)
											result->m[(int)14] = (instance->position->z + camera->position->z);
											HX_STACK_LINE(473)
											result->m[(int)15] = 1.0;
											HX_STACK_LINE(473)
											result;
										}
									}
								}
								else{
									HX_STACK_LINE(473)
									::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localTranslation;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(473)
									{
										HX_STACK_LINE(473)
										result->m[(int)0] = 1.0;
										HX_STACK_LINE(473)
										result->m[(int)1] = (int)0;
										HX_STACK_LINE(473)
										result->m[(int)2] = (int)0;
										HX_STACK_LINE(473)
										result->m[(int)3] = (int)0;
										HX_STACK_LINE(473)
										result->m[(int)4] = (int)0;
										HX_STACK_LINE(473)
										result->m[(int)5] = 1.0;
										HX_STACK_LINE(473)
										result->m[(int)6] = (int)0;
										HX_STACK_LINE(473)
										result->m[(int)7] = (int)0;
										HX_STACK_LINE(473)
										result->m[(int)8] = (int)0;
										HX_STACK_LINE(473)
										result->m[(int)9] = (int)0;
										HX_STACK_LINE(473)
										result->m[(int)10] = 1.0;
										HX_STACK_LINE(473)
										result->m[(int)11] = (int)0;
										HX_STACK_LINE(473)
										result->m[(int)12] = instance->position->x;
										HX_STACK_LINE(473)
										result->m[(int)13] = instance->position->y;
										HX_STACK_LINE(473)
										result->m[(int)14] = instance->position->z;
										HX_STACK_LINE(473)
										result->m[(int)15] = 1.0;
										HX_STACK_LINE(473)
										result;
									}
								}
								HX_STACK_LINE(473)
								{
									HX_STACK_LINE(473)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(473)
									::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localScaling;		HX_STACK_VAR(other,"other");
									HX_STACK_LINE(473)
									{
										HX_STACK_LINE(473)
										Array< Float > result = instance->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(473)
										Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
										HX_STACK_LINE(473)
										Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
										HX_STACK_LINE(473)
										Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
										HX_STACK_LINE(473)
										Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
										HX_STACK_LINE(473)
										Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
										HX_STACK_LINE(473)
										Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
										HX_STACK_LINE(473)
										Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
										HX_STACK_LINE(473)
										Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
										HX_STACK_LINE(473)
										Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
										HX_STACK_LINE(473)
										Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
										HX_STACK_LINE(473)
										Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
										HX_STACK_LINE(473)
										Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
										HX_STACK_LINE(473)
										Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
										HX_STACK_LINE(473)
										Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
										HX_STACK_LINE(473)
										Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
										HX_STACK_LINE(473)
										Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
										HX_STACK_LINE(473)
										Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
										HX_STACK_LINE(473)
										Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
										HX_STACK_LINE(473)
										Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
										HX_STACK_LINE(473)
										Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
										HX_STACK_LINE(473)
										Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
										HX_STACK_LINE(473)
										Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
										HX_STACK_LINE(473)
										Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
										HX_STACK_LINE(473)
										Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
										HX_STACK_LINE(473)
										Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
										HX_STACK_LINE(473)
										Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
										HX_STACK_LINE(473)
										Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
										HX_STACK_LINE(473)
										Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
										HX_STACK_LINE(473)
										Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
										HX_STACK_LINE(473)
										Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
										HX_STACK_LINE(473)
										Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
										HX_STACK_LINE(473)
										Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
										HX_STACK_LINE(473)
										result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
										HX_STACK_LINE(473)
										result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
										HX_STACK_LINE(473)
										result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
										HX_STACK_LINE(473)
										result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
										HX_STACK_LINE(473)
										result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
										HX_STACK_LINE(473)
										result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
										HX_STACK_LINE(473)
										result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
										HX_STACK_LINE(473)
										result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
										HX_STACK_LINE(473)
										result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
										HX_STACK_LINE(473)
										result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
										HX_STACK_LINE(473)
										result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
										HX_STACK_LINE(473)
										result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
										HX_STACK_LINE(473)
										result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
										HX_STACK_LINE(473)
										result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
										HX_STACK_LINE(473)
										result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
										HX_STACK_LINE(473)
										result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
										HX_STACK_LINE(473)
										result;
									}
								}
								HX_STACK_LINE(473)
								{
									HX_STACK_LINE(473)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(473)
									::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localRotation;		HX_STACK_VAR(other,"other");
									HX_STACK_LINE(473)
									{
										HX_STACK_LINE(473)
										Array< Float > result = instance->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(473)
										Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
										HX_STACK_LINE(473)
										Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
										HX_STACK_LINE(473)
										Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
										HX_STACK_LINE(473)
										Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
										HX_STACK_LINE(473)
										Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
										HX_STACK_LINE(473)
										Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
										HX_STACK_LINE(473)
										Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
										HX_STACK_LINE(473)
										Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
										HX_STACK_LINE(473)
										Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
										HX_STACK_LINE(473)
										Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
										HX_STACK_LINE(473)
										Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
										HX_STACK_LINE(473)
										Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
										HX_STACK_LINE(473)
										Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
										HX_STACK_LINE(473)
										Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
										HX_STACK_LINE(473)
										Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
										HX_STACK_LINE(473)
										Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
										HX_STACK_LINE(473)
										Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
										HX_STACK_LINE(473)
										Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
										HX_STACK_LINE(473)
										Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
										HX_STACK_LINE(473)
										Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
										HX_STACK_LINE(473)
										Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
										HX_STACK_LINE(473)
										Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
										HX_STACK_LINE(473)
										Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
										HX_STACK_LINE(473)
										Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
										HX_STACK_LINE(473)
										Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
										HX_STACK_LINE(473)
										Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
										HX_STACK_LINE(473)
										Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
										HX_STACK_LINE(473)
										Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
										HX_STACK_LINE(473)
										Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
										HX_STACK_LINE(473)
										Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
										HX_STACK_LINE(473)
										Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
										HX_STACK_LINE(473)
										Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
										HX_STACK_LINE(473)
										result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
										HX_STACK_LINE(473)
										result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
										HX_STACK_LINE(473)
										result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
										HX_STACK_LINE(473)
										result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
										HX_STACK_LINE(473)
										result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
										HX_STACK_LINE(473)
										result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
										HX_STACK_LINE(473)
										result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
										HX_STACK_LINE(473)
										result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
										HX_STACK_LINE(473)
										result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
										HX_STACK_LINE(473)
										result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
										HX_STACK_LINE(473)
										result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
										HX_STACK_LINE(473)
										result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
										HX_STACK_LINE(473)
										result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
										HX_STACK_LINE(473)
										result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
										HX_STACK_LINE(473)
										result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
										HX_STACK_LINE(473)
										result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
										HX_STACK_LINE(473)
										result;
									}
								}
								HX_STACK_LINE(473)
								if (((instance->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
									HX_STACK_LINE(473)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
									HX_STACK_LINE(473)
									{
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = instance->position;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(473)
										localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
									}
									HX_STACK_LINE(473)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
									HX_STACK_LINE(473)
									{
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = instance->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(473)
										zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
									}
									HX_STACK_LINE(473)
									if (((bool((instance->parent != null())) && bool((instance->parent->position != null()))))){
										HX_STACK_LINE(473)
										{
											HX_STACK_LINE(473)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = instance->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
											HX_STACK_LINE(473)
											hx::AddEq(localPosition->x,otherVector->x);
											HX_STACK_LINE(473)
											hx::AddEq(localPosition->y,otherVector->y);
											HX_STACK_LINE(473)
											hx::AddEq(localPosition->z,otherVector->z);
										}
										HX_STACK_LINE(473)
										{
											HX_STACK_LINE(473)
											::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localTranslation;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(473)
											{
												HX_STACK_LINE(473)
												result->m[(int)0] = 1.0;
												HX_STACK_LINE(473)
												result->m[(int)1] = (int)0;
												HX_STACK_LINE(473)
												result->m[(int)2] = (int)0;
												HX_STACK_LINE(473)
												result->m[(int)3] = (int)0;
												HX_STACK_LINE(473)
												result->m[(int)4] = (int)0;
												HX_STACK_LINE(473)
												result->m[(int)5] = 1.0;
												HX_STACK_LINE(473)
												result->m[(int)6] = (int)0;
												HX_STACK_LINE(473)
												result->m[(int)7] = (int)0;
												HX_STACK_LINE(473)
												result->m[(int)8] = (int)0;
												HX_STACK_LINE(473)
												result->m[(int)9] = (int)0;
												HX_STACK_LINE(473)
												result->m[(int)10] = 1.0;
												HX_STACK_LINE(473)
												result->m[(int)11] = (int)0;
												HX_STACK_LINE(473)
												result->m[(int)12] = localPosition->x;
												HX_STACK_LINE(473)
												result->m[(int)13] = localPosition->y;
												HX_STACK_LINE(473)
												result->m[(int)14] = localPosition->z;
												HX_STACK_LINE(473)
												result->m[(int)15] = 1.0;
												HX_STACK_LINE(473)
												result;
											}
										}
									}
									HX_STACK_LINE(473)
									if (((((int(instance->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
										HX_STACK_LINE(473)
										zero = instance->_scene->activeCamera->position;
									}
									else{
										HX_STACK_LINE(473)
										if (((((int(instance->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
											HX_STACK_LINE(473)
											zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
										}
										HX_STACK_LINE(473)
										if (((((int(instance->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
											HX_STACK_LINE(473)
											zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
										}
										HX_STACK_LINE(473)
										if (((((int(instance->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
											HX_STACK_LINE(473)
											zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
										}
									}
									HX_STACK_LINE(473)
									{
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localBillboard;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
										HX_STACK_LINE(473)
										{
											HX_STACK_LINE(473)
											zAxis->x = (zero->x - localPosition->x);
											HX_STACK_LINE(473)
											zAxis->y = (zero->y - localPosition->y);
											HX_STACK_LINE(473)
											zAxis->z = (zero->z - localPosition->z);
										}
										HX_STACK_LINE(473)
										{
											HX_STACK_LINE(473)
											Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(473)
											if (((len != (int)0))){
												HX_STACK_LINE(473)
												Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(473)
												hx::MultEq(zAxis->x,num);
												HX_STACK_LINE(473)
												hx::MultEq(zAxis->y,num);
												HX_STACK_LINE(473)
												hx::MultEq(zAxis->z,num);
											}
										}
										HX_STACK_LINE(473)
										{
											HX_STACK_LINE(473)
											xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
											HX_STACK_LINE(473)
											xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
											HX_STACK_LINE(473)
											xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
										}
										HX_STACK_LINE(473)
										{
											HX_STACK_LINE(473)
											Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(473)
											if (((len != (int)0))){
												HX_STACK_LINE(473)
												Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(473)
												hx::MultEq(xAxis->x,num);
												HX_STACK_LINE(473)
												hx::MultEq(xAxis->y,num);
												HX_STACK_LINE(473)
												hx::MultEq(xAxis->z,num);
											}
										}
										HX_STACK_LINE(473)
										{
											HX_STACK_LINE(473)
											yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
											HX_STACK_LINE(473)
											yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
											HX_STACK_LINE(473)
											yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
										}
										HX_STACK_LINE(473)
										{
											HX_STACK_LINE(473)
											Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(473)
											if (((len != (int)0))){
												HX_STACK_LINE(473)
												Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(473)
												hx::MultEq(yAxis->x,num);
												HX_STACK_LINE(473)
												hx::MultEq(yAxis->y,num);
												HX_STACK_LINE(473)
												hx::MultEq(yAxis->z,num);
											}
										}
										HX_STACK_LINE(473)
										Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
										HX_STACK_LINE(473)
										Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
										HX_STACK_LINE(473)
										Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
										HX_STACK_LINE(473)
										{
											HX_STACK_LINE(473)
											result->m[(int)0] = xAxis->x;
											HX_STACK_LINE(473)
											result->m[(int)1] = yAxis->x;
											HX_STACK_LINE(473)
											result->m[(int)2] = zAxis->x;
											HX_STACK_LINE(473)
											result->m[(int)3] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)4] = xAxis->y;
											HX_STACK_LINE(473)
											result->m[(int)5] = yAxis->y;
											HX_STACK_LINE(473)
											result->m[(int)6] = zAxis->y;
											HX_STACK_LINE(473)
											result->m[(int)7] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)8] = xAxis->z;
											HX_STACK_LINE(473)
											result->m[(int)9] = yAxis->z;
											HX_STACK_LINE(473)
											result->m[(int)10] = zAxis->z;
											HX_STACK_LINE(473)
											result->m[(int)11] = (int)0;
											HX_STACK_LINE(473)
											result->m[(int)12] = ex;
											HX_STACK_LINE(473)
											result->m[(int)13] = ey;
											HX_STACK_LINE(473)
											result->m[(int)14] = ez;
											HX_STACK_LINE(473)
											result->m[(int)15] = (int)1;
											HX_STACK_LINE(473)
											result;
										}
									}
									HX_STACK_LINE(473)
									instance->_localBillboard->m[(int)12] = instance->_localBillboard->m[(int)13] = instance->_localBillboard->m[(int)14] = (int)0;
									HX_STACK_LINE(473)
									{
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localBillboard;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(473)
										{
											HX_STACK_LINE(473)
											Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
											HX_STACK_LINE(473)
											Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
											HX_STACK_LINE(473)
											Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
											HX_STACK_LINE(473)
											Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
											HX_STACK_LINE(473)
											Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
											HX_STACK_LINE(473)
											Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
											HX_STACK_LINE(473)
											Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
											HX_STACK_LINE(473)
											Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
											HX_STACK_LINE(473)
											Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
											HX_STACK_LINE(473)
											Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
											HX_STACK_LINE(473)
											Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
											HX_STACK_LINE(473)
											Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
											HX_STACK_LINE(473)
											Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
											HX_STACK_LINE(473)
											Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
											HX_STACK_LINE(473)
											Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
											HX_STACK_LINE(473)
											Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
											HX_STACK_LINE(473)
											Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
											HX_STACK_LINE(473)
											Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
											HX_STACK_LINE(473)
											Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
											HX_STACK_LINE(473)
											Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
											HX_STACK_LINE(473)
											Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
											HX_STACK_LINE(473)
											Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
											HX_STACK_LINE(473)
											Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
											HX_STACK_LINE(473)
											Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
											HX_STACK_LINE(473)
											Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
											HX_STACK_LINE(473)
											Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
											HX_STACK_LINE(473)
											Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
											HX_STACK_LINE(473)
											Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
											HX_STACK_LINE(473)
											Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
											HX_STACK_LINE(473)
											Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
											HX_STACK_LINE(473)
											Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
											HX_STACK_LINE(473)
											Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
											HX_STACK_LINE(473)
											Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
											HX_STACK_LINE(473)
											Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
											HX_STACK_LINE(473)
											Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
											HX_STACK_LINE(473)
											Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
											HX_STACK_LINE(473)
											Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
											HX_STACK_LINE(473)
											Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
											HX_STACK_LINE(473)
											Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
											HX_STACK_LINE(473)
											_this->m[(int)0] = (l23 * l27);
											HX_STACK_LINE(473)
											_this->m[(int)4] = (l24 * l27);
											HX_STACK_LINE(473)
											_this->m[(int)8] = (l25 * l27);
											HX_STACK_LINE(473)
											_this->m[(int)12] = (l26 * l27);
											HX_STACK_LINE(473)
											_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
											HX_STACK_LINE(473)
											_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
											HX_STACK_LINE(473)
											_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
											HX_STACK_LINE(473)
											_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
											HX_STACK_LINE(473)
											_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
											HX_STACK_LINE(473)
											_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
											HX_STACK_LINE(473)
											_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
											HX_STACK_LINE(473)
											_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
											HX_STACK_LINE(473)
											_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
											HX_STACK_LINE(473)
											_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
											HX_STACK_LINE(473)
											_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
											HX_STACK_LINE(473)
											_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
										}
									}
									HX_STACK_LINE(473)
									{
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localBillboard;		HX_STACK_VAR(other,"other");
										HX_STACK_LINE(473)
										{
											HX_STACK_LINE(473)
											Array< Float > result = instance->_localWorld->m;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(473)
											Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
											HX_STACK_LINE(473)
											Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
											HX_STACK_LINE(473)
											Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
											HX_STACK_LINE(473)
											Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
											HX_STACK_LINE(473)
											Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
											HX_STACK_LINE(473)
											Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
											HX_STACK_LINE(473)
											Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
											HX_STACK_LINE(473)
											Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
											HX_STACK_LINE(473)
											Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
											HX_STACK_LINE(473)
											Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
											HX_STACK_LINE(473)
											Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
											HX_STACK_LINE(473)
											Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
											HX_STACK_LINE(473)
											Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
											HX_STACK_LINE(473)
											Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
											HX_STACK_LINE(473)
											Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
											HX_STACK_LINE(473)
											Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
											HX_STACK_LINE(473)
											Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
											HX_STACK_LINE(473)
											Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
											HX_STACK_LINE(473)
											Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
											HX_STACK_LINE(473)
											Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
											HX_STACK_LINE(473)
											Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
											HX_STACK_LINE(473)
											Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
											HX_STACK_LINE(473)
											Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
											HX_STACK_LINE(473)
											Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
											HX_STACK_LINE(473)
											Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
											HX_STACK_LINE(473)
											Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
											HX_STACK_LINE(473)
											Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
											HX_STACK_LINE(473)
											Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
											HX_STACK_LINE(473)
											Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
											HX_STACK_LINE(473)
											Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
											HX_STACK_LINE(473)
											Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
											HX_STACK_LINE(473)
											Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
											HX_STACK_LINE(473)
											result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
											HX_STACK_LINE(473)
											result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
											HX_STACK_LINE(473)
											result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
											HX_STACK_LINE(473)
											result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
											HX_STACK_LINE(473)
											result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
											HX_STACK_LINE(473)
											result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
											HX_STACK_LINE(473)
											result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
											HX_STACK_LINE(473)
											result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
											HX_STACK_LINE(473)
											result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
											HX_STACK_LINE(473)
											result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
											HX_STACK_LINE(473)
											result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
											HX_STACK_LINE(473)
											result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
											HX_STACK_LINE(473)
											result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
											HX_STACK_LINE(473)
											result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
											HX_STACK_LINE(473)
											result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
											HX_STACK_LINE(473)
											result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
											HX_STACK_LINE(473)
											result;
										}
									}
									HX_STACK_LINE(473)
									{
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localWorld;		HX_STACK_VAR(other,"other");
										HX_STACK_LINE(473)
										{
											HX_STACK_LINE(473)
											Array< Float > result = instance->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(473)
											Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
											HX_STACK_LINE(473)
											Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
											HX_STACK_LINE(473)
											Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
											HX_STACK_LINE(473)
											Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
											HX_STACK_LINE(473)
											Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
											HX_STACK_LINE(473)
											Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
											HX_STACK_LINE(473)
											Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
											HX_STACK_LINE(473)
											Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
											HX_STACK_LINE(473)
											Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
											HX_STACK_LINE(473)
											Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
											HX_STACK_LINE(473)
											Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
											HX_STACK_LINE(473)
											Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
											HX_STACK_LINE(473)
											Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
											HX_STACK_LINE(473)
											Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
											HX_STACK_LINE(473)
											Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
											HX_STACK_LINE(473)
											Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
											HX_STACK_LINE(473)
											Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
											HX_STACK_LINE(473)
											Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
											HX_STACK_LINE(473)
											Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
											HX_STACK_LINE(473)
											Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
											HX_STACK_LINE(473)
											Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
											HX_STACK_LINE(473)
											Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
											HX_STACK_LINE(473)
											Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
											HX_STACK_LINE(473)
											Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
											HX_STACK_LINE(473)
											Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
											HX_STACK_LINE(473)
											Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
											HX_STACK_LINE(473)
											Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
											HX_STACK_LINE(473)
											Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
											HX_STACK_LINE(473)
											Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
											HX_STACK_LINE(473)
											Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
											HX_STACK_LINE(473)
											Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
											HX_STACK_LINE(473)
											Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
											HX_STACK_LINE(473)
											result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
											HX_STACK_LINE(473)
											result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
											HX_STACK_LINE(473)
											result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
											HX_STACK_LINE(473)
											result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
											HX_STACK_LINE(473)
											result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
											HX_STACK_LINE(473)
											result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
											HX_STACK_LINE(473)
											result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
											HX_STACK_LINE(473)
											result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
											HX_STACK_LINE(473)
											result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
											HX_STACK_LINE(473)
											result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
											HX_STACK_LINE(473)
											result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
											HX_STACK_LINE(473)
											result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
											HX_STACK_LINE(473)
											result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
											HX_STACK_LINE(473)
											result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
											HX_STACK_LINE(473)
											result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
											HX_STACK_LINE(473)
											result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
											HX_STACK_LINE(473)
											result;
										}
									}
								}
								struct _Function_7_1{
									inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh &instance){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",473,0xf4cec482)
										{
											HX_STACK_LINE(473)
											::com::gamestudiohx::babylonhx::tools::math::Matrix _g17 = instance->parent->getWorldMatrix();		HX_STACK_VAR(_g17,"_g17");
											HX_STACK_LINE(473)
											return (_g17 != null());
										}
										return null();
									}
								};
								HX_STACK_LINE(473)
								if (((  (((  (((instance->parent != null()))) ? bool(_Function_7_1::Block(instance)) : bool(false) ))) ? bool((instance->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
									HX_STACK_LINE(473)
									{
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localTranslation;		HX_STACK_VAR(other,"other");
										HX_STACK_LINE(473)
										{
											HX_STACK_LINE(473)
											Array< Float > result = instance->_localWorld->m;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(473)
											Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
											HX_STACK_LINE(473)
											Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
											HX_STACK_LINE(473)
											Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
											HX_STACK_LINE(473)
											Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
											HX_STACK_LINE(473)
											Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
											HX_STACK_LINE(473)
											Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
											HX_STACK_LINE(473)
											Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
											HX_STACK_LINE(473)
											Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
											HX_STACK_LINE(473)
											Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
											HX_STACK_LINE(473)
											Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
											HX_STACK_LINE(473)
											Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
											HX_STACK_LINE(473)
											Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
											HX_STACK_LINE(473)
											Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
											HX_STACK_LINE(473)
											Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
											HX_STACK_LINE(473)
											Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
											HX_STACK_LINE(473)
											Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
											HX_STACK_LINE(473)
											Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
											HX_STACK_LINE(473)
											Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
											HX_STACK_LINE(473)
											Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
											HX_STACK_LINE(473)
											Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
											HX_STACK_LINE(473)
											Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
											HX_STACK_LINE(473)
											Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
											HX_STACK_LINE(473)
											Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
											HX_STACK_LINE(473)
											Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
											HX_STACK_LINE(473)
											Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
											HX_STACK_LINE(473)
											Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
											HX_STACK_LINE(473)
											Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
											HX_STACK_LINE(473)
											Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
											HX_STACK_LINE(473)
											Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
											HX_STACK_LINE(473)
											Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
											HX_STACK_LINE(473)
											Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
											HX_STACK_LINE(473)
											Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
											HX_STACK_LINE(473)
											result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
											HX_STACK_LINE(473)
											result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
											HX_STACK_LINE(473)
											result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
											HX_STACK_LINE(473)
											result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
											HX_STACK_LINE(473)
											result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
											HX_STACK_LINE(473)
											result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
											HX_STACK_LINE(473)
											result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
											HX_STACK_LINE(473)
											result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
											HX_STACK_LINE(473)
											result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
											HX_STACK_LINE(473)
											result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
											HX_STACK_LINE(473)
											result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
											HX_STACK_LINE(473)
											result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
											HX_STACK_LINE(473)
											result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
											HX_STACK_LINE(473)
											result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
											HX_STACK_LINE(473)
											result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
											HX_STACK_LINE(473)
											result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
											HX_STACK_LINE(473)
											result;
										}
									}
									HX_STACK_LINE(473)
									::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = instance->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
									HX_STACK_LINE(473)
									{
										HX_STACK_LINE(473)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localWorld;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(473)
										{
											HX_STACK_LINE(473)
											Array< Float > result = instance->_worldMatrix->m;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(473)
											Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
											HX_STACK_LINE(473)
											Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
											HX_STACK_LINE(473)
											Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
											HX_STACK_LINE(473)
											Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
											HX_STACK_LINE(473)
											Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
											HX_STACK_LINE(473)
											Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
											HX_STACK_LINE(473)
											Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
											HX_STACK_LINE(473)
											Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
											HX_STACK_LINE(473)
											Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
											HX_STACK_LINE(473)
											Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
											HX_STACK_LINE(473)
											Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
											HX_STACK_LINE(473)
											Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
											HX_STACK_LINE(473)
											Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
											HX_STACK_LINE(473)
											Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
											HX_STACK_LINE(473)
											Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
											HX_STACK_LINE(473)
											Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
											HX_STACK_LINE(473)
											Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
											HX_STACK_LINE(473)
											Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
											HX_STACK_LINE(473)
											Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
											HX_STACK_LINE(473)
											Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
											HX_STACK_LINE(473)
											Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
											HX_STACK_LINE(473)
											Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
											HX_STACK_LINE(473)
											Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
											HX_STACK_LINE(473)
											Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
											HX_STACK_LINE(473)
											Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
											HX_STACK_LINE(473)
											Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
											HX_STACK_LINE(473)
											Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
											HX_STACK_LINE(473)
											Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
											HX_STACK_LINE(473)
											Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
											HX_STACK_LINE(473)
											Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
											HX_STACK_LINE(473)
											Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
											HX_STACK_LINE(473)
											Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
											HX_STACK_LINE(473)
											result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
											HX_STACK_LINE(473)
											result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
											HX_STACK_LINE(473)
											result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
											HX_STACK_LINE(473)
											result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
											HX_STACK_LINE(473)
											result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
											HX_STACK_LINE(473)
											result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
											HX_STACK_LINE(473)
											result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
											HX_STACK_LINE(473)
											result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
											HX_STACK_LINE(473)
											result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
											HX_STACK_LINE(473)
											result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
											HX_STACK_LINE(473)
											result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
											HX_STACK_LINE(473)
											result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
											HX_STACK_LINE(473)
											result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
											HX_STACK_LINE(473)
											result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
											HX_STACK_LINE(473)
											result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
											HX_STACK_LINE(473)
											result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
											HX_STACK_LINE(473)
											result;
										}
									}
								}
								else{
									HX_STACK_LINE(473)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(473)
									::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localTranslation;		HX_STACK_VAR(other,"other");
									HX_STACK_LINE(473)
									{
										HX_STACK_LINE(473)
										Array< Float > result = instance->_worldMatrix->m;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(473)
										Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
										HX_STACK_LINE(473)
										Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
										HX_STACK_LINE(473)
										Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
										HX_STACK_LINE(473)
										Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
										HX_STACK_LINE(473)
										Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
										HX_STACK_LINE(473)
										Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
										HX_STACK_LINE(473)
										Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
										HX_STACK_LINE(473)
										Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
										HX_STACK_LINE(473)
										Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
										HX_STACK_LINE(473)
										Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
										HX_STACK_LINE(473)
										Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
										HX_STACK_LINE(473)
										Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
										HX_STACK_LINE(473)
										Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
										HX_STACK_LINE(473)
										Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
										HX_STACK_LINE(473)
										Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
										HX_STACK_LINE(473)
										Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
										HX_STACK_LINE(473)
										Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
										HX_STACK_LINE(473)
										Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
										HX_STACK_LINE(473)
										Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
										HX_STACK_LINE(473)
										Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
										HX_STACK_LINE(473)
										Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
										HX_STACK_LINE(473)
										Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
										HX_STACK_LINE(473)
										Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
										HX_STACK_LINE(473)
										Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
										HX_STACK_LINE(473)
										Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
										HX_STACK_LINE(473)
										Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
										HX_STACK_LINE(473)
										Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
										HX_STACK_LINE(473)
										Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
										HX_STACK_LINE(473)
										Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
										HX_STACK_LINE(473)
										Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
										HX_STACK_LINE(473)
										Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
										HX_STACK_LINE(473)
										Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
										HX_STACK_LINE(473)
										result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
										HX_STACK_LINE(473)
										result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
										HX_STACK_LINE(473)
										result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
										HX_STACK_LINE(473)
										result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
										HX_STACK_LINE(473)
										result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
										HX_STACK_LINE(473)
										result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
										HX_STACK_LINE(473)
										result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
										HX_STACK_LINE(473)
										result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
										HX_STACK_LINE(473)
										result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
										HX_STACK_LINE(473)
										result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
										HX_STACK_LINE(473)
										result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
										HX_STACK_LINE(473)
										result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
										HX_STACK_LINE(473)
										result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
										HX_STACK_LINE(473)
										result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
										HX_STACK_LINE(473)
										result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
										HX_STACK_LINE(473)
										result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
										HX_STACK_LINE(473)
										result;
									}
								}
								HX_STACK_LINE(473)
								if (((instance->_boundingInfo != null()))){
									HX_STACK_LINE(473)
									Float _g18 = ::Math_obj::max(instance->scaling->x,instance->scaling->y);		HX_STACK_VAR(_g18,"_g18");
									HX_STACK_LINE(473)
									instance->_scaleFactor = _g18;
									HX_STACK_LINE(473)
									Float _g19 = ::Math_obj::max(instance->_scaleFactor,instance->scaling->z);		HX_STACK_VAR(_g19,"_g19");
									HX_STACK_LINE(473)
									instance->_scaleFactor = _g19;
									struct _Function_8_1{
										inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh &instance){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",473,0xf4cec482)
											{
												HX_STACK_LINE(473)
												Dynamic _g20 = ::Reflect_obj::field(instance->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g20,"_g20");
												HX_STACK_LINE(473)
												return (_g20 != null());
											}
											return null();
										}
									};
									HX_STACK_LINE(473)
									if (((  (((instance->parent != null()))) ? bool(_Function_8_1::Block(instance)) : bool(false) ))){
										HX_STACK_LINE(473)
										Dynamic _g21 = ::Reflect_obj::field(instance->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g21,"_g21");
										HX_STACK_LINE(473)
										Float _g22 = (instance->_scaleFactor * _g21);		HX_STACK_VAR(_g22,"_g22");
										HX_STACK_LINE(473)
										instance->_scaleFactor = _g22;
									}
									HX_STACK_LINE(473)
									instance->_boundingInfo->_update(instance->_worldMatrix,instance->_scaleFactor);
									HX_STACK_LINE(473)
									{
										HX_STACK_LINE(473)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(473)
										int _g = instance->subMeshes->length;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(473)
										while((true)){
											HX_STACK_LINE(473)
											if ((!(((_g1 < _g))))){
												HX_STACK_LINE(473)
												break;
											}
											HX_STACK_LINE(473)
											int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
											HX_STACK_LINE(473)
											::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh1 = instance->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh1,"subMesh1");
											HX_STACK_LINE(473)
											subMesh1->_boundingInfo->_update(instance->_worldMatrix,instance->_scaleFactor);
										}
									}
								}
								HX_STACK_LINE(473)
								{
									HX_STACK_LINE(473)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = instance->_absolutePosition;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(473)
									_this->x = instance->_worldMatrix->m->__get((int)12);
									HX_STACK_LINE(473)
									_this->y = instance->_worldMatrix->m->__get((int)13);
									HX_STACK_LINE(473)
									_this->z = instance->_worldMatrix->m->__get((int)14);
								}
								HX_STACK_LINE(473)
								ret = instance->_worldMatrix;
							}
							HX_STACK_LINE(473)
							ret;
						}
						HX_STACK_LINE(473)
						_g23 = instance->_worldMatrix;
					}
					HX_STACK_LINE(473)
					world = _g23;
					HX_STACK_LINE(474)
					effectiveMaterial->__Field(HX_CSTRING("bindOnlyWorldMatrix"),true)(world);
					HX_STACK_LINE(477)
					this->_draw(subMesh,!(wireFrame),null());
					HX_STACK_LINE(478)
					(instanceIndex)++;
				}
			}
		}
		HX_STACK_LINE(484)
		effectiveMaterial->__Field(HX_CSTRING("unbind"),true)();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,render,(void))

Array< ::Dynamic > Mesh_obj::getEmittedParticleSystems( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","getEmittedParticleSystems",0x5762fc82,"com.gamestudiohx.babylonhx.mesh.Mesh.getEmittedParticleSystems","com/gamestudiohx/babylonhx/mesh/Mesh.hx",487,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(488)
	Array< ::Dynamic > results = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(491)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(492)
	while((true)){
		HX_STACK_LINE(492)
		if ((!(((index < this->getScene()->particleSystems->length))))){
			HX_STACK_LINE(492)
			break;
		}
		HX_STACK_LINE(493)
		::com::gamestudiohx::babylonhx::particles::ParticleSystem particleSystem = this->getScene()->particleSystems->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::particles::ParticleSystem >();		HX_STACK_VAR(particleSystem,"particleSystem");
		HX_STACK_LINE(494)
		if (((particleSystem->emitter == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(495)
			results->push(particleSystem);
		}
		HX_STACK_LINE(497)
		(index)++;
	}
	HX_STACK_LINE(501)
	return results;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getEmittedParticleSystems,return )

Array< ::Dynamic > Mesh_obj::getHierarchyEmittedParticleSystems( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","getHierarchyEmittedParticleSystems",0xfc3f6b4f,"com.gamestudiohx.babylonhx.mesh.Mesh.getHierarchyEmittedParticleSystems","com/gamestudiohx/babylonhx/mesh/Mesh.hx",504,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(505)
	Array< ::Dynamic > results = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(506)
	Array< ::Dynamic > descendants = this->getDescendants();		HX_STACK_VAR(descendants,"descendants");
	HX_STACK_LINE(507)
	descendants->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(510)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(511)
	while((true)){
		HX_STACK_LINE(511)
		if ((!(((index < this->getScene()->particleSystems->length))))){
			HX_STACK_LINE(511)
			break;
		}
		HX_STACK_LINE(512)
		::com::gamestudiohx::babylonhx::particles::ParticleSystem particleSystem = this->getScene()->particleSystems->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::particles::ParticleSystem >();		HX_STACK_VAR(particleSystem,"particleSystem");
		HX_STACK_LINE(513)
		int _g = descendants->indexOf(particleSystem->emitter,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(513)
		if (((_g != (int)-1))){
			HX_STACK_LINE(514)
			results->push(particleSystem);
		}
		HX_STACK_LINE(516)
		(index)++;
	}
	HX_STACK_LINE(520)
	return results;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getHierarchyEmittedParticleSystems,return )

Array< ::Dynamic > Mesh_obj::getChildren( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","getChildren",0xe4b6df43,"com.gamestudiohx.babylonhx.mesh.Mesh.getChildren","com/gamestudiohx/babylonhx/mesh/Mesh.hx",523,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(524)
	Array< ::Dynamic > results = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(527)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(528)
	while((true)){
		HX_STACK_LINE(528)
		if ((!(((index < this->getScene()->meshes->length))))){
			HX_STACK_LINE(528)
			break;
		}
		HX_STACK_LINE(529)
		::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh = this->getScene()->meshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >();		HX_STACK_VAR(mesh,"mesh");
		HX_STACK_LINE(530)
		if (((mesh->parent == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(531)
			results->push(mesh);
		}
		HX_STACK_LINE(533)
		(index)++;
	}
	HX_STACK_LINE(537)
	return results;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getChildren,return )

Void Mesh_obj::_checkDelayState( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","_checkDelayState",0x66d1dee9,"com.gamestudiohx.babylonhx.mesh.Mesh._checkDelayState","com/gamestudiohx/babylonhx/mesh/Mesh.hx",540,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(541)
		::com::gamestudiohx::babylonhx::mesh::Mesh that = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(that,"that");
		HX_STACK_LINE(542)
		::com::gamestudiohx::babylonhx::Scene scene = this->getScene();		HX_STACK_VAR(scene,"scene");
		HX_STACK_LINE(544)
		if (((this->_geometry != null()))){
			HX_STACK_LINE(545)
			this->_geometry->load(scene,null());
		}
		else{
			HX_STACK_LINE(547)
			if (((that->delayLoadState == ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_NOTLOADED))){
				HX_STACK_LINE(548)
				that->delayLoadState = ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_LOADING;
				HX_STACK_LINE(550)
				scene->_addPendingData(that);
				HX_STACK_LINE(559)
				::com::gamestudiohx::babylonhx::tools::Tools_obj::LoadFile(this->_delayLoadingFunction,null(),null(),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,_checkDelayState,(void))

bool Mesh_obj::isInFrustum( Array< ::Dynamic > frustumPlanes){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","isInFrustum",0xe3564401,"com.gamestudiohx.babylonhx.mesh.Mesh.isInFrustum","com/gamestudiohx/babylonhx/mesh/Mesh.hx",574,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frustumPlanes,"frustumPlanes")
	HX_STACK_LINE(575)
	if (((this->delayLoadState == ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_LOADING))){
		HX_STACK_LINE(576)
		return false;
	}
	HX_STACK_LINE(579)
	if ((!(this->super::isInFrustum(frustumPlanes)))){
		HX_STACK_LINE(580)
		return false;
	}
	HX_STACK_LINE(583)
	this->_checkDelayState();
	HX_STACK_LINE(585)
	return true;
}


Void Mesh_obj::setMaterialByID( ::String id){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","setMaterialByID",0x02f7f6c9,"com.gamestudiohx.babylonhx.mesh.Mesh.setMaterialByID","com/gamestudiohx/babylonhx/mesh/Mesh.hx",588,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(589)
		Array< ::Dynamic > materials = this->getScene()->materials;		HX_STACK_VAR(materials,"materials");
		HX_STACK_LINE(592)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(593)
		while((true)){
			HX_STACK_LINE(593)
			if ((!(((index < materials->length))))){
				HX_STACK_LINE(593)
				break;
			}
			HX_STACK_LINE(594)
			if (((materials->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::materials::Material >()->id == id))){
				HX_STACK_LINE(595)
				this->material = materials->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::materials::Material >();
				HX_STACK_LINE(596)
				return null();
			}
			HX_STACK_LINE(598)
			(index)++;
		}
		HX_STACK_LINE(603)
		Array< ::Dynamic > multiMaterials = this->getScene()->multiMaterials;		HX_STACK_VAR(multiMaterials,"multiMaterials");
		HX_STACK_LINE(606)
		index = (int)0;
		HX_STACK_LINE(607)
		while((true)){
			HX_STACK_LINE(607)
			if ((!(((index < multiMaterials->length))))){
				HX_STACK_LINE(607)
				break;
			}
			HX_STACK_LINE(608)
			if (((multiMaterials->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::materials::MultiMaterial >()->id == id))){
				HX_STACK_LINE(609)
				this->material = multiMaterials->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::materials::MultiMaterial >();
				HX_STACK_LINE(610)
				return null();
			}
			HX_STACK_LINE(612)
			(index)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,setMaterialByID,(void))

Array< ::com::gamestudiohx::babylonhx::tools::IAnimatable > Mesh_obj::getAnimatables( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","getAnimatables",0xb7dbf651,"com.gamestudiohx.babylonhx.mesh.Mesh.getAnimatables","com/gamestudiohx/babylonhx/mesh/Mesh.hx",617,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(618)
	Array< ::com::gamestudiohx::babylonhx::tools::IAnimatable > results = Array_obj< ::com::gamestudiohx::babylonhx::tools::IAnimatable >::__new();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(620)
	if (((this->material != null()))){
		HX_STACK_LINE(621)
		results->push(this->material);
	}
	HX_STACK_LINE(624)
	return results;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getAnimatables,return )

Void Mesh_obj::bakeTransformIntoVertices( ::com::gamestudiohx::babylonhx::tools::math::Matrix transform){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","bakeTransformIntoVertices",0xcedb2e3a,"com.gamestudiohx.babylonhx.mesh.Mesh.bakeTransformIntoVertices","com/gamestudiohx/babylonhx/mesh/Mesh.hx",629,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transform,"transform")
		HX_STACK_LINE(631)
		if ((!(this->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind)))){
			HX_STACK_LINE(632)
			return null();
		}
		HX_STACK_LINE(635)
		this->_resetPointsArrayCache();
		HX_STACK_LINE(637)
		Array< Float > data = this->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(638)
		Array< Float > temp = Array_obj< Float >::__new();		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(641)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(642)
		while((true)){
			HX_STACK_LINE(642)
			if ((!(((index < data->length))))){
				HX_STACK_LINE(642)
				break;
			}
			HX_STACK_LINE(643)
			{
				HX_STACK_LINE(643)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(643)
				{
					HX_STACK_LINE(643)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data->__get(index),data->__get((index + (int)1)),data->__get((index + (int)2)));		HX_STACK_VAR(vector,"vector");
					HX_STACK_LINE(643)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(643)
					{
						HX_STACK_LINE(643)
						Float x = ((((vector->x * transform->m->__get((int)0)) + (vector->y * transform->m->__get((int)4))) + (vector->z * transform->m->__get((int)8))) + transform->m->__get((int)12));		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(643)
						Float y = ((((vector->x * transform->m->__get((int)1)) + (vector->y * transform->m->__get((int)5))) + (vector->z * transform->m->__get((int)9))) + transform->m->__get((int)13));		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(643)
						Float z = ((((vector->x * transform->m->__get((int)2)) + (vector->y * transform->m->__get((int)6))) + (vector->z * transform->m->__get((int)10))) + transform->m->__get((int)14));		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(643)
						Float w = ((((vector->x * transform->m->__get((int)3)) + (vector->y * transform->m->__get((int)7))) + (vector->z * transform->m->__get((int)11))) + transform->m->__get((int)15));		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(643)
						result->x = (Float(x) / Float(w));
						HX_STACK_LINE(643)
						result->y = (Float(y) / Float(w));
						HX_STACK_LINE(643)
						result->z = (Float(z) / Float(w));
					}
					HX_STACK_LINE(643)
					_this = result;
				}
				HX_STACK_LINE(643)
				temp[index] = _this->x;
				HX_STACK_LINE(643)
				temp[(index + (int)1)] = _this->y;
				HX_STACK_LINE(643)
				temp[(index + (int)2)] = _this->z;
				HX_STACK_LINE(643)
				temp;
			}
			HX_STACK_LINE(644)
			hx::AddEq(index,(int)3);
		}
		HX_STACK_LINE(648)
		bool _g = this->getVertexBuffer(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind)->isUpdatable();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(648)
		this->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind,temp,_g);
		HX_STACK_LINE(651)
		if ((!(this->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind)))){
			HX_STACK_LINE(652)
			return null();
		}
		HX_STACK_LINE(655)
		Array< Float > _g1 = this->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(655)
		data = _g1;
		HX_STACK_LINE(658)
		index = (int)0;
		HX_STACK_LINE(659)
		while((true)){
			HX_STACK_LINE(659)
			if ((!(((index < data->length))))){
				HX_STACK_LINE(659)
				break;
			}
			HX_STACK_LINE(660)
			{
				HX_STACK_LINE(660)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(660)
				{
					HX_STACK_LINE(660)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data->__get(index),data->__get((index + (int)1)),data->__get((index + (int)2)));		HX_STACK_VAR(vector,"vector");
					HX_STACK_LINE(660)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(660)
					{
						HX_STACK_LINE(660)
						result->x = (((vector->x * transform->m->__get((int)0)) + (vector->y * transform->m->__get((int)4))) + (vector->z * transform->m->__get((int)8)));
						HX_STACK_LINE(660)
						result->y = (((vector->x * transform->m->__get((int)1)) + (vector->y * transform->m->__get((int)5))) + (vector->z * transform->m->__get((int)9)));
						HX_STACK_LINE(660)
						result->z = (((vector->x * transform->m->__get((int)2)) + (vector->y * transform->m->__get((int)6))) + (vector->z * transform->m->__get((int)10)));
					}
					HX_STACK_LINE(660)
					_this = result;
				}
				HX_STACK_LINE(660)
				temp[index] = _this->x;
				HX_STACK_LINE(660)
				temp[(index + (int)1)] = _this->y;
				HX_STACK_LINE(660)
				temp[(index + (int)2)] = _this->z;
				HX_STACK_LINE(660)
				temp;
			}
			HX_STACK_LINE(661)
			hx::AddEq(index,(int)3);
		}
		HX_STACK_LINE(665)
		bool _g2 = this->getVertexBuffer(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind)->isUpdatable();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(665)
		this->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind,temp,_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,bakeTransformIntoVertices,(void))

bool Mesh_obj::_generatePointsArray( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","_generatePointsArray",0x29e3b134,"com.gamestudiohx.babylonhx.mesh.Mesh._generatePointsArray","com/gamestudiohx/babylonhx/mesh/Mesh.hx",676,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(677)
	if (((this->_positions != null()))){
		HX_STACK_LINE(678)
		return true;
	}
	HX_STACK_LINE(682)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(682)
	this->_positions = _g;
	HX_STACK_LINE(684)
	Array< Float > data = this->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(686)
	if (((data == null()))){
		HX_STACK_LINE(687)
		return false;
	}
	HX_STACK_LINE(691)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(692)
	while((true)){
		HX_STACK_LINE(692)
		if ((!(((index < data->length))))){
			HX_STACK_LINE(692)
			break;
		}
		HX_STACK_LINE(693)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data->__get(index),data->__get((index + (int)1)),data->__get((index + (int)2)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(693)
		this->_positions->push(_g1);
		HX_STACK_LINE(694)
		hx::AddEq(index,(int)3);
	}
	HX_STACK_LINE(698)
	return true;
}


::com::gamestudiohx::babylonhx::mesh::AbstractMesh Mesh_obj::clone( ::String name,::com::gamestudiohx::babylonhx::mesh::Mesh _tmp_newParent,hx::Null< bool >  __o_doNotCloneChildren){
bool doNotCloneChildren = __o_doNotCloneChildren.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","clone",0x9ba7882b,"com.gamestudiohx.babylonhx.mesh.Mesh.clone","com/gamestudiohx/babylonhx/mesh/Mesh.hx",703,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(_tmp_newParent,"_tmp_newParent")
	HX_STACK_ARG(doNotCloneChildren,"doNotCloneChildren")
{
		HX_STACK_LINE(704)
		::com::gamestudiohx::babylonhx::Node newParent = _tmp_newParent;		HX_STACK_VAR(newParent,"newParent");
		HX_STACK_LINE(704)
		::com::gamestudiohx::babylonhx::Scene _g = this->getScene();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(704)
		::com::gamestudiohx::babylonhx::mesh::Mesh result = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,_g);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(705)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(708)
		this->_geometry->applyToMesh(result);
		HX_STACK_LINE(709)
		::haxe::Log_obj::trace(this->_geometry,hx::SourceInfo(HX_CSTRING("Mesh.hx"),709,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Mesh"),HX_CSTRING("clone")));
		HX_STACK_LINE(715)
		::com::gamestudiohx::babylonhx::tools::Tools_obj::DeepCopy(hx::ObjectPtr<OBJ_>(this),result,Array_obj< ::String >::__new().Add(HX_CSTRING("name")).Add(HX_CSTRING("material")).Add(HX_CSTRING("skeleton")),Array_obj< ::String >::__new());
		HX_STACK_LINE(718)
		result->material = this->material;
		HX_STACK_LINE(721)
		if (((newParent != null()))){
			HX_STACK_LINE(722)
			result->parent = newParent;
		}
		HX_STACK_LINE(725)
		if ((!(doNotCloneChildren))){
			HX_STACK_LINE(730)
			while((true)){
				HX_STACK_LINE(730)
				if ((!(((index < this->getScene()->meshes->length))))){
					HX_STACK_LINE(730)
					break;
				}
				HX_STACK_LINE(731)
				::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh = this->getScene()->meshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >();		HX_STACK_VAR(mesh,"mesh");
				HX_STACK_LINE(733)
				if (((mesh->parent == hx::ObjectPtr<OBJ_>(this)))){
					HX_STACK_LINE(734)
					mesh->clone(mesh->name,result,null());
				}
				HX_STACK_LINE(736)
				(index)++;
			}
		}
		HX_STACK_LINE(744)
		index = (int)0;
		HX_STACK_LINE(745)
		while((true)){
			HX_STACK_LINE(745)
			if ((!(((index < this->getScene()->particleSystems->length))))){
				HX_STACK_LINE(745)
				break;
			}
			HX_STACK_LINE(746)
			::com::gamestudiohx::babylonhx::particles::ParticleSystem system = this->getScene()->particleSystems->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::particles::ParticleSystem >();		HX_STACK_VAR(system,"system");
			HX_STACK_LINE(748)
			if (((system->emitter == hx::ObjectPtr<OBJ_>(this)))){
				HX_STACK_LINE(749)
				system->clone(system->name,result);
			}
			HX_STACK_LINE(751)
			(index)++;
		}
		HX_STACK_LINE(755)
		{
			HX_STACK_LINE(755)
			::com::gamestudiohx::babylonhx::tools::math::Matrix ret = result->_worldMatrix;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(755)
			{
				HX_STACK_LINE(755)
				result->_childrenFlag = (int)1;
				HX_STACK_LINE(755)
				result->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(result->position);
				HX_STACK_LINE(755)
				result->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(result->scaling);
				HX_STACK_LINE(755)
				result->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
				HX_STACK_LINE(755)
				int _g2 = result->_scene->getRenderId();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(755)
				result->_currentRenderId = _g2;
				HX_STACK_LINE(755)
				{
					HX_STACK_LINE(755)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = result->_localScaling;		HX_STACK_VAR(result1,"result1");
					HX_STACK_LINE(755)
					result1->m[(int)0] = result->scaling->x;
					HX_STACK_LINE(755)
					result1->m[(int)1] = (int)0;
					HX_STACK_LINE(755)
					result1->m[(int)2] = (int)0;
					HX_STACK_LINE(755)
					result1->m[(int)3] = (int)0;
					HX_STACK_LINE(755)
					result1->m[(int)4] = (int)0;
					HX_STACK_LINE(755)
					result1->m[(int)5] = result->scaling->y;
					HX_STACK_LINE(755)
					result1->m[(int)6] = (int)0;
					HX_STACK_LINE(755)
					result1->m[(int)7] = (int)0;
					HX_STACK_LINE(755)
					result1->m[(int)8] = (int)0;
					HX_STACK_LINE(755)
					result1->m[(int)9] = (int)0;
					HX_STACK_LINE(755)
					result1->m[(int)10] = result->scaling->z;
					HX_STACK_LINE(755)
					result1->m[(int)11] = (int)0;
					HX_STACK_LINE(755)
					result1->m[(int)12] = (int)0;
					HX_STACK_LINE(755)
					result1->m[(int)13] = (int)0;
					HX_STACK_LINE(755)
					result1->m[(int)14] = (int)0;
					HX_STACK_LINE(755)
					result1->m[(int)15] = 1.0;
					HX_STACK_LINE(755)
					result1;
				}
				HX_STACK_LINE(755)
				if (((result->rotationQuaternion != null()))){
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = result->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = result->_localRotation;		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(755)
						Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(755)
						Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(755)
						Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(755)
						Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(755)
						Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
						HX_STACK_LINE(755)
						Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
						HX_STACK_LINE(755)
						Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
						HX_STACK_LINE(755)
						Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(755)
						Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
						HX_STACK_LINE(755)
						result1->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
						HX_STACK_LINE(755)
						result1->m[(int)1] = (2.0 * ((xy + zw)));
						HX_STACK_LINE(755)
						result1->m[(int)2] = (2.0 * ((zx - yw)));
						HX_STACK_LINE(755)
						result1->m[(int)3] = (int)0;
						HX_STACK_LINE(755)
						result1->m[(int)4] = (2.0 * ((xy - zw)));
						HX_STACK_LINE(755)
						result1->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
						HX_STACK_LINE(755)
						result1->m[(int)6] = (2.0 * ((yz + xw)));
						HX_STACK_LINE(755)
						result1->m[(int)7] = (int)0;
						HX_STACK_LINE(755)
						result1->m[(int)8] = (2.0 * ((zx + yw)));
						HX_STACK_LINE(755)
						result1->m[(int)9] = (2.0 * ((yz - xw)));
						HX_STACK_LINE(755)
						result1->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
						HX_STACK_LINE(755)
						result1->m[(int)11] = (int)0;
						HX_STACK_LINE(755)
						result1->m[(int)12] = (int)0;
						HX_STACK_LINE(755)
						result1->m[(int)13] = (int)0;
						HX_STACK_LINE(755)
						result1->m[(int)14] = (int)0;
						HX_STACK_LINE(755)
						result1->m[(int)15] = 1.0;
						HX_STACK_LINE(755)
						result1;
					}
					HX_STACK_LINE(755)
					result->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(result->rotationQuaternion);
				}
				else{
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = result->_localRotation;		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion _g3;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							Float halfRoll = (result->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
							HX_STACK_LINE(755)
							Float halfPitch = (result->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
							HX_STACK_LINE(755)
							Float halfYaw = (result->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
							HX_STACK_LINE(755)
							Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
							HX_STACK_LINE(755)
							Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
							HX_STACK_LINE(755)
							Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
							HX_STACK_LINE(755)
							Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
							HX_STACK_LINE(755)
							Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
							HX_STACK_LINE(755)
							Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
							HX_STACK_LINE(755)
							tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
							HX_STACK_LINE(755)
							tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
							HX_STACK_LINE(755)
							tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
							HX_STACK_LINE(755)
							tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
							HX_STACK_LINE(755)
							_g3 = tempQuaternion;
						}
						HX_STACK_LINE(755)
						tempQuaternion = _g3;
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(755)
							Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
							HX_STACK_LINE(755)
							Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
							HX_STACK_LINE(755)
							Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
							HX_STACK_LINE(755)
							Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
							HX_STACK_LINE(755)
							Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
							HX_STACK_LINE(755)
							Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
							HX_STACK_LINE(755)
							Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
							HX_STACK_LINE(755)
							Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
							HX_STACK_LINE(755)
							result1->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
							HX_STACK_LINE(755)
							result1->m[(int)1] = (2.0 * ((xy + zw)));
							HX_STACK_LINE(755)
							result1->m[(int)2] = (2.0 * ((zx - yw)));
							HX_STACK_LINE(755)
							result1->m[(int)3] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)4] = (2.0 * ((xy - zw)));
							HX_STACK_LINE(755)
							result1->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
							HX_STACK_LINE(755)
							result1->m[(int)6] = (2.0 * ((yz + xw)));
							HX_STACK_LINE(755)
							result1->m[(int)7] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)8] = (2.0 * ((zx + yw)));
							HX_STACK_LINE(755)
							result1->m[(int)9] = (2.0 * ((yz - xw)));
							HX_STACK_LINE(755)
							result1->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
							HX_STACK_LINE(755)
							result1->m[(int)11] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)12] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)13] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)14] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)15] = 1.0;
							HX_STACK_LINE(755)
							result1;
						}
					}
					HX_STACK_LINE(755)
					result->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(result->rotation);
				}
				HX_STACK_LINE(755)
				if ((result->infiniteDistance)){
					HX_STACK_LINE(755)
					::com::gamestudiohx::babylonhx::cameras::Camera camera = result->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = result->_localTranslation;		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							result1->m[(int)0] = 1.0;
							HX_STACK_LINE(755)
							result1->m[(int)1] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)2] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)3] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)4] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)5] = 1.0;
							HX_STACK_LINE(755)
							result1->m[(int)6] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)7] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)8] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)9] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)10] = 1.0;
							HX_STACK_LINE(755)
							result1->m[(int)11] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)12] = (result->position->x + camera->position->x);
							HX_STACK_LINE(755)
							result1->m[(int)13] = (result->position->y + camera->position->y);
							HX_STACK_LINE(755)
							result1->m[(int)14] = (result->position->z + camera->position->z);
							HX_STACK_LINE(755)
							result1->m[(int)15] = 1.0;
							HX_STACK_LINE(755)
							result1;
						}
					}
				}
				else{
					HX_STACK_LINE(755)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = result->_localTranslation;		HX_STACK_VAR(result1,"result1");
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						result1->m[(int)0] = 1.0;
						HX_STACK_LINE(755)
						result1->m[(int)1] = (int)0;
						HX_STACK_LINE(755)
						result1->m[(int)2] = (int)0;
						HX_STACK_LINE(755)
						result1->m[(int)3] = (int)0;
						HX_STACK_LINE(755)
						result1->m[(int)4] = (int)0;
						HX_STACK_LINE(755)
						result1->m[(int)5] = 1.0;
						HX_STACK_LINE(755)
						result1->m[(int)6] = (int)0;
						HX_STACK_LINE(755)
						result1->m[(int)7] = (int)0;
						HX_STACK_LINE(755)
						result1->m[(int)8] = (int)0;
						HX_STACK_LINE(755)
						result1->m[(int)9] = (int)0;
						HX_STACK_LINE(755)
						result1->m[(int)10] = 1.0;
						HX_STACK_LINE(755)
						result1->m[(int)11] = (int)0;
						HX_STACK_LINE(755)
						result1->m[(int)12] = result->position->x;
						HX_STACK_LINE(755)
						result1->m[(int)13] = result->position->y;
						HX_STACK_LINE(755)
						result1->m[(int)14] = result->position->z;
						HX_STACK_LINE(755)
						result1->m[(int)15] = 1.0;
						HX_STACK_LINE(755)
						result1;
					}
				}
				HX_STACK_LINE(755)
				{
					HX_STACK_LINE(755)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = result->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(755)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = result->_localScaling;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						Array< Float > result1 = result->_localPivotScaling->m;		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(755)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(755)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(755)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(755)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(755)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(755)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(755)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(755)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(755)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(755)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(755)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(755)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(755)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(755)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(755)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(755)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(755)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(755)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(755)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(755)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(755)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(755)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(755)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(755)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(755)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(755)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(755)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(755)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(755)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(755)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(755)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(755)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(755)
						result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(755)
						result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(755)
						result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(755)
						result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(755)
						result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(755)
						result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(755)
						result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(755)
						result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(755)
						result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(755)
						result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(755)
						result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(755)
						result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(755)
						result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(755)
						result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(755)
						result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(755)
						result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(755)
						result1;
					}
				}
				HX_STACK_LINE(755)
				{
					HX_STACK_LINE(755)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = result->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(755)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = result->_localRotation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						Array< Float > result1 = result->_localPivotScalingRotation->m;		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(755)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(755)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(755)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(755)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(755)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(755)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(755)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(755)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(755)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(755)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(755)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(755)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(755)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(755)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(755)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(755)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(755)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(755)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(755)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(755)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(755)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(755)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(755)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(755)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(755)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(755)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(755)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(755)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(755)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(755)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(755)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(755)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(755)
						result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(755)
						result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(755)
						result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(755)
						result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(755)
						result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(755)
						result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(755)
						result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(755)
						result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(755)
						result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(755)
						result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(755)
						result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(755)
						result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(755)
						result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(755)
						result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(755)
						result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(755)
						result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(755)
						result1;
					}
				}
				HX_STACK_LINE(755)
				if (((result->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
					HX_STACK_LINE(755)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = result->position;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(755)
						localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
					}
					HX_STACK_LINE(755)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = result->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(755)
						zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
					}
					HX_STACK_LINE(755)
					if (((bool((result->parent != null())) && bool((result->parent->position != null()))))){
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = result->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
							HX_STACK_LINE(755)
							hx::AddEq(localPosition->x,otherVector->x);
							HX_STACK_LINE(755)
							hx::AddEq(localPosition->y,otherVector->y);
							HX_STACK_LINE(755)
							hx::AddEq(localPosition->z,otherVector->z);
						}
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = result->_localTranslation;		HX_STACK_VAR(result1,"result1");
							HX_STACK_LINE(755)
							{
								HX_STACK_LINE(755)
								result1->m[(int)0] = 1.0;
								HX_STACK_LINE(755)
								result1->m[(int)1] = (int)0;
								HX_STACK_LINE(755)
								result1->m[(int)2] = (int)0;
								HX_STACK_LINE(755)
								result1->m[(int)3] = (int)0;
								HX_STACK_LINE(755)
								result1->m[(int)4] = (int)0;
								HX_STACK_LINE(755)
								result1->m[(int)5] = 1.0;
								HX_STACK_LINE(755)
								result1->m[(int)6] = (int)0;
								HX_STACK_LINE(755)
								result1->m[(int)7] = (int)0;
								HX_STACK_LINE(755)
								result1->m[(int)8] = (int)0;
								HX_STACK_LINE(755)
								result1->m[(int)9] = (int)0;
								HX_STACK_LINE(755)
								result1->m[(int)10] = 1.0;
								HX_STACK_LINE(755)
								result1->m[(int)11] = (int)0;
								HX_STACK_LINE(755)
								result1->m[(int)12] = localPosition->x;
								HX_STACK_LINE(755)
								result1->m[(int)13] = localPosition->y;
								HX_STACK_LINE(755)
								result1->m[(int)14] = localPosition->z;
								HX_STACK_LINE(755)
								result1->m[(int)15] = 1.0;
								HX_STACK_LINE(755)
								result1;
							}
						}
					}
					HX_STACK_LINE(755)
					if (((((int(result->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
						HX_STACK_LINE(755)
						zero = result->_scene->activeCamera->position;
					}
					else{
						HX_STACK_LINE(755)
						if (((((int(result->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
							HX_STACK_LINE(755)
							zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
						HX_STACK_LINE(755)
						if (((((int(result->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
							HX_STACK_LINE(755)
							zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
						HX_STACK_LINE(755)
						if (((((int(result->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
							HX_STACK_LINE(755)
							zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
					}
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = result->_localBillboard;		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							zAxis->x = (zero->x - localPosition->x);
							HX_STACK_LINE(755)
							zAxis->y = (zero->y - localPosition->y);
							HX_STACK_LINE(755)
							zAxis->z = (zero->z - localPosition->z);
						}
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(755)
							if (((len != (int)0))){
								HX_STACK_LINE(755)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(755)
								hx::MultEq(zAxis->x,num);
								HX_STACK_LINE(755)
								hx::MultEq(zAxis->y,num);
								HX_STACK_LINE(755)
								hx::MultEq(zAxis->z,num);
							}
						}
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
							HX_STACK_LINE(755)
							xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
							HX_STACK_LINE(755)
							xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
						}
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(755)
							if (((len != (int)0))){
								HX_STACK_LINE(755)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(755)
								hx::MultEq(xAxis->x,num);
								HX_STACK_LINE(755)
								hx::MultEq(xAxis->y,num);
								HX_STACK_LINE(755)
								hx::MultEq(xAxis->z,num);
							}
						}
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
							HX_STACK_LINE(755)
							yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
							HX_STACK_LINE(755)
							yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
						}
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(755)
							if (((len != (int)0))){
								HX_STACK_LINE(755)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(755)
								hx::MultEq(yAxis->x,num);
								HX_STACK_LINE(755)
								hx::MultEq(yAxis->y,num);
								HX_STACK_LINE(755)
								hx::MultEq(yAxis->z,num);
							}
						}
						HX_STACK_LINE(755)
						Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
						HX_STACK_LINE(755)
						Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
						HX_STACK_LINE(755)
						Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							result1->m[(int)0] = xAxis->x;
							HX_STACK_LINE(755)
							result1->m[(int)1] = yAxis->x;
							HX_STACK_LINE(755)
							result1->m[(int)2] = zAxis->x;
							HX_STACK_LINE(755)
							result1->m[(int)3] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)4] = xAxis->y;
							HX_STACK_LINE(755)
							result1->m[(int)5] = yAxis->y;
							HX_STACK_LINE(755)
							result1->m[(int)6] = zAxis->y;
							HX_STACK_LINE(755)
							result1->m[(int)7] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)8] = xAxis->z;
							HX_STACK_LINE(755)
							result1->m[(int)9] = yAxis->z;
							HX_STACK_LINE(755)
							result1->m[(int)10] = zAxis->z;
							HX_STACK_LINE(755)
							result1->m[(int)11] = (int)0;
							HX_STACK_LINE(755)
							result1->m[(int)12] = ex;
							HX_STACK_LINE(755)
							result1->m[(int)13] = ey;
							HX_STACK_LINE(755)
							result1->m[(int)14] = ez;
							HX_STACK_LINE(755)
							result1->m[(int)15] = (int)1;
							HX_STACK_LINE(755)
							result1;
						}
					}
					HX_STACK_LINE(755)
					result->_localBillboard->m[(int)12] = result->_localBillboard->m[(int)13] = result->_localBillboard->m[(int)14] = (int)0;
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = result->_localBillboard;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
							HX_STACK_LINE(755)
							Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
							HX_STACK_LINE(755)
							Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
							HX_STACK_LINE(755)
							Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
							HX_STACK_LINE(755)
							Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
							HX_STACK_LINE(755)
							Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
							HX_STACK_LINE(755)
							Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
							HX_STACK_LINE(755)
							Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
							HX_STACK_LINE(755)
							Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
							HX_STACK_LINE(755)
							Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
							HX_STACK_LINE(755)
							Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
							HX_STACK_LINE(755)
							Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
							HX_STACK_LINE(755)
							Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
							HX_STACK_LINE(755)
							Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
							HX_STACK_LINE(755)
							Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
							HX_STACK_LINE(755)
							Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
							HX_STACK_LINE(755)
							Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
							HX_STACK_LINE(755)
							Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
							HX_STACK_LINE(755)
							Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
							HX_STACK_LINE(755)
							Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
							HX_STACK_LINE(755)
							Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
							HX_STACK_LINE(755)
							Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
							HX_STACK_LINE(755)
							Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
							HX_STACK_LINE(755)
							Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
							HX_STACK_LINE(755)
							Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
							HX_STACK_LINE(755)
							Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
							HX_STACK_LINE(755)
							Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
							HX_STACK_LINE(755)
							Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
							HX_STACK_LINE(755)
							Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
							HX_STACK_LINE(755)
							Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
							HX_STACK_LINE(755)
							Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
							HX_STACK_LINE(755)
							Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
							HX_STACK_LINE(755)
							Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
							HX_STACK_LINE(755)
							Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
							HX_STACK_LINE(755)
							Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
							HX_STACK_LINE(755)
							Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
							HX_STACK_LINE(755)
							Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
							HX_STACK_LINE(755)
							Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
							HX_STACK_LINE(755)
							Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
							HX_STACK_LINE(755)
							_this->m[(int)0] = (l23 * l27);
							HX_STACK_LINE(755)
							_this->m[(int)4] = (l24 * l27);
							HX_STACK_LINE(755)
							_this->m[(int)8] = (l25 * l27);
							HX_STACK_LINE(755)
							_this->m[(int)12] = (l26 * l27);
							HX_STACK_LINE(755)
							_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
							HX_STACK_LINE(755)
							_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
							HX_STACK_LINE(755)
							_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
							HX_STACK_LINE(755)
							_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
							HX_STACK_LINE(755)
							_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
							HX_STACK_LINE(755)
							_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
							HX_STACK_LINE(755)
							_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
							HX_STACK_LINE(755)
							_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
							HX_STACK_LINE(755)
							_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
							HX_STACK_LINE(755)
							_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
							HX_STACK_LINE(755)
							_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
							HX_STACK_LINE(755)
							_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
						}
					}
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = result->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = result->_localBillboard;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							Array< Float > result1 = result->_localWorld->m;		HX_STACK_VAR(result1,"result1");
							HX_STACK_LINE(755)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(755)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(755)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(755)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(755)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(755)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(755)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(755)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(755)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(755)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(755)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(755)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(755)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(755)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(755)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(755)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(755)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(755)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(755)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(755)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(755)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(755)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(755)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(755)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(755)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(755)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(755)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(755)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(755)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(755)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(755)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(755)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(755)
							result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(755)
							result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(755)
							result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(755)
							result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(755)
							result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(755)
							result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(755)
							result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(755)
							result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(755)
							result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(755)
							result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(755)
							result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(755)
							result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(755)
							result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(755)
							result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(755)
							result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(755)
							result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(755)
							result1;
						}
					}
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = result->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = result->_localWorld;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							Array< Float > result1 = result->_localPivotScalingRotation->m;		HX_STACK_VAR(result1,"result1");
							HX_STACK_LINE(755)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(755)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(755)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(755)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(755)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(755)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(755)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(755)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(755)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(755)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(755)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(755)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(755)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(755)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(755)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(755)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(755)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(755)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(755)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(755)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(755)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(755)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(755)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(755)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(755)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(755)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(755)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(755)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(755)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(755)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(755)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(755)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(755)
							result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(755)
							result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(755)
							result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(755)
							result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(755)
							result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(755)
							result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(755)
							result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(755)
							result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(755)
							result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(755)
							result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(755)
							result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(755)
							result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(755)
							result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(755)
							result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(755)
							result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(755)
							result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(755)
							result1;
						}
					}
				}
				struct _Function_3_1{
					inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::Mesh &result){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",755,0xf4cec482)
						{
							HX_STACK_LINE(755)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _g4 = result->parent->getWorldMatrix();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(755)
							return (_g4 != null());
						}
						return null();
					}
				};
				HX_STACK_LINE(755)
				if (((  (((  (((result->parent != null()))) ? bool(_Function_3_1::Block(result)) : bool(false) ))) ? bool((result->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = result->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = result->_localTranslation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							Array< Float > result1 = result->_localWorld->m;		HX_STACK_VAR(result1,"result1");
							HX_STACK_LINE(755)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(755)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(755)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(755)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(755)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(755)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(755)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(755)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(755)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(755)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(755)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(755)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(755)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(755)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(755)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(755)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(755)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(755)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(755)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(755)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(755)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(755)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(755)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(755)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(755)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(755)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(755)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(755)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(755)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(755)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(755)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(755)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(755)
							result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(755)
							result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(755)
							result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(755)
							result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(755)
							result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(755)
							result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(755)
							result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(755)
							result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(755)
							result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(755)
							result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(755)
							result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(755)
							result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(755)
							result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(755)
							result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(755)
							result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(755)
							result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(755)
							result1;
						}
					}
					HX_STACK_LINE(755)
					::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = result->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = result->_localWorld;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							Array< Float > result1 = result->_worldMatrix->m;		HX_STACK_VAR(result1,"result1");
							HX_STACK_LINE(755)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(755)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(755)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(755)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(755)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(755)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(755)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(755)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(755)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(755)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(755)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(755)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(755)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(755)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(755)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(755)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(755)
							Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(755)
							Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(755)
							Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(755)
							Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(755)
							Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(755)
							Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(755)
							Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(755)
							Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(755)
							Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(755)
							Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(755)
							Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(755)
							Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(755)
							Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(755)
							Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(755)
							Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(755)
							Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(755)
							result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(755)
							result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(755)
							result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(755)
							result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(755)
							result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(755)
							result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(755)
							result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(755)
							result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(755)
							result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(755)
							result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(755)
							result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(755)
							result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(755)
							result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(755)
							result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(755)
							result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(755)
							result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(755)
							result1;
						}
					}
				}
				else{
					HX_STACK_LINE(755)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = result->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(755)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = result->_localTranslation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						Array< Float > result1 = result->_worldMatrix->m;		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(755)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(755)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(755)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(755)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(755)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(755)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(755)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(755)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(755)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(755)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(755)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(755)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(755)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(755)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(755)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(755)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(755)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(755)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(755)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(755)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(755)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(755)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(755)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(755)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(755)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(755)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(755)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(755)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(755)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(755)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(755)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(755)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(755)
						result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(755)
						result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(755)
						result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(755)
						result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(755)
						result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(755)
						result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(755)
						result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(755)
						result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(755)
						result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(755)
						result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(755)
						result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(755)
						result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(755)
						result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(755)
						result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(755)
						result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(755)
						result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(755)
						result1;
					}
				}
				HX_STACK_LINE(755)
				if (((result->_boundingInfo != null()))){
					HX_STACK_LINE(755)
					Float _g5 = ::Math_obj::max(result->scaling->x,result->scaling->y);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(755)
					result->_scaleFactor = _g5;
					HX_STACK_LINE(755)
					Float _g6 = ::Math_obj::max(result->_scaleFactor,result->scaling->z);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(755)
					result->_scaleFactor = _g6;
					struct _Function_4_1{
						inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::Mesh &result){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",755,0xf4cec482)
							{
								HX_STACK_LINE(755)
								Dynamic _g7 = ::Reflect_obj::field(result->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(755)
								return (_g7 != null());
							}
							return null();
						}
					};
					HX_STACK_LINE(755)
					if (((  (((result->parent != null()))) ? bool(_Function_4_1::Block(result)) : bool(false) ))){
						HX_STACK_LINE(755)
						Dynamic _g8 = ::Reflect_obj::field(result->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(755)
						Float _g9 = (result->_scaleFactor * _g8);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(755)
						result->_scaleFactor = _g9;
					}
					HX_STACK_LINE(755)
					result->_boundingInfo->_update(result->_worldMatrix,result->_scaleFactor);
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(755)
						int _g3 = result->subMeshes->length;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(755)
						while((true)){
							HX_STACK_LINE(755)
							if ((!(((_g1 < _g3))))){
								HX_STACK_LINE(755)
								break;
							}
							HX_STACK_LINE(755)
							int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
							HX_STACK_LINE(755)
							::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = result->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
							HX_STACK_LINE(755)
							subMesh->_boundingInfo->_update(result->_worldMatrix,result->_scaleFactor);
						}
					}
				}
				HX_STACK_LINE(755)
				{
					HX_STACK_LINE(755)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = result->_absolutePosition;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(755)
					_this->x = result->_worldMatrix->m->__get((int)12);
					HX_STACK_LINE(755)
					_this->y = result->_worldMatrix->m->__get((int)13);
					HX_STACK_LINE(755)
					_this->z = result->_worldMatrix->m->__get((int)14);
				}
				HX_STACK_LINE(755)
				ret = result->_worldMatrix;
			}
			HX_STACK_LINE(755)
			ret;
		}
		HX_STACK_LINE(757)
		return result;
	}
}


Void Mesh_obj::dispose( hx::Null< bool >  __o_doNotRecurse){
bool doNotRecurse = __o_doNotRecurse.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","dispose",0xc03244ed,"com.gamestudiohx.babylonhx.mesh.Mesh.dispose","com/gamestudiohx/babylonhx/mesh/Mesh.hx",762,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(doNotRecurse,"doNotRecurse")
{
		HX_STACK_LINE(763)
		if (((this->_geometry != null()))){
			HX_STACK_LINE(766)
			this->_geometry->releaseForMesh(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(770)
		if (((this->_worldMatricesInstancesBuffer != null()))){
			HX_STACK_LINE(771)
			this->getScene()->getEngine()->_releaseBuffer(this->_worldMatricesInstancesBuffer);
			HX_STACK_LINE(772)
			this->_worldMatricesInstancesBuffer = null();
		}
		HX_STACK_LINE(775)
		while((true)){
			HX_STACK_LINE(775)
			if ((!(((this->instances->length > (int)0))))){
				HX_STACK_LINE(775)
				break;
			}
			HX_STACK_LINE(776)
			this->instances->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::mesh::InstancedMesh >()->dispose(null());
		}
		HX_STACK_LINE(779)
		this->super::dispose(doNotRecurse);
	}
return null();
}


Void Mesh_obj::convertToFlatShadedMesh( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","convertToFlatShadedMesh",0xbc95c8f9,"com.gamestudiohx.babylonhx.mesh.Mesh.convertToFlatShadedMesh","com/gamestudiohx/babylonhx/mesh/Mesh.hx",784,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(788)
		Array< ::String > kinds = this->getVerticesDataKinds();		HX_STACK_VAR(kinds,"kinds");
		HX_STACK_LINE(789)
		::haxe::ds::StringMap vbs = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(vbs,"vbs");
		HX_STACK_LINE(790)
		::haxe::ds::StringMap data = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(791)
		::haxe::ds::StringMap newdata = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(newdata,"newdata");
		HX_STACK_LINE(792)
		bool updatableNormals = false;		HX_STACK_VAR(updatableNormals,"updatableNormals");
		HX_STACK_LINE(793)
		{
			HX_STACK_LINE(793)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(793)
			int _g = kinds->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(793)
			while((true)){
				HX_STACK_LINE(793)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(793)
					break;
				}
				HX_STACK_LINE(793)
				int kindIndex = (_g1)++;		HX_STACK_VAR(kindIndex,"kindIndex");
				HX_STACK_LINE(794)
				::String kind = kinds->__get(kindIndex);		HX_STACK_VAR(kind,"kind");
				HX_STACK_LINE(796)
				if (((kind == ::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind))){
					HX_STACK_LINE(797)
					bool _g2 = this->getVertexBuffer(kind)->isUpdatable();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(797)
					updatableNormals = _g2;
					HX_STACK_LINE(798)
					kinds->remove(kind);
					HX_STACK_LINE(799)
					continue;
				}
			}
		}
		HX_STACK_LINE(802)
		{
			HX_STACK_LINE(802)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(802)
			while((true)){
				HX_STACK_LINE(802)
				if ((!(((_g < kinds->length))))){
					HX_STACK_LINE(802)
					break;
				}
				HX_STACK_LINE(802)
				::String kind = kinds->__get(_g);		HX_STACK_VAR(kind,"kind");
				HX_STACK_LINE(802)
				++(_g);
				HX_STACK_LINE(803)
				{
					HX_STACK_LINE(803)
					::com::gamestudiohx::babylonhx::mesh::VertexBuffer value = this->getVertexBuffer(kind);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(803)
					vbs->set(kind,value);
				}
				HX_STACK_LINE(804)
				{
					HX_STACK_LINE(804)
					Array< Float > value = vbs->get(kind)->__Field(HX_CSTRING("getData"),true)();		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(804)
					data->set(kind,value);
				}
				HX_STACK_LINE(805)
				newdata->set(kind,Array_obj< Float >::__new());
			}
		}
		HX_STACK_LINE(809)
		Array< ::Dynamic > previousSubmeshes = this->subMeshes->slice((int)0,null());		HX_STACK_VAR(previousSubmeshes,"previousSubmeshes");
		HX_STACK_LINE(811)
		Array< int > indices = this->getIndices();		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(814)
		{
			HX_STACK_LINE(814)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(814)
			int _g = indices->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(814)
			while((true)){
				HX_STACK_LINE(814)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(814)
					break;
				}
				HX_STACK_LINE(814)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(815)
				int vertexIndex = indices->__get(index);		HX_STACK_VAR(vertexIndex,"vertexIndex");
				HX_STACK_LINE(817)
				{
					HX_STACK_LINE(817)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(817)
					int _g2 = kinds->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(817)
					while((true)){
						HX_STACK_LINE(817)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(817)
							break;
						}
						HX_STACK_LINE(817)
						int kindIndex = (_g3)++;		HX_STACK_VAR(kindIndex,"kindIndex");
						HX_STACK_LINE(818)
						::String kind = kinds->__get(kindIndex);		HX_STACK_VAR(kind,"kind");
						HX_STACK_LINE(819)
						int stride = vbs->get(kind)->__Field(HX_CSTRING("getStrideSize"),true)();		HX_STACK_VAR(stride,"stride");
						HX_STACK_LINE(821)
						{
							HX_STACK_LINE(821)
							int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(821)
							while((true)){
								HX_STACK_LINE(821)
								if ((!(((_g4 < stride))))){
									HX_STACK_LINE(821)
									break;
								}
								HX_STACK_LINE(821)
								int offset = (_g4)++;		HX_STACK_VAR(offset,"offset");
								HX_STACK_LINE(822)
								Array< Float > _g11 = data->get(kind);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(822)
								Float _g21 = _g11->__get(((vertexIndex * stride) + offset));		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(822)
								newdata->get(kind)->__Field(HX_CSTRING("push"),true)(_g21);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(828)
		Array< Float > normals = Array_obj< Float >::__new();		HX_STACK_VAR(normals,"normals");
		HX_STACK_LINE(829)
		Array< Float > positions = newdata->get(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(830)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(831)
		while((true)){
			HX_STACK_LINE(831)
			if ((!(((index < indices->length))))){
				HX_STACK_LINE(831)
				break;
			}
			HX_STACK_LINE(832)
			indices[index] = index;
			HX_STACK_LINE(833)
			indices[(index + (int)1)] = (index + (int)1);
			HX_STACK_LINE(834)
			indices[(index + (int)2)] = (index + (int)2);
			HX_STACK_LINE(836)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p1;		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(836)
			{
				HX_STACK_LINE(836)
				int offset = (index * (int)3);		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(836)
				p1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(positions->__get(offset),positions->__get((offset + (int)1)),positions->__get((offset + (int)2)));
			}
			HX_STACK_LINE(837)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p2;		HX_STACK_VAR(p2,"p2");
			HX_STACK_LINE(837)
			{
				HX_STACK_LINE(837)
				int offset = (((index + (int)1)) * (int)3);		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(837)
				p2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(positions->__get(offset),positions->__get((offset + (int)1)),positions->__get((offset + (int)2)));
			}
			HX_STACK_LINE(838)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p3;		HX_STACK_VAR(p3,"p3");
			HX_STACK_LINE(838)
			{
				HX_STACK_LINE(838)
				int offset = (((index + (int)2)) * (int)3);		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(838)
				p3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(positions->__get(offset),positions->__get((offset + (int)1)),positions->__get((offset + (int)2)));
			}
			HX_STACK_LINE(840)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p1p2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((p1->x - p2->x),(p1->y - p2->y),(p1->z - p2->z));		HX_STACK_VAR(p1p2,"p1p2");
			HX_STACK_LINE(841)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p3p2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((p3->x - p2->x),(p3->y - p2->y),(p3->z - p2->z));		HX_STACK_VAR(p3p2,"p3p2");
			HX_STACK_LINE(843)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 normal;		HX_STACK_VAR(normal,"normal");
			HX_STACK_LINE(843)
			{
				HX_STACK_LINE(843)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 vector;		HX_STACK_VAR(vector,"vector");
				HX_STACK_LINE(843)
				{
					HX_STACK_LINE(843)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(843)
					{
						HX_STACK_LINE(843)
						result->x = ((p1p2->y * p3p2->z) - (p1p2->z * p3p2->y));
						HX_STACK_LINE(843)
						result->y = ((p1p2->z * p3p2->x) - (p1p2->x * p3p2->z));
						HX_STACK_LINE(843)
						result->z = ((p1p2->x * p3p2->y) - (p1p2->y * p3p2->x));
					}
					HX_STACK_LINE(843)
					vector = result;
				}
				HX_STACK_LINE(843)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(843)
				{
					HX_STACK_LINE(843)
					{
						HX_STACK_LINE(843)
						result->x = vector->x;
						HX_STACK_LINE(843)
						result->y = vector->y;
						HX_STACK_LINE(843)
						result->z = vector->z;
					}
					HX_STACK_LINE(843)
					{
						HX_STACK_LINE(843)
						Float len = ::Math_obj::sqrt((((result->x * result->x) + (result->y * result->y)) + (result->z * result->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(843)
						if (((len != (int)0))){
							HX_STACK_LINE(843)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(843)
							hx::MultEq(result->x,num);
							HX_STACK_LINE(843)
							hx::MultEq(result->y,num);
							HX_STACK_LINE(843)
							hx::MultEq(result->z,num);
						}
					}
				}
				HX_STACK_LINE(843)
				normal = result;
			}
			HX_STACK_LINE(846)
			{
				HX_STACK_LINE(846)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(846)
				while((true)){
					HX_STACK_LINE(846)
					if ((!(((_g < (int)3))))){
						HX_STACK_LINE(846)
						break;
					}
					HX_STACK_LINE(846)
					int localIndex = (_g)++;		HX_STACK_VAR(localIndex,"localIndex");
					HX_STACK_LINE(847)
					normals->push(normal->x);
					HX_STACK_LINE(848)
					normals->push(normal->y);
					HX_STACK_LINE(849)
					normals->push(normal->z);
				}
			}
			HX_STACK_LINE(852)
			hx::AddEq(index,(int)3);
		}
		HX_STACK_LINE(855)
		this->setIndices(indices);
		HX_STACK_LINE(856)
		this->setVerticesData(normals,::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind,updatableNormals);
		HX_STACK_LINE(859)
		{
			HX_STACK_LINE(859)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(859)
			int _g = kinds->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(859)
			while((true)){
				HX_STACK_LINE(859)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(859)
					break;
				}
				HX_STACK_LINE(859)
				int kindIndex = (_g1)++;		HX_STACK_VAR(kindIndex,"kindIndex");
				HX_STACK_LINE(860)
				::String kind = kinds->__get(kindIndex);		HX_STACK_VAR(kind,"kind");
				HX_STACK_LINE(861)
				Array< Float > _g3 = newdata->get(kind);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(861)
				bool _g4 = vbs->get(kind)->__Field(HX_CSTRING("isUpdatable"),true)();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(861)
				this->setVerticesData(_g3,kind,_g4);
			}
		}
		HX_STACK_LINE(865)
		this->subMeshes = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(866)
		{
			HX_STACK_LINE(866)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(866)
			int _g = previousSubmeshes->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(866)
			while((true)){
				HX_STACK_LINE(866)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(866)
					break;
				}
				HX_STACK_LINE(866)
				int submeshIndex = (_g1)++;		HX_STACK_VAR(submeshIndex,"submeshIndex");
				HX_STACK_LINE(867)
				::com::gamestudiohx::babylonhx::mesh::SubMesh previousOne = previousSubmeshes->__get(submeshIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(previousOne,"previousOne");
				HX_STACK_LINE(868)
				::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = ::com::gamestudiohx::babylonhx::mesh::SubMesh_obj::__new(previousOne->materialIndex,previousOne->indexStart,previousOne->indexCount,previousOne->indexStart,previousOne->indexCount,hx::ObjectPtr<OBJ_>(this),null(),null());		HX_STACK_VAR(subMesh,"subMesh");
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,convertToFlatShadedMesh,(void))

::com::gamestudiohx::babylonhx::mesh::InstancedMesh Mesh_obj::createInstance( ::String name){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","createInstance",0x4a952023,"com.gamestudiohx.babylonhx.mesh.Mesh.createInstance","com/gamestudiohx/babylonhx/mesh/Mesh.hx",875,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(875)
	return ::com::gamestudiohx::babylonhx::mesh::InstancedMesh_obj::__new(name,hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,createInstance,return )

Void Mesh_obj::synchronizeInstances( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","synchronizeInstances",0xd38b30c0,"com.gamestudiohx.babylonhx.mesh.Mesh.synchronizeInstances","com/gamestudiohx/babylonhx/mesh/Mesh.hx",878,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(881)
		int instanceIndex = (int)0;		HX_STACK_VAR(instanceIndex,"instanceIndex");
		HX_STACK_LINE(882)
		while((true)){
			HX_STACK_LINE(882)
			if ((!(((instanceIndex < this->instances->length))))){
				HX_STACK_LINE(882)
				break;
			}
			HX_STACK_LINE(883)
			::com::gamestudiohx::babylonhx::mesh::InstancedMesh instance = this->instances->__get(instanceIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::InstancedMesh >();		HX_STACK_VAR(instance,"instance");
			HX_STACK_LINE(884)
			instance->_syncSubMeshes();
			HX_STACK_LINE(885)
			(instanceIndex)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,synchronizeInstances,(void))

::com::gamestudiohx::babylonhx::mesh::Mesh Mesh_obj::CreateBox( ::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","CreateBox",0x48c5681d,"com.gamestudiohx.babylonhx.mesh.Mesh.CreateBox","com/gamestudiohx/babylonhx/mesh/Mesh.hx",892,0xf4cec482)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
	HX_STACK_LINE(893)
	::com::gamestudiohx::babylonhx::mesh::Mesh box = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(box,"box");
	HX_STACK_LINE(894)
	::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::CreateBox(size);		HX_STACK_VAR(vertexData,"vertexData");
	HX_STACK_LINE(896)
	vertexData->applyToMesh(box,updatable);
	HX_STACK_LINE(898)
	return box;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Mesh_obj,CreateBox,return )

::com::gamestudiohx::babylonhx::mesh::Mesh Mesh_obj::CreateSphere( ::String name,Float segments,Float diameter,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","CreateSphere",0xe6e81c3b,"com.gamestudiohx.babylonhx.mesh.Mesh.CreateSphere","com/gamestudiohx/babylonhx/mesh/Mesh.hx",901,0xf4cec482)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(segments,"segments")
	HX_STACK_ARG(diameter,"diameter")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
	HX_STACK_LINE(902)
	::com::gamestudiohx::babylonhx::mesh::Mesh sphere = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(sphere,"sphere");
	HX_STACK_LINE(903)
	::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::CreateSphere(segments,diameter);		HX_STACK_VAR(vertexData,"vertexData");
	HX_STACK_LINE(905)
	vertexData->applyToMesh(sphere,updatable);
	HX_STACK_LINE(907)
	return sphere;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Mesh_obj,CreateSphere,return )

::com::gamestudiohx::babylonhx::mesh::Mesh Mesh_obj::CreateCylinder( ::String name,int height,Float diameterTop,Float diameterBottom,int tessellation,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","CreateCylinder",0x4dd06b04,"com.gamestudiohx.babylonhx.mesh.Mesh.CreateCylinder","com/gamestudiohx/babylonhx/mesh/Mesh.hx",912,0xf4cec482)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(diameterTop,"diameterTop")
	HX_STACK_ARG(diameterBottom,"diameterBottom")
	HX_STACK_ARG(tessellation,"tessellation")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
	HX_STACK_LINE(913)
	::com::gamestudiohx::babylonhx::mesh::Mesh cylinder = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(cylinder,"cylinder");
	HX_STACK_LINE(914)
	::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::CreateCylinder(height,diameterTop,diameterBottom,tessellation);		HX_STACK_VAR(vertexData,"vertexData");
	HX_STACK_LINE(916)
	vertexData->applyToMesh(cylinder,updatable);
	HX_STACK_LINE(918)
	return cylinder;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Mesh_obj,CreateCylinder,return )

::com::gamestudiohx::babylonhx::mesh::Mesh Mesh_obj::CreateTorus( ::String name,Float diameter,Float thickness,int tessellation,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","CreateTorus",0x7037b347,"com.gamestudiohx.babylonhx.mesh.Mesh.CreateTorus","com/gamestudiohx/babylonhx/mesh/Mesh.hx",923,0xf4cec482)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(diameter,"diameter")
	HX_STACK_ARG(thickness,"thickness")
	HX_STACK_ARG(tessellation,"tessellation")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
	HX_STACK_LINE(924)
	::com::gamestudiohx::babylonhx::mesh::Mesh torus = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(torus,"torus");
	HX_STACK_LINE(925)
	::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::CreateTorus(diameter,thickness,tessellation);		HX_STACK_VAR(vertexData,"vertexData");
	HX_STACK_LINE(927)
	vertexData->applyToMesh(torus,updatable);
	HX_STACK_LINE(929)
	return torus;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Mesh_obj,CreateTorus,return )

::com::gamestudiohx::babylonhx::mesh::Mesh Mesh_obj::CreateTorusKnot( ::String name,Float radius,Float tube,Float radialSegments,Float tubularSegments,Float p,Float q,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","CreateTorusKnot",0x24e73c6f,"com.gamestudiohx.babylonhx.mesh.Mesh.CreateTorusKnot","com/gamestudiohx/babylonhx/mesh/Mesh.hx",932,0xf4cec482)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(tube,"tube")
	HX_STACK_ARG(radialSegments,"radialSegments")
	HX_STACK_ARG(tubularSegments,"tubularSegments")
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(q,"q")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
	HX_STACK_LINE(933)
	::com::gamestudiohx::babylonhx::mesh::Mesh torusKnot = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(torusKnot,"torusKnot");
	HX_STACK_LINE(934)
	::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::CreateTorusKnot(radius,tube,radialSegments,tubularSegments,p,q);		HX_STACK_VAR(vertexData,"vertexData");
	HX_STACK_LINE(936)
	vertexData->applyToMesh(torusKnot,updatable);
	HX_STACK_LINE(938)
	return torusKnot;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(Mesh_obj,CreateTorusKnot,return )

::com::gamestudiohx::babylonhx::mesh::Mesh Mesh_obj::CreatePlane( ::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","CreatePlane",0x2094d0ee,"com.gamestudiohx.babylonhx.mesh.Mesh.CreatePlane","com/gamestudiohx/babylonhx/mesh/Mesh.hx",943,0xf4cec482)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
	HX_STACK_LINE(944)
	::com::gamestudiohx::babylonhx::mesh::Mesh plane = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(plane,"plane");
	HX_STACK_LINE(945)
	::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::CreatePlane(size);		HX_STACK_VAR(vertexData,"vertexData");
	HX_STACK_LINE(947)
	vertexData->applyToMesh(plane,updatable);
	HX_STACK_LINE(949)
	return plane;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Mesh_obj,CreatePlane,return )

Dynamic Mesh_obj::MinMax( Array< ::Dynamic > meshes){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","MinMax",0x101fabc4,"com.gamestudiohx.babylonhx.mesh.Mesh.MinMax","com/gamestudiohx/babylonhx/mesh/Mesh.hx",1011,0xf4cec482)
	HX_STACK_ARG(meshes,"meshes")
	HX_STACK_LINE(1014)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1014)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g1,::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",1014,0xf4cec482)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("min") , _g,false);
				__result->Add(HX_CSTRING("max") , _g1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(1014)
	Dynamic _MinMax = _Function_1_1::Block(_g1,_g);		HX_STACK_VAR(_MinMax,"_MinMax");
	HX_STACK_LINE(1015)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 minVector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(minVector,"minVector");
	HX_STACK_LINE(1016)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 maxVector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(maxVector,"maxVector");
	HX_STACK_LINE(1019)
	{
		HX_STACK_LINE(1019)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(1019)
		int _g2 = meshes->length;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1019)
		while((true)){
			HX_STACK_LINE(1019)
			if ((!(((_g11 < _g2))))){
				HX_STACK_LINE(1019)
				break;
			}
			HX_STACK_LINE(1019)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1020)
			::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh = meshes->__get(i).StaticCast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >();		HX_STACK_VAR(mesh,"mesh");
			HX_STACK_LINE(1021)
			::com::gamestudiohx::babylonhx::culling::BoundingBox boundingBox = mesh->getBoundingInfo()->boundingBox;		HX_STACK_VAR(boundingBox,"boundingBox");
			HX_STACK_LINE(1022)
			if (((minVector == null()))){
				HX_STACK_LINE(1023)
				minVector = boundingBox->minimumWorld;
				HX_STACK_LINE(1024)
				maxVector = boundingBox->maximumWorld;
				HX_STACK_LINE(1025)
				continue;
			}
			HX_STACK_LINE(1027)
			minVector->MinimizeInPlace(boundingBox->minimumWorld);
			HX_STACK_LINE(1028)
			maxVector->MaximizeInPlace(boundingBox->maximumWorld);
		}
	}
	HX_STACK_LINE(1030)
	_MinMax->__FieldRef(HX_CSTRING("min")) = minVector;
	HX_STACK_LINE(1031)
	_MinMax->__FieldRef(HX_CSTRING("max")) = maxVector;
	HX_STACK_LINE(1032)
	return _MinMax;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,MinMax,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 Mesh_obj::Center( Dynamic meshesOrMinMaxVector){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","Center",0xc3115967,"com.gamestudiohx.babylonhx.mesh.Mesh.Center","com/gamestudiohx/babylonhx/mesh/Mesh.hx",1035,0xf4cec482)
	HX_STACK_ARG(meshesOrMinMaxVector,"meshesOrMinMaxVector")
	HX_STACK_LINE(1036)
	Dynamic minMaxVector;		HX_STACK_VAR(minMaxVector,"minMaxVector");
	HX_STACK_LINE(1036)
	if (((meshesOrMinMaxVector->__Field(HX_CSTRING("min"),true) != null()))){
		HX_STACK_LINE(1036)
		minMaxVector = meshesOrMinMaxVector;
	}
	else{
		HX_STACK_LINE(1036)
		minMaxVector = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::MinMax(meshesOrMinMaxVector);
	}
	HX_STACK_LINE(1037)
	return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Center(minMaxVector->__Field(HX_CSTRING("min"),true),minMaxVector->__Field(HX_CSTRING("max"),true));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,Center,return )


Mesh_obj::Mesh_obj()
{
}

void Mesh_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mesh);
	HX_MARK_MEMBER_NAME(delayLoadState,"delayLoadState");
	HX_MARK_MEMBER_NAME(instances,"instances");
	HX_MARK_MEMBER_NAME(delayLoadingFile,"delayLoadingFile");
	HX_MARK_MEMBER_NAME(_geometry,"_geometry");
	HX_MARK_MEMBER_NAME(_delayLoadingFunction,"_delayLoadingFunction");
	HX_MARK_MEMBER_NAME(_visibleInstances,"_visibleInstances");
	HX_MARK_MEMBER_NAME(_renderIdForInstances,"_renderIdForInstances");
	HX_MARK_MEMBER_NAME(_batchCache,"_batchCache");
	HX_MARK_MEMBER_NAME(_worldMatricesInstancesBuffer,"_worldMatricesInstancesBuffer");
	HX_MARK_MEMBER_NAME(_worldMatricesInstancesArray,"_worldMatricesInstancesArray");
	HX_MARK_MEMBER_NAME(_instancesBufferSize,"_instancesBufferSize");
	::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Mesh_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(delayLoadState,"delayLoadState");
	HX_VISIT_MEMBER_NAME(instances,"instances");
	HX_VISIT_MEMBER_NAME(delayLoadingFile,"delayLoadingFile");
	HX_VISIT_MEMBER_NAME(_geometry,"_geometry");
	HX_VISIT_MEMBER_NAME(_delayLoadingFunction,"_delayLoadingFunction");
	HX_VISIT_MEMBER_NAME(_visibleInstances,"_visibleInstances");
	HX_VISIT_MEMBER_NAME(_renderIdForInstances,"_renderIdForInstances");
	HX_VISIT_MEMBER_NAME(_batchCache,"_batchCache");
	HX_VISIT_MEMBER_NAME(_worldMatricesInstancesBuffer,"_worldMatricesInstancesBuffer");
	HX_VISIT_MEMBER_NAME(_worldMatricesInstancesArray,"_worldMatricesInstancesArray");
	HX_VISIT_MEMBER_NAME(_instancesBufferSize,"_instancesBufferSize");
	::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Mesh_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_bind") ) { return _bind_dyn(); }
		if (HX_FIELD_EQ(inName,"_draw") ) { return _draw_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"MinMax") ) { return MinMax_dyn(); }
		if (HX_FIELD_EQ(inName,"Center") ) { return Center_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isReady") ) { return isReady_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"CreateBox") ) { return CreateBox_dyn(); }
		if (HX_FIELD_EQ(inName,"instances") ) { return instances; }
		if (HX_FIELD_EQ(inName,"_geometry") ) { return _geometry; }
		if (HX_FIELD_EQ(inName,"subdivide") ) { return subdivide_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getIndices") ) { return getIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"setIndices") ) { return setIndices_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"CreateTorus") ) { return CreateTorus_dyn(); }
		if (HX_FIELD_EQ(inName,"CreatePlane") ) { return CreatePlane_dyn(); }
		if (HX_FIELD_EQ(inName,"_batchCache") ) { return _batchCache; }
		if (HX_FIELD_EQ(inName,"getChildren") ) { return getChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"isInFrustum") ) { return isInFrustum_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"CreateSphere") ) { return CreateSphere_dyn(); }
		if (HX_FIELD_EQ(inName,"_preActivate") ) { return _preActivate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"CreateCylinder") ) { return CreateCylinder_dyn(); }
		if (HX_FIELD_EQ(inName,"delayLoadState") ) { return delayLoadState; }
		if (HX_FIELD_EQ(inName,"getAnimatables") ) { return getAnimatables_dyn(); }
		if (HX_FIELD_EQ(inName,"createInstance") ) { return createInstance_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"CreateTorusKnot") ) { return CreateTorusKnot_dyn(); }
		if (HX_FIELD_EQ(inName,"getVerticesData") ) { return getVerticesData_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexBuffer") ) { return getVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getTotalIndices") ) { return getTotalIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"setVerticesData") ) { return setVerticesData_dyn(); }
		if (HX_FIELD_EQ(inName,"setMaterialByID") ) { return setMaterialByID_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"delayLoadingFile") ) { return delayLoadingFile; }
		if (HX_FIELD_EQ(inName,"getTotalVertices") ) { return getTotalVertices_dyn(); }
		if (HX_FIELD_EQ(inName,"_checkDelayState") ) { return _checkDelayState_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_visibleInstances") ) { return _visibleInstances; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateVerticesData") ) { return updateVerticesData_dyn(); }
		if (HX_FIELD_EQ(inName,"makeGeometryUnique") ) { return makeGeometryUnique_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"refreshBoundingInfo") ) { return refreshBoundingInfo_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_instancesBufferSize") ) { return _instancesBufferSize; }
		if (HX_FIELD_EQ(inName,"getVerticesDataKinds") ) { return getVerticesDataKinds_dyn(); }
		if (HX_FIELD_EQ(inName,"_createGlobalSubMesh") ) { return _createGlobalSubMesh_dyn(); }
		if (HX_FIELD_EQ(inName,"registerBeforeRender") ) { return registerBeforeRender_dyn(); }
		if (HX_FIELD_EQ(inName,"_renderWithInstances") ) { return _renderWithInstances_dyn(); }
		if (HX_FIELD_EQ(inName,"_generatePointsArray") ) { return _generatePointsArray_dyn(); }
		if (HX_FIELD_EQ(inName,"synchronizeInstances") ) { return synchronizeInstances_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_delayLoadingFunction") ) { return _delayLoadingFunction; }
		if (HX_FIELD_EQ(inName,"_renderIdForInstances") ) { return _renderIdForInstances; }
		if (HX_FIELD_EQ(inName,"isVerticesDataPresent") ) { return isVerticesDataPresent_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"unregisterBeforeRender") ) { return unregisterBeforeRender_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_getInstancesRenderList") ) { return _getInstancesRenderList_dyn(); }
		if (HX_FIELD_EQ(inName,"convertToFlatShadedMesh") ) { return convertToFlatShadedMesh_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getEmittedParticleSystems") ) { return getEmittedParticleSystems_dyn(); }
		if (HX_FIELD_EQ(inName,"bakeTransformIntoVertices") ) { return bakeTransformIntoVertices_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_worldMatricesInstancesArray") ) { return _worldMatricesInstancesArray; }
		if (HX_FIELD_EQ(inName,"_registerInstanceForRenderId") ) { return _registerInstanceForRenderId_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_worldMatricesInstancesBuffer") ) { return _worldMatricesInstancesBuffer; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"getHierarchyEmittedParticleSystems") ) { return getHierarchyEmittedParticleSystems_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mesh_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { instances=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_geometry") ) { _geometry=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::Geometry >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_batchCache") ) { _batchCache=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::InstancesBatch >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"delayLoadState") ) { delayLoadState=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"delayLoadingFile") ) { delayLoadingFile=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_visibleInstances") ) { _visibleInstances=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_instancesBufferSize") ) { _instancesBufferSize=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_delayLoadingFunction") ) { _delayLoadingFunction=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderIdForInstances") ) { _renderIdForInstances=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_worldMatricesInstancesArray") ) { _worldMatricesInstancesArray=inValue.Cast< ::openfl::utils::Float32Array >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_worldMatricesInstancesBuffer") ) { _worldMatricesInstancesBuffer=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mesh_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("delayLoadState"));
	outFields->push(HX_CSTRING("instances"));
	outFields->push(HX_CSTRING("delayLoadingFile"));
	outFields->push(HX_CSTRING("_geometry"));
	outFields->push(HX_CSTRING("_delayLoadingFunction"));
	outFields->push(HX_CSTRING("_visibleInstances"));
	outFields->push(HX_CSTRING("_renderIdForInstances"));
	outFields->push(HX_CSTRING("_batchCache"));
	outFields->push(HX_CSTRING("_worldMatricesInstancesBuffer"));
	outFields->push(HX_CSTRING("_worldMatricesInstancesArray"));
	outFields->push(HX_CSTRING("_instancesBufferSize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CreateBox"),
	HX_CSTRING("CreateSphere"),
	HX_CSTRING("CreateCylinder"),
	HX_CSTRING("CreateTorus"),
	HX_CSTRING("CreateTorusKnot"),
	HX_CSTRING("CreatePlane"),
	HX_CSTRING("MinMax"),
	HX_CSTRING("Center"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Mesh_obj,delayLoadState),HX_CSTRING("delayLoadState")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Mesh_obj,instances),HX_CSTRING("instances")},
	{hx::fsString,(int)offsetof(Mesh_obj,delayLoadingFile),HX_CSTRING("delayLoadingFile")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::Geometry*/ ,(int)offsetof(Mesh_obj,_geometry),HX_CSTRING("_geometry")},
	{hx::fsString,(int)offsetof(Mesh_obj,_delayLoadingFunction),HX_CSTRING("_delayLoadingFunction")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Mesh_obj,_visibleInstances),HX_CSTRING("_visibleInstances")},
	{hx::fsInt,(int)offsetof(Mesh_obj,_renderIdForInstances),HX_CSTRING("_renderIdForInstances")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::InstancesBatch*/ ,(int)offsetof(Mesh_obj,_batchCache),HX_CSTRING("_batchCache")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer*/ ,(int)offsetof(Mesh_obj,_worldMatricesInstancesBuffer),HX_CSTRING("_worldMatricesInstancesBuffer")},
	{hx::fsObject /*::openfl::utils::Float32Array*/ ,(int)offsetof(Mesh_obj,_worldMatricesInstancesArray),HX_CSTRING("_worldMatricesInstancesArray")},
	{hx::fsInt,(int)offsetof(Mesh_obj,_instancesBufferSize),HX_CSTRING("_instancesBufferSize")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("delayLoadState"),
	HX_CSTRING("instances"),
	HX_CSTRING("delayLoadingFile"),
	HX_CSTRING("_geometry"),
	HX_CSTRING("_delayLoadingFunction"),
	HX_CSTRING("_visibleInstances"),
	HX_CSTRING("_renderIdForInstances"),
	HX_CSTRING("_batchCache"),
	HX_CSTRING("_worldMatricesInstancesBuffer"),
	HX_CSTRING("_worldMatricesInstancesArray"),
	HX_CSTRING("_instancesBufferSize"),
	HX_CSTRING("getTotalVertices"),
	HX_CSTRING("getVerticesData"),
	HX_CSTRING("getVertexBuffer"),
	HX_CSTRING("isVerticesDataPresent"),
	HX_CSTRING("getVerticesDataKinds"),
	HX_CSTRING("getTotalIndices"),
	HX_CSTRING("getIndices"),
	HX_CSTRING("isReady"),
	HX_CSTRING("_preActivate"),
	HX_CSTRING("_registerInstanceForRenderId"),
	HX_CSTRING("refreshBoundingInfo"),
	HX_CSTRING("_createGlobalSubMesh"),
	HX_CSTRING("subdivide"),
	HX_CSTRING("setVerticesData"),
	HX_CSTRING("updateVerticesData"),
	HX_CSTRING("makeGeometryUnique"),
	HX_CSTRING("setIndices"),
	HX_CSTRING("_bind"),
	HX_CSTRING("_draw"),
	HX_CSTRING("registerBeforeRender"),
	HX_CSTRING("unregisterBeforeRender"),
	HX_CSTRING("_getInstancesRenderList"),
	HX_CSTRING("_renderWithInstances"),
	HX_CSTRING("render"),
	HX_CSTRING("getEmittedParticleSystems"),
	HX_CSTRING("getHierarchyEmittedParticleSystems"),
	HX_CSTRING("getChildren"),
	HX_CSTRING("_checkDelayState"),
	HX_CSTRING("isInFrustum"),
	HX_CSTRING("setMaterialByID"),
	HX_CSTRING("getAnimatables"),
	HX_CSTRING("bakeTransformIntoVertices"),
	HX_CSTRING("_generatePointsArray"),
	HX_CSTRING("clone"),
	HX_CSTRING("dispose"),
	HX_CSTRING("convertToFlatShadedMesh"),
	HX_CSTRING("createInstance"),
	HX_CSTRING("synchronizeInstances"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mesh_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mesh_obj::__mClass,"__mClass");
};

#endif

Class Mesh_obj::__mClass;

void Mesh_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Mesh"), hx::TCanCast< Mesh_obj> ,sStaticFields,sMemberFields,
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

void Mesh_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh
