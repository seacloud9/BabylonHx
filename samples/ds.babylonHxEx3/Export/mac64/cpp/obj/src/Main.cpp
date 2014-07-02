#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_FreeCamera
#include <com/gamestudiohx/babylonhx/cameras/FreeCamera.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_layer_Layer
#include <com/gamestudiohx/babylonhx/layer/Layer.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Material
#include <com/gamestudiohx/babylonhx/materials/Material.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_ShaderMaterial
#include <com/gamestudiohx/babylonhx/materials/ShaderMaterial.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BaseTexture
#include <com/gamestudiohx/babylonhx/materials/textures/BaseTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_DynamicTexture
#include <com/gamestudiohx/babylonhx/materials/textures/DynamicTexture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_Texture
#include <com/gamestudiohx/babylonhx/materials/textures/Texture.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_IGetSetVerticesData
#include <com/gamestudiohx/babylonhx/mesh/IGetSetVerticesData.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_Mesh
#include <com/gamestudiohx/babylonhx/mesh/Mesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_VertexData
#include <com/gamestudiohx/babylonhx/mesh/VertexData.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color3
#include <com/gamestudiohx/babylonhx/tools/math/Color3.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color4
#include <com/gamestudiohx/babylonhx/tools/math/Color4.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",162,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(163)
	super::__construct();
	HX_STACK_LINE(164)
	this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::resize( Dynamic e){
{
		HX_STACK_FRAME("Main","resize",0x39257969,"Main.resize","Main.hx",51,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(51)
		if ((!(this->inited))){
			HX_STACK_LINE(51)
			this->init();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,resize,(void))

Void Main_obj::init( ){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",55,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		if ((this->inited)){
			HX_STACK_LINE(56)
			return null();
		}
		HX_STACK_LINE(57)
		::Date start_time = ::Date_obj::now();		HX_STACK_VAR(start_time,"start_time");
		HX_STACK_LINE(58)
		this->inited = true;
		HX_STACK_LINE(60)
		Array< ::Dynamic > engine = Array_obj< ::Dynamic >::__new().Add(::com::gamestudiohx::babylonhx::Engine_obj::__new(hx::ObjectPtr<OBJ_>(this),true));		HX_STACK_VAR(engine,"engine");
		HX_STACK_LINE(61)
		Array< ::Dynamic > scene = Array_obj< ::Dynamic >::__new().Add(::com::gamestudiohx::babylonhx::Scene_obj::__new(engine->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()));		HX_STACK_VAR(scene,"scene");
		HX_STACK_LINE(62)
		::com::gamestudiohx::babylonhx::layer::Layer background = ::com::gamestudiohx::babylonhx::layer::Layer_obj::__new(HX_CSTRING("back0"),null(),scene->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >(),null(),null());		HX_STACK_VAR(background,"background");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",63,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("width") , (int)512,false);
					__result->Add(HX_CSTRING("height") , (int)512,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(63)
		::com::gamestudiohx::babylonhx::materials::textures::DynamicTexture _g = ::com::gamestudiohx::babylonhx::materials::textures::DynamicTexture_obj::__new(HX_CSTRING("dynamic texture"),_Function_1_1::Block(),scene->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >(),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		background->texture = _g;
		HX_STACK_LINE(66)
		Dynamic size = background->texture->getSize();		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(67)
		::openfl::display::Shape shape = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(shape,"shape");
		HX_STACK_LINE(68)
		shape->get_graphics()->lineStyle((int)4,(int)1984631,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(69)
		shape->get_graphics()->beginFill((int)4555956,null());
		HX_STACK_LINE(70)
		shape->get_graphics()->drawRect((int)0,(int)0,size->__Field(HX_CSTRING("width"),true),size->__Field(HX_CSTRING("height"),true));
		HX_STACK_LINE(71)
		shape->get_graphics()->endFill();
		HX_STACK_LINE(72)
		::openfl::geom::Rectangle bounds = shape->getBounds(shape);		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(73)
		::openfl::geom::Matrix m = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(74)
		Float _g1 = -(bounds->get_left());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(74)
		Float _g2 = -(bounds->get_top());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(74)
		m->translate(_g1,_g2);
		HX_STACK_LINE(77)
		background->texture->_canvas->draw(shape,m,null(),null(),null(),null());
		HX_STACK_LINE(79)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((int)0,(int)-128,(int)0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(79)
		::com::gamestudiohx::babylonhx::cameras::FreeCamera camera = ::com::gamestudiohx::babylonhx::cameras::FreeCamera_obj::__new(HX_CSTRING("camera"),_g3,scene->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >());		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(80)
		camera->fov = (int)30;
		HX_STACK_LINE(81)
		camera->minZ = (int)1;
		HX_STACK_LINE(82)
		camera->maxZ = (int)3000;
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",84,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("vertexElement") , HX_CSTRING("vertexShaderCode"),false);
					__result->Add(HX_CSTRING("fragmentElement") , HX_CSTRING("fragmentShaderCode"),false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",88,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("needAlphaBlending") , true,false);
					__result->Add(HX_CSTRING("attributes") , Array_obj< ::String >::__new().Add(HX_CSTRING("position")).Add(HX_CSTRING("uv")),false);
					__result->Add(HX_CSTRING("uniforms") , Array_obj< ::String >::__new().Add(HX_CSTRING("worldViewProjection")),false);
					__result->Add(HX_CSTRING("samplers") , Array_obj< ::String >::__new().Add(HX_CSTRING("textureSampler")),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(84)
		::com::gamestudiohx::babylonhx::materials::ShaderMaterial cloudMaterial = ::com::gamestudiohx::babylonhx::materials::ShaderMaterial_obj::__new(HX_CSTRING("clouds"),scene->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >(),_Function_1_2::Block(),_Function_1_3::Block());		HX_STACK_VAR(cloudMaterial,"cloudMaterial");
		HX_STACK_LINE(94)
		::com::gamestudiohx::babylonhx::materials::textures::Texture _g4 = ::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::__new(HX_CSTRING("Assets/img/cloud.png"),scene->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >(),null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(94)
		cloudMaterial->setTexture(HX_CSTRING("Clouds"),_g4);
		HX_STACK_LINE(95)
		cloudMaterial->setFloat(HX_CSTRING("fogNear"),(int)-100);
		HX_STACK_LINE(96)
		cloudMaterial->setFloat(HX_CSTRING("fogFar"),(int)3000);
		HX_STACK_LINE(97)
		::com::gamestudiohx::babylonhx::tools::math::Color3 _g5 = ::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__new((int)69,(int)132,(int)180);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(97)
		cloudMaterial->setColor3(HX_CSTRING("fogColor"),_g5);
		HX_STACK_LINE(99)
		::haxe::Log_obj::trace(HX_CSTRING("1"),hx::SourceInfo(HX_CSTRING("Main.hx"),99,HX_CSTRING("Main"),HX_CSTRING("init")));
		HX_STACK_LINE(102)
		int count = (int)8000;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(104)
		::com::gamestudiohx::babylonhx::mesh::VertexData globalVertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::__new();		HX_STACK_VAR(globalVertexData,"globalVertexData");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g6 = (int)0;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				if ((!(((_g6 < count))))){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				int i = (_g6)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(106)
				::com::gamestudiohx::babylonhx::mesh::VertexData planeVertexData = ::com::gamestudiohx::babylonhx::mesh::VertexData_obj::CreatePlane((int)128);		HX_STACK_VAR(planeVertexData,"planeVertexData");
				HX_STACK_LINE(110)
				Float _g61 = ::Math_obj::random();		HX_STACK_VAR(_g61,"_g61");
				HX_STACK_LINE(110)
				Float _g7 = ::Math_obj::random();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(110)
				Float _g8 = (_g61 * _g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(110)
				Float _g9 = (_g8 * 1.5);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(110)
				Float randomScaling = (_g9 + 0.5);		HX_STACK_VAR(randomScaling,"randomScaling");
				HX_STACK_LINE(111)
				::com::gamestudiohx::babylonhx::tools::math::Matrix transformMatrix;		HX_STACK_VAR(transformMatrix,"transformMatrix");
				HX_STACK_LINE(111)
				{
					HX_STACK_LINE(111)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(111)
					{
						HX_STACK_LINE(111)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(111)
						result1->m[(int)0] = (int)0;
						HX_STACK_LINE(111)
						result1->m[(int)1] = (int)0;
						HX_STACK_LINE(111)
						result1->m[(int)2] = (int)0;
						HX_STACK_LINE(111)
						result1->m[(int)3] = (int)0;
						HX_STACK_LINE(111)
						result1->m[(int)4] = (int)0;
						HX_STACK_LINE(111)
						result1->m[(int)5] = (int)0;
						HX_STACK_LINE(111)
						result1->m[(int)6] = (int)0;
						HX_STACK_LINE(111)
						result1->m[(int)7] = (int)0;
						HX_STACK_LINE(111)
						result1->m[(int)8] = (int)0;
						HX_STACK_LINE(111)
						result1->m[(int)9] = (int)0;
						HX_STACK_LINE(111)
						result1->m[(int)10] = (int)0;
						HX_STACK_LINE(111)
						result1->m[(int)11] = (int)0;
						HX_STACK_LINE(111)
						result1->m[(int)12] = (int)0;
						HX_STACK_LINE(111)
						result1->m[(int)13] = (int)0;
						HX_STACK_LINE(111)
						result1->m[(int)14] = (int)0;
						HX_STACK_LINE(111)
						result1->m[(int)15] = (int)0;
						HX_STACK_LINE(111)
						result = result1;
					}
					HX_STACK_LINE(111)
					{
						HX_STACK_LINE(111)
						result->m[(int)0] = randomScaling;
						HX_STACK_LINE(111)
						result->m[(int)1] = (int)0;
						HX_STACK_LINE(111)
						result->m[(int)2] = (int)0;
						HX_STACK_LINE(111)
						result->m[(int)3] = (int)0;
						HX_STACK_LINE(111)
						result->m[(int)4] = (int)0;
						HX_STACK_LINE(111)
						result->m[(int)5] = randomScaling;
						HX_STACK_LINE(111)
						result->m[(int)6] = (int)0;
						HX_STACK_LINE(111)
						result->m[(int)7] = (int)0;
						HX_STACK_LINE(111)
						result->m[(int)8] = (int)0;
						HX_STACK_LINE(111)
						result->m[(int)9] = (int)0;
						HX_STACK_LINE(111)
						result->m[(int)10] = 1.0;
						HX_STACK_LINE(111)
						result->m[(int)11] = (int)0;
						HX_STACK_LINE(111)
						result->m[(int)12] = (int)0;
						HX_STACK_LINE(111)
						result->m[(int)13] = (int)0;
						HX_STACK_LINE(111)
						result->m[(int)14] = (int)0;
						HX_STACK_LINE(111)
						result->m[(int)15] = 1.0;
						HX_STACK_LINE(111)
						result;
					}
					HX_STACK_LINE(111)
					transformMatrix = result;
				}
				HX_STACK_LINE(112)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(112)
				{
					HX_STACK_LINE(112)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(112)
					{
						HX_STACK_LINE(112)
						Float _g10 = ::Math_obj::random();		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(112)
						Float angle = (_g10 * ::Math_obj::PI);		HX_STACK_VAR(angle,"angle");
						HX_STACK_LINE(112)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(112)
						{
							HX_STACK_LINE(112)
							Float s = ::Math_obj::sin(angle);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(112)
							Float c = ::Math_obj::cos(angle);		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(112)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(112)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(112)
							result->m[(int)0] = c;
							HX_STACK_LINE(112)
							result->m[(int)1] = s;
							HX_STACK_LINE(112)
							result->m[(int)4] = -(s);
							HX_STACK_LINE(112)
							result->m[(int)5] = c;
							HX_STACK_LINE(112)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(112)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(112)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(112)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(112)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(112)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(112)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(112)
							result->m[(int)12] = (int)0;
							HX_STACK_LINE(112)
							result->m[(int)13] = (int)0;
							HX_STACK_LINE(112)
							result->m[(int)14] = (int)0;
							HX_STACK_LINE(112)
							result;
						}
						HX_STACK_LINE(112)
						other = result;
					}
					HX_STACK_LINE(112)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(112)
					{
						HX_STACK_LINE(112)
						Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(112)
						Float tm0 = transformMatrix->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(112)
						Float tm1 = transformMatrix->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(112)
						Float tm2 = transformMatrix->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(112)
						Float tm3 = transformMatrix->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(112)
						Float tm4 = transformMatrix->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(112)
						Float tm5 = transformMatrix->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(112)
						Float tm6 = transformMatrix->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(112)
						Float tm7 = transformMatrix->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(112)
						Float tm8 = transformMatrix->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(112)
						Float tm9 = transformMatrix->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(112)
						Float tm10 = transformMatrix->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(112)
						Float tm11 = transformMatrix->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(112)
						Float tm12 = transformMatrix->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(112)
						Float tm13 = transformMatrix->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(112)
						Float tm14 = transformMatrix->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(112)
						Float tm15 = transformMatrix->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(112)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(112)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(112)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(112)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(112)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(112)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(112)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(112)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(112)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(112)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(112)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(112)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(112)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(112)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(112)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(112)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(112)
						result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(112)
						result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(112)
						result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(112)
						result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(112)
						result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(112)
						result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(112)
						result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(112)
						result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(112)
						result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(112)
						result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(112)
						result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(112)
						result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(112)
						result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(112)
						result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(112)
						result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(112)
						result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(112)
						result1;
					}
					HX_STACK_LINE(112)
					_g11 = result;
				}
				HX_STACK_LINE(112)
				transformMatrix = _g11;
				HX_STACK_LINE(113)
				::com::gamestudiohx::babylonhx::tools::math::Matrix _g17;		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(113)
				{
					HX_STACK_LINE(113)
					::com::gamestudiohx::babylonhx::tools::math::Matrix other;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(113)
					{
						HX_STACK_LINE(113)
						Float _g12 = ::Math_obj::random();		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(113)
						Float _g13 = (_g12 * (int)1000);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(113)
						Float x = (_g13 - (int)500);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(113)
						Float _g14 = -(::Math_obj::random());		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(113)
						Float _g15 = ::Math_obj::random();		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(113)
						Float _g16 = (_g14 * _g15);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(113)
						Float y = (_g16 * (int)100);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(113)
						::com::gamestudiohx::babylonhx::tools::math::Matrix result;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(113)
						{
							HX_STACK_LINE(113)
							::com::gamestudiohx::babylonhx::tools::math::Matrix result1 = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result1,"result1");
							HX_STACK_LINE(113)
							result1->m[(int)0] = 1.0;
							HX_STACK_LINE(113)
							result1->m[(int)1] = (int)0;
							HX_STACK_LINE(113)
							result1->m[(int)2] = (int)0;
							HX_STACK_LINE(113)
							result1->m[(int)3] = (int)0;
							HX_STACK_LINE(113)
							result1->m[(int)4] = (int)0;
							HX_STACK_LINE(113)
							result1->m[(int)5] = 1.0;
							HX_STACK_LINE(113)
							result1->m[(int)6] = (int)0;
							HX_STACK_LINE(113)
							result1->m[(int)7] = (int)0;
							HX_STACK_LINE(113)
							result1->m[(int)8] = (int)0;
							HX_STACK_LINE(113)
							result1->m[(int)9] = (int)0;
							HX_STACK_LINE(113)
							result1->m[(int)10] = 1.0;
							HX_STACK_LINE(113)
							result1->m[(int)11] = (int)0;
							HX_STACK_LINE(113)
							result1->m[(int)12] = (int)0;
							HX_STACK_LINE(113)
							result1->m[(int)13] = (int)0;
							HX_STACK_LINE(113)
							result1->m[(int)14] = (int)0;
							HX_STACK_LINE(113)
							result1->m[(int)15] = 1.0;
							HX_STACK_LINE(113)
							result = result1;
						}
						HX_STACK_LINE(113)
						{
							HX_STACK_LINE(113)
							result->m[(int)0] = 1.0;
							HX_STACK_LINE(113)
							result->m[(int)1] = (int)0;
							HX_STACK_LINE(113)
							result->m[(int)2] = (int)0;
							HX_STACK_LINE(113)
							result->m[(int)3] = (int)0;
							HX_STACK_LINE(113)
							result->m[(int)4] = (int)0;
							HX_STACK_LINE(113)
							result->m[(int)5] = 1.0;
							HX_STACK_LINE(113)
							result->m[(int)6] = (int)0;
							HX_STACK_LINE(113)
							result->m[(int)7] = (int)0;
							HX_STACK_LINE(113)
							result->m[(int)8] = (int)0;
							HX_STACK_LINE(113)
							result->m[(int)9] = (int)0;
							HX_STACK_LINE(113)
							result->m[(int)10] = 1.0;
							HX_STACK_LINE(113)
							result->m[(int)11] = (int)0;
							HX_STACK_LINE(113)
							result->m[(int)12] = x;
							HX_STACK_LINE(113)
							result->m[(int)13] = y;
							HX_STACK_LINE(113)
							result->m[(int)14] = (count - i);
							HX_STACK_LINE(113)
							result->m[(int)15] = 1.0;
							HX_STACK_LINE(113)
							result;
						}
						HX_STACK_LINE(113)
						other = result;
					}
					HX_STACK_LINE(113)
					::com::gamestudiohx::babylonhx::tools::math::Matrix result = ::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__new();		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(113)
					{
						HX_STACK_LINE(113)
						Array< Float > result1 = result->m;		HX_STACK_VAR(result1,"result1");
						HX_STACK_LINE(113)
						Float tm0 = transformMatrix->m->__get((int)0);		HX_STACK_VAR(tm0,"tm0");
						HX_STACK_LINE(113)
						Float tm1 = transformMatrix->m->__get((int)1);		HX_STACK_VAR(tm1,"tm1");
						HX_STACK_LINE(113)
						Float tm2 = transformMatrix->m->__get((int)2);		HX_STACK_VAR(tm2,"tm2");
						HX_STACK_LINE(113)
						Float tm3 = transformMatrix->m->__get((int)3);		HX_STACK_VAR(tm3,"tm3");
						HX_STACK_LINE(113)
						Float tm4 = transformMatrix->m->__get((int)4);		HX_STACK_VAR(tm4,"tm4");
						HX_STACK_LINE(113)
						Float tm5 = transformMatrix->m->__get((int)5);		HX_STACK_VAR(tm5,"tm5");
						HX_STACK_LINE(113)
						Float tm6 = transformMatrix->m->__get((int)6);		HX_STACK_VAR(tm6,"tm6");
						HX_STACK_LINE(113)
						Float tm7 = transformMatrix->m->__get((int)7);		HX_STACK_VAR(tm7,"tm7");
						HX_STACK_LINE(113)
						Float tm8 = transformMatrix->m->__get((int)8);		HX_STACK_VAR(tm8,"tm8");
						HX_STACK_LINE(113)
						Float tm9 = transformMatrix->m->__get((int)9);		HX_STACK_VAR(tm9,"tm9");
						HX_STACK_LINE(113)
						Float tm10 = transformMatrix->m->__get((int)10);		HX_STACK_VAR(tm10,"tm10");
						HX_STACK_LINE(113)
						Float tm11 = transformMatrix->m->__get((int)11);		HX_STACK_VAR(tm11,"tm11");
						HX_STACK_LINE(113)
						Float tm12 = transformMatrix->m->__get((int)12);		HX_STACK_VAR(tm12,"tm12");
						HX_STACK_LINE(113)
						Float tm13 = transformMatrix->m->__get((int)13);		HX_STACK_VAR(tm13,"tm13");
						HX_STACK_LINE(113)
						Float tm14 = transformMatrix->m->__get((int)14);		HX_STACK_VAR(tm14,"tm14");
						HX_STACK_LINE(113)
						Float tm15 = transformMatrix->m->__get((int)15);		HX_STACK_VAR(tm15,"tm15");
						HX_STACK_LINE(113)
						Float om0 = other->m->__get((int)0);		HX_STACK_VAR(om0,"om0");
						HX_STACK_LINE(113)
						Float om1 = other->m->__get((int)1);		HX_STACK_VAR(om1,"om1");
						HX_STACK_LINE(113)
						Float om2 = other->m->__get((int)2);		HX_STACK_VAR(om2,"om2");
						HX_STACK_LINE(113)
						Float om3 = other->m->__get((int)3);		HX_STACK_VAR(om3,"om3");
						HX_STACK_LINE(113)
						Float om4 = other->m->__get((int)4);		HX_STACK_VAR(om4,"om4");
						HX_STACK_LINE(113)
						Float om5 = other->m->__get((int)5);		HX_STACK_VAR(om5,"om5");
						HX_STACK_LINE(113)
						Float om6 = other->m->__get((int)6);		HX_STACK_VAR(om6,"om6");
						HX_STACK_LINE(113)
						Float om7 = other->m->__get((int)7);		HX_STACK_VAR(om7,"om7");
						HX_STACK_LINE(113)
						Float om8 = other->m->__get((int)8);		HX_STACK_VAR(om8,"om8");
						HX_STACK_LINE(113)
						Float om9 = other->m->__get((int)9);		HX_STACK_VAR(om9,"om9");
						HX_STACK_LINE(113)
						Float om10 = other->m->__get((int)10);		HX_STACK_VAR(om10,"om10");
						HX_STACK_LINE(113)
						Float om11 = other->m->__get((int)11);		HX_STACK_VAR(om11,"om11");
						HX_STACK_LINE(113)
						Float om12 = other->m->__get((int)12);		HX_STACK_VAR(om12,"om12");
						HX_STACK_LINE(113)
						Float om13 = other->m->__get((int)13);		HX_STACK_VAR(om13,"om13");
						HX_STACK_LINE(113)
						Float om14 = other->m->__get((int)14);		HX_STACK_VAR(om14,"om14");
						HX_STACK_LINE(113)
						Float om15 = other->m->__get((int)15);		HX_STACK_VAR(om15,"om15");
						HX_STACK_LINE(113)
						result1[(int)0] = ((((tm0 * om0) + (tm1 * om4)) + (tm2 * om8)) + (tm3 * om12));
						HX_STACK_LINE(113)
						result1[(int)1] = ((((tm0 * om1) + (tm1 * om5)) + (tm2 * om9)) + (tm3 * om13));
						HX_STACK_LINE(113)
						result1[(int)2] = ((((tm0 * om2) + (tm1 * om6)) + (tm2 * om10)) + (tm3 * om14));
						HX_STACK_LINE(113)
						result1[(int)3] = ((((tm0 * om3) + (tm1 * om7)) + (tm2 * om11)) + (tm3 * om15));
						HX_STACK_LINE(113)
						result1[(int)4] = ((((tm4 * om0) + (tm5 * om4)) + (tm6 * om8)) + (tm7 * om12));
						HX_STACK_LINE(113)
						result1[(int)5] = ((((tm4 * om1) + (tm5 * om5)) + (tm6 * om9)) + (tm7 * om13));
						HX_STACK_LINE(113)
						result1[(int)6] = ((((tm4 * om2) + (tm5 * om6)) + (tm6 * om10)) + (tm7 * om14));
						HX_STACK_LINE(113)
						result1[(int)7] = ((((tm4 * om3) + (tm5 * om7)) + (tm6 * om11)) + (tm7 * om15));
						HX_STACK_LINE(113)
						result1[(int)8] = ((((tm8 * om0) + (tm9 * om4)) + (tm10 * om8)) + (tm11 * om12));
						HX_STACK_LINE(113)
						result1[(int)9] = ((((tm8 * om1) + (tm9 * om5)) + (tm10 * om9)) + (tm11 * om13));
						HX_STACK_LINE(113)
						result1[(int)10] = ((((tm8 * om2) + (tm9 * om6)) + (tm10 * om10)) + (tm11 * om14));
						HX_STACK_LINE(113)
						result1[(int)11] = ((((tm8 * om3) + (tm9 * om7)) + (tm10 * om11)) + (tm11 * om15));
						HX_STACK_LINE(113)
						result1[(int)12] = ((((tm12 * om0) + (tm13 * om4)) + (tm14 * om8)) + (tm15 * om12));
						HX_STACK_LINE(113)
						result1[(int)13] = ((((tm12 * om1) + (tm13 * om5)) + (tm14 * om9)) + (tm15 * om13));
						HX_STACK_LINE(113)
						result1[(int)14] = ((((tm12 * om2) + (tm13 * om6)) + (tm14 * om10)) + (tm15 * om14));
						HX_STACK_LINE(113)
						result1[(int)15] = ((((tm12 * om3) + (tm13 * om7)) + (tm14 * om11)) + (tm15 * om15));
						HX_STACK_LINE(113)
						result1;
					}
					HX_STACK_LINE(113)
					_g17 = result;
				}
				HX_STACK_LINE(113)
				transformMatrix = _g17;
				HX_STACK_LINE(114)
				planeVertexData->transform(transformMatrix);
				HX_STACK_LINE(116)
				globalVertexData->merge(planeVertexData);
			}
		}
		HX_STACK_LINE(118)
		::haxe::Log_obj::trace(HX_CSTRING("2"),hx::SourceInfo(HX_CSTRING("Main.hx"),118,HX_CSTRING("Main"),HX_CSTRING("init")));
		HX_STACK_LINE(119)
		::com::gamestudiohx::babylonhx::mesh::Mesh clouds = ::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__new(HX_CSTRING("Clouds"),scene->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >());		HX_STACK_VAR(clouds,"clouds");
		HX_STACK_LINE(120)
		::haxe::Log_obj::trace(HX_CSTRING("3"),hx::SourceInfo(HX_CSTRING("Main.hx"),120,HX_CSTRING("Main"),HX_CSTRING("init")));
		HX_STACK_LINE(121)
		globalVertexData->applyToMesh(clouds,null());
		HX_STACK_LINE(122)
		::haxe::Log_obj::trace(HX_CSTRING("4"),hx::SourceInfo(HX_CSTRING("Main.hx"),122,HX_CSTRING("Main"),HX_CSTRING("init")));
		HX_STACK_LINE(123)
		clouds->material = cloudMaterial;
		HX_STACK_LINE(124)
		clouds->position->z = (int)-256;

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_4,Array< ::Dynamic >,scene,Array< ::Dynamic >,engine)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","Main.hx",136,0x087e5c05)
			{
				HX_STACK_LINE(136)
				engine->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Engine >()->runRenderLoop(scene->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >()->render_dyn());
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(135)
		scene->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::Scene >()->executeWhenReady( Dynamic(new _Function_1_4(scene,engine)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::added( Dynamic e){
{
		HX_STACK_FRAME("Main","added",0x98771aeb,"Main.added","Main.hx",167,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(168)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null());
		HX_STACK_LINE(169)
		this->get_stage()->addEventListener(::openfl::events::Event_obj::RESIZE,this->resize_dyn(),null(),null(),null());
		HX_STACK_LINE(173)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,added,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",177,0x087e5c05)
		HX_STACK_LINE(179)
		::openfl::Lib_obj::get_current()->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(180)
		::openfl::Lib_obj::get_current()->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(181)
		::Main _g = ::Main_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(181)
		::openfl::Lib_obj::get_current()->addChild(_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))

bool Main_obj::safeDestroy( Dynamic obj,Dynamic __o_destroy){
Dynamic destroy = __o_destroy.Default(true);
	HX_STACK_FRAME("Main","safeDestroy",0x4e168398,"Main.safeDestroy","Main.hx",184,0x087e5c05)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_ARG(destroy,"destroy")
{
		HX_STACK_LINE(185)
		if (((obj == null()))){
			HX_STACK_LINE(185)
			return false;
		}
		HX_STACK_LINE(186)
		Dynamic objs;		HX_STACK_VAR(objs,"objs");
		HX_STACK_LINE(186)
		if ((::Std_obj::is(obj,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(186)
			objs = obj;
		}
		else{
			HX_STACK_LINE(186)
			objs = Dynamic( Array_obj<Dynamic>::__new().Add(obj));
		}
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(187)
			while((true)){
				HX_STACK_LINE(187)
				if ((!(((_g < objs->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(187)
					break;
				}
				HX_STACK_LINE(187)
				Dynamic o = objs->__GetItem(_g);		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(187)
				++(_g);
				HX_STACK_LINE(188)
				if (((o == null()))){
					HX_STACK_LINE(188)
					continue;
				}
				HX_STACK_LINE(189)
				if ((destroy)){
					HX_STACK_LINE(190)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(190)
						o->__Field(HX_CSTRING("destroy"),true)();
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e = __e;{
								HX_STACK_LINE(191)
								::String _g1 = ::Std_obj::string(o);		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(191)
								::String _g11 = (HX_CSTRING("[Error on object: ") + _g1);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(191)
								::String _g2 = (_g11 + HX_CSTRING(", {"));		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(191)
								::String _g3 = ::Std_obj::string(e);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(191)
								::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(191)
								::String _g5 = (_g4 + HX_CSTRING("}"));		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(191)
								::haxe::Log_obj::trace(_g5,hx::SourceInfo(HX_CSTRING("Main.hx"),191,HX_CSTRING("Main"),HX_CSTRING("safeDestroy")));
							}
						}
					}
				}
				HX_STACK_LINE(193)
				Dynamic parent = null();		HX_STACK_VAR(parent,"parent");
				HX_STACK_LINE(193)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(193)
					parent = o->__Field(HX_CSTRING("parent"),true);
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
							HX_STACK_LINE(193)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Main.hx"),193,HX_CSTRING("Main"),HX_CSTRING("safeDestroy")));
						}
					}
				}
				HX_STACK_LINE(194)
				if (((parent != null()))){
					HX_STACK_LINE(194)
					parent->__Field(HX_CSTRING("removeChild"),true)(o);
				}
			}
		}
		HX_STACK_LINE(196)
		return true;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Main_obj,safeDestroy,return )

bool Main_obj::safeRemove( Dynamic obj){
	HX_STACK_FRAME("Main","safeRemove",0x51a28366,"Main.safeRemove","Main.hx",200,0x087e5c05)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(200)
	return ::Main_obj::safeDestroy(obj,false);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Main_obj,safeRemove,return )


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(scene,"scene");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"safeRemove") ) { return safeRemove_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"safeDestroy") ) { return safeDestroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::com::gamestudiohx::babylonhx::Scene >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("inited"));
	outFields->push(HX_CSTRING("scene"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	HX_CSTRING("safeDestroy"),
	HX_CSTRING("safeRemove"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Main_obj,inited),HX_CSTRING("inited")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Scene*/ ,(int)offsetof(Main_obj,scene),HX_CSTRING("scene")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("inited"),
	HX_CSTRING("scene"),
	HX_CSTRING("resize"),
	HX_CSTRING("init"),
	HX_CSTRING("added"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
}

