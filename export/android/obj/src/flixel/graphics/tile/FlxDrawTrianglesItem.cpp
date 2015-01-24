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
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTrianglesItem
#include <flixel/graphics/tile/FlxDrawTrianglesItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxTilesheet
#include <flixel/graphics/tile/FlxTilesheet.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_CapsStyle
#include <openfl/_v2/display/CapsStyle.h>
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
#ifndef INCLUDED_openfl__v2_display_JointStyle
#include <openfl/_v2/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_LineScaleMode
#include <openfl/_v2/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Tilesheet
#include <openfl/_v2/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__v2_display_TriangleCulling
#include <openfl/_v2/display/TriangleCulling.h>
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

Void FlxDrawTrianglesItem_obj::__construct()
{
HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","new",0x8669d929,"flixel.graphics.tile.FlxDrawTrianglesItem.new","flixel/graphics/tile/FlxDrawTrianglesItem.hx",24,0x6492a666)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	this->type = ::flixel::graphics::tile::FlxDrawItemType_obj::TRIANGLES;
	HX_STACK_LINE(34)
	Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(34)
	this->vertices = _g;
	HX_STACK_LINE(35)
	Array< int > _g1 = Array_obj< int >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(35)
	this->indices = _g1;
	HX_STACK_LINE(36)
	Array< Float > _g2 = Array_obj< Float >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(36)
	this->uvt = _g2;
	HX_STACK_LINE(37)
	Array< int > _g3 = Array_obj< int >::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(37)
	this->colors = _g3;
}
;
	return null();
}

//FlxDrawTrianglesItem_obj::~FlxDrawTrianglesItem_obj() { }

Dynamic FlxDrawTrianglesItem_obj::__CreateEmpty() { return  new FlxDrawTrianglesItem_obj; }
hx::ObjectPtr< FlxDrawTrianglesItem_obj > FlxDrawTrianglesItem_obj::__new()
{  hx::ObjectPtr< FlxDrawTrianglesItem_obj > result = new FlxDrawTrianglesItem_obj();
	result->__construct();
	return result;}

Dynamic FlxDrawTrianglesItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxDrawTrianglesItem_obj > result = new FlxDrawTrianglesItem_obj();
	result->__construct();
	return result;}

Void FlxDrawTrianglesItem_obj::render( ::flixel::FlxCamera camera){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","render",0xbf64462d,"flixel.graphics.tile.FlxDrawTrianglesItem.render","flixel/graphics/tile/FlxDrawTrianglesItem.hx",42,0x6492a666)
		HX_STACK_THIS(this)
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(44)
		int _g = this->get_numTriangles();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		if (((_g <= (int)0))){
			HX_STACK_LINE(46)
			return null();
		}
		HX_STACK_LINE(49)
		camera->canvas->get_graphics()->beginBitmapFill(this->graphics->bitmap,null(),true,(bool(camera->antialiasing) || bool(this->antialiasing)));
		HX_STACK_LINE(53)
		camera->canvas->get_graphics()->drawTriangles(this->vertices,this->indices,this->uvt,::openfl::_v2::display::TriangleCulling_obj::NONE,(  (((this->colors->length == (int)0))) ? Array< int >(null()) : Array< int >(this->colors) ),this->blending);
		HX_STACK_LINE(55)
		camera->canvas->get_graphics()->endFill();
		HX_STACK_LINE(57)
		if ((::flixel::FlxG_obj::debugger->drawDebug)){
			HX_STACK_LINE(59)
			::openfl::_v2::display::Graphics gfx = camera->debugLayer->get_graphics();		HX_STACK_VAR(gfx,"gfx");
			HX_STACK_LINE(60)
			gfx->lineStyle((int)1,(int)-16776961,0.5,null(),null(),null(),null(),null());
			HX_STACK_LINE(61)
			gfx->drawTriangles(this->vertices,this->indices,null(),null(),null(),null());
		}
		HX_STACK_LINE(65)
		(::flixel::graphics::tile::FlxTilesheet_obj::_DRAWCALLS)++;
	}
return null();
}


Void FlxDrawTrianglesItem_obj::reset( ){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","reset",0xa508d6d8,"flixel.graphics.tile.FlxDrawTrianglesItem.reset","flixel/graphics/tile/FlxDrawTrianglesItem.hx",70,0x6492a666)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		this->super::reset();
		HX_STACK_LINE(72)
		this->vertices->splice((int)0,this->vertices->length);
		HX_STACK_LINE(73)
		this->indices->splice((int)0,this->indices->length);
		HX_STACK_LINE(74)
		this->uvt->splice((int)0,this->uvt->length);
		HX_STACK_LINE(75)
		this->colors->splice((int)0,this->colors->length);
	}
return null();
}


Void FlxDrawTrianglesItem_obj::dispose( ){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","dispose",0xf49121e8,"flixel.graphics.tile.FlxDrawTrianglesItem.dispose","flixel/graphics/tile/FlxDrawTrianglesItem.hx",79,0x6492a666)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		this->super::dispose();
		HX_STACK_LINE(82)
		this->vertices = null();
		HX_STACK_LINE(83)
		this->indices = null();
		HX_STACK_LINE(84)
		this->uvt = null();
		HX_STACK_LINE(85)
		this->colors = null();
	}
return null();
}


int FlxDrawTrianglesItem_obj::get_numVertices( ){
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","get_numVertices",0x2e325a3f,"flixel.graphics.tile.FlxDrawTrianglesItem.get_numVertices","flixel/graphics/tile/FlxDrawTrianglesItem.hx",90,0x6492a666)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	return ::Std_obj::_int((Float(this->vertices->length) / Float((int)2)));
}


int FlxDrawTrianglesItem_obj::get_numTriangles( ){
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","get_numTriangles",0x542b93a5,"flixel.graphics.tile.FlxDrawTrianglesItem.get_numTriangles","flixel/graphics/tile/FlxDrawTrianglesItem.hx",95,0x6492a666)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	return ::Std_obj::_int((Float(this->indices->length) / Float((int)3)));
}



FlxDrawTrianglesItem_obj::FlxDrawTrianglesItem_obj()
{
}

void FlxDrawTrianglesItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDrawTrianglesItem);
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(uvt,"uvt");
	HX_MARK_MEMBER_NAME(colors,"colors");
	::flixel::graphics::tile::FlxDrawBaseItem_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxDrawTrianglesItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(uvt,"uvt");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	::flixel::graphics::tile::FlxDrawBaseItem_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxDrawTrianglesItem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uvt") ) { return uvt; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { return colors; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return get_numVertices_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return get_numTriangles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxDrawTrianglesItem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uvt") ) { uvt=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxDrawTrianglesItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("vertices"));
	outFields->push(HX_CSTRING("indices"));
	outFields->push(HX_CSTRING("uvt"));
	outFields->push(HX_CSTRING("colors"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,vertices),HX_CSTRING("vertices")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,indices),HX_CSTRING("indices")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,uvt),HX_CSTRING("uvt")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,colors),HX_CSTRING("colors")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("vertices"),
	HX_CSTRING("indices"),
	HX_CSTRING("uvt"),
	HX_CSTRING("colors"),
	HX_CSTRING("render"),
	HX_CSTRING("reset"),
	HX_CSTRING("dispose"),
	HX_CSTRING("get_numVertices"),
	HX_CSTRING("get_numTriangles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawTrianglesItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawTrianglesItem_obj::__mClass,"__mClass");
};

#endif

Class FlxDrawTrianglesItem_obj::__mClass;

void FlxDrawTrianglesItem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.tile.FlxDrawTrianglesItem"), hx::TCanCast< FlxDrawTrianglesItem_obj> ,sStaticFields,sMemberFields,
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

void FlxDrawTrianglesItem_obj::__boot()
{
}

} // end namespace flixel
} // end namespace graphics
} // end namespace tile
