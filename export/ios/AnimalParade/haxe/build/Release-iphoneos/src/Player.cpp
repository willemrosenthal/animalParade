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
	HX_STACK_LINE(19)
	{
		HX_STACK_LINE(19)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		_g->set_y((_g->y + ((this->height - (int)6))));
	}
	HX_STACK_LINE(20)
	{
		HX_STACK_LINE(20)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(20)
		_g->set_x((_g->x + (((this->width * 0.5) - (int)7))));
	}
	HX_STACK_LINE(21)
	this->set_width((int)12);
	HX_STACK_LINE(22)
	this->set_height((int)8);
	HX_STACK_LINE(25)
	Dynamic data = ::openfl::ui::Accelerometer_obj::get();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(26)
	this->zeroPoint = ::flixel::util::FlxPoint_obj::__new(data->__Field(HX_CSTRING("x"),true),data->__Field(HX_CSTRING("y"),true));
	HX_STACK_LINE(27)
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
		HX_STACK_PUSH("Player::update","Player.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(33)
		this->super::update();
		HX_STACK_LINE(35)
		Dynamic data = ::openfl::ui::Accelerometer_obj::get();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(37)
		if (((::Math_obj::abs((data->__Field(HX_CSTRING("x"),true) - this->zeroPoint->x)) > this->deadzone))){
			HX_STACK_LINE(38)
			::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(38)
			_g->set_x((_g->x + (((data->__Field(HX_CSTRING("x"),true) - this->zeroPoint->x)) * (int)8)));
		}
		HX_STACK_LINE(39)
		if (((::Math_obj::abs((data->__Field(HX_CSTRING("y"),true) - this->zeroPoint->y)) > (this->deadzone * 0.7)))){
			HX_STACK_LINE(40)
			::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(40)
			_g->set_y((_g->y - (((data->__Field(HX_CSTRING("y"),true) - this->zeroPoint->y)) * (int)12)));
		}
		HX_STACK_LINE(42)
		if (((data->__Field(HX_CSTRING("x"),true) < this->zeroPoint->x))){
			HX_STACK_LINE(43)
			this->set_facing((int)1);
		}
		else{
			HX_STACK_LINE(44)
			if (((data->__Field(HX_CSTRING("x"),true) > this->zeroPoint->x))){
				HX_STACK_LINE(45)
				this->set_facing((int)16);
			}
		}
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","Player.hx",48);
				{
					HX_STACK_LINE(48)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(48)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(48)
		if ((_Function_1_1::Block())){
			HX_STACK_LINE(49)
			this->zeroPoint = ::flixel::util::FlxPoint_obj::__new(data->__Field(HX_CSTRING("x"),true),data->__Field(HX_CSTRING("y"),true));
			HX_STACK_LINE(50)
			::Global_obj::zeroPoint = this->zeroPoint;
		}
		HX_STACK_LINE(54)
		if ((::flixel::FlxG_obj::keyboard->pressed(HX_CSTRING("LEFT"),HX_CSTRING("A")))){
			HX_STACK_LINE(55)
			::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(55)
			_g->set_x((_g->x - (int)2));
		}
		else{
			HX_STACK_LINE(56)
			if ((::flixel::FlxG_obj::keyboard->pressed(HX_CSTRING("RIGHT"),HX_CSTRING("D")))){
				HX_STACK_LINE(57)
				::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(57)
				_g->set_x((_g->x + (int)2));
			}
		}
		HX_STACK_LINE(59)
		if ((::flixel::FlxG_obj::keyboard->pressed(HX_CSTRING("UP"),HX_CSTRING("W")))){
			HX_STACK_LINE(60)
			::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(60)
			_g->set_y((_g->y - (int)2));
		}
		else{
			HX_STACK_LINE(61)
			if ((::flixel::FlxG_obj::keyboard->pressed(HX_CSTRING("DOWN"),HX_CSTRING("S")))){
				HX_STACK_LINE(62)
				::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(62)
				_g->set_y((_g->y + (int)2));
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

