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
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAngle
#include <flixel/util/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#include <flixel/util/loaders/TexturePackerData.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#include <flixel/util/loaders/TextureRegion.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{

Void FlxSprite_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{
HX_STACK_PUSH("FlxSprite::new","flixel/FlxSprite.hx",30);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(167)
	this->_angleChanged = false;
	HX_STACK_LINE(166)
	this->_cosAngle = (int)1;
	HX_STACK_LINE(165)
	this->_sinAngle = (int)0;
	HX_STACK_LINE(154)
	this->useColorTransform = false;
	HX_STACK_LINE(129)
	this->_facingMult = (int)1;
	HX_STACK_LINE(128)
	this->_blue = 1.0;
	HX_STACK_LINE(127)
	this->_green = 1.0;
	HX_STACK_LINE(126)
	this->_red = 1.0;
	HX_STACK_LINE(116)
	this->color = (int)16777215;
	HX_STACK_LINE(110)
	this->_blendInt = (int)0;
	HX_STACK_LINE(97)
	this->antialiasing = false;
	HX_STACK_LINE(68)
	this->alpha = 1.0;
	HX_STACK_LINE(183)
	super::__construct(X,Y,null(),null());
	HX_STACK_LINE(185)
	this->set_facing((int)16);
	HX_STACK_LINE(187)
	if (((SimpleGraphic == null()))){
		HX_STACK_LINE(188)
		SimpleGraphic = HX_CSTRING("flixel/img/logo/default.png");
	}
	HX_STACK_LINE(191)
	this->loadGraphic(SimpleGraphic,null(),null(),null(),null(),null(),null());
}
;
	return null();
}

FlxSprite_obj::~FlxSprite_obj() { }

Dynamic FlxSprite_obj::__CreateEmpty() { return  new FlxSprite_obj; }
hx::ObjectPtr< FlxSprite_obj > FlxSprite_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{  hx::ObjectPtr< FlxSprite_obj > result = new FlxSprite_obj();
	result->__construct(__o_X,__o_Y,SimpleGraphic);
	return result;}

Dynamic FlxSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSprite_obj > result = new FlxSprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::flash::display::BlendMode FlxSprite_obj::set_blend( ::flash::display::BlendMode Value){
	HX_STACK_PUSH("FlxSprite::set_blend","flixel/FlxSprite.hx",1415);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1417)
	if (((Value != null()))){
		HX_STACK_LINE(1418)
		{
			::flash::display::BlendMode _switch_1 = (Value);
			switch((_switch_1)->GetIndex()){
				case 7: {
					HX_STACK_LINE(1421)
					this->_blendInt = (int)65536;
				}
				;break;
				case 2: {
					HX_STACK_LINE(1424)
					this->_blendInt = (int)131072;
				}
				;break;
				case 3: {
					HX_STACK_LINE(1426)
					this->_blendInt = (int)262144;
				}
				;break;
				default: {
					HX_STACK_LINE(1429)
					this->_blendInt = (int)0;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(1434)
		this->_blendInt = (int)0;
	}
	HX_STACK_LINE(1438)
	this->_blend = Value;
	HX_STACK_LINE(1439)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_blend,return )

::flash::display::BlendMode FlxSprite_obj::get_blend( ){
	HX_STACK_PUSH("FlxSprite::get_blend","flixel/FlxSprite.hx",1410);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1410)
	return this->_blend;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_blend,return )

::flixel::util::FlxPoint FlxSprite_obj::set_scale( ::flixel::util::FlxPoint Value){
	HX_STACK_PUSH("FlxSprite::set_scale","flixel/FlxSprite.hx",1404);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1405)
	this->_scale = Value;
	HX_STACK_LINE(1406)
	return this->scale = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_scale,return )

::flixel::util::FlxPoint FlxSprite_obj::set_offset( ::flixel::util::FlxPoint Value){
	HX_STACK_PUSH("FlxSprite::set_offset","flixel/FlxSprite.hx",1398);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1399)
	this->_offset = Value;
	HX_STACK_LINE(1400)
	return this->offset = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_offset,return )

::flixel::util::FlxPoint FlxSprite_obj::set_origin( ::flixel::util::FlxPoint Value){
	HX_STACK_PUSH("FlxSprite::set_origin","flixel/FlxSprite.hx",1392);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1393)
	this->_origin = Value;
	HX_STACK_LINE(1394)
	return this->origin = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_origin,return )

Float FlxSprite_obj::set_angle( Float Value){
	HX_STACK_PUSH("FlxSprite::set_angle","flixel/FlxSprite.hx",1386);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1387)
	this->_angleChanged = (bool((this->angle != Value)) || bool(this->_angleChanged));
	HX_STACK_LINE(1388)
	return this->super::set_angle(Value);
}


::flash::geom::ColorTransform FlxSprite_obj::get_colorTransform( ){
	HX_STACK_PUSH("FlxSprite::get_colorTransform","flixel/FlxSprite.hx",1381);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1381)
	return this->_colorTransform;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_colorTransform,return )

int FlxSprite_obj::set_color( int Color){
	HX_STACK_PUSH("FlxSprite::set_color","flixel/FlxSprite.hx",1361);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(1362)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(1363)
	if (((this->color == Color))){
		HX_STACK_LINE(1364)
		return Color;
	}
	HX_STACK_LINE(1367)
	this->color = Color;
	HX_STACK_LINE(1368)
	this->updateColorTransform();
	HX_STACK_LINE(1371)
	this->_red = (Float(((int(this->color) >> int((int)16)))) / Float((int)255));
	HX_STACK_LINE(1372)
	this->_green = (Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1373)
	this->_blue = (Float(((int(this->color) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1374)
	this->isColored = (this->color < (int)16777215);
	HX_STACK_LINE(1377)
	return this->color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_color,return )

Float FlxSprite_obj::set_alpha( Float Alpha){
	HX_STACK_PUSH("FlxSprite::set_alpha","flixel/FlxSprite.hx",1342);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alpha,"Alpha");
	HX_STACK_LINE(1343)
	if (((Alpha > (int)1))){
		HX_STACK_LINE(1344)
		Alpha = (int)1;
	}
	HX_STACK_LINE(1347)
	if (((Alpha < (int)0))){
		HX_STACK_LINE(1348)
		Alpha = (int)0;
	}
	HX_STACK_LINE(1351)
	if (((Alpha == this->alpha))){
		HX_STACK_LINE(1352)
		return this->alpha;
	}
	HX_STACK_LINE(1355)
	this->alpha = Alpha;
	HX_STACK_LINE(1356)
	this->updateColorTransform();
	HX_STACK_LINE(1357)
	return this->alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_alpha,return )

int FlxSprite_obj::set_facing( int Direction){
	HX_STACK_PUSH("FlxSprite::set_facing","flixel/FlxSprite.hx",1329);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Direction,"Direction");
	HX_STACK_LINE(1330)
	if (((this->facing != Direction))){
		HX_STACK_LINE(1331)
		this->dirty = true;
	}
	HX_STACK_LINE(1334)
	this->facing = Direction;
	HX_STACK_LINE(1336)
	this->_facingMult = (  (((bool((this->flipped != (int)0)) && bool((this->facing == (int)1))))) ? int((int)-1) : int((int)1) );
	HX_STACK_LINE(1338)
	return Direction;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_facing,return )

::flixel::system::layer::frames::FlxFrame FlxSprite_obj::set_frame( ::flixel::system::layer::frames::FlxFrame Value){
	HX_STACK_PUSH("FlxSprite::set_frame","flixel/FlxSprite.hx",1313);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1314)
	this->frame = Value;
	HX_STACK_LINE(1315)
	if (((this->frame != null()))){
		HX_STACK_LINE(1317)
		{
			HX_STACK_LINE(1317)
			this->frameWidth = ::Std_obj::_int(this->frame->sourceSize->x);
			HX_STACK_LINE(1317)
			this->frameHeight = ::Std_obj::_int(this->frame->sourceSize->y);
			HX_STACK_LINE(1317)
			{
				HX_STACK_LINE(1317)
				this->_flashRect->x = (int)0;
				HX_STACK_LINE(1317)
				this->_flashRect->y = (int)0;
				HX_STACK_LINE(1317)
				this->_flashRect->width = this->frameWidth;
				HX_STACK_LINE(1317)
				this->_flashRect->height = this->frameHeight;
			}
		}
		HX_STACK_LINE(1318)
		this->dirty = true;
	}
	else{
		HX_STACK_LINE(1320)
		if (((bool((bool((this->framesData != null())) && bool((this->framesData->frames != null())))) && bool((this->framesData->frames->length > (int)0))))){
			HX_STACK_LINE(1322)
			this->frame = this->framesData->frames->__get((int)0).StaticCast< ::flixel::system::layer::frames::FlxFrame >();
			HX_STACK_LINE(1323)
			this->dirty = true;
		}
	}
	HX_STACK_LINE(1325)
	return this->frame;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frame,return )

::flash::display::BitmapData FlxSprite_obj::set_pixels( ::flash::display::BitmapData Pixels){
	HX_STACK_PUSH("FlxSprite::set_pixels","flixel/FlxSprite.hx",1277);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Pixels,"Pixels");
	HX_STACK_LINE(1278)
	::String key = ::flixel::FlxG_obj::bitmap->getCacheKeyFor(Pixels);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(1280)
	if (((key == null()))){
		HX_STACK_LINE(1282)
		key = ::flixel::FlxG_obj::bitmap->getUniqueKey(null());
		HX_STACK_LINE(1283)
		::flixel::FlxG_obj::bitmap->add(Pixels,false,key);
	}
	HX_STACK_LINE(1286)
	this->set_cachedGraphics(::flixel::FlxG_obj::bitmap->get(key));
	HX_STACK_LINE(1288)
	if (((this->region == null()))){
		HX_STACK_LINE(1289)
		this->region = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	}
	HX_STACK_LINE(1293)
	this->region->startX = (int)0;
	HX_STACK_LINE(1294)
	this->region->startY = (int)0;
	HX_STACK_LINE(1295)
	this->region->tileWidth = (int)0;
	HX_STACK_LINE(1296)
	this->region->tileHeight = (int)0;
	HX_STACK_LINE(1297)
	this->region->spacingX = (int)0;
	HX_STACK_LINE(1298)
	this->region->spacingY = (int)0;
	HX_STACK_LINE(1299)
	this->region->width = this->cachedGraphics->bitmap->get_width();
	HX_STACK_LINE(1300)
	this->region->height = this->cachedGraphics->bitmap->get_height();
	HX_STACK_LINE(1302)
	this->set_width(this->frameWidth = this->cachedGraphics->bitmap->get_width());
	HX_STACK_LINE(1303)
	this->set_height(this->frameHeight = this->cachedGraphics->bitmap->get_height());
	HX_STACK_LINE(1304)
	this->animation->destroyAnimations();
	HX_STACK_LINE(1306)
	this->updateFrameData();
	HX_STACK_LINE(1307)
	this->resetHelpers();
	HX_STACK_LINE(1309)
	return Pixels;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_pixels,return )

::flash::display::BitmapData FlxSprite_obj::get_pixels( ){
	HX_STACK_PUSH("FlxSprite::get_pixels","flixel/FlxSprite.hx",1272);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1272)
	return this->cachedGraphics->bitmap;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_pixels,return )

bool FlxSprite_obj::simpleRenderSprite( ){
	HX_STACK_PUSH("FlxSprite::simpleRenderSprite","flixel/FlxSprite.hx",1260);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1260)
	return (bool((bool(((bool((bool((this->angle == (int)0)) && bool((this->frame->additionalAngle == (int)0)))) || bool((this->bakedRotation > (int)0))))) && bool((this->_scale->x == (int)1)))) && bool((this->_scale->y == (int)1)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,simpleRenderSprite,return )

Void FlxSprite_obj::resetFrameBitmapDatas( ){
{
		HX_STACK_PUSH("FlxSprite::resetFrameBitmapDatas","flixel/FlxSprite.hx",1251);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1251)
		this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameBitmapDatas,(void))

::flash::display::BitmapData FlxSprite_obj::getFlxFrameBitmapData( ){
	HX_STACK_PUSH("FlxSprite::getFlxFrameBitmapData","flixel/FlxSprite.hx",1229);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1230)
	::flash::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
	HX_STACK_LINE(1231)
	if (((this->frame != null()))){
		HX_STACK_LINE(1232)
		if (((bool((this->facing == (int)1)) && bool((this->flipped > (int)0))))){
			HX_STACK_LINE(1234)
			frameBmd = this->frame->getHReversedBitmap();
		}
		else{
			HX_STACK_LINE(1238)
			frameBmd = this->frame->getBitmap();
		}
	}
	HX_STACK_LINE(1243)
	return frameBmd;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,getFlxFrameBitmapData,return )

Void FlxSprite_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxSprite::updateFrameData","flixel/FlxSprite.hx",1205);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1206)
		if (((this->cachedGraphics == null()))){
			HX_STACK_LINE(1207)
			return null();
		}
		HX_STACK_LINE(1211)
		if (((bool((this->cachedGraphics->data != null())) && bool(((bool((this->region->tileWidth == (int)0)) && bool((this->region->tileHeight == (int)0)))))))){
			HX_STACK_LINE(1212)
			this->framesData = this->cachedGraphics->get_tilesheet()->getTexturePackerFrames(this->cachedGraphics->data,null(),null());
		}
		else{
			HX_STACK_LINE(1216)
			this->framesData = this->cachedGraphics->get_tilesheet()->getSpriteSheetFrames(this->region,null());
		}
		HX_STACK_LINE(1220)
		this->set_frame(this->framesData->frames->__get((int)0).StaticCast< ::flixel::system::layer::frames::FlxFrame >());
		HX_STACK_LINE(1221)
		this->frames = this->framesData->frames->length;
		HX_STACK_LINE(1222)
		{
			HX_STACK_LINE(1222)
			this->set_width(this->frameWidth);
			HX_STACK_LINE(1222)
			this->set_height(this->frameHeight);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateFrameData,(void))

Void FlxSprite_obj::calcFrame( hx::Null< bool >  __o_AreYouSure){
bool AreYouSure = __o_AreYouSure.Default(false);
	HX_STACK_PUSH("FlxSprite::calcFrame","flixel/FlxSprite.hx",1170);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AreYouSure,"AreYouSure");
{
		HX_STACK_LINE(1173)
		if ((AreYouSure)){
			HX_STACK_LINE(1176)
			if (((this->frame != null()))){
				HX_STACK_LINE(1178)
				if (((bool((bool((this->framePixels == null())) || bool((this->framePixels->get_width() != this->frameWidth)))) || bool((this->framePixels->get_height() != this->frameHeight))))){
					HX_STACK_LINE(1180)
					if (((this->framePixels != null()))){
						HX_STACK_LINE(1181)
						this->framePixels->dispose();
					}
					HX_STACK_LINE(1183)
					this->framePixels = ::flash::display::BitmapData_obj::__new(::Std_obj::_int(this->frame->sourceSize->x),::Std_obj::_int(this->frame->sourceSize->y),null(),null(),null());
				}
				struct _Function_3_1{
					inline static ::flash::display::BitmapData Block( ::flixel::FlxSprite_obj *__this){
						HX_STACK_PUSH("*::closure","flixel/FlxSprite.hx",1186);
						{
							HX_STACK_LINE(1186)
							::flash::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
							HX_STACK_LINE(1186)
							if (((__this->frame != null()))){
								HX_STACK_LINE(1186)
								if (((bool((__this->facing == (int)1)) && bool((__this->flipped > (int)0))))){
									HX_STACK_LINE(1186)
									frameBmd = __this->frame->getHReversedBitmap();
								}
								else{
									HX_STACK_LINE(1186)
									frameBmd = __this->frame->getBitmap();
								}
							}
							HX_STACK_LINE(1186)
							return frameBmd;
						}
						return null();
					}
				};
				HX_STACK_LINE(1186)
				this->framePixels->copyPixels(_Function_3_1::Block(this),this->_flashRect,this->_flashPointZero,null(),null(),null());
			}
			HX_STACK_LINE(1189)
			if ((this->useColorTransform)){
				HX_STACK_LINE(1190)
				this->framePixels->colorTransform(this->_flashRect,this->_colorTransform);
			}
		}
		HX_STACK_LINE(1197)
		this->dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,calcFrame,(void))

bool FlxSprite_obj::pixelsOverlapPoint( ::flixel::util::FlxPoint point,hx::Null< int >  __o_Mask,::flixel::FlxCamera Camera){
int Mask = __o_Mask.Default(255);
	HX_STACK_PUSH("FlxSprite::pixelsOverlapPoint","flixel/FlxSprite.hx",1134);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(Mask,"Mask");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1135)
		if (((Camera == null()))){
			HX_STACK_LINE(1136)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1139)
		this->getScreenXY(this->_point,Camera);
		HX_STACK_LINE(1140)
		this->_point->set_x((this->_point->x - this->_offset->x));
		HX_STACK_LINE(1141)
		this->_point->set_y((this->_point->y - this->_offset->y));
		HX_STACK_LINE(1142)
		this->_flashPoint->x = ((point->x - Camera->scroll->x) - this->_point->x);
		HX_STACK_LINE(1143)
		this->_flashPoint->y = ((point->y - Camera->scroll->y) - this->_point->y);
		HX_STACK_LINE(1148)
		if (((bool((bool((bool((this->_flashPoint->x < (int)0)) || bool((this->_flashPoint->x > this->frameWidth)))) || bool((this->_flashPoint->y < (int)0)))) || bool((this->_flashPoint->y > this->frameHeight))))){
			HX_STACK_LINE(1149)
			return false;
		}
		else{
			struct _Function_2_1{
				inline static ::flash::display::BitmapData Block( ::flixel::FlxSprite_obj *__this){
					HX_STACK_PUSH("*::closure","flixel/FlxSprite.hx",1154);
					{
						HX_STACK_LINE(1154)
						::flash::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
						HX_STACK_LINE(1154)
						if (((__this->frame != null()))){
							HX_STACK_LINE(1154)
							if (((bool((__this->facing == (int)1)) && bool((__this->flipped > (int)0))))){
								HX_STACK_LINE(1154)
								frameBmd = __this->frame->getHReversedBitmap();
							}
							else{
								HX_STACK_LINE(1154)
								frameBmd = __this->frame->getBitmap();
							}
						}
						HX_STACK_LINE(1154)
						return frameBmd;
					}
					return null();
				}
			};
			HX_STACK_LINE(1154)
			::flash::display::BitmapData frameData = _Function_2_1::Block(this);		HX_STACK_VAR(frameData,"frameData");
			HX_STACK_LINE(1155)
			int pixelColor = frameData->getPixel32(::Std_obj::_int(this->_flashPoint->x),::Std_obj::_int(this->_flashPoint->y));		HX_STACK_VAR(pixelColor,"pixelColor");
			HX_STACK_LINE(1156)
			int pixelAlpha = (int((int(pixelColor) >> int((int)24))) & int((int)255));		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
			HX_STACK_LINE(1157)
			return ((pixelAlpha * this->alpha) >= Mask);
		}
		HX_STACK_LINE(1148)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,pixelsOverlapPoint,return )

bool FlxSprite_obj::overlapsPoint( ::flixel::util::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxSprite::overlapsPoint","flixel/FlxSprite.hx",1104);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1105)
		if (((bool((this->_scale->x == (int)1)) && bool((this->_scale->y == (int)1))))){
			HX_STACK_LINE(1106)
			return this->super::overlapsPoint(point,InScreenSpace,Camera);
		}
		HX_STACK_LINE(1110)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(1111)
			return (bool((bool((bool((point->x > (this->x - ((0.5 * this->width) * ((this->_scale->x - (int)1)))))) && bool((point->x < ((this->x + this->width) + ((0.5 * this->width) * ((this->_scale->x - (int)1)))))))) && bool((point->y > (this->y - ((0.5 * this->height) * ((this->_scale->y - (int)1)))))))) && bool((point->y < ((this->y + this->height) + ((0.5 * this->height) * ((this->_scale->y - (int)1)))))));
		}
		HX_STACK_LINE(1115)
		if (((Camera == null()))){
			HX_STACK_LINE(1116)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1119)
		Float X = (point->x - Camera->scroll->x);		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(1120)
		Float Y = (point->y - Camera->scroll->y);		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(1121)
		this->getScreenXY(this->_point,Camera);
		HX_STACK_LINE(1122)
		return (bool((bool((bool((X > (this->_point->x - ((0.5 * this->width) * ((this->_scale->x - (int)1)))))) && bool((X < ((this->_point->x + this->width) + ((0.5 * this->width) * ((this->_scale->x - (int)1)))))))) && bool((Y > (this->_point->y - ((0.5 * this->height) * ((this->_scale->y - (int)1)))))))) && bool((Y < ((this->_point->y + this->height) + ((0.5 * this->height) * ((this->_scale->y - (int)1)))))));
	}
}


bool FlxSprite_obj::onScreen( ::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxSprite::onScreen","flixel/FlxSprite.hx",1028);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(1029)
	if (((Camera == null()))){
		HX_STACK_LINE(1030)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(1034)
	Float minX = ((this->x - this->_offset->x) - (Camera->scroll->x * this->_scrollFactor->x));		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(1035)
	Float minY = ((this->y - this->_offset->y) - (Camera->scroll->y * this->_scrollFactor->y));		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(1036)
	Float maxX = (int)0;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(1037)
	Float maxY = (int)0;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(1039)
	if (((bool((bool(((bool((this->angle == (int)0)) || bool((this->bakedRotation > (int)0))))) && bool((this->_scale->x == (int)1)))) && bool((this->_scale->y == (int)1))))){
		HX_STACK_LINE(1041)
		maxX = (minX + this->frameWidth);
		HX_STACK_LINE(1042)
		maxY = (minY + this->frameHeight);
	}
	else{
		HX_STACK_LINE(1046)
		Float radiusX = this->_halfWidth;		HX_STACK_VAR(radiusX,"radiusX");
		HX_STACK_LINE(1047)
		Float radiusY = this->_halfHeight;		HX_STACK_VAR(radiusY,"radiusY");
		HX_STACK_LINE(1049)
		if (((this->_origin->x == this->_halfWidth))){
			HX_STACK_LINE(1050)
			radiusX = ::Math_obj::abs((this->_halfWidth * this->_scale->x));
		}
		else{
			HX_STACK_LINE(1055)
			Float sox = (this->_scale->x * this->_origin->x);		HX_STACK_VAR(sox,"sox");
			HX_STACK_LINE(1056)
			Float sfw = (this->_scale->x * this->frameWidth);		HX_STACK_VAR(sfw,"sfw");
			HX_STACK_LINE(1057)
			Float x1 = ::Math_obj::abs(sox);		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(1058)
			Float x2 = ::Math_obj::abs((sfw - sox));		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(1059)
			radiusX = ::Math_obj::max(x2,x1);
		}
		HX_STACK_LINE(1062)
		if (((this->_origin->y == this->_halfHeight))){
			HX_STACK_LINE(1063)
			radiusY = ::Math_obj::abs((this->_halfHeight * this->_scale->y));
		}
		else{
			HX_STACK_LINE(1068)
			Float soy = (this->_scale->y * this->_origin->y);		HX_STACK_VAR(soy,"soy");
			HX_STACK_LINE(1069)
			Float sfh = (this->_scale->y * this->frameHeight);		HX_STACK_VAR(sfh,"sfh");
			HX_STACK_LINE(1070)
			Float y1 = ::Math_obj::abs(soy);		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(1071)
			Float y2 = ::Math_obj::abs((sfh - soy));		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(1072)
			radiusY = ::Math_obj::max(y2,y1);
		}
		HX_STACK_LINE(1075)
		Float radius = ::Math_obj::max(radiusX,radiusY);		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(1076)
		hx::MultEq(radius,1.415);
		HX_STACK_LINE(1078)
		hx::AddEq(minX,this->_origin->x);
		HX_STACK_LINE(1079)
		maxX = (minX + radius);
		HX_STACK_LINE(1080)
		hx::SubEq(minX,radius);
		HX_STACK_LINE(1082)
		hx::AddEq(minY,this->_origin->y);
		HX_STACK_LINE(1083)
		maxY = (minY + radius);
		HX_STACK_LINE(1084)
		hx::SubEq(minY,radius);
	}
	HX_STACK_LINE(1087)
	if (((bool((maxX < (int)0)) || bool((minX > Camera->width))))){
		HX_STACK_LINE(1088)
		return false;
	}
	HX_STACK_LINE(1090)
	if (((bool((maxY < (int)0)) || bool((minY > Camera->height))))){
		HX_STACK_LINE(1091)
		return false;
	}
	HX_STACK_LINE(1093)
	return true;
}


Void FlxSprite_obj::updateColorTransform( ){
{
		HX_STACK_PUSH("FlxSprite::updateColorTransform","flixel/FlxSprite.hx",988);
		HX_STACK_THIS(this);
		HX_STACK_LINE(989)
		if (((bool((this->alpha != (int)1)) || bool((this->color != (int)16777215))))){
			HX_STACK_LINE(991)
			if (((this->_colorTransform == null()))){
				HX_STACK_LINE(992)
				this->_colorTransform = ::flash::geom::ColorTransform_obj::__new((Float(((int(this->color) >> int((int)16)))) / Float((int)255)),(Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this->color) & int((int)255)))) / Float((int)255)),this->alpha,null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(997)
				this->_colorTransform->redMultiplier = (Float(((int(this->color) >> int((int)16)))) / Float((int)255));
				HX_STACK_LINE(998)
				this->_colorTransform->greenMultiplier = (Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255));
				HX_STACK_LINE(999)
				this->_colorTransform->blueMultiplier = (Float(((int(this->color) & int((int)255)))) / Float((int)255));
				HX_STACK_LINE(1000)
				this->_colorTransform->alphaMultiplier = this->alpha;
			}
			HX_STACK_LINE(1002)
			this->useColorTransform = true;
		}
		else{
			HX_STACK_LINE(1006)
			if (((this->_colorTransform != null()))){
				HX_STACK_LINE(1008)
				this->_colorTransform->redMultiplier = (int)1;
				HX_STACK_LINE(1009)
				this->_colorTransform->greenMultiplier = (int)1;
				HX_STACK_LINE(1010)
				this->_colorTransform->blueMultiplier = (int)1;
				HX_STACK_LINE(1011)
				this->_colorTransform->alphaMultiplier = (int)1;
			}
			HX_STACK_LINE(1014)
			this->useColorTransform = false;
		}
		HX_STACK_LINE(1016)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateColorTransform,(void))

Array< ::Dynamic > FlxSprite_obj::replaceColor( int Color,int NewColor,hx::Null< bool >  __o_FetchPositions){
bool FetchPositions = __o_FetchPositions.Default(false);
	HX_STACK_PUSH("FlxSprite::replaceColor","flixel/FlxSprite.hx",953);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(NewColor,"NewColor");
	HX_STACK_ARG(FetchPositions,"FetchPositions");
{
		HX_STACK_LINE(954)
		Array< ::Dynamic > positions = null();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(955)
		if ((FetchPositions)){
			HX_STACK_LINE(956)
			positions = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(960)
		int row = this->region->startY;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(961)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(962)
		int rows = this->region->height;		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(963)
		int columns = this->region->width;		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(964)
		while(((row < rows))){
			HX_STACK_LINE(966)
			column = this->region->startX;
			HX_STACK_LINE(967)
			while(((column < columns))){
				HX_STACK_LINE(969)
				if (((this->cachedGraphics->bitmap->getPixel32(column,row) == Color))){
					HX_STACK_LINE(971)
					this->cachedGraphics->bitmap->setPixel32(column,row,NewColor);
					HX_STACK_LINE(972)
					if ((FetchPositions)){
						HX_STACK_LINE(973)
						positions->push(::flixel::util::FlxPoint_obj::__new(column,row));
					}
					HX_STACK_LINE(976)
					this->dirty = true;
				}
				HX_STACK_LINE(978)
				(column)++;
			}
			HX_STACK_LINE(980)
			(row)++;
		}
		HX_STACK_LINE(983)
		this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
		HX_STACK_LINE(984)
		return positions;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,replaceColor,return )

Void FlxSprite_obj::centerOffsets( hx::Null< bool >  __o_AdjustPosition){
bool AdjustPosition = __o_AdjustPosition.Default(false);
	HX_STACK_PUSH("FlxSprite::centerOffsets","flixel/FlxSprite.hx",935);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AdjustPosition,"AdjustPosition");
{
		HX_STACK_LINE(936)
		this->_offset->set_x((((this->frameWidth - this->width)) * 0.5));
		HX_STACK_LINE(937)
		this->_offset->set_y((((this->frameHeight - this->height)) * 0.5));
		HX_STACK_LINE(938)
		if ((AdjustPosition)){
			HX_STACK_LINE(940)
			{
				HX_STACK_LINE(940)
				::flixel::FlxSprite _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(940)
				_g->set_x((_g->x + this->_offset->x));
			}
			HX_STACK_LINE(941)
			{
				HX_STACK_LINE(941)
				::flixel::FlxSprite _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(941)
				_g->set_y((_g->y + this->_offset->y));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,centerOffsets,(void))

Void FlxSprite_obj::drawFrame( hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxSprite::drawFrame","flixel/FlxSprite.hx",919);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(919)
		this->calcFrame(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawFrame,(void))

Void FlxSprite_obj::stamp( ::flixel::FlxSprite Brush,hx::Null< int >  __o_X,hx::Null< int >  __o_Y){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
	HX_STACK_PUSH("FlxSprite::stamp","flixel/FlxSprite.hx",873);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Brush,"Brush");
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
{
		HX_STACK_LINE(874)
		{
			HX_STACK_LINE(874)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(874)
			Brush->calcFrame(true);
		}
		HX_STACK_LINE(875)
		::flash::display::BitmapData bitmapData = Brush->framePixels;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(878)
		if (((bool((bool((bool(((bool((Brush->angle == (int)0)) || bool((Brush->bakedRotation > (int)0))))) && bool((Brush->_scale->x == (int)1)))) && bool((Brush->_scale->y == (int)1)))) && bool((Brush->_blend == null()))))){
			HX_STACK_LINE(880)
			this->_flashPoint->x = (X + this->region->startX);
			HX_STACK_LINE(881)
			this->_flashPoint->y = (Y + this->region->startY);
			HX_STACK_LINE(882)
			this->_flashRect2->width = bitmapData->get_width();
			HX_STACK_LINE(883)
			this->_flashRect2->height = bitmapData->get_height();
			HX_STACK_LINE(884)
			this->cachedGraphics->bitmap->copyPixels(bitmapData,this->_flashRect2,this->_flashPoint,null(),null(),true);
			HX_STACK_LINE(885)
			this->_flashRect2->width = this->cachedGraphics->bitmap->get_width();
			HX_STACK_LINE(886)
			this->_flashRect2->height = this->cachedGraphics->bitmap->get_height();
			HX_STACK_LINE(888)
			this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
			HX_STACK_LINE(893)
			return null();
		}
		HX_STACK_LINE(897)
		this->_matrix->identity();
		HX_STACK_LINE(898)
		this->_matrix->translate(-(Brush->_origin->x),-(Brush->_origin->y));
		HX_STACK_LINE(899)
		this->_matrix->scale(Brush->_scale->x,Brush->_scale->y);
		HX_STACK_LINE(900)
		if (((Brush->angle != (int)0))){
			HX_STACK_LINE(901)
			this->_matrix->rotate((Brush->angle * ::flixel::util::FlxAngle_obj::TO_RAD));
		}
		HX_STACK_LINE(904)
		this->_matrix->translate(((X + this->region->startX) + Brush->_origin->x),((Y + this->region->startY) + Brush->_origin->y));
		HX_STACK_LINE(905)
		::flash::display::BlendMode brushBlend = Brush->_blend;		HX_STACK_VAR(brushBlend,"brushBlend");
		HX_STACK_LINE(906)
		this->cachedGraphics->bitmap->draw(bitmapData,this->_matrix,null(),brushBlend,null(),Brush->antialiasing);
		HX_STACK_LINE(907)
		this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,stamp,(void))

Void FlxSprite_obj::draw( ){
{
		HX_STACK_PUSH("FlxSprite::draw","flixel/FlxSprite.hx",682);
		HX_STACK_THIS(this);
		HX_STACK_LINE(683)
		if ((this->dirty)){
			HX_STACK_LINE(684)
			this->calcFrame(null());
		}
		HX_STACK_LINE(688)
		if (((this->cameras == null()))){
			HX_STACK_LINE(689)
			this->cameras = ::flixel::FlxG_obj::cameras->list;
		}
		HX_STACK_LINE(694)
		::flixel::system::layer::DrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(695)
		Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(696)
		int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(701)
		Float cos;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(702)
		Float sin;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(705)
		bool isSimpleRender = this->simpleRenderSprite();		HX_STACK_VAR(isSimpleRender,"isSimpleRender");
		HX_STACK_LINE(707)
		{
			HX_STACK_LINE(707)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->cameras;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(707)
			while(((_g < _g1->length))){
				HX_STACK_LINE(707)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(707)
				++(_g);
				HX_STACK_LINE(709)
				if (((bool((bool(!(camera->visible)) || bool(!(camera->exists)))) || bool(!(this->onScreen(camera)))))){
					HX_STACK_LINE(710)
					continue;
				}
				HX_STACK_LINE(716)
				drawItem = camera->getDrawStackItem(this->cachedGraphics,this->isColored,this->_blendInt,this->antialiasing);
				HX_STACK_LINE(720)
				currDrawData = drawItem->drawData;
				HX_STACK_LINE(721)
				currIndex = drawItem->position;
				HX_STACK_LINE(723)
				this->_point->set_x(((this->x - (camera->scroll->x * this->_scrollFactor->x)) - this->_offset->x));
				HX_STACK_LINE(724)
				this->_point->set_y(((this->y - (camera->scroll->y * this->_scrollFactor->y)) - this->_offset->y));
				HX_STACK_LINE(726)
				this->_point->set_x((this->_point->x + this->_origin->x));
				HX_STACK_LINE(727)
				this->_point->set_y((this->_point->y + this->_origin->y));
				HX_STACK_LINE(762)
				Float csx = this->_facingMult;		HX_STACK_VAR(csx,"csx");
				HX_STACK_LINE(763)
				Float ssy = (int)0;		HX_STACK_VAR(ssy,"ssy");
				HX_STACK_LINE(764)
				Float ssx = (int)0;		HX_STACK_VAR(ssx,"ssx");
				HX_STACK_LINE(765)
				Float csy = (int)1;		HX_STACK_VAR(csy,"csy");
				HX_STACK_LINE(767)
				Float x1 = (this->_origin->x - this->frame->center->x);		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(768)
				Float y1 = (this->_origin->y - this->frame->center->y);		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(770)
				Float x2 = x1;		HX_STACK_VAR(x2,"x2");
				HX_STACK_LINE(771)
				Float y2 = y1;		HX_STACK_VAR(y2,"y2");
				HX_STACK_LINE(774)
				Float a = csx;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(775)
				Float b = ssx;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(776)
				Float c = ssy;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(777)
				Float d = csy;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(779)
				if ((!(isSimpleRender))){
					HX_STACK_LINE(781)
					if ((this->_angleChanged)){
						HX_STACK_LINE(783)
						Float radians = (-(this->angle) * ::flixel::util::FlxAngle_obj::TO_RAD);		HX_STACK_VAR(radians,"radians");
						HX_STACK_LINE(784)
						this->_sinAngle = ::Math_obj::sin(radians);
						HX_STACK_LINE(785)
						this->_cosAngle = ::Math_obj::cos(radians);
						HX_STACK_LINE(786)
						this->_angleChanged = false;
					}
					HX_STACK_LINE(789)
					Float sx = (this->_scale->x * this->_facingMult);		HX_STACK_VAR(sx,"sx");
					HX_STACK_LINE(791)
					if ((this->frame->rotated)){
						HX_STACK_LINE(793)
						cos = -(this->_sinAngle);
						HX_STACK_LINE(794)
						sin = this->_cosAngle;
						HX_STACK_LINE(796)
						csx = (cos * sx);
						HX_STACK_LINE(797)
						ssy = (sin * this->_scale->y);
						HX_STACK_LINE(798)
						ssx = (sin * sx);
						HX_STACK_LINE(799)
						csy = (cos * this->_scale->y);
						HX_STACK_LINE(801)
						x2 = ((x1 * ssx) - (y1 * csy));
						HX_STACK_LINE(802)
						y2 = ((x1 * csx) + (y1 * ssy));
						HX_STACK_LINE(804)
						a = csy;
						HX_STACK_LINE(805)
						b = ssy;
						HX_STACK_LINE(806)
						c = ssx;
						HX_STACK_LINE(807)
						d = csx;
					}
					else{
						HX_STACK_LINE(811)
						cos = this->_cosAngle;
						HX_STACK_LINE(812)
						sin = this->_sinAngle;
						HX_STACK_LINE(814)
						csx = (cos * sx);
						HX_STACK_LINE(815)
						ssy = (sin * this->_scale->y);
						HX_STACK_LINE(816)
						ssx = (sin * sx);
						HX_STACK_LINE(817)
						csy = (cos * this->_scale->y);
						HX_STACK_LINE(819)
						x2 = ((x1 * csx) + (y1 * ssy));
						HX_STACK_LINE(820)
						y2 = ((-(x1) * ssx) + (y1 * csy));
						HX_STACK_LINE(822)
						a = csx;
						HX_STACK_LINE(823)
						b = ssx;
						HX_STACK_LINE(824)
						c = ssy;
						HX_STACK_LINE(825)
						d = csy;
					}
				}
				else{
					HX_STACK_LINE(829)
					x2 = (x1 * csx);
				}
				HX_STACK_LINE(833)
				currDrawData[(currIndex)++] = (this->_point->x - x2);
				HX_STACK_LINE(834)
				currDrawData[(currIndex)++] = (this->_point->y - y2);
				HX_STACK_LINE(836)
				currDrawData[(currIndex)++] = this->frame->tileID;
				HX_STACK_LINE(838)
				currDrawData[(currIndex)++] = a;
				HX_STACK_LINE(839)
				currDrawData[(currIndex)++] = -(b);
				HX_STACK_LINE(840)
				currDrawData[(currIndex)++] = c;
				HX_STACK_LINE(841)
				currDrawData[(currIndex)++] = d;
				HX_STACK_LINE(844)
				if ((this->isColored)){
					HX_STACK_LINE(846)
					currDrawData[(currIndex)++] = this->_red;
					HX_STACK_LINE(847)
					currDrawData[(currIndex)++] = this->_green;
					HX_STACK_LINE(848)
					currDrawData[(currIndex)++] = this->_blue;
				}
				HX_STACK_LINE(850)
				currDrawData[(currIndex)++] = this->alpha;
				HX_STACK_LINE(857)
				drawItem->position = currIndex;
			}
		}
	}
return null();
}


Void FlxSprite_obj::update( ){
{
		HX_STACK_PUSH("FlxSprite::update","flixel/FlxSprite.hx",673);
		HX_STACK_THIS(this);
		HX_STACK_LINE(674)
		this->super::update();
		HX_STACK_LINE(675)
		this->animation->update();
	}
return null();
}


Void FlxSprite_obj::resetHelpers( ){
{
		HX_STACK_PUSH("FlxSprite::resetHelpers","flixel/FlxSprite.hx",651);
		HX_STACK_THIS(this);
		HX_STACK_LINE(652)
		{
			HX_STACK_LINE(652)
			this->_flashRect->x = (int)0;
			HX_STACK_LINE(652)
			this->_flashRect->y = (int)0;
			HX_STACK_LINE(652)
			this->_flashRect->width = this->frameWidth;
			HX_STACK_LINE(652)
			this->_flashRect->height = this->frameHeight;
		}
		HX_STACK_LINE(653)
		this->_flashRect2->x = (int)0;
		HX_STACK_LINE(654)
		this->_flashRect2->y = (int)0;
		HX_STACK_LINE(655)
		this->_flashRect2->width = this->cachedGraphics->bitmap->get_width();
		HX_STACK_LINE(656)
		this->_flashRect2->height = this->cachedGraphics->bitmap->get_height();
		HX_STACK_LINE(657)
		this->_origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
		HX_STACK_LINE(668)
		this->_halfWidth = (this->frameWidth * 0.5);
		HX_STACK_LINE(669)
		this->_halfHeight = (this->frameHeight * 0.5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetHelpers,(void))

Void FlxSprite_obj::setOriginToCenter( ){
{
		HX_STACK_PUSH("FlxSprite::setOriginToCenter","flixel/FlxSprite.hx",643);
		HX_STACK_THIS(this);
		HX_STACK_LINE(643)
		this->_origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,setOriginToCenter,(void))

Void FlxSprite_obj::resetSizeFromFrame( ){
{
		HX_STACK_PUSH("FlxSprite::resetSizeFromFrame","flixel/FlxSprite.hx",637);
		HX_STACK_THIS(this);
		HX_STACK_LINE(638)
		this->set_width(this->frameWidth);
		HX_STACK_LINE(639)
		this->set_height(this->frameHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSizeFromFrame,(void))

Void FlxSprite_obj::resetFrameSize( ){
{
		HX_STACK_PUSH("FlxSprite::resetFrameSize","flixel/FlxSprite.hx",627);
		HX_STACK_THIS(this);
		HX_STACK_LINE(628)
		this->frameWidth = ::Std_obj::_int(this->frame->sourceSize->x);
		HX_STACK_LINE(629)
		this->frameHeight = ::Std_obj::_int(this->frame->sourceSize->y);
		HX_STACK_LINE(630)
		{
			HX_STACK_LINE(630)
			this->_flashRect->x = (int)0;
			HX_STACK_LINE(630)
			this->_flashRect->y = (int)0;
			HX_STACK_LINE(630)
			this->_flashRect->width = this->frameWidth;
			HX_STACK_LINE(630)
			this->_flashRect->height = this->frameHeight;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameSize,(void))

Void FlxSprite_obj::resetSize( ){
{
		HX_STACK_PUSH("FlxSprite::resetSize","flixel/FlxSprite.hx",616);
		HX_STACK_THIS(this);
		HX_STACK_LINE(617)
		this->_flashRect->x = (int)0;
		HX_STACK_LINE(618)
		this->_flashRect->y = (int)0;
		HX_STACK_LINE(619)
		this->_flashRect->width = this->frameWidth;
		HX_STACK_LINE(620)
		this->_flashRect->height = this->frameHeight;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSize,(void))

::flixel::FlxSprite FlxSprite_obj::loadRotatedImageFromTexture( Dynamic Data,::String Image,hx::Null< int >  __o_Rotations,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer){
int Rotations = __o_Rotations.Default(16);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_PUSH("FlxSprite::loadRotatedImageFromTexture","flixel/FlxSprite.hx",592);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Data,"Data");
	HX_STACK_ARG(Image,"Image");
	HX_STACK_ARG(Rotations,"Rotations");
	HX_STACK_ARG(AntiAliasing,"AntiAliasing");
	HX_STACK_ARG(AutoBuffer,"AutoBuffer");
{
		HX_STACK_LINE(593)
		::flixel::FlxSprite temp = this->loadImageFromTexture(Data,null(),null(),null());		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(595)
		if (((temp == null()))){
			HX_STACK_LINE(596)
			return null();
		}
		HX_STACK_LINE(600)
		this->animation->set_frameName(Image);
		HX_STACK_LINE(603)
		this->antialiasing = AntiAliasing;
		HX_STACK_LINE(609)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,loadRotatedImageFromTexture,return )

::flixel::FlxSprite FlxSprite_obj::loadImageFromTexture( Dynamic Data,hx::Null< bool >  __o_Reverse,hx::Null< bool >  __o_Unique,::String FrameName){
bool Reverse = __o_Reverse.Default(false);
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("FlxSprite::loadImageFromTexture","flixel/FlxSprite.hx",541);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Data,"Data");
	HX_STACK_ARG(Reverse,"Reverse");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(FrameName,"FrameName");
{
		HX_STACK_LINE(542)
		this->bakedRotation = (int)0;
		HX_STACK_LINE(544)
		if ((::Std_obj::is(Data,hx::ClassOf< ::flixel::util::loaders::CachedGraphics >()))){
			HX_STACK_LINE(546)
			this->set_cachedGraphics(Data);
			HX_STACK_LINE(547)
			if (((this->cachedGraphics->data == null()))){
				HX_STACK_LINE(548)
				return null();
			}
		}
		else{
			HX_STACK_LINE(552)
			if ((::Std_obj::is(Data,hx::ClassOf< ::flixel::util::loaders::TexturePackerData >()))){
				HX_STACK_LINE(554)
				this->set_cachedGraphics(::flixel::FlxG_obj::bitmap->add(Data->__Field(HX_CSTRING("assetName"),true),Unique,null()));
				HX_STACK_LINE(555)
				this->cachedGraphics->data = Data;
			}
			else{
				HX_STACK_LINE(558)
				return null();
			}
		}
		HX_STACK_LINE(562)
		this->region = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(563)
		this->region->width = this->cachedGraphics->bitmap->get_width();
		HX_STACK_LINE(564)
		this->region->height = this->cachedGraphics->bitmap->get_height();
		HX_STACK_LINE(566)
		this->flipped = (  (((Reverse == true))) ? int(this->cachedGraphics->bitmap->get_width()) : int((int)0) );
		HX_STACK_LINE(568)
		this->animation->destroyAnimations();
		HX_STACK_LINE(569)
		this->updateFrameData();
		HX_STACK_LINE(570)
		this->resetHelpers();
		HX_STACK_LINE(572)
		if (((FrameName != null()))){
			HX_STACK_LINE(573)
			this->animation->set_frameName(FrameName);
		}
		HX_STACK_LINE(577)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSprite_obj,loadImageFromTexture,return )

::flixel::FlxSprite FlxSprite_obj::makeGraphic( int Width,int Height,hx::Null< int >  __o_Color,hx::Null< bool >  __o_Unique,::String Key){
int Color = __o_Color.Default(-1);
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("FlxSprite::makeGraphic","flixel/FlxSprite.hx",517);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(518)
		this->bakedRotation = (int)0;
		HX_STACK_LINE(519)
		this->set_cachedGraphics(::flixel::FlxG_obj::bitmap->create(Width,Height,Color,Unique,Key));
		HX_STACK_LINE(520)
		this->region = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(521)
		this->region->width = Width;
		HX_STACK_LINE(522)
		this->region->height = Height;
		HX_STACK_LINE(523)
		this->set_width(this->frameWidth = this->cachedGraphics->bitmap->get_width());
		HX_STACK_LINE(524)
		this->set_height(this->frameHeight = this->cachedGraphics->bitmap->get_height());
		HX_STACK_LINE(525)
		this->animation->destroyAnimations();
		HX_STACK_LINE(526)
		this->updateFrameData();
		HX_STACK_LINE(527)
		this->resetHelpers();
		HX_STACK_LINE(528)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,makeGraphic,return )

::flixel::FlxSprite FlxSprite_obj::loadRotatedGraphic( Dynamic Graphic,hx::Null< int >  __o_Rotations,hx::Null< int >  __o_Frame,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer,::String Key){
int Rotations = __o_Rotations.Default(16);
int Frame = __o_Frame.Default(-1);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_PUSH("FlxSprite::loadRotatedGraphic","flixel/FlxSprite.hx",366);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Rotations,"Rotations");
	HX_STACK_ARG(Frame,"Frame");
	HX_STACK_ARG(AntiAliasing,"AntiAliasing");
	HX_STACK_ARG(AutoBuffer,"AutoBuffer");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(368)
		int rows = ::Std_obj::_int(::Math_obj::sqrt(Rotations));		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(369)
		::flash::display::BitmapData brush = ::flixel::FlxG_obj::bitmap->add(Graphic,false,Key)->bitmap;		HX_STACK_VAR(brush,"brush");
		HX_STACK_LINE(370)
		bool isRegion = ::Std_obj::is(Graphic,hx::ClassOf< ::flixel::util::loaders::TextureRegion >());		HX_STACK_VAR(isRegion,"isRegion");
		HX_STACK_LINE(371)
		::flixel::util::loaders::TextureRegion spriteRegion = (  (((isRegion == true))) ? ::flixel::util::loaders::TextureRegion(Graphic) : ::flixel::util::loaders::TextureRegion(null()) );		HX_STACK_VAR(spriteRegion,"spriteRegion");
		HX_STACK_LINE(372)
		::flixel::system::layer::Region tempRegion = (  (((isRegion == true))) ? ::flixel::system::layer::Region(spriteRegion->region) : ::flixel::system::layer::Region(null()) );		HX_STACK_VAR(tempRegion,"tempRegion");
		HX_STACK_LINE(374)
		if (((bool((Frame >= (int)0)) || bool(isRegion)))){
			HX_STACK_LINE(377)
			::flash::display::BitmapData full = brush;		HX_STACK_VAR(full,"full");
			HX_STACK_LINE(379)
			if ((isRegion)){
				HX_STACK_LINE(381)
				brush = ::flash::display::BitmapData_obj::__new(tempRegion->width,tempRegion->height,null(),null(),null());
				HX_STACK_LINE(382)
				this->_flashRect->x = tempRegion->startX;
				HX_STACK_LINE(383)
				this->_flashRect->y = tempRegion->startY;
				HX_STACK_LINE(384)
				this->_flashRect->width = tempRegion->width;
				HX_STACK_LINE(385)
				this->_flashRect->height = tempRegion->height;
				HX_STACK_LINE(386)
				brush->copyPixels(full,this->_flashRect,this->_flashPointZero,null(),null(),null());
			}
			else{
				HX_STACK_LINE(390)
				brush = ::flash::display::BitmapData_obj::__new(full->get_height(),full->get_height(),null(),null(),null());
				HX_STACK_LINE(391)
				int rx = (Frame * brush->get_width());		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(392)
				int ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(393)
				int fw = full->get_width();		HX_STACK_VAR(fw,"fw");
				HX_STACK_LINE(394)
				if (((rx >= fw))){
					HX_STACK_LINE(396)
					ry = (::Std_obj::_int((Float(rx) / Float(fw))) * brush->get_height());
					HX_STACK_LINE(397)
					hx::ModEq(rx,fw);
				}
				HX_STACK_LINE(399)
				this->_flashRect->x = rx;
				HX_STACK_LINE(400)
				this->_flashRect->y = ry;
				HX_STACK_LINE(401)
				this->_flashRect->width = brush->get_width();
				HX_STACK_LINE(402)
				this->_flashRect->height = brush->get_height();
				HX_STACK_LINE(403)
				brush->copyPixels(full,this->_flashRect,this->_flashPointZero,null(),null(),null());
			}
		}
		HX_STACK_LINE(407)
		int max = brush->get_width();		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(408)
		if (((brush->get_height() > max))){
			HX_STACK_LINE(409)
			max = brush->get_height();
		}
		HX_STACK_LINE(413)
		if ((AutoBuffer)){
			HX_STACK_LINE(414)
			max = ::Std_obj::_int((max * 1.5));
		}
		HX_STACK_LINE(418)
		int columns = ::Math_obj::ceil((Float(Rotations) / Float(rows)));		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(419)
		this->set_width((max * columns));
		HX_STACK_LINE(420)
		this->set_height((max * rows));
		HX_STACK_LINE(421)
		::String key = HX_CSTRING("");		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(422)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(423)
			key = Graphic;
		}
		else{
			HX_STACK_LINE(426)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(427)
				key = ::Type_obj::getClassName(Graphic);
			}
			else{
				HX_STACK_LINE(430)
				if (((bool(::Std_obj::is(Graphic,hx::ClassOf< ::flash::display::BitmapData >())) && bool((Key != null()))))){
					HX_STACK_LINE(431)
					key = Key;
				}
				else{
					HX_STACK_LINE(434)
					if ((isRegion)){
						HX_STACK_LINE(436)
						key = spriteRegion->data->key;
						HX_STACK_LINE(437)
						hx::AddEq(key,(((((((((HX_CSTRING(":") + tempRegion->startX) + HX_CSTRING(":")) + tempRegion->startY) + HX_CSTRING(":")) + tempRegion->width) + HX_CSTRING(":")) + tempRegion->height) + HX_CSTRING(":")) + Rotations));
					}
					else{
						HX_STACK_LINE(440)
						return null();
					}
				}
			}
		}
		HX_STACK_LINE(444)
		if ((!(isRegion))){
			HX_STACK_LINE(445)
			hx::AddEq(key,(((((((HX_CSTRING(":") + Frame) + HX_CSTRING(":")) + this->width) + HX_CSTRING("x")) + this->height) + HX_CSTRING(":")) + Rotations));
		}
		HX_STACK_LINE(449)
		bool skipGen = ::flixel::FlxG_obj::bitmap->checkCache(key);		HX_STACK_VAR(skipGen,"skipGen");
		HX_STACK_LINE(450)
		this->set_cachedGraphics(::flixel::FlxG_obj::bitmap->create(((::Std_obj::_int(this->width) + columns) - (int)1),((::Std_obj::_int(this->height) + rows) - (int)1),(int)0,true,key));
		HX_STACK_LINE(451)
		this->bakedRotation = (Float((int)360) / Float(Rotations));
		HX_STACK_LINE(454)
		if ((!(skipGen))){
			HX_STACK_LINE(456)
			int row = (int)0;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(457)
			int column;		HX_STACK_VAR(column,"column");
			HX_STACK_LINE(458)
			Float bakedAngle = (int)0;		HX_STACK_VAR(bakedAngle,"bakedAngle");
			HX_STACK_LINE(459)
			int halfBrushWidth = ::Std_obj::_int((brush->get_width() * 0.5));		HX_STACK_VAR(halfBrushWidth,"halfBrushWidth");
			HX_STACK_LINE(460)
			int halfBrushHeight = ::Std_obj::_int((brush->get_height() * 0.5));		HX_STACK_VAR(halfBrushHeight,"halfBrushHeight");
			HX_STACK_LINE(461)
			int midpointX = ::Std_obj::_int((max * 0.5));		HX_STACK_VAR(midpointX,"midpointX");
			HX_STACK_LINE(462)
			int midpointY = ::Std_obj::_int((max * 0.5));		HX_STACK_VAR(midpointY,"midpointY");
			HX_STACK_LINE(463)
			while(((row < rows))){
				HX_STACK_LINE(465)
				column = (int)0;
				HX_STACK_LINE(466)
				while(((column < columns))){
					HX_STACK_LINE(468)
					this->_matrix->identity();
					HX_STACK_LINE(469)
					this->_matrix->translate(-(halfBrushWidth),-(halfBrushHeight));
					HX_STACK_LINE(470)
					this->_matrix->rotate((bakedAngle * ::flixel::util::FlxAngle_obj::TO_RAD));
					HX_STACK_LINE(471)
					this->_matrix->translate((((max * column) + midpointX) + column),(midpointY + row));
					HX_STACK_LINE(472)
					hx::AddEq(bakedAngle,this->bakedRotation);
					HX_STACK_LINE(473)
					this->cachedGraphics->bitmap->draw(brush,this->_matrix,null(),null(),null(),AntiAliasing);
					HX_STACK_LINE(474)
					(column)++;
				}
				HX_STACK_LINE(476)
				hx::AddEq(midpointY,max);
				HX_STACK_LINE(477)
				(row)++;
			}
		}
		HX_STACK_LINE(480)
		this->frameWidth = this->frameHeight = max;
		HX_STACK_LINE(481)
		this->set_width(this->set_height(max));
		HX_STACK_LINE(483)
		this->region = ::flixel::system::layer::Region_obj::__new((int)0,(int)0,max,max,(int)1,(int)1,null(),null());
		HX_STACK_LINE(484)
		this->region->width = this->cachedGraphics->bitmap->get_width();
		HX_STACK_LINE(485)
		this->region->height = this->cachedGraphics->bitmap->get_height();
		HX_STACK_LINE(488)
		this->antialiasing = AntiAliasing;
		HX_STACK_LINE(491)
		this->updateFrameData();
		HX_STACK_LINE(492)
		this->resetHelpers();
		HX_STACK_LINE(494)
		if ((AutoBuffer)){
			HX_STACK_LINE(496)
			this->set_width(brush->get_width());
			HX_STACK_LINE(497)
			this->set_height(brush->get_height());
			HX_STACK_LINE(498)
			this->centerOffsets(null());
		}
		HX_STACK_LINE(501)
		this->animation->destroyAnimations();
		HX_STACK_LINE(502)
		this->animation->createPrerotated(null());
		HX_STACK_LINE(504)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadRotatedGraphic,return )

::flixel::FlxSprite FlxSprite_obj::loadGraphic( Dynamic Graphic,hx::Null< bool >  __o_Animated,hx::Null< bool >  __o_Reverse,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< bool >  __o_Unique,::String Key){
bool Animated = __o_Animated.Default(false);
bool Reverse = __o_Reverse.Default(false);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("FlxSprite::loadGraphic","flixel/FlxSprite.hx",306);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Animated,"Animated");
	HX_STACK_ARG(Reverse,"Reverse");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(307)
		this->bakedRotation = (int)0;
		HX_STACK_LINE(308)
		this->set_cachedGraphics(::flixel::FlxG_obj::bitmap->add(Graphic,Unique,Key));
		HX_STACK_LINE(310)
		this->flipped = (  (((Reverse == true))) ? int(this->cachedGraphics->bitmap->get_width()) : int((int)0) );
		HX_STACK_LINE(312)
		if (((Width == (int)0))){
			HX_STACK_LINE(313)
			Width = (  (((Animated == true))) ? int(this->cachedGraphics->bitmap->get_height()) : int(this->cachedGraphics->bitmap->get_width()) );
		}
		HX_STACK_LINE(317)
		if (((Height == (int)0))){
			HX_STACK_LINE(318)
			Height = (  (((Animated == true))) ? int(Width) : int(this->cachedGraphics->bitmap->get_height()) );
		}
		HX_STACK_LINE(322)
		if ((!(::Std_obj::is(Graphic,hx::ClassOf< ::flixel::util::loaders::TextureRegion >())))){
			HX_STACK_LINE(324)
			this->region = ::flixel::system::layer::Region_obj::__new((int)0,(int)0,Width,Height,null(),null(),null(),null());
			HX_STACK_LINE(325)
			this->region->width = this->cachedGraphics->bitmap->get_width();
			HX_STACK_LINE(326)
			this->region->height = this->cachedGraphics->bitmap->get_height();
		}
		else{
			HX_STACK_LINE(330)
			this->region = (hx::TCast< flixel::util::loaders::TextureRegion >::cast(Graphic))->region->clone();
			HX_STACK_LINE(332)
			if (((this->region->tileWidth > (int)0))){
				HX_STACK_LINE(333)
				Width = this->region->tileWidth;
			}
			else{
				HX_STACK_LINE(335)
				this->region->tileWidth = this->region->width;
			}
			HX_STACK_LINE(337)
			if (((this->region->tileHeight > (int)0))){
				HX_STACK_LINE(338)
				Height = this->region->tileWidth;
			}
			else{
				HX_STACK_LINE(340)
				this->region->tileHeight = this->region->height;
			}
		}
		HX_STACK_LINE(343)
		this->set_width(this->frameWidth = Width);
		HX_STACK_LINE(344)
		this->set_height(this->frameHeight = Height);
		HX_STACK_LINE(346)
		this->animation->destroyAnimations();
		HX_STACK_LINE(348)
		this->updateFrameData();
		HX_STACK_LINE(349)
		this->resetHelpers();
		HX_STACK_LINE(351)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxSprite_obj,loadGraphic,return )

::flixel::FlxSprite FlxSprite_obj::loadfromSprite( ::flixel::FlxSprite Sprite){
	HX_STACK_PUSH("FlxSprite::loadfromSprite","flixel/FlxSprite.hx",264);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_LINE(265)
	if ((!(this->exists))){
		HX_STACK_LINE(266)
		::flixel::FlxG_obj::log->warn(((HX_CSTRING("Warning, trying to clone ") + ::Type_obj::getClassName(::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this)))) + HX_CSTRING(" object that doesn't exist.")));
	}
	HX_STACK_LINE(270)
	this->region = Sprite->region->clone();
	HX_STACK_LINE(271)
	this->flipped = Sprite->flipped;
	HX_STACK_LINE(272)
	this->bakedRotation = Sprite->bakedRotation;
	HX_STACK_LINE(273)
	this->set_cachedGraphics(Sprite->cachedGraphics);
	HX_STACK_LINE(275)
	this->set_width(this->frameWidth = Sprite->frameWidth);
	HX_STACK_LINE(276)
	this->set_height(this->frameHeight = Sprite->frameHeight);
	HX_STACK_LINE(277)
	if (((this->bakedRotation > (int)0))){
		HX_STACK_LINE(279)
		this->set_width(Sprite->width);
		HX_STACK_LINE(280)
		this->set_height(Sprite->height);
		HX_STACK_LINE(281)
		this->centerOffsets(null());
	}
	HX_STACK_LINE(284)
	this->updateFrameData();
	HX_STACK_LINE(285)
	this->resetHelpers();
	HX_STACK_LINE(286)
	this->antialiasing = Sprite->antialiasing;
	HX_STACK_LINE(288)
	this->animation->destroyAnimations();
	HX_STACK_LINE(289)
	this->animation->copyFrom(Sprite->animation);
	HX_STACK_LINE(291)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,loadfromSprite,return )

::flixel::FlxSprite FlxSprite_obj::clone( ::flixel::FlxSprite NewSprite){
	HX_STACK_PUSH("FlxSprite::clone","flixel/FlxSprite.hx",247);
	HX_STACK_THIS(this);
	HX_STACK_ARG(NewSprite,"NewSprite");
	HX_STACK_LINE(248)
	if (((NewSprite == null()))){
		HX_STACK_LINE(249)
		NewSprite = ::flixel::FlxSprite_obj::__new(null(),null(),null());
	}
	HX_STACK_LINE(253)
	NewSprite->loadfromSprite(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(254)
	return NewSprite;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,clone,return )

Void FlxSprite_obj::destroy( ){
{
		HX_STACK_PUSH("FlxSprite::destroy","flixel/FlxSprite.hx",215);
		HX_STACK_THIS(this);
		HX_STACK_LINE(216)
		this->super::destroy();
		HX_STACK_LINE(218)
		if (((this->animation != null()))){
			HX_STACK_LINE(219)
			this->animation->destroy();
		}
		HX_STACK_LINE(222)
		this->animation = null();
		HX_STACK_LINE(224)
		this->_flashPoint = null();
		HX_STACK_LINE(225)
		this->_flashRect = null();
		HX_STACK_LINE(226)
		this->_flashRect2 = null();
		HX_STACK_LINE(227)
		this->_flashPointZero = null();
		HX_STACK_LINE(228)
		this->set_offset(null());
		HX_STACK_LINE(229)
		this->set_origin(null());
		HX_STACK_LINE(230)
		this->set_scale(null());
		HX_STACK_LINE(231)
		this->_matrix = null();
		HX_STACK_LINE(232)
		this->_colorTransform = null();
		HX_STACK_LINE(233)
		if (((this->framePixels != null()))){
			HX_STACK_LINE(234)
			this->framePixels->dispose();
		}
		HX_STACK_LINE(237)
		this->framePixels = null();
		HX_STACK_LINE(241)
		this->_blend = null();
		HX_STACK_LINE(243)
		this->set_frame(null());
	}
return null();
}


Void FlxSprite_obj::initVars( ){
{
		HX_STACK_PUSH("FlxSprite::initVars","flixel/FlxSprite.hx",195);
		HX_STACK_THIS(this);
		HX_STACK_LINE(196)
		this->super::initVars();
		HX_STACK_LINE(198)
		this->animation = ::flixel::animation::FlxAnimationController_obj::__new(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(200)
		this->_flashPoint = ::flash::geom::Point_obj::__new(null(),null());
		HX_STACK_LINE(201)
		this->_flashRect = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
		HX_STACK_LINE(202)
		this->_flashRect2 = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
		HX_STACK_LINE(203)
		this->_flashPointZero = ::flash::geom::Point_obj::__new(null(),null());
		HX_STACK_LINE(204)
		this->set_offset(::flixel::util::FlxPoint_obj::__new(null(),null()));
		HX_STACK_LINE(205)
		this->set_origin(::flixel::util::FlxPoint_obj::__new(null(),null()));
		HX_STACK_LINE(206)
		this->set_scale(::flixel::util::FlxPoint_obj::__new((int)1,(int)1));
		HX_STACK_LINE(207)
		this->_matrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	}
return null();
}



FlxSprite_obj::FlxSprite_obj()
{
}

void FlxSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSprite);
	HX_MARK_MEMBER_NAME(_scale,"_scale");
	HX_MARK_MEMBER_NAME(_origin,"_origin");
	HX_MARK_MEMBER_NAME(_offset,"_offset");
	HX_MARK_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_MARK_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_MARK_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_MARK_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_MARK_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_MARK_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_MARK_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_facingMult,"_facingMult");
	HX_MARK_MEMBER_NAME(_blue,"_blue");
	HX_MARK_MEMBER_NAME(_green,"_green");
	HX_MARK_MEMBER_NAME(_red,"_red");
	HX_MARK_MEMBER_NAME(isColored,"isColored");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(_blendInt,"_blendInt");
	HX_MARK_MEMBER_NAME(_blend,"_blend");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(flipped,"flipped");
	HX_MARK_MEMBER_NAME(facing,"facing");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(bakedRotation,"bakedRotation");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(frameHeight,"frameHeight");
	HX_MARK_MEMBER_NAME(frameWidth,"frameWidth");
	HX_MARK_MEMBER_NAME(framePixels,"framePixels");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(animation,"animation");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scale,"_scale");
	HX_VISIT_MEMBER_NAME(_origin,"_origin");
	HX_VISIT_MEMBER_NAME(_offset,"_offset");
	HX_VISIT_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_VISIT_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_VISIT_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_VISIT_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_VISIT_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_VISIT_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_VISIT_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_facingMult,"_facingMult");
	HX_VISIT_MEMBER_NAME(_blue,"_blue");
	HX_VISIT_MEMBER_NAME(_green,"_green");
	HX_VISIT_MEMBER_NAME(_red,"_red");
	HX_VISIT_MEMBER_NAME(isColored,"isColored");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(_blendInt,"_blendInt");
	HX_VISIT_MEMBER_NAME(_blend,"_blend");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(flipped,"flipped");
	HX_VISIT_MEMBER_NAME(facing,"facing");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(bakedRotation,"bakedRotation");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(frameHeight,"frameHeight");
	HX_VISIT_MEMBER_NAME(frameWidth,"frameWidth");
	HX_VISIT_MEMBER_NAME(framePixels,"framePixels");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(animation,"animation");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"_red") ) { return _red; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"_blue") ) { return _blue; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"blend") ) { return get_blend(); }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_scale") ) { return _scale; }
		if (HX_FIELD_EQ(inName,"_green") ) { return _green; }
		if (HX_FIELD_EQ(inName,"_blend") ) { return _blend; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"facing") ) { return facing; }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"pixels") ) { return get_pixels(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_origin") ) { return _origin; }
		if (HX_FIELD_EQ(inName,"_offset") ) { return _offset; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"flipped") ) { return flipped; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onScreen") ) { return onScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"initVars") ) { return initVars_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blend") ) { return get_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return set_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return drawFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"resetSize") ) { return resetSize_dyn(); }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { return _cosAngle; }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { return _sinAngle; }
		if (HX_FIELD_EQ(inName,"isColored") ) { return isColored; }
		if (HX_FIELD_EQ(inName,"_blendInt") ) { return _blendInt; }
		if (HX_FIELD_EQ(inName,"animation") ) { return animation; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_offset") ) { return set_offset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_origin") ) { return set_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_facing") ) { return set_facing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return set_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return get_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { return _halfWidth; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"frameWidth") ) { return frameWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"makeGraphic") ) { return makeGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return loadGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { return _halfHeight; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { return _flashRect2; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"_facingMult") ) { return _facingMult; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { return frameHeight; }
		if (HX_FIELD_EQ(inName,"framePixels") ) { return framePixels; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return replaceColor_dyn(); }
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"centerOffsets") ) { return centerOffsets_dyn(); }
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { return _angleChanged; }
		if (HX_FIELD_EQ(inName,"bakedRotation") ) { return bakedRotation; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resetFrameSize") ) { return resetFrameSize_dyn(); }
		if (HX_FIELD_EQ(inName,"loadfromSprite") ) { return loadfromSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return get_colorTransform(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return _colorTransform; }
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { return _flashPointZero; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setOriginToCenter") ) { return setOriginToCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { return useColorTransform; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return get_colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"simpleRenderSprite") ) { return simpleRenderSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelsOverlapPoint") ) { return pixelsOverlapPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"resetSizeFromFrame") ) { return resetSizeFromFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"loadRotatedGraphic") ) { return loadRotatedGraphic_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImageFromTexture") ) { return loadImageFromTexture_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"resetFrameBitmapDatas") ) { return resetFrameBitmapDatas_dyn(); }
		if (HX_FIELD_EQ(inName,"getFlxFrameBitmapData") ) { return getFlxFrameBitmapData_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"loadRotatedImageFromTexture") ) { return loadRotatedImageFromTexture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { _red=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_blue") ) { _blue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { return set_blend(inValue); }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp) return set_scale(inValue);scale=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp) return set_frame(inValue);frame=inValue.Cast< ::flixel::system::layer::frames::FlxFrame >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scale") ) { _scale=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_green") ) { _green=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blend") ) { _blend=inValue.Cast< ::flash::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { if (inCallProp) return set_offset(inValue);offset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { if (inCallProp) return set_origin(inValue);origin=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"facing") ) { if (inCallProp) return set_facing(inValue);facing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { return set_pixels(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_origin") ) { _origin=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_offset") ) { _offset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipped") ) { flipped=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { _cosAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { _sinAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isColored") ) { isColored=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blendInt") ) { _blendInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast< ::flixel::animation::FlxAnimationController >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { _halfWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameWidth") ) { frameWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { _halfHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { _flashRect2=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_facingMult") ) { _facingMult=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { frameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framePixels") ) { framePixels=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { _angleChanged=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bakedRotation") ) { bakedRotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast< ::flash::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { _flashPointZero=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { useColorTransform=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_scale"));
	outFields->push(HX_CSTRING("_origin"));
	outFields->push(HX_CSTRING("_offset"));
	outFields->push(HX_CSTRING("_angleChanged"));
	outFields->push(HX_CSTRING("_cosAngle"));
	outFields->push(HX_CSTRING("_sinAngle"));
	outFields->push(HX_CSTRING("_halfHeight"));
	outFields->push(HX_CSTRING("_halfWidth"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("useColorTransform"));
	outFields->push(HX_CSTRING("_colorTransform"));
	outFields->push(HX_CSTRING("_flashPointZero"));
	outFields->push(HX_CSTRING("_flashRect2"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_facingMult"));
	outFields->push(HX_CSTRING("_blue"));
	outFields->push(HX_CSTRING("_green"));
	outFields->push(HX_CSTRING("_red"));
	outFields->push(HX_CSTRING("isColored"));
	outFields->push(HX_CSTRING("colorTransform"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("_blendInt"));
	outFields->push(HX_CSTRING("_blend"));
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("flipped"));
	outFields->push(HX_CSTRING("facing"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("bakedRotation"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("frameHeight"));
	outFields->push(HX_CSTRING("frameWidth"));
	outFields->push(HX_CSTRING("framePixels"));
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("pixels"));
	outFields->push(HX_CSTRING("animation"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_blend"),
	HX_CSTRING("get_blend"),
	HX_CSTRING("set_scale"),
	HX_CSTRING("set_offset"),
	HX_CSTRING("set_origin"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("get_colorTransform"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("set_facing"),
	HX_CSTRING("set_frame"),
	HX_CSTRING("set_pixels"),
	HX_CSTRING("get_pixels"),
	HX_CSTRING("simpleRenderSprite"),
	HX_CSTRING("resetFrameBitmapDatas"),
	HX_CSTRING("getFlxFrameBitmapData"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("pixelsOverlapPoint"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("onScreen"),
	HX_CSTRING("updateColorTransform"),
	HX_CSTRING("replaceColor"),
	HX_CSTRING("centerOffsets"),
	HX_CSTRING("drawFrame"),
	HX_CSTRING("stamp"),
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("resetHelpers"),
	HX_CSTRING("setOriginToCenter"),
	HX_CSTRING("resetSizeFromFrame"),
	HX_CSTRING("resetFrameSize"),
	HX_CSTRING("resetSize"),
	HX_CSTRING("loadRotatedImageFromTexture"),
	HX_CSTRING("loadImageFromTexture"),
	HX_CSTRING("makeGraphic"),
	HX_CSTRING("loadRotatedGraphic"),
	HX_CSTRING("loadGraphic"),
	HX_CSTRING("loadfromSprite"),
	HX_CSTRING("clone"),
	HX_CSTRING("destroy"),
	HX_CSTRING("initVars"),
	HX_CSTRING("_scale"),
	HX_CSTRING("_origin"),
	HX_CSTRING("_offset"),
	HX_CSTRING("_angleChanged"),
	HX_CSTRING("_cosAngle"),
	HX_CSTRING("_sinAngle"),
	HX_CSTRING("_halfHeight"),
	HX_CSTRING("_halfWidth"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("useColorTransform"),
	HX_CSTRING("_colorTransform"),
	HX_CSTRING("_flashPointZero"),
	HX_CSTRING("_flashRect2"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_facingMult"),
	HX_CSTRING("_blue"),
	HX_CSTRING("_green"),
	HX_CSTRING("_red"),
	HX_CSTRING("isColored"),
	HX_CSTRING("color"),
	HX_CSTRING("_blendInt"),
	HX_CSTRING("_blend"),
	HX_CSTRING("dirty"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("scale"),
	HX_CSTRING("offset"),
	HX_CSTRING("origin"),
	HX_CSTRING("flipped"),
	HX_CSTRING("facing"),
	HX_CSTRING("alpha"),
	HX_CSTRING("bakedRotation"),
	HX_CSTRING("frames"),
	HX_CSTRING("frameHeight"),
	HX_CSTRING("frameWidth"),
	HX_CSTRING("framePixels"),
	HX_CSTRING("frame"),
	HX_CSTRING("animation"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
};

Class FlxSprite_obj::__mClass;

void FlxSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxSprite"), hx::TCanCast< FlxSprite_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxSprite_obj::__boot()
{
}

} // end namespace flixel
