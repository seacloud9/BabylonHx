#ifndef INCLUDED_com_gamestudiohx_babylonhx_mesh_IGetSetVerticesData
#define INCLUDED_com_gamestudiohx_babylonhx_mesh_IGetSetVerticesData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,mesh,IGetSetVerticesData)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace mesh{


class HXCPP_CLASS_ATTRIBUTES  IGetSetVerticesData_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IGetSetVerticesData_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual bool isVerticesDataPresent( ::String kind)=0;
		Dynamic isVerticesDataPresent_dyn();
virtual Array< Float > getVerticesData( ::String kind)=0;
		Dynamic getVerticesData_dyn();
virtual Array< int > getIndices( )=0;
		Dynamic getIndices_dyn();
virtual Void setVerticesData( ::String kind,Array< Float > data,Dynamic updatable)=0;
		Dynamic setVerticesData_dyn();
virtual Void updateVerticesData( ::String kind,Array< Float > data,Dynamic updateExtends,Dynamic makeItUnique)=0;
		Dynamic updateVerticesData_dyn();
virtual Void setIndices( Array< int > indices)=0;
		Dynamic setIndices_dyn();
};

#define DELEGATE_com_gamestudiohx_babylonhx_mesh_IGetSetVerticesData \
virtual bool isVerticesDataPresent( ::String kind) { return mDelegate->isVerticesDataPresent(kind);}  \
virtual Dynamic isVerticesDataPresent_dyn() { return mDelegate->isVerticesDataPresent_dyn();}  \
virtual Array< Float > getVerticesData( ::String kind) { return mDelegate->getVerticesData(kind);}  \
virtual Dynamic getVerticesData_dyn() { return mDelegate->getVerticesData_dyn();}  \
virtual Array< int > getIndices( ) { return mDelegate->getIndices();}  \
virtual Dynamic getIndices_dyn() { return mDelegate->getIndices_dyn();}  \
virtual Void setVerticesData( ::String kind,Array< Float > data,Dynamic updatable) { return mDelegate->setVerticesData(kind,data,updatable);}  \
virtual Dynamic setVerticesData_dyn() { return mDelegate->setVerticesData_dyn();}  \
virtual Void updateVerticesData( ::String kind,Array< Float > data,Dynamic updateExtends,Dynamic makeItUnique) { return mDelegate->updateVerticesData(kind,data,updateExtends,makeItUnique);}  \
virtual Dynamic updateVerticesData_dyn() { return mDelegate->updateVerticesData_dyn();}  \
virtual Void setIndices( Array< int > indices) { return mDelegate->setIndices(indices);}  \
virtual Dynamic setIndices_dyn() { return mDelegate->setIndices_dyn();}  \


template<typename IMPL>
class IGetSetVerticesData_delegate_ : public IGetSetVerticesData_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IGetSetVerticesData_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_com_gamestudiohx_babylonhx_mesh_IGetSetVerticesData
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace mesh

#endif /* INCLUDED_com_gamestudiohx_babylonhx_mesh_IGetSetVerticesData */ 
