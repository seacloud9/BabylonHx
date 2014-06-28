#ifndef INCLUDED_com_gamestudiohx_babylonhx_bones_Bone
#define INCLUDED_com_gamestudiohx_babylonhx_bones_Bone

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,animations,Animation)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,bones,Bone)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,bones,Skeleton)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace bones{


class HXCPP_CLASS_ATTRIBUTES  Bone_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Bone_obj OBJ_;
		Bone_obj();
		Void __construct(::String name,::com::gamestudiohx::babylonhx::bones::Skeleton skeleton,::com::gamestudiohx::babylonhx::bones::Bone parentBone,::com::gamestudiohx::babylonhx::tools::math::Matrix matrix);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Bone_obj > __new(::String name,::com::gamestudiohx::babylonhx::bones::Skeleton skeleton,::com::gamestudiohx::babylonhx::bones::Bone parentBone,::com::gamestudiohx::babylonhx::tools::math::Matrix matrix);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bone_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Bone"); }

		::String name;
		::com::gamestudiohx::babylonhx::bones::Skeleton _skeleton;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _matrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _baseMatrix;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _worldTransform;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _absoluteTransform;
		::com::gamestudiohx::babylonhx::tools::math::Matrix _invertedAbsoluteTransform;
		Array< ::Dynamic > children;
		Array< ::Dynamic > animations;
		::com::gamestudiohx::babylonhx::bones::Bone _parent;
		virtual ::com::gamestudiohx::babylonhx::bones::Bone getParent( );
		Dynamic getParent_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix getLocalMatrix( );
		Dynamic getLocalMatrix_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix getAbsoluteMatrix( );
		Dynamic getAbsoluteMatrix_dyn();

		virtual Void _updateDifferenceMatrix( );
		Dynamic _updateDifferenceMatrix_dyn();

		virtual Void updateMatrix( ::com::gamestudiohx::babylonhx::tools::math::Matrix matrix);
		Dynamic updateMatrix_dyn();

		virtual Void markAsDirty( );
		Dynamic markAsDirty_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace bones

#endif /* INCLUDED_com_gamestudiohx_babylonhx_bones_Bone */ 
