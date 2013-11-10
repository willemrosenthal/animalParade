#include <hxcpp.h>

#ifndef INCLUDED_Animal
#include <Animal.h>
#endif
#ifndef INCLUDED_ObjectsGroup
#include <ObjectsGroup.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_SimpleMap
#include <SimpleMap.h>
#endif
#ifndef INCLUDED_Tree
#include <Tree.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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

Void PlayState_obj::update( ){
{
		HX_STACK_PUSH("PlayState::update","PlayState.hx",82);
		HX_STACK_THIS(this);
		HX_STACK_LINE(83)
		this->super::update();
		HX_STACK_LINE(84)
		this->gameObjects->zSort(null());
		HX_STACK_LINE(85)
		::flixel::FlxG_obj::overlap(this->player,this->treeGroup,null(),::flixel::FlxObject_obj::separate_dyn());
	}
return null();
}


Void PlayState_obj::placeTrees( int NumTrees){
{
		HX_STACK_PUSH("PlayState::placeTrees","PlayState.hx",70);
		HX_STACK_THIS(this);
		HX_STACK_ARG(NumTrees,"NumTrees");
		HX_STACK_LINE(71)
		::flixel::util::FlxRect lr = this->levelMap->getBounds(null());		HX_STACK_VAR(lr,"lr");
		HX_STACK_LINE(72)
		this->treeGroup = ::flixel::group::FlxGroup_obj::__new(null());
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			while(((_g < NumTrees))){
				HX_STACK_LINE(74)
				int n = (_g)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(75)
				::Tree tree = ::Tree_obj::__new(((::Math_obj::random() * lr->width) + lr->x),((::Math_obj::random() * lr->height) + lr->y));		HX_STACK_VAR(tree,"tree");
				HX_STACK_LINE(76)
				this->treeGroup->add(tree);
				HX_STACK_LINE(77)
				this->gameObjects->add(tree);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,placeTrees,(void))

Void PlayState_obj::buildMap( ){
{
		HX_STACK_PUSH("PlayState::buildMap","PlayState.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_LINE(63)
		this->levelMap = ::flixel::tile::FlxTilemap_obj::__new();
		HX_STACK_LINE(64)
		this->levelMap->tileScaleHack = 1.0;
		HX_STACK_LINE(65)
		this->levelMap->loadMap(::SimpleMap_obj::newMap((int)50,(int)50),HX_CSTRING("assets/simple_tile.png"),(int)32,(int)32,(int)0,null(),null(),null());
		HX_STACK_LINE(67)
		this->add(this->levelMap);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,buildMap,(void))

Void PlayState_obj::create( ){
{
		HX_STACK_PUSH("PlayState::create","PlayState.hx",43);
		HX_STACK_THIS(this);
		HX_STACK_LINE(44)
		this->buildMap();
		HX_STACK_LINE(46)
		this->gameObjects = ::ObjectsGroup_obj::__new();
		HX_STACK_LINE(47)
		this->add(this->gameObjects);
		HX_STACK_LINE(49)
		this->player = ::Player_obj::__new((int)0,(int)0);
		HX_STACK_LINE(50)
		this->gameObjects->add(this->player);
		HX_STACK_LINE(52)
		this->levelMap->set_x((this->player->x - (this->levelMap->width * 0.5)));
		HX_STACK_LINE(53)
		this->levelMap->set_y((this->player->y - (this->levelMap->height * 0.5)));
		HX_STACK_LINE(55)
		::flixel::FlxG_obj::camera->follow(this->player,null(),null(),1.3);
		HX_STACK_LINE(56)
		::flixel::FlxG_obj::camera->bounds = this->levelMap->getBounds(null());
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			::flixel::util::FlxRect Rect = this->levelMap->getBounds(null());		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(57)
			_this->x = Rect->x;
			HX_STACK_LINE(57)
			_this->y = Rect->y;
			HX_STACK_LINE(57)
			_this->width = Rect->width;
			HX_STACK_LINE(57)
			_this->height = Rect->height;
			HX_STACK_LINE(57)
			_this;
		}
		HX_STACK_LINE(59)
		this->placeTrees((int)1000);
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
	HX_MARK_MEMBER_NAME(treeGroup,"treeGroup");
	HX_MARK_MEMBER_NAME(zeroPoint,"zeroPoint");
	HX_MARK_MEMBER_NAME(levelMap,"levelMap");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(gameObjects,"gameObjects");
	HX_VISIT_MEMBER_NAME(treeGroup,"treeGroup");
	HX_VISIT_MEMBER_NAME(zeroPoint,"zeroPoint");
	HX_VISIT_MEMBER_NAME(levelMap,"levelMap");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buildMap") ) { return buildMap_dyn(); }
		if (HX_FIELD_EQ(inName,"levelMap") ) { return levelMap; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"treeGroup") ) { return treeGroup; }
		if (HX_FIELD_EQ(inName,"zeroPoint") ) { return zeroPoint; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"placeTrees") ) { return placeTrees_dyn(); }
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
	case 8:
		if (HX_FIELD_EQ(inName,"levelMap") ) { levelMap=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"treeGroup") ) { treeGroup=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zeroPoint") ) { zeroPoint=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gameObjects") ) { gameObjects=inValue.Cast< ::ObjectsGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("gameObjects"));
	outFields->push(HX_CSTRING("treeGroup"));
	outFields->push(HX_CSTRING("zeroPoint"));
	outFields->push(HX_CSTRING("levelMap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("placeTrees"),
	HX_CSTRING("buildMap"),
	HX_CSTRING("create"),
	HX_CSTRING("player"),
	HX_CSTRING("gameObjects"),
	HX_CSTRING("treeGroup"),
	HX_CSTRING("zeroPoint"),
	HX_CSTRING("levelMap"),
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

