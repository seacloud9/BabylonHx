#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_Node
#include <com/gamestudiohx/babylonhx/Node.h>
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

Void Octree_obj::__construct(hx::Null< int >  __o_maxBlockCapacity)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.octrees.Octree","new",0x5a50b701,"com.gamestudiohx.babylonhx.culling.octrees.Octree.new","com/gamestudiohx/babylonhx/culling/octrees/Octree.hx",22,0xb93938cc)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_maxBlockCapacity,"maxBlockCapacity")
int maxBlockCapacity = __o_maxBlockCapacity.Default(64);
{
	HX_STACK_LINE(23)
	this->blocks = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(24)
	this->_maxBlockCapacity = maxBlockCapacity;
	HX_STACK_LINE(25)
	this->_selection = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//Octree_obj::~Octree_obj() { }

Dynamic Octree_obj::__CreateEmpty() { return  new Octree_obj; }
hx::ObjectPtr< Octree_obj > Octree_obj::__new(hx::Null< int >  __o_maxBlockCapacity)
{  hx::ObjectPtr< Octree_obj > result = new Octree_obj();
	result->__construct(__o_maxBlockCapacity);
	return result;}

Dynamic Octree_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Octree_obj > result = new Octree_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Octree_obj::update( ::com::gamestudiohx::babylonhx::tools::math::Vector3 worldMin,::com::gamestudiohx::babylonhx::tools::math::Vector3 worldMax,Array< ::Dynamic > meshes){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.octrees.Octree","update",0x0407ba08,"com.gamestudiohx.babylonhx.culling.octrees.Octree.update","com/gamestudiohx/babylonhx/culling/octrees/Octree.hx",29,0xb93938cc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(worldMin,"worldMin")
		HX_STACK_ARG(worldMax,"worldMax")
		HX_STACK_ARG(meshes,"meshes")
		HX_STACK_LINE(29)
		::com::gamestudiohx::babylonhx::culling::octrees::Octree_obj::_CreateBlocks(worldMin,worldMax,meshes,this->_maxBlockCapacity,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Octree_obj,update,(void))

Void Octree_obj::addMesh( ::com::gamestudiohx::babylonhx::mesh::AbstractMesh mesh){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.octrees.Octree","addMesh",0x6981d7cf,"com.gamestudiohx.babylonhx.culling.octrees.Octree.addMesh","com/gamestudiohx/babylonhx/culling/octrees/Octree.hx",33,0xb93938cc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mesh,"mesh")
		HX_STACK_LINE(33)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(33)
		int _g = this->blocks->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		while((true)){
			HX_STACK_LINE(33)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(33)
				break;
			}
			HX_STACK_LINE(33)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(34)
			::com::gamestudiohx::babylonhx::culling::octrees::OctreeBlock block = this->blocks->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::culling::octrees::OctreeBlock >();		HX_STACK_VAR(block,"block");
			HX_STACK_LINE(35)
			block->addMesh(mesh);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Octree_obj,addMesh,(void))

Array< ::Dynamic > Octree_obj::select( Array< ::Dynamic > frustumPlanes){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.octrees.Octree","select",0xe7354efb,"com.gamestudiohx.babylonhx.culling.octrees.Octree.select","com/gamestudiohx/babylonhx/culling/octrees/Octree.hx",39,0xb93938cc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frustumPlanes,"frustumPlanes")
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		int _g = this->blocks->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(43)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(44)
			::com::gamestudiohx::babylonhx::culling::octrees::OctreeBlock block = this->blocks->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::culling::octrees::OctreeBlock >();		HX_STACK_VAR(block,"block");
			HX_STACK_LINE(45)
			block->select(frustumPlanes,this->_selection);
		}
	}
	HX_STACK_LINE(48)
	return this->_selection;
}


HX_DEFINE_DYNAMIC_FUNC1(Octree_obj,select,return )

Void Octree_obj::_CreateBlocks( ::com::gamestudiohx::babylonhx::tools::math::Vector3 worldMin,::com::gamestudiohx::babylonhx::tools::math::Vector3 worldMax,Array< ::Dynamic > meshes,int maxBlockCapacity,Dynamic target){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.culling.octrees.Octree","_CreateBlocks",0x81fa2782,"com.gamestudiohx.babylonhx.culling.octrees.Octree._CreateBlocks","com/gamestudiohx/babylonhx/culling/octrees/Octree.hx",51,0xb93938cc)
		HX_STACK_ARG(worldMin,"worldMin")
		HX_STACK_ARG(worldMax,"worldMax")
		HX_STACK_ARG(meshes,"meshes")
		HX_STACK_ARG(maxBlockCapacity,"maxBlockCapacity")
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(52)
		target->__FieldRef(HX_CSTRING("blocks")) = Dynamic( Array_obj<Dynamic>::__new());
		HX_STACK_LINE(53)
		::com::gamestudiohx::babylonhx::tools::math::Vector3 blockSize = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((Float(((worldMax->x - worldMin->x))) / Float((int)2)),(Float(((worldMax->y - worldMin->y))) / Float((int)2)),(Float(((worldMax->z - worldMin->z))) / Float((int)2)));		HX_STACK_VAR(blockSize,"blockSize");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			while((true)){
				HX_STACK_LINE(56)
				if ((!(((_g < (int)2))))){
					HX_STACK_LINE(56)
					break;
				}
				HX_STACK_LINE(56)
				int x = (_g)++;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((_g1 < (int)2))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(57)
						int y = (_g1)++;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(58)
						{
							HX_STACK_LINE(58)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(58)
							while((true)){
								HX_STACK_LINE(58)
								if ((!(((_g2 < (int)2))))){
									HX_STACK_LINE(58)
									break;
								}
								HX_STACK_LINE(58)
								int z = (_g2)++;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(59)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 localMin;		HX_STACK_VAR(localMin,"localMin");
								HX_STACK_LINE(59)
								{
									HX_STACK_LINE(59)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((blockSize->x * x),(blockSize->y * y),(blockSize->z * z));		HX_STACK_VAR(otherVector,"otherVector");
									HX_STACK_LINE(59)
									localMin = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((worldMin->x + otherVector->x),(worldMin->y + otherVector->y),(worldMin->z + otherVector->z));
								}
								HX_STACK_LINE(60)
								::com::gamestudiohx::babylonhx::tools::math::Vector3 localMax;		HX_STACK_VAR(localMax,"localMax");
								HX_STACK_LINE(60)
								{
									HX_STACK_LINE(60)
									::com::gamestudiohx::babylonhx::tools::math::Vector3 otherVector = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((blockSize->x * ((x + (int)1))),(blockSize->y * ((y + (int)1))),(blockSize->z * ((z + (int)1))));		HX_STACK_VAR(otherVector,"otherVector");
									HX_STACK_LINE(60)
									localMax = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__new((worldMin->x + otherVector->x),(worldMin->y + otherVector->y),(worldMin->z + otherVector->z));
								}
								HX_STACK_LINE(62)
								::com::gamestudiohx::babylonhx::culling::octrees::OctreeBlock block = ::com::gamestudiohx::babylonhx::culling::octrees::OctreeBlock_obj::__new(localMin,localMax,maxBlockCapacity);		HX_STACK_VAR(block,"block");
								HX_STACK_LINE(63)
								block->addEntries(meshes);
								HX_STACK_LINE(64)
								target->__Field(HX_CSTRING("blocks"),true)->__Field(HX_CSTRING("push"),true)(block);
							}
						}
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Octree_obj,_CreateBlocks,(void))


Octree_obj::Octree_obj()
{
}

void Octree_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Octree);
	HX_MARK_MEMBER_NAME(blocks,"blocks");
	HX_MARK_MEMBER_NAME(_maxBlockCapacity,"_maxBlockCapacity");
	HX_MARK_MEMBER_NAME(_selection,"_selection");
	HX_MARK_END_CLASS();
}

void Octree_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blocks,"blocks");
	HX_VISIT_MEMBER_NAME(_maxBlockCapacity,"_maxBlockCapacity");
	HX_VISIT_MEMBER_NAME(_selection,"_selection");
}

Dynamic Octree_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"blocks") ) { return blocks; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"select") ) { return select_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addMesh") ) { return addMesh_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_selection") ) { return _selection; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_CreateBlocks") ) { return _CreateBlocks_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_maxBlockCapacity") ) { return _maxBlockCapacity; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Octree_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"blocks") ) { blocks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_selection") ) { _selection=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_maxBlockCapacity") ) { _maxBlockCapacity=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Octree_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("blocks"));
	outFields->push(HX_CSTRING("_maxBlockCapacity"));
	outFields->push(HX_CSTRING("_selection"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_CreateBlocks"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Octree_obj,blocks),HX_CSTRING("blocks")},
	{hx::fsInt,(int)offsetof(Octree_obj,_maxBlockCapacity),HX_CSTRING("_maxBlockCapacity")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Octree_obj,_selection),HX_CSTRING("_selection")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("blocks"),
	HX_CSTRING("_maxBlockCapacity"),
	HX_CSTRING("_selection"),
	HX_CSTRING("update"),
	HX_CSTRING("addMesh"),
	HX_CSTRING("select"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Octree_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Octree_obj::__mClass,"__mClass");
};

#endif

Class Octree_obj::__mClass;

void Octree_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.culling.octrees.Octree"), hx::TCanCast< Octree_obj> ,sStaticFields,sMemberFields,
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

void Octree_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace culling
} // end namespace octrees
