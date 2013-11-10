#ifndef INCLUDED_Global
#define INCLUDED_Global

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Global)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  Global_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Global_obj OBJ_;
		Global_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Global_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Global_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Global"); }

		static bool ini;
		static ::flixel::util::FlxPoint zeroPoint;
		static ::String music;
		static Void levelStart( );
		static Dynamic levelStart_dyn();

};


#endif /* INCLUDED_Global */ 
