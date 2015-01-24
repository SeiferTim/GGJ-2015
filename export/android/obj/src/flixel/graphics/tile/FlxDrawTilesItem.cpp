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
#ifndef INCLUDED_flixel_graphics_tile_FlxTilesheet
#include <flixel/graphics/tile/FlxTilesheet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_openfl__v2_display_Tilesheet
#include <openfl/_v2/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
namespace flixel{
namespace graphics{
namespace tile{

Void FlxDrawTilesItem_obj::__construct()
{
HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTilesItem","new",0x1450ef83,"flixel.graphics.tile.FlxDrawTilesItem.new","flixel/graphics/tile/FlxDrawTilesItem.hx",11,0xdffe6dcc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->position = (int)0;
	HX_STACK_LINE(13)
	this->drawData = Array_obj< Float >::__new();
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(21)
	this->type = ::flixel::graphics::tile::FlxDrawItemType_obj::TILES;
}
;
	return null();
}

//FlxDrawTilesItem_obj::~FlxDrawTilesItem_obj() { }

Dynamic FlxDrawTilesItem_obj::__CreateEmpty() { return  new FlxDrawTilesItem_obj; }
hx::ObjectPtr< FlxDrawTilesItem_obj > FlxDrawTilesItem_obj::__new()
{  hx::ObjectPtr< FlxDrawTilesItem_obj > result = new FlxDrawTilesItem_obj();
	result->__construct();
	return result;}

Dynamic FlxDrawTilesItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxDrawTilesItem_obj > result = new FlxDrawTilesItem_obj();
	result->__construct();
	return result;}

Void FlxDrawTilesItem_obj::reset( ){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTilesItem","reset",0xcba5b7b2,"flixel.graphics.tile.FlxDrawTilesItem.reset","flixel/graphics/tile/FlxDrawTilesItem.hx",25,0xdffe6dcc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		this->super::reset();
		HX_STACK_LINE(27)
		this->position = (int)0;
	}
return null();
}


Void FlxDrawTilesItem_obj::dispose( ){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTilesItem","dispose",0xa4cb6d42,"flixel.graphics.tile.FlxDrawTilesItem.dispose","flixel/graphics/tile/FlxDrawTilesItem.hx",31,0xdffe6dcc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		this->super::dispose();
		HX_STACK_LINE(33)
		this->drawData = null();
	}
return null();
}


Void FlxDrawTilesItem_obj::setDrawData( ::flixel::math::FlxPoint coordinate,Float ID,::openfl::_v2::geom::Matrix matrix,hx::Null< bool >  __o_isColored,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
bool isColored = __o_isColored.Default(false);
int color = __o_color.Default(-1);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTilesItem","setDrawData",0x72e34433,"flixel.graphics.tile.FlxDrawTilesItem.setDrawData","flixel/graphics/tile/FlxDrawTilesItem.hx",38,0xdffe6dcc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(coordinate,"coordinate")
	HX_STACK_ARG(ID,"ID")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(isColored,"isColored")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(39)
		int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		this->drawData[_g] = coordinate->x;
		HX_STACK_LINE(40)
		int _g1 = (this->position)++;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(40)
		this->drawData[_g1] = coordinate->y;
		HX_STACK_LINE(42)
		int _g2 = (this->position)++;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(42)
		this->drawData[_g2] = ID;
		HX_STACK_LINE(44)
		int _g3 = (this->position)++;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(44)
		this->drawData[_g3] = matrix->a;
		HX_STACK_LINE(45)
		int _g4 = (this->position)++;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(45)
		this->drawData[_g4] = matrix->b;
		HX_STACK_LINE(46)
		int _g5 = (this->position)++;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(46)
		this->drawData[_g5] = matrix->c;
		HX_STACK_LINE(47)
		int _g6 = (this->position)++;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(47)
		this->drawData[_g6] = matrix->d;
		HX_STACK_LINE(49)
		if ((isColored)){
			HX_STACK_LINE(51)
			int _g7 = (this->position)++;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(51)
			this->drawData[_g7] = (Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float((int)255));
			HX_STACK_LINE(52)
			int _g8 = (this->position)++;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(52)
			this->drawData[_g8] = (Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float((int)255));
			HX_STACK_LINE(53)
			int _g9 = (this->position)++;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(53)
			this->drawData[_g9] = (Float(((int(color) & int((int)255)))) / Float((int)255));
		}
		HX_STACK_LINE(56)
		int _g10 = (this->position)++;		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(56)
		this->drawData[_g10] = alpha;
		HX_STACK_LINE(58)
		if ((coordinate->_weak)){
			HX_STACK_LINE(58)
			coordinate->put();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxDrawTilesItem_obj,setDrawData,(void))

Void FlxDrawTilesItem_obj::render( ::flixel::FlxCamera camera){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTilesItem","render",0x620c2413,"flixel.graphics.tile.FlxDrawTilesItem.render","flixel/graphics/tile/FlxDrawTilesItem.hx",62,0xdffe6dcc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(64)
		int dataLen = this->drawData->length;		HX_STACK_VAR(dataLen,"dataLen");
		HX_STACK_LINE(66)
		if (((this->position > (int)0))){
			HX_STACK_LINE(68)
			int tempFlags = (int)16;		HX_STACK_VAR(tempFlags,"tempFlags");
			HX_STACK_LINE(69)
			hx::OrEq(tempFlags,(int)8);
			HX_STACK_LINE(71)
			if ((this->colored)){
				HX_STACK_LINE(73)
				hx::OrEq(tempFlags,(int)4);
			}
			HX_STACK_LINE(76)
			hx::OrEq(tempFlags,this->blending);
			HX_STACK_LINE(77)
			::openfl::_v2::display::Graphics _g = camera->canvas->get_graphics();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(77)
			this->graphics->get_tilesheet()->drawTiles(_g,this->drawData,(bool(camera->antialiasing) || bool(this->antialiasing)),tempFlags,this->position);
			HX_STACK_LINE(78)
			(::flixel::graphics::tile::FlxTilesheet_obj::_DRAWCALLS)++;
		}
	}
return null();
}


int FlxDrawTilesItem_obj::get_numTiles( ){
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTilesItem","get_numTiles",0xd57429e5,"flixel.graphics.tile.FlxDrawTilesItem.get_numTiles","flixel/graphics/tile/FlxDrawTilesItem.hx",84,0xdffe6dcc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	int elementsPerTile = (int)8;		HX_STACK_VAR(elementsPerTile,"elementsPerTile");
	HX_STACK_LINE(86)
	if ((this->colored)){
		HX_STACK_LINE(88)
		hx::AddEq(elementsPerTile,(int)3);
	}
	HX_STACK_LINE(91)
	return ::Std_obj::_int((Float(this->position) / Float(elementsPerTile)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawTilesItem_obj,get_numTiles,return )

int FlxDrawTilesItem_obj::get_numVertices( ){
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTilesItem","get_numVertices",0x8b0e8f99,"flixel.graphics.tile.FlxDrawTilesItem.get_numVertices","flixel/graphics/tile/FlxDrawTilesItem.hx",95,0xdffe6dcc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	int _g = this->get_numTiles();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(96)
	return ((int)4 * _g);
}


int FlxDrawTilesItem_obj::get_numTriangles( ){
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTilesItem","get_numTriangles",0x37fe0d0b,"flixel.graphics.tile.FlxDrawTilesItem.get_numTriangles","flixel/graphics/tile/FlxDrawTilesItem.hx",100,0xdffe6dcc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	int _g = this->get_numTiles();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(101)
	return ((int)2 * _g);
}



FlxDrawTilesItem_obj::FlxDrawTilesItem_obj()
{
}

void FlxDrawTilesItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDrawTilesItem);
	HX_MARK_MEMBER_NAME(drawData,"drawData");
	HX_MARK_MEMBER_NAME(position,"position");
	::flixel::graphics::tile::FlxDrawBaseItem_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxDrawTilesItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(drawData,"drawData");
	HX_VISIT_MEMBER_NAME(position,"position");
	::flixel::graphics::tile::FlxDrawBaseItem_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxDrawTilesItem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawData") ) { return drawData; }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { return get_numTiles(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setDrawData") ) { return setDrawData_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_numTiles") ) { return get_numTiles_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return get_numVertices_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return get_numTriangles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxDrawTilesItem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"drawData") ) { drawData=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxDrawTilesItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("drawData"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("numTiles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxDrawTilesItem_obj,drawData),HX_CSTRING("drawData")},
	{hx::fsInt,(int)offsetof(FlxDrawTilesItem_obj,position),HX_CSTRING("position")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("drawData"),
	HX_CSTRING("position"),
	HX_CSTRING("reset"),
	HX_CSTRING("dispose"),
	HX_CSTRING("setDrawData"),
	HX_CSTRING("render"),
	HX_CSTRING("get_numTiles"),
	HX_CSTRING("get_numVertices"),
	HX_CSTRING("get_numTriangles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawTilesItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawTilesItem_obj::__mClass,"__mClass");
};

#endif

Class FlxDrawTilesItem_obj::__mClass;

void FlxDrawTilesItem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.tile.FlxDrawTilesItem"), hx::TCanCast< FlxDrawTilesItem_obj> ,sStaticFields,sMemberFields,
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

void FlxDrawTilesItem_obj::__boot()
{
}

} // end namespace flixel
} // end namespace graphics
} // end namespace tile
