#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
namespace flixel{
namespace graphics{
namespace tile{

::flixel::graphics::tile::FlxDrawItemType FlxDrawItemType_obj::TILES;

::flixel::graphics::tile::FlxDrawItemType FlxDrawItemType_obj::TRIANGLES;

HX_DEFINE_CREATE_ENUM(FlxDrawItemType_obj)

int FlxDrawItemType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("TILES")) return 0;
	if (inName==HX_CSTRING("TRIANGLES")) return 1;
	return super::__FindIndex(inName);
}

int FlxDrawItemType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("TILES")) return 0;
	if (inName==HX_CSTRING("TRIANGLES")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxDrawItemType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("TILES")) return TILES;
	if (inName==HX_CSTRING("TRIANGLES")) return TRIANGLES;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("TILES"),
	HX_CSTRING("TRIANGLES"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawItemType_obj::TILES,"TILES");
	HX_MARK_MEMBER_NAME(FlxDrawItemType_obj::TRIANGLES,"TRIANGLES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawItemType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxDrawItemType_obj::TILES,"TILES");
	HX_VISIT_MEMBER_NAME(FlxDrawItemType_obj::TRIANGLES,"TRIANGLES");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FlxDrawItemType_obj::__mClass;

Dynamic __Create_FlxDrawItemType_obj() { return new FlxDrawItemType_obj; }

void FlxDrawItemType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.tile.FlxDrawItemType"), hx::TCanCast< FlxDrawItemType_obj >,sStaticFields,sMemberFields,
	&__Create_FlxDrawItemType_obj, &__Create,
	&super::__SGetClass(), &CreateFlxDrawItemType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxDrawItemType_obj::__boot()
{
hx::Static(TILES) = hx::CreateEnum< FlxDrawItemType_obj >(HX_CSTRING("TILES"),0);
hx::Static(TRIANGLES) = hx::CreateEnum< FlxDrawItemType_obj >(HX_CSTRING("TRIANGLES"),1);
}


} // end namespace flixel
} // end namespace graphics
} // end namespace tile
