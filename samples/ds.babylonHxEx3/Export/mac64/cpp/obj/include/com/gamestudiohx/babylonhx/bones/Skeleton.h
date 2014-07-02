#ifndef INCLUDED_com_gamestudiohx_babylonhx_bones_Skeleton
#define INCLUDED_com_gamestudiohx_babylonhx_bones_Skeleton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,bones,Bone)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,bones,Skeleton)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace bones{


class HXCPP_CLASS_ATTRIBUTES  Skeleton_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Skeleton_obj OBJ_;
		Skeleton_obj();
		Void __construct(::String name,::String id,::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Skeleton_obj > __new(::String name,::String id,::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Skeleton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Skeleton"); }

		::String id;
		::String name;
		Array< ::Dynamic > bones;
		::com::gamestudiohx::babylonhx::Scene _scene;
		bool _isDirty;
		Array< Float > _transformMatrices;
		Dynamic _animatables;
		virtual Void _markAsDirty( );
		Dynamic _markAsDirty_dyn();

		virtual Array< Float > getTransformMatrices( );
		Dynamic getTransformMatrices_dyn();

		virtual Void prepare( );
		Dynamic prepare_dyn();

		virtual Dynamic getAnimatables( );
		Dynamic getAnimatables_dyn();

		virtual ::com::gamestudiohx::babylonhx::bones::Skeleton clone( ::String name,::String id);
		Dynamic clone_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace bones

#endif /* INCLUDED_com_gamestudiohx_babylonhx_bones_Skeleton */ 
