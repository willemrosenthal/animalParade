#ifndef INCLUDED_flixel_system_FlxAssets
#define INCLUDED_flixel_system_FlxAssets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flixel,system,FlxAssets)
namespace flixel{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  FlxAssets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxAssets_obj OBJ_;
		FlxAssets_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxAssets_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxAssets_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxAssets"); }

		static Void init( );
		static Dynamic init_dyn();

		static Void drawLogo( ::flash::display::Graphics graph);
		static Dynamic drawLogo_dyn();

		static ::flash::display::BitmapData getBitmapData( ::String id);
		static Dynamic getBitmapData_dyn();

		static Void cacheSounds( );
		static Dynamic cacheSounds_dyn();

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxAssets */ 
