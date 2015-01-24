#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__v2_AssetType
#include <openfl/_v2/AssetType.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
namespace flixel{
namespace tile{

Void FlxBaseTilemap_obj::__construct()
{
HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","new",0x601e788b,"flixel.tile.FlxBaseTilemap.new","flixel/tile/FlxBaseTilemap.hx",12,0x0139d8e5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(76)
	this->_collideIndex = (int)0;
	HX_STACK_LINE(75)
	this->_drawIndex = (int)0;
	HX_STACK_LINE(69)
	this->_startingIndex = (int)0;
	HX_STACK_LINE(23)
	this->totalTiles = (int)0;
	HX_STACK_LINE(21)
	this->heightInTiles = (int)0;
	HX_STACK_LINE(19)
	this->widthInTiles = (int)0;
	HX_STACK_LINE(17)
	this->_auto = ::flixel::tile::FlxTilemapAutoTiling_obj::OFF;
	HX_STACK_LINE(137)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(139)
	this->flixelType = (int)3;
	HX_STACK_LINE(140)
	this->set_immovable(true);
	HX_STACK_LINE(141)
	this->set_moves(false);
}
;
	return null();
}

//FlxBaseTilemap_obj::~FlxBaseTilemap_obj() { }

Dynamic FlxBaseTilemap_obj::__CreateEmpty() { return  new FlxBaseTilemap_obj; }
hx::ObjectPtr< FlxBaseTilemap_obj > FlxBaseTilemap_obj::__new()
{  hx::ObjectPtr< FlxBaseTilemap_obj > result = new FlxBaseTilemap_obj();
	result->__construct();
	return result;}

Dynamic FlxBaseTilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBaseTilemap_obj > result = new FlxBaseTilemap_obj();
	result->__construct();
	return result;}

Void FlxBaseTilemap_obj::updateTile( int Index){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","updateTile",0x4985390c,"flixel.tile.FlxBaseTilemap.updateTile","flixel/tile/FlxBaseTilemap.hx",83,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(83)
		HX_STACK_DO_THROW(HX_CSTRING("updateTile must be implemented"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,updateTile,(void))

Void FlxBaseTilemap_obj::cacheGraphics( int TileWidth,int TileHeight,Dynamic TileGraphic){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","cacheGraphics",0x589e0d18,"flixel.tile.FlxBaseTilemap.cacheGraphics","flixel/tile/FlxBaseTilemap.hx",88,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(TileWidth,"TileWidth")
		HX_STACK_ARG(TileHeight,"TileHeight")
		HX_STACK_ARG(TileGraphic,"TileGraphic")
		HX_STACK_LINE(88)
		HX_STACK_DO_THROW(HX_CSTRING("cacheGraphics must be implemented"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,cacheGraphics,(void))

Void FlxBaseTilemap_obj::initTileObjects( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","initTileObjects",0x1ec17ac1,"flixel.tile.FlxBaseTilemap.initTileObjects","flixel/tile/FlxBaseTilemap.hx",93,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		HX_STACK_DO_THROW(HX_CSTRING("initTileObjects must be implemented"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,initTileObjects,(void))

Void FlxBaseTilemap_obj::updateMap( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","updateMap",0xe833827e,"flixel.tile.FlxBaseTilemap.updateMap","flixel/tile/FlxBaseTilemap.hx",98,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		HX_STACK_DO_THROW(HX_CSTRING("updateMap must be implemented"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,updateMap,(void))

Void FlxBaseTilemap_obj::computeDimensions( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","computeDimensions",0xc850220f,"flixel.tile.FlxBaseTilemap.computeDimensions","flixel/tile/FlxBaseTilemap.hx",103,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		HX_STACK_DO_THROW(HX_CSTRING("computeDimensions must be implemented"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,computeDimensions,(void))

int FlxBaseTilemap_obj::getTileIndexByCoords( ::flixel::math::FlxPoint Coord){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTileIndexByCoords",0x5f0cf078,"flixel.tile.FlxBaseTilemap.getTileIndexByCoords","flixel/tile/FlxBaseTilemap.hx",107,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Coord,"Coord")
	HX_STACK_LINE(108)
	HX_STACK_DO_THROW(HX_CSTRING("getTileIndexByCoords must be implemented"));
	HX_STACK_LINE(109)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileIndexByCoords,return )

::flixel::math::FlxPoint FlxBaseTilemap_obj::getTileCoordsByIndex( int Index,hx::Null< bool >  __o_Midpoint){
bool Midpoint = __o_Midpoint.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTileCoordsByIndex",0x89a6db2e,"flixel.tile.FlxBaseTilemap.getTileCoordsByIndex","flixel/tile/FlxBaseTilemap.hx",113,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Midpoint,"Midpoint")
{
		HX_STACK_LINE(114)
		HX_STACK_DO_THROW(HX_CSTRING("getTileCoordsByIndex must be implemented"));
		HX_STACK_LINE(115)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseTilemap_obj,getTileCoordsByIndex,return )

bool FlxBaseTilemap_obj::ray( ::flixel::math::FlxPoint Start,::flixel::math::FlxPoint End,::flixel::math::FlxPoint Result,hx::Null< Float >  __o_Resolution){
Float Resolution = __o_Resolution.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","ray",0x60217e15,"flixel.tile.FlxBaseTilemap.ray","flixel/tile/FlxBaseTilemap.hx",119,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
	HX_STACK_ARG(Result,"Result")
	HX_STACK_ARG(Resolution,"Resolution")
{
		HX_STACK_LINE(120)
		HX_STACK_DO_THROW(HX_CSTRING("ray must be implemented"));
		HX_STACK_LINE(121)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,ray,return )

bool FlxBaseTilemap_obj::overlapsWithCallback( ::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  __o_FlipCallbackParams,::flixel::math::FlxPoint Position){
bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","overlapsWithCallback",0x90f43a8c,"flixel.tile.FlxBaseTilemap.overlapsWithCallback","flixel/tile/FlxBaseTilemap.hx",125,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(FlipCallbackParams,"FlipCallbackParams")
	HX_STACK_ARG(Position,"Position")
{
		HX_STACK_LINE(126)
		HX_STACK_DO_THROW(HX_CSTRING("overlapsWithCallback must be implemented"));
		HX_STACK_LINE(127)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,overlapsWithCallback,return )

Void FlxBaseTilemap_obj::setDirty( hx::Null< bool >  __o_Dirty){
bool Dirty = __o_Dirty.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","setDirty",0x31f19505,"flixel.tile.FlxBaseTilemap.setDirty","flixel/tile/FlxBaseTilemap.hx",132,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Dirty,"Dirty")
{
		HX_STACK_LINE(132)
		HX_STACK_DO_THROW(HX_CSTRING("setDirty must be implemented"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,setDirty,(void))

Void FlxBaseTilemap_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","destroy",0x44ffc6a5,"flixel.tile.FlxBaseTilemap.destroy","flixel/tile/FlxBaseTilemap.hx",145,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		this->_data = null();
		HX_STACK_LINE(147)
		this->super::destroy();
	}
return null();
}


::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFromCSV( ::String MapData,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","loadMapFromCSV",0xbac5ecbb,"flixel.tile.FlxBaseTilemap.loadMapFromCSV","flixel/tile/FlxBaseTilemap.hx",170,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MapData,"MapData")
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(172)
		if ((::openfl::_v2::Assets_obj::exists(MapData,null()))){
			HX_STACK_LINE(174)
			::String _g = ::openfl::_v2::Assets_obj::getText(MapData);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(174)
			MapData = _g;
		}
		HX_STACK_LINE(178)
		Array< int > _g1 = Array_obj< int >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(178)
		this->_data = _g1;
		HX_STACK_LINE(179)
		Array< ::String > columns;		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(181)
		::EReg regex = ::EReg_obj::__new(HX_CSTRING("[ \t]*((\r\n)|\r|\n)[ \t]*"),HX_CSTRING("g"));		HX_STACK_VAR(regex,"regex");
		HX_STACK_LINE(182)
		Array< ::String > lines = regex->split(MapData);		HX_STACK_VAR(lines,"lines");
		HX_STACK_LINE(183)
		Array< ::String > rows = Array_obj< ::String >::__new();		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(184)
			while((true)){
				HX_STACK_LINE(184)
				if ((!(((_g < lines->length))))){
					HX_STACK_LINE(184)
					break;
				}
				HX_STACK_LINE(184)
				::String s = lines->__get(_g);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(184)
				++(_g);
				HX_STACK_LINE(186)
				if (((s != HX_CSTRING("")))){
					HX_STACK_LINE(186)
					rows->push(s);
				}
			}
		}
		HX_STACK_LINE(189)
		this->heightInTiles = rows->length;
		HX_STACK_LINE(190)
		this->widthInTiles = (int)0;
		HX_STACK_LINE(191)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(192)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(194)
		while((true)){
			HX_STACK_LINE(194)
			if ((!(((row < this->heightInTiles))))){
				HX_STACK_LINE(194)
				break;
			}
			HX_STACK_LINE(196)
			int _g2 = (row)++;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(196)
			Array< ::String > _g3 = rows->__get(_g2).split(HX_CSTRING(","));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(196)
			columns = _g3;
			HX_STACK_LINE(198)
			if (((columns->length < (int)1))){
				HX_STACK_LINE(200)
				this->heightInTiles = (this->heightInTiles - (int)1);
				HX_STACK_LINE(201)
				continue;
			}
			HX_STACK_LINE(203)
			if (((this->widthInTiles == (int)0))){
				HX_STACK_LINE(205)
				this->widthInTiles = columns->length;
			}
			HX_STACK_LINE(207)
			column = (int)0;
			HX_STACK_LINE(209)
			while((true)){
				HX_STACK_LINE(209)
				if ((!(((column < this->widthInTiles))))){
					HX_STACK_LINE(209)
					break;
				}
				HX_STACK_LINE(212)
				int curTile = ::Std_obj::parseInt(columns->__get(column));		HX_STACK_VAR(curTile,"curTile");
				HX_STACK_LINE(214)
				if (((curTile < (int)0))){
					HX_STACK_LINE(217)
					curTile = (int)0;
				}
				HX_STACK_LINE(240)
				this->_data->push(curTile);
				HX_STACK_LINE(241)
				(column)++;
			}
		}
		HX_STACK_LINE(247)
		this->loadMapHelper(TileGraphic,TileWidth,TileHeight,AutoTile,StartingIndex,DrawIndex,CollideIndex);
		HX_STACK_LINE(248)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(FlxBaseTilemap_obj,loadMapFromCSV,return )

::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFromArray( Array< int > MapData,int WidthInTiles,int HeightInTiles,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","loadMapFromArray",0x576cd9ce,"flixel.tile.FlxBaseTilemap.loadMapFromArray","flixel/tile/FlxBaseTilemap.hx",273,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MapData,"MapData")
	HX_STACK_ARG(WidthInTiles,"WidthInTiles")
	HX_STACK_ARG(HeightInTiles,"HeightInTiles")
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(274)
		this->widthInTiles = WidthInTiles;
		HX_STACK_LINE(275)
		this->heightInTiles = HeightInTiles;
		HX_STACK_LINE(276)
		Array< int > _g = MapData->copy();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(276)
		this->_data = _g;
		HX_STACK_LINE(278)
		this->loadMapHelper(TileGraphic,TileWidth,TileHeight,AutoTile,StartingIndex,DrawIndex,CollideIndex);
		HX_STACK_LINE(279)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC10(FlxBaseTilemap_obj,loadMapFromArray,return )

::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFrom2DArray( Array< ::Dynamic > MapData,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","loadMapFrom2DArray",0xb01a13fc,"flixel.tile.FlxBaseTilemap.loadMapFrom2DArray","flixel/tile/FlxBaseTilemap.hx",302,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MapData,"MapData")
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(303)
		this->widthInTiles = MapData->__get((int)0).StaticCast< Array< int > >()->length;
		HX_STACK_LINE(304)
		this->heightInTiles = MapData->length;
		HX_STACK_LINE(305)
		Array< int > _g = ::flixel::util::FlxArrayUtil_obj::flatten2DArray_Int(MapData);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(305)
		this->_data = _g;
		HX_STACK_LINE(307)
		this->loadMapHelper(TileGraphic,TileWidth,TileHeight,AutoTile,StartingIndex,DrawIndex,CollideIndex);
		HX_STACK_LINE(308)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(FlxBaseTilemap_obj,loadMapFrom2DArray,return )

Void FlxBaseTilemap_obj::loadMapHelper( Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","loadMapHelper",0xc59c560f,"flixel.tile.FlxBaseTilemap.loadMapHelper","flixel/tile/FlxBaseTilemap.hx",313,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(314)
		this->totalTiles = this->_data->length;
		HX_STACK_LINE(315)
		if (((AutoTile == null()))){
			HX_STACK_LINE(315)
			this->_auto = ::flixel::tile::FlxTilemapAutoTiling_obj::OFF;
		}
		else{
			HX_STACK_LINE(315)
			this->_auto = AutoTile;
		}
		HX_STACK_LINE(316)
		if (((StartingIndex <= (int)0))){
			HX_STACK_LINE(316)
			this->_startingIndex = (int)0;
		}
		else{
			HX_STACK_LINE(316)
			this->_startingIndex = StartingIndex;
		}
		HX_STACK_LINE(318)
		if (((this->_auto != ::flixel::tile::FlxTilemapAutoTiling_obj::OFF))){
			HX_STACK_LINE(320)
			this->_startingIndex = (int)1;
			HX_STACK_LINE(321)
			DrawIndex = (int)1;
			HX_STACK_LINE(322)
			CollideIndex = (int)1;
		}
		HX_STACK_LINE(325)
		this->_drawIndex = DrawIndex;
		HX_STACK_LINE(326)
		this->_collideIndex = CollideIndex;
		HX_STACK_LINE(328)
		this->applyAutoTile();
		HX_STACK_LINE(329)
		this->applyCustomRemap();
		HX_STACK_LINE(330)
		this->randomizeIndices();
		HX_STACK_LINE(331)
		this->cacheGraphics(TileWidth,TileHeight,TileGraphic);
		HX_STACK_LINE(332)
		this->postGraphicLoad();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(FlxBaseTilemap_obj,loadMapHelper,(void))

Void FlxBaseTilemap_obj::postGraphicLoad( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","postGraphicLoad",0x0dc00119,"flixel.tile.FlxBaseTilemap.postGraphicLoad","flixel/tile/FlxBaseTilemap.hx",336,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(337)
		this->initTileObjects();
		HX_STACK_LINE(338)
		this->computeDimensions();
		HX_STACK_LINE(339)
		this->updateMap();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,postGraphicLoad,(void))

Void FlxBaseTilemap_obj::applyAutoTile( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","applyAutoTile",0xcc60c5b6,"flixel.tile.FlxBaseTilemap.applyAutoTile","flixel/tile/FlxBaseTilemap.hx",345,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(345)
		if (((this->_auto != ::flixel::tile::FlxTilemapAutoTiling_obj::OFF))){
			HX_STACK_LINE(347)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(348)
			while((true)){
				HX_STACK_LINE(348)
				if ((!(((i < this->totalTiles))))){
					HX_STACK_LINE(348)
					break;
				}
				HX_STACK_LINE(350)
				int _g = (i)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(350)
				this->autoTile(_g);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,applyAutoTile,(void))

Void FlxBaseTilemap_obj::applyCustomRemap( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","applyCustomRemap",0x2fd5c57f,"flixel.tile.FlxBaseTilemap.applyCustomRemap","flixel/tile/FlxBaseTilemap.hx",356,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(357)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(359)
		if (((this->customTileRemap != null()))){
			HX_STACK_LINE(361)
			while((true)){
				HX_STACK_LINE(361)
				if ((!(((i < this->totalTiles))))){
					HX_STACK_LINE(361)
					break;
				}
				HX_STACK_LINE(363)
				int oldIndex = this->_data->__get(i);		HX_STACK_VAR(oldIndex,"oldIndex");
				HX_STACK_LINE(364)
				int newIndex = oldIndex;		HX_STACK_VAR(newIndex,"newIndex");
				HX_STACK_LINE(365)
				if (((oldIndex < this->customTileRemap->length))){
					HX_STACK_LINE(367)
					newIndex = this->customTileRemap->__get(oldIndex);
				}
				HX_STACK_LINE(369)
				this->_data[i] = newIndex;
				HX_STACK_LINE(370)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,applyCustomRemap,(void))

Void FlxBaseTilemap_obj::randomizeIndices( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","randomizeIndices",0x9015e6eb,"flixel.tile.FlxBaseTilemap.randomizeIndices","flixel/tile/FlxBaseTilemap.hx",376,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(377)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(379)
		if (((this->_randomIndices != null()))){
			HX_STACK_LINE(381)
			Dynamic randLambda;		HX_STACK_VAR(randLambda,"randLambda");
			HX_STACK_LINE(381)
			if (((this->_randomLambda_dyn() != null()))){
				HX_STACK_LINE(381)
				randLambda = this->_randomLambda_dyn();
			}
			else{

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				Float run(){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","flixel/tile/FlxBaseTilemap.hx",382,0x0139d8e5)
					{
						HX_STACK_LINE(382)
						return ::flixel::FlxG_obj::random->_float(null(),null(),null());
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(381)
				randLambda =  Dynamic(new _Function_3_1());
			}
			HX_STACK_LINE(385)
			while((true)){
				HX_STACK_LINE(385)
				if ((!(((i < this->totalTiles))))){
					HX_STACK_LINE(385)
					break;
				}
				HX_STACK_LINE(387)
				int oldIndex = this->_data->__get(i);		HX_STACK_VAR(oldIndex,"oldIndex");
				HX_STACK_LINE(388)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(389)
				int newIndex = oldIndex;		HX_STACK_VAR(newIndex,"newIndex");
				HX_STACK_LINE(390)
				{
					HX_STACK_LINE(390)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(390)
					Array< int > _g1 = this->_randomIndices;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(390)
					while((true)){
						HX_STACK_LINE(390)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(390)
							break;
						}
						HX_STACK_LINE(390)
						int rand = _g1->__get(_g);		HX_STACK_VAR(rand,"rand");
						HX_STACK_LINE(390)
						++(_g);
						HX_STACK_LINE(392)
						if (((oldIndex == rand))){
							HX_STACK_LINE(394)
							Float _g2 = randLambda().Cast< Float >();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(394)
							Float _g11 = (_g2 * this->_randomChoices->__get(j).StaticCast< Array< int > >()->length);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(394)
							int k = ::Std_obj::_int(_g11);		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(395)
							newIndex = this->_randomChoices->__get(j).StaticCast< Array< int > >()->__get(k);
						}
						HX_STACK_LINE(397)
						(j)++;
					}
				}
				HX_STACK_LINE(399)
				this->_data[i] = newIndex;
				HX_STACK_LINE(400)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,randomizeIndices,(void))

Void FlxBaseTilemap_obj::autoTile( int Index){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","autoTile",0x7a0f9632,"flixel.tile.FlxBaseTilemap.autoTile","flixel/tile/FlxBaseTilemap.hx",411,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(412)
		if (((this->_data->__get(Index) == (int)0))){
			HX_STACK_LINE(414)
			return null();
		}
		HX_STACK_LINE(417)
		this->_data[Index] = (int)0;
		HX_STACK_LINE(420)
		if (((bool(((Index - this->widthInTiles) < (int)0)) || bool((this->_data->__get((Index - this->widthInTiles)) > (int)0))))){
			HX_STACK_LINE(422)
			hx::AddEq(this->_data[Index],(int)1);
		}
		HX_STACK_LINE(425)
		if (((bool((hx::Mod(Index,this->widthInTiles) >= (this->widthInTiles - (int)1))) || bool((this->_data->__get((Index + (int)1)) > (int)0))))){
			HX_STACK_LINE(427)
			hx::AddEq(this->_data[Index],(int)2);
		}
		HX_STACK_LINE(430)
		int _g = ::Std_obj::_int((Index + this->widthInTiles));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(430)
		if (((  ((!(((_g >= this->totalTiles))))) ? bool((this->_data->__get((Index + this->widthInTiles)) > (int)0)) : bool(true) ))){
			HX_STACK_LINE(432)
			hx::AddEq(this->_data[Index],(int)4);
		}
		HX_STACK_LINE(435)
		if (((bool((hx::Mod(Index,this->widthInTiles) <= (int)0)) || bool((this->_data->__get((Index - (int)1)) > (int)0))))){
			HX_STACK_LINE(437)
			hx::AddEq(this->_data[Index],(int)8);
		}
		HX_STACK_LINE(441)
		if (((bool((this->_auto == ::flixel::tile::FlxTilemapAutoTiling_obj::ALT)) && bool((this->_data->__get(Index) == (int)15))))){
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxBaseTilemap_obj > __this,int &Index){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxBaseTilemap.hx",444,0x0139d8e5)
					{
						HX_STACK_LINE(444)
						int _g1 = ::Std_obj::_int((Index + __this->widthInTiles));		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(444)
						return (_g1 < __this->totalTiles);
					}
					return null();
				}
			};
			HX_STACK_LINE(444)
			if (((  (((  (((hx::Mod(Index,this->widthInTiles) > (int)0))) ? bool(_Function_2_1::Block(this,Index)) : bool(false) ))) ? bool((this->_data->__get(((Index + this->widthInTiles) - (int)1)) <= (int)0)) : bool(false) ))){
				HX_STACK_LINE(446)
				this->_data[Index] = (int)1;
			}
			HX_STACK_LINE(449)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) > (int)0)) && bool(((Index - this->widthInTiles) >= (int)0)))) && bool((this->_data->__get(((Index - this->widthInTiles) - (int)1)) <= (int)0))))){
				HX_STACK_LINE(451)
				this->_data[Index] = (int)2;
			}
			HX_STACK_LINE(454)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - (int)1))) && bool(((Index - this->widthInTiles) >= (int)0)))) && bool((this->_data->__get(((Index - this->widthInTiles) + (int)1)) <= (int)0))))){
				HX_STACK_LINE(456)
				this->_data[Index] = (int)4;
			}
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxBaseTilemap_obj > __this,int &Index){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxBaseTilemap.hx",459,0x0139d8e5)
					{
						HX_STACK_LINE(459)
						int _g2 = ::Std_obj::_int((Index + __this->widthInTiles));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(459)
						return (_g2 < __this->totalTiles);
					}
					return null();
				}
			};
			HX_STACK_LINE(459)
			if (((  (((  (((hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - (int)1)))) ? bool(_Function_2_2::Block(this,Index)) : bool(false) ))) ? bool((this->_data->__get(((Index + this->widthInTiles) + (int)1)) <= (int)0)) : bool(false) ))){
				HX_STACK_LINE(461)
				this->_data[Index] = (int)8;
			}
		}
		HX_STACK_LINE(465)
		hx::AddEq(this->_data[Index],(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,autoTile,(void))

Void FlxBaseTilemap_obj::setCustomTileMappings( Array< int > mappings,Array< int > randomIndices,Array< ::Dynamic > randomChoices,Dynamic randomLambda){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","setCustomTileMappings",0x91d80f71,"flixel.tile.FlxBaseTilemap.setCustomTileMappings","flixel/tile/FlxBaseTilemap.hx",478,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mappings,"mappings")
		HX_STACK_ARG(randomIndices,"randomIndices")
		HX_STACK_ARG(randomChoices,"randomChoices")
		HX_STACK_ARG(randomLambda,"randomLambda")
		HX_STACK_LINE(479)
		this->customTileRemap = mappings;
		HX_STACK_LINE(480)
		this->_randomIndices = randomIndices;
		HX_STACK_LINE(481)
		this->_randomChoices = randomChoices;
		HX_STACK_LINE(482)
		this->_randomLambda = randomLambda;
		HX_STACK_LINE(485)
		if (((bool((this->_randomIndices != null())) && bool(((bool((this->_randomChoices == null())) || bool((this->_randomChoices->length == (int)0)))))))){
			HX_STACK_LINE(487)
			HX_STACK_DO_THROW(HX_CSTRING("You must provide valid 'randomChoices' if you wish to randomize tilemap indicies, please read documentation of 'setCustomTileMappings' function."));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,setCustomTileMappings,(void))

int FlxBaseTilemap_obj::getTile( int X,int Y){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTile",0x3ff9148f,"flixel.tile.FlxBaseTilemap.getTile","flixel/tile/FlxBaseTilemap.hx",500,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(500)
	return this->_data->__get(((Y * this->widthInTiles) + X));
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseTilemap_obj,getTile,return )

int FlxBaseTilemap_obj::getTileByIndex( int Index){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTileByIndex",0xf0387cec,"flixel.tile.FlxBaseTilemap.getTileByIndex","flixel/tile/FlxBaseTilemap.hx",511,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(511)
	return this->_data->__get(Index);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileByIndex,return )

int FlxBaseTilemap_obj::getTileCollisions( int Index){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTileCollisions",0x9ca1bd30,"flixel.tile.FlxBaseTilemap.getTileCollisions","flixel/tile/FlxBaseTilemap.hx",522,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(522)
	return this->_tileObjects->__GetItem(Index)->__Field(HX_CSTRING("allowCollisions"),true);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileCollisions,return )

Array< int > FlxBaseTilemap_obj::getTileInstances( int Index){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTileInstances",0xa0cac4af,"flixel.tile.FlxBaseTilemap.getTileInstances","flixel/tile/FlxBaseTilemap.hx",532,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(533)
	Array< int > array = null();		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(534)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(535)
	int l = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(537)
	while((true)){
		HX_STACK_LINE(537)
		if ((!(((i < l))))){
			HX_STACK_LINE(537)
			break;
		}
		HX_STACK_LINE(539)
		if (((this->_data->__get(i) == Index))){
			HX_STACK_LINE(541)
			if (((array == null()))){
				HX_STACK_LINE(543)
				array = Array_obj< int >::__new();
			}
			HX_STACK_LINE(545)
			array->push(i);
		}
		HX_STACK_LINE(547)
		(i)++;
	}
	HX_STACK_LINE(550)
	return array;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileInstances,return )

bool FlxBaseTilemap_obj::setTile( int X,int Y,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","setTile",0x32faa59b,"flixel.tile.FlxBaseTilemap.setTile","flixel/tile/FlxBaseTilemap.hx",563,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics")
{
		HX_STACK_LINE(564)
		if (((bool((X >= this->widthInTiles)) || bool((Y >= this->heightInTiles))))){
			HX_STACK_LINE(566)
			return false;
		}
		HX_STACK_LINE(569)
		return this->setTileByIndex(((Y * this->widthInTiles) + X),Tile,UpdateGraphics);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,setTile,return )

bool FlxBaseTilemap_obj::setTileByIndex( int Index,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","setTileByIndex",0x10586560,"flixel.tile.FlxBaseTilemap.setTileByIndex","flixel/tile/FlxBaseTilemap.hx",581,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics")
{
		HX_STACK_LINE(582)
		if (((Index >= this->_data->length))){
			HX_STACK_LINE(584)
			return false;
		}
		HX_STACK_LINE(587)
		bool ok = true;		HX_STACK_VAR(ok,"ok");
		HX_STACK_LINE(588)
		this->_data[Index] = Tile;
		HX_STACK_LINE(590)
		if ((!(UpdateGraphics))){
			HX_STACK_LINE(592)
			return ok;
		}
		HX_STACK_LINE(595)
		this->setDirty(null());
		HX_STACK_LINE(597)
		if (((this->_auto == ::flixel::tile::FlxTilemapAutoTiling_obj::OFF))){
			HX_STACK_LINE(599)
			this->updateTile(this->_data->__get(Index));
			HX_STACK_LINE(600)
			return ok;
		}
		HX_STACK_LINE(604)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(605)
		int _g = ::Std_obj::_int((Float(Index) / Float(this->widthInTiles)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(605)
		int row = (_g - (int)1);		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(606)
		int rowLength = (row + (int)3);		HX_STACK_VAR(rowLength,"rowLength");
		HX_STACK_LINE(607)
		int column = (hx::Mod(Index,this->widthInTiles) - (int)1);		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(608)
		int columnHeight = (column + (int)3);		HX_STACK_VAR(columnHeight,"columnHeight");
		HX_STACK_LINE(610)
		while((true)){
			HX_STACK_LINE(610)
			if ((!(((row < rowLength))))){
				HX_STACK_LINE(610)
				break;
			}
			HX_STACK_LINE(612)
			column = (columnHeight - (int)3);
			HX_STACK_LINE(614)
			while((true)){
				HX_STACK_LINE(614)
				if ((!(((column < columnHeight))))){
					HX_STACK_LINE(614)
					break;
				}
				HX_STACK_LINE(616)
				if (((bool((bool((bool((row >= (int)0)) && bool((row < this->heightInTiles)))) && bool((column >= (int)0)))) && bool((column < this->widthInTiles))))){
					HX_STACK_LINE(618)
					i = ((row * this->widthInTiles) + column);
					HX_STACK_LINE(619)
					this->autoTile(i);
					HX_STACK_LINE(620)
					this->updateTile(this->_data->__get(i));
				}
				HX_STACK_LINE(622)
				(column)++;
			}
			HX_STACK_LINE(624)
			(row)++;
		}
		HX_STACK_LINE(627)
		return ok;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,setTileByIndex,return )

Void FlxBaseTilemap_obj::setTileProperties( int Tile,hx::Null< int >  __o_AllowCollisions,Dynamic Callback,::Class CallbackFilter,hx::Null< int >  __o_Range){
int AllowCollisions = __o_AllowCollisions.Default(4369);
int Range = __o_Range.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","setTileProperties",0x2905d56e,"flixel.tile.FlxBaseTilemap.setTileProperties","flixel/tile/FlxBaseTilemap.hx",641,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(AllowCollisions,"AllowCollisions")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(CallbackFilter,"CallbackFilter")
	HX_STACK_ARG(Range,"Range")
{
		HX_STACK_LINE(642)
		if (((Range <= (int)0))){
			HX_STACK_LINE(644)
			Range = (int)1;
		}
		HX_STACK_LINE(647)
		Dynamic tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(648)
		int i = Tile;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(649)
		int l = (Tile + Range);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(651)
		int maxIndex = this->_tileObjects->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(maxIndex,"maxIndex");
		HX_STACK_LINE(652)
		if (((l > maxIndex))){
			HX_STACK_LINE(654)
			HX_STACK_DO_THROW(((((((((HX_CSTRING("Index ") + l) + HX_CSTRING(" exceeds the maximum tile index of ")) + maxIndex) + HX_CSTRING(". Please verfiy the Tile (")) + Tile) + HX_CSTRING(") and Range (")) + Range) + HX_CSTRING(") parameters.")));
		}
		HX_STACK_LINE(657)
		while((true)){
			HX_STACK_LINE(657)
			if ((!(((i < l))))){
				HX_STACK_LINE(657)
				break;
			}
			HX_STACK_LINE(659)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(659)
			Dynamic _g1 = this->_tileObjects->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(659)
			tile = _g1;
			HX_STACK_LINE(660)
			tile->__FieldRef(HX_CSTRING("allowCollisions")) = AllowCollisions;
			HX_STACK_LINE(661)
			tile->__FieldRef(HX_CSTRING("callbackFunction")) = Callback;
			HX_STACK_LINE(662)
			tile->__FieldRef(HX_CSTRING("filter")) = CallbackFilter;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,setTileProperties,(void))

Array< int > FlxBaseTilemap_obj::getData( hx::Null< bool >  __o_Simple){
bool Simple = __o_Simple.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getData",0x355f9f8b,"flixel.tile.FlxBaseTilemap.getData","flixel/tile/FlxBaseTilemap.hx",674,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Simple,"Simple")
{
		HX_STACK_LINE(675)
		if ((!(Simple))){
			HX_STACK_LINE(677)
			return this->_data;
		}
		HX_STACK_LINE(680)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(681)
		int l = this->_data->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(682)
		Array< int > data = Array_obj< int >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(683)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(data,l);
		HX_STACK_LINE(685)
		while((true)){
			HX_STACK_LINE(685)
			if ((!(((i < l))))){
				HX_STACK_LINE(685)
				break;
			}
			HX_STACK_LINE(687)
			if (((this->_tileObjects->__GetItem(this->_data->__get(i))->__Field(HX_CSTRING("allowCollisions"),true) > (int)0))){
				HX_STACK_LINE(687)
				data[i] = (int)1;
			}
			else{
				HX_STACK_LINE(687)
				data[i] = (int)0;
			}
			HX_STACK_LINE(688)
			(i)++;
		}
		HX_STACK_LINE(691)
		return data;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getData,return )

Array< ::Dynamic > FlxBaseTilemap_obj::findPath( ::flixel::math::FlxPoint Start,::flixel::math::FlxPoint End,hx::Null< bool >  __o_Simplify,hx::Null< bool >  __o_RaySimplify,hx::Null< bool >  __o_WideDiagonal){
bool Simplify = __o_Simplify.Default(true);
bool RaySimplify = __o_RaySimplify.Default(false);
bool WideDiagonal = __o_WideDiagonal.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","findPath",0xe6d2ce73,"flixel.tile.FlxBaseTilemap.findPath","flixel/tile/FlxBaseTilemap.hx",706,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
	HX_STACK_ARG(Simplify,"Simplify")
	HX_STACK_ARG(RaySimplify,"RaySimplify")
	HX_STACK_ARG(WideDiagonal,"WideDiagonal")
{
		HX_STACK_LINE(708)
		int startIndex = this->getTileIndexByCoords(Start);		HX_STACK_VAR(startIndex,"startIndex");
		HX_STACK_LINE(709)
		int endIndex = this->getTileIndexByCoords(End);		HX_STACK_VAR(endIndex,"endIndex");
		HX_STACK_LINE(712)
		if (((bool((this->_tileObjects->__GetItem(this->_data->__get(startIndex))->__Field(HX_CSTRING("allowCollisions"),true) > (int)0)) || bool((this->_tileObjects->__GetItem(this->_data->__get(endIndex))->__Field(HX_CSTRING("allowCollisions"),true) > (int)0))))){
			HX_STACK_LINE(714)
			return null();
		}
		HX_STACK_LINE(718)
		Array< int > distances = this->computePathDistance(startIndex,endIndex,WideDiagonal,null());		HX_STACK_VAR(distances,"distances");
		HX_STACK_LINE(720)
		if (((distances == null()))){
			HX_STACK_LINE(722)
			return null();
		}
		HX_STACK_LINE(726)
		Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(727)
		this->walkPath(distances,endIndex,points);
		HX_STACK_LINE(730)
		::flixel::math::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(731)
		node = points->__get((points->length - (int)1)).StaticCast< ::flixel::math::FlxPoint >();
		HX_STACK_LINE(732)
		{
			HX_STACK_LINE(732)
			node->set_x(Start->x);
			HX_STACK_LINE(732)
			node->set_y(Start->y);
			HX_STACK_LINE(732)
			node;
		}
		HX_STACK_LINE(733)
		node = points->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();
		HX_STACK_LINE(734)
		{
			HX_STACK_LINE(734)
			node->set_x(End->x);
			HX_STACK_LINE(734)
			node->set_y(End->y);
			HX_STACK_LINE(734)
			node;
		}
		HX_STACK_LINE(737)
		if ((Simplify)){
			HX_STACK_LINE(739)
			this->simplifyPath(points);
		}
		HX_STACK_LINE(741)
		if ((RaySimplify)){
			HX_STACK_LINE(743)
			this->raySimplifyPath(points);
		}
		HX_STACK_LINE(747)
		Array< ::Dynamic > path = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(748)
		int i = (points->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(750)
		while((true)){
			HX_STACK_LINE(750)
			if ((!(((i >= (int)0))))){
				HX_STACK_LINE(750)
				break;
			}
			HX_STACK_LINE(752)
			int _g = (i)--;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(752)
			::flixel::math::FlxPoint _g1 = points->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(752)
			node = _g1;
			HX_STACK_LINE(754)
			if (((node != null()))){
				HX_STACK_LINE(756)
				path->push(node);
			}
		}
		HX_STACK_LINE(760)
		return path;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,findPath,return )

Array< int > FlxBaseTilemap_obj::computePathDistance( int StartIndex,int EndIndex,bool WideDiagonal,hx::Null< bool >  __o_StopOnEnd){
bool StopOnEnd = __o_StopOnEnd.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","computePathDistance",0x34e53a3c,"flixel.tile.FlxBaseTilemap.computePathDistance","flixel/tile/FlxBaseTilemap.hx",774,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(EndIndex,"EndIndex")
	HX_STACK_ARG(WideDiagonal,"WideDiagonal")
	HX_STACK_ARG(StopOnEnd,"StopOnEnd")
{
		HX_STACK_LINE(777)
		int mapSize = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(mapSize,"mapSize");
		HX_STACK_LINE(778)
		Array< int > distances = Array_obj< int >::__new();		HX_STACK_VAR(distances,"distances");
		HX_STACK_LINE(779)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(distances,mapSize);
		HX_STACK_LINE(780)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(782)
		while((true)){
			HX_STACK_LINE(782)
			if ((!(((i < mapSize))))){
				HX_STACK_LINE(782)
				break;
			}
			HX_STACK_LINE(784)
			if (((this->_tileObjects->__GetItem(this->_data->__get(i))->__Field(HX_CSTRING("allowCollisions"),true) != (int)0))){
				HX_STACK_LINE(786)
				distances[i] = (int)-2;
			}
			else{
				HX_STACK_LINE(790)
				distances[i] = (int)-1;
			}
			HX_STACK_LINE(792)
			(i)++;
		}
		HX_STACK_LINE(795)
		distances[StartIndex] = (int)0;
		HX_STACK_LINE(796)
		int distance = (int)1;		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(797)
		Array< int > neighbors = Array_obj< int >::__new().Add(StartIndex);		HX_STACK_VAR(neighbors,"neighbors");
		HX_STACK_LINE(798)
		Array< int > current;		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(799)
		int currentIndex;		HX_STACK_VAR(currentIndex,"currentIndex");
		HX_STACK_LINE(800)
		bool left;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(801)
		bool right;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(802)
		bool up;		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(803)
		bool down;		HX_STACK_VAR(down,"down");
		HX_STACK_LINE(804)
		int currentLength;		HX_STACK_VAR(currentLength,"currentLength");
		HX_STACK_LINE(805)
		bool foundEnd = false;		HX_STACK_VAR(foundEnd,"foundEnd");
		HX_STACK_LINE(807)
		while((true)){
			HX_STACK_LINE(807)
			if ((!(((neighbors->length > (int)0))))){
				HX_STACK_LINE(807)
				break;
			}
			HX_STACK_LINE(809)
			current = neighbors;
			HX_STACK_LINE(810)
			Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(810)
			neighbors = _g;
			HX_STACK_LINE(812)
			i = (int)0;
			HX_STACK_LINE(813)
			currentLength = current->length;
			HX_STACK_LINE(814)
			while((true)){
				HX_STACK_LINE(814)
				if ((!(((i < currentLength))))){
					HX_STACK_LINE(814)
					break;
				}
				HX_STACK_LINE(816)
				int _g1 = (i)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(816)
				int _g2 = current->__get(_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(816)
				currentIndex = _g2;
				HX_STACK_LINE(818)
				int _g3 = ::Std_obj::_int(EndIndex);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(818)
				if (((currentIndex == _g3))){
					HX_STACK_LINE(820)
					foundEnd = true;
					HX_STACK_LINE(821)
					if ((StopOnEnd)){
						HX_STACK_LINE(823)
						neighbors = Array_obj< int >::__new();
						HX_STACK_LINE(824)
						break;
					}
				}
				HX_STACK_LINE(829)
				left = (hx::Mod(currentIndex,this->widthInTiles) > (int)0);
				HX_STACK_LINE(830)
				right = (hx::Mod(currentIndex,this->widthInTiles) < (this->widthInTiles - (int)1));
				HX_STACK_LINE(831)
				up = ((Float(currentIndex) / Float(this->widthInTiles)) > (int)0);
				HX_STACK_LINE(832)
				down = ((Float(currentIndex) / Float(this->widthInTiles)) < (this->heightInTiles - (int)1));
				HX_STACK_LINE(834)
				int index;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(836)
				if ((up)){
					HX_STACK_LINE(838)
					index = (currentIndex - this->widthInTiles);
					HX_STACK_LINE(840)
					if (((distances->__get(index) == (int)-1))){
						HX_STACK_LINE(842)
						distances[index] = distance;
						HX_STACK_LINE(843)
						neighbors->push(index);
					}
				}
				HX_STACK_LINE(846)
				if ((right)){
					HX_STACK_LINE(848)
					index = (currentIndex + (int)1);
					HX_STACK_LINE(850)
					if (((distances->__get(index) == (int)-1))){
						HX_STACK_LINE(852)
						distances[index] = distance;
						HX_STACK_LINE(853)
						neighbors->push(index);
					}
				}
				HX_STACK_LINE(856)
				if ((down)){
					HX_STACK_LINE(858)
					index = (currentIndex + this->widthInTiles);
					HX_STACK_LINE(860)
					if (((distances->__get(index) == (int)-1))){
						HX_STACK_LINE(862)
						distances[index] = distance;
						HX_STACK_LINE(863)
						neighbors->push(index);
					}
				}
				HX_STACK_LINE(866)
				if ((left)){
					HX_STACK_LINE(868)
					index = (currentIndex - (int)1);
					HX_STACK_LINE(870)
					if (((distances->__get(index) == (int)-1))){
						HX_STACK_LINE(872)
						distances[index] = distance;
						HX_STACK_LINE(873)
						neighbors->push(index);
					}
				}
				HX_STACK_LINE(876)
				if (((bool(up) && bool(right)))){
					HX_STACK_LINE(878)
					index = ((currentIndex - this->widthInTiles) + (int)1);
					HX_STACK_LINE(880)
					if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex - this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex + (int)1)) >= (int)-1))))){
						HX_STACK_LINE(882)
						distances[index] = distance;
						HX_STACK_LINE(883)
						neighbors->push(index);
					}
					else{
						HX_STACK_LINE(885)
						if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
							HX_STACK_LINE(887)
							distances[index] = distance;
							HX_STACK_LINE(888)
							neighbors->push(index);
						}
					}
				}
				HX_STACK_LINE(891)
				if (((bool(right) && bool(down)))){
					HX_STACK_LINE(893)
					index = ((currentIndex + this->widthInTiles) + (int)1);
					HX_STACK_LINE(895)
					if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex + this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex + (int)1)) >= (int)-1))))){
						HX_STACK_LINE(897)
						distances[index] = distance;
						HX_STACK_LINE(898)
						neighbors->push(index);
					}
					else{
						HX_STACK_LINE(900)
						if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
							HX_STACK_LINE(902)
							distances[index] = distance;
							HX_STACK_LINE(903)
							neighbors->push(index);
						}
					}
				}
				HX_STACK_LINE(906)
				if (((bool(left) && bool(down)))){
					HX_STACK_LINE(908)
					index = ((currentIndex + this->widthInTiles) - (int)1);
					HX_STACK_LINE(910)
					if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex + this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex - (int)1)) >= (int)-1))))){
						HX_STACK_LINE(912)
						distances[index] = distance;
						HX_STACK_LINE(913)
						neighbors->push(index);
					}
					else{
						HX_STACK_LINE(915)
						if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
							HX_STACK_LINE(917)
							distances[index] = distance;
							HX_STACK_LINE(918)
							neighbors->push(index);
						}
					}
				}
				HX_STACK_LINE(921)
				if (((bool(up) && bool(left)))){
					HX_STACK_LINE(923)
					index = ((currentIndex - this->widthInTiles) - (int)1);
					HX_STACK_LINE(925)
					if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex - this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex - (int)1)) >= (int)-1))))){
						HX_STACK_LINE(927)
						distances[index] = distance;
						HX_STACK_LINE(928)
						neighbors->push(index);
					}
					else{
						HX_STACK_LINE(930)
						if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
							HX_STACK_LINE(932)
							distances[index] = distance;
							HX_STACK_LINE(933)
							neighbors->push(index);
						}
					}
				}
			}
			HX_STACK_LINE(938)
			(distance)++;
		}
		HX_STACK_LINE(940)
		if ((!(foundEnd))){
			HX_STACK_LINE(942)
			distances = null();
		}
		HX_STACK_LINE(945)
		return distances;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,computePathDistance,return )

Void FlxBaseTilemap_obj::walkPath( Array< int > Data,int Start,Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","walkPath",0xa1980343,"flixel.tile.FlxBaseTilemap.walkPath","flixel/tile/FlxBaseTilemap.hx",956,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
		HX_STACK_ARG(Start,"Start")
		HX_STACK_ARG(Points,"Points")
		HX_STACK_LINE(957)
		::flixel::math::FlxPoint _g = this->getTileCoordsByIndex(Start,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(957)
		Points->push(_g);
		HX_STACK_LINE(959)
		if (((Data->__get(Start) == (int)0))){
			HX_STACK_LINE(961)
			return null();
		}
		HX_STACK_LINE(965)
		bool left = (hx::Mod(Start,this->widthInTiles) > (int)0);		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(966)
		bool right = (hx::Mod(Start,this->widthInTiles) < (this->widthInTiles - (int)1));		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(967)
		bool up = ((Float(Start) / Float(this->widthInTiles)) > (int)0);		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(968)
		bool down = ((Float(Start) / Float(this->widthInTiles)) < (this->heightInTiles - (int)1));		HX_STACK_VAR(down,"down");
		HX_STACK_LINE(970)
		int current = Data->__get(Start);		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(971)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(973)
		if ((up)){
			HX_STACK_LINE(975)
			i = (Start - this->widthInTiles);
			HX_STACK_LINE(977)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(979)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(982)
		if ((right)){
			HX_STACK_LINE(984)
			i = (Start + (int)1);
			HX_STACK_LINE(986)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(988)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(991)
		if ((down)){
			HX_STACK_LINE(993)
			i = (Start + this->widthInTiles);
			HX_STACK_LINE(995)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(997)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(1000)
		if ((left)){
			HX_STACK_LINE(1002)
			i = (Start - (int)1);
			HX_STACK_LINE(1004)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1006)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(1009)
		if (((bool(up) && bool(right)))){
			HX_STACK_LINE(1011)
			i = ((Start - this->widthInTiles) + (int)1);
			HX_STACK_LINE(1013)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1015)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(1018)
		if (((bool(right) && bool(down)))){
			HX_STACK_LINE(1020)
			i = ((Start + this->widthInTiles) + (int)1);
			HX_STACK_LINE(1022)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1024)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(1027)
		if (((bool(left) && bool(down)))){
			HX_STACK_LINE(1029)
			i = ((Start + this->widthInTiles) - (int)1);
			HX_STACK_LINE(1031)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1033)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(1036)
		if (((bool(up) && bool(left)))){
			HX_STACK_LINE(1038)
			i = ((Start - this->widthInTiles) - (int)1);
			HX_STACK_LINE(1040)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1042)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(1046)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,walkPath,(void))

Void FlxBaseTilemap_obj::simplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","simplifyPath",0xe8519bc3,"flixel.tile.FlxBaseTilemap.simplifyPath","flixel/tile/FlxBaseTilemap.hx",1055,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Points,"Points")
		HX_STACK_LINE(1056)
		Float deltaPrevious;		HX_STACK_VAR(deltaPrevious,"deltaPrevious");
		HX_STACK_LINE(1057)
		Float deltaNext;		HX_STACK_VAR(deltaNext,"deltaNext");
		HX_STACK_LINE(1058)
		::flixel::math::FlxPoint last = Points->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(1059)
		::flixel::math::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1060)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1061)
		int l = (Points->length - (int)1);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1063)
		while((true)){
			HX_STACK_LINE(1063)
			if ((!(((i < l))))){
				HX_STACK_LINE(1063)
				break;
			}
			HX_STACK_LINE(1065)
			node = Points->__get(i).StaticCast< ::flixel::math::FlxPoint >();
			HX_STACK_LINE(1066)
			deltaPrevious = (Float(((node->x - last->x))) / Float(((node->y - last->y))));
			HX_STACK_LINE(1067)
			deltaNext = (Float(((node->x - Points->__get((i + (int)1)).StaticCast< ::flixel::math::FlxPoint >()->x))) / Float(((node->y - Points->__get((i + (int)1)).StaticCast< ::flixel::math::FlxPoint >()->y))));
			HX_STACK_LINE(1069)
			if (((bool((bool((last->x == Points->__get((i + (int)1)).StaticCast< ::flixel::math::FlxPoint >()->x)) || bool((last->y == Points->__get((i + (int)1)).StaticCast< ::flixel::math::FlxPoint >()->y)))) || bool((deltaPrevious == deltaNext))))){
				HX_STACK_LINE(1071)
				Points[i] = null();
			}
			else{
				HX_STACK_LINE(1075)
				last = node;
			}
			HX_STACK_LINE(1078)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,simplifyPath,(void))

Void FlxBaseTilemap_obj::raySimplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","raySimplifyPath",0x32723703,"flixel.tile.FlxBaseTilemap.raySimplifyPath","flixel/tile/FlxBaseTilemap.hx",1088,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Points,"Points")
		HX_STACK_LINE(1089)
		::flixel::math::FlxPoint source = Points->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(1090)
		int lastIndex = (int)-1;		HX_STACK_VAR(lastIndex,"lastIndex");
		HX_STACK_LINE(1091)
		::flixel::math::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1092)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1093)
		int l = Points->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1095)
		while((true)){
			HX_STACK_LINE(1095)
			if ((!(((i < l))))){
				HX_STACK_LINE(1095)
				break;
			}
			HX_STACK_LINE(1097)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1097)
			::flixel::math::FlxPoint _g1 = Points->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1097)
			node = _g1;
			HX_STACK_LINE(1099)
			if (((node == null()))){
				HX_STACK_LINE(1101)
				continue;
			}
			HX_STACK_LINE(1104)
			if ((this->ray(source,node,this->_point,null()))){
				HX_STACK_LINE(1106)
				if (((lastIndex >= (int)0))){
					HX_STACK_LINE(1108)
					Points[lastIndex] = null();
				}
			}
			else{
				HX_STACK_LINE(1113)
				source = Points->__get(lastIndex).StaticCast< ::flixel::math::FlxPoint >();
			}
			HX_STACK_LINE(1116)
			lastIndex = (i - (int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,raySimplifyPath,(void))

bool FlxBaseTilemap_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","overlaps",0x8f17af01,"flixel.tile.FlxBaseTilemap.overlaps","flixel/tile/FlxBaseTilemap.hx",1131,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1132)
		::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(1132)
		{
			HX_STACK_LINE(1132)
			::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
			HX_STACK_LINE(1132)
			if (((ObjectOrGroup != null()))){
				HX_STACK_LINE(1132)
				if (((ObjectOrGroup->flixelType == (int)2))){
					HX_STACK_LINE(1132)
					group1 = ObjectOrGroup;
				}
				else{
					HX_STACK_LINE(1132)
					if (((ObjectOrGroup->flixelType == (int)4))){
						HX_STACK_LINE(1132)
						group1 = (hx::TCast< flixel::group::FlxTypedSpriteGroup >::cast(ObjectOrGroup))->group;
					}
				}
			}
			HX_STACK_LINE(1132)
			group = group1;
		}
		HX_STACK_LINE(1133)
		if (((group != null()))){
			HX_STACK_LINE(1135)
			Dynamic Callback = this->tilemapOverlapsCallback_dyn();		HX_STACK_VAR(Callback,"Callback");
			HX_STACK_LINE(1135)
			bool result = false;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(1135)
			if (((group != null()))){
				HX_STACK_LINE(1135)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1135)
				int l = group->length;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(1135)
				::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
				HX_STACK_LINE(1135)
				while((true)){
					HX_STACK_LINE(1135)
					if ((!(((i < l))))){
						HX_STACK_LINE(1135)
						break;
					}
					HX_STACK_LINE(1135)
					int _g = (i)++;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1135)
					::flixel::FlxBasic _g1 = group->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1135)
					basic = _g1;
					HX_STACK_LINE(1135)
					if (((  (((basic != null()))) ? bool(Callback(basic,(int)0,(int)0,InScreenSpace,Camera).Cast< bool >()) : bool(false) ))){
						HX_STACK_LINE(1135)
						result = true;
						HX_STACK_LINE(1135)
						break;
					}
				}
			}
			HX_STACK_LINE(1135)
			return result;
		}
		else{
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxBaseTilemap_obj > __this,::flixel::FlxBasic &ObjectOrGroup){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxBaseTilemap.hx",1137,0x0139d8e5)
					{
						HX_STACK_LINE(1137)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(1137)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(1137)
						bool InScreenSpace1 = false;		HX_STACK_VAR(InScreenSpace1,"InScreenSpace1");
						struct _Function_3_1{
							inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxBaseTilemap_obj > __this,::flixel::FlxBasic &ObjectOrGroup){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxBaseTilemap.hx",1137,0x0139d8e5)
								{
									HX_STACK_LINE(1137)
									::flixel::FlxObject _g2;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1137)
									_g2 = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
									HX_STACK_LINE(1137)
									return __this->overlapsWithCallback(_g2,null(),null(),null());
								}
								return null();
							}
						};
						HX_STACK_LINE(1137)
						return (  (((bool((ObjectOrGroup->flixelType == (int)1)) || bool((ObjectOrGroup->flixelType == (int)3))))) ? bool(_Function_3_1::Block(__this,ObjectOrGroup)) : bool(__this->overlaps(ObjectOrGroup,InScreenSpace1,null())) );
					}
					return null();
				}
			};
			HX_STACK_LINE(1137)
			if ((_Function_2_1::Block(this,ObjectOrGroup))){
				HX_STACK_LINE(1139)
				return true;
			}
		}
		HX_STACK_LINE(1141)
		return false;
	}
}


bool FlxBaseTilemap_obj::tilemapOverlapsCallback( ::flixel::FlxBasic ObjectOrGroup,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","tilemapOverlapsCallback",0x40d17cea,"flixel.tile.FlxBaseTilemap.tilemapOverlapsCallback","flixel/tile/FlxBaseTilemap.hx",1146,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1146)
		if (((bool((ObjectOrGroup->flixelType == (int)1)) || bool((ObjectOrGroup->flixelType == (int)3))))){
			HX_STACK_LINE(1149)
			::flixel::FlxObject _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1149)
			_g = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
			HX_STACK_LINE(1149)
			return this->overlapsWithCallback(_g,null(),null(),null());
		}
		else{
			HX_STACK_LINE(1153)
			return this->overlaps(ObjectOrGroup,InScreenSpace,Camera);
		}
		HX_STACK_LINE(1146)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,tilemapOverlapsCallback,return )

bool FlxBaseTilemap_obj::overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","overlapsAt",0x47a26a54,"flixel.tile.FlxBaseTilemap.overlapsAt","flixel/tile/FlxBaseTilemap.hx",1170,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1171)
		::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(1171)
		{
			HX_STACK_LINE(1171)
			::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
			HX_STACK_LINE(1171)
			if (((ObjectOrGroup != null()))){
				HX_STACK_LINE(1171)
				if (((ObjectOrGroup->flixelType == (int)2))){
					HX_STACK_LINE(1171)
					group1 = ObjectOrGroup;
				}
				else{
					HX_STACK_LINE(1171)
					if (((ObjectOrGroup->flixelType == (int)4))){
						HX_STACK_LINE(1171)
						group1 = (hx::TCast< flixel::group::FlxTypedSpriteGroup >::cast(ObjectOrGroup))->group;
					}
				}
			}
			HX_STACK_LINE(1171)
			group = group1;
		}
		HX_STACK_LINE(1172)
		if (((group != null()))){
			HX_STACK_LINE(1174)
			Dynamic Callback = this->tilemapOverlapsAtCallback_dyn();		HX_STACK_VAR(Callback,"Callback");
			HX_STACK_LINE(1174)
			bool result = false;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(1174)
			if (((group != null()))){
				HX_STACK_LINE(1174)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1174)
				int l = group->length;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(1174)
				::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
				HX_STACK_LINE(1174)
				while((true)){
					HX_STACK_LINE(1174)
					if ((!(((i < l))))){
						HX_STACK_LINE(1174)
						break;
					}
					HX_STACK_LINE(1174)
					int _g = (i)++;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1174)
					::flixel::FlxBasic _g1 = group->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1174)
					basic = _g1;
					HX_STACK_LINE(1174)
					if (((  (((basic != null()))) ? bool(Callback(basic,X,Y,InScreenSpace,Camera).Cast< bool >()) : bool(false) ))){
						HX_STACK_LINE(1174)
						result = true;
						HX_STACK_LINE(1174)
						break;
					}
				}
			}
			HX_STACK_LINE(1174)
			return result;
		}
		else{
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxBaseTilemap_obj > __this,Float &Y,::flixel::FlxBasic &ObjectOrGroup,Float &X){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxBaseTilemap.hx",1176,0x0139d8e5)
					{
						HX_STACK_LINE(1176)
						::flixel::FlxObject _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1176)
						_g2 = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
						HX_STACK_LINE(1176)
						::flixel::math::FlxPoint _g3 = __this->_point->set(X,Y);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1176)
						return __this->overlapsWithCallback(_g2,null(),false,_g3);
					}
					return null();
				}
			};
			HX_STACK_LINE(1176)
			if (((  (((bool((ObjectOrGroup->flixelType == (int)1)) || bool((ObjectOrGroup->flixelType == (int)3))))) ? bool(_Function_2_1::Block(this,Y,ObjectOrGroup,X)) : bool(this->overlapsAt(X,Y,ObjectOrGroup,InScreenSpace,Camera)) ))){
				HX_STACK_LINE(1178)
				return true;
			}
		}
		HX_STACK_LINE(1181)
		return false;
	}
}


bool FlxBaseTilemap_obj::tilemapOverlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","tilemapOverlapsAtCallback",0xbef90c3d,"flixel.tile.FlxBaseTilemap.tilemapOverlapsAtCallback","flixel/tile/FlxBaseTilemap.hx",1186,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(1186)
	if (((bool((ObjectOrGroup->flixelType == (int)1)) || bool((ObjectOrGroup->flixelType == (int)3))))){
		HX_STACK_LINE(1189)
		::flixel::FlxObject _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1189)
		_g = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
		HX_STACK_LINE(1189)
		::flixel::math::FlxPoint _g1 = this->_point->set(X,Y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1189)
		return this->overlapsWithCallback(_g,null(),false,_g1);
	}
	else{
		HX_STACK_LINE(1193)
		return this->overlapsAt(X,Y,ObjectOrGroup,InScreenSpace,Camera);
	}
	HX_STACK_LINE(1186)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,tilemapOverlapsAtCallback,return )

bool FlxBaseTilemap_obj::overlapsPoint( ::flixel::math::FlxPoint WorldPoint,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","overlapsPoint",0x91c6718f,"flixel.tile.FlxBaseTilemap.overlapsPoint","flixel/tile/FlxBaseTilemap.hx",1206,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(WorldPoint,"WorldPoint")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1207)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(1209)
			return (this->_tileObjects->__GetItem(this->_data->__get(this->getTileIndexByCoords(WorldPoint)))->__Field(HX_CSTRING("allowCollisions"),true) > (int)0);
		}
		HX_STACK_LINE(1212)
		if (((Camera == null()))){
			HX_STACK_LINE(1214)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1217)
		WorldPoint->subtractPoint(Camera->scroll);
		HX_STACK_LINE(1219)
		bool result = (this->_tileObjects->__GetItem(this->_data->__get(this->getTileIndexByCoords(WorldPoint)))->__Field(HX_CSTRING("allowCollisions"),true) > (int)0);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(1220)
		if ((WorldPoint->_weak)){
			HX_STACK_LINE(1220)
			WorldPoint->put();
		}
		HX_STACK_LINE(1221)
		return result;
	}
}


::flixel::math::FlxRect FlxBaseTilemap_obj::getBounds( ::flixel::math::FlxRect Bounds){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getBounds",0x47c7aa16,"flixel.tile.FlxBaseTilemap.getBounds","flixel/tile/FlxBaseTilemap.hx",1231,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Bounds,"Bounds")
	HX_STACK_LINE(1232)
	if (((Bounds == null()))){
		HX_STACK_LINE(1234)
		::flixel::math::FlxRect _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1234)
		{
			HX_STACK_LINE(1234)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1234)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1234)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(1234)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(1234)
			::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1234)
			{
				HX_STACK_LINE(1234)
				::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1234)
				_this->x = X;
				HX_STACK_LINE(1234)
				_this->y = Y;
				HX_STACK_LINE(1234)
				_this->width = Width;
				HX_STACK_LINE(1234)
				_this->height = Height;
				HX_STACK_LINE(1234)
				rect = _this;
			}
			HX_STACK_LINE(1234)
			rect->_inPool = false;
			HX_STACK_LINE(1234)
			_g = rect;
		}
		HX_STACK_LINE(1234)
		Bounds = _g;
	}
	HX_STACK_LINE(1237)
	Float Width = this->get_width();		HX_STACK_VAR(Width,"Width");
	HX_STACK_LINE(1237)
	Float Height = this->get_height();		HX_STACK_VAR(Height,"Height");
	HX_STACK_LINE(1237)
	Bounds->x = this->x;
	HX_STACK_LINE(1237)
	Bounds->y = this->y;
	HX_STACK_LINE(1237)
	Bounds->width = Width;
	HX_STACK_LINE(1237)
	Bounds->height = Height;
	HX_STACK_LINE(1237)
	return Bounds;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getBounds,return )


FlxBaseTilemap_obj::FlxBaseTilemap_obj()
{
}

void FlxBaseTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseTilemap);
	HX_MARK_MEMBER_NAME(_auto,"auto");
	HX_MARK_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_MARK_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_MARK_MEMBER_NAME(totalTiles,"totalTiles");
	HX_MARK_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_MARK_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_MARK_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_MARK_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_MARK_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_MARK_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_drawIndex,"_drawIndex");
	HX_MARK_MEMBER_NAME(_collideIndex,"_collideIndex");
	::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBaseTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_auto,"auto");
	HX_VISIT_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_VISIT_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_VISIT_MEMBER_NAME(totalTiles,"totalTiles");
	HX_VISIT_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_VISIT_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_VISIT_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_VISIT_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_VISIT_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_VISIT_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_drawIndex,"_drawIndex");
	HX_VISIT_MEMBER_NAME(_collideIndex,"_collideIndex");
	::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBaseTilemap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ray_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { return _auto; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setDirty") ) { return setDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"autoTile") ) { return autoTile_dyn(); }
		if (HX_FIELD_EQ(inName,"findPath") ) { return findPath_dyn(); }
		if (HX_FIELD_EQ(inName,"walkPath") ) { return walkPath_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateMap") ) { return updateMap_dyn(); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { return totalTiles; }
		if (HX_FIELD_EQ(inName,"_drawIndex") ) { return _drawIndex; }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return updateTile_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { return widthInTiles; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { return _tileObjects; }
		if (HX_FIELD_EQ(inName,"simplifyPath") ) { return simplifyPath_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { return heightInTiles; }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { return _randomLambda; }
		if (HX_FIELD_EQ(inName,"_collideIndex") ) { return _collideIndex; }
		if (HX_FIELD_EQ(inName,"cacheGraphics") ) { return cacheGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMapHelper") ) { return loadMapHelper_dyn(); }
		if (HX_FIELD_EQ(inName,"applyAutoTile") ) { return applyAutoTile_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { return _randomIndices; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { return _randomChoices; }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { return _startingIndex; }
		if (HX_FIELD_EQ(inName,"loadMapFromCSV") ) { return loadMapFromCSV_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileByIndex") ) { return getTileByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileByIndex") ) { return setTileByIndex_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { return customTileRemap; }
		if (HX_FIELD_EQ(inName,"initTileObjects") ) { return initTileObjects_dyn(); }
		if (HX_FIELD_EQ(inName,"postGraphicLoad") ) { return postGraphicLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"raySimplifyPath") ) { return raySimplifyPath_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadMapFromArray") ) { return loadMapFromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"applyCustomRemap") ) { return applyCustomRemap_dyn(); }
		if (HX_FIELD_EQ(inName,"randomizeIndices") ) { return randomizeIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileInstances") ) { return getTileInstances_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"computeDimensions") ) { return computeDimensions_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCollisions") ) { return getTileCollisions_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileProperties") ) { return setTileProperties_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadMapFrom2DArray") ) { return loadMapFrom2DArray_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"computePathDistance") ) { return computePathDistance_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getTileIndexByCoords") ) { return getTileIndexByCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCoordsByIndex") ) { return getTileCoordsByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return overlapsWithCallback_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setCustomTileMappings") ) { return setCustomTileMappings_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsCallback") ) { return tilemapOverlapsCallback_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsAtCallback") ) { return tilemapOverlapsAtCallback_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBaseTilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { _auto=inValue.Cast< ::flixel::tile::FlxTilemapAutoTiling >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { totalTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawIndex") ) { _drawIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { widthInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { _tileObjects=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { heightInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { _randomLambda=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_collideIndex") ) { _collideIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { _randomIndices=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { _randomChoices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { _startingIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { customTileRemap=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("auto"));
	outFields->push(HX_CSTRING("widthInTiles"));
	outFields->push(HX_CSTRING("heightInTiles"));
	outFields->push(HX_CSTRING("totalTiles"));
	outFields->push(HX_CSTRING("customTileRemap"));
	outFields->push(HX_CSTRING("_randomIndices"));
	outFields->push(HX_CSTRING("_randomChoices"));
	outFields->push(HX_CSTRING("_tileObjects"));
	outFields->push(HX_CSTRING("_startingIndex"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_drawIndex"));
	outFields->push(HX_CSTRING("_collideIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::tile::FlxTilemapAutoTiling*/ ,(int)offsetof(FlxBaseTilemap_obj,_auto),HX_CSTRING("auto")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,widthInTiles),HX_CSTRING("widthInTiles")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,heightInTiles),HX_CSTRING("heightInTiles")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,totalTiles),HX_CSTRING("totalTiles")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxBaseTilemap_obj,customTileRemap),HX_CSTRING("customTileRemap")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxBaseTilemap_obj,_randomIndices),HX_CSTRING("_randomIndices")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxBaseTilemap_obj,_randomChoices),HX_CSTRING("_randomChoices")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBaseTilemap_obj,_randomLambda),HX_CSTRING("_randomLambda")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBaseTilemap_obj,_tileObjects),HX_CSTRING("_tileObjects")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_startingIndex),HX_CSTRING("_startingIndex")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxBaseTilemap_obj,_data),HX_CSTRING("_data")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_drawIndex),HX_CSTRING("_drawIndex")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_collideIndex),HX_CSTRING("_collideIndex")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("auto"),
	HX_CSTRING("widthInTiles"),
	HX_CSTRING("heightInTiles"),
	HX_CSTRING("totalTiles"),
	HX_CSTRING("customTileRemap"),
	HX_CSTRING("_randomIndices"),
	HX_CSTRING("_randomChoices"),
	HX_CSTRING("_randomLambda"),
	HX_CSTRING("_tileObjects"),
	HX_CSTRING("_startingIndex"),
	HX_CSTRING("_data"),
	HX_CSTRING("_drawIndex"),
	HX_CSTRING("_collideIndex"),
	HX_CSTRING("updateTile"),
	HX_CSTRING("cacheGraphics"),
	HX_CSTRING("initTileObjects"),
	HX_CSTRING("updateMap"),
	HX_CSTRING("computeDimensions"),
	HX_CSTRING("getTileIndexByCoords"),
	HX_CSTRING("getTileCoordsByIndex"),
	HX_CSTRING("ray"),
	HX_CSTRING("overlapsWithCallback"),
	HX_CSTRING("setDirty"),
	HX_CSTRING("destroy"),
	HX_CSTRING("loadMapFromCSV"),
	HX_CSTRING("loadMapFromArray"),
	HX_CSTRING("loadMapFrom2DArray"),
	HX_CSTRING("loadMapHelper"),
	HX_CSTRING("postGraphicLoad"),
	HX_CSTRING("applyAutoTile"),
	HX_CSTRING("applyCustomRemap"),
	HX_CSTRING("randomizeIndices"),
	HX_CSTRING("autoTile"),
	HX_CSTRING("setCustomTileMappings"),
	HX_CSTRING("getTile"),
	HX_CSTRING("getTileByIndex"),
	HX_CSTRING("getTileCollisions"),
	HX_CSTRING("getTileInstances"),
	HX_CSTRING("setTile"),
	HX_CSTRING("setTileByIndex"),
	HX_CSTRING("setTileProperties"),
	HX_CSTRING("getData"),
	HX_CSTRING("findPath"),
	HX_CSTRING("computePathDistance"),
	HX_CSTRING("walkPath"),
	HX_CSTRING("simplifyPath"),
	HX_CSTRING("raySimplifyPath"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("tilemapOverlapsCallback"),
	HX_CSTRING("overlapsAt"),
	HX_CSTRING("tilemapOverlapsAtCallback"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("getBounds"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseTilemap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseTilemap_obj::__mClass,"__mClass");
};

#endif

Class FlxBaseTilemap_obj::__mClass;

void FlxBaseTilemap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tile.FlxBaseTilemap"), hx::TCanCast< FlxBaseTilemap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void FlxBaseTilemap_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tile
