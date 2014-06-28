#ifndef INCLUDED_com_gamestudiohx_babylonhx_layer_Layer
#define INCLUDED_com_gamestudiohx_babylonhx_layer_Layer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,layer,Layer)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Effect)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,Texture)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,BabylonGLBuffer)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Color4)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace layer{


class HXCPP_CLASS_ATTRIBUTES  Layer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Layer_obj OBJ_;
		Layer_obj();
		Void __construct(::String name,::String imgUrl,::com::gamestudiohx::babylonhx::Scene scene,hx::Null< bool >  __o_isBackground,::com::gamestudiohx::babylonhx::tools::math::Color4 color);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Layer_obj > __new(::String name,::String imgUrl,::com::gamestudiohx::babylonhx::Scene scene,hx::Null< bool >  __o_isBackground,::com::gamestudiohx::babylonhx::tools::math::Color4 color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Layer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Layer"); }

		::String name;
		::com::gamestudiohx::babylonhx::materials::textures::Texture texture;
		bool isBackground;
		::com::gamestudiohx::babylonhx::tools::math::Color4 color;
		::com::gamestudiohx::babylonhx::Scene _scene;
		Array< Float > vertices;
		Array< int > indicies;
		Dynamic _indexBuffer;
		::com::gamestudiohx::babylonhx::materials::Effect _effect;
		Array< int > _vertexDeclaration;
		int _vertexStrideSize;
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _vertexBuffer;
		Dynamic onDispose;
		Dynamic &onDispose_dyn() { return onDispose;}
		virtual Void render( );
		Dynamic render_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace layer

#endif /* INCLUDED_com_gamestudiohx_babylonhx_layer_Layer */ 
