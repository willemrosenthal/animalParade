#include <hxcpp.h>

#ifndef INCLUDED_Animal
#include <Animal.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_keyboard_FlxKeyboard
#include <flixel/system/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_input_mouse_FlxMouse
#include <flixel/system/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_input_mouse_FlxMouseButton
#include <flixel/system/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_ui_Accelerometer
#include <openfl/ui/Accelerometer.h>
#endif

Void Player_obj::__construct(Float X,Float Y)
{
HX_STACK_PUSH("Player::new","Player.hx",11);
{
	HX_STACK_LINE(13)
	this->deadzone = 0.13;
	HX_STACK_LINE(18)
	super::__construct(X,Y);
	HX_STACK_LINE(21)
	Dynamic data = ::openfl::ui::Accelerometer_obj::get();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(22)
	this->zeroPoint = ::flixel::util::FlxPoint_obj::__new(data->__Field(HX_CSTRING("x"),true),data->__Field(HX_CSTRING("y"),true));
	HX_STACK_LINE(23)
	::Global_obj::zeroPoint = this->zeroPoint;
}
;
	return null();
}

Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Player_obj::update( ){
{
		HX_STACK_PUSH("Player::update","Player.hx",28);
		HX_STACK_THIS(this);
		HX_STACK_LINE(29)
		this->super::update();
		HX_STACK_LINE(31)
		Dynamic data = ::openfl::ui::Accelerometer_obj::get();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(33)
		if (((::Math_obj::abs((data->__Field(HX_CSTRING("x"),true) - this->zeroPoint->x)) > this->deadzone))){
			HX_STACK_LINE(34)
			::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(34)
			_g->set_x((_g->x + (((data->__Field(HX_CSTRING("x"),true) - this->zeroPoint->x)) * (int)8)));
		}
		HX_STACK_LINE(35)
		if (((::Math_obj::abs((data->__Field(HX_CSTRING("y"),true) - this->zeroPoint->y)) > (this->deadzone * 0.7)))){
			HX_STACK_LINE(36)
			::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(36)
			_g->set_y((_g->y - (((data->__Field(HX_CSTRING("y"),true) - this->zeroPoint->y)) * (int)12)));
		}
		HX_STACK_LINE(38)
		if (((data->__Field(HX_CSTRING("x"),true) < this->zeroPoint->x))){
			HX_STACK_LINE(39)
			this->set_facing((int)1);
		}
		else{
			HX_STACK_LINE(40)
			if (((data->__Field(HX_CSTRING("x"),true) > this->zeroPoint->x))){
				HX_STACK_LINE(41)
				this->set_facing((int)16);
			}
		}
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","Player.hx",44);
				{
					HX_STACK_LINE(44)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(44)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(44)
		if ((_Function_1_1::Block())){
			HX_STACK_LINE(45)
			this->zeroPoint = ::flixel::util::FlxPoint_obj::__new(data->__Field(HX_CSTRING("x"),true),data->__Field(HX_CSTRING("y"),true));
			HX_STACK_LINE(46)
			::Global_obj::zeroPoint = this->zeroPoint;
		}
		HX_STACK_LINE(50)
		if ((::flixel::FlxG_obj::keyboard->pressed(HX_CSTRING("LEFT"),HX_CSTRING("A")))){
			HX_STACK_LINE(51)
			::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(51)
			_g->set_x((_g->x - (int)3));
		}
		else{
			HX_STACK_LINE(52)
			if ((::flixel::FlxG_obj::keyboard->pressed(HX_CSTRING("RIGHT"),HX_CSTRING("D")))){
				HX_STACK_LINE(53)
				::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(53)
				_g->set_x((_g->x + (int)3));
			}
		}
		HX_STACK_LINE(55)
		if ((::flixel::FlxG_obj::keyboard->pressed(HX_CSTRING("UP"),HX_CSTRING("W")))){
			HX_STACK_LINE(56)
			::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			_g->set_y((_g->y - (int)3));
		}
		else{
			HX_STACK_LINE(57)
			if ((::flixel::FlxG_obj::keyboard->pressed(HX_CSTRING("DOWN"),HX_CSTRING("S")))){
				HX_STACK_LINE(58)
				::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(58)
				_g->set_y((_g->y + (int)3));
			}
		}
	}
return null();
}



Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(zeroPoint,"zeroPoint");
	HX_MARK_MEMBER_NAME(deadzone,"deadzone");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zeroPoint,"zeroPoint");
	HX_VISIT_MEMBER_NAME(deadzone,"deadzone");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { return deadzone; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zeroPoint") ) { return zeroPoint; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { deadzone=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zeroPoint") ) { zeroPoint=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zeroPoint"));
	outFields->push(HX_CSTRING("deadzone"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("zeroPoint"),
	HX_CSTRING("deadzone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Player_obj::__boot()
{
}

