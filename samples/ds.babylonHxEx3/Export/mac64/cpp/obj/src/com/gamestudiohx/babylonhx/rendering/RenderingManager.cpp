#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_SubMesh
#include <com/gamestudiohx/babylonhx/mesh/SubMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_particles_ParticleSystem
#include <com/gamestudiohx/babylonhx/particles/ParticleSystem.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_rendering_RenderingGroup
#include <com/gamestudiohx/babylonhx/rendering/RenderingGroup.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_rendering_RenderingManager
#include <com/gamestudiohx/babylonhx/rendering/RenderingManager.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_sprites_SpriteManager
#include <com/gamestudiohx/babylonhx/sprites/SpriteManager.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_SmartArray
#include <com/gamestudiohx/babylonhx/tools/SmartArray.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color4
#include <com/gamestudiohx/babylonhx/tools/math/Color4.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace rendering{

Void RenderingManager_obj::__construct(::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.rendering.RenderingManager","new",0xcdc5e127,"com.gamestudiohx.babylonhx.rendering.RenderingManager.new","com/gamestudiohx/babylonhx/rendering/RenderingManager.hx",27,0x394dfec7)
HX_STACK_THIS(this)
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(28)
	this->_scene = scene;
	HX_STACK_LINE(29)
	this->_renderingGroups = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(31)
	this->_depthBufferAlreadyCleaned = false;
}
;
	return null();
}

//RenderingManager_obj::~RenderingManager_obj() { }

Dynamic RenderingManager_obj::__CreateEmpty() { return  new RenderingManager_obj; }
hx::ObjectPtr< RenderingManager_obj > RenderingManager_obj::__new(::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< RenderingManager_obj > result = new RenderingManager_obj();
	result->__construct(scene);
	return result;}

Dynamic RenderingManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderingManager_obj > result = new RenderingManager_obj();
	result->__construct(inArgs[0]);
	return result;}

Void RenderingManager_obj::_renderParticles( int index,Array< ::Dynamic > activeMeshes){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.rendering.RenderingManager","_renderParticles",0xc34c9a91,"com.gamestudiohx.babylonhx.rendering.RenderingManager._renderParticles","com/gamestudiohx/babylonhx/rendering/RenderingManager.hx",35,0x394dfec7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(activeMeshes,"activeMeshes")
		HX_STACK_LINE(35)
		if (((this->_scene->_activeParticleSystems->length != (int)0))){
			HX_STACK_LINE(37)
			int beforeParticlesDate = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(beforeParticlesDate,"beforeParticlesDate");
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(38)
				int _g = this->_scene->_activeParticleSystems->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(38)
				while((true)){
					HX_STACK_LINE(38)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(38)
						break;
					}
					HX_STACK_LINE(38)
					int particleIndex = (_g1)++;		HX_STACK_VAR(particleIndex,"particleIndex");
					HX_STACK_LINE(39)
					::com::gamestudiohx::babylonhx::particles::ParticleSystem particleSystem = this->_scene->_activeParticleSystems->data->__GetItem(particleIndex);		HX_STACK_VAR(particleSystem,"particleSystem");
					HX_STACK_LINE(41)
					if (((particleSystem->renderingGroupId == index))){
						HX_STACK_LINE(42)
						this->_clearDepthBuffer();
						struct _Function_5_1{
							inline static bool Block( Array< ::Dynamic > &activeMeshes,::com::gamestudiohx::babylonhx::particles::ParticleSystem &particleSystem){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/rendering/RenderingManager.hx",44,0x394dfec7)
								{
									HX_STACK_LINE(44)
									int _g2 = ::Lambda_obj::indexOf(activeMeshes,particleSystem->emitter);		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(44)
									return (_g2 != (int)-1);
								}
								return null();
							}
						};
						HX_STACK_LINE(44)
						if (((  ((!(((bool(!(particleSystem->emitter->__Field(HX_CSTRING("position"),true))) || bool((activeMeshes != null()))))))) ? bool(_Function_5_1::Block(activeMeshes,particleSystem)) : bool(true) ))){
							HX_STACK_LINE(45)
							int _g11 = particleSystem->render();		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(45)
							hx::AddEq(this->_scene->_activeParticles,_g11);
						}
					}
				}
			}
			HX_STACK_LINE(49)
			int _g2 = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(49)
			int _g3 = (_g2 - beforeParticlesDate);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(49)
			hx::AddEq(this->_scene->_particlesDuration,_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RenderingManager_obj,_renderParticles,(void))

Void RenderingManager_obj::_renderSprites( int index){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.rendering.RenderingManager","_renderSprites",0xd04032f2,"com.gamestudiohx.babylonhx.rendering.RenderingManager._renderSprites","com/gamestudiohx/babylonhx/rendering/RenderingManager.hx",53,0x394dfec7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(54)
		if (((this->_scene->spriteManagers->length == (int)0))){
			HX_STACK_LINE(55)
			return null();
		}
		HX_STACK_LINE(59)
		int beforeSpritessDate = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(beforeSpritessDate,"beforeSpritessDate");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(60)
			int _g = this->_scene->spriteManagers->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(60)
				int id = (_g1)++;		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(61)
				::com::gamestudiohx::babylonhx::sprites::SpriteManager spriteManager = this->_scene->spriteManagers->__get(id).StaticCast< ::com::gamestudiohx::babylonhx::sprites::SpriteManager >();		HX_STACK_VAR(spriteManager,"spriteManager");
				HX_STACK_LINE(63)
				if (((spriteManager->renderingGroupId == index))){
					HX_STACK_LINE(64)
					this->_clearDepthBuffer();
					HX_STACK_LINE(65)
					spriteManager->render();
				}
			}
		}
		HX_STACK_LINE(68)
		int _g = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		int _g1 = (_g - beforeSpritessDate);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(68)
		hx::AddEq(this->_scene->_spritesDuration,_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderingManager_obj,_renderSprites,(void))

Void RenderingManager_obj::_clearDepthBuffer( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.rendering.RenderingManager","_clearDepthBuffer",0x6f2a9b3c,"com.gamestudiohx.babylonhx.rendering.RenderingManager._clearDepthBuffer","com/gamestudiohx/babylonhx/rendering/RenderingManager.hx",71,0x394dfec7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		if ((this->_depthBufferAlreadyCleaned)){
			HX_STACK_LINE(73)
			return null();
		}
		HX_STACK_LINE(76)
		::com::gamestudiohx::babylonhx::tools::math::Color4 _g = ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new((int)0,(int)0,(int)0,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		this->_scene->getEngine()->clear(_g,false,true);
		HX_STACK_LINE(77)
		this->_depthBufferAlreadyCleaned = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RenderingManager_obj,_clearDepthBuffer,(void))

Void RenderingManager_obj::render( Dynamic customRenderFunction,Array< ::Dynamic > activeMeshes,bool renderParticles,bool renderSprites){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.rendering.RenderingManager","render",0xc1ead0ef,"com.gamestudiohx.babylonhx.rendering.RenderingManager.render","com/gamestudiohx/babylonhx/rendering/RenderingManager.hx",80,0x394dfec7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(customRenderFunction,"customRenderFunction")
		HX_STACK_ARG(activeMeshes,"activeMeshes")
		HX_STACK_ARG(renderParticles,"renderParticles")
		HX_STACK_ARG(renderSprites,"renderSprites")
		HX_STACK_LINE(80)
		Array< bool > renderSprites1 = Array_obj< bool >::__new().Add(renderSprites);		HX_STACK_VAR(renderSprites1,"renderSprites1");
		HX_STACK_LINE(80)
		Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(81)
			int _g = ::com::gamestudiohx::babylonhx::rendering::RenderingManager_obj::MAX_RENDERINGGROUPS;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(81)
			while((true)){
				HX_STACK_LINE(81)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(81)
					break;
				}
				HX_STACK_LINE(81)
				Array< int > index = Array_obj< int >::__new().Add((_g1)++);		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(82)
				this->_depthBufferAlreadyCleaned = (index->__get((int)0) == (int)0);
				HX_STACK_LINE(83)
				::com::gamestudiohx::babylonhx::rendering::RenderingGroup renderingGroup = this->_renderingGroups->__get(index->__get((int)0)).StaticCast< ::com::gamestudiohx::babylonhx::rendering::RenderingGroup >();		HX_STACK_VAR(renderingGroup,"renderingGroup");
				HX_STACK_LINE(85)
				if (((renderingGroup != null()))){
					HX_STACK_LINE(86)
					this->_clearDepthBuffer();

					HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_4_1,Array< bool >,renderSprites1,Array< int >,index,Array< ::Dynamic >,_g2)
					Void run(){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","com/gamestudiohx/babylonhx/rendering/RenderingManager.hx",88,0x394dfec7)
						{
							HX_STACK_LINE(88)
							if ((renderSprites1->__get((int)0))){
								HX_STACK_LINE(89)
								_g2->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::rendering::RenderingManager >()->_renderSprites(index->__get((int)0));
							}
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(87)
					if ((!(renderingGroup->render(customRenderFunction, Dynamic(new _Function_4_1(renderSprites1,index,_g2)))))){
						HX_STACK_LINE(92)
						this->_renderingGroups->splice(index->__get((int)0),(int)1);
					}
				}
				else{
					HX_STACK_LINE(94)
					if ((renderSprites1->__get((int)0))){
						HX_STACK_LINE(95)
						this->_renderSprites(index->__get((int)0));
					}
				}
				HX_STACK_LINE(98)
				if ((renderParticles)){
					HX_STACK_LINE(99)
					if (((this->_scene->_activeParticleSystems->length != (int)0))){
						HX_STACK_LINE(99)
						int beforeParticlesDate = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(beforeParticlesDate,"beforeParticlesDate");
						HX_STACK_LINE(99)
						{
							HX_STACK_LINE(99)
							int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(99)
							int _g3 = this->_scene->_activeParticleSystems->length;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(99)
							while((true)){
								HX_STACK_LINE(99)
								if ((!(((_g11 < _g3))))){
									HX_STACK_LINE(99)
									break;
								}
								HX_STACK_LINE(99)
								int particleIndex = (_g11)++;		HX_STACK_VAR(particleIndex,"particleIndex");
								HX_STACK_LINE(99)
								::com::gamestudiohx::babylonhx::particles::ParticleSystem particleSystem = this->_scene->_activeParticleSystems->data->__GetItem(particleIndex);		HX_STACK_VAR(particleSystem,"particleSystem");
								HX_STACK_LINE(99)
								if (((particleSystem->renderingGroupId == index->__get((int)0)))){
									HX_STACK_LINE(99)
									this->_clearDepthBuffer();
									struct _Function_8_1{
										inline static bool Block( Array< ::Dynamic > &activeMeshes,::com::gamestudiohx::babylonhx::particles::ParticleSystem &particleSystem){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/rendering/RenderingManager.hx",99,0x394dfec7)
											{
												HX_STACK_LINE(99)
												int _g4 = ::Lambda_obj::indexOf(activeMeshes,particleSystem->emitter);		HX_STACK_VAR(_g4,"_g4");
												HX_STACK_LINE(99)
												return (_g4 != (int)-1);
											}
											return null();
										}
									};
									HX_STACK_LINE(99)
									if (((  ((!(((bool(!(particleSystem->emitter->__Field(HX_CSTRING("position"),true))) || bool((activeMeshes != null()))))))) ? bool(_Function_8_1::Block(activeMeshes,particleSystem)) : bool(true) ))){
										HX_STACK_LINE(99)
										int _g12 = particleSystem->render();		HX_STACK_VAR(_g12,"_g12");
										HX_STACK_LINE(99)
										hx::AddEq(this->_scene->_activeParticles,_g12);
									}
								}
							}
						}
						HX_STACK_LINE(99)
						int _g21 = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(99)
						int _g3 = (_g21 - beforeParticlesDate);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(99)
						hx::AddEq(this->_scene->_particlesDuration,_g3);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(RenderingManager_obj,render,(void))

Void RenderingManager_obj::reset( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.rendering.RenderingManager","reset",0x81755a56,"com.gamestudiohx.babylonhx.rendering.RenderingManager.reset","com/gamestudiohx/babylonhx/rendering/RenderingManager.hx",105,0x394dfec7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(105)
		Array< ::Dynamic > _g1 = this->_renderingGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(105)
		while((true)){
			HX_STACK_LINE(105)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(105)
				break;
			}
			HX_STACK_LINE(105)
			::com::gamestudiohx::babylonhx::rendering::RenderingGroup renderingGroup = _g1->__get(_g).StaticCast< ::com::gamestudiohx::babylonhx::rendering::RenderingGroup >();		HX_STACK_VAR(renderingGroup,"renderingGroup");
			HX_STACK_LINE(105)
			++(_g);
			HX_STACK_LINE(106)
			renderingGroup->prepare();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RenderingManager_obj,reset,(void))

Void RenderingManager_obj::dispatch( ::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.rendering.RenderingManager","dispatch",0x9a7c8c93,"com.gamestudiohx.babylonhx.rendering.RenderingManager.dispatch","com/gamestudiohx/babylonhx/rendering/RenderingManager.hx",110,0x394dfec7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(subMesh,"subMesh")
		HX_STACK_LINE(111)
		::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh = subMesh->getMesh();		HX_STACK_VAR(mesh,"mesh");
		HX_STACK_LINE(112)
		int renderingGroupId = mesh->renderingGroupId;		HX_STACK_VAR(renderingGroupId,"renderingGroupId");
		HX_STACK_LINE(114)
		if (((this->_renderingGroups->length <= renderingGroupId))){
			HX_STACK_LINE(115)
			this->_renderingGroups[renderingGroupId] = ::com::gamestudiohx::babylonhx::rendering::RenderingGroup_obj::__new(renderingGroupId,this->_scene);
		}
		HX_STACK_LINE(118)
		this->_renderingGroups->__get(renderingGroupId).StaticCast< ::com::gamestudiohx::babylonhx::rendering::RenderingGroup >()->dispatch(subMesh);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderingManager_obj,dispatch,(void))

int RenderingManager_obj::MAX_RENDERINGGROUPS;


RenderingManager_obj::RenderingManager_obj()
{
}

void RenderingManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderingManager);
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_renderingGroups,"_renderingGroups");
	HX_MARK_MEMBER_NAME(_depthBufferAlreadyCleaned,"_depthBufferAlreadyCleaned");
	HX_MARK_END_CLASS();
}

void RenderingManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_renderingGroups,"_renderingGroups");
	HX_VISIT_MEMBER_NAME(_depthBufferAlreadyCleaned,"_depthBufferAlreadyCleaned");
}

Dynamic RenderingManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_renderSprites") ) { return _renderSprites_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_renderingGroups") ) { return _renderingGroups; }
		if (HX_FIELD_EQ(inName,"_renderParticles") ) { return _renderParticles_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_clearDepthBuffer") ) { return _clearDepthBuffer_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"MAX_RENDERINGGROUPS") ) { return MAX_RENDERINGGROUPS; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_depthBufferAlreadyCleaned") ) { return _depthBufferAlreadyCleaned; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderingManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::gamestudiohx::babylonhx::Scene >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_renderingGroups") ) { _renderingGroups=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"MAX_RENDERINGGROUPS") ) { MAX_RENDERINGGROUPS=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_depthBufferAlreadyCleaned") ) { _depthBufferAlreadyCleaned=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderingManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("_renderingGroups"));
	outFields->push(HX_CSTRING("_depthBufferAlreadyCleaned"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MAX_RENDERINGGROUPS"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Scene*/ ,(int)offsetof(RenderingManager_obj,_scene),HX_CSTRING("_scene")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RenderingManager_obj,_renderingGroups),HX_CSTRING("_renderingGroups")},
	{hx::fsBool,(int)offsetof(RenderingManager_obj,_depthBufferAlreadyCleaned),HX_CSTRING("_depthBufferAlreadyCleaned")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_scene"),
	HX_CSTRING("_renderingGroups"),
	HX_CSTRING("_depthBufferAlreadyCleaned"),
	HX_CSTRING("_renderParticles"),
	HX_CSTRING("_renderSprites"),
	HX_CSTRING("_clearDepthBuffer"),
	HX_CSTRING("render"),
	HX_CSTRING("reset"),
	HX_CSTRING("dispatch"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderingManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RenderingManager_obj::MAX_RENDERINGGROUPS,"MAX_RENDERINGGROUPS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderingManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RenderingManager_obj::MAX_RENDERINGGROUPS,"MAX_RENDERINGGROUPS");
};

#endif

Class RenderingManager_obj::__mClass;

void RenderingManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.rendering.RenderingManager"), hx::TCanCast< RenderingManager_obj> ,sStaticFields,sMemberFields,
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

void RenderingManager_obj::__boot()
{
	MAX_RENDERINGGROUPS= (int)4;
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace rendering
