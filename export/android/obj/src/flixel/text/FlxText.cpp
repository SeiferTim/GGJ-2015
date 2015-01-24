#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormatMarkerPair
#include <flixel/text/FlxTextFormatMarkerPair.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextFormatRange
#include <flixel/text/_FlxText/FlxTextFormatRange.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_AssetType
#include <openfl/_v2/AssetType.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BlendMode
#include <openfl/_v2/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__v2_text_Font
#include <openfl/_v2/text/Font.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormatAlign
#include <openfl/_v2/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextLineMetrics
#include <openfl/_v2/text/TextLineMetrics.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
namespace flixel{
namespace text{

Void FlxText_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_FieldWidth,::String Text,hx::Null< Float >  __o_Size,hx::Null< bool >  __o_EmbeddedFont)
{
HX_STACK_FRAME("flixel.text.FlxText","new",0x8fca03a2,"flixel.text.FlxText.new","flixel/text/FlxText.hx",33,0xdf165a6e)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_FieldWidth,"FieldWidth")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(__o_Size,"Size")
HX_STACK_ARG(__o_EmbeddedFont,"EmbeddedFont")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float FieldWidth = __o_FieldWidth.Default(0);
Float Size = __o_Size.Default(8);
bool EmbeddedFont = __o_EmbeddedFont.Default(true);
{
	HX_STACK_LINE(144)
	this->_regen = true;
	HX_STACK_LINE(137)
	this->_formatRanges = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(102)
	this->borderQuality = (int)1;
	HX_STACK_LINE(95)
	this->borderSize = (int)1;
	HX_STACK_LINE(90)
	this->borderColor = (int)0;
	HX_STACK_LINE(85)
	this->borderStyle = ::flixel::text::FlxTextBorderStyle_obj::NONE;
	HX_STACK_LINE(38)
	this->text = HX_CSTRING("");
	HX_STACK_LINE(159)
	super::__construct(X,Y,null());
	HX_STACK_LINE(161)
	if (((bool((Text == null())) || bool((Text == HX_CSTRING("")))))){
		HX_STACK_LINE(165)
		this->set_text(HX_CSTRING(""));
		HX_STACK_LINE(166)
		Text = HX_CSTRING(" ");
	}
	else{
		HX_STACK_LINE(170)
		this->set_text(Text);
	}
	HX_STACK_LINE(173)
	::openfl::_v2::text::TextField _g = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(173)
	this->textField = _g;
	HX_STACK_LINE(174)
	this->textField->set_selectable(false);
	HX_STACK_LINE(175)
	this->textField->set_multiline(true);
	HX_STACK_LINE(176)
	this->textField->set_wordWrap(true);
	HX_STACK_LINE(177)
	::openfl::_v2::text::TextFormat _g1 = ::openfl::_v2::text::TextFormat_obj::__new(null(),Size,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(177)
	this->_defaultFormat = _g1;
	HX_STACK_LINE(178)
	this->set_font(::flixel::system::FlxAssets_obj::FONT_DEFAULT);
	HX_STACK_LINE(179)
	::openfl::_v2::text::TextFormat _g2 = ::openfl::_v2::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(179)
	this->_formatAdjusted = _g2;
	HX_STACK_LINE(180)
	this->textField->set_defaultTextFormat(this->_defaultFormat);
	HX_STACK_LINE(181)
	this->textField->set_text(Text);
	HX_STACK_LINE(182)
	this->set_fieldWidth(FieldWidth);
	HX_STACK_LINE(183)
	this->textField->set_embedFonts(EmbeddedFont);
	HX_STACK_LINE(189)
	this->textField->set_height((  (((Text.length <= (int)0))) ? Float((int)1) : Float((int)10) ));
	HX_STACK_LINE(191)
	this->allowCollisions = (int)0;
	HX_STACK_LINE(192)
	this->set_moves(false);
	HX_STACK_LINE(194)
	this->_regen = true;
	HX_STACK_LINE(195)
	this->calcFrame(null());
	HX_STACK_LINE(197)
	::flixel::math::FlxPoint _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(197)
	{
		HX_STACK_LINE(197)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)1,(int)1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(197)
		point->_inPool = false;
		HX_STACK_LINE(197)
		_g3 = point;
	}
	HX_STACK_LINE(197)
	this->shadowOffset = _g3;
}
;
	return null();
}

//FlxText_obj::~FlxText_obj() { }

Dynamic FlxText_obj::__CreateEmpty() { return  new FlxText_obj; }
hx::ObjectPtr< FlxText_obj > FlxText_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_FieldWidth,::String Text,hx::Null< Float >  __o_Size,hx::Null< bool >  __o_EmbeddedFont)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return result;}

Dynamic FlxText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void FlxText_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","destroy",0x1704293c,"flixel.text.FlxText.destroy","flixel/text/FlxText.hx",204,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(205)
		this->textField = null();
		HX_STACK_LINE(206)
		this->_font = null();
		HX_STACK_LINE(207)
		this->_defaultFormat = null();
		HX_STACK_LINE(208)
		this->_formatAdjusted = null();
		HX_STACK_LINE(209)
		::flixel::math::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->shadowOffset);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(209)
		this->shadowOffset = _g;
		HX_STACK_LINE(210)
		this->super::destroy();
	}
return null();
}


Void FlxText_obj::drawFrame( hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.text.FlxText","drawFrame",0xd9b5be4b,"flixel.text.FlxText.drawFrame","flixel/text/FlxText.hx",214,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(215)
		this->_regen = (bool(this->_regen) || bool(Force));
		HX_STACK_LINE(216)
		this->super::drawFrame(Force);
	}
return null();
}


bool FlxText_obj::stampOnAtlas( ::flixel::graphics::atlas::FlxAtlas atlas){
	HX_STACK_FRAME("flixel.text.FlxText","stampOnAtlas",0x66244e67,"flixel.text.FlxText.stampOnAtlas","flixel/text/FlxText.hx",228,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(atlas,"atlas")
	HX_STACK_LINE(229)
	if ((this->_regen)){
		HX_STACK_LINE(231)
		this->regenGraphics();
	}
	HX_STACK_LINE(234)
	::flixel::graphics::atlas::FlxNode node = atlas->addNode(this->graphic->bitmap,this->graphic->key);		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(235)
	bool result = (node != null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(237)
	if (((node != null()))){
		HX_STACK_LINE(239)
		::flixel::graphics::frames::FlxImageFrame _g = node->getImageFrame();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(239)
		this->set_frames(_g);
	}
	HX_STACK_LINE(242)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,stampOnAtlas,return )

Void FlxText_obj::applyMarkup( ::String input,Array< ::Dynamic > rules){
{
		HX_STACK_FRAME("flixel.text.FlxText","applyMarkup",0x660988f8,"flixel.text.FlxText.applyMarkup","flixel/text/FlxText.hx",263,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(input,"input")
		HX_STACK_ARG(rules,"rules")
		HX_STACK_LINE(264)
		if (((bool((rules == null())) || bool((rules->length == (int)0))))){
			HX_STACK_LINE(266)
			return null();
		}
		HX_STACK_LINE(269)
		this->clearFormats();
		HX_STACK_LINE(271)
		Array< int > rangeStarts = Array_obj< int >::__new();		HX_STACK_VAR(rangeStarts,"rangeStarts");
		HX_STACK_LINE(272)
		Array< int > rangeEnds = Array_obj< int >::__new();		HX_STACK_VAR(rangeEnds,"rangeEnds");
		HX_STACK_LINE(273)
		Array< ::Dynamic > rulesToApply = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(rulesToApply,"rulesToApply");
		HX_STACK_LINE(275)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(276)
		{
			HX_STACK_LINE(276)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(276)
			while((true)){
				HX_STACK_LINE(276)
				if ((!(((_g < rules->length))))){
					HX_STACK_LINE(276)
					break;
				}
				HX_STACK_LINE(276)
				::flixel::text::FlxTextFormatMarkerPair rule = rules->__get(_g).StaticCast< ::flixel::text::FlxTextFormatMarkerPair >();		HX_STACK_VAR(rule,"rule");
				HX_STACK_LINE(276)
				++(_g);
				HX_STACK_LINE(278)
				if (((bool((rule->marker != null())) && bool((rule->format != null()))))){
					HX_STACK_LINE(280)
					bool start = false;		HX_STACK_VAR(start,"start");
					HX_STACK_LINE(281)
					int _g1 = input.indexOf(rule->marker,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(281)
					if (((_g1 != (int)-1))){
						HX_STACK_LINE(283)
						{
							HX_STACK_LINE(283)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(283)
							int _g11 = input.length;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(283)
							while((true)){
								HX_STACK_LINE(283)
								if ((!(((_g2 < _g11))))){
									HX_STACK_LINE(283)
									break;
								}
								HX_STACK_LINE(283)
								int charIndex = (_g2)++;		HX_STACK_VAR(charIndex,"charIndex");
								HX_STACK_LINE(285)
								::String _char = input.charAt(charIndex);		HX_STACK_VAR(_char,"char");
								HX_STACK_LINE(286)
								if (((_char == rule->marker))){
									HX_STACK_LINE(288)
									if ((!(start))){
										HX_STACK_LINE(290)
										start = true;
										HX_STACK_LINE(291)
										rangeStarts->push(charIndex);
										HX_STACK_LINE(292)
										rulesToApply->push(rule);
									}
									else{
										HX_STACK_LINE(296)
										start = false;
										HX_STACK_LINE(297)
										rangeEnds->push(charIndex);
									}
								}
							}
						}
						HX_STACK_LINE(301)
						if ((start)){
							HX_STACK_LINE(304)
							rangeEnds->push((int)-1);
						}
					}
					HX_STACK_LINE(307)
					(i)++;
				}
			}
		}
		HX_STACK_LINE(312)
		{
			HX_STACK_LINE(312)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(312)
			while((true)){
				HX_STACK_LINE(312)
				if ((!(((_g < rules->length))))){
					HX_STACK_LINE(312)
					break;
				}
				HX_STACK_LINE(312)
				::flixel::text::FlxTextFormatMarkerPair rule = rules->__get(_g).StaticCast< ::flixel::text::FlxTextFormatMarkerPair >();		HX_STACK_VAR(rule,"rule");
				HX_STACK_LINE(312)
				++(_g);
				HX_STACK_LINE(314)
				while((true)){
					HX_STACK_LINE(314)
					int _g1 = input.indexOf(rule->marker,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(314)
					if ((!(((_g1 != (int)-1))))){
						HX_STACK_LINE(314)
						break;
					}
					HX_STACK_LINE(316)
					::String _g2 = ::StringTools_obj::replace(input,rule->marker,HX_CSTRING(""));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(316)
					input = _g2;
				}
			}
		}
		HX_STACK_LINE(321)
		{
			HX_STACK_LINE(321)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(321)
			int _g = rangeStarts->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(321)
			while((true)){
				HX_STACK_LINE(321)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(321)
					break;
				}
				HX_STACK_LINE(321)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(324)
				int delIndex = rangeStarts->__get(i1);		HX_STACK_VAR(delIndex,"delIndex");
				HX_STACK_LINE(326)
				int markerLength = rulesToApply->__get(i1).StaticCast< ::flixel::text::FlxTextFormatMarkerPair >()->marker.length;		HX_STACK_VAR(markerLength,"markerLength");
				HX_STACK_LINE(329)
				{
					HX_STACK_LINE(329)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(329)
					int _g2 = rangeStarts->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(329)
					while((true)){
						HX_STACK_LINE(329)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(329)
							break;
						}
						HX_STACK_LINE(329)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(331)
						if (((rangeStarts->__get(j) > delIndex))){
							HX_STACK_LINE(333)
							hx::SubEq(rangeStarts[j],markerLength);
						}
						HX_STACK_LINE(335)
						if (((rangeEnds->__get(j) > delIndex))){
							HX_STACK_LINE(337)
							hx::SubEq(rangeEnds[j],markerLength);
						}
					}
				}
				HX_STACK_LINE(342)
				delIndex = rangeEnds->__get(i1);
				HX_STACK_LINE(345)
				{
					HX_STACK_LINE(345)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(345)
					int _g2 = rangeStarts->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(345)
					while((true)){
						HX_STACK_LINE(345)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(345)
							break;
						}
						HX_STACK_LINE(345)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(347)
						if (((rangeStarts->__get(j) > delIndex))){
							HX_STACK_LINE(349)
							hx::SubEq(rangeStarts[j],markerLength);
						}
						HX_STACK_LINE(351)
						if (((rangeEnds->__get(j) > delIndex))){
							HX_STACK_LINE(353)
							hx::SubEq(rangeEnds[j],markerLength);
						}
					}
				}
			}
		}
		HX_STACK_LINE(359)
		this->set_text(input);
		HX_STACK_LINE(362)
		{
			HX_STACK_LINE(362)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(362)
			int _g = rangeStarts->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(362)
			while((true)){
				HX_STACK_LINE(362)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(362)
					break;
				}
				HX_STACK_LINE(362)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(364)
				this->addFormat(rulesToApply->__get(i1).StaticCast< ::flixel::text::FlxTextFormatMarkerPair >()->format,rangeStarts->__get(i1),rangeEnds->__get(i1));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyMarkup,(void))

Void FlxText_obj::addFormat( ::flixel::text::FlxTextFormat Format,hx::Null< int >  __o_Start,hx::Null< int >  __o_End){
int Start = __o_Start.Default(-1);
int End = __o_End.Default(-1);
	HX_STACK_FRAME("flixel.text.FlxText","addFormat",0xc0d9d4fa,"flixel.text.FlxText.addFormat","flixel/text/FlxText.hx",376,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Format,"Format")
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
{
		HX_STACK_LINE(377)
		::flixel::text::_FlxText::FlxTextFormatRange _g = ::flixel::text::_FlxText::FlxTextFormatRange_obj::__new(Format,Start,End);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(377)
		this->_formatRanges->push(_g);

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int run(::flixel::text::_FlxText::FlxTextFormatRange left,::flixel::text::_FlxText::FlxTextFormatRange right){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/text/FlxText.hx",381,0xdf165a6e)
			HX_STACK_ARG(left,"left")
			HX_STACK_ARG(right,"right")
			{
				HX_STACK_LINE(381)
				if (((left->range->start < right->range->start))){
					HX_STACK_LINE(381)
					return (int)-1;
				}
				else{
					HX_STACK_LINE(381)
					return (int)1;
				}
				HX_STACK_LINE(381)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(379)
		this->_formatRanges->sort( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(383)
		this->_regen = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,addFormat,(void))

Void FlxText_obj::removeFormat( ::flixel::text::FlxTextFormat Format,Dynamic Start,Dynamic End){
{
		HX_STACK_FRAME("flixel.text.FlxText","removeFormat",0xa79a7f19,"flixel.text.FlxText.removeFormat","flixel/text/FlxText.hx",391,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Format,"Format")
		HX_STACK_ARG(Start,"Start")
		HX_STACK_ARG(End,"End")
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(392)
			Array< ::Dynamic > _g1 = this->_formatRanges;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(392)
			while((true)){
				HX_STACK_LINE(392)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(392)
					break;
				}
				HX_STACK_LINE(392)
				::flixel::text::_FlxText::FlxTextFormatRange formatRange = _g1->__get(_g).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(formatRange,"formatRange");
				HX_STACK_LINE(392)
				++(_g);
				HX_STACK_LINE(394)
				if (((formatRange->format == Format))){
					HX_STACK_LINE(396)
					if (((bool((bool((Start != null())) && bool((End != null())))) && bool(((bool((Start > formatRange->range->end)) || bool((End < formatRange->range->start)))))))){
						HX_STACK_LINE(399)
						continue;
					}
					HX_STACK_LINE(402)
					this->_formatRanges->remove(formatRange);
				}
			}
		}
		HX_STACK_LINE(405)
		this->_regen = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,removeFormat,(void))

Void FlxText_obj::clearFormats( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","clearFormats",0xf58bc7cd,"flixel.text.FlxText.clearFormats","flixel/text/FlxText.hx",412,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(413)
		this->_formatRanges = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(414)
		{
			HX_STACK_LINE(414)
			this->textField->set_defaultTextFormat(this->_defaultFormat);
			HX_STACK_LINE(414)
			this->textField->setTextFormat(this->_defaultFormat,null(),null());
			HX_STACK_LINE(414)
			this->_regen = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,clearFormats,(void))

::flixel::text::FlxText FlxText_obj::setFormat( ::String Font,hx::Null< Float >  __o_Size,hx::Null< int >  __o_Color,::String Alignment,::flixel::text::FlxTextBorderStyle BorderStyle,hx::Null< int >  __o_BorderColor,hx::Null< bool >  __o_Embedded){
Float Size = __o_Size.Default(8);
int Color = __o_Color.Default(-1);
int BorderColor = __o_BorderColor.Default(0);
bool Embedded = __o_Embedded.Default(true);
	HX_STACK_FRAME("flixel.text.FlxText","setFormat",0x685d153b,"flixel.text.FlxText.setFormat","flixel/text/FlxText.hx",432,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Alignment,"Alignment")
	HX_STACK_ARG(BorderStyle,"BorderStyle")
	HX_STACK_ARG(BorderColor,"BorderColor")
	HX_STACK_ARG(Embedded,"Embedded")
{
		HX_STACK_LINE(433)
		if (((BorderStyle == null()))){
			HX_STACK_LINE(433)
			BorderStyle = ::flixel::text::FlxTextBorderStyle_obj::NONE;
		}
		else{
			HX_STACK_LINE(433)
			BorderStyle = BorderStyle;
		}
		HX_STACK_LINE(435)
		if ((Embedded)){
			HX_STACK_LINE(437)
			this->set_font(Font);
		}
		else{
			HX_STACK_LINE(439)
			if (((Font != null()))){
				HX_STACK_LINE(441)
				this->set_systemFont(Font);
			}
		}
		HX_STACK_LINE(444)
		this->set_size(Size);
		HX_STACK_LINE(445)
		this->set_color(Color);
		HX_STACK_LINE(446)
		this->set_alignment(Alignment);
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			Float Size1 = (int)1;		HX_STACK_VAR(Size1,"Size1");
			HX_STACK_LINE(447)
			Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
			HX_STACK_LINE(447)
			this->set_borderStyle(BorderStyle);
			HX_STACK_LINE(447)
			this->set_borderColor(BorderColor);
			HX_STACK_LINE(447)
			this->set_borderSize(Size1);
			HX_STACK_LINE(447)
			this->set_borderQuality(Quality);
		}
		HX_STACK_LINE(449)
		{
			HX_STACK_LINE(449)
			this->textField->set_defaultTextFormat(this->_defaultFormat);
			HX_STACK_LINE(449)
			this->textField->setTextFormat(this->_defaultFormat,null(),null());
			HX_STACK_LINE(449)
			this->_regen = true;
		}
		HX_STACK_LINE(451)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxText_obj,setFormat,return )

Void FlxText_obj::setBorderStyle( ::flixel::text::FlxTextBorderStyle Style,hx::Null< int >  __o_Color,hx::Null< Float >  __o_Size,hx::Null< Float >  __o_Quality){
int Color = __o_Color.Default(0);
Float Size = __o_Size.Default(1);
Float Quality = __o_Quality.Default(1);
	HX_STACK_FRAME("flixel.text.FlxText","setBorderStyle",0x26cf9c21,"flixel.text.FlxText.setBorderStyle","flixel/text/FlxText.hx",463,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Quality,"Quality")
{
		HX_STACK_LINE(464)
		this->set_borderStyle(Style);
		HX_STACK_LINE(465)
		this->set_borderColor(Color);
		HX_STACK_LINE(466)
		this->set_borderSize(Size);
		HX_STACK_LINE(467)
		this->set_borderQuality(Quality);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxText_obj,setBorderStyle,(void))

Float FlxText_obj::set_fieldWidth( Float value){
	HX_STACK_FRAME("flixel.text.FlxText","set_fieldWidth",0x9c758fa7,"flixel.text.FlxText.set_fieldWidth","flixel/text/FlxText.hx",471,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(472)
	if (((this->textField != null()))){
		HX_STACK_LINE(474)
		if (((value <= (int)0))){
			HX_STACK_LINE(476)
			this->set_wordWrap(false);
			HX_STACK_LINE(477)
			this->set_autoSize(true);
		}
		else{
			HX_STACK_LINE(481)
			this->set_autoSize(false);
			HX_STACK_LINE(482)
			this->set_wordWrap(true);
			HX_STACK_LINE(483)
			this->textField->set_width(value);
		}
		HX_STACK_LINE(486)
		this->_regen = true;
	}
	HX_STACK_LINE(489)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_fieldWidth,return )

Float FlxText_obj::get_fieldWidth( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_fieldWidth",0x7c55a733,"flixel.text.FlxText.get_fieldWidth","flixel/text/FlxText.hx",494,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(494)
	if (((this->textField != null()))){
		HX_STACK_LINE(494)
		return this->textField->get_width();
	}
	else{
		HX_STACK_LINE(494)
		return (int)0;
	}
	HX_STACK_LINE(494)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_fieldWidth,return )

bool FlxText_obj::set_autoSize( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_autoSize",0x346abbcb,"flixel.text.FlxText.set_autoSize","flixel/text/FlxText.hx",498,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(499)
	if (((this->textField != null()))){
		HX_STACK_LINE(501)
		this->textField->set_autoSize((  ((value)) ? ::openfl::text::TextFieldAutoSize(::openfl::text::TextFieldAutoSize_obj::LEFT) : ::openfl::text::TextFieldAutoSize(::openfl::text::TextFieldAutoSize_obj::NONE) ));
		HX_STACK_LINE(502)
		this->_regen = true;
	}
	HX_STACK_LINE(505)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_autoSize,return )

bool FlxText_obj::get_autoSize( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_autoSize",0x1f719857,"flixel.text.FlxText.get_autoSize","flixel/text/FlxText.hx",510,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(510)
	if (((this->textField != null()))){
		HX_STACK_LINE(510)
		::openfl::text::TextFieldAutoSize _g = this->textField->get_autoSize();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(510)
		return (_g != ::openfl::text::TextFieldAutoSize_obj::NONE);
	}
	else{
		HX_STACK_LINE(510)
		return false;
	}
	HX_STACK_LINE(510)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_autoSize,return )

::String FlxText_obj::set_text( ::String Text){
	HX_STACK_FRAME("flixel.text.FlxText","set_text",0xb6d09f28,"flixel.text.FlxText.set_text","flixel/text/FlxText.hx",514,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Text,"Text")
	HX_STACK_LINE(515)
	this->text = Text;
	HX_STACK_LINE(516)
	if (((this->textField != null()))){
		HX_STACK_LINE(518)
		::String ot = this->textField->get_text();		HX_STACK_VAR(ot,"ot");
		HX_STACK_LINE(519)
		this->textField->set_text(Text);
		HX_STACK_LINE(520)
		::String _g = this->textField->get_text();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(520)
		bool _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(520)
		if ((!(((_g != ot))))){
			HX_STACK_LINE(520)
			_g1 = this->_regen;
		}
		else{
			HX_STACK_LINE(520)
			_g1 = true;
		}
		HX_STACK_LINE(520)
		this->_regen = _g1;
	}
	HX_STACK_LINE(522)
	return Text;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_text,return )

Float FlxText_obj::get_size( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_size",0x07cd19c8,"flixel.text.FlxText.get_size","flixel/text/FlxText.hx",527,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(527)
	return this->_defaultFormat->size;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_size,return )

Float FlxText_obj::set_size( Float Size){
	HX_STACK_FRAME("flixel.text.FlxText","set_size",0xb62a733c,"flixel.text.FlxText.set_size","flixel/text/FlxText.hx",531,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Size,"Size")
	HX_STACK_LINE(532)
	this->_defaultFormat->size = Size;
	HX_STACK_LINE(533)
	{
		HX_STACK_LINE(533)
		this->textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(533)
		this->textField->setTextFormat(this->_defaultFormat,null(),null());
		HX_STACK_LINE(533)
		this->_regen = true;
	}
	HX_STACK_LINE(534)
	return Size;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_size,return )

int FlxText_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.text.FlxText","set_color",0x7c7dca88,"flixel.text.FlxText.set_color","flixel/text/FlxText.hx",538,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(539)
	if (((((int(Color) & int((int)16777215))) == this->_defaultFormat->color))){
		HX_STACK_LINE(541)
		return Color;
	}
	HX_STACK_LINE(543)
	this->_defaultFormat->color = (int(Color) & int((int)16777215));
	HX_STACK_LINE(544)
	this->color = Color;
	HX_STACK_LINE(545)
	{
		HX_STACK_LINE(545)
		this->textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(545)
		this->textField->setTextFormat(this->_defaultFormat,null(),null());
		HX_STACK_LINE(545)
		this->_regen = true;
	}
	HX_STACK_LINE(546)
	return Color;
}


::String FlxText_obj::get_font( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_font",0xff39d6d6,"flixel.text.FlxText.get_font","flixel/text/FlxText.hx",551,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(551)
	return this->_font;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_font,return )

::String FlxText_obj::set_font( ::String Font){
	HX_STACK_FRAME("flixel.text.FlxText","set_font",0xad97304a,"flixel.text.FlxText.set_font","flixel/text/FlxText.hx",555,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_LINE(556)
	this->textField->set_embedFonts(true);
	HX_STACK_LINE(558)
	if (((Font != null()))){
		HX_STACK_LINE(560)
		::String newFontName = Font;		HX_STACK_VAR(newFontName,"newFontName");
		HX_STACK_LINE(561)
		if ((::openfl::_v2::Assets_obj::exists(Font,::openfl::_v2::AssetType_obj::FONT))){
			HX_STACK_LINE(563)
			newFontName = ::openfl::_v2::Assets_obj::getFont(Font,null())->fontName;
		}
		HX_STACK_LINE(566)
		this->_defaultFormat->font = newFontName;
	}
	else{
		HX_STACK_LINE(570)
		this->_defaultFormat->font = ::flixel::system::FlxAssets_obj::FONT_DEFAULT;
	}
	HX_STACK_LINE(573)
	{
		HX_STACK_LINE(573)
		this->textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(573)
		this->textField->setTextFormat(this->_defaultFormat,null(),null());
		HX_STACK_LINE(573)
		this->_regen = true;
	}
	HX_STACK_LINE(574)
	return this->_font = this->_defaultFormat->font;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_font,return )

bool FlxText_obj::get_embedded( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_embedded",0xce5a2211,"flixel.text.FlxText.get_embedded","flixel/text/FlxText.hx",579,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(579)
	return this->textField->set_embedFonts(true);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_embedded,return )

::String FlxText_obj::get_systemFont( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_systemFont",0xd6b43ca5,"flixel.text.FlxText.get_systemFont","flixel/text/FlxText.hx",584,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(584)
	return this->_defaultFormat->font;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_systemFont,return )

::String FlxText_obj::set_systemFont( ::String Font){
	HX_STACK_FRAME("flixel.text.FlxText","set_systemFont",0xf6d42519,"flixel.text.FlxText.set_systemFont","flixel/text/FlxText.hx",588,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_LINE(589)
	this->textField->set_embedFonts(false);
	HX_STACK_LINE(590)
	this->_defaultFormat->font = Font;
	HX_STACK_LINE(591)
	{
		HX_STACK_LINE(591)
		this->textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(591)
		this->textField->setTextFormat(this->_defaultFormat,null(),null());
		HX_STACK_LINE(591)
		this->_regen = true;
	}
	HX_STACK_LINE(592)
	return Font;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_systemFont,return )

bool FlxText_obj::get_bold( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_bold",0xfc94fa8c,"flixel.text.FlxText.get_bold","flixel/text/FlxText.hx",597,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(597)
	return this->_defaultFormat->bold;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_bold,return )

bool FlxText_obj::set_bold( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_bold",0xaaf25400,"flixel.text.FlxText.set_bold","flixel/text/FlxText.hx",601,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(602)
	if (((this->_defaultFormat->bold != value))){
		HX_STACK_LINE(604)
		this->_defaultFormat->bold = value;
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			this->textField->set_defaultTextFormat(this->_defaultFormat);
			HX_STACK_LINE(605)
			this->textField->setTextFormat(this->_defaultFormat,null(),null());
			HX_STACK_LINE(605)
			this->_regen = true;
		}
	}
	HX_STACK_LINE(607)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_bold,return )

bool FlxText_obj::get_italic( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_italic",0xadf337b7,"flixel.text.FlxText.get_italic","flixel/text/FlxText.hx",612,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(612)
	return this->_defaultFormat->italic;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_italic,return )

bool FlxText_obj::set_italic( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_italic",0xb170d62b,"flixel.text.FlxText.set_italic","flixel/text/FlxText.hx",616,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(617)
	if (((this->_defaultFormat->italic != value))){
		HX_STACK_LINE(619)
		this->_defaultFormat->italic = value;
		HX_STACK_LINE(620)
		{
			HX_STACK_LINE(620)
			this->textField->set_defaultTextFormat(this->_defaultFormat);
			HX_STACK_LINE(620)
			this->textField->setTextFormat(this->_defaultFormat,null(),null());
			HX_STACK_LINE(620)
			this->_regen = true;
		}
	}
	HX_STACK_LINE(622)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_italic,return )

bool FlxText_obj::get_wordWrap( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_wordWrap",0xf0d31d3b,"flixel.text.FlxText.get_wordWrap","flixel/text/FlxText.hx",627,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(627)
	return this->textField->get_wordWrap();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_wordWrap,return )

bool FlxText_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_wordWrap",0x05cc40af,"flixel.text.FlxText.set_wordWrap","flixel/text/FlxText.hx",631,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(632)
	bool _g = this->textField->get_wordWrap();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(632)
	if (((_g != value))){
		HX_STACK_LINE(634)
		this->textField->set_wordWrap(value);
		HX_STACK_LINE(635)
		this->_regen = true;
	}
	HX_STACK_LINE(637)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_wordWrap,return )

::String FlxText_obj::get_alignment( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_alignment",0xf34d507c,"flixel.text.FlxText.get_alignment","flixel/text/FlxText.hx",642,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(642)
	return hx::TCast< String >::cast(this->_defaultFormat->align);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_alignment,return )

::String FlxText_obj::set_alignment( ::String Alignment){
	HX_STACK_FRAME("flixel.text.FlxText","set_alignment",0x38533288,"flixel.text.FlxText.set_alignment","flixel/text/FlxText.hx",646,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alignment,"Alignment")
	HX_STACK_LINE(647)
	::String _g = this->convertTextAlignmentFromString(Alignment);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(647)
	this->_defaultFormat->align = _g;
	HX_STACK_LINE(648)
	{
		HX_STACK_LINE(648)
		this->textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(648)
		this->textField->setTextFormat(this->_defaultFormat,null(),null());
		HX_STACK_LINE(648)
		this->_regen = true;
	}
	HX_STACK_LINE(649)
	return Alignment;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_alignment,return )

::flixel::text::FlxTextBorderStyle FlxText_obj::set_borderStyle( ::flixel::text::FlxTextBorderStyle style){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderStyle",0x0a5ab38a,"flixel.text.FlxText.set_borderStyle","flixel/text/FlxText.hx",653,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(style,"style")
	HX_STACK_LINE(654)
	if (((style != this->borderStyle))){
		HX_STACK_LINE(656)
		this->borderStyle = style;
		HX_STACK_LINE(657)
		this->_regen = true;
	}
	HX_STACK_LINE(660)
	return this->borderStyle;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderStyle,return )

int FlxText_obj::set_borderColor( int Color){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderColor",0xd0997fbc,"flixel.text.FlxText.set_borderColor","flixel/text/FlxText.hx",664,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(665)
	if (((bool((((int(this->borderColor) & int((int)16777215))) != ((int(Color) & int((int)16777215))))) && bool((this->borderStyle != ::flixel::text::FlxTextBorderStyle_obj::NONE))))){
		HX_STACK_LINE(667)
		this->_regen = true;
	}
	HX_STACK_LINE(669)
	this->borderColor = Color;
	HX_STACK_LINE(670)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderColor,return )

Float FlxText_obj::set_borderSize( Float Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderSize",0x0b7e6088,"flixel.text.FlxText.set_borderSize","flixel/text/FlxText.hx",674,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(675)
	if (((bool((Value != this->borderSize)) && bool((this->borderStyle != ::flixel::text::FlxTextBorderStyle_obj::NONE))))){
		HX_STACK_LINE(677)
		this->_regen = true;
	}
	HX_STACK_LINE(679)
	this->borderSize = Value;
	HX_STACK_LINE(681)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderSize,return )

Float FlxText_obj::set_borderQuality( Float Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderQuality",0x9eac1b58,"flixel.text.FlxText.set_borderQuality","flixel/text/FlxText.hx",685,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(686)
	{
		HX_STACK_LINE(686)
		Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(686)
		if (((Value < (int)0))){
			HX_STACK_LINE(686)
			lowerBound = (int)0;
		}
		else{
			HX_STACK_LINE(686)
			lowerBound = Value;
		}
		HX_STACK_LINE(686)
		if (((lowerBound > (int)1))){
			HX_STACK_LINE(686)
			Value = (int)1;
		}
		else{
			HX_STACK_LINE(686)
			Value = lowerBound;
		}
	}
	HX_STACK_LINE(688)
	if (((bool((Value != this->borderQuality)) && bool((this->borderStyle != ::flixel::text::FlxTextBorderStyle_obj::NONE))))){
		HX_STACK_LINE(690)
		this->_regen = true;
	}
	HX_STACK_LINE(693)
	this->borderQuality = Value;
	HX_STACK_LINE(695)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderQuality,return )

::flixel::graphics::FlxGraphic FlxText_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_graphic",0x740d070d,"flixel.text.FlxText.set_graphic","flixel/text/FlxText.hx",699,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(700)
	::flixel::graphics::FlxGraphic oldGraphic = this->graphic;		HX_STACK_VAR(oldGraphic,"oldGraphic");
	HX_STACK_LINE(701)
	::flixel::graphics::FlxGraphic graph = this->super::set_graphic(Value);		HX_STACK_VAR(graph,"graph");
	HX_STACK_LINE(702)
	::flixel::FlxG_obj::bitmap->removeIfNoUse(oldGraphic);
	HX_STACK_LINE(703)
	return graph;
}


Float FlxText_obj::get_width( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_width",0x1933231f,"flixel.text.FlxText.get_width","flixel/text/FlxText.hx",707,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(708)
	if ((this->_regen)){
		HX_STACK_LINE(709)
		this->regenGraphics();
	}
	HX_STACK_LINE(711)
	return this->super::get_width();
}


Float FlxText_obj::get_height( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_height",0xa9db10ae,"flixel.text.FlxText.get_height","flixel/text/FlxText.hx",715,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(716)
	if ((this->_regen)){
		HX_STACK_LINE(717)
		this->regenGraphics();
	}
	HX_STACK_LINE(719)
	return this->super::get_height();
}


Void FlxText_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","updateColorTransform",0x81f611f0,"flixel.text.FlxText.updateColorTransform","flixel/text/FlxText.hx",723,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(724)
		if (((this->alpha != (int)1))){
			HX_STACK_LINE(726)
			this->colorTransform->alphaMultiplier = this->alpha;
			HX_STACK_LINE(727)
			this->useColorTransform = true;
		}
		else{
			HX_STACK_LINE(731)
			this->colorTransform->alphaMultiplier = (int)1;
			HX_STACK_LINE(732)
			this->useColorTransform = false;
		}
		HX_STACK_LINE(735)
		this->dirty = true;
	}
return null();
}


Void FlxText_obj::regenGraphics( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","regenGraphics",0x8e9d026a,"flixel.text.FlxText.regenGraphics","flixel/text/FlxText.hx",739,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(740)
		if (((bool((this->textField == null())) || bool((this->_regen == false))))){
			HX_STACK_LINE(741)
			return null();
		}
		HX_STACK_LINE(743)
		int oldWidth = (int)0;		HX_STACK_VAR(oldWidth,"oldWidth");
		HX_STACK_LINE(744)
		int oldHeight = (int)0;		HX_STACK_VAR(oldHeight,"oldHeight");
		HX_STACK_LINE(746)
		if (((this->graphic != null()))){
			HX_STACK_LINE(748)
			oldWidth = this->graphic->width;
			HX_STACK_LINE(749)
			oldHeight = this->graphic->height;
		}
		HX_STACK_LINE(752)
		Float newWidth = this->textField->get_width();		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(754)
		Float _g = this->textField->get_textHeight();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(754)
		Float newHeight = (_g + (int)4);		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(757)
		Float _g1 = this->textField->get_textHeight();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(757)
		if (((_g1 == (int)0))){
			HX_STACK_LINE(759)
			newHeight = oldHeight;
		}
		HX_STACK_LINE(762)
		if (((bool((oldWidth != newWidth)) || bool((oldHeight != newHeight))))){
			HX_STACK_LINE(765)
			this->set_height(newHeight);
			HX_STACK_LINE(766)
			::String key = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_CSTRING("text"));		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(768)
			int _g2 = ::Std_obj::_int(newWidth);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(768)
			int _g3 = ::Std_obj::_int(newHeight);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(768)
			this->makeGraphic(_g2,_g3,(int)0,false,key);
			HX_STACK_LINE(769)
			Float _g4 = this->get_height();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(769)
			int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(769)
			this->frameHeight = _g5;
			HX_STACK_LINE(770)
			Float _g6 = this->get_height();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(770)
			Float _g7 = (_g6 * 1.2);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(770)
			this->textField->set_height(_g7);
			HX_STACK_LINE(771)
			this->_flashRect->x = (int)0;
			HX_STACK_LINE(772)
			this->_flashRect->y = (int)0;
			HX_STACK_LINE(773)
			this->_flashRect->width = newWidth;
			HX_STACK_LINE(774)
			this->_flashRect->height = newHeight;
		}
		else{
			HX_STACK_LINE(778)
			this->graphic->bitmap->fillRect(this->_flashRect,(int)0);
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::text::FlxText_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/text/FlxText.hx",781,0xdf165a6e)
				{
					HX_STACK_LINE(781)
					::String _g8 = __this->textField->get_text();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(781)
					return (_g8 != null());
				}
				return null();
			}
		};
		HX_STACK_LINE(781)
		if (((  (((  (((this->textField != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))) ? bool((this->textField->get_text().length > (int)0)) : bool(false) ))){
			HX_STACK_LINE(784)
			this->copyTextFormat(this->_defaultFormat,this->_formatAdjusted,null());
			HX_STACK_LINE(786)
			this->_matrix->identity();
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::text::FlxText_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/text/FlxText.hx",789,0xdf165a6e)
					{
						HX_STACK_LINE(789)
						int _g9 = __this->textField->get_numLines();		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(789)
						return (_g9 == (int)1);
					}
					return null();
				}
			};
			HX_STACK_LINE(789)
			if (((  (((this->_defaultFormat->align == ::openfl::_v2::text::TextFormatAlign_obj::CENTER))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(791)
				this->_formatAdjusted->align = ::openfl::_v2::text::TextFormatAlign_obj::LEFT;
				HX_STACK_LINE(792)
				this->textField->setTextFormat(this->_formatAdjusted,null(),null());
				HX_STACK_LINE(797)
				Float textWidth = this->textField->getLineMetrics((int)0)->width;		HX_STACK_VAR(textWidth,"textWidth");
				HX_STACK_LINE(799)
				Float _g10 = this->textField->get_width();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(799)
				if (((textWidth <= _g10))){
					HX_STACK_LINE(800)
					Float _g11 = this->textField->get_width();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(800)
					Float _g12 = (_g11 - textWidth);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(800)
					Float _g13 = (Float(_g12) / Float((int)2));		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(800)
					int _g14 = ::Math_obj::floor(_g13);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(800)
					this->_matrix->translate(_g14,(int)0);
				}
			}
			HX_STACK_LINE(803)
			this->applyBorderStyle();
			HX_STACK_LINE(804)
			{
				HX_STACK_LINE(804)
				::openfl::_v2::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
				HX_STACK_LINE(804)
				this->copyTextFormat(this->_defaultFormat,FormatAdjusted,false);
				HX_STACK_LINE(804)
				FormatAdjusted->color = this->_defaultFormat->color;
				HX_STACK_LINE(804)
				this->textField->setTextFormat(FormatAdjusted,null(),null());
				HX_STACK_LINE(804)
				{
					HX_STACK_LINE(804)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(804)
					Array< ::Dynamic > _g11 = this->_formatRanges;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(804)
					while((true)){
						HX_STACK_LINE(804)
						if ((!(((_g2 < _g11->length))))){
							HX_STACK_LINE(804)
							break;
						}
						HX_STACK_LINE(804)
						::flixel::text::_FlxText::FlxTextFormatRange formatRange = _g11->__get(_g2).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(formatRange,"formatRange");
						HX_STACK_LINE(804)
						++(_g2);
						HX_STACK_LINE(804)
						if ((((this->textField->get_text().length - (int)1) < formatRange->range->start))){
							HX_STACK_LINE(804)
							break;
						}
						else{
							HX_STACK_LINE(804)
							::openfl::_v2::text::TextFormat textFormat = formatRange->format->format;		HX_STACK_VAR(textFormat,"textFormat");
							HX_STACK_LINE(804)
							this->copyTextFormat(textFormat,FormatAdjusted,false);
							HX_STACK_LINE(804)
							FormatAdjusted->color = textFormat->color;
						}
						HX_STACK_LINE(804)
						Float _g15 = ::Math_obj::min(formatRange->range->end,this->textField->get_text().length);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(804)
						int _g16 = ::Std_obj::_int(_g15);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(804)
						this->textField->setTextFormat(FormatAdjusted,formatRange->range->start,_g16);
					}
				}
			}
			HX_STACK_LINE(806)
			this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
		}
		HX_STACK_LINE(809)
		{
			HX_STACK_LINE(809)
			::flixel::graphics::frames::FlxFrame _this = this->frame;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(809)
			::openfl::_v2::display::BitmapData _g17 = ::flixel::util::FlxDestroyUtil_obj::dispose(_this->_bitmapData);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(809)
			_this->_bitmapData = _g17;
			HX_STACK_LINE(809)
			::openfl::_v2::display::BitmapData _g18 = ::flixel::util::FlxDestroyUtil_obj::dispose(_this->_hReversedBitmapData);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(809)
			_this->_hReversedBitmapData = _g18;
			HX_STACK_LINE(809)
			::openfl::_v2::display::BitmapData _g19 = ::flixel::util::FlxDestroyUtil_obj::dispose(_this->_vReversedBitmapData);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(809)
			_this->_vReversedBitmapData = _g19;
			HX_STACK_LINE(809)
			::openfl::_v2::display::BitmapData _g20 = ::flixel::util::FlxDestroyUtil_obj::dispose(_this->_hvReversedBitmapData);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(809)
			_this->_hvReversedBitmapData = _g20;
		}
		HX_STACK_LINE(810)
		this->_regen = false;
		HX_STACK_LINE(811)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,regenGraphics,(void))

Void FlxText_obj::draw( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","draw",0x3a66d282,"flixel.text.FlxText.draw","flixel/text/FlxText.hx",815,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(816)
		if ((this->_regen)){
			HX_STACK_LINE(817)
			this->regenGraphics();
		}
		HX_STACK_LINE(819)
		this->super::draw();
	}
return null();
}


Void FlxText_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.text.FlxText","calcFrame",0x04b3a41a,"flixel.text.FlxText.calcFrame","flixel/text/FlxText.hx",828,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
		HX_STACK_LINE(829)
		if (((this->textField == null()))){
			HX_STACK_LINE(830)
			return null();
		}
		HX_STACK_LINE(833)
		if ((!(RunOnCpp))){
			HX_STACK_LINE(834)
			return null();
		}
		HX_STACK_LINE(837)
		if ((this->_regen)){
			HX_STACK_LINE(838)
			this->regenGraphics();
		}
		HX_STACK_LINE(840)
		this->super::calcFrame(RunOnCpp);
	}
return null();
}


Void FlxText_obj::applyBorderStyle( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","applyBorderStyle",0x7fb82955,"flixel.text.FlxText.applyBorderStyle","flixel/text/FlxText.hx",844,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(845)
		int iterations = ::Std_obj::_int((this->borderSize * this->borderQuality));		HX_STACK_VAR(iterations,"iterations");
		HX_STACK_LINE(846)
		if (((iterations <= (int)0))){
			HX_STACK_LINE(848)
			iterations = (int)1;
		}
		HX_STACK_LINE(850)
		Float delta = (Float(this->borderSize) / Float(iterations));		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(852)
		{
			HX_STACK_LINE(852)
			::flixel::text::FlxTextBorderStyle _g = this->borderStyle;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(852)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(857)
					{
						HX_STACK_LINE(857)
						::openfl::_v2::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
						HX_STACK_LINE(857)
						this->copyTextFormat(this->_defaultFormat,FormatAdjusted,false);
						HX_STACK_LINE(857)
						FormatAdjusted->color = (int(this->borderColor) & int((int)16777215));
						HX_STACK_LINE(857)
						this->textField->setTextFormat(FormatAdjusted,null(),null());
						HX_STACK_LINE(857)
						{
							HX_STACK_LINE(857)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(857)
							Array< ::Dynamic > _g11 = this->_formatRanges;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(857)
							while((true)){
								HX_STACK_LINE(857)
								if ((!(((_g1 < _g11->length))))){
									HX_STACK_LINE(857)
									break;
								}
								HX_STACK_LINE(857)
								::flixel::text::_FlxText::FlxTextFormatRange formatRange = _g11->__get(_g1).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(formatRange,"formatRange");
								HX_STACK_LINE(857)
								++(_g1);
								HX_STACK_LINE(857)
								if ((((this->textField->get_text().length - (int)1) < formatRange->range->start))){
									HX_STACK_LINE(857)
									break;
								}
								else{
									HX_STACK_LINE(857)
									::openfl::_v2::text::TextFormat textFormat = formatRange->format->format;		HX_STACK_VAR(textFormat,"textFormat");
									HX_STACK_LINE(857)
									this->copyTextFormat(textFormat,FormatAdjusted,false);
									HX_STACK_LINE(857)
									FormatAdjusted->color = (int(formatRange->format->borderColor) & int((int)16777215));
								}
								HX_STACK_LINE(857)
								Float _g2 = ::Math_obj::min(formatRange->range->end,this->textField->get_text().length);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(857)
								int _g12 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(857)
								this->textField->setTextFormat(FormatAdjusted,formatRange->range->start,_g12);
							}
						}
					}
					HX_STACK_LINE(859)
					{
						HX_STACK_LINE(859)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(859)
						while((true)){
							HX_STACK_LINE(859)
							if ((!(((_g1 < iterations))))){
								HX_STACK_LINE(859)
								break;
							}
							HX_STACK_LINE(859)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(861)
							{
								HX_STACK_LINE(861)
								this->_matrix->translate(delta,delta);
								HX_STACK_LINE(861)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
						}
					}
					HX_STACK_LINE(864)
					this->_matrix->translate((-(this->shadowOffset->x) * this->borderSize),(-(this->shadowOffset->y) * this->borderSize));
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(869)
					{
						HX_STACK_LINE(869)
						::openfl::_v2::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
						HX_STACK_LINE(869)
						this->copyTextFormat(this->_defaultFormat,FormatAdjusted,false);
						HX_STACK_LINE(869)
						FormatAdjusted->color = (int(this->borderColor) & int((int)16777215));
						HX_STACK_LINE(869)
						this->textField->setTextFormat(FormatAdjusted,null(),null());
						HX_STACK_LINE(869)
						{
							HX_STACK_LINE(869)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(869)
							Array< ::Dynamic > _g11 = this->_formatRanges;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(869)
							while((true)){
								HX_STACK_LINE(869)
								if ((!(((_g1 < _g11->length))))){
									HX_STACK_LINE(869)
									break;
								}
								HX_STACK_LINE(869)
								::flixel::text::_FlxText::FlxTextFormatRange formatRange = _g11->__get(_g1).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(formatRange,"formatRange");
								HX_STACK_LINE(869)
								++(_g1);
								HX_STACK_LINE(869)
								if ((((this->textField->get_text().length - (int)1) < formatRange->range->start))){
									HX_STACK_LINE(869)
									break;
								}
								else{
									HX_STACK_LINE(869)
									::openfl::_v2::text::TextFormat textFormat = formatRange->format->format;		HX_STACK_VAR(textFormat,"textFormat");
									HX_STACK_LINE(869)
									this->copyTextFormat(textFormat,FormatAdjusted,false);
									HX_STACK_LINE(869)
									FormatAdjusted->color = (int(formatRange->format->borderColor) & int((int)16777215));
								}
								HX_STACK_LINE(869)
								Float _g2 = ::Math_obj::min(formatRange->range->end,this->textField->get_text().length);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(869)
								int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(869)
								this->textField->setTextFormat(FormatAdjusted,formatRange->range->start,_g3);
							}
						}
					}
					HX_STACK_LINE(871)
					Float curDelta = delta;		HX_STACK_VAR(curDelta,"curDelta");
					HX_STACK_LINE(872)
					{
						HX_STACK_LINE(872)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(872)
						while((true)){
							HX_STACK_LINE(872)
							if ((!(((_g1 < iterations))))){
								HX_STACK_LINE(872)
								break;
							}
							HX_STACK_LINE(872)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(874)
							{
								HX_STACK_LINE(874)
								this->_matrix->translate(-(curDelta),-(curDelta));
								HX_STACK_LINE(874)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(875)
							{
								HX_STACK_LINE(875)
								this->_matrix->translate(curDelta,(int)0);
								HX_STACK_LINE(875)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(876)
							{
								HX_STACK_LINE(876)
								this->_matrix->translate(curDelta,(int)0);
								HX_STACK_LINE(876)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(877)
							{
								HX_STACK_LINE(877)
								this->_matrix->translate((int)0,curDelta);
								HX_STACK_LINE(877)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(878)
							{
								HX_STACK_LINE(878)
								this->_matrix->translate((int)0,curDelta);
								HX_STACK_LINE(878)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(879)
							{
								HX_STACK_LINE(879)
								this->_matrix->translate(-(curDelta),(int)0);
								HX_STACK_LINE(879)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(880)
							{
								HX_STACK_LINE(880)
								this->_matrix->translate(-(curDelta),(int)0);
								HX_STACK_LINE(880)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(881)
							{
								HX_STACK_LINE(881)
								this->_matrix->translate((int)0,-(curDelta));
								HX_STACK_LINE(881)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(883)
							this->_matrix->translate(curDelta,(int)0);
							HX_STACK_LINE(884)
							hx::AddEq(curDelta,delta);
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(891)
					{
						HX_STACK_LINE(891)
						::openfl::_v2::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
						HX_STACK_LINE(891)
						this->copyTextFormat(this->_defaultFormat,FormatAdjusted,false);
						HX_STACK_LINE(891)
						FormatAdjusted->color = (int(this->borderColor) & int((int)16777215));
						HX_STACK_LINE(891)
						this->textField->setTextFormat(FormatAdjusted,null(),null());
						HX_STACK_LINE(891)
						{
							HX_STACK_LINE(891)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(891)
							Array< ::Dynamic > _g11 = this->_formatRanges;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(891)
							while((true)){
								HX_STACK_LINE(891)
								if ((!(((_g1 < _g11->length))))){
									HX_STACK_LINE(891)
									break;
								}
								HX_STACK_LINE(891)
								::flixel::text::_FlxText::FlxTextFormatRange formatRange = _g11->__get(_g1).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(formatRange,"formatRange");
								HX_STACK_LINE(891)
								++(_g1);
								HX_STACK_LINE(891)
								if ((((this->textField->get_text().length - (int)1) < formatRange->range->start))){
									HX_STACK_LINE(891)
									break;
								}
								else{
									HX_STACK_LINE(891)
									::openfl::_v2::text::TextFormat textFormat = formatRange->format->format;		HX_STACK_VAR(textFormat,"textFormat");
									HX_STACK_LINE(891)
									this->copyTextFormat(textFormat,FormatAdjusted,false);
									HX_STACK_LINE(891)
									FormatAdjusted->color = (int(formatRange->format->borderColor) & int((int)16777215));
								}
								HX_STACK_LINE(891)
								Float _g4 = ::Math_obj::min(formatRange->range->end,this->textField->get_text().length);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(891)
								int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(891)
								this->textField->setTextFormat(FormatAdjusted,formatRange->range->start,_g5);
							}
						}
					}
					HX_STACK_LINE(893)
					Float curDelta = delta;		HX_STACK_VAR(curDelta,"curDelta");
					HX_STACK_LINE(894)
					{
						HX_STACK_LINE(894)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(894)
						while((true)){
							HX_STACK_LINE(894)
							if ((!(((_g1 < iterations))))){
								HX_STACK_LINE(894)
								break;
							}
							HX_STACK_LINE(894)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(896)
							{
								HX_STACK_LINE(896)
								this->_matrix->translate(-(curDelta),-(curDelta));
								HX_STACK_LINE(896)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(897)
							{
								HX_STACK_LINE(897)
								this->_matrix->translate((curDelta * (int)2),(int)0);
								HX_STACK_LINE(897)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(898)
							{
								HX_STACK_LINE(898)
								this->_matrix->translate((int)0,(curDelta * (int)2));
								HX_STACK_LINE(898)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(899)
							{
								HX_STACK_LINE(899)
								this->_matrix->translate((-(curDelta) * (int)2),(int)0);
								HX_STACK_LINE(899)
								this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
							}
							HX_STACK_LINE(901)
							this->_matrix->translate(curDelta,-(curDelta));
							HX_STACK_LINE(902)
							hx::AddEq(curDelta,delta);
						}
					}
				}
				;break;
				case (int)0: {
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,applyBorderStyle,(void))

Void FlxText_obj::copyTextWithOffset( Float x,Float y){
{
		HX_STACK_FRAME("flixel.text.FlxText","copyTextWithOffset",0x8b535ed9,"flixel.text.FlxText.copyTextWithOffset","flixel/text/FlxText.hx",913,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(914)
		this->_matrix->translate(x,y);
		HX_STACK_LINE(915)
		this->graphic->bitmap->draw(this->textField,this->_matrix,null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,copyTextWithOffset,(void))

Void FlxText_obj::applyFormats( ::openfl::_v2::text::TextFormat FormatAdjusted,hx::Null< bool >  __o_UseBorderColor){
bool UseBorderColor = __o_UseBorderColor.Default(false);
	HX_STACK_FRAME("flixel.text.FlxText","applyFormats",0x597a620c,"flixel.text.FlxText.applyFormats","flixel/text/FlxText.hx",919,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FormatAdjusted,"FormatAdjusted")
	HX_STACK_ARG(UseBorderColor,"UseBorderColor")
{
		HX_STACK_LINE(921)
		this->copyTextFormat(this->_defaultFormat,FormatAdjusted,false);
		HX_STACK_LINE(922)
		if ((UseBorderColor)){
			HX_STACK_LINE(922)
			FormatAdjusted->color = (int(this->borderColor) & int((int)16777215));
		}
		else{
			HX_STACK_LINE(922)
			FormatAdjusted->color = this->_defaultFormat->color;
		}
		HX_STACK_LINE(923)
		this->textField->setTextFormat(FormatAdjusted,null(),null());
		HX_STACK_LINE(926)
		{
			HX_STACK_LINE(926)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(926)
			Array< ::Dynamic > _g1 = this->_formatRanges;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(926)
			while((true)){
				HX_STACK_LINE(926)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(926)
					break;
				}
				HX_STACK_LINE(926)
				::flixel::text::_FlxText::FlxTextFormatRange formatRange = _g1->__get(_g).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(formatRange,"formatRange");
				HX_STACK_LINE(926)
				++(_g);
				HX_STACK_LINE(928)
				if ((((this->textField->get_text().length - (int)1) < formatRange->range->start))){
					HX_STACK_LINE(931)
					break;
				}
				else{
					HX_STACK_LINE(935)
					::openfl::_v2::text::TextFormat textFormat = formatRange->format->format;		HX_STACK_VAR(textFormat,"textFormat");
					HX_STACK_LINE(936)
					this->copyTextFormat(textFormat,FormatAdjusted,false);
					HX_STACK_LINE(937)
					if ((UseBorderColor)){
						HX_STACK_LINE(937)
						FormatAdjusted->color = (int(formatRange->format->borderColor) & int((int)16777215));
					}
					else{
						HX_STACK_LINE(937)
						FormatAdjusted->color = textFormat->color;
					}
				}
				HX_STACK_LINE(941)
				Float _g2 = ::Math_obj::min(formatRange->range->end,this->textField->get_text().length);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(941)
				int _g11 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(940)
				this->textField->setTextFormat(FormatAdjusted,formatRange->range->start,_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyFormats,(void))

Void FlxText_obj::copyTextFormat( ::openfl::_v2::text::TextFormat from,::openfl::_v2::text::TextFormat to,hx::Null< bool >  __o_withAlign){
bool withAlign = __o_withAlign.Default(true);
	HX_STACK_FRAME("flixel.text.FlxText","copyTextFormat",0xce0953d7,"flixel.text.FlxText.copyTextFormat","flixel/text/FlxText.hx",946,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_ARG(withAlign,"withAlign")
{
		HX_STACK_LINE(947)
		to->font = from->font;
		HX_STACK_LINE(948)
		to->bold = from->bold;
		HX_STACK_LINE(949)
		to->italic = from->italic;
		HX_STACK_LINE(950)
		to->size = from->size;
		HX_STACK_LINE(951)
		to->color = from->color;
		HX_STACK_LINE(952)
		if ((withAlign)){
			HX_STACK_LINE(952)
			to->align = from->align;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,copyTextFormat,(void))

::openfl::_v2::text::TextFormat FlxText_obj::dtfCopy( ){
	HX_STACK_FRAME("flixel.text.FlxText","dtfCopy",0x79c34ded,"flixel.text.FlxText.dtfCopy","flixel/text/FlxText.hx",961,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(962)
	::openfl::_v2::text::TextFormat dtf = this->textField->get_defaultTextFormat();		HX_STACK_VAR(dtf,"dtf");
	HX_STACK_LINE(963)
	return ::openfl::_v2::text::TextFormat_obj::__new(dtf->font,dtf->size,dtf->color,dtf->bold,dtf->italic,dtf->underline,dtf->url,dtf->target,dtf->align,null(),null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,dtfCopy,return )

::String FlxText_obj::convertTextAlignmentFromString( ::String StrAlign){
	HX_STACK_FRAME("flixel.text.FlxText","convertTextAlignmentFromString",0xca79ae3c,"flixel.text.FlxText.convertTextAlignmentFromString","flixel/text/FlxText.hx",971,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StrAlign,"StrAlign")
	HX_STACK_LINE(971)
	::String _switch_1 = (StrAlign);
	if (  ( _switch_1==HX_CSTRING("left"))){
		HX_STACK_LINE(974)
		return ::openfl::_v2::text::TextFormatAlign_obj::LEFT;
	}
	else if (  ( _switch_1==HX_CSTRING("center"))){
		HX_STACK_LINE(976)
		return ::openfl::_v2::text::TextFormatAlign_obj::CENTER;
	}
	else if (  ( _switch_1==HX_CSTRING("right"))){
		HX_STACK_LINE(978)
		return ::openfl::_v2::text::TextFormatAlign_obj::RIGHT;
	}
	else if (  ( _switch_1==HX_CSTRING("justify"))){
		HX_STACK_LINE(980)
		return ::openfl::_v2::text::TextFormatAlign_obj::JUSTIFY;
	}
	HX_STACK_LINE(971)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,convertTextAlignmentFromString,return )

Void FlxText_obj::updateDefaultFormat( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","updateDefaultFormat",0x3cb6b251,"flixel.text.FlxText.updateDefaultFormat","flixel/text/FlxText.hx",985,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(986)
		this->textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(987)
		this->textField->setTextFormat(this->_defaultFormat,null(),null());
		HX_STACK_LINE(988)
		this->_regen = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,updateDefaultFormat,(void))

::flixel::graphics::frames::FlxFramesCollection FlxText_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
	HX_STACK_FRAME("flixel.text.FlxText","set_frames",0x579256e1,"flixel.text.FlxText.set_frames","flixel/text/FlxText.hx",992,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_LINE(993)
	this->super::set_frames(Frames);
	HX_STACK_LINE(994)
	this->_regen = false;
	HX_STACK_LINE(995)
	return Frames;
}



FlxText_obj::FlxText_obj()
{
}

void FlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxText);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(borderStyle,"borderStyle");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(borderQuality,"borderQuality");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_MARK_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_MARK_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_MARK_MEMBER_NAME(_formatRanges,"_formatRanges");
	HX_MARK_MEMBER_NAME(_font,"_font");
	HX_MARK_MEMBER_NAME(_regen,"_regen");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(borderStyle,"borderStyle");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(borderQuality,"borderQuality");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_VISIT_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_VISIT_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_VISIT_MEMBER_NAME(_formatRanges,"_formatRanges");
	HX_VISIT_MEMBER_NAME(_font,"_font");
	HX_VISIT_MEMBER_NAME(_regen,"_regen");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"size") ) { return get_size(); }
		if (HX_FIELD_EQ(inName,"font") ) { return get_font(); }
		if (HX_FIELD_EQ(inName,"bold") ) { return get_bold(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { return _font; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { return get_italic(); }
		if (HX_FIELD_EQ(inName,"_regen") ) { return _regen; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"dtfCopy") ) { return dtfCopy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"embedded") ) { return get_embedded(); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return get_wordWrap(); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return get_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bold") ) { return get_bold_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bold") ) { return set_bold_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { return get_alignment(); }
		if (HX_FIELD_EQ(inName,"textField") ) { return textField; }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return drawFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"addFormat") ) { return addFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { return get_systemFont(); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return borderSize; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { return get_fieldWidth(); }
		if (HX_FIELD_EQ(inName,"get_italic") ) { return get_italic_dyn(); }
		if (HX_FIELD_EQ(inName,"set_italic") ) { return set_italic_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return set_frames_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { return borderStyle; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"applyMarkup") ) { return applyMarkup_dyn(); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return set_graphic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { return shadowOffset; }
		if (HX_FIELD_EQ(inName,"stampOnAtlas") ) { return stampOnAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"removeFormat") ) { return removeFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"clearFormats") ) { return clearFormats_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_embedded") ) { return get_embedded_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"applyFormats") ) { return applyFormats_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { return borderQuality; }
		if (HX_FIELD_EQ(inName,"_formatRanges") ) { return _formatRanges; }
		if (HX_FIELD_EQ(inName,"get_alignment") ) { return get_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return set_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"regenGraphics") ) { return regenGraphics_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { return _defaultFormat; }
		if (HX_FIELD_EQ(inName,"setBorderStyle") ) { return setBorderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fieldWidth") ) { return set_fieldWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fieldWidth") ) { return get_fieldWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_systemFont") ) { return get_systemFont_dyn(); }
		if (HX_FIELD_EQ(inName,"set_systemFont") ) { return set_systemFont_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return set_borderSize_dyn(); }
		if (HX_FIELD_EQ(inName,"copyTextFormat") ) { return copyTextFormat_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { return _formatAdjusted; }
		if (HX_FIELD_EQ(inName,"set_borderStyle") ) { return set_borderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"applyBorderStyle") ) { return applyBorderStyle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_borderQuality") ) { return set_borderQuality_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"copyTextWithOffset") ) { return copyTextWithOffset_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateDefaultFormat") ) { return updateDefaultFormat_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"convertTextAlignmentFromString") ) { return convertTextAlignmentFromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { return set_size(inValue); }
		if (HX_FIELD_EQ(inName,"font") ) { return set_font(inValue); }
		if (HX_FIELD_EQ(inName,"bold") ) { return set_bold(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { _font=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { return set_italic(inValue); }
		if (HX_FIELD_EQ(inName,"_regen") ) { _regen=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return set_wordWrap(inValue); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { return set_autoSize(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { return set_alignment(inValue); }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { return set_systemFont(inValue); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp) return set_borderSize(inValue);borderSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { return set_fieldWidth(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { if (inCallProp) return set_borderStyle(inValue);borderStyle=inValue.Cast< ::flixel::text::FlxTextBorderStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp) return set_borderColor(inValue);borderColor=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { shadowOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { if (inCallProp) return set_borderQuality(inValue);borderQuality=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_formatRanges") ) { _formatRanges=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { _defaultFormat=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { _formatAdjusted=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("embedded"));
	outFields->push(HX_CSTRING("systemFont"));
	outFields->push(HX_CSTRING("bold"));
	outFields->push(HX_CSTRING("italic"));
	outFields->push(HX_CSTRING("wordWrap"));
	outFields->push(HX_CSTRING("alignment"));
	outFields->push(HX_CSTRING("borderStyle"));
	outFields->push(HX_CSTRING("borderColor"));
	outFields->push(HX_CSTRING("borderSize"));
	outFields->push(HX_CSTRING("borderQuality"));
	outFields->push(HX_CSTRING("textField"));
	outFields->push(HX_CSTRING("fieldWidth"));
	outFields->push(HX_CSTRING("autoSize"));
	outFields->push(HX_CSTRING("shadowOffset"));
	outFields->push(HX_CSTRING("_defaultFormat"));
	outFields->push(HX_CSTRING("_formatAdjusted"));
	outFields->push(HX_CSTRING("_formatRanges"));
	outFields->push(HX_CSTRING("_font"));
	outFields->push(HX_CSTRING("_regen"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxText_obj,text),HX_CSTRING("text")},
	{hx::fsObject /*::flixel::text::FlxTextBorderStyle*/ ,(int)offsetof(FlxText_obj,borderStyle),HX_CSTRING("borderStyle")},
	{hx::fsInt,(int)offsetof(FlxText_obj,borderColor),HX_CSTRING("borderColor")},
	{hx::fsFloat,(int)offsetof(FlxText_obj,borderSize),HX_CSTRING("borderSize")},
	{hx::fsFloat,(int)offsetof(FlxText_obj,borderQuality),HX_CSTRING("borderQuality")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(FlxText_obj,textField),HX_CSTRING("textField")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxText_obj,shadowOffset),HX_CSTRING("shadowOffset")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(FlxText_obj,_defaultFormat),HX_CSTRING("_defaultFormat")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(FlxText_obj,_formatAdjusted),HX_CSTRING("_formatAdjusted")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxText_obj,_formatRanges),HX_CSTRING("_formatRanges")},
	{hx::fsString,(int)offsetof(FlxText_obj,_font),HX_CSTRING("_font")},
	{hx::fsBool,(int)offsetof(FlxText_obj,_regen),HX_CSTRING("_regen")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("text"),
	HX_CSTRING("borderStyle"),
	HX_CSTRING("borderColor"),
	HX_CSTRING("borderSize"),
	HX_CSTRING("borderQuality"),
	HX_CSTRING("textField"),
	HX_CSTRING("shadowOffset"),
	HX_CSTRING("_defaultFormat"),
	HX_CSTRING("_formatAdjusted"),
	HX_CSTRING("_formatRanges"),
	HX_CSTRING("_font"),
	HX_CSTRING("_regen"),
	HX_CSTRING("destroy"),
	HX_CSTRING("drawFrame"),
	HX_CSTRING("stampOnAtlas"),
	HX_CSTRING("applyMarkup"),
	HX_CSTRING("addFormat"),
	HX_CSTRING("removeFormat"),
	HX_CSTRING("clearFormats"),
	HX_CSTRING("setFormat"),
	HX_CSTRING("setBorderStyle"),
	HX_CSTRING("set_fieldWidth"),
	HX_CSTRING("get_fieldWidth"),
	HX_CSTRING("set_autoSize"),
	HX_CSTRING("get_autoSize"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_size"),
	HX_CSTRING("set_size"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_font"),
	HX_CSTRING("set_font"),
	HX_CSTRING("get_embedded"),
	HX_CSTRING("get_systemFont"),
	HX_CSTRING("set_systemFont"),
	HX_CSTRING("get_bold"),
	HX_CSTRING("set_bold"),
	HX_CSTRING("get_italic"),
	HX_CSTRING("set_italic"),
	HX_CSTRING("get_wordWrap"),
	HX_CSTRING("set_wordWrap"),
	HX_CSTRING("get_alignment"),
	HX_CSTRING("set_alignment"),
	HX_CSTRING("set_borderStyle"),
	HX_CSTRING("set_borderColor"),
	HX_CSTRING("set_borderSize"),
	HX_CSTRING("set_borderQuality"),
	HX_CSTRING("set_graphic"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("updateColorTransform"),
	HX_CSTRING("regenGraphics"),
	HX_CSTRING("draw"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("applyBorderStyle"),
	HX_CSTRING("copyTextWithOffset"),
	HX_CSTRING("applyFormats"),
	HX_CSTRING("copyTextFormat"),
	HX_CSTRING("dtfCopy"),
	HX_CSTRING("convertTextAlignmentFromString"),
	HX_CSTRING("updateDefaultFormat"),
	HX_CSTRING("set_frames"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
};

#endif

Class FlxText_obj::__mClass;

void FlxText_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.FlxText"), hx::TCanCast< FlxText_obj> ,sStaticFields,sMemberFields,
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

void FlxText_obj::__boot()
{
}

} // end namespace flixel
} // end namespace text
