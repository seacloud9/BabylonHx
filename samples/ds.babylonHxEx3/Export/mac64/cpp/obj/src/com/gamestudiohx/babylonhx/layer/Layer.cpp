#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Engine
#include <com/gamestudiohx/babylonhx/Engine.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Scene
#include <com/gamestudiohx/babylonhx/Scene.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_layer_Layer
#include <com/gamestudiohx/babylonhx/layer/Layer.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color4
#include <com/gamestudiohx/babylonhx/tools/math/Color4.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
namespace layer{

Void Layer_obj::__construct(::String name,::String imgUrl,::com::gamestudiohx::babylonhx::Scene scene,hx::Null< bool >  __o_isBackground,::com::gamestudiohx::babylonhx::tools::math::Color4 color)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.layer.Layer","new",0x66c05f54,"com.gamestudiohx.babylonhx.layer.Layer.new","com/gamestudiohx/babylonhx/layer/Layer.hx",33,0x9ddf62be)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(imgUrl,"imgUrl")
HX_STACK_ARG(scene,"scene")
HX_STACK_ARG(__o_isBackground,"isBackground")
HX_STACK_ARG(color,"color")
bool isBackground = __o_isBackground.Default(true);
{
	HX_STACK_LINE(34)
	this->name = name;
	HX_STACK_LINE(35)
	::com::gamestudiohx::babylonhx::materials::textures::Texture _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(35)
	if (((imgUrl != null()))){
		HX_STACK_LINE(35)
		_g = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::__new(imgUrl,scene,true,null());
	}
	else{
		HX_STACK_LINE(35)
		_g = null();
	}
	HX_STACK_LINE(35)
	this->texture = _g;
	HX_STACK_LINE(36)
	this->isBackground = isBackground;
	HX_STACK_LINE(37)
	::com::gamestudiohx::babylonhx::tools::math::Color4 _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(37)
	if (((color == null()))){
		HX_STACK_LINE(37)
		_g1 = ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new((int)1,(int)1,(int)1,(int)1);
	}
	else{
		HX_STACK_LINE(37)
		_g1 = color;
	}
	HX_STACK_LINE(37)
	this->color = _g1;
	HX_STACK_LINE(39)
	this->_scene = scene;
	HX_STACK_LINE(40)
	this->_scene->layers->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(43)
	Array< Float > vertices = Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)-1).Add((int)1).Add((int)-1).Add((int)-1).Add((int)1).Add((int)-1);		HX_STACK_VAR(vertices,"vertices");
	HX_STACK_LINE(48)
	this->_vertexDeclaration = Array_obj< int >::__new().Add((int)2);
	HX_STACK_LINE(49)
	this->_vertexStrideSize = (int)8;
	HX_STACK_LINE(50)
	::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g2 = scene->getEngine()->createVertexBuffer(vertices);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(50)
	this->_vertexBuffer = _g2;
	HX_STACK_LINE(53)
	Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
	HX_STACK_LINE(54)
	indices->push((int)0);
	HX_STACK_LINE(55)
	indices->push((int)1);
	HX_STACK_LINE(56)
	indices->push((int)2);
	HX_STACK_LINE(58)
	indices->push((int)0);
	HX_STACK_LINE(59)
	indices->push((int)2);
	HX_STACK_LINE(60)
	indices->push((int)3);
	HX_STACK_LINE(62)
	::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g3 = scene->getEngine()->createIndexBuffer(indices);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(62)
	this->_indexBuffer = _g3;
	HX_STACK_LINE(65)
	::com::gamestudiohx::babylonhx::materials::Effect _g4 = this->_scene->getEngine()->createEffect(HX_CSTRING("layer"),Array_obj< ::String >::__new().Add(HX_CSTRING("position")),Array_obj< ::String >::__new().Add(HX_CSTRING("textureMatrix")).Add(HX_CSTRING("color")),Array_obj< ::String >::__new().Add(HX_CSTRING("textureSampler")),HX_CSTRING(""),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(65)
	this->_effect = _g4;
}
;
	return null();
}

//Layer_obj::~Layer_obj() { }

Dynamic Layer_obj::__CreateEmpty() { return  new Layer_obj; }
hx::ObjectPtr< Layer_obj > Layer_obj::__new(::String name,::String imgUrl,::com::gamestudiohx::babylonhx::Scene scene,hx::Null< bool >  __o_isBackground,::com::gamestudiohx::babylonhx::tools::math::Color4 color)
{  hx::ObjectPtr< Layer_obj > result = new Layer_obj();
	result->__construct(name,imgUrl,scene,__o_isBackground,color);
	return result;}

Dynamic Layer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Layer_obj > result = new Layer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void Layer_obj::render( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.layer.Layer","render",0xe7d1ace2,"com.gamestudiohx.babylonhx.layer.Layer.render","com/gamestudiohx/babylonhx/layer/Layer.hx",74,0x9ddf62be)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		if (((  ((!(((  ((!((!(this->_effect->isReady()))))) ? bool((this->texture == null())) : bool(true) ))))) ? bool(!(this->texture->isReady())) : bool(true) ))){
			HX_STACK_LINE(77)
			return null();
		}
		HX_STACK_LINE(79)
		::com::gamestudiohx::babylonhx::Engine engine = this->_scene->getEngine();		HX_STACK_VAR(engine,"engine");
		HX_STACK_LINE(82)
		engine->enableEffect(this->_effect);
		HX_STACK_LINE(83)
		engine->setState(false);
		HX_STACK_LINE(86)
		this->_effect->setTexture(HX_CSTRING("textureSampler"),this->texture);
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			::com::gamestudiohx::babylonhx::tools::math::Matrix matrix = this->texture->_computeTextureMatrix();		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				Dynamic uniform = this->_effect->getUniform(HX_CSTRING("textureMatrix"));		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(87)
				if (((uniform != null()))){
					HX_STACK_LINE(87)
					Dynamic location = uniform;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(87)
					Dynamic v;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						::openfl::utils::Float32Array f = ::openfl::utils::Float32Array_obj::__new(matrix->m,null(),null());		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(87)
						Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(87)
						v = data;
					}
					HX_STACK_LINE(87)
					::openfl::gl::GL_obj::lime_gl_uniform_matrix(location,false,v,(int)4);
				}
			}
		}
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			::com::gamestudiohx::babylonhx::materials::Effect _this = this->_effect;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(90)
			Float x = this->color->r;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(90)
			Float y = this->color->g;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(90)
			Float z = this->color->b;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(90)
			Float w = this->color->a;		HX_STACK_VAR(w,"w");
			struct _Function_2_1{
				inline static bool Block( Float &x,::com::gamestudiohx::babylonhx::materials::Effect _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/layer/Layer.hx",90,0x9ddf62be)
					{
						HX_STACK_LINE(90)
						Array< Float > _g = _this->_valueCache->get(HX_CSTRING("color"));		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(90)
						Float _g1 = _g->__get((int)0);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(90)
						return (_g1 == x);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( Float &y,::com::gamestudiohx::babylonhx::materials::Effect _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/layer/Layer.hx",90,0x9ddf62be)
					{
						HX_STACK_LINE(90)
						Array< Float > _g2 = _this->_valueCache->get(HX_CSTRING("color"));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(90)
						Float _g3 = _g2->__get((int)1);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(90)
						return (_g3 == y);
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static bool Block( ::com::gamestudiohx::babylonhx::materials::Effect _this,Float &z){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/layer/Layer.hx",90,0x9ddf62be)
					{
						HX_STACK_LINE(90)
						Array< Float > _g4 = _this->_valueCache->get(HX_CSTRING("color"));		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(90)
						Float _g5 = _g4->__get((int)2);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(90)
						return (_g5 == z);
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static bool Block( Float &w,::com::gamestudiohx::babylonhx::materials::Effect _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/layer/Layer.hx",90,0x9ddf62be)
					{
						HX_STACK_LINE(90)
						Array< Float > _g6 = _this->_valueCache->get(HX_CSTRING("color"));		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(90)
						Float _g7 = _g6->__get((int)3);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(90)
						return (_g7 == w);
					}
					return null();
				}
			};
			HX_STACK_LINE(90)
			if ((!(((  (((  (((  (((  ((_this->_valueCache->exists(HX_CSTRING("color")))) ? bool(_Function_2_1::Block(x,_this)) : bool(false) ))) ? bool(_Function_2_2::Block(y,_this)) : bool(false) ))) ? bool(_Function_2_3::Block(_this,z)) : bool(false) ))) ? bool(_Function_2_4::Block(w,_this)) : bool(false) ))))){
				HX_STACK_LINE(90)
				if ((!(_this->_valueCache->exists(HX_CSTRING("color"))))){
					HX_STACK_LINE(90)
					_this->_valueCache->set(HX_CSTRING("color"),Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add(w));
				}
				else{
					HX_STACK_LINE(90)
					Array< Float > _g8 = _this->_valueCache->get(HX_CSTRING("color"));		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(90)
					_g8[(int)0] = x;
					HX_STACK_LINE(90)
					Array< Float > _g9 = _this->_valueCache->get(HX_CSTRING("color"));		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(90)
					_g9[(int)1] = y;
					HX_STACK_LINE(90)
					Array< Float > _g10 = _this->_valueCache->get(HX_CSTRING("color"));		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(90)
					_g10[(int)2] = z;
					HX_STACK_LINE(90)
					Array< Float > _g11 = _this->_valueCache->get(HX_CSTRING("color"));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(90)
					_g11[(int)3] = w;
				}
				HX_STACK_LINE(90)
				{
					HX_STACK_LINE(90)
					Dynamic uniform = _this->getUniform(HX_CSTRING("color"));		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(90)
					if (((uniform != null()))){
						HX_STACK_LINE(90)
						Dynamic location = uniform;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(90)
						::openfl::gl::GL_obj::lime_gl_uniform4f(location,x,y,z,w);
					}
				}
			}
		}
		HX_STACK_LINE(93)
		engine->bindBuffers(this->_vertexBuffer,this->_indexBuffer,this->_vertexDeclaration,this->_vertexStrideSize,this->_effect);
		HX_STACK_LINE(96)
		engine->setAlphaMode(::com::gamestudiohx::babylonhx::Engine_obj::ALPHA_COMBINE);
		HX_STACK_LINE(97)
		engine->draw(true,(int)0,(int)6,null());
		HX_STACK_LINE(98)
		engine->setAlphaMode(::com::gamestudiohx::babylonhx::Engine_obj::ALPHA_DISABLE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Layer_obj,render,(void))

Void Layer_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.layer.Layer","dispose",0x2bdd9993,"com.gamestudiohx.babylonhx.layer.Layer.dispose","com/gamestudiohx/babylonhx/layer/Layer.hx",101,0x9ddf62be)
		HX_STACK_THIS(this)
		HX_STACK_LINE(102)
		if (((this->_vertexBuffer != null()))){
			HX_STACK_LINE(103)
			this->_scene->getEngine()->_releaseBuffer(this->_vertexBuffer);
			HX_STACK_LINE(104)
			this->_vertexBuffer = null();
		}
		HX_STACK_LINE(107)
		if (((this->_indexBuffer != null()))){
			HX_STACK_LINE(108)
			this->_scene->getEngine()->_releaseBuffer(this->_indexBuffer);
			HX_STACK_LINE(109)
			this->_indexBuffer = null();
		}
		HX_STACK_LINE(112)
		if (((this->texture != null()))){
			HX_STACK_LINE(113)
			this->texture->dispose();
			HX_STACK_LINE(114)
			this->texture = null();
		}
		HX_STACK_LINE(118)
		int index = ::Lambda_obj::indexOf(this->_scene->layers,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(119)
		this->_scene->layers->splice(index,(int)1);
		HX_STACK_LINE(122)
		if (((this->onDispose_dyn() != null()))){
			HX_STACK_LINE(123)
			this->onDispose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Layer_obj,dispose,(void))


Layer_obj::Layer_obj()
{
}

void Layer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Layer);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(isBackground,"isBackground");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(indicies,"indicies");
	HX_MARK_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_MARK_MEMBER_NAME(_effect,"_effect");
	HX_MARK_MEMBER_NAME(_vertexDeclaration,"_vertexDeclaration");
	HX_MARK_MEMBER_NAME(_vertexStrideSize,"_vertexStrideSize");
	HX_MARK_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_MARK_MEMBER_NAME(onDispose,"onDispose");
	HX_MARK_END_CLASS();
}

void Layer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(isBackground,"isBackground");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(indicies,"indicies");
	HX_VISIT_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_VISIT_MEMBER_NAME(_effect,"_effect");
	HX_VISIT_MEMBER_NAME(_vertexDeclaration,"_vertexDeclaration");
	HX_VISIT_MEMBER_NAME(_vertexStrideSize,"_vertexStrideSize");
	HX_VISIT_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_VISIT_MEMBER_NAME(onDispose,"onDispose");
}

Dynamic Layer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		if (HX_FIELD_EQ(inName,"_effect") ) { return _effect; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
		if (HX_FIELD_EQ(inName,"indicies") ) { return indicies; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onDispose") ) { return onDispose; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isBackground") ) { return isBackground; }
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Layer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color4 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::gamestudiohx::babylonhx::Scene >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::textures::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_effect") ) { _effect=inValue.Cast< ::com::gamestudiohx::babylonhx::materials::Effect >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indicies") ) { indicies=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onDispose") ) { onDispose=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isBackground") ) { isBackground=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { _indexBuffer=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { _vertexBuffer=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_vertexStrideSize") ) { _vertexStrideSize=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_vertexDeclaration") ) { _vertexDeclaration=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Layer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("isBackground"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("vertices"));
	outFields->push(HX_CSTRING("indicies"));
	outFields->push(HX_CSTRING("_indexBuffer"));
	outFields->push(HX_CSTRING("_effect"));
	outFields->push(HX_CSTRING("_vertexDeclaration"));
	outFields->push(HX_CSTRING("_vertexStrideSize"));
	outFields->push(HX_CSTRING("_vertexBuffer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Layer_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::textures::Texture*/ ,(int)offsetof(Layer_obj,texture),HX_CSTRING("texture")},
	{hx::fsBool,(int)offsetof(Layer_obj,isBackground),HX_CSTRING("isBackground")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color4*/ ,(int)offsetof(Layer_obj,color),HX_CSTRING("color")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Scene*/ ,(int)offsetof(Layer_obj,_scene),HX_CSTRING("_scene")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Layer_obj,vertices),HX_CSTRING("vertices")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Layer_obj,indicies),HX_CSTRING("indicies")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Layer_obj,_indexBuffer),HX_CSTRING("_indexBuffer")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::materials::Effect*/ ,(int)offsetof(Layer_obj,_effect),HX_CSTRING("_effect")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Layer_obj,_vertexDeclaration),HX_CSTRING("_vertexDeclaration")},
	{hx::fsInt,(int)offsetof(Layer_obj,_vertexStrideSize),HX_CSTRING("_vertexStrideSize")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer*/ ,(int)offsetof(Layer_obj,_vertexBuffer),HX_CSTRING("_vertexBuffer")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Layer_obj,onDispose),HX_CSTRING("onDispose")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("texture"),
	HX_CSTRING("isBackground"),
	HX_CSTRING("color"),
	HX_CSTRING("_scene"),
	HX_CSTRING("vertices"),
	HX_CSTRING("indicies"),
	HX_CSTRING("_indexBuffer"),
	HX_CSTRING("_effect"),
	HX_CSTRING("_vertexDeclaration"),
	HX_CSTRING("_vertexStrideSize"),
	HX_CSTRING("_vertexBuffer"),
	HX_CSTRING("onDispose"),
	HX_CSTRING("render"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Layer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Layer_obj::__mClass,"__mClass");
};

#endif

Class Layer_obj::__mClass;

void Layer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.layer.Layer"), hx::TCanCast< Layer_obj> ,sStaticFields,sMemberFields,
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

void Layer_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace layer
