#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_Node
#include <com/gamestudiohx/babylonhx/Node.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingBox
#include <com/gamestudiohx/babylonhx/culling/BoundingBox.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_BoundingInfo
#include <com/gamestudiohx/babylonhx/culling/BoundingInfo.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_octrees_Octree
#include <com/gamestudiohx/babylonhx/culling/octrees/Octree.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_culling_octrees_OctreeBlock
#include <com/gamestudiohx/babylonhx/culling/octrees/OctreeBlock.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_SubMesh
#include <com/gamestudiohx/babylonhx/mesh/SubMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Plane
#include <com/gamestudiohx/babylonhx/tools/math/Plane.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace culling{
namespace octrees{

Void OctreeBlock_obj::__construct(::com::gamestudiohx::babylonhx::tools::math::Vector3 minPoint,::com::gamestudiohx::babylonhx::tools::math::Vector3 maxPoint,int capacity)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.octrees.OctreeBlock","new",0x5cd9b430,"com.gamestudiohx.babylonhx.culling.octrees.OctreeBlock.new","com/gamestudiohx/babylonhx/culling/octrees/OctreeBlock.hx",30,0x91c26ee3)
HX_STACK_THIS(this)
HX_STACK_ARG(minPoint,"minPoint")
HX_STACK_ARG(maxPoint,"maxPoint")
HX_STACK_ARG(capacity,"capacity")
{
	HX_STACK_LINE(31)
	this->subMeshes = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(32)
	this->meshes = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(33)
	this->_capacity = capacity;
	HX_STACK_LINE(35)
	this->_minPoint = minPoint;
	HX_STACK_LINE(36)
	this->_maxPoint = maxPoint;
	HX_STACK_LINE(38)
	this->_boundingVectors = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(40)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(minPoint->x,minPoint->y,minPoint->z);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(40)
	this->_boundingVectors->push(_g);
	HX_STACK_LINE(41)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(maxPoint->x,maxPoint->y,maxPoint->z);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(41)
	this->_boundingVectors->push(_g1);
	HX_STACK_LINE(43)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g2 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(minPoint->x,minPoint->y,minPoint->z);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(43)
	this->_boundingVectors->push(_g2);
	HX_STACK_LINE(44)
	this->_boundingVectors->__get((int)2).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >()->x = maxPoint->x;
	HX_STACK_LINE(46)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g3 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(minPoint->x,minPoint->y,minPoint->z);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(46)
	this->_boundingVectors->push(_g3);
	HX_STACK_LINE(47)
	this->_boundingVectors->__get((int)3).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >()->y = maxPoint->y;
	HX_STACK_LINE(49)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g4 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(minPoint->x,minPoint->y,minPoint->z);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(49)
	this->_boundingVectors->push(_g4);
	HX_STACK_LINE(50)
	this->_boundingVectors->__get((int)4).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >()->z = maxPoint->z;
	HX_STACK_LINE(52)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g5 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(maxPoint->x,maxPoint->y,maxPoint->z);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(52)
	this->_boundingVectors->push(_g5);
	HX_STACK_LINE(53)
	this->_boundingVectors->__get((int)5).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >()->z = minPoint->z;
	HX_STACK_LINE(55)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g6 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(maxPoint->x,maxPoint->y,maxPoint->z);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(55)
	this->_boundingVectors->push(_g6);
	HX_STACK_LINE(56)
	this->_boundingVectors->__get((int)6).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >()->x = minPoint->x;
	HX_STACK_LINE(58)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g7 = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new(maxPoint->x,maxPoint->y,maxPoint->z);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(58)
	this->_boundingVectors->push(_g7);
	HX_STACK_LINE(59)
	this->_boundingVectors->__get((int)7).StaticCast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >()->y = minPoint->y;
}
;
	return null();
}

//OctreeBlock_obj::~OctreeBlock_obj() { }

Dynamic OctreeBlock_obj::__CreateEmpty() { return  new OctreeBlock_obj; }
hx::ObjectPtr< OctreeBlock_obj > OctreeBlock_obj::__new(::com::gamestudiohx::babylonhx::tools::math::Vector3 minPoint,::com::gamestudiohx::babylonhx::tools::math::Vector3 maxPoint,int capacity)
{  hx::ObjectPtr< OctreeBlock_obj > result = new OctreeBlock_obj();
	result->__construct(minPoint,maxPoint,capacity);
	return result;}

Dynamic OctreeBlock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OctreeBlock_obj > result = new OctreeBlock_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void OctreeBlock_obj::addMesh( ::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.octrees.OctreeBlock","addMesh",0xc0a2987e,"com.gamestudiohx.babylonhx.culling.octrees.OctreeBlock.addMesh","com/gamestudiohx/babylonhx/culling/octrees/OctreeBlock.hx",63,0x91c26ee3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mesh,"mesh")
		HX_STACK_LINE(63)
		if (((this->blocks != null()))){
			HX_STACK_LINE(64)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(64)
			int _g = this->blocks->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(64)
			while((true)){
				HX_STACK_LINE(64)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(64)
					break;
				}
				HX_STACK_LINE(64)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(65)
				::com::gamestudiohx::babylonhx::culling::octrees::OctreeBlock block = this->blocks->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::culling::octrees::OctreeBlock >();		HX_STACK_VAR(block,"block");
				HX_STACK_LINE(66)
				block->addMesh(mesh);
			}
		}
		else{
			HX_STACK_LINE(69)
			if ((mesh->getBoundingInfo()->boundingBox->intersectsMinMax(this->_minPoint,this->_maxPoint))){
				HX_STACK_LINE(70)
				int localMeshIndex = this->meshes->length;		HX_STACK_VAR(localMeshIndex,"localMeshIndex");
				HX_STACK_LINE(71)
				this->meshes->push(mesh);
				HX_STACK_LINE(73)
				this->subMeshes[localMeshIndex] = Array_obj< ::Dynamic >::__new();
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(74)
					int _g = mesh->subMeshes->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(74)
					while((true)){
						HX_STACK_LINE(74)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(74)
							break;
						}
						HX_STACK_LINE(74)
						int subIndex = (_g1)++;		HX_STACK_VAR(subIndex,"subIndex");
						HX_STACK_LINE(75)
						::com::gamestudiohx::babylonhx::mesh::SubMesh subMesh = mesh->subMeshes->__get(subIndex).StaticCast< ::com::gamestudiohx::babylonhx::mesh::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
						HX_STACK_LINE(76)
						if (((  ((!(((mesh->subMeshes->length == (int)1))))) ? bool(subMesh->getBoundingInfo()->boundingBox->intersectsMinMax(this->_minPoint,this->_maxPoint)) : bool(true) ))){
							HX_STACK_LINE(77)
							this->subMeshes->__get(localMeshIndex).StaticCast< Array< ::Dynamic > >()->push(subMesh);
						}
					}
				}
			}
			HX_STACK_LINE(82)
			if (((this->subMeshes->length > this->_capacity))){
				HX_STACK_LINE(83)
				::com::gamestudiohx::babylonhx::culling::octrees::Octree_obj::_CreateBlocks(this->_minPoint,this->_maxPoint,this->meshes,this->_capacity,hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OctreeBlock_obj,addMesh,(void))

Void OctreeBlock_obj::addEntries( Array< ::Dynamic > meshes){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.octrees.OctreeBlock","addEntries",0x83328f5f,"com.gamestudiohx.babylonhx.culling.octrees.OctreeBlock.addEntries","com/gamestudiohx/babylonhx/culling/octrees/OctreeBlock.hx",89,0x91c26ee3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(meshes,"meshes")
		HX_STACK_LINE(89)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(89)
		int _g = meshes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		while((true)){
			HX_STACK_LINE(89)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(89)
				break;
			}
			HX_STACK_LINE(89)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(90)
			::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh = meshes->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::mesh::AbstractMesh >();		HX_STACK_VAR(mesh,"mesh");
			HX_STACK_LINE(91)
			this->addMesh(mesh);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OctreeBlock_obj,addEntries,(void))

Void OctreeBlock_obj::select( Array< ::Dynamic > frustumPlanes,Array< ::Dynamic > selection){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.octrees.OctreeBlock","select",0x83b9792c,"com.gamestudiohx.babylonhx.culling.octrees.OctreeBlock.select","com/gamestudiohx/babylonhx/culling/octrees/OctreeBlock.hx",96,0x91c26ee3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frustumPlanes,"frustumPlanes")
		HX_STACK_ARG(selection,"selection")
		HX_STACK_LINE(96)
		if (((bool((this->blocks != null())) && bool((this->blocks->length > (int)0))))){
			HX_STACK_LINE(97)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(97)
			int _g = this->blocks->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(97)
			while((true)){
				HX_STACK_LINE(97)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(97)
					break;
				}
				HX_STACK_LINE(97)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(98)
				::com::gamestudiohx::babylonhx::culling::octrees::OctreeBlock block = this->blocks->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::culling::octrees::OctreeBlock >();		HX_STACK_VAR(block,"block");
				HX_STACK_LINE(99)
				block->select(frustumPlanes,selection);
			}
		}
		else{
			HX_STACK_LINE(101)
			if ((::com::gamestudiohx::babylonhx::culling::BoundingBox_obj::IsInFrustum(this->_boundingVectors,frustumPlanes))){
				HX_STACK_LINE(102)
				selection->push(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(OctreeBlock_obj,select,(void))


OctreeBlock_obj::OctreeBlock_obj()
{
}

void OctreeBlock_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OctreeBlock);
	HX_MARK_MEMBER_NAME(meshes,"meshes");
	HX_MARK_MEMBER_NAME(subMeshes,"subMeshes");
	HX_MARK_MEMBER_NAME(_capacity,"_capacity");
	HX_MARK_MEMBER_NAME(_minPoint,"_minPoint");
	HX_MARK_MEMBER_NAME(_maxPoint,"_maxPoint");
	HX_MARK_MEMBER_NAME(_boundingVectors,"_boundingVectors");
	HX_MARK_MEMBER_NAME(blocks,"blocks");
	HX_MARK_END_CLASS();
}

void OctreeBlock_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(meshes,"meshes");
	HX_VISIT_MEMBER_NAME(subMeshes,"subMeshes");
	HX_VISIT_MEMBER_NAME(_capacity,"_capacity");
	HX_VISIT_MEMBER_NAME(_minPoint,"_minPoint");
	HX_VISIT_MEMBER_NAME(_maxPoint,"_maxPoint");
	HX_VISIT_MEMBER_NAME(_boundingVectors,"_boundingVectors");
	HX_VISIT_MEMBER_NAME(blocks,"blocks");
}

Dynamic OctreeBlock_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"meshes") ) { return meshes; }
		if (HX_FIELD_EQ(inName,"blocks") ) { return blocks; }
		if (HX_FIELD_EQ(inName,"select") ) { return select_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addMesh") ) { return addMesh_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"subMeshes") ) { return subMeshes; }
		if (HX_FIELD_EQ(inName,"_capacity") ) { return _capacity; }
		if (HX_FIELD_EQ(inName,"_minPoint") ) { return _minPoint; }
		if (HX_FIELD_EQ(inName,"_maxPoint") ) { return _maxPoint; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addEntries") ) { return addEntries_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_boundingVectors") ) { return _boundingVectors; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OctreeBlock_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"meshes") ) { meshes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blocks") ) { blocks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"subMeshes") ) { subMeshes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_capacity") ) { _capacity=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_minPoint") ) { _minPoint=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxPoint") ) { _maxPoint=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_boundingVectors") ) { _boundingVectors=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OctreeBlock_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("meshes"));
	outFields->push(HX_CSTRING("subMeshes"));
	outFields->push(HX_CSTRING("_capacity"));
	outFields->push(HX_CSTRING("_minPoint"));
	outFields->push(HX_CSTRING("_maxPoint"));
	outFields->push(HX_CSTRING("_boundingVectors"));
	outFields->push(HX_CSTRING("blocks"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(OctreeBlock_obj,meshes),HX_CSTRING("meshes")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(OctreeBlock_obj,subMeshes),HX_CSTRING("subMeshes")},
	{hx::fsInt,(int)offsetof(OctreeBlock_obj,_capacity),HX_CSTRING("_capacity")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(OctreeBlock_obj,_minPoint),HX_CSTRING("_minPoint")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(OctreeBlock_obj,_maxPoint),HX_CSTRING("_maxPoint")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(OctreeBlock_obj,_boundingVectors),HX_CSTRING("_boundingVectors")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(OctreeBlock_obj,blocks),HX_CSTRING("blocks")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("meshes"),
	HX_CSTRING("subMeshes"),
	HX_CSTRING("_capacity"),
	HX_CSTRING("_minPoint"),
	HX_CSTRING("_maxPoint"),
	HX_CSTRING("_boundingVectors"),
	HX_CSTRING("blocks"),
	HX_CSTRING("addMesh"),
	HX_CSTRING("addEntries"),
	HX_CSTRING("select"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OctreeBlock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OctreeBlock_obj::__mClass,"__mClass");
};

#endif

Class OctreeBlock_obj::__mClass;

void OctreeBlock_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.culling.octrees.OctreeBlock"), hx::TCanCast< OctreeBlock_obj> ,sStaticFields,sMemberFields,
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

void OctreeBlock_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace culling
} // end namespace octrees
