#ifndef INCLUDED_flixel_system_layer_Region
#define INCLUDED_flixel_system_layer_Region

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,system,layer,Region)
namespace flixel{
namespace system{
namespace layer{


class HXCPP_CLASS_ATTRIBUTES  Region_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Region_obj OBJ_;
		Region_obj();
		Void __construct(hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_tileWidth,hx::Null< int >  __o_tileHeight,hx::Null< int >  __o_spacingX,hx::Null< int >  __o_spacingY,hx::Null< int >  __o_width,hx::Null< int >  __o_height);

	public:
		static hx::ObjectPtr< Region_obj > __new(hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_tileWidth,hx::Null< int >  __o_tileHeight,hx::Null< int >  __o_spacingX,hx::Null< int >  __o_spacingY,hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Region_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Region"); }

		virtual ::flixel::system::layer::Region clone( );
		Dynamic clone_dyn();

		virtual int get_numCols( );
		Dynamic get_numCols_dyn();

		int numCols;
		virtual int get_numRows( );
		Dynamic get_numRows_dyn();

		int numRows;
		virtual int get_numTiles( );
		Dynamic get_numTiles_dyn();

		int numTiles;
		int spacingY;
		int spacingX;
		int tileHeight;
		int tileWidth;
		int height;
		int width;
		int startY;
		int startX;
};

} // end namespace flixel
} // end namespace system
} // end namespace layer

#endif /* INCLUDED_flixel_system_layer_Region */ 
