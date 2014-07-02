#ifndef INCLUDED_com_gamestudiohx_babylonhx_Node
#define INCLUDED_com_gamestudiohx_babylonhx_Node

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Node)
HX_DECLARE_CLASS3(com,gamestudiohx,babylonhx,Scene)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Matrix)
HX_DECLARE_CLASS5(com,gamestudiohx,babylonhx,tools,math,Vector3)
namespace com{
namespace gamestudiohx{
namespace babylonhx{


class HXCPP_CLASS_ATTRIBUTES  Node_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Node_obj OBJ_;
		Node_obj();
		Void __construct(::com::gamestudiohx::babylonhx::Scene scene);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Node_obj > __new(::com::gamestudiohx::babylonhx::Scene scene);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Node_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Node"); }

		::String name;
		::String id;
		::com::gamestudiohx::babylonhx::Node parent;
		::com::gamestudiohx::babylonhx::tools::math::Vector3 position;
		int _childrenFlag;
		bool _isReady;
		bool _isEnabled;
		::com::gamestudiohx::babylonhx::Scene _scene;
		Dynamic _cache;
		virtual Void _initCache( );
		Dynamic _initCache_dyn();

		virtual Void updateCache( hx::Null< bool >  force);
		Dynamic updateCache_dyn();

		virtual Void _updateCache( hx::Null< bool >  ignoreParentClass);
		Dynamic _updateCache_dyn();

		virtual bool _isSynchronized( );
		Dynamic _isSynchronized_dyn();

		virtual Void _syncChildFlag( );
		Dynamic _syncChildFlag_dyn();

		virtual bool isSynchronizedWithParent( );
		Dynamic isSynchronizedWithParent_dyn();

		virtual bool isSynchronized( hx::Null< bool >  updateCache);
		Dynamic isSynchronized_dyn();

		virtual bool hasNewParent( hx::Null< bool >  update);
		Dynamic hasNewParent_dyn();

		virtual bool _needToSynchonizeChildren( int childFlag);
		Dynamic _needToSynchonizeChildren_dyn();

		virtual bool isReady( );
		Dynamic isReady_dyn();

		virtual bool isEnabled( );
		Dynamic isEnabled_dyn();

		virtual Void setEnabled( bool value);
		Dynamic setEnabled_dyn();

		virtual bool isDescendantOf( ::com::gamestudiohx::babylonhx::Node ancestor);
		Dynamic isDescendantOf_dyn();

		virtual Void _getDescendants( Array< ::Dynamic > list,Array< ::Dynamic > results);
		Dynamic _getDescendants_dyn();

		virtual ::com::gamestudiohx::babylonhx::tools::math::Matrix getWorldMatrix( );
		Dynamic getWorldMatrix_dyn();

		virtual Array< ::Dynamic > getDescendants( );
		Dynamic getDescendants_dyn();

};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx

#endif /* INCLUDED_com_gamestudiohx_babylonhx_Node */ 
