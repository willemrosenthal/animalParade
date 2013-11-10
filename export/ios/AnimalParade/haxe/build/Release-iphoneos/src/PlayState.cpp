#include <hxcpp.h>

#ifndef INCLUDED_Animal
#include <Animal.h>
#endif
#ifndef INCLUDED_MakeMap
#include <MakeMap.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
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
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
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
		HX_STACK_PUSH("PlayState::draw","PlayState.hx",71);
		HX_STACK_THIS(this);
		HX_STACK_LINE(71)
		this->super::draw();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_PUSH("PlayState::update","PlayState.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_LINE(66)
		this->super::update();
	}
return null();
}


Void PlayState_obj::buildMap( ){
{
		HX_STACK_PUSH("PlayState::buildMap","PlayState.hx",58);
		HX_STACK_THIS(this);
		HX_STACK_LINE(59)
		this->_levelMap = ::flixel::tile::FlxTilemap_obj::__new();
		HX_STACK_LINE(60)
		this->_levelMap->tileScaleHack = 1.0;
		HX_STACK_LINE(61)
		this->_levelMap->loadMap(::MakeMap_obj::newMap((int)200,(int)100,(int)60,(int)120,(int)5,(int)1),HX_CSTRING("assets/ground_full2.png"),(int)32,(int)32,(int)0,null(),null(),null());
		HX_STACK_LINE(62)
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
		HX_STACK_LINE(44)
		this->gameObjects = ::flixel::group::FlxGroup_obj::__new(null());
		HX_STACK_LINE(45)
		this->add(this->gameObjects);
		HX_STACK_LINE(47)
		this->player = ::Player_obj::__new((int)0,(int)0);
		HX_STACK_LINE(48)
		this->gameObjects->add(this->player);
		HX_STACK_LINE(50)
		this->_levelMap->set_x((this->player->x - (this->_levelMap->width * 0.5)));
		HX_STACK_LINE(51)
		this->_levelMap->set_y((this->player->y - (this->_levelMap->height * 0.5)));
		HX_STACK_LINE(53)
		::flixel::FlxG_obj::camera->follow(this->player,(int)2,null(),null());
		HX_STACK_LINE(54)
		::flixel::FlxG_obj::camera->bounds = this->_levelMap->getBounds(null());
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			::flixel::util::FlxRect Rect = this->_levelMap->getBounds(null());		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(55)
			_this->x = Rect->x;
			HX_STACK_LINE(55)
			_this->y = Rect->y;
			HX_STACK_LINE(55)
			_this->width = Rect->width;
			HX_STACK_LINE(55)
			_this->height = Rect->height;
			HX_STACK_LINE(55)
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
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(gameObjects,"gameObjects");
	HX_MARK_MEMBER_NAME(zeroPoint,"zeroPoint");
	HX_MARK_MEMBER_NAME(_levelMap,"_levelMap");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(gameObjects,"gameObjects");
	HX_VISIT_MEMBER_NAME(zeroPoint,"zeroPoint");
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
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buildMap") ) { return buildMap_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zeroPoint") ) { return zeroPoint; }
		if (HX_FIELD_EQ(inName,"_levelMap") ) { return _levelMap; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gameObjects") ) { return gameObjects; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Player >(); return inValue; }
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
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("gameObjects"));
	outFields->push(HX_CSTRING("zeroPoint"));
	outFields->push(HX_CSTRING("_levelMap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("buildMap"),
	HX_CSTRING("create"),
	HX_CSTRING("player"),
	HX_CSTRING("gameObjects"),
	HX_CSTRING("zeroPoint"),
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

