#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_graphics_frames_FlxEmptyFrame
#include <flixel/graphics/frames/FlxEmptyFrame.h>
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
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
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
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
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
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{

Void FlxTileFrames_obj::__construct(::flixel::graphics::FlxGraphic parent)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","new",0xee264501,"flixel.graphics.frames.FlxTileFrames.new","flixel/graphics/frames/FlxTileFrames.hx",18,0x562d6bb0)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(40)
	this->numCols = (int)0;
	HX_STACK_LINE(38)
	this->numRows = (int)0;
	HX_STACK_LINE(44)
	super::__construct(parent,::flixel::graphics::frames::FlxFrameCollectionType_obj::TILES);
}
;
	return null();
}

//FlxTileFrames_obj::~FlxTileFrames_obj() { }

Dynamic FlxTileFrames_obj::__CreateEmpty() { return  new FlxTileFrames_obj; }
hx::ObjectPtr< FlxTileFrames_obj > FlxTileFrames_obj::__new(::flixel::graphics::FlxGraphic parent)
{  hx::ObjectPtr< FlxTileFrames_obj > result = new FlxTileFrames_obj();
	result->__construct(parent);
	return result;}

Dynamic FlxTileFrames_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTileFrames_obj > result = new FlxTileFrames_obj();
	result->__construct(inArgs[0]);
	return result;}

::flixel::graphics::frames::FlxFrame FlxTileFrames_obj::getByTilePosition( int column,int row){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","getByTilePosition",0xcc1d2a05,"flixel.graphics.frames.FlxTileFrames.getByTilePosition","flixel/graphics/frames/FlxTileFrames.hx",52,0x562d6bb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_LINE(52)
	return this->frames->__get(((row * this->numCols) + column)).StaticCast< ::flixel::graphics::frames::FlxFrame >();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTileFrames_obj,getByTilePosition,return )

bool FlxTileFrames_obj::equals( ::flixel::math::FlxPoint tileSize,::flixel::math::FlxRect region,::flixel::graphics::frames::FlxFrame atlasFrame,::flixel::math::FlxPoint tileSpacing){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","equals",0xd88c543e,"flixel.graphics.frames.FlxTileFrames.equals","flixel/graphics/frames/FlxTileFrames.hx",400,0x562d6bb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(atlasFrame,"atlasFrame")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_LINE(401)
	if (((bool((this->region == null())) && bool((this->atlasFrame == null()))))){
		HX_STACK_LINE(403)
		return false;
	}
	HX_STACK_LINE(406)
	if (((atlasFrame != null()))){
		HX_STACK_LINE(408)
		region = atlasFrame->frame;
	}
	HX_STACK_LINE(411)
	if (((region == null()))){
		HX_STACK_LINE(413)
		region = ::flixel::math::FlxRect_obj::flxRect;
		HX_STACK_LINE(414)
		{
			HX_STACK_LINE(414)
			region->x = (int)0;
			HX_STACK_LINE(414)
			region->y = (int)0;
			HX_STACK_LINE(414)
			region->width = this->parent->width;
			HX_STACK_LINE(414)
			region->height = this->parent->height;
			HX_STACK_LINE(414)
			region;
		}
	}
	HX_STACK_LINE(417)
	if (((tileSpacing == null()))){
		HX_STACK_LINE(419)
		tileSpacing = ::flixel::math::FlxPoint_obj::flxPoint;
		HX_STACK_LINE(420)
		tileSpacing->set((int)0,(int)0);
	}
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::graphics::frames::FlxTileFrames_obj > __this,::flixel::math::FlxRect &region){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxTileFrames.hx",423,0x562d6bb0)
			{
				HX_STACK_LINE(423)
				::flixel::math::FlxRect _this = __this->region;		HX_STACK_VAR(_this,"_this");
				struct _Function_2_1{
					inline static bool Block( ::flixel::math::FlxRect &region,::flixel::math::FlxRect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxTileFrames.hx",423,0x562d6bb0)
						{
							HX_STACK_LINE(423)
							Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
							HX_STACK_LINE(423)
							Float _g = ::Math_obj::abs((_this->x - region->x));		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(423)
							return (_g <= aDiff);
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static bool Block( ::flixel::math::FlxRect &region,::flixel::math::FlxRect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxTileFrames.hx",423,0x562d6bb0)
						{
							HX_STACK_LINE(423)
							Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
							HX_STACK_LINE(423)
							Float _g1 = ::Math_obj::abs((_this->y - region->y));		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(423)
							return (_g1 <= aDiff);
						}
						return null();
					}
				};
				struct _Function_2_3{
					inline static bool Block( ::flixel::math::FlxRect &region,::flixel::math::FlxRect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxTileFrames.hx",423,0x562d6bb0)
						{
							HX_STACK_LINE(423)
							Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
							HX_STACK_LINE(423)
							Float _g2 = ::Math_obj::abs((_this->width - region->width));		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(423)
							return (_g2 <= aDiff);
						}
						return null();
					}
				};
				struct _Function_2_4{
					inline static bool Block( ::flixel::math::FlxRect &region,::flixel::math::FlxRect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxTileFrames.hx",423,0x562d6bb0)
						{
							HX_STACK_LINE(423)
							Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
							HX_STACK_LINE(423)
							Float _g3 = ::Math_obj::abs((_this->height - region->height));		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(423)
							return (_g3 <= aDiff);
						}
						return null();
					}
				};
				HX_STACK_LINE(423)
				return (  (((  (((  ((_Function_2_1::Block(region,_this))) ? bool(_Function_2_2::Block(region,_this)) : bool(false) ))) ? bool(_Function_2_3::Block(region,_this)) : bool(false) ))) ? bool(_Function_2_4::Block(region,_this)) : bool(false) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( hx::ObjectPtr< ::flixel::graphics::frames::FlxTileFrames_obj > __this,::flixel::math::FlxPoint &tileSize){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxTileFrames.hx",423,0x562d6bb0)
			{
				HX_STACK_LINE(423)
				::flixel::math::FlxPoint _this = __this->tileSize;		HX_STACK_VAR(_this,"_this");
				struct _Function_2_1{
					inline static bool Block( ::flixel::math::FlxPoint &tileSize,::flixel::math::FlxPoint _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxTileFrames.hx",423,0x562d6bb0)
						{
							HX_STACK_LINE(423)
							Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
							HX_STACK_LINE(423)
							Float _g4 = ::Math_obj::abs((_this->x - tileSize->x));		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(423)
							return (_g4 <= aDiff);
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static bool Block( ::flixel::math::FlxPoint &tileSize,::flixel::math::FlxPoint _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxTileFrames.hx",423,0x562d6bb0)
						{
							HX_STACK_LINE(423)
							Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
							HX_STACK_LINE(423)
							Float _g5 = ::Math_obj::abs((_this->y - tileSize->y));		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(423)
							return (_g5 <= aDiff);
						}
						return null();
					}
				};
				HX_STACK_LINE(423)
				return (  ((_Function_2_1::Block(tileSize,_this))) ? bool(_Function_2_2::Block(tileSize,_this)) : bool(false) );
			}
			return null();
		}
	};
	HX_STACK_LINE(423)
	if (((  (((  (((this->atlasFrame == atlasFrame))) ? bool(_Function_1_1::Block(this,region)) : bool(false) ))) ? bool(_Function_1_2::Block(this,tileSize)) : bool(false) ))){
		HX_STACK_LINE(423)
		::flixel::math::FlxPoint _this = this->tileSpacing;		HX_STACK_VAR(_this,"_this");
		struct _Function_2_1{
			inline static bool Block( ::flixel::math::FlxPoint &tileSpacing,::flixel::math::FlxPoint _this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxTileFrames.hx",423,0x562d6bb0)
				{
					HX_STACK_LINE(423)
					Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(423)
					Float _g6 = ::Math_obj::abs((_this->x - tileSpacing->x));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(423)
					return (_g6 <= aDiff);
				}
				return null();
			}
		};
		HX_STACK_LINE(423)
		if ((_Function_2_1::Block(tileSpacing,_this))){
			HX_STACK_LINE(423)
			Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(423)
			Float _g7 = ::Math_obj::abs((_this->y - tileSpacing->y));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(423)
			return (_g7 <= aDiff);
		}
		else{
			HX_STACK_LINE(423)
			return false;
		}
	}
	else{
		HX_STACK_LINE(423)
		return false;
	}
	HX_STACK_LINE(423)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTileFrames_obj,equals,return )

Void FlxTileFrames_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","destroy",0x9226061b,"flixel.graphics.frames.FlxTileFrames.destroy","flixel/graphics/frames/FlxTileFrames.hx",427,0x562d6bb0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(428)
		this->super::destroy();
		HX_STACK_LINE(429)
		this->atlasFrame = null();
		HX_STACK_LINE(430)
		this->region = null();
		HX_STACK_LINE(431)
		this->tileSize = null();
		HX_STACK_LINE(432)
		this->tileSpacing = null();
	}
return null();
}


::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromBitmapWithSpacings( Dynamic source,::flixel::math::FlxPoint tileSize,::flixel::math::FlxPoint tileSpacing,::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromBitmapWithSpacings",0x5e868e4e,"flixel.graphics.frames.FlxTileFrames.fromBitmapWithSpacings","flixel/graphics/frames/FlxTileFrames.hx",68,0x562d6bb0)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(69)
	::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,false,null());		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(70)
	if (((graphic == null()))){
		HX_STACK_LINE(70)
		return null();
	}
	HX_STACK_LINE(72)
	::String key = ::flixel::FlxG_obj::bitmap->getKeyWithSpacings(graphic->key,tileSize,tileSpacing,region);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(73)
	::flixel::graphics::FlxGraphic result = ::flixel::FlxG_obj::bitmap->get(key);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(74)
	if (((result == null()))){
		HX_STACK_LINE(76)
		::openfl::_v2::display::BitmapData bitmap = ::flixel::util::FlxBitmapDataUtil_obj::addSpacing(graphic->bitmap,tileSize,tileSpacing,region);		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(77)
		::flixel::graphics::FlxGraphic _g = ::flixel::FlxG_obj::bitmap->add(bitmap,false,key);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		result = _g;
	}
	HX_STACK_LINE(80)
	return ::flixel::graphics::frames::FlxTileFrames_obj::fromRectangle(result,tileSize,null(),tileSpacing);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTileFrames_obj,fromBitmapWithSpacings,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromFrame( ::flixel::graphics::frames::FlxFrame frame,::flixel::math::FlxPoint tileSize,::flixel::math::FlxPoint tileSpacing){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromFrame",0xb32d85c4,"flixel.graphics.frames.FlxTileFrames.fromFrame","flixel/graphics/frames/FlxTileFrames.hx",93,0x562d6bb0)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_LINE(94)
	::flixel::graphics::FlxGraphic graphic = frame->parent;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(96)
	::flixel::graphics::frames::FlxTileFrames tileFrames = ::flixel::graphics::frames::FlxTileFrames_obj::findFrame(graphic,tileSize,null(),frame,tileSpacing);		HX_STACK_VAR(tileFrames,"tileFrames");
	HX_STACK_LINE(97)
	if (((tileFrames != null()))){
		HX_STACK_LINE(99)
		return tileFrames;
	}
	HX_STACK_LINE(103)
	::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(103)
	if (((tileSpacing != null()))){
		HX_STACK_LINE(103)
		_g = tileSpacing;
	}
	else{
		HX_STACK_LINE(103)
		_g = ::flixel::math::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(103)
	tileSpacing = _g;
	HX_STACK_LINE(105)
	::flixel::graphics::frames::FlxTileFrames _g1 = ::flixel::graphics::frames::FlxTileFrames_obj::__new(graphic);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(105)
	tileFrames = _g1;
	HX_STACK_LINE(106)
	tileFrames->atlasFrame = frame;
	HX_STACK_LINE(107)
	tileFrames->region = frame->frame;
	HX_STACK_LINE(108)
	tileFrames->tileSize = tileSize;
	HX_STACK_LINE(109)
	tileFrames->tileSpacing = tileSpacing;
	HX_STACK_LINE(111)
	int bitmapWidth = ::Std_obj::_int(frame->sourceSize->x);		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
	HX_STACK_LINE(112)
	int bitmapHeight = ::Std_obj::_int(frame->sourceSize->y);		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
	HX_STACK_LINE(114)
	int xSpacing = ::Std_obj::_int(tileSpacing->x);		HX_STACK_VAR(xSpacing,"xSpacing");
	HX_STACK_LINE(115)
	int ySpacing = ::Std_obj::_int(tileSpacing->y);		HX_STACK_VAR(ySpacing,"ySpacing");
	HX_STACK_LINE(117)
	int frameWidth = ::Std_obj::_int(tileSize->x);		HX_STACK_VAR(frameWidth,"frameWidth");
	HX_STACK_LINE(118)
	int frameHeight = ::Std_obj::_int(tileSize->y);		HX_STACK_VAR(frameHeight,"frameHeight");
	HX_STACK_LINE(120)
	int spacedWidth = (frameWidth + xSpacing);		HX_STACK_VAR(spacedWidth,"spacedWidth");
	HX_STACK_LINE(121)
	int spacedHeight = (frameHeight + ySpacing);		HX_STACK_VAR(spacedHeight,"spacedHeight");
	HX_STACK_LINE(123)
	::flixel::math::FlxRect clippedRect = ::flixel::math::FlxRect_obj::__new(frame->offset->x,frame->offset->y,frame->frame->width,frame->frame->height);		HX_STACK_VAR(clippedRect,"clippedRect");
	HX_STACK_LINE(124)
	::flixel::math::FlxRect helperRect = ::flixel::math::FlxRect_obj::__new((int)0,(int)0,frameWidth,frameHeight);		HX_STACK_VAR(helperRect,"helperRect");
	HX_STACK_LINE(125)
	::flixel::math::FlxRect tileRect;		HX_STACK_VAR(tileRect,"tileRect");
	HX_STACK_LINE(126)
	::flixel::math::FlxPoint frameOffset;		HX_STACK_VAR(frameOffset,"frameOffset");
	HX_STACK_LINE(128)
	int numRows;		HX_STACK_VAR(numRows,"numRows");
	HX_STACK_LINE(128)
	if (((frameHeight == (int)0))){
		HX_STACK_LINE(128)
		numRows = (int)1;
	}
	else{
		HX_STACK_LINE(128)
		numRows = ::Std_obj::_int((Float(((bitmapHeight + ySpacing))) / Float(spacedHeight)));
	}
	HX_STACK_LINE(129)
	int numCols;		HX_STACK_VAR(numCols,"numCols");
	HX_STACK_LINE(129)
	if (((frameWidth == (int)0))){
		HX_STACK_LINE(129)
		numCols = (int)1;
	}
	else{
		HX_STACK_LINE(129)
		numCols = ::Std_obj::_int((Float(((bitmapWidth + xSpacing))) / Float(spacedWidth)));
	}
	HX_STACK_LINE(131)
	Float x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(131)
	Float y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(131)
	Float w;		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(131)
	Float h;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(133)
	bool rotated = (frame->type == (int)1);		HX_STACK_VAR(rotated,"rotated");
	HX_STACK_LINE(134)
	int angle = (int)0;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(136)
	if ((rotated)){
		HX_STACK_LINE(138)
		angle = frame->angle;
		HX_STACK_LINE(139)
		clippedRect->width = frame->frame->height;
		HX_STACK_LINE(140)
		clippedRect->height = frame->frame->width;
	}
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(143)
		int _g2 = numRows;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(143)
		while((true)){
			HX_STACK_LINE(143)
			if ((!(((_g11 < _g2))))){
				HX_STACK_LINE(143)
				break;
			}
			HX_STACK_LINE(143)
			int j = (_g11)++;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(145)
			{
				HX_STACK_LINE(145)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(145)
				int _g21 = numCols;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(145)
				while((true)){
					HX_STACK_LINE(145)
					if ((!(((_g3 < _g21))))){
						HX_STACK_LINE(145)
						break;
					}
					HX_STACK_LINE(145)
					int i = (_g3)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(147)
					helperRect->x = (spacedWidth * i);
					HX_STACK_LINE(148)
					helperRect->y = (spacedHeight * j);
					HX_STACK_LINE(149)
					::flixel::math::FlxRect _g22 = clippedRect->intersection(helperRect);		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(149)
					tileRect = _g22;
					HX_STACK_LINE(151)
					if (((bool((tileRect->width == (int)0)) || bool((tileRect->height == (int)0))))){
						HX_STACK_LINE(153)
						{
							HX_STACK_LINE(153)
							tileRect->x = (int)0;
							HX_STACK_LINE(153)
							tileRect->y = (int)0;
							HX_STACK_LINE(153)
							tileRect->width = frameWidth;
							HX_STACK_LINE(153)
							tileRect->height = frameHeight;
							HX_STACK_LINE(153)
							tileRect;
						}
						HX_STACK_LINE(154)
						tileFrames->addEmptyFrame(tileRect);
					}
					else{
						HX_STACK_LINE(158)
						::flixel::math::FlxPoint _g31;		HX_STACK_VAR(_g31,"_g31");
						HX_STACK_LINE(158)
						{
							HX_STACK_LINE(158)
							::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((tileRect->x - helperRect->x),(tileRect->y - helperRect->y));		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(158)
							point->_inPool = false;
							HX_STACK_LINE(158)
							_g31 = point;
						}
						HX_STACK_LINE(158)
						frameOffset = _g31;
						HX_STACK_LINE(160)
						x = tileRect->x;
						HX_STACK_LINE(161)
						y = tileRect->y;
						HX_STACK_LINE(162)
						w = tileRect->width;
						HX_STACK_LINE(163)
						h = tileRect->height;
						HX_STACK_LINE(165)
						if (((angle == (int)0))){
							HX_STACK_LINE(167)
							hx::SubEq(tileRect->x,clippedRect->x);
							HX_STACK_LINE(168)
							hx::SubEq(tileRect->y,clippedRect->y);
						}
						HX_STACK_LINE(170)
						if (((angle == (int)-90))){
							HX_STACK_LINE(172)
							tileRect->x = (((clippedRect->y + clippedRect->height) - y) - h);
							HX_STACK_LINE(173)
							tileRect->y = (x - clippedRect->x);
							HX_STACK_LINE(174)
							tileRect->width = h;
							HX_STACK_LINE(175)
							tileRect->height = w;
						}
						else{
							HX_STACK_LINE(177)
							if (((angle == (int)90))){
								HX_STACK_LINE(179)
								tileRect->x = (y - clippedRect->y);
								HX_STACK_LINE(180)
								tileRect->y = (((clippedRect->x + clippedRect->width) - x) - w);
								HX_STACK_LINE(181)
								tileRect->width = h;
								HX_STACK_LINE(182)
								tileRect->height = w;
							}
						}
						HX_STACK_LINE(185)
						hx::AddEq(tileRect->x,frame->frame->x);
						HX_STACK_LINE(186)
						hx::AddEq(tileRect->y,frame->frame->y);
						HX_STACK_LINE(187)
						::flixel::math::FlxPoint _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(187)
						{
							HX_STACK_LINE(187)
							::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(frameWidth,frameHeight);		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(187)
							point->_inPool = false;
							HX_STACK_LINE(187)
							_g4 = point;
						}
						HX_STACK_LINE(187)
						tileFrames->addAtlasFrame(tileRect,_g4,frameOffset,null(),angle);
					}
				}
			}
		}
	}
	HX_STACK_LINE(192)
	tileFrames->numCols = numCols;
	HX_STACK_LINE(193)
	tileFrames->numRows = numRows;
	HX_STACK_LINE(194)
	return tileFrames;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxTileFrames_obj,fromFrame,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromFrames( Array< ::Dynamic > Frames){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromFrames",0x14a7862f,"flixel.graphics.frames.FlxTileFrames.fromFrames","flixel/graphics/frames/FlxTileFrames.hx",204,0x562d6bb0)
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_LINE(205)
	::flixel::graphics::frames::FlxFrame firstFrame = Frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(firstFrame,"firstFrame");
	HX_STACK_LINE(206)
	::flixel::graphics::FlxGraphic graphic = firstFrame->parent;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(208)
	{
		HX_STACK_LINE(208)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(208)
		while((true)){
			HX_STACK_LINE(208)
			if ((!(((_g < Frames->length))))){
				HX_STACK_LINE(208)
				break;
			}
			HX_STACK_LINE(208)
			::flixel::graphics::frames::FlxFrame frame = Frames->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(208)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( ::flixel::graphics::frames::FlxFrame &frame,::flixel::graphics::frames::FlxFrame &firstFrame){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxTileFrames.hx",210,0x562d6bb0)
					{
						HX_STACK_LINE(210)
						::flixel::math::FlxPoint _this = frame->sourceSize;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(210)
						::flixel::math::FlxPoint point = firstFrame->sourceSize;		HX_STACK_VAR(point,"point");
						struct _Function_4_1{
							inline static bool Block( ::flixel::math::FlxPoint &point,::flixel::math::FlxPoint _this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxTileFrames.hx",210,0x562d6bb0)
								{
									HX_STACK_LINE(210)
									Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
									HX_STACK_LINE(210)
									Float _g1 = ::Math_obj::abs((_this->x - point->x));		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(210)
									return (_g1 <= aDiff);
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static bool Block( ::flixel::math::FlxPoint &point,::flixel::math::FlxPoint _this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxTileFrames.hx",210,0x562d6bb0)
								{
									HX_STACK_LINE(210)
									Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
									HX_STACK_LINE(210)
									Float _g1 = ::Math_obj::abs((_this->y - point->y));		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(210)
									return (_g1 <= aDiff);
								}
								return null();
							}
						};
						HX_STACK_LINE(210)
						return (  ((_Function_4_1::Block(point,_this))) ? bool(_Function_4_2::Block(point,_this)) : bool(false) );
					}
					return null();
				}
			};
			HX_STACK_LINE(210)
			if (((  ((!(((frame->parent != firstFrame->parent))))) ? bool(!(_Function_3_1::Block(frame,firstFrame))) : bool(true) ))){
				HX_STACK_LINE(213)
				return null();
			}
		}
	}
	HX_STACK_LINE(217)
	::flixel::graphics::frames::FlxTileFrames tileFrames = ::flixel::graphics::frames::FlxTileFrames_obj::__new(graphic);		HX_STACK_VAR(tileFrames,"tileFrames");
	HX_STACK_LINE(219)
	tileFrames->region = null();
	HX_STACK_LINE(220)
	tileFrames->atlasFrame = null();
	HX_STACK_LINE(221)
	::flixel::math::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(221)
	{
		HX_STACK_LINE(221)
		::flixel::math::FlxPoint _this = ::flixel::math::FlxPoint_obj::__new(null(),null());		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(221)
		::flixel::math::FlxPoint point = firstFrame->sourceSize;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(221)
		_this->set_x(point->x);
		HX_STACK_LINE(221)
		_this->set_y(point->y);
		HX_STACK_LINE(221)
		_g2 = _this;
	}
	HX_STACK_LINE(221)
	tileFrames->tileSize = _g2;
	HX_STACK_LINE(222)
	::flixel::math::FlxPoint _g3 = ::flixel::math::FlxPoint_obj::__new(null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(222)
	tileFrames->tileSpacing = _g3;
	HX_STACK_LINE(223)
	tileFrames->numCols = Frames->length;
	HX_STACK_LINE(224)
	tileFrames->numRows = (int)1;
	HX_STACK_LINE(226)
	{
		HX_STACK_LINE(226)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(226)
		while((true)){
			HX_STACK_LINE(226)
			if ((!(((_g < Frames->length))))){
				HX_STACK_LINE(226)
				break;
			}
			HX_STACK_LINE(226)
			::flixel::graphics::frames::FlxFrame frame = Frames->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(226)
			++(_g);
			HX_STACK_LINE(228)
			tileFrames->frames->push(frame);
			HX_STACK_LINE(230)
			if (((frame->name != null()))){
				HX_STACK_LINE(232)
				tileFrames->framesHash->set(frame->name,frame);
			}
		}
	}
	HX_STACK_LINE(236)
	return tileFrames;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTileFrames_obj,fromFrames,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromAtlasByPrefix( ::flixel::graphics::frames::FlxAtlasFrames Frames,::String Prefix){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromAtlasByPrefix",0x9481e7cb,"flixel.graphics.frames.FlxTileFrames.fromAtlasByPrefix","flixel/graphics/frames/FlxTileFrames.hx",249,0x562d6bb0)
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_ARG(Prefix,"Prefix")
	HX_STACK_LINE(250)
	Array< ::Dynamic > framesToAdd = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(framesToAdd,"framesToAdd");
	HX_STACK_LINE(252)
	{
		HX_STACK_LINE(252)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(252)
		Array< ::Dynamic > _g1 = Frames->frames;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(252)
		while((true)){
			HX_STACK_LINE(252)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(252)
				break;
			}
			HX_STACK_LINE(252)
			::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(252)
			++(_g);
			HX_STACK_LINE(254)
			if ((::StringTools_obj::startsWith(frame->name,Prefix))){
				HX_STACK_LINE(256)
				framesToAdd->push(frame);
			}
		}
	}
	HX_STACK_LINE(260)
	if (((framesToAdd->length > (int)0))){
		HX_STACK_LINE(262)
		::String name = framesToAdd->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >()->name;		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(263)
		int postIndex = name.indexOf(HX_CSTRING("."),Prefix.length);		HX_STACK_VAR(postIndex,"postIndex");
		HX_STACK_LINE(264)
		::String postFix = name.substring((  (((postIndex == (int)-1))) ? int(name.length) : int(postIndex) ),name.length);		HX_STACK_VAR(postFix,"postFix");
		HX_STACK_LINE(266)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(266)
		{
			HX_STACK_LINE(266)
			Array< int > a3 = Array_obj< int >::__new().Add(Prefix.length);		HX_STACK_VAR(a3,"a3");
			HX_STACK_LINE(266)
			Array< int > a4 = Array_obj< int >::__new().Add(postFix.length);		HX_STACK_VAR(a4,"a4");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Array< int >,a3,Array< int >,a4)
			int run(::flixel::graphics::frames::FlxFrame a1,::flixel::graphics::frames::FlxFrame a2){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","flixel/graphics/frames/FlxTileFrames.hx",266,0x562d6bb0)
				HX_STACK_ARG(a1,"a1")
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(266)
					return ::flixel::graphics::frames::FlxFrame_obj::sortByName(a1,a2,a3->__get((int)0),a4->__get((int)0));
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(266)
			_g =  Dynamic(new _Function_3_1(a3,a4));
		}
		HX_STACK_LINE(266)
		framesToAdd->sort(_g);
		HX_STACK_LINE(267)
		return ::flixel::graphics::frames::FlxTileFrames_obj::fromFrames(framesToAdd);
	}
	HX_STACK_LINE(270)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxTileFrames_obj,fromAtlasByPrefix,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromGraphic( ::flixel::graphics::FlxGraphic graphic,::flixel::math::FlxPoint tileSize,::flixel::math::FlxRect region,::flixel::math::FlxPoint tileSpacing){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromGraphic",0x29813bff,"flixel.graphics.frames.FlxTileFrames.fromGraphic","flixel/graphics/frames/FlxTileFrames.hx",284,0x562d6bb0)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_LINE(286)
	::flixel::graphics::frames::FlxTileFrames tileFrames = ::flixel::graphics::frames::FlxTileFrames_obj::findFrame(graphic,tileSize,region,null(),tileSpacing);		HX_STACK_VAR(tileFrames,"tileFrames");
	HX_STACK_LINE(287)
	if (((tileFrames != null()))){
		HX_STACK_LINE(289)
		return tileFrames;
	}
	HX_STACK_LINE(293)
	if (((region == null()))){
		HX_STACK_LINE(295)
		::flixel::math::FlxRect _g = ::flixel::math::FlxRect_obj::__new((int)0,(int)0,graphic->width,graphic->height);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(295)
		region = _g;
	}
	else{
		HX_STACK_LINE(299)
		if (((region->width == (int)0))){
			HX_STACK_LINE(301)
			region->width = (graphic->width - region->x);
		}
		HX_STACK_LINE(304)
		if (((region->height == (int)0))){
			HX_STACK_LINE(306)
			region->height = (graphic->height - region->y);
		}
	}
	HX_STACK_LINE(310)
	::flixel::math::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(310)
	if (((tileSpacing != null()))){
		HX_STACK_LINE(310)
		_g1 = tileSpacing;
	}
	else{
		HX_STACK_LINE(310)
		_g1 = ::flixel::math::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(310)
	tileSpacing = _g1;
	HX_STACK_LINE(312)
	::flixel::graphics::frames::FlxTileFrames _g2 = ::flixel::graphics::frames::FlxTileFrames_obj::__new(graphic);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(312)
	tileFrames = _g2;
	HX_STACK_LINE(313)
	tileFrames->region = region;
	HX_STACK_LINE(314)
	tileFrames->atlasFrame = null();
	HX_STACK_LINE(315)
	tileFrames->tileSize = tileSize;
	HX_STACK_LINE(316)
	tileFrames->tileSpacing = tileSpacing;
	HX_STACK_LINE(318)
	int bitmapWidth = ::Std_obj::_int(region->width);		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
	HX_STACK_LINE(319)
	int bitmapHeight = ::Std_obj::_int(region->height);		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
	HX_STACK_LINE(321)
	int startX = ::Std_obj::_int(region->x);		HX_STACK_VAR(startX,"startX");
	HX_STACK_LINE(322)
	int startY = ::Std_obj::_int(region->y);		HX_STACK_VAR(startY,"startY");
	HX_STACK_LINE(324)
	int xSpacing = ::Std_obj::_int(tileSpacing->x);		HX_STACK_VAR(xSpacing,"xSpacing");
	HX_STACK_LINE(325)
	int ySpacing = ::Std_obj::_int(tileSpacing->y);		HX_STACK_VAR(ySpacing,"ySpacing");
	HX_STACK_LINE(327)
	int width = ::Std_obj::_int(tileSize->x);		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(328)
	int height = ::Std_obj::_int(tileSize->y);		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(330)
	int spacedWidth = (width + xSpacing);		HX_STACK_VAR(spacedWidth,"spacedWidth");
	HX_STACK_LINE(331)
	int spacedHeight = (height + ySpacing);		HX_STACK_VAR(spacedHeight,"spacedHeight");
	HX_STACK_LINE(333)
	int numRows;		HX_STACK_VAR(numRows,"numRows");
	HX_STACK_LINE(333)
	if (((height == (int)0))){
		HX_STACK_LINE(333)
		numRows = (int)1;
	}
	else{
		HX_STACK_LINE(333)
		numRows = ::Std_obj::_int((Float(((bitmapHeight + ySpacing))) / Float(spacedHeight)));
	}
	HX_STACK_LINE(334)
	int numCols;		HX_STACK_VAR(numCols,"numCols");
	HX_STACK_LINE(334)
	if (((width == (int)0))){
		HX_STACK_LINE(334)
		numCols = (int)1;
	}
	else{
		HX_STACK_LINE(334)
		numCols = ::Std_obj::_int((Float(((bitmapWidth + xSpacing))) / Float(spacedWidth)));
	}
	HX_STACK_LINE(336)
	::flixel::math::FlxRect tileRect;		HX_STACK_VAR(tileRect,"tileRect");
	HX_STACK_LINE(338)
	{
		HX_STACK_LINE(338)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(338)
		int _g = numRows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(338)
		while((true)){
			HX_STACK_LINE(338)
			if ((!(((_g11 < _g))))){
				HX_STACK_LINE(338)
				break;
			}
			HX_STACK_LINE(338)
			int j = (_g11)++;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(340)
			{
				HX_STACK_LINE(340)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(340)
				int _g21 = numCols;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(340)
				while((true)){
					HX_STACK_LINE(340)
					if ((!(((_g3 < _g21))))){
						HX_STACK_LINE(340)
						break;
					}
					HX_STACK_LINE(340)
					int i = (_g3)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(342)
					::flixel::math::FlxRect _g31 = ::flixel::math::FlxRect_obj::__new((startX + (i * spacedWidth)),(startY + (j * spacedHeight)),width,height);		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(342)
					tileRect = _g31;
					HX_STACK_LINE(343)
					tileFrames->addSpriteSheetFrame(tileRect);
				}
			}
		}
	}
	HX_STACK_LINE(347)
	tileFrames->numCols = numCols;
	HX_STACK_LINE(348)
	tileFrames->numRows = numRows;
	HX_STACK_LINE(349)
	return tileFrames;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTileFrames_obj,fromGraphic,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromRectangle( Dynamic source,::flixel::math::FlxPoint tileSize,::flixel::math::FlxRect region,::flixel::math::FlxPoint tileSpacing){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromRectangle",0x8a32f946,"flixel.graphics.frames.FlxTileFrames.fromRectangle","flixel/graphics/frames/FlxTileFrames.hx",364,0x562d6bb0)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_LINE(365)
	::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,false,null());		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(366)
	if (((graphic == null()))){
		HX_STACK_LINE(366)
		return null();
	}
	HX_STACK_LINE(367)
	return ::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(graphic,tileSize,region,tileSpacing);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTileFrames_obj,fromRectangle,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::findFrame( ::flixel::graphics::FlxGraphic graphic,::flixel::math::FlxPoint tileSize,::flixel::math::FlxRect region,::flixel::graphics::frames::FlxFrame atlasFrame,::flixel::math::FlxPoint tileSpacing){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","findFrame",0xed9bcc95,"flixel.graphics.frames.FlxTileFrames.findFrame","flixel/graphics/frames/FlxTileFrames.hx",381,0x562d6bb0)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(atlasFrame,"atlasFrame")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_LINE(382)
	Array< ::Dynamic > tileFrames;		HX_STACK_VAR(tileFrames,"tileFrames");
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::graphics::FlxGraphic &graphic){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxTileFrames.hx",382,0x562d6bb0)
			{
				HX_STACK_LINE(382)
				::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::TILES;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(382)
				Dynamic collections = graphic->frameCollections->get(type);		HX_STACK_VAR(collections,"collections");
				HX_STACK_LINE(382)
				if (((collections == null()))){
					HX_STACK_LINE(382)
					Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(382)
					collections = _g;
					HX_STACK_LINE(382)
					graphic->frameCollections->set(type,collections);
				}
				HX_STACK_LINE(382)
				return collections;
			}
			return null();
		}
	};
	HX_STACK_LINE(382)
	tileFrames = _Function_1_1::Block(graphic);
	HX_STACK_LINE(383)
	::flixel::graphics::frames::FlxTileFrames sheet;		HX_STACK_VAR(sheet,"sheet");
	HX_STACK_LINE(385)
	{
		HX_STACK_LINE(385)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(385)
		while((true)){
			HX_STACK_LINE(385)
			if ((!(((_g < tileFrames->length))))){
				HX_STACK_LINE(385)
				break;
			}
			HX_STACK_LINE(385)
			::flixel::graphics::frames::FlxTileFrames sheet1 = tileFrames->__get(_g).StaticCast< ::flixel::graphics::frames::FlxTileFrames >();		HX_STACK_VAR(sheet1,"sheet1");
			HX_STACK_LINE(385)
			++(_g);
			HX_STACK_LINE(387)
			if ((sheet1->equals(tileSize,region,null(),tileSpacing))){
				HX_STACK_LINE(389)
				return sheet1;
			}
		}
	}
	HX_STACK_LINE(393)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTileFrames_obj,findFrame,return )


FlxTileFrames_obj::FlxTileFrames_obj()
{
}

void FlxTileFrames_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTileFrames);
	HX_MARK_MEMBER_NAME(atlasFrame,"atlasFrame");
	HX_MARK_MEMBER_NAME(region,"region");
	HX_MARK_MEMBER_NAME(tileSize,"tileSize");
	HX_MARK_MEMBER_NAME(tileSpacing,"tileSpacing");
	HX_MARK_MEMBER_NAME(numRows,"numRows");
	HX_MARK_MEMBER_NAME(numCols,"numCols");
	::flixel::graphics::frames::FlxFramesCollection_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTileFrames_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(atlasFrame,"atlasFrame");
	HX_VISIT_MEMBER_NAME(region,"region");
	HX_VISIT_MEMBER_NAME(tileSize,"tileSize");
	HX_VISIT_MEMBER_NAME(tileSpacing,"tileSpacing");
	HX_VISIT_MEMBER_NAME(numRows,"numRows");
	HX_VISIT_MEMBER_NAME(numCols,"numCols");
	::flixel::graphics::frames::FlxFramesCollection_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTileFrames_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { return region; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numRows") ) { return numRows; }
		if (HX_FIELD_EQ(inName,"numCols") ) { return numCols; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileSize") ) { return tileSize; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromFrame") ) { return fromFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"findFrame") ) { return findFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromFrames") ) { return fromFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"atlasFrame") ) { return atlasFrame; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromGraphic") ) { return fromGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"tileSpacing") ) { return tileSpacing; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromRectangle") ) { return fromRectangle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fromAtlasByPrefix") ) { return fromAtlasByPrefix_dyn(); }
		if (HX_FIELD_EQ(inName,"getByTilePosition") ) { return getByTilePosition_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"fromBitmapWithSpacings") ) { return fromBitmapWithSpacings_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTileFrames_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { region=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numRows") ) { numRows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numCols") ) { numCols=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileSize") ) { tileSize=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"atlasFrame") ) { atlasFrame=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileSpacing") ) { tileSpacing=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTileFrames_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("atlasFrame"));
	outFields->push(HX_CSTRING("region"));
	outFields->push(HX_CSTRING("tileSize"));
	outFields->push(HX_CSTRING("tileSpacing"));
	outFields->push(HX_CSTRING("numRows"));
	outFields->push(HX_CSTRING("numCols"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromBitmapWithSpacings"),
	HX_CSTRING("fromFrame"),
	HX_CSTRING("fromFrames"),
	HX_CSTRING("fromAtlasByPrefix"),
	HX_CSTRING("fromGraphic"),
	HX_CSTRING("fromRectangle"),
	HX_CSTRING("findFrame"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(FlxTileFrames_obj,atlasFrame),HX_CSTRING("atlasFrame")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxTileFrames_obj,region),HX_CSTRING("region")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTileFrames_obj,tileSize),HX_CSTRING("tileSize")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTileFrames_obj,tileSpacing),HX_CSTRING("tileSpacing")},
	{hx::fsInt,(int)offsetof(FlxTileFrames_obj,numRows),HX_CSTRING("numRows")},
	{hx::fsInt,(int)offsetof(FlxTileFrames_obj,numCols),HX_CSTRING("numCols")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("atlasFrame"),
	HX_CSTRING("region"),
	HX_CSTRING("tileSize"),
	HX_CSTRING("tileSpacing"),
	HX_CSTRING("numRows"),
	HX_CSTRING("numCols"),
	HX_CSTRING("getByTilePosition"),
	HX_CSTRING("equals"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTileFrames_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTileFrames_obj::__mClass,"__mClass");
};

#endif

Class FlxTileFrames_obj::__mClass;

void FlxTileFrames_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.frames.FlxTileFrames"), hx::TCanCast< FlxTileFrames_obj> ,sStaticFields,sMemberFields,
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

void FlxTileFrames_obj::__boot()
{
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
