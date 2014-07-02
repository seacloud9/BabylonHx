#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_Node
#include <com/gamestudiohx/babylonhx/Node.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_Scene
#include <com/gamestudiohx/babylonhx/Scene.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_cameras_Camera
#include <com/gamestudiohx/babylonhx/cameras/Camera.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_lights_Light
#include <com/gamestudiohx/babylonhx/lights/Light.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_AbstractMesh
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Matrix
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{

Void Node_obj::__construct(::com::gamestudiohx::babylonhx::Scene scene)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.Node","new",0xb10fb546,"com.gamestudiohx.babylonhx.Node.new","com/gamestudiohx/babylonhx/Node.hx",25,0x40f867a9)
HX_STACK_THIS(this)
HX_STACK_ARG(scene,"scene")
{
	HX_STACK_LINE(26)
	this->_scene = scene;
	HX_STACK_LINE(27)
	this->parent = null();
	HX_STACK_LINE(28)
	this->_childrenFlag = (int)-1;
	HX_STACK_LINE(29)
	this->_isReady = true;
	HX_STACK_LINE(30)
	this->_isEnabled = true;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/Node.hx",32,0x40f867a9)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("parent") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(32)
	this->_cache = _Function_1_1::Block();
}
;
	return null();
}

//Node_obj::~Node_obj() { }

Dynamic Node_obj::__CreateEmpty() { return  new Node_obj; }
hx::ObjectPtr< Node_obj > Node_obj::__new(::com::gamestudiohx::babylonhx::Scene scene)
{  hx::ObjectPtr< Node_obj > result = new Node_obj();
	result->__construct(scene);
	return result;}

Dynamic Node_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Node_obj > result = new Node_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Node_obj::_initCache( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Node","_initCache",0xb5e454ad,"com.gamestudiohx.babylonhx.Node._initCache","com/gamestudiohx/babylonhx/Node.hx",38,0x40f867a9)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/gamestudiohx/babylonhx/Node.hx",38,0x40f867a9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("parent") , null(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(38)
		this->_cache = _Function_1_1::Block();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,_initCache,(void))

Void Node_obj::updateCache( hx::Null< bool >  __o_force){
bool force = __o_force.Default(true);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Node","updateCache",0x10d13e5f,"com.gamestudiohx.babylonhx.Node.updateCache","com/gamestudiohx/babylonhx/Node.hx",43,0x40f867a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(force,"force")
{
		HX_STACK_LINE(44)
		if (((  ((!(force))) ? bool(this->isSynchronized(null())) : bool(false) ))){
			HX_STACK_LINE(45)
			return null();
		}
		HX_STACK_LINE(47)
		this->_cache->__FieldRef(HX_CSTRING("parent")) = this->parent;
		HX_STACK_LINE(49)
		this->_updateCache(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,updateCache,(void))

Void Node_obj::_updateCache( hx::Null< bool >  __o_ignoreParentClass){
bool ignoreParentClass = __o_ignoreParentClass.Default(true);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Node","_updateCache",0x8245ffd4,"com.gamestudiohx.babylonhx.Node._updateCache","com/gamestudiohx/babylonhx/Node.hx",52,0x40f867a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ignoreParentClass,"ignoreParentClass")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,_updateCache,(void))

bool Node_obj::_isSynchronized( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Node","_isSynchronized",0x1bf148a3,"com.gamestudiohx.babylonhx.Node._isSynchronized","com/gamestudiohx/babylonhx/Node.hx",57,0x40f867a9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,_isSynchronized,return )

Void Node_obj::_syncChildFlag( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Node","_syncChildFlag",0xc7956aa8,"com.gamestudiohx.babylonhx.Node._syncChildFlag","com/gamestudiohx/babylonhx/Node.hx",60,0x40f867a9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		if (((this->parent != null()))){
			HX_STACK_LINE(61)
			_g = this->parent->_childrenFlag;
		}
		else{
			HX_STACK_LINE(61)
			_g = this->_scene->getRenderId();
		}
		HX_STACK_LINE(61)
		this->_childrenFlag = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,_syncChildFlag,(void))

bool Node_obj::isSynchronizedWithParent( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Node","isSynchronizedWithParent",0xe3d514e8,"com.gamestudiohx.babylonhx.Node.isSynchronizedWithParent","com/gamestudiohx/babylonhx/Node.hx",65,0x40f867a9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	if (((this->parent != null()))){
		HX_STACK_LINE(65)
		return !(this->parent->_needToSynchonizeChildren(this->_childrenFlag));
	}
	else{
		HX_STACK_LINE(65)
		return true;
	}
	HX_STACK_LINE(65)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,isSynchronizedWithParent,return )

bool Node_obj::isSynchronized( hx::Null< bool >  __o_updateCache){
bool updateCache = __o_updateCache.Default(true);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Node","isSynchronized",0x4d6172f8,"com.gamestudiohx.babylonhx.Node.isSynchronized","com/gamestudiohx/babylonhx/Node.hx",68,0x40f867a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(updateCache,"updateCache")
{
		HX_STACK_LINE(69)
		bool check = this->hasNewParent(null());		HX_STACK_VAR(check,"check");
		HX_STACK_LINE(70)
		bool _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		if ((!(check))){
			HX_STACK_LINE(70)
			_g = !(this->isSynchronizedWithParent());
		}
		else{
			HX_STACK_LINE(70)
			_g = true;
		}
		HX_STACK_LINE(70)
		check = _g;
		HX_STACK_LINE(71)
		bool _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(71)
		if ((!(check))){
			HX_STACK_LINE(71)
			_g1 = !(this->_isSynchronized());
		}
		else{
			HX_STACK_LINE(71)
			_g1 = true;
		}
		HX_STACK_LINE(71)
		check = _g1;
		HX_STACK_LINE(73)
		if ((updateCache)){
			HX_STACK_LINE(74)
			this->updateCache(true);
		}
		HX_STACK_LINE(77)
		return !(check);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,isSynchronized,return )

bool Node_obj::hasNewParent( hx::Null< bool >  __o_update){
bool update = __o_update.Default(true);
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Node","hasNewParent",0x2e10054a,"com.gamestudiohx.babylonhx.Node.hasNewParent","com/gamestudiohx/babylonhx/Node.hx",80,0x40f867a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(update,"update")
{
		HX_STACK_LINE(81)
		if (((this->_cache->__Field(HX_CSTRING("parent"),true) == this->parent))){
			HX_STACK_LINE(82)
			return false;
		}
		HX_STACK_LINE(84)
		if ((update)){
			HX_STACK_LINE(85)
			this->_cache->__FieldRef(HX_CSTRING("parent")) = this->parent;
		}
		HX_STACK_LINE(87)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,hasNewParent,return )

bool Node_obj::_needToSynchonizeChildren( int childFlag){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Node","_needToSynchonizeChildren",0x77a8c2bd,"com.gamestudiohx.babylonhx.Node._needToSynchonizeChildren","com/gamestudiohx/babylonhx/Node.hx",91,0x40f867a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(childFlag,"childFlag")
	HX_STACK_LINE(91)
	return (this->_childrenFlag != childFlag);
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,_needToSynchonizeChildren,return )

bool Node_obj::isReady( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Node","isReady",0x77e793ff,"com.gamestudiohx.babylonhx.Node.isReady","com/gamestudiohx/babylonhx/Node.hx",95,0x40f867a9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	return this->_isReady;
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,isReady,return )

bool Node_obj::isEnabled( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Node","isEnabled",0x6b37171d,"com.gamestudiohx.babylonhx.Node.isEnabled","com/gamestudiohx/babylonhx/Node.hx",98,0x40f867a9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	if (((  ((!((!(this->isReady()))))) ? bool(!(this->_isEnabled)) : bool(true) ))){
		HX_STACK_LINE(100)
		return false;
	}
	HX_STACK_LINE(103)
	if (((this->parent != null()))){
		HX_STACK_LINE(104)
		return this->parent->isEnabled();
	}
	HX_STACK_LINE(107)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,isEnabled,return )

Void Node_obj::setEnabled( bool value){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Node","setEnabled",0xceab4cd9,"com.gamestudiohx.babylonhx.Node.setEnabled","com/gamestudiohx/babylonhx/Node.hx",111,0x40f867a9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(111)
		this->_isEnabled = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,setEnabled,(void))

bool Node_obj::isDescendantOf( ::com::gamestudiohx::babylonhx::Node ancestor){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Node","isDescendantOf",0xf277b958,"com.gamestudiohx.babylonhx.Node.isDescendantOf","com/gamestudiohx/babylonhx/Node.hx",114,0x40f867a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ancestor,"ancestor")
	HX_STACK_LINE(115)
	if (((this->parent != null()))){
		HX_STACK_LINE(116)
		if (((this->parent == ancestor))){
			HX_STACK_LINE(117)
			return true;
		}
		HX_STACK_LINE(120)
		return this->parent->isDescendantOf(ancestor);
	}
	HX_STACK_LINE(122)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,isDescendantOf,return )

Void Node_obj::_getDescendants( Array< ::Dynamic > list,Array< ::Dynamic > results){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.Node","_getDescendants",0x95e5dc65,"com.gamestudiohx.babylonhx.Node._getDescendants","com/gamestudiohx/babylonhx/Node.hx",126,0x40f867a9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_ARG(results,"results")
		HX_STACK_LINE(126)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(126)
		int _g = list->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(126)
		while((true)){
			HX_STACK_LINE(126)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(126)
				break;
			}
			HX_STACK_LINE(126)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(127)
			::com::gamestudiohx::babylonhx::Node item = list->__get(index).StaticCast< ::com::gamestudiohx::babylonhx::Node >();		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(128)
			if ((item->isDescendantOf(hx::ObjectPtr<OBJ_>(this)))){
				HX_STACK_LINE(129)
				results->push(item);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Node_obj,_getDescendants,(void))

::com::gamestudiohx::babylonhx::tools::math::Matrix Node_obj::getWorldMatrix( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Node","getWorldMatrix",0x01973617,"com.gamestudiohx.babylonhx.Node.getWorldMatrix","com/gamestudiohx/babylonhx/Node.hx",135,0x40f867a9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(135)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getWorldMatrix,return )

Array< ::Dynamic > Node_obj::getDescendants( ){
	HX_STACK_FRAME("com.gamestudiohx.babylonhx.Node","getDescendants",0xc75606ba,"com.gamestudiohx.babylonhx.Node.getDescendants","com/gamestudiohx/babylonhx/Node.hx",138,0x40f867a9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(139)
	Array< ::Dynamic > results = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(140)
	this->_getDescendants(this->_scene->meshes,results);
	HX_STACK_LINE(141)
	this->_getDescendants(this->_scene->lights,results);
	HX_STACK_LINE(142)
	this->_getDescendants(this->_scene->cameras,results);
	HX_STACK_LINE(144)
	return results;
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,getDescendants,return )


Node_obj::Node_obj()
{
}

void Node_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Node);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(_childrenFlag,"_childrenFlag");
	HX_MARK_MEMBER_NAME(_isReady,"_isReady");
	HX_MARK_MEMBER_NAME(_isEnabled,"_isEnabled");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_cache,"_cache");
	HX_MARK_END_CLASS();
}

void Node_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(_childrenFlag,"_childrenFlag");
	HX_VISIT_MEMBER_NAME(_isReady,"_isReady");
	HX_VISIT_MEMBER_NAME(_isEnabled,"_isEnabled");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_cache,"_cache");
}

Dynamic Node_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"_cache") ) { return _cache; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isReady") ) { return isReady_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"_isReady") ) { return _isReady; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_isEnabled") ) { return _isEnabled; }
		if (HX_FIELD_EQ(inName,"_initCache") ) { return _initCache_dyn(); }
		if (HX_FIELD_EQ(inName,"setEnabled") ) { return setEnabled_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateCache") ) { return updateCache_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_updateCache") ) { return _updateCache_dyn(); }
		if (HX_FIELD_EQ(inName,"hasNewParent") ) { return hasNewParent_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_childrenFlag") ) { return _childrenFlag; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_syncChildFlag") ) { return _syncChildFlag_dyn(); }
		if (HX_FIELD_EQ(inName,"isSynchronized") ) { return isSynchronized_dyn(); }
		if (HX_FIELD_EQ(inName,"isDescendantOf") ) { return isDescendantOf_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorldMatrix") ) { return getWorldMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"getDescendants") ) { return getDescendants_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_isSynchronized") ) { return _isSynchronized_dyn(); }
		if (HX_FIELD_EQ(inName,"_getDescendants") ) { return _getDescendants_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"isSynchronizedWithParent") ) { return isSynchronizedWithParent_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_needToSynchonizeChildren") ) { return _needToSynchonizeChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Node_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::com::gamestudiohx::babylonhx::Node >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::gamestudiohx::babylonhx::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cache") ) { _cache=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isReady") ) { _isReady=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_isEnabled") ) { _isEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_childrenFlag") ) { _childrenFlag=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Node_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("_childrenFlag"));
	outFields->push(HX_CSTRING("_isReady"));
	outFields->push(HX_CSTRING("_isEnabled"));
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("_cache"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Node_obj,name),HX_CSTRING("name")},
	{hx::fsString,(int)offsetof(Node_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Node*/ ,(int)offsetof(Node_obj,parent),HX_CSTRING("parent")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Node_obj,position),HX_CSTRING("position")},
	{hx::fsInt,(int)offsetof(Node_obj,_childrenFlag),HX_CSTRING("_childrenFlag")},
	{hx::fsBool,(int)offsetof(Node_obj,_isReady),HX_CSTRING("_isReady")},
	{hx::fsBool,(int)offsetof(Node_obj,_isEnabled),HX_CSTRING("_isEnabled")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::Scene*/ ,(int)offsetof(Node_obj,_scene),HX_CSTRING("_scene")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Node_obj,_cache),HX_CSTRING("_cache")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("id"),
	HX_CSTRING("parent"),
	HX_CSTRING("position"),
	HX_CSTRING("_childrenFlag"),
	HX_CSTRING("_isReady"),
	HX_CSTRING("_isEnabled"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_cache"),
	HX_CSTRING("_initCache"),
	HX_CSTRING("updateCache"),
	HX_CSTRING("_updateCache"),
	HX_CSTRING("_isSynchronized"),
	HX_CSTRING("_syncChildFlag"),
	HX_CSTRING("isSynchronizedWithParent"),
	HX_CSTRING("isSynchronized"),
	HX_CSTRING("hasNewParent"),
	HX_CSTRING("_needToSynchonizeChildren"),
	HX_CSTRING("isReady"),
	HX_CSTRING("isEnabled"),
	HX_CSTRING("setEnabled"),
	HX_CSTRING("isDescendantOf"),
	HX_CSTRING("_getDescendants"),
	HX_CSTRING("getWorldMatrix"),
	HX_CSTRING("getDescendants"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Node_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Node_obj::__mClass,"__mClass");
};

#endif

Class Node_obj::__mClass;

void Node_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.Node"), hx::TCanCast< Node_obj> ,sStaticFields,sMemberFields,
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

void Node_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
