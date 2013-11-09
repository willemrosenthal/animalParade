#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureAtlasFrame
#include <flixel/util/loaders/TextureAtlasFrame.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#include <flixel/util/loaders/TexturePackerData.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace flixel{
namespace system{
namespace layer{

Void TileSheetData_obj::__construct(::flash::display::BitmapData Bitmap)
{
HX_STACK_PUSH("TileSheetData::new","flixel/system/layer/TileSheetData.hx",38);
{
	HX_STACK_LINE(39)
	this->bitmap = Bitmap;
	HX_STACK_LINE(41)
	this->tileSheet = ::flixel::system::layer::TileSheetExt_obj::__new(this->bitmap);
	HX_STACK_LINE(43)
	this->flxSpriteFrames = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(44)
	this->flxFrames = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(45)
	this->frameNames = Array_obj< ::String >::__new();
}
;
	return null();
}

TileSheetData_obj::~TileSheetData_obj() { }

Dynamic TileSheetData_obj::__CreateEmpty() { return  new TileSheetData_obj; }
hx::ObjectPtr< TileSheetData_obj > TileSheetData_obj::__new(::flash::display::BitmapData Bitmap)
{  hx::ObjectPtr< TileSheetData_obj > result = new TileSheetData_obj();
	result->__construct(Bitmap);
	return result;}

Dynamic TileSheetData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileSheetData_obj > result = new TileSheetData_obj();
	result->__construct(inArgs[0]);
	return result;}

Void TileSheetData_obj::destroyFrameBitmapDatas( ){
{
		HX_STACK_PUSH("TileSheetData::destroyFrameBitmapDatas","flixel/system/layer/TileSheetData.hx",307);
		HX_STACK_THIS(this);
		HX_STACK_LINE(308)
		int numFrames = this->frameNames->length;		HX_STACK_VAR(numFrames,"numFrames");
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(309)
			while(((_g < numFrames))){
				HX_STACK_LINE(309)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(311)
				this->flxFrames->get(this->frameNames->__get(i))->__Field(HX_CSTRING("destroyBitmapDatas"),true)();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileSheetData_obj,destroyFrameBitmapDatas,(void))

::flixel::system::layer::frames::FlxFrame TileSheetData_obj::addTexturePackerFrame( ::flixel::util::loaders::TextureAtlasFrame frameData,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY){
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
	HX_STACK_PUSH("TileSheetData::addTexturePackerFrame","flixel/system/layer/TileSheetData.hx",273);
	HX_STACK_THIS(this);
	HX_STACK_ARG(frameData,"frameData");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
{
		HX_STACK_LINE(274)
		::String key = frameData->name;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(275)
		if ((this->containsFrame(key))){
			HX_STACK_LINE(276)
			return this->flxFrames->get(key);
		}
		HX_STACK_LINE(280)
		::flixel::system::layer::frames::FlxFrame texFrame = ::flixel::system::layer::frames::FlxFrame_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(texFrame,"texFrame");
		HX_STACK_LINE(281)
		texFrame->trimmed = frameData->trimmed;
		HX_STACK_LINE(282)
		texFrame->rotated = frameData->rotated;
		HX_STACK_LINE(283)
		texFrame->name = key;
		HX_STACK_LINE(284)
		texFrame->sourceSize = ::flixel::util::FlxPoint_obj::__new(null(),null())->copyFrom(frameData->sourceSize);
		HX_STACK_LINE(285)
		texFrame->offset = ::flixel::util::FlxPoint_obj::__new(null(),null())->copyFrom(frameData->offset);
		HX_STACK_LINE(286)
		texFrame->center = ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);
		HX_STACK_LINE(287)
		texFrame->frame = frameData->frame->clone();
		HX_STACK_LINE(289)
		if ((frameData->rotated)){
			HX_STACK_LINE(291)
			texFrame->center->set(((texFrame->frame->height * 0.5) + texFrame->offset->x),((texFrame->frame->width * 0.5) + texFrame->offset->y));
			HX_STACK_LINE(292)
			texFrame->additionalAngle = -90.0;
		}
		else{
			HX_STACK_LINE(295)
			texFrame->center->set(((texFrame->frame->width * 0.5) + texFrame->offset->x),((texFrame->frame->height * 0.5) + texFrame->offset->y));
		}
		HX_STACK_LINE(299)
		texFrame->tileID = this->addTileRect(texFrame->frame,::flash::geom::Point_obj::__new((0.5 * texFrame->frame->width),(0.5 * texFrame->frame->height)));
		HX_STACK_LINE(301)
		this->flxFrames->set(key,texFrame);
		HX_STACK_LINE(302)
		this->frameNames->push(key);
		HX_STACK_LINE(303)
		return texFrame;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(TileSheetData_obj,addTexturePackerFrame,return )

::flixel::system::layer::frames::FlxSpriteFrames TileSheetData_obj::getTexturePackerFrames( ::flixel::util::loaders::TexturePackerData data,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY){
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
	HX_STACK_PUSH("TileSheetData::getTexturePackerFrames","flixel/system/layer/TileSheetData.hx",246);
	HX_STACK_THIS(this);
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
{
		HX_STACK_LINE(248)
		if ((this->flxSpriteFrames->exists(data->assetName))){
			HX_STACK_LINE(249)
			return this->flxSpriteFrames->get(data->assetName);
		}
		HX_STACK_LINE(253)
		data->parseData();
		HX_STACK_LINE(255)
		::flixel::system::layer::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(256)
		::flixel::system::layer::frames::FlxSpriteFrames packerFrames = ::flixel::system::layer::frames::FlxSpriteFrames_obj::__new(data->assetName);		HX_STACK_VAR(packerFrames,"packerFrames");
		HX_STACK_LINE(258)
		int l = data->frames->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(259)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(259)
			while(((_g < l))){
				HX_STACK_LINE(259)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(261)
				frame = this->addTexturePackerFrame(data->frames->__get(i).StaticCast< ::flixel::util::loaders::TextureAtlasFrame >(),startX,startY);
				HX_STACK_LINE(262)
				packerFrames->addFrame(frame);
			}
		}
		HX_STACK_LINE(265)
		this->flxSpriteFrames->set(data->assetName,packerFrames);
		HX_STACK_LINE(266)
		return packerFrames;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(TileSheetData_obj,getTexturePackerFrames,return )

Void TileSheetData_obj::onContext( ::flash::display::BitmapData bitmap){
{
		HX_STACK_PUSH("TileSheetData::onContext","flixel/system/layer/TileSheetData.hx",234);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bitmap,"bitmap");
		HX_STACK_LINE(235)
		this->bitmap = bitmap;
		HX_STACK_LINE(236)
		::flixel::system::layer::TileSheetExt newSheet = ::flixel::system::layer::TileSheetExt_obj::__new(bitmap);		HX_STACK_VAR(newSheet,"newSheet");
		HX_STACK_LINE(237)
		newSheet->rebuildFromOld(this->tileSheet);
		HX_STACK_LINE(238)
		this->tileSheet = newSheet;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,onContext,(void))

Void TileSheetData_obj::destroy( ){
{
		HX_STACK_PUSH("TileSheetData::destroy","flixel/system/layer/TileSheetData.hx",205);
		HX_STACK_THIS(this);
		HX_STACK_LINE(206)
		this->bitmap = null();
		HX_STACK_LINE(208)
		this->tileSheet->destroy();
		HX_STACK_LINE(209)
		this->tileSheet = null();
		struct _Function_1_1{
			inline static Dynamic Block( ::flixel::system::layer::TileSheetData_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/system/layer/TileSheetData.hx",212);
				{
					HX_STACK_LINE(212)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->flxSpriteFrames);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","flixel/system/layer/TileSheetData.hx",212);
						{
							HX_STACK_LINE(212)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(212)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(212)
		for(::cpp::FastIterator_obj< ::flixel::system::layer::frames::FlxSpriteFrames > *__it = ::cpp::CreateFastIterator< ::flixel::system::layer::frames::FlxSpriteFrames >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::flixel::system::layer::frames::FlxSpriteFrames spriteData = __it->next();
			spriteData->destroy();
		}
		struct _Function_1_2{
			inline static Dynamic Block( ::flixel::system::layer::TileSheetData_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/system/layer/TileSheetData.hx",217);
				{
					HX_STACK_LINE(217)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->flxSpriteFrames);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","flixel/system/layer/TileSheetData.hx",217);
						{
							HX_STACK_LINE(217)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(217)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(217)
		for(::cpp::FastIterator_obj< ::flixel::system::layer::frames::FlxSpriteFrames > *__it = ::cpp::CreateFastIterator< ::flixel::system::layer::frames::FlxSpriteFrames >((_Function_1_2::Block(this))());  __it->hasNext(); ){
			::flixel::system::layer::frames::FlxSpriteFrames frames = __it->next();
			frames->destroy();
		}
		HX_STACK_LINE(221)
		this->flxSpriteFrames = null();
		struct _Function_1_3{
			inline static Dynamic Block( ::flixel::system::layer::TileSheetData_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/system/layer/TileSheetData.hx",223);
				{
					HX_STACK_LINE(223)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->flxFrames);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","flixel/system/layer/TileSheetData.hx",223);
						{
							HX_STACK_LINE(223)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(223)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(223)
		for(::cpp::FastIterator_obj< ::flixel::system::layer::frames::FlxFrame > *__it = ::cpp::CreateFastIterator< ::flixel::system::layer::frames::FlxFrame >((_Function_1_3::Block(this))());  __it->hasNext(); ){
			::flixel::system::layer::frames::FlxFrame frame = __it->next();
			frame->destroy();
		}
		HX_STACK_LINE(227)
		this->flxFrames = null();
		HX_STACK_LINE(229)
		this->frameNames = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileSheetData_obj,destroy,(void))

int TileSheetData_obj::addTileRect( ::flash::geom::Rectangle tileRect,::flash::geom::Point point){
	HX_STACK_PUSH("TileSheetData::addTileRect","flixel/system/layer/TileSheetData.hx",199);
	HX_STACK_THIS(this);
	HX_STACK_ARG(tileRect,"tileRect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(199)
	return this->tileSheet->addTileRectID(tileRect,point);
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,addTileRect,return )

bool TileSheetData_obj::containsFrame( ::String key){
	HX_STACK_PUSH("TileSheetData::containsFrame","flixel/system/layer/TileSheetData.hx",193);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(193)
	return this->flxFrames->exists(key);
}


HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,containsFrame,return )

::flixel::system::layer::frames::FlxFrame TileSheetData_obj::addSpriteSheetFrame( ::flash::geom::Rectangle rect,::flash::geom::Point point){
	HX_STACK_PUSH("TileSheetData::addSpriteSheetFrame","flixel/system/layer/TileSheetData.hx",167);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(point,"point");
	struct _Function_1_1{
		inline static ::String Block( ::flash::geom::Point &point,::flash::geom::Rectangle &rect){
			HX_STACK_PUSH("*::closure","flixel/system/layer/TileSheetData.hx",168);
			{
				HX_STACK_LINE(168)
				Float hash = (int)23;		HX_STACK_VAR(hash,"hash");
				HX_STACK_LINE(168)
				hash = ((hash * (int)31) + rect->x);
				HX_STACK_LINE(168)
				hash = ((hash * (int)31) + rect->y);
				HX_STACK_LINE(168)
				hash = ((hash * (int)31) + rect->width);
				HX_STACK_LINE(168)
				hash = ((hash * (int)31) + rect->height);
				HX_STACK_LINE(168)
				hash = ((hash * (int)31) + point->x);
				HX_STACK_LINE(168)
				hash = ((hash * (int)31) + point->y);
				HX_STACK_LINE(168)
				return ::Std_obj::string(hash);
			}
			return null();
		}
	};
	HX_STACK_LINE(168)
	::String key = _Function_1_1::Block(point,rect);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(169)
	if ((this->containsFrame(key))){
		HX_STACK_LINE(170)
		return this->flxFrames->get(key);
	}
	HX_STACK_LINE(174)
	::flixel::system::layer::frames::FlxFrame frame = ::flixel::system::layer::frames::FlxFrame_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(176)
	frame->tileID = this->addTileRect(rect,point);
	HX_STACK_LINE(178)
	frame->name = key;
	HX_STACK_LINE(179)
	frame->frame = rect;
	HX_STACK_LINE(181)
	frame->rotated = false;
	HX_STACK_LINE(182)
	frame->trimmed = false;
	HX_STACK_LINE(183)
	frame->sourceSize = ::flixel::util::FlxPoint_obj::__new(rect->width,rect->height);
	HX_STACK_LINE(184)
	frame->offset = ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);
	HX_STACK_LINE(186)
	frame->center = ::flixel::util::FlxPoint_obj::__new((0.5 * rect->width),(0.5 * rect->height));
	HX_STACK_LINE(187)
	this->flxFrames->set(key,frame);
	HX_STACK_LINE(188)
	this->frameNames->push(key);
	HX_STACK_LINE(189)
	return frame;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,addSpriteSheetFrame,return )

bool TileSheetData_obj::containsSpriteSheetFrames( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY){
	HX_STACK_PUSH("TileSheetData::containsSpriteSheetFrames","flixel/system/layer/TileSheetData.hx",158);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
	HX_STACK_ARG(endX,"endX");
	HX_STACK_ARG(endY,"endY");
	HX_STACK_ARG(xSpacing,"xSpacing");
	HX_STACK_ARG(ySpacing,"ySpacing");
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	struct _Function_1_1{
		inline static ::String Block( int &width,int &startY,int &ySpacing,int &startX,int &endX,int &xSpacing,Float &pointY,int &endY,int &height,Float &pointX){
			HX_STACK_PUSH("*::closure","flixel/system/layer/TileSheetData.hx",159);
			{
				HX_STACK_LINE(159)
				Float hash = (int)23;		HX_STACK_VAR(hash,"hash");
				HX_STACK_LINE(159)
				hash = ((hash * (int)31) + width);
				HX_STACK_LINE(159)
				hash = ((hash * (int)31) + height);
				HX_STACK_LINE(159)
				hash = ((hash * (int)31) + startX);
				HX_STACK_LINE(159)
				hash = ((hash * (int)31) + startY);
				HX_STACK_LINE(159)
				hash = ((hash * (int)31) + endX);
				HX_STACK_LINE(159)
				hash = ((hash * (int)31) + endY);
				HX_STACK_LINE(159)
				hash = ((hash * (int)31) + xSpacing);
				HX_STACK_LINE(159)
				hash = ((hash * (int)31) + ySpacing);
				HX_STACK_LINE(159)
				hash = ((hash * (int)31) + pointX);
				HX_STACK_LINE(159)
				hash = ((hash * (int)31) + pointY);
				HX_STACK_LINE(159)
				return ::Std_obj::string(hash);
			}
			return null();
		}
	};
	HX_STACK_LINE(159)
	::String key = _Function_1_1::Block(width,startY,ySpacing,startX,endX,xSpacing,pointY,endY,height,pointX);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(160)
	return this->flxSpriteFrames->exists(key);
}


HX_DEFINE_DYNAMIC_FUNC10(TileSheetData_obj,containsSpriteSheetFrames,return )

::String TileSheetData_obj::getKeyForSpriteSheetFrames( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY){
	HX_STACK_PUSH("TileSheetData::getKeyForSpriteSheetFrames","flixel/system/layer/TileSheetData.hx",141);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
	HX_STACK_ARG(endX,"endX");
	HX_STACK_ARG(endY,"endY");
	HX_STACK_ARG(xSpacing,"xSpacing");
	HX_STACK_ARG(ySpacing,"ySpacing");
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_LINE(143)
	Float hash = (int)23;		HX_STACK_VAR(hash,"hash");
	HX_STACK_LINE(144)
	hash = ((hash * (int)31) + width);
	HX_STACK_LINE(145)
	hash = ((hash * (int)31) + height);
	HX_STACK_LINE(146)
	hash = ((hash * (int)31) + startX);
	HX_STACK_LINE(147)
	hash = ((hash * (int)31) + startY);
	HX_STACK_LINE(148)
	hash = ((hash * (int)31) + endX);
	HX_STACK_LINE(149)
	hash = ((hash * (int)31) + endY);
	HX_STACK_LINE(150)
	hash = ((hash * (int)31) + xSpacing);
	HX_STACK_LINE(151)
	hash = ((hash * (int)31) + ySpacing);
	HX_STACK_LINE(152)
	hash = ((hash * (int)31) + pointX);
	HX_STACK_LINE(153)
	hash = ((hash * (int)31) + pointY);
	HX_STACK_LINE(154)
	return ::Std_obj::string(hash);
}


HX_DEFINE_DYNAMIC_FUNC10(TileSheetData_obj,getKeyForSpriteSheetFrames,return )

::String TileSheetData_obj::getSpriteSheetFrameKey( ::flash::geom::Rectangle rect,::flash::geom::Point point){
	HX_STACK_PUSH("TileSheetData::getSpriteSheetFrameKey","flixel/system/layer/TileSheetData.hx",129);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(130)
	Float hash = (int)23;		HX_STACK_VAR(hash,"hash");
	HX_STACK_LINE(131)
	hash = ((hash * (int)31) + rect->x);
	HX_STACK_LINE(132)
	hash = ((hash * (int)31) + rect->y);
	HX_STACK_LINE(133)
	hash = ((hash * (int)31) + rect->width);
	HX_STACK_LINE(134)
	hash = ((hash * (int)31) + rect->height);
	HX_STACK_LINE(135)
	hash = ((hash * (int)31) + point->x);
	HX_STACK_LINE(136)
	hash = ((hash * (int)31) + point->y);
	HX_STACK_LINE(137)
	return ::Std_obj::string(hash);
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,getSpriteSheetFrameKey,return )

::flixel::system::layer::frames::FlxSpriteFrames TileSheetData_obj::getSpriteSheetFrames( ::flixel::system::layer::Region region,::flash::geom::Point origin){
	HX_STACK_PUSH("TileSheetData::getSpriteSheetFrames","flixel/system/layer/TileSheetData.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(region,"region");
	HX_STACK_ARG(origin,"origin");
	HX_STACK_LINE(61)
	int bitmapWidth = region->width;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
	HX_STACK_LINE(62)
	int bitmapHeight = region->height;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
	HX_STACK_LINE(64)
	int startX = region->startX;		HX_STACK_VAR(startX,"startX");
	HX_STACK_LINE(65)
	int startY = region->startY;		HX_STACK_VAR(startY,"startY");
	HX_STACK_LINE(67)
	int endX = (startX + bitmapWidth);		HX_STACK_VAR(endX,"endX");
	HX_STACK_LINE(68)
	int endY = (startY + bitmapHeight);		HX_STACK_VAR(endY,"endY");
	HX_STACK_LINE(70)
	int xSpacing = region->spacingX;		HX_STACK_VAR(xSpacing,"xSpacing");
	HX_STACK_LINE(71)
	int ySpacing = region->spacingY;		HX_STACK_VAR(ySpacing,"ySpacing");
	HX_STACK_LINE(73)
	int width = (  (((region->tileWidth == (int)0))) ? int(bitmapWidth) : int(region->tileWidth) );		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(74)
	int height = (  (((region->tileHeight == (int)0))) ? int(bitmapHeight) : int(region->tileHeight) );		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(76)
	Float pointX = (0.5 * width);		HX_STACK_VAR(pointX,"pointX");
	HX_STACK_LINE(77)
	Float pointY = (0.5 * height);		HX_STACK_VAR(pointY,"pointY");
	HX_STACK_LINE(79)
	if (((origin != null()))){
		HX_STACK_LINE(81)
		pointX = origin->x;
		HX_STACK_LINE(82)
		pointY = origin->y;
	}
	struct _Function_1_1{
		inline static ::String Block( int &width,int &startY,int &ySpacing,int &startX,int &endX,int &xSpacing,Float &pointY,int &endY,int &height,Float &pointX){
			HX_STACK_PUSH("*::closure","flixel/system/layer/TileSheetData.hx",85);
			{
				HX_STACK_LINE(85)
				Float hash = (int)23;		HX_STACK_VAR(hash,"hash");
				HX_STACK_LINE(85)
				hash = ((hash * (int)31) + width);
				HX_STACK_LINE(85)
				hash = ((hash * (int)31) + height);
				HX_STACK_LINE(85)
				hash = ((hash * (int)31) + startX);
				HX_STACK_LINE(85)
				hash = ((hash * (int)31) + startY);
				HX_STACK_LINE(85)
				hash = ((hash * (int)31) + endX);
				HX_STACK_LINE(85)
				hash = ((hash * (int)31) + endY);
				HX_STACK_LINE(85)
				hash = ((hash * (int)31) + xSpacing);
				HX_STACK_LINE(85)
				hash = ((hash * (int)31) + ySpacing);
				HX_STACK_LINE(85)
				hash = ((hash * (int)31) + pointX);
				HX_STACK_LINE(85)
				hash = ((hash * (int)31) + pointY);
				HX_STACK_LINE(85)
				return ::Std_obj::string(hash);
			}
			return null();
		}
	};
	HX_STACK_LINE(85)
	::String key = _Function_1_1::Block(width,startY,ySpacing,startX,endX,xSpacing,pointY,endY,height,pointX);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(86)
	if ((this->flxSpriteFrames->exists(key))){
		HX_STACK_LINE(87)
		return this->flxSpriteFrames->get(key);
	}
	HX_STACK_LINE(91)
	int numRows = region->get_numRows();		HX_STACK_VAR(numRows,"numRows");
	HX_STACK_LINE(92)
	int numCols = region->get_numCols();		HX_STACK_VAR(numCols,"numCols");
	HX_STACK_LINE(94)
	::flash::geom::Point tempPoint = origin;		HX_STACK_VAR(tempPoint,"tempPoint");
	HX_STACK_LINE(95)
	if (((origin == null()))){
		HX_STACK_LINE(96)
		tempPoint = ::flash::geom::Point_obj::__new(pointX,pointY);
	}
	HX_STACK_LINE(100)
	::flixel::system::layer::frames::FlxSpriteFrames spriteData = ::flixel::system::layer::frames::FlxSpriteFrames_obj::__new(key);		HX_STACK_VAR(spriteData,"spriteData");
	HX_STACK_LINE(102)
	::flixel::system::layer::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(103)
	::flash::geom::Rectangle tempRect;		HX_STACK_VAR(tempRect,"tempRect");
	HX_STACK_LINE(105)
	int spacedWidth = (width + xSpacing);		HX_STACK_VAR(spacedWidth,"spacedWidth");
	HX_STACK_LINE(106)
	int spacedHeight = (height + ySpacing);		HX_STACK_VAR(spacedHeight,"spacedHeight");
	HX_STACK_LINE(108)
	{
		HX_STACK_LINE(108)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = numRows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(108)
		while(((_g1 < _g))){
			HX_STACK_LINE(108)
			int j = (_g1)++;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = numCols;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(110)
				while(((_g3 < _g2))){
					HX_STACK_LINE(110)
					int i = (_g3)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(112)
					tempRect = ::flash::geom::Rectangle_obj::__new((startX + (i * spacedWidth)),(startY + (j * spacedHeight)),width,height);
					HX_STACK_LINE(113)
					frame = this->addSpriteSheetFrame(tempRect,tempPoint);
					HX_STACK_LINE(114)
					spriteData->addFrame(frame);
				}
			}
		}
	}
	HX_STACK_LINE(118)
	this->flxSpriteFrames->set(key,spriteData);
	HX_STACK_LINE(119)
	return spriteData;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,getSpriteSheetFrames,return )

::flixel::system::layer::frames::FlxFrame TileSheetData_obj::getFrame( ::String name){
	HX_STACK_PUSH("TileSheetData::getFrame","flixel/system/layer/TileSheetData.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(49)
	return this->flxFrames->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,getFrame,return )


TileSheetData_obj::TileSheetData_obj()
{
}

void TileSheetData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileSheetData);
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(frameNames,"frameNames");
	HX_MARK_MEMBER_NAME(flxFrames,"flxFrames");
	HX_MARK_MEMBER_NAME(flxSpriteFrames,"flxSpriteFrames");
	HX_MARK_MEMBER_NAME(tileSheet,"tileSheet");
	HX_MARK_END_CLASS();
}

void TileSheetData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(frameNames,"frameNames");
	HX_VISIT_MEMBER_NAME(flxFrames,"flxFrames");
	HX_VISIT_MEMBER_NAME(flxSpriteFrames,"flxSpriteFrames");
	HX_VISIT_MEMBER_NAME(tileSheet,"tileSheet");
}

Dynamic TileSheetData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFrame") ) { return getFrame_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onContext") ) { return onContext_dyn(); }
		if (HX_FIELD_EQ(inName,"flxFrames") ) { return flxFrames; }
		if (HX_FIELD_EQ(inName,"tileSheet") ) { return tileSheet; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameNames") ) { return frameNames; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTileRect") ) { return addTileRect_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsFrame") ) { return containsFrame_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"flxSpriteFrames") ) { return flxSpriteFrames; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addSpriteSheetFrame") ) { return addSpriteSheetFrame_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getSpriteSheetFrames") ) { return getSpriteSheetFrames_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addTexturePackerFrame") ) { return addTexturePackerFrame_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getTexturePackerFrames") ) { return getTexturePackerFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"getSpriteSheetFrameKey") ) { return getSpriteSheetFrameKey_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"destroyFrameBitmapDatas") ) { return destroyFrameBitmapDatas_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"containsSpriteSheetFrames") ) { return containsSpriteSheetFrames_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getKeyForSpriteSheetFrames") ) { return getKeyForSpriteSheetFrames_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileSheetData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"flxFrames") ) { flxFrames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileSheet") ) { tileSheet=inValue.Cast< ::flixel::system::layer::TileSheetExt >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameNames") ) { frameNames=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"flxSpriteFrames") ) { flxSpriteFrames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileSheetData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bitmap"));
	outFields->push(HX_CSTRING("frameNames"));
	outFields->push(HX_CSTRING("flxFrames"));
	outFields->push(HX_CSTRING("flxSpriteFrames"));
	outFields->push(HX_CSTRING("tileSheet"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroyFrameBitmapDatas"),
	HX_CSTRING("addTexturePackerFrame"),
	HX_CSTRING("getTexturePackerFrames"),
	HX_CSTRING("onContext"),
	HX_CSTRING("destroy"),
	HX_CSTRING("addTileRect"),
	HX_CSTRING("containsFrame"),
	HX_CSTRING("addSpriteSheetFrame"),
	HX_CSTRING("containsSpriteSheetFrames"),
	HX_CSTRING("getKeyForSpriteSheetFrames"),
	HX_CSTRING("getSpriteSheetFrameKey"),
	HX_CSTRING("getSpriteSheetFrames"),
	HX_CSTRING("getFrame"),
	HX_CSTRING("bitmap"),
	HX_CSTRING("frameNames"),
	HX_CSTRING("flxFrames"),
	HX_CSTRING("flxSpriteFrames"),
	HX_CSTRING("tileSheet"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileSheetData_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileSheetData_obj::__mClass,"__mClass");
};

Class TileSheetData_obj::__mClass;

void TileSheetData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.layer.TileSheetData"), hx::TCanCast< TileSheetData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TileSheetData_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace layer
