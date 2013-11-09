#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
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
namespace flixel{
namespace util{

Void FlxCollision_obj::__construct()
{
	return null();
}

FlxCollision_obj::~FlxCollision_obj() { }

Dynamic FlxCollision_obj::__CreateEmpty() { return  new FlxCollision_obj; }
hx::ObjectPtr< FlxCollision_obj > FlxCollision_obj::__new()
{  hx::ObjectPtr< FlxCollision_obj > result = new FlxCollision_obj();
	result->__construct();
	return result;}

Dynamic FlxCollision_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCollision_obj > result = new FlxCollision_obj();
	result->__construct();
	return result;}

::flash::display::BitmapData FlxCollision_obj::debug;

bool FlxCollision_obj::pixelPerfectCheck( ::flixel::FlxSprite Contact,::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance,::flixel::FlxCamera Camera){
int AlphaTolerance = __o_AlphaTolerance.Default(255);
	HX_STACK_PUSH("FlxCollision::pixelPerfectCheck","flixel/util/FlxCollision.hx",42);
	HX_STACK_ARG(Contact,"Contact");
	HX_STACK_ARG(Target,"Target");
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(43)
		::flash::geom::Point pointA = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(pointA,"pointA");
		HX_STACK_LINE(44)
		::flash::geom::Point pointB = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(pointB,"pointB");
		HX_STACK_LINE(46)
		if (((Camera != null()))){
			HX_STACK_LINE(48)
			pointA->x = ((Contact->x - ::Std_obj::_int((Camera->scroll->x * Contact->scrollFactor->x))) - Contact->offset->x);
			HX_STACK_LINE(49)
			pointA->y = ((Contact->y - ::Std_obj::_int((Camera->scroll->y * Contact->scrollFactor->y))) - Contact->offset->y);
			HX_STACK_LINE(51)
			pointB->x = ((Target->x - ::Std_obj::_int((Camera->scroll->x * Target->scrollFactor->x))) - Target->offset->x);
			HX_STACK_LINE(52)
			pointB->y = ((Target->y - ::Std_obj::_int((Camera->scroll->y * Target->scrollFactor->y))) - Target->offset->y);
		}
		else{
			HX_STACK_LINE(56)
			pointA->x = ((Contact->x - ::Std_obj::_int((::flixel::FlxG_obj::camera->scroll->x * Contact->scrollFactor->x))) - Contact->offset->x);
			HX_STACK_LINE(57)
			pointA->y = ((Contact->y - ::Std_obj::_int((::flixel::FlxG_obj::camera->scroll->y * Contact->scrollFactor->y))) - Contact->offset->y);
			HX_STACK_LINE(59)
			pointB->x = ((Target->x - ::Std_obj::_int((::flixel::FlxG_obj::camera->scroll->x * Target->scrollFactor->x))) - Target->offset->x);
			HX_STACK_LINE(60)
			pointB->y = ((Target->y - ::Std_obj::_int((::flixel::FlxG_obj::camera->scroll->y * Target->scrollFactor->y))) - Target->offset->y);
		}
		HX_STACK_LINE(67)
		::flash::geom::Rectangle boundsA = ::flash::geom::Rectangle_obj::__new(pointA->x,pointA->y,Contact->frameWidth,Contact->frameHeight);		HX_STACK_VAR(boundsA,"boundsA");
		HX_STACK_LINE(68)
		::flash::geom::Rectangle boundsB = ::flash::geom::Rectangle_obj::__new(pointB->x,pointB->y,Target->frameWidth,Target->frameHeight);		HX_STACK_VAR(boundsB,"boundsB");
		HX_STACK_LINE(71)
		::flash::geom::Rectangle intersect = boundsA->intersection(boundsB);		HX_STACK_VAR(intersect,"intersect");
		HX_STACK_LINE(73)
		if (((bool((bool(intersect->isEmpty()) || bool((intersect->width == (int)0)))) || bool((intersect->height == (int)0))))){
			HX_STACK_LINE(74)
			return false;
		}
		HX_STACK_LINE(79)
		intersect->x = ::Math_obj::floor(intersect->x);
		HX_STACK_LINE(80)
		intersect->y = ::Math_obj::floor(intersect->y);
		HX_STACK_LINE(81)
		intersect->width = ::Math_obj::ceil(intersect->width);
		HX_STACK_LINE(82)
		intersect->height = ::Math_obj::ceil(intersect->height);
		HX_STACK_LINE(84)
		if ((intersect->isEmpty())){
			HX_STACK_LINE(85)
			return false;
		}
		HX_STACK_LINE(90)
		::flash::geom::Matrix matrixA = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrixA,"matrixA");
		HX_STACK_LINE(91)
		matrixA->translate(-(((intersect->x - boundsA->x))),-(((intersect->y - boundsA->y))));
		HX_STACK_LINE(93)
		::flash::geom::Matrix matrixB = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrixB,"matrixB");
		HX_STACK_LINE(94)
		matrixB->translate(-(((intersect->x - boundsB->x))),-(((intersect->y - boundsB->y))));
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(97)
			Contact->calcFrame(true);
		}
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(98)
			Target->calcFrame(true);
		}
		HX_STACK_LINE(101)
		::flash::display::BitmapData testA = Contact->framePixels;		HX_STACK_VAR(testA,"testA");
		HX_STACK_LINE(102)
		::flash::display::BitmapData testB = Target->framePixels;		HX_STACK_VAR(testB,"testB");
		HX_STACK_LINE(103)
		::flash::display::BitmapData overlapArea = ::flash::display::BitmapData_obj::__new(::Std_obj::_int(intersect->width),::Std_obj::_int(intersect->height),false,null(),null());		HX_STACK_VAR(overlapArea,"overlapArea");
		HX_STACK_LINE(111)
		int overlapWidth = overlapArea->get_width();		HX_STACK_VAR(overlapWidth,"overlapWidth");
		HX_STACK_LINE(112)
		int overlapHeight = overlapArea->get_height();		HX_STACK_VAR(overlapHeight,"overlapHeight");
		HX_STACK_LINE(113)
		int targetX;		HX_STACK_VAR(targetX,"targetX");
		HX_STACK_LINE(114)
		int targetY;		HX_STACK_VAR(targetY,"targetY");
		HX_STACK_LINE(115)
		int pixelColor;		HX_STACK_VAR(pixelColor,"pixelColor");
		HX_STACK_LINE(116)
		int pixelAlpha;		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
		HX_STACK_LINE(117)
		int transformedAlpha;		HX_STACK_VAR(transformedAlpha,"transformedAlpha");
		HX_STACK_LINE(118)
		int maxX = (testA->get_width() + (int)1);		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(119)
		int maxY = (testA->get_height() + (int)1);		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(121)
			while(((_g < maxX))){
				HX_STACK_LINE(121)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(123)
				targetX = ::Math_obj::floor((i + matrixA->tx));
				HX_STACK_LINE(125)
				if (((bool((targetX >= (int)0)) && bool((targetX < maxX))))){
					HX_STACK_LINE(127)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(127)
					while(((_g1 < maxY))){
						HX_STACK_LINE(127)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(129)
						targetY = ::Math_obj::floor((j + matrixA->ty));
						HX_STACK_LINE(131)
						if (((bool((targetY >= (int)0)) && bool((targetY < maxY))))){
							HX_STACK_LINE(133)
							pixelColor = testA->getPixel32(i,j);
							HX_STACK_LINE(134)
							pixelAlpha = (int((int(pixelColor) >> int((int)24))) & int((int)255));
							HX_STACK_LINE(136)
							if (((pixelAlpha >= AlphaTolerance))){
								HX_STACK_LINE(137)
								overlapArea->setPixel32(targetX,targetY,(int)-65536);
							}
							else{
								HX_STACK_LINE(141)
								overlapArea->setPixel32(targetX,targetY,(int)-1);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(149)
		maxX = (testB->get_width() + (int)1);
		HX_STACK_LINE(150)
		maxY = (testB->get_height() + (int)1);
		HX_STACK_LINE(151)
		int secondColor;		HX_STACK_VAR(secondColor,"secondColor");
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(153)
			while(((_g < maxX))){
				HX_STACK_LINE(153)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(155)
				targetX = ::Math_obj::floor((i + matrixB->tx));
				HX_STACK_LINE(157)
				if (((bool((targetX >= (int)0)) && bool((targetX < maxX))))){
					HX_STACK_LINE(159)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(159)
					while(((_g1 < maxY))){
						HX_STACK_LINE(159)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(161)
						targetY = ::Math_obj::floor((j + matrixB->ty));
						HX_STACK_LINE(163)
						if (((bool((targetY >= (int)0)) && bool((targetY < maxY))))){
							HX_STACK_LINE(165)
							pixelColor = testB->getPixel32(i,j);
							HX_STACK_LINE(166)
							pixelAlpha = (int((int(pixelColor) >> int((int)24))) & int((int)255));
							HX_STACK_LINE(168)
							if (((pixelAlpha >= AlphaTolerance))){
								HX_STACK_LINE(170)
								secondColor = overlapArea->getPixel32(targetX,targetY);
								HX_STACK_LINE(172)
								if (((secondColor == (int)-65536))){
									HX_STACK_LINE(173)
									overlapArea->setPixel32(targetX,targetY,(int)-16711681);
								}
								else{
									HX_STACK_LINE(177)
									overlapArea->setPixel32(targetX,targetY,(int)0);
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(189)
		::flixel::util::FlxCollision_obj::debug = overlapArea;
		HX_STACK_LINE(191)
		::flash::geom::Rectangle overlap = overlapArea->getColorBoundsRect((int)-1,(int)-16711681,null());		HX_STACK_VAR(overlap,"overlap");
		HX_STACK_LINE(192)
		overlap->offset(intersect->x,intersect->y);
		HX_STACK_LINE(194)
		if ((overlap->isEmpty())){
			HX_STACK_LINE(195)
			return false;
		}
		else{
			HX_STACK_LINE(199)
			return true;
		}
		HX_STACK_LINE(203)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectCheck,return )

bool FlxCollision_obj::pixelPerfectPointCheck( int PointX,int PointY,::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance){
int AlphaTolerance = __o_AlphaTolerance.Default(255);
	HX_STACK_PUSH("FlxCollision::pixelPerfectPointCheck","flixel/util/FlxCollision.hx",216);
	HX_STACK_ARG(PointX,"PointX");
	HX_STACK_ARG(PointY,"PointY");
	HX_STACK_ARG(Target,"Target");
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance");
{
		HX_STACK_LINE(218)
		if (((::flixel::util::FlxMath_obj::pointInCoordinates(PointX,PointY,::Math_obj::floor(Target->x),::Math_obj::floor(Target->y),::Std_obj::_int(Target->width),::Std_obj::_int(Target->height)) == false))){
			HX_STACK_LINE(219)
			return false;
		}
		struct _Function_1_1{
			inline static ::flash::display::BitmapData Block( ::flixel::FlxSprite &Target){
				HX_STACK_PUSH("*::closure","flixel/util/FlxCollision.hx",227);
				{
					HX_STACK_LINE(227)
					::flash::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
					HX_STACK_LINE(227)
					if (((Target->frame != null()))){
						HX_STACK_LINE(227)
						if (((bool((Target->facing == (int)1)) && bool((Target->flipped > (int)0))))){
							HX_STACK_LINE(227)
							frameBmd = Target->frame->getHReversedBitmap();
						}
						else{
							HX_STACK_LINE(227)
							frameBmd = Target->frame->getBitmap();
						}
					}
					HX_STACK_LINE(227)
					return frameBmd;
				}
				return null();
			}
		};
		HX_STACK_LINE(227)
		::flash::display::BitmapData test = _Function_1_1::Block(Target);		HX_STACK_VAR(test,"test");
		HX_STACK_LINE(230)
		int pixelAlpha = (int)0;		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
		HX_STACK_LINE(231)
		pixelAlpha = (int((int(test->getPixel32(::Math_obj::floor((PointX - Target->x)),::Math_obj::floor((PointY - Target->y)))) >> int((int)24))) & int((int)255));
		HX_STACK_LINE(234)
		pixelAlpha = ::Std_obj::_int((pixelAlpha * Target->alpha));
		HX_STACK_LINE(238)
		if (((pixelAlpha >= AlphaTolerance))){
			HX_STACK_LINE(239)
			return true;
		}
		else{
			HX_STACK_LINE(243)
			return false;
		}
		HX_STACK_LINE(238)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectPointCheck,return )

::flixel::group::FlxGroup FlxCollision_obj::createCameraWall( ::flixel::FlxCamera Camera,int Placement,int Thickness,hx::Null< bool >  __o_AdjustWorldBounds){
bool AdjustWorldBounds = __o_AdjustWorldBounds.Default(false);
	HX_STACK_PUSH("FlxCollision::createCameraWall","flixel/util/FlxCollision.hx",258);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(Placement,"Placement");
	HX_STACK_ARG(Thickness,"Thickness");
	HX_STACK_ARG(AdjustWorldBounds,"AdjustWorldBounds");
{
		HX_STACK_LINE(259)
		::flixel::tile::FlxTileblock left = null();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(260)
		::flixel::tile::FlxTileblock right = null();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(261)
		::flixel::tile::FlxTileblock top = null();		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(262)
		::flixel::tile::FlxTileblock bottom = null();		HX_STACK_VAR(bottom,"bottom");
		HX_STACK_LINE(264)
		switch( (int)(Placement)){
			case (int)0: {
				HX_STACK_LINE(267)
				left = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor((Camera->x - Thickness)),::Math_obj::floor((Camera->y + Thickness)),Thickness,(Camera->height - (Thickness * (int)2)));
				HX_STACK_LINE(268)
				right = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor((Camera->x + Camera->width)),::Math_obj::floor((Camera->y + Thickness)),Thickness,(Camera->height - (Thickness * (int)2)));
				HX_STACK_LINE(269)
				top = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor((Camera->x - Thickness)),::Math_obj::floor((Camera->y - Thickness)),(Camera->width + (Thickness * (int)2)),Thickness);
				HX_STACK_LINE(270)
				bottom = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor((Camera->x - Thickness)),Camera->height,(Camera->width + (Thickness * (int)2)),Thickness);
				HX_STACK_LINE(272)
				if ((AdjustWorldBounds)){
					HX_STACK_LINE(274)
					::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(274)
					_this->x = (Camera->x - Thickness);
					HX_STACK_LINE(274)
					_this->y = (Camera->y - Thickness);
					HX_STACK_LINE(274)
					_this->width = (Camera->width + (Thickness * (int)2));
					HX_STACK_LINE(274)
					_this->height = (Camera->height + (Thickness * (int)2));
					HX_STACK_LINE(274)
					_this;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(277)
				left = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor(Camera->x),::Math_obj::floor((Camera->y + Thickness)),Thickness,(Camera->height - (Thickness * (int)2)));
				HX_STACK_LINE(278)
				right = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor(((Camera->x + Camera->width) - Thickness)),::Math_obj::floor((Camera->y + Thickness)),Thickness,(Camera->height - (Thickness * (int)2)));
				HX_STACK_LINE(279)
				top = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor(Camera->x),::Math_obj::floor(Camera->y),Camera->width,Thickness);
				HX_STACK_LINE(280)
				bottom = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor(Camera->x),(Camera->height - Thickness),Camera->width,Thickness);
				HX_STACK_LINE(282)
				if ((AdjustWorldBounds)){
					HX_STACK_LINE(284)
					::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(284)
					_this->x = Camera->x;
					HX_STACK_LINE(284)
					_this->y = Camera->y;
					HX_STACK_LINE(284)
					_this->width = Camera->width;
					HX_STACK_LINE(284)
					_this->height = Camera->height;
					HX_STACK_LINE(284)
					_this;
				}
			}
			;break;
		}
		HX_STACK_LINE(288)
		::flixel::group::FlxGroup result = ::flixel::group::FlxGroup_obj::__new((int)4);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(290)
		result->add(left);
		HX_STACK_LINE(291)
		result->add(right);
		HX_STACK_LINE(292)
		result->add(top);
		HX_STACK_LINE(293)
		result->add(bottom);
		HX_STACK_LINE(295)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,createCameraWall,return )


FlxCollision_obj::FlxCollision_obj()
{
}

void FlxCollision_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCollision);
	HX_MARK_END_CLASS();
}

void FlxCollision_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxCollision_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createCameraWall") ) { return createCameraWall_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pixelPerfectCheck") ) { return pixelPerfectCheck_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"pixelPerfectPointCheck") ) { return pixelPerfectPointCheck_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCollision_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxCollision_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("debug"),
	HX_CSTRING("pixelPerfectCheck"),
	HX_CSTRING("pixelPerfectPointCheck"),
	HX_CSTRING("createCameraWall"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::debug,"debug");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::debug,"debug");
};

Class FlxCollision_obj::__mClass;

void FlxCollision_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxCollision"), hx::TCanCast< FlxCollision_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxCollision_obj::__boot()
{
	debug= ::flash::display::BitmapData_obj::__new((int)1,(int)1,false,null(),null());
}

} // end namespace flixel
} // end namespace util
