#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingInfo
#include <com/gamestudiohx/babylonhx/culling/BoundingInfo.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_Tools
#include <com/gamestudiohx/babylonhx/tools/Tools.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{

Void Geometry_obj::__construct(::String id,::com::gamestudiohx::babylonhx::Engine engine,::com::gamestudiohx::babylonhx::mesh::VertexData vertexData,Dynamic updatable,::com::gamestudiohx::babylonhx::mesh::Mesh mesh)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","new",0x186da873,"com.gamestudiohx.babylonhx.mesh.Geometry.new","com/gamestudiohx/babylonhx/mesh/Geometry.hx",14,0x3bb3b15d)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
HX_STACK_ARG(engine,"engine")
HX_STACK_ARG(vertexData,"vertexData")
HX_STACK_ARG(updatable,"updatable")
HX_STACK_ARG(mesh,"mesh")
{
	HX_STACK_LINE(26)
	this->_indices = Array_obj< int >::__new();
	HX_STACK_LINE(25)
	this->_totalVertices = (int)0;
	HX_STACK_LINE(34)
	this->id = id;
	HX_STACK_LINE(35)
	this->_engine = engine;
	HX_STACK_LINE(36)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(36)
	this->_meshes = _g;
	HX_STACK_LINE(37)
	this->delayLoadState = ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_NONE;
	HX_STACK_LINE(40)
	if (((vertexData != null()))){
		HX_STACK_LINE(41)
		this->setAllVerticesData(vertexData,updatable);
	}
	else{
		HX_STACK_LINE(44)
		this->_totalVertices = (int)0;
		HX_STACK_LINE(45)
		Array< int > _g1 = Array_obj< int >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		this->_indices = _g1;
	}
	HX_STACK_LINE(49)
	if (((mesh != null()))){
		HX_STACK_LINE(50)
		this->applyToMesh(mesh);
	}
}
;
	return null();
}

//Geometry_obj::~Geometry_obj() { }

Dynamic Geometry_obj::__CreateEmpty() { return  new Geometry_obj; }
hx::ObjectPtr< Geometry_obj > Geometry_obj::__new(::String id,::com::gamestudiohx::babylonhx::Engine engine,::com::gamestudiohx::babylonhx::mesh::VertexData vertexData,Dynamic updatable,::com::gamestudiohx::babylonhx::mesh::Mesh mesh)
{  hx::ObjectPtr< Geometry_obj > result = new Geometry_obj();
	result->__construct(id,engine,vertexData,updatable,mesh);
	return result;}

Dynamic Geometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Geometry_obj > result = new Geometry_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

hx::Object *Geometry_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::gamestudiohx::babylonhx::mesh::IGetSetVerticesData_obj)) return operator ::com::gamestudiohx::babylonhx::mesh::IGetSetVerticesData_obj *();
	return super::__ToInterface(inType);
}

::com::gamestudiohx::babylonhx::Engine Geometry_obj::getEngine( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","getEngine",0x5bfe794b,"com.gamestudiohx.babylonhx.mesh.Geometry.getEngine","com/gamestudiohx/babylonhx/mesh/Geometry.hx",55,0x3bb3b15d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	return this->_engine;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,getEngine,return )

bool Geometry_obj::isReady( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","isReady",0x99c321ac,"com.gamestudiohx.babylonhx.mesh.Geometry.isReady","com/gamestudiohx/babylonhx/mesh/Geometry.hx",59,0x3bb3b15d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	return (bool((this->delayLoadState == ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_LOADED)) || bool((this->delayLoadState == ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_NONE)));
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,isReady,return )

Void Geometry_obj::setAllVerticesData( ::com::gamestudiohx::babylonhx::mesh::VertexData vertexData,Dynamic updatable){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","setAllVerticesData",0x5de32d4f,"com.gamestudiohx.babylonhx.mesh.Geometry.setAllVerticesData","com/gamestudiohx/babylonhx/mesh/Geometry.hx",63,0x3bb3b15d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertexData,"vertexData")
		HX_STACK_ARG(updatable,"updatable")
		HX_STACK_LINE(63)
		vertexData->applyToGeometry(hx::ObjectPtr<OBJ_>(this),updatable);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Geometry_obj,setAllVerticesData,(void))

Void Geometry_obj::setVerticesData( ::String kind,Array< Float > data,Dynamic updatable){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","setVerticesData",0xbce12e18,"com.gamestudiohx.babylonhx.mesh.Geometry.setVerticesData","com/gamestudiohx/babylonhx/mesh/Geometry.hx",66,0x3bb3b15d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(kind,"kind")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(updatable,"updatable")
		HX_STACK_LINE(67)
		::haxe::Log_obj::trace(HX_CSTRING("In geometry setVerticesData"),hx::SourceInfo(HX_CSTRING("Geometry.hx"),67,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Geometry"),HX_CSTRING("setVerticesData")));
		HX_STACK_LINE(68)
		Dynamic extend;		HX_STACK_VAR(extend,"extend");
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(minimum,"minimum");
			HX_STACK_LINE(68)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY);		HX_STACK_VAR(maximum,"maximum");
			HX_STACK_LINE(68)
			{
				HX_STACK_LINE(68)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(68)
				int _g = this->_totalVertices;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(68)
				while((true)){
					HX_STACK_LINE(68)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(68)
						break;
					}
					HX_STACK_LINE(68)
					int index = (_g1)++;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(68)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 current = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data->__get((index * (int)3)),data->__get(((index * (int)3) + (int)1)),data->__get(((index * (int)3) + (int)2)));		HX_STACK_VAR(current,"current");
					HX_STACK_LINE(68)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						Float x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(68)
						if (((current->x < minimum->x))){
							HX_STACK_LINE(68)
							x = current->x;
						}
						else{
							HX_STACK_LINE(68)
							x = minimum->x;
						}
						HX_STACK_LINE(68)
						Float y;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(68)
						if (((current->y < minimum->y))){
							HX_STACK_LINE(68)
							y = current->y;
						}
						else{
							HX_STACK_LINE(68)
							y = minimum->y;
						}
						HX_STACK_LINE(68)
						Float z;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(68)
						if (((current->z < minimum->z))){
							HX_STACK_LINE(68)
							z = current->z;
						}
						else{
							HX_STACK_LINE(68)
							z = minimum->z;
						}
						HX_STACK_LINE(68)
						_g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
					}
					HX_STACK_LINE(68)
					minimum = _g2;
					HX_STACK_LINE(68)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						Float x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(68)
						if (((current->x > maximum->x))){
							HX_STACK_LINE(68)
							x = current->x;
						}
						else{
							HX_STACK_LINE(68)
							x = maximum->x;
						}
						HX_STACK_LINE(68)
						Float y;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(68)
						if (((current->y > maximum->y))){
							HX_STACK_LINE(68)
							y = current->y;
						}
						else{
							HX_STACK_LINE(68)
							y = maximum->y;
						}
						HX_STACK_LINE(68)
						Float z;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(68)
						if (((current->z > maximum->z))){
							HX_STACK_LINE(68)
							z = current->z;
						}
						else{
							HX_STACK_LINE(68)
							z = maximum->z;
						}
						HX_STACK_LINE(68)
						_g11 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
					}
					HX_STACK_LINE(68)
					maximum = _g11;
				}
			}
			struct _Function_2_1{
				inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 &maximum){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Geometry.hx",68,0x3bb3b15d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("minimum") , minimum,false);
						__result->Add(HX_CSTRING("maximum") , maximum,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(68)
			extend = _Function_2_1::Block(minimum,maximum);
		}
		HX_STACK_LINE(69)
		::haxe::Log_obj::trace(HX_CSTRING("after extend"),hx::SourceInfo(HX_CSTRING("Geometry.hx"),69,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Geometry"),HX_CSTRING("setVerticesData")));
		HX_STACK_LINE(70)
		if (((this->_vertexBuffers == null()))){
			HX_STACK_LINE(71)
			::haxe::Log_obj::trace(HX_CSTRING("setVerticesData vertex buffer be null"),hx::SourceInfo(HX_CSTRING("Geometry.hx"),71,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Geometry"),HX_CSTRING("setVerticesData")));
			HX_STACK_LINE(72)
			::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(72)
			this->_vertexBuffers = _g2;
		}
		HX_STACK_LINE(75)
		::com::gamestudiohx::babylonhx::mesh::VertexBuffer _g3 = this->_vertexBuffers->get(kind);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(75)
		if (((_g3 != null()))){
			HX_STACK_LINE(76)
			::haxe::Log_obj::trace(HX_CSTRING("kind is null in dispose"),hx::SourceInfo(HX_CSTRING("Geometry.hx"),76,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Geometry"),HX_CSTRING("setVerticesData")));
			HX_STACK_LINE(77)
			this->_vertexBuffers->get(kind)->__Field(HX_CSTRING("dispose"),true)();
		}
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			::com::gamestudiohx::babylonhx::mesh::VertexBuffer value = ::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::__new(this->_engine,data,kind,updatable,null());		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(80)
			this->_vertexBuffers->set(kind,value);
		}
		HX_STACK_LINE(81)
		::haxe::Log_obj::trace(HX_CSTRING("after _vertexBuffers.set"),hx::SourceInfo(HX_CSTRING("Geometry.hx"),81,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Geometry"),HX_CSTRING("setVerticesData")));
		HX_STACK_LINE(82)
		if (((kind == ::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind))){
			HX_STACK_LINE(83)
			::haxe::Log_obj::trace(HX_CSTRING("kind is VertexBuffer.PositionKin"),hx::SourceInfo(HX_CSTRING("Geometry.hx"),83,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Geometry"),HX_CSTRING("setVerticesData")));
			HX_STACK_LINE(84)
			int stride = this->_vertexBuffers->get(kind)->__Field(HX_CSTRING("getStrideSize"),true)();		HX_STACK_VAR(stride,"stride");
			HX_STACK_LINE(86)
			int _g4 = ::Std_obj::_int((Float(data->length) / Float(stride)));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(86)
			this->_totalVertices = _g4;
			HX_STACK_LINE(90)
			Array< ::Dynamic > meshes = this->_meshes;		HX_STACK_VAR(meshes,"meshes");
			HX_STACK_LINE(91)
			int numOfMeshes = meshes->length;		HX_STACK_VAR(numOfMeshes,"numOfMeshes");
			HX_STACK_LINE(94)
			int index = (int)0;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(95)
			::haxe::Log_obj::trace((HX_CSTRING("pre loop -- num of meshes ") + numOfMeshes),hx::SourceInfo(HX_CSTRING("Geometry.hx"),95,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Geometry"),HX_CSTRING("setVerticesData")));
			HX_STACK_LINE(96)
			while((true)){
				HX_STACK_LINE(96)
				if ((!(((index < numOfMeshes))))){
					HX_STACK_LINE(96)
					break;
				}
				HX_STACK_LINE(97)
				::com::gamestudiohx::babylonhx::mesh::Mesh mesh = meshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Mesh >();		HX_STACK_VAR(mesh,"mesh");
				HX_STACK_LINE(98)
				::haxe::Log_obj::trace((HX_CSTRING("in loop -") + index),hx::SourceInfo(HX_CSTRING("Geometry.hx"),98,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Geometry"),HX_CSTRING("setVerticesData")));
				HX_STACK_LINE(99)
				mesh->_resetPointsArrayCache();
				HX_STACK_LINE(100)
				::com::gamestudiohx::babylonhx::culling::BoundingInfo _g5 = ::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__new(extend->__Field(HX_CSTRING("minimum"),true),extend->__Field(HX_CSTRING("maximum"),true));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(100)
				mesh->_boundingInfo = _g5;
				HX_STACK_LINE(101)
				mesh->_createGlobalSubMesh();
				HX_STACK_LINE(102)
				{
					HX_STACK_LINE(102)
					::com::gamestudiohx::babylonhx::tools::math::Matrix ret = mesh->_worldMatrix;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(102)
					{
						HX_STACK_LINE(102)
						mesh->_childrenFlag = (int)1;
						HX_STACK_LINE(102)
						mesh->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(mesh->position);
						HX_STACK_LINE(102)
						mesh->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(mesh->scaling);
						HX_STACK_LINE(102)
						mesh->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
						HX_STACK_LINE(102)
						int _g7 = mesh->_scene->getRenderId();		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(102)
						mesh->_currentRenderId = _g7;
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localScaling;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(102)
							result->m[(int)0] = mesh->scaling->x;
							HX_STACK_LINE(102)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(102)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(102)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(102)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(102)
							result->m[(int)5] = mesh->scaling->y;
							HX_STACK_LINE(102)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(102)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(102)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(102)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(102)
							result->m[(int)10] = mesh->scaling->z;
							HX_STACK_LINE(102)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(102)
							result->m[(int)12] = (int)0;
							HX_STACK_LINE(102)
							result->m[(int)13] = (int)0;
							HX_STACK_LINE(102)
							result->m[(int)14] = (int)0;
							HX_STACK_LINE(102)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(102)
							result;
						}
						HX_STACK_LINE(102)
						if (((mesh->rotationQuaternion != null()))){
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = mesh->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localRotation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(102)
								Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
								HX_STACK_LINE(102)
								Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
								HX_STACK_LINE(102)
								Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
								HX_STACK_LINE(102)
								Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
								HX_STACK_LINE(102)
								Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
								HX_STACK_LINE(102)
								Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
								HX_STACK_LINE(102)
								Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
								HX_STACK_LINE(102)
								Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
								HX_STACK_LINE(102)
								Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
								HX_STACK_LINE(102)
								result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
								HX_STACK_LINE(102)
								result->m[(int)1] = (2.0 * ((xy + zw)));
								HX_STACK_LINE(102)
								result->m[(int)2] = (2.0 * ((zx - yw)));
								HX_STACK_LINE(102)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(102)
								result->m[(int)4] = (2.0 * ((xy - zw)));
								HX_STACK_LINE(102)
								result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
								HX_STACK_LINE(102)
								result->m[(int)6] = (2.0 * ((yz + xw)));
								HX_STACK_LINE(102)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(102)
								result->m[(int)8] = (2.0 * ((zx + yw)));
								HX_STACK_LINE(102)
								result->m[(int)9] = (2.0 * ((yz - xw)));
								HX_STACK_LINE(102)
								result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
								HX_STACK_LINE(102)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(102)
								result->m[(int)12] = (int)0;
								HX_STACK_LINE(102)
								result->m[(int)13] = (int)0;
								HX_STACK_LINE(102)
								result->m[(int)14] = (int)0;
								HX_STACK_LINE(102)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(102)
								result;
							}
							HX_STACK_LINE(102)
							mesh->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(mesh->rotationQuaternion);
						}
						else{
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localRotation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Quaternion _g8;		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									Float halfRoll = (mesh->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
									HX_STACK_LINE(102)
									Float halfPitch = (mesh->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
									HX_STACK_LINE(102)
									Float halfYaw = (mesh->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
									HX_STACK_LINE(102)
									Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
									HX_STACK_LINE(102)
									Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
									HX_STACK_LINE(102)
									Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
									HX_STACK_LINE(102)
									Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
									HX_STACK_LINE(102)
									Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
									HX_STACK_LINE(102)
									Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
									HX_STACK_LINE(102)
									tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
									HX_STACK_LINE(102)
									tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
									HX_STACK_LINE(102)
									tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
									HX_STACK_LINE(102)
									tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
									HX_STACK_LINE(102)
									_g8 = tempQuaternion;
								}
								HX_STACK_LINE(102)
								tempQuaternion = _g8;
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
									HX_STACK_LINE(102)
									Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
									HX_STACK_LINE(102)
									Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
									HX_STACK_LINE(102)
									Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
									HX_STACK_LINE(102)
									Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
									HX_STACK_LINE(102)
									Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
									HX_STACK_LINE(102)
									Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
									HX_STACK_LINE(102)
									Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
									HX_STACK_LINE(102)
									Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
									HX_STACK_LINE(102)
									result->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
									HX_STACK_LINE(102)
									result->m[(int)1] = (2.0 * ((xy + zw)));
									HX_STACK_LINE(102)
									result->m[(int)2] = (2.0 * ((zx - yw)));
									HX_STACK_LINE(102)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)4] = (2.0 * ((xy - zw)));
									HX_STACK_LINE(102)
									result->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
									HX_STACK_LINE(102)
									result->m[(int)6] = (2.0 * ((yz + xw)));
									HX_STACK_LINE(102)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)8] = (2.0 * ((zx + yw)));
									HX_STACK_LINE(102)
									result->m[(int)9] = (2.0 * ((yz - xw)));
									HX_STACK_LINE(102)
									result->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
									HX_STACK_LINE(102)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)12] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)13] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)14] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(102)
									result;
								}
							}
							HX_STACK_LINE(102)
							mesh->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(mesh->rotation);
						}
						HX_STACK_LINE(102)
						if ((mesh->infiniteDistance)){
							HX_STACK_LINE(102)
							::com::gamestudiohx::babylonhx::cameras::Camera camera = mesh->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localTranslation;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									result->m[(int)0] = 1.0;
									HX_STACK_LINE(102)
									result->m[(int)1] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)2] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)4] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)5] = 1.0;
									HX_STACK_LINE(102)
									result->m[(int)6] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)8] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)9] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)10] = 1.0;
									HX_STACK_LINE(102)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)12] = (mesh->position->x + camera->position->x);
									HX_STACK_LINE(102)
									result->m[(int)13] = (mesh->position->y + camera->position->y);
									HX_STACK_LINE(102)
									result->m[(int)14] = (mesh->position->z + camera->position->z);
									HX_STACK_LINE(102)
									result->m[(int)15] = 1.0;
									HX_STACK_LINE(102)
									result;
								}
							}
						}
						else{
							HX_STACK_LINE(102)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localTranslation;		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								result->m[(int)0] = 1.0;
								HX_STACK_LINE(102)
								result->m[(int)1] = (int)0;
								HX_STACK_LINE(102)
								result->m[(int)2] = (int)0;
								HX_STACK_LINE(102)
								result->m[(int)3] = (int)0;
								HX_STACK_LINE(102)
								result->m[(int)4] = (int)0;
								HX_STACK_LINE(102)
								result->m[(int)5] = 1.0;
								HX_STACK_LINE(102)
								result->m[(int)6] = (int)0;
								HX_STACK_LINE(102)
								result->m[(int)7] = (int)0;
								HX_STACK_LINE(102)
								result->m[(int)8] = (int)0;
								HX_STACK_LINE(102)
								result->m[(int)9] = (int)0;
								HX_STACK_LINE(102)
								result->m[(int)10] = 1.0;
								HX_STACK_LINE(102)
								result->m[(int)11] = (int)0;
								HX_STACK_LINE(102)
								result->m[(int)12] = mesh->position->x;
								HX_STACK_LINE(102)
								result->m[(int)13] = mesh->position->y;
								HX_STACK_LINE(102)
								result->m[(int)14] = mesh->position->z;
								HX_STACK_LINE(102)
								result->m[(int)15] = 1.0;
								HX_STACK_LINE(102)
								result;
							}
						}
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(102)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localScaling;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								Array< Float > result = mesh->_localPivotScaling->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(102)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(102)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(102)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(102)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(102)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(102)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(102)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(102)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(102)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(102)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(102)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(102)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(102)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(102)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(102)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(102)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(102)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(102)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(102)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(102)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(102)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(102)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(102)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(102)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(102)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(102)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(102)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(102)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(102)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(102)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(102)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(102)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(102)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(102)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(102)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(102)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(102)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(102)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(102)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(102)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(102)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(102)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(102)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(102)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(102)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(102)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(102)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(102)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(102)
								result;
							}
						}
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(102)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localRotation;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								Array< Float > result = mesh->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(102)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(102)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(102)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(102)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(102)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(102)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(102)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(102)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(102)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(102)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(102)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(102)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(102)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(102)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(102)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(102)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(102)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(102)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(102)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(102)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(102)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(102)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(102)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(102)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(102)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(102)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(102)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(102)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(102)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(102)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(102)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(102)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(102)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(102)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(102)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(102)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(102)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(102)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(102)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(102)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(102)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(102)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(102)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(102)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(102)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(102)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(102)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(102)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(102)
								result;
							}
						}
						HX_STACK_LINE(102)
						if (((mesh->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
							HX_STACK_LINE(102)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = mesh->position;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(102)
								localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
							}
							HX_STACK_LINE(102)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = mesh->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(102)
								zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
							}
							HX_STACK_LINE(102)
							if (((bool((mesh->parent != null())) && bool((mesh->parent->position != null()))))){
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = mesh->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
									HX_STACK_LINE(102)
									hx::AddEq(localPosition->x,otherVector->x);
									HX_STACK_LINE(102)
									hx::AddEq(localPosition->y,otherVector->y);
									HX_STACK_LINE(102)
									hx::AddEq(localPosition->z,otherVector->z);
								}
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localTranslation;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(102)
									{
										HX_STACK_LINE(102)
										result->m[(int)0] = 1.0;
										HX_STACK_LINE(102)
										result->m[(int)1] = (int)0;
										HX_STACK_LINE(102)
										result->m[(int)2] = (int)0;
										HX_STACK_LINE(102)
										result->m[(int)3] = (int)0;
										HX_STACK_LINE(102)
										result->m[(int)4] = (int)0;
										HX_STACK_LINE(102)
										result->m[(int)5] = 1.0;
										HX_STACK_LINE(102)
										result->m[(int)6] = (int)0;
										HX_STACK_LINE(102)
										result->m[(int)7] = (int)0;
										HX_STACK_LINE(102)
										result->m[(int)8] = (int)0;
										HX_STACK_LINE(102)
										result->m[(int)9] = (int)0;
										HX_STACK_LINE(102)
										result->m[(int)10] = 1.0;
										HX_STACK_LINE(102)
										result->m[(int)11] = (int)0;
										HX_STACK_LINE(102)
										result->m[(int)12] = localPosition->x;
										HX_STACK_LINE(102)
										result->m[(int)13] = localPosition->y;
										HX_STACK_LINE(102)
										result->m[(int)14] = localPosition->z;
										HX_STACK_LINE(102)
										result->m[(int)15] = 1.0;
										HX_STACK_LINE(102)
										result;
									}
								}
							}
							HX_STACK_LINE(102)
							if (((((int(mesh->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
								HX_STACK_LINE(102)
								zero = mesh->_scene->activeCamera->position;
							}
							else{
								HX_STACK_LINE(102)
								if (((((int(mesh->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
									HX_STACK_LINE(102)
									zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
								}
								HX_STACK_LINE(102)
								if (((((int(mesh->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
									HX_STACK_LINE(102)
									zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
								}
								HX_STACK_LINE(102)
								if (((((int(mesh->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
									HX_STACK_LINE(102)
									zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
								}
							}
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Matrix result = mesh->_localBillboard;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									zAxis->x = (zero->x - localPosition->x);
									HX_STACK_LINE(102)
									zAxis->y = (zero->y - localPosition->y);
									HX_STACK_LINE(102)
									zAxis->z = (zero->z - localPosition->z);
								}
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(102)
									if (((len != (int)0))){
										HX_STACK_LINE(102)
										Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
										HX_STACK_LINE(102)
										hx::MultEq(zAxis->x,num);
										HX_STACK_LINE(102)
										hx::MultEq(zAxis->y,num);
										HX_STACK_LINE(102)
										hx::MultEq(zAxis->z,num);
									}
								}
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
									HX_STACK_LINE(102)
									xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
									HX_STACK_LINE(102)
									xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
								}
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(102)
									if (((len != (int)0))){
										HX_STACK_LINE(102)
										Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
										HX_STACK_LINE(102)
										hx::MultEq(xAxis->x,num);
										HX_STACK_LINE(102)
										hx::MultEq(xAxis->y,num);
										HX_STACK_LINE(102)
										hx::MultEq(xAxis->z,num);
									}
								}
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
									HX_STACK_LINE(102)
									yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
									HX_STACK_LINE(102)
									yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
								}
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(102)
									if (((len != (int)0))){
										HX_STACK_LINE(102)
										Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
										HX_STACK_LINE(102)
										hx::MultEq(yAxis->x,num);
										HX_STACK_LINE(102)
										hx::MultEq(yAxis->y,num);
										HX_STACK_LINE(102)
										hx::MultEq(yAxis->z,num);
									}
								}
								HX_STACK_LINE(102)
								Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
								HX_STACK_LINE(102)
								Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
								HX_STACK_LINE(102)
								Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									result->m[(int)0] = xAxis->x;
									HX_STACK_LINE(102)
									result->m[(int)1] = yAxis->x;
									HX_STACK_LINE(102)
									result->m[(int)2] = zAxis->x;
									HX_STACK_LINE(102)
									result->m[(int)3] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)4] = xAxis->y;
									HX_STACK_LINE(102)
									result->m[(int)5] = yAxis->y;
									HX_STACK_LINE(102)
									result->m[(int)6] = zAxis->y;
									HX_STACK_LINE(102)
									result->m[(int)7] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)8] = xAxis->z;
									HX_STACK_LINE(102)
									result->m[(int)9] = yAxis->z;
									HX_STACK_LINE(102)
									result->m[(int)10] = zAxis->z;
									HX_STACK_LINE(102)
									result->m[(int)11] = (int)0;
									HX_STACK_LINE(102)
									result->m[(int)12] = ex;
									HX_STACK_LINE(102)
									result->m[(int)13] = ey;
									HX_STACK_LINE(102)
									result->m[(int)14] = ez;
									HX_STACK_LINE(102)
									result->m[(int)15] = (int)1;
									HX_STACK_LINE(102)
									result;
								}
							}
							HX_STACK_LINE(102)
							mesh->_localBillboard->m[(int)12] = mesh->_localBillboard->m[(int)13] = mesh->_localBillboard->m[(int)14] = (int)0;
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localBillboard;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
									HX_STACK_LINE(102)
									Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
									HX_STACK_LINE(102)
									Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
									HX_STACK_LINE(102)
									Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
									HX_STACK_LINE(102)
									Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
									HX_STACK_LINE(102)
									Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
									HX_STACK_LINE(102)
									Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
									HX_STACK_LINE(102)
									Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
									HX_STACK_LINE(102)
									Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
									HX_STACK_LINE(102)
									Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
									HX_STACK_LINE(102)
									Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
									HX_STACK_LINE(102)
									Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
									HX_STACK_LINE(102)
									Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
									HX_STACK_LINE(102)
									Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
									HX_STACK_LINE(102)
									Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
									HX_STACK_LINE(102)
									Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
									HX_STACK_LINE(102)
									Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
									HX_STACK_LINE(102)
									Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
									HX_STACK_LINE(102)
									Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
									HX_STACK_LINE(102)
									Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
									HX_STACK_LINE(102)
									Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
									HX_STACK_LINE(102)
									Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
									HX_STACK_LINE(102)
									Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
									HX_STACK_LINE(102)
									Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
									HX_STACK_LINE(102)
									Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
									HX_STACK_LINE(102)
									Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
									HX_STACK_LINE(102)
									Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
									HX_STACK_LINE(102)
									Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
									HX_STACK_LINE(102)
									Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
									HX_STACK_LINE(102)
									Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
									HX_STACK_LINE(102)
									Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
									HX_STACK_LINE(102)
									Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
									HX_STACK_LINE(102)
									Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
									HX_STACK_LINE(102)
									Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
									HX_STACK_LINE(102)
									Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
									HX_STACK_LINE(102)
									Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
									HX_STACK_LINE(102)
									Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
									HX_STACK_LINE(102)
									Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
									HX_STACK_LINE(102)
									Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
									HX_STACK_LINE(102)
									_this->m[(int)0] = (l23 * l27);
									HX_STACK_LINE(102)
									_this->m[(int)4] = (l24 * l27);
									HX_STACK_LINE(102)
									_this->m[(int)8] = (l25 * l27);
									HX_STACK_LINE(102)
									_this->m[(int)12] = (l26 * l27);
									HX_STACK_LINE(102)
									_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
									HX_STACK_LINE(102)
									_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
									HX_STACK_LINE(102)
									_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
									HX_STACK_LINE(102)
									_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
									HX_STACK_LINE(102)
									_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
									HX_STACK_LINE(102)
									_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
									HX_STACK_LINE(102)
									_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
									HX_STACK_LINE(102)
									_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
									HX_STACK_LINE(102)
									_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
									HX_STACK_LINE(102)
									_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
									HX_STACK_LINE(102)
									_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
									HX_STACK_LINE(102)
									_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
								}
							}
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localBillboard;		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									Array< Float > result = mesh->_localWorld->m;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(102)
									Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
									HX_STACK_LINE(102)
									Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
									HX_STACK_LINE(102)
									Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
									HX_STACK_LINE(102)
									Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
									HX_STACK_LINE(102)
									Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
									HX_STACK_LINE(102)
									Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
									HX_STACK_LINE(102)
									Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
									HX_STACK_LINE(102)
									Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
									HX_STACK_LINE(102)
									Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
									HX_STACK_LINE(102)
									Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
									HX_STACK_LINE(102)
									Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
									HX_STACK_LINE(102)
									Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
									HX_STACK_LINE(102)
									Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
									HX_STACK_LINE(102)
									Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
									HX_STACK_LINE(102)
									Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
									HX_STACK_LINE(102)
									Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
									HX_STACK_LINE(102)
									Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
									HX_STACK_LINE(102)
									Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
									HX_STACK_LINE(102)
									Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
									HX_STACK_LINE(102)
									Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
									HX_STACK_LINE(102)
									Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
									HX_STACK_LINE(102)
									Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
									HX_STACK_LINE(102)
									Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
									HX_STACK_LINE(102)
									Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
									HX_STACK_LINE(102)
									Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
									HX_STACK_LINE(102)
									Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
									HX_STACK_LINE(102)
									Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
									HX_STACK_LINE(102)
									Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
									HX_STACK_LINE(102)
									Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
									HX_STACK_LINE(102)
									Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
									HX_STACK_LINE(102)
									Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
									HX_STACK_LINE(102)
									Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
									HX_STACK_LINE(102)
									result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
									HX_STACK_LINE(102)
									result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
									HX_STACK_LINE(102)
									result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
									HX_STACK_LINE(102)
									result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
									HX_STACK_LINE(102)
									result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
									HX_STACK_LINE(102)
									result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
									HX_STACK_LINE(102)
									result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
									HX_STACK_LINE(102)
									result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
									HX_STACK_LINE(102)
									result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
									HX_STACK_LINE(102)
									result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
									HX_STACK_LINE(102)
									result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
									HX_STACK_LINE(102)
									result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
									HX_STACK_LINE(102)
									result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
									HX_STACK_LINE(102)
									result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
									HX_STACK_LINE(102)
									result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
									HX_STACK_LINE(102)
									result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
									HX_STACK_LINE(102)
									result;
								}
							}
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localWorld;		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									Array< Float > result = mesh->_localPivotScalingRotation->m;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(102)
									Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
									HX_STACK_LINE(102)
									Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
									HX_STACK_LINE(102)
									Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
									HX_STACK_LINE(102)
									Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
									HX_STACK_LINE(102)
									Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
									HX_STACK_LINE(102)
									Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
									HX_STACK_LINE(102)
									Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
									HX_STACK_LINE(102)
									Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
									HX_STACK_LINE(102)
									Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
									HX_STACK_LINE(102)
									Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
									HX_STACK_LINE(102)
									Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
									HX_STACK_LINE(102)
									Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
									HX_STACK_LINE(102)
									Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
									HX_STACK_LINE(102)
									Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
									HX_STACK_LINE(102)
									Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
									HX_STACK_LINE(102)
									Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
									HX_STACK_LINE(102)
									Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
									HX_STACK_LINE(102)
									Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
									HX_STACK_LINE(102)
									Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
									HX_STACK_LINE(102)
									Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
									HX_STACK_LINE(102)
									Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
									HX_STACK_LINE(102)
									Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
									HX_STACK_LINE(102)
									Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
									HX_STACK_LINE(102)
									Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
									HX_STACK_LINE(102)
									Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
									HX_STACK_LINE(102)
									Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
									HX_STACK_LINE(102)
									Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
									HX_STACK_LINE(102)
									Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
									HX_STACK_LINE(102)
									Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
									HX_STACK_LINE(102)
									Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
									HX_STACK_LINE(102)
									Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
									HX_STACK_LINE(102)
									Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
									HX_STACK_LINE(102)
									result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
									HX_STACK_LINE(102)
									result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
									HX_STACK_LINE(102)
									result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
									HX_STACK_LINE(102)
									result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
									HX_STACK_LINE(102)
									result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
									HX_STACK_LINE(102)
									result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
									HX_STACK_LINE(102)
									result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
									HX_STACK_LINE(102)
									result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
									HX_STACK_LINE(102)
									result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
									HX_STACK_LINE(102)
									result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
									HX_STACK_LINE(102)
									result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
									HX_STACK_LINE(102)
									result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
									HX_STACK_LINE(102)
									result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
									HX_STACK_LINE(102)
									result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
									HX_STACK_LINE(102)
									result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
									HX_STACK_LINE(102)
									result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
									HX_STACK_LINE(102)
									result;
								}
							}
						}
						struct _Function_5_1{
							inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::Mesh &mesh){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Geometry.hx",102,0x3bb3b15d)
								{
									HX_STACK_LINE(102)
									::com::gamestudiohx::babylonhx::tools::math::Matrix _g9 = mesh->parent->getWorldMatrix();		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(102)
									return (_g9 != null());
								}
								return null();
							}
						};
						HX_STACK_LINE(102)
						if (((  (((  (((mesh->parent != null()))) ? bool(_Function_5_1::Block(mesh)) : bool(false) ))) ? bool((mesh->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localTranslation;		HX_STACK_VAR(other,"other");
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									Array< Float > result = mesh->_localWorld->m;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(102)
									Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
									HX_STACK_LINE(102)
									Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
									HX_STACK_LINE(102)
									Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
									HX_STACK_LINE(102)
									Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
									HX_STACK_LINE(102)
									Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
									HX_STACK_LINE(102)
									Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
									HX_STACK_LINE(102)
									Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
									HX_STACK_LINE(102)
									Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
									HX_STACK_LINE(102)
									Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
									HX_STACK_LINE(102)
									Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
									HX_STACK_LINE(102)
									Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
									HX_STACK_LINE(102)
									Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
									HX_STACK_LINE(102)
									Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
									HX_STACK_LINE(102)
									Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
									HX_STACK_LINE(102)
									Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
									HX_STACK_LINE(102)
									Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
									HX_STACK_LINE(102)
									Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
									HX_STACK_LINE(102)
									Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
									HX_STACK_LINE(102)
									Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
									HX_STACK_LINE(102)
									Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
									HX_STACK_LINE(102)
									Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
									HX_STACK_LINE(102)
									Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
									HX_STACK_LINE(102)
									Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
									HX_STACK_LINE(102)
									Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
									HX_STACK_LINE(102)
									Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
									HX_STACK_LINE(102)
									Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
									HX_STACK_LINE(102)
									Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
									HX_STACK_LINE(102)
									Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
									HX_STACK_LINE(102)
									Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
									HX_STACK_LINE(102)
									Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
									HX_STACK_LINE(102)
									Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
									HX_STACK_LINE(102)
									Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
									HX_STACK_LINE(102)
									result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
									HX_STACK_LINE(102)
									result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
									HX_STACK_LINE(102)
									result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
									HX_STACK_LINE(102)
									result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
									HX_STACK_LINE(102)
									result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
									HX_STACK_LINE(102)
									result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
									HX_STACK_LINE(102)
									result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
									HX_STACK_LINE(102)
									result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
									HX_STACK_LINE(102)
									result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
									HX_STACK_LINE(102)
									result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
									HX_STACK_LINE(102)
									result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
									HX_STACK_LINE(102)
									result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
									HX_STACK_LINE(102)
									result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
									HX_STACK_LINE(102)
									result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
									HX_STACK_LINE(102)
									result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
									HX_STACK_LINE(102)
									result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
									HX_STACK_LINE(102)
									result;
								}
							}
							HX_STACK_LINE(102)
							::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = mesh->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localWorld;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									Array< Float > result = mesh->_worldMatrix->m;		HX_STACK_VAR(result,"result");
									HX_STACK_LINE(102)
									Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
									HX_STACK_LINE(102)
									Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
									HX_STACK_LINE(102)
									Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
									HX_STACK_LINE(102)
									Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
									HX_STACK_LINE(102)
									Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
									HX_STACK_LINE(102)
									Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
									HX_STACK_LINE(102)
									Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
									HX_STACK_LINE(102)
									Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
									HX_STACK_LINE(102)
									Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
									HX_STACK_LINE(102)
									Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
									HX_STACK_LINE(102)
									Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
									HX_STACK_LINE(102)
									Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
									HX_STACK_LINE(102)
									Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
									HX_STACK_LINE(102)
									Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
									HX_STACK_LINE(102)
									Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
									HX_STACK_LINE(102)
									Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
									HX_STACK_LINE(102)
									Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
									HX_STACK_LINE(102)
									Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
									HX_STACK_LINE(102)
									Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
									HX_STACK_LINE(102)
									Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
									HX_STACK_LINE(102)
									Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
									HX_STACK_LINE(102)
									Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
									HX_STACK_LINE(102)
									Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
									HX_STACK_LINE(102)
									Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
									HX_STACK_LINE(102)
									Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
									HX_STACK_LINE(102)
									Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
									HX_STACK_LINE(102)
									Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
									HX_STACK_LINE(102)
									Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
									HX_STACK_LINE(102)
									Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
									HX_STACK_LINE(102)
									Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
									HX_STACK_LINE(102)
									Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
									HX_STACK_LINE(102)
									Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
									HX_STACK_LINE(102)
									result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
									HX_STACK_LINE(102)
									result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
									HX_STACK_LINE(102)
									result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
									HX_STACK_LINE(102)
									result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
									HX_STACK_LINE(102)
									result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
									HX_STACK_LINE(102)
									result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
									HX_STACK_LINE(102)
									result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
									HX_STACK_LINE(102)
									result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
									HX_STACK_LINE(102)
									result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
									HX_STACK_LINE(102)
									result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
									HX_STACK_LINE(102)
									result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
									HX_STACK_LINE(102)
									result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
									HX_STACK_LINE(102)
									result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
									HX_STACK_LINE(102)
									result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
									HX_STACK_LINE(102)
									result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
									HX_STACK_LINE(102)
									result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
									HX_STACK_LINE(102)
									result;
								}
							}
						}
						else{
							HX_STACK_LINE(102)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _this = mesh->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(102)
							::com::gamestudiohx::babylonhx::tools::math::Matrix other = mesh->_localTranslation;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								Array< Float > result = mesh->_worldMatrix->m;		HX_STACK_VAR(result,"result");
								HX_STACK_LINE(102)
								Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
								HX_STACK_LINE(102)
								Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
								HX_STACK_LINE(102)
								Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
								HX_STACK_LINE(102)
								Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
								HX_STACK_LINE(102)
								Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
								HX_STACK_LINE(102)
								Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
								HX_STACK_LINE(102)
								Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
								HX_STACK_LINE(102)
								Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
								HX_STACK_LINE(102)
								Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
								HX_STACK_LINE(102)
								Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
								HX_STACK_LINE(102)
								Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
								HX_STACK_LINE(102)
								Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
								HX_STACK_LINE(102)
								Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
								HX_STACK_LINE(102)
								Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
								HX_STACK_LINE(102)
								Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
								HX_STACK_LINE(102)
								Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
								HX_STACK_LINE(102)
								Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
								HX_STACK_LINE(102)
								Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
								HX_STACK_LINE(102)
								Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
								HX_STACK_LINE(102)
								Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
								HX_STACK_LINE(102)
								Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
								HX_STACK_LINE(102)
								Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
								HX_STACK_LINE(102)
								Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
								HX_STACK_LINE(102)
								Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
								HX_STACK_LINE(102)
								Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
								HX_STACK_LINE(102)
								Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
								HX_STACK_LINE(102)
								Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
								HX_STACK_LINE(102)
								Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
								HX_STACK_LINE(102)
								Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
								HX_STACK_LINE(102)
								Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
								HX_STACK_LINE(102)
								Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
								HX_STACK_LINE(102)
								Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
								HX_STACK_LINE(102)
								result[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
								HX_STACK_LINE(102)
								result[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
								HX_STACK_LINE(102)
								result[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
								HX_STACK_LINE(102)
								result[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
								HX_STACK_LINE(102)
								result[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
								HX_STACK_LINE(102)
								result[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
								HX_STACK_LINE(102)
								result[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
								HX_STACK_LINE(102)
								result[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
								HX_STACK_LINE(102)
								result[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
								HX_STACK_LINE(102)
								result[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
								HX_STACK_LINE(102)
								result[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
								HX_STACK_LINE(102)
								result[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
								HX_STACK_LINE(102)
								result[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
								HX_STACK_LINE(102)
								result[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
								HX_STACK_LINE(102)
								result[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
								HX_STACK_LINE(102)
								result[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
								HX_STACK_LINE(102)
								result;
							}
						}
						HX_STACK_LINE(102)
						if (((mesh->_boundingInfo != null()))){
							HX_STACK_LINE(102)
							Float _g10 = ::Math_obj::max(mesh->scaling->x,mesh->scaling->y);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(102)
							mesh->_scaleFactor = _g10;
							HX_STACK_LINE(102)
							Float _g11 = ::Math_obj::max(mesh->_scaleFactor,mesh->scaling->z);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(102)
							mesh->_scaleFactor = _g11;
							struct _Function_6_1{
								inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::Mesh &mesh){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Geometry.hx",102,0x3bb3b15d)
									{
										HX_STACK_LINE(102)
										Dynamic _g12 = ::Reflect_obj::field(mesh->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g12,"_g12");
										HX_STACK_LINE(102)
										return (_g12 != null());
									}
									return null();
								}
							};
							HX_STACK_LINE(102)
							if (((  (((mesh->parent != null()))) ? bool(_Function_6_1::Block(mesh)) : bool(false) ))){
								HX_STACK_LINE(102)
								Dynamic _g13 = ::Reflect_obj::field(mesh->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(102)
								Float _g14 = (mesh->_scaleFactor * _g13);		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(102)
								mesh->_scaleFactor = _g14;
							}
							HX_STACK_LINE(102)
							mesh->_boundingInfo->_update(mesh->_worldMatrix,mesh->_scaleFactor);
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(102)
								int _g = mesh->subMeshes->length;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(102)
								while((true)){
									HX_STACK_LINE(102)
									if ((!(((_g1 < _g))))){
										HX_STACK_LINE(102)
										break;
									}
									HX_STACK_LINE(102)
									int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
									HX_STACK_LINE(102)
									::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = mesh->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
									HX_STACK_LINE(102)
									subMesh->_boundingInfo->_update(mesh->_worldMatrix,mesh->_scaleFactor);
								}
							}
						}
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = mesh->_absolutePosition;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(102)
							_this->x = mesh->_worldMatrix->m->__get((int)12);
							HX_STACK_LINE(102)
							_this->y = mesh->_worldMatrix->m->__get((int)13);
							HX_STACK_LINE(102)
							_this->z = mesh->_worldMatrix->m->__get((int)14);
						}
						HX_STACK_LINE(102)
						ret = mesh->_worldMatrix;
					}
					HX_STACK_LINE(102)
					ret;
				}
				HX_STACK_LINE(103)
				(index)++;
			}
		}
		HX_STACK_LINE(107)
		::haxe::Log_obj::trace(HX_CSTRING("setVerticesData end"),hx::SourceInfo(HX_CSTRING("Geometry.hx"),107,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Geometry"),HX_CSTRING("setVerticesData")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Geometry_obj,setVerticesData,(void))

Void Geometry_obj::updateVerticesData( ::String kind,Array< Float > data,Dynamic updateExtends,Dynamic makeItUnique){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","updateVerticesData",0x7cbda3b9,"com.gamestudiohx.babylonhx.mesh.Geometry.updateVerticesData","com/gamestudiohx/babylonhx/mesh/Geometry.hx",110,0x3bb3b15d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(kind,"kind")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(updateExtends,"updateExtends")
		HX_STACK_ARG(makeItUnique,"makeItUnique")
		HX_STACK_LINE(111)
		::com::gamestudiohx::babylonhx::mesh::VertexBuffer vertexBuffer = this->getVertexBuffer(kind);		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
		HX_STACK_LINE(113)
		if (((vertexBuffer == null()))){
			HX_STACK_LINE(114)
			return null();
		}
		HX_STACK_LINE(117)
		vertexBuffer->update(data);
		HX_STACK_LINE(119)
		if (((kind == ::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind))){
			HX_STACK_LINE(121)
			Dynamic extend;		HX_STACK_VAR(extend,"extend");
			HX_STACK_LINE(121)
			{
				HX_STACK_LINE(121)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(minimum,"minimum");
				HX_STACK_LINE(121)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY);		HX_STACK_VAR(maximum,"maximum");
				HX_STACK_LINE(121)
				{
					HX_STACK_LINE(121)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(121)
					int _g = this->_totalVertices;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(121)
					while((true)){
						HX_STACK_LINE(121)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(121)
							break;
						}
						HX_STACK_LINE(121)
						int index = (_g1)++;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(121)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 current = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data->__get((index * (int)3)),data->__get(((index * (int)3) + (int)1)),data->__get(((index * (int)3) + (int)2)));		HX_STACK_VAR(current,"current");
						HX_STACK_LINE(121)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(121)
						{
							HX_STACK_LINE(121)
							Float x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(121)
							if (((current->x < minimum->x))){
								HX_STACK_LINE(121)
								x = current->x;
							}
							else{
								HX_STACK_LINE(121)
								x = minimum->x;
							}
							HX_STACK_LINE(121)
							Float y;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(121)
							if (((current->y < minimum->y))){
								HX_STACK_LINE(121)
								y = current->y;
							}
							else{
								HX_STACK_LINE(121)
								y = minimum->y;
							}
							HX_STACK_LINE(121)
							Float z;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(121)
							if (((current->z < minimum->z))){
								HX_STACK_LINE(121)
								z = current->z;
							}
							else{
								HX_STACK_LINE(121)
								z = minimum->z;
							}
							HX_STACK_LINE(121)
							_g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
						}
						HX_STACK_LINE(121)
						minimum = _g2;
						HX_STACK_LINE(121)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(121)
						{
							HX_STACK_LINE(121)
							Float x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(121)
							if (((current->x > maximum->x))){
								HX_STACK_LINE(121)
								x = current->x;
							}
							else{
								HX_STACK_LINE(121)
								x = maximum->x;
							}
							HX_STACK_LINE(121)
							Float y;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(121)
							if (((current->y > maximum->y))){
								HX_STACK_LINE(121)
								y = current->y;
							}
							else{
								HX_STACK_LINE(121)
								y = maximum->y;
							}
							HX_STACK_LINE(121)
							Float z;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(121)
							if (((current->z > maximum->z))){
								HX_STACK_LINE(121)
								z = current->z;
							}
							else{
								HX_STACK_LINE(121)
								z = maximum->z;
							}
							HX_STACK_LINE(121)
							_g11 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
						}
						HX_STACK_LINE(121)
						maximum = _g11;
					}
				}
				struct _Function_3_1{
					inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 &maximum){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Geometry.hx",121,0x3bb3b15d)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("minimum") , minimum,false);
							__result->Add(HX_CSTRING("maximum") , maximum,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(121)
				extend = _Function_3_1::Block(minimum,maximum);
			}
			HX_STACK_LINE(123)
			if ((updateExtends)){
				HX_STACK_LINE(124)
				int stride = vertexBuffer->getStrideSize();		HX_STACK_VAR(stride,"stride");
				HX_STACK_LINE(125)
				int _g2 = ::Std_obj::_int((Float(data->length) / Float(stride)));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(125)
				this->_totalVertices = _g2;
			}
			HX_STACK_LINE(129)
			Array< ::Dynamic > meshes = this->_meshes;		HX_STACK_VAR(meshes,"meshes");
			HX_STACK_LINE(130)
			int numOfMeshes = meshes->length;		HX_STACK_VAR(numOfMeshes,"numOfMeshes");
			HX_STACK_LINE(133)
			int index = (int)0;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(134)
			while((true)){
				HX_STACK_LINE(134)
				if ((!(((index < numOfMeshes))))){
					HX_STACK_LINE(134)
					break;
				}
				HX_STACK_LINE(135)
				::com::gamestudiohx::babylonhx::mesh::Mesh mesh = meshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Mesh >();		HX_STACK_VAR(mesh,"mesh");
				HX_STACK_LINE(136)
				mesh->_resetPointsArrayCache();
				HX_STACK_LINE(137)
				if ((updateExtends)){
					HX_STACK_LINE(138)
					::com::gamestudiohx::babylonhx::culling::BoundingInfo _g3 = ::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__new(extend->__Field(HX_CSTRING("minimum"),true),extend->__Field(HX_CSTRING("maximum"),true));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(138)
					mesh->_boundingInfo = _g3;
				}
				HX_STACK_LINE(140)
				(index)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Geometry_obj,updateVerticesData,(void))

int Geometry_obj::getTotalVertices( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","getTotalVertices",0xc7763574,"com.gamestudiohx.babylonhx.mesh.Geometry.getTotalVertices","com/gamestudiohx/babylonhx/mesh/Geometry.hx",146,0x3bb3b15d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	if ((!(this->isReady()))){
		HX_STACK_LINE(148)
		return (int)0;
	}
	HX_STACK_LINE(151)
	return this->_totalVertices;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,getTotalVertices,return )

Array< Float > Geometry_obj::getVerticesData( ::String kind){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","getVerticesData",0xc115b10c,"com.gamestudiohx.babylonhx.mesh.Geometry.getVerticesData","com/gamestudiohx/babylonhx/mesh/Geometry.hx",154,0x3bb3b15d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(kind,"kind")
	HX_STACK_LINE(155)
	::com::gamestudiohx::babylonhx::mesh::VertexBuffer vertexBuffer = this->getVertexBuffer(kind);		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
	HX_STACK_LINE(156)
	if (((vertexBuffer == null()))){
		HX_STACK_LINE(157)
		return Array_obj< Float >::__new();
	}
	HX_STACK_LINE(159)
	return vertexBuffer->getData();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,getVerticesData,return )

::com::gamestudiohx::babylonhx::mesh::VertexBuffer Geometry_obj::getVertexBuffer( ::String kind){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","getVertexBuffer",0x845b2dcd,"com.gamestudiohx.babylonhx.mesh.Geometry.getVertexBuffer","com/gamestudiohx/babylonhx/mesh/Geometry.hx",162,0x3bb3b15d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(kind,"kind")
	HX_STACK_LINE(163)
	if ((!(this->isReady()))){
		HX_STACK_LINE(164)
		return null();
	}
	HX_STACK_LINE(166)
	return this->_vertexBuffers->get(kind);
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,getVertexBuffer,return )

::haxe::ds::StringMap Geometry_obj::getVertexBuffers( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","getVertexBuffers",0x4b6ce606,"com.gamestudiohx.babylonhx.mesh.Geometry.getVertexBuffers","com/gamestudiohx/babylonhx/mesh/Geometry.hx",169,0x3bb3b15d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	if ((!(this->isReady()))){
		HX_STACK_LINE(171)
		return null();
	}
	HX_STACK_LINE(173)
	return this->_vertexBuffers;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,getVertexBuffers,return )

bool Geometry_obj::isVerticesDataPresent( ::String kind){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","isVerticesDataPresent",0x32492d81,"com.gamestudiohx.babylonhx.mesh.Geometry.isVerticesDataPresent","com/gamestudiohx/babylonhx/mesh/Geometry.hx",176,0x3bb3b15d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(kind,"kind")
	HX_STACK_LINE(177)
	if (((this->_vertexBuffers == null()))){
		HX_STACK_LINE(178)
		int _g = this->_delayInfo->indexOf(kind,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(178)
		if (((_g != (int)-1))){
			HX_STACK_LINE(179)
			return true;
		}
		HX_STACK_LINE(181)
		return false;
	}
	HX_STACK_LINE(184)
	::com::gamestudiohx::babylonhx::mesh::VertexBuffer _g1 = this->_vertexBuffers->get(kind);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(184)
	return (_g1 != null());
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,isVerticesDataPresent,return )

Array< ::String > Geometry_obj::getVerticesDataKinds( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","getVerticesDataKinds",0x9eb9bbf3,"com.gamestudiohx.babylonhx.mesh.Geometry.getVerticesDataKinds","com/gamestudiohx/babylonhx/mesh/Geometry.hx",187,0x3bb3b15d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(189)
	if (((bool((this->_vertexBuffers == null())) && bool((this->_delayInfo != null()))))){
		HX_STACK_LINE(190)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(190)
		Array< ::String > _g1 = this->_delayInfo;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(190)
		while((true)){
			HX_STACK_LINE(190)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(190)
				break;
			}
			HX_STACK_LINE(190)
			::String kind = _g1->__get(_g);		HX_STACK_VAR(kind,"kind");
			HX_STACK_LINE(190)
			++(_g);
			HX_STACK_LINE(191)
			result->push(kind);
		}
	}
	else{
		HX_STACK_LINE(194)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_vertexBuffers->keys());  __it->hasNext(); ){
			::String kind = __it->next();
			result->push(kind);
		}
	}
	HX_STACK_LINE(199)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,getVerticesDataKinds,return )

Void Geometry_obj::setIndices( Array< int > indices){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","setIndices",0x12430bf2,"com.gamestudiohx.babylonhx.mesh.Geometry.setIndices","com/gamestudiohx/babylonhx/mesh/Geometry.hx",202,0x3bb3b15d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indices,"indices")
		HX_STACK_LINE(203)
		::String _g = ::Std_obj::string(indices);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(203)
		::String _g1 = (HX_CSTRING("setIndices ===") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(203)
		::haxe::Log_obj::trace(_g1,hx::SourceInfo(HX_CSTRING("Geometry.hx"),203,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Geometry"),HX_CSTRING("setIndices")));
		HX_STACK_LINE(204)
		if (((this->_indexBuffer != null()))){
			HX_STACK_LINE(205)
			this->_engine->_releaseBuffer(this->_indexBuffer);
		}
		HX_STACK_LINE(208)
		this->_indices = indices;
		HX_STACK_LINE(209)
		::haxe::Log_obj::trace(this->_meshes->length,hx::SourceInfo(HX_CSTRING("Geometry.hx"),209,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Geometry"),HX_CSTRING("setIndices")));
		HX_STACK_LINE(210)
		::haxe::Log_obj::trace(this->_indices->length,hx::SourceInfo(HX_CSTRING("Geometry.hx"),210,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Geometry"),HX_CSTRING("setIndices")));
		HX_STACK_LINE(211)
		if (((bool((this->_meshes->length != (int)0)) && bool((this->_indices->length > (int)0))))){
			HX_STACK_LINE(212)
			::haxe::Log_obj::trace(HX_CSTRING("geometry setIndices - in pre this._indexBuffer"),hx::SourceInfo(HX_CSTRING("Geometry.hx"),212,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Geometry"),HX_CSTRING("setIndices")));
			HX_STACK_LINE(213)
			::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g2 = this->_engine->createIndexBuffer(this->_indices);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(213)
			this->_indexBuffer = _g2;
			HX_STACK_LINE(214)
			::haxe::Log_obj::trace(HX_CSTRING("geometry setIndices - in pre this._indexBuffer after???"),hx::SourceInfo(HX_CSTRING("Geometry.hx"),214,HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Geometry"),HX_CSTRING("setIndices")));
		}
		HX_STACK_LINE(217)
		Array< ::Dynamic > meshes = this->_meshes;		HX_STACK_VAR(meshes,"meshes");
		HX_STACK_LINE(218)
		int numOfMeshes = meshes->length;		HX_STACK_VAR(numOfMeshes,"numOfMeshes");
		HX_STACK_LINE(221)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(222)
		while((true)){
			HX_STACK_LINE(222)
			if ((!(((index < numOfMeshes))))){
				HX_STACK_LINE(222)
				break;
			}
			HX_STACK_LINE(223)
			meshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Mesh >()->_createGlobalSubMesh();
			HX_STACK_LINE(224)
			(index)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,setIndices,(void))

int Geometry_obj::getTotalIndices( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","getTotalIndices",0xa0045a0c,"com.gamestudiohx.babylonhx.mesh.Geometry.getTotalIndices","com/gamestudiohx/babylonhx/mesh/Geometry.hx",229,0x3bb3b15d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	if ((!(this->isReady()))){
		HX_STACK_LINE(231)
		return (int)0;
	}
	HX_STACK_LINE(233)
	return this->_indices->length;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,getTotalIndices,return )

Array< int > Geometry_obj::getIndices( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","getIndices",0x0ec56d7e,"com.gamestudiohx.babylonhx.mesh.Geometry.getIndices","com/gamestudiohx/babylonhx/mesh/Geometry.hx",236,0x3bb3b15d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(237)
	if ((!(this->isReady()))){
		HX_STACK_LINE(238)
		return null();
	}
	HX_STACK_LINE(242)
	return this->_indices;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,getIndices,return )

Dynamic Geometry_obj::getIndexBuffer( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","getIndexBuffer",0x7f7f0389,"com.gamestudiohx.babylonhx.mesh.Geometry.getIndexBuffer","com/gamestudiohx/babylonhx/mesh/Geometry.hx",245,0x3bb3b15d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(246)
	if ((!(this->isReady()))){
		HX_STACK_LINE(247)
		return null();
	}
	HX_STACK_LINE(249)
	return this->_indexBuffer;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,getIndexBuffer,return )

Void Geometry_obj::releaseForMesh( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","releaseForMesh",0x93ca395c,"com.gamestudiohx.babylonhx.mesh.Geometry.releaseForMesh","com/gamestudiohx/babylonhx/mesh/Geometry.hx",252,0x3bb3b15d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mesh,"mesh")
		HX_STACK_LINE(253)
		Array< ::Dynamic > meshes = this->_meshes;		HX_STACK_VAR(meshes,"meshes");
		HX_STACK_LINE(254)
		int index = meshes->indexOf(mesh,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(256)
		if (((index == (int)-1))){
			HX_STACK_LINE(257)
			return null();
		}
		HX_STACK_LINE(261)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_vertexBuffers->keys());  __it->hasNext(); ){
			::String kind = __it->next();
			this->_vertexBuffers->get(kind)->__Field(HX_CSTRING("dispose"),true)();
		}
		HX_STACK_LINE(265)
		if (((  (((this->_indexBuffer != null()))) ? bool(!(this->_engine->_releaseBuffer(this->_indexBuffer))) : bool(false) ))){
			HX_STACK_LINE(266)
			this->_indexBuffer = null();
		}
		HX_STACK_LINE(269)
		meshes->splice(index,(int)1);
		HX_STACK_LINE(271)
		mesh->_geometry = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,releaseForMesh,(void))

Void Geometry_obj::applyToMesh( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","applyToMesh",0x6baa1829,"com.gamestudiohx.babylonhx.mesh.Geometry.applyToMesh","com/gamestudiohx/babylonhx/mesh/Geometry.hx",274,0x3bb3b15d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mesh,"mesh")
		HX_STACK_LINE(276)
		if (((mesh->_geometry == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(277)
			return null();
		}
		HX_STACK_LINE(280)
		::com::gamestudiohx::babylonhx::mesh::Geometry previousGeometry = mesh->_geometry;		HX_STACK_VAR(previousGeometry,"previousGeometry");
		HX_STACK_LINE(281)
		if (((previousGeometry != null()))){
			HX_STACK_LINE(282)
			previousGeometry->releaseForMesh(mesh);
		}
		HX_STACK_LINE(285)
		Array< ::Dynamic > meshes = this->_meshes;		HX_STACK_VAR(meshes,"meshes");
		HX_STACK_LINE(288)
		mesh->_geometry = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(290)
		mesh->getScene()->pushGeometry(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(292)
		meshes->push(mesh);
		HX_STACK_LINE(294)
		if ((this->isReady())){
			HX_STACK_LINE(295)
			this->_applyToMesh(mesh);
		}
		else{
			HX_STACK_LINE(298)
			mesh->_boundingInfo = this->_boundingInfo;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,applyToMesh,(void))

Void Geometry_obj::_applyToMesh( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","_applyToMesh",0xd78930a4,"com.gamestudiohx.babylonhx.mesh.Geometry._applyToMesh","com/gamestudiohx/babylonhx/mesh/Geometry.hx",302,0x3bb3b15d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mesh,"mesh")
		HX_STACK_LINE(303)
		int numOfMeshes = this->_meshes->length;		HX_STACK_VAR(numOfMeshes,"numOfMeshes");
		HX_STACK_LINE(308)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_vertexBuffers->keys());  __it->hasNext(); ){
			::String kind = __it->next();
			{
				HX_STACK_LINE(309)
				if (((numOfMeshes == (int)1))){
					HX_STACK_LINE(310)
					this->_vertexBuffers->get(kind)->__Field(HX_CSTRING("create"),true)(null());
				}
				HX_STACK_LINE(312)
				this->_vertexBuffers->get(kind)->__Field(HX_CSTRING("_buffer"),true)->__FieldRef(HX_CSTRING("references")) = numOfMeshes;
				HX_STACK_LINE(314)
				if (((kind == ::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind))){
					HX_STACK_LINE(315)
					mesh->_resetPointsArrayCache();
					HX_STACK_LINE(317)
					Dynamic extend;		HX_STACK_VAR(extend,"extend");
					HX_STACK_LINE(317)
					{
						HX_STACK_LINE(317)
						Array< Float > positions = this->_vertexBuffers->get(kind)->__Field(HX_CSTRING("getData"),true)();		HX_STACK_VAR(positions,"positions");
						HX_STACK_LINE(317)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(minimum,"minimum");
						HX_STACK_LINE(317)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY);		HX_STACK_VAR(maximum,"maximum");
						HX_STACK_LINE(317)
						{
							HX_STACK_LINE(317)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(317)
							int _g = this->_totalVertices;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(317)
							while((true)){
								HX_STACK_LINE(317)
								if ((!(((_g1 < _g))))){
									HX_STACK_LINE(317)
									break;
								}
								HX_STACK_LINE(317)
								int index = (_g1)++;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(317)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 current = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(positions->__get((index * (int)3)),positions->__get(((index * (int)3) + (int)1)),positions->__get(((index * (int)3) + (int)2)));		HX_STACK_VAR(current,"current");
								HX_STACK_LINE(317)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(317)
								{
									HX_STACK_LINE(317)
									Float x;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(317)
									if (((current->x < minimum->x))){
										HX_STACK_LINE(317)
										x = current->x;
									}
									else{
										HX_STACK_LINE(317)
										x = minimum->x;
									}
									HX_STACK_LINE(317)
									Float y;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(317)
									if (((current->y < minimum->y))){
										HX_STACK_LINE(317)
										y = current->y;
									}
									else{
										HX_STACK_LINE(317)
										y = minimum->y;
									}
									HX_STACK_LINE(317)
									Float z;		HX_STACK_VAR(z,"z");
									HX_STACK_LINE(317)
									if (((current->z < minimum->z))){
										HX_STACK_LINE(317)
										z = current->z;
									}
									else{
										HX_STACK_LINE(317)
										z = minimum->z;
									}
									HX_STACK_LINE(317)
									_g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
								}
								HX_STACK_LINE(317)
								minimum = _g2;
								HX_STACK_LINE(317)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 _g11;		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(317)
								{
									HX_STACK_LINE(317)
									Float x;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(317)
									if (((current->x > maximum->x))){
										HX_STACK_LINE(317)
										x = current->x;
									}
									else{
										HX_STACK_LINE(317)
										x = maximum->x;
									}
									HX_STACK_LINE(317)
									Float y;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(317)
									if (((current->y > maximum->y))){
										HX_STACK_LINE(317)
										y = current->y;
									}
									else{
										HX_STACK_LINE(317)
										y = maximum->y;
									}
									HX_STACK_LINE(317)
									Float z;		HX_STACK_VAR(z,"z");
									HX_STACK_LINE(317)
									if (((current->z > maximum->z))){
										HX_STACK_LINE(317)
										z = current->z;
									}
									else{
										HX_STACK_LINE(317)
										z = maximum->z;
									}
									HX_STACK_LINE(317)
									_g11 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
								}
								HX_STACK_LINE(317)
								maximum = _g11;
							}
						}
						struct _Function_4_1{
							inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 &maximum){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Geometry.hx",317,0x3bb3b15d)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("minimum") , minimum,false);
									__result->Add(HX_CSTRING("maximum") , maximum,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(317)
						extend = _Function_4_1::Block(minimum,maximum);
					}
					HX_STACK_LINE(318)
					::com::gamestudiohx::babylonhx::culling::BoundingInfo _g2 = ::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__new(extend->__Field(HX_CSTRING("minimum"),true),extend->__Field(HX_CSTRING("maximum"),true));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(318)
					mesh->_boundingInfo = _g2;
					HX_STACK_LINE(320)
					mesh->_createGlobalSubMesh();
				}
			}
;
		}
		HX_STACK_LINE(325)
		if (((bool((numOfMeshes == (int)1)) && bool((this->_indices->length > (int)0))))){
			HX_STACK_LINE(326)
			::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g3 = this->_engine->createIndexBuffer(this->_indices);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(326)
			this->_indexBuffer = _g3;
		}
		HX_STACK_LINE(328)
		if (((this->_indexBuffer != null()))){
			HX_STACK_LINE(329)
			this->_indexBuffer->references = numOfMeshes;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,_applyToMesh,(void))

Void Geometry_obj::load( ::com::gamestudiohx::babylonhx::Scene scene,Dynamic onLoaded){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","load",0x463ad2b3,"com.gamestudiohx.babylonhx.mesh.Geometry.load","com/gamestudiohx/babylonhx/mesh/Geometry.hx",333,0x3bb3b15d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scene,"scene")
		HX_STACK_ARG(onLoaded,"onLoaded")
		HX_STACK_LINE(333)
		Dynamic onLoaded1 = Dynamic( Array_obj<Dynamic>::__new().Add(onLoaded));		HX_STACK_VAR(onLoaded1,"onLoaded1");
		HX_STACK_LINE(333)
		Array< ::Dynamic > scene1 = Array_obj< ::Dynamic >::__new().Add(scene);		HX_STACK_VAR(scene1,"scene1");
		HX_STACK_LINE(333)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(334)
		if (((this->delayLoadState == ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_LOADING))){
			HX_STACK_LINE(335)
			return null();
		}
		HX_STACK_LINE(338)
		if ((this->isReady())){
			HX_STACK_LINE(339)
			if ((onLoaded1->__GetItem((int)0))){
				HX_STACK_LINE(340)
				onLoaded1->__GetItem((int)0)();
			}
			HX_STACK_LINE(342)
			return null();
		}
		HX_STACK_LINE(345)
		this->delayLoadState = ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_LOADING;
		HX_STACK_LINE(347)
		scene1->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >()->_addPendingData(hx::ObjectPtr<OBJ_>(this));

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,scene1,Array< ::Dynamic >,_g,Dynamic,onLoaded1)
		Void run(::String data){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/gamestudiohx/babylonhx/mesh/Geometry.hx",348,0x3bb3b15d)
			HX_STACK_ARG(data,"data")
			{
				HX_STACK_LINE(349)
				_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Geometry >()->_delayLoadingFunction(data,_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Geometry >());
				HX_STACK_LINE(351)
				_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Geometry >()->delayLoadState = ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_LOADED;
				HX_STACK_LINE(352)
				_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Geometry >()->_delayInfo = Array_obj< ::String >::__new();
				HX_STACK_LINE(354)
				scene1->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >()->_removePendingData(_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Geometry >());
				HX_STACK_LINE(356)
				Array< ::Dynamic > meshes = _g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Geometry >()->_meshes;		HX_STACK_VAR(meshes,"meshes");
				HX_STACK_LINE(357)
				int numOfMeshes = meshes->length;		HX_STACK_VAR(numOfMeshes,"numOfMeshes");
				HX_STACK_LINE(360)
				int index = (int)0;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(361)
				while(((index < numOfMeshes))){
					HX_STACK_LINE(362)
					_g->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Geometry >()->_applyToMesh(meshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Mesh >());
					HX_STACK_LINE(363)
					(index)++;
				}
				HX_STACK_LINE(366)
				if ((onLoaded1->__GetItem((int)0))){
					HX_STACK_LINE(367)
					onLoaded1->__GetItem((int)0)();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))


		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/gamestudiohx/babylonhx/mesh/Geometry.hx",369,0x3bb3b15d)
			{
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(348)
		::com::gamestudiohx::babylonhx::tools::Tools_obj::LoadFile(this->delayLoadingFile, Dynamic(new _Function_1_1(scene1,_g,onLoaded1)), Dynamic(new _Function_1_2()),scene1->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >()->database,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Geometry_obj,load,(void))

Void Geometry_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","dispose",0xd1cf5e32,"com.gamestudiohx.babylonhx.mesh.Geometry.dispose","com/gamestudiohx/babylonhx/mesh/Geometry.hx",372,0x3bb3b15d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(373)
		Array< ::Dynamic > meshes = this->_meshes;		HX_STACK_VAR(meshes,"meshes");
		HX_STACK_LINE(374)
		int numOfMeshes = meshes->length;		HX_STACK_VAR(numOfMeshes,"numOfMeshes");
		HX_STACK_LINE(377)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(378)
		while((true)){
			HX_STACK_LINE(378)
			if ((!(((index < numOfMeshes))))){
				HX_STACK_LINE(378)
				break;
			}
			HX_STACK_LINE(379)
			this->releaseForMesh(meshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::Mesh >());
			HX_STACK_LINE(380)
			(index)++;
		}
		HX_STACK_LINE(383)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(383)
		this->_meshes = _g;
		HX_STACK_LINE(386)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_vertexBuffers->keys());  __it->hasNext(); ){
			::String kind = __it->next();
			this->_vertexBuffers->get(kind)->__Field(HX_CSTRING("dispose"),true)();
		}
		HX_STACK_LINE(389)
		::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(389)
		this->_vertexBuffers = _g1;
		HX_STACK_LINE(390)
		this->_totalVertices = (int)0;
		HX_STACK_LINE(392)
		if (((this->_indexBuffer != null()))){
			HX_STACK_LINE(393)
			this->_engine->_releaseBuffer(this->_indexBuffer);
		}
		HX_STACK_LINE(395)
		this->_indexBuffer = null();
		HX_STACK_LINE(396)
		Array< int > _g2 = Array_obj< int >::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(396)
		this->_indices = _g2;
		HX_STACK_LINE(398)
		this->delayLoadState = ::com::gamestudiohx::babylonhx::Engine_obj::DELAYLOADSTATE_NONE;
		HX_STACK_LINE(399)
		this->delayLoadingFile = null();
		HX_STACK_LINE(400)
		this->_delayLoadingFunction = null();
		HX_STACK_LINE(401)
		Array< ::String > _g3 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(401)
		this->_delayInfo = _g3;
		HX_STACK_LINE(403)
		this->_boundingInfo = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,dispose,(void))

::com::gamestudiohx::babylonhx::mesh::Geometry Geometry_obj::copy( ::String id){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","copy",0x4047f442,"com.gamestudiohx.babylonhx.mesh.Geometry.copy","com/gamestudiohx/babylonhx/mesh/Geometry.hx",406,0x3bb3b15d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(407)
	::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::__new();		HX_STACK_VAR(vertexData,"vertexData");
	HX_STACK_LINE(409)
	Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(409)
	vertexData->indices = _g;
	HX_STACK_LINE(411)
	Array< int > indices = this->getIndices();		HX_STACK_VAR(indices,"indices");
	HX_STACK_LINE(414)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(415)
	while((true)){
		HX_STACK_LINE(415)
		if ((!(((index < indices->length))))){
			HX_STACK_LINE(415)
			break;
		}
		HX_STACK_LINE(416)
		vertexData->indices->push(indices->__get(index));
		HX_STACK_LINE(417)
		(index)++;
	}
	HX_STACK_LINE(421)
	bool updatable = false;		HX_STACK_VAR(updatable,"updatable");
	HX_STACK_LINE(422)
	bool stopChecking = false;		HX_STACK_VAR(stopChecking,"stopChecking");
	HX_STACK_LINE(426)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_vertexBuffers->keys());  __it->hasNext(); ){
		::String kind = __it->next();
		{
			HX_STACK_LINE(427)
			Array< Float > _g1 = this->getVerticesData(kind);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(427)
			vertexData->set(_g1,kind);
			HX_STACK_LINE(428)
			if ((!(stopChecking))){
				HX_STACK_LINE(429)
				bool _g2 = this->getVertexBuffer(kind)->isUpdatable();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(429)
				updatable = _g2;
				HX_STACK_LINE(430)
				stopChecking = !(updatable);
			}
		}
;
	}
	HX_STACK_LINE(435)
	::com::gamestudiohx::babylonhx::mesh::Geometry geometry = ::com::gamestudiohx::babylonhx::mesh::Geometry_obj::__new(id,this->_engine,vertexData,updatable,null());		HX_STACK_VAR(geometry,"geometry");
	HX_STACK_LINE(437)
	geometry->delayLoadState = this->delayLoadState;
	HX_STACK_LINE(438)
	geometry->delayLoadingFile = this->delayLoadingFile;
	HX_STACK_LINE(439)
	geometry->_delayLoadingFunction = this->_delayLoadingFunction_dyn();
	HX_STACK_LINE(441)
	{
		HX_STACK_LINE(441)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(441)
		Array< ::String > _g11 = this->_delayInfo;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(441)
		while((true)){
			HX_STACK_LINE(441)
			if ((!(((_g1 < _g11->length))))){
				HX_STACK_LINE(441)
				break;
			}
			HX_STACK_LINE(441)
			::String kind = _g11->__get(_g1);		HX_STACK_VAR(kind,"kind");
			HX_STACK_LINE(441)
			++(_g1);
			HX_STACK_LINE(442)
			if (((geometry->_delayInfo == null()))){
				HX_STACK_LINE(443)
				Array< ::String > _g3 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(443)
				geometry->_delayInfo = _g3;
			}
			HX_STACK_LINE(445)
			geometry->_delayInfo->push(kind);
		}
	}
	HX_STACK_LINE(449)
	Dynamic extend;		HX_STACK_VAR(extend,"extend");
	HX_STACK_LINE(449)
	{
		HX_STACK_LINE(449)
		Array< Float > positions = this->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(449)
		int count = this->getTotalVertices();		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(449)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(minimum,"minimum");
		HX_STACK_LINE(449)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY);		HX_STACK_VAR(maximum,"maximum");
		HX_STACK_LINE(449)
		{
			HX_STACK_LINE(449)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(449)
			int _g2 = count;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(449)
			while((true)){
				HX_STACK_LINE(449)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(449)
					break;
				}
				HX_STACK_LINE(449)
				int index1 = (_g1)++;		HX_STACK_VAR(index1,"index1");
				HX_STACK_LINE(449)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 current = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(positions->__get((index1 * (int)3)),positions->__get(((index1 * (int)3) + (int)1)),positions->__get(((index1 * (int)3) + (int)2)));		HX_STACK_VAR(current,"current");
				HX_STACK_LINE(449)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(449)
				{
					HX_STACK_LINE(449)
					Float x;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(449)
					if (((current->x < minimum->x))){
						HX_STACK_LINE(449)
						x = current->x;
					}
					else{
						HX_STACK_LINE(449)
						x = minimum->x;
					}
					HX_STACK_LINE(449)
					Float y;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(449)
					if (((current->y < minimum->y))){
						HX_STACK_LINE(449)
						y = current->y;
					}
					else{
						HX_STACK_LINE(449)
						y = minimum->y;
					}
					HX_STACK_LINE(449)
					Float z;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(449)
					if (((current->z < minimum->z))){
						HX_STACK_LINE(449)
						z = current->z;
					}
					else{
						HX_STACK_LINE(449)
						z = minimum->z;
					}
					HX_STACK_LINE(449)
					_g4 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
				}
				HX_STACK_LINE(449)
				minimum = _g4;
				HX_STACK_LINE(449)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(449)
				{
					HX_STACK_LINE(449)
					Float x;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(449)
					if (((current->x > maximum->x))){
						HX_STACK_LINE(449)
						x = current->x;
					}
					else{
						HX_STACK_LINE(449)
						x = maximum->x;
					}
					HX_STACK_LINE(449)
					Float y;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(449)
					if (((current->y > maximum->y))){
						HX_STACK_LINE(449)
						y = current->y;
					}
					else{
						HX_STACK_LINE(449)
						y = maximum->y;
					}
					HX_STACK_LINE(449)
					Float z;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(449)
					if (((current->z > maximum->z))){
						HX_STACK_LINE(449)
						z = current->z;
					}
					else{
						HX_STACK_LINE(449)
						z = maximum->z;
					}
					HX_STACK_LINE(449)
					_g5 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
				}
				HX_STACK_LINE(449)
				maximum = _g5;
			}
		}
		struct _Function_2_1{
			inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 &maximum){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/Geometry.hx",449,0x3bb3b15d)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("minimum") , minimum,false);
					__result->Add(HX_CSTRING("maximum") , maximum,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(449)
		extend = _Function_2_1::Block(minimum,maximum);
	}
	HX_STACK_LINE(450)
	::com::gamestudiohx::babylonhx::culling::BoundingInfo _g6 = ::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__new(extend->__Field(HX_CSTRING("minimum"),true),extend->__Field(HX_CSTRING("maximum"),true));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(450)
	geometry->_boundingInfo = _g6;
	HX_STACK_LINE(452)
	return geometry;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,copy,return )

::com::gamestudiohx::babylonhx::mesh::Geometry Geometry_obj::ExtractFromMesh( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh,::String id){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","ExtractFromMesh",0x829d634b,"com.gamestudiohx.babylonhx.mesh.Geometry.ExtractFromMesh","com/gamestudiohx/babylonhx/mesh/Geometry.hx",457,0x3bb3b15d)
	HX_STACK_ARG(mesh,"mesh")
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(458)
	::com::gamestudiohx::babylonhx::mesh::Geometry geometry = mesh->_geometry;		HX_STACK_VAR(geometry,"geometry");
	HX_STACK_LINE(460)
	if (((geometry == null()))){
		HX_STACK_LINE(461)
		return null();
	}
	HX_STACK_LINE(464)
	return geometry->copy(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Geometry_obj,ExtractFromMesh,return )

::String Geometry_obj::RandomId( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.Geometry","RandomId",0x88cee7eb,"com.gamestudiohx.babylonhx.mesh.Geometry.RandomId","com/gamestudiohx/babylonhx/mesh/Geometry.hx",470,0x3bb3b15d)
	HX_STACK_LINE(471)
	Array< ::String > CHARS = HX_CSTRING("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz").split(HX_CSTRING(""));		HX_STACK_VAR(CHARS,"CHARS");
	HX_STACK_LINE(472)
	Array< ::String > chars = CHARS;		HX_STACK_VAR(chars,"chars");
	HX_STACK_LINE(472)
	Array< ::String > uuid = Array_obj< ::String >::__new();		HX_STACK_VAR(uuid,"uuid");
	HX_STACK_LINE(472)
	int rnd = (int)0;		HX_STACK_VAR(rnd,"rnd");
	HX_STACK_LINE(472)
	int r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(473)
	{
		HX_STACK_LINE(473)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(473)
		while((true)){
			HX_STACK_LINE(473)
			if ((!(((_g < (int)36))))){
				HX_STACK_LINE(473)
				break;
			}
			HX_STACK_LINE(473)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(474)
			if (((bool((bool((bool((i == (int)8)) || bool((i == (int)13)))) || bool((i == (int)18)))) || bool((i == (int)23))))){
				HX_STACK_LINE(475)
				uuid[i] = HX_CSTRING("-");
			}
			else{
				HX_STACK_LINE(476)
				if (((i == (int)14))){
					HX_STACK_LINE(477)
					uuid[i] = HX_CSTRING("4");
				}
				else{
					HX_STACK_LINE(479)
					if (((rnd <= (int)2))){
						HX_STACK_LINE(479)
						Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(479)
						::String _g11 = HX_CSTRING("16777216");		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(479)
						Float _g2 = ::Std_obj::parseFloat(_g11);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(479)
						Float _g3 = (_g1 * _g2);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(479)
						::String _g4 = ::Std_obj::string(_g3);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(479)
						Dynamic _g5 = ::Std_obj::parseInt(_g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(479)
						int _g6 = ((int)33554432 + _g5);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(479)
						int _g7 = (int(_g6) | int((int)0));		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(479)
						rnd = _g7;
					}
					HX_STACK_LINE(480)
					r = (int(rnd) & int((int)15));
					HX_STACK_LINE(481)
					rnd = (int(rnd) >> int((int)4));
					HX_STACK_LINE(482)
					uuid[i] = chars->__get((  (((i == (int)19))) ? int((int((int(r) & int((int)3))) | int((int)8))) : int(r) ));
				}
			}
		}
	}
	HX_STACK_LINE(485)
	return uuid->join(HX_CSTRING(""));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,RandomId,return )


Geometry_obj::Geometry_obj()
{
}

void Geometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Geometry);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(delayLoadState,"delayLoadState");
	HX_MARK_MEMBER_NAME(delayLoadingFile,"delayLoadingFile");
	HX_MARK_MEMBER_NAME(_engine,"_engine");
	HX_MARK_MEMBER_NAME(_meshes,"_meshes");
	HX_MARK_MEMBER_NAME(_totalVertices,"_totalVertices");
	HX_MARK_MEMBER_NAME(_indices,"_indices");
	HX_MARK_MEMBER_NAME(_vertexBuffers,"_vertexBuffers");
	HX_MARK_MEMBER_NAME(_delayInfo,"_delayInfo");
	HX_MARK_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_MARK_MEMBER_NAME(_boundingInfo,"_boundingInfo");
	HX_MARK_MEMBER_NAME(_delayLoadingFunction,"_delayLoadingFunction");
	HX_MARK_END_CLASS();
}

void Geometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(delayLoadState,"delayLoadState");
	HX_VISIT_MEMBER_NAME(delayLoadingFile,"delayLoadingFile");
	HX_VISIT_MEMBER_NAME(_engine,"_engine");
	HX_VISIT_MEMBER_NAME(_meshes,"_meshes");
	HX_VISIT_MEMBER_NAME(_totalVertices,"_totalVertices");
	HX_VISIT_MEMBER_NAME(_indices,"_indices");
	HX_VISIT_MEMBER_NAME(_vertexBuffers,"_vertexBuffers");
	HX_VISIT_MEMBER_NAME(_delayInfo,"_delayInfo");
	HX_VISIT_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_VISIT_MEMBER_NAME(_boundingInfo,"_boundingInfo");
	HX_VISIT_MEMBER_NAME(_delayLoadingFunction,"_delayLoadingFunction");
}

Dynamic Geometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_engine") ) { return _engine; }
		if (HX_FIELD_EQ(inName,"_meshes") ) { return _meshes; }
		if (HX_FIELD_EQ(inName,"isReady") ) { return isReady_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"RandomId") ) { return RandomId_dyn(); }
		if (HX_FIELD_EQ(inName,"_indices") ) { return _indices; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getEngine") ) { return getEngine_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_delayInfo") ) { return _delayInfo; }
		if (HX_FIELD_EQ(inName,"setIndices") ) { return setIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"getIndices") ) { return getIndices_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"applyToMesh") ) { return applyToMesh_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { return _indexBuffer; }
		if (HX_FIELD_EQ(inName,"_applyToMesh") ) { return _applyToMesh_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_boundingInfo") ) { return _boundingInfo; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"delayLoadState") ) { return delayLoadState; }
		if (HX_FIELD_EQ(inName,"_totalVertices") ) { return _totalVertices; }
		if (HX_FIELD_EQ(inName,"_vertexBuffers") ) { return _vertexBuffers; }
		if (HX_FIELD_EQ(inName,"getIndexBuffer") ) { return getIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"releaseForMesh") ) { return releaseForMesh_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ExtractFromMesh") ) { return ExtractFromMesh_dyn(); }
		if (HX_FIELD_EQ(inName,"setVerticesData") ) { return setVerticesData_dyn(); }
		if (HX_FIELD_EQ(inName,"getVerticesData") ) { return getVerticesData_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexBuffer") ) { return getVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getTotalIndices") ) { return getTotalIndices_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"delayLoadingFile") ) { return delayLoadingFile; }
		if (HX_FIELD_EQ(inName,"getTotalVertices") ) { return getTotalVertices_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexBuffers") ) { return getVertexBuffers_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setAllVerticesData") ) { return setAllVerticesData_dyn(); }
		if (HX_FIELD_EQ(inName,"updateVerticesData") ) { return updateVerticesData_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getVerticesDataKinds") ) { return getVerticesDataKinds_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_delayLoadingFunction") ) { return _delayLoadingFunction; }
		if (HX_FIELD_EQ(inName,"isVerticesDataPresent") ) { return isVerticesDataPresent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Geometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_engine") ) { _engine=inValue.Cast< ::com::gamestudiohx::babylonhx::Engine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_meshes") ) { _meshes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_indices") ) { _indices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_delayInfo") ) { _delayInfo=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { _indexBuffer=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_boundingInfo") ) { _boundingInfo=inValue.Cast< ::com::gamestudiohx::babylonhx::culling::BoundingInfo >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"delayLoadState") ) { delayLoadState=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_totalVertices") ) { _totalVertices=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexBuffers") ) { _vertexBuffers=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"delayLoadingFile") ) { delayLoadingFile=inValue.Cast< ::String >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_delayLoadingFunction") ) { _delayLoadingFunction=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Geometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("delayLoadState"));
	outFields->push(HX_CSTRING("delayLoadingFile"));
	outFields->push(HX_CSTRING("_engine"));
	outFields->push(HX_CSTRING("_meshes"));
	outFields->push(HX_CSTRING("_totalVertices"));
	outFields->push(HX_CSTRING("_indices"));
	outFields->push(HX_CSTRING("_vertexBuffers"));
	outFields->push(HX_CSTRING("_delayInfo"));
	outFields->push(HX_CSTRING("_indexBuffer"));
	outFields->push(HX_CSTRING("_boundingInfo"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ExtractFromMesh"),
	HX_CSTRING("RandomId"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Geometry_obj,id),HX_CSTRING("id")},
	{hx::fsInt,(int)offsetof(Geometry_obj,delayLoadState),HX_CSTRING("delayLoadState")},
	{hx::fsString,(int)offsetof(Geometry_obj,delayLoadingFile),HX_CSTRING("delayLoadingFile")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Engine*/ ,(int)offsetof(Geometry_obj,_engine),HX_CSTRING("_engine")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Geometry_obj,_meshes),HX_CSTRING("_meshes")},
	{hx::fsInt,(int)offsetof(Geometry_obj,_totalVertices),HX_CSTRING("_totalVertices")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Geometry_obj,_indices),HX_CSTRING("_indices")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Geometry_obj,_vertexBuffers),HX_CSTRING("_vertexBuffers")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Geometry_obj,_delayInfo),HX_CSTRING("_delayInfo")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer*/ ,(int)offsetof(Geometry_obj,_indexBuffer),HX_CSTRING("_indexBuffer")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::culling::BoundingInfo*/ ,(int)offsetof(Geometry_obj,_boundingInfo),HX_CSTRING("_boundingInfo")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Geometry_obj,_delayLoadingFunction),HX_CSTRING("_delayLoadingFunction")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("delayLoadState"),
	HX_CSTRING("delayLoadingFile"),
	HX_CSTRING("_engine"),
	HX_CSTRING("_meshes"),
	HX_CSTRING("_totalVertices"),
	HX_CSTRING("_indices"),
	HX_CSTRING("_vertexBuffers"),
	HX_CSTRING("_delayInfo"),
	HX_CSTRING("_indexBuffer"),
	HX_CSTRING("_boundingInfo"),
	HX_CSTRING("_delayLoadingFunction"),
	HX_CSTRING("getEngine"),
	HX_CSTRING("isReady"),
	HX_CSTRING("setAllVerticesData"),
	HX_CSTRING("setVerticesData"),
	HX_CSTRING("updateVerticesData"),
	HX_CSTRING("getTotalVertices"),
	HX_CSTRING("getVerticesData"),
	HX_CSTRING("getVertexBuffer"),
	HX_CSTRING("getVertexBuffers"),
	HX_CSTRING("isVerticesDataPresent"),
	HX_CSTRING("getVerticesDataKinds"),
	HX_CSTRING("setIndices"),
	HX_CSTRING("getTotalIndices"),
	HX_CSTRING("getIndices"),
	HX_CSTRING("getIndexBuffer"),
	HX_CSTRING("releaseForMesh"),
	HX_CSTRING("applyToMesh"),
	HX_CSTRING("_applyToMesh"),
	HX_CSTRING("load"),
	HX_CSTRING("dispose"),
	HX_CSTRING("copy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Geometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Geometry_obj::__mClass,"__mClass");
};

#endif

Class Geometry_obj::__mClass;

void Geometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.mesh.Geometry"), hx::TCanCast< Geometry_obj> ,sStaticFields,sMemberFields,
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

void Geometry_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh
