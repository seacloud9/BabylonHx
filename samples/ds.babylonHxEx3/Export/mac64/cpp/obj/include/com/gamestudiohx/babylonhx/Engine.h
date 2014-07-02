#ifndef INCLUDED_com_gamestudiohx_babylonhx_Engine
#define INCLUDED_com_gamestudiohx_babylonhx_Engine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Engine)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,cameras,Camera)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Effect)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BabylonTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,Texture)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,BabylonGLBuffer)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,postprocess,PostProcess)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Color3)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Plane)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Viewport)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DirectRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,OpenGLView)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,gl,GLObject)
HX_DECLARE_CLASS2(openfl,gl,GLProgram)
HX_DECLARE_CLASS2(openfl,gl,GLShader)
HX_DECLARE_CLASS2(openfl,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,utils,Float32Array)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace com{
namespace gamestudiohx{
namespace babylonhx{


class HXCPP_CLASS_ATTRIBUTES  Engine_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Engine_obj OBJ_;
		Engine_obj();
		Void __construct(::openfl::display::Sprite canvas,bool antialias);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Engine_obj > __new(::openfl::display::Sprite canvas,bool antialias);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Engine_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Engine"); }

		bool forceWireframe;
		bool cullBackFaces;
		Array< ::Dynamic > scenes;
		int _hardwareScalingLevel;
		Float _aspectRatio;
		::com::gamestudiohx::babylonhx::tools::math::Viewport _cachedViewport;
		Dynamic _caps;
		bool _alphaTest;
		bool _runningLoop;
		Array< ::Dynamic > _loadedTexturesCache;
		Array< ::Dynamic > _activeTexturesCache;
		::com::gamestudiohx::babylonhx::materials::Effect _currentEffect;
		Dynamic _currentState;
		::haxe::ds::StringMap _compiledEffects;
		::com::gamestudiohx::babylonhx::materials::Effect _cachedEffectForVertexBuffers;
		Dynamic _cachedVertexBuffers;
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _cachedIndexBuffer;
		::openfl::display::Sprite _renderingCanvas;
		bool isFullscreen;
		bool isPointerLock;
		Dynamic _renderFunction;
		Dynamic &_renderFunction_dyn() { return _renderFunction;}
		::openfl::display::BitmapData _workingCanvas;
		::openfl::display::OpenGLView _workingContext;
		virtual Float getAspectRatio( ::com::gamestudiohx::babylonhx::cameras::Camera camera);
		Dynamic getAspectRatio_dyn();

		virtual int getRenderWidth( );
		Dynamic getRenderWidth_dyn();

		virtual int getRenderHeight( );
		Dynamic getRenderHeight_dyn();

		virtual ::openfl::display::Sprite getRenderingCanvas( );
		Dynamic getRenderingCanvas_dyn();

		virtual Void setHardwareScalingLevel( int level);
		Dynamic setHardwareScalingLevel_dyn();

		virtual int getHardwareScalingLevel( );
		Dynamic getHardwareScalingLevel_dyn();

		virtual Array< ::Dynamic > getLoadedTexturesCache( );
		Dynamic getLoadedTexturesCache_dyn();

		virtual Dynamic getCaps( );
		Dynamic getCaps_dyn();

		virtual Void stopRenderLoop( );
		Dynamic stopRenderLoop_dyn();

		virtual Void _renderLoop( ::openfl::geom::Rectangle rect);
		Dynamic _renderLoop_dyn();

		virtual Void runRenderLoop( Dynamic renderFunction);
		Dynamic runRenderLoop_dyn();

		virtual Void switchFullscreen( Dynamic requestPointerLock);
		Dynamic switchFullscreen_dyn();

		virtual Void clear( Dynamic color,bool backBuffer,bool depthStencil);
		Dynamic clear_dyn();

		virtual Void setViewport( ::com::gamestudiohx::babylonhx::tools::math::Viewport viewport,hx::Null< Float >  requiredWidth,hx::Null< Float >  requiredHeight);
		Dynamic setViewport_dyn();

		virtual Void setDirectViewport( Float x,Float y,Float width,Float height);
		Dynamic setDirectViewport_dyn();

		virtual Void beginFrame( );
		Dynamic beginFrame_dyn();

		virtual Void endFrame( );
		Dynamic endFrame_dyn();

		virtual Void resize( );
		Dynamic resize_dyn();

		virtual Void bindFramebuffer( ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texture);
		Dynamic bindFramebuffer_dyn();

		virtual Void unBindFramebuffer( ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texture);
		Dynamic unBindFramebuffer_dyn();

		virtual Void flushFramebuffer( );
		Dynamic flushFramebuffer_dyn();

		virtual Void restoreDefaultFramebuffer( );
		Dynamic restoreDefaultFramebuffer_dyn();

		virtual ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer createVertexBuffer( Array< Float > vertices);
		Dynamic createVertexBuffer_dyn();

		virtual ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer createDynamicVertexBuffer( int capacity);
		Dynamic createDynamicVertexBuffer_dyn();

		virtual Void updateDynamicVertexBuffer( ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer vertexBuffer,Dynamic vertices,hx::Null< int >  length);
		Dynamic updateDynamicVertexBuffer_dyn();

		virtual ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer createIndexBuffer( Array< int > indices);
		Dynamic createIndexBuffer_dyn();

		virtual Void bindBuffers( ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer vertexBuffer,::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer indexBuffer,Array< int > vertexDeclaration,int vertexStrideSize,::com::gamestudiohx::babylonhx::materials::Effect effect);
		Dynamic bindBuffers_dyn();

		virtual Void bindMultiBuffers( ::haxe::ds::StringMap vertexBuffers,::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer indexBuffer,::com::gamestudiohx::babylonhx::materials::Effect effect);
		Dynamic bindMultiBuffers_dyn();

		virtual bool _releaseBuffer( ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer buffer);
		Dynamic _releaseBuffer_dyn();

		virtual Void deleteInstancesBuffer( ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer buffer);
		Dynamic deleteInstancesBuffer_dyn();

		virtual Void updateAndBindInstancesBuffer( ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer instancesBuffer,::openfl::utils::Float32Array data,Array< int > offsetLocations);
		Dynamic updateAndBindInstancesBuffer_dyn();

		virtual Void unBindInstancesBuffer( ::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer instancesBuffer,Array< int > offsetLocations);
		Dynamic unBindInstancesBuffer_dyn();

		virtual Void draw( bool useTriangles,int indexStart,int indexCount,Dynamic instancesCount);
		Dynamic draw_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::Effect createEffect( Dynamic baseName,Array< ::String > attributesNames,Array< ::String > uniformsNames,Array< ::String > samplers,::String defines,Array< ::String > optionalDefines);
		Dynamic createEffect_dyn();

		virtual ::openfl::gl::GLShader compileShader( ::String source,::String type,::String defines);
		Dynamic compileShader_dyn();

		virtual ::openfl::gl::GLProgram createShaderProgram( ::String vertexCode,::String fragmentCode,::String defines);
		Dynamic createShaderProgram_dyn();

		virtual Dynamic getUniforms( ::openfl::gl::GLProgram shaderProgram,Array< ::String > uniformsNames);
		Dynamic getUniforms_dyn();

		virtual Array< int > getAttributes( ::openfl::gl::GLProgram shaderProgram,Array< ::String > attributesNames);
		Dynamic getAttributes_dyn();

		virtual Void enableEffect( ::com::gamestudiohx::babylonhx::materials::Effect effect);
		Dynamic enableEffect_dyn();

		virtual Void setArray( Dynamic uniform,Array< Float > array);
		Dynamic setArray_dyn();

		virtual Void setMatrices( Dynamic uniform,Array< Float > matrices);
		Dynamic setMatrices_dyn();

		virtual Void setMatrix( Dynamic uniform,::com::gamestudiohx::babylonhx::tools::math::Matrix matrix);
		Dynamic setMatrix_dyn();

		virtual Void setFloat( Dynamic uniform,Float value);
		Dynamic setFloat_dyn();

		virtual Void setFloat2( Dynamic uniform,Float x,Float y);
		Dynamic setFloat2_dyn();

		virtual Void setFloat3( Dynamic uniform,Float x,Float y,Float z);
		Dynamic setFloat3_dyn();

		virtual Void setBool( Dynamic uniform,bool _bool);
		Dynamic setBool_dyn();

		virtual Void setFloat4( Dynamic uniform,Float x,Float y,Float z,Float w);
		Dynamic setFloat4_dyn();

		virtual Void setColor3( Dynamic uniform,::com::gamestudiohx::babylonhx::tools::math::Color3 color3);
		Dynamic setColor3_dyn();

		virtual Void setColor4( Dynamic uniform,::com::gamestudiohx::babylonhx::tools::math::Color3 color3,Float alpha);
		Dynamic setColor4_dyn();

		virtual Void setState( bool culling);
		Dynamic setState_dyn();

		virtual Void setDepthBuffer( bool enable);
		Dynamic setDepthBuffer_dyn();

		virtual Void setDepthWrite( bool enable);
		Dynamic setDepthWrite_dyn();

		virtual Void setColorWrite( bool enable);
		Dynamic setColorWrite_dyn();

		virtual Void setAlphaMode( int mode);
		Dynamic setAlphaMode_dyn();

		virtual Void setAlphaTesting( bool enable);
		Dynamic setAlphaTesting_dyn();

		virtual bool getAlphaTesting( );
		Dynamic getAlphaTesting_dyn();

		virtual Void wipeCaches( );
		Dynamic wipeCaches_dyn();

		virtual int getExponantOfTwo( int value,int max);
		Dynamic getExponantOfTwo_dyn();

		virtual ::openfl::display::BitmapData getScaled( ::openfl::display::BitmapData source,int newWidth,int newHeight);
		Dynamic getScaled_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture createTexture( ::String url,Dynamic noMipmap,Dynamic invertY,::com::gamestudiohx::babylonhx::Scene scene);
		Dynamic createTexture_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture createDynamicTexture( int width,int height,bool generateMipMaps);
		Dynamic createDynamicTexture_dyn();

		virtual Void updateDynamicTexture( ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texture,::openfl::display::BitmapData canvas,int invertY);
		Dynamic updateDynamicTexture_dyn();

		virtual Void updateVideoTexture( ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texture,Dynamic video);
		Dynamic updateVideoTexture_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture createRenderTargetTexture( Dynamic size,Dynamic options);
		Dynamic createRenderTargetTexture_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture createCubeTexture( ::String rootUrl,::com::gamestudiohx::babylonhx::Scene scene,Array< ::String > extensions);
		Dynamic createCubeTexture_dyn();

		virtual Void _releaseTexture( ::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texture);
		Dynamic _releaseTexture_dyn();

		virtual Void bindSamplers( ::com::gamestudiohx::babylonhx::materials::Effect effect);
		Dynamic bindSamplers_dyn();

		virtual Void _bindTexture( int channel,::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture texture);
		Dynamic _bindTexture_dyn();

		virtual Void setTextureFromPostProcess( int channel,::com::gamestudiohx::babylonhx::postprocess::PostProcess postProcess);
		Dynamic setTextureFromPostProcess_dyn();

		virtual int getGLTexture( int channel);
		Dynamic getGLTexture_dyn();

		virtual Void setTexture( int channel,::com::gamestudiohx::babylonhx::materials::textures::Texture texture);
		Dynamic setTexture_dyn();

		virtual Void _setAnisotropicLevel( int key,::com::gamestudiohx::babylonhx::materials::textures::Texture texture);
		Dynamic _setAnisotropicLevel_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		static ::com::gamestudiohx::babylonhx::tools::math::Plane clipPlane;
		static ::String ShadersRepository;
		static int ALPHA_DISABLE;
		static int ALPHA_ADD;
		static int ALPHA_COMBINE;
		static int DELAYLOADSTATE_NONE;
		static int DELAYLOADSTATE_LOADED;
		static int DELAYLOADSTATE_LOADING;
		static int DELAYLOADSTATE_NOTLOADED;
		static Float epsilon;
		static Float collisionsEpsilon;
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx

#endif /* INCLUDED_com_gamestudiohx_babylonhx_Engine */ 
