#include <hxcpp.h>

#ifndef INCLUDED_com_gamestudiohx_babylonhx_sprites_Sprite
#include <com/gamestudiohx/babylonhx/sprites/Sprite.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_sprites_SpriteManager
#include <com/gamestudiohx/babylonhx/sprites/SpriteManager.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Color4
#include <com/gamestudiohx/babylonhx/tools/math/Color4.h>
#endif
#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_math_Vector3
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#endif
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace sprites{

Void Sprite_obj::__construct(::String name,::com::gamestudiohx::babylonhx::sprites::SpriteManager manager)
{
HX_STACK_FRAME("com.gamestudiohx.babylonhx.sprites.Sprite","new",0x8d3892e9,"com.gamestudiohx.babylonhx.sprites.Sprite.new","com/gamestudiohx/babylonhx/sprites/Sprite.hx",37,0xaa514c05)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(manager,"manager")
{
	HX_STACK_LINE(38)
	this->name = name;
	HX_STACK_LINE(39)
	this->_manager = manager;
	HX_STACK_LINE(41)
	this->_manager->sprites->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(43)
	::com::gamestudiohx::babylonhx::tools::math::Vector3 _g = ::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::Zero();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(43)
	this->position = _g;
	HX_STACK_LINE(44)
	::com::gamestudiohx::babylonhx::tools::math::Color4 _g1 = ::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__new(1.0,1.0,1.0,1.0);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(44)
	this->color = _g1;
	HX_STACK_LINE(46)
	this->_frameCount = (int)0;
	HX_STACK_LINE(47)
	this->_direction = (int)1;
}
;
	return null();
}

//Sprite_obj::~Sprite_obj() { }

Dynamic Sprite_obj::__CreateEmpty() { return  new Sprite_obj; }
hx::ObjectPtr< Sprite_obj > Sprite_obj::__new(::String name,::com::gamestudiohx::babylonhx::sprites::SpriteManager manager)
{  hx::ObjectPtr< Sprite_obj > result = new Sprite_obj();
	result->__construct(name,manager);
	return result;}

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sprite_obj > result = new Sprite_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Sprite_obj::playAnimation( Float from,Float to,bool loop,Float delay){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.sprites.Sprite","playAnimation",0x7bacea39,"com.gamestudiohx.babylonhx.sprites.Sprite.playAnimation","com/gamestudiohx/babylonhx/sprites/Sprite.hx",51,0xaa514c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(from,"from")
		HX_STACK_ARG(to,"to")
		HX_STACK_ARG(loop,"loop")
		HX_STACK_ARG(delay,"delay")
		HX_STACK_LINE(52)
		this->_fromIndex = from;
		HX_STACK_LINE(53)
		this->_toIndex = to;
		HX_STACK_LINE(54)
		this->_loopAnimation = loop;
		HX_STACK_LINE(55)
		this->_delay = delay;
		HX_STACK_LINE(56)
		this->_animationStarted = true;
		HX_STACK_LINE(58)
		if (((from < to))){
			HX_STACK_LINE(58)
			this->_direction = (int)1;
		}
		else{
			HX_STACK_LINE(58)
			this->_direction = (int)-1;
		}
		HX_STACK_LINE(60)
		this->cellIndex = from;
		HX_STACK_LINE(61)
		this->_time = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Sprite_obj,playAnimation,(void))

Void Sprite_obj::stopAnimation( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.sprites.Sprite","stopAnimation",0xa475766b,"com.gamestudiohx.babylonhx.sprites.Sprite.stopAnimation","com/gamestudiohx/babylonhx/sprites/Sprite.hx",65,0xaa514c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		this->_animationStarted = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,stopAnimation,(void))

Void Sprite_obj::animate( Float deltaTime){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.sprites.Sprite","animate",0xe7a015aa,"com.gamestudiohx.babylonhx.sprites.Sprite.animate","com/gamestudiohx/babylonhx/sprites/Sprite.hx",69,0xaa514c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(69)
		if ((this->_animationStarted)){
			HX_STACK_LINE(70)
			hx::AddEq(this->_time,deltaTime);
			HX_STACK_LINE(71)
			if (((this->_time > this->_delay))){
				HX_STACK_LINE(72)
				this->_time = hx::Mod(this->_time,this->_delay);
				HX_STACK_LINE(73)
				hx::AddEq(this->cellIndex,this->_direction);
				HX_STACK_LINE(74)
				if (((this->cellIndex == this->_toIndex))){
					HX_STACK_LINE(75)
					if ((this->_loopAnimation)){
						HX_STACK_LINE(76)
						this->cellIndex = this->_fromIndex;
					}
					else{
						HX_STACK_LINE(78)
						this->_animationStarted = false;
						HX_STACK_LINE(79)
						if ((this->disposeWhenFinishedAnimating)){
							HX_STACK_LINE(80)
							this->dispose();
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,animate,(void))

Void Sprite_obj::dispose( ){
{
		HX_STACK_FRAME("com.gamestudiohx.babylonhx.sprites.Sprite","dispose",0x289fbba8,"com.gamestudiohx.babylonhx.sprites.Sprite.dispose","com/gamestudiohx/babylonhx/sprites/Sprite.hx",89,0xaa514c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(89)
		int _g = this->_manager->sprites->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		while((true)){
			HX_STACK_LINE(89)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(89)
				break;
			}
			HX_STACK_LINE(89)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(90)
			if (((this->_manager->sprites->__get(i).StaticCast< ::com::gamestudiohx::babylonhx::sprites::Sprite >() == hx::ObjectPtr<OBJ_>(this)))){
				HX_STACK_LINE(91)
				this->_manager->sprites->splice(i,(int)1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,dispose,(void))


Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(cellIndex,"cellIndex");
	HX_MARK_MEMBER_NAME(invertU,"invertU");
	HX_MARK_MEMBER_NAME(invertV,"invertV");
	HX_MARK_MEMBER_NAME(disposeWhenFinishedAnimating,"disposeWhenFinishedAnimating");
	HX_MARK_MEMBER_NAME(_manager,"_manager");
	HX_MARK_MEMBER_NAME(_animationStarted,"_animationStarted");
	HX_MARK_MEMBER_NAME(_loopAnimation,"_loopAnimation");
	HX_MARK_MEMBER_NAME(_fromIndex,"_fromIndex");
	HX_MARK_MEMBER_NAME(_toIndex,"_toIndex");
	HX_MARK_MEMBER_NAME(_delay,"_delay");
	HX_MARK_MEMBER_NAME(_direction,"_direction");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_frameCount,"_frameCount");
	HX_MARK_END_CLASS();
}

void Sprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(cellIndex,"cellIndex");
	HX_VISIT_MEMBER_NAME(invertU,"invertU");
	HX_VISIT_MEMBER_NAME(invertV,"invertV");
	HX_VISIT_MEMBER_NAME(disposeWhenFinishedAnimating,"disposeWhenFinishedAnimating");
	HX_VISIT_MEMBER_NAME(_manager,"_manager");
	HX_VISIT_MEMBER_NAME(_animationStarted,"_animationStarted");
	HX_VISIT_MEMBER_NAME(_loopAnimation,"_loopAnimation");
	HX_VISIT_MEMBER_NAME(_fromIndex,"_fromIndex");
	HX_VISIT_MEMBER_NAME(_toIndex,"_toIndex");
	HX_VISIT_MEMBER_NAME(_delay,"_delay");
	HX_VISIT_MEMBER_NAME(_direction,"_direction");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_frameCount,"_frameCount");
}

Dynamic Sprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delay") ) { return _delay; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"invertU") ) { return invertU; }
		if (HX_FIELD_EQ(inName,"invertV") ) { return invertV; }
		if (HX_FIELD_EQ(inName,"animate") ) { return animate_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"_manager") ) { return _manager; }
		if (HX_FIELD_EQ(inName,"_toIndex") ) { return _toIndex; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cellIndex") ) { return cellIndex; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fromIndex") ) { return _fromIndex; }
		if (HX_FIELD_EQ(inName,"_direction") ) { return _direction; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameCount") ) { return _frameCount; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"playAnimation") ) { return playAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"stopAnimation") ) { return stopAnimation_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_loopAnimation") ) { return _loopAnimation; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_animationStarted") ) { return _animationStarted; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"disposeWhenFinishedAnimating") ) { return disposeWhenFinishedAnimating; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Color4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delay") ) { _delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"invertU") ) { invertU=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"invertV") ) { invertV=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::com::gamestudiohx::babylonhx::tools::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_manager") ) { _manager=inValue.Cast< ::com::gamestudiohx::babylonhx::sprites::SpriteManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toIndex") ) { _toIndex=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cellIndex") ) { cellIndex=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fromIndex") ) { _fromIndex=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_direction") ) { _direction=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameCount") ) { _frameCount=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_loopAnimation") ) { _loopAnimation=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_animationStarted") ) { _animationStarted=inValue.Cast< bool >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"disposeWhenFinishedAnimating") ) { disposeWhenFinishedAnimating=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("cellIndex"));
	outFields->push(HX_CSTRING("invertU"));
	outFields->push(HX_CSTRING("invertV"));
	outFields->push(HX_CSTRING("disposeWhenFinishedAnimating"));
	outFields->push(HX_CSTRING("_manager"));
	outFields->push(HX_CSTRING("_animationStarted"));
	outFields->push(HX_CSTRING("_loopAnimation"));
	outFields->push(HX_CSTRING("_fromIndex"));
	outFields->push(HX_CSTRING("_toIndex"));
	outFields->push(HX_CSTRING("_delay"));
	outFields->push(HX_CSTRING("_direction"));
	outFields->push(HX_CSTRING("_time"));
	outFields->push(HX_CSTRING("_frameCount"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Sprite_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Color4*/ ,(int)offsetof(Sprite_obj,color),HX_CSTRING("color")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::tools::math::Vector3*/ ,(int)offsetof(Sprite_obj,position),HX_CSTRING("position")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,size),HX_CSTRING("size")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,angle),HX_CSTRING("angle")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,cellIndex),HX_CSTRING("cellIndex")},
	{hx::fsBool,(int)offsetof(Sprite_obj,invertU),HX_CSTRING("invertU")},
	{hx::fsBool,(int)offsetof(Sprite_obj,invertV),HX_CSTRING("invertV")},
	{hx::fsBool,(int)offsetof(Sprite_obj,disposeWhenFinishedAnimating),HX_CSTRING("disposeWhenFinishedAnimating")},
	{hx::fsObject /*::com::gamestudiohx::babylonhx::sprites::SpriteManager*/ ,(int)offsetof(Sprite_obj,_manager),HX_CSTRING("_manager")},
	{hx::fsBool,(int)offsetof(Sprite_obj,_animationStarted),HX_CSTRING("_animationStarted")},
	{hx::fsBool,(int)offsetof(Sprite_obj,_loopAnimation),HX_CSTRING("_loopAnimation")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,_fromIndex),HX_CSTRING("_fromIndex")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,_toIndex),HX_CSTRING("_toIndex")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,_delay),HX_CSTRING("_delay")},
	{hx::fsInt,(int)offsetof(Sprite_obj,_direction),HX_CSTRING("_direction")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,_time),HX_CSTRING("_time")},
	{hx::fsInt,(int)offsetof(Sprite_obj,_frameCount),HX_CSTRING("_frameCount")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("color"),
	HX_CSTRING("position"),
	HX_CSTRING("size"),
	HX_CSTRING("angle"),
	HX_CSTRING("cellIndex"),
	HX_CSTRING("invertU"),
	HX_CSTRING("invertV"),
	HX_CSTRING("disposeWhenFinishedAnimating"),
	HX_CSTRING("_manager"),
	HX_CSTRING("_animationStarted"),
	HX_CSTRING("_loopAnimation"),
	HX_CSTRING("_fromIndex"),
	HX_CSTRING("_toIndex"),
	HX_CSTRING("_delay"),
	HX_CSTRING("_direction"),
	HX_CSTRING("_time"),
	HX_CSTRING("_frameCount"),
	HX_CSTRING("playAnimation"),
	HX_CSTRING("stopAnimation"),
	HX_CSTRING("animate"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#endif

Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gamestudiohx.babylonhx.sprites.Sprite"), hx::TCanCast< Sprite_obj> ,sStaticFields,sMemberFields,
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

void Sprite_obj::__boot()
{
}

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace sprites
