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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_textures_BabylonTexture
#include <com/gamestudiohx/babylonhx/materials/textures/BabylonTexture.h>
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
namespace materials{
namespace textures{

Void RenderTargetTexture_obj::__construct(::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,bool generateMipMaps)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture","new",0xb7ff0664,"com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture.new","com/gamestudiohx/babylonhx/materials/textures/RenderTargetTexture.hx",34,0x0c494deb)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(size,"size")
HX_STACK_ARG(scene,"scene")
HX_STACK_ARG(generateMipMaps,"generateMipMaps")
{
	HX_STACK_LINE(35)
	this->_generateMipMaps = generateMipMaps;
	HX_STACK_LINE(37)
	::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture _g = scene->getEngine()->createRenderTargetTexture(size,generateMipMaps);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(37)
	this->_texture = _g;
	HX_STACK_LINE(39)
	super::__construct(name,scene,generateMipMaps,null());
	HX_STACK_LINE(42)
	this->renderList = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(45)
	::com::gamestudiohx::babylonhx::rendering::RenderingManager _g1 = ::com::gamestudiohx::babylonhx::rendering::RenderingManager_obj::__new(scene);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(45)
	this->_renderingManager = _g1;
}
;
	return null();
}

//RenderTargetTexture_obj::~RenderTargetTexture_obj() { }

Dynamic RenderTargetTexture_obj::__CreateEmpty() { return  new RenderTargetTexture_obj; }
hx::ObjectPtr< RenderTargetTexture_obj > RenderTargetTexture_obj::__new(::String name,Float size,::com::gamestudiohx::babylonhx::Scene scene,bool generateMipMaps)
{  hx::ObjectPtr< RenderTargetTexture_obj > result = new RenderTargetTexture_obj();
	result->__construct(name,size,scene,generateMipMaps);
	return result;}

Dynamic RenderTargetTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderTargetTexture_obj > result = new RenderTargetTexture_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void RenderTargetTexture_obj::resize( Float size,bool generateMipMaps){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture","resize",0xe1dabe70,"com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture.resize","com/gamestudiohx/babylonhx/materials/textures/RenderTargetTexture.hx",48,0x0c494deb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(generateMipMaps,"generateMipMaps")
		HX_STACK_LINE(49)
		this->releaseInternalTexture();
		HX_STACK_LINE(50)
		::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture _g = this->_scene->getEngine()->createRenderTargetTexture(size,generateMipMaps);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		this->_texture = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RenderTargetTexture_obj,resize,(void))

Void RenderTargetTexture_obj::render( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture","render",0xde88cfd2,"com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture.render","com/gamestudiohx/babylonhx/materials/textures/RenderTargetTexture.hx",53,0x0c494deb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		if (((this->onBeforeRender_dyn() != null()))){
			HX_STACK_LINE(55)
			this->onBeforeRender();
		}
		HX_STACK_LINE(58)
		::com::gamestudiohx::babylonhx::Scene scene = this->_scene;		HX_STACK_VAR(scene,"scene");
		HX_STACK_LINE(59)
		::com::gamestudiohx::babylonhx::Engine engine = scene->getEngine();		HX_STACK_VAR(engine,"engine");
		HX_STACK_LINE(61)
		if (((this->_waitingRenderList != null()))){
			HX_STACK_LINE(62)
			this->renderList = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(63)
				int _g = this->_waitingRenderList->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(63)
				while((true)){
					HX_STACK_LINE(63)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(63)
						break;
					}
					HX_STACK_LINE(63)
					int index = (_g1)++;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(64)
					::String id = this->_waitingRenderList->__get(index);		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(65)
					::com::gamestudiohx::babylonhx::mesh::AbstractMesh _g2 = this->_scene->getMeshByID(id);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(65)
					this->renderList->push(_g2);
				}
			}
			HX_STACK_LINE(68)
			this->_waitingRenderList = null();
		}
		HX_STACK_LINE(71)
		if (((bool((this->renderList == null())) || bool((this->renderList->length == (int)0))))){
			HX_STACK_LINE(72)
			if (((this->onAfterRender_dyn() != null()))){
				HX_STACK_LINE(73)
				this->onAfterRender();
			}
		}
		else{
			HX_STACK_LINE(77)
			engine->bindFramebuffer(this->_texture);
			HX_STACK_LINE(80)
			engine->clear(scene->clearColor,true,true);
			HX_STACK_LINE(82)
			this->_renderingManager->reset();
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(84)
				int _g = this->renderList->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(84)
				while((true)){
					HX_STACK_LINE(84)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(84)
						break;
					}
					HX_STACK_LINE(84)
					int meshIndex = (_g1)++;		HX_STACK_VAR(meshIndex,"meshIndex");
					HX_STACK_LINE(85)
					::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh = this->renderList->__get(meshIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >();		HX_STACK_VAR(mesh,"mesh");
					HX_STACK_LINE(87)
					if (((  (((  (((mesh != null()))) ? bool(mesh->isEnabled()) : bool(false) ))) ? bool(mesh->isVisible) : bool(false) ))){
						HX_STACK_LINE(88)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(88)
						int _g2 = mesh->subMeshes->length;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(88)
						while((true)){
							HX_STACK_LINE(88)
							if ((!(((_g3 < _g2))))){
								HX_STACK_LINE(88)
								break;
							}
							HX_STACK_LINE(88)
							int subIndex = (_g3)++;		HX_STACK_VAR(subIndex,"subIndex");
							HX_STACK_LINE(89)
							::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = mesh->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
							HX_STACK_LINE(90)
							hx::AddEq(scene->_activeVertices,subMesh->verticesCount);
							HX_STACK_LINE(91)
							{
								HX_STACK_LINE(91)
								::com::gamestudiohx::babylonhx::rendering::RenderingManager _this = this->_renderingManager;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(91)
								::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh1 = subMesh->getMesh();		HX_STACK_VAR(mesh1,"mesh1");
								HX_STACK_LINE(91)
								int renderingGroupId = mesh1->renderingGroupId;		HX_STACK_VAR(renderingGroupId,"renderingGroupId");
								HX_STACK_LINE(91)
								if (((_this->_renderingGroups->length <= renderingGroupId))){
									HX_STACK_LINE(91)
									_this->_renderingGroups[renderingGroupId] = ::com::gamestudiohx::babylonhx::rendering::RenderingGroup_obj::__new(renderingGroupId,_this->_scene);
								}
								HX_STACK_LINE(91)
								_this->_renderingGroups->__get(renderingGroupId).StaticCast< ::com::gamestudiohx::babylonhx::rendering::RenderingGroup >()->dispatch(subMesh);
							}
						}
					}
				}
			}
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				::com::gamestudiohx::babylonhx::rendering::RenderingManager _this = this->_renderingManager;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(97)
				Dynamic customRenderFunction = this->customRenderFunction;		HX_STACK_VAR(customRenderFunction,"customRenderFunction");
				HX_STACK_LINE(97)
				Array< ::Dynamic > activeMeshes = this->renderList;		HX_STACK_VAR(activeMeshes,"activeMeshes");
				HX_STACK_LINE(97)
				bool renderParticles = this->renderParticles;		HX_STACK_VAR(renderParticles,"renderParticles");
				HX_STACK_LINE(97)
				Array< bool > renderSprites = Array_obj< bool >::__new().Add(this->renderSprites);		HX_STACK_VAR(renderSprites,"renderSprites");
				HX_STACK_LINE(97)
				Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new().Add(_this);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(97)
				{
					HX_STACK_LINE(97)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(97)
					int _g = ::com::gamestudiohx::babylonhx::rendering::RenderingManager_obj::MAX_RENDERINGGROUPS;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(97)
					while((true)){
						HX_STACK_LINE(97)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(97)
							break;
						}
						HX_STACK_LINE(97)
						Array< int > index = Array_obj< int >::__new().Add((_g1)++);		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(97)
						_this->_depthBufferAlreadyCleaned = (index->__get((int)0) == (int)0);
						HX_STACK_LINE(97)
						::com::gamestudiohx::babylonhx::rendering::RenderingGroup renderingGroup = _this->_renderingGroups->__get(index->__get((int)0)).StaticCast< ::com::gamestudiohx::babylonhx::rendering::RenderingGroup >();		HX_STACK_VAR(renderingGroup,"renderingGroup");
						HX_STACK_LINE(97)
						if (((renderingGroup != null()))){
							HX_STACK_LINE(97)
							_this->_clearDepthBuffer();

							HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_6_1,Array< int >,index,Array< ::Dynamic >,_g2,Array< bool >,renderSprites)
							Void run(){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","com/gamestudiohx/babylonhx/materials/textures/RenderTargetTexture.hx",97,0x0c494deb)
								{
									HX_STACK_LINE(97)
									if ((renderSprites->__get((int)0))){
										HX_STACK_LINE(97)
										_g2->__get((int)0).StaticCast< ::com::gamestudiohx::babylonhx::rendering::RenderingManager >()->_renderSprites(index->__get((int)0));
									}
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(97)
							if ((!(renderingGroup->render(customRenderFunction, Dynamic(new _Function_6_1(index,_g2,renderSprites)))))){
								HX_STACK_LINE(97)
								_this->_renderingGroups->splice(index->__get((int)0),(int)1);
							}
						}
						else{
							HX_STACK_LINE(97)
							if ((renderSprites->__get((int)0))){
								HX_STACK_LINE(97)
								_this->_renderSprites(index->__get((int)0));
							}
						}
						HX_STACK_LINE(97)
						if ((renderParticles)){
							HX_STACK_LINE(97)
							if (((_this->_scene->_activeParticleSystems->length != (int)0))){
								HX_STACK_LINE(97)
								int beforeParticlesDate = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(beforeParticlesDate,"beforeParticlesDate");
								HX_STACK_LINE(97)
								{
									HX_STACK_LINE(97)
									int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(97)
									int _g3 = _this->_scene->_activeParticleSystems->length;		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(97)
									while((true)){
										HX_STACK_LINE(97)
										if ((!(((_g11 < _g3))))){
											HX_STACK_LINE(97)
											break;
										}
										HX_STACK_LINE(97)
										int particleIndex = (_g11)++;		HX_STACK_VAR(particleIndex,"particleIndex");
										HX_STACK_LINE(97)
										::com::gamestudiohx::babylonhx::particles::ParticleSystem particleSystem = _this->_scene->_activeParticleSystems->data->__GetItem(particleIndex);		HX_STACK_VAR(particleSystem,"particleSystem");
										HX_STACK_LINE(97)
										if (((particleSystem->renderingGroupId == index->__get((int)0)))){
											HX_STACK_LINE(97)
											_this->_clearDepthBuffer();
											struct _Function_10_1{
												inline static bool Block( Array< ::Dynamic > &activeMeshes,::com::gamestudiohx::babylonhx::particles::ParticleSystem &particleSystem){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/materials/textures/RenderTargetTexture.hx",97,0x0c494deb)
													{
														HX_STACK_LINE(97)
														int _g12 = ::Lambda_obj::indexOf(activeMeshes,particleSystem->emitter);		HX_STACK_VAR(_g12,"_g12");
														HX_STACK_LINE(97)
														return (_g12 != (int)-1);
													}
													return null();
												}
											};
											HX_STACK_LINE(97)
											if (((  ((!(((bool(!(particleSystem->emitter->__Field(HX_CSTRING("position"),true))) || bool((activeMeshes != null()))))))) ? bool(_Function_10_1::Block(activeMeshes,particleSystem)) : bool(true) ))){
												HX_STACK_LINE(97)
												int _g21 = particleSystem->render();		HX_STACK_VAR(_g21,"_g21");
												HX_STACK_LINE(97)
												hx::AddEq(_this->_scene->_activeParticles,_g21);
											}
										}
									}
								}
								HX_STACK_LINE(97)
								int _g3 = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(97)
								int _g4 = (_g3 - beforeParticlesDate);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(97)
								hx::AddEq(_this->_scene->_particlesDuration,_g4);
							}
						}
					}
				}
			}
			HX_STACK_LINE(100)
			engine->unBindFramebuffer(this->_texture);
			HX_STACK_LINE(102)
			if (((this->onAfterRender_dyn() != null()))){
				HX_STACK_LINE(103)
				this->onAfterRender();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RenderTargetTexture_obj,render,(void))

::com::gamestudiohx::babylonhx::materials::textures::Texture RenderTargetTexture_obj::clone( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture","clone",0xa9cad261,"com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture.clone","com/gamestudiohx/babylonhx/materials/textures/RenderTargetTexture.hx",108,0x0c494deb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	Dynamic textureSize = this->getSize();		HX_STACK_VAR(textureSize,"textureSize");
	HX_STACK_LINE(110)
	::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture newTexture = ::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture_obj::__new(this->name,textureSize->__Field(HX_CSTRING("width"),true),this->_scene,this->_generateMipMaps);		HX_STACK_VAR(newTexture,"newTexture");
	HX_STACK_LINE(113)
	newTexture->hasAlpha = this->hasAlpha;
	HX_STACK_LINE(114)
	newTexture->level = this->level;
	HX_STACK_LINE(117)
	newTexture->coordinatesMode = this->coordinatesMode;
	HX_STACK_LINE(118)
	Array< ::Dynamic > _g = this->renderList->copy();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(118)
	newTexture->renderList = _g;
	HX_STACK_LINE(120)
	return newTexture;
}



RenderTargetTexture_obj::RenderTargetTexture_obj()
{
}

void RenderTargetTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderTargetTexture);
	HX_MARK_MEMBER_NAME(_generateMipMaps,"_generateMipMaps");
	HX_MARK_MEMBER_NAME(_renderingManager,"_renderingManager");
	HX_MARK_MEMBER_NAME(renderList,"renderList");
	HX_MARK_MEMBER_NAME(renderParticles,"renderParticles");
	HX_MARK_MEMBER_NAME(renderSprites,"renderSprites");
	HX_MARK_MEMBER_NAME(isRenderTarget,"isRenderTarget");
	HX_MARK_MEMBER_NAME(customRenderFunction,"customRenderFunction");
	HX_MARK_MEMBER_NAME(onBeforeRender,"onBeforeRender");
	HX_MARK_MEMBER_NAME(onAfterRender,"onAfterRender");
	HX_MARK_MEMBER_NAME(_waitingRenderList,"_waitingRenderList");
	::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RenderTargetTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_generateMipMaps,"_generateMipMaps");
	HX_VISIT_MEMBER_NAME(_renderingManager,"_renderingManager");
	HX_VISIT_MEMBER_NAME(renderList,"renderList");
	HX_VISIT_MEMBER_NAME(renderParticles,"renderParticles");
	HX_VISIT_MEMBER_NAME(renderSprites,"renderSprites");
	HX_VISIT_MEMBER_NAME(isRenderTarget,"isRenderTarget");
	HX_VISIT_MEMBER_NAME(customRenderFunction,"customRenderFunction");
	HX_VISIT_MEMBER_NAME(onBeforeRender,"onBeforeRender");
	HX_VISIT_MEMBER_NAME(onAfterRender,"onAfterRender");
	HX_VISIT_MEMBER_NAME(_waitingRenderList,"_waitingRenderList");
	::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::__Visit(HX_VISIT_ARG);
}

Dynamic RenderTargetTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderList") ) { return renderList; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSprites") ) { return renderSprites; }
		if (HX_FIELD_EQ(inName,"onAfterRender") ) { return onAfterRender; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isRenderTarget") ) { return isRenderTarget; }
		if (HX_FIELD_EQ(inName,"onBeforeRender") ) { return onBeforeRender; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderParticles") ) { return renderParticles; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_generateMipMaps") ) { return _generateMipMaps; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_renderingManager") ) { return _renderingManager; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_waitingRenderList") ) { return _waitingRenderList; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"customRenderFunction") ) { return customRenderFunction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderTargetTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"renderList") ) { renderList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSprites") ) { renderSprites=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onAfterRender") ) { onAfterRender=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isRenderTarget") ) { isRenderTarget=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onBeforeRender") ) { onBeforeRender=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderParticles") ) { renderParticles=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_generateMipMaps") ) { _generateMipMaps=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_renderingManager") ) { _renderingManager=inValue.Cast< ::com::gamestudiohx::babylonhx::rendering::RenderingManager >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_waitingRenderList") ) { _waitingRenderList=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"customRenderFunction") ) { customRenderFunction=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderTargetTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_generateMipMaps"));
	outFields->push(HX_CSTRING("_renderingManager"));
	outFields->push(HX_CSTRING("renderList"));
	outFields->push(HX_CSTRING("renderParticles"));
	outFields->push(HX_CSTRING("renderSprites"));
	outFields->push(HX_CSTRING("isRenderTarget"));
	outFields->push(HX_CSTRING("customRenderFunction"));
	outFields->push(HX_CSTRING("_waitingRenderList"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(RenderTargetTexture_obj,_generateMipMaps),HX_CSTRING("_generateMipMaps")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::rendering::RenderingManager*/ ,(int)offsetof(RenderTargetTexture_obj,_renderingManager),HX_CSTRING("_renderingManager")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RenderTargetTexture_obj,renderList),HX_CSTRING("renderList")},
	{hx::fsBool,(int)offsetof(RenderTargetTexture_obj,renderParticles),HX_CSTRING("renderParticles")},
	{hx::fsBool,(int)offsetof(RenderTargetTexture_obj,renderSprites),HX_CSTRING("renderSprites")},
	{hx::fsBool,(int)offsetof(RenderTargetTexture_obj,isRenderTarget),HX_CSTRING("isRenderTarget")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RenderTargetTexture_obj,customRenderFunction),HX_CSTRING("customRenderFunction")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RenderTargetTexture_obj,onBeforeRender),HX_CSTRING("onBeforeRender")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RenderTargetTexture_obj,onAfterRender),HX_CSTRING("onAfterRender")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(RenderTargetTexture_obj,_waitingRenderList),HX_CSTRING("_waitingRenderList")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_generateMipMaps"),
	HX_CSTRING("_renderingManager"),
	HX_CSTRING("renderList"),
	HX_CSTRING("renderParticles"),
	HX_CSTRING("renderSprites"),
	HX_CSTRING("isRenderTarget"),
	HX_CSTRING("customRenderFunction"),
	HX_CSTRING("onBeforeRender"),
	HX_CSTRING("onAfterRender"),
	HX_CSTRING("_waitingRenderList"),
	HX_CSTRING("resize"),
	HX_CSTRING("render"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderTargetTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderTargetTexture_obj::__mClass,"__mClass");
};

#endif

Class RenderTargetTexture_obj::__mClass;

void RenderTargetTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture"), hx::TCanCast< RenderTargetTexture_obj> ,sStaticFields,sMemberFields,
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

void RenderTargetTexture_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials
} // end namespace textures
