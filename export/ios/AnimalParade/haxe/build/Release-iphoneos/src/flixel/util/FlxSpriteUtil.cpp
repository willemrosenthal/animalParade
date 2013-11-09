#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_CapsStyle
#include <flash/display/CapsStyle.h>
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
#ifndef INCLUDED_flash_display_JointStyle
#include <flash/display/JointStyle.h>
#endif
#ifndef INCLUDED_flash_display_LineScaleMode
#include <flash/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace util{

Void FlxSpriteUtil_obj::__construct()
{
	return null();
}

FlxSpriteUtil_obj::~FlxSpriteUtil_obj() { }

Dynamic FlxSpriteUtil_obj::__CreateEmpty() { return  new FlxSpriteUtil_obj; }
hx::ObjectPtr< FlxSpriteUtil_obj > FlxSpriteUtil_obj::__new()
{  hx::ObjectPtr< FlxSpriteUtil_obj > result = new FlxSpriteUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxSpriteUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSpriteUtil_obj > result = new FlxSpriteUtil_obj();
	result->__construct();
	return result;}

::flash::display::Sprite FlxSpriteUtil_obj::flashGfxSprite;

::flash::display::Graphics FlxSpriteUtil_obj::flashGfx;

::flixel::FlxSprite FlxSpriteUtil_obj::alphaMask( Dynamic source,Dynamic mask,::flixel::FlxSprite output){
	HX_STACK_PUSH("FlxSpriteUtil::alphaMask","flixel/util/FlxSpriteUtil.hx",46);
	HX_STACK_ARG(source,"source");
	HX_STACK_ARG(mask,"mask");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(47)
	::flash::display::BitmapData data = null();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(48)
	if ((::Std_obj::is(source,hx::ClassOf< ::String >()))){
		struct _Function_2_1{
			inline static ::flash::display::BitmapData Block( Dynamic &source){
				HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",50);
				{
					HX_STACK_LINE(50)
					::String id = source;		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(50)
					return ::openfl::Assets_obj::getBitmapData(id,false);
				}
				return null();
			}
		};
		HX_STACK_LINE(49)
		data = _Function_2_1::Block(source);
	}
	else{
		HX_STACK_LINE(52)
		if ((::Std_obj::is(source,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(53)
			data = ::Type_obj::createInstance(source,Dynamic( Array_obj<Dynamic>::__new()))->__Field(HX_CSTRING("bitmapData"),true);
		}
		else{
			HX_STACK_LINE(56)
			if ((::Std_obj::is(source,hx::ClassOf< ::flash::display::BitmapData >()))){
				HX_STACK_LINE(57)
				data = (hx::TCast< flash::display::BitmapData >::cast(source))->clone();
			}
			else{
				HX_STACK_LINE(61)
				return null();
			}
		}
	}
	HX_STACK_LINE(64)
	::flash::display::BitmapData maskData = null();		HX_STACK_VAR(maskData,"maskData");
	HX_STACK_LINE(65)
	if ((::Std_obj::is(mask,hx::ClassOf< ::String >()))){
		struct _Function_2_1{
			inline static ::flash::display::BitmapData Block( Dynamic &mask){
				HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",67);
				{
					HX_STACK_LINE(67)
					::String id = mask;		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(67)
					return ::openfl::Assets_obj::getBitmapData(id,false);
				}
				return null();
			}
		};
		HX_STACK_LINE(66)
		maskData = _Function_2_1::Block(mask);
	}
	else{
		HX_STACK_LINE(69)
		if ((::Std_obj::is(mask,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(70)
			maskData = ::Type_obj::createInstance(mask,Dynamic( Array_obj<Dynamic>::__new()))->__Field(HX_CSTRING("bitmapData"),true);
		}
		else{
			HX_STACK_LINE(73)
			if ((::Std_obj::is(mask,hx::ClassOf< ::flash::display::BitmapData >()))){
				HX_STACK_LINE(74)
				maskData = mask;
			}
			else{
				HX_STACK_LINE(78)
				return null();
			}
		}
	}
	HX_STACK_LINE(82)
	data->copyChannel(maskData,::flash::geom::Rectangle_obj::__new((int)0,(int)0,data->get_width(),data->get_height()),::flash::geom::Point_obj::__new(null(),null()),(int)8,(int)8);
	HX_STACK_LINE(84)
	output->set_pixels(data);
	HX_STACK_LINE(86)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,alphaMask,return )

::flixel::FlxSprite FlxSpriteUtil_obj::alphaMaskFlxSprite( ::flixel::FlxSprite sprite,::flixel::FlxSprite mask,::flixel::FlxSprite output){
	HX_STACK_PUSH("FlxSpriteUtil::alphaMaskFlxSprite","flixel/util/FlxSpriteUtil.hx",102);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(mask,"mask");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(103)
	::flash::display::BitmapData data = sprite->get_pixels();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(105)
	data->copyChannel(mask->get_pixels(),::flash::geom::Rectangle_obj::__new((int)0,(int)0,sprite->width,sprite->height),::flash::geom::Point_obj::__new(null(),null()),(int)8,(int)8);
	HX_STACK_LINE(107)
	output->set_pixels(data);
	HX_STACK_LINE(109)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,alphaMaskFlxSprite,return )

Void FlxSpriteUtil_obj::screenWrap( ::flixel::FlxSprite sprite,hx::Null< bool >  __o_Left,hx::Null< bool >  __o_Right,hx::Null< bool >  __o_Top,hx::Null< bool >  __o_Bottom){
bool Left = __o_Left.Default(true);
bool Right = __o_Right.Default(true);
bool Top = __o_Top.Default(true);
bool Bottom = __o_Bottom.Default(true);
	HX_STACK_PUSH("FlxSpriteUtil::screenWrap","flixel/util/FlxSpriteUtil.hx",122);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(Left,"Left");
	HX_STACK_ARG(Right,"Right");
	HX_STACK_ARG(Top,"Top");
	HX_STACK_ARG(Bottom,"Bottom");
{
		HX_STACK_LINE(123)
		if (((bool(Left) && bool((sprite->x < (int)0))))){
			HX_STACK_LINE(124)
			sprite->set_x(::flixel::FlxG_obj::width);
		}
		else{
			HX_STACK_LINE(127)
			if (((bool(Right) && bool((sprite->x > ::flixel::FlxG_obj::width))))){
				HX_STACK_LINE(128)
				sprite->set_x((int)0);
			}
		}
		HX_STACK_LINE(132)
		if (((bool(Top) && bool((sprite->y < (int)0))))){
			HX_STACK_LINE(133)
			sprite->set_y(::flixel::FlxG_obj::height);
		}
		else{
			HX_STACK_LINE(136)
			if (((bool(Bottom) && bool((sprite->y > ::flixel::FlxG_obj::height))))){
				HX_STACK_LINE(137)
				sprite->set_y((int)0);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,screenWrap,(void))

Void FlxSpriteUtil_obj::space( Array< ::Dynamic > sprites,int startX,int startY,hx::Null< int >  __o_horizontalSpacing,hx::Null< int >  __o_verticalSpacing,hx::Null< bool >  __o_spaceFromBounds){
int horizontalSpacing = __o_horizontalSpacing.Default(0);
int verticalSpacing = __o_verticalSpacing.Default(0);
bool spaceFromBounds = __o_spaceFromBounds.Default(false);
	HX_STACK_PUSH("FlxSpriteUtil::space","flixel/util/FlxSpriteUtil.hx",153);
	HX_STACK_ARG(sprites,"sprites");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
	HX_STACK_ARG(horizontalSpacing,"horizontalSpacing");
	HX_STACK_ARG(verticalSpacing,"verticalSpacing");
	HX_STACK_ARG(spaceFromBounds,"spaceFromBounds");
{
		HX_STACK_LINE(154)
		int prevWidth = (int)0;		HX_STACK_VAR(prevWidth,"prevWidth");
		HX_STACK_LINE(155)
		int prevHeight = (int)0;		HX_STACK_VAR(prevHeight,"prevHeight");
		HX_STACK_LINE(157)
		{
			HX_STACK_LINE(157)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = sprites->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(157)
			while(((_g1 < _g))){
				HX_STACK_LINE(157)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(159)
				::flixel::FlxSprite sprite = sprites->__get(i).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(161)
				if ((spaceFromBounds)){
					HX_STACK_LINE(163)
					sprite->set_x(((startX + prevWidth) + (i * horizontalSpacing)));
					HX_STACK_LINE(164)
					sprite->set_y(((startY + prevHeight) + (i * verticalSpacing)));
				}
				else{
					HX_STACK_LINE(168)
					sprite->set_x((startX + (i * horizontalSpacing)));
					HX_STACK_LINE(169)
					sprite->set_y((startY + (i * verticalSpacing)));
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxSpriteUtil_obj,space,(void))

::flixel::FlxSprite FlxSpriteUtil_obj::screenCenter( ::flixel::FlxSprite sprite,hx::Null< bool >  __o_xAxis,hx::Null< bool >  __o_yAxis){
bool xAxis = __o_xAxis.Default(true);
bool yAxis = __o_yAxis.Default(true);
	HX_STACK_PUSH("FlxSpriteUtil::screenCenter","flixel/util/FlxSpriteUtil.hx",183);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(xAxis,"xAxis");
	HX_STACK_ARG(yAxis,"yAxis");
{
		HX_STACK_LINE(184)
		if ((xAxis)){
			HX_STACK_LINE(185)
			sprite->set_x(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (Float(sprite->width) / Float((int)2))));
		}
		HX_STACK_LINE(189)
		if ((yAxis)){
			HX_STACK_LINE(190)
			sprite->set_y(((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (Float(sprite->height) / Float((int)2))));
		}
		HX_STACK_LINE(194)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,screenCenter,return )

Void FlxSpriteUtil_obj::drawLine( ::flixel::FlxSprite sprite,Float StartX,Float StartY,Float EndX,Float EndY,int Color,hx::Null< int >  __o_Thickness){
int Thickness = __o_Thickness.Default(1);
	HX_STACK_PUSH("FlxSpriteUtil::drawLine","flixel/util/FlxSpriteUtil.hx",210);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(StartX,"StartX");
	HX_STACK_ARG(StartY,"StartY");
	HX_STACK_ARG(EndX,"EndX");
	HX_STACK_ARG(EndY,"EndY");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Thickness,"Thickness");
{
		HX_STACK_LINE(212)
		::flash::display::Graphics gfx = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(213)
		gfx->clear();
		HX_STACK_LINE(214)
		gfx->moveTo(StartX,StartY);
		HX_STACK_LINE(215)
		Float alphaComponent = (Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(alphaComponent,"alphaComponent");
		HX_STACK_LINE(217)
		if (((alphaComponent < (int)0))){
			HX_STACK_LINE(218)
			alphaComponent = (int)0;
		}
		HX_STACK_LINE(222)
		gfx->lineStyle(Thickness,Color,alphaComponent,null(),null(),null(),null(),null());
		HX_STACK_LINE(223)
		gfx->lineTo(EndX,EndY);
		HX_STACK_LINE(225)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,drawLine,(void))

Void FlxSpriteUtil_obj::drawRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,int Color){
{
		HX_STACK_PUSH("FlxSpriteUtil::drawRect","flixel/util/FlxSpriteUtil.hx",239);
		HX_STACK_ARG(sprite,"sprite");
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
		HX_STACK_ARG(Color,"Color");
		HX_STACK_LINE(240)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(241)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),null());
		HX_STACK_LINE(242)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawRect(X,Y,Width,Height);
		HX_STACK_LINE(243)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
		HX_STACK_LINE(245)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxSpriteUtil_obj,drawRect,(void))

Void FlxSpriteUtil_obj::drawRoundRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,Float EllipseWidth,Float EllipseHeight,int Color){
{
		HX_STACK_PUSH("FlxSpriteUtil::drawRoundRect","flixel/util/FlxSpriteUtil.hx",261);
		HX_STACK_ARG(sprite,"sprite");
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
		HX_STACK_ARG(EllipseWidth,"EllipseWidth");
		HX_STACK_ARG(EllipseHeight,"EllipseHeight");
		HX_STACK_ARG(Color,"Color");
		HX_STACK_LINE(262)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(263)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),null());
		HX_STACK_LINE(264)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawRoundRect(X,Y,Width,Height,EllipseWidth,EllipseHeight);
		HX_STACK_LINE(265)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
		HX_STACK_LINE(267)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxSpriteUtil_obj,drawRoundRect,(void))

Void FlxSpriteUtil_obj::drawCircle( ::flixel::FlxSprite sprite,Float X,Float Y,Float Radius,int Color){
{
		HX_STACK_PUSH("FlxSpriteUtil::drawCircle","flixel/util/FlxSpriteUtil.hx",308);
		HX_STACK_ARG(sprite,"sprite");
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_ARG(Radius,"Radius");
		HX_STACK_ARG(Color,"Color");
		HX_STACK_LINE(309)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(310)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),null());
		HX_STACK_LINE(311)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawCircle(X,Y,Radius);
		HX_STACK_LINE(312)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
		HX_STACK_LINE(314)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,drawCircle,(void))

Void FlxSpriteUtil_obj::drawEllipse( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,int Color){
{
		HX_STACK_PUSH("FlxSpriteUtil::drawEllipse","flixel/util/FlxSpriteUtil.hx",328);
		HX_STACK_ARG(sprite,"sprite");
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
		HX_STACK_ARG(Color,"Color");
		HX_STACK_LINE(329)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(330)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),null());
		HX_STACK_LINE(331)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawEllipse(X,Y,Width,Height);
		HX_STACK_LINE(332)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
		HX_STACK_LINE(334)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxSpriteUtil_obj,drawEllipse,(void))

Void FlxSpriteUtil_obj::updateSpriteGraphic( ::flixel::FlxSprite sprite){
{
		HX_STACK_PUSH("FlxSpriteUtil::updateSpriteGraphic","flixel/util/FlxSpriteUtil.hx",344);
		HX_STACK_ARG(sprite,"sprite");
		HX_STACK_LINE(345)
		sprite->get_pixels()->draw(::flixel::util::FlxSpriteUtil_obj::flashGfxSprite,null(),null(),null(),null(),null());
		HX_STACK_LINE(346)
		sprite->dirty = true;
		HX_STACK_LINE(347)
		sprite->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,updateSpriteGraphic,(void))

Void FlxSpriteUtil_obj::fill( ::flixel::FlxSprite sprite,int Color){
{
		HX_STACK_PUSH("FlxSpriteUtil::fill","flixel/util/FlxSpriteUtil.hx",357);
		HX_STACK_ARG(sprite,"sprite");
		HX_STACK_ARG(Color,"Color");
		HX_STACK_LINE(358)
		sprite->get_pixels()->fillRect(sprite->get_pixels()->get_rect(),Color);
		HX_STACK_LINE(360)
		if (((sprite->get_pixels() != sprite->framePixels))){
			HX_STACK_LINE(361)
			sprite->dirty = true;
		}
		HX_STACK_LINE(365)
		sprite->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,fill,(void))

Void FlxSpriteUtil_obj::flicker( ::flixel::FlxObject Object,hx::Null< Float >  __o_Duration,hx::Null< Float >  __o_Interval,hx::Null< bool >  __o_EndVisibility,hx::Null< bool >  __o_ForceRestart,Dynamic CompletionCallback,Dynamic ProgressCallback){
Float Duration = __o_Duration.Default(1);
Float Interval = __o_Interval.Default(0.04);
bool EndVisibility = __o_EndVisibility.Default(true);
bool ForceRestart = __o_ForceRestart.Default(true);
	HX_STACK_PUSH("FlxSpriteUtil::flicker","flixel/util/FlxSpriteUtil.hx",380);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(Interval,"Interval");
	HX_STACK_ARG(EndVisibility,"EndVisibility");
	HX_STACK_ARG(ForceRestart,"ForceRestart");
	HX_STACK_ARG(CompletionCallback,"CompletionCallback");
	HX_STACK_ARG(ProgressCallback,"ProgressCallback");
{
		HX_STACK_LINE(380)
		::flixel::effects::FlxFlicker_obj::flicker(Object,Duration,Interval,EndVisibility,ForceRestart,CompletionCallback,ProgressCallback);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,flicker,(void))

bool FlxSpriteUtil_obj::isFlickering( ::flixel::FlxObject Object){
	HX_STACK_PUSH("FlxSpriteUtil::isFlickering","flixel/util/FlxSpriteUtil.hx",389);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_LINE(389)
	return ::flixel::effects::FlxFlicker_obj::isFlickering(Object);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,isFlickering,return )

Void FlxSpriteUtil_obj::stopFlickering( ::flixel::FlxObject Object){
{
		HX_STACK_PUSH("FlxSpriteUtil::stopFlickering","flixel/util/FlxSpriteUtil.hx",398);
		HX_STACK_ARG(Object,"Object");
		HX_STACK_LINE(398)
		::flixel::effects::FlxFlicker_obj::stopFlickering(Object);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,stopFlickering,(void))


FlxSpriteUtil_obj::FlxSpriteUtil_obj()
{
}

void FlxSpriteUtil_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSpriteUtil);
	HX_MARK_END_CLASS();
}

void FlxSpriteUtil_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxSpriteUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return space_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flicker") ) { return flicker_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { return flashGfx; }
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alphaMask") ) { return alphaMask_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"screenWrap") ) { return screenWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenCenter") ) { return screenCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"isFlickering") ) { return isFlickering_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { return flashGfxSprite; }
		if (HX_FIELD_EQ(inName,"stopFlickering") ) { return stopFlickering_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"alphaMaskFlxSprite") ) { return alphaMaskFlxSprite_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateSpriteGraphic") ) { return updateSpriteGraphic_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSpriteUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { flashGfx=inValue.Cast< ::flash::display::Graphics >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { flashGfxSprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSpriteUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("flashGfxSprite"),
	HX_CSTRING("flashGfx"),
	HX_CSTRING("alphaMask"),
	HX_CSTRING("alphaMaskFlxSprite"),
	HX_CSTRING("screenWrap"),
	HX_CSTRING("space"),
	HX_CSTRING("screenCenter"),
	HX_CSTRING("drawLine"),
	HX_CSTRING("drawRect"),
	HX_CSTRING("drawRoundRect"),
	HX_CSTRING("drawCircle"),
	HX_CSTRING("drawEllipse"),
	HX_CSTRING("updateSpriteGraphic"),
	HX_CSTRING("fill"),
	HX_CSTRING("flicker"),
	HX_CSTRING("isFlickering"),
	HX_CSTRING("stopFlickering"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

Class FlxSpriteUtil_obj::__mClass;

void FlxSpriteUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxSpriteUtil"), hx::TCanCast< FlxSpriteUtil_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxSpriteUtil_obj::__boot()
{
	flashGfxSprite= ::flash::display::Sprite_obj::__new();
	flashGfx= ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite->get_graphics();
}

} // end namespace flixel
} // end namespace util
