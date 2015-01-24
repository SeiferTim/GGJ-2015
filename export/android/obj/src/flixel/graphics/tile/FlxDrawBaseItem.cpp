#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace graphics{
namespace tile{

Void FlxDrawBaseItem_obj::__construct()
{
HX_STACK_FRAME("flixel.graphics.tile.FlxDrawBaseItem","new",0x1069797d,"flixel.graphics.tile.FlxDrawBaseItem.new","flixel/graphics/tile/FlxDrawBaseItem.hx",8,0xe6349cf4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->blending = (int)0;
	HX_STACK_LINE(16)
	this->colored = false;
	HX_STACK_LINE(15)
	this->antialiasing = false;
}
;
	return null();
}

//FlxDrawBaseItem_obj::~FlxDrawBaseItem_obj() { }

Dynamic FlxDrawBaseItem_obj::__CreateEmpty() { return  new FlxDrawBaseItem_obj; }
hx::ObjectPtr< FlxDrawBaseItem_obj > FlxDrawBaseItem_obj::__new()
{  hx::ObjectPtr< FlxDrawBaseItem_obj > result = new FlxDrawBaseItem_obj();
	result->__construct();
	return result;}

Dynamic FlxDrawBaseItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxDrawBaseItem_obj > result = new FlxDrawBaseItem_obj();
	result->__construct();
	return result;}

Void FlxDrawBaseItem_obj::reset( ){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawBaseItem","reset",0x6670342c,"flixel.graphics.tile.FlxDrawBaseItem.reset","flixel/graphics/tile/FlxDrawBaseItem.hx",28,0xe6349cf4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		this->graphics = null();
		HX_STACK_LINE(30)
		this->antialiasing = false;
		HX_STACK_LINE(31)
		this->nextTyped = null();
		HX_STACK_LINE(32)
		this->next = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawBaseItem_obj,reset,(void))

Void FlxDrawBaseItem_obj::dispose( ){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawBaseItem","dispose",0x64897c3c,"flixel.graphics.tile.FlxDrawBaseItem.dispose","flixel/graphics/tile/FlxDrawBaseItem.hx",36,0xe6349cf4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		this->graphics = null();
		HX_STACK_LINE(38)
		this->next = null();
		HX_STACK_LINE(39)
		this->type = null();
		HX_STACK_LINE(40)
		this->nextTyped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawBaseItem_obj,dispose,(void))

Void FlxDrawBaseItem_obj::render( ::flixel::FlxCamera camera){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawBaseItem","render",0x386e9259,"flixel.graphics.tile.FlxDrawBaseItem.render","flixel/graphics/tile/FlxDrawBaseItem.hx",43,0xe6349cf4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(camera,"camera")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDrawBaseItem_obj,render,(void))

int FlxDrawBaseItem_obj::get_numVertices( ){
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawBaseItem","get_numVertices",0x6c4b2893,"flixel.graphics.tile.FlxDrawBaseItem.get_numVertices","flixel/graphics/tile/FlxDrawBaseItem.hx",47,0xe6349cf4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawBaseItem_obj,get_numVertices,return )

int FlxDrawBaseItem_obj::get_numTriangles( ){
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawBaseItem","get_numTriangles",0x6bc74ed1,"flixel.graphics.tile.FlxDrawBaseItem.get_numTriangles","flixel/graphics/tile/FlxDrawBaseItem.hx",52,0xe6349cf4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawBaseItem_obj,get_numTriangles,return )


FlxDrawBaseItem_obj::FlxDrawBaseItem_obj()
{
}

void FlxDrawBaseItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDrawBaseItem);
	HX_MARK_MEMBER_NAME(nextTyped,"nextTyped");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(colored,"colored");
	HX_MARK_MEMBER_NAME(blending,"blending");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void FlxDrawBaseItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nextTyped,"nextTyped");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(colored,"colored");
	HX_VISIT_MEMBER_NAME(blending,"blending");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic FlxDrawBaseItem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colored") ) { return colored; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		if (HX_FIELD_EQ(inName,"blending") ) { return blending; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextTyped") ) { return nextTyped; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { return get_numVertices(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"numTriangles") ) { return get_numTriangles(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return get_numVertices_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return get_numTriangles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxDrawBaseItem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::flixel::graphics::tile::FlxDrawBaseItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::flixel::graphics::tile::FlxDrawItemType >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colored") ) { colored=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blending") ) { blending=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextTyped") ) { nextTyped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxDrawBaseItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nextTyped"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("graphics"));
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("colored"));
	outFields->push(HX_CSTRING("blending"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("numVertices"));
	outFields->push(HX_CSTRING("numTriangles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxDrawBaseItem_obj,nextTyped),HX_CSTRING("nextTyped")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawBaseItem*/ ,(int)offsetof(FlxDrawBaseItem_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxDrawBaseItem_obj,graphics),HX_CSTRING("graphics")},
	{hx::fsBool,(int)offsetof(FlxDrawBaseItem_obj,antialiasing),HX_CSTRING("antialiasing")},
	{hx::fsBool,(int)offsetof(FlxDrawBaseItem_obj,colored),HX_CSTRING("colored")},
	{hx::fsInt,(int)offsetof(FlxDrawBaseItem_obj,blending),HX_CSTRING("blending")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawItemType*/ ,(int)offsetof(FlxDrawBaseItem_obj,type),HX_CSTRING("type")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("nextTyped"),
	HX_CSTRING("next"),
	HX_CSTRING("graphics"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("colored"),
	HX_CSTRING("blending"),
	HX_CSTRING("type"),
	HX_CSTRING("reset"),
	HX_CSTRING("dispose"),
	HX_CSTRING("render"),
	HX_CSTRING("get_numVertices"),
	HX_CSTRING("get_numTriangles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawBaseItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawBaseItem_obj::__mClass,"__mClass");
};

#endif

Class FlxDrawBaseItem_obj::__mClass;

void FlxDrawBaseItem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.tile.FlxDrawBaseItem"), hx::TCanCast< FlxDrawBaseItem_obj> ,sStaticFields,sMemberFields,
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

void FlxDrawBaseItem_obj::__boot()
{
}

} // end namespace flixel
} // end namespace graphics
} // end namespace tile
