#ifndef INCLUDED_com_gamestudiohx_babylonhx_sprites_Sprite
#define INCLUDED_com_gamestudiohx_babylonhx_sprites_Sprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,sprites,Sprite)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,sprites,SpriteManager)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Color4)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace sprites{


class HXCPP_CLASS_ATTRIBUTES  Sprite_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sprite_obj OBJ_;
		Sprite_obj();
		Void __construct(::String name,::com::gamestudiohx::babylonhx::sprites::SpriteManager manager);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Sprite_obj > __new(::String name,::com::gamestudiohx::babylonhx::sprites::SpriteManager manager);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Sprite"); }

		::String name;
		::com::gamestudiohx::babylonhx::tools::math::Color4 color;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 position;
		Float size;
		Float angle;
		Float cellIndex;
		bool invertU;
		bool invertV;
		bool disposeWhenFinishedAnimating;
		::com::gamestudiohx::babylonhx::sprites::SpriteManager _manager;
		bool _animationStarted;
		bool _loopAnimation;
		Float _fromIndex;
		Float _toIndex;
		Float _delay;
		int _direction;
		Float _time;
		int _frameCount;
		virtual Void playAnimation( Float from,Float to,bool loop,Float delay);
		Dynamic playAnimation_dyn();

		virtual Void stopAnimation( );
		Dynamic stopAnimation_dyn();

		virtual Void animate( Float deltaTime);
		Dynamic animate_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace sprites

#endif /* INCLUDED_com_gamestudiohx_babylonhx_sprites_Sprite */ 
