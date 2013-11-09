#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flixel_system_input_gamepad_FlxGamepad
#include <flixel/system/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_system_input_gamepad_FlxGamepadButton
#include <flixel/system/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace system{
namespace input{
namespace gamepad{

Void FlxGamepad_obj::__construct(int ID,hx::Null< Float >  __o_GlobalDeadZone)
{
HX_STACK_PUSH("FlxGamepad::new","flixel/system/input/gamepad/FlxGamepad.hx",5);
Float GlobalDeadZone = __o_GlobalDeadZone.Default(0);
{
	HX_STACK_LINE(21)
	this->deadZone = 0.15;
	HX_STACK_LINE(25)
	this->buttons = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(26)
	this->ball = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(27)
	this->axis = Array_obj< Float >::__new();
	HX_STACK_LINE(28)
	this->hat = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(29)
	this->id = ID;
	HX_STACK_LINE(31)
	if (((GlobalDeadZone != (int)0))){
		HX_STACK_LINE(32)
		this->deadZone = GlobalDeadZone;
	}
}
;
	return null();
}

FlxGamepad_obj::~FlxGamepad_obj() { }

Dynamic FlxGamepad_obj::__CreateEmpty() { return  new FlxGamepad_obj; }
hx::ObjectPtr< FlxGamepad_obj > FlxGamepad_obj::__new(int ID,hx::Null< Float >  __o_GlobalDeadZone)
{  hx::ObjectPtr< FlxGamepad_obj > result = new FlxGamepad_obj();
	result->__construct(ID,__o_GlobalDeadZone);
	return result;}

Dynamic FlxGamepad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepad_obj > result = new FlxGamepad_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool FlxGamepad_obj::anyInput( ){
	HX_STACK_PUSH("FlxGamepad::anyInput","flixel/system/input/gamepad/FlxGamepad.hx",184);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::system::input::gamepad::FlxGamepad_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/system/input/gamepad/FlxGamepad.hx",185);
			{
				HX_STACK_LINE(185)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->buttons);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","flixel/system/input/gamepad/FlxGamepad.hx",185);
					{
						HX_STACK_LINE(185)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(185)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(185)
	for(::cpp::FastIterator_obj< ::flixel::system::input::gamepad::FlxGamepadButton > *__it = ::cpp::CreateFastIterator< ::flixel::system::input::gamepad::FlxGamepadButton >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::flixel::system::input::gamepad::FlxGamepadButton button = __it->next();
		if (((button->current > (int)0))){
			HX_STACK_LINE(188)
			return true;
		}
;
	}
	HX_STACK_LINE(193)
	int numAxis = this->axis->length;		HX_STACK_VAR(numAxis,"numAxis");
	HX_STACK_LINE(195)
	{
		HX_STACK_LINE(195)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(195)
		while(((_g < numAxis))){
			HX_STACK_LINE(195)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(197)
			if (((this->axis->__get((int)0) != (int)0))){
				HX_STACK_LINE(198)
				return true;
			}
		}
	}
	HX_STACK_LINE(203)
	if (((bool((this->ball->x != (int)0)) || bool((this->ball->y != (int)0))))){
		HX_STACK_LINE(204)
		return true;
	}
	HX_STACK_LINE(208)
	if (((bool((this->hat->x != (int)0)) || bool((this->hat->y != (int)0))))){
		HX_STACK_LINE(209)
		return true;
	}
	HX_STACK_LINE(213)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,anyInput,return )

bool FlxGamepad_obj::anyButton( ){
	HX_STACK_PUSH("FlxGamepad::anyButton","flixel/system/input/gamepad/FlxGamepad.hx",166);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::system::input::gamepad::FlxGamepad_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/system/input/gamepad/FlxGamepad.hx",167);
			{
				HX_STACK_LINE(167)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->buttons);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","flixel/system/input/gamepad/FlxGamepad.hx",167);
					{
						HX_STACK_LINE(167)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(167)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(167)
	for(::cpp::FastIterator_obj< ::flixel::system::input::gamepad::FlxGamepadButton > *__it = ::cpp::CreateFastIterator< ::flixel::system::input::gamepad::FlxGamepadButton >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::flixel::system::input::gamepad::FlxGamepadButton button = __it->next();
		if (((button->current > (int)0))){
			HX_STACK_LINE(170)
			return true;
		}
;
	}
	HX_STACK_LINE(175)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,anyButton,return )

Float FlxGamepad_obj::getAxis( int AxisID){
	HX_STACK_PUSH("FlxGamepad::getAxis","flixel/system/input/gamepad/FlxGamepad.hx",146);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AxisID,"AxisID");
	HX_STACK_LINE(147)
	if (((bool((AxisID < (int)0)) || bool((AxisID >= this->axis->length))))){
		HX_STACK_LINE(148)
		return (int)0;
	}
	HX_STACK_LINE(152)
	if (((::Math_obj::abs(this->axis->__get(AxisID)) > this->deadZone))){
		HX_STACK_LINE(153)
		return this->axis->__get(AxisID);
	}
	HX_STACK_LINE(157)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAxis,return )

bool FlxGamepad_obj::justReleased( int ButtonID){
	HX_STACK_PUSH("FlxGamepad::justReleased","flixel/system/input/gamepad/FlxGamepad.hx",136);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ButtonID,"ButtonID");
	HX_STACK_LINE(137)
	if ((this->buttons->exists(ButtonID))){
		HX_STACK_LINE(138)
		return (this->buttons->get(ButtonID)->__Field(HX_CSTRING("current"),true) == (int)-1);
	}
	HX_STACK_LINE(142)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,justReleased,return )

bool FlxGamepad_obj::justPressed( int ButtonID){
	HX_STACK_PUSH("FlxGamepad::justPressed","flixel/system/input/gamepad/FlxGamepad.hx",120);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ButtonID,"ButtonID");
	HX_STACK_LINE(121)
	if ((this->buttons->exists(ButtonID))){
		HX_STACK_LINE(122)
		return (this->buttons->get(ButtonID)->__Field(HX_CSTRING("current"),true) == (int)2);
	}
	HX_STACK_LINE(126)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,justPressed,return )

bool FlxGamepad_obj::pressed( int ButtonID){
	HX_STACK_PUSH("FlxGamepad::pressed","flixel/system/input/gamepad/FlxGamepad.hx",104);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ButtonID,"ButtonID");
	HX_STACK_LINE(105)
	if ((this->buttons->exists(ButtonID))){
		HX_STACK_LINE(106)
		return (this->buttons->get(ButtonID)->__Field(HX_CSTRING("current"),true) > (int)0);
	}
	HX_STACK_LINE(110)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,pressed,return )

Void FlxGamepad_obj::destroy( ){
{
		HX_STACK_PUSH("FlxGamepad::destroy","flixel/system/input/gamepad/FlxGamepad.hx",90);
		HX_STACK_THIS(this);
		HX_STACK_LINE(91)
		this->buttons = null();
		HX_STACK_LINE(92)
		this->axis = null();
		HX_STACK_LINE(93)
		this->hat = null();
		HX_STACK_LINE(94)
		this->ball = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,destroy,(void))

Void FlxGamepad_obj::reset( ){
{
		HX_STACK_PUSH("FlxGamepad::reset","flixel/system/input/gamepad/FlxGamepad.hx",71);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::flixel::system::input::gamepad::FlxGamepad_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/system/input/gamepad/FlxGamepad.hx",72);
				{
					HX_STACK_LINE(72)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->buttons);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","flixel/system/input/gamepad/FlxGamepad.hx",72);
						{
							HX_STACK_LINE(72)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(72)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(72)
		for(::cpp::FastIterator_obj< ::flixel::system::input::gamepad::FlxGamepadButton > *__it = ::cpp::CreateFastIterator< ::flixel::system::input::gamepad::FlxGamepadButton >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::flixel::system::input::gamepad::FlxGamepadButton button = __it->next();
			{
				HX_STACK_LINE(74)
				button->current = (int)0;
				HX_STACK_LINE(75)
				button->last = (int)0;
			}
;
		}
		HX_STACK_LINE(78)
		int numAxis = this->axis->length;		HX_STACK_VAR(numAxis,"numAxis");
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(80)
			while(((_g < numAxis))){
				HX_STACK_LINE(80)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(82)
				this->axis[i] = (int)0;
			}
		}
		HX_STACK_LINE(85)
		this->hat->set(null(),null());
		HX_STACK_LINE(86)
		this->ball->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,reset,(void))

Void FlxGamepad_obj::update( ){
{
		HX_STACK_PUSH("FlxGamepad::update","flixel/system/input/gamepad/FlxGamepad.hx",54);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::flixel::system::input::gamepad::FlxGamepad_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/system/input/gamepad/FlxGamepad.hx",55);
				{
					HX_STACK_LINE(55)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->buttons);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","flixel/system/input/gamepad/FlxGamepad.hx",55);
						{
							HX_STACK_LINE(55)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(55)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(54)
		for(::cpp::FastIterator_obj< ::flixel::system::input::gamepad::FlxGamepadButton > *__it = ::cpp::CreateFastIterator< ::flixel::system::input::gamepad::FlxGamepadButton >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::flixel::system::input::gamepad::FlxGamepadButton button = __it->next();
			{
				HX_STACK_LINE(57)
				if (((bool((button->last == (int)-1)) && bool((button->current == (int)-1))))){
					HX_STACK_LINE(58)
					button->current = (int)0;
				}
				else{
					HX_STACK_LINE(61)
					if (((bool((button->last == (int)2)) && bool((button->current == (int)2))))){
						HX_STACK_LINE(62)
						button->current = (int)1;
					}
				}
				HX_STACK_LINE(66)
				button->last = button->current;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,update,(void))

::flixel::system::input::gamepad::FlxGamepadButton FlxGamepad_obj::getButton( int ButtonID){
	HX_STACK_PUSH("FlxGamepad::getButton","flixel/system/input/gamepad/FlxGamepad.hx",38);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ButtonID,"ButtonID");
	HX_STACK_LINE(39)
	::flixel::system::input::gamepad::FlxGamepadButton gamepadButton = this->buttons->get(ButtonID);		HX_STACK_VAR(gamepadButton,"gamepadButton");
	HX_STACK_LINE(41)
	if (((gamepadButton == null()))){
		HX_STACK_LINE(43)
		gamepadButton = ::flixel::system::input::gamepad::FlxGamepadButton_obj::__new(ButtonID,null(),null());
		HX_STACK_LINE(44)
		this->buttons->set(ButtonID,gamepadButton);
	}
	HX_STACK_LINE(47)
	return gamepadButton;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getButton,return )


FlxGamepad_obj::FlxGamepad_obj()
{
}

void FlxGamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepad);
	HX_MARK_MEMBER_NAME(deadZone,"deadZone");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(hat,"hat");
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_END_CLASS();
}

void FlxGamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(deadZone,"deadZone");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(hat,"hat");
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
}

Dynamic FlxGamepad_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { return hat; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getAxis") ) { return getAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"buttons") ) { return buttons; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"anyInput") ) { return anyInput_dyn(); }
		if (HX_FIELD_EQ(inName,"deadZone") ) { return deadZone; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"anyButton") ) { return anyButton_dyn(); }
		if (HX_FIELD_EQ(inName,"getButton") ) { return getButton_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepad_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { hat=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { deadZone=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("deadZone"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("ball"));
	outFields->push(HX_CSTRING("hat"));
	outFields->push(HX_CSTRING("axis"));
	outFields->push(HX_CSTRING("buttons"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("anyInput"),
	HX_CSTRING("anyButton"),
	HX_CSTRING("getAxis"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("destroy"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("getButton"),
	HX_CSTRING("deadZone"),
	HX_CSTRING("id"),
	HX_CSTRING("ball"),
	HX_CSTRING("hat"),
	HX_CSTRING("axis"),
	HX_CSTRING("buttons"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::__mClass,"__mClass");
};

Class FlxGamepad_obj::__mClass;

void FlxGamepad_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.input.gamepad.FlxGamepad"), hx::TCanCast< FlxGamepad_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxGamepad_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace input
} // end namespace gamepad
