#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_plugin_TweenManager
#include <flixel/plugin/TweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_MultiVarTween
#include <flixel/tweens/misc/MultiVarTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_sound_Fader
#include <flixel/tweens/sound/Fader.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace tweens{

Void FlxTween_obj::__construct(Float duration,hx::Null< int >  __o_type,Dynamic complete,Dynamic ease)
{
HX_STACK_PUSH("FlxTween::new","flixel/tweens/FlxTween.hx",26);
int type = __o_type.Default(0);
{
	HX_STACK_LINE(414)
	this->userData = null();
	HX_STACK_LINE(410)
	this->executions = (int)0;
	HX_STACK_LINE(425)
	this->_target = duration;
	HX_STACK_LINE(426)
	if (((type == (int)0))){
		HX_STACK_LINE(427)
		type = (int)8;
	}
	else{
		HX_STACK_LINE(430)
		if (((type == (int)16))){
			HX_STACK_LINE(431)
			type = (int)17;
		}
	}
	HX_STACK_LINE(434)
	this->_type = type;
	HX_STACK_LINE(435)
	this->complete = complete;
	HX_STACK_LINE(436)
	this->_ease = ease;
	HX_STACK_LINE(437)
	this->_t = (int)0;
	HX_STACK_LINE(439)
	this->_backward = (((int(this->_type) & int((int)16))) > (int)0);
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",440);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(440)
	this->userData = _Function_1_1::Block();
}
;
	return null();
}

FlxTween_obj::~FlxTween_obj() { }

Dynamic FlxTween_obj::__CreateEmpty() { return  new FlxTween_obj; }
hx::ObjectPtr< FlxTween_obj > FlxTween_obj::__new(Float duration,hx::Null< int >  __o_type,Dynamic complete,Dynamic ease)
{  hx::ObjectPtr< FlxTween_obj > result = new FlxTween_obj();
	result->__construct(duration,__o_type,complete,ease);
	return result;}

Dynamic FlxTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTween_obj > result = new FlxTween_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Float FlxTween_obj::get_scale( ){
	HX_STACK_PUSH("FlxTween::get_scale","flixel/tweens/FlxTween.hx",545);
	HX_STACK_THIS(this);
	HX_STACK_LINE(545)
	return this->_t;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,get_scale,return )

Float FlxTween_obj::set_percent( Float value){
	HX_STACK_PUSH("FlxTween::set_percent","flixel/tweens/FlxTween.hx",542);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(542)
	this->_time = (this->_target * value);
	HX_STACK_LINE(542)
	return this->_time;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_percent,return )

Float FlxTween_obj::get_percent( ){
	HX_STACK_PUSH("FlxTween::get_percent","flixel/tweens/FlxTween.hx",541);
	HX_STACK_THIS(this);
	HX_STACK_LINE(541)
	return (Float(this->_time) / Float(this->_target));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,get_percent,return )

Void FlxTween_obj::finish( ){
{
		HX_STACK_PUSH("FlxTween::finish","flixel/tweens/FlxTween.hx",506);
		HX_STACK_THIS(this);
		HX_STACK_LINE(507)
		(this->executions)++;
		HX_STACK_LINE(509)
		if (((this->complete_dyn() != null()))){
			HX_STACK_LINE(510)
			this->complete(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(514)
		{
			HX_STACK_LINE(514)
			int _g = (int(this->_type) & int((int)-17));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(514)
			switch( (int)(_g)){
				case (int)1: {
					HX_STACK_LINE(517)
					this->_time = this->_target;
					HX_STACK_LINE(518)
					this->active = false;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(520)
					hx::ModEq(this->_time,this->_target);
					HX_STACK_LINE(521)
					this->_t = (Float(this->_time) / Float(this->_target));
					HX_STACK_LINE(522)
					if (((bool((bool((this->_ease_dyn() != null())) && bool((this->_t > (int)0)))) && bool((this->_t < (int)1))))){
						HX_STACK_LINE(522)
						this->_t = this->_ease(this->_t);
					}
					HX_STACK_LINE(523)
					this->start();
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(525)
					hx::ModEq(this->_time,this->_target);
					HX_STACK_LINE(526)
					this->_t = (Float(this->_time) / Float(this->_target));
					HX_STACK_LINE(527)
					if (((bool((bool((this->_ease_dyn() != null())) && bool((this->_t > (int)0)))) && bool((this->_t < (int)1))))){
						HX_STACK_LINE(527)
						this->_t = this->_ease(this->_t);
					}
					HX_STACK_LINE(528)
					this->_backward = !(this->_backward);
					HX_STACK_LINE(529)
					if ((this->_backward)){
						HX_STACK_LINE(529)
						this->_t = ((int)1 - this->_t);
					}
					HX_STACK_LINE(530)
					this->start();
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(532)
					this->_time = this->_target;
					HX_STACK_LINE(533)
					this->active = false;
					HX_STACK_LINE(534)
					::flixel::tweens::FlxTween_obj::manager->remove(hx::ObjectPtr<OBJ_>(this),true);
				}
				;break;
			}
		}
		HX_STACK_LINE(537)
		this->finished = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,finish,(void))

Void FlxTween_obj::cancel( ){
{
		HX_STACK_PUSH("FlxTween::cancel","flixel/tweens/FlxTween.hx",499);
		HX_STACK_THIS(this);
		HX_STACK_LINE(500)
		this->active = false;
		HX_STACK_LINE(501)
		::flixel::tweens::FlxTween_obj::manager->remove(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,cancel,(void))

Dynamic FlxTween_obj::start( ){
	HX_STACK_PUSH("FlxTween::start","flixel/tweens/FlxTween.hx",484);
	HX_STACK_THIS(this);
	HX_STACK_LINE(485)
	this->_time = (int)0;
	HX_STACK_LINE(486)
	if (((this->_target == (int)0))){
		HX_STACK_LINE(488)
		this->active = false;
		HX_STACK_LINE(489)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(491)
	this->active = true;
	HX_STACK_LINE(492)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,start,return )

Void FlxTween_obj::update( ){
{
		HX_STACK_PUSH("FlxTween::update","flixel/tweens/FlxTween.hx",454);
		HX_STACK_THIS(this);
		HX_STACK_LINE(455)
		hx::AddEq(this->_time,::flixel::FlxG_obj::elapsed);
		HX_STACK_LINE(456)
		this->_t = (Float(this->_time) / Float(this->_target));
		HX_STACK_LINE(457)
		if (((this->_ease_dyn() != null()))){
			HX_STACK_LINE(458)
			this->_t = this->_ease(this->_t);
		}
		HX_STACK_LINE(461)
		if ((this->_backward)){
			HX_STACK_LINE(462)
			this->_t = ((int)1 - this->_t);
		}
		HX_STACK_LINE(465)
		if (((this->_time >= this->_target))){
			HX_STACK_LINE(467)
			if ((!(this->_backward))){
				HX_STACK_LINE(468)
				this->_t = (int)1;
			}
			else{
				HX_STACK_LINE(472)
				this->_t = (int)0;
			}
			HX_STACK_LINE(476)
			this->finished = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,update,(void))

Void FlxTween_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTween::destroy","flixel/tweens/FlxTween.hx",444);
		HX_STACK_THIS(this);
		HX_STACK_LINE(445)
		this->complete = null();
		HX_STACK_LINE(446)
		this->_ease = null();
		HX_STACK_LINE(447)
		this->userData = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,destroy,(void))

::flixel::plugin::TweenManager FlxTween_obj::manager;

::flixel::tweens::misc::MultiVarTween FlxTween_obj::multiVar( Dynamic Object,Dynamic Values,Float Duration,Dynamic Options){
	HX_STACK_PUSH("FlxTween::multiVar","flixel/tweens/FlxTween.hx",46);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Values,"Values");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(Options,"Options");
	HX_STACK_LINE(47)
	if (((Options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",49);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(48)
		Options = _Function_2_1::Block();
	}
	HX_STACK_LINE(52)
	::flixel::tweens::misc::MultiVarTween tween = ::flixel::tweens::misc::MultiVarTween_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
	HX_STACK_LINE(53)
	tween->tween(Object,Values,Duration,Options->__Field(HX_CSTRING("ease"),true));
	HX_STACK_LINE(54)
	::flixel::tweens::FlxTween_obj::manager->add(tween,null());
	HX_STACK_LINE(56)
	return tween;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTween_obj,multiVar,return )

::flixel::tweens::misc::NumTween FlxTween_obj::num( Float FromValue,Float ToValue,Float Duration,Dynamic Options){
	HX_STACK_PUSH("FlxTween::num","flixel/tweens/FlxTween.hx",73);
	HX_STACK_ARG(FromValue,"FromValue");
	HX_STACK_ARG(ToValue,"ToValue");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(Options,"Options");
	HX_STACK_LINE(74)
	if (((Options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",76);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(75)
		Options = _Function_2_1::Block();
	}
	HX_STACK_LINE(79)
	::flixel::tweens::misc::NumTween tween = ::flixel::tweens::misc::NumTween_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
	HX_STACK_LINE(80)
	tween->tween(FromValue,ToValue,Duration,Options->__Field(HX_CSTRING("ease"),true));
	HX_STACK_LINE(81)
	::flixel::tweens::FlxTween_obj::manager->add(tween,null());
	HX_STACK_LINE(83)
	return tween;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTween_obj,num,return )

::flixel::tweens::misc::AngleTween FlxTween_obj::angle( Float FromAngle,Float ToAngle,Float Duration,Dynamic Options){
	HX_STACK_PUSH("FlxTween::angle","flixel/tweens/FlxTween.hx",100);
	HX_STACK_ARG(FromAngle,"FromAngle");
	HX_STACK_ARG(ToAngle,"ToAngle");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(Options,"Options");
	HX_STACK_LINE(101)
	if (((Options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",103);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(102)
		Options = _Function_2_1::Block();
	}
	HX_STACK_LINE(106)
	::flixel::tweens::misc::AngleTween tween = ::flixel::tweens::misc::AngleTween_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
	HX_STACK_LINE(107)
	tween->tween(FromAngle,ToAngle,Duration,Options->__Field(HX_CSTRING("ease"),true));
	HX_STACK_LINE(108)
	::flixel::tweens::FlxTween_obj::manager->add(tween,null());
	HX_STACK_LINE(110)
	return tween;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTween_obj,angle,return )

::flixel::tweens::misc::ColorTween FlxTween_obj::color( Float Duration,int FromColor,int ToColor,hx::Null< Float >  __o_FromAlpha,hx::Null< Float >  __o_ToAlpha,Dynamic Options){
Float FromAlpha = __o_FromAlpha.Default(1);
Float ToAlpha = __o_ToAlpha.Default(1);
	HX_STACK_PUSH("FlxTween::color","flixel/tweens/FlxTween.hx",129);
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(FromColor,"FromColor");
	HX_STACK_ARG(ToColor,"ToColor");
	HX_STACK_ARG(FromAlpha,"FromAlpha");
	HX_STACK_ARG(ToAlpha,"ToAlpha");
	HX_STACK_ARG(Options,"Options");
{
		HX_STACK_LINE(130)
		if (((Options == null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",132);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("type") , (int)8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(131)
			Options = _Function_2_1::Block();
		}
		HX_STACK_LINE(135)
		::flixel::tweens::misc::ColorTween tween = ::flixel::tweens::misc::ColorTween_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(136)
		tween->tween(Duration,FromColor,ToColor,FromAlpha,ToAlpha,Options->__Field(HX_CSTRING("ease"),true));
		HX_STACK_LINE(137)
		::flixel::tweens::FlxTween_obj::manager->add(tween,null());
		HX_STACK_LINE(139)
		return tween;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxTween_obj,color,return )

::flixel::tweens::sound::Fader FlxTween_obj::fader( Float Volume,Float Duration,Dynamic Options){
	HX_STACK_PUSH("FlxTween::fader","flixel/tweens/FlxTween.hx",155);
	HX_STACK_ARG(Volume,"Volume");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(Options,"Options");
	HX_STACK_LINE(156)
	if (((Options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",158);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(157)
		Options = _Function_2_1::Block();
	}
	HX_STACK_LINE(161)
	::flixel::tweens::sound::Fader tween = ::flixel::tweens::sound::Fader_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
	HX_STACK_LINE(162)
	tween->fadeTo(Volume,Duration,Options->__Field(HX_CSTRING("ease"),true));
	HX_STACK_LINE(163)
	::flixel::tweens::FlxTween_obj::manager->add(tween,null());
	HX_STACK_LINE(165)
	return tween;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxTween_obj,fader,return )

::flixel::tweens::motion::LinearMotion FlxTween_obj::linearMotion( Dynamic Object,Float FromX,Float FromY,Float ToX,Float ToY,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_PUSH("FlxTween::linearMotion","flixel/tweens/FlxTween.hx",186);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(FromX,"FromX");
	HX_STACK_ARG(FromY,"FromY");
	HX_STACK_ARG(ToX,"ToX");
	HX_STACK_ARG(ToY,"ToY");
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed");
	HX_STACK_ARG(UseDuration,"UseDuration");
	HX_STACK_ARG(Options,"Options");
{
		HX_STACK_LINE(187)
		if (((Options == null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",189);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("type") , (int)8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(188)
			Options = _Function_2_1::Block();
		}
		HX_STACK_LINE(192)
		::flixel::tweens::motion::LinearMotion tween = ::flixel::tweens::motion::LinearMotion_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(193)
		tween->setObject(Object);
		HX_STACK_LINE(194)
		tween->setMotion(FromX,FromY,ToX,ToY,DurationOrSpeed,UseDuration,Options->__Field(HX_CSTRING("ease"),true));
		HX_STACK_LINE(195)
		::flixel::tweens::FlxTween_obj::manager->add(tween,null());
		HX_STACK_LINE(197)
		return tween;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxTween_obj,linearMotion,return )

::flixel::tweens::motion::QuadMotion FlxTween_obj::quadMotion( Dynamic Object,Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_PUSH("FlxTween::quadMotion","flixel/tweens/FlxTween.hx",220);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(FromX,"FromX");
	HX_STACK_ARG(FromY,"FromY");
	HX_STACK_ARG(ControlX,"ControlX");
	HX_STACK_ARG(ControlY,"ControlY");
	HX_STACK_ARG(ToX,"ToX");
	HX_STACK_ARG(ToY,"ToY");
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed");
	HX_STACK_ARG(UseDuration,"UseDuration");
	HX_STACK_ARG(Options,"Options");
{
		HX_STACK_LINE(221)
		if (((Options == null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",223);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("type") , (int)8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(222)
			Options = _Function_2_1::Block();
		}
		HX_STACK_LINE(226)
		::flixel::tweens::motion::QuadMotion tween = ::flixel::tweens::motion::QuadMotion_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(227)
		tween->setObject(Object);
		HX_STACK_LINE(228)
		tween->setMotion(FromX,FromY,ControlX,ControlY,ToX,ToY,DurationOrSpeed,UseDuration,Options->__Field(HX_CSTRING("ease"),true));
		HX_STACK_LINE(229)
		::flixel::tweens::FlxTween_obj::manager->add(tween,null());
		HX_STACK_LINE(231)
		return tween;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(FlxTween_obj,quadMotion,return )

::flixel::tweens::motion::CubicMotion FlxTween_obj::cubicMotion( Dynamic Object,Float FromX,Float FromY,Float aX,Float aY,Float bX,Float bY,Float ToX,Float ToY,Float Duration,Dynamic Options){
	HX_STACK_PUSH("FlxTween::cubicMotion","flixel/tweens/FlxTween.hx",255);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(FromX,"FromX");
	HX_STACK_ARG(FromY,"FromY");
	HX_STACK_ARG(aX,"aX");
	HX_STACK_ARG(aY,"aY");
	HX_STACK_ARG(bX,"bX");
	HX_STACK_ARG(bY,"bY");
	HX_STACK_ARG(ToX,"ToX");
	HX_STACK_ARG(ToY,"ToY");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(Options,"Options");
	HX_STACK_LINE(256)
	if (((Options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",258);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(257)
		Options = _Function_2_1::Block();
	}
	HX_STACK_LINE(261)
	::flixel::tweens::motion::CubicMotion tween = ::flixel::tweens::motion::CubicMotion_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
	HX_STACK_LINE(262)
	tween->setObject(Object);
	HX_STACK_LINE(263)
	tween->setMotion(FromX,FromY,aX,aY,bX,bY,ToX,ToY,Duration,Options->__Field(HX_CSTRING("ease"),true));
	HX_STACK_LINE(264)
	::flixel::tweens::FlxTween_obj::manager->add(tween,null());
	HX_STACK_LINE(266)
	return tween;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(FlxTween_obj,cubicMotion,return )

::flixel::tweens::motion::CircularMotion FlxTween_obj::circularMotion( Dynamic Object,Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_PUSH("FlxTween::circularMotion","flixel/tweens/FlxTween.hx",289);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(CenterX,"CenterX");
	HX_STACK_ARG(CenterY,"CenterY");
	HX_STACK_ARG(Radius,"Radius");
	HX_STACK_ARG(Angle,"Angle");
	HX_STACK_ARG(Clockwise,"Clockwise");
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed");
	HX_STACK_ARG(UseDuration,"UseDuration");
	HX_STACK_ARG(Options,"Options");
{
		HX_STACK_LINE(290)
		if (((Options == null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",292);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("type") , (int)8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(291)
			Options = _Function_2_1::Block();
		}
		HX_STACK_LINE(295)
		::flixel::tweens::motion::CircularMotion tween = ::flixel::tweens::motion::CircularMotion_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(296)
		tween->setObject(Object);
		HX_STACK_LINE(297)
		tween->setMotion(CenterX,CenterY,Radius,Angle,Clockwise,DurationOrSpeed,UseDuration,Options->__Field(HX_CSTRING("ease"),true));
		HX_STACK_LINE(298)
		::flixel::tweens::FlxTween_obj::manager->add(tween,null());
		HX_STACK_LINE(300)
		return tween;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxTween_obj,circularMotion,return )

::flixel::tweens::motion::LinearPath FlxTween_obj::linearPath( Dynamic Object,Array< ::Dynamic > Points,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_PUSH("FlxTween::linearPath","flixel/tweens/FlxTween.hx",318);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Points,"Points");
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed");
	HX_STACK_ARG(UseDuration,"UseDuration");
	HX_STACK_ARG(Options,"Options");
{
		HX_STACK_LINE(319)
		if (((Options == null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",321);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("type") , (int)8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(320)
			Options = _Function_2_1::Block();
		}
		HX_STACK_LINE(324)
		::flixel::tweens::motion::LinearPath tween = ::flixel::tweens::motion::LinearPath_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(326)
		if (((Points != null()))){
			HX_STACK_LINE(328)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(328)
			while(((_g < Points->length))){
				HX_STACK_LINE(328)
				::flixel::util::FlxPoint point = Points->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(328)
				++(_g);
				HX_STACK_LINE(330)
				tween->addPoint(point->x,point->y);
			}
		}
		HX_STACK_LINE(334)
		tween->setObject(Object);
		HX_STACK_LINE(335)
		tween->setMotion(DurationOrSpeed,UseDuration,Options->__Field(HX_CSTRING("ease"),true));
		HX_STACK_LINE(336)
		::flixel::tweens::FlxTween_obj::manager->add(tween,null());
		HX_STACK_LINE(338)
		return tween;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,linearPath,return )

::flixel::tweens::motion::QuadPath FlxTween_obj::quadPath( Dynamic Object,Array< ::Dynamic > Points,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_PUSH("FlxTween::quadPath","flixel/tweens/FlxTween.hx",356);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Points,"Points");
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed");
	HX_STACK_ARG(UseDuration,"UseDuration");
	HX_STACK_ARG(Options,"Options");
{
		HX_STACK_LINE(357)
		if (((Options == null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",359);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("type") , (int)8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(358)
			Options = _Function_2_1::Block();
		}
		HX_STACK_LINE(362)
		::flixel::tweens::motion::QuadPath tween = ::flixel::tweens::motion::QuadPath_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(364)
		if (((Points != null()))){
			HX_STACK_LINE(366)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(366)
			while(((_g < Points->length))){
				HX_STACK_LINE(366)
				::flixel::util::FlxPoint point = Points->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(366)
				++(_g);
				HX_STACK_LINE(368)
				tween->addPoint(point->x,point->y);
			}
		}
		HX_STACK_LINE(372)
		tween->setObject(Object);
		HX_STACK_LINE(373)
		tween->setMotion(DurationOrSpeed,UseDuration,Options->__Field(HX_CSTRING("ease"),true));
		HX_STACK_LINE(374)
		::flixel::tweens::FlxTween_obj::manager->add(tween,null());
		HX_STACK_LINE(376)
		return tween;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,quadPath,return )


FlxTween_obj::FlxTween_obj()
{
}

void FlxTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTween);
	HX_MARK_MEMBER_NAME(_backward,"_backward");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_t,"_t");
	HX_MARK_MEMBER_NAME(_ease,"_ease");
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(executions,"executions");
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void FlxTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_backward,"_backward");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_t,"_t");
	HX_VISIT_MEMBER_NAME(_ease,"_ease");
	HX_VISIT_MEMBER_NAME(_type,"_type");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(executions,"executions");
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(active,"active");
}

Dynamic FlxTween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_t") ) { return _t; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { return num_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return color_dyn(); }
		if (HX_FIELD_EQ(inName,"fader") ) { return fader_dyn(); }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"_ease") ) { return _ease; }
		if (HX_FIELD_EQ(inName,"_type") ) { return _type; }
		if (HX_FIELD_EQ(inName,"scale") ) { return inCallProp ? get_scale() : scale; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"_target") ) { return _target; }
		if (HX_FIELD_EQ(inName,"percent") ) { return get_percent(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"multiVar") ) { return multiVar_dyn(); }
		if (HX_FIELD_EQ(inName,"quadPath") ) { return quadPath_dyn(); }
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"complete") ) { return complete; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_backward") ) { return _backward; }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quadMotion") ) { return quadMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"linearPath") ) { return linearPath_dyn(); }
		if (HX_FIELD_EQ(inName,"executions") ) { return executions; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cubicMotion") ) { return cubicMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percent") ) { return set_percent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_percent") ) { return get_percent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"linearMotion") ) { return linearMotion_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"circularMotion") ) { return circularMotion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_t") ) { _t=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ease") ) { _ease=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::flixel::plugin::TweenManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percent") ) { return set_percent(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_backward") ) { _backward=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"executions") ) { executions=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_backward"));
	outFields->push(HX_CSTRING("_target"));
	outFields->push(HX_CSTRING("_time"));
	outFields->push(HX_CSTRING("_t"));
	outFields->push(HX_CSTRING("_type"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("percent"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("executions"));
	outFields->push(HX_CSTRING("active"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("manager"),
	HX_CSTRING("multiVar"),
	HX_CSTRING("num"),
	HX_CSTRING("angle"),
	HX_CSTRING("color"),
	HX_CSTRING("fader"),
	HX_CSTRING("linearMotion"),
	HX_CSTRING("quadMotion"),
	HX_CSTRING("cubicMotion"),
	HX_CSTRING("circularMotion"),
	HX_CSTRING("linearPath"),
	HX_CSTRING("quadPath"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_backward"),
	HX_CSTRING("_target"),
	HX_CSTRING("_time"),
	HX_CSTRING("_t"),
	HX_CSTRING("_ease"),
	HX_CSTRING("_type"),
	HX_CSTRING("finished"),
	HX_CSTRING("get_scale"),
	HX_CSTRING("scale"),
	HX_CSTRING("set_percent"),
	HX_CSTRING("get_percent"),
	HX_CSTRING("finish"),
	HX_CSTRING("cancel"),
	HX_CSTRING("start"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("userData"),
	HX_CSTRING("executions"),
	HX_CSTRING("complete"),
	HX_CSTRING("active"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTween_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTween_obj::manager,"manager");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTween_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::manager,"manager");
};

Class FlxTween_obj::__mClass;

void FlxTween_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.FlxTween"), hx::TCanCast< FlxTween_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTween_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
