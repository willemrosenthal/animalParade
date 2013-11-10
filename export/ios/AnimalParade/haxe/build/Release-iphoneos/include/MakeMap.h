#ifndef INCLUDED_MakeMap
#define INCLUDED_MakeMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(MakeMap)


class HXCPP_CLASS_ATTRIBUTES  MakeMap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MakeMap_obj OBJ_;
		MakeMap_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MakeMap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MakeMap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MakeMap"); }

		static Array< ::Dynamic > map;
		static int baseInt;
		static int seedInt;
		static ::String newMap( int Width,int Height,hx::Null< int >  MinPatches,hx::Null< int >  MaxPatches,hx::Null< int >  PatchDepth,hx::Null< Float >  PatchSpread);
		static Dynamic newMap_dyn();

		static Void makePatces( int MinPatches,int MaxPatches,int PatchDepth,Float PatchSpread);
		static Dynamic makePatces_dyn();

		static Void patcheGrowth( Float GrowthAmount,hx::Null< bool >  Final);
		static Dynamic patcheGrowth_dyn();

		static Void checkSurrounding( int N,int Q,Float GrowthAmount,int temp);
		static Dynamic checkSurrounding_dyn();

		static Void blendEdge( int N,int Q);
		static Dynamic blendEdge_dyn();

		static Void dispersePatches( int PatchNo);
		static Dynamic dispersePatches_dyn();

		static ::String mapToString( );
		static Dynamic mapToString_dyn();

		static Float plusOrMinus( hx::Null< Float >  Value);
		static Dynamic plusOrMinus_dyn();

};


#endif /* INCLUDED_MakeMap */ 
