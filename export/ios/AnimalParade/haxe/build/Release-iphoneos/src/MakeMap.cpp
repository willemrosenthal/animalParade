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
HX_STACK_PUSH("MakeMap::new","MakeMap.hx",189);
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

::String MakeMap_obj::newMap( int Width,int Height,hx::Null< int >  __o_MinPatches,hx::Null< int >  __o_MaxPatches,hx::Null< int >  __o_PatchDepth,hx::Null< Float >  __o_PatchSpread){
int MinPatches = __o_MinPatches.Default(0);
int MaxPatches = __o_MaxPatches.Default(0);
int PatchDepth = __o_PatchDepth.Default(1);
Float PatchSpread = __o_PatchSpread.Default(1);
	HX_STACK_PUSH("MakeMap::newMap","MakeMap.hx",9);
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(MinPatches,"MinPatches");
	HX_STACK_ARG(MaxPatches,"MaxPatches");
	HX_STACK_ARG(PatchDepth,"PatchDepth");
	HX_STACK_ARG(PatchSpread,"PatchSpread");
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
			::MakeMap_obj::makePatces(MinPatches,MaxPatches,PatchDepth,PatchSpread);
		}
		HX_STACK_LINE(25)
		return ::MakeMap_obj::mapToString();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(MakeMap_obj,newMap,return )

Void MakeMap_obj::makePatces( int MinPatches,int MaxPatches,int PatchDepth,Float PatchSpread){
{
		HX_STACK_PUSH("MakeMap::makePatces","MakeMap.hx",28);
		HX_STACK_ARG(MinPatches,"MinPatches");
		HX_STACK_ARG(MaxPatches,"MaxPatches");
		HX_STACK_ARG(PatchDepth,"PatchDepth");
		HX_STACK_ARG(PatchSpread,"PatchSpread");
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
				percentArray->push((Float((int)1) / Float((((s * PatchSpread) + (int)1)))));
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
				::MakeMap_obj::patcheGrowth(growthPercent,null());
				HX_STACK_LINE(49)
				percentArray->shift();
			}
		}
		HX_STACK_LINE(51)
		::MakeMap_obj::patcheGrowth((int)1,true);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(MakeMap_obj,makePatces,(void))

Void MakeMap_obj::patcheGrowth( Float GrowthAmount,hx::Null< bool >  __o_Final){
bool Final = __o_Final.Default(false);
	HX_STACK_PUSH("MakeMap::patcheGrowth","MakeMap.hx",54);
	HX_STACK_ARG(GrowthAmount,"GrowthAmount");
	HX_STACK_ARG(Final,"Final");
{
		HX_STACK_LINE(55)
		int temp = (int)-1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::MakeMap_obj::map->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			while(((_g1 < _g))){
				HX_STACK_LINE(56)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = ::MakeMap_obj::map->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(57)
					while(((_g3 < _g2))){
						HX_STACK_LINE(57)
						int q = (_g3)++;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(58)
						if (((::MakeMap_obj::map->__get(n).StaticCast< Array< int > >()->__get(q) == ::MakeMap_obj::seedInt))){
							HX_STACK_LINE(58)
							::MakeMap_obj::checkSurrounding(n,q,GrowthAmount,temp);
						}
					}
				}
			}
		}
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::MakeMap_obj::map->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(63)
			while(((_g1 < _g))){
				HX_STACK_LINE(63)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(64)
				{
					HX_STACK_LINE(64)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = ::MakeMap_obj::map->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(64)
					while(((_g3 < _g2))){
						HX_STACK_LINE(64)
						int q = (_g3)++;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(65)
						if (((::MakeMap_obj::map->__get(n).StaticCast< Array< int > >()->__get(q) == temp))){
							HX_STACK_LINE(66)
							if ((!(Final))){
								HX_STACK_LINE(67)
								::MakeMap_obj::map->__get(n).StaticCast< Array< int > >()[q] = ::MakeMap_obj::seedInt;
							}
							HX_STACK_LINE(68)
							if ((Final)){
								HX_STACK_LINE(69)
								::MakeMap_obj::blendEdge(n,q);
							}
						}
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MakeMap_obj,patcheGrowth,(void))

Void MakeMap_obj::checkSurrounding( int N,int Q,Float GrowthAmount,int temp){
{
		HX_STACK_PUSH("MakeMap::checkSurrounding","MakeMap.hx",76);
		HX_STACK_ARG(N,"N");
		HX_STACK_ARG(Q,"Q");
		HX_STACK_ARG(GrowthAmount,"GrowthAmount");
		HX_STACK_ARG(temp,"temp");
		HX_STACK_LINE(77)
		bool up = false;		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(78)
		bool lf = false;		HX_STACK_VAR(lf,"lf");
		HX_STACK_LINE(79)
		bool rt = false;		HX_STACK_VAR(rt,"rt");
		HX_STACK_LINE(80)
		bool dn = false;		HX_STACK_VAR(dn,"dn");
		HX_STACK_LINE(82)
		if ((((N - (int)1) >= (int)0))){
			HX_STACK_LINE(82)
			up = true;
		}
		HX_STACK_LINE(83)
		if ((((N + (int)1) < ::MakeMap_obj::map->length))){
			HX_STACK_LINE(83)
			dn = true;
		}
		HX_STACK_LINE(84)
		if ((((Q - (int)1) >= (int)0))){
			HX_STACK_LINE(84)
			lf = true;
		}
		HX_STACK_LINE(85)
		if ((((Q + (int)1) < ::MakeMap_obj::map->__get((int)0).StaticCast< Array< int > >()->length))){
			HX_STACK_LINE(85)
			rt = true;
		}
		HX_STACK_LINE(87)
		if (((bool((bool((bool(up) && bool(lf))) && bool((::MakeMap_obj::map->__get((N - (int)1)).StaticCast< Array< int > >()->__get((Q - (int)1)) == ::MakeMap_obj::baseInt)))) && bool((::Math_obj::random() < GrowthAmount))))){
			HX_STACK_LINE(88)
			::MakeMap_obj::map->__get((N - (int)1)).StaticCast< Array< int > >()[(Q - (int)1)] = temp;
		}
		HX_STACK_LINE(90)
		if (((bool((bool(up) && bool((::MakeMap_obj::map->__get((N - (int)1)).StaticCast< Array< int > >()->__get(Q) == ::MakeMap_obj::baseInt)))) && bool((::Math_obj::random() < GrowthAmount))))){
			HX_STACK_LINE(91)
			::MakeMap_obj::map->__get((N - (int)1)).StaticCast< Array< int > >()[Q] = temp;
		}
		HX_STACK_LINE(93)
		if (((bool((bool((bool(up) && bool(rt))) && bool((::MakeMap_obj::map->__get((N - (int)1)).StaticCast< Array< int > >()->__get((Q + (int)1)) == ::MakeMap_obj::baseInt)))) && bool((::Math_obj::random() < GrowthAmount))))){
			HX_STACK_LINE(94)
			::MakeMap_obj::map->__get((N - (int)1)).StaticCast< Array< int > >()[(Q + (int)1)] = temp;
		}
		HX_STACK_LINE(96)
		if (((bool((bool(lf) && bool((::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()->__get((Q - (int)1)) == ::MakeMap_obj::baseInt)))) && bool((::Math_obj::random() < GrowthAmount))))){
			HX_STACK_LINE(97)
			::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[(Q - (int)1)] = temp;
		}
		HX_STACK_LINE(99)
		if (((bool((bool(rt) && bool((::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()->__get((Q + (int)1)) == ::MakeMap_obj::baseInt)))) && bool((::Math_obj::random() < GrowthAmount))))){
			HX_STACK_LINE(100)
			::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[(Q + (int)1)] = temp;
		}
		HX_STACK_LINE(102)
		if (((bool((bool((bool(dn) && bool(lf))) && bool((::MakeMap_obj::map->__get((N + (int)1)).StaticCast< Array< int > >()->__get((Q - (int)1)) == ::MakeMap_obj::baseInt)))) && bool((::Math_obj::random() < GrowthAmount))))){
			HX_STACK_LINE(103)
			::MakeMap_obj::map->__get((N + (int)1)).StaticCast< Array< int > >()[(Q - (int)1)] = temp;
		}
		HX_STACK_LINE(105)
		if (((bool((bool(dn) && bool((::MakeMap_obj::map->__get((N + (int)1)).StaticCast< Array< int > >()->__get(Q) == ::MakeMap_obj::baseInt)))) && bool((::Math_obj::random() < GrowthAmount))))){
			HX_STACK_LINE(106)
			::MakeMap_obj::map->__get((N + (int)1)).StaticCast< Array< int > >()[Q] = temp;
		}
		HX_STACK_LINE(108)
		if (((bool((bool((bool(dn) && bool(rt))) && bool((::MakeMap_obj::map->__get((N + (int)1)).StaticCast< Array< int > >()->__get((Q + (int)1)) == ::MakeMap_obj::baseInt)))) && bool((::Math_obj::random() < GrowthAmount))))){
			HX_STACK_LINE(109)
			::MakeMap_obj::map->__get((N + (int)1)).StaticCast< Array< int > >()[(Q + (int)1)] = temp;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(MakeMap_obj,checkSurrounding,(void))

Void MakeMap_obj::blendEdge( int N,int Q){
{
		HX_STACK_PUSH("MakeMap::blendEdge","MakeMap.hx",112);
		HX_STACK_ARG(N,"N");
		HX_STACK_ARG(Q,"Q");
		HX_STACK_LINE(113)
		int up = (int)0;		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(114)
		int lf = (int)0;		HX_STACK_VAR(lf,"lf");
		HX_STACK_LINE(115)
		int rt = (int)0;		HX_STACK_VAR(rt,"rt");
		HX_STACK_LINE(116)
		int dn = (int)0;		HX_STACK_VAR(dn,"dn");
		HX_STACK_LINE(118)
		if ((((N - (int)1) < (int)0))){
			HX_STACK_LINE(118)
			up = (int)-1;
		}
		HX_STACK_LINE(119)
		if ((((N + (int)1) >= ::MakeMap_obj::map->length))){
			HX_STACK_LINE(119)
			dn = (int)-1;
		}
		HX_STACK_LINE(120)
		if ((((Q - (int)1) < (int)0))){
			HX_STACK_LINE(120)
			lf = (int)-1;
		}
		HX_STACK_LINE(121)
		if ((((Q + (int)1) >= ::MakeMap_obj::map->__get((int)0).StaticCast< Array< int > >()->length))){
			HX_STACK_LINE(121)
			rt = (int)-1;
		}
		HX_STACK_LINE(125)
		if (((bool((up != (int)-1)) && bool((::MakeMap_obj::map->__get((N - (int)1)).StaticCast< Array< int > >()->__get(Q) != ::MakeMap_obj::baseInt))))){
			HX_STACK_LINE(126)
			up = (int)1;
		}
		HX_STACK_LINE(127)
		if (((bool((lf != (int)-1)) && bool((::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()->__get((Q - (int)1)) != ::MakeMap_obj::baseInt))))){
			HX_STACK_LINE(128)
			lf = (int)1;
		}
		HX_STACK_LINE(129)
		if (((bool((rt != (int)-1)) && bool((::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()->__get((Q + (int)1)) != ::MakeMap_obj::baseInt))))){
			HX_STACK_LINE(130)
			rt = (int)1;
		}
		HX_STACK_LINE(131)
		if (((bool((dn != (int)-1)) && bool((::MakeMap_obj::map->__get((N + (int)1)).StaticCast< Array< int > >()->__get(Q) != ::MakeMap_obj::baseInt))))){
			HX_STACK_LINE(132)
			dn = (int)1;
		}
		HX_STACK_LINE(135)
		if (((bool((bool((bool((up == (int)1)) && bool((lf == (int)1)))) && bool((rt == (int)1)))) && bool((dn == (int)1))))){
			HX_STACK_LINE(136)
			::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[Q] = (int)16;
		}
		else{
			HX_STACK_LINE(137)
			if (((bool((bool((bool((up == (int)1)) && bool((lf == (int)1)))) && bool((rt == (int)1)))) && bool((dn == (int)0))))){
				HX_STACK_LINE(138)
				::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[Q] = (int)4;
			}
			else{
				HX_STACK_LINE(139)
				if (((bool((bool((bool((up == (int)1)) && bool((lf == (int)1)))) && bool((rt == (int)0)))) && bool((dn == (int)1))))){
					HX_STACK_LINE(140)
					::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[Q] = (int)2;
				}
				else{
					HX_STACK_LINE(141)
					if (((bool((bool((bool((up == (int)1)) && bool((lf == (int)0)))) && bool((rt == (int)1)))) && bool((dn == (int)1))))){
						HX_STACK_LINE(142)
						::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[Q] = (int)3;
					}
					else{
						HX_STACK_LINE(143)
						if (((bool((bool((bool((up == (int)0)) && bool((lf == (int)1)))) && bool((rt == (int)1)))) && bool((dn == (int)1))))){
							HX_STACK_LINE(144)
							::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[Q] = (int)1;
						}
						else{
							HX_STACK_LINE(145)
							if (((bool((bool((bool((up == (int)1)) && bool((lf == (int)1)))) && bool((rt == (int)0)))) && bool((dn == (int)0))))){
								HX_STACK_LINE(146)
								::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[Q] = (int)6;
							}
							else{
								HX_STACK_LINE(147)
								if (((bool((bool((bool((up == (int)1)) && bool((lf == (int)0)))) && bool((rt == (int)1)))) && bool((dn == (int)0))))){
									HX_STACK_LINE(148)
									::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[Q] = (int)11;
								}
								else{
									HX_STACK_LINE(149)
									if (((bool((bool((bool((up == (int)0)) && bool((lf == (int)1)))) && bool((rt == (int)1)))) && bool((dn == (int)0))))){
										HX_STACK_LINE(150)
										::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[Q] = (int)5;
									}
									else{
										HX_STACK_LINE(151)
										if (((bool((bool((bool((up == (int)1)) && bool((lf == (int)0)))) && bool((rt == (int)0)))) && bool((dn == (int)1))))){
											HX_STACK_LINE(152)
											::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[Q] = (int)9;
										}
										else{
											HX_STACK_LINE(153)
											if (((bool((bool((bool((up == (int)0)) && bool((lf == (int)1)))) && bool((rt == (int)0)))) && bool((dn == (int)1))))){
												HX_STACK_LINE(154)
												::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[Q] = (int)8;
											}
											else{
												HX_STACK_LINE(155)
												if (((bool((bool((bool((up == (int)0)) && bool((lf == (int)0)))) && bool((rt == (int)1)))) && bool((dn == (int)1))))){
													HX_STACK_LINE(156)
													::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[Q] = (int)7;
												}
												else{
													HX_STACK_LINE(157)
													if (((bool((bool((bool((up == (int)0)) && bool((lf == (int)0)))) && bool((rt == (int)0)))) && bool((dn == (int)1))))){
														HX_STACK_LINE(158)
														::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[Q] = (int)10;
													}
													else{
														HX_STACK_LINE(159)
														if (((bool((bool((bool((up == (int)0)) && bool((lf == (int)0)))) && bool((rt == (int)1)))) && bool((dn == (int)0))))){
															HX_STACK_LINE(160)
															::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[Q] = (int)15;
														}
														else{
															HX_STACK_LINE(161)
															if (((bool((bool((bool((up == (int)0)) && bool((lf == (int)1)))) && bool((rt == (int)0)))) && bool((dn == (int)0))))){
																HX_STACK_LINE(162)
																::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[Q] = (int)12;
															}
															else{
																HX_STACK_LINE(163)
																if (((bool((bool((bool((up == (int)1)) && bool((lf == (int)0)))) && bool((rt == (int)0)))) && bool((dn == (int)0))))){
																	HX_STACK_LINE(164)
																	::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[Q] = (int)13;
																}
																else{
																	HX_STACK_LINE(165)
																	::MakeMap_obj::map->__get(N).StaticCast< Array< int > >()[Q] = (int)1;
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MakeMap_obj,blendEdge,(void))

Void MakeMap_obj::dispersePatches( int PatchNo){
{
		HX_STACK_PUSH("MakeMap::dispersePatches","MakeMap.hx",169);
		HX_STACK_ARG(PatchNo,"PatchNo");
		HX_STACK_LINE(170)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(170)
		while(((_g < PatchNo))){
			HX_STACK_LINE(170)
			int n = (_g)++;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(171)
			::MakeMap_obj::map->__get(::Std_obj::_int(::Math_obj::round((::Math_obj::random() * ((::MakeMap_obj::map->length - (int)1)))))).StaticCast< Array< int > >()[::Std_obj::_int(::Math_obj::round((::Math_obj::random() * ((::MakeMap_obj::map->__get((int)0).StaticCast< Array< int > >()->length - (int)1)))))] = ::MakeMap_obj::seedInt;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MakeMap_obj,dispersePatches,(void))

::String MakeMap_obj::mapToString( ){
	HX_STACK_PUSH("MakeMap::mapToString","MakeMap.hx",175);
	HX_STACK_LINE(176)
	::String mapString = HX_CSTRING("");		HX_STACK_VAR(mapString,"mapString");
	HX_STACK_LINE(177)
	{
		HX_STACK_LINE(177)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::MakeMap_obj::map->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(177)
		while(((_g1 < _g))){
			HX_STACK_LINE(177)
			int n = (_g1)++;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(178)
			hx::AddEq(mapString,::MakeMap_obj::map->__get(n).StaticCast< Array< int > >()->join(HX_CSTRING(",")));
			HX_STACK_LINE(179)
			if (((n < (::MakeMap_obj::map->length - (int)1)))){
				HX_STACK_LINE(180)
				hx::AddEq(mapString,HX_CSTRING("\n"));
			}
		}
	}
	HX_STACK_LINE(182)
	return mapString;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MakeMap_obj,mapToString,return )

Float MakeMap_obj::plusOrMinus( hx::Null< Float >  __o_Value){
Float Value = __o_Value.Default(1);
	HX_STACK_PUSH("MakeMap::plusOrMinus","MakeMap.hx",185);
	HX_STACK_ARG(Value,"Value");
{
		HX_STACK_LINE(185)
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
	case 9:
		if (HX_FIELD_EQ(inName,"blendEdge") ) { return blendEdge_dyn(); }
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
	HX_CSTRING("blendEdge"),
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
	baseInt= (int)14;
	seedInt= (int)16;
}

