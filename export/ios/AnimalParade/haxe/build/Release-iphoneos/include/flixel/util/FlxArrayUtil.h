#ifndef INCLUDED_flixel_util_FlxArrayUtil
#define INCLUDED_flixel_util_FlxArrayUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS4(flixel,system,input,keyboard,FlxKey)
HX_DECLARE_CLASS4(flixel,system,layer,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,system,replay,FrameRecord)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,FlxArrayUtil)
HX_DECLARE_CLASS2(flixel,util,FlxPath)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxArrayUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxArrayUtil_obj OBJ_;
		FlxArrayUtil_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxArrayUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxArrayUtil_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxArrayUtil"); }

		static Void setLength_flixel_system_replay_FrameRecord( Array< ::Dynamic > array,int newLength);
		static Dynamic setLength_flixel_system_replay_FrameRecord_dyn();

		static Dynamic getRandom_flixel_group_FlxTypedGroup_T( Dynamic Objects,hx::Null< int >  StartIndex,hx::Null< int >  Length);
		static Dynamic getRandom_flixel_group_FlxTypedGroup_T_dyn();

		static Void setLength_flixel_system_input_keyboard_FlxKey( Array< ::Dynamic > array,int newLength);
		static Dynamic setLength_flixel_system_input_keyboard_FlxKey_dyn();

		static Void setLength_flixel_group_FlxTypedGroup_T( Dynamic array,int newLength);
		static Dynamic setLength_flixel_group_FlxTypedGroup_T_dyn();

		static int indexOf_flixel_group_FlxTypedGroup_T( Dynamic array,Dynamic whatToFind,hx::Null< int >  fromIndex);
		static Dynamic indexOf_flixel_group_FlxTypedGroup_T_dyn();

		static int indexOf_flixel_FlxCamera( Array< ::Dynamic > array,::flixel::FlxCamera whatToFind,hx::Null< int >  fromIndex);
		static Dynamic indexOf_flixel_FlxCamera_dyn();

		static Void setLength_Int( Array< int > array,int newLength);
		static Dynamic setLength_Int_dyn();

		static int indexOf_flixel_util_FlxTimer( Array< ::Dynamic > array,::flixel::util::FlxTimer whatToFind,hx::Null< int >  fromIndex);
		static Dynamic indexOf_flixel_util_FlxTimer_dyn();

		static Void setLength_Bool( Array< bool > array,int newLength);
		static Dynamic setLength_Bool_dyn();

		static Void setLength_Float( Array< Float > array,int newLength);
		static Dynamic setLength_Float_dyn();

		static Void setLength_String( Array< ::String > array,int newLength);
		static Dynamic setLength_String_dyn();

		static int indexOf_flixel_tweens_FlxTween( Array< ::Dynamic > array,::flixel::tweens::FlxTween whatToFind,hx::Null< int >  fromIndex);
		static Dynamic indexOf_flixel_tweens_FlxTween_dyn();

		static int indexOf_flixel_system_layer_frames_FlxFrame( Array< ::Dynamic > array,::flixel::system::layer::frames::FlxFrame whatToFind,hx::Null< int >  fromIndex);
		static Dynamic indexOf_flixel_system_layer_frames_FlxFrame_dyn();

		static int indexOf_Int( Array< int > array,int whatToFind,hx::Null< int >  fromIndex);
		static Dynamic indexOf_Int_dyn();

		static int indexOf_flixel_util_FlxPoint( Array< ::Dynamic > array,::flixel::util::FlxPoint whatToFind,hx::Null< int >  fromIndex);
		static Dynamic indexOf_flixel_util_FlxPoint_dyn();

		static int indexOf_flixel_util_FlxPath( Array< ::Dynamic > array,::flixel::util::FlxPath whatToFind,hx::Null< int >  fromIndex);
		static Dynamic indexOf_flixel_util_FlxPath_dyn();

		static int indexOf_flixel_util_FlxPool_T( Dynamic array,Dynamic whatToFind,hx::Null< int >  fromIndex);
		static Dynamic indexOf_flixel_util_FlxPool_T_dyn();

		static Array< int > intFromString( ::String data);
		static Dynamic intFromString_dyn();

		static Array< Float > floatFromString( ::String data);
		static Dynamic floatFromString_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxArrayUtil */ 
