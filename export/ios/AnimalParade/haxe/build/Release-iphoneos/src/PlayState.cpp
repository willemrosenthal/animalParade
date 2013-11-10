#include <hxcpp.h>

#ifndef INCLUDED_MakeMap
#include <MakeMap.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_ui_Accelerometer
#include <openfl/ui/Accelerometer.h>
#endif

Void PlayState_obj::__construct()
{
HX_STACK_PUSH("PlayState::new","PlayState.hx",19);
{
	HX_STACK_LINE(19)
	super::__construct();
}
;
	return null();
}

PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new()
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct();
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct();
	return result;}

Void PlayState_obj::draw( ){
{
		HX_STACK_PUSH("PlayState::draw","PlayState.hx",169);
		HX_STACK_THIS(this);
		HX_STACK_LINE(169)
		this->super::draw();
	}
return null();
}


Void PlayState_obj::updatePlayer( ){
{
		HX_STACK_PUSH("PlayState::updatePlayer","PlayState.hx",107);
		HX_STACK_THIS(this);
		HX_STACK_LINE(110)
		Dynamic data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(111)
		Float deadzone = 0.2;		HX_STACK_VAR(deadzone,"deadzone");
		HX_STACK_LINE(115)
		data = ::openfl::ui::Accelerometer_obj::get();
		HX_STACK_LINE(117)
		if (((::Math_obj::abs((data->__Field(HX_CSTRING("x"),true) - this->zeroPoint->x)) > deadzone))){
			HX_STACK_LINE(118)
			::flixel::FlxSprite _g = this->_player;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(118)
			_g->set_x((_g->x + (((data->__Field(HX_CSTRING("x"),true) - this->zeroPoint->x)) * (int)8)));
		}
		HX_STACK_LINE(119)
		if (((::Math_obj::abs((data->__Field(HX_CSTRING("y"),true) - this->zeroPoint->y)) > deadzone))){
			HX_STACK_LINE(120)
			::flixel::FlxSprite _g = this->_player;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(120)
			_g->set_y((_g->y - (((data->__Field(HX_CSTRING("y"),true) - this->zeroPoint->y)) * (int)12)));
		}
		HX_STACK_LINE(124)
		if (((data->__Field(HX_CSTRING("x"),true) < this->zeroPoint->x))){
			HX_STACK_LINE(125)
			this->_player->set_facing((int)1);
		}
		else{
			HX_STACK_LINE(129)
			if (((data->__Field(HX_CSTRING("x"),true) > this->zeroPoint->x))){
				HX_STACK_LINE(130)
				this->_player->set_facing((int)16);
			}
		}
		HX_STACK_LINE(142)
		this->_player->acceleration->set_x((int)0);
		HX_STACK_LINE(143)
		this->_player->acceleration->set_y((int)0);
		HX_STACK_LINE(146)
		if ((::flixel::FlxG_obj::keyboard->pressed(HX_CSTRING("LEFT"),HX_CSTRING("A")))){
			HX_STACK_LINE(148)
			this->_player->set_facing((int)1);
			HX_STACK_LINE(149)
			{
				HX_STACK_LINE(149)
				::flixel::util::FlxPoint _g = this->_player->acceleration;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(149)
				_g->set_x((_g->x - this->_player->drag->x));
			}
		}
		else{
			HX_STACK_LINE(151)
			if ((::flixel::FlxG_obj::keyboard->pressed(HX_CSTRING("RIGHT"),HX_CSTRING("D")))){
				HX_STACK_LINE(153)
				this->_player->set_facing((int)16);
				HX_STACK_LINE(154)
				{
					HX_STACK_LINE(154)
					::flixel::util::FlxPoint _g = this->_player->acceleration;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(154)
					_g->set_x((_g->x + this->_player->drag->x));
				}
			}
		}
		HX_STACK_LINE(156)
		if ((::flixel::FlxG_obj::keyboard->justPressed(HX_CSTRING("UP"),HX_CSTRING("W")))){
			HX_STACK_LINE(158)
			::flixel::util::FlxPoint _g = this->_player->acceleration;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(158)
			_g->set_y((_g->y - this->_player->drag->x));
		}
		HX_STACK_LINE(160)
		if ((::flixel::FlxG_obj::keyboard->justPressed(HX_CSTRING("DOWN"),HX_CSTRING("S")))){
			HX_STACK_LINE(162)
			::flixel::util::FlxPoint _g = this->_player->acceleration;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(162)
			_g->set_y((_g->y + this->_player->drag->x));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,updatePlayer,(void))

Void PlayState_obj::update( ){
{
		HX_STACK_PUSH("PlayState::update","PlayState.hx",93);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","PlayState.hx",97);
				{
					HX_STACK_LINE(97)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(97)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(97)
		if ((_Function_1_1::Block())){
			HX_STACK_LINE(98)
			Dynamic data = ::openfl::ui::Accelerometer_obj::get();		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(99)
			this->zeroPoint = ::flixel::util::FlxPoint_obj::__new(data->__Field(HX_CSTRING("x"),true),data->__Field(HX_CSTRING("y"),true));
		}
		HX_STACK_LINE(102)
		this->updatePlayer();
		HX_STACK_LINE(103)
		this->super::update();
	}
return null();
}


Void PlayState_obj::setupPlayer( ){
{
		HX_STACK_PUSH("PlayState::setupPlayer","PlayState.hx",64);
		HX_STACK_THIS(this);
		HX_STACK_LINE(66)
		this->_player = ::flixel::FlxSprite_obj::__new((int)16,(int)16,null());
		HX_STACK_LINE(67)
		this->_player->loadGraphic(HX_CSTRING("assets/fox.png"),true,true,(int)16,null(),null(),null());
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			::flixel::FlxSprite _this = this->_player;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(70)
			_this->set_width((int)14);
			HX_STACK_LINE(70)
			_this->set_height((int)14);
		}
		HX_STACK_LINE(71)
		this->_player->offset->set((int)1,(int)1);
		HX_STACK_LINE(74)
		this->_player->maxVelocity->set_x((int)200);
		HX_STACK_LINE(75)
		this->_player->maxVelocity->set_y((int)200);
		HX_STACK_LINE(76)
		this->_player->drag->set_x((this->_player->maxVelocity->x * (int)4));
		HX_STACK_LINE(85)
		this->gameObjects->add(this->_player);
		HX_STACK_LINE(87)
		Dynamic data = ::openfl::ui::Accelerometer_obj::get();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(88)
		this->zeroPoint = ::flixel::util::FlxPoint_obj::__new(data->__Field(HX_CSTRING("x"),true),data->__Field(HX_CSTRING("y"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,setupPlayer,(void))

Void PlayState_obj::buildMap( ){
{
		HX_STACK_PUSH("PlayState::buildMap","PlayState.hx",56);
		HX_STACK_THIS(this);
		HX_STACK_LINE(57)
		this->_levelMap = ::flixel::tile::FlxTilemap_obj::__new();
		HX_STACK_LINE(58)
		this->_levelMap->tileScaleHack = 1.0;
		HX_STACK_LINE(59)
		this->_levelMap->loadMap(::MakeMap_obj::newMap((int)200,(int)100,(int)40,(int)100,(int)15,.2),HX_CSTRING("assets/ground_full2.png"),(int)32,(int)32,(int)0,null(),null(),null());
		HX_STACK_LINE(60)
		this->add(this->_levelMap);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,buildMap,(void))

Void PlayState_obj::create( ){
{
		HX_STACK_PUSH("PlayState::create","PlayState.hx",41);
		HX_STACK_THIS(this);
		HX_STACK_LINE(42)
		this->buildMap();
		HX_STACK_LINE(43)
		this->gameObjects = ::flixel::group::FlxGroup_obj::__new(null());
		HX_STACK_LINE(44)
		this->add(this->gameObjects);
		HX_STACK_LINE(45)
		this->setupPlayer();
		HX_STACK_LINE(46)
		this->_levelMap->set_x((this->_player->x - (this->_levelMap->width * 0.5)));
		HX_STACK_LINE(47)
		this->_levelMap->set_y((this->_player->y - (this->_levelMap->height * 0.5)));
		HX_STACK_LINE(50)
		::flixel::FlxG_obj::camera->follow(this->_player,(int)2,null(),null());
		HX_STACK_LINE(51)
		::flixel::FlxG_obj::camera->bounds = this->_levelMap->getBounds(null());
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			::flixel::util::FlxRect Rect = this->_levelMap->getBounds(null());		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(52)
			_this->x = Rect->x;
			HX_STACK_LINE(52)
			_this->y = Rect->y;
			HX_STACK_LINE(52)
			_this->width = Rect->width;
			HX_STACK_LINE(52)
			_this->height = Rect->height;
			HX_STACK_LINE(52)
			_this;
		}
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(gameObjects,"gameObjects");
	HX_MARK_MEMBER_NAME(zeroPoint,"zeroPoint");
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(_levelMap,"_levelMap");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gameObjects,"gameObjects");
	HX_VISIT_MEMBER_NAME(zeroPoint,"zeroPoint");
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(_levelMap,"_levelMap");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { return _player; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buildMap") ) { return buildMap_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zeroPoint") ) { return zeroPoint; }
		if (HX_FIELD_EQ(inName,"_levelMap") ) { return _levelMap; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setupPlayer") ) { return setupPlayer_dyn(); }
		if (HX_FIELD_EQ(inName,"gameObjects") ) { return gameObjects; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updatePlayer") ) { return updatePlayer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zeroPoint") ) { zeroPoint=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_levelMap") ) { _levelMap=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gameObjects") ) { gameObjects=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gameObjects"));
	outFields->push(HX_CSTRING("zeroPoint"));
	outFields->push(HX_CSTRING("_player"));
	outFields->push(HX_CSTRING("_levelMap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("updatePlayer"),
	HX_CSTRING("update"),
	HX_CSTRING("setupPlayer"),
	HX_CSTRING("buildMap"),
	HX_CSTRING("create"),
	HX_CSTRING("gameObjects"),
	HX_CSTRING("zeroPoint"),
	HX_CSTRING("_player"),
	HX_CSTRING("_levelMap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PlayState_obj::__boot()
{
}

