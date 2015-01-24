#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraShakeDirection
#include <flixel/FlxCameraShakeDirection.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTilesItem
#include <flixel/graphics/tile/FlxDrawTilesItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTrianglesItem
#include <flixel/graphics/tile/FlxDrawTrianglesItem.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_ColorTransform
#include <openfl/_v2/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Transform
#include <openfl/_v2/geom/Transform.h>
#endif
namespace flixel{

Void FlxCamera_obj::__construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom)
{
HX_STACK_FRAME("flixel.FlxCamera","new",0x0e8a9f77,"flixel.FlxCamera.new","flixel/FlxCamera.hx",30,0xe7aeb95a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
HX_STACK_ARG(__o_Zoom,"Zoom")
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
Float Zoom = __o_Zoom.Default(0);
{
	HX_STACK_LINE(285)
	this->initialZoom = (int)1;
	HX_STACK_LINE(276)
	this->_fxShakeDirection = ::flixel::FlxCameraShakeDirection_obj::BOTH_AXES;
	HX_STACK_LINE(264)
	this->_fxShakeDuration = (int)0;
	HX_STACK_LINE(260)
	this->_fxShakeIntensity = (int)0;
	HX_STACK_LINE(256)
	this->_fxFadeAlpha = (int)0;
	HX_STACK_LINE(252)
	this->_fxFadeComplete = null();
	HX_STACK_LINE(248)
	this->_fxFadeIn = false;
	HX_STACK_LINE(244)
	this->_fxFadeDuration = (int)0;
	HX_STACK_LINE(232)
	this->_fxFadeColor = (int)0;
	HX_STACK_LINE(228)
	this->_fxFlashAlpha = (int)0;
	HX_STACK_LINE(224)
	this->_fxFlashComplete = null();
	HX_STACK_LINE(220)
	this->_fxFlashDuration = (int)0;
	HX_STACK_LINE(216)
	this->_fxFlashColor = (int)0;
	HX_STACK_LINE(195)
	this->antialiasing = false;
	HX_STACK_LINE(190)
	this->color = (int)-1;
	HX_STACK_LINE(185)
	this->angle = (int)0;
	HX_STACK_LINE(180)
	this->alpha = (int)1;
	HX_STACK_LINE(171)
	this->height = (int)0;
	HX_STACK_LINE(167)
	this->width = (int)0;
	HX_STACK_LINE(162)
	this->pixelPerfectRender = true;
	HX_STACK_LINE(149)
	this->useBgAlphaBlending = false;
	struct _Function_1_1{
		inline static Float Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",91,0xe7aeb95a)
			{
				HX_STACK_LINE(91)
				int _g = ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->_stepMS)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(91)
				return (Float((int)60) / Float(_g));
			}
			return null();
		}
	};
	HX_STACK_LINE(91)
	this->followLerp = _Function_1_1::Block();
	HX_STACK_LINE(52)
	this->y = (int)0;
	HX_STACK_LINE(47)
	this->x = (int)0;
	HX_STACK_LINE(506)
	super::__construct();
	HX_STACK_LINE(508)
	::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(508)
	{
		HX_STACK_LINE(508)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(508)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(508)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(508)
		point->_inPool = false;
		HX_STACK_LINE(508)
		_g = point;
	}
	HX_STACK_LINE(508)
	this->_scrollTarget = _g;
	HX_STACK_LINE(509)
	::flixel::math::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(509)
	{
		HX_STACK_LINE(509)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(509)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(509)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(509)
		point->_inPool = false;
		HX_STACK_LINE(509)
		_g1 = point;
	}
	HX_STACK_LINE(509)
	this->scroll = _g1;
	HX_STACK_LINE(510)
	::flixel::math::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(510)
	{
		HX_STACK_LINE(510)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(510)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(510)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(510)
		point->_inPool = false;
		HX_STACK_LINE(510)
		_g2 = point;
	}
	HX_STACK_LINE(510)
	this->followLead = _g2;
	HX_STACK_LINE(511)
	::flixel::math::FlxPoint _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(511)
	{
		HX_STACK_LINE(511)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(511)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(511)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(511)
		point->_inPool = false;
		HX_STACK_LINE(511)
		_g3 = point;
	}
	HX_STACK_LINE(511)
	this->targetOffset = _g3;
	HX_STACK_LINE(512)
	::flixel::math::FlxPoint _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(512)
	{
		HX_STACK_LINE(512)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(512)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(512)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(512)
		point->_inPool = false;
		HX_STACK_LINE(512)
		_g4 = point;
	}
	HX_STACK_LINE(512)
	this->_point = _g4;
	HX_STACK_LINE(513)
	::flixel::math::FlxPoint _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(513)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(513)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(513)
		point->_inPool = false;
		HX_STACK_LINE(513)
		_g5 = point;
	}
	HX_STACK_LINE(513)
	this->_flashOffset = _g5;
	HX_STACK_LINE(515)
	this->set_x(X);
	HX_STACK_LINE(516)
	this->set_y(Y);
	HX_STACK_LINE(519)
	this->set_width((  (((Width <= (int)0))) ? int(::flixel::FlxG_obj::width) : int(Width) ));
	HX_STACK_LINE(520)
	this->set_height((  (((Height <= (int)0))) ? int(::flixel::FlxG_obj::height) : int(Height) ));
	HX_STACK_LINE(532)
	::openfl::_v2::display::Sprite _g6 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(532)
	this->canvas = _g6;
	HX_STACK_LINE(535)
	this->set_color((int)-1);
	HX_STACK_LINE(537)
	::openfl::_v2::display::Sprite _g7 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(537)
	this->flashSprite = _g7;
	HX_STACK_LINE(539)
	::openfl::_v2::display::Sprite _g8 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(539)
	this->_scrollRect = _g8;
	HX_STACK_LINE(540)
	this->flashSprite->addChild(this->_scrollRect);
	HX_STACK_LINE(545)
	this->_scrollRect->addChild(this->canvas);
	HX_STACK_LINE(547)
	::openfl::_v2::geom::Rectangle _g9 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(547)
	this->_flashRect = _g9;
	HX_STACK_LINE(548)
	::openfl::_v2::geom::Point _g10 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(548)
	this->_flashPoint = _g10;
	HX_STACK_LINE(550)
	::flixel::math::FlxPoint _g11;		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(550)
	{
		HX_STACK_LINE(550)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(550)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(550)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(550)
		point->_inPool = false;
		HX_STACK_LINE(550)
		_g11 = point;
	}
	HX_STACK_LINE(550)
	this->_fxShakeOffset = _g11;
	HX_STACK_LINE(557)
	::openfl::_v2::display::Sprite _g12 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(557)
	this->debugLayer = _g12;
	HX_STACK_LINE(558)
	this->_scrollRect->addChild(this->debugLayer);
	HX_STACK_LINE(562)
	this->set_zoom(Zoom);
	HX_STACK_LINE(564)
	this->initialZoom = this->zoom;
	HX_STACK_LINE(566)
	::openfl::_v2::geom::Rectangle _g13 = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(566)
	this->_scrollRect->set_scrollRect(_g13);
	HX_STACK_LINE(568)
	this->updateScrollRect();
	HX_STACK_LINE(569)
	this->updateFlashOffset();
	HX_STACK_LINE(570)
	this->updateFlashSpritePosition();
	HX_STACK_LINE(571)
	this->updateInternalSpritePositions();
	HX_STACK_LINE(573)
	int _g14 = ::flixel::FlxG_obj::cameras->get_bgColor();		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(573)
	this->bgColor = _g14;
}
;
	return null();
}

//FlxCamera_obj::~FlxCamera_obj() { }

Dynamic FlxCamera_obj::__CreateEmpty() { return  new FlxCamera_obj; }
hx::ObjectPtr< FlxCamera_obj > FlxCamera_obj::__new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom)
{  hx::ObjectPtr< FlxCamera_obj > result = new FlxCamera_obj();
	result->__construct(__o_X,__o_Y,__o_Width,__o_Height,__o_Zoom);
	return result;}

Dynamic FlxCamera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCamera_obj > result = new FlxCamera_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

::flixel::graphics::tile::FlxDrawTilesItem FlxCamera_obj::getDrawTilesItem( ::flixel::graphics::FlxGraphic ObjGraphics,bool ObjColored,int ObjBlending,hx::Null< bool >  __o_ObjAntialiasing){
bool ObjAntialiasing = __o_ObjAntialiasing.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","getDrawTilesItem",0x9529a0a7,"flixel.FlxCamera.getDrawTilesItem","flixel/FlxCamera.hx",346,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjGraphics,"ObjGraphics")
	HX_STACK_ARG(ObjColored,"ObjColored")
	HX_STACK_ARG(ObjBlending,"ObjBlending")
	HX_STACK_ARG(ObjAntialiasing,"ObjAntialiasing")
{
		HX_STACK_LINE(347)
		::flixel::graphics::tile::FlxDrawTilesItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
		HX_STACK_LINE(349)
		if (((bool((bool((bool((bool((bool((this->_currentDrawItem != null())) && bool((this->_currentDrawItem->type == ::flixel::graphics::tile::FlxDrawItemType_obj::TILES)))) && bool((this->_headTiles->graphics == ObjGraphics)))) && bool((this->_headTiles->colored == ObjColored)))) && bool((this->_headTiles->blending == ObjBlending)))) && bool((this->_headTiles->antialiasing == ObjAntialiasing))))){
			HX_STACK_LINE(355)
			return this->_headTiles;
		}
		HX_STACK_LINE(358)
		if (((::flixel::FlxCamera_obj::_storageTilesHead != null()))){
			HX_STACK_LINE(360)
			itemToReturn = ::flixel::FlxCamera_obj::_storageTilesHead;
			HX_STACK_LINE(361)
			::flixel::graphics::tile::FlxDrawTilesItem newHead = ::flixel::FlxCamera_obj::_storageTilesHead->nextTyped;		HX_STACK_VAR(newHead,"newHead");
			HX_STACK_LINE(362)
			itemToReturn->reset();
			HX_STACK_LINE(363)
			::flixel::FlxCamera_obj::_storageTilesHead = newHead;
		}
		else{
			HX_STACK_LINE(367)
			::flixel::graphics::tile::FlxDrawTilesItem _g = ::flixel::graphics::tile::FlxDrawTilesItem_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(367)
			itemToReturn = _g;
		}
		HX_STACK_LINE(370)
		itemToReturn->graphics = ObjGraphics;
		HX_STACK_LINE(371)
		itemToReturn->antialiasing = ObjAntialiasing;
		HX_STACK_LINE(372)
		itemToReturn->colored = ObjColored;
		HX_STACK_LINE(373)
		itemToReturn->blending = ObjBlending;
		HX_STACK_LINE(375)
		itemToReturn->nextTyped = this->_headTiles;
		HX_STACK_LINE(376)
		this->_headTiles = itemToReturn;
		HX_STACK_LINE(378)
		if (((this->_headOfDrawStack == null()))){
			HX_STACK_LINE(380)
			this->_headOfDrawStack = itemToReturn;
		}
		HX_STACK_LINE(383)
		if (((this->_currentDrawItem != null()))){
			HX_STACK_LINE(385)
			this->_currentDrawItem->next = itemToReturn;
		}
		HX_STACK_LINE(388)
		this->_currentDrawItem = itemToReturn;
		HX_STACK_LINE(390)
		return itemToReturn;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,getDrawTilesItem,return )

::flixel::graphics::tile::FlxDrawTrianglesItem FlxCamera_obj::getDrawTrianglesItem( ::flixel::graphics::FlxGraphic ObjGraphics,hx::Null< bool >  __o_ObjAntialiasing,hx::Null< bool >  __o_ObjColored,hx::Null< int >  __o_ObjBlending){
bool ObjAntialiasing = __o_ObjAntialiasing.Default(false);
bool ObjColored = __o_ObjColored.Default(false);
int ObjBlending = __o_ObjBlending.Default(0);
	HX_STACK_FRAME("flixel.FlxCamera","getDrawTrianglesItem",0xdbe1424d,"flixel.FlxCamera.getDrawTrianglesItem","flixel/FlxCamera.hx",395,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjGraphics,"ObjGraphics")
	HX_STACK_ARG(ObjAntialiasing,"ObjAntialiasing")
	HX_STACK_ARG(ObjColored,"ObjColored")
	HX_STACK_ARG(ObjBlending,"ObjBlending")
{
		HX_STACK_LINE(396)
		::flixel::graphics::tile::FlxDrawTrianglesItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
		HX_STACK_LINE(398)
		if (((bool((bool((bool((bool((bool((this->_currentDrawItem != null())) && bool((this->_currentDrawItem->type == ::flixel::graphics::tile::FlxDrawItemType_obj::TRIANGLES)))) && bool((this->_headTriangles->graphics == ObjGraphics)))) && bool((this->_headTriangles->antialiasing == ObjAntialiasing)))) && bool((this->_headTriangles->colored == ObjColored)))) && bool((this->_headTriangles->blending == ObjBlending))))){
			HX_STACK_LINE(404)
			return this->_headTriangles;
		}
		HX_STACK_LINE(407)
		return this->getNewDrawTrianglesItem(ObjGraphics,ObjAntialiasing,ObjColored,ObjBlending);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,getDrawTrianglesItem,return )

::flixel::graphics::tile::FlxDrawTrianglesItem FlxCamera_obj::getNewDrawTrianglesItem( ::flixel::graphics::FlxGraphic ObjGraphics,hx::Null< bool >  __o_ObjAntialiasing,hx::Null< bool >  __o_ObjColored,hx::Null< int >  __o_ObjBlending){
bool ObjAntialiasing = __o_ObjAntialiasing.Default(false);
bool ObjColored = __o_ObjColored.Default(false);
int ObjBlending = __o_ObjBlending.Default(0);
	HX_STACK_FRAME("flixel.FlxCamera","getNewDrawTrianglesItem",0xcd894887,"flixel.FlxCamera.getNewDrawTrianglesItem","flixel/FlxCamera.hx",412,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjGraphics,"ObjGraphics")
	HX_STACK_ARG(ObjAntialiasing,"ObjAntialiasing")
	HX_STACK_ARG(ObjColored,"ObjColored")
	HX_STACK_ARG(ObjBlending,"ObjBlending")
{
		HX_STACK_LINE(413)
		::flixel::graphics::tile::FlxDrawTrianglesItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
		HX_STACK_LINE(415)
		if (((::flixel::FlxCamera_obj::_storageTrianglesHead != null()))){
			HX_STACK_LINE(417)
			itemToReturn = ::flixel::FlxCamera_obj::_storageTrianglesHead;
			HX_STACK_LINE(418)
			::flixel::graphics::tile::FlxDrawTrianglesItem newHead = ::flixel::FlxCamera_obj::_storageTrianglesHead->nextTyped;		HX_STACK_VAR(newHead,"newHead");
			HX_STACK_LINE(419)
			itemToReturn->reset();
			HX_STACK_LINE(420)
			::flixel::FlxCamera_obj::_storageTrianglesHead = newHead;
		}
		else{
			HX_STACK_LINE(424)
			::flixel::graphics::tile::FlxDrawTrianglesItem _g = ::flixel::graphics::tile::FlxDrawTrianglesItem_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(424)
			itemToReturn = _g;
		}
		HX_STACK_LINE(427)
		itemToReturn->graphics = ObjGraphics;
		HX_STACK_LINE(428)
		itemToReturn->antialiasing = ObjAntialiasing;
		HX_STACK_LINE(429)
		itemToReturn->colored = ObjColored;
		HX_STACK_LINE(430)
		itemToReturn->blending = ObjBlending;
		HX_STACK_LINE(432)
		itemToReturn->nextTyped = this->_headTriangles;
		HX_STACK_LINE(433)
		this->_headTriangles = itemToReturn;
		HX_STACK_LINE(435)
		if (((this->_headOfDrawStack == null()))){
			HX_STACK_LINE(437)
			this->_headOfDrawStack = itemToReturn;
		}
		HX_STACK_LINE(440)
		if (((this->_currentDrawItem != null()))){
			HX_STACK_LINE(442)
			this->_currentDrawItem->next = itemToReturn;
		}
		HX_STACK_LINE(445)
		this->_currentDrawItem = itemToReturn;
		HX_STACK_LINE(447)
		return itemToReturn;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,getNewDrawTrianglesItem,return )

Void FlxCamera_obj::clearDrawStack( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","clearDrawStack",0x8d7c5ba0,"flixel.FlxCamera.clearDrawStack","flixel/FlxCamera.hx",452,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(453)
		::flixel::graphics::tile::FlxDrawTilesItem currTiles = this->_headTiles;		HX_STACK_VAR(currTiles,"currTiles");
		HX_STACK_LINE(454)
		::flixel::graphics::tile::FlxDrawTilesItem newTilesHead;		HX_STACK_VAR(newTilesHead,"newTilesHead");
		HX_STACK_LINE(456)
		while((true)){
			HX_STACK_LINE(456)
			if ((!(((currTiles != null()))))){
				HX_STACK_LINE(456)
				break;
			}
			HX_STACK_LINE(458)
			newTilesHead = currTiles->nextTyped;
			HX_STACK_LINE(459)
			currTiles->reset();
			HX_STACK_LINE(460)
			currTiles->nextTyped = ::flixel::FlxCamera_obj::_storageTilesHead;
			HX_STACK_LINE(461)
			::flixel::FlxCamera_obj::_storageTilesHead = currTiles;
			HX_STACK_LINE(462)
			currTiles = newTilesHead;
		}
		HX_STACK_LINE(465)
		::flixel::graphics::tile::FlxDrawTrianglesItem currTriangles = this->_headTriangles;		HX_STACK_VAR(currTriangles,"currTriangles");
		HX_STACK_LINE(466)
		::flixel::graphics::tile::FlxDrawTrianglesItem newTrianglesHead;		HX_STACK_VAR(newTrianglesHead,"newTrianglesHead");
		HX_STACK_LINE(468)
		while((true)){
			HX_STACK_LINE(468)
			if ((!(((currTriangles != null()))))){
				HX_STACK_LINE(468)
				break;
			}
			HX_STACK_LINE(470)
			newTrianglesHead = currTriangles->nextTyped;
			HX_STACK_LINE(471)
			currTriangles->reset();
			HX_STACK_LINE(472)
			currTriangles->nextTyped = ::flixel::FlxCamera_obj::_storageTrianglesHead;
			HX_STACK_LINE(473)
			::flixel::FlxCamera_obj::_storageTrianglesHead = currTriangles;
			HX_STACK_LINE(474)
			currTriangles = newTrianglesHead;
		}
		HX_STACK_LINE(477)
		this->_currentDrawItem = null();
		HX_STACK_LINE(478)
		this->_headOfDrawStack = null();
		HX_STACK_LINE(479)
		this->_headTiles = null();
		HX_STACK_LINE(480)
		this->_headTriangles = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,clearDrawStack,(void))

Void FlxCamera_obj::render( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","render",0x1f11e49f,"flixel.FlxCamera.render","flixel/FlxCamera.hx",485,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(486)
		::flixel::graphics::tile::FlxDrawBaseItem currItem = this->_headOfDrawStack;		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(487)
		while((true)){
			HX_STACK_LINE(487)
			if ((!(((currItem != null()))))){
				HX_STACK_LINE(487)
				break;
			}
			HX_STACK_LINE(489)
			currItem->render(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(490)
			currItem = currItem->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,render,(void))

Void FlxCamera_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","destroy",0xb607d391,"flixel.FlxCamera.destroy","flixel/FlxCamera.hx",580,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(581)
		::flixel::util::FlxDestroyUtil_obj::removeChild(this->flashSprite,this->_scrollRect);
		HX_STACK_LINE(591)
		::flixel::util::FlxDestroyUtil_obj::removeChild(this->_scrollRect,this->debugLayer);
		HX_STACK_LINE(592)
		this->debugLayer = null();
		HX_STACK_LINE(595)
		::flixel::util::FlxDestroyUtil_obj::removeChild(this->_scrollRect,this->canvas);
		HX_STACK_LINE(596)
		if (((this->canvas != null()))){
			HX_STACK_LINE(598)
			{
				HX_STACK_LINE(598)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(598)
				int _g = this->canvas->get_numChildren();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(598)
				while((true)){
					HX_STACK_LINE(598)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(598)
						break;
					}
					HX_STACK_LINE(598)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(600)
					this->canvas->removeChildAt((int)0);
				}
			}
			HX_STACK_LINE(602)
			this->canvas = null();
		}
		HX_STACK_LINE(605)
		if (((this->_headOfDrawStack != null()))){
			HX_STACK_LINE(607)
			this->clearDrawStack();
		}
		HX_STACK_LINE(611)
		::flixel::math::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->scroll);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(611)
		this->scroll = _g;
		HX_STACK_LINE(612)
		::flixel::math::FlxPoint _g1 = ::flixel::util::FlxDestroyUtil_obj::put(this->targetOffset);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(612)
		this->targetOffset = _g1;
		HX_STACK_LINE(613)
		::flixel::math::FlxRect _g2 = ::flixel::util::FlxDestroyUtil_obj::put(this->deadzone);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(613)
		this->deadzone = _g2;
		HX_STACK_LINE(615)
		this->target = null();
		HX_STACK_LINE(616)
		this->flashSprite = null();
		HX_STACK_LINE(617)
		this->_scrollRect = null();
		HX_STACK_LINE(618)
		this->_flashRect = null();
		HX_STACK_LINE(619)
		this->_flashPoint = null();
		HX_STACK_LINE(620)
		this->_fxFlashComplete = null();
		HX_STACK_LINE(621)
		this->_fxFadeComplete = null();
		HX_STACK_LINE(622)
		this->_fxShakeComplete = null();
		HX_STACK_LINE(623)
		this->_fxShakeOffset = null();
		HX_STACK_LINE(625)
		this->super::destroy();
	}
return null();
}


Void FlxCamera_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxCamera","update",0xa0edff52,"flixel.FlxCamera.update","flixel/FlxCamera.hx",632,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(634)
		if (((this->target != null()))){
			HX_STACK_LINE(636)
			this->updateFollow();
		}
		HX_STACK_LINE(639)
		this->updateScroll();
		HX_STACK_LINE(640)
		this->updateFlash(elapsed);
		HX_STACK_LINE(641)
		this->updateFade(elapsed);
		HX_STACK_LINE(642)
		this->updateShake(elapsed);
		HX_STACK_LINE(644)
		this->updateFlashSpritePosition();
	}
return null();
}


Void FlxCamera_obj::updateScroll( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateScroll",0x3fd094ff,"flixel.FlxCamera.updateScroll","flixel/FlxCamera.hx",651,0xe7aeb95a)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::flixel::FlxCamera_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",653,0xe7aeb95a)
				{
					HX_STACK_LINE(653)
					Float Value = __this->scroll->x;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(653)
					Dynamic Min = __this->minScrollX;		HX_STACK_VAR(Min,"Min");
					HX_STACK_LINE(653)
					Dynamic Max;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(653)
					if (((__this->maxScrollX != null()))){
						HX_STACK_LINE(653)
						Max = (__this->maxScrollX - __this->width);
					}
					else{
						HX_STACK_LINE(653)
						Max = null();
					}
					HX_STACK_LINE(653)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(653)
					if (((bool((Min != null())) && bool((Value < Min))))){
						HX_STACK_LINE(653)
						lowerBound = Min;
					}
					else{
						HX_STACK_LINE(653)
						lowerBound = Value;
					}
					HX_STACK_LINE(653)
					return (  (((bool((Max != null())) && bool((lowerBound > Max))))) ? Dynamic(Max) : Dynamic(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(653)
		this->scroll->set_x(_Function_1_1::Block(this));
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::flixel::FlxCamera_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",654,0xe7aeb95a)
				{
					HX_STACK_LINE(654)
					Float Value = __this->scroll->y;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(654)
					Dynamic Min = __this->minScrollY;		HX_STACK_VAR(Min,"Min");
					HX_STACK_LINE(654)
					Dynamic Max;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(654)
					if (((__this->maxScrollY != null()))){
						HX_STACK_LINE(654)
						Max = (__this->maxScrollY - __this->height);
					}
					else{
						HX_STACK_LINE(654)
						Max = null();
					}
					HX_STACK_LINE(654)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(654)
					if (((bool((Min != null())) && bool((Value < Min))))){
						HX_STACK_LINE(654)
						lowerBound = Min;
					}
					else{
						HX_STACK_LINE(654)
						lowerBound = Value;
					}
					HX_STACK_LINE(654)
					return (  (((bool((Max != null())) && bool((lowerBound > Max))))) ? Dynamic(Max) : Dynamic(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(654)
		this->scroll->set_y(_Function_1_2::Block(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateScroll,(void))

Void FlxCamera_obj::updateFollow( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFollow",0xf2024e63,"flixel.FlxCamera.updateFollow","flixel/FlxCamera.hx",661,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(661)
		if (((this->deadzone == null()))){
			HX_STACK_LINE(663)
			this->target->getMidpoint(this->_point);
			HX_STACK_LINE(664)
			this->_point->addPoint(this->targetOffset);
			HX_STACK_LINE(665)
			{
				HX_STACK_LINE(665)
				::flixel::math::FlxPoint point = this->_point;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(665)
				this->scroll->set((point->x - (this->width * 0.5)),(point->y - (this->height * 0.5)));
				HX_STACK_LINE(665)
				if ((point->_weak)){
					HX_STACK_LINE(665)
					point->put();
				}
			}
		}
		else{
			HX_STACK_LINE(669)
			Float edge;		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(670)
			Float targetX = (this->target->x + this->targetOffset->x);		HX_STACK_VAR(targetX,"targetX");
			HX_STACK_LINE(671)
			Float targetY = (this->target->y + this->targetOffset->y);		HX_STACK_VAR(targetY,"targetY");
			HX_STACK_LINE(673)
			if (((this->style == ::flixel::FlxCameraFollowStyle_obj::SCREEN_BY_SCREEN))){
				HX_STACK_LINE(675)
				if (((targetX >= (this->scroll->x + this->width)))){
					HX_STACK_LINE(677)
					::flixel::math::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(677)
					_g->set_x((_g->x + this->width));
				}
				else{
					HX_STACK_LINE(679)
					if (((targetX < this->scroll->x))){
						HX_STACK_LINE(681)
						::flixel::math::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(681)
						_g->set_x((_g->x - this->width));
					}
				}
				HX_STACK_LINE(684)
				if (((targetY >= (this->scroll->y + this->height)))){
					HX_STACK_LINE(686)
					::flixel::math::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(686)
					_g->set_y((_g->y + this->height));
				}
				else{
					HX_STACK_LINE(688)
					if (((targetY < this->scroll->y))){
						HX_STACK_LINE(690)
						::flixel::math::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(690)
						_g->set_y((_g->y - this->height));
					}
				}
			}
			else{
				HX_STACK_LINE(695)
				edge = (targetX - this->deadzone->x);
				HX_STACK_LINE(696)
				if (((this->_scrollTarget->x > edge))){
					HX_STACK_LINE(698)
					this->_scrollTarget->set_x(edge);
				}
				HX_STACK_LINE(700)
				Float _g = this->target->get_width();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(700)
				Float _g1 = (targetX + _g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(700)
				Float _g2 = (_g1 - this->deadzone->x);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(700)
				Float _g3 = (_g2 - this->deadzone->width);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(700)
				edge = _g3;
				HX_STACK_LINE(701)
				if (((this->_scrollTarget->x < edge))){
					HX_STACK_LINE(703)
					this->_scrollTarget->set_x(edge);
				}
				HX_STACK_LINE(706)
				edge = (targetY - this->deadzone->y);
				HX_STACK_LINE(707)
				if (((this->_scrollTarget->y > edge))){
					HX_STACK_LINE(709)
					this->_scrollTarget->set_y(edge);
				}
				HX_STACK_LINE(711)
				Float _g4 = this->target->get_height();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(711)
				Float _g5 = (targetY + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(711)
				Float _g6 = (_g5 - this->deadzone->y);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(711)
				Float _g7 = (_g6 - this->deadzone->height);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(711)
				edge = _g7;
				HX_STACK_LINE(712)
				if (((this->_scrollTarget->y < edge))){
					HX_STACK_LINE(714)
					this->_scrollTarget->set_y(edge);
				}
			}
			HX_STACK_LINE(718)
			if ((::Std_obj::is(this->target,hx::ClassOf< ::flixel::FlxSprite >()))){
				HX_STACK_LINE(720)
				if (((this->_lastTargetPosition == null()))){
					HX_STACK_LINE(722)
					::flixel::math::FlxPoint _g8;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(722)
					{
						HX_STACK_LINE(722)
						::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(this->target->x,this->target->y);		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(722)
						point->_inPool = false;
						HX_STACK_LINE(722)
						_g8 = point;
					}
					HX_STACK_LINE(722)
					this->_lastTargetPosition = _g8;
				}
				HX_STACK_LINE(724)
				{
					HX_STACK_LINE(724)
					::flixel::math::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(724)
					_g->set_x((_g->x + (((this->target->x - this->_lastTargetPosition->x)) * this->followLead->x)));
				}
				HX_STACK_LINE(725)
				{
					HX_STACK_LINE(725)
					::flixel::math::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(725)
					_g->set_y((_g->y + (((this->target->y - this->_lastTargetPosition->y)) * this->followLead->y)));
				}
				HX_STACK_LINE(727)
				this->_lastTargetPosition->set_x(this->target->x);
				HX_STACK_LINE(728)
				this->_lastTargetPosition->set_y(this->target->y);
			}
			HX_STACK_LINE(731)
			int _g9 = ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->_stepMS)));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(731)
			Float _g10 = (Float((int)60) / Float(_g9));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(731)
			if (((this->followLerp >= _g10))){
				HX_STACK_LINE(733)
				::flixel::math::FlxPoint _this = this->scroll;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(733)
				::flixel::math::FlxPoint point = this->_scrollTarget;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(733)
				_this->set_x(point->x);
				HX_STACK_LINE(733)
				_this->set_y(point->y);
				HX_STACK_LINE(733)
				_this;
			}
			else{
				HX_STACK_LINE(737)
				{
					HX_STACK_LINE(737)
					::flixel::math::FlxPoint _g = this->scroll;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(737)
					int _g11 = ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->_stepMS)));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(737)
					Float _g12 = ((((this->_scrollTarget->x - this->scroll->x)) * this->followLerp) * _g11);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(737)
					Float _g13 = (Float(_g12) / Float((int)60));		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(737)
					Float _g14 = (_g->x + _g13);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(737)
					_g->set_x(_g14);
				}
				HX_STACK_LINE(738)
				{
					HX_STACK_LINE(738)
					::flixel::math::FlxPoint _g = this->scroll;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(738)
					int _g15 = ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->_stepMS)));		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(738)
					Float _g16 = ((((this->_scrollTarget->y - this->scroll->y)) * this->followLerp) * _g15);		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(738)
					Float _g17 = (Float(_g16) / Float((int)60));		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(738)
					Float _g18 = (_g->y + _g17);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(738)
					_g->set_y(_g18);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFollow,(void))

Void FlxCamera_obj::updateFlash( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFlash",0x43f2dcfe,"flixel.FlxCamera.updateFlash","flixel/FlxCamera.hx",746,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(746)
		if (((this->_fxFlashAlpha > 0.0))){
			HX_STACK_LINE(748)
			hx::SubEq(this->_fxFlashAlpha,(Float(elapsed) / Float(this->_fxFlashDuration)));
			HX_STACK_LINE(749)
			if (((bool((this->_fxFlashAlpha <= (int)0)) && bool((this->_fxFlashComplete_dyn() != null()))))){
				HX_STACK_LINE(751)
				this->_fxFlashComplete();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,updateFlash,(void))

Void FlxCamera_obj::updateFade( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFade",0xaec3f1ee,"flixel.FlxCamera.updateFade","flixel/FlxCamera.hx",758,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(758)
		if (((bool((this->_fxFadeAlpha > 0.0)) && bool((this->_fxFadeAlpha < 1.0))))){
			HX_STACK_LINE(760)
			if ((this->_fxFadeIn)){
				HX_STACK_LINE(762)
				hx::SubEq(this->_fxFadeAlpha,(Float(elapsed) / Float(this->_fxFadeDuration)));
				HX_STACK_LINE(763)
				if (((this->_fxFadeAlpha <= 0.0))){
					HX_STACK_LINE(765)
					this->_fxFadeAlpha = 0.0;
					HX_STACK_LINE(766)
					if (((this->_fxFadeComplete_dyn() != null()))){
						HX_STACK_LINE(768)
						this->_fxFadeComplete();
					}
				}
			}
			else{
				HX_STACK_LINE(774)
				hx::AddEq(this->_fxFadeAlpha,(Float(elapsed) / Float(this->_fxFadeDuration)));
				HX_STACK_LINE(775)
				if (((this->_fxFadeAlpha >= 1.0))){
					HX_STACK_LINE(777)
					this->_fxFadeAlpha = 1.0;
					HX_STACK_LINE(778)
					if (((this->_fxFadeComplete_dyn() != null()))){
						HX_STACK_LINE(780)
						this->_fxFadeComplete();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,updateFade,(void))

Void FlxCamera_obj::updateShake( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateShake",0xbd838614,"flixel.FlxCamera.updateShake","flixel/FlxCamera.hx",789,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(789)
		if (((this->_fxShakeDuration > (int)0))){
			HX_STACK_LINE(791)
			hx::SubEq(this->_fxShakeDuration,elapsed);
			HX_STACK_LINE(792)
			if (((this->_fxShakeDuration <= (int)0))){
				HX_STACK_LINE(794)
				this->_fxShakeOffset->set(null(),null());
				HX_STACK_LINE(795)
				if (((this->_fxShakeComplete_dyn() != null()))){
					HX_STACK_LINE(797)
					this->_fxShakeComplete();
				}
			}
			else{
				HX_STACK_LINE(802)
				if (((bool((this->_fxShakeDirection == ::flixel::FlxCameraShakeDirection_obj::BOTH_AXES)) || bool((this->_fxShakeDirection == ::flixel::FlxCameraShakeDirection_obj::X_AXIS))))){
					HX_STACK_LINE(804)
					Float _g = ::flixel::FlxG_obj::random->_float((-(this->_fxShakeIntensity) * this->width),(this->_fxShakeIntensity * this->width),null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(804)
					Float _g1 = (_g * this->zoom);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(804)
					this->_fxShakeOffset->set_x(_g1);
				}
				HX_STACK_LINE(806)
				if (((bool((this->_fxShakeDirection == ::flixel::FlxCameraShakeDirection_obj::BOTH_AXES)) || bool((this->_fxShakeDirection == ::flixel::FlxCameraShakeDirection_obj::Y_AXIS))))){
					HX_STACK_LINE(808)
					Float _g2 = ::flixel::FlxG_obj::random->_float((-(this->_fxShakeIntensity) * this->height),(this->_fxShakeIntensity * this->height),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(808)
					Float _g3 = (_g2 * this->zoom);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(808)
					this->_fxShakeOffset->set_y(_g3);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,updateShake,(void))

Void FlxCamera_obj::updateFlashSpritePosition( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFlashSpritePosition",0x5aef376c,"flixel.FlxCamera.updateFlashSpritePosition","flixel/FlxCamera.hx",816,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(816)
		if (((this->flashSprite != null()))){
			HX_STACK_LINE(818)
			this->flashSprite->set_x(((this->x * ::flixel::FlxG_obj::scaleMode->scale->x) + this->_flashOffset->x));
			HX_STACK_LINE(819)
			this->flashSprite->set_y(((this->y * ::flixel::FlxG_obj::scaleMode->scale->y) + this->_flashOffset->y));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFlashSpritePosition,(void))

Void FlxCamera_obj::updateFlashOffset( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFlashOffset",0x0e9fbb31,"flixel.FlxCamera.updateFlashOffset","flixel/FlxCamera.hx",824,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(825)
		this->_flashOffset->set_x((((this->width * 0.5) * ::flixel::FlxG_obj::scaleMode->scale->x) * this->initialZoom));
		HX_STACK_LINE(826)
		this->_flashOffset->set_y((((this->height * 0.5) * ::flixel::FlxG_obj::scaleMode->scale->y) * this->initialZoom));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFlashOffset,(void))

Void FlxCamera_obj::updateScrollRect( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateScrollRect",0xbf58f9c3,"flixel.FlxCamera.updateScrollRect","flixel/FlxCamera.hx",830,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(831)
		::openfl::_v2::geom::Rectangle rect;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(831)
		if (((this->_scrollRect != null()))){
			HX_STACK_LINE(831)
			rect = this->_scrollRect->get_scrollRect();
		}
		else{
			HX_STACK_LINE(831)
			rect = null();
		}
		HX_STACK_LINE(833)
		if (((rect != null()))){
			HX_STACK_LINE(835)
			Float _g = rect->y = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(835)
			rect->x = _g;
			HX_STACK_LINE(836)
			rect->width = ((this->width * this->initialZoom) * ::flixel::FlxG_obj::scaleMode->scale->x);
			HX_STACK_LINE(837)
			rect->height = ((this->height * this->initialZoom) * ::flixel::FlxG_obj::scaleMode->scale->y);
			HX_STACK_LINE(838)
			this->_scrollRect->set_scrollRect(rect);
			HX_STACK_LINE(839)
			this->_scrollRect->set_x((-0.5 * rect->width));
			HX_STACK_LINE(840)
			this->_scrollRect->set_y((-0.5 * rect->height));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateScrollRect,(void))

Void FlxCamera_obj::updateInternalSpritePositions( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateInternalSpritePositions",0x7d5baef6,"flixel.FlxCamera.updateInternalSpritePositions","flixel/FlxCamera.hx",855,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(855)
		if (((this->canvas != null()))){
			HX_STACK_LINE(857)
			this->canvas->set_x((((-0.5 * this->width) * ((this->scaleX - this->initialZoom))) * ::flixel::FlxG_obj::scaleMode->scale->x));
			HX_STACK_LINE(858)
			this->canvas->set_y((((-0.5 * this->height) * ((this->scaleY - this->initialZoom))) * ::flixel::FlxG_obj::scaleMode->scale->y));
			HX_STACK_LINE(861)
			if (((this->debugLayer != null()))){
				HX_STACK_LINE(863)
				Float _g = this->canvas->get_x();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(863)
				this->debugLayer->set_x(_g);
				HX_STACK_LINE(864)
				Float _g1 = this->canvas->get_y();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(864)
				this->debugLayer->set_y(_g1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateInternalSpritePositions,(void))

Void FlxCamera_obj::follow( ::flixel::FlxObject Target,::flixel::FlxCameraFollowStyle Style,::flixel::math::FlxPoint Offset,hx::Null< Float >  __o_Lerp){
Float Lerp = __o_Lerp.Default(1);
	HX_STACK_FRAME("flixel.FlxCamera","follow",0x137f0aba,"flixel.FlxCamera.follow","flixel/FlxCamera.hx",881,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(Offset,"Offset")
	HX_STACK_ARG(Lerp,"Lerp")
{
		HX_STACK_LINE(882)
		if (((Style == null()))){
			HX_STACK_LINE(884)
			Style = ::flixel::FlxCameraFollowStyle_obj::LOCKON;
		}
		HX_STACK_LINE(887)
		this->style = Style;
		HX_STACK_LINE(888)
		this->target = Target;
		HX_STACK_LINE(889)
		this->set_followLerp(Lerp);
		HX_STACK_LINE(890)
		Float helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(891)
		Float w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(892)
		Float h = (int)0;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(893)
		this->_lastTargetPosition = null();
		HX_STACK_LINE(895)
		switch( (int)(Style->__Index())){
			case (int)1: {
				HX_STACK_LINE(898)
				Float w1;		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(898)
				w1 = ((Float(this->width) / Float((int)8)) + ((  (((Offset != null()))) ? Float(Offset->x) : Float((int)0) )));
				HX_STACK_LINE(899)
				Float h1;		HX_STACK_VAR(h1,"h1");
				HX_STACK_LINE(899)
				h1 = ((Float(this->height) / Float((int)3)) + ((  (((Offset != null()))) ? Float(Offset->y) : Float((int)0) )));
				HX_STACK_LINE(900)
				::flixel::math::FlxRect _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(900)
				{
					HX_STACK_LINE(900)
					::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(900)
					{
						HX_STACK_LINE(900)
						::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(900)
						_this->x = (Float(((this->width - w1))) / Float((int)2));
						HX_STACK_LINE(900)
						_this->y = ((Float(((this->height - h1))) / Float((int)2)) - (h1 * 0.25));
						HX_STACK_LINE(900)
						_this->width = w1;
						HX_STACK_LINE(900)
						_this->height = h1;
						HX_STACK_LINE(900)
						rect = _this;
					}
					HX_STACK_LINE(900)
					rect->_inPool = false;
					HX_STACK_LINE(900)
					_g = rect;
				}
				HX_STACK_LINE(900)
				this->deadzone = _g;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(903)
				Float _g1 = ::Math_obj::max(this->width,this->height);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(903)
				Float _g2 = (Float(_g1) / Float((int)4));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(903)
				helper = _g2;
				HX_STACK_LINE(904)
				::flixel::math::FlxRect _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(904)
				{
					HX_STACK_LINE(904)
					::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(904)
					{
						HX_STACK_LINE(904)
						::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(904)
						_this->x = (Float(((this->width - helper))) / Float((int)2));
						HX_STACK_LINE(904)
						_this->y = (Float(((this->height - helper))) / Float((int)2));
						HX_STACK_LINE(904)
						_this->width = helper;
						HX_STACK_LINE(904)
						_this->height = helper;
						HX_STACK_LINE(904)
						rect = _this;
					}
					HX_STACK_LINE(904)
					rect->_inPool = false;
					HX_STACK_LINE(904)
					_g3 = rect;
				}
				HX_STACK_LINE(904)
				this->deadzone = _g3;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(907)
				Float _g4 = ::Math_obj::max(this->width,this->height);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(907)
				Float _g5 = (Float(_g4) / Float((int)8));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(907)
				helper = _g5;
				HX_STACK_LINE(908)
				::flixel::math::FlxRect _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(908)
				{
					HX_STACK_LINE(908)
					::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(908)
					{
						HX_STACK_LINE(908)
						::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(908)
						_this->x = (Float(((this->width - helper))) / Float((int)2));
						HX_STACK_LINE(908)
						_this->y = (Float(((this->height - helper))) / Float((int)2));
						HX_STACK_LINE(908)
						_this->width = helper;
						HX_STACK_LINE(908)
						_this->height = helper;
						HX_STACK_LINE(908)
						rect = _this;
					}
					HX_STACK_LINE(908)
					rect->_inPool = false;
					HX_STACK_LINE(908)
					_g6 = rect;
				}
				HX_STACK_LINE(908)
				this->deadzone = _g6;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(911)
				if (((this->target != null()))){
					HX_STACK_LINE(913)
					Float _g7 = this->target->get_width();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(913)
					Float _g8;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(913)
					_g8 = (_g7 + ((  (((Offset != null()))) ? Float(Offset->x) : Float((int)0) )));
					HX_STACK_LINE(913)
					w = _g8;
					HX_STACK_LINE(914)
					Float _g9 = this->target->get_height();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(914)
					Float _g10;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(914)
					_g10 = (_g9 + ((  (((Offset != null()))) ? Float(Offset->y) : Float((int)0) )));
					HX_STACK_LINE(914)
					h = _g10;
				}
				HX_STACK_LINE(916)
				::flixel::math::FlxRect _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(916)
				{
					HX_STACK_LINE(916)
					::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(916)
					{
						HX_STACK_LINE(916)
						::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(916)
						_this->x = (Float(((this->width - w))) / Float((int)2));
						HX_STACK_LINE(916)
						_this->y = ((Float(((this->height - h))) / Float((int)2)) - (h * 0.25));
						HX_STACK_LINE(916)
						_this->width = w;
						HX_STACK_LINE(916)
						_this->height = h;
						HX_STACK_LINE(916)
						rect = _this;
					}
					HX_STACK_LINE(916)
					rect->_inPool = false;
					HX_STACK_LINE(916)
					_g11 = rect;
				}
				HX_STACK_LINE(916)
				this->deadzone = _g11;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(919)
				::flixel::math::FlxRect _g12;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(919)
				{
					HX_STACK_LINE(919)
					::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(919)
					{
						HX_STACK_LINE(919)
						::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(919)
						_this->x = (int)0;
						HX_STACK_LINE(919)
						_this->y = (int)0;
						HX_STACK_LINE(919)
						_this->width = this->width;
						HX_STACK_LINE(919)
						_this->height = this->height;
						HX_STACK_LINE(919)
						rect = _this;
					}
					HX_STACK_LINE(919)
					rect->_inPool = false;
					HX_STACK_LINE(919)
					_g12 = rect;
				}
				HX_STACK_LINE(919)
				this->deadzone = _g12;
			}
			;break;
			default: {
				HX_STACK_LINE(922)
				this->deadzone = null();
			}
		}
		HX_STACK_LINE(925)
		if (((Offset != null()))){
			HX_STACK_LINE(927)
			if ((Offset->_weak)){
				HX_STACK_LINE(927)
				Offset->put();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,follow,(void))

Void FlxCamera_obj::focusOn( ::flixel::math::FlxPoint point){
{
		HX_STACK_FRAME("flixel.FlxCamera","focusOn",0xd304f1ae,"flixel.FlxCamera.focusOn","flixel/FlxCamera.hx",937,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(938)
		this->scroll->set((point->x - (this->width * 0.5)),(point->y - (this->height * 0.5)));
		HX_STACK_LINE(939)
		if ((point->_weak)){
			HX_STACK_LINE(939)
			point->put();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,focusOn,(void))

Void FlxCamera_obj::flash( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","flash",0x27663887,"flixel.FlxCamera.flash","flixel/FlxCamera.hx",951,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(952)
		if (((bool(!(Force)) && bool((this->_fxFlashAlpha > 0.0))))){
			HX_STACK_LINE(954)
			return null();
		}
		HX_STACK_LINE(956)
		this->_fxFlashColor = Color;
		HX_STACK_LINE(957)
		if (((Duration <= (int)0))){
			HX_STACK_LINE(959)
			Duration = 5e-324;
		}
		HX_STACK_LINE(961)
		this->_fxFlashDuration = Duration;
		HX_STACK_LINE(962)
		this->_fxFlashComplete = OnComplete;
		HX_STACK_LINE(963)
		this->_fxFlashAlpha = 1.0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,flash,(void))

Void FlxCamera_obj::fade( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","fade",0xa5741a85,"flixel.FlxCamera.fade","flixel/FlxCamera.hx",976,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FadeIn,"FadeIn")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(977)
		if (((bool(!(Force)) && bool((this->_fxFadeAlpha > 0.0))))){
			HX_STACK_LINE(979)
			return null();
		}
		HX_STACK_LINE(981)
		this->_fxFadeColor = Color;
		HX_STACK_LINE(982)
		if (((Duration <= (int)0))){
			HX_STACK_LINE(984)
			Duration = 5e-324;
		}
		HX_STACK_LINE(987)
		this->_fxFadeIn = FadeIn;
		HX_STACK_LINE(988)
		this->_fxFadeDuration = Duration;
		HX_STACK_LINE(989)
		this->_fxFadeComplete = OnComplete;
		HX_STACK_LINE(991)
		if ((this->_fxFadeIn)){
			HX_STACK_LINE(993)
			this->_fxFadeAlpha = 0.999999;
		}
		else{
			HX_STACK_LINE(997)
			this->_fxFadeAlpha = 5e-324;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,fade,(void))

Void FlxCamera_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,::flixel::FlxCameraShakeDirection Direction){
Float Intensity = __o_Intensity.Default(0.05);
Float Duration = __o_Duration.Default(0.5);
bool Force = __o_Force.Default(true);
	HX_STACK_FRAME("flixel.FlxCamera","shake",0xa0f6e19d,"flixel.FlxCamera.shake","flixel/FlxCamera.hx",1011,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Intensity,"Intensity")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Direction,"Direction")
{
		HX_STACK_LINE(1012)
		if (((Direction == null()))){
			HX_STACK_LINE(1014)
			Direction = ::flixel::FlxCameraShakeDirection_obj::BOTH_AXES;
		}
		HX_STACK_LINE(1017)
		if (((bool(!(Force)) && bool(((bool((this->_fxShakeOffset->x != (int)0)) || bool((this->_fxShakeOffset->y != (int)0)))))))){
			HX_STACK_LINE(1019)
			return null();
		}
		HX_STACK_LINE(1021)
		this->_fxShakeIntensity = Intensity;
		HX_STACK_LINE(1022)
		this->_fxShakeDuration = Duration;
		HX_STACK_LINE(1023)
		this->_fxShakeComplete = OnComplete;
		HX_STACK_LINE(1024)
		this->_fxShakeDirection = Direction;
		HX_STACK_LINE(1025)
		this->_fxShakeOffset->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,shake,(void))

Void FlxCamera_obj::stopFX( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","stopFX",0x29222b1d,"flixel.FlxCamera.stopFX","flixel/FlxCamera.hx",1032,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1033)
		this->_fxFlashAlpha = 0.0;
		HX_STACK_LINE(1034)
		this->_fxFadeAlpha = 0.0;
		HX_STACK_LINE(1035)
		this->_fxShakeDuration = (int)0;
		HX_STACK_LINE(1036)
		this->updateFlashSpritePosition();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,stopFX,(void))

::flixel::FlxCamera FlxCamera_obj::copyFrom( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxCamera","copyFrom",0x88512948,"flixel.FlxCamera.copyFrom","flixel/FlxCamera.hx",1046,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(1047)
	this->setScrollBounds(Camera->minScrollX,Camera->maxScrollX,Camera->minScrollY,Camera->maxScrollY);
	HX_STACK_LINE(1049)
	this->target = Camera->target;
	HX_STACK_LINE(1051)
	if (((this->target != null()))){
		HX_STACK_LINE(1053)
		if (((Camera->deadzone == null()))){
			HX_STACK_LINE(1055)
			this->deadzone = null();
		}
		else{
			HX_STACK_LINE(1059)
			if (((this->deadzone == null()))){
				HX_STACK_LINE(1061)
				::flixel::math::FlxRect _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1061)
				{
					HX_STACK_LINE(1061)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(1061)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(1061)
					Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
					HX_STACK_LINE(1061)
					Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
					HX_STACK_LINE(1061)
					::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(1061)
					{
						HX_STACK_LINE(1061)
						::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1061)
						_this->x = X;
						HX_STACK_LINE(1061)
						_this->y = Y;
						HX_STACK_LINE(1061)
						_this->width = Width;
						HX_STACK_LINE(1061)
						_this->height = Height;
						HX_STACK_LINE(1061)
						rect = _this;
					}
					HX_STACK_LINE(1061)
					rect->_inPool = false;
					HX_STACK_LINE(1061)
					_g = rect;
				}
				HX_STACK_LINE(1061)
				this->deadzone = _g;
			}
			HX_STACK_LINE(1063)
			{
				HX_STACK_LINE(1063)
				::flixel::math::FlxRect _this = this->deadzone;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1063)
				::flixel::math::FlxRect Rect = Camera->deadzone;		HX_STACK_VAR(Rect,"Rect");
				HX_STACK_LINE(1063)
				_this->x = Rect->x;
				HX_STACK_LINE(1063)
				_this->y = Rect->y;
				HX_STACK_LINE(1063)
				_this->width = Rect->width;
				HX_STACK_LINE(1063)
				_this->height = Rect->height;
				HX_STACK_LINE(1063)
				_this;
			}
		}
	}
	HX_STACK_LINE(1066)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,copyFrom,return )

Void FlxCamera_obj::fill( int Color,hx::Null< bool >  __o_BlendAlpha,hx::Null< Float >  __o_FxAlpha,::openfl::_v2::display::Graphics graphics){
bool BlendAlpha = __o_BlendAlpha.Default(true);
Float FxAlpha = __o_FxAlpha.Default(1.0);
	HX_STACK_FRAME("flixel.FlxCamera","fill",0xa57a338c,"flixel.FlxCamera.fill","flixel/FlxCamera.hx",1076,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(BlendAlpha,"BlendAlpha")
	HX_STACK_ARG(FxAlpha,"FxAlpha")
	HX_STACK_ARG(graphics,"graphics")
{
		HX_STACK_LINE(1089)
		if (((FxAlpha == (int)0))){
			HX_STACK_LINE(1091)
			return null();
		}
		HX_STACK_LINE(1094)
		::openfl::_v2::display::Graphics targetGraphics;		HX_STACK_VAR(targetGraphics,"targetGraphics");
		HX_STACK_LINE(1094)
		if (((graphics == null()))){
			HX_STACK_LINE(1094)
			targetGraphics = this->canvas->get_graphics();
		}
		else{
			HX_STACK_LINE(1094)
			targetGraphics = graphics;
		}
		HX_STACK_LINE(1095)
		Color = (int(Color) & int((int)16777215));
		HX_STACK_LINE(1098)
		targetGraphics->beginFill(Color,FxAlpha);
		HX_STACK_LINE(1101)
		targetGraphics->drawRect((int)-1,(int)-1,((this->width * this->totalScaleX) + (int)2),((this->height * this->totalScaleY) + (int)2));
		HX_STACK_LINE(1102)
		targetGraphics->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,fill,(void))

Void FlxCamera_obj::drawFX( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","drawFX",0xf9beeb9f,"flixel.FlxCamera.drawFX","flixel/FlxCamera.hx",1111,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1112)
		Float alphaComponent;		HX_STACK_VAR(alphaComponent,"alphaComponent");
		HX_STACK_LINE(1115)
		if (((this->_fxFlashAlpha > 0.0))){
			HX_STACK_LINE(1117)
			alphaComponent = (int((int(this->_fxFlashColor) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(1122)
			::openfl::_v2::display::Graphics _g = this->canvas->get_graphics();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1122)
			this->fill((int(this->_fxFlashColor) & int((int)16777215)),true,(Float((((  (((alphaComponent <= (int)0))) ? Float((int)255) : Float(alphaComponent) )) * this->_fxFlashAlpha)) / Float((int)255)),_g);
		}
		HX_STACK_LINE(1127)
		if (((this->_fxFadeAlpha > 0.0))){
			HX_STACK_LINE(1129)
			alphaComponent = (int((int(this->_fxFadeColor) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(1134)
			::openfl::_v2::display::Graphics _g1 = this->canvas->get_graphics();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1134)
			this->fill((int(this->_fxFadeColor) & int((int)16777215)),true,(Float((((  (((alphaComponent <= (int)0))) ? Float((int)255) : Float(alphaComponent) )) * this->_fxFadeAlpha)) / Float((int)255)),_g1);
		}
		HX_STACK_LINE(1138)
		if (((bool((this->_fxShakeOffset->x != (int)0)) || bool((this->_fxShakeOffset->y != (int)0))))){
			HX_STACK_LINE(1140)
			{
				HX_STACK_LINE(1140)
				::openfl::_v2::display::Sprite _g = this->flashSprite;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1140)
				Float _g2 = _g->get_x();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1140)
				Float _g3 = (_g2 + (this->_fxShakeOffset->x * ::flixel::FlxG_obj::scaleMode->scale->x));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1140)
				_g->set_x(_g3);
			}
			HX_STACK_LINE(1141)
			{
				HX_STACK_LINE(1141)
				::openfl::_v2::display::Sprite _g = this->flashSprite;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1141)
				Float _g4 = _g->get_y();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1141)
				Float _g5 = (_g4 + (this->_fxShakeOffset->y * ::flixel::FlxG_obj::scaleMode->scale->y));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1141)
				_g->set_y(_g5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,drawFX,(void))

Void FlxCamera_obj::setSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.FlxCamera","setSize",0xa359881a,"flixel.FlxCamera.setSize","flixel/FlxCamera.hx",1176,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(1177)
		this->set_width(Width);
		HX_STACK_LINE(1178)
		this->set_height(Height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setSize,(void))

Void FlxCamera_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxCamera","setPosition",0x5729a882,"flixel.FlxCamera.setPosition","flixel/FlxCamera.hx",1189,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(1190)
		this->set_x(X);
		HX_STACK_LINE(1191)
		this->set_y(Y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setPosition,(void))

Void FlxCamera_obj::setScrollBoundsRect( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_UpdateWorld){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","setScrollBoundsRect",0xd34a357f,"flixel.FlxCamera.setScrollBoundsRect","flixel/FlxCamera.hx",1204,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(UpdateWorld,"UpdateWorld")
{
		HX_STACK_LINE(1205)
		if ((UpdateWorld)){
			HX_STACK_LINE(1207)
			::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1207)
			_this->x = X;
			HX_STACK_LINE(1207)
			_this->y = Y;
			HX_STACK_LINE(1207)
			_this->width = Width;
			HX_STACK_LINE(1207)
			_this->height = Height;
			HX_STACK_LINE(1207)
			_this;
		}
		HX_STACK_LINE(1210)
		this->setScrollBounds(X,(X + Width),Y,(Y + Height));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,setScrollBoundsRect,(void))

Void FlxCamera_obj::setScrollBounds( Dynamic MinX,Dynamic MaxX,Dynamic MinY,Dynamic MaxY){
{
		HX_STACK_FRAME("flixel.FlxCamera","setScrollBounds",0x4d9242bb,"flixel.FlxCamera.setScrollBounds","flixel/FlxCamera.hx",1223,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(MinX,"MinX")
		HX_STACK_ARG(MaxX,"MaxX")
		HX_STACK_ARG(MinY,"MinY")
		HX_STACK_ARG(MaxY,"MaxY")
		HX_STACK_LINE(1224)
		this->minScrollX = MinX;
		HX_STACK_LINE(1225)
		this->maxScrollX = MaxX;
		HX_STACK_LINE(1226)
		this->minScrollY = MinY;
		HX_STACK_LINE(1227)
		this->maxScrollY = MaxY;
		HX_STACK_LINE(1228)
		this->updateScroll();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,setScrollBounds,(void))

Void FlxCamera_obj::setScale( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.FlxCamera","setScale",0x46f35511,"flixel.FlxCamera.setScale","flixel/FlxCamera.hx",1232,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(1233)
		this->scaleX = X;
		HX_STACK_LINE(1234)
		this->scaleY = Y;
		HX_STACK_LINE(1236)
		this->totalScaleX = (this->scaleX * ::flixel::FlxG_obj::scaleMode->scale->x);
		HX_STACK_LINE(1237)
		this->totalScaleY = (this->scaleY * ::flixel::FlxG_obj::scaleMode->scale->y);
		HX_STACK_LINE(1244)
		this->updateFlashSpritePosition();
		HX_STACK_LINE(1245)
		this->updateScrollRect();
		HX_STACK_LINE(1246)
		this->updateInternalSpritePositions();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setScale,(void))

Void FlxCamera_obj::onResize( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","onResize",0xa8186dfc,"flixel.FlxCamera.onResize","flixel/FlxCamera.hx",1250,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1251)
		this->updateFlashOffset();
		HX_STACK_LINE(1252)
		this->setScale(this->scaleX,this->scaleY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,onResize,(void))

Float FlxCamera_obj::set_followLerp( Float Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_followLerp",0xf2f9b78e,"flixel.FlxCamera.set_followLerp","flixel/FlxCamera.hx",1256,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1257)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1257)
	{
		HX_STACK_LINE(1257)
		int _g = ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->_stepMS)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1257)
		Dynamic Max = (Float((int)60) / Float(_g));		HX_STACK_VAR(Max,"Max");
		HX_STACK_LINE(1257)
		Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(1257)
		if (((Value < (int)0))){
			HX_STACK_LINE(1257)
			lowerBound = (int)0;
		}
		else{
			HX_STACK_LINE(1257)
			lowerBound = Value;
		}
		HX_STACK_LINE(1257)
		if (((bool((Max != null())) && bool((lowerBound > Max))))){
			HX_STACK_LINE(1257)
			_g1 = Max;
		}
		else{
			HX_STACK_LINE(1257)
			_g1 = lowerBound;
		}
	}
	HX_STACK_LINE(1257)
	return this->followLerp = _g1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_followLerp,return )

int FlxCamera_obj::set_width( int Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_width",0x2386b8c0,"flixel.FlxCamera.set_width","flixel/FlxCamera.hx",1261,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1262)
	if (((Value > (int)0))){
		HX_STACK_LINE(1264)
		this->width = Value;
		HX_STACK_LINE(1266)
		this->updateFlashOffset();
		HX_STACK_LINE(1267)
		this->updateScrollRect();
		HX_STACK_LINE(1268)
		this->updateInternalSpritePositions();
	}
	HX_STACK_LINE(1270)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_width,return )

int FlxCamera_obj::set_height( int Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_height",0xa8aa67ed,"flixel.FlxCamera.set_height","flixel/FlxCamera.hx",1274,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1275)
	if (((Value > (int)0))){
		HX_STACK_LINE(1277)
		this->height = Value;
		HX_STACK_LINE(1279)
		this->updateFlashOffset();
		HX_STACK_LINE(1280)
		this->updateScrollRect();
		HX_STACK_LINE(1281)
		this->updateInternalSpritePositions();
	}
	HX_STACK_LINE(1283)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_height,return )

Float FlxCamera_obj::set_zoom( Float Zoom){
	HX_STACK_FRAME("flixel.FlxCamera","set_zoom",0x3f00d599,"flixel.FlxCamera.set_zoom","flixel/FlxCamera.hx",1287,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Zoom,"Zoom")
	HX_STACK_LINE(1288)
	if (((Zoom == (int)0))){
		HX_STACK_LINE(1288)
		this->zoom = ::flixel::FlxCamera_obj::defaultZoom;
	}
	else{
		HX_STACK_LINE(1288)
		this->zoom = Zoom;
	}
	HX_STACK_LINE(1289)
	this->setScale(this->zoom,this->zoom);
	HX_STACK_LINE(1290)
	return this->zoom;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_zoom,return )

Float FlxCamera_obj::set_alpha( Float Alpha){
	HX_STACK_FRAME("flixel.FlxCamera","set_alpha",0x7abaaa18,"flixel.FlxCamera.set_alpha","flixel/FlxCamera.hx",1294,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(1295)
	{
		HX_STACK_LINE(1295)
		Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(1295)
		if (((Alpha < (int)0))){
			HX_STACK_LINE(1295)
			lowerBound = (int)0;
		}
		else{
			HX_STACK_LINE(1295)
			lowerBound = Alpha;
		}
		HX_STACK_LINE(1295)
		if (((lowerBound > (int)1))){
			HX_STACK_LINE(1295)
			this->alpha = (int)1;
		}
		else{
			HX_STACK_LINE(1295)
			this->alpha = lowerBound;
		}
	}
	HX_STACK_LINE(1299)
	this->canvas->set_alpha(Alpha);
	HX_STACK_LINE(1301)
	return Alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_alpha,return )

Float FlxCamera_obj::set_angle( Float Angle){
	HX_STACK_FRAME("flixel.FlxCamera","set_angle",0x7c06468d,"flixel.FlxCamera.set_angle","flixel/FlxCamera.hx",1305,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_LINE(1306)
	this->angle = Angle;
	HX_STACK_LINE(1307)
	this->flashSprite->set_rotation(Angle);
	HX_STACK_LINE(1308)
	return Angle;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_angle,return )

int FlxCamera_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.FlxCamera","set_color",0xa380741d,"flixel.FlxCamera.set_color","flixel/FlxCamera.hx",1312,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(1313)
	this->color = Color;
	HX_STACK_LINE(1314)
	::openfl::_v2::geom::ColorTransform colorTransform;		HX_STACK_VAR(colorTransform,"colorTransform");
	HX_STACK_LINE(1323)
	::openfl::_v2::geom::ColorTransform _g = this->canvas->get_transform()->get_colorTransform();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1323)
	colorTransform = _g;
	HX_STACK_LINE(1326)
	colorTransform->redMultiplier = (Float(((int((int(this->color) >> int((int)16))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1327)
	colorTransform->greenMultiplier = (Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1328)
	colorTransform->blueMultiplier = (Float(((int(this->color) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1333)
	this->canvas->get_transform()->set_colorTransform(colorTransform);
	HX_STACK_LINE(1336)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_color,return )

bool FlxCamera_obj::set_antialiasing( bool Antialiasing){
	HX_STACK_FRAME("flixel.FlxCamera","set_antialiasing",0x0f9a3f7a,"flixel.FlxCamera.set_antialiasing","flixel/FlxCamera.hx",1340,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Antialiasing,"Antialiasing")
	HX_STACK_LINE(1341)
	this->antialiasing = Antialiasing;
	HX_STACK_LINE(1345)
	return Antialiasing;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_antialiasing,return )

Float FlxCamera_obj::set_x( Float x){
	HX_STACK_FRAME("flixel.FlxCamera","set_x",0x9f099e32,"flixel.FlxCamera.set_x","flixel/FlxCamera.hx",1349,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(1350)
	this->x = x;
	HX_STACK_LINE(1351)
	this->updateFlashSpritePosition();
	HX_STACK_LINE(1352)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_x,return )

Float FlxCamera_obj::set_y( Float y){
	HX_STACK_FRAME("flixel.FlxCamera","set_y",0x9f099e33,"flixel.FlxCamera.set_y","flixel/FlxCamera.hx",1356,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1357)
	this->y = y;
	HX_STACK_LINE(1358)
	this->updateFlashSpritePosition();
	HX_STACK_LINE(1359)
	return y;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_y,return )

bool FlxCamera_obj::set_visible( bool visible){
	HX_STACK_FRAME("flixel.FlxCamera","set_visible",0x8f5a1dac,"flixel.FlxCamera.set_visible","flixel/FlxCamera.hx",1363,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(visible,"visible")
	HX_STACK_LINE(1364)
	if (((this->flashSprite != null()))){
		HX_STACK_LINE(1366)
		this->flashSprite->set_visible(visible);
	}
	HX_STACK_LINE(1368)
	return this->visible = visible;
}


Float FlxCamera_obj::defaultZoom;

Array< ::Dynamic > FlxCamera_obj::defaultCameras;

::flixel::graphics::tile::FlxDrawTilesItem FlxCamera_obj::_storageTilesHead;

::flixel::graphics::tile::FlxDrawTrianglesItem FlxCamera_obj::_storageTrianglesHead;


FlxCamera_obj::FlxCamera_obj()
{
}

void FlxCamera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCamera);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(totalScaleX,"totalScaleX");
	HX_MARK_MEMBER_NAME(totalScaleY,"totalScaleY");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(targetOffset,"targetOffset");
	HX_MARK_MEMBER_NAME(followLerp,"followLerp");
	HX_MARK_MEMBER_NAME(deadzone,"deadzone");
	HX_MARK_MEMBER_NAME(minScrollX,"minScrollX");
	HX_MARK_MEMBER_NAME(maxScrollX,"maxScrollX");
	HX_MARK_MEMBER_NAME(minScrollY,"minScrollY");
	HX_MARK_MEMBER_NAME(maxScrollY,"maxScrollY");
	HX_MARK_MEMBER_NAME(scroll,"scroll");
	HX_MARK_MEMBER_NAME(bgColor,"bgColor");
	HX_MARK_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_MARK_MEMBER_NAME(flashSprite,"flashSprite");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(followLead,"followLead");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashOffset,"_flashOffset");
	HX_MARK_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_MARK_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_MARK_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_MARK_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_MARK_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_MARK_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_MARK_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_MARK_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_MARK_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_MARK_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_MARK_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_MARK_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_MARK_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_MARK_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_MARK_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_MARK_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(initialZoom,"initialZoom");
	HX_MARK_MEMBER_NAME(_scrollRect,"_scrollRect");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(debugLayer,"debugLayer");
	HX_MARK_MEMBER_NAME(_currentDrawItem,"_currentDrawItem");
	HX_MARK_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_MARK_MEMBER_NAME(_headTiles,"_headTiles");
	HX_MARK_MEMBER_NAME(_headTriangles,"_headTriangles");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxCamera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(totalScaleX,"totalScaleX");
	HX_VISIT_MEMBER_NAME(totalScaleY,"totalScaleY");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(targetOffset,"targetOffset");
	HX_VISIT_MEMBER_NAME(followLerp,"followLerp");
	HX_VISIT_MEMBER_NAME(deadzone,"deadzone");
	HX_VISIT_MEMBER_NAME(minScrollX,"minScrollX");
	HX_VISIT_MEMBER_NAME(maxScrollX,"maxScrollX");
	HX_VISIT_MEMBER_NAME(minScrollY,"minScrollY");
	HX_VISIT_MEMBER_NAME(maxScrollY,"maxScrollY");
	HX_VISIT_MEMBER_NAME(scroll,"scroll");
	HX_VISIT_MEMBER_NAME(bgColor,"bgColor");
	HX_VISIT_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_VISIT_MEMBER_NAME(flashSprite,"flashSprite");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(followLead,"followLead");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashOffset,"_flashOffset");
	HX_VISIT_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_VISIT_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_VISIT_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_VISIT_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_VISIT_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_VISIT_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_VISIT_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_VISIT_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_VISIT_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_VISIT_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_VISIT_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_VISIT_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_VISIT_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_VISIT_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_VISIT_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_VISIT_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(initialZoom,"initialZoom");
	HX_VISIT_MEMBER_NAME(_scrollRect,"_scrollRect");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(debugLayer,"debugLayer");
	HX_VISIT_MEMBER_NAME(_currentDrawItem,"_currentDrawItem");
	HX_VISIT_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_VISIT_MEMBER_NAME(_headTiles,"_headTiles");
	HX_VISIT_MEMBER_NAME(_headTriangles,"_headTriangles");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxCamera_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"stopFX") ) { return stopFX_dyn(); }
		if (HX_FIELD_EQ(inName,"drawFX") ) { return drawFX_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return bgColor; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"focusOn") ) { return focusOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { return deadzone; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { return _fxFadeIn; }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"followLerp") ) { return followLerp; }
		if (HX_FIELD_EQ(inName,"minScrollX") ) { return minScrollX; }
		if (HX_FIELD_EQ(inName,"maxScrollX") ) { return maxScrollX; }
		if (HX_FIELD_EQ(inName,"minScrollY") ) { return minScrollY; }
		if (HX_FIELD_EQ(inName,"maxScrollY") ) { return maxScrollY; }
		if (HX_FIELD_EQ(inName,"followLead") ) { return followLead; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"debugLayer") ) { return debugLayer; }
		if (HX_FIELD_EQ(inName,"_headTiles") ) { return _headTiles; }
		if (HX_FIELD_EQ(inName,"updateFade") ) { return updateFade_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { return defaultZoom; }
		if (HX_FIELD_EQ(inName,"totalScaleX") ) { return totalScaleX; }
		if (HX_FIELD_EQ(inName,"totalScaleY") ) { return totalScaleY; }
		if (HX_FIELD_EQ(inName,"flashSprite") ) { return flashSprite; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"initialZoom") ) { return initialZoom; }
		if (HX_FIELD_EQ(inName,"_scrollRect") ) { return _scrollRect; }
		if (HX_FIELD_EQ(inName,"updateFlash") ) { return updateFlash_dyn(); }
		if (HX_FIELD_EQ(inName,"updateShake") ) { return updateShake_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"targetOffset") ) { return targetOffset; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"_flashOffset") ) { return _flashOffset; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { return _fxFadeColor; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { return _fxFadeAlpha; }
		if (HX_FIELD_EQ(inName,"updateScroll") ) { return updateScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFollow") ) { return updateFollow_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { return _fxFlashColor; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { return _fxFlashAlpha; }
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { return _scrollTarget; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultCameras") ) { return defaultCameras; }
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { return _fxShakeOffset; }
		if (HX_FIELD_EQ(inName,"_headTriangles") ) { return _headTriangles; }
		if (HX_FIELD_EQ(inName,"clearDrawStack") ) { return clearDrawStack_dyn(); }
		if (HX_FIELD_EQ(inName,"set_followLerp") ) { return set_followLerp_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { return _fxFadeDuration; }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { return _fxFadeComplete; }
		if (HX_FIELD_EQ(inName,"setScrollBounds") ) { return setScrollBounds_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { return _fxFlashDuration; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { return _fxFlashComplete; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { return _fxShakeDuration; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { return _fxShakeComplete; }
		if (HX_FIELD_EQ(inName,"_currentDrawItem") ) { return _currentDrawItem; }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { return _headOfDrawStack; }
		if (HX_FIELD_EQ(inName,"getDrawTilesItem") ) { return getDrawTilesItem_dyn(); }
		if (HX_FIELD_EQ(inName,"updateScrollRect") ) { return updateScrollRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return set_antialiasing_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_storageTilesHead") ) { return _storageTilesHead; }
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { return _fxShakeIntensity; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { return _fxShakeDirection; }
		if (HX_FIELD_EQ(inName,"updateFlashOffset") ) { return updateFlashOffset_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { return useBgAlphaBlending; }
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return pixelPerfectRender; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { return _lastTargetPosition; }
		if (HX_FIELD_EQ(inName,"setScrollBoundsRect") ) { return setScrollBoundsRect_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getDrawTrianglesItem") ) { return getDrawTrianglesItem_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_storageTrianglesHead") ) { return _storageTrianglesHead; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getNewDrawTrianglesItem") ) { return getNewDrawTrianglesItem_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"updateFlashSpritePosition") ) { return updateFlashSpritePosition_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"updateInternalSpritePositions") ) { return updateInternalSpritePositions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCamera_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp) return set_zoom(inValue);zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< ::flixel::FlxCameraFollowStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp) return set_width(inValue);width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scroll") ) { scroll=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp) return set_height(inValue);height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { bgColor=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { deadzone=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { _fxFadeIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"followLerp") ) { if (inCallProp) return set_followLerp(inValue);followLerp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minScrollX") ) { minScrollX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollX") ) { maxScrollX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minScrollY") ) { minScrollY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollY") ) { maxScrollY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"followLead") ) { followLead=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugLayer") ) { debugLayer=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headTiles") ) { _headTiles=inValue.Cast< ::flixel::graphics::tile::FlxDrawTilesItem >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { defaultZoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalScaleX") ) { totalScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalScaleY") ) { totalScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flashSprite") ) { flashSprite=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initialZoom") ) { initialZoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollRect") ) { _scrollRect=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"targetOffset") ) { targetOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp) return set_antialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashOffset") ) { _flashOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { _fxFadeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { _fxFadeAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { _fxFlashColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { _fxFlashAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { _scrollTarget=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultCameras") ) { defaultCameras=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { _fxShakeOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headTriangles") ) { _headTriangles=inValue.Cast< ::flixel::graphics::tile::FlxDrawTrianglesItem >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { _fxFadeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { _fxFadeComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { _fxFlashDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { _fxFlashComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { _fxShakeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { _fxShakeComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentDrawItem") ) { _currentDrawItem=inValue.Cast< ::flixel::graphics::tile::FlxDrawBaseItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { _headOfDrawStack=inValue.Cast< ::flixel::graphics::tile::FlxDrawBaseItem >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_storageTilesHead") ) { _storageTilesHead=inValue.Cast< ::flixel::graphics::tile::FlxDrawTilesItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { _fxShakeIntensity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { _fxShakeDirection=inValue.Cast< ::flixel::FlxCameraShakeDirection >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { useBgAlphaBlending=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { pixelPerfectRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { _lastTargetPosition=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_storageTrianglesHead") ) { _storageTrianglesHead=inValue.Cast< ::flixel::graphics::tile::FlxDrawTrianglesItem >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxCamera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("totalScaleX"));
	outFields->push(HX_CSTRING("totalScaleY"));
	outFields->push(HX_CSTRING("style"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("targetOffset"));
	outFields->push(HX_CSTRING("followLerp"));
	outFields->push(HX_CSTRING("deadzone"));
	outFields->push(HX_CSTRING("minScrollX"));
	outFields->push(HX_CSTRING("maxScrollX"));
	outFields->push(HX_CSTRING("minScrollY"));
	outFields->push(HX_CSTRING("maxScrollY"));
	outFields->push(HX_CSTRING("scroll"));
	outFields->push(HX_CSTRING("bgColor"));
	outFields->push(HX_CSTRING("useBgAlphaBlending"));
	outFields->push(HX_CSTRING("flashSprite"));
	outFields->push(HX_CSTRING("pixelPerfectRender"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("zoom"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("followLead"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_flashOffset"));
	outFields->push(HX_CSTRING("_fxFlashColor"));
	outFields->push(HX_CSTRING("_fxFlashDuration"));
	outFields->push(HX_CSTRING("_fxFlashAlpha"));
	outFields->push(HX_CSTRING("_fxFadeColor"));
	outFields->push(HX_CSTRING("_lastTargetPosition"));
	outFields->push(HX_CSTRING("_scrollTarget"));
	outFields->push(HX_CSTRING("_fxFadeDuration"));
	outFields->push(HX_CSTRING("_fxFadeIn"));
	outFields->push(HX_CSTRING("_fxFadeAlpha"));
	outFields->push(HX_CSTRING("_fxShakeIntensity"));
	outFields->push(HX_CSTRING("_fxShakeDuration"));
	outFields->push(HX_CSTRING("_fxShakeOffset"));
	outFields->push(HX_CSTRING("_fxShakeDirection"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("initialZoom"));
	outFields->push(HX_CSTRING("_scrollRect"));
	outFields->push(HX_CSTRING("canvas"));
	outFields->push(HX_CSTRING("debugLayer"));
	outFields->push(HX_CSTRING("_currentDrawItem"));
	outFields->push(HX_CSTRING("_headOfDrawStack"));
	outFields->push(HX_CSTRING("_headTiles"));
	outFields->push(HX_CSTRING("_headTriangles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("defaultZoom"),
	HX_CSTRING("defaultCameras"),
	HX_CSTRING("_storageTilesHead"),
	HX_CSTRING("_storageTrianglesHead"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,scaleX),HX_CSTRING("scaleX")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,scaleY),HX_CSTRING("scaleY")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,totalScaleX),HX_CSTRING("totalScaleX")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,totalScaleY),HX_CSTRING("totalScaleY")},
	{hx::fsObject /*::flixel::FlxCameraFollowStyle*/ ,(int)offsetof(FlxCamera_obj,style),HX_CSTRING("style")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxCamera_obj,target),HX_CSTRING("target")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,targetOffset),HX_CSTRING("targetOffset")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,followLerp),HX_CSTRING("followLerp")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxCamera_obj,deadzone),HX_CSTRING("deadzone")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,minScrollX),HX_CSTRING("minScrollX")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,maxScrollX),HX_CSTRING("maxScrollX")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,minScrollY),HX_CSTRING("minScrollY")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,maxScrollY),HX_CSTRING("maxScrollY")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,scroll),HX_CSTRING("scroll")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,bgColor),HX_CSTRING("bgColor")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,useBgAlphaBlending),HX_CSTRING("useBgAlphaBlending")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,flashSprite),HX_CSTRING("flashSprite")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,pixelPerfectRender),HX_CSTRING("pixelPerfectRender")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,height),HX_CSTRING("height")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,zoom),HX_CSTRING("zoom")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,alpha),HX_CSTRING("alpha")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,angle),HX_CSTRING("angle")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,color),HX_CSTRING("color")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,antialiasing),HX_CSTRING("antialiasing")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,followLead),HX_CSTRING("followLead")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(FlxCamera_obj,_flashRect),HX_CSTRING("_flashRect")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(FlxCamera_obj,_flashPoint),HX_CSTRING("_flashPoint")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_flashOffset),HX_CSTRING("_flashOffset")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,_fxFlashColor),HX_CSTRING("_fxFlashColor")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFlashDuration),HX_CSTRING("_fxFlashDuration")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxFlashComplete),HX_CSTRING("_fxFlashComplete")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFlashAlpha),HX_CSTRING("_fxFlashAlpha")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,_fxFadeColor),HX_CSTRING("_fxFadeColor")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_lastTargetPosition),HX_CSTRING("_lastTargetPosition")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_scrollTarget),HX_CSTRING("_scrollTarget")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFadeDuration),HX_CSTRING("_fxFadeDuration")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,_fxFadeIn),HX_CSTRING("_fxFadeIn")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxFadeComplete),HX_CSTRING("_fxFadeComplete")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFadeAlpha),HX_CSTRING("_fxFadeAlpha")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxShakeIntensity),HX_CSTRING("_fxShakeIntensity")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxShakeDuration),HX_CSTRING("_fxShakeDuration")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxShakeComplete),HX_CSTRING("_fxShakeComplete")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_fxShakeOffset),HX_CSTRING("_fxShakeOffset")},
	{hx::fsObject /*::flixel::FlxCameraShakeDirection*/ ,(int)offsetof(FlxCamera_obj,_fxShakeDirection),HX_CSTRING("_fxShakeDirection")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_point),HX_CSTRING("_point")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,initialZoom),HX_CSTRING("initialZoom")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,_scrollRect),HX_CSTRING("_scrollRect")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,canvas),HX_CSTRING("canvas")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,debugLayer),HX_CSTRING("debugLayer")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawBaseItem*/ ,(int)offsetof(FlxCamera_obj,_currentDrawItem),HX_CSTRING("_currentDrawItem")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawBaseItem*/ ,(int)offsetof(FlxCamera_obj,_headOfDrawStack),HX_CSTRING("_headOfDrawStack")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawTilesItem*/ ,(int)offsetof(FlxCamera_obj,_headTiles),HX_CSTRING("_headTiles")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawTrianglesItem*/ ,(int)offsetof(FlxCamera_obj,_headTriangles),HX_CSTRING("_headTriangles")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("totalScaleX"),
	HX_CSTRING("totalScaleY"),
	HX_CSTRING("style"),
	HX_CSTRING("target"),
	HX_CSTRING("targetOffset"),
	HX_CSTRING("followLerp"),
	HX_CSTRING("deadzone"),
	HX_CSTRING("minScrollX"),
	HX_CSTRING("maxScrollX"),
	HX_CSTRING("minScrollY"),
	HX_CSTRING("maxScrollY"),
	HX_CSTRING("scroll"),
	HX_CSTRING("bgColor"),
	HX_CSTRING("useBgAlphaBlending"),
	HX_CSTRING("flashSprite"),
	HX_CSTRING("pixelPerfectRender"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("zoom"),
	HX_CSTRING("alpha"),
	HX_CSTRING("angle"),
	HX_CSTRING("color"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("followLead"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_flashOffset"),
	HX_CSTRING("_fxFlashColor"),
	HX_CSTRING("_fxFlashDuration"),
	HX_CSTRING("_fxFlashComplete"),
	HX_CSTRING("_fxFlashAlpha"),
	HX_CSTRING("_fxFadeColor"),
	HX_CSTRING("_lastTargetPosition"),
	HX_CSTRING("_scrollTarget"),
	HX_CSTRING("_fxFadeDuration"),
	HX_CSTRING("_fxFadeIn"),
	HX_CSTRING("_fxFadeComplete"),
	HX_CSTRING("_fxFadeAlpha"),
	HX_CSTRING("_fxShakeIntensity"),
	HX_CSTRING("_fxShakeDuration"),
	HX_CSTRING("_fxShakeComplete"),
	HX_CSTRING("_fxShakeOffset"),
	HX_CSTRING("_fxShakeDirection"),
	HX_CSTRING("_point"),
	HX_CSTRING("initialZoom"),
	HX_CSTRING("_scrollRect"),
	HX_CSTRING("canvas"),
	HX_CSTRING("debugLayer"),
	HX_CSTRING("_currentDrawItem"),
	HX_CSTRING("_headOfDrawStack"),
	HX_CSTRING("_headTiles"),
	HX_CSTRING("_headTriangles"),
	HX_CSTRING("getDrawTilesItem"),
	HX_CSTRING("getDrawTrianglesItem"),
	HX_CSTRING("getNewDrawTrianglesItem"),
	HX_CSTRING("clearDrawStack"),
	HX_CSTRING("render"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("updateScroll"),
	HX_CSTRING("updateFollow"),
	HX_CSTRING("updateFlash"),
	HX_CSTRING("updateFade"),
	HX_CSTRING("updateShake"),
	HX_CSTRING("updateFlashSpritePosition"),
	HX_CSTRING("updateFlashOffset"),
	HX_CSTRING("updateScrollRect"),
	HX_CSTRING("updateInternalSpritePositions"),
	HX_CSTRING("follow"),
	HX_CSTRING("focusOn"),
	HX_CSTRING("flash"),
	HX_CSTRING("fade"),
	HX_CSTRING("shake"),
	HX_CSTRING("stopFX"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("fill"),
	HX_CSTRING("drawFX"),
	HX_CSTRING("setSize"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("setScrollBoundsRect"),
	HX_CSTRING("setScrollBounds"),
	HX_CSTRING("setScale"),
	HX_CSTRING("onResize"),
	HX_CSTRING("set_followLerp"),
	HX_CSTRING("set_width"),
	HX_CSTRING("set_height"),
	HX_CSTRING("set_zoom"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_antialiasing"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	HX_CSTRING("set_visible"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultCameras,"defaultCameras");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::_storageTilesHead,"_storageTilesHead");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::_storageTrianglesHead,"_storageTrianglesHead");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultCameras,"defaultCameras");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::_storageTilesHead,"_storageTilesHead");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::_storageTrianglesHead,"_storageTrianglesHead");
};

#endif

Class FlxCamera_obj::__mClass;

void FlxCamera_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxCamera"), hx::TCanCast< FlxCamera_obj> ,sStaticFields,sMemberFields,
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

void FlxCamera_obj::__boot()
{
}

} // end namespace flixel
