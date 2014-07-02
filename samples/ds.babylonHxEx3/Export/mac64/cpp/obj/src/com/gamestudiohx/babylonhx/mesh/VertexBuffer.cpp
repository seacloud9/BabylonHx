#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Engine
#include <com/gamestudiohx/babylonhx/Engine.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Node
#include <com/gamestudiohx/babylonhx/Node.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_BabylonGLBuffer
#include <com/gamestudiohx/babylonhx/mesh/BabylonGLBuffer.h>
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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
namespace mesh{

Void VertexBuffer_obj::__construct(Dynamic mesh,Array< Float > data,::String kind,bool updatable,hx::Null< bool >  __o_postponeInternalCreation)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexBuffer","new",0xd569b9c5,"com.gamestudiohx.babylonhx.mesh.VertexBuffer.new","com/gamestudiohx/babylonhx/mesh/VertexBuffer.hx",37,0x9858304b)
HX_STACK_THIS(this)
HX_STACK_ARG(mesh,"mesh")
HX_STACK_ARG(data,"data")
HX_STACK_ARG(kind,"kind")
HX_STACK_ARG(updatable,"updatable")
HX_STACK_ARG(__o_postponeInternalCreation,"postponeInternalCreation")
bool postponeInternalCreation = __o_postponeInternalCreation.Default(false);
{
	HX_STACK_LINE(38)
	if ((::Std_obj::is(mesh,hx::ClassOf< ::com::gamestudiohx::babylonhx::mesh::Mesh >()))){
		HX_STACK_LINE(39)
		this->_mesh = mesh;
		HX_STACK_LINE(40)
		Dynamic _g = mesh->__Field(HX_CSTRING("getScene"),true)()->__Field(HX_CSTRING("getEngine"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		this->_engine = _g;
	}
	else{
		HX_STACK_LINE(42)
		this->_engine = mesh;
	}
	HX_STACK_LINE(46)
	this->_updatable = updatable;
	HX_STACK_LINE(48)
	if ((updatable)){
		HX_STACK_LINE(49)
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g1 = this->_engine->createDynamicVertexBuffer((data->length * (int)4));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(49)
		this->_buffer = _g1;
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			int length = (int)0;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				::openfl::gl::GLBuffer buffer = this->_buffer->buffer;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(50)
				::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
			}
			HX_STACK_LINE(50)
			if (((length != (int)0))){
				HX_STACK_LINE(50)
				::openfl::utils::IMemoryRange data1 = ::openfl::utils::Float32Array_obj::__new(data,(int)0,length);		HX_STACK_VAR(data1,"data1");
				HX_STACK_LINE(50)
				::openfl::utils::ByteArray _g2 = data1->getByteBuffer();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(50)
				int _g3 = data1->getStart();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(50)
				int _g4 = data1->getLength();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(50)
				::openfl::gl::GL_obj::lime_gl_buffer_sub_data((int)34962,(int)0,_g2,_g3,_g4);
			}
			else{
				HX_STACK_LINE(50)
				::openfl::utils::IMemoryRange data1 = ::openfl::utils::Float32Array_obj::__new(data,null(),null());		HX_STACK_VAR(data1,"data1");
				HX_STACK_LINE(50)
				::openfl::utils::ByteArray _g5 = data1->getByteBuffer();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(50)
				int _g6 = data1->getStart();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(50)
				int _g7 = data1->getLength();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(50)
				::openfl::gl::GL_obj::lime_gl_buffer_sub_data((int)34962,(int)0,_g5,_g6,_g7);
			}
			HX_STACK_LINE(50)
			::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,null());
		}
	}
	else{
		HX_STACK_LINE(52)
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g8 = this->_engine->createVertexBuffer(data);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(52)
		this->_buffer = _g8;
	}
	HX_STACK_LINE(55)
	this->_data = data;
	HX_STACK_LINE(56)
	if ((!(postponeInternalCreation))){
		HX_STACK_LINE(57)
		this->create(null());
	}
	HX_STACK_LINE(60)
	this->_kind = kind;
	HX_STACK_LINE(64)
	::String _switch_1 = (kind);
	if (  ( _switch_1==::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind)){
		HX_STACK_LINE(66)
		this->_strideSize = (int)3;
	}
	else if (  ( _switch_1==::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::NormalKind)){
		HX_STACK_LINE(69)
		this->_strideSize = (int)3;
	}
	else if (  ( _switch_1==::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UVKind)){
		HX_STACK_LINE(71)
		this->_strideSize = (int)2;
	}
	else if (  ( _switch_1==::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::UV2Kind)){
		HX_STACK_LINE(73)
		this->_strideSize = (int)2;
	}
	else if (  ( _switch_1==::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::ColorKind)){
		HX_STACK_LINE(75)
		this->_strideSize = (int)3;
	}
	else if (  ( _switch_1==::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesIndicesKind)){
		HX_STACK_LINE(77)
		this->_strideSize = (int)4;
	}
	else if (  ( _switch_1==::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::MatricesWeightsKind)){
		HX_STACK_LINE(79)
		this->_strideSize = (int)4;
	}
	else  {
	}
;
;
}
;
	return null();
}

//VertexBuffer_obj::~VertexBuffer_obj() { }

Dynamic VertexBuffer_obj::__CreateEmpty() { return  new VertexBuffer_obj; }
hx::ObjectPtr< VertexBuffer_obj > VertexBuffer_obj::__new(Dynamic mesh,Array< Float > data,::String kind,bool updatable,hx::Null< bool >  __o_postponeInternalCreation)
{  hx::ObjectPtr< VertexBuffer_obj > result = new VertexBuffer_obj();
	result->__construct(mesh,data,kind,updatable,__o_postponeInternalCreation);
	return result;}

Dynamic VertexBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexBuffer_obj > result = new VertexBuffer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

bool VertexBuffer_obj::isUpdatable( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexBuffer","isUpdatable",0xc2b11391,"com.gamestudiohx.babylonhx.mesh.VertexBuffer.isUpdatable","com/gamestudiohx/babylonhx/mesh/VertexBuffer.hx",86,0x9858304b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	return this->_updatable;
}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,isUpdatable,return )

Array< Float > VertexBuffer_obj::getData( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexBuffer","getData",0x1d1d05c5,"com.gamestudiohx.babylonhx.mesh.VertexBuffer.getData","com/gamestudiohx/babylonhx/mesh/VertexBuffer.hx",90,0x9858304b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	return this->_data;
}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,getData,return )

int VertexBuffer_obj::getStrideSize( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexBuffer","getStrideSize",0x5d174355,"com.gamestudiohx.babylonhx.mesh.VertexBuffer.getStrideSize","com/gamestudiohx/babylonhx/mesh/VertexBuffer.hx",94,0x9858304b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	return this->_strideSize;
}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,getStrideSize,return )

Void VertexBuffer_obj::create( Array< Float > data){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexBuffer","create",0x8793aab7,"com.gamestudiohx.babylonhx.mesh.VertexBuffer.create","com/gamestudiohx/babylonhx/mesh/VertexBuffer.hx",97,0x9858304b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(98)
		if (((bool((data == null())) && bool((this->_buffer != null()))))){
			HX_STACK_LINE(99)
			return null();
		}
		HX_STACK_LINE(102)
		if (((data == null()))){
			HX_STACK_LINE(103)
			data = this->_data;
		}
		HX_STACK_LINE(106)
		if (((this->_buffer == null()))){
			HX_STACK_LINE(107)
			if ((this->_updatable)){
				HX_STACK_LINE(108)
				::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g = this->_engine->createDynamicVertexBuffer((data->length * (int)4));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(108)
				this->_buffer = _g;
			}
			else{
				HX_STACK_LINE(110)
				::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g1 = this->_engine->createVertexBuffer(data);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(110)
				this->_buffer = _g1;
			}
		}
		HX_STACK_LINE(114)
		if ((this->_updatable)){
			HX_STACK_LINE(115)
			{
				HX_STACK_LINE(115)
				int length = (int)0;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(115)
				{
					HX_STACK_LINE(115)
					::openfl::gl::GLBuffer buffer = this->_buffer->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(115)
					::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
				}
				HX_STACK_LINE(115)
				if (((length != (int)0))){
					HX_STACK_LINE(115)
					::openfl::utils::IMemoryRange data1 = ::openfl::utils::Float32Array_obj::__new(data,(int)0,length);		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(115)
					::openfl::utils::ByteArray _g2 = data1->getByteBuffer();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(115)
					int _g3 = data1->getStart();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(115)
					int _g4 = data1->getLength();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(115)
					::openfl::gl::GL_obj::lime_gl_buffer_sub_data((int)34962,(int)0,_g2,_g3,_g4);
				}
				else{
					HX_STACK_LINE(115)
					::openfl::utils::IMemoryRange data1 = ::openfl::utils::Float32Array_obj::__new(data,null(),null());		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(115)
					::openfl::utils::ByteArray _g5 = data1->getByteBuffer();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(115)
					int _g6 = data1->getStart();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(115)
					int _g7 = data1->getLength();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(115)
					::openfl::gl::GL_obj::lime_gl_buffer_sub_data((int)34962,(int)0,_g5,_g6,_g7);
				}
				HX_STACK_LINE(115)
				::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,null());
			}
			HX_STACK_LINE(116)
			this->_data = data;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VertexBuffer_obj,create,(void))

Void VertexBuffer_obj::update( Array< Float > data){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexBuffer","update",0x9289c9c4,"com.gamestudiohx.babylonhx.mesh.VertexBuffer.update","com/gamestudiohx/babylonhx/mesh/VertexBuffer.hx",121,0x9858304b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			int length = (int)0;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(122)
			{
				HX_STACK_LINE(122)
				::openfl::gl::GLBuffer buffer = this->_buffer->buffer;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(122)
				::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
			}
			HX_STACK_LINE(122)
			if (((length != (int)0))){
				HX_STACK_LINE(122)
				::openfl::utils::IMemoryRange data1 = ::openfl::utils::Float32Array_obj::__new(data,(int)0,length);		HX_STACK_VAR(data1,"data1");
				HX_STACK_LINE(122)
				::openfl::utils::ByteArray _g = data1->getByteBuffer();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(122)
				int _g1 = data1->getStart();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(122)
				int _g2 = data1->getLength();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(122)
				::openfl::gl::GL_obj::lime_gl_buffer_sub_data((int)34962,(int)0,_g,_g1,_g2);
			}
			else{
				HX_STACK_LINE(122)
				::openfl::utils::IMemoryRange data1 = ::openfl::utils::Float32Array_obj::__new(data,null(),null());		HX_STACK_VAR(data1,"data1");
				HX_STACK_LINE(122)
				::openfl::utils::ByteArray _g3 = data1->getByteBuffer();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(122)
				int _g4 = data1->getStart();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(122)
				int _g5 = data1->getLength();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(122)
				::openfl::gl::GL_obj::lime_gl_buffer_sub_data((int)34962,(int)0,_g3,_g4,_g5);
			}
			HX_STACK_LINE(122)
			::openfl::gl::GL_obj::lime_gl_bind_buffer((int)34962,null());
		}
		HX_STACK_LINE(123)
		this->_data = data;
		HX_STACK_LINE(125)
		if (((this->_kind == ::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind))){
			HX_STACK_LINE(126)
			this->_mesh->_resetPointsArrayCache();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VertexBuffer_obj,update,(void))

Void VertexBuffer_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.VertexBuffer","dispose",0xc3838084,"com.gamestudiohx.babylonhx.mesh.VertexBuffer.dispose","com/gamestudiohx/babylonhx/mesh/VertexBuffer.hx",131,0x9858304b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		this->_engine->_releaseBuffer(this->_buffer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,dispose,(void))

::String VertexBuffer_obj::PositionKind;

::String VertexBuffer_obj::NormalKind;

::String VertexBuffer_obj::UVKind;

::String VertexBuffer_obj::UV2Kind;

::String VertexBuffer_obj::ColorKind;

::String VertexBuffer_obj::MatricesIndicesKind;

::String VertexBuffer_obj::MatricesWeightsKind;


VertexBuffer_obj::VertexBuffer_obj()
{
}

void VertexBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexBuffer);
	HX_MARK_MEMBER_NAME(_mesh,"_mesh");
	HX_MARK_MEMBER_NAME(_engine,"_engine");
	HX_MARK_MEMBER_NAME(_updatable,"_updatable");
	HX_MARK_MEMBER_NAME(_buffer,"_buffer");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_kind,"_kind");
	HX_MARK_MEMBER_NAME(_strideSize,"_strideSize");
	HX_MARK_END_CLASS();
}

void VertexBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_mesh,"_mesh");
	HX_VISIT_MEMBER_NAME(_engine,"_engine");
	HX_VISIT_MEMBER_NAME(_updatable,"_updatable");
	HX_VISIT_MEMBER_NAME(_buffer,"_buffer");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_kind,"_kind");
	HX_VISIT_MEMBER_NAME(_strideSize,"_strideSize");
}

Dynamic VertexBuffer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_mesh") ) { return _mesh; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		if (HX_FIELD_EQ(inName,"_kind") ) { return _kind; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"UVKind") ) { return UVKind; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"UV2Kind") ) { return UV2Kind; }
		if (HX_FIELD_EQ(inName,"_engine") ) { return _engine; }
		if (HX_FIELD_EQ(inName,"_buffer") ) { return _buffer; }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ColorKind") ) { return ColorKind; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"NormalKind") ) { return NormalKind; }
		if (HX_FIELD_EQ(inName,"_updatable") ) { return _updatable; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_strideSize") ) { return _strideSize; }
		if (HX_FIELD_EQ(inName,"isUpdatable") ) { return isUpdatable_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"PositionKind") ) { return PositionKind; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getStrideSize") ) { return getStrideSize_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"MatricesIndicesKind") ) { return MatricesIndicesKind; }
		if (HX_FIELD_EQ(inName,"MatricesWeightsKind") ) { return MatricesWeightsKind; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VertexBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_mesh") ) { _mesh=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::Mesh >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_kind") ) { _kind=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"UVKind") ) { UVKind=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"UV2Kind") ) { UV2Kind=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_engine") ) { _engine=inValue.Cast< ::com::gamestudiohx::babylonhx::Engine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buffer") ) { _buffer=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ColorKind") ) { ColorKind=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"NormalKind") ) { NormalKind=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updatable") ) { _updatable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_strideSize") ) { _strideSize=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"PositionKind") ) { PositionKind=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"MatricesIndicesKind") ) { MatricesIndicesKind=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MatricesWeightsKind") ) { MatricesWeightsKind=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_mesh"));
	outFields->push(HX_CSTRING("_engine"));
	outFields->push(HX_CSTRING("_updatable"));
	outFields->push(HX_CSTRING("_buffer"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_kind"));
	outFields->push(HX_CSTRING("_strideSize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PositionKind"),
	HX_CSTRING("NormalKind"),
	HX_CSTRING("UVKind"),
	HX_CSTRING("UV2Kind"),
	HX_CSTRING("ColorKind"),
	HX_CSTRING("MatricesIndicesKind"),
	HX_CSTRING("MatricesWeightsKind"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::Mesh*/ ,(int)offsetof(VertexBuffer_obj,_mesh),HX_CSTRING("_mesh")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Engine*/ ,(int)offsetof(VertexBuffer_obj,_engine),HX_CSTRING("_engine")},
	{hx::fsBool,(int)offsetof(VertexBuffer_obj,_updatable),HX_CSTRING("_updatable")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer*/ ,(int)offsetof(VertexBuffer_obj,_buffer),HX_CSTRING("_buffer")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(VertexBuffer_obj,_data),HX_CSTRING("_data")},
	{hx::fsString,(int)offsetof(VertexBuffer_obj,_kind),HX_CSTRING("_kind")},
	{hx::fsInt,(int)offsetof(VertexBuffer_obj,_strideSize),HX_CSTRING("_strideSize")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_mesh"),
	HX_CSTRING("_engine"),
	HX_CSTRING("_updatable"),
	HX_CSTRING("_buffer"),
	HX_CSTRING("_data"),
	HX_CSTRING("_kind"),
	HX_CSTRING("_strideSize"),
	HX_CSTRING("isUpdatable"),
	HX_CSTRING("getData"),
	HX_CSTRING("getStrideSize"),
	HX_CSTRING("create"),
	HX_CSTRING("update"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexBuffer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VertexBuffer_obj::PositionKind,"PositionKind");
	HX_MARK_MEMBER_NAME(VertexBuffer_obj::NormalKind,"NormalKind");
	HX_MARK_MEMBER_NAME(VertexBuffer_obj::UVKind,"UVKind");
	HX_MARK_MEMBER_NAME(VertexBuffer_obj::UV2Kind,"UV2Kind");
	HX_MARK_MEMBER_NAME(VertexBuffer_obj::ColorKind,"ColorKind");
	HX_MARK_MEMBER_NAME(VertexBuffer_obj::MatricesIndicesKind,"MatricesIndicesKind");
	HX_MARK_MEMBER_NAME(VertexBuffer_obj::MatricesWeightsKind,"MatricesWeightsKind");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexBuffer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VertexBuffer_obj::PositionKind,"PositionKind");
	HX_VISIT_MEMBER_NAME(VertexBuffer_obj::NormalKind,"NormalKind");
	HX_VISIT_MEMBER_NAME(VertexBuffer_obj::UVKind,"UVKind");
	HX_VISIT_MEMBER_NAME(VertexBuffer_obj::UV2Kind,"UV2Kind");
	HX_VISIT_MEMBER_NAME(VertexBuffer_obj::ColorKind,"ColorKind");
	HX_VISIT_MEMBER_NAME(VertexBuffer_obj::MatricesIndicesKind,"MatricesIndicesKind");
	HX_VISIT_MEMBER_NAME(VertexBuffer_obj::MatricesWeightsKind,"MatricesWeightsKind");
};

#endif

Class VertexBuffer_obj::__mClass;

void VertexBuffer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.mesh.VertexBuffer"), hx::TCanCast< VertexBuffer_obj> ,sStaticFields,sMemberFields,
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

void VertexBuffer_obj::__boot()
{
	PositionKind= HX_CSTRING("position");
	NormalKind= HX_CSTRING("normal");
	UVKind= HX_CSTRING("uv");
	UV2Kind= HX_CSTRING("uv2");
	ColorKind= HX_CSTRING("color");
	MatricesIndicesKind= HX_CSTRING("matricesIndices");
	MatricesWeightsKind= HX_CSTRING("matricesWeights");
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh
