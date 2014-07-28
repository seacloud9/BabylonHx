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
	HX_STACK_LINE(42)
	this->_onBeforeRenderCallbacks = Dynamic( Array_obj<Dynamic>::__new() );
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
	HX_STACK_LINE(122)
	return this->super::isReady();
}


Void Mesh_obj::_preActivate( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","_preActivate",0xa0a821e9,"com.gamestudiohx.babylonhx.mesh.Mesh._preActivate","com/gamestudiohx/babylonhx/mesh/Mesh.hx",133,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		this->_visibleInstances = null();
	}
return null();
}


Void Mesh_obj::_registerInstanceForRenderId( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh instance,int renderId){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","_registerInstanceForRenderId",0x9be2a7b5,"com.gamestudiohx.babylonhx.mesh.Mesh._registerInstanceForRenderId","com/gamestudiohx/babylonhx/mesh/Mesh.hx",136,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(instance,"instance")
		HX_STACK_ARG(renderId,"renderId")
		HX_STACK_LINE(137)
		if (((this->_visibleInstances != null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",138,0xf4cec482)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(138)
			this->_visibleInstances = _Function_2_1::Block();
			HX_STACK_LINE(139)
			this->_visibleInstances->__FieldRef(HX_CSTRING("defaultRenderId")) = renderId;
			HX_STACK_LINE(140)
			this->_visibleInstances->__FieldRef(HX_CSTRING("selfDefaultRenderId")) = this->_renderId;
		}
		HX_STACK_LINE(143)
		if (((this->_visibleInstances->__GetItem(renderId) == null()))){
			HX_STACK_LINE(144)
			hx::IndexRef((this->_visibleInstances).mPtr,renderId) = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(147)
		this->_visibleInstances->__GetItem(renderId)->__Field(HX_CSTRING("push"),true)(instance);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Mesh_obj,_registerInstanceForRenderId,(void))

Void Mesh_obj::refreshBoundingInfo( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","refreshBoundingInfo",0x15fc81bb,"com.gamestudiohx.babylonhx.mesh.Mesh.refreshBoundingInfo","com/gamestudiohx/babylonhx/mesh/Mesh.hx",150,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(151)
		Array< Float > data = this->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(153)
		if (((data->length > (int)0))){
			HX_STACK_LINE(154)
			Dynamic extend;		HX_STACK_VAR(extend,"extend");
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				int count = this->getTotalVertices();		HX_STACK_VAR(count,"count");
				HX_STACK_LINE(154)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(minimum,"minimum");
				HX_STACK_LINE(154)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY);		HX_STACK_VAR(maximum,"maximum");
				HX_STACK_LINE(154)
				{
					HX_STACK_LINE(154)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(154)
					int _g = count;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(154)
					while((true)){
						HX_STACK_LINE(154)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(154)
							break;
						}
						HX_STACK_LINE(154)
						int index = (_g1)++;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(154)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 current = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data->__get((index * (int)3)),data->__get(((index * (int)3) + (int)1)),data->__get(((index * (int)3) + (int)2)));		HX_STACK_VAR(current,"current");
						HX_STACK_LINE(154)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(154)
						{
							HX_STACK_LINE(154)
							Float x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(154)
							if (((current->x < minimum->x))){
								HX_STACK_LINE(154)
								x = current->x;
							}
							else{
								HX_STACK_LINE(154)
								x = minimum->x;
							}
							HX_STACK_LINE(154)
							Float y;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(154)
							if (((current->y < minimum->y))){
								HX_STACK_LINE(154)
								y = current->y;
							}
							else{
								HX_STACK_LINE(154)
								y = minimum->y;
							}
							HX_STACK_LINE(154)
							Float z;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(154)
							if (((current->z < minimum->z))){
								HX_STACK_LINE(154)
								z = current->z;
							}
							else{
								HX_STACK_LINE(154)
								z = minimum->z;
							}
							HX_STACK_LINE(154)
							_g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
						}
						HX_STACK_LINE(154)
						minimum = _g2;
						HX_STACK_LINE(154)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(154)
						{
							HX_STACK_LINE(154)
							Float x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(154)
							if (((current->x > maximum->x))){
								HX_STACK_LINE(154)
								x = current->x;
							}
							else{
								HX_STACK_LINE(154)
								x = maximum->x;
							}
							HX_STACK_LINE(154)
							Float y;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(154)
							if (((current->y > maximum->y))){
								HX_STACK_LINE(154)
								y = current->y;
							}
							else{
								HX_STACK_LINE(154)
								y = maximum->y;
							}
							HX_STACK_LINE(154)
							Float z;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(154)
							if (((current->z > maximum->z))){
								HX_STACK_LINE(154)
								z = current->z;
							}
							else{
								HX_STACK_LINE(154)
								z = maximum->z;
							}
							HX_STACK_LINE(154)
							_g11 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
						}
						HX_STACK_LINE(154)
						maximum = _g11;
					}
				}
				struct _Function_3_1{
					inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 &maximum){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",154,0xf4cec482)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("minimum") , minimum,false);
							__result->Add(HX_CSTRING("maximum") , maximum,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(154)
				extend = _Function_3_1::Block(minimum,maximum);
			}
			HX_STACK_LINE(155)
			::com::gamestudiohx::babylonhx::culling::BoundingInfo _g2 = ::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__new(extend->__Field(HX_CSTRING("minimum"),true),extend->__Field(HX_CSTRING("maximum"),true));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(155)
			this->_boundingInfo = _g2;
		}
		HX_STACK_LINE(158)
		if (((this->subMeshes->length > (int)0))){
			HX_STACK_LINE(161)
			int index = (int)0;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(162)
			while((true)){
				HX_STACK_LINE(162)
				if ((!(((index < this->subMeshes->length))))){
					HX_STACK_LINE(162)
					break;
				}
				HX_STACK_LINE(163)
				{
					HX_STACK_LINE(163)
					::com::gamestudiohx::babylonhx::mesh::SubMesh _this = this->subMeshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(163)
					Array< Float > data1 = _this->_renderingMesh->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(163)
					if (((data1 != null()))){
						HX_STACK_LINE(163)
						Dynamic extend;		HX_STACK_VAR(extend,"extend");
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							int start = _this->verticesStart;		HX_STACK_VAR(start,"start");
							HX_STACK_LINE(163)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(minimum,"minimum");
							HX_STACK_LINE(163)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY);		HX_STACK_VAR(maximum,"maximum");
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int _g1 = start;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(163)
								int _g = (start + _this->verticesCount);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(163)
								while((true)){
									HX_STACK_LINE(163)
									if ((!(((_g1 < _g))))){
										HX_STACK_LINE(163)
										break;
									}
									HX_STACK_LINE(163)
									int index1 = (_g1)++;		HX_STACK_VAR(index1,"index1");
									HX_STACK_LINE(163)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 current = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data1->__get((index1 * (int)3)),data1->__get(((index1 * (int)3) + (int)1)),data1->__get(((index1 * (int)3) + (int)2)));		HX_STACK_VAR(current,"current");
									HX_STACK_LINE(163)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3;		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(163)
									{
										HX_STACK_LINE(163)
										Float x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(163)
										if (((current->x < minimum->x))){
											HX_STACK_LINE(163)
											x = current->x;
										}
										else{
											HX_STACK_LINE(163)
											x = minimum->x;
										}
										HX_STACK_LINE(163)
										Float y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(163)
										if (((current->y < minimum->y))){
											HX_STACK_LINE(163)
											y = current->y;
										}
										else{
											HX_STACK_LINE(163)
											y = minimum->y;
										}
										HX_STACK_LINE(163)
										Float z;		HX_STACK_VAR(z,"z");
										HX_STACK_LINE(163)
										if (((current->z < minimum->z))){
											HX_STACK_LINE(163)
											z = current->z;
										}
										else{
											HX_STACK_LINE(163)
											z = minimum->z;
										}
										HX_STACK_LINE(163)
										_g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
									}
									HX_STACK_LINE(163)
									minimum = _g3;
									HX_STACK_LINE(163)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4;		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(163)
									{
										HX_STACK_LINE(163)
										Float x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(163)
										if (((current->x > maximum->x))){
											HX_STACK_LINE(163)
											x = current->x;
										}
										else{
											HX_STACK_LINE(163)
											x = maximum->x;
										}
										HX_STACK_LINE(163)
										Float y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(163)
										if (((current->y > maximum->y))){
											HX_STACK_LINE(163)
											y = current->y;
										}
										else{
											HX_STACK_LINE(163)
											y = maximum->y;
										}
										HX_STACK_LINE(163)
										Float z;		HX_STACK_VAR(z,"z");
										HX_STACK_LINE(163)
										if (((current->z > maximum->z))){
											HX_STACK_LINE(163)
											z = current->z;
										}
										else{
											HX_STACK_LINE(163)
											z = maximum->z;
										}
										HX_STACK_LINE(163)
										_g4 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
									}
									HX_STACK_LINE(163)
									maximum = _g4;
								}
							}
							struct _Function_6_1{
								inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 &maximum){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",163,0xf4cec482)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("minimum") , minimum,false);
										__result->Add(HX_CSTRING("maximum") , maximum,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(163)
							extend = _Function_6_1::Block(minimum,maximum);
						}
						HX_STACK_LINE(163)
						::com::gamestudiohx::babylonhx::culling::BoundingInfo _g5 = ::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__new(extend->__Field(HX_CSTRING("minimum"),true),extend->__Field(HX_CSTRING("maximum"),true));		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(163)
						_this->_boundingInfo = _g5;
					}
				}
				HX_STACK_LINE(164)
				(index)++;
			}
		}
		HX_STACK_LINE(169)
		if (((this->_boundingInfo != null()))){
			HX_STACK_LINE(169)
			Float _g6 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(169)
			this->_scaleFactor = _g6;
			HX_STACK_LINE(169)
			Float _g7 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(169)
			this->_scaleFactor = _g7;
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",169,0xf4cec482)
					{
						HX_STACK_LINE(169)
						Dynamic _g8 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(169)
						return (_g8 != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(169)
			if (((  (((this->parent != null()))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(169)
				Dynamic _g9 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(169)
				Float _g10 = (this->_scaleFactor * _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(169)
				this->_scaleFactor = _g10;
			}
			HX_STACK_LINE(169)
			this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
			HX_STACK_LINE(169)
			{
				HX_STACK_LINE(169)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(169)
				int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(169)
				while((true)){
					HX_STACK_LINE(169)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(169)
						break;
					}
					HX_STACK_LINE(169)
					int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
					HX_STACK_LINE(169)
					::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
					HX_STACK_LINE(169)
					subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,refreshBoundingInfo,(void))

::com::gamestudiohx::babylonhx::mesh::SubMesh Mesh_obj::_createGlobalSubMesh( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","_createGlobalSubMesh",0x30e58dc1,"com.gamestudiohx.babylonhx.mesh.Mesh._createGlobalSubMesh","com/gamestudiohx/babylonhx/mesh/Mesh.hx",172,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(173)
	int totalVertices = this->getTotalVertices();		HX_STACK_VAR(totalVertices,"totalVertices");
	HX_STACK_LINE(175)
	if (((bool((totalVertices == (int)0)) || bool((this->getIndices()->length == (int)0))))){
		HX_STACK_LINE(176)
		return null();
	}
	HX_STACK_LINE(179)
	this->releaseSubMeshes();
	HX_STACK_LINE(180)
	int _g = this->getTotalIndices();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(180)
	return ::com::gamestudiohx::babylonhx::mesh::SubMesh_obj::__new((int)0,(int)0,totalVertices,(int)0,_g,hx::ObjectPtr<OBJ_>(this),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,_createGlobalSubMesh,return )

Void Mesh_obj::subdivide( Float count){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","subdivide",0xede3ecc7,"com.gamestudiohx.babylonhx.mesh.Mesh.subdivide","com/gamestudiohx/babylonhx/mesh/Mesh.hx",183,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(184)
		if (((count < (int)1))){
			HX_STACK_LINE(185)
			return null();
		}
		HX_STACK_LINE(188)
		int totalIndices = this->getTotalIndices();		HX_STACK_VAR(totalIndices,"totalIndices");
		HX_STACK_LINE(189)
		int _g = ::Std_obj::_int((Float(totalIndices) / Float(count)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(189)
		int subdivisionSize = (int(_g) | int((int)0));		HX_STACK_VAR(subdivisionSize,"subdivisionSize");
		HX_STACK_LINE(190)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(193)
		while((true)){
			HX_STACK_LINE(193)
			if ((!(((hx::Mod(subdivisionSize,(int)3) != (int)0))))){
				HX_STACK_LINE(193)
				break;
			}
			HX_STACK_LINE(194)
			(subdivisionSize)++;
		}
		HX_STACK_LINE(197)
		this->releaseSubMeshes();
		HX_STACK_LINE(200)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(201)
		while((true)){
			HX_STACK_LINE(201)
			if ((!(((index < count))))){
				HX_STACK_LINE(201)
				break;
			}
			HX_STACK_LINE(202)
			if (((offset >= totalIndices))){
				HX_STACK_LINE(203)
				break;
			}
			HX_STACK_LINE(206)
			Float _g1 = ::Math_obj::min(subdivisionSize,(totalIndices - offset));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(206)
			int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(206)
			::com::gamestudiohx::babylonhx::mesh::SubMesh_obj::CreateFromIndices((int)0,offset,_g2,hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(208)
			hx::AddEq(offset,subdivisionSize);
			HX_STACK_LINE(209)
			(index)++;
		}
		HX_STACK_LINE(213)
		this->synchronizeInstances();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,subdivide,(void))

Void Mesh_obj::setVerticesData( ::String _tmp_kind,Array< Float > _tmp_data,Dynamic updatable){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","setVerticesData",0xd7f1c7d3,"com.gamestudiohx.babylonhx.mesh.Mesh.setVerticesData","com/gamestudiohx/babylonhx/mesh/Mesh.hx",216,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_tmp_kind,"_tmp_kind")
		HX_STACK_ARG(_tmp_data,"_tmp_data")
		HX_STACK_ARG(updatable,"updatable")
		HX_STACK_LINE(217)
		Dynamic kind = _tmp_kind;		HX_STACK_VAR(kind,"kind");
		HX_STACK_LINE(217)
		Dynamic data = _tmp_data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(217)
		if ((::Std_obj::is(kind,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(218)
			Dynamic temp = data;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(219)
			data = kind;
			HX_STACK_LINE(220)
			kind = temp;
			HX_STACK_LINE(222)
			::haxe::Log_obj::trace(HX_CSTRING("Deprecated usage of setVerticesData detected (since v1.12). Current signature is setVerticesData(kind, data, updatable)."),hx::SourceInfo(HX_CSTRING("Mesh.hx"),222,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Mesh"),HX_CSTRING("setVerticesData")));
		}
		HX_STACK_LINE(225)
		if (((this->_geometry == null()))){
			HX_STACK_LINE(226)
			::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::__new();		HX_STACK_VAR(vertexData,"vertexData");
			HX_STACK_LINE(227)
			vertexData->set(data,kind);
			HX_STACK_LINE(229)
			::com::gamestudiohx::babylonhx::Scene scene = this->getScene();		HX_STACK_VAR(scene,"scene");
			HX_STACK_LINE(231)
			::String _g = ::com::gamestudiohx::babylonhx::mesh::Geometry_obj::RandomId();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(231)
			::com::gamestudiohx::babylonhx::Engine _g1 = scene->getEngine();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(231)
			::com::gamestudiohx::babylonhx::mesh::Geometry _g2 = ::com::gamestudiohx::babylonhx::mesh::Geometry_obj::__new(_g,_g1,vertexData,updatable,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(231)
			this->_geometry = _g2;
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
		HX_STACK_LINE(276)
		::com::gamestudiohx::babylonhx::Engine engine = this->getScene()->getEngine();		HX_STACK_VAR(engine,"engine");
		HX_STACK_LINE(279)
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer indexToBind = this->_geometry->getIndexBuffer();		HX_STACK_VAR(indexToBind,"indexToBind");
		HX_STACK_LINE(281)
		if ((wireframe)){
			HX_STACK_LINE(282)
			::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(282)
			{
				HX_STACK_LINE(282)
				Array< int > indices = this->getIndices();		HX_STACK_VAR(indices,"indices");
				HX_STACK_LINE(282)
				if (((subMesh->_linesIndexBuffer == null()))){
					HX_STACK_LINE(282)
					Array< int > linesIndices = Array_obj< int >::__new();		HX_STACK_VAR(linesIndices,"linesIndices");
					HX_STACK_LINE(282)
					int index = subMesh->indexStart;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(282)
					while((true)){
						HX_STACK_LINE(282)
						if ((!(((index < (subMesh->indexStart + subMesh->indexCount)))))){
							HX_STACK_LINE(282)
							break;
						}
						HX_STACK_LINE(282)
						linesIndices->push(indices->__get(index));
						HX_STACK_LINE(282)
						linesIndices->push(indices->__get((index + (int)1)));
						HX_STACK_LINE(282)
						linesIndices->push(indices->__get((index + (int)1)));
						HX_STACK_LINE(282)
						linesIndices->push(indices->__get((index + (int)2)));
						HX_STACK_LINE(282)
						linesIndices->push(indices->__get((index + (int)2)));
						HX_STACK_LINE(282)
						linesIndices->push(indices->__get(index));
						HX_STACK_LINE(282)
						hx::AddEq(index,(int)3);
					}
					HX_STACK_LINE(282)
					::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g = engine->createIndexBuffer(linesIndices);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(282)
					subMesh->_linesIndexBuffer = _g;
					HX_STACK_LINE(282)
					subMesh->linesIndexCount = linesIndices->length;
				}
				HX_STACK_LINE(282)
				_g1 = subMesh->_linesIndexBuffer;
			}
			HX_STACK_LINE(282)
			indexToBind = _g1;
		}
		HX_STACK_LINE(286)
		::haxe::ds::StringMap _g2 = this->_geometry->getVertexBuffers();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(286)
		engine->bindMultiBuffers(_g2,indexToBind,effect);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Mesh_obj,_bind,(void))

Void Mesh_obj::_draw( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,bool useTriangles,Dynamic instancesCount){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","_draw",0x48c5bcb1,"com.gamestudiohx.babylonhx.mesh.Mesh._draw","com/gamestudiohx/babylonhx/mesh/Mesh.hx",289,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(subMesh,"subMesh")
		HX_STACK_ARG(useTriangles,"useTriangles")
		HX_STACK_ARG(instancesCount,"instancesCount")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",292,0xf4cec482)
				{
					HX_STACK_LINE(292)
					::haxe::ds::StringMap _g = __this->_geometry->getVertexBuffers();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(292)
					int _g1 = ::Lambda_obj::count(_g,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(292)
					return (_g1 == (int)0);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",292,0xf4cec482)
				{
					HX_STACK_LINE(292)
					Dynamic _g2 = __this->_geometry->getIndexBuffer();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(292)
					return (_g2 == null());
				}
				return null();
			}
		};
		HX_STACK_LINE(292)
		if (((  ((!(((  ((!(((this->_geometry == null()))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))))) ? bool(_Function_1_2::Block(this)) : bool(true) ))){
			HX_STACK_LINE(293)
			return null();
		}
		HX_STACK_LINE(296)
		::com::gamestudiohx::babylonhx::Engine engine = this->getScene()->getEngine();		HX_STACK_VAR(engine,"engine");
		HX_STACK_LINE(299)
		engine->draw(useTriangles,(  ((useTriangles)) ? int(subMesh->indexStart) : int((int)0) ),(  ((useTriangles)) ? int(subMesh->indexCount) : int(subMesh->linesIndexCount) ),instancesCount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Mesh_obj,_draw,(void))

Void Mesh_obj::registerBeforeRender( Dynamic func){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","registerBeforeRender",0x9c2fbb2a,"com.gamestudiohx.babylonhx.mesh.Mesh.registerBeforeRender","com/gamestudiohx/babylonhx/mesh/Mesh.hx",303,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(303)
		this->_onBeforeRenderCallbacks->__Field(HX_CSTRING("push"),true)(func);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,registerBeforeRender,(void))

Void Mesh_obj::unregisterBeforeRender( Dynamic func){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","unregisterBeforeRender",0xebe1e483,"com.gamestudiohx.babylonhx.mesh.Mesh.unregisterBeforeRender","com/gamestudiohx/babylonhx/mesh/Mesh.hx",306,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(307)
		int index = this->_onBeforeRenderCallbacks->__Field(HX_CSTRING("indexOf"),true)(func,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(309)
		if (((index > (int)-1))){
			HX_STACK_LINE(310)
			this->_onBeforeRenderCallbacks->__Field(HX_CSTRING("splice"),true)(index,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,unregisterBeforeRender,(void))

::com::gamestudiohx::babylonhx::mesh::InstancesBatch Mesh_obj::_getInstancesRenderList( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","_getInstancesRenderList",0xaeb004a9,"com.gamestudiohx.babylonhx.mesh.Mesh._getInstancesRenderList","com/gamestudiohx/babylonhx/mesh/Mesh.hx",314,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(315)
	::com::gamestudiohx::babylonhx::Scene scene = this->getScene();		HX_STACK_VAR(scene,"scene");
	HX_STACK_LINE(316)
	this->_batchCache->mustReturn = false;
	HX_STACK_LINE(317)
	this->_batchCache->renderSelf = true;
	HX_STACK_LINE(318)
	this->_batchCache->visibleInstances = null();
	HX_STACK_LINE(320)
	if ((this->_visibleInstances)){
		HX_STACK_LINE(321)
		int currentRenderId = scene->getRenderId();		HX_STACK_VAR(currentRenderId,"currentRenderId");
		HX_STACK_LINE(322)
		this->_batchCache->visibleInstances = this->_visibleInstances->__GetItem(currentRenderId);
		HX_STACK_LINE(323)
		int selfRenderId = this->_renderId;		HX_STACK_VAR(selfRenderId,"selfRenderId");
		HX_STACK_LINE(325)
		if (((bool((this->_batchCache->visibleInstances == null())) && bool(this->_visibleInstances->__Field(HX_CSTRING("defaultRenderId"),true))))){
			HX_STACK_LINE(326)
			this->_batchCache->visibleInstances = this->_visibleInstances->__GetItem(this->_visibleInstances->__Field(HX_CSTRING("defaultRenderId"),true));
			HX_STACK_LINE(327)
			currentRenderId = this->_visibleInstances->__Field(HX_CSTRING("defaultRenderId"),true);
			HX_STACK_LINE(328)
			selfRenderId = this->_visibleInstances->__Field(HX_CSTRING("selfDefaultRenderId"),true);
		}
		HX_STACK_LINE(331)
		if (((bool((this->_batchCache->visibleInstances != null())) && bool((this->_batchCache->visibleInstances->length > (int)0))))){
			HX_STACK_LINE(332)
			if (((this->_renderIdForInstances == currentRenderId))){
				HX_STACK_LINE(333)
				this->_batchCache->mustReturn = true;
				HX_STACK_LINE(334)
				return this->_batchCache;
			}
			HX_STACK_LINE(337)
			if (((currentRenderId != selfRenderId))){
				HX_STACK_LINE(338)
				this->_batchCache->renderSelf = false;
			}
		}
		HX_STACK_LINE(342)
		this->_renderIdForInstances = currentRenderId;
	}
	HX_STACK_LINE(345)
	return this->_batchCache;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,_getInstancesRenderList,return )

Void Mesh_obj::_renderWithInstances( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh,bool wireFrame,::com::gamestudiohx::babylonhx::mesh::InstancesBatch batch,::com::gamestudiohx::babylonhx::materials::Effect effect,::com::gamestudiohx::babylonhx::Engine engine){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","_renderWithInstances",0x3d273d15,"com.gamestudiohx.babylonhx.mesh.Mesh._renderWithInstances","com/gamestudiohx/babylonhx/mesh/Mesh.hx",348,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(subMesh,"subMesh")
		HX_STACK_ARG(wireFrame,"wireFrame")
		HX_STACK_ARG(batch,"batch")
		HX_STACK_ARG(effect,"effect")
		HX_STACK_ARG(engine,"engine")
		HX_STACK_LINE(349)
		int matricesCount = (this->instances->length + (int)1);		HX_STACK_VAR(matricesCount,"matricesCount");
		HX_STACK_LINE(350)
		int bufferSize = ((matricesCount * (int)16) * (int)4);		HX_STACK_VAR(bufferSize,"bufferSize");
		HX_STACK_LINE(352)
		while((true)){
			HX_STACK_LINE(352)
			if ((!(((this->_instancesBufferSize < bufferSize))))){
				HX_STACK_LINE(352)
				break;
			}
			HX_STACK_LINE(353)
			hx::MultEq(this->_instancesBufferSize,(int)2);
		}
		HX_STACK_LINE(356)
		if (((bool((this->_worldMatricesInstancesBuffer == null())) || bool((this->_worldMatricesInstancesBuffer->capacity < this->_instancesBufferSize))))){
			HX_STACK_LINE(357)
			if (((this->_worldMatricesInstancesBuffer != null()))){
				HX_STACK_LINE(358)
				engine->_releaseBuffer(this->_worldMatricesInstancesBuffer);
			}
			HX_STACK_LINE(361)
			::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g = engine->createDynamicVertexBuffer(this->_instancesBufferSize);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(361)
			this->_worldMatricesInstancesBuffer = _g;
			HX_STACK_LINE(362)
			::openfl::utils::Float32Array _g1 = ::openfl::utils::Float32Array_obj::__new((Float(this->_instancesBufferSize) / Float((int)4)),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(362)
			this->_worldMatricesInstancesArray = _g1;
		}
		HX_STACK_LINE(365)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(366)
		int instancesCount = (int)0;		HX_STACK_VAR(instancesCount,"instancesCount");
		HX_STACK_LINE(368)
		::com::gamestudiohx::babylonhx::tools::math::Matrix world;		HX_STACK_VAR(world,"world");
		HX_STACK_LINE(368)
		{
			HX_STACK_LINE(368)
			int _g2 = this->_scene->getRenderId();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(368)
			if (((this->_currentRenderId != _g2))){
				HX_STACK_LINE(368)
				bool force = false;		HX_STACK_VAR(force,"force");
				HX_STACK_LINE(368)
				::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",368,0xf4cec482)
						{
							HX_STACK_LINE(368)
							int _g3 = __this->_scene->getRenderId();		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(368)
							return (  ((!(((__this->_currentRenderId == _g3))))) ? bool(__this->isSynchronized(null())) : bool(true) );
						}
						return null();
					}
				};
				HX_STACK_LINE(368)
				if (((  ((!(force))) ? bool(_Function_3_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(368)
					this->_childrenFlag = (int)0;
				}
				else{
					HX_STACK_LINE(368)
					this->_childrenFlag = (int)1;
					HX_STACK_LINE(368)
					this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
					HX_STACK_LINE(368)
					this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
					HX_STACK_LINE(368)
					this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
					HX_STACK_LINE(368)
					int _g4 = this->_scene->getRenderId();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(368)
					this->_currentRenderId = _g4;
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(368)
						result->m[(int)0] = this->scaling->x;
						HX_STACK_LINE(368)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(368)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(368)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(368)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(368)
						result->m[(int)5] = this->scaling->y;
						HX_STACK_LINE(368)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(368)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(368)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(368)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(368)
						result->m[(int)10] = this->scaling->z;
						HX_STACK_LINE(368)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(368)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(368)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(368)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(368)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(368)
						result;
					}
					HX_STACK_LINE(368)
					if (((this->rotationQuaternion != null()))){
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = this->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(368)
							Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(368)
							Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
							HX_STACK_LINE(368)
							Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
							HX_STACK_LINE(368)
							Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
							HX_STACK_LINE(368)
							Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
							HX_STACK_LINE(368)
							Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
							HX_STACK_LINE(368)
							Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
							HX_STACK_LINE(368)
							Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
							HX_STACK_LINE(368)
							Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
							HX_STACK_LINE(368)
							result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
							HX_STACK_LINE(368)
							result->m[(int)1] = (2.0 * ((xy + zw)));
							HX_STACK_LINE(368)
							result->m[(int)2] = (2.0 * ((zx - yw)));
							HX_STACK_LINE(368)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(368)
							result->m[(int)4] = (2.0 * ((xy - zw)));
							HX_STACK_LINE(368)
							result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
							HX_STACK_LINE(368)
							result->m[(int)6] = (2.0 * ((yz + xw)));
							HX_STACK_LINE(368)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(368)
							result->m[(int)8] = (2.0 * ((zx + yw)));
							HX_STACK_LINE(368)
							result->m[(int)9] = (2.0 * ((yz - xw)));
							HX_STACK_LINE(368)
							result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
							HX_STACK_LINE(368)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(368)
							result->m[(int)12] = (int)0;
							HX_STACK_LINE(368)
							result->m[(int)13] = (int)0;
							HX_STACK_LINE(368)
							result->m[(int)14] = (int)0;
							HX_STACK_LINE(368)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(368)
							result;
						}
						HX_STACK_LINE(368)
						this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
					}
					else{
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion _g5;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
								HX_STACK_LINE(368)
								Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
								HX_STACK_LINE(368)
								Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
								HX_STACK_LINE(368)
								Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
								HX_STACK_LINE(368)
								Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
								HX_STACK_LINE(368)
								Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
								HX_STACK_LINE(368)
								Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
								HX_STACK_LINE(368)
								Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
								HX_STACK_LINE(368)
								Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
								HX_STACK_LINE(368)
								tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
								HX_STACK_LINE(368)
								tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
								HX_STACK_LINE(368)
								tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
								HX_STACK_LINE(368)
								tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
								HX_STACK_LINE(368)
								_g5 = tempQuaternion;
							}
							HX_STACK_LINE(368)
							tempQuaternion = _g5;
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
								HX_STACK_LINE(368)
								Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
								HX_STACK_LINE(368)
								Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
								HX_STACK_LINE(368)
								Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
								HX_STACK_LINE(368)
								Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
								HX_STACK_LINE(368)
								Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
								HX_STACK_LINE(368)
								Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
								HX_STACK_LINE(368)
								Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
								HX_STACK_LINE(368)
								Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
								HX_STACK_LINE(368)
								result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
								HX_STACK_LINE(368)
								result->m[(int)1] = (2.0 * ((xy + zw)));
								HX_STACK_LINE(368)
								result->m[(int)2] = (2.0 * ((zx - yw)));
								HX_STACK_LINE(368)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)4] = (2.0 * ((xy - zw)));
								HX_STACK_LINE(368)
								result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
								HX_STACK_LINE(368)
								result->m[(int)6] = (2.0 * ((yz + xw)));
								HX_STACK_LINE(368)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)8] = (2.0 * ((zx + yw)));
								HX_STACK_LINE(368)
								result->m[(int)9] = (2.0 * ((yz - xw)));
								HX_STACK_LINE(368)
								result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
								HX_STACK_LINE(368)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)12] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)13] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)14] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(368)
								result;
							}
						}
						HX_STACK_LINE(368)
						this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
					}
					HX_STACK_LINE(368)
					if ((this->infiniteDistance)){
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								result->m[(int)0] = 1.0;
								HX_STACK_LINE(368)
								result->m[(int)1] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)2] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)4] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)5] = 1.0;
								HX_STACK_LINE(368)
								result->m[(int)6] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)8] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)9] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)10] = 1.0;
								HX_STACK_LINE(368)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)12] = (this->position->x + camera->position->x);
								HX_STACK_LINE(368)
								result->m[(int)13] = (this->position->y + camera->position->y);
								HX_STACK_LINE(368)
								result->m[(int)14] = (this->position->z + camera->position->z);
								HX_STACK_LINE(368)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(368)
								result;
							}
						}
					}
					else{
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(368)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(368)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(368)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(368)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(368)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(368)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(368)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(368)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(368)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(368)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(368)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(368)
							result->m[(int)12] = this->position->x;
							HX_STACK_LINE(368)
							result->m[(int)13] = this->position->y;
							HX_STACK_LINE(368)
							result->m[(int)14] = this->position->z;
							HX_STACK_LINE(368)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(368)
							result;
						}
					}
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(368)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(368)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(368)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(368)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(368)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(368)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(368)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(368)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(368)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(368)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(368)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(368)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(368)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(368)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(368)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(368)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(368)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(368)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(368)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(368)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(368)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(368)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(368)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(368)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(368)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(368)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(368)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(368)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(368)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(368)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(368)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(368)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(368)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(368)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(368)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(368)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(368)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(368)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(368)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(368)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(368)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(368)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(368)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(368)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(368)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(368)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(368)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(368)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(368)
							result;
						}
					}
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(368)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(368)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(368)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(368)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(368)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(368)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(368)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(368)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(368)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(368)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(368)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(368)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(368)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(368)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(368)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(368)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(368)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(368)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(368)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(368)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(368)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(368)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(368)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(368)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(368)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(368)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(368)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(368)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(368)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(368)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(368)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(368)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(368)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(368)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(368)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(368)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(368)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(368)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(368)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(368)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(368)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(368)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(368)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(368)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(368)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(368)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(368)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(368)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(368)
							result;
						}
					}
					HX_STACK_LINE(368)
					if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(368)
							localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
						}
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(368)
							zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
						}
						HX_STACK_LINE(368)
						if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
								HX_STACK_LINE(368)
								hx::AddEq(localPosition->x,otherVector->x);
								HX_STACK_LINE(368)
								hx::AddEq(localPosition->y,otherVector->y);
								HX_STACK_LINE(368)
								hx::AddEq(localPosition->z,otherVector->z);
							}
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(368)
								{
									HX_STACK_LINE(368)
									result->m[(int)0] = 1.0;
									HX_STACK_LINE(368)
									result->m[(int)1] = (int)0;
									HX_STACK_LINE(368)
									result->m[(int)2] = (int)0;
									HX_STACK_LINE(368)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(368)
									result->m[(int)4] = (int)0;
									HX_STACK_LINE(368)
									result->m[(int)5] = 1.0;
									HX_STACK_LINE(368)
									result->m[(int)6] = (int)0;
									HX_STACK_LINE(368)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(368)
									result->m[(int)8] = (int)0;
									HX_STACK_LINE(368)
									result->m[(int)9] = (int)0;
									HX_STACK_LINE(368)
									result->m[(int)10] = 1.0;
									HX_STACK_LINE(368)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(368)
									result->m[(int)12] = localPosition->x;
									HX_STACK_LINE(368)
									result->m[(int)13] = localPosition->y;
									HX_STACK_LINE(368)
									result->m[(int)14] = localPosition->z;
									HX_STACK_LINE(368)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(368)
									result;
								}
							}
						}
						HX_STACK_LINE(368)
						if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
							HX_STACK_LINE(368)
							zero = this->_scene->activeCamera->position;
						}
						else{
							HX_STACK_LINE(368)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
								HX_STACK_LINE(368)
								zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
							HX_STACK_LINE(368)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
								HX_STACK_LINE(368)
								zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
							HX_STACK_LINE(368)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
								HX_STACK_LINE(368)
								zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
						}
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								zAxis->x = (zero->x - localPosition->x);
								HX_STACK_LINE(368)
								zAxis->y = (zero->y - localPosition->y);
								HX_STACK_LINE(368)
								zAxis->z = (zero->z - localPosition->z);
							}
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(368)
								if (((len != (int)0))){
									HX_STACK_LINE(368)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(368)
									hx::MultEq(zAxis->x,num);
									HX_STACK_LINE(368)
									hx::MultEq(zAxis->y,num);
									HX_STACK_LINE(368)
									hx::MultEq(zAxis->z,num);
								}
							}
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
								HX_STACK_LINE(368)
								xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
								HX_STACK_LINE(368)
								xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
							}
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(368)
								if (((len != (int)0))){
									HX_STACK_LINE(368)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(368)
									hx::MultEq(xAxis->x,num);
									HX_STACK_LINE(368)
									hx::MultEq(xAxis->y,num);
									HX_STACK_LINE(368)
									hx::MultEq(xAxis->z,num);
								}
							}
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
								HX_STACK_LINE(368)
								yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
								HX_STACK_LINE(368)
								yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
							}
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(368)
								if (((len != (int)0))){
									HX_STACK_LINE(368)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(368)
									hx::MultEq(yAxis->x,num);
									HX_STACK_LINE(368)
									hx::MultEq(yAxis->y,num);
									HX_STACK_LINE(368)
									hx::MultEq(yAxis->z,num);
								}
							}
							HX_STACK_LINE(368)
							Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
							HX_STACK_LINE(368)
							Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
							HX_STACK_LINE(368)
							Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								result->m[(int)0] = xAxis->x;
								HX_STACK_LINE(368)
								result->m[(int)1] = yAxis->x;
								HX_STACK_LINE(368)
								result->m[(int)2] = zAxis->x;
								HX_STACK_LINE(368)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)4] = xAxis->y;
								HX_STACK_LINE(368)
								result->m[(int)5] = yAxis->y;
								HX_STACK_LINE(368)
								result->m[(int)6] = zAxis->y;
								HX_STACK_LINE(368)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)8] = xAxis->z;
								HX_STACK_LINE(368)
								result->m[(int)9] = yAxis->z;
								HX_STACK_LINE(368)
								result->m[(int)10] = zAxis->z;
								HX_STACK_LINE(368)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(368)
								result->m[(int)12] = ex;
								HX_STACK_LINE(368)
								result->m[(int)13] = ey;
								HX_STACK_LINE(368)
								result->m[(int)14] = ez;
								HX_STACK_LINE(368)
								result->m[(int)15] = (int)1;
								HX_STACK_LINE(368)
								result;
							}
						}
						HX_STACK_LINE(368)
						this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localBillboard;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
								HX_STACK_LINE(368)
								Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
								HX_STACK_LINE(368)
								Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
								HX_STACK_LINE(368)
								Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
								HX_STACK_LINE(368)
								Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
								HX_STACK_LINE(368)
								Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
								HX_STACK_LINE(368)
								Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
								HX_STACK_LINE(368)
								Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
								HX_STACK_LINE(368)
								Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
								HX_STACK_LINE(368)
								Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
								HX_STACK_LINE(368)
								Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
								HX_STACK_LINE(368)
								Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
								HX_STACK_LINE(368)
								Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
								HX_STACK_LINE(368)
								Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
								HX_STACK_LINE(368)
								Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
								HX_STACK_LINE(368)
								Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
								HX_STACK_LINE(368)
								Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
								HX_STACK_LINE(368)
								Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
								HX_STACK_LINE(368)
								Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
								HX_STACK_LINE(368)
								Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
								HX_STACK_LINE(368)
								Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
								HX_STACK_LINE(368)
								Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
								HX_STACK_LINE(368)
								Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
								HX_STACK_LINE(368)
								Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
								HX_STACK_LINE(368)
								Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
								HX_STACK_LINE(368)
								Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
								HX_STACK_LINE(368)
								Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
								HX_STACK_LINE(368)
								Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
								HX_STACK_LINE(368)
								Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
								HX_STACK_LINE(368)
								Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
								HX_STACK_LINE(368)
								Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
								HX_STACK_LINE(368)
								Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
								HX_STACK_LINE(368)
								Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
								HX_STACK_LINE(368)
								Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
								HX_STACK_LINE(368)
								Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
								HX_STACK_LINE(368)
								Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
								HX_STACK_LINE(368)
								Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
								HX_STACK_LINE(368)
								Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
								HX_STACK_LINE(368)
								Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
								HX_STACK_LINE(368)
								_this->m[(int)0] = (l23 * l27);
								HX_STACK_LINE(368)
								_this->m[(int)4] = (l24 * l27);
								HX_STACK_LINE(368)
								_this->m[(int)8] = (l25 * l27);
								HX_STACK_LINE(368)
								_this->m[(int)12] = (l26 * l27);
								HX_STACK_LINE(368)
								_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
								HX_STACK_LINE(368)
								_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
								HX_STACK_LINE(368)
								_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
								HX_STACK_LINE(368)
								_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
								HX_STACK_LINE(368)
								_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
								HX_STACK_LINE(368)
								_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
								HX_STACK_LINE(368)
								_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
								HX_STACK_LINE(368)
								_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
								HX_STACK_LINE(368)
								_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
								HX_STACK_LINE(368)
								_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
								HX_STACK_LINE(368)
								_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
								HX_STACK_LINE(368)
								_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
							}
						}
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(368)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(368)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(368)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(368)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(368)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(368)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(368)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(368)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(368)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(368)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(368)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(368)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(368)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(368)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(368)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(368)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(368)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(368)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(368)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(368)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(368)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(368)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(368)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(368)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(368)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(368)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(368)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(368)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(368)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(368)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(368)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(368)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(368)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(368)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(368)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(368)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(368)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(368)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(368)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(368)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(368)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(368)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(368)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(368)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(368)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(368)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(368)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(368)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(368)
								result;
							}
						}
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(368)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(368)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(368)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(368)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(368)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(368)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(368)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(368)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(368)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(368)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(368)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(368)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(368)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(368)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(368)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(368)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(368)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(368)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(368)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(368)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(368)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(368)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(368)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(368)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(368)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(368)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(368)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(368)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(368)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(368)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(368)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(368)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(368)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(368)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(368)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(368)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(368)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(368)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(368)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(368)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(368)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(368)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(368)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(368)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(368)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(368)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(368)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(368)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(368)
								result;
							}
						}
					}
					struct _Function_4_1{
						inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",368,0xf4cec482)
							{
								HX_STACK_LINE(368)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _g6 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(368)
								return (_g6 != null());
							}
							return null();
						}
					};
					HX_STACK_LINE(368)
					if (((  (((  (((this->parent != null()))) ? bool(_Function_4_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(368)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(368)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(368)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(368)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(368)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(368)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(368)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(368)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(368)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(368)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(368)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(368)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(368)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(368)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(368)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(368)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(368)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(368)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(368)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(368)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(368)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(368)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(368)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(368)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(368)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(368)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(368)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(368)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(368)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(368)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(368)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(368)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(368)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(368)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(368)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(368)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(368)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(368)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(368)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(368)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(368)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(368)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(368)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(368)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(368)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(368)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(368)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(368)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(368)
								result;
							}
						}
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localWorld;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(368)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(368)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(368)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(368)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(368)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(368)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(368)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(368)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(368)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(368)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(368)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(368)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(368)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(368)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(368)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(368)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(368)
								Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(368)
								Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(368)
								Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(368)
								Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(368)
								Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(368)
								Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(368)
								Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(368)
								Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(368)
								Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(368)
								Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(368)
								Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(368)
								Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(368)
								Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(368)
								Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(368)
								Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(368)
								Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(368)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(368)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(368)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(368)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(368)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(368)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(368)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(368)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(368)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(368)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(368)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(368)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(368)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(368)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(368)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(368)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(368)
								result;
							}
						}
					}
					else{
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(368)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(368)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(368)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(368)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(368)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(368)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(368)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(368)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(368)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(368)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(368)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(368)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(368)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(368)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(368)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(368)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(368)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(368)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(368)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(368)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(368)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(368)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(368)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(368)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(368)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(368)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(368)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(368)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(368)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(368)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(368)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(368)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(368)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(368)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(368)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(368)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(368)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(368)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(368)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(368)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(368)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(368)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(368)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(368)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(368)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(368)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(368)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(368)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(368)
							result;
						}
					}
					HX_STACK_LINE(368)
					if (((this->_boundingInfo != null()))){
						HX_STACK_LINE(368)
						Float _g7 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(368)
						this->_scaleFactor = _g7;
						HX_STACK_LINE(368)
						Float _g8 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(368)
						this->_scaleFactor = _g8;
						struct _Function_5_1{
							inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",368,0xf4cec482)
								{
									HX_STACK_LINE(368)
									Dynamic _g9 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(368)
									return (_g9 != null());
								}
								return null();
							}
						};
						HX_STACK_LINE(368)
						if (((  (((this->parent != null()))) ? bool(_Function_5_1::Block(this)) : bool(false) ))){
							HX_STACK_LINE(368)
							Dynamic _g10 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(368)
							Float _g11 = (this->_scaleFactor * _g10);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(368)
							this->_scaleFactor = _g11;
						}
						HX_STACK_LINE(368)
						this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(368)
							int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(368)
							while((true)){
								HX_STACK_LINE(368)
								if ((!(((_g1 < _g))))){
									HX_STACK_LINE(368)
									break;
								}
								HX_STACK_LINE(368)
								int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
								HX_STACK_LINE(368)
								::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh1 = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh1,"subMesh1");
								HX_STACK_LINE(368)
								subMesh1->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
							}
						}
					}
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_absolutePosition;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(368)
						_this->x = this->_worldMatrix->m->__get((int)12);
						HX_STACK_LINE(368)
						_this->y = this->_worldMatrix->m->__get((int)13);
						HX_STACK_LINE(368)
						_this->z = this->_worldMatrix->m->__get((int)14);
					}
					HX_STACK_LINE(368)
					ret = this->_worldMatrix;
				}
				HX_STACK_LINE(368)
				ret;
			}
			HX_STACK_LINE(368)
			world = this->_worldMatrix;
		}
		HX_STACK_LINE(369)
		if ((batch->renderSelf)){
			HX_STACK_LINE(370)
			world->copyToArray(this->_worldMatricesInstancesArray,offset);
			HX_STACK_LINE(371)
			hx::AddEq(offset,(int)16);
			HX_STACK_LINE(372)
			(instancesCount)++;
		}
		HX_STACK_LINE(376)
		int instanceIndex = (int)0;		HX_STACK_VAR(instanceIndex,"instanceIndex");
		HX_STACK_LINE(377)
		while((true)){
			HX_STACK_LINE(377)
			if ((!(((instanceIndex < batch->visibleInstances->length))))){
				HX_STACK_LINE(377)
				break;
			}
			HX_STACK_LINE(378)
			::com::gamestudiohx::babylonhx::mesh::InstancedMesh instance = batch->visibleInstances->__get(instanceIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::InstancedMesh >();		HX_STACK_VAR(instance,"instance");
			struct _Function_2_1{
				inline static ::com::gamestudiohx::babylonhx::tools::math::Matrix Block( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh &instance){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",379,0xf4cec482)
					{
						HX_STACK_LINE(379)
						int _g12 = instance->_scene->getRenderId();		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(379)
						if (((instance->_currentRenderId != _g12))){
							HX_STACK_LINE(379)
							bool force = false;		HX_STACK_VAR(force,"force");
							HX_STACK_LINE(379)
							::com::gamestudiohx::babylonhx::tools::math::Matrix ret = instance->_worldMatrix;		HX_STACK_VAR(ret,"ret");
							struct _Function_4_1{
								inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh &instance){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",379,0xf4cec482)
									{
										HX_STACK_LINE(379)
										int _g13 = instance->_scene->getRenderId();		HX_STACK_VAR(_g13,"_g13");
										HX_STACK_LINE(379)
										return (  ((!(((instance->_currentRenderId == _g13))))) ? bool(instance->isSynchronized(null())) : bool(true) );
									}
									return null();
								}
							};
							HX_STACK_LINE(379)
							if (((  ((!(force))) ? bool(_Function_4_1::Block(instance)) : bool(false) ))){
								HX_STACK_LINE(379)
								instance->_childrenFlag = (int)0;
							}
							else{
								HX_STACK_LINE(379)
								instance->_childrenFlag = (int)1;
								HX_STACK_LINE(379)
								instance->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(instance->position);
								HX_STACK_LINE(379)
								instance->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(instance->scaling);
								HX_STACK_LINE(379)
								instance->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
								HX_STACK_LINE(379)
								int _g14 = instance->_scene->getRenderId();		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(379)
								instance->_currentRenderId = _g14;
								HX_STACK_LINE(379)
								{
									HX_STACK_LINE(379)
									::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localScaling;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(379)
									result->m[(int)0] = instance->scaling->x;
									HX_STACK_LINE(379)
									result->m[(int)1] = (int)0;
									HX_STACK_LINE(379)
									result->m[(int)2] = (int)0;
									HX_STACK_LINE(379)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(379)
									result->m[(int)4] = (int)0;
									HX_STACK_LINE(379)
									result->m[(int)5] = instance->scaling->y;
									HX_STACK_LINE(379)
									result->m[(int)6] = (int)0;
									HX_STACK_LINE(379)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(379)
									result->m[(int)8] = (int)0;
									HX_STACK_LINE(379)
									result->m[(int)9] = (int)0;
									HX_STACK_LINE(379)
									result->m[(int)10] = instance->scaling->z;
									HX_STACK_LINE(379)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(379)
									result->m[(int)12] = (int)0;
									HX_STACK_LINE(379)
									result->m[(int)13] = (int)0;
									HX_STACK_LINE(379)
									result->m[(int)14] = (int)0;
									HX_STACK_LINE(379)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(379)
									result;
								}
								HX_STACK_LINE(379)
								if (((instance->rotationQuaternion != null()))){
									HX_STACK_LINE(379)
									{
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = instance->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localRotation;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(379)
										Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
										HX_STACK_LINE(379)
										Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
										HX_STACK_LINE(379)
										Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
										HX_STACK_LINE(379)
										Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
										HX_STACK_LINE(379)
										Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
										HX_STACK_LINE(379)
										Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
										HX_STACK_LINE(379)
										Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
										HX_STACK_LINE(379)
										Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
										HX_STACK_LINE(379)
										Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
										HX_STACK_LINE(379)
										result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
										HX_STACK_LINE(379)
										result->m[(int)1] = (2.0 * ((xy + zw)));
										HX_STACK_LINE(379)
										result->m[(int)2] = (2.0 * ((zx - yw)));
										HX_STACK_LINE(379)
										result->m[(int)3] = (int)0;
										HX_STACK_LINE(379)
										result->m[(int)4] = (2.0 * ((xy - zw)));
										HX_STACK_LINE(379)
										result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
										HX_STACK_LINE(379)
										result->m[(int)6] = (2.0 * ((yz + xw)));
										HX_STACK_LINE(379)
										result->m[(int)7] = (int)0;
										HX_STACK_LINE(379)
										result->m[(int)8] = (2.0 * ((zx + yw)));
										HX_STACK_LINE(379)
										result->m[(int)9] = (2.0 * ((yz - xw)));
										HX_STACK_LINE(379)
										result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
										HX_STACK_LINE(379)
										result->m[(int)11] = (int)0;
										HX_STACK_LINE(379)
										result->m[(int)12] = (int)0;
										HX_STACK_LINE(379)
										result->m[(int)13] = (int)0;
										HX_STACK_LINE(379)
										result->m[(int)14] = (int)0;
										HX_STACK_LINE(379)
										result->m[(int)15] = 1.0;
										HX_STACK_LINE(379)
										result;
									}
									HX_STACK_LINE(379)
									instance->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(instance->rotationQuaternion);
								}
								else{
									HX_STACK_LINE(379)
									{
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localRotation;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Quaternion _g15;		HX_STACK_VAR(_g15,"_g15");
										HX_STACK_LINE(379)
										{
											HX_STACK_LINE(379)
											Float halfRoll = (instance->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
											HX_STACK_LINE(379)
											Float halfPitch = (instance->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
											HX_STACK_LINE(379)
											Float halfYaw = (instance->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
											HX_STACK_LINE(379)
											Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
											HX_STACK_LINE(379)
											Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
											HX_STACK_LINE(379)
											Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
											HX_STACK_LINE(379)
											Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
											HX_STACK_LINE(379)
											Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
											HX_STACK_LINE(379)
											Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
											HX_STACK_LINE(379)
											tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
											HX_STACK_LINE(379)
											tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
											HX_STACK_LINE(379)
											tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
											HX_STACK_LINE(379)
											tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
											HX_STACK_LINE(379)
											_g15 = tempQuaternion;
										}
										HX_STACK_LINE(379)
										tempQuaternion = _g15;
										HX_STACK_LINE(379)
										{
											HX_STACK_LINE(379)
											Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
											HX_STACK_LINE(379)
											Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
											HX_STACK_LINE(379)
											Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
											HX_STACK_LINE(379)
											Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
											HX_STACK_LINE(379)
											Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
											HX_STACK_LINE(379)
											Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
											HX_STACK_LINE(379)
											Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
											HX_STACK_LINE(379)
											Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
											HX_STACK_LINE(379)
											Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
											HX_STACK_LINE(379)
											result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
											HX_STACK_LINE(379)
											result->m[(int)1] = (2.0 * ((xy + zw)));
											HX_STACK_LINE(379)
											result->m[(int)2] = (2.0 * ((zx - yw)));
											HX_STACK_LINE(379)
											result->m[(int)3] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)4] = (2.0 * ((xy - zw)));
											HX_STACK_LINE(379)
											result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
											HX_STACK_LINE(379)
											result->m[(int)6] = (2.0 * ((yz + xw)));
											HX_STACK_LINE(379)
											result->m[(int)7] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)8] = (2.0 * ((zx + yw)));
											HX_STACK_LINE(379)
											result->m[(int)9] = (2.0 * ((yz - xw)));
											HX_STACK_LINE(379)
											result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
											HX_STACK_LINE(379)
											result->m[(int)11] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)12] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)13] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)14] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)15] = 1.0;
											HX_STACK_LINE(379)
											result;
										}
									}
									HX_STACK_LINE(379)
									instance->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(instance->rotation);
								}
								HX_STACK_LINE(379)
								if ((instance->infiniteDistance)){
									HX_STACK_LINE(379)
									::com::gamestudiohx::babylonhx::cameras::Camera camera = instance->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
									HX_STACK_LINE(379)
									{
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localTranslation;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(379)
										{
											HX_STACK_LINE(379)
											result->m[(int)0] = 1.0;
											HX_STACK_LINE(379)
											result->m[(int)1] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)2] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)3] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)4] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)5] = 1.0;
											HX_STACK_LINE(379)
											result->m[(int)6] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)7] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)8] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)9] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)10] = 1.0;
											HX_STACK_LINE(379)
											result->m[(int)11] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)12] = (instance->position->x + camera->position->x);
											HX_STACK_LINE(379)
											result->m[(int)13] = (instance->position->y + camera->position->y);
											HX_STACK_LINE(379)
											result->m[(int)14] = (instance->position->z + camera->position->z);
											HX_STACK_LINE(379)
											result->m[(int)15] = 1.0;
											HX_STACK_LINE(379)
											result;
										}
									}
								}
								else{
									HX_STACK_LINE(379)
									::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localTranslation;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(379)
									{
										HX_STACK_LINE(379)
										result->m[(int)0] = 1.0;
										HX_STACK_LINE(379)
										result->m[(int)1] = (int)0;
										HX_STACK_LINE(379)
										result->m[(int)2] = (int)0;
										HX_STACK_LINE(379)
										result->m[(int)3] = (int)0;
										HX_STACK_LINE(379)
										result->m[(int)4] = (int)0;
										HX_STACK_LINE(379)
										result->m[(int)5] = 1.0;
										HX_STACK_LINE(379)
										result->m[(int)6] = (int)0;
										HX_STACK_LINE(379)
										result->m[(int)7] = (int)0;
										HX_STACK_LINE(379)
										result->m[(int)8] = (int)0;
										HX_STACK_LINE(379)
										result->m[(int)9] = (int)0;
										HX_STACK_LINE(379)
										result->m[(int)10] = 1.0;
										HX_STACK_LINE(379)
										result->m[(int)11] = (int)0;
										HX_STACK_LINE(379)
										result->m[(int)12] = instance->position->x;
										HX_STACK_LINE(379)
										result->m[(int)13] = instance->position->y;
										HX_STACK_LINE(379)
										result->m[(int)14] = instance->position->z;
										HX_STACK_LINE(379)
										result->m[(int)15] = 1.0;
										HX_STACK_LINE(379)
										result;
									}
								}
								HX_STACK_LINE(379)
								{
									HX_STACK_LINE(379)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(379)
									::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localScaling;		HX_STACK_VAR(other,"other");
									HX_STACK_LINE(379)
									{
										HX_STACK_LINE(379)
										Array< Float > result = instance->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(379)
										Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
										HX_STACK_LINE(379)
										Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
										HX_STACK_LINE(379)
										Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
										HX_STACK_LINE(379)
										Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
										HX_STACK_LINE(379)
										Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
										HX_STACK_LINE(379)
										Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
										HX_STACK_LINE(379)
										Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
										HX_STACK_LINE(379)
										Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
										HX_STACK_LINE(379)
										Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
										HX_STACK_LINE(379)
										Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
										HX_STACK_LINE(379)
										Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
										HX_STACK_LINE(379)
										Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
										HX_STACK_LINE(379)
										Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
										HX_STACK_LINE(379)
										Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
										HX_STACK_LINE(379)
										Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
										HX_STACK_LINE(379)
										Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
										HX_STACK_LINE(379)
										Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
										HX_STACK_LINE(379)
										Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
										HX_STACK_LINE(379)
										Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
										HX_STACK_LINE(379)
										Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
										HX_STACK_LINE(379)
										Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
										HX_STACK_LINE(379)
										Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
										HX_STACK_LINE(379)
										Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
										HX_STACK_LINE(379)
										Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
										HX_STACK_LINE(379)
										Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
										HX_STACK_LINE(379)
										Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
										HX_STACK_LINE(379)
										Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
										HX_STACK_LINE(379)
										Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
										HX_STACK_LINE(379)
										Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
										HX_STACK_LINE(379)
										Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
										HX_STACK_LINE(379)
										Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
										HX_STACK_LINE(379)
										Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
										HX_STACK_LINE(379)
										result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
										HX_STACK_LINE(379)
										result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
										HX_STACK_LINE(379)
										result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
										HX_STACK_LINE(379)
										result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
										HX_STACK_LINE(379)
										result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
										HX_STACK_LINE(379)
										result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
										HX_STACK_LINE(379)
										result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
										HX_STACK_LINE(379)
										result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
										HX_STACK_LINE(379)
										result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
										HX_STACK_LINE(379)
										result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
										HX_STACK_LINE(379)
										result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
										HX_STACK_LINE(379)
										result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
										HX_STACK_LINE(379)
										result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
										HX_STACK_LINE(379)
										result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
										HX_STACK_LINE(379)
										result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
										HX_STACK_LINE(379)
										result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
										HX_STACK_LINE(379)
										result;
									}
								}
								HX_STACK_LINE(379)
								{
									HX_STACK_LINE(379)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(379)
									::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localRotation;		HX_STACK_VAR(other,"other");
									HX_STACK_LINE(379)
									{
										HX_STACK_LINE(379)
										Array< Float > result = instance->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(379)
										Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
										HX_STACK_LINE(379)
										Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
										HX_STACK_LINE(379)
										Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
										HX_STACK_LINE(379)
										Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
										HX_STACK_LINE(379)
										Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
										HX_STACK_LINE(379)
										Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
										HX_STACK_LINE(379)
										Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
										HX_STACK_LINE(379)
										Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
										HX_STACK_LINE(379)
										Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
										HX_STACK_LINE(379)
										Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
										HX_STACK_LINE(379)
										Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
										HX_STACK_LINE(379)
										Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
										HX_STACK_LINE(379)
										Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
										HX_STACK_LINE(379)
										Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
										HX_STACK_LINE(379)
										Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
										HX_STACK_LINE(379)
										Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
										HX_STACK_LINE(379)
										Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
										HX_STACK_LINE(379)
										Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
										HX_STACK_LINE(379)
										Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
										HX_STACK_LINE(379)
										Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
										HX_STACK_LINE(379)
										Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
										HX_STACK_LINE(379)
										Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
										HX_STACK_LINE(379)
										Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
										HX_STACK_LINE(379)
										Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
										HX_STACK_LINE(379)
										Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
										HX_STACK_LINE(379)
										Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
										HX_STACK_LINE(379)
										Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
										HX_STACK_LINE(379)
										Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
										HX_STACK_LINE(379)
										Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
										HX_STACK_LINE(379)
										Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
										HX_STACK_LINE(379)
										Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
										HX_STACK_LINE(379)
										Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
										HX_STACK_LINE(379)
										result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
										HX_STACK_LINE(379)
										result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
										HX_STACK_LINE(379)
										result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
										HX_STACK_LINE(379)
										result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
										HX_STACK_LINE(379)
										result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
										HX_STACK_LINE(379)
										result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
										HX_STACK_LINE(379)
										result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
										HX_STACK_LINE(379)
										result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
										HX_STACK_LINE(379)
										result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
										HX_STACK_LINE(379)
										result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
										HX_STACK_LINE(379)
										result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
										HX_STACK_LINE(379)
										result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
										HX_STACK_LINE(379)
										result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
										HX_STACK_LINE(379)
										result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
										HX_STACK_LINE(379)
										result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
										HX_STACK_LINE(379)
										result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
										HX_STACK_LINE(379)
										result;
									}
								}
								HX_STACK_LINE(379)
								if (((instance->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
									HX_STACK_LINE(379)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
									HX_STACK_LINE(379)
									{
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = instance->position;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(379)
										localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
									}
									HX_STACK_LINE(379)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
									HX_STACK_LINE(379)
									{
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = instance->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(379)
										zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
									}
									HX_STACK_LINE(379)
									if (((bool((instance->parent != null())) && bool((instance->parent->position != null()))))){
										HX_STACK_LINE(379)
										{
											HX_STACK_LINE(379)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = instance->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
											HX_STACK_LINE(379)
											hx::AddEq(localPosition->x,otherVector->x);
											HX_STACK_LINE(379)
											hx::AddEq(localPosition->y,otherVector->y);
											HX_STACK_LINE(379)
											hx::AddEq(localPosition->z,otherVector->z);
										}
										HX_STACK_LINE(379)
										{
											HX_STACK_LINE(379)
											::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localTranslation;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(379)
											{
												HX_STACK_LINE(379)
												result->m[(int)0] = 1.0;
												HX_STACK_LINE(379)
												result->m[(int)1] = (int)0;
												HX_STACK_LINE(379)
												result->m[(int)2] = (int)0;
												HX_STACK_LINE(379)
												result->m[(int)3] = (int)0;
												HX_STACK_LINE(379)
												result->m[(int)4] = (int)0;
												HX_STACK_LINE(379)
												result->m[(int)5] = 1.0;
												HX_STACK_LINE(379)
												result->m[(int)6] = (int)0;
												HX_STACK_LINE(379)
												result->m[(int)7] = (int)0;
												HX_STACK_LINE(379)
												result->m[(int)8] = (int)0;
												HX_STACK_LINE(379)
												result->m[(int)9] = (int)0;
												HX_STACK_LINE(379)
												result->m[(int)10] = 1.0;
												HX_STACK_LINE(379)
												result->m[(int)11] = (int)0;
												HX_STACK_LINE(379)
												result->m[(int)12] = localPosition->x;
												HX_STACK_LINE(379)
												result->m[(int)13] = localPosition->y;
												HX_STACK_LINE(379)
												result->m[(int)14] = localPosition->z;
												HX_STACK_LINE(379)
												result->m[(int)15] = 1.0;
												HX_STACK_LINE(379)
												result;
											}
										}
									}
									HX_STACK_LINE(379)
									if (((((int(instance->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
										HX_STACK_LINE(379)
										zero = instance->_scene->activeCamera->position;
									}
									else{
										HX_STACK_LINE(379)
										if (((((int(instance->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
											HX_STACK_LINE(379)
											zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
										}
										HX_STACK_LINE(379)
										if (((((int(instance->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
											HX_STACK_LINE(379)
											zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
										}
										HX_STACK_LINE(379)
										if (((((int(instance->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
											HX_STACK_LINE(379)
											zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
										}
									}
									HX_STACK_LINE(379)
									{
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localBillboard;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
										HX_STACK_LINE(379)
										{
											HX_STACK_LINE(379)
											zAxis->x = (zero->x - localPosition->x);
											HX_STACK_LINE(379)
											zAxis->y = (zero->y - localPosition->y);
											HX_STACK_LINE(379)
											zAxis->z = (zero->z - localPosition->z);
										}
										HX_STACK_LINE(379)
										{
											HX_STACK_LINE(379)
											Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(379)
											if (((len != (int)0))){
												HX_STACK_LINE(379)
												Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(379)
												hx::MultEq(zAxis->x,num);
												HX_STACK_LINE(379)
												hx::MultEq(zAxis->y,num);
												HX_STACK_LINE(379)
												hx::MultEq(zAxis->z,num);
											}
										}
										HX_STACK_LINE(379)
										{
											HX_STACK_LINE(379)
											xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
											HX_STACK_LINE(379)
											xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
											HX_STACK_LINE(379)
											xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
										}
										HX_STACK_LINE(379)
										{
											HX_STACK_LINE(379)
											Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(379)
											if (((len != (int)0))){
												HX_STACK_LINE(379)
												Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(379)
												hx::MultEq(xAxis->x,num);
												HX_STACK_LINE(379)
												hx::MultEq(xAxis->y,num);
												HX_STACK_LINE(379)
												hx::MultEq(xAxis->z,num);
											}
										}
										HX_STACK_LINE(379)
										{
											HX_STACK_LINE(379)
											yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
											HX_STACK_LINE(379)
											yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
											HX_STACK_LINE(379)
											yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
										}
										HX_STACK_LINE(379)
										{
											HX_STACK_LINE(379)
											Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(379)
											if (((len != (int)0))){
												HX_STACK_LINE(379)
												Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(379)
												hx::MultEq(yAxis->x,num);
												HX_STACK_LINE(379)
												hx::MultEq(yAxis->y,num);
												HX_STACK_LINE(379)
												hx::MultEq(yAxis->z,num);
											}
										}
										HX_STACK_LINE(379)
										Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
										HX_STACK_LINE(379)
										Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
										HX_STACK_LINE(379)
										Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
										HX_STACK_LINE(379)
										{
											HX_STACK_LINE(379)
											result->m[(int)0] = xAxis->x;
											HX_STACK_LINE(379)
											result->m[(int)1] = yAxis->x;
											HX_STACK_LINE(379)
											result->m[(int)2] = zAxis->x;
											HX_STACK_LINE(379)
											result->m[(int)3] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)4] = xAxis->y;
											HX_STACK_LINE(379)
											result->m[(int)5] = yAxis->y;
											HX_STACK_LINE(379)
											result->m[(int)6] = zAxis->y;
											HX_STACK_LINE(379)
											result->m[(int)7] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)8] = xAxis->z;
											HX_STACK_LINE(379)
											result->m[(int)9] = yAxis->z;
											HX_STACK_LINE(379)
											result->m[(int)10] = zAxis->z;
											HX_STACK_LINE(379)
											result->m[(int)11] = (int)0;
											HX_STACK_LINE(379)
											result->m[(int)12] = ex;
											HX_STACK_LINE(379)
											result->m[(int)13] = ey;
											HX_STACK_LINE(379)
											result->m[(int)14] = ez;
											HX_STACK_LINE(379)
											result->m[(int)15] = (int)1;
											HX_STACK_LINE(379)
											result;
										}
									}
									HX_STACK_LINE(379)
									instance->_localBillboard->m[(int)12] = instance->_localBillboard->m[(int)13] = instance->_localBillboard->m[(int)14] = (int)0;
									HX_STACK_LINE(379)
									{
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localBillboard;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(379)
										{
											HX_STACK_LINE(379)
											Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
											HX_STACK_LINE(379)
											Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
											HX_STACK_LINE(379)
											Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
											HX_STACK_LINE(379)
											Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
											HX_STACK_LINE(379)
											Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
											HX_STACK_LINE(379)
											Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
											HX_STACK_LINE(379)
											Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
											HX_STACK_LINE(379)
											Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
											HX_STACK_LINE(379)
											Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
											HX_STACK_LINE(379)
											Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
											HX_STACK_LINE(379)
											Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
											HX_STACK_LINE(379)
											Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
											HX_STACK_LINE(379)
											Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
											HX_STACK_LINE(379)
											Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
											HX_STACK_LINE(379)
											Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
											HX_STACK_LINE(379)
											Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
											HX_STACK_LINE(379)
											Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
											HX_STACK_LINE(379)
											Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
											HX_STACK_LINE(379)
											Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
											HX_STACK_LINE(379)
											Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
											HX_STACK_LINE(379)
											Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
											HX_STACK_LINE(379)
											Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
											HX_STACK_LINE(379)
											Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
											HX_STACK_LINE(379)
											Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
											HX_STACK_LINE(379)
											Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
											HX_STACK_LINE(379)
											Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
											HX_STACK_LINE(379)
											Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
											HX_STACK_LINE(379)
											Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
											HX_STACK_LINE(379)
											Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
											HX_STACK_LINE(379)
											Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
											HX_STACK_LINE(379)
											Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
											HX_STACK_LINE(379)
											Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
											HX_STACK_LINE(379)
											Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
											HX_STACK_LINE(379)
											Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
											HX_STACK_LINE(379)
											Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
											HX_STACK_LINE(379)
											Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
											HX_STACK_LINE(379)
											Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
											HX_STACK_LINE(379)
											Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
											HX_STACK_LINE(379)
											Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
											HX_STACK_LINE(379)
											_this->m[(int)0] = (l23 * l27);
											HX_STACK_LINE(379)
											_this->m[(int)4] = (l24 * l27);
											HX_STACK_LINE(379)
											_this->m[(int)8] = (l25 * l27);
											HX_STACK_LINE(379)
											_this->m[(int)12] = (l26 * l27);
											HX_STACK_LINE(379)
											_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
											HX_STACK_LINE(379)
											_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
											HX_STACK_LINE(379)
											_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
											HX_STACK_LINE(379)
											_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
											HX_STACK_LINE(379)
											_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
											HX_STACK_LINE(379)
											_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
											HX_STACK_LINE(379)
											_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
											HX_STACK_LINE(379)
											_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
											HX_STACK_LINE(379)
											_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
											HX_STACK_LINE(379)
											_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
											HX_STACK_LINE(379)
											_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
											HX_STACK_LINE(379)
											_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
										}
									}
									HX_STACK_LINE(379)
									{
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localBillboard;		HX_STACK_VAR(other,"other");
										HX_STACK_LINE(379)
										{
											HX_STACK_LINE(379)
											Array< Float > result = instance->_localWorld->m;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(379)
											Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
											HX_STACK_LINE(379)
											Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
											HX_STACK_LINE(379)
											Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
											HX_STACK_LINE(379)
											Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
											HX_STACK_LINE(379)
											Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
											HX_STACK_LINE(379)
											Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
											HX_STACK_LINE(379)
											Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
											HX_STACK_LINE(379)
											Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
											HX_STACK_LINE(379)
											Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
											HX_STACK_LINE(379)
											Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
											HX_STACK_LINE(379)
											Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
											HX_STACK_LINE(379)
											Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
											HX_STACK_LINE(379)
											Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
											HX_STACK_LINE(379)
											Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
											HX_STACK_LINE(379)
											Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
											HX_STACK_LINE(379)
											Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
											HX_STACK_LINE(379)
											Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
											HX_STACK_LINE(379)
											Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
											HX_STACK_LINE(379)
											Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
											HX_STACK_LINE(379)
											Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
											HX_STACK_LINE(379)
											Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
											HX_STACK_LINE(379)
											Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
											HX_STACK_LINE(379)
											Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
											HX_STACK_LINE(379)
											Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
											HX_STACK_LINE(379)
											Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
											HX_STACK_LINE(379)
											Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
											HX_STACK_LINE(379)
											Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
											HX_STACK_LINE(379)
											Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
											HX_STACK_LINE(379)
											Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
											HX_STACK_LINE(379)
											Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
											HX_STACK_LINE(379)
											Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
											HX_STACK_LINE(379)
											Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
											HX_STACK_LINE(379)
											result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
											HX_STACK_LINE(379)
											result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
											HX_STACK_LINE(379)
											result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
											HX_STACK_LINE(379)
											result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
											HX_STACK_LINE(379)
											result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
											HX_STACK_LINE(379)
											result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
											HX_STACK_LINE(379)
											result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
											HX_STACK_LINE(379)
											result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
											HX_STACK_LINE(379)
											result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
											HX_STACK_LINE(379)
											result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
											HX_STACK_LINE(379)
											result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
											HX_STACK_LINE(379)
											result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
											HX_STACK_LINE(379)
											result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
											HX_STACK_LINE(379)
											result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
											HX_STACK_LINE(379)
											result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
											HX_STACK_LINE(379)
											result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
											HX_STACK_LINE(379)
											result;
										}
									}
									HX_STACK_LINE(379)
									{
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localWorld;		HX_STACK_VAR(other,"other");
										HX_STACK_LINE(379)
										{
											HX_STACK_LINE(379)
											Array< Float > result = instance->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(379)
											Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
											HX_STACK_LINE(379)
											Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
											HX_STACK_LINE(379)
											Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
											HX_STACK_LINE(379)
											Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
											HX_STACK_LINE(379)
											Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
											HX_STACK_LINE(379)
											Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
											HX_STACK_LINE(379)
											Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
											HX_STACK_LINE(379)
											Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
											HX_STACK_LINE(379)
											Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
											HX_STACK_LINE(379)
											Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
											HX_STACK_LINE(379)
											Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
											HX_STACK_LINE(379)
											Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
											HX_STACK_LINE(379)
											Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
											HX_STACK_LINE(379)
											Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
											HX_STACK_LINE(379)
											Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
											HX_STACK_LINE(379)
											Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
											HX_STACK_LINE(379)
											Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
											HX_STACK_LINE(379)
											Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
											HX_STACK_LINE(379)
											Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
											HX_STACK_LINE(379)
											Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
											HX_STACK_LINE(379)
											Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
											HX_STACK_LINE(379)
											Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
											HX_STACK_LINE(379)
											Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
											HX_STACK_LINE(379)
											Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
											HX_STACK_LINE(379)
											Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
											HX_STACK_LINE(379)
											Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
											HX_STACK_LINE(379)
											Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
											HX_STACK_LINE(379)
											Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
											HX_STACK_LINE(379)
											Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
											HX_STACK_LINE(379)
											Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
											HX_STACK_LINE(379)
											Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
											HX_STACK_LINE(379)
											Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
											HX_STACK_LINE(379)
											result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
											HX_STACK_LINE(379)
											result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
											HX_STACK_LINE(379)
											result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
											HX_STACK_LINE(379)
											result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
											HX_STACK_LINE(379)
											result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
											HX_STACK_LINE(379)
											result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
											HX_STACK_LINE(379)
											result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
											HX_STACK_LINE(379)
											result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
											HX_STACK_LINE(379)
											result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
											HX_STACK_LINE(379)
											result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
											HX_STACK_LINE(379)
											result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
											HX_STACK_LINE(379)
											result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
											HX_STACK_LINE(379)
											result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
											HX_STACK_LINE(379)
											result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
											HX_STACK_LINE(379)
											result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
											HX_STACK_LINE(379)
											result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
											HX_STACK_LINE(379)
											result;
										}
									}
								}
								struct _Function_5_1{
									inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh &instance){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",379,0xf4cec482)
										{
											HX_STACK_LINE(379)
											::com::gamestudiohx::babylonhx::tools::math::Matrix _g16 = instance->parent->getWorldMatrix();		HX_STACK_VAR(_g16,"_g16");
											HX_STACK_LINE(379)
											return (_g16 != null());
										}
										return null();
									}
								};
								HX_STACK_LINE(379)
								if (((  (((  (((instance->parent != null()))) ? bool(_Function_5_1::Block(instance)) : bool(false) ))) ? bool((instance->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
									HX_STACK_LINE(379)
									{
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localTranslation;		HX_STACK_VAR(other,"other");
										HX_STACK_LINE(379)
										{
											HX_STACK_LINE(379)
											Array< Float > result = instance->_localWorld->m;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(379)
											Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
											HX_STACK_LINE(379)
											Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
											HX_STACK_LINE(379)
											Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
											HX_STACK_LINE(379)
											Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
											HX_STACK_LINE(379)
											Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
											HX_STACK_LINE(379)
											Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
											HX_STACK_LINE(379)
											Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
											HX_STACK_LINE(379)
											Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
											HX_STACK_LINE(379)
											Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
											HX_STACK_LINE(379)
											Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
											HX_STACK_LINE(379)
											Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
											HX_STACK_LINE(379)
											Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
											HX_STACK_LINE(379)
											Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
											HX_STACK_LINE(379)
											Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
											HX_STACK_LINE(379)
											Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
											HX_STACK_LINE(379)
											Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
											HX_STACK_LINE(379)
											Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
											HX_STACK_LINE(379)
											Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
											HX_STACK_LINE(379)
											Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
											HX_STACK_LINE(379)
											Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
											HX_STACK_LINE(379)
											Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
											HX_STACK_LINE(379)
											Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
											HX_STACK_LINE(379)
											Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
											HX_STACK_LINE(379)
											Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
											HX_STACK_LINE(379)
											Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
											HX_STACK_LINE(379)
											Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
											HX_STACK_LINE(379)
											Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
											HX_STACK_LINE(379)
											Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
											HX_STACK_LINE(379)
											Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
											HX_STACK_LINE(379)
											Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
											HX_STACK_LINE(379)
											Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
											HX_STACK_LINE(379)
											Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
											HX_STACK_LINE(379)
											result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
											HX_STACK_LINE(379)
											result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
											HX_STACK_LINE(379)
											result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
											HX_STACK_LINE(379)
											result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
											HX_STACK_LINE(379)
											result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
											HX_STACK_LINE(379)
											result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
											HX_STACK_LINE(379)
											result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
											HX_STACK_LINE(379)
											result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
											HX_STACK_LINE(379)
											result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
											HX_STACK_LINE(379)
											result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
											HX_STACK_LINE(379)
											result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
											HX_STACK_LINE(379)
											result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
											HX_STACK_LINE(379)
											result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
											HX_STACK_LINE(379)
											result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
											HX_STACK_LINE(379)
											result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
											HX_STACK_LINE(379)
											result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
											HX_STACK_LINE(379)
											result;
										}
									}
									HX_STACK_LINE(379)
									::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = instance->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
									HX_STACK_LINE(379)
									{
										HX_STACK_LINE(379)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localWorld;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(379)
										{
											HX_STACK_LINE(379)
											Array< Float > result = instance->_worldMatrix->m;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(379)
											Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
											HX_STACK_LINE(379)
											Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
											HX_STACK_LINE(379)
											Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
											HX_STACK_LINE(379)
											Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
											HX_STACK_LINE(379)
											Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
											HX_STACK_LINE(379)
											Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
											HX_STACK_LINE(379)
											Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
											HX_STACK_LINE(379)
											Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
											HX_STACK_LINE(379)
											Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
											HX_STACK_LINE(379)
											Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
											HX_STACK_LINE(379)
											Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
											HX_STACK_LINE(379)
											Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
											HX_STACK_LINE(379)
											Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
											HX_STACK_LINE(379)
											Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
											HX_STACK_LINE(379)
											Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
											HX_STACK_LINE(379)
											Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
											HX_STACK_LINE(379)
											Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
											HX_STACK_LINE(379)
											Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
											HX_STACK_LINE(379)
											Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
											HX_STACK_LINE(379)
											Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
											HX_STACK_LINE(379)
											Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
											HX_STACK_LINE(379)
											Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
											HX_STACK_LINE(379)
											Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
											HX_STACK_LINE(379)
											Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
											HX_STACK_LINE(379)
											Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
											HX_STACK_LINE(379)
											Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
											HX_STACK_LINE(379)
											Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
											HX_STACK_LINE(379)
											Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
											HX_STACK_LINE(379)
											Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
											HX_STACK_LINE(379)
											Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
											HX_STACK_LINE(379)
											Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
											HX_STACK_LINE(379)
											Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
											HX_STACK_LINE(379)
											result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
											HX_STACK_LINE(379)
											result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
											HX_STACK_LINE(379)
											result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
											HX_STACK_LINE(379)
											result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
											HX_STACK_LINE(379)
											result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
											HX_STACK_LINE(379)
											result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
											HX_STACK_LINE(379)
											result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
											HX_STACK_LINE(379)
											result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
											HX_STACK_LINE(379)
											result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
											HX_STACK_LINE(379)
											result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
											HX_STACK_LINE(379)
											result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
											HX_STACK_LINE(379)
											result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
											HX_STACK_LINE(379)
											result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
											HX_STACK_LINE(379)
											result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
											HX_STACK_LINE(379)
											result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
											HX_STACK_LINE(379)
											result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
											HX_STACK_LINE(379)
											result;
										}
									}
								}
								else{
									HX_STACK_LINE(379)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(379)
									::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localTranslation;		HX_STACK_VAR(other,"other");
									HX_STACK_LINE(379)
									{
										HX_STACK_LINE(379)
										Array< Float > result = instance->_worldMatrix->m;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(379)
										Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
										HX_STACK_LINE(379)
										Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
										HX_STACK_LINE(379)
										Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
										HX_STACK_LINE(379)
										Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
										HX_STACK_LINE(379)
										Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
										HX_STACK_LINE(379)
										Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
										HX_STACK_LINE(379)
										Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
										HX_STACK_LINE(379)
										Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
										HX_STACK_LINE(379)
										Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
										HX_STACK_LINE(379)
										Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
										HX_STACK_LINE(379)
										Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
										HX_STACK_LINE(379)
										Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
										HX_STACK_LINE(379)
										Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
										HX_STACK_LINE(379)
										Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
										HX_STACK_LINE(379)
										Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
										HX_STACK_LINE(379)
										Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
										HX_STACK_LINE(379)
										Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
										HX_STACK_LINE(379)
										Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
										HX_STACK_LINE(379)
										Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
										HX_STACK_LINE(379)
										Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
										HX_STACK_LINE(379)
										Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
										HX_STACK_LINE(379)
										Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
										HX_STACK_LINE(379)
										Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
										HX_STACK_LINE(379)
										Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
										HX_STACK_LINE(379)
										Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
										HX_STACK_LINE(379)
										Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
										HX_STACK_LINE(379)
										Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
										HX_STACK_LINE(379)
										Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
										HX_STACK_LINE(379)
										Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
										HX_STACK_LINE(379)
										Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
										HX_STACK_LINE(379)
										Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
										HX_STACK_LINE(379)
										Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
										HX_STACK_LINE(379)
										result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
										HX_STACK_LINE(379)
										result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
										HX_STACK_LINE(379)
										result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
										HX_STACK_LINE(379)
										result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
										HX_STACK_LINE(379)
										result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
										HX_STACK_LINE(379)
										result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
										HX_STACK_LINE(379)
										result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
										HX_STACK_LINE(379)
										result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
										HX_STACK_LINE(379)
										result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
										HX_STACK_LINE(379)
										result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
										HX_STACK_LINE(379)
										result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
										HX_STACK_LINE(379)
										result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
										HX_STACK_LINE(379)
										result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
										HX_STACK_LINE(379)
										result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
										HX_STACK_LINE(379)
										result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
										HX_STACK_LINE(379)
										result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
										HX_STACK_LINE(379)
										result;
									}
								}
								HX_STACK_LINE(379)
								if (((instance->_boundingInfo != null()))){
									HX_STACK_LINE(379)
									Float _g17 = ::Math_obj::max(instance->scaling->x,instance->scaling->y);		HX_STACK_VAR(_g17,"_g17");
									HX_STACK_LINE(379)
									instance->_scaleFactor = _g17;
									HX_STACK_LINE(379)
									Float _g18 = ::Math_obj::max(instance->_scaleFactor,instance->scaling->z);		HX_STACK_VAR(_g18,"_g18");
									HX_STACK_LINE(379)
									instance->_scaleFactor = _g18;
									struct _Function_6_1{
										inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh &instance){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",379,0xf4cec482)
											{
												HX_STACK_LINE(379)
												Dynamic _g19 = ::Reflect_obj::field(instance->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g19,"_g19");
												HX_STACK_LINE(379)
												return (_g19 != null());
											}
											return null();
										}
									};
									HX_STACK_LINE(379)
									if (((  (((instance->parent != null()))) ? bool(_Function_6_1::Block(instance)) : bool(false) ))){
										HX_STACK_LINE(379)
										Dynamic _g20 = ::Reflect_obj::field(instance->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g20,"_g20");
										HX_STACK_LINE(379)
										Float _g21 = (instance->_scaleFactor * _g20);		HX_STACK_VAR(_g21,"_g21");
										HX_STACK_LINE(379)
										instance->_scaleFactor = _g21;
									}
									HX_STACK_LINE(379)
									instance->_boundingInfo->_update(instance->_worldMatrix,instance->_scaleFactor);
									HX_STACK_LINE(379)
									{
										HX_STACK_LINE(379)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(379)
										int _g = instance->subMeshes->length;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(379)
										while((true)){
											HX_STACK_LINE(379)
											if ((!(((_g1 < _g))))){
												HX_STACK_LINE(379)
												break;
											}
											HX_STACK_LINE(379)
											int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
											HX_STACK_LINE(379)
											::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh1 = instance->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh1,"subMesh1");
											HX_STACK_LINE(379)
											subMesh1->_boundingInfo->_update(instance->_worldMatrix,instance->_scaleFactor);
										}
									}
								}
								HX_STACK_LINE(379)
								{
									HX_STACK_LINE(379)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = instance->_absolutePosition;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(379)
									_this->x = instance->_worldMatrix->m->__get((int)12);
									HX_STACK_LINE(379)
									_this->y = instance->_worldMatrix->m->__get((int)13);
									HX_STACK_LINE(379)
									_this->z = instance->_worldMatrix->m->__get((int)14);
								}
								HX_STACK_LINE(379)
								ret = instance->_worldMatrix;
							}
							HX_STACK_LINE(379)
							ret;
						}
						HX_STACK_LINE(379)
						return instance->_worldMatrix;
					}
					return null();
				}
			};
			HX_STACK_LINE(379)
			(_Function_2_1::Block(instance))->copyToArray(this->_worldMatricesInstancesArray,offset);
			HX_STACK_LINE(380)
			hx::AddEq(offset,(int)16);
			HX_STACK_LINE(381)
			(instancesCount)++;
			HX_STACK_LINE(382)
			(instanceIndex)++;
		}
		HX_STACK_LINE(386)
		int offsetLocation0 = effect->getAttributeLocationByName(HX_CSTRING("world0"));		HX_STACK_VAR(offsetLocation0,"offsetLocation0");
		HX_STACK_LINE(387)
		int offsetLocation1 = effect->getAttributeLocationByName(HX_CSTRING("world1"));		HX_STACK_VAR(offsetLocation1,"offsetLocation1");
		HX_STACK_LINE(388)
		int offsetLocation2 = effect->getAttributeLocationByName(HX_CSTRING("world2"));		HX_STACK_VAR(offsetLocation2,"offsetLocation2");
		HX_STACK_LINE(389)
		int offsetLocation3 = effect->getAttributeLocationByName(HX_CSTRING("world3"));		HX_STACK_VAR(offsetLocation3,"offsetLocation3");
		HX_STACK_LINE(391)
		Array< int > offsetLocations = Array_obj< int >::__new().Add(offsetLocation0).Add(offsetLocation1).Add(offsetLocation2).Add(offsetLocation3);		HX_STACK_VAR(offsetLocations,"offsetLocations");
		HX_STACK_LINE(393)
		engine->updateAndBindInstancesBuffer(this->_worldMatricesInstancesBuffer,this->_worldMatricesInstancesArray,offsetLocations);
		HX_STACK_LINE(395)
		this->_draw(subMesh,!(wireFrame),instancesCount);
		HX_STACK_LINE(397)
		engine->unBindInstancesBuffer(this->_worldMatricesInstancesBuffer,offsetLocations);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Mesh_obj,_renderWithInstances,(void))

Void Mesh_obj::render( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","render",0x8dcb2ac8,"com.gamestudiohx.babylonhx.mesh.Mesh.render","com/gamestudiohx/babylonhx/mesh/Mesh.hx",400,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(subMesh,"subMesh")
		HX_STACK_LINE(401)
		::com::gamestudiohx::babylonhx::Scene scene = this->getScene();		HX_STACK_VAR(scene,"scene");
		HX_STACK_LINE(404)
		::com::gamestudiohx::babylonhx::mesh::InstancesBatch batch = this->_getInstancesRenderList();		HX_STACK_VAR(batch,"batch");
		HX_STACK_LINE(406)
		if ((batch->mustReturn)){
			HX_STACK_LINE(407)
			return null();
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",411,0xf4cec482)
				{
					HX_STACK_LINE(411)
					::haxe::ds::StringMap _g = __this->_geometry->getVertexBuffers();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(411)
					return (_g == null());
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",411,0xf4cec482)
				{
					HX_STACK_LINE(411)
					Dynamic _g1 = __this->_geometry->getIndexBuffer();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(411)
					return (_g1 == null());
				}
				return null();
			}
		};
		HX_STACK_LINE(411)
		if (((  ((!(((  ((!(((this->_geometry == null()))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))))) ? bool(_Function_1_2::Block(this)) : bool(true) ))){
			HX_STACK_LINE(412)
			return null();
		}
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(416)
			int _g = this->_onBeforeRenderCallbacks->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(416)
			while((true)){
				HX_STACK_LINE(416)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(416)
					break;
				}
				HX_STACK_LINE(416)
				int callbackIndex = (_g1)++;		HX_STACK_VAR(callbackIndex,"callbackIndex");
				HX_STACK_LINE(417)
				this->_onBeforeRenderCallbacks->__GetItem(callbackIndex)();
			}
		}
		HX_STACK_LINE(420)
		::com::gamestudiohx::babylonhx::Engine engine = scene->getEngine();		HX_STACK_VAR(engine,"engine");
		HX_STACK_LINE(421)
		bool hardwareInstancedRendering = (bool((engine->getCaps()->__Field(HX_CSTRING("instancedArrays"),true) != null())) && bool((batch->visibleInstances != null())));		HX_STACK_VAR(hardwareInstancedRendering,"hardwareInstancedRendering");
		HX_STACK_LINE(424)
		Dynamic effectiveMaterial = subMesh->getMaterial();		HX_STACK_VAR(effectiveMaterial,"effectiveMaterial");
		HX_STACK_LINE(428)
		if (((  ((!(((effectiveMaterial == null()))))) ? bool(!(effectiveMaterial->__Field(HX_CSTRING("isReady"),true)(hx::ObjectPtr<OBJ_>(this)))) : bool(true) ))){
			HX_STACK_LINE(429)
			return null();
		}
		HX_STACK_LINE(433)
		::com::gamestudiohx::babylonhx::tools::math::Matrix world;		HX_STACK_VAR(world,"world");
		HX_STACK_LINE(433)
		{
			HX_STACK_LINE(433)
			int _g2 = this->_scene->getRenderId();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(433)
			if (((this->_currentRenderId != _g2))){
				HX_STACK_LINE(433)
				bool force = false;		HX_STACK_VAR(force,"force");
				HX_STACK_LINE(433)
				::com::gamestudiohx::babylonhx::tools::math::Matrix ret = this->_worldMatrix;		HX_STACK_VAR(ret,"ret");
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",433,0xf4cec482)
						{
							HX_STACK_LINE(433)
							int _g3 = __this->_scene->getRenderId();		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(433)
							return (  ((!(((__this->_currentRenderId == _g3))))) ? bool(__this->isSynchronized(null())) : bool(true) );
						}
						return null();
					}
				};
				HX_STACK_LINE(433)
				if (((  ((!(force))) ? bool(_Function_3_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(433)
					this->_childrenFlag = (int)0;
				}
				else{
					HX_STACK_LINE(433)
					this->_childrenFlag = (int)1;
					HX_STACK_LINE(433)
					this->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->position);
					HX_STACK_LINE(433)
					this->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->scaling);
					HX_STACK_LINE(433)
					this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
					HX_STACK_LINE(433)
					int _g4 = this->_scene->getRenderId();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(433)
					this->_currentRenderId = _g4;
					HX_STACK_LINE(433)
					{
						HX_STACK_LINE(433)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localScaling;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(433)
						result->m[(int)0] = this->scaling->x;
						HX_STACK_LINE(433)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(433)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(433)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(433)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(433)
						result->m[(int)5] = this->scaling->y;
						HX_STACK_LINE(433)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(433)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(433)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(433)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(433)
						result->m[(int)10] = this->scaling->z;
						HX_STACK_LINE(433)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(433)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(433)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(433)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(433)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(433)
						result;
					}
					HX_STACK_LINE(433)
					if (((this->rotationQuaternion != null()))){
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = this->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(433)
							Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(433)
							Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
							HX_STACK_LINE(433)
							Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
							HX_STACK_LINE(433)
							Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
							HX_STACK_LINE(433)
							Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
							HX_STACK_LINE(433)
							Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
							HX_STACK_LINE(433)
							Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
							HX_STACK_LINE(433)
							Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
							HX_STACK_LINE(433)
							Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
							HX_STACK_LINE(433)
							result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
							HX_STACK_LINE(433)
							result->m[(int)1] = (2.0 * ((xy + zw)));
							HX_STACK_LINE(433)
							result->m[(int)2] = (2.0 * ((zx - yw)));
							HX_STACK_LINE(433)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(433)
							result->m[(int)4] = (2.0 * ((xy - zw)));
							HX_STACK_LINE(433)
							result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
							HX_STACK_LINE(433)
							result->m[(int)6] = (2.0 * ((yz + xw)));
							HX_STACK_LINE(433)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(433)
							result->m[(int)8] = (2.0 * ((zx + yw)));
							HX_STACK_LINE(433)
							result->m[(int)9] = (2.0 * ((yz - xw)));
							HX_STACK_LINE(433)
							result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
							HX_STACK_LINE(433)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(433)
							result->m[(int)12] = (int)0;
							HX_STACK_LINE(433)
							result->m[(int)13] = (int)0;
							HX_STACK_LINE(433)
							result->m[(int)14] = (int)0;
							HX_STACK_LINE(433)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(433)
							result;
						}
						HX_STACK_LINE(433)
						this->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotationQuaternion);
					}
					else{
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localRotation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Quaternion _g5;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								Float halfRoll = (this->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
								HX_STACK_LINE(433)
								Float halfPitch = (this->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
								HX_STACK_LINE(433)
								Float halfYaw = (this->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
								HX_STACK_LINE(433)
								Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
								HX_STACK_LINE(433)
								Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
								HX_STACK_LINE(433)
								Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
								HX_STACK_LINE(433)
								Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
								HX_STACK_LINE(433)
								Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
								HX_STACK_LINE(433)
								Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
								HX_STACK_LINE(433)
								tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
								HX_STACK_LINE(433)
								tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
								HX_STACK_LINE(433)
								tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
								HX_STACK_LINE(433)
								tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
								HX_STACK_LINE(433)
								_g5 = tempQuaternion;
							}
							HX_STACK_LINE(433)
							tempQuaternion = _g5;
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
								HX_STACK_LINE(433)
								Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
								HX_STACK_LINE(433)
								Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
								HX_STACK_LINE(433)
								Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
								HX_STACK_LINE(433)
								Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
								HX_STACK_LINE(433)
								Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
								HX_STACK_LINE(433)
								Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
								HX_STACK_LINE(433)
								Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
								HX_STACK_LINE(433)
								Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
								HX_STACK_LINE(433)
								result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
								HX_STACK_LINE(433)
								result->m[(int)1] = (2.0 * ((xy + zw)));
								HX_STACK_LINE(433)
								result->m[(int)2] = (2.0 * ((zx - yw)));
								HX_STACK_LINE(433)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)4] = (2.0 * ((xy - zw)));
								HX_STACK_LINE(433)
								result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
								HX_STACK_LINE(433)
								result->m[(int)6] = (2.0 * ((yz + xw)));
								HX_STACK_LINE(433)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)8] = (2.0 * ((zx + yw)));
								HX_STACK_LINE(433)
								result->m[(int)9] = (2.0 * ((yz - xw)));
								HX_STACK_LINE(433)
								result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
								HX_STACK_LINE(433)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)12] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)13] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)14] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(433)
								result;
							}
						}
						HX_STACK_LINE(433)
						this->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(this->rotation);
					}
					HX_STACK_LINE(433)
					if ((this->infiniteDistance)){
						HX_STACK_LINE(433)
						::com::gamestudiohx::babylonhx::cameras::Camera camera = this->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								result->m[(int)0] = 1.0;
								HX_STACK_LINE(433)
								result->m[(int)1] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)2] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)4] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)5] = 1.0;
								HX_STACK_LINE(433)
								result->m[(int)6] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)8] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)9] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)10] = 1.0;
								HX_STACK_LINE(433)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)12] = (this->position->x + camera->position->x);
								HX_STACK_LINE(433)
								result->m[(int)13] = (this->position->y + camera->position->y);
								HX_STACK_LINE(433)
								result->m[(int)14] = (this->position->z + camera->position->z);
								HX_STACK_LINE(433)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(433)
								result;
							}
						}
					}
					else{
						HX_STACK_LINE(433)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(433)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(433)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(433)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(433)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(433)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(433)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(433)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(433)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(433)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(433)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(433)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(433)
							result->m[(int)12] = this->position->x;
							HX_STACK_LINE(433)
							result->m[(int)13] = this->position->y;
							HX_STACK_LINE(433)
							result->m[(int)14] = this->position->z;
							HX_STACK_LINE(433)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(433)
							result;
						}
					}
					HX_STACK_LINE(433)
					{
						HX_STACK_LINE(433)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(433)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localScaling;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							Array< Float > result = this->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(433)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(433)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(433)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(433)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(433)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(433)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(433)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(433)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(433)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(433)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(433)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(433)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(433)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(433)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(433)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(433)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(433)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(433)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(433)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(433)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(433)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(433)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(433)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(433)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(433)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(433)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(433)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(433)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(433)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(433)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(433)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(433)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(433)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(433)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(433)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(433)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(433)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(433)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(433)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(433)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(433)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(433)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(433)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(433)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(433)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(433)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(433)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(433)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(433)
							result;
						}
					}
					HX_STACK_LINE(433)
					{
						HX_STACK_LINE(433)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(433)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localRotation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(433)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(433)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(433)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(433)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(433)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(433)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(433)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(433)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(433)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(433)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(433)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(433)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(433)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(433)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(433)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(433)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(433)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(433)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(433)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(433)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(433)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(433)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(433)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(433)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(433)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(433)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(433)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(433)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(433)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(433)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(433)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(433)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(433)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(433)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(433)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(433)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(433)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(433)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(433)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(433)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(433)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(433)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(433)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(433)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(433)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(433)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(433)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(433)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(433)
							result;
						}
					}
					HX_STACK_LINE(433)
					if (((this->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
						HX_STACK_LINE(433)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(433)
							localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
						}
						HX_STACK_LINE(433)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(433)
							zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
						}
						HX_STACK_LINE(433)
						if (((bool((this->parent != null())) && bool((this->parent->position != null()))))){
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = this->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
								HX_STACK_LINE(433)
								hx::AddEq(localPosition->x,otherVector->x);
								HX_STACK_LINE(433)
								hx::AddEq(localPosition->y,otherVector->y);
								HX_STACK_LINE(433)
								hx::AddEq(localPosition->z,otherVector->z);
							}
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localTranslation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(433)
								{
									HX_STACK_LINE(433)
									result->m[(int)0] = 1.0;
									HX_STACK_LINE(433)
									result->m[(int)1] = (int)0;
									HX_STACK_LINE(433)
									result->m[(int)2] = (int)0;
									HX_STACK_LINE(433)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(433)
									result->m[(int)4] = (int)0;
									HX_STACK_LINE(433)
									result->m[(int)5] = 1.0;
									HX_STACK_LINE(433)
									result->m[(int)6] = (int)0;
									HX_STACK_LINE(433)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(433)
									result->m[(int)8] = (int)0;
									HX_STACK_LINE(433)
									result->m[(int)9] = (int)0;
									HX_STACK_LINE(433)
									result->m[(int)10] = 1.0;
									HX_STACK_LINE(433)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(433)
									result->m[(int)12] = localPosition->x;
									HX_STACK_LINE(433)
									result->m[(int)13] = localPosition->y;
									HX_STACK_LINE(433)
									result->m[(int)14] = localPosition->z;
									HX_STACK_LINE(433)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(433)
									result;
								}
							}
						}
						HX_STACK_LINE(433)
						if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
							HX_STACK_LINE(433)
							zero = this->_scene->activeCamera->position;
						}
						else{
							HX_STACK_LINE(433)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
								HX_STACK_LINE(433)
								zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
							HX_STACK_LINE(433)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
								HX_STACK_LINE(433)
								zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
							HX_STACK_LINE(433)
							if (((((int(this->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
								HX_STACK_LINE(433)
								zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
							}
						}
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = this->_localBillboard;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								zAxis->x = (zero->x - localPosition->x);
								HX_STACK_LINE(433)
								zAxis->y = (zero->y - localPosition->y);
								HX_STACK_LINE(433)
								zAxis->z = (zero->z - localPosition->z);
							}
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(433)
								if (((len != (int)0))){
									HX_STACK_LINE(433)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(433)
									hx::MultEq(zAxis->x,num);
									HX_STACK_LINE(433)
									hx::MultEq(zAxis->y,num);
									HX_STACK_LINE(433)
									hx::MultEq(zAxis->z,num);
								}
							}
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
								HX_STACK_LINE(433)
								xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
								HX_STACK_LINE(433)
								xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
							}
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(433)
								if (((len != (int)0))){
									HX_STACK_LINE(433)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(433)
									hx::MultEq(xAxis->x,num);
									HX_STACK_LINE(433)
									hx::MultEq(xAxis->y,num);
									HX_STACK_LINE(433)
									hx::MultEq(xAxis->z,num);
								}
							}
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
								HX_STACK_LINE(433)
								yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
								HX_STACK_LINE(433)
								yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
							}
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(433)
								if (((len != (int)0))){
									HX_STACK_LINE(433)
									Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
									HX_STACK_LINE(433)
									hx::MultEq(yAxis->x,num);
									HX_STACK_LINE(433)
									hx::MultEq(yAxis->y,num);
									HX_STACK_LINE(433)
									hx::MultEq(yAxis->z,num);
								}
							}
							HX_STACK_LINE(433)
							Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
							HX_STACK_LINE(433)
							Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
							HX_STACK_LINE(433)
							Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								result->m[(int)0] = xAxis->x;
								HX_STACK_LINE(433)
								result->m[(int)1] = yAxis->x;
								HX_STACK_LINE(433)
								result->m[(int)2] = zAxis->x;
								HX_STACK_LINE(433)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)4] = xAxis->y;
								HX_STACK_LINE(433)
								result->m[(int)5] = yAxis->y;
								HX_STACK_LINE(433)
								result->m[(int)6] = zAxis->y;
								HX_STACK_LINE(433)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)8] = xAxis->z;
								HX_STACK_LINE(433)
								result->m[(int)9] = yAxis->z;
								HX_STACK_LINE(433)
								result->m[(int)10] = zAxis->z;
								HX_STACK_LINE(433)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(433)
								result->m[(int)12] = ex;
								HX_STACK_LINE(433)
								result->m[(int)13] = ey;
								HX_STACK_LINE(433)
								result->m[(int)14] = ez;
								HX_STACK_LINE(433)
								result->m[(int)15] = (int)1;
								HX_STACK_LINE(433)
								result;
							}
						}
						HX_STACK_LINE(433)
						this->_localBillboard->m[(int)12] = this->_localBillboard->m[(int)13] = this->_localBillboard->m[(int)14] = (int)0;
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localBillboard;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
								HX_STACK_LINE(433)
								Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
								HX_STACK_LINE(433)
								Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
								HX_STACK_LINE(433)
								Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
								HX_STACK_LINE(433)
								Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
								HX_STACK_LINE(433)
								Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
								HX_STACK_LINE(433)
								Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
								HX_STACK_LINE(433)
								Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
								HX_STACK_LINE(433)
								Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
								HX_STACK_LINE(433)
								Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
								HX_STACK_LINE(433)
								Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
								HX_STACK_LINE(433)
								Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
								HX_STACK_LINE(433)
								Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
								HX_STACK_LINE(433)
								Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
								HX_STACK_LINE(433)
								Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
								HX_STACK_LINE(433)
								Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
								HX_STACK_LINE(433)
								Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
								HX_STACK_LINE(433)
								Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
								HX_STACK_LINE(433)
								Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
								HX_STACK_LINE(433)
								Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
								HX_STACK_LINE(433)
								Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
								HX_STACK_LINE(433)
								Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
								HX_STACK_LINE(433)
								Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
								HX_STACK_LINE(433)
								Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
								HX_STACK_LINE(433)
								Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
								HX_STACK_LINE(433)
								Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
								HX_STACK_LINE(433)
								Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
								HX_STACK_LINE(433)
								Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
								HX_STACK_LINE(433)
								Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
								HX_STACK_LINE(433)
								Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
								HX_STACK_LINE(433)
								Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
								HX_STACK_LINE(433)
								Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
								HX_STACK_LINE(433)
								Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
								HX_STACK_LINE(433)
								Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
								HX_STACK_LINE(433)
								Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
								HX_STACK_LINE(433)
								Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
								HX_STACK_LINE(433)
								Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
								HX_STACK_LINE(433)
								Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
								HX_STACK_LINE(433)
								Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
								HX_STACK_LINE(433)
								_this->m[(int)0] = (l23 * l27);
								HX_STACK_LINE(433)
								_this->m[(int)4] = (l24 * l27);
								HX_STACK_LINE(433)
								_this->m[(int)8] = (l25 * l27);
								HX_STACK_LINE(433)
								_this->m[(int)12] = (l26 * l27);
								HX_STACK_LINE(433)
								_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
								HX_STACK_LINE(433)
								_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
								HX_STACK_LINE(433)
								_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
								HX_STACK_LINE(433)
								_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
								HX_STACK_LINE(433)
								_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
								HX_STACK_LINE(433)
								_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
								HX_STACK_LINE(433)
								_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
								HX_STACK_LINE(433)
								_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
								HX_STACK_LINE(433)
								_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
								HX_STACK_LINE(433)
								_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
								HX_STACK_LINE(433)
								_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
								HX_STACK_LINE(433)
								_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
							}
						}
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localBillboard;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(433)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(433)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(433)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(433)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(433)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(433)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(433)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(433)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(433)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(433)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(433)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(433)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(433)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(433)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(433)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(433)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(433)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(433)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(433)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(433)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(433)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(433)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(433)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(433)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(433)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(433)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(433)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(433)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(433)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(433)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(433)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(433)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(433)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(433)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(433)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(433)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(433)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(433)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(433)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(433)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(433)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(433)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(433)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(433)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(433)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(433)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(433)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(433)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(433)
								result;
							}
						}
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localWorld;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								Array< Float > result = this->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(433)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(433)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(433)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(433)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(433)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(433)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(433)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(433)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(433)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(433)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(433)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(433)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(433)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(433)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(433)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(433)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(433)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(433)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(433)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(433)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(433)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(433)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(433)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(433)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(433)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(433)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(433)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(433)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(433)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(433)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(433)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(433)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(433)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(433)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(433)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(433)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(433)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(433)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(433)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(433)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(433)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(433)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(433)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(433)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(433)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(433)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(433)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(433)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(433)
								result;
							}
						}
					}
					struct _Function_4_1{
						inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",433,0xf4cec482)
							{
								HX_STACK_LINE(433)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _g6 = __this->parent->getWorldMatrix();		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(433)
								return (_g6 != null());
							}
							return null();
						}
					};
					HX_STACK_LINE(433)
					if (((  (((  (((this->parent != null()))) ? bool(_Function_4_1::Block(this)) : bool(false) ))) ? bool((this->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								Array< Float > result = this->_localWorld->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(433)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(433)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(433)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(433)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(433)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(433)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(433)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(433)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(433)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(433)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(433)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(433)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(433)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(433)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(433)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(433)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(433)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(433)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(433)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(433)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(433)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(433)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(433)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(433)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(433)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(433)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(433)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(433)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(433)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(433)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(433)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(433)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(433)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(433)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(433)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(433)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(433)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(433)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(433)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(433)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(433)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(433)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(433)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(433)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(433)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(433)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(433)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(433)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(433)
								result;
							}
						}
						HX_STACK_LINE(433)
						::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = this->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localWorld;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(433)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(433)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(433)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(433)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(433)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(433)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(433)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(433)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(433)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(433)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(433)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(433)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(433)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(433)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(433)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(433)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(433)
								Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(433)
								Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(433)
								Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(433)
								Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(433)
								Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(433)
								Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(433)
								Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(433)
								Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(433)
								Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(433)
								Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(433)
								Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(433)
								Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(433)
								Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(433)
								Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(433)
								Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(433)
								Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(433)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(433)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(433)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(433)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(433)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(433)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(433)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(433)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(433)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(433)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(433)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(433)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(433)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(433)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(433)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(433)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(433)
								result;
							}
						}
					}
					else{
						HX_STACK_LINE(433)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = this->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(433)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = this->_localTranslation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							Array< Float > result = this->_worldMatrix->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(433)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(433)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(433)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(433)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(433)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(433)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(433)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(433)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(433)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(433)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(433)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(433)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(433)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(433)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(433)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(433)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(433)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(433)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(433)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(433)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(433)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(433)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(433)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(433)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(433)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(433)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(433)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(433)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(433)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(433)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(433)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(433)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(433)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(433)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(433)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(433)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(433)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(433)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(433)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(433)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(433)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(433)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(433)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(433)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(433)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(433)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(433)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(433)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(433)
							result;
						}
					}
					HX_STACK_LINE(433)
					if (((this->_boundingInfo != null()))){
						HX_STACK_LINE(433)
						Float _g7 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(433)
						this->_scaleFactor = _g7;
						HX_STACK_LINE(433)
						Float _g8 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(433)
						this->_scaleFactor = _g8;
						struct _Function_5_1{
							inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::Mesh_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",433,0xf4cec482)
								{
									HX_STACK_LINE(433)
									Dynamic _g9 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(433)
									return (_g9 != null());
								}
								return null();
							}
						};
						HX_STACK_LINE(433)
						if (((  (((this->parent != null()))) ? bool(_Function_5_1::Block(this)) : bool(false) ))){
							HX_STACK_LINE(433)
							Dynamic _g10 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(433)
							Float _g11 = (this->_scaleFactor * _g10);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(433)
							this->_scaleFactor = _g11;
						}
						HX_STACK_LINE(433)
						this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(433)
							int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(433)
							while((true)){
								HX_STACK_LINE(433)
								if ((!(((_g1 < _g))))){
									HX_STACK_LINE(433)
									break;
								}
								HX_STACK_LINE(433)
								int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
								HX_STACK_LINE(433)
								::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh1 = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh1,"subMesh1");
								HX_STACK_LINE(433)
								subMesh1->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
							}
						}
					}
					HX_STACK_LINE(433)
					{
						HX_STACK_LINE(433)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->_absolutePosition;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(433)
						_this->x = this->_worldMatrix->m->__get((int)12);
						HX_STACK_LINE(433)
						_this->y = this->_worldMatrix->m->__get((int)13);
						HX_STACK_LINE(433)
						_this->z = this->_worldMatrix->m->__get((int)14);
					}
					HX_STACK_LINE(433)
					ret = this->_worldMatrix;
				}
				HX_STACK_LINE(433)
				ret;
			}
			HX_STACK_LINE(433)
			world = this->_worldMatrix;
		}
		HX_STACK_LINE(440)
		::com::gamestudiohx::babylonhx::materials::Effect effect = effectiveMaterial->__Field(HX_CSTRING("getEffect"),true)();		HX_STACK_VAR(effect,"effect");
		HX_STACK_LINE(441)
		bool wireFrame = (bool(engine->forceWireframe) || bool(effectiveMaterial->__Field(HX_CSTRING("wireframe"),true)));		HX_STACK_VAR(wireFrame,"wireFrame");
		HX_STACK_LINE(442)
		this->_bind(subMesh,effect,wireFrame);
		HX_STACK_LINE(444)
		if ((::Std_obj::is(effectiveMaterial,hx::ClassOf< ::com::gamestudiohx::babylonhx::materials::Material >()))){
			HX_STACK_LINE(445)
			effectiveMaterial->__Field(HX_CSTRING("_preBind"),true)();
			HX_STACK_LINE(446)
			effectiveMaterial->__Field(HX_CSTRING("bind"),true)(world,hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(463)
		if ((hardwareInstancedRendering)){
			HX_STACK_LINE(464)
			this->_renderWithInstances(subMesh,wireFrame,batch,effect,engine);
		}
		else{
			HX_STACK_LINE(466)
			if ((batch->renderSelf)){
				HX_STACK_LINE(468)
				this->_draw(subMesh,!(wireFrame),null());
			}
			HX_STACK_LINE(470)
			if (((batch->visibleInstances != null()))){
				HX_STACK_LINE(473)
				int instanceIndex = (int)0;		HX_STACK_VAR(instanceIndex,"instanceIndex");
				HX_STACK_LINE(474)
				while((true)){
					HX_STACK_LINE(474)
					if ((!(((instanceIndex < batch->visibleInstances->length))))){
						HX_STACK_LINE(474)
						break;
					}
					HX_STACK_LINE(475)
					::com::gamestudiohx::babylonhx::mesh::InstancedMesh instance = batch->visibleInstances->__get(instanceIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::InstancedMesh >();		HX_STACK_VAR(instance,"instance");
					HX_STACK_LINE(478)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _g22;		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(478)
					{
						HX_STACK_LINE(478)
						int _g12 = instance->_scene->getRenderId();		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(478)
						if (((instance->_currentRenderId != _g12))){
							HX_STACK_LINE(478)
							bool force = false;		HX_STACK_VAR(force,"force");
							HX_STACK_LINE(478)
							::com::gamestudiohx::babylonhx::tools::math::Matrix ret = instance->_worldMatrix;		HX_STACK_VAR(ret,"ret");
							struct _Function_6_1{
								inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh &instance){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",478,0xf4cec482)
									{
										HX_STACK_LINE(478)
										int _g13 = instance->_scene->getRenderId();		HX_STACK_VAR(_g13,"_g13");
										HX_STACK_LINE(478)
										return (  ((!(((instance->_currentRenderId == _g13))))) ? bool(instance->isSynchronized(null())) : bool(true) );
									}
									return null();
								}
							};
							HX_STACK_LINE(478)
							if (((  ((!(force))) ? bool(_Function_6_1::Block(instance)) : bool(false) ))){
								HX_STACK_LINE(478)
								instance->_childrenFlag = (int)0;
							}
							else{
								HX_STACK_LINE(478)
								instance->_childrenFlag = (int)1;
								HX_STACK_LINE(478)
								instance->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(instance->position);
								HX_STACK_LINE(478)
								instance->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(instance->scaling);
								HX_STACK_LINE(478)
								instance->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
								HX_STACK_LINE(478)
								int _g14 = instance->_scene->getRenderId();		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(478)
								instance->_currentRenderId = _g14;
								HX_STACK_LINE(478)
								{
									HX_STACK_LINE(478)
									::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localScaling;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(478)
									result->m[(int)0] = instance->scaling->x;
									HX_STACK_LINE(478)
									result->m[(int)1] = (int)0;
									HX_STACK_LINE(478)
									result->m[(int)2] = (int)0;
									HX_STACK_LINE(478)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(478)
									result->m[(int)4] = (int)0;
									HX_STACK_LINE(478)
									result->m[(int)5] = instance->scaling->y;
									HX_STACK_LINE(478)
									result->m[(int)6] = (int)0;
									HX_STACK_LINE(478)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(478)
									result->m[(int)8] = (int)0;
									HX_STACK_LINE(478)
									result->m[(int)9] = (int)0;
									HX_STACK_LINE(478)
									result->m[(int)10] = instance->scaling->z;
									HX_STACK_LINE(478)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(478)
									result->m[(int)12] = (int)0;
									HX_STACK_LINE(478)
									result->m[(int)13] = (int)0;
									HX_STACK_LINE(478)
									result->m[(int)14] = (int)0;
									HX_STACK_LINE(478)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(478)
									result;
								}
								HX_STACK_LINE(478)
								if (((instance->rotationQuaternion != null()))){
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = instance->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localRotation;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(478)
										Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
										HX_STACK_LINE(478)
										Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
										HX_STACK_LINE(478)
										Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
										HX_STACK_LINE(478)
										Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
										HX_STACK_LINE(478)
										Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
										HX_STACK_LINE(478)
										Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
										HX_STACK_LINE(478)
										Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
										HX_STACK_LINE(478)
										Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
										HX_STACK_LINE(478)
										Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
										HX_STACK_LINE(478)
										result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
										HX_STACK_LINE(478)
										result->m[(int)1] = (2.0 * ((xy + zw)));
										HX_STACK_LINE(478)
										result->m[(int)2] = (2.0 * ((zx - yw)));
										HX_STACK_LINE(478)
										result->m[(int)3] = (int)0;
										HX_STACK_LINE(478)
										result->m[(int)4] = (2.0 * ((xy - zw)));
										HX_STACK_LINE(478)
										result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
										HX_STACK_LINE(478)
										result->m[(int)6] = (2.0 * ((yz + xw)));
										HX_STACK_LINE(478)
										result->m[(int)7] = (int)0;
										HX_STACK_LINE(478)
										result->m[(int)8] = (2.0 * ((zx + yw)));
										HX_STACK_LINE(478)
										result->m[(int)9] = (2.0 * ((yz - xw)));
										HX_STACK_LINE(478)
										result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
										HX_STACK_LINE(478)
										result->m[(int)11] = (int)0;
										HX_STACK_LINE(478)
										result->m[(int)12] = (int)0;
										HX_STACK_LINE(478)
										result->m[(int)13] = (int)0;
										HX_STACK_LINE(478)
										result->m[(int)14] = (int)0;
										HX_STACK_LINE(478)
										result->m[(int)15] = 1.0;
										HX_STACK_LINE(478)
										result;
									}
									HX_STACK_LINE(478)
									instance->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(instance->rotationQuaternion);
								}
								else{
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localRotation;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Quaternion _g15;		HX_STACK_VAR(_g15,"_g15");
										HX_STACK_LINE(478)
										{
											HX_STACK_LINE(478)
											Float halfRoll = (instance->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
											HX_STACK_LINE(478)
											Float halfPitch = (instance->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
											HX_STACK_LINE(478)
											Float halfYaw = (instance->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
											HX_STACK_LINE(478)
											Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
											HX_STACK_LINE(478)
											Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
											HX_STACK_LINE(478)
											Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
											HX_STACK_LINE(478)
											Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
											HX_STACK_LINE(478)
											Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
											HX_STACK_LINE(478)
											Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
											HX_STACK_LINE(478)
											tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
											HX_STACK_LINE(478)
											tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
											HX_STACK_LINE(478)
											tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
											HX_STACK_LINE(478)
											tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
											HX_STACK_LINE(478)
											_g15 = tempQuaternion;
										}
										HX_STACK_LINE(478)
										tempQuaternion = _g15;
										HX_STACK_LINE(478)
										{
											HX_STACK_LINE(478)
											Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
											HX_STACK_LINE(478)
											Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
											HX_STACK_LINE(478)
											Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
											HX_STACK_LINE(478)
											Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
											HX_STACK_LINE(478)
											Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
											HX_STACK_LINE(478)
											Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
											HX_STACK_LINE(478)
											Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
											HX_STACK_LINE(478)
											Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
											HX_STACK_LINE(478)
											Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
											HX_STACK_LINE(478)
											result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
											HX_STACK_LINE(478)
											result->m[(int)1] = (2.0 * ((xy + zw)));
											HX_STACK_LINE(478)
											result->m[(int)2] = (2.0 * ((zx - yw)));
											HX_STACK_LINE(478)
											result->m[(int)3] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)4] = (2.0 * ((xy - zw)));
											HX_STACK_LINE(478)
											result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
											HX_STACK_LINE(478)
											result->m[(int)6] = (2.0 * ((yz + xw)));
											HX_STACK_LINE(478)
											result->m[(int)7] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)8] = (2.0 * ((zx + yw)));
											HX_STACK_LINE(478)
											result->m[(int)9] = (2.0 * ((yz - xw)));
											HX_STACK_LINE(478)
											result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
											HX_STACK_LINE(478)
											result->m[(int)11] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)12] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)13] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)14] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)15] = 1.0;
											HX_STACK_LINE(478)
											result;
										}
									}
									HX_STACK_LINE(478)
									instance->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(instance->rotation);
								}
								HX_STACK_LINE(478)
								if ((instance->infiniteDistance)){
									HX_STACK_LINE(478)
									::com::gamestudiohx::babylonhx::cameras::Camera camera = instance->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localTranslation;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(478)
										{
											HX_STACK_LINE(478)
											result->m[(int)0] = 1.0;
											HX_STACK_LINE(478)
											result->m[(int)1] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)2] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)3] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)4] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)5] = 1.0;
											HX_STACK_LINE(478)
											result->m[(int)6] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)7] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)8] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)9] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)10] = 1.0;
											HX_STACK_LINE(478)
											result->m[(int)11] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)12] = (instance->position->x + camera->position->x);
											HX_STACK_LINE(478)
											result->m[(int)13] = (instance->position->y + camera->position->y);
											HX_STACK_LINE(478)
											result->m[(int)14] = (instance->position->z + camera->position->z);
											HX_STACK_LINE(478)
											result->m[(int)15] = 1.0;
											HX_STACK_LINE(478)
											result;
										}
									}
								}
								else{
									HX_STACK_LINE(478)
									::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localTranslation;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										result->m[(int)0] = 1.0;
										HX_STACK_LINE(478)
										result->m[(int)1] = (int)0;
										HX_STACK_LINE(478)
										result->m[(int)2] = (int)0;
										HX_STACK_LINE(478)
										result->m[(int)3] = (int)0;
										HX_STACK_LINE(478)
										result->m[(int)4] = (int)0;
										HX_STACK_LINE(478)
										result->m[(int)5] = 1.0;
										HX_STACK_LINE(478)
										result->m[(int)6] = (int)0;
										HX_STACK_LINE(478)
										result->m[(int)7] = (int)0;
										HX_STACK_LINE(478)
										result->m[(int)8] = (int)0;
										HX_STACK_LINE(478)
										result->m[(int)9] = (int)0;
										HX_STACK_LINE(478)
										result->m[(int)10] = 1.0;
										HX_STACK_LINE(478)
										result->m[(int)11] = (int)0;
										HX_STACK_LINE(478)
										result->m[(int)12] = instance->position->x;
										HX_STACK_LINE(478)
										result->m[(int)13] = instance->position->y;
										HX_STACK_LINE(478)
										result->m[(int)14] = instance->position->z;
										HX_STACK_LINE(478)
										result->m[(int)15] = 1.0;
										HX_STACK_LINE(478)
										result;
									}
								}
								HX_STACK_LINE(478)
								{
									HX_STACK_LINE(478)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(478)
									::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localScaling;		HX_STACK_VAR(other,"other");
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										Array< Float > result = instance->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(478)
										Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
										HX_STACK_LINE(478)
										Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
										HX_STACK_LINE(478)
										Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
										HX_STACK_LINE(478)
										Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
										HX_STACK_LINE(478)
										Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
										HX_STACK_LINE(478)
										Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
										HX_STACK_LINE(478)
										Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
										HX_STACK_LINE(478)
										Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
										HX_STACK_LINE(478)
										Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
										HX_STACK_LINE(478)
										Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
										HX_STACK_LINE(478)
										Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
										HX_STACK_LINE(478)
										Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
										HX_STACK_LINE(478)
										Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
										HX_STACK_LINE(478)
										Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
										HX_STACK_LINE(478)
										Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
										HX_STACK_LINE(478)
										Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
										HX_STACK_LINE(478)
										Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
										HX_STACK_LINE(478)
										Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
										HX_STACK_LINE(478)
										Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
										HX_STACK_LINE(478)
										Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
										HX_STACK_LINE(478)
										Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
										HX_STACK_LINE(478)
										Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
										HX_STACK_LINE(478)
										Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
										HX_STACK_LINE(478)
										Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
										HX_STACK_LINE(478)
										Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
										HX_STACK_LINE(478)
										Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
										HX_STACK_LINE(478)
										Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
										HX_STACK_LINE(478)
										Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
										HX_STACK_LINE(478)
										Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
										HX_STACK_LINE(478)
										Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
										HX_STACK_LINE(478)
										Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
										HX_STACK_LINE(478)
										Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
										HX_STACK_LINE(478)
										result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
										HX_STACK_LINE(478)
										result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
										HX_STACK_LINE(478)
										result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
										HX_STACK_LINE(478)
										result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
										HX_STACK_LINE(478)
										result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
										HX_STACK_LINE(478)
										result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
										HX_STACK_LINE(478)
										result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
										HX_STACK_LINE(478)
										result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
										HX_STACK_LINE(478)
										result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
										HX_STACK_LINE(478)
										result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
										HX_STACK_LINE(478)
										result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
										HX_STACK_LINE(478)
										result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
										HX_STACK_LINE(478)
										result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
										HX_STACK_LINE(478)
										result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
										HX_STACK_LINE(478)
										result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
										HX_STACK_LINE(478)
										result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
										HX_STACK_LINE(478)
										result;
									}
								}
								HX_STACK_LINE(478)
								{
									HX_STACK_LINE(478)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(478)
									::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localRotation;		HX_STACK_VAR(other,"other");
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										Array< Float > result = instance->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(478)
										Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
										HX_STACK_LINE(478)
										Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
										HX_STACK_LINE(478)
										Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
										HX_STACK_LINE(478)
										Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
										HX_STACK_LINE(478)
										Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
										HX_STACK_LINE(478)
										Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
										HX_STACK_LINE(478)
										Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
										HX_STACK_LINE(478)
										Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
										HX_STACK_LINE(478)
										Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
										HX_STACK_LINE(478)
										Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
										HX_STACK_LINE(478)
										Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
										HX_STACK_LINE(478)
										Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
										HX_STACK_LINE(478)
										Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
										HX_STACK_LINE(478)
										Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
										HX_STACK_LINE(478)
										Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
										HX_STACK_LINE(478)
										Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
										HX_STACK_LINE(478)
										Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
										HX_STACK_LINE(478)
										Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
										HX_STACK_LINE(478)
										Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
										HX_STACK_LINE(478)
										Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
										HX_STACK_LINE(478)
										Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
										HX_STACK_LINE(478)
										Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
										HX_STACK_LINE(478)
										Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
										HX_STACK_LINE(478)
										Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
										HX_STACK_LINE(478)
										Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
										HX_STACK_LINE(478)
										Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
										HX_STACK_LINE(478)
										Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
										HX_STACK_LINE(478)
										Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
										HX_STACK_LINE(478)
										Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
										HX_STACK_LINE(478)
										Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
										HX_STACK_LINE(478)
										Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
										HX_STACK_LINE(478)
										Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
										HX_STACK_LINE(478)
										result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
										HX_STACK_LINE(478)
										result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
										HX_STACK_LINE(478)
										result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
										HX_STACK_LINE(478)
										result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
										HX_STACK_LINE(478)
										result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
										HX_STACK_LINE(478)
										result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
										HX_STACK_LINE(478)
										result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
										HX_STACK_LINE(478)
										result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
										HX_STACK_LINE(478)
										result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
										HX_STACK_LINE(478)
										result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
										HX_STACK_LINE(478)
										result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
										HX_STACK_LINE(478)
										result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
										HX_STACK_LINE(478)
										result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
										HX_STACK_LINE(478)
										result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
										HX_STACK_LINE(478)
										result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
										HX_STACK_LINE(478)
										result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
										HX_STACK_LINE(478)
										result;
									}
								}
								HX_STACK_LINE(478)
								if (((instance->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
									HX_STACK_LINE(478)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = instance->position;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(478)
										localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
									}
									HX_STACK_LINE(478)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = instance->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(478)
										zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
									}
									HX_STACK_LINE(478)
									if (((bool((instance->parent != null())) && bool((instance->parent->position != null()))))){
										HX_STACK_LINE(478)
										{
											HX_STACK_LINE(478)
											::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = instance->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
											HX_STACK_LINE(478)
											hx::AddEq(localPosition->x,otherVector->x);
											HX_STACK_LINE(478)
											hx::AddEq(localPosition->y,otherVector->y);
											HX_STACK_LINE(478)
											hx::AddEq(localPosition->z,otherVector->z);
										}
										HX_STACK_LINE(478)
										{
											HX_STACK_LINE(478)
											::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localTranslation;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(478)
											{
												HX_STACK_LINE(478)
												result->m[(int)0] = 1.0;
												HX_STACK_LINE(478)
												result->m[(int)1] = (int)0;
												HX_STACK_LINE(478)
												result->m[(int)2] = (int)0;
												HX_STACK_LINE(478)
												result->m[(int)3] = (int)0;
												HX_STACK_LINE(478)
												result->m[(int)4] = (int)0;
												HX_STACK_LINE(478)
												result->m[(int)5] = 1.0;
												HX_STACK_LINE(478)
												result->m[(int)6] = (int)0;
												HX_STACK_LINE(478)
												result->m[(int)7] = (int)0;
												HX_STACK_LINE(478)
												result->m[(int)8] = (int)0;
												HX_STACK_LINE(478)
												result->m[(int)9] = (int)0;
												HX_STACK_LINE(478)
												result->m[(int)10] = 1.0;
												HX_STACK_LINE(478)
												result->m[(int)11] = (int)0;
												HX_STACK_LINE(478)
												result->m[(int)12] = localPosition->x;
												HX_STACK_LINE(478)
												result->m[(int)13] = localPosition->y;
												HX_STACK_LINE(478)
												result->m[(int)14] = localPosition->z;
												HX_STACK_LINE(478)
												result->m[(int)15] = 1.0;
												HX_STACK_LINE(478)
												result;
											}
										}
									}
									HX_STACK_LINE(478)
									if (((((int(instance->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
										HX_STACK_LINE(478)
										zero = instance->_scene->activeCamera->position;
									}
									else{
										HX_STACK_LINE(478)
										if (((((int(instance->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
											HX_STACK_LINE(478)
											zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
										}
										HX_STACK_LINE(478)
										if (((((int(instance->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
											HX_STACK_LINE(478)
											zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
										}
										HX_STACK_LINE(478)
										if (((((int(instance->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
											HX_STACK_LINE(478)
											zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
										}
									}
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Matrix result = instance->_localBillboard;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
										HX_STACK_LINE(478)
										{
											HX_STACK_LINE(478)
											zAxis->x = (zero->x - localPosition->x);
											HX_STACK_LINE(478)
											zAxis->y = (zero->y - localPosition->y);
											HX_STACK_LINE(478)
											zAxis->z = (zero->z - localPosition->z);
										}
										HX_STACK_LINE(478)
										{
											HX_STACK_LINE(478)
											Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(478)
											if (((len != (int)0))){
												HX_STACK_LINE(478)
												Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(478)
												hx::MultEq(zAxis->x,num);
												HX_STACK_LINE(478)
												hx::MultEq(zAxis->y,num);
												HX_STACK_LINE(478)
												hx::MultEq(zAxis->z,num);
											}
										}
										HX_STACK_LINE(478)
										{
											HX_STACK_LINE(478)
											xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
											HX_STACK_LINE(478)
											xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
											HX_STACK_LINE(478)
											xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
										}
										HX_STACK_LINE(478)
										{
											HX_STACK_LINE(478)
											Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(478)
											if (((len != (int)0))){
												HX_STACK_LINE(478)
												Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(478)
												hx::MultEq(xAxis->x,num);
												HX_STACK_LINE(478)
												hx::MultEq(xAxis->y,num);
												HX_STACK_LINE(478)
												hx::MultEq(xAxis->z,num);
											}
										}
										HX_STACK_LINE(478)
										{
											HX_STACK_LINE(478)
											yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
											HX_STACK_LINE(478)
											yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
											HX_STACK_LINE(478)
											yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
										}
										HX_STACK_LINE(478)
										{
											HX_STACK_LINE(478)
											Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(478)
											if (((len != (int)0))){
												HX_STACK_LINE(478)
												Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
												HX_STACK_LINE(478)
												hx::MultEq(yAxis->x,num);
												HX_STACK_LINE(478)
												hx::MultEq(yAxis->y,num);
												HX_STACK_LINE(478)
												hx::MultEq(yAxis->z,num);
											}
										}
										HX_STACK_LINE(478)
										Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
										HX_STACK_LINE(478)
										Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
										HX_STACK_LINE(478)
										Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
										HX_STACK_LINE(478)
										{
											HX_STACK_LINE(478)
											result->m[(int)0] = xAxis->x;
											HX_STACK_LINE(478)
											result->m[(int)1] = yAxis->x;
											HX_STACK_LINE(478)
											result->m[(int)2] = zAxis->x;
											HX_STACK_LINE(478)
											result->m[(int)3] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)4] = xAxis->y;
											HX_STACK_LINE(478)
											result->m[(int)5] = yAxis->y;
											HX_STACK_LINE(478)
											result->m[(int)6] = zAxis->y;
											HX_STACK_LINE(478)
											result->m[(int)7] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)8] = xAxis->z;
											HX_STACK_LINE(478)
											result->m[(int)9] = yAxis->z;
											HX_STACK_LINE(478)
											result->m[(int)10] = zAxis->z;
											HX_STACK_LINE(478)
											result->m[(int)11] = (int)0;
											HX_STACK_LINE(478)
											result->m[(int)12] = ex;
											HX_STACK_LINE(478)
											result->m[(int)13] = ey;
											HX_STACK_LINE(478)
											result->m[(int)14] = ez;
											HX_STACK_LINE(478)
											result->m[(int)15] = (int)1;
											HX_STACK_LINE(478)
											result;
										}
									}
									HX_STACK_LINE(478)
									instance->_localBillboard->m[(int)12] = instance->_localBillboard->m[(int)13] = instance->_localBillboard->m[(int)14] = (int)0;
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localBillboard;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(478)
										{
											HX_STACK_LINE(478)
											Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
											HX_STACK_LINE(478)
											Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
											HX_STACK_LINE(478)
											Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
											HX_STACK_LINE(478)
											Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
											HX_STACK_LINE(478)
											Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
											HX_STACK_LINE(478)
											Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
											HX_STACK_LINE(478)
											Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
											HX_STACK_LINE(478)
											Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
											HX_STACK_LINE(478)
											Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
											HX_STACK_LINE(478)
											Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
											HX_STACK_LINE(478)
											Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
											HX_STACK_LINE(478)
											Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
											HX_STACK_LINE(478)
											Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
											HX_STACK_LINE(478)
											Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
											HX_STACK_LINE(478)
											Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
											HX_STACK_LINE(478)
											Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
											HX_STACK_LINE(478)
											Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
											HX_STACK_LINE(478)
											Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
											HX_STACK_LINE(478)
											Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
											HX_STACK_LINE(478)
											Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
											HX_STACK_LINE(478)
											Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
											HX_STACK_LINE(478)
											Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
											HX_STACK_LINE(478)
											Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
											HX_STACK_LINE(478)
											Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
											HX_STACK_LINE(478)
											Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
											HX_STACK_LINE(478)
											Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
											HX_STACK_LINE(478)
											Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
											HX_STACK_LINE(478)
											Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
											HX_STACK_LINE(478)
											Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
											HX_STACK_LINE(478)
											Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
											HX_STACK_LINE(478)
											Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
											HX_STACK_LINE(478)
											Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
											HX_STACK_LINE(478)
											Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
											HX_STACK_LINE(478)
											Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
											HX_STACK_LINE(478)
											Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
											HX_STACK_LINE(478)
											Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
											HX_STACK_LINE(478)
											Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
											HX_STACK_LINE(478)
											Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
											HX_STACK_LINE(478)
											Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
											HX_STACK_LINE(478)
											_this->m[(int)0] = (l23 * l27);
											HX_STACK_LINE(478)
											_this->m[(int)4] = (l24 * l27);
											HX_STACK_LINE(478)
											_this->m[(int)8] = (l25 * l27);
											HX_STACK_LINE(478)
											_this->m[(int)12] = (l26 * l27);
											HX_STACK_LINE(478)
											_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
											HX_STACK_LINE(478)
											_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
											HX_STACK_LINE(478)
											_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
											HX_STACK_LINE(478)
											_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
											HX_STACK_LINE(478)
											_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
											HX_STACK_LINE(478)
											_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
											HX_STACK_LINE(478)
											_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
											HX_STACK_LINE(478)
											_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
											HX_STACK_LINE(478)
											_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
											HX_STACK_LINE(478)
											_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
											HX_STACK_LINE(478)
											_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
											HX_STACK_LINE(478)
											_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
										}
									}
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localBillboard;		HX_STACK_VAR(other,"other");
										HX_STACK_LINE(478)
										{
											HX_STACK_LINE(478)
											Array< Float > result = instance->_localWorld->m;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(478)
											Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
											HX_STACK_LINE(478)
											Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
											HX_STACK_LINE(478)
											Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
											HX_STACK_LINE(478)
											Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
											HX_STACK_LINE(478)
											Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
											HX_STACK_LINE(478)
											Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
											HX_STACK_LINE(478)
											Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
											HX_STACK_LINE(478)
											Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
											HX_STACK_LINE(478)
											Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
											HX_STACK_LINE(478)
											Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
											HX_STACK_LINE(478)
											Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
											HX_STACK_LINE(478)
											Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
											HX_STACK_LINE(478)
											Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
											HX_STACK_LINE(478)
											Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
											HX_STACK_LINE(478)
											Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
											HX_STACK_LINE(478)
											Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
											HX_STACK_LINE(478)
											Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
											HX_STACK_LINE(478)
											Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
											HX_STACK_LINE(478)
											Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
											HX_STACK_LINE(478)
											Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
											HX_STACK_LINE(478)
											Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
											HX_STACK_LINE(478)
											Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
											HX_STACK_LINE(478)
											Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
											HX_STACK_LINE(478)
											Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
											HX_STACK_LINE(478)
											Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
											HX_STACK_LINE(478)
											Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
											HX_STACK_LINE(478)
											Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
											HX_STACK_LINE(478)
											Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
											HX_STACK_LINE(478)
											Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
											HX_STACK_LINE(478)
											Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
											HX_STACK_LINE(478)
											Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
											HX_STACK_LINE(478)
											Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
											HX_STACK_LINE(478)
											result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
											HX_STACK_LINE(478)
											result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
											HX_STACK_LINE(478)
											result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
											HX_STACK_LINE(478)
											result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
											HX_STACK_LINE(478)
											result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
											HX_STACK_LINE(478)
											result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
											HX_STACK_LINE(478)
											result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
											HX_STACK_LINE(478)
											result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
											HX_STACK_LINE(478)
											result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
											HX_STACK_LINE(478)
											result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
											HX_STACK_LINE(478)
											result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
											HX_STACK_LINE(478)
											result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
											HX_STACK_LINE(478)
											result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
											HX_STACK_LINE(478)
											result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
											HX_STACK_LINE(478)
											result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
											HX_STACK_LINE(478)
											result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
											HX_STACK_LINE(478)
											result;
										}
									}
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localWorld;		HX_STACK_VAR(other,"other");
										HX_STACK_LINE(478)
										{
											HX_STACK_LINE(478)
											Array< Float > result = instance->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(478)
											Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
											HX_STACK_LINE(478)
											Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
											HX_STACK_LINE(478)
											Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
											HX_STACK_LINE(478)
											Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
											HX_STACK_LINE(478)
											Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
											HX_STACK_LINE(478)
											Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
											HX_STACK_LINE(478)
											Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
											HX_STACK_LINE(478)
											Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
											HX_STACK_LINE(478)
											Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
											HX_STACK_LINE(478)
											Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
											HX_STACK_LINE(478)
											Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
											HX_STACK_LINE(478)
											Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
											HX_STACK_LINE(478)
											Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
											HX_STACK_LINE(478)
											Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
											HX_STACK_LINE(478)
											Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
											HX_STACK_LINE(478)
											Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
											HX_STACK_LINE(478)
											Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
											HX_STACK_LINE(478)
											Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
											HX_STACK_LINE(478)
											Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
											HX_STACK_LINE(478)
											Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
											HX_STACK_LINE(478)
											Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
											HX_STACK_LINE(478)
											Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
											HX_STACK_LINE(478)
											Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
											HX_STACK_LINE(478)
											Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
											HX_STACK_LINE(478)
											Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
											HX_STACK_LINE(478)
											Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
											HX_STACK_LINE(478)
											Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
											HX_STACK_LINE(478)
											Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
											HX_STACK_LINE(478)
											Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
											HX_STACK_LINE(478)
											Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
											HX_STACK_LINE(478)
											Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
											HX_STACK_LINE(478)
											Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
											HX_STACK_LINE(478)
											result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
											HX_STACK_LINE(478)
											result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
											HX_STACK_LINE(478)
											result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
											HX_STACK_LINE(478)
											result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
											HX_STACK_LINE(478)
											result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
											HX_STACK_LINE(478)
											result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
											HX_STACK_LINE(478)
											result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
											HX_STACK_LINE(478)
											result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
											HX_STACK_LINE(478)
											result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
											HX_STACK_LINE(478)
											result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
											HX_STACK_LINE(478)
											result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
											HX_STACK_LINE(478)
											result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
											HX_STACK_LINE(478)
											result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
											HX_STACK_LINE(478)
											result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
											HX_STACK_LINE(478)
											result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
											HX_STACK_LINE(478)
											result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
											HX_STACK_LINE(478)
											result;
										}
									}
								}
								struct _Function_7_1{
									inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh &instance){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",478,0xf4cec482)
										{
											HX_STACK_LINE(478)
											::com::gamestudiohx::babylonhx::tools::math::Matrix _g16 = instance->parent->getWorldMatrix();		HX_STACK_VAR(_g16,"_g16");
											HX_STACK_LINE(478)
											return (_g16 != null());
										}
										return null();
									}
								};
								HX_STACK_LINE(478)
								if (((  (((  (((instance->parent != null()))) ? bool(_Function_7_1::Block(instance)) : bool(false) ))) ? bool((instance->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localTranslation;		HX_STACK_VAR(other,"other");
										HX_STACK_LINE(478)
										{
											HX_STACK_LINE(478)
											Array< Float > result = instance->_localWorld->m;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(478)
											Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
											HX_STACK_LINE(478)
											Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
											HX_STACK_LINE(478)
											Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
											HX_STACK_LINE(478)
											Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
											HX_STACK_LINE(478)
											Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
											HX_STACK_LINE(478)
											Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
											HX_STACK_LINE(478)
											Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
											HX_STACK_LINE(478)
											Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
											HX_STACK_LINE(478)
											Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
											HX_STACK_LINE(478)
											Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
											HX_STACK_LINE(478)
											Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
											HX_STACK_LINE(478)
											Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
											HX_STACK_LINE(478)
											Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
											HX_STACK_LINE(478)
											Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
											HX_STACK_LINE(478)
											Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
											HX_STACK_LINE(478)
											Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
											HX_STACK_LINE(478)
											Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
											HX_STACK_LINE(478)
											Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
											HX_STACK_LINE(478)
											Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
											HX_STACK_LINE(478)
											Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
											HX_STACK_LINE(478)
											Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
											HX_STACK_LINE(478)
											Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
											HX_STACK_LINE(478)
											Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
											HX_STACK_LINE(478)
											Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
											HX_STACK_LINE(478)
											Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
											HX_STACK_LINE(478)
											Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
											HX_STACK_LINE(478)
											Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
											HX_STACK_LINE(478)
											Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
											HX_STACK_LINE(478)
											Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
											HX_STACK_LINE(478)
											Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
											HX_STACK_LINE(478)
											Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
											HX_STACK_LINE(478)
											Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
											HX_STACK_LINE(478)
											result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
											HX_STACK_LINE(478)
											result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
											HX_STACK_LINE(478)
											result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
											HX_STACK_LINE(478)
											result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
											HX_STACK_LINE(478)
											result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
											HX_STACK_LINE(478)
											result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
											HX_STACK_LINE(478)
											result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
											HX_STACK_LINE(478)
											result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
											HX_STACK_LINE(478)
											result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
											HX_STACK_LINE(478)
											result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
											HX_STACK_LINE(478)
											result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
											HX_STACK_LINE(478)
											result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
											HX_STACK_LINE(478)
											result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
											HX_STACK_LINE(478)
											result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
											HX_STACK_LINE(478)
											result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
											HX_STACK_LINE(478)
											result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
											HX_STACK_LINE(478)
											result;
										}
									}
									HX_STACK_LINE(478)
									::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = instance->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localWorld;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(478)
										{
											HX_STACK_LINE(478)
											Array< Float > result = instance->_worldMatrix->m;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(478)
											Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
											HX_STACK_LINE(478)
											Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
											HX_STACK_LINE(478)
											Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
											HX_STACK_LINE(478)
											Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
											HX_STACK_LINE(478)
											Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
											HX_STACK_LINE(478)
											Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
											HX_STACK_LINE(478)
											Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
											HX_STACK_LINE(478)
											Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
											HX_STACK_LINE(478)
											Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
											HX_STACK_LINE(478)
											Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
											HX_STACK_LINE(478)
											Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
											HX_STACK_LINE(478)
											Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
											HX_STACK_LINE(478)
											Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
											HX_STACK_LINE(478)
											Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
											HX_STACK_LINE(478)
											Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
											HX_STACK_LINE(478)
											Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
											HX_STACK_LINE(478)
											Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
											HX_STACK_LINE(478)
											Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
											HX_STACK_LINE(478)
											Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
											HX_STACK_LINE(478)
											Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
											HX_STACK_LINE(478)
											Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
											HX_STACK_LINE(478)
											Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
											HX_STACK_LINE(478)
											Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
											HX_STACK_LINE(478)
											Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
											HX_STACK_LINE(478)
											Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
											HX_STACK_LINE(478)
											Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
											HX_STACK_LINE(478)
											Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
											HX_STACK_LINE(478)
											Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
											HX_STACK_LINE(478)
											Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
											HX_STACK_LINE(478)
											Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
											HX_STACK_LINE(478)
											Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
											HX_STACK_LINE(478)
											Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
											HX_STACK_LINE(478)
											result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
											HX_STACK_LINE(478)
											result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
											HX_STACK_LINE(478)
											result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
											HX_STACK_LINE(478)
											result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
											HX_STACK_LINE(478)
											result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
											HX_STACK_LINE(478)
											result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
											HX_STACK_LINE(478)
											result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
											HX_STACK_LINE(478)
											result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
											HX_STACK_LINE(478)
											result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
											HX_STACK_LINE(478)
											result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
											HX_STACK_LINE(478)
											result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
											HX_STACK_LINE(478)
											result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
											HX_STACK_LINE(478)
											result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
											HX_STACK_LINE(478)
											result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
											HX_STACK_LINE(478)
											result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
											HX_STACK_LINE(478)
											result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
											HX_STACK_LINE(478)
											result;
										}
									}
								}
								else{
									HX_STACK_LINE(478)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _this = instance->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(478)
									::com::gamestudiohx::babylonhx::tools::math::Matrix other = instance->_localTranslation;		HX_STACK_VAR(other,"other");
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										Array< Float > result = instance->_worldMatrix->m;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(478)
										Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
										HX_STACK_LINE(478)
										Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
										HX_STACK_LINE(478)
										Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
										HX_STACK_LINE(478)
										Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
										HX_STACK_LINE(478)
										Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
										HX_STACK_LINE(478)
										Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
										HX_STACK_LINE(478)
										Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
										HX_STACK_LINE(478)
										Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
										HX_STACK_LINE(478)
										Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
										HX_STACK_LINE(478)
										Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
										HX_STACK_LINE(478)
										Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
										HX_STACK_LINE(478)
										Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
										HX_STACK_LINE(478)
										Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
										HX_STACK_LINE(478)
										Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
										HX_STACK_LINE(478)
										Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
										HX_STACK_LINE(478)
										Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
										HX_STACK_LINE(478)
										Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
										HX_STACK_LINE(478)
										Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
										HX_STACK_LINE(478)
										Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
										HX_STACK_LINE(478)
										Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
										HX_STACK_LINE(478)
										Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
										HX_STACK_LINE(478)
										Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
										HX_STACK_LINE(478)
										Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
										HX_STACK_LINE(478)
										Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
										HX_STACK_LINE(478)
										Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
										HX_STACK_LINE(478)
										Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
										HX_STACK_LINE(478)
										Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
										HX_STACK_LINE(478)
										Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
										HX_STACK_LINE(478)
										Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
										HX_STACK_LINE(478)
										Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
										HX_STACK_LINE(478)
										Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
										HX_STACK_LINE(478)
										Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
										HX_STACK_LINE(478)
										result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
										HX_STACK_LINE(478)
										result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
										HX_STACK_LINE(478)
										result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
										HX_STACK_LINE(478)
										result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
										HX_STACK_LINE(478)
										result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
										HX_STACK_LINE(478)
										result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
										HX_STACK_LINE(478)
										result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
										HX_STACK_LINE(478)
										result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
										HX_STACK_LINE(478)
										result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
										HX_STACK_LINE(478)
										result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
										HX_STACK_LINE(478)
										result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
										HX_STACK_LINE(478)
										result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
										HX_STACK_LINE(478)
										result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
										HX_STACK_LINE(478)
										result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
										HX_STACK_LINE(478)
										result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
										HX_STACK_LINE(478)
										result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
										HX_STACK_LINE(478)
										result;
									}
								}
								HX_STACK_LINE(478)
								if (((instance->_boundingInfo != null()))){
									HX_STACK_LINE(478)
									Float _g17 = ::Math_obj::max(instance->scaling->x,instance->scaling->y);		HX_STACK_VAR(_g17,"_g17");
									HX_STACK_LINE(478)
									instance->_scaleFactor = _g17;
									HX_STACK_LINE(478)
									Float _g18 = ::Math_obj::max(instance->_scaleFactor,instance->scaling->z);		HX_STACK_VAR(_g18,"_g18");
									HX_STACK_LINE(478)
									instance->_scaleFactor = _g18;
									struct _Function_8_1{
										inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh &instance){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",478,0xf4cec482)
											{
												HX_STACK_LINE(478)
												Dynamic _g19 = ::Reflect_obj::field(instance->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g19,"_g19");
												HX_STACK_LINE(478)
												return (_g19 != null());
											}
											return null();
										}
									};
									HX_STACK_LINE(478)
									if (((  (((instance->parent != null()))) ? bool(_Function_8_1::Block(instance)) : bool(false) ))){
										HX_STACK_LINE(478)
										Dynamic _g20 = ::Reflect_obj::field(instance->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g20,"_g20");
										HX_STACK_LINE(478)
										Float _g21 = (instance->_scaleFactor * _g20);		HX_STACK_VAR(_g21,"_g21");
										HX_STACK_LINE(478)
										instance->_scaleFactor = _g21;
									}
									HX_STACK_LINE(478)
									instance->_boundingInfo->_update(instance->_worldMatrix,instance->_scaleFactor);
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(478)
										int _g = instance->subMeshes->length;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(478)
										while((true)){
											HX_STACK_LINE(478)
											if ((!(((_g1 < _g))))){
												HX_STACK_LINE(478)
												break;
											}
											HX_STACK_LINE(478)
											int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
											HX_STACK_LINE(478)
											::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh1 = instance->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh1,"subMesh1");
											HX_STACK_LINE(478)
											subMesh1->_boundingInfo->_update(instance->_worldMatrix,instance->_scaleFactor);
										}
									}
								}
								HX_STACK_LINE(478)
								{
									HX_STACK_LINE(478)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = instance->_absolutePosition;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(478)
									_this->x = instance->_worldMatrix->m->__get((int)12);
									HX_STACK_LINE(478)
									_this->y = instance->_worldMatrix->m->__get((int)13);
									HX_STACK_LINE(478)
									_this->z = instance->_worldMatrix->m->__get((int)14);
								}
								HX_STACK_LINE(478)
								ret = instance->_worldMatrix;
							}
							HX_STACK_LINE(478)
							ret;
						}
						HX_STACK_LINE(478)
						_g22 = instance->_worldMatrix;
					}
					HX_STACK_LINE(478)
					world = _g22;
					HX_STACK_LINE(479)
					effectiveMaterial->__Field(HX_CSTRING("bindOnlyWorldMatrix"),true)(world);
					HX_STACK_LINE(482)
					this->_draw(subMesh,!(wireFrame),null());
					HX_STACK_LINE(483)
					(instanceIndex)++;
				}
			}
		}
		HX_STACK_LINE(489)
		effectiveMaterial->__Field(HX_CSTRING("unbind"),true)();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,render,(void))

Array< ::Dynamic > Mesh_obj::getEmittedParticleSystems( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","getEmittedParticleSystems",0x5762fc82,"com.gamestudiohx.babylonhx.mesh.Mesh.getEmittedParticleSystems","com/gamestudiohx/babylonhx/mesh/Mesh.hx",492,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(493)
	Array< ::Dynamic > results = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(496)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(497)
	while((true)){
		HX_STACK_LINE(497)
		if ((!(((index < this->getScene()->particleSystems->length))))){
			HX_STACK_LINE(497)
			break;
		}
		HX_STACK_LINE(498)
		::com::gamestudiohx::babylonhx::particles::ParticleSystem particleSystem = this->getScene()->particleSystems->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::particles::ParticleSystem >();		HX_STACK_VAR(particleSystem,"particleSystem");
		HX_STACK_LINE(499)
		if (((particleSystem->emitter == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(500)
			results->push(particleSystem);
		}
		HX_STACK_LINE(502)
		(index)++;
	}
	HX_STACK_LINE(506)
	return results;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getEmittedParticleSystems,return )

Array< ::Dynamic > Mesh_obj::getHierarchyEmittedParticleSystems( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","getHierarchyEmittedParticleSystems",0xfc3f6b4f,"com.gamestudiohx.babylonhx.mesh.Mesh.getHierarchyEmittedParticleSystems","com/gamestudiohx/babylonhx/mesh/Mesh.hx",509,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(510)
	Array< ::Dynamic > results = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(511)
	Array< ::Dynamic > descendants = this->getDescendants();		HX_STACK_VAR(descendants,"descendants");
	HX_STACK_LINE(512)
	descendants->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(515)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(516)
	while((true)){
		HX_STACK_LINE(516)
		if ((!(((index < this->getScene()->particleSystems->length))))){
			HX_STACK_LINE(516)
			break;
		}
		HX_STACK_LINE(517)
		::com::gamestudiohx::babylonhx::particles::ParticleSystem particleSystem = this->getScene()->particleSystems->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::particles::ParticleSystem >();		HX_STACK_VAR(particleSystem,"particleSystem");
		HX_STACK_LINE(518)
		int _g = descendants->indexOf(particleSystem->emitter,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(518)
		if (((_g != (int)-1))){
			HX_STACK_LINE(519)
			results->push(particleSystem);
		}
		HX_STACK_LINE(521)
		(index)++;
	}
	HX_STACK_LINE(525)
	return results;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getHierarchyEmittedParticleSystems,return )

Array< ::Dynamic > Mesh_obj::getChildren( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","getChildren",0xe4b6df43,"com.gamestudiohx.babylonhx.mesh.Mesh.getChildren","com/gamestudiohx/babylonhx/mesh/Mesh.hx",528,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(529)
	Array< ::Dynamic > results = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(532)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(533)
	while((true)){
		HX_STACK_LINE(533)
		if ((!(((index < this->getScene()->meshes->length))))){
			HX_STACK_LINE(533)
			break;
		}
		HX_STACK_LINE(534)
		::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh = this->getScene()->meshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >();		HX_STACK_VAR(mesh,"mesh");
		HX_STACK_LINE(535)
		if (((mesh->parent == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(536)
			results->push(mesh);
		}
		HX_STACK_LINE(538)
		(index)++;
	}
	HX_STACK_LINE(542)
	return results;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getChildren,return )

Void Mesh_obj::_checkDelayState( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","_checkDelayState",0x66d1dee9,"com.gamestudiohx.babylonhx.mesh.Mesh._checkDelayState","com/gamestudiohx/babylonhx/mesh/Mesh.hx",545,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(546)
		::com::gamestudiohx::babylonhx::mesh::Mesh that = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(that,"that");
		HX_STACK_LINE(547)
		::com::gamestudiohx::babylonhx::Scene scene = this->getScene();		HX_STACK_VAR(scene,"scene");
		HX_STACK_LINE(548)
		if (((this->_geometry != null()))){
			HX_STACK_LINE(549)
			this->_geometry->load(scene,null());
		}
		else{
			HX_STACK_LINE(551)
			if (((that->delayLoadState == ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_NOTLOADED))){
				HX_STACK_LINE(552)
				that->delayLoadState = ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_LOADING;
				HX_STACK_LINE(554)
				scene->_addPendingData(that);
				HX_STACK_LINE(563)
				::com::gamestudiohx::babylonhx::tools::Tools_obj::LoadFile(this->_delayLoadingFunction,null(),null(),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,_checkDelayState,(void))

bool Mesh_obj::isInFrustum( Array< ::Dynamic > frustumPlanes){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","isInFrustum",0xe3564401,"com.gamestudiohx.babylonhx.mesh.Mesh.isInFrustum","com/gamestudiohx/babylonhx/mesh/Mesh.hx",578,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frustumPlanes,"frustumPlanes")
	HX_STACK_LINE(579)
	if (((this->delayLoadState == ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_LOADING))){
		HX_STACK_LINE(580)
		return false;
	}
	HX_STACK_LINE(583)
	if ((!(this->super::isInFrustum(frustumPlanes)))){
		HX_STACK_LINE(584)
		return false;
	}
	HX_STACK_LINE(587)
	this->_checkDelayState();
	HX_STACK_LINE(589)
	return true;
}


Void Mesh_obj::setMaterialByID( ::String id){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","setMaterialByID",0x02f7f6c9,"com.gamestudiohx.babylonhx.mesh.Mesh.setMaterialByID","com/gamestudiohx/babylonhx/mesh/Mesh.hx",592,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(593)
		Array< ::Dynamic > materials = this->getScene()->materials;		HX_STACK_VAR(materials,"materials");
		HX_STACK_LINE(596)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(597)
		while((true)){
			HX_STACK_LINE(597)
			if ((!(((index < materials->length))))){
				HX_STACK_LINE(597)
				break;
			}
			HX_STACK_LINE(598)
			if (((materials->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::materials::Material >()->id == id))){
				HX_STACK_LINE(599)
				this->material = materials->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::materials::Material >();
				HX_STACK_LINE(600)
				return null();
			}
			HX_STACK_LINE(602)
			(index)++;
		}
		HX_STACK_LINE(607)
		Array< ::Dynamic > multiMaterials = this->getScene()->multiMaterials;		HX_STACK_VAR(multiMaterials,"multiMaterials");
		HX_STACK_LINE(610)
		index = (int)0;
		HX_STACK_LINE(611)
		while((true)){
			HX_STACK_LINE(611)
			if ((!(((index < multiMaterials->length))))){
				HX_STACK_LINE(611)
				break;
			}
			HX_STACK_LINE(612)
			if (((multiMaterials->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::materials::MultiMaterial >()->id == id))){
				HX_STACK_LINE(613)
				this->material = multiMaterials->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::materials::MultiMaterial >();
				HX_STACK_LINE(614)
				return null();
			}
			HX_STACK_LINE(616)
			(index)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,setMaterialByID,(void))

Array< ::com::gamestudiohx::babylonhx::tools::IAnimatable > Mesh_obj::getAnimatables( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","getAnimatables",0xb7dbf651,"com.gamestudiohx.babylonhx.mesh.Mesh.getAnimatables","com/gamestudiohx/babylonhx/mesh/Mesh.hx",621,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(622)
	Array< ::com::gamestudiohx::babylonhx::tools::IAnimatable > results = Array_obj< ::com::gamestudiohx::babylonhx::tools::IAnimatable >::__new();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(624)
	if (((this->material != null()))){
		HX_STACK_LINE(625)
		results->push(this->material);
	}
	HX_STACK_LINE(628)
	return results;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,getAnimatables,return )

Void Mesh_obj::bakeTransformIntoVertices( ::com::gamestudiohx::babylonhx::tools::math::Matrix transform){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","bakeTransformIntoVertices",0xcedb2e3a,"com.gamestudiohx.babylonhx.mesh.Mesh.bakeTransformIntoVertices","com/gamestudiohx/babylonhx/mesh/Mesh.hx",633,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transform,"transform")
		HX_STACK_LINE(635)
		if ((!(this->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind)))){
			HX_STACK_LINE(636)
			return null();
		}
		HX_STACK_LINE(639)
		this->_resetPointsArrayCache();
		HX_STACK_LINE(641)
		Array< Float > data = this->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(642)
		Array< Float > temp = Array_obj< Float >::__new();		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(645)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(646)
		while((true)){
			HX_STACK_LINE(646)
			if ((!(((index < data->length))))){
				HX_STACK_LINE(646)
				break;
			}
			HX_STACK_LINE(647)
			{
				HX_STACK_LINE(647)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(647)
				{
					HX_STACK_LINE(647)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data->__get(index),data->__get((index + (int)1)),data->__get((index + (int)2)));		HX_STACK_VAR(vector,"vector");
					HX_STACK_LINE(647)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(647)
					{
						HX_STACK_LINE(647)
						Float x = ((((vector->x * transform->m->__get((int)0)) + (vector->y * transform->m->__get((int)4))) + (vector->z * transform->m->__get((int)8))) + transform->m->__get((int)12));		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(647)
						Float y = ((((vector->x * transform->m->__get((int)1)) + (vector->y * transform->m->__get((int)5))) + (vector->z * transform->m->__get((int)9))) + transform->m->__get((int)13));		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(647)
						Float z = ((((vector->x * transform->m->__get((int)2)) + (vector->y * transform->m->__get((int)6))) + (vector->z * transform->m->__get((int)10))) + transform->m->__get((int)14));		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(647)
						Float w = ((((vector->x * transform->m->__get((int)3)) + (vector->y * transform->m->__get((int)7))) + (vector->z * transform->m->__get((int)11))) + transform->m->__get((int)15));		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(647)
						result->x = (Float(x) / Float(w));
						HX_STACK_LINE(647)
						result->y = (Float(y) / Float(w));
						HX_STACK_LINE(647)
						result->z = (Float(z) / Float(w));
					}
					HX_STACK_LINE(647)
					_this = result;
				}
				HX_STACK_LINE(647)
				temp[index] = _this->x;
				HX_STACK_LINE(647)
				temp[(index + (int)1)] = _this->y;
				HX_STACK_LINE(647)
				temp[(index + (int)2)] = _this->z;
				HX_STACK_LINE(647)
				temp;
			}
			HX_STACK_LINE(648)
			hx::AddEq(index,(int)3);
		}
		HX_STACK_LINE(652)
		bool _g = this->getVertexBuffer(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind)->isUpdatable();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(652)
		this->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind,temp,_g);
		HX_STACK_LINE(655)
		if ((!(this->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind)))){
			HX_STACK_LINE(656)
			return null();
		}
		HX_STACK_LINE(659)
		Array< Float > _g1 = this->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(659)
		data = _g1;
		HX_STACK_LINE(662)
		index = (int)0;
		HX_STACK_LINE(663)
		while((true)){
			HX_STACK_LINE(663)
			if ((!(((index < data->length))))){
				HX_STACK_LINE(663)
				break;
			}
			HX_STACK_LINE(664)
			{
				HX_STACK_LINE(664)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data->__get(index),data->__get((index + (int)1)),data->__get((index + (int)2)));		HX_STACK_VAR(vector,"vector");
					HX_STACK_LINE(664)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(664)
						result->x = (((vector->x * transform->m->__get((int)0)) + (vector->y * transform->m->__get((int)4))) + (vector->z * transform->m->__get((int)8)));
						HX_STACK_LINE(664)
						result->y = (((vector->x * transform->m->__get((int)1)) + (vector->y * transform->m->__get((int)5))) + (vector->z * transform->m->__get((int)9)));
						HX_STACK_LINE(664)
						result->z = (((vector->x * transform->m->__get((int)2)) + (vector->y * transform->m->__get((int)6))) + (vector->z * transform->m->__get((int)10)));
					}
					HX_STACK_LINE(664)
					_this = result;
				}
				HX_STACK_LINE(664)
				temp[index] = _this->x;
				HX_STACK_LINE(664)
				temp[(index + (int)1)] = _this->y;
				HX_STACK_LINE(664)
				temp[(index + (int)2)] = _this->z;
				HX_STACK_LINE(664)
				temp;
			}
			HX_STACK_LINE(665)
			hx::AddEq(index,(int)3);
		}
		HX_STACK_LINE(669)
		bool _g2 = this->getVertexBuffer(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind)->isUpdatable();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(669)
		this->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind,temp,_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,bakeTransformIntoVertices,(void))

bool Mesh_obj::_generatePointsArray( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","_generatePointsArray",0x29e3b134,"com.gamestudiohx.babylonhx.mesh.Mesh._generatePointsArray","com/gamestudiohx/babylonhx/mesh/Mesh.hx",680,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(681)
	if (((this->_positions != null()))){
		HX_STACK_LINE(682)
		return true;
	}
	HX_STACK_LINE(686)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(686)
	this->_positions = _g;
	HX_STACK_LINE(688)
	Array< Float > data = this->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(690)
	if (((data == null()))){
		HX_STACK_LINE(691)
		return false;
	}
	HX_STACK_LINE(695)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(696)
	while((true)){
		HX_STACK_LINE(696)
		if ((!(((index < data->length))))){
			HX_STACK_LINE(696)
			break;
		}
		HX_STACK_LINE(697)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data->__get(index),data->__get((index + (int)1)),data->__get((index + (int)2)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(697)
		this->_positions->push(_g1);
		HX_STACK_LINE(698)
		hx::AddEq(index,(int)3);
	}
	HX_STACK_LINE(702)
	return true;
}


::com::gamestudiohx::babylonhx::mesh::AbstractMesh Mesh_obj::clone( ::String name,::com::gamestudiohx::babylonhx::mesh::Mesh _tmp_newParent,hx::Null< bool >  __o_doNotCloneChildren){
bool doNotCloneChildren = __o_doNotCloneChildren.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","clone",0x9ba7882b,"com.gamestudiohx.babylonhx.mesh.Mesh.clone","com/gamestudiohx/babylonhx/mesh/Mesh.hx",707,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(_tmp_newParent,"_tmp_newParent")
	HX_STACK_ARG(doNotCloneChildren,"doNotCloneChildren")
{
		HX_STACK_LINE(708)
		::com::gamestudiohx::babylonhx::Node newParent = _tmp_newParent;		HX_STACK_VAR(newParent,"newParent");
		HX_STACK_LINE(708)
		::com::gamestudiohx::babylonhx::Scene _g = this->getScene();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(708)
		::com::gamestudiohx::babylonhx::mesh::Mesh resultMesh = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,_g);		HX_STACK_VAR(resultMesh,"resultMesh");
		HX_STACK_LINE(709)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(712)
		this->_geometry->applyToMesh(resultMesh);
		HX_STACK_LINE(715)
		::haxe::Log_obj::trace(HX_CSTRING("Mesh:clone -- "),hx::SourceInfo(HX_CSTRING("Mesh.hx"),715,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Mesh"),HX_CSTRING("clone")));
		HX_STACK_LINE(716)
		::com::gamestudiohx::babylonhx::tools::Tools_obj::DeepCopy(hx::ObjectPtr<OBJ_>(this),resultMesh,Array_obj< ::String >::__new().Add(HX_CSTRING("_onBeforeRenderCallbacks")).Add(HX_CSTRING("name")).Add(HX_CSTRING("material")).Add(HX_CSTRING("skeleton")),null());
		HX_STACK_LINE(719)
		resultMesh->material = this->material;
		HX_STACK_LINE(722)
		if (((newParent != null()))){
			HX_STACK_LINE(723)
			resultMesh->parent = newParent;
		}
		HX_STACK_LINE(726)
		if ((!(doNotCloneChildren))){
			HX_STACK_LINE(731)
			while((true)){
				HX_STACK_LINE(731)
				if ((!(((index < this->getScene()->meshes->length))))){
					HX_STACK_LINE(731)
					break;
				}
				HX_STACK_LINE(732)
				::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh = this->getScene()->meshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >();		HX_STACK_VAR(mesh,"mesh");
				HX_STACK_LINE(734)
				if (((mesh->parent == hx::ObjectPtr<OBJ_>(this)))){
					HX_STACK_LINE(735)
					mesh->clone(mesh->name,resultMesh,null());
				}
				HX_STACK_LINE(737)
				(index)++;
			}
		}
		HX_STACK_LINE(745)
		index = (int)0;
		HX_STACK_LINE(746)
		while((true)){
			HX_STACK_LINE(746)
			if ((!(((index < this->getScene()->particleSystems->length))))){
				HX_STACK_LINE(746)
				break;
			}
			HX_STACK_LINE(747)
			::com::gamestudiohx::babylonhx::particles::ParticleSystem system = this->getScene()->particleSystems->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::particles::ParticleSystem >();		HX_STACK_VAR(system,"system");
			HX_STACK_LINE(749)
			if (((system->emitter == hx::ObjectPtr<OBJ_>(this)))){
				HX_STACK_LINE(750)
				system->clone(system->name,resultMesh);
			}
			HX_STACK_LINE(752)
			(index)++;
		}
		HX_STACK_LINE(756)
		{
			HX_STACK_LINE(756)
			::com::gamestudiohx::babylonhx::tools::math::Matrix ret = resultMesh->_worldMatrix;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(756)
			{
				HX_STACK_LINE(756)
				resultMesh->_childrenFlag = (int)1;
				HX_STACK_LINE(756)
				resultMesh->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(resultMesh->position);
				HX_STACK_LINE(756)
				resultMesh->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(resultMesh->scaling);
				HX_STACK_LINE(756)
				resultMesh->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
				HX_STACK_LINE(756)
				int _g2 = resultMesh->_scene->getRenderId();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(756)
				resultMesh->_currentRenderId = _g2;
				HX_STACK_LINE(756)
				{
					HX_STACK_LINE(756)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = resultMesh->_localScaling;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(756)
					result->m[(int)0] = resultMesh->scaling->x;
					HX_STACK_LINE(756)
					result->m[(int)1] = (int)0;
					HX_STACK_LINE(756)
					result->m[(int)2] = (int)0;
					HX_STACK_LINE(756)
					result->m[(int)3] = (int)0;
					HX_STACK_LINE(756)
					result->m[(int)4] = (int)0;
					HX_STACK_LINE(756)
					result->m[(int)5] = resultMesh->scaling->y;
					HX_STACK_LINE(756)
					result->m[(int)6] = (int)0;
					HX_STACK_LINE(756)
					result->m[(int)7] = (int)0;
					HX_STACK_LINE(756)
					result->m[(int)8] = (int)0;
					HX_STACK_LINE(756)
					result->m[(int)9] = (int)0;
					HX_STACK_LINE(756)
					result->m[(int)10] = resultMesh->scaling->z;
					HX_STACK_LINE(756)
					result->m[(int)11] = (int)0;
					HX_STACK_LINE(756)
					result->m[(int)12] = (int)0;
					HX_STACK_LINE(756)
					result->m[(int)13] = (int)0;
					HX_STACK_LINE(756)
					result->m[(int)14] = (int)0;
					HX_STACK_LINE(756)
					result->m[(int)15] = 1.0;
					HX_STACK_LINE(756)
					result;
				}
				HX_STACK_LINE(756)
				if (((resultMesh->rotationQuaternion != null()))){
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = resultMesh->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = resultMesh->_localRotation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(756)
						Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(756)
						Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(756)
						Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(756)
						Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(756)
						Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
						HX_STACK_LINE(756)
						Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
						HX_STACK_LINE(756)
						Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
						HX_STACK_LINE(756)
						Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(756)
						Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
						HX_STACK_LINE(756)
						result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
						HX_STACK_LINE(756)
						result->m[(int)1] = (2.0 * ((xy + zw)));
						HX_STACK_LINE(756)
						result->m[(int)2] = (2.0 * ((zx - yw)));
						HX_STACK_LINE(756)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(756)
						result->m[(int)4] = (2.0 * ((xy - zw)));
						HX_STACK_LINE(756)
						result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
						HX_STACK_LINE(756)
						result->m[(int)6] = (2.0 * ((yz + xw)));
						HX_STACK_LINE(756)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(756)
						result->m[(int)8] = (2.0 * ((zx + yw)));
						HX_STACK_LINE(756)
						result->m[(int)9] = (2.0 * ((yz - xw)));
						HX_STACK_LINE(756)
						result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
						HX_STACK_LINE(756)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(756)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(756)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(756)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(756)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(756)
						result;
					}
					HX_STACK_LINE(756)
					resultMesh->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(resultMesh->rotationQuaternion);
				}
				else{
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = resultMesh->_localRotation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion _g3;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							Float halfRoll = (resultMesh->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
							HX_STACK_LINE(756)
							Float halfPitch = (resultMesh->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
							HX_STACK_LINE(756)
							Float halfYaw = (resultMesh->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
							HX_STACK_LINE(756)
							Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
							HX_STACK_LINE(756)
							Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
							HX_STACK_LINE(756)
							Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
							HX_STACK_LINE(756)
							Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
							HX_STACK_LINE(756)
							Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
							HX_STACK_LINE(756)
							Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
							HX_STACK_LINE(756)
							tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
							HX_STACK_LINE(756)
							tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
							HX_STACK_LINE(756)
							tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
							HX_STACK_LINE(756)
							tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
							HX_STACK_LINE(756)
							_g3 = tempQuaternion;
						}
						HX_STACK_LINE(756)
						tempQuaternion = _g3;
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(756)
							Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
							HX_STACK_LINE(756)
							Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
							HX_STACK_LINE(756)
							Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
							HX_STACK_LINE(756)
							Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
							HX_STACK_LINE(756)
							Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
							HX_STACK_LINE(756)
							Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
							HX_STACK_LINE(756)
							Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
							HX_STACK_LINE(756)
							Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
							HX_STACK_LINE(756)
							result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
							HX_STACK_LINE(756)
							result->m[(int)1] = (2.0 * ((xy + zw)));
							HX_STACK_LINE(756)
							result->m[(int)2] = (2.0 * ((zx - yw)));
							HX_STACK_LINE(756)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)4] = (2.0 * ((xy - zw)));
							HX_STACK_LINE(756)
							result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
							HX_STACK_LINE(756)
							result->m[(int)6] = (2.0 * ((yz + xw)));
							HX_STACK_LINE(756)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)8] = (2.0 * ((zx + yw)));
							HX_STACK_LINE(756)
							result->m[(int)9] = (2.0 * ((yz - xw)));
							HX_STACK_LINE(756)
							result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
							HX_STACK_LINE(756)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)12] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)13] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)14] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(756)
							result;
						}
					}
					HX_STACK_LINE(756)
					resultMesh->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(resultMesh->rotation);
				}
				HX_STACK_LINE(756)
				if ((resultMesh->infiniteDistance)){
					HX_STACK_LINE(756)
					::com::gamestudiohx::babylonhx::cameras::Camera camera = resultMesh->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = resultMesh->_localTranslation;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(756)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(756)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(756)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)12] = (resultMesh->position->x + camera->position->x);
							HX_STACK_LINE(756)
							result->m[(int)13] = (resultMesh->position->y + camera->position->y);
							HX_STACK_LINE(756)
							result->m[(int)14] = (resultMesh->position->z + camera->position->z);
							HX_STACK_LINE(756)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(756)
							result;
						}
					}
				}
				else{
					HX_STACK_LINE(756)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = resultMesh->_localTranslation;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						result->m[(int)0] = 1.0;
						HX_STACK_LINE(756)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(756)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(756)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(756)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(756)
						result->m[(int)5] = 1.0;
						HX_STACK_LINE(756)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(756)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(756)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(756)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(756)
						result->m[(int)10] = 1.0;
						HX_STACK_LINE(756)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(756)
						result->m[(int)12] = resultMesh->position->x;
						HX_STACK_LINE(756)
						result->m[(int)13] = resultMesh->position->y;
						HX_STACK_LINE(756)
						result->m[(int)14] = resultMesh->position->z;
						HX_STACK_LINE(756)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(756)
						result;
					}
				}
				HX_STACK_LINE(756)
				{
					HX_STACK_LINE(756)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = resultMesh->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(756)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = resultMesh->_localScaling;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						Array< Float > result = resultMesh->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(756)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(756)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(756)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(756)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(756)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(756)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(756)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(756)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(756)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(756)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(756)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(756)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(756)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(756)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(756)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(756)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(756)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(756)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(756)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(756)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(756)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(756)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(756)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(756)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(756)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(756)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(756)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(756)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(756)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(756)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(756)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(756)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(756)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(756)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(756)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(756)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(756)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(756)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(756)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(756)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(756)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(756)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(756)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(756)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(756)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(756)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(756)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(756)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(756)
						result;
					}
				}
				HX_STACK_LINE(756)
				{
					HX_STACK_LINE(756)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = resultMesh->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(756)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = resultMesh->_localRotation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						Array< Float > result = resultMesh->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(756)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(756)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(756)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(756)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(756)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(756)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(756)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(756)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(756)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(756)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(756)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(756)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(756)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(756)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(756)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(756)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(756)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(756)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(756)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(756)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(756)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(756)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(756)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(756)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(756)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(756)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(756)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(756)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(756)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(756)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(756)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(756)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(756)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(756)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(756)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(756)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(756)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(756)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(756)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(756)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(756)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(756)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(756)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(756)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(756)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(756)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(756)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(756)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(756)
						result;
					}
				}
				HX_STACK_LINE(756)
				if (((resultMesh->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
					HX_STACK_LINE(756)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = resultMesh->position;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(756)
						localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
					}
					HX_STACK_LINE(756)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = resultMesh->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(756)
						zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
					}
					HX_STACK_LINE(756)
					if (((bool((resultMesh->parent != null())) && bool((resultMesh->parent->position != null()))))){
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = resultMesh->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
							HX_STACK_LINE(756)
							hx::AddEq(localPosition->x,otherVector->x);
							HX_STACK_LINE(756)
							hx::AddEq(localPosition->y,otherVector->y);
							HX_STACK_LINE(756)
							hx::AddEq(localPosition->z,otherVector->z);
						}
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = resultMesh->_localTranslation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(756)
							{
								HX_STACK_LINE(756)
								result->m[(int)0] = 1.0;
								HX_STACK_LINE(756)
								result->m[(int)1] = (int)0;
								HX_STACK_LINE(756)
								result->m[(int)2] = (int)0;
								HX_STACK_LINE(756)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(756)
								result->m[(int)4] = (int)0;
								HX_STACK_LINE(756)
								result->m[(int)5] = 1.0;
								HX_STACK_LINE(756)
								result->m[(int)6] = (int)0;
								HX_STACK_LINE(756)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(756)
								result->m[(int)8] = (int)0;
								HX_STACK_LINE(756)
								result->m[(int)9] = (int)0;
								HX_STACK_LINE(756)
								result->m[(int)10] = 1.0;
								HX_STACK_LINE(756)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(756)
								result->m[(int)12] = localPosition->x;
								HX_STACK_LINE(756)
								result->m[(int)13] = localPosition->y;
								HX_STACK_LINE(756)
								result->m[(int)14] = localPosition->z;
								HX_STACK_LINE(756)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(756)
								result;
							}
						}
					}
					HX_STACK_LINE(756)
					if (((((int(resultMesh->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
						HX_STACK_LINE(756)
						zero = resultMesh->_scene->activeCamera->position;
					}
					else{
						HX_STACK_LINE(756)
						if (((((int(resultMesh->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
							HX_STACK_LINE(756)
							zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
						HX_STACK_LINE(756)
						if (((((int(resultMesh->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
							HX_STACK_LINE(756)
							zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
						HX_STACK_LINE(756)
						if (((((int(resultMesh->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
							HX_STACK_LINE(756)
							zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
					}
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = resultMesh->_localBillboard;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							zAxis->x = (zero->x - localPosition->x);
							HX_STACK_LINE(756)
							zAxis->y = (zero->y - localPosition->y);
							HX_STACK_LINE(756)
							zAxis->z = (zero->z - localPosition->z);
						}
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(756)
							if (((len != (int)0))){
								HX_STACK_LINE(756)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(756)
								hx::MultEq(zAxis->x,num);
								HX_STACK_LINE(756)
								hx::MultEq(zAxis->y,num);
								HX_STACK_LINE(756)
								hx::MultEq(zAxis->z,num);
							}
						}
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
							HX_STACK_LINE(756)
							xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
							HX_STACK_LINE(756)
							xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
						}
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(756)
							if (((len != (int)0))){
								HX_STACK_LINE(756)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(756)
								hx::MultEq(xAxis->x,num);
								HX_STACK_LINE(756)
								hx::MultEq(xAxis->y,num);
								HX_STACK_LINE(756)
								hx::MultEq(xAxis->z,num);
							}
						}
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
							HX_STACK_LINE(756)
							yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
							HX_STACK_LINE(756)
							yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
						}
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(756)
							if (((len != (int)0))){
								HX_STACK_LINE(756)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(756)
								hx::MultEq(yAxis->x,num);
								HX_STACK_LINE(756)
								hx::MultEq(yAxis->y,num);
								HX_STACK_LINE(756)
								hx::MultEq(yAxis->z,num);
							}
						}
						HX_STACK_LINE(756)
						Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
						HX_STACK_LINE(756)
						Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
						HX_STACK_LINE(756)
						Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							result->m[(int)0] = xAxis->x;
							HX_STACK_LINE(756)
							result->m[(int)1] = yAxis->x;
							HX_STACK_LINE(756)
							result->m[(int)2] = zAxis->x;
							HX_STACK_LINE(756)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)4] = xAxis->y;
							HX_STACK_LINE(756)
							result->m[(int)5] = yAxis->y;
							HX_STACK_LINE(756)
							result->m[(int)6] = zAxis->y;
							HX_STACK_LINE(756)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)8] = xAxis->z;
							HX_STACK_LINE(756)
							result->m[(int)9] = yAxis->z;
							HX_STACK_LINE(756)
							result->m[(int)10] = zAxis->z;
							HX_STACK_LINE(756)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(756)
							result->m[(int)12] = ex;
							HX_STACK_LINE(756)
							result->m[(int)13] = ey;
							HX_STACK_LINE(756)
							result->m[(int)14] = ez;
							HX_STACK_LINE(756)
							result->m[(int)15] = (int)1;
							HX_STACK_LINE(756)
							result;
						}
					}
					HX_STACK_LINE(756)
					resultMesh->_localBillboard->m[(int)12] = resultMesh->_localBillboard->m[(int)13] = resultMesh->_localBillboard->m[(int)14] = (int)0;
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = resultMesh->_localBillboard;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
							HX_STACK_LINE(756)
							Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
							HX_STACK_LINE(756)
							Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
							HX_STACK_LINE(756)
							Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
							HX_STACK_LINE(756)
							Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
							HX_STACK_LINE(756)
							Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
							HX_STACK_LINE(756)
							Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
							HX_STACK_LINE(756)
							Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
							HX_STACK_LINE(756)
							Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
							HX_STACK_LINE(756)
							Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
							HX_STACK_LINE(756)
							Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
							HX_STACK_LINE(756)
							Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
							HX_STACK_LINE(756)
							Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
							HX_STACK_LINE(756)
							Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
							HX_STACK_LINE(756)
							Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
							HX_STACK_LINE(756)
							Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
							HX_STACK_LINE(756)
							Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
							HX_STACK_LINE(756)
							Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
							HX_STACK_LINE(756)
							Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
							HX_STACK_LINE(756)
							Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
							HX_STACK_LINE(756)
							Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
							HX_STACK_LINE(756)
							Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
							HX_STACK_LINE(756)
							Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
							HX_STACK_LINE(756)
							Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
							HX_STACK_LINE(756)
							Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
							HX_STACK_LINE(756)
							Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
							HX_STACK_LINE(756)
							Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
							HX_STACK_LINE(756)
							Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
							HX_STACK_LINE(756)
							Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
							HX_STACK_LINE(756)
							Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
							HX_STACK_LINE(756)
							Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
							HX_STACK_LINE(756)
							Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
							HX_STACK_LINE(756)
							Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
							HX_STACK_LINE(756)
							Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
							HX_STACK_LINE(756)
							Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
							HX_STACK_LINE(756)
							Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
							HX_STACK_LINE(756)
							Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
							HX_STACK_LINE(756)
							Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
							HX_STACK_LINE(756)
							Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
							HX_STACK_LINE(756)
							_this->m[(int)0] = (l23 * l27);
							HX_STACK_LINE(756)
							_this->m[(int)4] = (l24 * l27);
							HX_STACK_LINE(756)
							_this->m[(int)8] = (l25 * l27);
							HX_STACK_LINE(756)
							_this->m[(int)12] = (l26 * l27);
							HX_STACK_LINE(756)
							_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
							HX_STACK_LINE(756)
							_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
							HX_STACK_LINE(756)
							_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
							HX_STACK_LINE(756)
							_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
							HX_STACK_LINE(756)
							_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
							HX_STACK_LINE(756)
							_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
							HX_STACK_LINE(756)
							_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
							HX_STACK_LINE(756)
							_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
							HX_STACK_LINE(756)
							_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
							HX_STACK_LINE(756)
							_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
							HX_STACK_LINE(756)
							_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
							HX_STACK_LINE(756)
							_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
						}
					}
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = resultMesh->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = resultMesh->_localBillboard;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							Array< Float > result = resultMesh->_localWorld->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(756)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(756)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(756)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(756)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(756)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(756)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(756)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(756)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(756)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(756)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(756)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(756)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(756)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(756)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(756)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(756)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(756)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(756)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(756)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(756)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(756)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(756)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(756)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(756)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(756)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(756)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(756)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(756)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(756)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(756)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(756)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(756)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(756)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(756)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(756)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(756)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(756)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(756)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(756)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(756)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(756)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(756)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(756)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(756)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(756)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(756)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(756)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(756)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(756)
							result;
						}
					}
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = resultMesh->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = resultMesh->_localWorld;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							Array< Float > result = resultMesh->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(756)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(756)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(756)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(756)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(756)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(756)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(756)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(756)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(756)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(756)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(756)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(756)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(756)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(756)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(756)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(756)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(756)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(756)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(756)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(756)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(756)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(756)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(756)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(756)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(756)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(756)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(756)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(756)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(756)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(756)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(756)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(756)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(756)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(756)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(756)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(756)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(756)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(756)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(756)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(756)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(756)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(756)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(756)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(756)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(756)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(756)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(756)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(756)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(756)
							result;
						}
					}
				}
				struct _Function_3_1{
					inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::Mesh &resultMesh){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",756,0xf4cec482)
						{
							HX_STACK_LINE(756)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _g4 = resultMesh->parent->getWorldMatrix();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(756)
							return (_g4 != null());
						}
						return null();
					}
				};
				HX_STACK_LINE(756)
				if (((  (((  (((resultMesh->parent != null()))) ? bool(_Function_3_1::Block(resultMesh)) : bool(false) ))) ? bool((resultMesh->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = resultMesh->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = resultMesh->_localTranslation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							Array< Float > result = resultMesh->_localWorld->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(756)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(756)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(756)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(756)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(756)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(756)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(756)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(756)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(756)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(756)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(756)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(756)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(756)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(756)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(756)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(756)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(756)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(756)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(756)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(756)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(756)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(756)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(756)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(756)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(756)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(756)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(756)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(756)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(756)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(756)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(756)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(756)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(756)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(756)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(756)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(756)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(756)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(756)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(756)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(756)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(756)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(756)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(756)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(756)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(756)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(756)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(756)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(756)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(756)
							result;
						}
					}
					HX_STACK_LINE(756)
					::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = resultMesh->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = resultMesh->_localWorld;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							Array< Float > result = resultMesh->_worldMatrix->m;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(756)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(756)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(756)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(756)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(756)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(756)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(756)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(756)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(756)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(756)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(756)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(756)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(756)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(756)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(756)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(756)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(756)
							Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(756)
							Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(756)
							Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(756)
							Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(756)
							Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(756)
							Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(756)
							Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(756)
							Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(756)
							Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(756)
							Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(756)
							Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(756)
							Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(756)
							Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(756)
							Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(756)
							Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(756)
							Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(756)
							result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(756)
							result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(756)
							result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(756)
							result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(756)
							result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(756)
							result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(756)
							result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(756)
							result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(756)
							result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(756)
							result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(756)
							result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(756)
							result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(756)
							result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(756)
							result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(756)
							result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(756)
							result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(756)
							result;
						}
					}
				}
				else{
					HX_STACK_LINE(756)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = resultMesh->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(756)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = resultMesh->_localTranslation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						Array< Float > result = resultMesh->_worldMatrix->m;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(756)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(756)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(756)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(756)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(756)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(756)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(756)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(756)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(756)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(756)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(756)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(756)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(756)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(756)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(756)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(756)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(756)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(756)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(756)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(756)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(756)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(756)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(756)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(756)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(756)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(756)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(756)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(756)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(756)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(756)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(756)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(756)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(756)
						result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(756)
						result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(756)
						result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(756)
						result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(756)
						result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(756)
						result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(756)
						result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(756)
						result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(756)
						result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(756)
						result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(756)
						result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(756)
						result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(756)
						result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(756)
						result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(756)
						result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(756)
						result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(756)
						result;
					}
				}
				HX_STACK_LINE(756)
				if (((resultMesh->_boundingInfo != null()))){
					HX_STACK_LINE(756)
					Float _g5 = ::Math_obj::max(resultMesh->scaling->x,resultMesh->scaling->y);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(756)
					resultMesh->_scaleFactor = _g5;
					HX_STACK_LINE(756)
					Float _g6 = ::Math_obj::max(resultMesh->_scaleFactor,resultMesh->scaling->z);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(756)
					resultMesh->_scaleFactor = _g6;
					struct _Function_4_1{
						inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::Mesh &resultMesh){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",756,0xf4cec482)
							{
								HX_STACK_LINE(756)
								Dynamic _g7 = ::Reflect_obj::field(resultMesh->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(756)
								return (_g7 != null());
							}
							return null();
						}
					};
					HX_STACK_LINE(756)
					if (((  (((resultMesh->parent != null()))) ? bool(_Function_4_1::Block(resultMesh)) : bool(false) ))){
						HX_STACK_LINE(756)
						Dynamic _g8 = ::Reflect_obj::field(resultMesh->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(756)
						Float _g9 = (resultMesh->_scaleFactor * _g8);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(756)
						resultMesh->_scaleFactor = _g9;
					}
					HX_STACK_LINE(756)
					resultMesh->_boundingInfo->_update(resultMesh->_worldMatrix,resultMesh->_scaleFactor);
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(756)
						int _g3 = resultMesh->subMeshes->length;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(756)
						while((true)){
							HX_STACK_LINE(756)
							if ((!(((_g1 < _g3))))){
								HX_STACK_LINE(756)
								break;
							}
							HX_STACK_LINE(756)
							int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
							HX_STACK_LINE(756)
							::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = resultMesh->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
							HX_STACK_LINE(756)
							subMesh->_boundingInfo->_update(resultMesh->_worldMatrix,resultMesh->_scaleFactor);
						}
					}
				}
				HX_STACK_LINE(756)
				{
					HX_STACK_LINE(756)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = resultMesh->_absolutePosition;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(756)
					_this->x = resultMesh->_worldMatrix->m->__get((int)12);
					HX_STACK_LINE(756)
					_this->y = resultMesh->_worldMatrix->m->__get((int)13);
					HX_STACK_LINE(756)
					_this->z = resultMesh->_worldMatrix->m->__get((int)14);
				}
				HX_STACK_LINE(756)
				ret = resultMesh->_worldMatrix;
			}
			HX_STACK_LINE(756)
			ret;
		}
		HX_STACK_LINE(758)
		return resultMesh;
	}
}


Void Mesh_obj::dispose( hx::Null< bool >  __o_doNotRecurse){
bool doNotRecurse = __o_doNotRecurse.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","dispose",0xc03244ed,"com.gamestudiohx.babylonhx.mesh.Mesh.dispose","com/gamestudiohx/babylonhx/mesh/Mesh.hx",763,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(doNotRecurse,"doNotRecurse")
{
		HX_STACK_LINE(764)
		if (((this->_geometry != null()))){
			HX_STACK_LINE(767)
			this->_geometry->releaseForMesh(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(771)
		if (((this->_worldMatricesInstancesBuffer != null()))){
			HX_STACK_LINE(772)
			this->getScene()->getEngine()->_releaseBuffer(this->_worldMatricesInstancesBuffer);
			HX_STACK_LINE(773)
			this->_worldMatricesInstancesBuffer = null();
		}
		HX_STACK_LINE(776)
		while((true)){
			HX_STACK_LINE(776)
			if ((!(((this->instances->length > (int)0))))){
				HX_STACK_LINE(776)
				break;
			}
			HX_STACK_LINE(777)
			this->instances->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::mesh::InstancedMesh >()->dispose(null());
		}
		HX_STACK_LINE(780)
		this->super::dispose(doNotRecurse);
	}
return null();
}


Void Mesh_obj::convertToFlatShadedMesh( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","convertToFlatShadedMesh",0xbc95c8f9,"com.gamestudiohx.babylonhx.mesh.Mesh.convertToFlatShadedMesh","com/gamestudiohx/babylonhx/mesh/Mesh.hx",785,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(789)
		Array< ::String > kinds = this->getVerticesDataKinds();		HX_STACK_VAR(kinds,"kinds");
		HX_STACK_LINE(790)
		::haxe::ds::StringMap vbs = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(vbs,"vbs");
		HX_STACK_LINE(791)
		::haxe::ds::StringMap data = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(792)
		::haxe::ds::StringMap newdata = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(newdata,"newdata");
		HX_STACK_LINE(793)
		bool updatableNormals = false;		HX_STACK_VAR(updatableNormals,"updatableNormals");
		HX_STACK_LINE(794)
		{
			HX_STACK_LINE(794)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(794)
			int _g = kinds->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(794)
			while((true)){
				HX_STACK_LINE(794)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(794)
					break;
				}
				HX_STACK_LINE(794)
				int kindIndex = (_g1)++;		HX_STACK_VAR(kindIndex,"kindIndex");
				HX_STACK_LINE(795)
				::String kind = kinds->__get(kindIndex);		HX_STACK_VAR(kind,"kind");
				HX_STACK_LINE(797)
				if (((kind == ::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind))){
					HX_STACK_LINE(798)
					bool _g2 = this->getVertexBuffer(kind)->isUpdatable();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(798)
					updatableNormals = _g2;
					HX_STACK_LINE(799)
					kinds->remove(kind);
					HX_STACK_LINE(800)
					continue;
				}
			}
		}
		HX_STACK_LINE(803)
		{
			HX_STACK_LINE(803)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(803)
			while((true)){
				HX_STACK_LINE(803)
				if ((!(((_g < kinds->length))))){
					HX_STACK_LINE(803)
					break;
				}
				HX_STACK_LINE(803)
				::String kind = kinds->__get(_g);		HX_STACK_VAR(kind,"kind");
				HX_STACK_LINE(803)
				++(_g);
				HX_STACK_LINE(804)
				{
					HX_STACK_LINE(804)
					::com::gamestudiohx::babylonhx::mesh::VertexBuffer value = this->getVertexBuffer(kind);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(804)
					vbs->set(kind,value);
				}
				HX_STACK_LINE(805)
				{
					HX_STACK_LINE(805)
					Array< Float > value = vbs->get(kind)->__Field(HX_CSTRING("getData"),true)();		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(805)
					data->set(kind,value);
				}
				HX_STACK_LINE(806)
				newdata->set(kind,Array_obj< Float >::__new());
			}
		}
		HX_STACK_LINE(810)
		Array< ::Dynamic > previousSubmeshes = this->subMeshes->slice((int)0,null());		HX_STACK_VAR(previousSubmeshes,"previousSubmeshes");
		HX_STACK_LINE(812)
		Array< int > indices = this->getIndices();		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(815)
		{
			HX_STACK_LINE(815)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(815)
			int _g = indices->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(815)
			while((true)){
				HX_STACK_LINE(815)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(815)
					break;
				}
				HX_STACK_LINE(815)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(816)
				int vertexIndex = indices->__get(index);		HX_STACK_VAR(vertexIndex,"vertexIndex");
				HX_STACK_LINE(818)
				{
					HX_STACK_LINE(818)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(818)
					int _g2 = kinds->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(818)
					while((true)){
						HX_STACK_LINE(818)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(818)
							break;
						}
						HX_STACK_LINE(818)
						int kindIndex = (_g3)++;		HX_STACK_VAR(kindIndex,"kindIndex");
						HX_STACK_LINE(819)
						::String kind = kinds->__get(kindIndex);		HX_STACK_VAR(kind,"kind");
						HX_STACK_LINE(820)
						int stride = vbs->get(kind)->__Field(HX_CSTRING("getStrideSize"),true)();		HX_STACK_VAR(stride,"stride");
						HX_STACK_LINE(822)
						{
							HX_STACK_LINE(822)
							int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(822)
							while((true)){
								HX_STACK_LINE(822)
								if ((!(((_g4 < stride))))){
									HX_STACK_LINE(822)
									break;
								}
								HX_STACK_LINE(822)
								int offset = (_g4)++;		HX_STACK_VAR(offset,"offset");
								HX_STACK_LINE(823)
								Array< Float > _g11 = data->get(kind);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(823)
								Float _g21 = _g11->__get(((vertexIndex * stride) + offset));		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(823)
								newdata->get(kind)->__Field(HX_CSTRING("push"),true)(_g21);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(829)
		Array< Float > normals = Array_obj< Float >::__new();		HX_STACK_VAR(normals,"normals");
		HX_STACK_LINE(830)
		Array< Float > positions = newdata->get(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(831)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(832)
		while((true)){
			HX_STACK_LINE(832)
			if ((!(((index < indices->length))))){
				HX_STACK_LINE(832)
				break;
			}
			HX_STACK_LINE(833)
			indices[index] = index;
			HX_STACK_LINE(834)
			indices[(index + (int)1)] = (index + (int)1);
			HX_STACK_LINE(835)
			indices[(index + (int)2)] = (index + (int)2);
			HX_STACK_LINE(837)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p1;		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(837)
			{
				HX_STACK_LINE(837)
				int offset = (index * (int)3);		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(837)
				p1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(positions->__get(offset),positions->__get((offset + (int)1)),positions->__get((offset + (int)2)));
			}
			HX_STACK_LINE(838)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p2;		HX_STACK_VAR(p2,"p2");
			HX_STACK_LINE(838)
			{
				HX_STACK_LINE(838)
				int offset = (((index + (int)1)) * (int)3);		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(838)
				p2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(positions->__get(offset),positions->__get((offset + (int)1)),positions->__get((offset + (int)2)));
			}
			HX_STACK_LINE(839)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p3;		HX_STACK_VAR(p3,"p3");
			HX_STACK_LINE(839)
			{
				HX_STACK_LINE(839)
				int offset = (((index + (int)2)) * (int)3);		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(839)
				p3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(positions->__get(offset),positions->__get((offset + (int)1)),positions->__get((offset + (int)2)));
			}
			HX_STACK_LINE(841)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p1p2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((p1->x - p2->x),(p1->y - p2->y),(p1->z - p2->z));		HX_STACK_VAR(p1p2,"p1p2");
			HX_STACK_LINE(842)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p3p2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((p3->x - p2->x),(p3->y - p2->y),(p3->z - p2->z));		HX_STACK_VAR(p3p2,"p3p2");
			HX_STACK_LINE(844)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 normal;		HX_STACK_VAR(normal,"normal");
			HX_STACK_LINE(844)
			{
				HX_STACK_LINE(844)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 vector;		HX_STACK_VAR(vector,"vector");
				HX_STACK_LINE(844)
				{
					HX_STACK_LINE(844)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(844)
					{
						HX_STACK_LINE(844)
						result->x = ((p1p2->y * p3p2->z) - (p1p2->z * p3p2->y));
						HX_STACK_LINE(844)
						result->y = ((p1p2->z * p3p2->x) - (p1p2->x * p3p2->z));
						HX_STACK_LINE(844)
						result->z = ((p1p2->x * p3p2->y) - (p1p2->y * p3p2->x));
					}
					HX_STACK_LINE(844)
					vector = result;
				}
				HX_STACK_LINE(844)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(844)
				{
					HX_STACK_LINE(844)
					{
						HX_STACK_LINE(844)
						result->x = vector->x;
						HX_STACK_LINE(844)
						result->y = vector->y;
						HX_STACK_LINE(844)
						result->z = vector->z;
					}
					HX_STACK_LINE(844)
					{
						HX_STACK_LINE(844)
						Float len = ::Math_obj::sqrt((((result->x * result->x) + (result->y * result->y)) + (result->z * result->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(844)
						if (((len != (int)0))){
							HX_STACK_LINE(844)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(844)
							hx::MultEq(result->x,num);
							HX_STACK_LINE(844)
							hx::MultEq(result->y,num);
							HX_STACK_LINE(844)
							hx::MultEq(result->z,num);
						}
					}
				}
				HX_STACK_LINE(844)
				normal = result;
			}
			HX_STACK_LINE(847)
			{
				HX_STACK_LINE(847)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(847)
				while((true)){
					HX_STACK_LINE(847)
					if ((!(((_g < (int)3))))){
						HX_STACK_LINE(847)
						break;
					}
					HX_STACK_LINE(847)
					int localIndex = (_g)++;		HX_STACK_VAR(localIndex,"localIndex");
					HX_STACK_LINE(848)
					normals->push(normal->x);
					HX_STACK_LINE(849)
					normals->push(normal->y);
					HX_STACK_LINE(850)
					normals->push(normal->z);
				}
			}
			HX_STACK_LINE(853)
			hx::AddEq(index,(int)3);
		}
		HX_STACK_LINE(856)
		this->setIndices(indices);
		HX_STACK_LINE(857)
		this->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind,normals,updatableNormals);
		HX_STACK_LINE(860)
		{
			HX_STACK_LINE(860)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(860)
			int _g = kinds->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(860)
			while((true)){
				HX_STACK_LINE(860)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(860)
					break;
				}
				HX_STACK_LINE(860)
				int kindIndex = (_g1)++;		HX_STACK_VAR(kindIndex,"kindIndex");
				HX_STACK_LINE(861)
				::String kind = kinds->__get(kindIndex);		HX_STACK_VAR(kind,"kind");
				HX_STACK_LINE(862)
				Array< Float > _g3 = newdata->get(kind);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(862)
				bool _g4 = vbs->get(kind)->__Field(HX_CSTRING("isUpdatable"),true)();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(862)
				this->setVerticesData(kind,_g3,_g4);
			}
		}
		HX_STACK_LINE(867)
		Array< ::Dynamic > _g5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(867)
		this->subMeshes = _g5;
		HX_STACK_LINE(868)
		{
			HX_STACK_LINE(868)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(868)
			int _g = previousSubmeshes->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(868)
			while((true)){
				HX_STACK_LINE(868)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(868)
					break;
				}
				HX_STACK_LINE(868)
				int submeshIndex = (_g1)++;		HX_STACK_VAR(submeshIndex,"submeshIndex");
				HX_STACK_LINE(869)
				::com::gamestudiohx::babylonhx::mesh::SubMesh previousOne = previousSubmeshes->__get(submeshIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(previousOne,"previousOne");
				HX_STACK_LINE(870)
				::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = ::com::gamestudiohx::babylonhx::mesh::SubMesh_obj::__new(previousOne->materialIndex,previousOne->indexStart,previousOne->indexCount,previousOne->indexStart,previousOne->indexCount,hx::ObjectPtr<OBJ_>(this),null(),null());		HX_STACK_VAR(subMesh,"subMesh");
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,convertToFlatShadedMesh,(void))

::com::gamestudiohx::babylonhx::mesh::InstancedMesh Mesh_obj::createInstance( ::String name){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","createInstance",0x4a952023,"com.gamestudiohx.babylonhx.mesh.Mesh.createInstance","com/gamestudiohx/babylonhx/mesh/Mesh.hx",877,0xf4cec482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(877)
	return ::com::gamestudiohx::babylonhx::mesh::InstancedMesh_obj::__new(name,hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,createInstance,return )

Void Mesh_obj::synchronizeInstances( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","synchronizeInstances",0xd38b30c0,"com.gamestudiohx.babylonhx.mesh.Mesh.synchronizeInstances","com/gamestudiohx/babylonhx/mesh/Mesh.hx",880,0xf4cec482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(883)
		int instanceIndex = (int)0;		HX_STACK_VAR(instanceIndex,"instanceIndex");
		HX_STACK_LINE(884)
		while((true)){
			HX_STACK_LINE(884)
			if ((!(((instanceIndex < this->instances->length))))){
				HX_STACK_LINE(884)
				break;
			}
			HX_STACK_LINE(885)
			::com::gamestudiohx::babylonhx::mesh::InstancedMesh instance = this->instances->__get(instanceIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::InstancedMesh >();		HX_STACK_VAR(instance,"instance");
			HX_STACK_LINE(886)
			instance->_syncSubMeshes();
			HX_STACK_LINE(887)
			(instanceIndex)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,synchronizeInstances,(void))

::com::gamestudiohx::babylonhx::mesh::Mesh Mesh_obj::CreateBox( ::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","CreateBox",0x48c5681d,"com.gamestudiohx.babylonhx.mesh.Mesh.CreateBox","com/gamestudiohx/babylonhx/mesh/Mesh.hx",894,0xf4cec482)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
	HX_STACK_LINE(895)
	::com::gamestudiohx::babylonhx::mesh::Mesh box = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(box,"box");
	HX_STACK_LINE(896)
	::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::CreateBox(size);		HX_STACK_VAR(vertexData,"vertexData");
	HX_STACK_LINE(898)
	vertexData->applyToMesh(box,updatable);
	HX_STACK_LINE(900)
	return box;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Mesh_obj,CreateBox,return )

::com::gamestudiohx::babylonhx::mesh::Mesh Mesh_obj::CreateSphere( ::String name,Float segments,Float diameter,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","CreateSphere",0xe6e81c3b,"com.gamestudiohx.babylonhx.mesh.Mesh.CreateSphere","com/gamestudiohx/babylonhx/mesh/Mesh.hx",903,0xf4cec482)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(segments,"segments")
	HX_STACK_ARG(diameter,"diameter")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
	HX_STACK_LINE(904)
	::com::gamestudiohx::babylonhx::mesh::Mesh sphere = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(sphere,"sphere");
	HX_STACK_LINE(905)
	::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::CreateSphere(segments,diameter);		HX_STACK_VAR(vertexData,"vertexData");
	HX_STACK_LINE(907)
	vertexData->applyToMesh(sphere,updatable);
	HX_STACK_LINE(909)
	return sphere;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Mesh_obj,CreateSphere,return )

::com::gamestudiohx::babylonhx::mesh::Mesh Mesh_obj::CreateCylinder( ::String name,int height,Float diameterTop,Float diameterBottom,int tessellation,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","CreateCylinder",0x4dd06b04,"com.gamestudiohx.babylonhx.mesh.Mesh.CreateCylinder","com/gamestudiohx/babylonhx/mesh/Mesh.hx",914,0xf4cec482)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(diameterTop,"diameterTop")
	HX_STACK_ARG(diameterBottom,"diameterBottom")
	HX_STACK_ARG(tessellation,"tessellation")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
	HX_STACK_LINE(915)
	::com::gamestudiohx::babylonhx::mesh::Mesh cylinder = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(cylinder,"cylinder");
	HX_STACK_LINE(916)
	::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::CreateCylinder(height,diameterTop,diameterBottom,tessellation);		HX_STACK_VAR(vertexData,"vertexData");
	HX_STACK_LINE(918)
	vertexData->applyToMesh(cylinder,updatable);
	HX_STACK_LINE(920)
	return cylinder;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Mesh_obj,CreateCylinder,return )

::com::gamestudiohx::babylonhx::mesh::Mesh Mesh_obj::CreateTorus( ::String name,Float diameter,Float thickness,int tessellation,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","CreateTorus",0x7037b347,"com.gamestudiohx.babylonhx.mesh.Mesh.CreateTorus","com/gamestudiohx/babylonhx/mesh/Mesh.hx",925,0xf4cec482)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(diameter,"diameter")
	HX_STACK_ARG(thickness,"thickness")
	HX_STACK_ARG(tessellation,"tessellation")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
	HX_STACK_LINE(926)
	::com::gamestudiohx::babylonhx::mesh::Mesh torus = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(torus,"torus");
	HX_STACK_LINE(927)
	::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::CreateTorus(diameter,thickness,tessellation);		HX_STACK_VAR(vertexData,"vertexData");
	HX_STACK_LINE(929)
	vertexData->applyToMesh(torus,updatable);
	HX_STACK_LINE(931)
	return torus;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Mesh_obj,CreateTorus,return )

::com::gamestudiohx::babylonhx::mesh::Mesh Mesh_obj::CreateTorusKnot( ::String name,Float radius,Float tube,Float radialSegments,Float tubularSegments,Float p,Float q,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","CreateTorusKnot",0x24e73c6f,"com.gamestudiohx.babylonhx.mesh.Mesh.CreateTorusKnot","com/gamestudiohx/babylonhx/mesh/Mesh.hx",934,0xf4cec482)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(tube,"tube")
	HX_STACK_ARG(radialSegments,"radialSegments")
	HX_STACK_ARG(tubularSegments,"tubularSegments")
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(q,"q")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
	HX_STACK_LINE(935)
	::com::gamestudiohx::babylonhx::mesh::Mesh torusKnot = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(torusKnot,"torusKnot");
	HX_STACK_LINE(936)
	::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::CreateTorusKnot(radius,tube,radialSegments,tubularSegments,p,q);		HX_STACK_VAR(vertexData,"vertexData");
	HX_STACK_LINE(938)
	vertexData->applyToMesh(torusKnot,updatable);
	HX_STACK_LINE(940)
	return torusKnot;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(Mesh_obj,CreateTorusKnot,return )

::com::gamestudiohx::babylonhx::mesh::Mesh Mesh_obj::CreatePlane( ::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,Dynamic updatable){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","CreatePlane",0x2094d0ee,"com.gamestudiohx.babylonhx.mesh.Mesh.CreatePlane","com/gamestudiohx/babylonhx/mesh/Mesh.hx",945,0xf4cec482)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_ARG(updatable,"updatable")
	HX_STACK_LINE(946)
	::com::gamestudiohx::babylonhx::mesh::Mesh plane = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(name,scene);		HX_STACK_VAR(plane,"plane");
	HX_STACK_LINE(947)
	::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::CreatePlane(size);		HX_STACK_VAR(vertexData,"vertexData");
	HX_STACK_LINE(949)
	vertexData->applyToMesh(plane,updatable);
	HX_STACK_LINE(951)
	return plane;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Mesh_obj,CreatePlane,return )

Dynamic Mesh_obj::MinMax( Array< ::Dynamic > meshes){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","MinMax",0x101fabc4,"com.gamestudiohx.babylonhx.mesh.Mesh.MinMax","com/gamestudiohx/babylonhx/mesh/Mesh.hx",1013,0xf4cec482)
	HX_STACK_ARG(meshes,"meshes")
	HX_STACK_LINE(1016)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1016)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g1,::com::gamestudiohx::babylonhx::tools::math::Vector3 &_g){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Mesh.hx",1016,0xf4cec482)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("min") , _g,false);
				__result->Add(HX_CSTRING("max") , _g1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(1016)
	Dynamic _MinMax = _Function_1_1::Block(_g1,_g);		HX_STACK_VAR(_MinMax,"_MinMax");
	HX_STACK_LINE(1017)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 minVector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(minVector,"minVector");
	HX_STACK_LINE(1018)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 maxVector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(maxVector,"maxVector");
	HX_STACK_LINE(1021)
	{
		HX_STACK_LINE(1021)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(1021)
		int _g2 = meshes->length;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1021)
		while((true)){
			HX_STACK_LINE(1021)
			if ((!(((_g11 < _g2))))){
				HX_STACK_LINE(1021)
				break;
			}
			HX_STACK_LINE(1021)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1022)
			::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh = meshes->__get(i).StaticCast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >();		HX_STACK_VAR(mesh,"mesh");
			HX_STACK_LINE(1023)
			::com::gamestudiohx::babylonhx::culling::BoundingBox boundingBox = mesh->getBoundingInfo()->boundingBox;		HX_STACK_VAR(boundingBox,"boundingBox");
			HX_STACK_LINE(1024)
			if (((minVector == null()))){
				HX_STACK_LINE(1025)
				minVector = boundingBox->minimumWorld;
				HX_STACK_LINE(1026)
				maxVector = boundingBox->maximumWorld;
				HX_STACK_LINE(1027)
				continue;
			}
			HX_STACK_LINE(1029)
			minVector->MinimizeInPlace(boundingBox->minimumWorld);
			HX_STACK_LINE(1030)
			maxVector->MaximizeInPlace(boundingBox->maximumWorld);
		}
	}
	HX_STACK_LINE(1032)
	_MinMax->__FieldRef(HX_CSTRING("min")) = minVector;
	HX_STACK_LINE(1033)
	_MinMax->__FieldRef(HX_CSTRING("max")) = maxVector;
	HX_STACK_LINE(1034)
	return _MinMax;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,MinMax,return )

::com::gamestudiohx::babylonhx::tools::math::Vector3 Mesh_obj::Center( Dynamic meshesOrMinMaxVector){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Mesh","Center",0xc3115967,"com.gamestudiohx.babylonhx.mesh.Mesh.Center","com/gamestudiohx/babylonhx/mesh/Mesh.hx",1037,0xf4cec482)
	HX_STACK_ARG(meshesOrMinMaxVector,"meshesOrMinMaxVector")
	HX_STACK_LINE(1038)
	Dynamic minMaxVector;		HX_STACK_VAR(minMaxVector,"minMaxVector");
	HX_STACK_LINE(1038)
	if (((meshesOrMinMaxVector->__Field(HX_CSTRING("min"),true) != null()))){
		HX_STACK_LINE(1038)
		minMaxVector = meshesOrMinMaxVector;
	}
	else{
		HX_STACK_LINE(1038)
		minMaxVector = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::MinMax(meshesOrMinMaxVector);
	}
	HX_STACK_LINE(1039)
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
	HX_MARK_MEMBER_NAME(_onBeforeRenderCallbacks,"_onBeforeRenderCallbacks");
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
	HX_VISIT_MEMBER_NAME(_onBeforeRenderCallbacks,"_onBeforeRenderCallbacks");
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
	case 24:
		if (HX_FIELD_EQ(inName,"_onBeforeRenderCallbacks") ) { return _onBeforeRenderCallbacks; }
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
	case 24:
		if (HX_FIELD_EQ(inName,"_onBeforeRenderCallbacks") ) { _onBeforeRenderCallbacks=inValue.Cast< Dynamic >(); return inValue; }
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
	outFields->push(HX_CSTRING("_onBeforeRenderCallbacks"));
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
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Mesh_obj,_onBeforeRenderCallbacks),HX_CSTRING("_onBeforeRenderCallbacks")},
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
	HX_CSTRING("_onBeforeRenderCallbacks"),
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
