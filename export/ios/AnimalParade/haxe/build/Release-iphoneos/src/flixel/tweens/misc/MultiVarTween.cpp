#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_MultiVarTween
#include <flixel/tweens/misc/MultiVarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace tweens{
namespace misc{

Void MultiVarTween_obj::__construct(Dynamic complete,hx::Null< int >  __o_type)
{
HX_STACK_PUSH("MultiVarTween::new","flixel/tweens/misc/MultiVarTween.hx",20);
int type = __o_type.Default(0);
{
	HX_STACK_LINE(21)
	this->_vars = Array_obj< ::String >::__new();
	HX_STACK_LINE(22)
	this->_start = Array_obj< Float >::__new();
	HX_STACK_LINE(23)
	this->_range = Array_obj< Float >::__new();
	HX_STACK_LINE(24)
	this->_isInt = Array_obj< bool >::__new();
	HX_STACK_LINE(26)
	super::__construct((int)0,type,complete,null());
}
;
	return null();
}

MultiVarTween_obj::~MultiVarTween_obj() { }

Dynamic MultiVarTween_obj::__CreateEmpty() { return  new MultiVarTween_obj; }
hx::ObjectPtr< MultiVarTween_obj > MultiVarTween_obj::__new(Dynamic complete,hx::Null< int >  __o_type)
{  hx::ObjectPtr< MultiVarTween_obj > result = new MultiVarTween_obj();
	result->__construct(complete,__o_type);
	return result;}

Dynamic MultiVarTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MultiVarTween_obj > result = new MultiVarTween_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void MultiVarTween_obj::update( ){
{
		HX_STACK_PUSH("MultiVarTween::update","flixel/tweens/misc/MultiVarTween.hx",94);
		HX_STACK_THIS(this);
		HX_STACK_LINE(95)
		this->super::update();
		HX_STACK_LINE(96)
		int i = this->_vars->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(97)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(98)
			if (((this->_object != null()))){
				HX_STACK_LINE(100)
				if ((!(this->_isInt->__get(i)))){
					HX_STACK_LINE(103)
					Dynamic o = this->_object;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(103)
					if (((o != null()))){
						HX_STACK_LINE(103)
						o->__SetField(this->_vars->__get(i),(this->_start->__get(i) + (this->_range->__get(i) * this->_t)),true);
					}
				}
				else{
					HX_STACK_LINE(107)
					Dynamic o = this->_object;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(107)
					if (((o != null()))){
						HX_STACK_LINE(107)
						o->__SetField(this->_vars->__get(i),::Std_obj::_int((this->_start->__get(i) + (this->_range->__get(i) * this->_t))),true);
					}
				}
			}
		}
	}
return null();
}


::flixel::tweens::misc::MultiVarTween MultiVarTween_obj::tween( Dynamic object,Dynamic properties,Float duration,Dynamic ease){
	HX_STACK_PUSH("MultiVarTween::tween","flixel/tweens/misc/MultiVarTween.hx",48);
	HX_STACK_THIS(this);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(properties,"properties");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(ease,"ease");
	HX_STACK_LINE(49)
	this->_object = object;
	HX_STACK_LINE(50)
	::flixel::util::FlxArrayUtil_obj::setLength_String(this->_vars,(int)0);
	HX_STACK_LINE(51)
	::flixel::util::FlxArrayUtil_obj::setLength_Float(this->_start,(int)0);
	HX_STACK_LINE(52)
	::flixel::util::FlxArrayUtil_obj::setLength_Float(this->_range,(int)0);
	HX_STACK_LINE(53)
	::flixel::util::FlxArrayUtil_obj::setLength_Bool(this->_isInt,(int)0);
	HX_STACK_LINE(54)
	this->_target = duration;
	HX_STACK_LINE(55)
	this->_ease = ease;
	HX_STACK_LINE(56)
	::String p;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(58)
	Array< ::String > fields = null();		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(59)
	if ((::Reflect_obj::isObject(properties))){
		HX_STACK_LINE(60)
		fields = ::Reflect_obj::fields(properties);
	}
	else{
		HX_STACK_LINE(64)
		hx::Throw (HX_CSTRING("Unsupported MultiVar properties container - use Object containing key/value pairs."));
	}
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		while(((_g < fields->length))){
			HX_STACK_LINE(68)
			::String p1 = fields->__get(_g);		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(68)
			++(_g);
			HX_STACK_LINE(70)
			if (((((  (((object == null()))) ? Dynamic(null()) : Dynamic(object->__Field(p1,true)) )) == null()))){
				HX_STACK_LINE(71)
				hx::Throw (((HX_CSTRING("The Object does not have the property \"") + p1) + HX_CSTRING("\", or it is not accessible.")));
			}
			HX_STACK_LINE(75)
			Dynamic a = (  (((object == null()))) ? Dynamic(null()) : Dynamic(object->__Field(p1,true)) );		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(77)
			if ((::Math_obj::isNaN(a))){
				HX_STACK_LINE(78)
				hx::Throw (((HX_CSTRING("The property \"") + p1) + HX_CSTRING("\" is not numeric.")));
			}
			HX_STACK_LINE(81)
			this->_vars->push(p1);
			HX_STACK_LINE(82)
			this->_start->push(a);
			HX_STACK_LINE(83)
			this->_range->push((((  (((properties == null()))) ? Dynamic(null()) : Dynamic(properties->__Field(p1,true)) )) - a));
			HX_STACK_LINE(84)
			this->_isInt->push((::Type_obj::_typeof(a) == ::ValueType_obj::TInt));
		}
	}
	HX_STACK_LINE(86)
	this->start();
	HX_STACK_LINE(87)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(MultiVarTween_obj,tween,return )

Void MultiVarTween_obj::destroy( ){
{
		HX_STACK_PUSH("MultiVarTween::destroy","flixel/tweens/misc/MultiVarTween.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_LINE(31)
		this->super::destroy();
		HX_STACK_LINE(32)
		this->_object = null();
		HX_STACK_LINE(34)
		this->_vars = null();
		HX_STACK_LINE(35)
		this->_start = null();
		HX_STACK_LINE(36)
		this->_range = null();
		HX_STACK_LINE(37)
		this->_isInt = null();
	}
return null();
}



MultiVarTween_obj::MultiVarTween_obj()
{
}

void MultiVarTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MultiVarTween);
	HX_MARK_MEMBER_NAME(_isInt,"_isInt");
	HX_MARK_MEMBER_NAME(_range,"_range");
	HX_MARK_MEMBER_NAME(_start,"_start");
	HX_MARK_MEMBER_NAME(_vars,"_vars");
	HX_MARK_MEMBER_NAME(_object,"_object");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MultiVarTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_isInt,"_isInt");
	HX_VISIT_MEMBER_NAME(_range,"_range");
	HX_VISIT_MEMBER_NAME(_start,"_start");
	HX_VISIT_MEMBER_NAME(_vars,"_vars");
	HX_VISIT_MEMBER_NAME(_object,"_object");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MultiVarTween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_vars") ) { return _vars; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_isInt") ) { return _isInt; }
		if (HX_FIELD_EQ(inName,"_range") ) { return _range; }
		if (HX_FIELD_EQ(inName,"_start") ) { return _start; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return _object; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MultiVarTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_vars") ) { _vars=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_isInt") ) { _isInt=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_range") ) { _range=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_start") ) { _start=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MultiVarTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_isInt"));
	outFields->push(HX_CSTRING("_range"));
	outFields->push(HX_CSTRING("_start"));
	outFields->push(HX_CSTRING("_vars"));
	outFields->push(HX_CSTRING("_object"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_isInt"),
	HX_CSTRING("_range"),
	HX_CSTRING("_start"),
	HX_CSTRING("_vars"),
	HX_CSTRING("_object"),
	HX_CSTRING("update"),
	HX_CSTRING("tween"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MultiVarTween_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MultiVarTween_obj::__mClass,"__mClass");
};

Class MultiVarTween_obj::__mClass;

void MultiVarTween_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.misc.MultiVarTween"), hx::TCanCast< MultiVarTween_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MultiVarTween_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
