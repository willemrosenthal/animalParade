#include <hxcpp.h>

#ifndef INCLUDED_MakeMap
#include <MakeMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void MakeMap_obj::__construct()
{
HX_STACK_PUSH("MakeMap::new","MakeMap.hx",128);
{
}
;
	return null();
}

MakeMap_obj::~MakeMap_obj() { }

Dynamic MakeMap_obj::__CreateEmpty() { return  new MakeMap_obj; }
hx::ObjectPtr< MakeMap_obj > MakeMap_obj::__new()
{  hx::ObjectPtr< MakeMap_obj > result = new MakeMap_obj();
	result->__construct();
	return result;}

Dynamic MakeMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MakeMap_obj > result = new MakeMap_obj();
	result->__construct();
	return result;}

Array< ::Dynamic > MakeMap_obj::map;

int MakeMap_obj::baseInt;

int MakeMap_obj::seedInt;

::String MakeMap_obj::newMap( int Width,int Height,hx::Null< int >  __o_MinPatches,hx::Null< int >  __o_MaxPatches,hx::Null< int >  __o_PatchDepth){
int MinPatches = __o_MinPatches.Default(0);
int MaxPatches = __o_MaxPatches.Default(0);
int PatchDepth = __o_PatchDepth.Default(1);
	HX_STACK_PUSH("MakeMap::newMap","MakeMap.hx",9);
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(MinPatches,"MinPatches");
	HX_STACK_ARG(MaxPatches,"MaxPatches");
	HX_STACK_ARG(PatchDepth,"PatchDepth");
{
		HX_STACK_LINE(10)
		::MakeMap_obj::map = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(13)
		{
			HX_STACK_LINE(13)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(13)
			while(((_g < Height))){
				HX_STACK_LINE(13)
				int n = (_g)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(14)
				::MakeMap_obj::map->push(Array_obj< int >::__new());
				HX_STACK_LINE(15)
				{
					HX_STACK_LINE(15)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(15)
					while(((_g1 < Width))){
						HX_STACK_LINE(15)
						int q = (_g1)++;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(16)
						::MakeMap_obj::map->__get(n).StaticCast< Array< int > >()->push(::MakeMap_obj::baseInt);
					}
				}
			}
		}
		HX_STACK_LINE(21)
		if (((bool((MinPatches != (int)0)) && bool((MaxPatches != (int)0))))){
			HX_STACK_LINE(22)
			::MakeMap_obj::makePatces(MinPatches,MaxPatches,PatchDepth);
		}
		HX_STACK_LINE(25)
		return ::MakeMap_obj::mapToString();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(MakeMap_obj,newMap,return )

Void MakeMap_obj::makePatces( int MinPatches,int MaxPatches,int PatchDepth){
{
		HX_STACK_PUSH("MakeMap::makePatces","MakeMap.hx",28);
		HX_STACK_ARG(MinPatches,"MinPatches");
		HX_STACK_ARG(MaxPatches,"MaxPatches");
		HX_STACK_ARG(PatchDepth,"PatchDepth");
		HX_STACK_LINE(29)
		int patchNo = (::Math_obj::round((::Math_obj::random() * ((MaxPatches - MinPatches)))) + MinPatches);		HX_STACK_VAR(patchNo,"patchNo");
		HX_STACK_LINE(31)
		Float growthPercent = (int)0;		HX_STACK_VAR(growthPercent,"growthPercent");
		HX_STACK_LINE(32)
		Array< Float > percentArray = Array_obj< Float >::__new();		HX_STACK_VAR(percentArray,"percentArray");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(33)
			while(((_g < PatchDepth))){
				HX_STACK_LINE(33)
				int s = (_g)++;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(34)
				percentArray->push((Float((int)1) / Float(((s + (int)1)))));
			}
		}
		HX_STACK_LINE(38)
		::MakeMap_obj::dispersePatches(patchNo);
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(41)
			while(((_g < PatchDepth))){
				HX_STACK_LINE(41)
				int n = (_g)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(42)
				growthPercent = (int)0;
				HX_STACK_LINE(43)
				{
					HX_STACK_LINE(43)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					int _g1 = (percentArray->length - (int)1);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(43)
					while(((_g2 < _g1))){
						HX_STACK_LINE(43)
						int m = (_g2)++;		HX_STACK_VAR(m,"m");
						HX_STACK_LINE(44)
						hx::AddEq(growthPercent,percentArray->__get(m));
					}
				}
				HX_STACK_LINE(46)
				growthPercent = (Float(growthPercent) / Float(PatchDepth));
				HX_STACK_LINE(48)
				::MakeMap_obj::patcheGrowth(growthPercent);
				HX_STACK_LINE(49)
				percentArray->shift();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(MakeMap_obj,makePatces,(void))

Void MakeMap_obj::patcheGrowth( Float GrowthAmount){
{
		HX_STACK_PUSH("MakeMap::patcheGrowth","MakeMap.hx",53);
		HX_STACK_ARG(GrowthAmount,"GrowthAmount");
		HX_STACK_LINE(54)
		int temp = (int)-1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::MakeMap_obj::map->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(55)
			while(((_g1 < _g))){
				HX_STACK_LINE(55)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(56)
				{
					HX_STACK_LINE(56)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = ::MakeMap_obj::map->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(56)
					while(((_g3 < _g2))){
						HX_STACK_LINE(56)
						int q = (_g3)++;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(57)
						if (((::MakeMap_obj::map->__get(n).StaticCast< Array< int > >()->__get(q) == ::MakeMap_obj::seedInt))){
							HX_STACK_LINE(57)
							::MakeMap_obj::checkSurrounding(n,q,GrowthAmount,temp);
						}
					}
				}
			}
		}
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::MakeMap_obj::map->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(62)
			while(((_g1 < _g))){
				HX_STACK_LINE(62)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(63)
				{
					HX_STACK_LINE(63)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = ::MakeMap_obj::map->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(63)
					while(((_g3 < _g2))){
						HX_STACK_LINE(63)
						int q = (_g3)++;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(64)
						if (((::MakeMap_obj::map->__get(n).StaticCast< Array< int > >()->__get(q) == temp))){
							HX_STACK_LINE(64)
							::MakeMap_obj::map->__get(n).StaticCast< Array< int > >()[q] = ::MakeMap_obj::seedInt;
						}
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MakeMap_obj,patcheGrowth,(void))

Void MakeMap_obj::checkSurrounding( int N,int Q,Float GrowthAmount,int temp){
{
		HX_STACK_PUSH("MakeMap::checkSurrounding","MakeMap.hx",72);
		HX_STACK_ARG(N,"N");
		HX_STACK_ARG(Q,"Q");
		HX_STACK_ARG(GrowthAmount,"GrowthAmount");
		HX_STACK_ARG(temp,"temp");
		HX_STACK_LINE(73)
		bool up = false;		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(74)
		bool lf = false;		HX_STACK_VAR(lf,"lf");
		HX_STACK_LINE(75)
		bool rt = false;		HX_STACK_VAR(rt,"rt");
		HX_STACK_LINE(76)
		bool dn = false;		HX_STACK_VAR(dn,"dn");
		HX_STACK_LINE(78)
		if ((((N - (int)1) >= (int)0))){
			HX_STACK_LINE(78)
			up = true;
		}
		HX_STACK_LINE(79)
		if ((((N + (int)1) < ::MakeMap_obj::map->length))){
			HX_STACK_LINE(79)
			dn = true;
		}
		HX_STACK_LINE(80)
		if ((((Q - (int)1) >= (int)0))){
			HX_STACK_LINE(80)
			lf = true;
		}
		HX_STACK_LINE(81)
		if ((((Q + (int)1) < ::MakeMap_obj::map->__get((int)0).StaticCast< Array< int > >()->length))){
			HX_STACK_LINE(81)
			rt = true;
		}
		HX_STACK_LINE(83)
		if (((bool((bool((bool(up) && bool(lf))) && bool((::MakeMap_obj::map->__get((N - (int)1)).StaticCast< Array< int > >()->__get((Q - (int)1)) == ::MakeMap_obj::baseInt)))) && bool((::Math_obj::random() < GrowthAmount))))){
			HX_STACK_LINE(84)
			::MakeMap_obj::map->__get((N - (int)1)).StaticCast< Array< int > >()[(Q - (int)1)] = temp;
		}
		HX_STACK_LINE(86)
		if (((bool((bool(up) && bool((::MakeMap_obj::map->__get((N - (int)1)).StaticCast< Array< int > >()->__get(Q) == ::MakeMap_obj::baseInt)))) && bool((::Math_obj::random() < GrowthAmount))))){
			HX_STACK_LINE(87)
			::MakeMap_obj::map->__get((N - (int)1)).StaticCast< Array< int > >()[Q] = temp;
		}
		HX_STACK_LINE(89)
		if (((bool((bool((bool(up) && bool(rt))) && bool((::MakeMap_obj::map->__get((N - (int)1)).StaticCast< Array< int > >()->__get((Q + (int)1)) == ::MakeMap_obj::baseInt)))) && bool((::Math_obj::random() < GrowthAmount))))){
			HX_STACK_LINE(90)
			::MakeMap_obj::map->__get((N - (int)1)).StaticCast< Array< int > >()[(Q + (int)1)] = temp;
		}
		HX_STACK_LINE(92)
		if (((bool((bool(lf) && bool((::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()->__get((Q - (int)1)) == ::MakeMap_obj::baseInt)))) && bool((::Math_obj::random() < GrowthAmount))))){
			HX_STACK_LINE(93)
			::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[(Q - (int)1)] = temp;
		}
		HX_STACK_LINE(95)
		if (((bool((bool(rt) && bool((::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()->__get((Q + (int)1)) == ::MakeMap_obj::baseInt)))) && bool((::Math_obj::random() < GrowthAmount))))){
			HX_STACK_LINE(96)
			::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[(Q + (int)1)] = temp;
		}
		HX_STACK_LINE(98)
		if (((bool((bool((bool(dn) && bool(lf))) && bool((::MakeMap_obj::map->__get((N + (int)1)).StaticCast< Array< int > >()->__get((Q - (int)1)) == ::MakeMap_obj::baseInt)))) && bool((::Math_obj::random() < GrowthAmount))))){
			HX_STACK_LINE(99)
			::MakeMap_obj::map->__get((N + (int)1)).StaticCast< Array< int > >()[(Q - (int)1)] = temp;
		}
		HX_STACK_LINE(101)
		if (((bool((bool(dn) && bool((::MakeMap_obj::map->__get((N + (int)1)).StaticCast< Array< int > >()->__get(Q) == ::MakeMap_obj::baseInt)))) && bool((::Math_obj::random() < GrowthAmount))))){
			HX_STACK_LINE(102)
			::MakeMap_obj::map->__get((N + (int)1)).StaticCast< Array< int > >()[Q] = temp;
		}
		HX_STACK_LINE(104)
		if (((bool((bool((bool(dn) && bool(rt))) && bool((::MakeMap_obj::map->__get((N + (int)1)).StaticCast< Array< int > >()->__get((Q + (int)1)) == ::MakeMap_obj::baseInt)))) && bool((::Math_obj::random() < GrowthAmount))))){
			HX_STACK_LINE(105)
			::MakeMap_obj::map->__get((N + (int)1)).StaticCast< Array< int > >()[(Q + (int)1)] = temp;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(MakeMap_obj,checkSurrounding,(void))

Void MakeMap_obj::dispersePatches( int PatchNo){
{
		HX_STACK_PUSH("MakeMap::dispersePatches","MakeMap.hx",108);
		HX_STACK_ARG(PatchNo,"PatchNo");
		HX_STACK_LINE(109)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(109)
		while(((_g < PatchNo))){
			HX_STACK_LINE(109)
			int n = (_g)++;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(110)
			::MakeMap_obj::map->__get(::Std_obj::_int(::Math_obj::round((::Math_obj::random() * ((::MakeMap_obj::map->length - (int)1)))))).StaticCast< Array< int > >()[::Std_obj::_int(::Math_obj::round((::Math_obj::random() * ((::MakeMap_obj::map->__get((int)0).StaticCast< Array< int > >()->length - (int)1)))))] = ::MakeMap_obj::seedInt;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MakeMap_obj,dispersePatches,(void))

::String MakeMap_obj::mapToString( ){
	HX_STACK_PUSH("MakeMap::mapToString","MakeMap.hx",114);
	HX_STACK_LINE(115)
	::String mapString = HX_CSTRING("");		HX_STACK_VAR(mapString,"mapString");
	HX_STACK_LINE(116)
	{
		HX_STACK_LINE(116)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::MakeMap_obj::map->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(116)
		while(((_g1 < _g))){
			HX_STACK_LINE(116)
			int n = (_g1)++;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(117)
			hx::AddEq(mapString,::MakeMap_obj::map->__get(n).StaticCast< Array< int > >()->join(HX_CSTRING(",")));
			HX_STACK_LINE(118)
			if (((n < (::MakeMap_obj::map->length - (int)1)))){
				HX_STACK_LINE(119)
				hx::AddEq(mapString,HX_CSTRING("\n"));
			}
		}
	}
	HX_STACK_LINE(121)
	return mapString;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MakeMap_obj,mapToString,return )

Float MakeMap_obj::plusOrMinus( hx::Null< Float >  __o_Value){
Float Value = __o_Value.Default(1);
	HX_STACK_PUSH("MakeMap::plusOrMinus","MakeMap.hx",124);
	HX_STACK_ARG(Value,"Value");
{
		HX_STACK_LINE(124)
		return ((((::Math_obj::round(::Math_obj::random()) * (int)2) - (int)1)) * Value);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MakeMap_obj,plusOrMinus,return )


MakeMap_obj::MakeMap_obj()
{
}

void MakeMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MakeMap);
	HX_MARK_END_CLASS();
}

void MakeMap_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic MakeMap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"newMap") ) { return newMap_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"baseInt") ) { return baseInt; }
		if (HX_FIELD_EQ(inName,"seedInt") ) { return seedInt; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"makePatces") ) { return makePatces_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mapToString") ) { return mapToString_dyn(); }
		if (HX_FIELD_EQ(inName,"plusOrMinus") ) { return plusOrMinus_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"patcheGrowth") ) { return patcheGrowth_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dispersePatches") ) { return dispersePatches_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"checkSurrounding") ) { return checkSurrounding_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MakeMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"baseInt") ) { baseInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"seedInt") ) { seedInt=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MakeMap_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("map"),
	HX_CSTRING("baseInt"),
	HX_CSTRING("seedInt"),
	HX_CSTRING("newMap"),
	HX_CSTRING("makePatces"),
	HX_CSTRING("patcheGrowth"),
	HX_CSTRING("checkSurrounding"),
	HX_CSTRING("dispersePatches"),
	HX_CSTRING("mapToString"),
	HX_CSTRING("plusOrMinus"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MakeMap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MakeMap_obj::map,"map");
	HX_MARK_MEMBER_NAME(MakeMap_obj::baseInt,"baseInt");
	HX_MARK_MEMBER_NAME(MakeMap_obj::seedInt,"seedInt");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MakeMap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MakeMap_obj::map,"map");
	HX_VISIT_MEMBER_NAME(MakeMap_obj::baseInt,"baseInt");
	HX_VISIT_MEMBER_NAME(MakeMap_obj::seedInt,"seedInt");
};

Class MakeMap_obj::__mClass;

void MakeMap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MakeMap"), hx::TCanCast< MakeMap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MakeMap_obj::__boot()
{
	baseInt= (int)3;
	seedInt= (int)1;
}

