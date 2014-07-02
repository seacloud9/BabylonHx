#ifndef INCLUDED_com_gamestudiohx_babylonhx_particles_ParticleSystem
#define INCLUDED_com_gamestudiohx_babylonhx_particles_ParticleSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Engine)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,materials,Effect)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,BaseTexture)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,materials,textures,Texture)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,BabylonGLBuffer)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,particles,Particle)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,particles,ParticleSystem)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Color4)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace particles{


class HXCPP_CLASS_ATTRIBUTES  ParticleSystem_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ParticleSystem_obj OBJ_;
		ParticleSystem_obj();
		Void __construct(::String name,int capacity,::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ParticleSystem_obj > __new(::String name,int capacity,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ParticleSystem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ParticleSystem"); }

		::String name;
		::String id;
		int _capacity;
		::com::gamestudiohx::babylonhx::Scene _scene;
		::com::gamestudiohx::babylonhx::materials::Effect _effect;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 gravity;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 direction1;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 direction2;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 minEmitBox;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 maxEmitBox;
		::com::gamestudiohx::babylonhx::tools::math::Color4 color1;
		::com::gamestudiohx::babylonhx::tools::math::Color4 color2;
		::com::gamestudiohx::babylonhx::tools::math::Color4 colorDead;
		::com::gamestudiohx::babylonhx::tools::math::Color4 textureMask;
		Array< ::Dynamic > particles;
		Array< ::Dynamic > _stockParticles;
		Float _newPartsExcess;
		bool _alive;
		bool _started;
		bool _stopped;
		Float _actualFrame;
		Array< int > _vertexDeclaration;
		int _vertexStrideSize;
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _vertexBuffer;
		::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer _indexBuffer;
		Array< Float > _vertices;
		::String _cachedDefines;
		Float _scaledUpdateSpeed;
		::com::gamestudiohx::babylonhx::tools::math::Color4 _scaledColorStep;
		::com::gamestudiohx::babylonhx::tools::math::Color4 _colorDiff;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _scaledDirection;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 _scaledGravity;
		int _currentRenderId;
		int renderingGroupId;
		Dynamic emitter;
		int emitRate;
		int manualEmitCount;
		Float updateSpeed;
		Float targetStopDuration;
		bool disposeOnStop;
		Dynamic emitterId;
		virtual Dynamic get_emitterId( );
		Dynamic get_emitterId_dyn();

		Float minEmitPower;
		Float maxEmitPower;
		Float minLifeTime;
		Float maxLifeTime;
		Float minSize;
		Float maxSize;
		Float minAngularSpeed;
		Float maxAngularSpeed;
		::com::gamestudiohx::babylonhx::materials::textures::Texture particleTexture;
		Dynamic onDispose;
		Dynamic &onDispose_dyn() { return onDispose;}
		int blendMode;
		::com::gamestudiohx::babylonhx::Engine _engine;
		virtual bool isAlive( );
		Dynamic isAlive_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void _appendParticleVertex( int index,::com::gamestudiohx::babylonhx::particles::Particle particle,Float offsetX,Float offsetY);
		Dynamic _appendParticleVertex_dyn();

		virtual Void _update( int newParticles);
		Dynamic _update_dyn();

		virtual ::com::gamestudiohx::babylonhx::materials::Effect _getEffect( );
		Dynamic _getEffect_dyn();

		virtual Void animate( );
		Dynamic animate_dyn();

		virtual int render( );
		Dynamic render_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::com::gamestudiohx::babylonhx::particles::ParticleSystem clone( ::String name,Dynamic newEmitter);
		Dynamic clone_dyn();

		static int BLENDMODE_ONEONE;
		static int BLENDMODE_STANDARD;
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace particles

#endif /* INCLUDED_com_gamestudiohx_babylonhx_particles_ParticleSystem */ 
