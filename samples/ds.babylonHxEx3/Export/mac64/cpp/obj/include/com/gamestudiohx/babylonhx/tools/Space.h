#ifndef INCLUDED_com_gamestudiohx_babylonhx_tools_Space
#define INCLUDED_com_gamestudiohx_babylonhx_tools_Space

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,gamestudiohx,babylonhx,tools,Space)
namespace com{
namespace gamestudiohx{
namespace babylonhx{
namespace tools{


class Space_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Space_obj OBJ_;

	public:
		Space_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("com.gamestudiohx.babylonhx.tools.Space"); }
		::String __ToString() const { return HX_CSTRING("Space.") + tag; }

		static ::com::gamestudiohx::babylonhx::tools::Space LOCAL;
		static inline ::com::gamestudiohx::babylonhx::tools::Space LOCAL_dyn() { return LOCAL; }
		static ::com::gamestudiohx::babylonhx::tools::Space WORLD;
		static inline ::com::gamestudiohx::babylonhx::tools::Space WORLD_dyn() { return WORLD; }
};

} // end namespace com
} // end namespace gamestudiohx
} // end namespace babylonhx
} // end namespace tools

#endif /* INCLUDED_com_gamestudiohx_babylonhx_tools_Space */ 
