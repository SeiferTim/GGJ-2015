#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl__v2_AssetType
#include <openfl/_v2/AssetType.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{

Void FlxAtlasFrames_obj::__construct(::flixel::graphics::FlxGraphic parent)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","new",0xed20cbc8,"flixel.graphics.frames.FlxAtlasFrames.new","flixel/graphics/frames/FlxAtlasFrames.hx",23,0x501ecb67)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(24)
	super::__construct(parent,::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS);
	HX_STACK_LINE(25)
	parent->atlasFrames = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//FlxAtlasFrames_obj::~FlxAtlasFrames_obj() { }

Dynamic FlxAtlasFrames_obj::__CreateEmpty() { return  new FlxAtlasFrames_obj; }
hx::ObjectPtr< FlxAtlasFrames_obj > FlxAtlasFrames_obj::__new(::flixel::graphics::FlxGraphic parent)
{  hx::ObjectPtr< FlxAtlasFrames_obj > result = new FlxAtlasFrames_obj();
	result->__construct(parent);
	return result;}

Dynamic FlxAtlasFrames_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAtlasFrames_obj > result = new FlxAtlasFrames_obj();
	result->__construct(inArgs[0]);
	return result;}

::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerJson( Dynamic Source,::String Description){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerJson",0xae76e627,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerJson","flixel/graphics/frames/FlxAtlasFrames.hx",36,0x501ecb67)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Description,"Description")
	HX_STACK_LINE(37)
	::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,false,null());		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(38)
	if (((graphic == null()))){
		HX_STACK_LINE(38)
		return null();
	}
	HX_STACK_LINE(41)
	::flixel::graphics::frames::FlxAtlasFrames frames = graphic->atlasFrames;		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(42)
	if (((frames != null()))){
		HX_STACK_LINE(43)
		return frames;
	}
	HX_STACK_LINE(45)
	if (((bool((graphic == null())) || bool((Description == null()))))){
		HX_STACK_LINE(45)
		return null();
	}
	HX_STACK_LINE(47)
	::flixel::graphics::frames::FlxAtlasFrames _g = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graphic);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	frames = _g;
	HX_STACK_LINE(49)
	if ((::openfl::_v2::Assets_obj::exists(Description,null()))){
		HX_STACK_LINE(51)
		::String _g1 = ::openfl::_v2::Assets_obj::getText(Description);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(51)
		Description = _g1;
	}
	HX_STACK_LINE(54)
	Dynamic data = ::haxe::format::JsonParser_obj::__new(Description)->parseRec();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(57)
	if ((::Std_obj::is(data->__Field(HX_CSTRING("frames"),true),hx::ClassOf< Array<int> >()))){
		HX_STACK_LINE(59)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(59)
		Dynamic _g11 = ::Lambda_obj::array(data->__Field(HX_CSTRING("frames"),true));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(59)
		while((true)){
			HX_STACK_LINE(59)
			if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(59)
				break;
			}
			HX_STACK_LINE(59)
			Dynamic frame = _g11->__GetItem(_g1);		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(59)
			++(_g1);
			HX_STACK_LINE(61)
			::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(frame->__Field(HX_CSTRING("filename"),true),frame,frames);
		}
	}
	else{
		HX_STACK_LINE(68)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(68)
		Array< ::String > _g11 = ::Reflect_obj::fields(data->__Field(HX_CSTRING("frames"),true));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(68)
		while((true)){
			HX_STACK_LINE(68)
			if ((!(((_g1 < _g11->length))))){
				HX_STACK_LINE(68)
				break;
			}
			HX_STACK_LINE(68)
			::String frameName = _g11->__get(_g1);		HX_STACK_VAR(frameName,"frameName");
			HX_STACK_LINE(68)
			++(_g1);
			HX_STACK_LINE(70)
			Dynamic _g2 = ::Reflect_obj::field(data->__Field(HX_CSTRING("frames"),true),frameName);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(70)
			::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(frameName,_g2,frames);
		}
	}
	HX_STACK_LINE(74)
	return frames;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromTexturePackerJson,return )

Void FlxAtlasFrames_obj::texturePackerHelper( ::String FrameName,Dynamic FrameData,::flixel::graphics::frames::FlxAtlasFrames Frames){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","texturePackerHelper",0x397d6e77,"flixel.graphics.frames.FlxAtlasFrames.texturePackerHelper","flixel/graphics/frames/FlxAtlasFrames.hx",84,0x501ecb67)
		HX_STACK_ARG(FrameName,"FrameName")
		HX_STACK_ARG(FrameData,"FrameData")
		HX_STACK_ARG(Frames,"Frames")
		HX_STACK_LINE(85)
		bool rotated = FrameData->__Field(HX_CSTRING("rotated"),true);		HX_STACK_VAR(rotated,"rotated");
		HX_STACK_LINE(86)
		::String name = FrameName;		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(87)
		::flixel::math::FlxPoint sourceSize;		HX_STACK_VAR(sourceSize,"sourceSize");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			Float X = FrameData->__Field(HX_CSTRING("sourceSize"),true)->__Field(HX_CSTRING("w"),true);		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(87)
			Float Y = FrameData->__Field(HX_CSTRING("sourceSize"),true)->__Field(HX_CSTRING("h"),true);		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(87)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(87)
			point->_inPool = false;
			HX_STACK_LINE(87)
			sourceSize = point;
		}
		HX_STACK_LINE(88)
		::flixel::math::FlxPoint offset;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			Float X = FrameData->__Field(HX_CSTRING("spriteSourceSize"),true)->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(88)
			Float Y = FrameData->__Field(HX_CSTRING("spriteSourceSize"),true)->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(88)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(88)
			point->_inPool = false;
			HX_STACK_LINE(88)
			offset = point;
		}
		HX_STACK_LINE(89)
		int angle = (int)0;		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(90)
		::flixel::math::FlxRect frameRect = null();		HX_STACK_VAR(frameRect,"frameRect");
		HX_STACK_LINE(92)
		if ((rotated)){
			HX_STACK_LINE(94)
			::flixel::math::FlxRect _g = ::flixel::math::FlxRect_obj::__new(FrameData->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("x"),true),FrameData->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("y"),true),FrameData->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("h"),true),FrameData->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("w"),true));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(94)
			frameRect = _g;
			HX_STACK_LINE(95)
			angle = (int)-90;
		}
		else{
			HX_STACK_LINE(99)
			::flixel::math::FlxRect _g1 = ::flixel::math::FlxRect_obj::__new(FrameData->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("x"),true),FrameData->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("y"),true),FrameData->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("w"),true),FrameData->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("h"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(99)
			frameRect = _g1;
		}
		HX_STACK_LINE(102)
		Frames->addAtlasFrame(frameRect,sourceSize,offset,name,angle);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAtlasFrames_obj,texturePackerHelper,(void))

::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromLibGdx( Dynamic Source,::String Description){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","fromLibGdx",0x5ef5c818,"flixel.graphics.frames.FlxAtlasFrames.fromLibGdx","flixel/graphics/frames/FlxAtlasFrames.hx",114,0x501ecb67)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Description,"Description")
	HX_STACK_LINE(115)
	::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(116)
	if (((graphic == null()))){
		HX_STACK_LINE(116)
		return null();
	}
	HX_STACK_LINE(119)
	::flixel::graphics::frames::FlxAtlasFrames frames = graphic->atlasFrames;		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(120)
	if (((frames != null()))){
		HX_STACK_LINE(121)
		return frames;
	}
	HX_STACK_LINE(123)
	if (((bool((graphic == null())) || bool((Description == null()))))){
		HX_STACK_LINE(123)
		return null();
	}
	HX_STACK_LINE(125)
	::flixel::graphics::frames::FlxAtlasFrames _g = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graphic);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(125)
	frames = _g;
	HX_STACK_LINE(127)
	if ((::openfl::_v2::Assets_obj::exists(Description,null()))){
		HX_STACK_LINE(129)
		::String _g1 = ::openfl::_v2::Assets_obj::getText(Description);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(129)
		Description = _g1;
	}
	HX_STACK_LINE(132)
	::String pack = ::StringTools_obj::trim(Description);		HX_STACK_VAR(pack,"pack");
	HX_STACK_LINE(133)
	Array< ::String > lines = pack.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
	HX_STACK_LINE(134)
	lines->splice((int)0,(int)4);
	HX_STACK_LINE(135)
	int numElementsPerImage = (int)7;		HX_STACK_VAR(numElementsPerImage,"numElementsPerImage");
	HX_STACK_LINE(136)
	int numImages = ::Std_obj::_int((Float(lines->length) / Float(numElementsPerImage)));		HX_STACK_VAR(numImages,"numImages");
	HX_STACK_LINE(138)
	int curIndex;		HX_STACK_VAR(curIndex,"curIndex");
	HX_STACK_LINE(139)
	int imageX;		HX_STACK_VAR(imageX,"imageX");
	HX_STACK_LINE(140)
	int imageY;		HX_STACK_VAR(imageY,"imageY");
	HX_STACK_LINE(142)
	int imageWidth;		HX_STACK_VAR(imageWidth,"imageWidth");
	HX_STACK_LINE(143)
	int imageHeight;		HX_STACK_VAR(imageHeight,"imageHeight");
	HX_STACK_LINE(145)
	Array< int > size = Array_obj< int >::__new();		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(146)
	::String tempString;		HX_STACK_VAR(tempString,"tempString");
	HX_STACK_LINE(148)
	::String name;		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(149)
	bool rotated;		HX_STACK_VAR(rotated,"rotated");
	HX_STACK_LINE(150)
	int angle;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(151)
	::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(152)
	::flixel::math::FlxPoint sourceSize;		HX_STACK_VAR(sourceSize,"sourceSize");
	HX_STACK_LINE(153)
	::flixel::math::FlxPoint offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(155)
	{
		HX_STACK_LINE(155)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(155)
		while((true)){
			HX_STACK_LINE(155)
			if ((!(((_g1 < numImages))))){
				HX_STACK_LINE(155)
				break;
			}
			HX_STACK_LINE(155)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(157)
			curIndex = (i * numElementsPerImage);
			HX_STACK_LINE(159)
			int _g2 = (curIndex)++;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(159)
			::String _g3 = lines->__get(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(159)
			name = _g3;
			HX_STACK_LINE(160)
			int _g4 = (curIndex)++;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(160)
			int _g5 = lines->__get(_g4).indexOf(HX_CSTRING("true"),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(160)
			bool _g6 = (_g5 >= (int)0);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(160)
			rotated = _g6;
			HX_STACK_LINE(161)
			angle = (int)0;
			HX_STACK_LINE(163)
			int _g7 = (curIndex)++;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(163)
			::String _g8 = lines->__get(_g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(163)
			tempString = _g8;
			HX_STACK_LINE(164)
			Array< int > _g9 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString,size);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(164)
			size = _g9;
			HX_STACK_LINE(166)
			imageX = size->__get((int)0);
			HX_STACK_LINE(167)
			imageY = size->__get((int)1);
			HX_STACK_LINE(169)
			int _g10 = (curIndex)++;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(169)
			::String _g11 = lines->__get(_g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(169)
			tempString = _g11;
			HX_STACK_LINE(170)
			Array< int > _g12 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString,size);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(170)
			size = _g12;
			HX_STACK_LINE(172)
			imageWidth = size->__get((int)0);
			HX_STACK_LINE(173)
			imageHeight = size->__get((int)1);
			HX_STACK_LINE(175)
			rect = null();
			HX_STACK_LINE(176)
			if ((rotated)){
				HX_STACK_LINE(178)
				::flixel::math::FlxRect _g13 = ::flixel::math::FlxRect_obj::__new(imageX,imageY,imageHeight,imageWidth);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(178)
				rect = _g13;
				HX_STACK_LINE(179)
				angle = (int)90;
			}
			else{
				HX_STACK_LINE(183)
				::flixel::math::FlxRect _g14 = ::flixel::math::FlxRect_obj::__new(imageX,imageY,imageWidth,imageHeight);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(183)
				rect = _g14;
			}
			HX_STACK_LINE(186)
			int _g15 = (curIndex)++;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(186)
			::String _g16 = lines->__get(_g15);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(186)
			tempString = _g16;
			HX_STACK_LINE(187)
			Array< int > _g17 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString,size);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(187)
			size = _g17;
			HX_STACK_LINE(189)
			::flixel::math::FlxPoint _g18;		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(189)
			{
				HX_STACK_LINE(189)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(size->__get((int)0),size->__get((int)1));		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(189)
				point->_inPool = false;
				HX_STACK_LINE(189)
				_g18 = point;
			}
			HX_STACK_LINE(189)
			sourceSize = _g18;
			HX_STACK_LINE(191)
			int _g19 = (curIndex)++;		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(191)
			::String _g20 = lines->__get(_g19);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(191)
			tempString = _g20;
			HX_STACK_LINE(192)
			Array< int > _g21 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString,size);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(192)
			size = _g21;
			HX_STACK_LINE(194)
			::flixel::math::FlxPoint _g22;		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(size->__get((int)0),size->__get((int)1));		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(194)
				point->_inPool = false;
				HX_STACK_LINE(194)
				_g22 = point;
			}
			HX_STACK_LINE(194)
			offset = _g22;
			HX_STACK_LINE(195)
			frames->addAtlasFrame(rect,sourceSize,offset,name,angle);
		}
	}
	HX_STACK_LINE(198)
	return frames;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromLibGdx,return )

Array< int > FlxAtlasFrames_obj::getDimensions( ::String line,Array< int > size){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","getDimensions",0x0a6267eb,"flixel.graphics.frames.FlxAtlasFrames.getDimensions","flixel/graphics/frames/FlxAtlasFrames.hx",209,0x501ecb67)
	HX_STACK_ARG(line,"line")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(210)
	int colonPosition = line.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(colonPosition,"colonPosition");
	HX_STACK_LINE(211)
	int comaPosition = line.indexOf(HX_CSTRING(","),null());		HX_STACK_VAR(comaPosition,"comaPosition");
	HX_STACK_LINE(213)
	::String _g = line.substring((colonPosition + (int)1),comaPosition);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(213)
	size[(int)0] = ::Std_obj::parseInt(_g);
	HX_STACK_LINE(214)
	::String _g1 = line.substring((comaPosition + (int)1),line.length);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(214)
	size[(int)1] = ::Std_obj::parseInt(_g1);
	HX_STACK_LINE(216)
	return size;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,getDimensions,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSparrow( Dynamic Source,::String Description){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","fromSparrow",0x30bf432a,"flixel.graphics.frames.FlxAtlasFrames.fromSparrow","flixel/graphics/frames/FlxAtlasFrames.hx",228,0x501ecb67)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Description,"Description")
	HX_STACK_LINE(229)
	::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(230)
	if (((graphic == null()))){
		HX_STACK_LINE(230)
		return null();
	}
	HX_STACK_LINE(233)
	::flixel::graphics::frames::FlxAtlasFrames frames = graphic->atlasFrames;		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(234)
	if (((frames != null()))){
		HX_STACK_LINE(235)
		return frames;
	}
	HX_STACK_LINE(237)
	if (((bool((graphic == null())) || bool((Description == null()))))){
		HX_STACK_LINE(237)
		return null();
	}
	HX_STACK_LINE(239)
	::flixel::graphics::frames::FlxAtlasFrames _g = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graphic);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(239)
	frames = _g;
	HX_STACK_LINE(241)
	if ((::openfl::_v2::Assets_obj::exists(Description,null()))){
		HX_STACK_LINE(243)
		::String _g1 = ::openfl::_v2::Assets_obj::getText(Description);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(243)
		Description = _g1;
	}
	HX_STACK_LINE(246)
	::Xml _g2 = ::Xml_obj::parse(Description)->firstElement();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(246)
	::haxe::xml::Fast data = ::haxe::xml::Fast_obj::__new(_g2);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(248)
	int angle;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(249)
	::String name;		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(250)
	bool trimmed;		HX_STACK_VAR(trimmed,"trimmed");
	HX_STACK_LINE(251)
	bool rotated;		HX_STACK_VAR(rotated,"rotated");
	HX_STACK_LINE(252)
	::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(253)
	::openfl::_v2::geom::Rectangle size;		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(254)
	::flixel::math::FlxPoint offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(255)
	::flixel::math::FlxPoint sourceSize;		HX_STACK_VAR(sourceSize,"sourceSize");
	HX_STACK_LINE(257)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("SubTexture"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast texture = __it->next();
		{
			HX_STACK_LINE(259)
			::String _g3 = texture->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(259)
			name = _g3;
			HX_STACK_LINE(260)
			bool _g4 = texture->has->resolve(HX_CSTRING("frameX"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(260)
			trimmed = _g4;
			HX_STACK_LINE(261)
			bool _g6;		HX_STACK_VAR(_g6,"_g6");
			struct _Function_2_1{
				inline static bool Block( ::haxe::xml::Fast &texture){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxAtlasFrames.hx",261,0x501ecb67)
					{
						HX_STACK_LINE(261)
						::String _g5 = texture->att->resolve(HX_CSTRING("rotated"));		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(261)
						return (_g5 == HX_CSTRING("true"));
					}
					return null();
				}
			};
			HX_STACK_LINE(261)
			if (((  ((texture->has->resolve(HX_CSTRING("rotated")))) ? bool(_Function_2_1::Block(texture)) : bool(false) ))){
				HX_STACK_LINE(261)
				_g6 = true;
			}
			else{
				HX_STACK_LINE(261)
				_g6 = false;
			}
			HX_STACK_LINE(261)
			rotated = _g6;
			HX_STACK_LINE(263)
			::String _g7 = texture->att->resolve(HX_CSTRING("x"));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(263)
			Float _g8 = ::Std_obj::parseFloat(_g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(263)
			::String _g9 = texture->att->resolve(HX_CSTRING("y"));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(263)
			Float _g10 = ::Std_obj::parseFloat(_g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(263)
			::String _g11 = texture->att->resolve(HX_CSTRING("width"));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(263)
			Float _g12 = ::Std_obj::parseFloat(_g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(263)
			::String _g13 = texture->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(263)
			Float _g14 = ::Std_obj::parseFloat(_g13);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(263)
			::flixel::math::FlxRect _g15 = ::flixel::math::FlxRect_obj::__new(_g8,_g10,_g12,_g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(263)
			rect = _g15;
			HX_STACK_LINE(265)
			::openfl::_v2::geom::Rectangle _g24;		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(265)
			if ((trimmed)){
				HX_STACK_LINE(267)
				::String _g16 = texture->att->resolve(HX_CSTRING("frameX"));		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(267)
				Dynamic _g17 = ::Std_obj::parseInt(_g16);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(267)
				::String _g18 = texture->att->resolve(HX_CSTRING("frameY"));		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(267)
				Dynamic _g19 = ::Std_obj::parseInt(_g18);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(267)
				::String _g20 = texture->att->resolve(HX_CSTRING("frameWidth"));		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(267)
				Dynamic _g21 = ::Std_obj::parseInt(_g20);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(267)
				::String _g22 = texture->att->resolve(HX_CSTRING("frameHeight"));		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(267)
				Dynamic _g23 = ::Std_obj::parseInt(_g22);		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(267)
				_g24 = ::openfl::_v2::geom::Rectangle_obj::__new(_g17,_g19,_g21,_g23);
			}
			else{
				HX_STACK_LINE(271)
				_g24 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,rect->width,rect->height);
			}
			HX_STACK_LINE(265)
			size = _g24;
			HX_STACK_LINE(274)
			if ((rotated)){
				HX_STACK_LINE(274)
				angle = (int)-90;
			}
			else{
				HX_STACK_LINE(274)
				angle = (int)0;
			}
			HX_STACK_LINE(276)
			::flixel::math::FlxPoint _g25;		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(276)
			{
				HX_STACK_LINE(276)
				Float X = -(size->get_left());		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(276)
				Float Y = -(size->get_top());		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(276)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(276)
				point->_inPool = false;
				HX_STACK_LINE(276)
				_g25 = point;
			}
			HX_STACK_LINE(276)
			offset = _g25;
			HX_STACK_LINE(277)
			::flixel::math::FlxPoint _g26;		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(277)
			{
				HX_STACK_LINE(277)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(size->width,size->height);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(277)
				point->_inPool = false;
				HX_STACK_LINE(277)
				_g26 = point;
			}
			HX_STACK_LINE(277)
			sourceSize = _g26;
			HX_STACK_LINE(279)
			if (((bool(rotated) && bool(!(trimmed))))){
				HX_STACK_LINE(281)
				sourceSize->set(size->height,size->width);
			}
			HX_STACK_LINE(284)
			frames->addAtlasFrame(rect,sourceSize,offset,name,angle);
		}
;
	}
	HX_STACK_LINE(287)
	return frames;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSparrow,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerXml( Dynamic Source,::String Description){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerXml",0x5ca98eb8,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerXml","flixel/graphics/frames/FlxAtlasFrames.hx",299,0x501ecb67)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Description,"Description")
	HX_STACK_LINE(300)
	::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,false,null());		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(301)
	if (((graphic == null()))){
		HX_STACK_LINE(301)
		return null();
	}
	HX_STACK_LINE(304)
	::flixel::graphics::frames::FlxAtlasFrames frames = graphic->atlasFrames;		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(305)
	if (((frames != null()))){
		HX_STACK_LINE(306)
		return frames;
	}
	HX_STACK_LINE(308)
	if (((bool((graphic == null())) || bool((Description == null()))))){
		HX_STACK_LINE(308)
		return null();
	}
	HX_STACK_LINE(310)
	::flixel::graphics::frames::FlxAtlasFrames _g = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graphic);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(310)
	frames = _g;
	HX_STACK_LINE(312)
	if ((::openfl::_v2::Assets_obj::exists(Description,null()))){
		HX_STACK_LINE(314)
		::String _g1 = ::openfl::_v2::Assets_obj::getText(Description);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(314)
		Description = _g1;
	}
	HX_STACK_LINE(317)
	::Xml xml = ::Xml_obj::parse(Description);		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(318)
	::Xml root = xml->firstElement();		HX_STACK_VAR(root,"root");
	HX_STACK_LINE(320)
	bool rotated;		HX_STACK_VAR(rotated,"rotated");
	HX_STACK_LINE(321)
	bool trimmed;		HX_STACK_VAR(trimmed,"trimmed");
	HX_STACK_LINE(322)
	int angle;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(323)
	::String name;		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(324)
	::flixel::math::FlxPoint offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(325)
	::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(326)
	::flixel::math::FlxPoint sourceSize;		HX_STACK_VAR(sourceSize,"sourceSize");
	HX_STACK_LINE(328)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(root->elements());  __it->hasNext(); ){
		::Xml sprite = __it->next();
		{
			HX_STACK_LINE(330)
			bool _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(330)
			if ((!(sprite->exists(HX_CSTRING("oX"))))){
				HX_STACK_LINE(330)
				_g2 = sprite->exists(HX_CSTRING("oY"));
			}
			else{
				HX_STACK_LINE(330)
				_g2 = true;
			}
			HX_STACK_LINE(330)
			trimmed = _g2;
			HX_STACK_LINE(331)
			bool _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(331)
			if ((sprite->exists(HX_CSTRING("r")))){
				HX_STACK_LINE(331)
				::String _g3 = sprite->get(HX_CSTRING("r"));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(331)
				_g4 = (_g3 == HX_CSTRING("y"));
			}
			else{
				HX_STACK_LINE(331)
				_g4 = false;
			}
			HX_STACK_LINE(331)
			rotated = _g4;
			HX_STACK_LINE(332)
			if ((rotated)){
				HX_STACK_LINE(332)
				angle = (int)-90;
			}
			else{
				HX_STACK_LINE(332)
				angle = (int)0;
			}
			HX_STACK_LINE(333)
			::String _g5 = sprite->get(HX_CSTRING("n"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(333)
			name = _g5;
			HX_STACK_LINE(334)
			::flixel::math::FlxPoint _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(334)
			{
				HX_STACK_LINE(334)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(334)
				point->_inPool = false;
				HX_STACK_LINE(334)
				_g6 = point;
			}
			HX_STACK_LINE(334)
			offset = _g6;
			HX_STACK_LINE(335)
			::String _g7 = sprite->get(HX_CSTRING("x"));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(335)
			Dynamic _g8 = ::Std_obj::parseInt(_g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(335)
			::String _g9 = sprite->get(HX_CSTRING("y"));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(335)
			Dynamic _g10 = ::Std_obj::parseInt(_g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(335)
			::String _g11 = sprite->get(HX_CSTRING("w"));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(335)
			Dynamic _g12 = ::Std_obj::parseInt(_g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(335)
			::String _g13 = sprite->get(HX_CSTRING("h"));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(335)
			Dynamic _g14 = ::Std_obj::parseInt(_g13);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(335)
			::flixel::math::FlxRect _g15 = ::flixel::math::FlxRect_obj::__new(_g8,_g10,_g12,_g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(335)
			rect = _g15;
			HX_STACK_LINE(336)
			::flixel::math::FlxPoint _g16;		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(336)
			{
				HX_STACK_LINE(336)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(rect->width,rect->height);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(336)
				point->_inPool = false;
				HX_STACK_LINE(336)
				_g16 = point;
			}
			HX_STACK_LINE(336)
			sourceSize = _g16;
			HX_STACK_LINE(338)
			if ((trimmed)){
				HX_STACK_LINE(340)
				::String _g17 = sprite->get(HX_CSTRING("oX"));		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(340)
				Dynamic _g18 = ::Std_obj::parseInt(_g17);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(340)
				::String _g19 = sprite->get(HX_CSTRING("oY"));		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(340)
				Dynamic _g20 = ::Std_obj::parseInt(_g19);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(340)
				offset->set(_g18,_g20);
				HX_STACK_LINE(341)
				::String _g21 = sprite->get(HX_CSTRING("oW"));		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(341)
				Dynamic _g22 = ::Std_obj::parseInt(_g21);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(341)
				::String _g23 = sprite->get(HX_CSTRING("oH"));		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(341)
				Dynamic _g24 = ::Std_obj::parseInt(_g23);		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(341)
				sourceSize->set(_g22,_g24);
			}
			HX_STACK_LINE(344)
			frames->addAtlasFrame(rect,sourceSize,offset,name,angle);
		}
;
	}
	HX_STACK_LINE(347)
	return frames;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromTexturePackerXml,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSpriteSheetPacker( Dynamic Source,::String Description){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","fromSpriteSheetPacker",0x4fb8a81e,"flixel.graphics.frames.FlxAtlasFrames.fromSpriteSheetPacker","flixel/graphics/frames/FlxAtlasFrames.hx",359,0x501ecb67)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Description,"Description")
	HX_STACK_LINE(360)
	::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(361)
	if (((graphic == null()))){
		HX_STACK_LINE(361)
		return null();
	}
	HX_STACK_LINE(364)
	::flixel::graphics::frames::FlxAtlasFrames frames = graphic->atlasFrames;		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(365)
	if (((frames != null()))){
		HX_STACK_LINE(366)
		return frames;
	}
	HX_STACK_LINE(368)
	if (((bool((graphic == null())) || bool((Description == null()))))){
		HX_STACK_LINE(368)
		return null();
	}
	HX_STACK_LINE(370)
	::flixel::graphics::frames::FlxAtlasFrames _g = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graphic);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(370)
	frames = _g;
	HX_STACK_LINE(372)
	if ((::openfl::_v2::Assets_obj::exists(Description,null()))){
		HX_STACK_LINE(374)
		::String _g1 = ::openfl::_v2::Assets_obj::getText(Description);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(374)
		Description = _g1;
	}
	HX_STACK_LINE(377)
	::String pack = ::StringTools_obj::trim(Description);		HX_STACK_VAR(pack,"pack");
	HX_STACK_LINE(378)
	Array< ::String > lines = pack.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
	HX_STACK_LINE(379)
	int numImages = lines->length;		HX_STACK_VAR(numImages,"numImages");
	HX_STACK_LINE(381)
	::String name;		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(382)
	int angle = (int)0;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(383)
	::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(384)
	::flixel::math::FlxPoint sourceSize;		HX_STACK_VAR(sourceSize,"sourceSize");
	HX_STACK_LINE(385)
	::flixel::math::FlxPoint offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(387)
	Array< ::String > currImageData;		HX_STACK_VAR(currImageData,"currImageData");
	HX_STACK_LINE(388)
	Array< ::String > currImageRegion;		HX_STACK_VAR(currImageRegion,"currImageRegion");
	HX_STACK_LINE(390)
	{
		HX_STACK_LINE(390)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(390)
		while((true)){
			HX_STACK_LINE(390)
			if ((!(((_g1 < numImages))))){
				HX_STACK_LINE(390)
				break;
			}
			HX_STACK_LINE(390)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(392)
			Array< ::String > _g2 = lines->__get(i).split(HX_CSTRING("="));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(392)
			currImageData = _g2;
			HX_STACK_LINE(393)
			::String _g3 = ::StringTools_obj::trim(currImageData->__get((int)0));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(393)
			name = _g3;
			HX_STACK_LINE(394)
			Array< ::String > _g4 = ::StringTools_obj::trim(currImageData->__get((int)1)).split(HX_CSTRING(" "));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(394)
			currImageRegion = _g4;
			HX_STACK_LINE(396)
			Dynamic _g5 = ::Std_obj::parseInt(currImageRegion->__get((int)0));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(396)
			Dynamic _g6 = ::Std_obj::parseInt(currImageRegion->__get((int)1));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(396)
			Dynamic _g7 = ::Std_obj::parseInt(currImageRegion->__get((int)2));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(396)
			Dynamic _g8 = ::Std_obj::parseInt(currImageRegion->__get((int)3));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(396)
			::flixel::math::FlxRect _g9 = ::flixel::math::FlxRect_obj::__new(_g5,_g6,_g7,_g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(396)
			rect = _g9;
			HX_STACK_LINE(397)
			::flixel::math::FlxPoint _g10 = ::flixel::math::FlxPoint_obj::__new(rect->width,rect->height);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(397)
			sourceSize = _g10;
			HX_STACK_LINE(398)
			::flixel::math::FlxPoint _g11 = ::flixel::math::FlxPoint_obj::__new(null(),null());		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(398)
			offset = _g11;
			HX_STACK_LINE(400)
			frames->addAtlasFrame(rect,sourceSize,offset,name,angle);
		}
	}
	HX_STACK_LINE(403)
	return frames;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSpriteSheetPacker,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::findFrame( ::flixel::graphics::FlxGraphic graphic){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","findFrame",0xf36e229c,"flixel.graphics.frames.FlxAtlasFrames.findFrame","flixel/graphics/frames/FlxAtlasFrames.hx",414,0x501ecb67)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_LINE(414)
	return graphic->atlasFrames;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAtlasFrames_obj,findFrame,return )


FlxAtlasFrames_obj::FlxAtlasFrames_obj()
{
}

Dynamic FlxAtlasFrames_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"findFrame") ) { return findFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromLibGdx") ) { return fromLibGdx_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromSparrow") ) { return fromSparrow_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDimensions") ) { return getDimensions_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"texturePackerHelper") ) { return texturePackerHelper_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fromTexturePackerXml") ) { return fromTexturePackerXml_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"fromTexturePackerJson") ) { return fromTexturePackerJson_dyn(); }
		if (HX_FIELD_EQ(inName,"fromSpriteSheetPacker") ) { return fromSpriteSheetPacker_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAtlasFrames_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAtlasFrames_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromTexturePackerJson"),
	HX_CSTRING("texturePackerHelper"),
	HX_CSTRING("fromLibGdx"),
	HX_CSTRING("getDimensions"),
	HX_CSTRING("fromSparrow"),
	HX_CSTRING("fromTexturePackerXml"),
	HX_CSTRING("fromSpriteSheetPacker"),
	HX_CSTRING("findFrame"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAtlasFrames_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAtlasFrames_obj::__mClass,"__mClass");
};

#endif

Class FlxAtlasFrames_obj::__mClass;

void FlxAtlasFrames_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.frames.FlxAtlasFrames"), hx::TCanCast< FlxAtlasFrames_obj> ,sStaticFields,sMemberFields,
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

void FlxAtlasFrames_obj::__boot()
{
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
