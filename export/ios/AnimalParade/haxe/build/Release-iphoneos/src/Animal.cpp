#include <hxcpp.h>

#ifndef INCLUDED_Animal
#include <Animal.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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

Void Animal_obj::__construct(Float X,Float Y)
{
HX_STACK_PUSH("Animal::new","Animal.hx",9);
{
	HX_STACK_LINE(10)
	super::__construct(X,Y,null());
	HX_STACK_LINE(12)
	this->loadGraphic(HX_CSTRING("assets/spaceman.png"),true,true,(int)16,null(),null(),null());
}
;
	return null();
}

Animal_obj::~Animal_obj() { }

Dynamic Animal_obj::__CreateEmpty() { return  new Animal_obj; }
hx::ObjectPtr< Animal_obj > Animal_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Animal_obj > result = new Animal_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Animal_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animal_obj > result = new Animal_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Animal_obj::update( ){
{
		HX_STACK_PUSH("Animal::update","Animal.hx",17);
		HX_STACK_THIS(this);
		HX_STACK_LINE(17)
		this->super::update();
	}
return null();
}



Animal_obj::Animal_obj()
{
}

void Animal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animal);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Animal_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Animal_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Animal_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Animal_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animal_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animal_obj::__mClass,"__mClass");
};

Class Animal_obj::__mClass;

void Animal_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Animal"), hx::TCanCast< Animal_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Animal_obj::__boot()
{
}

