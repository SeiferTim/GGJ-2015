#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Bitmap
#include <openfl/_v2/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_media_Sound
#include <openfl/_v2/media/Sound.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
namespace flixel{
namespace system{
namespace ui{

Void FlxSoundTray_obj::__construct()
{
HX_STACK_FRAME("flixel.system.ui.FlxSoundTray","new",0x221b6352,"flixel.system.ui.FlxSoundTray.new","flixel/system/ui/FlxSoundTray.hx",22,0x04618f9d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(42)
	this->_defaultScale = 2.0;
	HX_STACK_LINE(40)
	this->_width = (int)80;
	HX_STACK_LINE(50)
	super::__construct();
	HX_STACK_LINE(52)
	this->set_visible(false);
	HX_STACK_LINE(53)
	this->set_scaleX(this->_defaultScale);
	HX_STACK_LINE(54)
	this->set_scaleY(this->_defaultScale);
	HX_STACK_LINE(55)
	::openfl::_v2::display::BitmapData _g = ::openfl::_v2::display::BitmapData_obj::__new(this->_width,(int)30,true,(int)2130706432,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(55)
	::openfl::_v2::display::Bitmap tmp = ::openfl::_v2::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	this->screenCenter();
	HX_STACK_LINE(57)
	this->addChild(tmp);
	HX_STACK_LINE(59)
	::openfl::_v2::text::TextField text = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(60)
	Float _g1 = tmp->get_width();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(60)
	text->set_width(_g1);
	HX_STACK_LINE(61)
	Float _g2 = tmp->get_height();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(61)
	text->set_height(_g2);
	HX_STACK_LINE(62)
	text->set_multiline(true);
	HX_STACK_LINE(63)
	text->set_wordWrap(true);
	HX_STACK_LINE(64)
	text->set_selectable(false);
	HX_STACK_LINE(73)
	::openfl::_v2::text::TextFormat dtf = ::openfl::_v2::text::TextFormat_obj::__new(::flixel::system::FlxAssets_obj::FONT_DEFAULT,(int)8,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(dtf,"dtf");
	HX_STACK_LINE(74)
	dtf->align = ::openfl::_v2::text::TextFormatAlign_obj::CENTER;
	HX_STACK_LINE(75)
	text->set_defaultTextFormat(dtf);
	HX_STACK_LINE(76)
	this->addChild(text);
	HX_STACK_LINE(77)
	text->set_text(HX_CSTRING("VOLUME"));
	HX_STACK_LINE(78)
	text->set_y((int)16);
	HX_STACK_LINE(80)
	int bx = (int)10;		HX_STACK_VAR(bx,"bx");
	HX_STACK_LINE(81)
	int by = (int)14;		HX_STACK_VAR(by,"by");
	HX_STACK_LINE(82)
	Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(82)
	this->_bars = _g3;
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(84)
		while((true)){
			HX_STACK_LINE(84)
			if ((!(((_g4 < (int)10))))){
				HX_STACK_LINE(84)
				break;
			}
			HX_STACK_LINE(84)
			int i = (_g4)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(86)
			::openfl::_v2::display::BitmapData _g41 = ::openfl::_v2::display::BitmapData_obj::__new((int)4,(i + (int)1),false,(int)-1,null());		HX_STACK_VAR(_g41,"_g41");
			HX_STACK_LINE(86)
			::openfl::_v2::display::Bitmap _g5 = ::openfl::_v2::display::Bitmap_obj::__new(_g41,null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(86)
			tmp = _g5;
			HX_STACK_LINE(87)
			tmp->set_x(bx);
			HX_STACK_LINE(88)
			tmp->set_y(by);
			HX_STACK_LINE(89)
			this->addChild(tmp);
			HX_STACK_LINE(90)
			this->_bars->push(tmp);
			HX_STACK_LINE(91)
			hx::AddEq(bx,(int)6);
			HX_STACK_LINE(92)
			(by)--;
		}
	}
	HX_STACK_LINE(95)
	Float _g6 = -(this->get_height());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(95)
	this->set_y(_g6);
	HX_STACK_LINE(96)
	this->set_visible(false);
}
;
	return null();
}

//FlxSoundTray_obj::~FlxSoundTray_obj() { }

Dynamic FlxSoundTray_obj::__CreateEmpty() { return  new FlxSoundTray_obj; }
hx::ObjectPtr< FlxSoundTray_obj > FlxSoundTray_obj::__new()
{  hx::ObjectPtr< FlxSoundTray_obj > result = new FlxSoundTray_obj();
	result->__construct();
	return result;}

Dynamic FlxSoundTray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSoundTray_obj > result = new FlxSoundTray_obj();
	result->__construct();
	return result;}

Void FlxSoundTray_obj::update( Float MS){
{
		HX_STACK_FRAME("flixel.system.ui.FlxSoundTray","update",0x9cbad657,"flixel.system.ui.FlxSoundTray.update","flixel/system/ui/FlxSoundTray.hx",105,0x04618f9d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(MS,"MS")
		HX_STACK_LINE(105)
		if (((this->_timer > (int)0))){
			HX_STACK_LINE(107)
			hx::SubEq(this->_timer,(Float(MS) / Float((int)1000)));
		}
		else{
			HX_STACK_LINE(109)
			Float _g = this->get_y();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(109)
			Float _g1 = -(this->get_height());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(109)
			if (((_g > _g1))){
				HX_STACK_LINE(111)
				{
					HX_STACK_LINE(111)
					::flixel::system::ui::FlxSoundTray _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(111)
					Float _g21 = _g2->get_y();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(111)
					Float _g3 = (_g21 - (((Float(MS) / Float((int)1000)) * ::flixel::FlxG_obj::height) * (int)2));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(111)
					_g2->set_y(_g3);
				}
				HX_STACK_LINE(113)
				Float _g4 = this->get_y();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(113)
				Float _g5 = -(this->get_height());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(113)
				if (((_g4 <= _g5))){
					HX_STACK_LINE(115)
					this->set_visible(false);
					HX_STACK_LINE(116)
					this->active = false;
					HX_STACK_LINE(119)
					::flixel::FlxG_obj::save->data->__FieldRef(HX_CSTRING("mute")) = ::flixel::FlxG_obj::sound->muted;
					HX_STACK_LINE(120)
					::flixel::FlxG_obj::save->data->__FieldRef(HX_CSTRING("volume")) = ::flixel::FlxG_obj::sound->volume;
					HX_STACK_LINE(121)
					::flixel::FlxG_obj::save->flush(null(),null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundTray_obj,update,(void))

Void FlxSoundTray_obj::show( hx::Null< bool >  __o_Silent){
bool Silent = __o_Silent.Default(false);
	HX_STACK_FRAME("flixel.system.ui.FlxSoundTray","show",0xb92bd5cb,"flixel.system.ui.FlxSoundTray.show","flixel/system/ui/FlxSoundTray.hx",132,0x04618f9d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Silent,"Silent")
{
		HX_STACK_LINE(133)
		if ((!(Silent))){
			HX_STACK_LINE(135)
			::openfl::_v2::media::Sound _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				::String extension = HX_CSTRING("");		HX_STACK_VAR(extension,"extension");
				HX_STACK_LINE(135)
				extension = HX_CSTRING(".ogg");
				HX_STACK_LINE(135)
				_g = ::openfl::_v2::Assets_obj::getSound((HX_CSTRING("assets/sounds/beep") + extension),null());
			}
			HX_STACK_LINE(135)
			::flixel::FlxG_obj::sound->load(_g,null(),null(),null(),null(),null(),null())->play(null());
		}
		HX_STACK_LINE(138)
		this->_timer = (int)1;
		HX_STACK_LINE(139)
		this->set_y((int)0);
		HX_STACK_LINE(140)
		this->set_visible(true);
		HX_STACK_LINE(141)
		this->active = true;
		HX_STACK_LINE(142)
		int globalVolume = ::Math_obj::round((::flixel::FlxG_obj::sound->volume * (int)10));		HX_STACK_VAR(globalVolume,"globalVolume");
		HX_STACK_LINE(144)
		if ((::flixel::FlxG_obj::sound->muted)){
			HX_STACK_LINE(146)
			globalVolume = (int)0;
		}
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(149)
			int _g = this->_bars->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(149)
			while((true)){
				HX_STACK_LINE(149)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(149)
					break;
				}
				HX_STACK_LINE(149)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(151)
				if (((i < globalVolume))){
					HX_STACK_LINE(153)
					this->_bars->__get(i).StaticCast< ::openfl::_v2::display::Bitmap >()->set_alpha((int)1);
				}
				else{
					HX_STACK_LINE(157)
					this->_bars->__get(i).StaticCast< ::openfl::_v2::display::Bitmap >()->set_alpha(0.5);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundTray_obj,show,(void))

Void FlxSoundTray_obj::screenCenter( ){
{
		HX_STACK_FRAME("flixel.system.ui.FlxSoundTray","screenCenter",0x0f14ad2f,"flixel.system.ui.FlxSoundTray.screenCenter","flixel/system/ui/FlxSoundTray.hx",163,0x04618f9d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(164)
		this->set_scaleX(this->_defaultScale);
		HX_STACK_LINE(165)
		this->set_scaleY(this->_defaultScale);
		HX_STACK_LINE(167)
		int _g = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		Float _g1 = (_g - (this->_width * this->_defaultScale));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(167)
		Float _g2 = (0.5 * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(167)
		Float _g3 = ::flixel::FlxG_obj::game->get_x();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(167)
		Float _g4 = (_g2 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(167)
		this->set_x(_g4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSoundTray_obj,screenCenter,(void))


FlxSoundTray_obj::FlxSoundTray_obj()
{
}

void FlxSoundTray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSoundTray);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_bars,"_bars");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_defaultScale,"_defaultScale");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSoundTray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_bars,"_bars");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_defaultScale,"_defaultScale");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSoundTray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_bars") ) { return _bars; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenCenter") ) { return screenCenter_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_defaultScale") ) { return _defaultScale; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSoundTray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_bars") ) { _bars=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_defaultScale") ) { _defaultScale=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSoundTray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("_bars"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_defaultScale"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxSoundTray_obj,active),HX_CSTRING("active")},
	{hx::fsFloat,(int)offsetof(FlxSoundTray_obj,_timer),HX_CSTRING("_timer")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxSoundTray_obj,_bars),HX_CSTRING("_bars")},
	{hx::fsInt,(int)offsetof(FlxSoundTray_obj,_width),HX_CSTRING("_width")},
	{hx::fsFloat,(int)offsetof(FlxSoundTray_obj,_defaultScale),HX_CSTRING("_defaultScale")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("active"),
	HX_CSTRING("_timer"),
	HX_CSTRING("_bars"),
	HX_CSTRING("_width"),
	HX_CSTRING("_defaultScale"),
	HX_CSTRING("update"),
	HX_CSTRING("show"),
	HX_CSTRING("screenCenter"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSoundTray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSoundTray_obj::__mClass,"__mClass");
};

#endif

Class FlxSoundTray_obj::__mClass;

void FlxSoundTray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.ui.FlxSoundTray"), hx::TCanCast< FlxSoundTray_obj> ,sStaticFields,sMemberFields,
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

void FlxSoundTray_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace ui
