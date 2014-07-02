#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Node
#include <com/gamestudiohx/babylonhx/Node.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_VertexBuffer
#include <com/gamestudiohx/babylonhx/mesh/VertexBuffer.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_VertexData
#include <com/gamestudiohx/babylonhx/mesh/VertexData.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_utils_ArrayBufferView
#include <openfl/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_utils_UInt8Array
#include <openfl/utils/UInt8Array.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{

Void VertexData_obj::__construct()
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","new",0x7c10852f,"com.gamestudiohx.babylonhx.mesh.VertexData.new","com/gamestudiohx/babylonhx/mesh/VertexData.hx",30,0x4c868021)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(38)
	this->indices = Array_obj< int >::__new();
	HX_STACK_LINE(37)
	this->matricesWeights = Array_obj< Float >::__new();
	HX_STACK_LINE(36)
	this->matricesIndices = Array_obj< Float >::__new();
	HX_STACK_LINE(35)
	this->colors = Array_obj< Float >::__new();
	HX_STACK_LINE(34)
	this->uv2s = Array_obj< Float >::__new();
	HX_STACK_LINE(33)
	this->uvs = Array_obj< Float >::__new();
	HX_STACK_LINE(32)
	this->normals = Array_obj< Float >::__new();
	HX_STACK_LINE(31)
	this->positions = Array_obj< Float >::__new();
}
;
	return null();
}

//VertexData_obj::~VertexData_obj() { }

Dynamic VertexData_obj::__CreateEmpty() { return  new VertexData_obj; }
hx::ObjectPtr< VertexData_obj > VertexData_obj::__new()
{  hx::ObjectPtr< VertexData_obj > result = new VertexData_obj();
	result->__construct();
	return result;}

Dynamic VertexData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexData_obj > result = new VertexData_obj();
	result->__construct();
	return result;}

Void VertexData_obj::set( Array< Float > data,::String kind){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","set",0x7c145071,"com.gamestudiohx.babylonhx.mesh.VertexData.set","com/gamestudiohx/babylonhx/mesh/VertexData.hx",45,0x4c868021)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(kind,"kind")
		HX_STACK_LINE(45)
		::String _switch_1 = (kind);
		if (  ( _switch_1==::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind)){
			HX_STACK_LINE(47)
			this->positions = data;
		}
		else if (  ( _switch_1==::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind)){
			HX_STACK_LINE(49)
			this->normals = data;
		}
		else if (  ( _switch_1==::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UVKind)){
			HX_STACK_LINE(51)
			this->uvs = data;
		}
		else if (  ( _switch_1==::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UV2Kind)){
			HX_STACK_LINE(53)
			this->uv2s = data;
		}
		else if (  ( _switch_1==::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::ColorKind)){
			HX_STACK_LINE(55)
			this->colors = data;
		}
		else if (  ( _switch_1==::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesIndicesKind)){
			HX_STACK_LINE(57)
			this->matricesIndices = data;
		}
		else if (  ( _switch_1==::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesWeightsKind)){
			HX_STACK_LINE(59)
			this->matricesWeights = data;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VertexData_obj,set,(void))

Void VertexData_obj::applyToMesh( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh,Dynamic updatable){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","applyToMesh",0xa0d210e5,"com.gamestudiohx.babylonhx.mesh.VertexData.applyToMesh","com/gamestudiohx/babylonhx/mesh/VertexData.hx",64,0x4c868021)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mesh,"mesh")
		HX_STACK_ARG(updatable,"updatable")
		HX_STACK_LINE(64)
		this->_applyTo(mesh,updatable);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VertexData_obj,applyToMesh,(void))

Void VertexData_obj::applyToGeometry( ::com::gamestudiohx::babylonhx::mesh::Geometry geometry,Dynamic updatable){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","applyToGeometry",0xe95ca5aa,"com.gamestudiohx.babylonhx.mesh.VertexData.applyToGeometry","com/gamestudiohx/babylonhx/mesh/VertexData.hx",68,0x4c868021)
		HX_STACK_THIS(this)
		HX_STACK_ARG(geometry,"geometry")
		HX_STACK_ARG(updatable,"updatable")
		HX_STACK_LINE(68)
		this->_applyTo(geometry,updatable);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VertexData_obj,applyToGeometry,(void))

Void VertexData_obj::updateMesh( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh,Dynamic updateExtends,Dynamic makeItUnique){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","updateMesh",0x6cda47a7,"com.gamestudiohx.babylonhx.mesh.VertexData.updateMesh","com/gamestudiohx/babylonhx/mesh/VertexData.hx",72,0x4c868021)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mesh,"mesh")
		HX_STACK_ARG(updateExtends,"updateExtends")
		HX_STACK_ARG(makeItUnique,"makeItUnique")
		HX_STACK_LINE(72)
		this->_update(mesh,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VertexData_obj,updateMesh,(void))

Void VertexData_obj::updateGeometry( ::com::gamestudiohx::babylonhx::mesh::Geometry geometry,Dynamic updateExtends,Dynamic makeItUnique){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","updateGeometry",0xb074656c,"com.gamestudiohx.babylonhx.mesh.VertexData.updateGeometry","com/gamestudiohx/babylonhx/mesh/VertexData.hx",76,0x4c868021)
		HX_STACK_THIS(this)
		HX_STACK_ARG(geometry,"geometry")
		HX_STACK_ARG(updateExtends,"updateExtends")
		HX_STACK_ARG(makeItUnique,"makeItUnique")
		HX_STACK_LINE(76)
		this->_update(geometry,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VertexData_obj,updateGeometry,(void))

Void VertexData_obj::_applyTo( ::com::gamestudiohx::babylonhx::mesh::IGetSetVerticesData meshOrGeometry,Dynamic updatable){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","_applyTo",0x03895cdb,"com.gamestudiohx.babylonhx.mesh.VertexData._applyTo","com/gamestudiohx/babylonhx/mesh/VertexData.hx",79,0x4c868021)
		HX_STACK_THIS(this)
		HX_STACK_ARG(meshOrGeometry,"meshOrGeometry")
		HX_STACK_ARG(updatable,"updatable")
		HX_STACK_LINE(80)
		if (((this->positions->length > (int)0))){
			HX_STACK_LINE(81)
			meshOrGeometry->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind,this->positions,updatable);
		}
		HX_STACK_LINE(84)
		if (((this->normals->length > (int)0))){
			HX_STACK_LINE(85)
			meshOrGeometry->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind,this->normals,updatable);
		}
		HX_STACK_LINE(88)
		if (((this->uvs->length > (int)0))){
			HX_STACK_LINE(89)
			meshOrGeometry->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UVKind,this->uvs,updatable);
		}
		HX_STACK_LINE(92)
		if (((this->uv2s->length > (int)0))){
			HX_STACK_LINE(93)
			meshOrGeometry->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UV2Kind,this->uv2s,updatable);
		}
		HX_STACK_LINE(96)
		if (((this->colors->length > (int)0))){
			HX_STACK_LINE(97)
			meshOrGeometry->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::ColorKind,this->colors,updatable);
		}
		HX_STACK_LINE(100)
		if (((this->matricesIndices->length > (int)0))){
			HX_STACK_LINE(101)
			meshOrGeometry->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesIndicesKind,this->matricesIndices,updatable);
		}
		HX_STACK_LINE(104)
		if (((this->matricesWeights->length > (int)0))){
			HX_STACK_LINE(105)
			meshOrGeometry->setVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesWeightsKind,this->matricesWeights,updatable);
		}
		HX_STACK_LINE(108)
		if (((this->indices->length > (int)0))){
			HX_STACK_LINE(109)
			meshOrGeometry->setIndices(this->indices);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VertexData_obj,_applyTo,(void))

Void VertexData_obj::_update( ::com::gamestudiohx::babylonhx::mesh::IGetSetVerticesData meshOrGeometry,Dynamic updateExtends,Dynamic makeItUnique){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","_update",0x4f955ff7,"com.gamestudiohx.babylonhx.mesh.VertexData._update","com/gamestudiohx/babylonhx/mesh/VertexData.hx",113,0x4c868021)
		HX_STACK_THIS(this)
		HX_STACK_ARG(meshOrGeometry,"meshOrGeometry")
		HX_STACK_ARG(updateExtends,"updateExtends")
		HX_STACK_ARG(makeItUnique,"makeItUnique")
		HX_STACK_LINE(114)
		if (((this->positions->length > (int)0))){
			HX_STACK_LINE(115)
			meshOrGeometry->updateVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind,this->positions,updateExtends,makeItUnique);
		}
		HX_STACK_LINE(118)
		if (((this->normals->length > (int)0))){
			HX_STACK_LINE(119)
			meshOrGeometry->updateVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind,this->normals,updateExtends,makeItUnique);
		}
		HX_STACK_LINE(122)
		if (((this->uvs->length > (int)0))){
			HX_STACK_LINE(123)
			meshOrGeometry->updateVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UVKind,this->uvs,updateExtends,makeItUnique);
		}
		HX_STACK_LINE(126)
		if (((this->uv2s->length > (int)0))){
			HX_STACK_LINE(127)
			meshOrGeometry->updateVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UV2Kind,this->uv2s,updateExtends,makeItUnique);
		}
		HX_STACK_LINE(130)
		if (((this->colors->length > (int)0))){
			HX_STACK_LINE(131)
			meshOrGeometry->updateVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::ColorKind,this->colors,updateExtends,makeItUnique);
		}
		HX_STACK_LINE(134)
		if (((this->matricesIndices->length > (int)0))){
			HX_STACK_LINE(135)
			meshOrGeometry->updateVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesIndicesKind,this->matricesIndices,updateExtends,makeItUnique);
		}
		HX_STACK_LINE(138)
		if (((this->matricesWeights->length > (int)0))){
			HX_STACK_LINE(139)
			meshOrGeometry->updateVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesWeightsKind,this->matricesWeights,updateExtends,makeItUnique);
		}
		HX_STACK_LINE(142)
		if (((this->indices->length > (int)0))){
			HX_STACK_LINE(143)
			meshOrGeometry->setIndices(this->indices);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VertexData_obj,_update,(void))

Void VertexData_obj::transform( ::com::gamestudiohx::babylonhx::tools::math::Matrix matrix){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","transform",0xeda9e77b,"com.gamestudiohx.babylonhx.mesh.VertexData.transform","com/gamestudiohx/babylonhx/mesh/VertexData.hx",147,0x4c868021)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(148)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 transformed = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(transformed,"transformed");
		HX_STACK_LINE(149)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(150)
		if (((this->positions->length > (int)0))){
			HX_STACK_LINE(151)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 position = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(155)
			while((true)){
				HX_STACK_LINE(155)
				if ((!(((index < this->positions->length))))){
					HX_STACK_LINE(155)
					break;
				}
				HX_STACK_LINE(156)
				{
					HX_STACK_LINE(156)
					Array< Float > array = this->positions;		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(156)
					position->x = array->__get(index);
					HX_STACK_LINE(156)
					position->y = array->__get((index + (int)1));
					HX_STACK_LINE(156)
					position->z = array->__get((index + (int)2));
				}
				HX_STACK_LINE(158)
				{
					HX_STACK_LINE(158)
					Float x = ((((position->x * matrix->m->__get((int)0)) + (position->y * matrix->m->__get((int)4))) + (position->z * matrix->m->__get((int)8))) + matrix->m->__get((int)12));		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(158)
					Float y = ((((position->x * matrix->m->__get((int)1)) + (position->y * matrix->m->__get((int)5))) + (position->z * matrix->m->__get((int)9))) + matrix->m->__get((int)13));		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(158)
					Float z = ((((position->x * matrix->m->__get((int)2)) + (position->y * matrix->m->__get((int)6))) + (position->z * matrix->m->__get((int)10))) + matrix->m->__get((int)14));		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(158)
					Float w = ((((position->x * matrix->m->__get((int)3)) + (position->y * matrix->m->__get((int)7))) + (position->z * matrix->m->__get((int)11))) + matrix->m->__get((int)15));		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(158)
					transformed->x = (Float(x) / Float(w));
					HX_STACK_LINE(158)
					transformed->y = (Float(y) / Float(w));
					HX_STACK_LINE(158)
					transformed->z = (Float(z) / Float(w));
				}
				HX_STACK_LINE(159)
				this->positions[index] = transformed->x;
				HX_STACK_LINE(160)
				this->positions[(index + (int)1)] = transformed->y;
				HX_STACK_LINE(161)
				this->positions[(index + (int)2)] = transformed->z;
				HX_STACK_LINE(162)
				hx::AddEq(index,(int)3);
			}
		}
		HX_STACK_LINE(167)
		if (((this->normals->length > (int)0))){
			HX_STACK_LINE(168)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(normal,"normal");
			HX_STACK_LINE(171)
			index = (int)0;
			HX_STACK_LINE(172)
			while((true)){
				HX_STACK_LINE(172)
				if ((!(((index < this->normals->length))))){
					HX_STACK_LINE(172)
					break;
				}
				HX_STACK_LINE(173)
				{
					HX_STACK_LINE(173)
					Array< Float > array = this->normals;		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(173)
					normal->x = array->__get(index);
					HX_STACK_LINE(173)
					normal->y = array->__get((index + (int)1));
					HX_STACK_LINE(173)
					normal->z = array->__get((index + (int)2));
				}
				HX_STACK_LINE(175)
				{
					HX_STACK_LINE(175)
					transformed->x = (((normal->x * matrix->m->__get((int)0)) + (normal->y * matrix->m->__get((int)4))) + (normal->z * matrix->m->__get((int)8)));
					HX_STACK_LINE(175)
					transformed->y = (((normal->x * matrix->m->__get((int)1)) + (normal->y * matrix->m->__get((int)5))) + (normal->z * matrix->m->__get((int)9)));
					HX_STACK_LINE(175)
					transformed->z = (((normal->x * matrix->m->__get((int)2)) + (normal->y * matrix->m->__get((int)6))) + (normal->z * matrix->m->__get((int)10)));
				}
				HX_STACK_LINE(176)
				this->normals[index] = transformed->x;
				HX_STACK_LINE(177)
				this->normals[(index + (int)1)] = transformed->y;
				HX_STACK_LINE(178)
				this->normals[(index + (int)2)] = transformed->z;
				HX_STACK_LINE(179)
				hx::AddEq(index,(int)3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VertexData_obj,transform,(void))

Void VertexData_obj::merge( ::com::gamestudiohx::babylonhx::mesh::VertexData other){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","merge",0x71b56947,"com.gamestudiohx.babylonhx.mesh.VertexData.merge","com/gamestudiohx/babylonhx/mesh/VertexData.hx",185,0x4c868021)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(186)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(187)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(188)
		if (((other->indices->length > (int)0))){
			HX_STACK_LINE(189)
			if (((this->indices == null()))){
				HX_STACK_LINE(190)
				Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(190)
				this->indices = _g;
			}
			HX_STACK_LINE(194)
			if (((this->positions != null()))){
				HX_STACK_LINE(195)
				Float offset1 = (Float(this->positions->length) / Float((int)3));		HX_STACK_VAR(offset1,"offset1");
			}
			else{
				HX_STACK_LINE(197)
				int offset1 = (int)0;		HX_STACK_VAR(offset1,"offset1");
			}
			HX_STACK_LINE(203)
			while((true)){
				HX_STACK_LINE(203)
				if ((!(((index < other->indices->length))))){
					HX_STACK_LINE(203)
					break;
				}
				HX_STACK_LINE(204)
				this->indices->push((other->indices->__get(index) + offset));
				HX_STACK_LINE(205)
				(index)++;
			}
		}
		HX_STACK_LINE(210)
		if (((other->positions->length > (int)0))){
			HX_STACK_LINE(211)
			if (((this->positions == null()))){
				HX_STACK_LINE(212)
				Array< Float > _g1 = Array_obj< Float >::__new();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(212)
				this->positions = _g1;
			}
			HX_STACK_LINE(216)
			index = (int)0;
			HX_STACK_LINE(217)
			while((true)){
				HX_STACK_LINE(217)
				if ((!(((index < other->positions->length))))){
					HX_STACK_LINE(217)
					break;
				}
				HX_STACK_LINE(218)
				this->positions->push(other->positions->__get(index));
				HX_STACK_LINE(219)
				(index)++;
			}
		}
		HX_STACK_LINE(224)
		if (((other->normals->length > (int)0))){
			HX_STACK_LINE(225)
			if (((this->normals == null()))){
				HX_STACK_LINE(226)
				Array< Float > _g2 = Array_obj< Float >::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(226)
				this->normals = _g2;
			}
			HX_STACK_LINE(230)
			index = (int)0;
			HX_STACK_LINE(231)
			while((true)){
				HX_STACK_LINE(231)
				if ((!(((index < other->normals->length))))){
					HX_STACK_LINE(231)
					break;
				}
				HX_STACK_LINE(232)
				this->normals->push(other->normals->__get(index));
				HX_STACK_LINE(233)
				(index)++;
			}
		}
		HX_STACK_LINE(238)
		if (((other->uvs->length > (int)0))){
			HX_STACK_LINE(239)
			if (((this->uvs == null()))){
				HX_STACK_LINE(240)
				Array< Float > _g3 = Array_obj< Float >::__new();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(240)
				this->uvs = _g3;
			}
			HX_STACK_LINE(244)
			index = (int)0;
			HX_STACK_LINE(245)
			while((true)){
				HX_STACK_LINE(245)
				if ((!(((index < other->uvs->length))))){
					HX_STACK_LINE(245)
					break;
				}
				HX_STACK_LINE(246)
				this->uvs->push(other->uvs->__get(index));
				HX_STACK_LINE(247)
				(index)++;
			}
		}
		HX_STACK_LINE(252)
		if (((other->uv2s->length > (int)0))){
			HX_STACK_LINE(253)
			if (((this->uv2s == null()))){
				HX_STACK_LINE(254)
				Array< Float > _g4 = Array_obj< Float >::__new();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(254)
				this->uv2s = _g4;
			}
			HX_STACK_LINE(258)
			index = (int)0;
			HX_STACK_LINE(259)
			while((true)){
				HX_STACK_LINE(259)
				if ((!(((index < other->uv2s->length))))){
					HX_STACK_LINE(259)
					break;
				}
				HX_STACK_LINE(260)
				this->uv2s->push(other->uv2s->__get(index));
				HX_STACK_LINE(261)
				(index)++;
			}
		}
		HX_STACK_LINE(266)
		if (((other->matricesIndices->length > (int)0))){
			HX_STACK_LINE(267)
			if (((this->matricesIndices == null()))){
				HX_STACK_LINE(268)
				Array< Float > _g5 = Array_obj< Float >::__new();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(268)
				this->matricesIndices = _g5;
			}
			HX_STACK_LINE(272)
			index = (int)0;
			HX_STACK_LINE(273)
			while((true)){
				HX_STACK_LINE(273)
				if ((!(((index < other->matricesIndices->length))))){
					HX_STACK_LINE(273)
					break;
				}
				HX_STACK_LINE(274)
				this->matricesIndices->push(other->matricesIndices->__get(index));
				HX_STACK_LINE(275)
				(index)++;
			}
		}
		HX_STACK_LINE(280)
		if (((other->matricesWeights->length > (int)0))){
			HX_STACK_LINE(281)
			if (((this->matricesWeights == null()))){
				HX_STACK_LINE(282)
				Array< Float > _g6 = Array_obj< Float >::__new();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(282)
				this->matricesWeights = _g6;
			}
			HX_STACK_LINE(286)
			index = (int)0;
			HX_STACK_LINE(287)
			while((true)){
				HX_STACK_LINE(287)
				if ((!(((index < other->matricesWeights->length))))){
					HX_STACK_LINE(287)
					break;
				}
				HX_STACK_LINE(288)
				this->matricesWeights->push(other->matricesWeights->__get(index));
				HX_STACK_LINE(289)
				(index)++;
			}
		}
		HX_STACK_LINE(294)
		if (((other->colors->length == (int)0))){
			HX_STACK_LINE(295)
			if (((this->colors == null()))){
				HX_STACK_LINE(296)
				Array< Float > _g7 = Array_obj< Float >::__new();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(296)
				this->colors = _g7;
			}
			HX_STACK_LINE(300)
			index = (int)0;
			HX_STACK_LINE(301)
			while((true)){
				HX_STACK_LINE(301)
				if ((!(((index < other->colors->length))))){
					HX_STACK_LINE(301)
					break;
				}
				HX_STACK_LINE(302)
				this->colors->push(other->colors->__get(index));
				HX_STACK_LINE(303)
				(index)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VertexData_obj,merge,(void))

::com::gamestudiohx::babylonhx::mesh::VertexData VertexData_obj::CreateGroundFromHeightMap( Float width,Float height,Float subdivisions,Float minHeight,Float maxHeight,::openfl::utils::UInt8Array buffer,Float bufferWidth,Float bufferHeight){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","CreateGroundFromHeightMap",0xd62d0d77,"com.gamestudiohx.babylonhx.mesh.VertexData.CreateGroundFromHeightMap","com/gamestudiohx/babylonhx/mesh/VertexData.hx",821,0x4c868021)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(subdivisions,"subdivisions")
	HX_STACK_ARG(minHeight,"minHeight")
	HX_STACK_ARG(maxHeight,"maxHeight")
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(bufferWidth,"bufferWidth")
	HX_STACK_ARG(bufferHeight,"bufferHeight")
	HX_STACK_LINE(822)
	Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
	HX_STACK_LINE(823)
	Array< Float > positions = Array_obj< Float >::__new();		HX_STACK_VAR(positions,"positions");
	HX_STACK_LINE(824)
	Array< Float > normals = Array_obj< Float >::__new();		HX_STACK_VAR(normals,"normals");
	HX_STACK_LINE(825)
	Array< Float > uvs = Array_obj< Float >::__new();		HX_STACK_VAR(uvs,"uvs");
	HX_STACK_LINE(826)
	Float row;		HX_STACK_VAR(row,"row");
	HX_STACK_LINE(826)
	Float col;		HX_STACK_VAR(col,"col");
	HX_STACK_LINE(831)
	row = (int)0;
	HX_STACK_LINE(832)
	while((true)){
		HX_STACK_LINE(832)
		if ((!(((row <= subdivisions))))){
			HX_STACK_LINE(832)
			break;
		}
		HX_STACK_LINE(835)
		col = (int)0;
		HX_STACK_LINE(836)
		while((true)){
			HX_STACK_LINE(836)
			if ((!(((col <= subdivisions))))){
				HX_STACK_LINE(836)
				break;
			}
			HX_STACK_LINE(837)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 position = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(((Float((col * width)) / Float(subdivisions)) - (Float(width) / Float(2.0))),(int)0,((Float((((subdivisions - row)) * height)) / Float(subdivisions)) - (Float(height) / Float(2.0))));		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(841)
			int _g = ::Std_obj::_int(((Float(((position->x + (Float(width) / Float((int)2))))) / Float(width)) * ((bufferWidth - (int)1))));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(841)
			int heightMapX = (int(_g) | int((int)0));		HX_STACK_VAR(heightMapX,"heightMapX");
			HX_STACK_LINE(842)
			int _g1 = ::Std_obj::_int((((1.0 - (Float(((position->z + (Float(height) / Float((int)2))))) / Float(height)))) * ((bufferHeight - (int)1))));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(842)
			int heightMapY = (int(_g1) | int((int)0));		HX_STACK_VAR(heightMapY,"heightMapY");
			HX_STACK_LINE(844)
			int pos = ::Std_obj::_int((((heightMapX + (heightMapY * bufferWidth))) * (int)4));		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(845)
			int r = ::Std_obj::_int((Float(buffer->__get(pos)) / Float(255.0)));		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(846)
			int g = ::Std_obj::_int((Float(buffer->__get((pos + (int)1))) / Float(255.0)));		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(847)
			int b = ::Std_obj::_int((Float(buffer->__get((pos + (int)2))) / Float(255.0)));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(849)
			Float gradient = (((r * 0.3) + (g * 0.59)) + (b * 0.11));		HX_STACK_VAR(gradient,"gradient");
			HX_STACK_LINE(851)
			position->y = (minHeight + (((maxHeight - minHeight)) * gradient));
			HX_STACK_LINE(854)
			positions->push(position->x);
			HX_STACK_LINE(855)
			positions->push(position->y);
			HX_STACK_LINE(856)
			positions->push(position->z);
			HX_STACK_LINE(857)
			normals->push((int)0);
			HX_STACK_LINE(858)
			normals->push((int)0);
			HX_STACK_LINE(859)
			normals->push((int)0);
			HX_STACK_LINE(860)
			uvs->push((Float(col) / Float(subdivisions)));
			HX_STACK_LINE(861)
			uvs->push((1.0 - (Float(row) / Float(subdivisions))));
			HX_STACK_LINE(862)
			(col)++;
		}
		HX_STACK_LINE(865)
		(row)++;
	}
	HX_STACK_LINE(872)
	row = (int)0;
	HX_STACK_LINE(873)
	while((true)){
		HX_STACK_LINE(873)
		if ((!(((row < subdivisions))))){
			HX_STACK_LINE(873)
			break;
		}
		HX_STACK_LINE(876)
		col = (int)0;
		HX_STACK_LINE(877)
		while((true)){
			HX_STACK_LINE(877)
			if ((!(((col < subdivisions))))){
				HX_STACK_LINE(877)
				break;
			}
			HX_STACK_LINE(878)
			int _g2 = ::Std_obj::_int(((col + (int)1) + (((row + (int)1)) * ((subdivisions + (int)1)))));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(878)
			indices->push(_g2);
			HX_STACK_LINE(879)
			int _g3 = ::Std_obj::_int(((col + (int)1) + (row * ((subdivisions + (int)1)))));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(879)
			indices->push(_g3);
			HX_STACK_LINE(880)
			int _g4 = ::Std_obj::_int((col + (row * ((subdivisions + (int)1)))));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(880)
			indices->push(_g4);
			HX_STACK_LINE(882)
			int _g5 = ::Std_obj::_int((col + (((row + (int)1)) * ((subdivisions + (int)1)))));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(882)
			indices->push(_g5);
			HX_STACK_LINE(883)
			int _g6 = ::Std_obj::_int(((col + (int)1) + (((row + (int)1)) * ((subdivisions + (int)1)))));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(883)
			indices->push(_g6);
			HX_STACK_LINE(884)
			int _g7 = ::Std_obj::_int((col + (row * ((subdivisions + (int)1)))));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(884)
			indices->push(_g7);
			HX_STACK_LINE(885)
			(col)++;
		}
		HX_STACK_LINE(888)
		(row)++;
	}
	HX_STACK_LINE(893)
	::com::gamestudiohx::babylonhx::mesh::VertexData_obj::ComputeNormals(positions,indices,normals);
	HX_STACK_LINE(896)
	::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::__new();		HX_STACK_VAR(vertexData,"vertexData");
	HX_STACK_LINE(898)
	vertexData->indices = indices;
	HX_STACK_LINE(899)
	vertexData->positions = positions;
	HX_STACK_LINE(900)
	vertexData->normals = normals;
	HX_STACK_LINE(901)
	vertexData->uvs = uvs;
	HX_STACK_LINE(903)
	return vertexData;
}


HX_DEFINE_DYNAMIC_FUNC8(VertexData_obj,CreateGroundFromHeightMap,return )

::com::gamestudiohx::babylonhx::mesh::VertexData VertexData_obj::ExtractFromMesh( ::com::gamestudiohx::babylonhx::mesh::Mesh mesh){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","ExtractFromMesh",0x76766a07,"com.gamestudiohx.babylonhx.mesh.VertexData.ExtractFromMesh","com/gamestudiohx/babylonhx/mesh/VertexData.hx",312,0x4c868021)
	HX_STACK_ARG(mesh,"mesh")
	HX_STACK_LINE(312)
	return ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::_ExtractFrom(mesh);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VertexData_obj,ExtractFromMesh,return )

::com::gamestudiohx::babylonhx::mesh::VertexData VertexData_obj::ExtractFromGeometry( ::com::gamestudiohx::babylonhx::mesh::Geometry geometry){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","ExtractFromGeometry",0x9e4137cc,"com.gamestudiohx.babylonhx.mesh.VertexData.ExtractFromGeometry","com/gamestudiohx/babylonhx/mesh/VertexData.hx",316,0x4c868021)
	HX_STACK_ARG(geometry,"geometry")
	HX_STACK_LINE(316)
	return ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::_ExtractFrom(geometry);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VertexData_obj,ExtractFromGeometry,return )

::com::gamestudiohx::babylonhx::mesh::VertexData VertexData_obj::_ExtractFrom( ::com::gamestudiohx::babylonhx::mesh::IGetSetVerticesData meshOrGeometry){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","_ExtractFrom",0xa810ba7d,"com.gamestudiohx.babylonhx.mesh.VertexData._ExtractFrom","com/gamestudiohx/babylonhx/mesh/VertexData.hx",319,0x4c868021)
	HX_STACK_ARG(meshOrGeometry,"meshOrGeometry")
	HX_STACK_LINE(320)
	::com::gamestudiohx::babylonhx::mesh::VertexData result = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(322)
	if ((meshOrGeometry->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind))){
		HX_STACK_LINE(323)
		Array< Float > _g = meshOrGeometry->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(323)
		result->positions = _g;
	}
	HX_STACK_LINE(326)
	if ((meshOrGeometry->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind))){
		HX_STACK_LINE(327)
		Array< Float > _g1 = meshOrGeometry->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(327)
		result->normals = _g1;
	}
	HX_STACK_LINE(330)
	if ((meshOrGeometry->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UVKind))){
		HX_STACK_LINE(331)
		Array< Float > _g2 = meshOrGeometry->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UVKind);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(331)
		result->uvs = _g2;
	}
	HX_STACK_LINE(334)
	if ((meshOrGeometry->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UV2Kind))){
		HX_STACK_LINE(335)
		Array< Float > _g3 = meshOrGeometry->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UV2Kind);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(335)
		result->uv2s = _g3;
	}
	HX_STACK_LINE(338)
	if ((meshOrGeometry->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::ColorKind))){
		HX_STACK_LINE(339)
		Array< Float > _g4 = meshOrGeometry->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::ColorKind);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(339)
		result->colors = _g4;
	}
	HX_STACK_LINE(342)
	if ((meshOrGeometry->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesIndicesKind))){
		HX_STACK_LINE(343)
		Array< Float > _g5 = meshOrGeometry->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesIndicesKind);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(343)
		result->matricesIndices = _g5;
	}
	HX_STACK_LINE(346)
	if ((meshOrGeometry->isVerticesDataPresent(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesWeightsKind))){
		HX_STACK_LINE(347)
		Array< Float > _g6 = meshOrGeometry->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesWeightsKind);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(347)
		result->matricesWeights = _g6;
	}
	HX_STACK_LINE(350)
	Array< int > _g7 = meshOrGeometry->getIndices();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(350)
	result->indices = _g7;
	HX_STACK_LINE(352)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VertexData_obj,_ExtractFrom,return )

::com::gamestudiohx::babylonhx::mesh::VertexData VertexData_obj::CreateBox( hx::Null< Float >  __o_size){
Float size = __o_size.Default(1);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","CreateBox",0x93c22e5e,"com.gamestudiohx.babylonhx.mesh.VertexData.CreateBox","com/gamestudiohx/babylonhx/mesh/VertexData.hx",355,0x4c868021)
	HX_STACK_ARG(size,"size")
{
		HX_STACK_LINE(357)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(358)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)0,(int)-1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(359)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)1,(int)0,(int)0);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(360)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)-1,(int)0,(int)0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(361)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)1,(int)0);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(362)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g5 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)-1,(int)0);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(356)
		Array< ::Dynamic > normalsSource = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3).Add(_g4).Add(_g5);		HX_STACK_VAR(normalsSource,"normalsSource");
		HX_STACK_LINE(365)
		Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(366)
		Array< Float > positions = Array_obj< Float >::__new();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(367)
		Array< Float > normals = Array_obj< Float >::__new();		HX_STACK_VAR(normals,"normals");
		HX_STACK_LINE(368)
		Array< Float > uvs = Array_obj< Float >::__new();		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(373)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(374)
		while((true)){
			HX_STACK_LINE(374)
			if ((!(((index < normalsSource->length))))){
				HX_STACK_LINE(374)
				break;
			}
			HX_STACK_LINE(375)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = normalsSource->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(normal,"normal");
			HX_STACK_LINE(378)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 side1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(normal->y,normal->z,normal->x);		HX_STACK_VAR(side1,"side1");
			HX_STACK_LINE(379)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 side2;		HX_STACK_VAR(side2,"side2");
			HX_STACK_LINE(379)
			{
				HX_STACK_LINE(379)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(379)
				{
					HX_STACK_LINE(379)
					result->x = ((normal->y * side1->z) - (normal->z * side1->y));
					HX_STACK_LINE(379)
					result->y = ((normal->z * side1->x) - (normal->x * side1->z));
					HX_STACK_LINE(379)
					result->z = ((normal->x * side1->y) - (normal->y * side1->x));
				}
				HX_STACK_LINE(379)
				side2 = result;
			}
			HX_STACK_LINE(382)
			int verticesLength = ::Std_obj::_int((Float(positions->length) / Float((int)3)));		HX_STACK_VAR(verticesLength,"verticesLength");
			HX_STACK_LINE(383)
			indices->push(verticesLength);
			HX_STACK_LINE(384)
			indices->push((verticesLength + (int)1));
			HX_STACK_LINE(385)
			indices->push((verticesLength + (int)2));
			HX_STACK_LINE(387)
			indices->push(verticesLength);
			HX_STACK_LINE(388)
			indices->push((verticesLength + (int)2));
			HX_STACK_LINE(389)
			indices->push((verticesLength + (int)3));
			HX_STACK_LINE(392)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 vertex;		HX_STACK_VAR(vertex,"vertex");
			HX_STACK_LINE(392)
			{
				HX_STACK_LINE(392)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(392)
				{
					HX_STACK_LINE(392)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x - side1->x),(normal->y - side1->y),(normal->z - side1->z));		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(392)
					_this = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this1->x - side2->x),(_this1->y - side2->y),(_this1->z - side2->z));
				}
				HX_STACK_LINE(392)
				Float scale = (Float(size) / Float((int)2));		HX_STACK_VAR(scale,"scale");
				HX_STACK_LINE(392)
				vertex = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this->x * scale),(_this->y * scale),(_this->z * scale));
			}
			HX_STACK_LINE(393)
			positions->push(vertex->x);
			HX_STACK_LINE(394)
			positions->push(vertex->y);
			HX_STACK_LINE(395)
			positions->push(vertex->z);
			HX_STACK_LINE(396)
			normals->push(normal->x);
			HX_STACK_LINE(397)
			normals->push(normal->y);
			HX_STACK_LINE(398)
			normals->push(normal->z);
			HX_STACK_LINE(399)
			uvs->push(1.0);
			HX_STACK_LINE(400)
			uvs->push(1.0);
			HX_STACK_LINE(402)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(402)
			{
				HX_STACK_LINE(402)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(402)
				{
					HX_STACK_LINE(402)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x - side1->x),(normal->y - side1->y),(normal->z - side1->z));		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(402)
					_this = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this1->x + side2->x),(_this1->y + side2->y),(_this1->z + side2->z));
				}
				HX_STACK_LINE(402)
				Float scale = (Float(size) / Float((int)2));		HX_STACK_VAR(scale,"scale");
				HX_STACK_LINE(402)
				_g6 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this->x * scale),(_this->y * scale),(_this->z * scale));
			}
			HX_STACK_LINE(402)
			vertex = _g6;
			HX_STACK_LINE(403)
			positions->push(vertex->x);
			HX_STACK_LINE(404)
			positions->push(vertex->y);
			HX_STACK_LINE(405)
			positions->push(vertex->z);
			HX_STACK_LINE(406)
			normals->push(normal->x);
			HX_STACK_LINE(407)
			normals->push(normal->y);
			HX_STACK_LINE(408)
			normals->push(normal->z);
			HX_STACK_LINE(409)
			uvs->push(0.0);
			HX_STACK_LINE(410)
			uvs->push(1.0);
			HX_STACK_LINE(412)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(412)
			{
				HX_STACK_LINE(412)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(412)
				{
					HX_STACK_LINE(412)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x + side1->x),(normal->y + side1->y),(normal->z + side1->z));		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(412)
					_this = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this1->x + side2->x),(_this1->y + side2->y),(_this1->z + side2->z));
				}
				HX_STACK_LINE(412)
				Float scale = (Float(size) / Float((int)2));		HX_STACK_VAR(scale,"scale");
				HX_STACK_LINE(412)
				_g7 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this->x * scale),(_this->y * scale),(_this->z * scale));
			}
			HX_STACK_LINE(412)
			vertex = _g7;
			HX_STACK_LINE(413)
			positions->push(vertex->x);
			HX_STACK_LINE(414)
			positions->push(vertex->y);
			HX_STACK_LINE(415)
			positions->push(vertex->z);
			HX_STACK_LINE(416)
			normals->push(normal->x);
			HX_STACK_LINE(417)
			normals->push(normal->y);
			HX_STACK_LINE(418)
			normals->push(normal->z);
			HX_STACK_LINE(419)
			uvs->push(0.0);
			HX_STACK_LINE(420)
			uvs->push(0.0);
			HX_STACK_LINE(422)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g8;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(422)
			{
				HX_STACK_LINE(422)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(422)
				{
					HX_STACK_LINE(422)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _this1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x + side1->x),(normal->y + side1->y),(normal->z + side1->z));		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(422)
					_this = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this1->x - side2->x),(_this1->y - side2->y),(_this1->z - side2->z));
				}
				HX_STACK_LINE(422)
				Float scale = (Float(size) / Float((int)2));		HX_STACK_VAR(scale,"scale");
				HX_STACK_LINE(422)
				_g8 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this->x * scale),(_this->y * scale),(_this->z * scale));
			}
			HX_STACK_LINE(422)
			vertex = _g8;
			HX_STACK_LINE(423)
			positions->push(vertex->x);
			HX_STACK_LINE(424)
			positions->push(vertex->y);
			HX_STACK_LINE(425)
			positions->push(vertex->z);
			HX_STACK_LINE(426)
			normals->push(normal->x);
			HX_STACK_LINE(427)
			normals->push(normal->y);
			HX_STACK_LINE(428)
			normals->push(normal->z);
			HX_STACK_LINE(429)
			uvs->push(1.0);
			HX_STACK_LINE(430)
			uvs->push(0.0);
			HX_STACK_LINE(431)
			(index)++;
		}
		HX_STACK_LINE(436)
		::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::__new();		HX_STACK_VAR(vertexData,"vertexData");
		HX_STACK_LINE(438)
		vertexData->indices = indices;
		HX_STACK_LINE(439)
		vertexData->positions = positions;
		HX_STACK_LINE(440)
		vertexData->normals = normals;
		HX_STACK_LINE(441)
		vertexData->uvs = uvs;
		HX_STACK_LINE(443)
		return vertexData;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VertexData_obj,CreateBox,return )

::com::gamestudiohx::babylonhx::mesh::VertexData VertexData_obj::CreateSphere( hx::Null< Float >  __o_segments,hx::Null< Float >  __o_diameter){
Float segments = __o_segments.Default(32);
Float diameter = __o_diameter.Default(1);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","CreateSphere",0xaca1f49a,"com.gamestudiohx.babylonhx.mesh.VertexData.CreateSphere","com/gamestudiohx/babylonhx/mesh/VertexData.hx",446,0x4c868021)
	HX_STACK_ARG(segments,"segments")
	HX_STACK_ARG(diameter,"diameter")
{
		HX_STACK_LINE(449)
		Float radius = (Float(diameter) / Float((int)2));		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(451)
		Float totalZRotationSteps = ((int)2 + segments);		HX_STACK_VAR(totalZRotationSteps,"totalZRotationSteps");
		HX_STACK_LINE(452)
		Float totalYRotationSteps = ((int)2 * totalZRotationSteps);		HX_STACK_VAR(totalYRotationSteps,"totalYRotationSteps");
		HX_STACK_LINE(454)
		Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(455)
		Array< Float > positions = Array_obj< Float >::__new();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(456)
		Array< Float > normals = Array_obj< Float >::__new();		HX_STACK_VAR(normals,"normals");
		HX_STACK_LINE(457)
		Array< Float > uvs = Array_obj< Float >::__new();		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(460)
		int zRotationStep = (int)0;		HX_STACK_VAR(zRotationStep,"zRotationStep");
		HX_STACK_LINE(461)
		while((true)){
			HX_STACK_LINE(461)
			if ((!(((zRotationStep <= totalZRotationSteps))))){
				HX_STACK_LINE(461)
				break;
			}
			HX_STACK_LINE(462)
			Float normalizedZ = (Float(zRotationStep) / Float(totalZRotationSteps));		HX_STACK_VAR(normalizedZ,"normalizedZ");
			HX_STACK_LINE(463)
			Float angleZ = (normalizedZ * ::Math_obj::PI);		HX_STACK_VAR(angleZ,"angleZ");
			HX_STACK_LINE(466)
			int yRotationStep = (int)0;		HX_STACK_VAR(yRotationStep,"yRotationStep");
			HX_STACK_LINE(467)
			while((true)){
				HX_STACK_LINE(467)
				if ((!(((yRotationStep <= totalYRotationSteps))))){
					HX_STACK_LINE(467)
					break;
				}
				HX_STACK_LINE(468)
				Float normalizedY = (Float(yRotationStep) / Float(totalYRotationSteps));		HX_STACK_VAR(normalizedY,"normalizedY");
				HX_STACK_LINE(470)
				Float angleY = ((normalizedY * ::Math_obj::PI) * (int)2);		HX_STACK_VAR(angleY,"angleY");
				HX_STACK_LINE(472)
				::com::gamestudiohx::babylonhx::tools::math::Matrix rotationZ;		HX_STACK_VAR(rotationZ,"rotationZ");
				HX_STACK_LINE(472)
				{
					HX_STACK_LINE(472)
					Float angle = -(angleZ);		HX_STACK_VAR(angle,"angle");
					HX_STACK_LINE(472)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(472)
					{
						HX_STACK_LINE(472)
						Float s = ::Math_obj::sin(angle);		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(472)
						Float c = ::Math_obj::cos(angle);		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(472)
						result->m[(int)10] = 1.0;
						HX_STACK_LINE(472)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(472)
						result->m[(int)0] = c;
						HX_STACK_LINE(472)
						result->m[(int)1] = s;
						HX_STACK_LINE(472)
						result->m[(int)4] = -(s);
						HX_STACK_LINE(472)
						result->m[(int)5] = c;
						HX_STACK_LINE(472)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(472)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(472)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(472)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(472)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(472)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(472)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(472)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(472)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(472)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(472)
						result;
					}
					HX_STACK_LINE(472)
					rotationZ = result;
				}
				HX_STACK_LINE(473)
				::com::gamestudiohx::babylonhx::tools::math::Matrix rotationY;		HX_STACK_VAR(rotationY,"rotationY");
				HX_STACK_LINE(473)
				{
					HX_STACK_LINE(473)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(473)
					{
						HX_STACK_LINE(473)
						Float s = ::Math_obj::sin(angleY);		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(473)
						Float c = ::Math_obj::cos(angleY);		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(473)
						result->m[(int)5] = 1.0;
						HX_STACK_LINE(473)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(473)
						result->m[(int)0] = c;
						HX_STACK_LINE(473)
						result->m[(int)2] = -(s);
						HX_STACK_LINE(473)
						result->m[(int)8] = s;
						HX_STACK_LINE(473)
						result->m[(int)10] = c;
						HX_STACK_LINE(473)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(473)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(473)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(473)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(473)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(473)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(473)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(473)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(473)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(473)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(473)
						result;
					}
					HX_STACK_LINE(473)
					rotationY = result;
				}
				HX_STACK_LINE(474)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 afterRotZ;		HX_STACK_VAR(afterRotZ,"afterRotZ");
				HX_STACK_LINE(474)
				{
					HX_STACK_LINE(474)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 vector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Up();		HX_STACK_VAR(vector,"vector");
					HX_STACK_LINE(474)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(474)
					{
						HX_STACK_LINE(474)
						Float x = ((((vector->x * rotationZ->m->__get((int)0)) + (vector->y * rotationZ->m->__get((int)4))) + (vector->z * rotationZ->m->__get((int)8))) + rotationZ->m->__get((int)12));		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(474)
						Float y = ((((vector->x * rotationZ->m->__get((int)1)) + (vector->y * rotationZ->m->__get((int)5))) + (vector->z * rotationZ->m->__get((int)9))) + rotationZ->m->__get((int)13));		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(474)
						Float z = ((((vector->x * rotationZ->m->__get((int)2)) + (vector->y * rotationZ->m->__get((int)6))) + (vector->z * rotationZ->m->__get((int)10))) + rotationZ->m->__get((int)14));		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(474)
						Float w = ((((vector->x * rotationZ->m->__get((int)3)) + (vector->y * rotationZ->m->__get((int)7))) + (vector->z * rotationZ->m->__get((int)11))) + rotationZ->m->__get((int)15));		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(474)
						result->x = (Float(x) / Float(w));
						HX_STACK_LINE(474)
						result->y = (Float(y) / Float(w));
						HX_STACK_LINE(474)
						result->z = (Float(z) / Float(w));
					}
					HX_STACK_LINE(474)
					afterRotZ = result;
				}
				HX_STACK_LINE(475)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 complete;		HX_STACK_VAR(complete,"complete");
				HX_STACK_LINE(475)
				{
					HX_STACK_LINE(475)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(475)
					{
						HX_STACK_LINE(475)
						Float x = ((((afterRotZ->x * rotationY->m->__get((int)0)) + (afterRotZ->y * rotationY->m->__get((int)4))) + (afterRotZ->z * rotationY->m->__get((int)8))) + rotationY->m->__get((int)12));		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(475)
						Float y = ((((afterRotZ->x * rotationY->m->__get((int)1)) + (afterRotZ->y * rotationY->m->__get((int)5))) + (afterRotZ->z * rotationY->m->__get((int)9))) + rotationY->m->__get((int)13));		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(475)
						Float z = ((((afterRotZ->x * rotationY->m->__get((int)2)) + (afterRotZ->y * rotationY->m->__get((int)6))) + (afterRotZ->z * rotationY->m->__get((int)10))) + rotationY->m->__get((int)14));		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(475)
						Float w = ((((afterRotZ->x * rotationY->m->__get((int)3)) + (afterRotZ->y * rotationY->m->__get((int)7))) + (afterRotZ->z * rotationY->m->__get((int)11))) + rotationY->m->__get((int)15));		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(475)
						result->x = (Float(x) / Float(w));
						HX_STACK_LINE(475)
						result->y = (Float(y) / Float(w));
						HX_STACK_LINE(475)
						result->z = (Float(z) / Float(w));
					}
					HX_STACK_LINE(475)
					complete = result;
				}
				HX_STACK_LINE(477)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 vertex = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((complete->x * radius),(complete->y * radius),(complete->z * radius));		HX_STACK_VAR(vertex,"vertex");
				HX_STACK_LINE(478)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 normal;		HX_STACK_VAR(normal,"normal");
				HX_STACK_LINE(478)
				{
					HX_STACK_LINE(478)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(478)
					{
						HX_STACK_LINE(478)
						{
							HX_STACK_LINE(478)
							result->x = vertex->x;
							HX_STACK_LINE(478)
							result->y = vertex->y;
							HX_STACK_LINE(478)
							result->z = vertex->z;
						}
						HX_STACK_LINE(478)
						{
							HX_STACK_LINE(478)
							Float len = ::Math_obj::sqrt((((result->x * result->x) + (result->y * result->y)) + (result->z * result->z)));		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(478)
							if (((len != (int)0))){
								HX_STACK_LINE(478)
								Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
								HX_STACK_LINE(478)
								hx::MultEq(result->x,num);
								HX_STACK_LINE(478)
								hx::MultEq(result->y,num);
								HX_STACK_LINE(478)
								hx::MultEq(result->z,num);
							}
						}
					}
					HX_STACK_LINE(478)
					normal = result;
				}
				HX_STACK_LINE(480)
				positions->push(vertex->x);
				HX_STACK_LINE(481)
				positions->push(vertex->y);
				HX_STACK_LINE(482)
				positions->push(vertex->z);
				HX_STACK_LINE(483)
				normals->push(normal->x);
				HX_STACK_LINE(484)
				normals->push(normal->y);
				HX_STACK_LINE(485)
				normals->push(normal->z);
				HX_STACK_LINE(486)
				uvs->push(normalizedZ);
				HX_STACK_LINE(487)
				uvs->push(normalizedY);
				HX_STACK_LINE(488)
				(yRotationStep)++;
			}
			HX_STACK_LINE(492)
			if (((zRotationStep > (int)0))){
				HX_STACK_LINE(493)
				Float verticesCount = (Float(positions->length) / Float((int)3));		HX_STACK_VAR(verticesCount,"verticesCount");
				HX_STACK_LINE(496)
				Float firstIndex = (verticesCount - ((int)2 * ((totalYRotationSteps + (int)1))));		HX_STACK_VAR(firstIndex,"firstIndex");
				HX_STACK_LINE(497)
				while((true)){
					HX_STACK_LINE(497)
					if ((!(((((firstIndex + totalYRotationSteps) + (int)2) < verticesCount))))){
						HX_STACK_LINE(497)
						break;
					}
					HX_STACK_LINE(498)
					int _g = ::Std_obj::_int(firstIndex);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(498)
					indices->push(_g);
					HX_STACK_LINE(499)
					int _g1 = ::Std_obj::_int((firstIndex + (int)1));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(499)
					indices->push(_g1);
					HX_STACK_LINE(500)
					int _g2 = ::Std_obj::_int(((firstIndex + totalYRotationSteps) + (int)1));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(500)
					indices->push(_g2);
					HX_STACK_LINE(502)
					int _g3 = ::Std_obj::_int(((firstIndex + totalYRotationSteps) + (int)1));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(502)
					indices->push(_g3);
					HX_STACK_LINE(503)
					int _g4 = ::Std_obj::_int((firstIndex + (int)1));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(503)
					indices->push(_g4);
					HX_STACK_LINE(504)
					int _g5 = ::Std_obj::_int(((firstIndex + totalYRotationSteps) + (int)2));		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(504)
					indices->push(_g5);
					HX_STACK_LINE(505)
					(firstIndex)++;
				}
			}
			HX_STACK_LINE(509)
			(zRotationStep)++;
		}
		HX_STACK_LINE(514)
		::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::__new();		HX_STACK_VAR(vertexData,"vertexData");
		HX_STACK_LINE(516)
		vertexData->indices = indices;
		HX_STACK_LINE(517)
		vertexData->positions = positions;
		HX_STACK_LINE(518)
		vertexData->normals = normals;
		HX_STACK_LINE(519)
		vertexData->uvs = uvs;
		HX_STACK_LINE(521)
		return vertexData;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VertexData_obj,CreateSphere,return )

::com::gamestudiohx::babylonhx::mesh::VertexData VertexData_obj::CreateCylinder( hx::Null< Float >  __o_height,hx::Null< Float >  __o_diameterTop,hx::Null< Float >  __o_diameterBottom,hx::Null< Float >  __o_tessellation){
Float height = __o_height.Default(1);
Float diameterTop = __o_diameterTop.Default(0.5);
Float diameterBottom = __o_diameterBottom.Default(1);
Float tessellation = __o_tessellation.Default(16);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","CreateCylinder",0x57f85923,"com.gamestudiohx.babylonhx.mesh.VertexData.CreateCylinder","com/gamestudiohx/babylonhx/mesh/VertexData.hx",524,0x4c868021)
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(diameterTop,"diameterTop")
	HX_STACK_ARG(diameterBottom,"diameterBottom")
	HX_STACK_ARG(tessellation,"tessellation")
{
		HX_STACK_LINE(524)
		Array< Float > tessellation1 = Array_obj< Float >::__new().Add(tessellation);		HX_STACK_VAR(tessellation1,"tessellation1");
		HX_STACK_LINE(524)
		Array< Float > height1 = Array_obj< Float >::__new().Add(height);		HX_STACK_VAR(height1,"height1");
		HX_STACK_LINE(525)
		Array< Float > radiusTop = Array_obj< Float >::__new().Add((Float(diameterTop) / Float((int)2)));		HX_STACK_VAR(radiusTop,"radiusTop");
		HX_STACK_LINE(526)
		Array< Float > radiusBottom = Array_obj< Float >::__new().Add((Float(diameterBottom) / Float((int)2)));		HX_STACK_VAR(radiusBottom,"radiusBottom");
		HX_STACK_LINE(527)
		Array< ::Dynamic > indices = Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new());		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(528)
		Array< ::Dynamic > positions = Array_obj< ::Dynamic >::__new().Add(Array_obj< Float >::__new());		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(529)
		Array< ::Dynamic > normals = Array_obj< ::Dynamic >::__new().Add(Array_obj< Float >::__new());		HX_STACK_VAR(normals,"normals");
		HX_STACK_LINE(530)
		Array< ::Dynamic > uvs = Array_obj< ::Dynamic >::__new().Add(Array_obj< Float >::__new());		HX_STACK_VAR(uvs,"uvs");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< Float >,tessellation1)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 run(int i){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/gamestudiohx/babylonhx/mesh/VertexData.hx",538,0x4c868021)
			HX_STACK_ARG(i,"i")
			{
				HX_STACK_LINE(539)
				Float angle = (Float(((i * 2.0) * ::Math_obj::PI)) / Float(tessellation1->__get((int)0)));		HX_STACK_VAR(angle,"angle");
				HX_STACK_LINE(540)
				Float dx = ::Math_obj::sin(angle);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(541)
				Float dz = ::Math_obj::cos(angle);		HX_STACK_VAR(dz,"dz");
				HX_STACK_LINE(543)
				return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(dx,(int)0,dz);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(538)
		Dynamic getCircleVector = Dynamic( Array_obj<Dynamic>::__new().Add( Dynamic(new _Function_1_1(tessellation1))));		HX_STACK_VAR(getCircleVector,"getCircleVector");

		HX_BEGIN_LOCAL_FUNC_S9(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,positions,Array< ::Dynamic >,indices,Array< Float >,radiusTop,Dynamic,getCircleVector,Array< Float >,tessellation1,Array< Float >,height1,Array< ::Dynamic >,uvs,Array< Float >,radiusBottom,Array< ::Dynamic >,normals)
		Void run(bool isTop){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/gamestudiohx/babylonhx/mesh/VertexData.hx",546,0x4c868021)
			HX_STACK_ARG(isTop,"isTop")
			{
				HX_STACK_LINE(547)
				Float radius;		HX_STACK_VAR(radius,"radius");
				HX_STACK_LINE(548)
				if ((isTop)){
					HX_STACK_LINE(549)
					radius = radiusTop->__get((int)0);
				}
				else{
					HX_STACK_LINE(551)
					radius = radiusBottom->__get((int)0);
				}
				HX_STACK_LINE(554)
				if (((radius == (int)0))){
					HX_STACK_LINE(555)
					return null();
				}
				HX_STACK_LINE(561)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(562)
				while((true)){
					HX_STACK_LINE(562)
					if ((!(((i < (tessellation1->__get((int)0) - (int)2)))))){
						HX_STACK_LINE(562)
						break;
					}
					HX_STACK_LINE(563)
					Float i1 = hx::Mod(((i + (int)1)),tessellation1->__get((int)0));		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(564)
					Float i2 = hx::Mod(((i + (int)2)),tessellation1->__get((int)0));		HX_STACK_VAR(i2,"i2");
					HX_STACK_LINE(566)
					if ((!(isTop))){
						HX_STACK_LINE(567)
						Float tmp = i1;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(568)
						i1 = i2;
						HX_STACK_LINE(569)
						i2 = tmp;
					}
					HX_STACK_LINE(572)
					Float vbase = (Float(positions->__get((int)0).StaticCast< Array< Float > >()->length) / Float((int)3));		HX_STACK_VAR(vbase,"vbase");
					HX_STACK_LINE(573)
					int _g = ::Std_obj::_int(vbase);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(573)
					indices->__get((int)0).StaticCast< Array< int > >()->push(_g);
					HX_STACK_LINE(574)
					int _g1 = ::Std_obj::_int((vbase + i1));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(574)
					indices->__get((int)0).StaticCast< Array< int > >()->push(_g1);
					HX_STACK_LINE(575)
					int _g2 = ::Std_obj::_int((vbase + i2));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(575)
					indices->__get((int)0).StaticCast< Array< int > >()->push(_g2);
					HX_STACK_LINE(576)
					(i)++;
				}
				HX_STACK_LINE(581)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)-1,(int)0);		HX_STACK_VAR(normal,"normal");
				HX_STACK_LINE(582)
				::com::gamestudiohx::babylonhx::tools::math::Vector2 textureScale = ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new(-0.5,-0.5);		HX_STACK_VAR(textureScale,"textureScale");
				HX_STACK_LINE(584)
				if ((!(isTop))){
					HX_STACK_LINE(585)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x * (int)-1),(normal->y * (int)-1),(normal->z * (int)-1));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(585)
					normal = _g3;
					HX_STACK_LINE(586)
					textureScale->x = -(textureScale->x);
				}
				HX_STACK_LINE(592)
				i = (int)0;
				HX_STACK_LINE(593)
				while((true)){
					HX_STACK_LINE(593)
					if ((!(((i < tessellation1->__get((int)0)))))){
						HX_STACK_LINE(593)
						break;
					}
					HX_STACK_LINE(594)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 circleVector = getCircleVector->__GetItem((int)0)(i).Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(circleVector,"circleVector");
					HX_STACK_LINE(595)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 position;		HX_STACK_VAR(position,"position");
					HX_STACK_LINE(595)
					{
						HX_STACK_LINE(595)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((circleVector->x * radius),(circleVector->y * radius),(circleVector->z * radius));		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(595)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x * height1->__get((int)0)),(normal->y * height1->__get((int)0)),(normal->z * height1->__get((int)0)));		HX_STACK_VAR(otherVector,"otherVector");
						HX_STACK_LINE(595)
						position = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this->x + otherVector->x),(_this->y + otherVector->y),(_this->z + otherVector->z));
					}
					HX_STACK_LINE(596)
					::com::gamestudiohx::babylonhx::tools::math::Vector2 textureCoordinate = ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new(((circleVector->x * textureScale->x) + 0.5),((circleVector->z * textureScale->y) + 0.5));		HX_STACK_VAR(textureCoordinate,"textureCoordinate");
					HX_STACK_LINE(598)
					positions->__get((int)0).StaticCast< Array< Float > >()->push(position->x);
					HX_STACK_LINE(599)
					positions->__get((int)0).StaticCast< Array< Float > >()->push(position->y);
					HX_STACK_LINE(600)
					positions->__get((int)0).StaticCast< Array< Float > >()->push(position->z);
					HX_STACK_LINE(601)
					normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->x);
					HX_STACK_LINE(602)
					normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->y);
					HX_STACK_LINE(603)
					normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->z);
					HX_STACK_LINE(605)
					uvs->__get((int)0).StaticCast< Array< Float > >()->push(textureCoordinate->x);
					HX_STACK_LINE(606)
					uvs->__get((int)0).StaticCast< Array< Float > >()->push(textureCoordinate->y);
					HX_STACK_LINE(607)
					(i)++;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(546)
		Dynamic createCylinderCap =  Dynamic(new _Function_1_2(positions,indices,radiusTop,getCircleVector,tessellation1,height1,uvs,radiusBottom,normals));		HX_STACK_VAR(createCylinderCap,"createCylinderCap");
		HX_STACK_LINE(612)
		hx::DivEq(height1[(int)0],(int)2);
		HX_STACK_LINE(614)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 topOffset;		HX_STACK_VAR(topOffset,"topOffset");
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _this = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)1,(int)0);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(614)
			topOffset = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((_this->x * height1->__get((int)0)),(_this->y * height1->__get((int)0)),(_this->z * height1->__get((int)0)));
		}
		HX_STACK_LINE(616)
		Float stride = (tessellation1->__get((int)0) + (int)1);		HX_STACK_VAR(stride,"stride");
		HX_STACK_LINE(621)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(622)
		while((true)){
			HX_STACK_LINE(622)
			if ((!(((i <= tessellation1->__get((int)0)))))){
				HX_STACK_LINE(622)
				break;
			}
			HX_STACK_LINE(623)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = getCircleVector->__GetItem((int)0)(i).Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(normal,"normal");
			HX_STACK_LINE(624)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 sideOffsetBottom = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x * radiusBottom->__get((int)0)),(normal->y * radiusBottom->__get((int)0)),(normal->z * radiusBottom->__get((int)0)));		HX_STACK_VAR(sideOffsetBottom,"sideOffsetBottom");
			HX_STACK_LINE(625)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 sideOffsetTop = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x * radiusTop->__get((int)0)),(normal->y * radiusTop->__get((int)0)),(normal->z * radiusTop->__get((int)0)));		HX_STACK_VAR(sideOffsetTop,"sideOffsetTop");
			HX_STACK_LINE(626)
			::com::gamestudiohx::babylonhx::tools::math::Vector2 textureCoordinate = ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new((Float(i) / Float(tessellation1->__get((int)0))),(int)0);		HX_STACK_VAR(textureCoordinate,"textureCoordinate");
			HX_STACK_LINE(628)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 position = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((sideOffsetBottom->x + topOffset->x),(sideOffsetBottom->y + topOffset->y),(sideOffsetBottom->z + topOffset->z));		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(629)
			positions->__get((int)0).StaticCast< Array< Float > >()->push(position->x);
			HX_STACK_LINE(630)
			positions->__get((int)0).StaticCast< Array< Float > >()->push(position->y);
			HX_STACK_LINE(631)
			positions->__get((int)0).StaticCast< Array< Float > >()->push(position->z);
			HX_STACK_LINE(632)
			normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->x);
			HX_STACK_LINE(633)
			normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->y);
			HX_STACK_LINE(634)
			normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->z);
			HX_STACK_LINE(635)
			uvs->__get((int)0).StaticCast< Array< Float > >()->push(textureCoordinate->x);
			HX_STACK_LINE(636)
			uvs->__get((int)0).StaticCast< Array< Float > >()->push(textureCoordinate->y);
			HX_STACK_LINE(638)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((sideOffsetTop->x - topOffset->x),(sideOffsetTop->y - topOffset->y),(sideOffsetTop->z - topOffset->z));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(638)
			position = _g4;
			HX_STACK_LINE(639)
			hx::AddEq(textureCoordinate->y,(int)1);
			HX_STACK_LINE(640)
			positions->__get((int)0).StaticCast< Array< Float > >()->push(position->x);
			HX_STACK_LINE(641)
			positions->__get((int)0).StaticCast< Array< Float > >()->push(position->y);
			HX_STACK_LINE(642)
			positions->__get((int)0).StaticCast< Array< Float > >()->push(position->z);
			HX_STACK_LINE(643)
			normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->x);
			HX_STACK_LINE(644)
			normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->y);
			HX_STACK_LINE(645)
			normals->__get((int)0).StaticCast< Array< Float > >()->push(normal->z);
			HX_STACK_LINE(646)
			uvs->__get((int)0).StaticCast< Array< Float > >()->push(textureCoordinate->x);
			HX_STACK_LINE(647)
			uvs->__get((int)0).StaticCast< Array< Float > >()->push(textureCoordinate->y);
			HX_STACK_LINE(649)
			int _g5 = ::Std_obj::_int((i * (int)2));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(649)
			indices->__get((int)0).StaticCast< Array< int > >()->push(_g5);
			HX_STACK_LINE(650)
			int _g6 = ::Std_obj::_int(hx::Mod((((i * (int)2) + (int)2)),((stride * (int)2))));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(650)
			indices->__get((int)0).StaticCast< Array< int > >()->push(_g6);
			HX_STACK_LINE(651)
			int _g7 = ::Std_obj::_int(((i * (int)2) + (int)1));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(651)
			indices->__get((int)0).StaticCast< Array< int > >()->push(_g7);
			HX_STACK_LINE(653)
			int _g8 = ::Std_obj::_int(((i * (int)2) + (int)1));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(653)
			indices->__get((int)0).StaticCast< Array< int > >()->push(_g8);
			HX_STACK_LINE(654)
			int _g9 = ::Std_obj::_int(hx::Mod((((i * (int)2) + (int)2)),((stride * (int)2))));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(654)
			indices->__get((int)0).StaticCast< Array< int > >()->push(_g9);
			HX_STACK_LINE(655)
			int _g10 = ::Std_obj::_int(hx::Mod((((i * (int)2) + (int)3)),((stride * (int)2))));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(655)
			indices->__get((int)0).StaticCast< Array< int > >()->push(_g10);
			HX_STACK_LINE(656)
			(i)++;
		}
		HX_STACK_LINE(661)
		createCylinderCap(true).Cast< Void >();
		HX_STACK_LINE(662)
		createCylinderCap(false).Cast< Void >();
		HX_STACK_LINE(665)
		::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::__new();		HX_STACK_VAR(vertexData,"vertexData");
		HX_STACK_LINE(667)
		vertexData->indices = indices->__get((int)0).StaticCast< Array< int > >();
		HX_STACK_LINE(668)
		vertexData->positions = positions->__get((int)0).StaticCast< Array< Float > >();
		HX_STACK_LINE(669)
		vertexData->normals = normals->__get((int)0).StaticCast< Array< Float > >();
		HX_STACK_LINE(670)
		vertexData->uvs = uvs->__get((int)0).StaticCast< Array< Float > >();
		HX_STACK_LINE(672)
		return vertexData;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(VertexData_obj,CreateCylinder,return )

::com::gamestudiohx::babylonhx::mesh::VertexData VertexData_obj::CreateTorus( hx::Null< Float >  __o_diameter,hx::Null< Float >  __o_thickness,hx::Null< Float >  __o_tessellation){
Float diameter = __o_diameter.Default(1);
Float thickness = __o_thickness.Default(0.5);
Float tessellation = __o_tessellation.Default(16);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","CreateTorus",0x08a34bc8,"com.gamestudiohx.babylonhx.mesh.VertexData.CreateTorus","com/gamestudiohx/babylonhx/mesh/VertexData.hx",675,0x4c868021)
	HX_STACK_ARG(diameter,"diameter")
	HX_STACK_ARG(thickness,"thickness")
	HX_STACK_ARG(tessellation,"tessellation")
{
		HX_STACK_LINE(676)
		Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(677)
		Array< Float > positions = Array_obj< Float >::__new();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(678)
		Array< Float > normals = Array_obj< Float >::__new();		HX_STACK_VAR(normals,"normals");
		HX_STACK_LINE(679)
		Array< Float > uvs = Array_obj< Float >::__new();		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(686)
		Float stride = (tessellation + (int)1);		HX_STACK_VAR(stride,"stride");
		HX_STACK_LINE(689)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(690)
		while((true)){
			HX_STACK_LINE(690)
			if ((!(((i <= tessellation))))){
				HX_STACK_LINE(690)
				break;
			}
			HX_STACK_LINE(691)
			Float u = (Float(i) / Float(tessellation));		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(693)
			Float outerAngle = ((Float(((i * ::Math_obj::PI) * 2.0)) / Float(tessellation)) - (Float(::Math_obj::PI) / Float(2.0)));		HX_STACK_VAR(outerAngle,"outerAngle");
			HX_STACK_LINE(695)
			::com::gamestudiohx::babylonhx::tools::math::Matrix transform;		HX_STACK_VAR(transform,"transform");
			HX_STACK_LINE(695)
			{
				HX_STACK_LINE(695)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(695)
				{
					HX_STACK_LINE(695)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(695)
					{
						HX_STACK_LINE(695)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(695)
						result1->m[(int)0] = 1.0;
						HX_STACK_LINE(695)
						result1->m[(int)1] = (int)0;
						HX_STACK_LINE(695)
						result1->m[(int)2] = (int)0;
						HX_STACK_LINE(695)
						result1->m[(int)3] = (int)0;
						HX_STACK_LINE(695)
						result1->m[(int)4] = (int)0;
						HX_STACK_LINE(695)
						result1->m[(int)5] = 1.0;
						HX_STACK_LINE(695)
						result1->m[(int)6] = (int)0;
						HX_STACK_LINE(695)
						result1->m[(int)7] = (int)0;
						HX_STACK_LINE(695)
						result1->m[(int)8] = (int)0;
						HX_STACK_LINE(695)
						result1->m[(int)9] = (int)0;
						HX_STACK_LINE(695)
						result1->m[(int)10] = 1.0;
						HX_STACK_LINE(695)
						result1->m[(int)11] = (int)0;
						HX_STACK_LINE(695)
						result1->m[(int)12] = (int)0;
						HX_STACK_LINE(695)
						result1->m[(int)13] = (int)0;
						HX_STACK_LINE(695)
						result1->m[(int)14] = (int)0;
						HX_STACK_LINE(695)
						result1->m[(int)15] = 1.0;
						HX_STACK_LINE(695)
						result = result1;
					}
					HX_STACK_LINE(695)
					{
						HX_STACK_LINE(695)
						result->m[(int)0] = 1.0;
						HX_STACK_LINE(695)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)5] = 1.0;
						HX_STACK_LINE(695)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)10] = 1.0;
						HX_STACK_LINE(695)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)12] = (Float(diameter) / Float(2.0));
						HX_STACK_LINE(695)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(695)
						result;
					}
					HX_STACK_LINE(695)
					_this = result;
				}
				HX_STACK_LINE(695)
				::com::gamestudiohx::babylonhx::tools::math::Matrix other;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(695)
				{
					HX_STACK_LINE(695)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(695)
					{
						HX_STACK_LINE(695)
						Float s = ::Math_obj::sin(outerAngle);		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(695)
						Float c = ::Math_obj::cos(outerAngle);		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(695)
						result->m[(int)5] = 1.0;
						HX_STACK_LINE(695)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(695)
						result->m[(int)0] = c;
						HX_STACK_LINE(695)
						result->m[(int)2] = -(s);
						HX_STACK_LINE(695)
						result->m[(int)8] = s;
						HX_STACK_LINE(695)
						result->m[(int)10] = c;
						HX_STACK_LINE(695)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(695)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(695)
						result;
					}
					HX_STACK_LINE(695)
					other = result;
				}
				HX_STACK_LINE(695)
				::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(695)
				{
					HX_STACK_LINE(695)
					Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
					HX_STACK_LINE(695)
					Float tm0 = _this->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
					HX_STACK_LINE(695)
					Float tm1 = _this->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
					HX_STACK_LINE(695)
					Float tm2 = _this->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
					HX_STACK_LINE(695)
					Float tm3 = _this->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
					HX_STACK_LINE(695)
					Float tm4 = _this->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
					HX_STACK_LINE(695)
					Float tm5 = _this->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
					HX_STACK_LINE(695)
					Float tm6 = _this->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
					HX_STACK_LINE(695)
					Float tm7 = _this->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
					HX_STACK_LINE(695)
					Float tm8 = _this->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
					HX_STACK_LINE(695)
					Float tm9 = _this->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
					HX_STACK_LINE(695)
					Float tm10 = _this->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
					HX_STACK_LINE(695)
					Float tm11 = _this->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
					HX_STACK_LINE(695)
					Float tm12 = _this->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
					HX_STACK_LINE(695)
					Float tm13 = _this->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
					HX_STACK_LINE(695)
					Float tm14 = _this->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
					HX_STACK_LINE(695)
					Float tm15 = _this->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
					HX_STACK_LINE(695)
					Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
					HX_STACK_LINE(695)
					Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
					HX_STACK_LINE(695)
					Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
					HX_STACK_LINE(695)
					Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
					HX_STACK_LINE(695)
					Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
					HX_STACK_LINE(695)
					Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
					HX_STACK_LINE(695)
					Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
					HX_STACK_LINE(695)
					Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
					HX_STACK_LINE(695)
					Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
					HX_STACK_LINE(695)
					Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
					HX_STACK_LINE(695)
					Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
					HX_STACK_LINE(695)
					Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
					HX_STACK_LINE(695)
					Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
					HX_STACK_LINE(695)
					Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
					HX_STACK_LINE(695)
					Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
					HX_STACK_LINE(695)
					Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
					HX_STACK_LINE(695)
					result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
					HX_STACK_LINE(695)
					result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
					HX_STACK_LINE(695)
					result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
					HX_STACK_LINE(695)
					result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
					HX_STACK_LINE(695)
					result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
					HX_STACK_LINE(695)
					result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
					HX_STACK_LINE(695)
					result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
					HX_STACK_LINE(695)
					result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
					HX_STACK_LINE(695)
					result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
					HX_STACK_LINE(695)
					result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
					HX_STACK_LINE(695)
					result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
					HX_STACK_LINE(695)
					result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
					HX_STACK_LINE(695)
					result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
					HX_STACK_LINE(695)
					result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
					HX_STACK_LINE(695)
					result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
					HX_STACK_LINE(695)
					result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
					HX_STACK_LINE(695)
					result1;
				}
				HX_STACK_LINE(695)
				transform = result;
			}
			HX_STACK_LINE(698)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(699)
			while((true)){
				HX_STACK_LINE(699)
				if ((!(((j <= tessellation))))){
					HX_STACK_LINE(699)
					break;
				}
				HX_STACK_LINE(700)
				Float v = ((int)1 - (Float(j) / Float(tessellation)));		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(702)
				Float innerAngle = ((Float(((j * ::Math_obj::PI) * 2.0)) / Float(tessellation)) + ::Math_obj::PI);		HX_STACK_VAR(innerAngle,"innerAngle");
				HX_STACK_LINE(703)
				Float dx = ::Math_obj::cos(innerAngle);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(704)
				Float dy = ::Math_obj::sin(innerAngle);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(707)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(dx,dy,(int)0);		HX_STACK_VAR(normal,"normal");
				HX_STACK_LINE(708)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 position;		HX_STACK_VAR(position,"position");
				HX_STACK_LINE(708)
				{
					HX_STACK_LINE(708)
					Float scale = (Float(thickness) / Float((int)2));		HX_STACK_VAR(scale,"scale");
					HX_STACK_LINE(708)
					position = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x * scale),(normal->y * scale),(normal->z * scale));
				}
				HX_STACK_LINE(709)
				::com::gamestudiohx::babylonhx::tools::math::Vector2 textureCoordinate = ::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__new(u,v);		HX_STACK_VAR(textureCoordinate,"textureCoordinate");
				HX_STACK_LINE(711)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(711)
				{
					HX_STACK_LINE(711)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(711)
					{
						HX_STACK_LINE(711)
						Float x = ((((position->x * transform->m->__get((int)0)) + (position->y * transform->m->__get((int)4))) + (position->z * transform->m->__get((int)8))) + transform->m->__get((int)12));		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(711)
						Float y = ((((position->x * transform->m->__get((int)1)) + (position->y * transform->m->__get((int)5))) + (position->z * transform->m->__get((int)9))) + transform->m->__get((int)13));		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(711)
						Float z = ((((position->x * transform->m->__get((int)2)) + (position->y * transform->m->__get((int)6))) + (position->z * transform->m->__get((int)10))) + transform->m->__get((int)14));		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(711)
						Float w = ((((position->x * transform->m->__get((int)3)) + (position->y * transform->m->__get((int)7))) + (position->z * transform->m->__get((int)11))) + transform->m->__get((int)15));		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(711)
						result->x = (Float(x) / Float(w));
						HX_STACK_LINE(711)
						result->y = (Float(y) / Float(w));
						HX_STACK_LINE(711)
						result->z = (Float(z) / Float(w));
					}
					HX_STACK_LINE(711)
					_g = result;
				}
				HX_STACK_LINE(711)
				position = _g;
				HX_STACK_LINE(712)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(712)
				{
					HX_STACK_LINE(712)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(712)
					{
						HX_STACK_LINE(712)
						result->x = (((normal->x * transform->m->__get((int)0)) + (normal->y * transform->m->__get((int)4))) + (normal->z * transform->m->__get((int)8)));
						HX_STACK_LINE(712)
						result->y = (((normal->x * transform->m->__get((int)1)) + (normal->y * transform->m->__get((int)5))) + (normal->z * transform->m->__get((int)9)));
						HX_STACK_LINE(712)
						result->z = (((normal->x * transform->m->__get((int)2)) + (normal->y * transform->m->__get((int)6))) + (normal->z * transform->m->__get((int)10)));
					}
					HX_STACK_LINE(712)
					_g1 = result;
				}
				HX_STACK_LINE(712)
				normal = _g1;
				HX_STACK_LINE(714)
				positions->push(position->x);
				HX_STACK_LINE(715)
				positions->push(position->y);
				HX_STACK_LINE(716)
				positions->push(position->z);
				HX_STACK_LINE(717)
				normals->push(normal->x);
				HX_STACK_LINE(718)
				normals->push(normal->y);
				HX_STACK_LINE(719)
				normals->push(normal->z);
				HX_STACK_LINE(720)
				uvs->push(textureCoordinate->x);
				HX_STACK_LINE(721)
				uvs->push(textureCoordinate->y);
				HX_STACK_LINE(724)
				Float nextI = hx::Mod(((i + (int)1)),stride);		HX_STACK_VAR(nextI,"nextI");
				HX_STACK_LINE(725)
				Float nextJ = hx::Mod(((j + (int)1)),stride);		HX_STACK_VAR(nextJ,"nextJ");
				HX_STACK_LINE(727)
				int _g2 = ::Std_obj::_int(((i * stride) + j));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(727)
				indices->push(_g2);
				HX_STACK_LINE(728)
				int _g3 = ::Std_obj::_int(((i * stride) + nextJ));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(728)
				indices->push(_g3);
				HX_STACK_LINE(729)
				int _g4 = ::Std_obj::_int(((nextI * stride) + j));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(729)
				indices->push(_g4);
				HX_STACK_LINE(731)
				int _g5 = ::Std_obj::_int(((i * stride) + nextJ));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(731)
				indices->push(_g5);
				HX_STACK_LINE(732)
				int _g6 = ::Std_obj::_int(((nextI * stride) + nextJ));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(732)
				indices->push(_g6);
				HX_STACK_LINE(733)
				int _g7 = ::Std_obj::_int(((nextI * stride) + j));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(733)
				indices->push(_g7);
				HX_STACK_LINE(734)
				(j)++;
			}
			HX_STACK_LINE(737)
			(i)++;
		}
		HX_STACK_LINE(742)
		::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::__new();		HX_STACK_VAR(vertexData,"vertexData");
		HX_STACK_LINE(744)
		vertexData->indices = indices;
		HX_STACK_LINE(745)
		vertexData->positions = positions;
		HX_STACK_LINE(746)
		vertexData->normals = normals;
		HX_STACK_LINE(747)
		vertexData->uvs = uvs;
		HX_STACK_LINE(749)
		return vertexData;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(VertexData_obj,CreateTorus,return )

::com::gamestudiohx::babylonhx::mesh::VertexData VertexData_obj::CreateGround( hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< Float >  __o_subdivisions){
Float width = __o_width.Default(1);
Float height = __o_height.Default(1);
Float subdivisions = __o_subdivisions.Default(1);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","CreateGround",0x0bd36814,"com.gamestudiohx.babylonhx.mesh.VertexData.CreateGround","com/gamestudiohx/babylonhx/mesh/VertexData.hx",752,0x4c868021)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(subdivisions,"subdivisions")
{
		HX_STACK_LINE(753)
		Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(754)
		Array< Float > positions = Array_obj< Float >::__new();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(755)
		Array< Float > normals = Array_obj< Float >::__new();		HX_STACK_VAR(normals,"normals");
		HX_STACK_LINE(756)
		Array< Float > uvs = Array_obj< Float >::__new();		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(757)
		int row;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(757)
		int col;		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(765)
		row = (int)0;
		HX_STACK_LINE(766)
		while((true)){
			HX_STACK_LINE(766)
			if ((!(((row <= subdivisions))))){
				HX_STACK_LINE(766)
				break;
			}
			HX_STACK_LINE(769)
			col = (int)0;
			HX_STACK_LINE(770)
			while((true)){
				HX_STACK_LINE(770)
				if ((!(((col <= subdivisions))))){
					HX_STACK_LINE(770)
					break;
				}
				HX_STACK_LINE(771)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 position = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(((Float((col * width)) / Float(subdivisions)) - (Float(width) / Float(2.0))),(int)0,((Float((((subdivisions - row)) * height)) / Float(subdivisions)) - (Float(height) / Float(2.0))));		HX_STACK_VAR(position,"position");
				HX_STACK_LINE(772)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,1.0,(int)0);		HX_STACK_VAR(normal,"normal");
				HX_STACK_LINE(774)
				positions->push(position->x);
				HX_STACK_LINE(775)
				positions->push(position->y);
				HX_STACK_LINE(776)
				positions->push(position->z);
				HX_STACK_LINE(777)
				normals->push(normal->x);
				HX_STACK_LINE(778)
				normals->push(normal->y);
				HX_STACK_LINE(779)
				normals->push(normal->z);
				HX_STACK_LINE(780)
				uvs->push((Float(col) / Float(subdivisions)));
				HX_STACK_LINE(781)
				uvs->push((1.0 - (Float(row) / Float(subdivisions))));
				HX_STACK_LINE(782)
				(col)++;
			}
			HX_STACK_LINE(785)
			(row)++;
		}
		HX_STACK_LINE(790)
		row = (int)0;
		HX_STACK_LINE(791)
		while((true)){
			HX_STACK_LINE(791)
			if ((!(((row < subdivisions))))){
				HX_STACK_LINE(791)
				break;
			}
			HX_STACK_LINE(794)
			col = (int)0;
			HX_STACK_LINE(795)
			while((true)){
				HX_STACK_LINE(795)
				if ((!(((col < subdivisions))))){
					HX_STACK_LINE(795)
					break;
				}
				HX_STACK_LINE(796)
				int _g = ::Std_obj::_int(((col + (int)1) + (((row + (int)1)) * ((subdivisions + (int)1)))));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(796)
				indices->push(_g);
				HX_STACK_LINE(797)
				int _g1 = ::Std_obj::_int(((col + (int)1) + (row * ((subdivisions + (int)1)))));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(797)
				indices->push(_g1);
				HX_STACK_LINE(798)
				int _g2 = ::Std_obj::_int((col + (row * ((subdivisions + (int)1)))));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(798)
				indices->push(_g2);
				HX_STACK_LINE(800)
				int _g3 = ::Std_obj::_int((col + (((row + (int)1)) * ((subdivisions + (int)1)))));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(800)
				indices->push(_g3);
				HX_STACK_LINE(801)
				int _g4 = ::Std_obj::_int(((col + (int)1) + (((row + (int)1)) * ((subdivisions + (int)1)))));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(801)
				indices->push(_g4);
				HX_STACK_LINE(802)
				int _g5 = ::Std_obj::_int((col + (row * ((subdivisions + (int)1)))));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(802)
				indices->push(_g5);
				HX_STACK_LINE(803)
				(col)++;
			}
			HX_STACK_LINE(806)
			(row)++;
		}
		HX_STACK_LINE(811)
		::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::__new();		HX_STACK_VAR(vertexData,"vertexData");
		HX_STACK_LINE(813)
		vertexData->indices = indices;
		HX_STACK_LINE(814)
		vertexData->positions = positions;
		HX_STACK_LINE(815)
		vertexData->normals = normals;
		HX_STACK_LINE(816)
		vertexData->uvs = uvs;
		HX_STACK_LINE(818)
		return vertexData;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(VertexData_obj,CreateGround,return )

::com::gamestudiohx::babylonhx::mesh::VertexData VertexData_obj::CreatePlane( hx::Null< Float >  __o_size){
Float size = __o_size.Default(1);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","CreatePlane",0xb900696f,"com.gamestudiohx.babylonhx.mesh.VertexData.CreatePlane","com/gamestudiohx/babylonhx/mesh/VertexData.hx",906,0x4c868021)
	HX_STACK_ARG(size,"size")
{
		HX_STACK_LINE(907)
		Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(908)
		Array< Float > positions = Array_obj< Float >::__new();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(909)
		Array< Float > normals = Array_obj< Float >::__new();		HX_STACK_VAR(normals,"normals");
		HX_STACK_LINE(910)
		Array< Float > uvs = Array_obj< Float >::__new();		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(915)
		Float halfSize = (Float(size) / Float(2.0));		HX_STACK_VAR(halfSize,"halfSize");
		HX_STACK_LINE(916)
		positions->push(-(halfSize));
		HX_STACK_LINE(917)
		positions->push(-(halfSize));
		HX_STACK_LINE(918)
		positions->push((int)0);
		HX_STACK_LINE(919)
		normals->push((int)0);
		HX_STACK_LINE(920)
		normals->push((int)0);
		HX_STACK_LINE(921)
		normals->push(-1.0);
		HX_STACK_LINE(922)
		uvs->push(0.0);
		HX_STACK_LINE(923)
		uvs->push(0.0);
		HX_STACK_LINE(925)
		positions->push(halfSize);
		HX_STACK_LINE(926)
		positions->push(-(halfSize));
		HX_STACK_LINE(927)
		positions->push((int)0);
		HX_STACK_LINE(928)
		normals->push((int)0);
		HX_STACK_LINE(929)
		normals->push((int)0);
		HX_STACK_LINE(930)
		normals->push(-1.0);
		HX_STACK_LINE(931)
		uvs->push(1.0);
		HX_STACK_LINE(932)
		uvs->push(0.0);
		HX_STACK_LINE(934)
		positions->push(halfSize);
		HX_STACK_LINE(935)
		positions->push(halfSize);
		HX_STACK_LINE(936)
		positions->push((int)0);
		HX_STACK_LINE(937)
		normals->push((int)0);
		HX_STACK_LINE(938)
		normals->push((int)0);
		HX_STACK_LINE(939)
		normals->push(-1.0);
		HX_STACK_LINE(940)
		uvs->push(1.0);
		HX_STACK_LINE(941)
		uvs->push(1.0);
		HX_STACK_LINE(944)
		positions->push(-(halfSize));
		HX_STACK_LINE(945)
		positions->push(halfSize);
		HX_STACK_LINE(946)
		positions->push((int)0);
		HX_STACK_LINE(947)
		normals->push((int)0);
		HX_STACK_LINE(948)
		normals->push((int)0);
		HX_STACK_LINE(949)
		normals->push(-1.0);
		HX_STACK_LINE(950)
		uvs->push(0.0);
		HX_STACK_LINE(951)
		uvs->push(1.0);
		HX_STACK_LINE(953)
		indices->push((int)0);
		HX_STACK_LINE(954)
		indices->push((int)1);
		HX_STACK_LINE(955)
		indices->push((int)2);
		HX_STACK_LINE(957)
		indices->push((int)0);
		HX_STACK_LINE(958)
		indices->push((int)2);
		HX_STACK_LINE(959)
		indices->push((int)3);
		HX_STACK_LINE(962)
		::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::__new();		HX_STACK_VAR(vertexData,"vertexData");
		HX_STACK_LINE(964)
		vertexData->indices = indices;
		HX_STACK_LINE(965)
		vertexData->positions = positions;
		HX_STACK_LINE(966)
		vertexData->normals = normals;
		HX_STACK_LINE(967)
		vertexData->uvs = uvs;
		HX_STACK_LINE(969)
		return vertexData;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VertexData_obj,CreatePlane,return )

::com::gamestudiohx::babylonhx::mesh::VertexData VertexData_obj::CreateTorusKnot( hx::Null< Float >  __o_radius,hx::Null< Float >  __o_tube,hx::Null< Float >  __o_radialSegments,hx::Null< Float >  __o_tubularSegments,hx::Null< Float >  __o_p,hx::Null< Float >  __o_q){
Float radius = __o_radius.Default(2);
Float tube = __o_tube.Default(0.5);
Float radialSegments = __o_radialSegments.Default(32);
Float tubularSegments = __o_tubularSegments.Default(32);
Float p = __o_p.Default(2);
Float q = __o_q.Default(3);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","CreateTorusKnot",0xfdafa970,"com.gamestudiohx.babylonhx.mesh.VertexData.CreateTorusKnot","com/gamestudiohx/babylonhx/mesh/VertexData.hx",974,0x4c868021)
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(tube,"tube")
	HX_STACK_ARG(radialSegments,"radialSegments")
	HX_STACK_ARG(tubularSegments,"tubularSegments")
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(q,"q")
{
		HX_STACK_LINE(974)
		Array< Float > q1 = Array_obj< Float >::__new().Add(q);		HX_STACK_VAR(q1,"q1");
		HX_STACK_LINE(974)
		Array< Float > p1 = Array_obj< Float >::__new().Add(p);		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(974)
		Array< Float > radius1 = Array_obj< Float >::__new().Add(radius);		HX_STACK_VAR(radius1,"radius1");
		HX_STACK_LINE(975)
		Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(976)
		Array< Float > positions = Array_obj< Float >::__new();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(977)
		Array< Float > normals = Array_obj< Float >::__new();		HX_STACK_VAR(normals,"normals");
		HX_STACK_LINE(978)
		Array< Float > uvs = Array_obj< Float >::__new();		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(979)
		int j = (int)0;		HX_STACK_VAR(j,"j");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Array< Float >,q1,Array< Float >,p1,Array< Float >,radius1)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 run(Float angle){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/gamestudiohx/babylonhx/mesh/VertexData.hx",991,0x4c868021)
			HX_STACK_ARG(angle,"angle")
			{
				HX_STACK_LINE(993)
				Float cu = ::Math_obj::cos(angle);		HX_STACK_VAR(cu,"cu");
				HX_STACK_LINE(994)
				Float su = ::Math_obj::sin(angle);		HX_STACK_VAR(su,"su");
				HX_STACK_LINE(995)
				Float quOverP = ((Float(q1->__get((int)0)) / Float(p1->__get((int)0))) * angle);		HX_STACK_VAR(quOverP,"quOverP");
				HX_STACK_LINE(996)
				Float cs = ::Math_obj::cos(quOverP);		HX_STACK_VAR(cs,"cs");
				HX_STACK_LINE(998)
				Float tx = (((radius1->__get((int)0) * (((int)2 + cs))) * 0.5) * cu);		HX_STACK_VAR(tx,"tx");
				HX_STACK_LINE(999)
				Float ty = (((radius1->__get((int)0) * (((int)2 + cs))) * su) * 0.5);		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(1000)
				Float _g = ::Math_obj::sin(quOverP);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1000)
				Float _g1 = (radius1->__get((int)0) * _g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1000)
				Float tz = (_g1 * 0.5);		HX_STACK_VAR(tz,"tz");
				HX_STACK_LINE(1002)
				return ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(tx,ty,tz);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(991)
		Dynamic getPos =  Dynamic(new _Function_1_1(q1,p1,radius1));		HX_STACK_VAR(getPos,"getPos");
		HX_STACK_LINE(1008)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1009)
		while((true)){
			HX_STACK_LINE(1009)
			if ((!(((i <= radialSegments))))){
				HX_STACK_LINE(1009)
				break;
			}
			HX_STACK_LINE(1010)
			Float modI = hx::Mod(i,radialSegments);		HX_STACK_VAR(modI,"modI");
			HX_STACK_LINE(1011)
			Float u = ((((Float(modI) / Float(radialSegments)) * (int)2) * p1->__get((int)0)) * ::Math_obj::PI);		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(1012)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p11 = getPos(u).Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p11,"p11");
			HX_STACK_LINE(1013)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p2 = getPos((u + 0.01)).Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p2,"p2");
			HX_STACK_LINE(1014)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 tang = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((p2->x - p11->x),(p2->y - p11->y),(p2->z - p11->z));		HX_STACK_VAR(tang,"tang");
			HX_STACK_LINE(1015)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 n = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((p2->x + p11->x),(p2->y + p11->y),(p2->z + p11->z));		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(1017)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 bitan;		HX_STACK_VAR(bitan,"bitan");
			HX_STACK_LINE(1017)
			{
				HX_STACK_LINE(1017)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(1017)
				{
					HX_STACK_LINE(1017)
					result->x = ((tang->y * n->z) - (tang->z * n->y));
					HX_STACK_LINE(1017)
					result->y = ((tang->z * n->x) - (tang->x * n->z));
					HX_STACK_LINE(1017)
					result->z = ((tang->x * n->y) - (tang->y * n->x));
				}
				HX_STACK_LINE(1017)
				bitan = result;
			}
			HX_STACK_LINE(1018)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1018)
			{
				HX_STACK_LINE(1018)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(1018)
				{
					HX_STACK_LINE(1018)
					result->x = ((bitan->y * tang->z) - (bitan->z * tang->y));
					HX_STACK_LINE(1018)
					result->y = ((bitan->z * tang->x) - (bitan->x * tang->z));
					HX_STACK_LINE(1018)
					result->z = ((bitan->x * tang->y) - (bitan->y * tang->x));
				}
				HX_STACK_LINE(1018)
				_g2 = result;
			}
			HX_STACK_LINE(1018)
			n = _g2;
			HX_STACK_LINE(1020)
			{
				HX_STACK_LINE(1020)
				Float len = ::Math_obj::sqrt((((bitan->x * bitan->x) + (bitan->y * bitan->y)) + (bitan->z * bitan->z)));		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(1020)
				if (((len != (int)0))){
					HX_STACK_LINE(1020)
					Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
					HX_STACK_LINE(1020)
					hx::MultEq(bitan->x,num);
					HX_STACK_LINE(1020)
					hx::MultEq(bitan->y,num);
					HX_STACK_LINE(1020)
					hx::MultEq(bitan->z,num);
				}
			}
			HX_STACK_LINE(1021)
			{
				HX_STACK_LINE(1021)
				Float len = ::Math_obj::sqrt((((n->x * n->x) + (n->y * n->y)) + (n->z * n->z)));		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(1021)
				if (((len != (int)0))){
					HX_STACK_LINE(1021)
					Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
					HX_STACK_LINE(1021)
					hx::MultEq(n->x,num);
					HX_STACK_LINE(1021)
					hx::MultEq(n->y,num);
					HX_STACK_LINE(1021)
					hx::MultEq(n->z,num);
				}
			}
			HX_STACK_LINE(1025)
			while((true)){
				HX_STACK_LINE(1025)
				if ((!(((j < tubularSegments))))){
					HX_STACK_LINE(1025)
					break;
				}
				HX_STACK_LINE(1026)
				Float modJ = hx::Mod(j,tubularSegments);		HX_STACK_VAR(modJ,"modJ");
				HX_STACK_LINE(1027)
				Float v = (((Float(modJ) / Float(tubularSegments)) * (int)2) * ::Math_obj::PI);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(1028)
				Float _g3 = ::Math_obj::cos(v);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1028)
				Float cx = (-(tube) * _g3);		HX_STACK_VAR(cx,"cx");
				HX_STACK_LINE(1029)
				Float _g4 = ::Math_obj::sin(v);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1029)
				Float cy = (tube * _g4);		HX_STACK_VAR(cy,"cy");
				HX_STACK_LINE(1031)
				positions->push(((p11->x + (cx * n->x)) + (cy * bitan->x)));
				HX_STACK_LINE(1032)
				positions->push(((p11->y + (cx * n->y)) + (cy * bitan->y)));
				HX_STACK_LINE(1033)
				positions->push(((p11->z + (cx * n->z)) + (cy * bitan->z)));
				HX_STACK_LINE(1035)
				uvs->push((Float(i) / Float(radialSegments)));
				HX_STACK_LINE(1036)
				uvs->push((Float(j) / Float(tubularSegments)));
				HX_STACK_LINE(1038)
				(j)++;
			}
			HX_STACK_LINE(1041)
			(i)++;
		}
		HX_STACK_LINE(1046)
		i = (int)0;
		HX_STACK_LINE(1047)
		while((true)){
			HX_STACK_LINE(1047)
			if ((!(((i < radialSegments))))){
				HX_STACK_LINE(1047)
				break;
			}
			HX_STACK_LINE(1050)
			j = (int)0;
			HX_STACK_LINE(1051)
			while((true)){
				HX_STACK_LINE(1051)
				if ((!(((j < tubularSegments))))){
					HX_STACK_LINE(1051)
					break;
				}
				HX_STACK_LINE(1052)
				Float jNext = hx::Mod(((j + (int)1)),tubularSegments);		HX_STACK_VAR(jNext,"jNext");
				HX_STACK_LINE(1053)
				Float a = ((i * tubularSegments) + j);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(1054)
				Float b = ((((i + (int)1)) * tubularSegments) + j);		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(1055)
				Float c = ((((i + (int)1)) * tubularSegments) + jNext);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(1056)
				Float d = ((i * tubularSegments) + jNext);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(1058)
				int _g5 = ::Std_obj::_int(d);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1058)
				indices->push(_g5);
				HX_STACK_LINE(1058)
				int _g6 = ::Std_obj::_int(b);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1058)
				indices->push(_g6);
				HX_STACK_LINE(1058)
				int _g7 = ::Std_obj::_int(a);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(1058)
				indices->push(_g7);
				HX_STACK_LINE(1059)
				int _g8 = ::Std_obj::_int(d);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(1059)
				indices->push(_g8);
				HX_STACK_LINE(1059)
				int _g9 = ::Std_obj::_int(c);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(1059)
				indices->push(_g9);
				HX_STACK_LINE(1059)
				int _g10 = ::Std_obj::_int(b);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(1059)
				indices->push(_g10);
				HX_STACK_LINE(1060)
				(j)++;
			}
			HX_STACK_LINE(1063)
			(i)++;
		}
		HX_STACK_LINE(1068)
		::com::gamestudiohx::babylonhx::mesh::VertexData_obj::ComputeNormals(positions,indices,normals);
		HX_STACK_LINE(1071)
		::com::gamestudiohx::babylonhx::mesh::VertexData vertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::__new();		HX_STACK_VAR(vertexData,"vertexData");
		HX_STACK_LINE(1073)
		vertexData->indices = indices;
		HX_STACK_LINE(1074)
		vertexData->positions = positions;
		HX_STACK_LINE(1075)
		vertexData->normals = normals;
		HX_STACK_LINE(1076)
		vertexData->uvs = uvs;
		HX_STACK_LINE(1078)
		return vertexData;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(VertexData_obj,CreateTorusKnot,return )

Void VertexData_obj::ComputeNormals( Array< Float > positions,Array< int > indices,Array< Float > normals){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexData","ComputeNormals",0x3bc44166,"com.gamestudiohx.babylonhx.mesh.VertexData.ComputeNormals","com/gamestudiohx/babylonhx/mesh/VertexData.hx",1083,0x4c868021)
		HX_STACK_ARG(positions,"positions")
		HX_STACK_ARG(indices,"indices")
		HX_STACK_ARG(normals,"normals")
		HX_STACK_LINE(1084)
		Array< ::Dynamic > positionVectors = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(positionVectors,"positionVectors");
		HX_STACK_LINE(1085)
		Array< ::Dynamic > facesOfVertices = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(facesOfVertices,"facesOfVertices");
		HX_STACK_LINE(1086)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(1089)
		index = (int)0;
		HX_STACK_LINE(1090)
		while((true)){
			HX_STACK_LINE(1090)
			if ((!(((index < positions->length))))){
				HX_STACK_LINE(1090)
				break;
			}
			HX_STACK_LINE(1091)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 vector3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(positions->__get(index),positions->__get((index + (int)1)),positions->__get((index + (int)2)));		HX_STACK_VAR(vector3,"vector3");
			HX_STACK_LINE(1092)
			positionVectors->push(vector3);
			HX_STACK_LINE(1093)
			Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1093)
			facesOfVertices->push(_g);
			HX_STACK_LINE(1094)
			hx::AddEq(index,(int)3);
		}
		HX_STACK_LINE(1098)
		Array< ::Dynamic > facesNormals = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(facesNormals,"facesNormals");
		HX_STACK_LINE(1101)
		index = (int)0;
		HX_STACK_LINE(1102)
		while((true)){
			HX_STACK_LINE(1102)
			if ((!(((index < (Float(indices->length) / Float((int)3))))))){
				HX_STACK_LINE(1102)
				break;
			}
			HX_STACK_LINE(1103)
			int i1 = indices->__get((index * (int)3));		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(1104)
			int i2 = indices->__get(((index * (int)3) + (int)1));		HX_STACK_VAR(i2,"i2");
			HX_STACK_LINE(1105)
			int i3 = indices->__get(((index * (int)3) + (int)2));		HX_STACK_VAR(i3,"i3");
			HX_STACK_LINE(1107)
			int _g1 = ::Std_obj::_int(i1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1107)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p1 = positionVectors->__get(_g1).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(1108)
			int _g2 = ::Std_obj::_int(i2);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1108)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p2 = positionVectors->__get(_g2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p2,"p2");
			HX_STACK_LINE(1109)
			int _g3 = ::Std_obj::_int(i3);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1109)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p3 = positionVectors->__get(_g3).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p3,"p3");
			HX_STACK_LINE(1111)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p1p2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((p1->x - p2->x),(p1->y - p2->y),(p1->z - p2->z));		HX_STACK_VAR(p1p2,"p1p2");
			HX_STACK_LINE(1112)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p3p2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((p3->x - p2->x),(p3->y - p2->y),(p3->z - p2->z));		HX_STACK_VAR(p3p2,"p3p2");
			HX_STACK_LINE(1114)
			{
				HX_STACK_LINE(1114)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 vector;		HX_STACK_VAR(vector,"vector");
				HX_STACK_LINE(1114)
				{
					HX_STACK_LINE(1114)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(1114)
					{
						HX_STACK_LINE(1114)
						result->x = ((p1p2->y * p3p2->z) - (p1p2->z * p3p2->y));
						HX_STACK_LINE(1114)
						result->y = ((p1p2->z * p3p2->x) - (p1p2->x * p3p2->z));
						HX_STACK_LINE(1114)
						result->z = ((p1p2->x * p3p2->y) - (p1p2->y * p3p2->x));
					}
					HX_STACK_LINE(1114)
					vector = result;
				}
				HX_STACK_LINE(1114)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(1114)
				{
					HX_STACK_LINE(1114)
					{
						HX_STACK_LINE(1114)
						result->x = vector->x;
						HX_STACK_LINE(1114)
						result->y = vector->y;
						HX_STACK_LINE(1114)
						result->z = vector->z;
					}
					HX_STACK_LINE(1114)
					{
						HX_STACK_LINE(1114)
						Float len = ::Math_obj::sqrt((((result->x * result->x) + (result->y * result->y)) + (result->z * result->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(1114)
						if (((len != (int)0))){
							HX_STACK_LINE(1114)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(1114)
							hx::MultEq(result->x,num);
							HX_STACK_LINE(1114)
							hx::MultEq(result->y,num);
							HX_STACK_LINE(1114)
							hx::MultEq(result->z,num);
						}
					}
				}
				HX_STACK_LINE(1114)
				facesNormals[index] = result;
			}
			HX_STACK_LINE(1115)
			int _g4 = ::Std_obj::_int(i1);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1115)
			facesOfVertices->__get(_g4).StaticCast< Array< int > >()->push(index);
			HX_STACK_LINE(1116)
			int _g5 = ::Std_obj::_int(i2);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1116)
			facesOfVertices->__get(_g5).StaticCast< Array< int > >()->push(index);
			HX_STACK_LINE(1117)
			int _g6 = ::Std_obj::_int(i3);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1117)
			facesOfVertices->__get(_g6).StaticCast< Array< int > >()->push(index);
			HX_STACK_LINE(1118)
			(index)++;
		}
		HX_STACK_LINE(1123)
		index = (int)0;
		HX_STACK_LINE(1124)
		while((true)){
			HX_STACK_LINE(1124)
			if ((!(((index < positionVectors->length))))){
				HX_STACK_LINE(1124)
				break;
			}
			HX_STACK_LINE(1125)
			Array< int > faces = facesOfVertices->__get(index).StaticCast< Array< int > >();		HX_STACK_VAR(faces,"faces");
			HX_STACK_LINE(1127)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 normal = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(normal,"normal");
			HX_STACK_LINE(1130)
			int faceIndex = (int)0;		HX_STACK_VAR(faceIndex,"faceIndex");
			HX_STACK_LINE(1131)
			while((true)){
				HX_STACK_LINE(1131)
				if ((!(((faceIndex < faces->length))))){
					HX_STACK_LINE(1131)
					break;
				}
				HX_STACK_LINE(1132)
				{
					HX_STACK_LINE(1132)
					::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = facesNormals->__get(faces->__get(faceIndex)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(otherVector,"otherVector");
					HX_STACK_LINE(1132)
					hx::AddEq(normal->x,otherVector->x);
					HX_STACK_LINE(1132)
					hx::AddEq(normal->y,otherVector->y);
					HX_STACK_LINE(1132)
					hx::AddEq(normal->z,otherVector->z);
				}
				HX_STACK_LINE(1133)
				(faceIndex)++;
			}
			HX_STACK_LINE(1137)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(1137)
			{
				HX_STACK_LINE(1137)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 vector;		HX_STACK_VAR(vector,"vector");
				HX_STACK_LINE(1137)
				{
					HX_STACK_LINE(1137)
					Float scale = (Float(1.0) / Float(faces->length));		HX_STACK_VAR(scale,"scale");
					HX_STACK_LINE(1137)
					vector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((normal->x * scale),(normal->y * scale),(normal->z * scale));
				}
				HX_STACK_LINE(1137)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 result = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(1137)
				{
					HX_STACK_LINE(1137)
					{
						HX_STACK_LINE(1137)
						result->x = vector->x;
						HX_STACK_LINE(1137)
						result->y = vector->y;
						HX_STACK_LINE(1137)
						result->z = vector->z;
					}
					HX_STACK_LINE(1137)
					{
						HX_STACK_LINE(1137)
						Float len = ::Math_obj::sqrt((((result->x * result->x) + (result->y * result->y)) + (result->z * result->z)));		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(1137)
						if (((len != (int)0))){
							HX_STACK_LINE(1137)
							Float num = (Float(1.0) / Float(len));		HX_STACK_VAR(num,"num");
							HX_STACK_LINE(1137)
							hx::MultEq(result->x,num);
							HX_STACK_LINE(1137)
							hx::MultEq(result->y,num);
							HX_STACK_LINE(1137)
							hx::MultEq(result->z,num);
						}
					}
				}
				HX_STACK_LINE(1137)
				_g7 = result;
			}
			HX_STACK_LINE(1137)
			normal = _g7;
			HX_STACK_LINE(1139)
			normals[(index * (int)3)] = normal->x;
			HX_STACK_LINE(1140)
			normals[((index * (int)3) + (int)1)] = normal->y;
			HX_STACK_LINE(1141)
			normals[((index * (int)3) + (int)2)] = normal->z;
			HX_STACK_LINE(1142)
			(index)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(VertexData_obj,ComputeNormals,(void))


VertexData_obj::VertexData_obj()
{
}

void VertexData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexData);
	HX_MARK_MEMBER_NAME(positions,"positions");
	HX_MARK_MEMBER_NAME(normals,"normals");
	HX_MARK_MEMBER_NAME(uvs,"uvs");
	HX_MARK_MEMBER_NAME(uv2s,"uv2s");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(matricesIndices,"matricesIndices");
	HX_MARK_MEMBER_NAME(matricesWeights,"matricesWeights");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_END_CLASS();
}

void VertexData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(positions,"positions");
	HX_VISIT_MEMBER_NAME(normals,"normals");
	HX_VISIT_MEMBER_NAME(uvs,"uvs");
	HX_VISIT_MEMBER_NAME(uv2s,"uv2s");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(matricesIndices,"matricesIndices");
	HX_VISIT_MEMBER_NAME(matricesWeights,"matricesWeights");
	HX_VISIT_MEMBER_NAME(indices,"indices");
}

Dynamic VertexData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uvs") ) { return uvs; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"uv2s") ) { return uv2s; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { return colors; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"normals") ) { return normals; }
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_applyTo") ) { return _applyTo_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"CreateBox") ) { return CreateBox_dyn(); }
		if (HX_FIELD_EQ(inName,"positions") ) { return positions; }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateMesh") ) { return updateMesh_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"CreateTorus") ) { return CreateTorus_dyn(); }
		if (HX_FIELD_EQ(inName,"CreatePlane") ) { return CreatePlane_dyn(); }
		if (HX_FIELD_EQ(inName,"applyToMesh") ) { return applyToMesh_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ExtractFrom") ) { return _ExtractFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"CreateSphere") ) { return CreateSphere_dyn(); }
		if (HX_FIELD_EQ(inName,"CreateGround") ) { return CreateGround_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"CreateCylinder") ) { return CreateCylinder_dyn(); }
		if (HX_FIELD_EQ(inName,"ComputeNormals") ) { return ComputeNormals_dyn(); }
		if (HX_FIELD_EQ(inName,"updateGeometry") ) { return updateGeometry_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ExtractFromMesh") ) { return ExtractFromMesh_dyn(); }
		if (HX_FIELD_EQ(inName,"CreateTorusKnot") ) { return CreateTorusKnot_dyn(); }
		if (HX_FIELD_EQ(inName,"matricesIndices") ) { return matricesIndices; }
		if (HX_FIELD_EQ(inName,"matricesWeights") ) { return matricesWeights; }
		if (HX_FIELD_EQ(inName,"applyToGeometry") ) { return applyToGeometry_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ExtractFromGeometry") ) { return ExtractFromGeometry_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"CreateGroundFromHeightMap") ) { return CreateGroundFromHeightMap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VertexData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uvs") ) { uvs=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"uv2s") ) { uv2s=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"normals") ) { normals=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { positions=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"matricesIndices") ) { matricesIndices=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matricesWeights") ) { matricesWeights=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("positions"));
	outFields->push(HX_CSTRING("normals"));
	outFields->push(HX_CSTRING("uvs"));
	outFields->push(HX_CSTRING("uv2s"));
	outFields->push(HX_CSTRING("colors"));
	outFields->push(HX_CSTRING("matricesIndices"));
	outFields->push(HX_CSTRING("matricesWeights"));
	outFields->push(HX_CSTRING("indices"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ExtractFromMesh"),
	HX_CSTRING("ExtractFromGeometry"),
	HX_CSTRING("_ExtractFrom"),
	HX_CSTRING("CreateBox"),
	HX_CSTRING("CreateSphere"),
	HX_CSTRING("CreateCylinder"),
	HX_CSTRING("CreateTorus"),
	HX_CSTRING("CreateGround"),
	HX_CSTRING("CreatePlane"),
	HX_CSTRING("CreateTorusKnot"),
	HX_CSTRING("ComputeNormals"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(VertexData_obj,positions),HX_CSTRING("positions")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(VertexData_obj,normals),HX_CSTRING("normals")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(VertexData_obj,uvs),HX_CSTRING("uvs")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(VertexData_obj,uv2s),HX_CSTRING("uv2s")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(VertexData_obj,colors),HX_CSTRING("colors")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(VertexData_obj,matricesIndices),HX_CSTRING("matricesIndices")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(VertexData_obj,matricesWeights),HX_CSTRING("matricesWeights")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(VertexData_obj,indices),HX_CSTRING("indices")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("positions"),
	HX_CSTRING("normals"),
	HX_CSTRING("uvs"),
	HX_CSTRING("uv2s"),
	HX_CSTRING("colors"),
	HX_CSTRING("matricesIndices"),
	HX_CSTRING("matricesWeights"),
	HX_CSTRING("indices"),
	HX_CSTRING("set"),
	HX_CSTRING("applyToMesh"),
	HX_CSTRING("applyToGeometry"),
	HX_CSTRING("updateMesh"),
	HX_CSTRING("updateGeometry"),
	HX_CSTRING("_applyTo"),
	HX_CSTRING("_update"),
	HX_CSTRING("transform"),
	HX_CSTRING("merge"),
	HX_CSTRING("CreateGroundFromHeightMap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexData_obj::__mClass,"__mClass");
};

#endif

Class VertexData_obj::__mClass;

void VertexData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.mesh.VertexData"), hx::TCanCast< VertexData_obj> ,sStaticFields,sMemberFields,
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

void VertexData_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh
