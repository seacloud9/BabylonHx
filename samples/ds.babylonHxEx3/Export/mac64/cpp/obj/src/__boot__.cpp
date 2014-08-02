#include <hxcpp.h>

#include <sys/io/FileOutput.h>
#include <sys/FileSystem.h>
#include <openfl/utils/WeakRef.h>
#include <openfl/utils/UInt8Array.h>
#include <openfl/utils/Timer.h>
#include <openfl/utils/Int32Array.h>
#include <openfl/utils/Int16Array.h>
#include <openfl/utils/Float32Array.h>
#include <openfl/utils/Endian.h>
#include <openfl/utils/CompressionAlgorithm.h>
#include <openfl/utils/ByteArray.h>
#include <openfl/utils/IDataInput.h>
#include <openfl/utils/IDataOutput.h>
#include <openfl/utils/ArrayBufferView.h>
#include <openfl/utils/IMemoryRange.h>
#include <openfl/ui/Keyboard.h>
#include <openfl/text/TextLineMetrics.h>
#include <openfl/text/TextFormat.h>
#include <openfl/text/TextFieldType.h>
#include <openfl/text/TextFieldAutoSize.h>
#include <openfl/text/GridFitType.h>
#include <openfl/text/FontType.h>
#include <openfl/text/FontStyle.h>
#include <openfl/text/Font.h>
#include <openfl/text/AntiAliasType.h>
#include <openfl/system/SecurityDomain.h>
#include <openfl/system/ScreenMode.h>
#include <openfl/system/PixelFormat.h>
#include <openfl/system/LoaderContext.h>
#include <openfl/system/Capabilities.h>
#include <openfl/system/ApplicationDomain.h>
#include <openfl/net/URLVariables.h>
#include <openfl/net/URLRequestMethod.h>
#include <openfl/net/URLRequestHeader.h>
#include <openfl/net/URLRequest.h>
#include <openfl/net/URLLoaderDataFormat.h>
#include <openfl/media/SoundTransform.h>
#include <openfl/media/SoundLoaderContext.h>
#include <openfl/media/AudioThreadState.h>
#include <openfl/media/SoundChannel.h>
#include <openfl/media/InternalAudioType.h>
#include <openfl/media/Sound.h>
#include <openfl/media/ID3Info.h>
#include <openfl/gl/GLTexture.h>
#include <openfl/gl/GLShader.h>
#include <openfl/gl/GLRenderbuffer.h>
#include <openfl/gl/GLProgram.h>
#include <openfl/gl/GLFramebuffer.h>
#include <openfl/gl/GLBuffer.h>
#include <openfl/gl/GLObject.h>
#include <openfl/gl/_GL/Float32Data_Impl_.h>
#include <openfl/gl/GL.h>
#include <openfl/geom/Vector3D.h>
#include <openfl/geom/Transform.h>
#include <openfl/geom/Rectangle.h>
#include <openfl/geom/Matrix3D.h>
#include <openfl/geom/Matrix.h>
#include <openfl/geom/ColorTransform.h>
#include <openfl/filters/BitmapFilter.h>
#include <openfl/events/UncaughtErrorEvents.h>
#include <openfl/events/UncaughtErrorEvent.h>
#include <openfl/events/TimerEvent.h>
#include <openfl/events/SystemEvent.h>
#include <openfl/events/SampleDataEvent.h>
#include <openfl/events/ProgressEvent.h>
#include <openfl/events/KeyboardEvent.h>
#include <openfl/events/JoystickEvent.h>
#include <openfl/events/IOErrorEvent.h>
#include <openfl/events/HTTPStatusEvent.h>
#include <openfl/events/FocusEvent.h>
#include <openfl/events/EventPhase.h>
#include <openfl/events/Listener.h>
#include <openfl/events/ErrorEvent.h>
#include <openfl/events/TextEvent.h>
#include <openfl/errors/RangeError.h>
#include <openfl/errors/EOFError.h>
#include <openfl/errors/ArgumentError.h>
#include <openfl/errors/Error.h>
#include <openfl/display/TriangleCulling.h>
#include <openfl/display/Tilesheet.h>
#include <openfl/geom/Point.h>
#include <openfl/display/StageScaleMode.h>
#include <openfl/display/StageQuality.h>
#include <openfl/display/StageDisplayState.h>
#include <openfl/display/StageAlign.h>
#include <openfl/display/TouchInfo.h>
#include <openfl/display/SpreadMethod.h>
#include <openfl/display/Shape.h>
#include <openfl/display/PixelSnapping.h>
#include <openfl/display/OpenGLView.h>
#include <openfl/display/MovieClip.h>
#include <openfl/display/ManagedStage.h>
#include <openfl/display/Stage.h>
#include <openfl/events/TouchEvent.h>
#include <openfl/events/MouseEvent.h>
#include <openfl/events/Event.h>
#include <openfl/display/LoaderInfo.h>
#include <openfl/net/URLLoader.h>
#include <openfl/display/Loader.h>
#include <openfl/display/LineScaleMode.h>
#include <openfl/display/JointStyle.h>
#include <openfl/display/InterpolationMethod.h>
#include <openfl/display/IGraphicsData.h>
#include <openfl/display/GraphicsPathWinding.h>
#include <openfl/display/Graphics.h>
#include <openfl/display/GradientType.h>
#include <openfl/display/FrameLabel.h>
#include <openfl/display/FPS.h>
#include <openfl/text/TextField.h>
#include <openfl/display/DirectRenderer.h>
#include <openfl/display/CapsStyle.h>
#include <openfl/display/BlendMode.h>
#include <openfl/display/OptimizedPerlin.h>
#include <openfl/display/BitmapData.h>
#include <openfl/display/Bitmap.h>
#include <openfl/_Vector/Vector_Impl_.h>
#include <openfl/Memory.h>
#include <openfl/AssetType.h>
#include <openfl/AssetData.h>
#include <openfl/Assets.h>
#include <openfl/AssetCache.h>
#include <haxe/zip/Uncompress.h>
#include <haxe/zip/FlushMode.h>
#include <haxe/zip/Compress.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/format/JsonParser.h>
#include <haxe/ds/StringMap.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/Unserializer.h>
#include <haxe/Timer.h>
#include <haxe/Resource.h>
#include <haxe/Log.h>
#include <haxe/CallStack.h>
#include <haxe/StackItem.h>
#include <cpp/vm/Thread.h>
#include <cpp/vm/Mutex.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <com/gamestudiohx/babylonhx/tools/math/Viewport.h>
#include <com/gamestudiohx/babylonhx/tools/math/Vector2.h>
#include <com/gamestudiohx/babylonhx/tools/math/Ray.h>
#include <com/gamestudiohx/babylonhx/tools/math/Quaternion.h>
#include <com/gamestudiohx/babylonhx/tools/math/Plane.h>
#include <com/gamestudiohx/babylonhx/tools/math/Matrix.h>
#include <com/gamestudiohx/babylonhx/tools/math/Frustum.h>
#include <com/gamestudiohx/babylonhx/tools/math/Color4.h>
#include <com/gamestudiohx/babylonhx/tools/math/Color3.h>
#include <com/gamestudiohx/babylonhx/tools/Tools.h>
#include <com/gamestudiohx/babylonhx/tools/Axis.h>
#include <com/gamestudiohx/babylonhx/tools/math/Vector3.h>
#include <com/gamestudiohx/babylonhx/tools/Space.h>
#include <com/gamestudiohx/babylonhx/tools/IAnimatable.h>
#include <com/gamestudiohx/babylonhx/tools/SmartArray.h>
#include <com/gamestudiohx/babylonhx/tools/SceneLoader.h>
#include <com/gamestudiohx/babylonhx/sprites/SpriteManager.h>
#include <com/gamestudiohx/babylonhx/sprites/Sprite.h>
#include <com/gamestudiohx/babylonhx/rendering/RenderingManager.h>
#include <com/gamestudiohx/babylonhx/rendering/RenderingGroup.h>
#include <com/gamestudiohx/babylonhx/postprocess/RefractionPostProcess.h>
#include <com/gamestudiohx/babylonhx/postprocess/PostProcessManager.h>
#include <com/gamestudiohx/babylonhx/postprocess/PostProcess.h>
#include <com/gamestudiohx/babylonhx/particles/ParticleSystem.h>
#include <com/gamestudiohx/babylonhx/particles/Particle.h>
#include <com/gamestudiohx/babylonhx/mesh/VertexData.h>
#include <com/gamestudiohx/babylonhx/mesh/VertexBuffer.h>
#include <com/gamestudiohx/babylonhx/mesh/SubMesh.h>
#include <com/gamestudiohx/babylonhx/mesh/Mesh.h>
#include <com/gamestudiohx/babylonhx/mesh/InstancesBatch.h>
#include <com/gamestudiohx/babylonhx/mesh/InstancedMesh.h>
#include <com/gamestudiohx/babylonhx/mesh/Geometry.h>
#include <com/gamestudiohx/babylonhx/mesh/IGetSetVerticesData.h>
#include <com/gamestudiohx/babylonhx/mesh/AbstractMesh.h>
#include <com/gamestudiohx/babylonhx/mesh/BabylonGLBuffer.h>
#include <com/gamestudiohx/babylonhx/materials/textures/BabylonTexture.h>
#include <com/gamestudiohx/babylonhx/materials/textures/MirrorTexture.h>
#include <com/gamestudiohx/babylonhx/materials/textures/RenderTargetTexture.h>
#include <com/gamestudiohx/babylonhx/materials/textures/DynamicTexture.h>
#include <com/gamestudiohx/babylonhx/materials/textures/CubeTexture.h>
#include <com/gamestudiohx/babylonhx/materials/textures/Texture.h>
#include <com/gamestudiohx/babylonhx/materials/textures/BaseTexture.h>
#include <com/gamestudiohx/babylonhx/materials/StandardMaterial.h>
#include <com/gamestudiohx/babylonhx/materials/ShaderMaterial.h>
#include <com/gamestudiohx/babylonhx/materials/MultiMaterial.h>
#include <com/gamestudiohx/babylonhx/materials/Material.h>
#include <com/gamestudiohx/babylonhx/materials/Effect.h>
#include <com/gamestudiohx/babylonhx/lights/shadows/ShadowGenerator.h>
#include <com/gamestudiohx/babylonhx/lights/SpotLight.h>
#include <com/gamestudiohx/babylonhx/lights/PointLight.h>
#include <com/gamestudiohx/babylonhx/lights/HemisphericLight.h>
#include <com/gamestudiohx/babylonhx/lights/DirectionalLight.h>
#include <com/gamestudiohx/babylonhx/lights/Light.h>
#include <com/gamestudiohx/babylonhx/lensflare/LensFlareSystem.h>
#include <com/gamestudiohx/babylonhx/lensflare/LensFlare.h>
#include <com/gamestudiohx/babylonhx/layer/Layer.h>
#include <com/gamestudiohx/babylonhx/culling/octrees/OctreeBlock.h>
#include <com/gamestudiohx/babylonhx/culling/octrees/Octree.h>
#include <com/gamestudiohx/babylonhx/culling/BoundingSphere.h>
#include <com/gamestudiohx/babylonhx/culling/BoundingInfo.h>
#include <com/gamestudiohx/babylonhx/culling/BoundingBox.h>
#include <com/gamestudiohx/babylonhx/collisions/PickingInfo.h>
#include <com/gamestudiohx/babylonhx/collisions/Collider.h>
#include <com/gamestudiohx/babylonhx/cameras/FreeCamera.h>
#include <com/gamestudiohx/babylonhx/cameras/ArcRotateCamera.h>
#include <com/gamestudiohx/babylonhx/cameras/Camera.h>
#include <com/gamestudiohx/babylonhx/bones/Skeleton.h>
#include <com/gamestudiohx/babylonhx/bones/Bone.h>
#include <com/gamestudiohx/babylonhx/animations/_Animatable.h>
#include <com/gamestudiohx/babylonhx/animations/Animation.h>
#include <com/gamestudiohx/babylonhx/Scene.h>
#include <com/gamestudiohx/babylonhx/Node.h>
#include <com/gamestudiohx/babylonhx/Engine.h>
#include <Type.h>
#include <ValueType.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Reflect.h>
#include <IMap.h>
#include <List.h>
#include <Lambda.h>
#include <DefaultAssetLibrary.h>
#include <openfl/AssetLibrary.h>
#include <Date.h>
#include <DocumentClass.h>
#include <Main.h>
#include <openfl/display/Sprite.h>
#include <openfl/display/DisplayObjectContainer.h>
#include <openfl/display/InteractiveObject.h>
#include <openfl/display/DisplayObject.h>
#include <openfl/Lib.h>
#include <Std.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <openfl/display/IBitmapDrawable.h>
#include <openfl/events/EventDispatcher.h>
#include <openfl/events/IEventDispatcher.h>
#include <ApplicationMain.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::sys::io::FileOutput_obj::__register();
::sys::FileSystem_obj::__register();
::openfl::utils::WeakRef_obj::__register();
::openfl::utils::UInt8Array_obj::__register();
::openfl::utils::Timer_obj::__register();
::openfl::utils::Int32Array_obj::__register();
::openfl::utils::Int16Array_obj::__register();
::openfl::utils::Float32Array_obj::__register();
::openfl::utils::Endian_obj::__register();
::openfl::utils::CompressionAlgorithm_obj::__register();
::openfl::utils::ByteArray_obj::__register();
::openfl::utils::IDataInput_obj::__register();
::openfl::utils::IDataOutput_obj::__register();
::openfl::utils::ArrayBufferView_obj::__register();
::openfl::utils::IMemoryRange_obj::__register();
::openfl::ui::Keyboard_obj::__register();
::openfl::text::TextLineMetrics_obj::__register();
::openfl::text::TextFormat_obj::__register();
::openfl::text::TextFieldType_obj::__register();
::openfl::text::TextFieldAutoSize_obj::__register();
::openfl::text::GridFitType_obj::__register();
::openfl::text::FontType_obj::__register();
::openfl::text::FontStyle_obj::__register();
::openfl::text::Font_obj::__register();
::openfl::text::AntiAliasType_obj::__register();
::openfl::system::SecurityDomain_obj::__register();
::openfl::system::ScreenMode_obj::__register();
::openfl::system::PixelFormat_obj::__register();
::openfl::system::LoaderContext_obj::__register();
::openfl::system::Capabilities_obj::__register();
::openfl::system::ApplicationDomain_obj::__register();
::openfl::net::URLVariables_obj::__register();
::openfl::net::URLRequestMethod_obj::__register();
::openfl::net::URLRequestHeader_obj::__register();
::openfl::net::URLRequest_obj::__register();
::openfl::net::URLLoaderDataFormat_obj::__register();
::openfl::media::SoundTransform_obj::__register();
::openfl::media::SoundLoaderContext_obj::__register();
::openfl::media::AudioThreadState_obj::__register();
::openfl::media::SoundChannel_obj::__register();
::openfl::media::InternalAudioType_obj::__register();
::openfl::media::Sound_obj::__register();
::openfl::media::ID3Info_obj::__register();
::openfl::gl::GLTexture_obj::__register();
::openfl::gl::GLShader_obj::__register();
::openfl::gl::GLRenderbuffer_obj::__register();
::openfl::gl::GLProgram_obj::__register();
::openfl::gl::GLFramebuffer_obj::__register();
::openfl::gl::GLBuffer_obj::__register();
::openfl::gl::GLObject_obj::__register();
::openfl::gl::_GL::Float32Data_Impl__obj::__register();
::openfl::gl::GL_obj::__register();
::openfl::geom::Vector3D_obj::__register();
::openfl::geom::Transform_obj::__register();
::openfl::geom::Rectangle_obj::__register();
::openfl::geom::Matrix3D_obj::__register();
::openfl::geom::Matrix_obj::__register();
::openfl::geom::ColorTransform_obj::__register();
::openfl::filters::BitmapFilter_obj::__register();
::openfl::events::UncaughtErrorEvents_obj::__register();
::openfl::events::UncaughtErrorEvent_obj::__register();
::openfl::events::TimerEvent_obj::__register();
::openfl::events::SystemEvent_obj::__register();
::openfl::events::SampleDataEvent_obj::__register();
::openfl::events::ProgressEvent_obj::__register();
::openfl::events::KeyboardEvent_obj::__register();
::openfl::events::JoystickEvent_obj::__register();
::openfl::events::IOErrorEvent_obj::__register();
::openfl::events::HTTPStatusEvent_obj::__register();
::openfl::events::FocusEvent_obj::__register();
::openfl::events::EventPhase_obj::__register();
::openfl::events::Listener_obj::__register();
::openfl::events::ErrorEvent_obj::__register();
::openfl::events::TextEvent_obj::__register();
::openfl::errors::RangeError_obj::__register();
::openfl::errors::EOFError_obj::__register();
::openfl::errors::ArgumentError_obj::__register();
::openfl::errors::Error_obj::__register();
::openfl::display::TriangleCulling_obj::__register();
::openfl::display::Tilesheet_obj::__register();
::openfl::geom::Point_obj::__register();
::openfl::display::StageScaleMode_obj::__register();
::openfl::display::StageQuality_obj::__register();
::openfl::display::StageDisplayState_obj::__register();
::openfl::display::StageAlign_obj::__register();
::openfl::display::TouchInfo_obj::__register();
::openfl::display::SpreadMethod_obj::__register();
::openfl::display::Shape_obj::__register();
::openfl::display::PixelSnapping_obj::__register();
::openfl::display::OpenGLView_obj::__register();
::openfl::display::MovieClip_obj::__register();
::openfl::display::ManagedStage_obj::__register();
::openfl::display::Stage_obj::__register();
::openfl::events::TouchEvent_obj::__register();
::openfl::events::MouseEvent_obj::__register();
::openfl::events::Event_obj::__register();
::openfl::display::LoaderInfo_obj::__register();
::openfl::net::URLLoader_obj::__register();
::openfl::display::Loader_obj::__register();
::openfl::display::LineScaleMode_obj::__register();
::openfl::display::JointStyle_obj::__register();
::openfl::display::InterpolationMethod_obj::__register();
::openfl::display::IGraphicsData_obj::__register();
::openfl::display::GraphicsPathWinding_obj::__register();
::openfl::display::Graphics_obj::__register();
::openfl::display::GradientType_obj::__register();
::openfl::display::FrameLabel_obj::__register();
::openfl::display::FPS_obj::__register();
::openfl::text::TextField_obj::__register();
::openfl::display::DirectRenderer_obj::__register();
::openfl::display::CapsStyle_obj::__register();
::openfl::display::BlendMode_obj::__register();
::openfl::display::OptimizedPerlin_obj::__register();
::openfl::display::BitmapData_obj::__register();
::openfl::display::Bitmap_obj::__register();
::openfl::_Vector::Vector_Impl__obj::__register();
::openfl::Memory_obj::__register();
::openfl::AssetType_obj::__register();
::openfl::AssetData_obj::__register();
::openfl::Assets_obj::__register();
::openfl::AssetCache_obj::__register();
::haxe::zip::Uncompress_obj::__register();
::haxe::zip::FlushMode_obj::__register();
::haxe::zip::Compress_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::format::JsonParser_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Resource_obj::__register();
::haxe::Log_obj::__register();
::haxe::CallStack_obj::__register();
::haxe::StackItem_obj::__register();
::cpp::vm::Thread_obj::__register();
::cpp::vm::Mutex_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::com::gamestudiohx::babylonhx::tools::math::Viewport_obj::__register();
::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__register();
::com::gamestudiohx::babylonhx::tools::math::Ray_obj::__register();
::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__register();
::com::gamestudiohx::babylonhx::tools::math::Plane_obj::__register();
::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__register();
::com::gamestudiohx::babylonhx::tools::math::Frustum_obj::__register();
::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__register();
::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__register();
::com::gamestudiohx::babylonhx::tools::Tools_obj::__register();
::com::gamestudiohx::babylonhx::tools::Axis_obj::__register();
::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__register();
::com::gamestudiohx::babylonhx::tools::Space_obj::__register();
::com::gamestudiohx::babylonhx::tools::IAnimatable_obj::__register();
::com::gamestudiohx::babylonhx::tools::SmartArray_obj::__register();
::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::__register();
::com::gamestudiohx::babylonhx::sprites::SpriteManager_obj::__register();
::com::gamestudiohx::babylonhx::sprites::Sprite_obj::__register();
::com::gamestudiohx::babylonhx::rendering::RenderingManager_obj::__register();
::com::gamestudiohx::babylonhx::rendering::RenderingGroup_obj::__register();
::com::gamestudiohx::babylonhx::postprocess::RefractionPostProcess_obj::__register();
::com::gamestudiohx::babylonhx::postprocess::PostProcessManager_obj::__register();
::com::gamestudiohx::babylonhx::postprocess::PostProcess_obj::__register();
::com::gamestudiohx::babylonhx::particles::ParticleSystem_obj::__register();
::com::gamestudiohx::babylonhx::particles::Particle_obj::__register();
::com::gamestudiohx::babylonhx::mesh::VertexData_obj::__register();
::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::__register();
::com::gamestudiohx::babylonhx::mesh::SubMesh_obj::__register();
::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__register();
::com::gamestudiohx::babylonhx::mesh::InstancesBatch_obj::__register();
::com::gamestudiohx::babylonhx::mesh::InstancedMesh_obj::__register();
::com::gamestudiohx::babylonhx::mesh::Geometry_obj::__register();
::com::gamestudiohx::babylonhx::mesh::IGetSetVerticesData_obj::__register();
::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::__register();
::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer_obj::__register();
::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture_obj::__register();
::com::gamestudiohx::babylonhx::materials::textures::MirrorTexture_obj::__register();
::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture_obj::__register();
::com::gamestudiohx::babylonhx::materials::textures::DynamicTexture_obj::__register();
::com::gamestudiohx::babylonhx::materials::textures::CubeTexture_obj::__register();
::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::__register();
::com::gamestudiohx::babylonhx::materials::textures::BaseTexture_obj::__register();
::com::gamestudiohx::babylonhx::materials::StandardMaterial_obj::__register();
::com::gamestudiohx::babylonhx::materials::ShaderMaterial_obj::__register();
::com::gamestudiohx::babylonhx::materials::MultiMaterial_obj::__register();
::com::gamestudiohx::babylonhx::materials::Material_obj::__register();
::com::gamestudiohx::babylonhx::materials::Effect_obj::__register();
::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator_obj::__register();
::com::gamestudiohx::babylonhx::lights::SpotLight_obj::__register();
::com::gamestudiohx::babylonhx::lights::PointLight_obj::__register();
::com::gamestudiohx::babylonhx::lights::HemisphericLight_obj::__register();
::com::gamestudiohx::babylonhx::lights::DirectionalLight_obj::__register();
::com::gamestudiohx::babylonhx::lights::Light_obj::__register();
::com::gamestudiohx::babylonhx::lensflare::LensFlareSystem_obj::__register();
::com::gamestudiohx::babylonhx::lensflare::LensFlare_obj::__register();
::com::gamestudiohx::babylonhx::layer::Layer_obj::__register();
::com::gamestudiohx::babylonhx::culling::octrees::OctreeBlock_obj::__register();
::com::gamestudiohx::babylonhx::culling::octrees::Octree_obj::__register();
::com::gamestudiohx::babylonhx::culling::BoundingSphere_obj::__register();
::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__register();
::com::gamestudiohx::babylonhx::culling::BoundingBox_obj::__register();
::com::gamestudiohx::babylonhx::collisions::PickingInfo_obj::__register();
::com::gamestudiohx::babylonhx::collisions::Collider_obj::__register();
::com::gamestudiohx::babylonhx::cameras::FreeCamera_obj::__register();
::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera_obj::__register();
::com::gamestudiohx::babylonhx::cameras::Camera_obj::__register();
::com::gamestudiohx::babylonhx::bones::Skeleton_obj::__register();
::com::gamestudiohx::babylonhx::bones::Bone_obj::__register();
::com::gamestudiohx::babylonhx::animations::_Animatable_obj::__register();
::com::gamestudiohx::babylonhx::animations::Animation_obj::__register();
::com::gamestudiohx::babylonhx::Scene_obj::__register();
::com::gamestudiohx::babylonhx::Node_obj::__register();
::com::gamestudiohx::babylonhx::Engine_obj::__register();
::Type_obj::__register();
::ValueType_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Reflect_obj::__register();
::IMap_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::DefaultAssetLibrary_obj::__register();
::openfl::AssetLibrary_obj::__register();
::Date_obj::__register();
::DocumentClass_obj::__register();
::Main_obj::__register();
::openfl::display::Sprite_obj::__register();
::openfl::display::DisplayObjectContainer_obj::__register();
::openfl::display::InteractiveObject_obj::__register();
::openfl::display::DisplayObject_obj::__register();
::openfl::Lib_obj::__register();
::Std_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::openfl::display::IBitmapDrawable_obj::__register();
::openfl::events::EventDispatcher_obj::__register();
::openfl::events::IEventDispatcher_obj::__register();
::ApplicationMain_obj::__register();
::openfl::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::vm::Mutex_obj::__boot();
::cpp::vm::Thread_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::openfl::events::IEventDispatcher_obj::__boot();
::openfl::events::EventDispatcher_obj::__boot();
::openfl::display::IBitmapDrawable_obj::__boot();
::Sys_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::Std_obj::__boot();
::openfl::Lib_obj::__boot();
::openfl::display::DisplayObject_obj::__boot();
::openfl::display::InteractiveObject_obj::__boot();
::openfl::display::DisplayObjectContainer_obj::__boot();
::openfl::display::Sprite_obj::__boot();
::Main_obj::__boot();
::DocumentClass_obj::__boot();
::Date_obj::__boot();
::openfl::AssetLibrary_obj::__boot();
::DefaultAssetLibrary_obj::__boot();
::Lambda_obj::__boot();
::List_obj::__boot();
::IMap_obj::__boot();
::Reflect_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::ValueType_obj::__boot();
::Type_obj::__boot();
::com::gamestudiohx::babylonhx::Engine_obj::__boot();
::com::gamestudiohx::babylonhx::Node_obj::__boot();
::com::gamestudiohx::babylonhx::Scene_obj::__boot();
::com::gamestudiohx::babylonhx::animations::Animation_obj::__boot();
::com::gamestudiohx::babylonhx::animations::_Animatable_obj::__boot();
::com::gamestudiohx::babylonhx::bones::Bone_obj::__boot();
::com::gamestudiohx::babylonhx::bones::Skeleton_obj::__boot();
::com::gamestudiohx::babylonhx::cameras::Camera_obj::__boot();
::com::gamestudiohx::babylonhx::cameras::ArcRotateCamera_obj::__boot();
::com::gamestudiohx::babylonhx::cameras::FreeCamera_obj::__boot();
::com::gamestudiohx::babylonhx::collisions::Collider_obj::__boot();
::com::gamestudiohx::babylonhx::collisions::PickingInfo_obj::__boot();
::com::gamestudiohx::babylonhx::culling::BoundingBox_obj::__boot();
::com::gamestudiohx::babylonhx::culling::BoundingInfo_obj::__boot();
::com::gamestudiohx::babylonhx::culling::BoundingSphere_obj::__boot();
::com::gamestudiohx::babylonhx::culling::octrees::Octree_obj::__boot();
::com::gamestudiohx::babylonhx::culling::octrees::OctreeBlock_obj::__boot();
::com::gamestudiohx::babylonhx::layer::Layer_obj::__boot();
::com::gamestudiohx::babylonhx::lensflare::LensFlare_obj::__boot();
::com::gamestudiohx::babylonhx::lensflare::LensFlareSystem_obj::__boot();
::com::gamestudiohx::babylonhx::lights::Light_obj::__boot();
::com::gamestudiohx::babylonhx::lights::DirectionalLight_obj::__boot();
::com::gamestudiohx::babylonhx::lights::HemisphericLight_obj::__boot();
::com::gamestudiohx::babylonhx::lights::PointLight_obj::__boot();
::com::gamestudiohx::babylonhx::lights::SpotLight_obj::__boot();
::com::gamestudiohx::babylonhx::lights::shadows::ShadowGenerator_obj::__boot();
::com::gamestudiohx::babylonhx::materials::Effect_obj::__boot();
::com::gamestudiohx::babylonhx::materials::Material_obj::__boot();
::com::gamestudiohx::babylonhx::materials::MultiMaterial_obj::__boot();
::com::gamestudiohx::babylonhx::materials::ShaderMaterial_obj::__boot();
::com::gamestudiohx::babylonhx::materials::StandardMaterial_obj::__boot();
::com::gamestudiohx::babylonhx::materials::textures::BaseTexture_obj::__boot();
::com::gamestudiohx::babylonhx::materials::textures::Texture_obj::__boot();
::com::gamestudiohx::babylonhx::materials::textures::CubeTexture_obj::__boot();
::com::gamestudiohx::babylonhx::materials::textures::DynamicTexture_obj::__boot();
::com::gamestudiohx::babylonhx::materials::textures::RenderTargetTexture_obj::__boot();
::com::gamestudiohx::babylonhx::materials::textures::MirrorTexture_obj::__boot();
::com::gamestudiohx::babylonhx::materials::textures::BabylonTexture_obj::__boot();
::com::gamestudiohx::babylonhx::mesh::BabylonGLBuffer_obj::__boot();
::com::gamestudiohx::babylonhx::mesh::AbstractMesh_obj::__boot();
::com::gamestudiohx::babylonhx::mesh::IGetSetVerticesData_obj::__boot();
::com::gamestudiohx::babylonhx::mesh::Geometry_obj::__boot();
::com::gamestudiohx::babylonhx::mesh::InstancedMesh_obj::__boot();
::com::gamestudiohx::babylonhx::mesh::InstancesBatch_obj::__boot();
::com::gamestudiohx::babylonhx::mesh::Mesh_obj::__boot();
::com::gamestudiohx::babylonhx::mesh::SubMesh_obj::__boot();
::com::gamestudiohx::babylonhx::mesh::VertexBuffer_obj::__boot();
::com::gamestudiohx::babylonhx::mesh::VertexData_obj::__boot();
::com::gamestudiohx::babylonhx::particles::Particle_obj::__boot();
::com::gamestudiohx::babylonhx::particles::ParticleSystem_obj::__boot();
::com::gamestudiohx::babylonhx::postprocess::PostProcess_obj::__boot();
::com::gamestudiohx::babylonhx::postprocess::PostProcessManager_obj::__boot();
::com::gamestudiohx::babylonhx::postprocess::RefractionPostProcess_obj::__boot();
::com::gamestudiohx::babylonhx::rendering::RenderingGroup_obj::__boot();
::com::gamestudiohx::babylonhx::rendering::RenderingManager_obj::__boot();
::com::gamestudiohx::babylonhx::sprites::Sprite_obj::__boot();
::com::gamestudiohx::babylonhx::sprites::SpriteManager_obj::__boot();
::com::gamestudiohx::babylonhx::tools::SceneLoader_obj::__boot();
::com::gamestudiohx::babylonhx::tools::SmartArray_obj::__boot();
::com::gamestudiohx::babylonhx::tools::IAnimatable_obj::__boot();
::com::gamestudiohx::babylonhx::tools::Space_obj::__boot();
::com::gamestudiohx::babylonhx::tools::math::Vector3_obj::__boot();
::com::gamestudiohx::babylonhx::tools::Axis_obj::__boot();
::com::gamestudiohx::babylonhx::tools::Tools_obj::__boot();
::com::gamestudiohx::babylonhx::tools::math::Color3_obj::__boot();
::com::gamestudiohx::babylonhx::tools::math::Color4_obj::__boot();
::com::gamestudiohx::babylonhx::tools::math::Frustum_obj::__boot();
::com::gamestudiohx::babylonhx::tools::math::Matrix_obj::__boot();
::com::gamestudiohx::babylonhx::tools::math::Plane_obj::__boot();
::com::gamestudiohx::babylonhx::tools::math::Quaternion_obj::__boot();
::com::gamestudiohx::babylonhx::tools::math::Ray_obj::__boot();
::com::gamestudiohx::babylonhx::tools::math::Vector2_obj::__boot();
::com::gamestudiohx::babylonhx::tools::math::Viewport_obj::__boot();
::haxe::StackItem_obj::__boot();
::haxe::CallStack_obj::__boot();
::haxe::Resource_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::ObjectMap_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::format::JsonParser_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::zip::Compress_obj::__boot();
::haxe::zip::FlushMode_obj::__boot();
::haxe::zip::Uncompress_obj::__boot();
::openfl::AssetCache_obj::__boot();
::openfl::Assets_obj::__boot();
::openfl::AssetData_obj::__boot();
::openfl::AssetType_obj::__boot();
::openfl::Memory_obj::__boot();
::openfl::_Vector::Vector_Impl__obj::__boot();
::openfl::display::Bitmap_obj::__boot();
::openfl::display::BitmapData_obj::__boot();
::openfl::display::OptimizedPerlin_obj::__boot();
::openfl::display::BlendMode_obj::__boot();
::openfl::display::CapsStyle_obj::__boot();
::openfl::display::DirectRenderer_obj::__boot();
::openfl::text::TextField_obj::__boot();
::openfl::display::FPS_obj::__boot();
::openfl::display::FrameLabel_obj::__boot();
::openfl::display::GradientType_obj::__boot();
::openfl::display::Graphics_obj::__boot();
::openfl::display::GraphicsPathWinding_obj::__boot();
::openfl::display::IGraphicsData_obj::__boot();
::openfl::display::InterpolationMethod_obj::__boot();
::openfl::display::JointStyle_obj::__boot();
::openfl::display::LineScaleMode_obj::__boot();
::openfl::display::Loader_obj::__boot();
::openfl::net::URLLoader_obj::__boot();
::openfl::display::LoaderInfo_obj::__boot();
::openfl::events::Event_obj::__boot();
::openfl::events::MouseEvent_obj::__boot();
::openfl::events::TouchEvent_obj::__boot();
::openfl::display::Stage_obj::__boot();
::openfl::display::ManagedStage_obj::__boot();
::openfl::display::MovieClip_obj::__boot();
::openfl::display::OpenGLView_obj::__boot();
::openfl::display::PixelSnapping_obj::__boot();
::openfl::display::Shape_obj::__boot();
::openfl::display::SpreadMethod_obj::__boot();
::openfl::display::TouchInfo_obj::__boot();
::openfl::display::StageAlign_obj::__boot();
::openfl::display::StageDisplayState_obj::__boot();
::openfl::display::StageQuality_obj::__boot();
::openfl::display::StageScaleMode_obj::__boot();
::openfl::geom::Point_obj::__boot();
::openfl::display::Tilesheet_obj::__boot();
::openfl::display::TriangleCulling_obj::__boot();
::openfl::errors::Error_obj::__boot();
::openfl::errors::ArgumentError_obj::__boot();
::openfl::errors::EOFError_obj::__boot();
::openfl::errors::RangeError_obj::__boot();
::openfl::events::TextEvent_obj::__boot();
::openfl::events::ErrorEvent_obj::__boot();
::openfl::events::Listener_obj::__boot();
::openfl::events::EventPhase_obj::__boot();
::openfl::events::FocusEvent_obj::__boot();
::openfl::events::HTTPStatusEvent_obj::__boot();
::openfl::events::IOErrorEvent_obj::__boot();
::openfl::events::JoystickEvent_obj::__boot();
::openfl::events::KeyboardEvent_obj::__boot();
::openfl::events::ProgressEvent_obj::__boot();
::openfl::events::SampleDataEvent_obj::__boot();
::openfl::events::SystemEvent_obj::__boot();
::openfl::events::TimerEvent_obj::__boot();
::openfl::events::UncaughtErrorEvent_obj::__boot();
::openfl::events::UncaughtErrorEvents_obj::__boot();
::openfl::filters::BitmapFilter_obj::__boot();
::openfl::geom::ColorTransform_obj::__boot();
::openfl::geom::Matrix_obj::__boot();
::openfl::geom::Matrix3D_obj::__boot();
::openfl::geom::Rectangle_obj::__boot();
::openfl::geom::Transform_obj::__boot();
::openfl::geom::Vector3D_obj::__boot();
::openfl::gl::GL_obj::__boot();
::openfl::gl::_GL::Float32Data_Impl__obj::__boot();
::openfl::gl::GLObject_obj::__boot();
::openfl::gl::GLBuffer_obj::__boot();
::openfl::gl::GLFramebuffer_obj::__boot();
::openfl::gl::GLProgram_obj::__boot();
::openfl::gl::GLRenderbuffer_obj::__boot();
::openfl::gl::GLShader_obj::__boot();
::openfl::gl::GLTexture_obj::__boot();
::openfl::media::ID3Info_obj::__boot();
::openfl::media::Sound_obj::__boot();
::openfl::media::InternalAudioType_obj::__boot();
::openfl::media::SoundChannel_obj::__boot();
::openfl::media::AudioThreadState_obj::__boot();
::openfl::media::SoundLoaderContext_obj::__boot();
::openfl::media::SoundTransform_obj::__boot();
::openfl::net::URLLoaderDataFormat_obj::__boot();
::openfl::net::URLRequest_obj::__boot();
::openfl::net::URLRequestHeader_obj::__boot();
::openfl::net::URLRequestMethod_obj::__boot();
::openfl::net::URLVariables_obj::__boot();
::openfl::system::ApplicationDomain_obj::__boot();
::openfl::system::Capabilities_obj::__boot();
::openfl::system::LoaderContext_obj::__boot();
::openfl::system::PixelFormat_obj::__boot();
::openfl::system::ScreenMode_obj::__boot();
::openfl::system::SecurityDomain_obj::__boot();
::openfl::text::AntiAliasType_obj::__boot();
::openfl::text::Font_obj::__boot();
::openfl::text::FontStyle_obj::__boot();
::openfl::text::FontType_obj::__boot();
::openfl::text::GridFitType_obj::__boot();
::openfl::text::TextFieldAutoSize_obj::__boot();
::openfl::text::TextFieldType_obj::__boot();
::openfl::text::TextFormat_obj::__boot();
::openfl::text::TextLineMetrics_obj::__boot();
::openfl::ui::Keyboard_obj::__boot();
::openfl::utils::IMemoryRange_obj::__boot();
::openfl::utils::ArrayBufferView_obj::__boot();
::openfl::utils::IDataOutput_obj::__boot();
::openfl::utils::IDataInput_obj::__boot();
::openfl::utils::ByteArray_obj::__boot();
::openfl::utils::CompressionAlgorithm_obj::__boot();
::openfl::utils::Endian_obj::__boot();
::openfl::utils::Float32Array_obj::__boot();
::openfl::utils::Int16Array_obj::__boot();
::openfl::utils::Int32Array_obj::__boot();
::openfl::utils::Timer_obj::__boot();
::openfl::utils::UInt8Array_obj::__boot();
::openfl::utils::WeakRef_obj::__boot();
::sys::FileSystem_obj::__boot();
::sys::io::FileOutput_obj::__boot();
}

