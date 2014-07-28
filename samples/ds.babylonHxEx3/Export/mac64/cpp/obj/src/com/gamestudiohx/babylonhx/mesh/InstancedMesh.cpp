#include <hxcpp.h>

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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingInfo
#include <com/gamestudiohx/babylonhx/culling/BoundingInfo.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_IGetSetVerticesData
#include <com/gamestudiohx/babylonhx/mesh/IGetSetVerticesData.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_InstancedMesh
#include <com/gamestudiohx/babylonhx/mesh/InstancedMesh.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{

Void InstancedMesh_obj::__construct(::String name,::com::gamestudiohx::babylonhx::mesh::Mesh source)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.InstancedMesh","new",0x2b6e797f,"com.gamestudiohx.babylonhx.mesh.InstancedMesh.new","com/gamestudiohx/babylonhx/mesh/InstancedMesh.hx",24,0x594e4fd1)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(source,"source")
{
	HX_STACK_LINE(25)
	::com::gamestudiohx::babylonhx::Scene _g = source->getScene();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(25)
	super::__construct(name,_g);
	HX_STACK_LINE(27)
	source->instances->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(29)
	this->_sourceMesh = source;
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->position;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(31)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 source1 = source->position;		HX_STACK_VAR(source1,"source1");
		HX_STACK_LINE(31)
		_this->x = source1->x;
		HX_STACK_LINE(31)
		_this->y = source1->y;
		HX_STACK_LINE(31)
		_this->z = source1->z;
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->rotation;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(32)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 source1 = source->rotation;		HX_STACK_VAR(source1,"source1");
		HX_STACK_LINE(32)
		_this->x = source1->x;
		HX_STACK_LINE(32)
		_this->y = source1->y;
		HX_STACK_LINE(32)
		_this->z = source1->z;
	}
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = this->scaling;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(33)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 source1 = source->scaling;		HX_STACK_VAR(source1,"source1");
		HX_STACK_LINE(33)
		_this->x = source1->x;
		HX_STACK_LINE(33)
		_this->y = source1->y;
		HX_STACK_LINE(33)
		_this->z = source1->z;
	}
	HX_STACK_LINE(35)
	if (((source->rotationQuaternion != null()))){
		HX_STACK_LINE(36)
		::com::gamestudiohx::babylonhx::tools::math::Quaternion _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = source->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(36)
			_g1 = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(_this->x,_this->y,_this->z,_this->w);
		}
		HX_STACK_LINE(36)
		this->rotationQuaternion = _g1;
	}
	HX_STACK_LINE(39)
	this->infiniteDistance = source->infiniteDistance;
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::com::gamestudiohx::babylonhx::tools::math::Matrix matrix = source->getPivotMatrix();		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(41)
		this->_pivotMatrix = matrix;
		HX_STACK_LINE(41)
		this->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = true;
	}
	HX_STACK_LINE(43)
	this->refreshBoundingInfo();
	HX_STACK_LINE(44)
	this->_syncSubMeshes();
}
;
	return null();
}

//InstancedMesh_obj::~InstancedMesh_obj() { }

Dynamic InstancedMesh_obj::__CreateEmpty() { return  new InstancedMesh_obj; }
hx::ObjectPtr< InstancedMesh_obj > InstancedMesh_obj::__new(::String name,::com::gamestudiohx::babylonhx::mesh::Mesh source)
{  hx::ObjectPtr< InstancedMesh_obj > result = new InstancedMesh_obj();
	result->__construct(name,source);
	return result;}

Dynamic InstancedMesh_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InstancedMesh_obj > result = new InstancedMesh_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void InstancedMesh_obj::refreshBoundingInfo( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.InstancedMesh","refreshBoundingInfo",0x7d1d978c,"com.gamestudiohx.babylonhx.mesh.InstancedMesh.refreshBoundingInfo","com/gamestudiohx/babylonhx/mesh/InstancedMesh.hx",102,0x594e4fd1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		Array< Float > data = this->_sourceMesh->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(105)
		if (((data->length > (int)0))){
			HX_STACK_LINE(106)
			Dynamic extend;		HX_STACK_VAR(extend,"extend");
			HX_STACK_LINE(106)
			{
				HX_STACK_LINE(106)
				int count = this->_sourceMesh->getTotalVertices();		HX_STACK_VAR(count,"count");
				HX_STACK_LINE(106)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(minimum,"minimum");
				HX_STACK_LINE(106)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY);		HX_STACK_VAR(maximum,"maximum");
				HX_STACK_LINE(106)
				{
					HX_STACK_LINE(106)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(106)
					int _g = count;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(106)
					while((true)){
						HX_STACK_LINE(106)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(106)
							break;
						}
						HX_STACK_LINE(106)
						int index = (_g1)++;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(106)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 current = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data->__get((index * (int)3)),data->__get(((index * (int)3) + (int)1)),data->__get(((index * (int)3) + (int)2)));		HX_STACK_VAR(current,"current");
						HX_STACK_LINE(106)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(106)
						{
							HX_STACK_LINE(106)
							Float x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(106)
							if (((current->x < minimum->x))){
								HX_STACK_LINE(106)
								x = current->x;
							}
							else{
								HX_STACK_LINE(106)
								x = minimum->x;
							}
							HX_STACK_LINE(106)
							Float y;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(106)
							if (((current->y < minimum->y))){
								HX_STACK_LINE(106)
								y = current->y;
							}
							else{
								HX_STACK_LINE(106)
								y = minimum->y;
							}
							HX_STACK_LINE(106)
							Float z;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(106)
							if (((current->z < minimum->z))){
								HX_STACK_LINE(106)
								z = current->z;
							}
							else{
								HX_STACK_LINE(106)
								z = minimum->z;
							}
							HX_STACK_LINE(106)
							_g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
						}
						HX_STACK_LINE(106)
						minimum = _g2;
						HX_STACK_LINE(106)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(106)
						{
							HX_STACK_LINE(106)
							Float x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(106)
							if (((current->x > maximum->x))){
								HX_STACK_LINE(106)
								x = current->x;
							}
							else{
								HX_STACK_LINE(106)
								x = maximum->x;
							}
							HX_STACK_LINE(106)
							Float y;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(106)
							if (((current->y > maximum->y))){
								HX_STACK_LINE(106)
								y = current->y;
							}
							else{
								HX_STACK_LINE(106)
								y = maximum->y;
							}
							HX_STACK_LINE(106)
							Float z;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(106)
							if (((current->z > maximum->z))){
								HX_STACK_LINE(106)
								z = current->z;
							}
							else{
								HX_STACK_LINE(106)
								z = maximum->z;
							}
							HX_STACK_LINE(106)
							_g11 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
						}
						HX_STACK_LINE(106)
						maximum = _g11;
					}
				}
				struct _Function_3_1{
					inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 &maximum){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/InstancedMesh.hx",106,0x594e4fd1)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("minimum") , minimum,false);
							__result->Add(HX_CSTRING("maximum") , maximum,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(106)
				extend = _Function_3_1::Block(minimum,maximum);
			}
			HX_STACK_LINE(107)
			::com::gamestudiohx::babylonhx::culling::BoundingInfo _g2 = ::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__new(extend->__Field(HX_CSTRING("minimum"),true),extend->__Field(HX_CSTRING("maximum"),true));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(107)
			this->_boundingInfo = _g2;
		}
		HX_STACK_LINE(110)
		if (((this->_boundingInfo != null()))){
			HX_STACK_LINE(110)
			Float _g3 = ::Math_obj::max(this->scaling->x,this->scaling->y);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(110)
			this->_scaleFactor = _g3;
			HX_STACK_LINE(110)
			Float _g4 = ::Math_obj::max(this->_scaleFactor,this->scaling->z);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(110)
			this->_scaleFactor = _g4;
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::com::gamestudiohx::babylonhx::mesh::InstancedMesh_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/InstancedMesh.hx",110,0x594e4fd1)
					{
						HX_STACK_LINE(110)
						Dynamic _g5 = ::Reflect_obj::field(__this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(110)
						return (_g5 != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(110)
			if (((  (((this->parent != null()))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(110)
				Dynamic _g6 = ::Reflect_obj::field(this->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(110)
				Float _g7 = (this->_scaleFactor * _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(110)
				this->_scaleFactor = _g7;
			}
			HX_STACK_LINE(110)
			this->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(110)
				int _g = this->subMeshes->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(110)
				while((true)){
					HX_STACK_LINE(110)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(110)
						break;
					}
					HX_STACK_LINE(110)
					int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
					HX_STACK_LINE(110)
					::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = this->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
					HX_STACK_LINE(110)
					subMesh->_boundingInfo->_update(this->_worldMatrix,this->_scaleFactor);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InstancedMesh_obj,refreshBoundingInfo,(void))

Void InstancedMesh_obj::_activate( int renderId){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.InstancedMesh","_activate",0x5c5add71,"com.gamestudiohx.babylonhx.mesh.InstancedMesh._activate","com/gamestudiohx/babylonhx/mesh/InstancedMesh.hx",114,0x594e4fd1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderId,"renderId")
		HX_STACK_LINE(114)
		this->_sourceMesh->_registerInstanceForRenderId(hx::ObjectPtr<OBJ_>(this),renderId);
	}
return null();
}


Void InstancedMesh_obj::_syncSubMeshes( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.InstancedMesh","_syncSubMeshes",0x4126a4e2,"com.gamestudiohx.babylonhx.mesh.InstancedMesh._syncSubMeshes","com/gamestudiohx/babylonhx/mesh/InstancedMesh.hx",117,0x594e4fd1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		this->releaseSubMeshes();
		HX_STACK_LINE(121)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(122)
		while((true)){
			HX_STACK_LINE(122)
			if ((!(((index < this->_sourceMesh->subMeshes->length))))){
				HX_STACK_LINE(122)
				break;
			}
			HX_STACK_LINE(123)
			this->_sourceMesh->subMeshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >()->clone(hx::ObjectPtr<OBJ_>(this),this->_sourceMesh);
			HX_STACK_LINE(124)
			(index)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InstancedMesh_obj,_syncSubMeshes,(void))

bool InstancedMesh_obj::_generatePointsArray( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.InstancedMesh","_generatePointsArray",0xffb5b243,"com.gamestudiohx.babylonhx.mesh.InstancedMesh._generatePointsArray","com/gamestudiohx/babylonhx/mesh/InstancedMesh.hx",130,0x594e4fd1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	return this->_sourceMesh->_generatePointsArray();
}


::com::gamestudiohx::babylonhx::mesh::AbstractMesh InstancedMesh_obj::clone( ::String name,::com::gamestudiohx::babylonhx::mesh::Mesh _tmp_newParent,hx::Null< bool >  __o_doNotCloneChildren){
bool doNotCloneChildren = __o_doNotCloneChildren.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.InstancedMesh","clone",0x6e51823c,"com.gamestudiohx.babylonhx.mesh.InstancedMesh.clone","com/gamestudiohx/babylonhx/mesh/InstancedMesh.hx",135,0x594e4fd1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(_tmp_newParent,"_tmp_newParent")
	HX_STACK_ARG(doNotCloneChildren,"doNotCloneChildren")
{
		HX_STACK_LINE(136)
		::com::gamestudiohx::babylonhx::Node newParent = _tmp_newParent;		HX_STACK_VAR(newParent,"newParent");
		HX_STACK_LINE(136)
		::com::gamestudiohx::babylonhx::mesh::InstancedMesh result = this->_sourceMesh->createInstance(name);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(139)
		::com::gamestudiohx::babylonhx::tools::Tools_obj::DeepCopy(hx::ObjectPtr<OBJ_>(this),result,Array_obj< ::String >::__new().Add(HX_CSTRING("name")),Array_obj< ::String >::__new());
		HX_STACK_LINE(142)
		this->refreshBoundingInfo();
		HX_STACK_LINE(145)
		if (((newParent != null()))){
			HX_STACK_LINE(146)
			result->parent = newParent;
		}
		HX_STACK_LINE(149)
		if ((!(doNotCloneChildren))){
			HX_STACK_LINE(153)
			int index = (int)0;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(154)
			while((true)){
				HX_STACK_LINE(154)
				if ((!(((index < this->getScene()->meshes->length))))){
					HX_STACK_LINE(154)
					break;
				}
				HX_STACK_LINE(155)
				::com::gamestudiohx::babylonhx::mesh::InstancedMesh mesh;		HX_STACK_VAR(mesh,"mesh");
				HX_STACK_LINE(155)
				mesh = hx::TCast< com::gamestudiohx::babylonhx::mesh::InstancedMesh >::cast(this->getScene()->meshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >());
				HX_STACK_LINE(157)
				if (((mesh->parent == hx::ObjectPtr<OBJ_>(this)))){
					HX_STACK_LINE(158)
					hx::TCast< ::com::gamestudiohx::babylonhx::mesh::InstancedMesh >::cast(mesh->clone(mesh->name,result,null()));
				}
				HX_STACK_LINE(160)
				(index)++;
			}
		}
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			::com::gamestudiohx::babylonhx::tools::math::Matrix ret = result->_worldMatrix;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(165)
			{
				HX_STACK_LINE(165)
				result->_childrenFlag = (int)1;
				HX_STACK_LINE(165)
				result->_cache->__Field(HX_CSTRING("position"),true)->__Field(HX_CSTRING("copyFrom"),true)(result->position);
				HX_STACK_LINE(165)
				result->_cache->__Field(HX_CSTRING("scaling"),true)->__Field(HX_CSTRING("copyFrom"),true)(result->scaling);
				HX_STACK_LINE(165)
				result->_cache->__FieldRef(HX_CSTRING("pivotMatrixUpdated")) = false;
				HX_STACK_LINE(165)
				int _g1 = result->_scene->getRenderId();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(165)
				result->_currentRenderId = _g1;
				HX_STACK_LINE(165)
				{
					HX_STACK_LINE(165)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = result->_localScaling;		HX_STACK_VAR(result1,"result1");
					HX_STACK_LINE(165)
					result1->m[(int)0] = result->scaling->x;
					HX_STACK_LINE(165)
					result1->m[(int)1] = (int)0;
					HX_STACK_LINE(165)
					result1->m[(int)2] = (int)0;
					HX_STACK_LINE(165)
					result1->m[(int)3] = (int)0;
					HX_STACK_LINE(165)
					result1->m[(int)4] = (int)0;
					HX_STACK_LINE(165)
					result1->m[(int)5] = result->scaling->y;
					HX_STACK_LINE(165)
					result1->m[(int)6] = (int)0;
					HX_STACK_LINE(165)
					result1->m[(int)7] = (int)0;
					HX_STACK_LINE(165)
					result1->m[(int)8] = (int)0;
					HX_STACK_LINE(165)
					result1->m[(int)9] = (int)0;
					HX_STACK_LINE(165)
					result1->m[(int)10] = result->scaling->z;
					HX_STACK_LINE(165)
					result1->m[(int)11] = (int)0;
					HX_STACK_LINE(165)
					result1->m[(int)12] = (int)0;
					HX_STACK_LINE(165)
					result1->m[(int)13] = (int)0;
					HX_STACK_LINE(165)
					result1->m[(int)14] = (int)0;
					HX_STACK_LINE(165)
					result1->m[(int)15] = 1.0;
					HX_STACK_LINE(165)
					result1;
				}
				HX_STACK_LINE(165)
				if (((result->rotationQuaternion != null()))){
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion _this = result->rotationQuaternion;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = result->_localRotation;		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(165)
						Float xx = (_this->x * _this->x);		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(165)
						Float yy = (_this->y * _this->y);		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(165)
						Float zz = (_this->z * _this->z);		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(165)
						Float xy = (_this->x * _this->y);		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(165)
						Float zw = (_this->z * _this->w);		HX_STACK_VAR(zw,"zw");
						HX_STACK_LINE(165)
						Float zx = (_this->z * _this->x);		HX_STACK_VAR(zx,"zx");
						HX_STACK_LINE(165)
						Float yw = (_this->y * _this->w);		HX_STACK_VAR(yw,"yw");
						HX_STACK_LINE(165)
						Float yz = (_this->y * _this->z);		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(165)
						Float xw = (_this->x * _this->w);		HX_STACK_VAR(xw,"xw");
						HX_STACK_LINE(165)
						result1->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
						HX_STACK_LINE(165)
						result1->m[(int)1] = (2.0 * ((xy + zw)));
						HX_STACK_LINE(165)
						result1->m[(int)2] = (2.0 * ((zx - yw)));
						HX_STACK_LINE(165)
						result1->m[(int)3] = (int)0;
						HX_STACK_LINE(165)
						result1->m[(int)4] = (2.0 * ((xy - zw)));
						HX_STACK_LINE(165)
						result1->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
						HX_STACK_LINE(165)
						result1->m[(int)6] = (2.0 * ((yz + xw)));
						HX_STACK_LINE(165)
						result1->m[(int)7] = (int)0;
						HX_STACK_LINE(165)
						result1->m[(int)8] = (2.0 * ((zx + yw)));
						HX_STACK_LINE(165)
						result1->m[(int)9] = (2.0 * ((yz - xw)));
						HX_STACK_LINE(165)
						result1->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
						HX_STACK_LINE(165)
						result1->m[(int)11] = (int)0;
						HX_STACK_LINE(165)
						result1->m[(int)12] = (int)0;
						HX_STACK_LINE(165)
						result1->m[(int)13] = (int)0;
						HX_STACK_LINE(165)
						result1->m[(int)14] = (int)0;
						HX_STACK_LINE(165)
						result1->m[(int)15] = 1.0;
						HX_STACK_LINE(165)
						result1;
					}
					HX_STACK_LINE(165)
					result->_cache->__Field(HX_CSTRING("rotationQuaternion"),true)->__Field(HX_CSTRING("copyFrom"),true)(result->rotationQuaternion);
				}
				else{
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = result->_localRotation;		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion tempQuaternion = ::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tempQuaternion,"tempQuaternion");
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Quaternion _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							Float halfRoll = (result->rotation->z * 0.5);		HX_STACK_VAR(halfRoll,"halfRoll");
							HX_STACK_LINE(165)
							Float halfPitch = (result->rotation->x * 0.5);		HX_STACK_VAR(halfPitch,"halfPitch");
							HX_STACK_LINE(165)
							Float halfYaw = (result->rotation->y * 0.5);		HX_STACK_VAR(halfYaw,"halfYaw");
							HX_STACK_LINE(165)
							Float sinRoll = ::Math_obj::sin(halfRoll);		HX_STACK_VAR(sinRoll,"sinRoll");
							HX_STACK_LINE(165)
							Float cosRoll = ::Math_obj::cos(halfRoll);		HX_STACK_VAR(cosRoll,"cosRoll");
							HX_STACK_LINE(165)
							Float sinPitch = ::Math_obj::sin(halfPitch);		HX_STACK_VAR(sinPitch,"sinPitch");
							HX_STACK_LINE(165)
							Float cosPitch = ::Math_obj::cos(halfPitch);		HX_STACK_VAR(cosPitch,"cosPitch");
							HX_STACK_LINE(165)
							Float sinYaw = ::Math_obj::sin(halfYaw);		HX_STACK_VAR(sinYaw,"sinYaw");
							HX_STACK_LINE(165)
							Float cosYaw = ::Math_obj::cos(halfYaw);		HX_STACK_VAR(cosYaw,"cosYaw");
							HX_STACK_LINE(165)
							tempQuaternion->x = (((cosYaw * sinPitch) * cosRoll) + ((sinYaw * cosPitch) * sinRoll));
							HX_STACK_LINE(165)
							tempQuaternion->y = (((sinYaw * cosPitch) * cosRoll) - ((cosYaw * sinPitch) * sinRoll));
							HX_STACK_LINE(165)
							tempQuaternion->z = (((cosYaw * cosPitch) * sinRoll) - ((sinYaw * sinPitch) * cosRoll));
							HX_STACK_LINE(165)
							tempQuaternion->w = (((cosYaw * cosPitch) * cosRoll) + ((sinYaw * sinPitch) * sinRoll));
							HX_STACK_LINE(165)
							_g2 = tempQuaternion;
						}
						HX_STACK_LINE(165)
						tempQuaternion = _g2;
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							Float xx = (tempQuaternion->x * tempQuaternion->x);		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(165)
							Float yy = (tempQuaternion->y * tempQuaternion->y);		HX_STACK_VAR(yy,"yy");
							HX_STACK_LINE(165)
							Float zz = (tempQuaternion->z * tempQuaternion->z);		HX_STACK_VAR(zz,"zz");
							HX_STACK_LINE(165)
							Float xy = (tempQuaternion->x * tempQuaternion->y);		HX_STACK_VAR(xy,"xy");
							HX_STACK_LINE(165)
							Float zw = (tempQuaternion->z * tempQuaternion->w);		HX_STACK_VAR(zw,"zw");
							HX_STACK_LINE(165)
							Float zx = (tempQuaternion->z * tempQuaternion->x);		HX_STACK_VAR(zx,"zx");
							HX_STACK_LINE(165)
							Float yw = (tempQuaternion->y * tempQuaternion->w);		HX_STACK_VAR(yw,"yw");
							HX_STACK_LINE(165)
							Float yz = (tempQuaternion->y * tempQuaternion->z);		HX_STACK_VAR(yz,"yz");
							HX_STACK_LINE(165)
							Float xw = (tempQuaternion->x * tempQuaternion->w);		HX_STACK_VAR(xw,"xw");
							HX_STACK_LINE(165)
							result1->m[(int)0] = (1.0 - (2.0 * ((yy + zz))));
							HX_STACK_LINE(165)
							result1->m[(int)1] = (2.0 * ((xy + zw)));
							HX_STACK_LINE(165)
							result1->m[(int)2] = (2.0 * ((zx - yw)));
							HX_STACK_LINE(165)
							result1->m[(int)3] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)4] = (2.0 * ((xy - zw)));
							HX_STACK_LINE(165)
							result1->m[(int)5] = (1.0 - (2.0 * ((zz + xx))));
							HX_STACK_LINE(165)
							result1->m[(int)6] = (2.0 * ((yz + xw)));
							HX_STACK_LINE(165)
							result1->m[(int)7] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)8] = (2.0 * ((zx + yw)));
							HX_STACK_LINE(165)
							result1->m[(int)9] = (2.0 * ((yz - xw)));
							HX_STACK_LINE(165)
							result1->m[(int)10] = (1.0 - (2.0 * ((yy + xx))));
							HX_STACK_LINE(165)
							result1->m[(int)11] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)12] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)13] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)14] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)15] = 1.0;
							HX_STACK_LINE(165)
							result1;
						}
					}
					HX_STACK_LINE(165)
					result->_cache->__Field(HX_CSTRING("rotation"),true)->__Field(HX_CSTRING("copyFrom"),true)(result->rotation);
				}
				HX_STACK_LINE(165)
				if ((result->infiniteDistance)){
					HX_STACK_LINE(165)
					::com::gamestudiohx::babylonhx::cameras::Camera camera = result->_scene->activeCamera;		HX_STACK_VAR(camera,"camera");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = result->_localTranslation;		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							result1->m[(int)0] = 1.0;
							HX_STACK_LINE(165)
							result1->m[(int)1] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)2] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)3] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)4] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)5] = 1.0;
							HX_STACK_LINE(165)
							result1->m[(int)6] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)7] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)8] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)9] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)10] = 1.0;
							HX_STACK_LINE(165)
							result1->m[(int)11] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)12] = (result->position->x + camera->position->x);
							HX_STACK_LINE(165)
							result1->m[(int)13] = (result->position->y + camera->position->y);
							HX_STACK_LINE(165)
							result1->m[(int)14] = (result->position->z + camera->position->z);
							HX_STACK_LINE(165)
							result1->m[(int)15] = 1.0;
							HX_STACK_LINE(165)
							result1;
						}
					}
				}
				else{
					HX_STACK_LINE(165)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = result->_localTranslation;		HX_STACK_VAR(result1,"result1");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						result1->m[(int)0] = 1.0;
						HX_STACK_LINE(165)
						result1->m[(int)1] = (int)0;
						HX_STACK_LINE(165)
						result1->m[(int)2] = (int)0;
						HX_STACK_LINE(165)
						result1->m[(int)3] = (int)0;
						HX_STACK_LINE(165)
						result1->m[(int)4] = (int)0;
						HX_STACK_LINE(165)
						result1->m[(int)5] = 1.0;
						HX_STACK_LINE(165)
						result1->m[(int)6] = (int)0;
						HX_STACK_LINE(165)
						result1->m[(int)7] = (int)0;
						HX_STACK_LINE(165)
						result1->m[(int)8] = (int)0;
						HX_STACK_LINE(165)
						result1->m[(int)9] = (int)0;
						HX_STACK_LINE(165)
						result1->m[(int)10] = 1.0;
						HX_STACK_LINE(165)
						result1->m[(int)11] = (int)0;
						HX_STACK_LINE(165)
						result1->m[(int)12] = result->position->x;
						HX_STACK_LINE(165)
						result1->m[(int)13] = result->position->y;
						HX_STACK_LINE(165)
						result1->m[(int)14] = result->position->z;
						HX_STACK_LINE(165)
						result1->m[(int)15] = 1.0;
						HX_STACK_LINE(165)
						result1;
					}
				}
				HX_STACK_LINE(165)
				{
					HX_STACK_LINE(165)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = result->_pivotMatrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(165)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = result->_localScaling;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						Array< Float > result1 = result->_localPivotScaling->m;		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(165)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(165)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(165)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(165)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(165)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(165)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(165)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(165)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(165)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(165)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(165)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(165)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(165)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(165)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(165)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(165)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(165)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(165)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(165)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(165)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(165)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(165)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(165)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(165)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(165)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(165)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(165)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(165)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(165)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(165)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(165)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(165)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(165)
						result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(165)
						result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(165)
						result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(165)
						result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(165)
						result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(165)
						result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(165)
						result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(165)
						result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(165)
						result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(165)
						result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(165)
						result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(165)
						result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(165)
						result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(165)
						result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(165)
						result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(165)
						result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(165)
						result1;
					}
				}
				HX_STACK_LINE(165)
				{
					HX_STACK_LINE(165)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = result->_localPivotScaling;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(165)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = result->_localRotation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						Array< Float > result1 = result->_localPivotScalingRotation->m;		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(165)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(165)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(165)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(165)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(165)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(165)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(165)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(165)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(165)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(165)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(165)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(165)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(165)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(165)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(165)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(165)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(165)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(165)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(165)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(165)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(165)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(165)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(165)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(165)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(165)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(165)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(165)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(165)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(165)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(165)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(165)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(165)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(165)
						result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(165)
						result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(165)
						result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(165)
						result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(165)
						result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(165)
						result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(165)
						result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(165)
						result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(165)
						result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(165)
						result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(165)
						result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(165)
						result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(165)
						result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(165)
						result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(165)
						result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(165)
						result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(165)
						result1;
					}
				}
				HX_STACK_LINE(165)
				if (((result->billboardMode != ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE))){
					HX_STACK_LINE(165)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 localPosition;		HX_STACK_VAR(localPosition,"localPosition");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = result->position;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(165)
						localPosition = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
					}
					HX_STACK_LINE(165)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 zero;		HX_STACK_VAR(zero,"zero");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = result->_scene->activeCamera->position;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(165)
						zero = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
					}
					HX_STACK_LINE(165)
					if (((bool((result->parent != null())) && bool((result->parent->position != null()))))){
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = result->parent->position;		HX_STACK_VAR(otherVector,"otherVector");
							HX_STACK_LINE(165)
							hx::AddEq(localPosition->x,otherVector->x);
							HX_STACK_LINE(165)
							hx::AddEq(localPosition->y,otherVector->y);
							HX_STACK_LINE(165)
							hx::AddEq(localPosition->z,otherVector->z);
						}
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = result->_localTranslation;		HX_STACK_VAR(result1,"result1");
							HX_STACK_LINE(165)
							{
								HX_STACK_LINE(165)
								result1->m[(int)0] = 1.0;
								HX_STACK_LINE(165)
								result1->m[(int)1] = (int)0;
								HX_STACK_LINE(165)
								result1->m[(int)2] = (int)0;
								HX_STACK_LINE(165)
								result1->m[(int)3] = (int)0;
								HX_STACK_LINE(165)
								result1->m[(int)4] = (int)0;
								HX_STACK_LINE(165)
								result1->m[(int)5] = 1.0;
								HX_STACK_LINE(165)
								result1->m[(int)6] = (int)0;
								HX_STACK_LINE(165)
								result1->m[(int)7] = (int)0;
								HX_STACK_LINE(165)
								result1->m[(int)8] = (int)0;
								HX_STACK_LINE(165)
								result1->m[(int)9] = (int)0;
								HX_STACK_LINE(165)
								result1->m[(int)10] = 1.0;
								HX_STACK_LINE(165)
								result1->m[(int)11] = (int)0;
								HX_STACK_LINE(165)
								result1->m[(int)12] = localPosition->x;
								HX_STACK_LINE(165)
								result1->m[(int)13] = localPosition->y;
								HX_STACK_LINE(165)
								result1->m[(int)14] = localPosition->z;
								HX_STACK_LINE(165)
								result1->m[(int)15] = 1.0;
								HX_STACK_LINE(165)
								result1;
							}
						}
					}
					HX_STACK_LINE(165)
					if (((((int(result->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))) == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_ALL))){
						HX_STACK_LINE(165)
						zero = result->_scene->activeCamera->position;
					}
					else{
						HX_STACK_LINE(165)
						if (((((int(result->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_X))) != (int)0))){
							HX_STACK_LINE(165)
							zero->x = (localPosition->x + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
						HX_STACK_LINE(165)
						if (((((int(result->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Y))) != (int)0))){
							HX_STACK_LINE(165)
							zero->y = (localPosition->y + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
						HX_STACK_LINE(165)
						if (((((int(result->billboardMode) & int(::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_Z))) != (int)0))){
							HX_STACK_LINE(165)
							zero->z = (localPosition->z + ::com::gamestudiohx::babylonhx::Engine_obj::epsilon);
						}
					}
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 up = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(up,"up");
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = result->_localBillboard;		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 xAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(xAxis,"xAxis");
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 yAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(yAxis,"yAxis");
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 zAxis = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(zAxis,"zAxis");
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							zAxis->x = (zero->x - localPosition->x);
							HX_STACK_LINE(165)
							zAxis->y = (zero->y - localPosition->y);
							HX_STACK_LINE(165)
							zAxis->z = (zero->z - localPosition->z);
						}
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							Float len = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(165)
							if (((len != (int)0))){
								HX_STACK_LINE(165)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(165)
								hx::MultEq(zAxis->x,num);
								HX_STACK_LINE(165)
								hx::MultEq(zAxis->y,num);
								HX_STACK_LINE(165)
								hx::MultEq(zAxis->z,num);
							}
						}
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							xAxis->x = ((up->y * zAxis->z) - (up->z * zAxis->y));
							HX_STACK_LINE(165)
							xAxis->y = ((up->z * zAxis->x) - (up->x * zAxis->z));
							HX_STACK_LINE(165)
							xAxis->z = ((up->x * zAxis->y) - (up->y * zAxis->x));
						}
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							Float len = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(165)
							if (((len != (int)0))){
								HX_STACK_LINE(165)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(165)
								hx::MultEq(xAxis->x,num);
								HX_STACK_LINE(165)
								hx::MultEq(xAxis->y,num);
								HX_STACK_LINE(165)
								hx::MultEq(xAxis->z,num);
							}
						}
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							yAxis->x = ((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y));
							HX_STACK_LINE(165)
							yAxis->y = ((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z));
							HX_STACK_LINE(165)
							yAxis->z = ((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x));
						}
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							Float len = ::Math_obj::sqrt((((yAxis->x * yAxis->x) + (yAxis->y * yAxis->y)) + (yAxis->z * yAxis->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(165)
							if (((len != (int)0))){
								HX_STACK_LINE(165)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(165)
								hx::MultEq(yAxis->x,num);
								HX_STACK_LINE(165)
								hx::MultEq(yAxis->y,num);
								HX_STACK_LINE(165)
								hx::MultEq(yAxis->z,num);
							}
						}
						HX_STACK_LINE(165)
						Float ex = -(((((xAxis->x * localPosition->x) + (xAxis->y * localPosition->y)) + (xAxis->z * localPosition->z))));		HX_STACK_VAR(ex,"ex");
						HX_STACK_LINE(165)
						Float ey = -(((((yAxis->x * localPosition->x) + (yAxis->y * localPosition->y)) + (yAxis->z * localPosition->z))));		HX_STACK_VAR(ey,"ey");
						HX_STACK_LINE(165)
						Float ez = -(((((zAxis->x * localPosition->x) + (zAxis->y * localPosition->y)) + (zAxis->z * localPosition->z))));		HX_STACK_VAR(ez,"ez");
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							result1->m[(int)0] = xAxis->x;
							HX_STACK_LINE(165)
							result1->m[(int)1] = yAxis->x;
							HX_STACK_LINE(165)
							result1->m[(int)2] = zAxis->x;
							HX_STACK_LINE(165)
							result1->m[(int)3] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)4] = xAxis->y;
							HX_STACK_LINE(165)
							result1->m[(int)5] = yAxis->y;
							HX_STACK_LINE(165)
							result1->m[(int)6] = zAxis->y;
							HX_STACK_LINE(165)
							result1->m[(int)7] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)8] = xAxis->z;
							HX_STACK_LINE(165)
							result1->m[(int)9] = yAxis->z;
							HX_STACK_LINE(165)
							result1->m[(int)10] = zAxis->z;
							HX_STACK_LINE(165)
							result1->m[(int)11] = (int)0;
							HX_STACK_LINE(165)
							result1->m[(int)12] = ex;
							HX_STACK_LINE(165)
							result1->m[(int)13] = ey;
							HX_STACK_LINE(165)
							result1->m[(int)14] = ez;
							HX_STACK_LINE(165)
							result1->m[(int)15] = (int)1;
							HX_STACK_LINE(165)
							result1;
						}
					}
					HX_STACK_LINE(165)
					result->_localBillboard->m[(int)12] = result->_localBillboard->m[(int)13] = result->_localBillboard->m[(int)14] = (int)0;
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = result->_localBillboard;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							Float l1 = _this->m->__get((int)0);		HX_STACK_VAR(l1,"l1");
							HX_STACK_LINE(165)
							Float l2 = _this->m->__get((int)1);		HX_STACK_VAR(l2,"l2");
							HX_STACK_LINE(165)
							Float l3 = _this->m->__get((int)2);		HX_STACK_VAR(l3,"l3");
							HX_STACK_LINE(165)
							Float l4 = _this->m->__get((int)3);		HX_STACK_VAR(l4,"l4");
							HX_STACK_LINE(165)
							Float l5 = _this->m->__get((int)4);		HX_STACK_VAR(l5,"l5");
							HX_STACK_LINE(165)
							Float l6 = _this->m->__get((int)5);		HX_STACK_VAR(l6,"l6");
							HX_STACK_LINE(165)
							Float l7 = _this->m->__get((int)6);		HX_STACK_VAR(l7,"l7");
							HX_STACK_LINE(165)
							Float l8 = _this->m->__get((int)7);		HX_STACK_VAR(l8,"l8");
							HX_STACK_LINE(165)
							Float l9 = _this->m->__get((int)8);		HX_STACK_VAR(l9,"l9");
							HX_STACK_LINE(165)
							Float l10 = _this->m->__get((int)9);		HX_STACK_VAR(l10,"l10");
							HX_STACK_LINE(165)
							Float l11 = _this->m->__get((int)10);		HX_STACK_VAR(l11,"l11");
							HX_STACK_LINE(165)
							Float l12 = _this->m->__get((int)11);		HX_STACK_VAR(l12,"l12");
							HX_STACK_LINE(165)
							Float l13 = _this->m->__get((int)12);		HX_STACK_VAR(l13,"l13");
							HX_STACK_LINE(165)
							Float l14 = _this->m->__get((int)13);		HX_STACK_VAR(l14,"l14");
							HX_STACK_LINE(165)
							Float l15 = _this->m->__get((int)14);		HX_STACK_VAR(l15,"l15");
							HX_STACK_LINE(165)
							Float l16 = _this->m->__get((int)15);		HX_STACK_VAR(l16,"l16");
							HX_STACK_LINE(165)
							Float l17 = ((l11 * l16) - (l12 * l15));		HX_STACK_VAR(l17,"l17");
							HX_STACK_LINE(165)
							Float l18 = ((l10 * l16) - (l12 * l14));		HX_STACK_VAR(l18,"l18");
							HX_STACK_LINE(165)
							Float l19 = ((l10 * l15) - (l11 * l14));		HX_STACK_VAR(l19,"l19");
							HX_STACK_LINE(165)
							Float l20 = ((l9 * l16) - (l12 * l13));		HX_STACK_VAR(l20,"l20");
							HX_STACK_LINE(165)
							Float l21 = ((l9 * l15) - (l11 * l13));		HX_STACK_VAR(l21,"l21");
							HX_STACK_LINE(165)
							Float l22 = ((l9 * l14) - (l10 * l13));		HX_STACK_VAR(l22,"l22");
							HX_STACK_LINE(165)
							Float l23 = (((l6 * l17) - (l7 * l18)) + (l8 * l19));		HX_STACK_VAR(l23,"l23");
							HX_STACK_LINE(165)
							Float l24 = -(((((l5 * l17) - (l7 * l20)) + (l8 * l21))));		HX_STACK_VAR(l24,"l24");
							HX_STACK_LINE(165)
							Float l25 = (((l5 * l18) - (l6 * l20)) + (l8 * l22));		HX_STACK_VAR(l25,"l25");
							HX_STACK_LINE(165)
							Float l26 = -(((((l5 * l19) - (l6 * l21)) + (l7 * l22))));		HX_STACK_VAR(l26,"l26");
							HX_STACK_LINE(165)
							Float l27 = (Float(1.0) / Float((((((l1 * l23) + (l2 * l24)) + (l3 * l25)) + (l4 * l26)))));		HX_STACK_VAR(l27,"l27");
							HX_STACK_LINE(165)
							Float l28 = ((l7 * l16) - (l8 * l15));		HX_STACK_VAR(l28,"l28");
							HX_STACK_LINE(165)
							Float l29 = ((l6 * l16) - (l8 * l14));		HX_STACK_VAR(l29,"l29");
							HX_STACK_LINE(165)
							Float l30 = ((l6 * l15) - (l7 * l14));		HX_STACK_VAR(l30,"l30");
							HX_STACK_LINE(165)
							Float l31 = ((l5 * l16) - (l8 * l13));		HX_STACK_VAR(l31,"l31");
							HX_STACK_LINE(165)
							Float l32 = ((l5 * l15) - (l7 * l13));		HX_STACK_VAR(l32,"l32");
							HX_STACK_LINE(165)
							Float l33 = ((l5 * l14) - (l6 * l13));		HX_STACK_VAR(l33,"l33");
							HX_STACK_LINE(165)
							Float l34 = ((l7 * l12) - (l8 * l11));		HX_STACK_VAR(l34,"l34");
							HX_STACK_LINE(165)
							Float l35 = ((l6 * l12) - (l8 * l10));		HX_STACK_VAR(l35,"l35");
							HX_STACK_LINE(165)
							Float l36 = ((l6 * l11) - (l7 * l10));		HX_STACK_VAR(l36,"l36");
							HX_STACK_LINE(165)
							Float l37 = ((l5 * l12) - (l8 * l9));		HX_STACK_VAR(l37,"l37");
							HX_STACK_LINE(165)
							Float l38 = ((l5 * l11) - (l7 * l9));		HX_STACK_VAR(l38,"l38");
							HX_STACK_LINE(165)
							Float l39 = ((l5 * l10) - (l6 * l9));		HX_STACK_VAR(l39,"l39");
							HX_STACK_LINE(165)
							_this->m[(int)0] = (l23 * l27);
							HX_STACK_LINE(165)
							_this->m[(int)4] = (l24 * l27);
							HX_STACK_LINE(165)
							_this->m[(int)8] = (l25 * l27);
							HX_STACK_LINE(165)
							_this->m[(int)12] = (l26 * l27);
							HX_STACK_LINE(165)
							_this->m[(int)1] = (-(((((l2 * l17) - (l3 * l18)) + (l4 * l19)))) * l27);
							HX_STACK_LINE(165)
							_this->m[(int)5] = (((((l1 * l17) - (l3 * l20)) + (l4 * l21))) * l27);
							HX_STACK_LINE(165)
							_this->m[(int)9] = (-(((((l1 * l18) - (l2 * l20)) + (l4 * l22)))) * l27);
							HX_STACK_LINE(165)
							_this->m[(int)13] = (((((l1 * l19) - (l2 * l21)) + (l3 * l22))) * l27);
							HX_STACK_LINE(165)
							_this->m[(int)2] = (((((l2 * l28) - (l3 * l29)) + (l4 * l30))) * l27);
							HX_STACK_LINE(165)
							_this->m[(int)6] = (-(((((l1 * l28) - (l3 * l31)) + (l4 * l32)))) * l27);
							HX_STACK_LINE(165)
							_this->m[(int)10] = (((((l1 * l29) - (l2 * l31)) + (l4 * l33))) * l27);
							HX_STACK_LINE(165)
							_this->m[(int)14] = (-(((((l1 * l30) - (l2 * l32)) + (l3 * l33)))) * l27);
							HX_STACK_LINE(165)
							_this->m[(int)3] = (-(((((l2 * l34) - (l3 * l35)) + (l4 * l36)))) * l27);
							HX_STACK_LINE(165)
							_this->m[(int)7] = (((((l1 * l34) - (l3 * l37)) + (l4 * l38))) * l27);
							HX_STACK_LINE(165)
							_this->m[(int)11] = (-(((((l1 * l35) - (l2 * l37)) + (l4 * l39)))) * l27);
							HX_STACK_LINE(165)
							_this->m[(int)15] = (((((l1 * l36) - (l2 * l38)) + (l3 * l39))) * l27);
						}
					}
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = result->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = result->_localBillboard;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							Array< Float > result1 = result->_localWorld->m;		HX_STACK_VAR(result1,"result1");
							HX_STACK_LINE(165)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(165)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(165)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(165)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(165)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(165)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(165)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(165)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(165)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(165)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(165)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(165)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(165)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(165)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(165)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(165)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(165)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(165)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(165)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(165)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(165)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(165)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(165)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(165)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(165)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(165)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(165)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(165)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(165)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(165)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(165)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(165)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(165)
							result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(165)
							result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(165)
							result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(165)
							result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(165)
							result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(165)
							result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(165)
							result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(165)
							result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(165)
							result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(165)
							result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(165)
							result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(165)
							result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(165)
							result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(165)
							result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(165)
							result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(165)
							result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(165)
							result1;
						}
					}
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = result->_rotateYByPI;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = result->_localWorld;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							Array< Float > result1 = result->_localPivotScalingRotation->m;		HX_STACK_VAR(result1,"result1");
							HX_STACK_LINE(165)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(165)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(165)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(165)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(165)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(165)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(165)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(165)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(165)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(165)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(165)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(165)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(165)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(165)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(165)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(165)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(165)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(165)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(165)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(165)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(165)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(165)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(165)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(165)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(165)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(165)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(165)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(165)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(165)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(165)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(165)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(165)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(165)
							result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(165)
							result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(165)
							result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(165)
							result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(165)
							result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(165)
							result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(165)
							result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(165)
							result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(165)
							result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(165)
							result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(165)
							result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(165)
							result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(165)
							result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(165)
							result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(165)
							result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(165)
							result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(165)
							result1;
						}
					}
				}
				struct _Function_3_1{
					inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh &result){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/InstancedMesh.hx",165,0x594e4fd1)
						{
							HX_STACK_LINE(165)
							::com::gamestudiohx::babylonhx::tools::math::Matrix _g3 = result->parent->getWorldMatrix();		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(165)
							return (_g3 != null());
						}
						return null();
					}
				};
				HX_STACK_LINE(165)
				if (((  (((  (((result->parent != null()))) ? bool(_Function_3_1::Block(result)) : bool(false) ))) ? bool((result->billboardMode == ::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::BILLBOARDMODE_NONE)) : bool(false) ))){
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = result->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Matrix other = result->_localTranslation;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							Array< Float > result1 = result->_localWorld->m;		HX_STACK_VAR(result1,"result1");
							HX_STACK_LINE(165)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(165)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(165)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(165)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(165)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(165)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(165)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(165)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(165)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(165)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(165)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(165)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(165)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(165)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(165)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(165)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(165)
							Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(165)
							Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(165)
							Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(165)
							Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(165)
							Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(165)
							Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(165)
							Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(165)
							Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(165)
							Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(165)
							Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(165)
							Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(165)
							Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(165)
							Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(165)
							Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(165)
							Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(165)
							Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(165)
							result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(165)
							result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(165)
							result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(165)
							result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(165)
							result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(165)
							result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(165)
							result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(165)
							result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(165)
							result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(165)
							result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(165)
							result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(165)
							result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(165)
							result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(165)
							result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(165)
							result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(165)
							result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(165)
							result1;
						}
					}
					HX_STACK_LINE(165)
					::com::gamestudiohx::babylonhx::tools::math::Matrix parentWorld = result->parent->getWorldMatrix();		HX_STACK_VAR(parentWorld,"parentWorld");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						::com::gamestudiohx::babylonhx::tools::math::Matrix _this = result->_localWorld;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							Array< Float > result1 = result->_worldMatrix->m;		HX_STACK_VAR(result1,"result1");
							HX_STACK_LINE(165)
							Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
							HX_STACK_LINE(165)
							Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
							HX_STACK_LINE(165)
							Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
							HX_STACK_LINE(165)
							Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
							HX_STACK_LINE(165)
							Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
							HX_STACK_LINE(165)
							Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
							HX_STACK_LINE(165)
							Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
							HX_STACK_LINE(165)
							Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
							HX_STACK_LINE(165)
							Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
							HX_STACK_LINE(165)
							Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
							HX_STACK_LINE(165)
							Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
							HX_STACK_LINE(165)
							Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
							HX_STACK_LINE(165)
							Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
							HX_STACK_LINE(165)
							Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
							HX_STACK_LINE(165)
							Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
							HX_STACK_LINE(165)
							Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
							HX_STACK_LINE(165)
							Float om0 = parentWorld->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
							HX_STACK_LINE(165)
							Float om1 = parentWorld->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
							HX_STACK_LINE(165)
							Float om2 = parentWorld->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
							HX_STACK_LINE(165)
							Float om3 = parentWorld->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
							HX_STACK_LINE(165)
							Float om4 = parentWorld->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
							HX_STACK_LINE(165)
							Float om5 = parentWorld->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
							HX_STACK_LINE(165)
							Float om6 = parentWorld->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
							HX_STACK_LINE(165)
							Float om7 = parentWorld->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
							HX_STACK_LINE(165)
							Float om8 = parentWorld->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
							HX_STACK_LINE(165)
							Float om9 = parentWorld->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
							HX_STACK_LINE(165)
							Float om10 = parentWorld->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
							HX_STACK_LINE(165)
							Float om11 = parentWorld->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
							HX_STACK_LINE(165)
							Float om12 = parentWorld->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
							HX_STACK_LINE(165)
							Float om13 = parentWorld->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
							HX_STACK_LINE(165)
							Float om14 = parentWorld->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
							HX_STACK_LINE(165)
							Float om15 = parentWorld->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
							HX_STACK_LINE(165)
							result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
							HX_STACK_LINE(165)
							result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
							HX_STACK_LINE(165)
							result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
							HX_STACK_LINE(165)
							result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
							HX_STACK_LINE(165)
							result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
							HX_STACK_LINE(165)
							result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
							HX_STACK_LINE(165)
							result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
							HX_STACK_LINE(165)
							result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
							HX_STACK_LINE(165)
							result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
							HX_STACK_LINE(165)
							result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
							HX_STACK_LINE(165)
							result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
							HX_STACK_LINE(165)
							result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
							HX_STACK_LINE(165)
							result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
							HX_STACK_LINE(165)
							result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
							HX_STACK_LINE(165)
							result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
							HX_STACK_LINE(165)
							result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
							HX_STACK_LINE(165)
							result1;
						}
					}
				}
				else{
					HX_STACK_LINE(165)
					::com::gamestudiohx::babylonhx::tools::math::Matrix _this = result->_localPivotScalingRotation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(165)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other = result->_localTranslation;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						Array< Float > result1 = result->_worldMatrix->m;		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(165)
						Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(165)
						Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(165)
						Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(165)
						Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(165)
						Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(165)
						Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(165)
						Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(165)
						Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(165)
						Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(165)
						Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(165)
						Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(165)
						Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(165)
						Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(165)
						Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(165)
						Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(165)
						Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(165)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(165)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(165)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(165)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(165)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(165)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(165)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(165)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(165)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(165)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(165)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(165)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(165)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(165)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(165)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(165)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(165)
						result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(165)
						result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(165)
						result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(165)
						result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(165)
						result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(165)
						result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(165)
						result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(165)
						result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(165)
						result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(165)
						result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(165)
						result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(165)
						result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(165)
						result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(165)
						result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(165)
						result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(165)
						result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(165)
						result1;
					}
				}
				HX_STACK_LINE(165)
				if (((result->_boundingInfo != null()))){
					HX_STACK_LINE(165)
					Float _g4 = ::Math_obj::max(result->scaling->x,result->scaling->y);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(165)
					result->_scaleFactor = _g4;
					HX_STACK_LINE(165)
					Float _g5 = ::Math_obj::max(result->_scaleFactor,result->scaling->z);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(165)
					result->_scaleFactor = _g5;
					struct _Function_4_1{
						inline static bool Block( ::com::gamestudiohx::babylonhx::mesh::InstancedMesh &result){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/InstancedMesh.hx",165,0x594e4fd1)
							{
								HX_STACK_LINE(165)
								Dynamic _g6 = ::Reflect_obj::field(result->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(165)
								return (_g6 != null());
							}
							return null();
						}
					};
					HX_STACK_LINE(165)
					if (((  (((result->parent != null()))) ? bool(_Function_4_1::Block(result)) : bool(false) ))){
						HX_STACK_LINE(165)
						Dynamic _g7 = ::Reflect_obj::field(result->parent,HX_CSTRING("_scaleFactor"));		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(165)
						Float _g8 = (result->_scaleFactor * _g7);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(165)
						result->_scaleFactor = _g8;
					}
					HX_STACK_LINE(165)
					result->_boundingInfo->_update(result->_worldMatrix,result->_scaleFactor);
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(165)
						int _g = result->subMeshes->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(165)
						while((true)){
							HX_STACK_LINE(165)
							if ((!(((_g11 < _g))))){
								HX_STACK_LINE(165)
								break;
							}
							HX_STACK_LINE(165)
							int subIndex = (_g11)++;		HX_STACK_VAR(subIndex,"subIndex");
							HX_STACK_LINE(165)
							::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = result->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
							HX_STACK_LINE(165)
							subMesh->_boundingInfo->_update(result->_worldMatrix,result->_scaleFactor);
						}
					}
				}
				HX_STACK_LINE(165)
				{
					HX_STACK_LINE(165)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = result->_absolutePosition;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(165)
					_this->x = result->_worldMatrix->m->__get((int)12);
					HX_STACK_LINE(165)
					_this->y = result->_worldMatrix->m->__get((int)13);
					HX_STACK_LINE(165)
					_this->z = result->_worldMatrix->m->__get((int)14);
				}
				HX_STACK_LINE(165)
				ret = result->_worldMatrix;
			}
			HX_STACK_LINE(165)
			ret;
		}
		HX_STACK_LINE(167)
		return result;
	}
}


Void InstancedMesh_obj::dispose( hx::Null< bool >  __o_doNotRecurse){
bool doNotRecurse = __o_doNotRecurse.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.InstancedMesh","dispose",0x0cdba53e,"com.gamestudiohx.babylonhx.mesh.InstancedMesh.dispose","com/gamestudiohx/babylonhx/mesh/InstancedMesh.hx",172,0x594e4fd1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(doNotRecurse,"doNotRecurse")
{
		HX_STACK_LINE(175)
		int index = this->_sourceMesh->instances->indexOf(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(176)
		this->_sourceMesh->instances->splice(index,(int)1);
		HX_STACK_LINE(178)
		this->super::dispose(doNotRecurse);
	}
return null();
}



InstancedMesh_obj::InstancedMesh_obj()
{
}

void InstancedMesh_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InstancedMesh);
	HX_MARK_MEMBER_NAME(_sourceMesh,"_sourceMesh");
	::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InstancedMesh_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_sourceMesh,"_sourceMesh");
	::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::__Visit(HX_VISIT_ARG);
}

Dynamic InstancedMesh_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_activate") ) { return _activate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_sourceMesh") ) { return _sourceMesh; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_syncSubMeshes") ) { return _syncSubMeshes_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"refreshBoundingInfo") ) { return refreshBoundingInfo_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_generatePointsArray") ) { return _generatePointsArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InstancedMesh_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_sourceMesh") ) { _sourceMesh=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::Mesh >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InstancedMesh_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_sourceMesh"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::Mesh*/ ,(int)offsetof(InstancedMesh_obj,_sourceMesh),HX_CSTRING("_sourceMesh")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_sourceMesh"),
	HX_CSTRING("refreshBoundingInfo"),
	HX_CSTRING("_activate"),
	HX_CSTRING("_syncSubMeshes"),
	HX_CSTRING("_generatePointsArray"),
	HX_CSTRING("clone"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InstancedMesh_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InstancedMesh_obj::__mClass,"__mClass");
};

#endif

Class InstancedMesh_obj::__mClass;

void InstancedMesh_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.mesh.InstancedMesh"), hx::TCanCast< InstancedMesh_obj> ,sStaticFields,sMemberFields,
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

void InstancedMesh_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh
