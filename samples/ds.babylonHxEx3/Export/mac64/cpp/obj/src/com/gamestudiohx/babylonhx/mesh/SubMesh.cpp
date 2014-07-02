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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Scene
#include <com/gamestudiohx/babylonhx/Scene.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_collisions_Collider
#include <com/gamestudiohx/babylonhx/collisions/Collider.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingBox
#include <com/gamestudiohx/babylonhx/culling/BoundingBox.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingInfo
#include <com/gamestudiohx/babylonhx/culling/BoundingInfo.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Material
#include <com/gamestudiohx/babylonhx/materials/Material.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_MultiMaterial
#include <com/gamestudiohx/babylonhx/materials/MultiMaterial.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_StandardMaterial
#include <com/gamestudiohx/babylonhx/materials/StandardMaterial.h>
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
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_SubMesh
#include <com/gamestudiohx/babylonhx/mesh/SubMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_VertexBuffer
#include <com/gamestudiohx/babylonhx/mesh/VertexBuffer.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Plane
#include <com/gamestudiohx/babylonhx/tools/math/Plane.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Ray
#include <com/gamestudiohx/babylonhx/tools/math/Ray.h>
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

Void SubMesh_obj::__construct(int materialIndex,int verticesStart,int verticesCount,int indexStart,int indexCount,::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh,::com::gamestudiohx::babylonhx::mesh::Mesh renderingMesh,hx::Null< bool >  __o_createBoundingBox)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.SubMesh","new",0x72b4b610,"com.gamestudiohx.babylonhx.mesh.SubMesh.new","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",43,0x2e02d060)
HX_STACK_THIS(this)
HX_STACK_ARG(materialIndex,"materialIndex")
HX_STACK_ARG(verticesStart,"verticesStart")
HX_STACK_ARG(verticesCount,"verticesCount")
HX_STACK_ARG(indexStart,"indexStart")
HX_STACK_ARG(indexCount,"indexCount")
HX_STACK_ARG(mesh,"mesh")
HX_STACK_ARG(renderingMesh,"renderingMesh")
HX_STACK_ARG(__o_createBoundingBox,"createBoundingBox")
bool createBoundingBox = __o_createBoundingBox.Default(false);
{
	HX_STACK_LINE(44)
	this->_mesh = mesh;
	HX_STACK_LINE(46)
	if (((renderingMesh != null()))){
		HX_STACK_LINE(47)
		this->_renderingMesh = renderingMesh;
	}
	else{
		HX_STACK_LINE(49)
		::com::gamestudiohx::babylonhx::mesh::Mesh _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		_g = hx::TCast< com::gamestudiohx::babylonhx::mesh::Mesh >::cast(mesh);
		HX_STACK_LINE(49)
		this->_renderingMesh = _g;
	}
	HX_STACK_LINE(51)
	mesh->subMeshes->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(52)
	this->materialIndex = materialIndex;
	HX_STACK_LINE(53)
	this->verticesStart = verticesStart;
	HX_STACK_LINE(54)
	this->verticesCount = verticesCount;
	HX_STACK_LINE(55)
	this->indexStart = indexStart;
	HX_STACK_LINE(56)
	this->indexCount = indexCount;
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		Array< Float > data = this->_renderingMesh->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(58)
		if (((data != null()))){
			HX_STACK_LINE(58)
			Dynamic extend;		HX_STACK_VAR(extend,"extend");
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				int start = this->verticesStart;		HX_STACK_VAR(start,"start");
				HX_STACK_LINE(58)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(minimum,"minimum");
				HX_STACK_LINE(58)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY);		HX_STACK_VAR(maximum,"maximum");
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					int _g1 = start;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(58)
					int _g = (start + this->verticesCount);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(58)
					while((true)){
						HX_STACK_LINE(58)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(58)
							break;
						}
						HX_STACK_LINE(58)
						int index = (_g1)++;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(58)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 current = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data->__get((index * (int)3)),data->__get(((index * (int)3) + (int)1)),data->__get(((index * (int)3) + (int)2)));		HX_STACK_VAR(current,"current");
						HX_STACK_LINE(58)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(58)
						{
							HX_STACK_LINE(58)
							Float x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(58)
							if (((current->x < minimum->x))){
								HX_STACK_LINE(58)
								x = current->x;
							}
							else{
								HX_STACK_LINE(58)
								x = minimum->x;
							}
							HX_STACK_LINE(58)
							Float y;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(58)
							if (((current->y < minimum->y))){
								HX_STACK_LINE(58)
								y = current->y;
							}
							else{
								HX_STACK_LINE(58)
								y = minimum->y;
							}
							HX_STACK_LINE(58)
							Float z;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(58)
							if (((current->z < minimum->z))){
								HX_STACK_LINE(58)
								z = current->z;
							}
							else{
								HX_STACK_LINE(58)
								z = minimum->z;
							}
							HX_STACK_LINE(58)
							_g11 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
						}
						HX_STACK_LINE(58)
						minimum = _g11;
						HX_STACK_LINE(58)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(58)
						{
							HX_STACK_LINE(58)
							Float x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(58)
							if (((current->x > maximum->x))){
								HX_STACK_LINE(58)
								x = current->x;
							}
							else{
								HX_STACK_LINE(58)
								x = maximum->x;
							}
							HX_STACK_LINE(58)
							Float y;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(58)
							if (((current->y > maximum->y))){
								HX_STACK_LINE(58)
								y = current->y;
							}
							else{
								HX_STACK_LINE(58)
								y = maximum->y;
							}
							HX_STACK_LINE(58)
							Float z;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(58)
							if (((current->z > maximum->z))){
								HX_STACK_LINE(58)
								z = current->z;
							}
							else{
								HX_STACK_LINE(58)
								z = maximum->z;
							}
							HX_STACK_LINE(58)
							_g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
						}
						HX_STACK_LINE(58)
						maximum = _g2;
					}
				}
				struct _Function_4_1{
					inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 &maximum){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",58,0x2e02d060)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("minimum") , minimum,false);
							__result->Add(HX_CSTRING("maximum") , maximum,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(58)
				extend = _Function_4_1::Block(minimum,maximum);
			}
			HX_STACK_LINE(58)
			::com::gamestudiohx::babylonhx::culling::BoundingInfo _g3 = ::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__new(extend->__Field(HX_CSTRING("minimum"),true),extend->__Field(HX_CSTRING("maximum"),true));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(58)
			this->_boundingInfo = _g3;
		}
	}
}
;
	return null();
}

//SubMesh_obj::~SubMesh_obj() { }

Dynamic SubMesh_obj::__CreateEmpty() { return  new SubMesh_obj; }
hx::ObjectPtr< SubMesh_obj > SubMesh_obj::__new(int materialIndex,int verticesStart,int verticesCount,int indexStart,int indexCount,::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh,::com::gamestudiohx::babylonhx::mesh::Mesh renderingMesh,hx::Null< bool >  __o_createBoundingBox)
{  hx::ObjectPtr< SubMesh_obj > result = new SubMesh_obj();
	result->__construct(materialIndex,verticesStart,verticesCount,indexStart,indexCount,mesh,renderingMesh,__o_createBoundingBox);
	return result;}

Dynamic SubMesh_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SubMesh_obj > result = new SubMesh_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

::com::gamestudiohx::babylonhx::mesh::Mesh SubMesh_obj::getRenderingMesh( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.SubMesh","getRenderingMesh",0x9821dd33,"com.gamestudiohx.babylonhx.mesh.SubMesh.getRenderingMesh","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",62,0x2e02d060)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return this->_renderingMesh;
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,getRenderingMesh,return )

::com::gamestudiohx::babylonhx::culling::BoundingInfo SubMesh_obj::getBoundingInfo( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.SubMesh","getBoundingInfo",0x3b7f8158,"com.gamestudiohx.babylonhx.mesh.SubMesh.getBoundingInfo","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",66,0x2e02d060)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	return this->_boundingInfo;
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,getBoundingInfo,return )

::com::gamestudiohx::babylonhx::mesh::AbstractMesh SubMesh_obj::getMesh( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.SubMesh","getMesh",0x56997753,"com.gamestudiohx.babylonhx.mesh.SubMesh.getMesh","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",70,0x2e02d060)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	return this->_mesh;
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,getMesh,return )

Dynamic SubMesh_obj::getMaterial( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.SubMesh","getMaterial",0xe1df350d,"com.gamestudiohx.babylonhx.mesh.SubMesh.getMaterial","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",73,0x2e02d060)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	Dynamic rootMaterial = this->_renderingMesh->material;		HX_STACK_VAR(rootMaterial,"rootMaterial");
	HX_STACK_LINE(76)
	if (((  (((rootMaterial != null()))) ? bool(::Std_obj::is(rootMaterial,hx::ClassOf< ::com::gamestudiohx::babylonhx::materials::MultiMaterial >())) : bool(false) ))){
		HX_STACK_LINE(77)
		return rootMaterial->__Field(HX_CSTRING("getSubMaterial"),true)(this->materialIndex);
	}
	HX_STACK_LINE(80)
	if (((rootMaterial == null()))){
		HX_STACK_LINE(81)
		return this->_mesh->_scene->defaultMaterial;
	}
	HX_STACK_LINE(84)
	return rootMaterial;
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,getMaterial,return )

Void SubMesh_obj::refreshBoundingInfo( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.SubMesh","refreshBoundingInfo",0x81b5c61d,"com.gamestudiohx.babylonhx.mesh.SubMesh.refreshBoundingInfo","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",87,0x2e02d060)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		Array< Float > data = this->_renderingMesh->getVerticesData(::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::PositionKind);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(90)
		if (((data != null()))){
			HX_STACK_LINE(91)
			Dynamic extend;		HX_STACK_VAR(extend,"extend");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				int start = this->verticesStart;		HX_STACK_VAR(start,"start");
				HX_STACK_LINE(91)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 minimum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(minimum,"minimum");
				HX_STACK_LINE(91)
				::com::gamestudiohx::babylonhx::tools::math::Vector3 maximum = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY,::Math_obj::NEGATIVE_INFINITY);		HX_STACK_VAR(maximum,"maximum");
				HX_STACK_LINE(91)
				{
					HX_STACK_LINE(91)
					int _g1 = start;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(91)
					int _g = (start + this->verticesCount);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(91)
					while((true)){
						HX_STACK_LINE(91)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(91)
							break;
						}
						HX_STACK_LINE(91)
						int index = (_g1)++;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(91)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 current = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(data->__get((index * (int)3)),data->__get(((index * (int)3) + (int)1)),data->__get(((index * (int)3) + (int)2)));		HX_STACK_VAR(current,"current");
						HX_STACK_LINE(91)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(91)
						{
							HX_STACK_LINE(91)
							Float x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(91)
							if (((current->x < minimum->x))){
								HX_STACK_LINE(91)
								x = current->x;
							}
							else{
								HX_STACK_LINE(91)
								x = minimum->x;
							}
							HX_STACK_LINE(91)
							Float y;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(91)
							if (((current->y < minimum->y))){
								HX_STACK_LINE(91)
								y = current->y;
							}
							else{
								HX_STACK_LINE(91)
								y = minimum->y;
							}
							HX_STACK_LINE(91)
							Float z;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(91)
							if (((current->z < minimum->z))){
								HX_STACK_LINE(91)
								z = current->z;
							}
							else{
								HX_STACK_LINE(91)
								z = minimum->z;
							}
							HX_STACK_LINE(91)
							_g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
						}
						HX_STACK_LINE(91)
						minimum = _g2;
						HX_STACK_LINE(91)
						::com::gamestudiohx::babylonhx::tools::math::Vector3 _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(91)
						{
							HX_STACK_LINE(91)
							Float x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(91)
							if (((current->x > maximum->x))){
								HX_STACK_LINE(91)
								x = current->x;
							}
							else{
								HX_STACK_LINE(91)
								x = maximum->x;
							}
							HX_STACK_LINE(91)
							Float y;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(91)
							if (((current->y > maximum->y))){
								HX_STACK_LINE(91)
								y = current->y;
							}
							else{
								HX_STACK_LINE(91)
								y = maximum->y;
							}
							HX_STACK_LINE(91)
							Float z;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(91)
							if (((current->z > maximum->z))){
								HX_STACK_LINE(91)
								z = current->z;
							}
							else{
								HX_STACK_LINE(91)
								z = maximum->z;
							}
							HX_STACK_LINE(91)
							_g11 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(x,y,z);
						}
						HX_STACK_LINE(91)
						maximum = _g11;
					}
				}
				struct _Function_3_1{
					inline static Dynamic Block( ::com::gamestudiohx::babylonhx::tools::math::Vector3 &minimum,::com::gamestudiohx::babylonhx::tools::math::Vector3 &maximum){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",91,0x2e02d060)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("minimum") , minimum,false);
							__result->Add(HX_CSTRING("maximum") , maximum,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(91)
				extend = _Function_3_1::Block(minimum,maximum);
			}
			HX_STACK_LINE(92)
			::com::gamestudiohx::babylonhx::culling::BoundingInfo _g2 = ::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__new(extend->__Field(HX_CSTRING("minimum"),true),extend->__Field(HX_CSTRING("maximum"),true));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(92)
			this->_boundingInfo = _g2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,refreshBoundingInfo,(void))

bool SubMesh_obj::_checkCollision( ::com::gamestudiohx::babylonhx::collisions::Collider collider){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.SubMesh","_checkCollision",0x324c8cd9,"com.gamestudiohx.babylonhx.mesh.SubMesh._checkCollision","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",97,0x2e02d060)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collider,"collider")
	HX_STACK_LINE(97)
	return this->_boundingInfo->_checkCollision(collider);
}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,_checkCollision,return )

Void SubMesh_obj::updateBoundingInfo( ::com::gamestudiohx::babylonhx::tools::math::Matrix world,Float scale){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.SubMesh","updateBoundingInfo",0x292cb9eb,"com.gamestudiohx.babylonhx.mesh.SubMesh.updateBoundingInfo","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",101,0x2e02d060)
		HX_STACK_THIS(this)
		HX_STACK_ARG(world,"world")
		HX_STACK_ARG(scale,"scale")
		HX_STACK_LINE(101)
		this->_boundingInfo->_update(world,scale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SubMesh_obj,updateBoundingInfo,(void))

bool SubMesh_obj::isInFrustrum( Array< ::Dynamic > frustumPlanes){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.SubMesh","isInFrustrum",0xdaa600df,"com.gamestudiohx.babylonhx.mesh.SubMesh.isInFrustrum","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",105,0x2e02d060)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frustumPlanes,"frustumPlanes")
	HX_STACK_LINE(105)
	return this->_boundingInfo->isInFrustrum(frustumPlanes);
}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,isInFrustrum,return )

Void SubMesh_obj::render( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.SubMesh","render",0x20fb33a6,"com.gamestudiohx.babylonhx.mesh.SubMesh.render","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",109,0x2e02d060)
		HX_STACK_THIS(this)
		HX_STACK_LINE(109)
		this->_renderingMesh->render(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,render,(void))

::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer SubMesh_obj::getLinesIndexBuffer( Array< int > indices,::com::gamestudiohx::babylonhx::Engine engine){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.SubMesh","getLinesIndexBuffer",0xc0ca2059,"com.gamestudiohx.babylonhx.mesh.SubMesh.getLinesIndexBuffer","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",112,0x2e02d060)
	HX_STACK_THIS(this)
	HX_STACK_ARG(indices,"indices")
	HX_STACK_ARG(engine,"engine")
	HX_STACK_LINE(113)
	if (((this->_linesIndexBuffer == null()))){
		HX_STACK_LINE(114)
		Array< int > linesIndices = Array_obj< int >::__new();		HX_STACK_VAR(linesIndices,"linesIndices");
		HX_STACK_LINE(116)
		int index = this->indexStart;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(117)
		while((true)){
			HX_STACK_LINE(117)
			if ((!(((index < (this->indexStart + this->indexCount)))))){
				HX_STACK_LINE(117)
				break;
			}
			HX_STACK_LINE(118)
			linesIndices->push(indices->__get(index));
			HX_STACK_LINE(119)
			linesIndices->push(indices->__get((index + (int)1)));
			HX_STACK_LINE(120)
			linesIndices->push(indices->__get((index + (int)1)));
			HX_STACK_LINE(121)
			linesIndices->push(indices->__get((index + (int)2)));
			HX_STACK_LINE(122)
			linesIndices->push(indices->__get((index + (int)2)));
			HX_STACK_LINE(123)
			linesIndices->push(indices->__get(index));
			HX_STACK_LINE(125)
			hx::AddEq(index,(int)3);
		}
		HX_STACK_LINE(128)
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _g = engine->createIndexBuffer(linesIndices);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(128)
		this->_linesIndexBuffer = _g;
		HX_STACK_LINE(129)
		this->linesIndexCount = linesIndices->length;
	}
	HX_STACK_LINE(131)
	return this->_linesIndexBuffer;
}


HX_DEFINE_DYNAMIC_FUNC2(SubMesh_obj,getLinesIndexBuffer,return )

bool SubMesh_obj::canIntersects( ::com::gamestudiohx::babylonhx::tools::math::Ray ray){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.SubMesh","canIntersects",0xd662d094,"com.gamestudiohx.babylonhx.mesh.SubMesh.canIntersects","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",135,0x2e02d060)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_LINE(135)
	return ray->intersectsBox(this->_boundingInfo->boundingBox);
}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,canIntersects,return )

Float SubMesh_obj::intersects( ::com::gamestudiohx::babylonhx::tools::math::Ray ray,Array< ::Dynamic > positions,Array< int > indices,hx::Null< bool >  __o_fastCheck){
bool fastCheck = __o_fastCheck.Default(false);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.SubMesh","intersects",0xf04ff304,"com.gamestudiohx.babylonhx.mesh.SubMesh.intersects","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",138,0x2e02d060)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(positions,"positions")
	HX_STACK_ARG(indices,"indices")
	HX_STACK_ARG(fastCheck,"fastCheck")
{
		HX_STACK_LINE(139)
		Float distance = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(142)
		int index = this->indexStart;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(143)
		while((true)){
			HX_STACK_LINE(143)
			if ((!(((index < (this->indexStart + this->indexCount)))))){
				HX_STACK_LINE(143)
				break;
			}
			HX_STACK_LINE(144)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p0 = positions->__get(indices->__get(index)).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p0,"p0");
			HX_STACK_LINE(145)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p1 = positions->__get(indices->__get((index + (int)1))).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(146)
			::com::gamestudiohx::babylonhx::tools::math::Vector3 p2 = positions->__get(indices->__get((index + (int)2))).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >();		HX_STACK_VAR(p2,"p2");
			HX_STACK_LINE(148)
			Float currentDistance = ray->intersectsTriangle(p0,p1,p2);		HX_STACK_VAR(currentDistance,"currentDistance");
			HX_STACK_LINE(150)
			if (((currentDistance > (int)0))){
				HX_STACK_LINE(151)
				if (((bool(fastCheck) || bool((currentDistance < distance))))){
					HX_STACK_LINE(152)
					distance = currentDistance;
					HX_STACK_LINE(154)
					if ((fastCheck)){
						HX_STACK_LINE(155)
						break;
					}
				}
			}
			HX_STACK_LINE(160)
			hx::AddEq(index,(int)3);
		}
		HX_STACK_LINE(163)
		if ((!(((bool((distance > (int)0)) && bool((distance < ::Math_obj::POSITIVE_INFINITY))))))){
			HX_STACK_LINE(164)
			distance = (int)0;
		}
		HX_STACK_LINE(167)
		return distance;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(SubMesh_obj,intersects,return )

::com::gamestudiohx::babylonhx::mesh::SubMesh SubMesh_obj::clone( ::com::gamestudiohx::babylonhx::mesh::AbstractMesh newMesh,::com::gamestudiohx::babylonhx::mesh::Mesh newRenderingMesh){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.SubMesh","clone",0xc10cc50d,"com.gamestudiohx.babylonhx.mesh.SubMesh.clone","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",174,0x2e02d060)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newMesh,"newMesh")
	HX_STACK_ARG(newRenderingMesh,"newRenderingMesh")
	HX_STACK_LINE(175)
	::com::gamestudiohx::babylonhx::mesh::SubMesh result = ::com::gamestudiohx::babylonhx::mesh::SubMesh_obj::__new(this->materialIndex,this->verticesStart,this->verticesCount,this->indexStart,this->indexCount,newMesh,newRenderingMesh,false);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(177)
	::com::gamestudiohx::babylonhx::culling::BoundingInfo _g = ::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__new(this->_boundingInfo->minimum,this->_boundingInfo->maximum);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(177)
	result->_boundingInfo = _g;
	HX_STACK_LINE(179)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(SubMesh_obj,clone,return )

Void SubMesh_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.SubMesh","dispose",0xf709fe4f,"com.gamestudiohx.babylonhx.mesh.SubMesh.dispose","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",182,0x2e02d060)
		HX_STACK_THIS(this)
		HX_STACK_LINE(183)
		if (((this->_linesIndexBuffer != null()))){
			HX_STACK_LINE(184)
			this->_mesh->getScene()->getEngine()->_releaseBuffer(this->_linesIndexBuffer);
			HX_STACK_LINE(185)
			this->_linesIndexBuffer = null();
		}
		HX_STACK_LINE(189)
		int index = this->_mesh->subMeshes->indexOf(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(190)
		this->_mesh->subMeshes->splice(index,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,dispose,(void))

::com::gamestudiohx::babylonhx::mesh::SubMesh SubMesh_obj::CreateFromIndices( int materialIndex,int startIndex,int indexCount,::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.mesh.SubMesh","CreateFromIndices",0xcd00bed1,"com.gamestudiohx.babylonhx.mesh.SubMesh.CreateFromIndices","com/gamestudiohx/babylonhx/mesh/SubMesh.hx",193,0x2e02d060)
	HX_STACK_ARG(materialIndex,"materialIndex")
	HX_STACK_ARG(startIndex,"startIndex")
	HX_STACK_ARG(indexCount,"indexCount")
	HX_STACK_ARG(mesh,"mesh")
	HX_STACK_LINE(194)
	Float minVertexIndex = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(minVertexIndex,"minVertexIndex");
	HX_STACK_LINE(195)
	Float maxVertexIndex = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(maxVertexIndex,"maxVertexIndex");
	HX_STACK_LINE(197)
	Array< int > indices = mesh->getIndices();		HX_STACK_VAR(indices,"indices");
	HX_STACK_LINE(199)
	{
		HX_STACK_LINE(199)
		int _g1 = startIndex;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(199)
		int _g = (startIndex + indexCount);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(199)
		while((true)){
			HX_STACK_LINE(199)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(199)
				break;
			}
			HX_STACK_LINE(199)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(200)
			int vertexIndex = indices->__get(index);		HX_STACK_VAR(vertexIndex,"vertexIndex");
			HX_STACK_LINE(202)
			if (((vertexIndex < minVertexIndex))){
				HX_STACK_LINE(203)
				minVertexIndex = vertexIndex;
			}
			else{
				HX_STACK_LINE(204)
				if (((vertexIndex > maxVertexIndex))){
					HX_STACK_LINE(205)
					maxVertexIndex = vertexIndex;
				}
			}
		}
	}
	HX_STACK_LINE(208)
	return ::com::gamestudiohx::babylonhx::mesh::SubMesh_obj::__new(materialIndex,minVertexIndex,(maxVertexIndex - minVertexIndex),startIndex,indexCount,mesh,null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(SubMesh_obj,CreateFromIndices,return )


SubMesh_obj::SubMesh_obj()
{
}

void SubMesh_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SubMesh);
	HX_MARK_MEMBER_NAME(materialIndex,"materialIndex");
	HX_MARK_MEMBER_NAME(verticesStart,"verticesStart");
	HX_MARK_MEMBER_NAME(verticesCount,"verticesCount");
	HX_MARK_MEMBER_NAME(indexStart,"indexStart");
	HX_MARK_MEMBER_NAME(indexCount,"indexCount");
	HX_MARK_MEMBER_NAME(_mesh,"_mesh");
	HX_MARK_MEMBER_NAME(_renderingMesh,"_renderingMesh");
	HX_MARK_MEMBER_NAME(_trianglePlanes,"_trianglePlanes");
	HX_MARK_MEMBER_NAME(_boundingInfo,"_boundingInfo");
	HX_MARK_MEMBER_NAME(_linesIndexBuffer,"_linesIndexBuffer");
	HX_MARK_MEMBER_NAME(_distanceToCamera,"_distanceToCamera");
	HX_MARK_MEMBER_NAME(linesIndexCount,"linesIndexCount");
	HX_MARK_MEMBER_NAME(_lastColliderWorldVertices,"_lastColliderWorldVertices");
	HX_MARK_MEMBER_NAME(_lastColliderTransformMatrix,"_lastColliderTransformMatrix");
	HX_MARK_MEMBER_NAME(_renderId,"_renderId");
	HX_MARK_END_CLASS();
}

void SubMesh_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(materialIndex,"materialIndex");
	HX_VISIT_MEMBER_NAME(verticesStart,"verticesStart");
	HX_VISIT_MEMBER_NAME(verticesCount,"verticesCount");
	HX_VISIT_MEMBER_NAME(indexStart,"indexStart");
	HX_VISIT_MEMBER_NAME(indexCount,"indexCount");
	HX_VISIT_MEMBER_NAME(_mesh,"_mesh");
	HX_VISIT_MEMBER_NAME(_renderingMesh,"_renderingMesh");
	HX_VISIT_MEMBER_NAME(_trianglePlanes,"_trianglePlanes");
	HX_VISIT_MEMBER_NAME(_boundingInfo,"_boundingInfo");
	HX_VISIT_MEMBER_NAME(_linesIndexBuffer,"_linesIndexBuffer");
	HX_VISIT_MEMBER_NAME(_distanceToCamera,"_distanceToCamera");
	HX_VISIT_MEMBER_NAME(linesIndexCount,"linesIndexCount");
	HX_VISIT_MEMBER_NAME(_lastColliderWorldVertices,"_lastColliderWorldVertices");
	HX_VISIT_MEMBER_NAME(_lastColliderTransformMatrix,"_lastColliderTransformMatrix");
	HX_VISIT_MEMBER_NAME(_renderId,"_renderId");
}

Dynamic SubMesh_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_mesh") ) { return _mesh; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getMesh") ) { return getMesh_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_renderId") ) { return _renderId; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"indexStart") ) { return indexStart; }
		if (HX_FIELD_EQ(inName,"indexCount") ) { return indexCount; }
		if (HX_FIELD_EQ(inName,"intersects") ) { return intersects_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getMaterial") ) { return getMaterial_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isInFrustrum") ) { return isInFrustrum_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"materialIndex") ) { return materialIndex; }
		if (HX_FIELD_EQ(inName,"verticesStart") ) { return verticesStart; }
		if (HX_FIELD_EQ(inName,"verticesCount") ) { return verticesCount; }
		if (HX_FIELD_EQ(inName,"_boundingInfo") ) { return _boundingInfo; }
		if (HX_FIELD_EQ(inName,"canIntersects") ) { return canIntersects_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_renderingMesh") ) { return _renderingMesh; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_trianglePlanes") ) { return _trianglePlanes; }
		if (HX_FIELD_EQ(inName,"linesIndexCount") ) { return linesIndexCount; }
		if (HX_FIELD_EQ(inName,"getBoundingInfo") ) { return getBoundingInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"_checkCollision") ) { return _checkCollision_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getRenderingMesh") ) { return getRenderingMesh_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CreateFromIndices") ) { return CreateFromIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"_linesIndexBuffer") ) { return _linesIndexBuffer; }
		if (HX_FIELD_EQ(inName,"_distanceToCamera") ) { return _distanceToCamera; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateBoundingInfo") ) { return updateBoundingInfo_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"refreshBoundingInfo") ) { return refreshBoundingInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"getLinesIndexBuffer") ) { return getLinesIndexBuffer_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_lastColliderWorldVertices") ) { return _lastColliderWorldVertices; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_lastColliderTransformMatrix") ) { return _lastColliderTransformMatrix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SubMesh_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_mesh") ) { _mesh=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_renderId") ) { _renderId=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"indexStart") ) { indexStart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexCount") ) { indexCount=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"materialIndex") ) { materialIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"verticesStart") ) { verticesStart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"verticesCount") ) { verticesCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_boundingInfo") ) { _boundingInfo=inValue.Cast< ::com::gamestudiohx::babylonhx::culling::BoundingInfo >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_renderingMesh") ) { _renderingMesh=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::Mesh >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_trianglePlanes") ) { _trianglePlanes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"linesIndexCount") ) { linesIndexCount=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_linesIndexBuffer") ) { _linesIndexBuffer=inValue.Cast< ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_distanceToCamera") ) { _distanceToCamera=inValue.Cast< Float >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_lastColliderWorldVertices") ) { _lastColliderWorldVertices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_lastColliderTransformMatrix") ) { _lastColliderTransformMatrix=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SubMesh_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("materialIndex"));
	outFields->push(HX_CSTRING("verticesStart"));
	outFields->push(HX_CSTRING("verticesCount"));
	outFields->push(HX_CSTRING("indexStart"));
	outFields->push(HX_CSTRING("indexCount"));
	outFields->push(HX_CSTRING("_mesh"));
	outFields->push(HX_CSTRING("_renderingMesh"));
	outFields->push(HX_CSTRING("_trianglePlanes"));
	outFields->push(HX_CSTRING("_boundingInfo"));
	outFields->push(HX_CSTRING("_linesIndexBuffer"));
	outFields->push(HX_CSTRING("_distanceToCamera"));
	outFields->push(HX_CSTRING("linesIndexCount"));
	outFields->push(HX_CSTRING("_lastColliderWorldVertices"));
	outFields->push(HX_CSTRING("_lastColliderTransformMatrix"));
	outFields->push(HX_CSTRING("_renderId"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CreateFromIndices"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SubMesh_obj,materialIndex),HX_CSTRING("materialIndex")},
	{hx::fsInt,(int)offsetof(SubMesh_obj,verticesStart),HX_CSTRING("verticesStart")},
	{hx::fsInt,(int)offsetof(SubMesh_obj,verticesCount),HX_CSTRING("verticesCount")},
	{hx::fsInt,(int)offsetof(SubMesh_obj,indexStart),HX_CSTRING("indexStart")},
	{hx::fsInt,(int)offsetof(SubMesh_obj,indexCount),HX_CSTRING("indexCount")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::AbstractMesh*/ ,(int)offsetof(SubMesh_obj,_mesh),HX_CSTRING("_mesh")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::Mesh*/ ,(int)offsetof(SubMesh_obj,_renderingMesh),HX_CSTRING("_renderingMesh")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SubMesh_obj,_trianglePlanes),HX_CSTRING("_trianglePlanes")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::culling::BoundingInfo*/ ,(int)offsetof(SubMesh_obj,_boundingInfo),HX_CSTRING("_boundingInfo")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer*/ ,(int)offsetof(SubMesh_obj,_linesIndexBuffer),HX_CSTRING("_linesIndexBuffer")},
	{hx::fsFloat,(int)offsetof(SubMesh_obj,_distanceToCamera),HX_CSTRING("_distanceToCamera")},
	{hx::fsInt,(int)offsetof(SubMesh_obj,linesIndexCount),HX_CSTRING("linesIndexCount")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SubMesh_obj,_lastColliderWorldVertices),HX_CSTRING("_lastColliderWorldVertices")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Matrix*/ ,(int)offsetof(SubMesh_obj,_lastColliderTransformMatrix),HX_CSTRING("_lastColliderTransformMatrix")},
	{hx::fsInt,(int)offsetof(SubMesh_obj,_renderId),HX_CSTRING("_renderId")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("materialIndex"),
	HX_CSTRING("verticesStart"),
	HX_CSTRING("verticesCount"),
	HX_CSTRING("indexStart"),
	HX_CSTRING("indexCount"),
	HX_CSTRING("_mesh"),
	HX_CSTRING("_renderingMesh"),
	HX_CSTRING("_trianglePlanes"),
	HX_CSTRING("_boundingInfo"),
	HX_CSTRING("_linesIndexBuffer"),
	HX_CSTRING("_distanceToCamera"),
	HX_CSTRING("linesIndexCount"),
	HX_CSTRING("_lastColliderWorldVertices"),
	HX_CSTRING("_lastColliderTransformMatrix"),
	HX_CSTRING("_renderId"),
	HX_CSTRING("getRenderingMesh"),
	HX_CSTRING("getBoundingInfo"),
	HX_CSTRING("getMesh"),
	HX_CSTRING("getMaterial"),
	HX_CSTRING("refreshBoundingInfo"),
	HX_CSTRING("_checkCollision"),
	HX_CSTRING("updateBoundingInfo"),
	HX_CSTRING("isInFrustrum"),
	HX_CSTRING("render"),
	HX_CSTRING("getLinesIndexBuffer"),
	HX_CSTRING("canIntersects"),
	HX_CSTRING("intersects"),
	HX_CSTRING("clone"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SubMesh_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SubMesh_obj::__mClass,"__mClass");
};

#endif

Class SubMesh_obj::__mClass;

void SubMesh_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.mesh.SubMesh"), hx::TCanCast< SubMesh_obj> ,sStaticFields,sMemberFields,
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

void SubMesh_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh
