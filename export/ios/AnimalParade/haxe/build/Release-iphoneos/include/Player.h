#ifndef INCLUDED_Player
#define INCLUDED_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Animal.h>
HX_DECLARE_CLASS0(Animal)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::Animal_obj{
	public:
		typedef ::Animal_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct(Float X,Float Y);

	public:
		static hx::ObjectPtr< Player_obj > __new(Float X,Float Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Player_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Player"); }

		virtual Void update( );

		::flixel::util::FlxPoint zeroPoint;
		Float deadzone;
};


#endif /* INCLUDED_Player */ 
