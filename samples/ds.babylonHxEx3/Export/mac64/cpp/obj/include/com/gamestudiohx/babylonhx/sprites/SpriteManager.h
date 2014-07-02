#ifndef INCLUDED_com_gamestudiohx_babylonhx_sprites_SpriteManager
#define INCLUDED_com_gamestudiohx_babylonhx_sprites_SpriteManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Effect)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,Texture)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,BabylonGLBuffer)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,sprites,Sprite)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,sprites,SpriteManager)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace sprites{


class HXCPP_CLASS_ATTRIBUTES  SpriteManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SpriteManager_obj OBJ_;
		SpriteManager_obj();
		Void __construct(::String name,::String imgUrl,int capacity,int cellSize,::com::gamestudiohx::babylonhx::Scene scene,hx::Null< Float >  __o_epsilon);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SpriteManager_obj > __new(::String name,::String imgUrl,int capacity,int cellSize,::com::gamestudiohx::babylonhx::Scene scene,hx::Null< Float >  __o_epsilon);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpriteManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SpriteManager"); }

		::String name;
		int cellSize;
		int index;
		Array< ::Dynamic > sprites;
		int renderingGroupId;
		::com::gamestudiohx::babylonhx::Scene _scene;
		Array< int > _vertexDeclaration;
		int _vertexStrideSize;
		Float _epsilon;
		::com::gamestudiohx::babylonhx::materials::textures::Texture _spriteTexture;
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _vertexBuffer;
		Array< Float > _vertices;
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _indexBuffer;
		::com::gamestudiohx::babylonhx::materials::Effect _effectBase;
		::com::gamestudiohx::babylonhx::materials::Effect _effectFog;
		int _capacity;
		virtual Void onDispose( );
		Dynamic onDispose_dyn();

		virtual int render( );
		Dynamic render_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void _appendSpriteVertex( int index,::com::gamestudiohx::babylonhx::sprites::Sprite sprite,Float offsetX,Float offsetY,Float rowSize);
		Dynamic _appendSpriteVertex_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace sprites

#endif /* INCLUDED_com_gamestudiohx_babylonhx_sprites_SpriteManager */ 
