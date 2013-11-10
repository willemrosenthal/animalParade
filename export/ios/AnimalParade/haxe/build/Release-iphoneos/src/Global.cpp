#include <hxcpp.h>

#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Global_obj::__construct()
{
HX_STACK_PUSH("Global::new","Global.hx",30);
{
}
;
	return null();
}

Global_obj::~Global_obj() { }

Dynamic Global_obj::__CreateEmpty() { return  new Global_obj; }
hx::ObjectPtr< Global_obj > Global_obj::__new()
{  hx::ObjectPtr< Global_obj > result = new Global_obj();
	result->__construct();
	return result;}

Dynamic Global_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Global_obj > result = new Global_obj();
	result->__construct();
	return result;}

bool Global_obj::ini;

::flixel::util::FlxPoint Global_obj::zeroPoint;

::String Global_obj::music;

Void Global_obj::levelStart( ){
{
		HX_STACK_PUSH("Global::levelStart","Global.hx",25);
		HX_STACK_LINE(25)
		::Global_obj::ini = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Global_obj,levelStart,(void))


Global_obj::Global_obj()
{
}

void Global_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Global);
	HX_MARK_END_CLASS();
}

void Global_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Global_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ini") ) { return ini; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return music; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zeroPoint") ) { return zeroPoint; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"levelStart") ) { return levelStart_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Global_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ini") ) { ini=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zeroPoint") ) { zeroPoint=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Global_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ini"),
	HX_CSTRING("zeroPoint"),
	HX_CSTRING("music"),
	HX_CSTRING("levelStart"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Global_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Global_obj::ini,"ini");
	HX_MARK_MEMBER_NAME(Global_obj::zeroPoint,"zeroPoint");
	HX_MARK_MEMBER_NAME(Global_obj::music,"music");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Global_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Global_obj::ini,"ini");
	HX_VISIT_MEMBER_NAME(Global_obj::zeroPoint,"zeroPoint");
	HX_VISIT_MEMBER_NAME(Global_obj::music,"music");
};

Class Global_obj::__mClass;

void Global_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Global"), hx::TCanCast< Global_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Global_obj::__boot()
{
	music= HX_CSTRING("");
}

