#ifndef INCLUDED_com_gamestudiohx_babylonhx_materials_Effect
#define INCLUDED_com_gamestudiohx_babylonhx_materials_Effect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Engine)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Effect)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BabylonTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,Texture)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,postprocess,PostProcess)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Color3)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector2)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,gl,GLObject)
HX_DECLARE_CLASS2(openfl,gl,GLProgram)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace materials{


class HXCPP_CLASS_ATTRIBUTES  Effect_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Effect_obj OBJ_;
		Effect_obj();
		Void __construct(Dynamic baseName,Array< ::String > attributesNames,Array< ::String > uniformsNames,Array< ::String > samplers,::com::gamestudiohx::babylonhx::Engine engine,::String defines,Array< ::String > optionalDefines,Dynamic onCompiled,Dynamic onError);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Effect_obj > __new(Dynamic baseName,Array< ::String > attributesNames,Array< ::String > uniformsNames,Array< ::String > samplers,::com::gamestudiohx::babylonhx::Engine engine,::String defines,Array< ::String > optionalDefines,Dynamic onCompiled,Dynamic onError);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Effect_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Effect"); }

		Dynamic name;
		::com::gamestudiohx::babylonhx::Engine _engine;
		::String defines;
		Dynamic _uniforms;
		Array< ::String > _uniformsNames;
		Array< ::String > _samplers;
		bool _isReady;
		::String _compilationError;
		Array< int > _attributes;
		Array< ::String > _attributesNames;
		::haxe::ds::StringMap _valueCache;
		::openfl::gl::GLProgram _program;
		Dynamic onCompiled;
		Dynamic &onCompiled_dyn() { return onCompiled;}
		Dynamic onError;
		Dynamic &onError_dyn() { return onError;}
		virtual bool isReady( );
		Dynamic isReady_dyn();

		virtual int getAttributeLocationByName( ::String name);
		Dynamic getAttributeLocationByName_dyn();

		virtual ::openfl::gl::GLProgram getProgram( );
		Dynamic getProgram_dyn();

		virtual Array< ::String > getAttributesNames( );
		Dynamic getAttributesNames_dyn();

		virtual int getAttribute( int index);
		Dynamic getAttribute_dyn();

		virtual int getAttributesCount( );
		Dynamic getAttributesCount_dyn();

		virtual int getUniformIndex( ::String uniformName);
		Dynamic getUniformIndex_dyn();

		virtual Dynamic getUniform( ::String uniformName);
		Dynamic getUniform_dyn();

		virtual Array< ::String > getSamplers( );
		Dynamic getSamplers_dyn();

		virtual ::String getCompilationError( );
		Dynamic getCompilationError_dyn();

		virtual Void _loadVertexShader( ::String vertex,Dynamic callbackFn);
		Dynamic _loadVertexShader_dyn();

		virtual Void _loadFragmentShader( ::String fragment,Dynamic callbackFn);
		Dynamic _loadFragmentShader_dyn();

		virtual Void _prepareEffect( ::String vertexSourceCode,::String fragmentSourceCode,Array< ::String > attributesNames,::String defines,Array< ::String > optionalDefines,bool useFallback);
		Dynamic _prepareEffect_dyn();

		virtual Void _bindTexture( ::String channel,::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texture);
		Dynamic _bindTexture_dyn();

		virtual Void setTexture( ::String channel,::com::gamestudiohx::babylonhx::materials::textures::Texture texture);
		Dynamic setTexture_dyn();

		virtual Void setTextureFromPostProcess( ::String channel,::com::gamestudiohx::babylonhx::postprocess::PostProcess postProcess);
		Dynamic setTextureFromPostProcess_dyn();

		virtual Void _cacheFloat2( ::String uniformName,Float x,Float y);
		Dynamic _cacheFloat2_dyn();

		virtual Void _cacheFloat3( ::String uniformName,Float x,Float y,Float z);
		Dynamic _cacheFloat3_dyn();

		virtual Void _cacheFloat4( ::String uniformName,Float x,Float y,Float z,Float w);
		Dynamic _cacheFloat4_dyn();

		virtual Void setMatrices( ::String uniformName,Array< Float > matrices);
		Dynamic setMatrices_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::Effect setArray( ::String uniformName,Array< Float > array);
		Dynamic setArray_dyn();

		virtual Void setMatrix( ::String uniformName,::com::gamestudiohx::babylonhx::tools::math::Matrix matrix);
		Dynamic setMatrix_dyn();

		virtual Void setFloat( ::String uniformName,Float value);
		Dynamic setFloat_dyn();

		virtual Void setBool( ::String uniformName,bool _bool);
		Dynamic setBool_dyn();

		virtual Void setVector2( ::String uniformName,::com::gamestudiohx::babylonhx::tools::math::Vector2 vector2);
		Dynamic setVector2_dyn();

		virtual Void setFloat2( ::String uniformName,Float x,Float y);
		Dynamic setFloat2_dyn();

		virtual Void setVector3( ::String uniformName,::com::gamestudiohx::babylonhx::tools::math::Vector3 vector3);
		Dynamic setVector3_dyn();

		virtual Void setFloat3( ::String uniformName,Float x,Float y,Float z);
		Dynamic setFloat3_dyn();

		virtual Void setFloat4( ::String uniformName,Float x,Float y,Float z,Float w);
		Dynamic setFloat4_dyn();

		virtual Void setColor3( ::String uniformName,::com::gamestudiohx::babylonhx::tools::math::Color3 color3);
		Dynamic setColor3_dyn();

		virtual Void setColor4( ::String uniformName,::com::gamestudiohx::babylonhx::tools::math::Color3 color3,Float alpha);
		Dynamic setColor4_dyn();

		static ::haxe::ds::StringMap ShadersStore;
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace materials

#endif /* INCLUDED_com_gamestudiohx_babylonhx_materials_Effect */ 
