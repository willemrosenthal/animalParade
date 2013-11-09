#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSplash
#include <flixel/system/FlxSplash.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_keyboard_FlxKeyboard
#include <flixel/system/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_MultiVarTween
#include <flixel/tweens/misc/MultiVarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
namespace flixel{
namespace system{

Void FlxSplash_obj::__construct(::Class NextState)
{
HX_STACK_PUSH("FlxSplash::new","flixel/system/FlxSplash.hx",16);
{
	HX_STACK_LINE(27)
	this->_curPart = (int)0;
	HX_STACK_LINE(35)
	this->_nextState = NextState;
	HX_STACK_LINE(36)
	super::__construct();
}
;
	return null();
}

FlxSplash_obj::~FlxSplash_obj() { }

Dynamic FlxSplash_obj::__CreateEmpty() { return  new FlxSplash_obj; }
hx::ObjectPtr< FlxSplash_obj > FlxSplash_obj::__new(::Class NextState)
{  hx::ObjectPtr< FlxSplash_obj > result = new FlxSplash_obj();
	result->__construct(NextState);
	return result;}

Dynamic FlxSplash_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSplash_obj > result = new FlxSplash_obj();
	result->__construct(inArgs[0]);
	return result;}

Void FlxSplash_obj::onComplete( ::flixel::tweens::FlxTween Tween){
{
		HX_STACK_PUSH("FlxSplash::onComplete","flixel/system/FlxSplash.hx",160);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Tween,"Tween");
		HX_STACK_LINE(161)
		::flixel::FlxG_obj::cameras->set_bgColor(this->_cachedBgColor);
		HX_STACK_LINE(162)
		::flixel::FlxG_obj::fixedTimestep = this->_cachedTimestep;
		HX_STACK_LINE(163)
		::flixel::FlxG_obj::autoPause = this->_cachedAutoPause;
		HX_STACK_LINE(165)
		::flixel::FlxG_obj::keyboard->enabled = true;
		HX_STACK_LINE(167)
		::flixel::FlxG_obj::game->get_stage()->removeChild(this->_sprite);
		HX_STACK_LINE(168)
		::flixel::FlxG_obj::game->get_stage()->removeChild(this->_text);
		HX_STACK_LINE(169)
		::flixel::FlxG_obj::game->requestedState = ::Type_obj::createInstance(this->_nextState,Dynamic( Array_obj<Dynamic>::__new()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSplash_obj,onComplete,(void))

Void FlxSplash_obj::drawLightBlue( ){
{
		HX_STACK_PUSH("FlxSplash::drawLightBlue","flixel/system/FlxSplash.hx",148);
		HX_STACK_THIS(this);
		HX_STACK_LINE(149)
		this->_gfx->beginFill((int)314875,null());
		HX_STACK_LINE(150)
		this->_gfx->moveTo((int)100,(int)100);
		HX_STACK_LINE(151)
		this->_gfx->lineTo((int)75,(int)100);
		HX_STACK_LINE(152)
		this->_gfx->lineTo((int)51,(int)87);
		HX_STACK_LINE(153)
		this->_gfx->lineTo((int)87,(int)51);
		HX_STACK_LINE(154)
		this->_gfx->lineTo((int)100,(int)75);
		HX_STACK_LINE(155)
		this->_gfx->lineTo((int)100,(int)100);
		HX_STACK_LINE(156)
		this->_gfx->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSplash_obj,drawLightBlue,(void))

Void FlxSplash_obj::drawBlue( ){
{
		HX_STACK_PUSH("FlxSplash::drawBlue","flixel/system/FlxSplash.hx",136);
		HX_STACK_THIS(this);
		HX_STACK_LINE(137)
		this->_gfx->beginFill((int)3555839,null());
		HX_STACK_LINE(138)
		this->_gfx->moveTo((int)0,(int)100);
		HX_STACK_LINE(139)
		this->_gfx->lineTo((int)25,(int)100);
		HX_STACK_LINE(140)
		this->_gfx->lineTo((int)50,(int)87);
		HX_STACK_LINE(141)
		this->_gfx->lineTo((int)13,(int)51);
		HX_STACK_LINE(142)
		this->_gfx->lineTo((int)0,(int)75);
		HX_STACK_LINE(143)
		this->_gfx->lineTo((int)0,(int)100);
		HX_STACK_LINE(144)
		this->_gfx->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSplash_obj,drawBlue,(void))

Void FlxSplash_obj::drawRed( ){
{
		HX_STACK_PUSH("FlxSplash::drawRed","flixel/system/FlxSplash.hx",124);
		HX_STACK_THIS(this);
		HX_STACK_LINE(125)
		this->_gfx->beginFill((int)16066382,null());
		HX_STACK_LINE(126)
		this->_gfx->moveTo((int)100,(int)0);
		HX_STACK_LINE(127)
		this->_gfx->lineTo((int)75,(int)0);
		HX_STACK_LINE(128)
		this->_gfx->lineTo((int)51,(int)13);
		HX_STACK_LINE(129)
		this->_gfx->lineTo((int)87,(int)50);
		HX_STACK_LINE(130)
		this->_gfx->lineTo((int)100,(int)25);
		HX_STACK_LINE(131)
		this->_gfx->lineTo((int)100,(int)0);
		HX_STACK_LINE(132)
		this->_gfx->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSplash_obj,drawRed,(void))

Void FlxSplash_obj::drawYellow( ){
{
		HX_STACK_PUSH("FlxSplash::drawYellow","flixel/system/FlxSplash.hx",112);
		HX_STACK_THIS(this);
		HX_STACK_LINE(113)
		this->_gfx->beginFill((int)16761138,null());
		HX_STACK_LINE(114)
		this->_gfx->moveTo((int)0,(int)0);
		HX_STACK_LINE(115)
		this->_gfx->lineTo((int)25,(int)0);
		HX_STACK_LINE(116)
		this->_gfx->lineTo((int)50,(int)13);
		HX_STACK_LINE(117)
		this->_gfx->lineTo((int)13,(int)50);
		HX_STACK_LINE(118)
		this->_gfx->lineTo((int)0,(int)25);
		HX_STACK_LINE(119)
		this->_gfx->lineTo((int)0,(int)0);
		HX_STACK_LINE(120)
		this->_gfx->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSplash_obj,drawYellow,(void))

Void FlxSplash_obj::drawGreen( ){
{
		HX_STACK_PUSH("FlxSplash::drawGreen","flixel/system/FlxSplash.hx",97);
		HX_STACK_THIS(this);
		HX_STACK_LINE(98)
		this->_gfx->beginFill((int)47394,null());
		HX_STACK_LINE(99)
		this->_gfx->moveTo((int)50,(int)13);
		HX_STACK_LINE(100)
		this->_gfx->lineTo((int)51,(int)13);
		HX_STACK_LINE(101)
		this->_gfx->lineTo((int)87,(int)50);
		HX_STACK_LINE(102)
		this->_gfx->lineTo((int)87,(int)51);
		HX_STACK_LINE(103)
		this->_gfx->lineTo((int)51,(int)87);
		HX_STACK_LINE(104)
		this->_gfx->lineTo((int)50,(int)87);
		HX_STACK_LINE(105)
		this->_gfx->lineTo((int)13,(int)51);
		HX_STACK_LINE(106)
		this->_gfx->lineTo((int)13,(int)50);
		HX_STACK_LINE(107)
		this->_gfx->lineTo((int)50,(int)13);
		HX_STACK_LINE(108)
		this->_gfx->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSplash_obj,drawGreen,(void))

Void FlxSplash_obj::timerCallback( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_PUSH("FlxSplash::timerCallback","flixel/system/FlxSplash.hx",83);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Timer,"Timer");
		HX_STACK_LINE(84)
		this->_functions->__GetItem(this->_curPart)().Cast< Void >();
		HX_STACK_LINE(85)
		this->_text->set_textColor(this->_colors->__get(this->_curPart));
		HX_STACK_LINE(86)
		this->_text->set_text(HX_CSTRING("HaxeFlixel"));
		HX_STACK_LINE(87)
		(this->_curPart)++;
		HX_STACK_LINE(89)
		if (((this->_curPart == (int)5))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","flixel/system/FlxSplash.hx",91);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("alpha") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Dynamic Block( ::flixel::system::FlxSplash_obj *__this){
					HX_STACK_PUSH("*::closure","flixel/system/FlxSplash.hx",91);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::quadOut_dyn(),false);
						__result->Add(HX_CSTRING("complete") , __this->onComplete_dyn(),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(91)
			::flixel::tweens::FlxTween_obj::multiVar(this->_sprite,_Function_2_1::Block(),2.3,_Function_2_2::Block(this));
			struct _Function_2_3{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","flixel/system/FlxSplash.hx",92);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("alpha") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","flixel/system/FlxSplash.hx",92);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::quadOut_dyn(),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(92)
			::flixel::tweens::FlxTween_obj::multiVar(this->_text,_Function_2_3::Block(),2.3,_Function_2_4::Block());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSplash_obj,timerCallback,(void))

Void FlxSplash_obj::create( ){
{
		HX_STACK_PUSH("FlxSplash::create","flixel/system/FlxSplash.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_LINE(41)
		this->_cachedBgColor = (  (((::flixel::FlxG_obj::camera == null()))) ? int((int)-16777216) : int(::flixel::FlxG_obj::camera->bgColor) );
		HX_STACK_LINE(42)
		::flixel::FlxG_obj::cameras->set_bgColor((int)-16777216);
		HX_STACK_LINE(44)
		this->_cachedTimestep = ::flixel::FlxG_obj::fixedTimestep;
		HX_STACK_LINE(45)
		::flixel::FlxG_obj::fixedTimestep = false;
		HX_STACK_LINE(47)
		this->_cachedAutoPause = ::flixel::FlxG_obj::autoPause;
		HX_STACK_LINE(48)
		::flixel::FlxG_obj::autoPause = false;
		HX_STACK_LINE(50)
		::flixel::FlxG_obj::keyboard->enabled = false;
		HX_STACK_LINE(53)
		this->_times = Array_obj< Float >::__new().Add(0.041).Add(0.184).Add(0.334).Add(0.495).Add(0.636);
		HX_STACK_LINE(54)
		this->_colors = Array_obj< int >::__new().Add((int)47394).Add((int)16761138).Add((int)16066382).Add((int)3555839).Add((int)314875);
		HX_STACK_LINE(55)
		this->_functions = Dynamic( Array_obj<Dynamic>::__new().Add(this->drawGreen_dyn()).Add(this->drawYellow_dyn()).Add(this->drawRed_dyn()).Add(this->drawBlue_dyn()).Add(this->drawLightBlue_dyn()));
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< Float > _g1 = this->_times;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(57)
			while(((_g < _g1->length))){
				HX_STACK_LINE(57)
				Float time = _g1->__get(_g);		HX_STACK_VAR(time,"time");
				HX_STACK_LINE(57)
				++(_g);
				HX_STACK_LINE(59)
				::flixel::util::FlxTimer_obj::start(time,this->timerCallback_dyn(),null());
			}
		}
		HX_STACK_LINE(62)
		this->_sprite = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(63)
		this->_sprite->set_x(((Float((::flixel::FlxG_obj::width * ::flixel::FlxCamera_obj::defaultZoom)) / Float((int)2)) - (int)50));
		HX_STACK_LINE(64)
		this->_sprite->set_y(((Float((::flixel::FlxG_obj::height * ::flixel::FlxCamera_obj::defaultZoom)) / Float((int)2)) - (int)70));
		HX_STACK_LINE(65)
		::flixel::FlxG_obj::game->get_stage()->addChild(this->_sprite);
		HX_STACK_LINE(66)
		this->_gfx = this->_sprite->get_graphics();
		HX_STACK_LINE(68)
		this->_text = ::flash::text::TextField_obj::__new();
		HX_STACK_LINE(69)
		this->_text->set_selectable(false);
		HX_STACK_LINE(70)
		this->_text->set_embedFonts(true);
		HX_STACK_LINE(71)
		this->_text->set_width((::flixel::FlxG_obj::width * ::flixel::FlxCamera_obj::defaultZoom));
		HX_STACK_LINE(72)
		::flash::text::TextFormat dtf = ::flash::text::TextFormat_obj::__new(HX_CSTRING("Nokia Cellphone FC Small"),(int)16,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(dtf,"dtf");
		HX_STACK_LINE(73)
		dtf->align = ::flash::text::TextFormatAlign_obj::CENTER;
		HX_STACK_LINE(74)
		this->_text->set_defaultTextFormat(dtf);
		HX_STACK_LINE(75)
		this->_text->set_text(HX_CSTRING("HaxeFlixel"));
		HX_STACK_LINE(76)
		this->_text->set_y((this->_sprite->get_y() + (int)130));
		HX_STACK_LINE(77)
		::flixel::FlxG_obj::game->get_stage()->addChild(this->_text);
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			Float Volume = (int)1;		HX_STACK_VAR(Volume,"Volume");
			bool Looped = false;		HX_STACK_VAR(Looped,"Looped");
			bool AutoDestroy = true;		HX_STACK_VAR(AutoDestroy,"AutoDestroy");
			HX_STACK_LINE(79)
			::flixel::FlxG_obj::sound->load(HX_CSTRING("flixel/snd/flixel.wav"),Volume,Looped,AutoDestroy,true,null(),null());
		}
	}
return null();
}



FlxSplash_obj::FlxSplash_obj()
{
}

void FlxSplash_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSplash);
	HX_MARK_MEMBER_NAME(_cachedAutoPause,"_cachedAutoPause");
	HX_MARK_MEMBER_NAME(_cachedTimestep,"_cachedTimestep");
	HX_MARK_MEMBER_NAME(_cachedBgColor,"_cachedBgColor");
	HX_MARK_MEMBER_NAME(_curPart,"_curPart");
	HX_MARK_MEMBER_NAME(_functions,"_functions");
	HX_MARK_MEMBER_NAME(_colors,"_colors");
	HX_MARK_MEMBER_NAME(_times,"_times");
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_gfx,"_gfx");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_nextState,"_nextState");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSplash_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cachedAutoPause,"_cachedAutoPause");
	HX_VISIT_MEMBER_NAME(_cachedTimestep,"_cachedTimestep");
	HX_VISIT_MEMBER_NAME(_cachedBgColor,"_cachedBgColor");
	HX_VISIT_MEMBER_NAME(_curPart,"_curPart");
	HX_VISIT_MEMBER_NAME(_functions,"_functions");
	HX_VISIT_MEMBER_NAME(_colors,"_colors");
	HX_VISIT_MEMBER_NAME(_times,"_times");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_gfx,"_gfx");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_nextState,"_nextState");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSplash_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_gfx") ) { return _gfx; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"_times") ) { return _times; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"drawRed") ) { return drawRed_dyn(); }
		if (HX_FIELD_EQ(inName,"_colors") ) { return _colors; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawBlue") ) { return drawBlue_dyn(); }
		if (HX_FIELD_EQ(inName,"_curPart") ) { return _curPart; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawGreen") ) { return drawGreen_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"drawYellow") ) { return drawYellow_dyn(); }
		if (HX_FIELD_EQ(inName,"_functions") ) { return _functions; }
		if (HX_FIELD_EQ(inName,"_nextState") ) { return _nextState; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawLightBlue") ) { return drawLightBlue_dyn(); }
		if (HX_FIELD_EQ(inName,"timerCallback") ) { return timerCallback_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_cachedBgColor") ) { return _cachedBgColor; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_cachedTimestep") ) { return _cachedTimestep; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedAutoPause") ) { return _cachedAutoPause; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSplash_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_gfx") ) { _gfx=inValue.Cast< ::flash::display::Graphics >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_times") ) { _times=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_colors") ) { _colors=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_curPart") ) { _curPart=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_functions") ) { _functions=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nextState") ) { _nextState=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_cachedBgColor") ) { _cachedBgColor=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_cachedTimestep") ) { _cachedTimestep=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedAutoPause") ) { _cachedAutoPause=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSplash_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_cachedAutoPause"));
	outFields->push(HX_CSTRING("_cachedTimestep"));
	outFields->push(HX_CSTRING("_cachedBgColor"));
	outFields->push(HX_CSTRING("_curPart"));
	outFields->push(HX_CSTRING("_functions"));
	outFields->push(HX_CSTRING("_colors"));
	outFields->push(HX_CSTRING("_times"));
	outFields->push(HX_CSTRING("_text"));
	outFields->push(HX_CSTRING("_gfx"));
	outFields->push(HX_CSTRING("_sprite"));
	outFields->push(HX_CSTRING("_nextState"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onComplete"),
	HX_CSTRING("drawLightBlue"),
	HX_CSTRING("drawBlue"),
	HX_CSTRING("drawRed"),
	HX_CSTRING("drawYellow"),
	HX_CSTRING("drawGreen"),
	HX_CSTRING("timerCallback"),
	HX_CSTRING("create"),
	HX_CSTRING("_cachedAutoPause"),
	HX_CSTRING("_cachedTimestep"),
	HX_CSTRING("_cachedBgColor"),
	HX_CSTRING("_curPart"),
	HX_CSTRING("_functions"),
	HX_CSTRING("_colors"),
	HX_CSTRING("_times"),
	HX_CSTRING("_text"),
	HX_CSTRING("_gfx"),
	HX_CSTRING("_sprite"),
	HX_CSTRING("_nextState"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSplash_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSplash_obj::__mClass,"__mClass");
};

Class FlxSplash_obj::__mClass;

void FlxSplash_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.FlxSplash"), hx::TCanCast< FlxSplash_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxSplash_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
