#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_StageAlign
#include <flash/display/StageAlign.h>
#endif
#ifndef INCLUDED_flash_display_StageScaleMode
#include <flash/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_FocusEvent
#include <flash/events/FocusEvent.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
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
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSplash
#include <flixel/system/FlxSplash.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_mouse_FlxMouse
#include <flixel/system/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_text_pxText_PxBitmapFont
#include <flixel/text/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace flixel{

Void FlxGame_obj::__construct(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_GameFramerate,hx::Null< int >  __o_FlashFramerate,hx::Null< bool >  __o_SkipSplash)
{
HX_STACK_PUSH("FlxGame::new","flixel/FlxGame.hx",38);
Float Zoom = __o_Zoom.Default(1);
int GameFramerate = __o_GameFramerate.Default(60);
int FlashFramerate = __o_FlashFramerate.Default(60);
bool SkipSplash = __o_SkipSplash.Default(false);
{
	HX_STACK_LINE(172)
	this->_skipSplash = false;
	HX_STACK_LINE(135)
	this->_lostFocus = false;
	HX_STACK_LINE(126)
	this->_total = (int)0;
	HX_STACK_LINE(80)
	this->requestedReset = true;
	HX_STACK_LINE(76)
	this->requestedState = null();
	HX_STACK_LINE(47)
	this->state = null();
	HX_STACK_LINE(43)
	this->ticks = (int)0;
	HX_STACK_LINE(186)
	super::__construct();
	HX_STACK_LINE(189)
	this->inputContainer = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(192)
	::flixel::FlxG_obj::init(hx::ObjectPtr<OBJ_>(this),GameSizeX,GameSizeY,Zoom);
	HX_STACK_LINE(194)
	::flixel::FlxG_obj::set_framerate(GameFramerate);
	HX_STACK_LINE(195)
	::flixel::FlxG_obj::set_flashFramerate(FlashFramerate);
	HX_STACK_LINE(196)
	this->_accumulator = this->stepMS;
	HX_STACK_LINE(197)
	this->_skipSplash = SkipSplash;
	HX_STACK_LINE(204)
	this->_iState = InitialState;
	HX_STACK_LINE(206)
	this->addEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null(),null(),null());
}
;
	return null();
}

FlxGame_obj::~FlxGame_obj() { }

Dynamic FlxGame_obj::__CreateEmpty() { return  new FlxGame_obj; }
hx::ObjectPtr< FlxGame_obj > FlxGame_obj::__new(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_GameFramerate,hx::Null< int >  __o_FlashFramerate,hx::Null< bool >  __o_SkipSplash)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(GameSizeX,GameSizeY,InitialState,__o_Zoom,__o_GameFramerate,__o_FlashFramerate,__o_SkipSplash);
	return result;}

Dynamic FlxGame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Void FlxGame_obj::draw( ){
{
		HX_STACK_PUSH("FlxGame::draw","flixel/FlxGame.hx",684);
		HX_STACK_THIS(this);
		HX_STACK_LINE(694)
		::flixel::system::layer::TileSheetExt_obj::_DRAWCALLS = (int)0;
		HX_STACK_LINE(697)
		{
			HX_STACK_LINE(697)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(697)
			while(((_g < _g1->length))){
				HX_STACK_LINE(697)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(697)
				++(_g);
				HX_STACK_LINE(697)
				if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
					HX_STACK_LINE(697)
					continue;
				}
				HX_STACK_LINE(697)
				camera->clearDrawStack();
				HX_STACK_LINE(697)
				camera->_canvas->get_graphics()->clear();
				HX_STACK_LINE(697)
				camera->fill((int(camera->bgColor) & int((int)16777215)),camera->useBgAlphaBlending,(Float(((int((int(camera->bgColor) >> int((int)24))) & int((int)255)))) / Float((int)255)),null());
			}
		}
		HX_STACK_LINE(704)
		{
			HX_STACK_LINE(704)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(704)
			while(((_g < _g1->length))){
				HX_STACK_LINE(704)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(704)
				++(_g);
				HX_STACK_LINE(704)
				if (((bool(plugin->exists) && bool(plugin->visible)))){
					HX_STACK_LINE(704)
					plugin->draw();
				}
			}
		}
		HX_STACK_LINE(713)
		this->state->draw();
		HX_STACK_LINE(723)
		{
			HX_STACK_LINE(723)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(723)
			while(((_g < _g1->length))){
				HX_STACK_LINE(723)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(723)
				++(_g);
				HX_STACK_LINE(723)
				if (((bool((bool((camera != null())) && bool(camera->exists))) && bool(camera->visible)))){
					HX_STACK_LINE(723)
					camera->render();
				}
			}
		}
		HX_STACK_LINE(733)
		{
			HX_STACK_LINE(733)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(733)
			while(((_g < _g1->length))){
				HX_STACK_LINE(733)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(733)
				++(_g);
				HX_STACK_LINE(733)
				if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
					HX_STACK_LINE(733)
					continue;
				}
				HX_STACK_LINE(733)
				camera->drawFX();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,draw,(void))

Void FlxGame_obj::updateInput( ){
{
		HX_STACK_PUSH("FlxGame::updateInput","flixel/FlxGame.hx",622);
		HX_STACK_THIS(this);
		HX_STACK_LINE(665)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(665)
		while(((_g < _g1->length))){
			HX_STACK_LINE(665)
			::flixel::system::input::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(665)
			++(_g);
			HX_STACK_LINE(665)
			input->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,updateInput,(void))

Void FlxGame_obj::update( ){
{
		HX_STACK_PUSH("FlxGame::update","flixel/FlxGame.hx",582);
		HX_STACK_THIS(this);
		HX_STACK_LINE(583)
		if (((this->state != this->requestedState))){
			HX_STACK_LINE(584)
			this->switchState();
		}
		HX_STACK_LINE(595)
		if ((::flixel::FlxG_obj::fixedTimestep)){
			HX_STACK_LINE(596)
			::flixel::FlxG_obj::elapsed = (::flixel::FlxG_obj::timeScale * this->stepSeconds);
		}
		else{
			HX_STACK_LINE(600)
			::flixel::FlxG_obj::elapsed = (::flixel::FlxG_obj::timeScale * ((Float(this->elapsedMS) / Float((int)1000))));
		}
		HX_STACK_LINE(604)
		this->updateInput();
		HX_STACK_LINE(606)
		::flixel::FlxG_obj::sound->updateSounds();
		HX_STACK_LINE(607)
		{
			HX_STACK_LINE(607)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(607)
			while(((_g < _g1->length))){
				HX_STACK_LINE(607)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(607)
				++(_g);
				HX_STACK_LINE(607)
				if (((bool(plugin->exists) && bool(plugin->active)))){
					HX_STACK_LINE(607)
					plugin->update();
				}
			}
		}
		HX_STACK_LINE(609)
		this->state->tryUpdate();
		HX_STACK_LINE(611)
		{
			HX_STACK_LINE(611)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(611)
			while(((_g < _g1->length))){
				HX_STACK_LINE(611)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(611)
				++(_g);
				HX_STACK_LINE(611)
				if (((bool((camera != null())) && bool(camera->exists)))){
					HX_STACK_LINE(611)
					if ((camera->active)){
						HX_STACK_LINE(611)
						camera->update();
					}
					HX_STACK_LINE(611)
					if (((camera->target == null()))){
						HX_STACK_LINE(611)
						camera->_flashSprite->set_x((camera->x + camera->_flashOffsetX));
						HX_STACK_LINE(611)
						camera->_flashSprite->set_y((camera->y + camera->_flashOffsetY));
					}
					HX_STACK_LINE(611)
					camera->_flashSprite->set_visible(camera->visible);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,update,(void))

Void FlxGame_obj::step( ){
{
		HX_STACK_PUSH("FlxGame::step","flixel/FlxGame.hx",523);
		HX_STACK_THIS(this);
		HX_STACK_LINE(525)
		if ((this->requestedReset)){
			HX_STACK_LINE(527)
			{
				HX_STACK_LINE(527)
				if ((this->_skipSplash)){
					HX_STACK_LINE(527)
					this->requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
				}
				else{
					HX_STACK_LINE(527)
					this->requestedState = ::flixel::system::FlxSplash_obj::__new(this->_iState);
				}
				HX_STACK_LINE(527)
				::flixel::FlxG_obj::reset();
			}
			HX_STACK_LINE(528)
			this->requestedReset = false;
		}
		HX_STACK_LINE(566)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,step,(void))

Void FlxGame_obj::switchState( ){
{
		HX_STACK_PUSH("FlxGame::switchState","flixel/FlxGame.hx",476);
		HX_STACK_THIS(this);
		HX_STACK_LINE(478)
		::flixel::text::pxText::PxBitmapFont_obj::clearStorage();
		HX_STACK_LINE(479)
		::flixel::FlxG_obj::bitmap->clearCache();
		HX_STACK_LINE(480)
		::flixel::FlxG_obj::cameras->reset(null());
		HX_STACK_LINE(481)
		{
			HX_STACK_LINE(481)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(481)
			while(((_g < _g1->length))){
				HX_STACK_LINE(481)
				::flixel::system::input::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(481)
				++(_g);
				HX_STACK_LINE(481)
				input->reset();
			}
		}
		HX_STACK_LINE(482)
		::flixel::FlxG_obj::sound->destroySounds(null());
		HX_STACK_LINE(483)
		{
			HX_STACK_LINE(483)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(483)
			while(((_g < _g1->length))){
				HX_STACK_LINE(483)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(483)
				++(_g);
				HX_STACK_LINE(483)
				if ((plugin->exists)){
					HX_STACK_LINE(483)
					plugin->onStateSwitch();
				}
			}
		}
		HX_STACK_LINE(494)
		bool mouseVisibility = (bool(::flixel::FlxG_obj::mouse->_updateCursorContainer) || bool(((  (((this->state != null()))) ? bool(this->state->_useMouse) : bool(false) ))));		HX_STACK_VAR(mouseVisibility,"mouseVisibility");
		HX_STACK_LINE(497)
		if (((this->state != null()))){
			HX_STACK_LINE(498)
			this->state->destroy();
		}
		HX_STACK_LINE(503)
		this->state = this->requestedState;
		HX_STACK_LINE(506)
		{
			HX_STACK_LINE(506)
			::flixel::FlxState _this = this->state;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(506)
			_this->_useMouse = mouseVisibility;
			HX_STACK_LINE(506)
			_this->updateMouseVisibility();
			HX_STACK_LINE(506)
			mouseVisibility;
		}
		HX_STACK_LINE(509)
		this->state->create();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,switchState,(void))

Void FlxGame_obj::requestNewState( ::flixel::FlxState newState){
{
		HX_STACK_PUSH("FlxGame::requestNewState","flixel/FlxGame.hx",462);
		HX_STACK_THIS(this);
		HX_STACK_ARG(newState,"newState");
		HX_STACK_LINE(462)
		this->requestedState = newState;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,requestNewState,(void))

Void FlxGame_obj::resetGame( ){
{
		HX_STACK_PUSH("FlxGame::resetGame","flixel/FlxGame.hx",433);
		HX_STACK_THIS(this);
		HX_STACK_LINE(437)
		if ((this->_skipSplash)){
			HX_STACK_LINE(438)
			this->requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
		}
		else{
			HX_STACK_LINE(442)
			this->requestedState = ::flixel::system::FlxSplash_obj::__new(this->_iState);
		}
		HX_STACK_LINE(454)
		::flixel::FlxG_obj::reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,resetGame,(void))

Void FlxGame_obj::onEnterFrame( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onEnterFrame","flixel/FlxGame.hx",364);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(365)
		this->ticks = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(366)
		this->elapsedMS = (this->ticks - this->_total);
		HX_STACK_LINE(367)
		this->_total = this->ticks;
		HX_STACK_LINE(376)
		if ((!(this->_lostFocus))){
			HX_STACK_LINE(378)
			if ((::flixel::FlxG_obj::vcr->paused)){
				HX_STACK_LINE(379)
				if ((::flixel::FlxG_obj::vcr->stepRequested)){
					HX_STACK_LINE(381)
					::flixel::FlxG_obj::vcr->stepRequested = false;
				}
				else{
					HX_STACK_LINE(384)
					if (((this->state == this->requestedState))){
						HX_STACK_LINE(385)
						return null();
					}
				}
			}
			HX_STACK_LINE(390)
			if ((::flixel::FlxG_obj::fixedTimestep)){
				HX_STACK_LINE(392)
				hx::AddEq(this->_accumulator,this->elapsedMS);
				HX_STACK_LINE(393)
				if (((this->_accumulator > this->maxAccumulation))){
					HX_STACK_LINE(394)
					this->_accumulator = this->maxAccumulation;
				}
				HX_STACK_LINE(398)
				while(((this->_accumulator > this->stepMS))){
					HX_STACK_LINE(401)
					this->step();
					HX_STACK_LINE(402)
					this->_accumulator = (this->_accumulator - this->stepMS);
				}
			}
			else{
				HX_STACK_LINE(406)
				this->step();
			}
			HX_STACK_LINE(414)
			this->draw();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onEnterFrame,(void))

Void FlxGame_obj::onResize( ::flash::events::Event E){
{
		HX_STACK_PUSH("FlxGame::onResize","flixel/FlxGame.hx",339);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(340)
		int width = ::flash::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(341)
		int height = ::flash::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(344)
		::flixel::FlxG_obj::bitmap->onContext();
		HX_STACK_LINE(347)
		this->state->onResize(width,height);
		HX_STACK_LINE(348)
		{
			HX_STACK_LINE(348)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(348)
			while(((_g < _g1->length))){
				HX_STACK_LINE(348)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(348)
				++(_g);
				HX_STACK_LINE(348)
				if ((plugin->exists)){
					HX_STACK_LINE(348)
					plugin->onResize(width,height);
				}
			}
		}
		HX_STACK_LINE(353)
		if ((::flixel::FlxG_obj::autoResize)){
			HX_STACK_LINE(355)
			{
				HX_STACK_LINE(355)
				::flixel::FlxCamera _this = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(355)
				_this->set_width(::Math_obj::ceil((Float(width) / Float(::flixel::FlxG_obj::camera->zoom))));
				HX_STACK_LINE(355)
				_this->set_height(::Math_obj::ceil((Float(height) / Float(::flixel::FlxG_obj::camera->zoom))));
			}
			HX_STACK_LINE(355)
			::flixel::FlxG_obj::width = width;
			HX_STACK_LINE(355)
			::flixel::FlxG_obj::height = height;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onResize,(void))

Void FlxGame_obj::onFocusLost( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onFocusLost","flixel/FlxGame.hx",317);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(318)
		if ((!(::flixel::FlxG_obj::autoPause))){
			HX_STACK_LINE(320)
			this->state->onFocusLost();
			HX_STACK_LINE(321)
			return null();
		}
		HX_STACK_LINE(324)
		this->_lostFocus = true;
		HX_STACK_LINE(333)
		this->get_stage()->set_frameRate((int)10);
		HX_STACK_LINE(334)
		::flixel::FlxG_obj::sound->pauseSounds();
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(335)
			while(((_g < _g1->length))){
				HX_STACK_LINE(335)
				::flixel::system::input::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(335)
				++(_g);
				HX_STACK_LINE(335)
				input->onFocusLost();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocusLost,(void))

Void FlxGame_obj::onFocus( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onFocus","flixel/FlxGame.hx",291);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(292)
		if ((!(::flixel::FlxG_obj::autoPause))){
			HX_STACK_LINE(294)
			this->state->onFocus();
			HX_STACK_LINE(295)
			return null();
		}
		HX_STACK_LINE(298)
		this->_lostFocus = false;
		HX_STACK_LINE(307)
		this->get_stage()->set_frameRate(this->flashFramerate);
		HX_STACK_LINE(308)
		::flixel::FlxG_obj::sound->resumeSounds();
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(309)
			while(((_g < _g1->length))){
				HX_STACK_LINE(309)
				::flixel::system::input::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(309)
				++(_g);
				HX_STACK_LINE(309)
				input->onFocus();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocus,(void))

Void FlxGame_obj::create( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::create","flixel/FlxGame.hx",215);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(216)
		if (((this->get_stage() == null()))){
			HX_STACK_LINE(217)
			return null();
		}
		HX_STACK_LINE(220)
		this->removeEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null());
		HX_STACK_LINE(222)
		this->_total = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(225)
		this->get_stage()->set_scaleMode(::flash::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(226)
		this->get_stage()->set_align(::flash::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(227)
		this->get_stage()->set_frameRate(this->flashFramerate);
		HX_STACK_LINE(229)
		this->addChild(this->inputContainer);
		HX_STACK_LINE(256)
		this->get_stage()->addEventListener(::flash::events::FocusEvent_obj::FOCUS_OUT,this->onFocusLost_dyn(),null(),null(),null());
		HX_STACK_LINE(257)
		this->get_stage()->addEventListener(::flash::events::FocusEvent_obj::FOCUS_IN,this->onFocus_dyn(),null(),null(),null());
		HX_STACK_LINE(261)
		if ((this->requestedReset)){
			HX_STACK_LINE(263)
			{
				HX_STACK_LINE(263)
				if ((this->_skipSplash)){
					HX_STACK_LINE(263)
					this->requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
				}
				else{
					HX_STACK_LINE(263)
					this->requestedState = ::flixel::system::FlxSplash_obj::__new(this->_iState);
				}
				HX_STACK_LINE(263)
				::flixel::FlxG_obj::reset();
			}
			HX_STACK_LINE(264)
			this->switchState();
			HX_STACK_LINE(265)
			this->requestedReset = false;
		}
		HX_STACK_LINE(273)
		if (((::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->stepMS))) < ::flixel::FlxG_obj::get_flashFramerate()))){
			HX_STACK_LINE(274)
			::flixel::FlxG_obj::log->warn(HX_CSTRING("FlxG.flashFramerate: The game's framerate shouldn't be smaller than the flash framerate, since it can stop your game from updating."));
		}
		HX_STACK_LINE(279)
		this->get_stage()->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
		HX_STACK_LINE(283)
		this->get_stage()->addEventListener(::flash::events::Event_obj::RESIZE,this->onResize_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,create,(void))


FlxGame_obj::FlxGame_obj()
{
}

void FlxGame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGame);
	HX_MARK_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_MARK_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_MARK_MEMBER_NAME(_accumulator,"_accumulator");
	HX_MARK_MEMBER_NAME(_total,"_total");
	HX_MARK_MEMBER_NAME(_iState,"_iState");
	HX_MARK_MEMBER_NAME(requestedReset,"requestedReset");
	HX_MARK_MEMBER_NAME(requestedState,"requestedState");
	HX_MARK_MEMBER_NAME(maxAccumulation,"maxAccumulation");
	HX_MARK_MEMBER_NAME(flashFramerate,"flashFramerate");
	HX_MARK_MEMBER_NAME(stepSeconds,"stepSeconds");
	HX_MARK_MEMBER_NAME(stepMS,"stepMS");
	HX_MARK_MEMBER_NAME(elapsedMS,"elapsedMS");
	HX_MARK_MEMBER_NAME(inputContainer,"inputContainer");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(ticks,"ticks");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxGame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_VISIT_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_VISIT_MEMBER_NAME(_accumulator,"_accumulator");
	HX_VISIT_MEMBER_NAME(_total,"_total");
	HX_VISIT_MEMBER_NAME(_iState,"_iState");
	HX_VISIT_MEMBER_NAME(requestedReset,"requestedReset");
	HX_VISIT_MEMBER_NAME(requestedState,"requestedState");
	HX_VISIT_MEMBER_NAME(maxAccumulation,"maxAccumulation");
	HX_VISIT_MEMBER_NAME(flashFramerate,"flashFramerate");
	HX_VISIT_MEMBER_NAME(stepSeconds,"stepSeconds");
	HX_VISIT_MEMBER_NAME(stepMS,"stepMS");
	HX_VISIT_MEMBER_NAME(elapsedMS,"elapsedMS");
	HX_VISIT_MEMBER_NAME(inputContainer,"inputContainer");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(ticks,"ticks");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxGame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"ticks") ) { return ticks; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"_total") ) { return _total; }
		if (HX_FIELD_EQ(inName,"stepMS") ) { return stepMS; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"_iState") ) { return _iState; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		if (HX_FIELD_EQ(inName,"elapsedMS") ) { return elapsedMS; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { return _lostFocus; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateInput") ) { return updateInput_dyn(); }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { return _skipSplash; }
		if (HX_FIELD_EQ(inName,"stepSeconds") ) { return stepSeconds; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"_accumulator") ) { return _accumulator; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestedReset") ) { return requestedReset; }
		if (HX_FIELD_EQ(inName,"requestedState") ) { return requestedState; }
		if (HX_FIELD_EQ(inName,"flashFramerate") ) { return flashFramerate; }
		if (HX_FIELD_EQ(inName,"inputContainer") ) { return inputContainer; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"requestNewState") ) { return requestNewState_dyn(); }
		if (HX_FIELD_EQ(inName,"maxAccumulation") ) { return maxAccumulation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ticks") ) { ticks=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_total") ) { _total=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepMS") ) { stepMS=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_iState") ) { _iState=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"elapsedMS") ) { elapsedMS=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { _lostFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { _skipSplash=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepSeconds") ) { stepSeconds=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_accumulator") ) { _accumulator=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestedReset") ) { requestedReset=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"requestedState") ) { requestedState=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flashFramerate") ) { flashFramerate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputContainer") ) { inputContainer=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"maxAccumulation") ) { maxAccumulation=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_skipSplash"));
	outFields->push(HX_CSTRING("_lostFocus"));
	outFields->push(HX_CSTRING("_accumulator"));
	outFields->push(HX_CSTRING("_total"));
	outFields->push(HX_CSTRING("_iState"));
	outFields->push(HX_CSTRING("requestedReset"));
	outFields->push(HX_CSTRING("requestedState"));
	outFields->push(HX_CSTRING("maxAccumulation"));
	outFields->push(HX_CSTRING("flashFramerate"));
	outFields->push(HX_CSTRING("stepSeconds"));
	outFields->push(HX_CSTRING("stepMS"));
	outFields->push(HX_CSTRING("elapsedMS"));
	outFields->push(HX_CSTRING("inputContainer"));
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("ticks"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("updateInput"),
	HX_CSTRING("update"),
	HX_CSTRING("step"),
	HX_CSTRING("switchState"),
	HX_CSTRING("requestNewState"),
	HX_CSTRING("resetGame"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("onResize"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("create"),
	HX_CSTRING("_skipSplash"),
	HX_CSTRING("_lostFocus"),
	HX_CSTRING("_accumulator"),
	HX_CSTRING("_total"),
	HX_CSTRING("_iState"),
	HX_CSTRING("requestedReset"),
	HX_CSTRING("requestedState"),
	HX_CSTRING("maxAccumulation"),
	HX_CSTRING("flashFramerate"),
	HX_CSTRING("stepSeconds"),
	HX_CSTRING("stepMS"),
	HX_CSTRING("elapsedMS"),
	HX_CSTRING("inputContainer"),
	HX_CSTRING("state"),
	HX_CSTRING("ticks"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
};

Class FlxGame_obj::__mClass;

void FlxGame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxGame"), hx::TCanCast< FlxGame_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxGame_obj::__boot()
{
}

} // end namespace flixel
