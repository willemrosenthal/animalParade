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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_openfl_ui_Accelerometer
#include <openfl/ui/Accelerometer.h>
#endif

Void PlayState_obj::__construct()
{
HX_STACK_PUSH("PlayState::new","PlayState.hx",18);
{
	HX_STACK_LINE(18)
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
		HX_STACK_PUSH("PlayState::draw","PlayState.hx",191);
		HX_STACK_THIS(this);
		HX_STACK_LINE(191)
		this->super::draw();
	}
return null();
}


Void PlayState_obj::updatePlayer( ){
{
		HX_STACK_PUSH("PlayState::updatePlayer","PlayState.hx",103);
		HX_STACK_THIS(this);
		HX_STACK_LINE(106)
		Dynamic data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(110)
		data = ::openfl::ui::Accelerometer_obj::get();
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			::flixel::FlxSprite _g = this->_player;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(112)
			_g->set_x((_g->x + (((data->__Field(HX_CSTRING("x"),true) - this->zeroPoint->x)) * (int)10)));
		}
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			::flixel::FlxSprite _g = this->_player;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(113)
			_g->set_y((_g->y - (((data->__Field(HX_CSTRING("y"),true) - this->zeroPoint->y)) * (int)10)));
		}
		HX_STACK_LINE(115)
		if (((data->__Field(HX_CSTRING("x"),true) < this->zeroPoint->x))){
			HX_STACK_LINE(116)
			this->_player->set_facing((int)1);
		}
		else{
			HX_STACK_LINE(120)
			if (((data->__Field(HX_CSTRING("x"),true) > this->zeroPoint->x))){
				HX_STACK_LINE(121)
				this->_player->set_facing((int)16);
			}
		}
		HX_STACK_LINE(133)
		this->_player->acceleration->set_x((int)0);
		HX_STACK_LINE(134)
		this->_player->acceleration->set_y((int)0);
		HX_STACK_LINE(137)
		if ((::flixel::FlxG_obj::keyboard->pressed(HX_CSTRING("LEFT"),HX_CSTRING("A")))){
			HX_STACK_LINE(139)
			this->_player->set_facing((int)1);
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				::flixel::util::FlxPoint _g = this->_player->acceleration;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(140)
				_g->set_x((_g->x - this->_player->drag->x));
			}
		}
		else{
			HX_STACK_LINE(142)
			if ((::flixel::FlxG_obj::keyboard->pressed(HX_CSTRING("RIGHT"),HX_CSTRING("D")))){
				HX_STACK_LINE(144)
				this->_player->set_facing((int)16);
				HX_STACK_LINE(145)
				{
					HX_STACK_LINE(145)
					::flixel::util::FlxPoint _g = this->_player->acceleration;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(145)
					_g->set_x((_g->x + this->_player->drag->x));
				}
			}
		}
		HX_STACK_LINE(147)
		if ((::flixel::FlxG_obj::keyboard->justPressed(HX_CSTRING("UP"),HX_CSTRING("W")))){
			HX_STACK_LINE(149)
			::flixel::util::FlxPoint _g = this->_player->acceleration;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(149)
			_g->set_y((_g->y - this->_player->drag->x));
		}
		HX_STACK_LINE(151)
		if ((::flixel::FlxG_obj::keyboard->justPressed(HX_CSTRING("DOWN"),HX_CSTRING("S")))){
			HX_STACK_LINE(153)
			::flixel::util::FlxPoint _g = this->_player->acceleration;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(153)
			_g->set_y((_g->y + this->_player->drag->x));
		}
		HX_STACK_LINE(176)
		if (((this->_player->velocity->y != (int)0))){
			HX_STACK_LINE(177)
			this->_player->animation->play(HX_CSTRING("jump"),null(),null());
		}
		else{
			HX_STACK_LINE(180)
			if (((this->_player->velocity->x == (int)0))){
				HX_STACK_LINE(181)
				this->_player->animation->play(HX_CSTRING("idle"),null(),null());
			}
			else{
				HX_STACK_LINE(185)
				this->_player->animation->play(HX_CSTRING("run"),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,updatePlayer,(void))

Void PlayState_obj::update( ){
{
		HX_STACK_PUSH("PlayState::update","PlayState.hx",97);
		HX_STACK_THIS(this);
		HX_STACK_LINE(98)
		this->updatePlayer();
		HX_STACK_LINE(99)
		this->super::update();
	}
return null();
}


Void PlayState_obj::setupPlayer( ){
{
		HX_STACK_PUSH("PlayState::setupPlayer","PlayState.hx",67);
		HX_STACK_THIS(this);
		HX_STACK_LINE(68)
		this->_player = ::flixel::FlxSprite_obj::__new((int)64,(int)220,null());
		HX_STACK_LINE(69)
		this->_player->loadGraphic(HX_CSTRING("assets/spaceman.png"),true,true,(int)16,null(),null(),null());
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			::flixel::FlxSprite _this = this->_player;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(72)
			_this->set_width((int)14);
			HX_STACK_LINE(72)
			_this->set_height((int)14);
		}
		HX_STACK_LINE(73)
		this->_player->offset->set((int)1,(int)1);
		HX_STACK_LINE(74)
		this->_player->set_scale(::flixel::util::FlxPoint_obj::__new((int)4,(int)4));
		HX_STACK_LINE(77)
		this->_player->maxVelocity->set_x((int)200);
		HX_STACK_LINE(78)
		this->_player->maxVelocity->set_y((int)200);
		HX_STACK_LINE(79)
		this->_player->drag->set_x((this->_player->maxVelocity->x * (int)4));
		HX_STACK_LINE(84)
		this->_player->animation->add(HX_CSTRING("idle"),Array_obj< int >::__new().Add((int)0),null(),null());
		HX_STACK_LINE(85)
		this->_player->animation->add(HX_CSTRING("run"),Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3).Add((int)0),(int)12,null());
		HX_STACK_LINE(86)
		this->_player->animation->add(HX_CSTRING("jump"),Array_obj< int >::__new().Add((int)4),null(),null());
		HX_STACK_LINE(88)
		::flixel::FlxG_obj::camera->follow(this->_player,null(),null(),null());
		HX_STACK_LINE(89)
		this->add(this->_player);
		HX_STACK_LINE(91)
		Dynamic data = ::openfl::ui::Accelerometer_obj::get();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(92)
		this->zeroPoint = ::flixel::util::FlxPoint_obj::__new(data->__Field(HX_CSTRING("x"),true),data->__Field(HX_CSTRING("y"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,setupPlayer,(void))

Void PlayState_obj::create( ){
{
		HX_STACK_PUSH("PlayState::create","PlayState.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_LINE(52)
		this->_levelMap = ::flixel::tile::FlxTilemap_obj::__new();
		HX_STACK_LINE(53)
		this->_levelMap->set_scaleX((int)4);
		HX_STACK_LINE(54)
		this->_levelMap->set_scaleY((int)4);
		HX_STACK_LINE(55)
		this->_levelMap->tileScaleHack = 1.03;
		HX_STACK_LINE(56)
		this->_levelMap->loadMap(::MakeMap_obj::newMap((int)400,(int)400,(int)40,(int)500,(int)100),HX_CSTRING("assets/ground.png"),(int)16,(int)16,(int)0,null(),null(),null());
		HX_STACK_LINE(57)
		this->add(this->_levelMap);
		HX_STACK_LINE(58)
		this->setupPlayer();
		HX_STACK_LINE(59)
		this->_levelMap->set_x((this->_player->x - (this->_levelMap->width * 0.5)));
		HX_STACK_LINE(60)
		this->_levelMap->set_y((this->_player->y - (this->_levelMap->height * 0.5)));
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_helperText,"_helperText");
	HX_MARK_MEMBER_NAME(_resetButton,"_resetButton");
	HX_MARK_MEMBER_NAME(_autoAltButton,"_autoAltButton");
	HX_MARK_MEMBER_NAME(zeroPoint,"zeroPoint");
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(_highlightBox,"_highlightBox");
	HX_MARK_MEMBER_NAME(_levelMap,"_levelMap");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_helperText,"_helperText");
	HX_VISIT_MEMBER_NAME(_resetButton,"_resetButton");
	HX_VISIT_MEMBER_NAME(_autoAltButton,"_autoAltButton");
	HX_VISIT_MEMBER_NAME(zeroPoint,"zeroPoint");
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(_highlightBox,"_highlightBox");
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
	case 9:
		if (HX_FIELD_EQ(inName,"zeroPoint") ) { return zeroPoint; }
		if (HX_FIELD_EQ(inName,"_levelMap") ) { return _levelMap; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setupPlayer") ) { return setupPlayer_dyn(); }
		if (HX_FIELD_EQ(inName,"_helperText") ) { return _helperText; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updatePlayer") ) { return updatePlayer_dyn(); }
		if (HX_FIELD_EQ(inName,"_resetButton") ) { return _resetButton; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_highlightBox") ) { return _highlightBox; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_autoAltButton") ) { return _autoAltButton; }
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
		if (HX_FIELD_EQ(inName,"_helperText") ) { _helperText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_resetButton") ) { _resetButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_highlightBox") ) { _highlightBox=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_autoAltButton") ) { _autoAltButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_helperText"));
	outFields->push(HX_CSTRING("_resetButton"));
	outFields->push(HX_CSTRING("_autoAltButton"));
	outFields->push(HX_CSTRING("zeroPoint"));
	outFields->push(HX_CSTRING("_player"));
	outFields->push(HX_CSTRING("_highlightBox"));
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
	HX_CSTRING("create"),
	HX_CSTRING("_helperText"),
	HX_CSTRING("_resetButton"),
	HX_CSTRING("_autoAltButton"),
	HX_CSTRING("zeroPoint"),
	HX_CSTRING("_player"),
	HX_CSTRING("_highlightBox"),
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

