#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_IAnimatable
#define INCLUDED_com_gamestudiohx_babylonhx_tools_IAnimatable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,animations,Animation)
HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,tools,IAnimatable)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  IAnimatable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IAnimatable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
};

#define DELEGATE_com_gamestudiohx_babylonhx_tools_IAnimatable \


template<typename IMPL>
class IAnimatable_delegate_ : public IAnimatable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IAnimatable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_com_gamestudiohx_babylonhx_tools_IAnimatable
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools

#endif /* INCLUDED_com_gamestudiohx_babylonhx_tools_IAnimatable */ 
