#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_FlxVersion
#include <flixel/system/FlxVersion.h>
#endif
#ifndef INCLUDED_flixel_system_debug_BitmapLog
#include <flixel/system/debug/BitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Console
#include <flixel/system/debug/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxButtonAlignment
#include <flixel/system/debug/FlxButtonAlignment.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebuggerLayout
#include <flixel/system/debug/FlxDebuggerLayout.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicBitmapLog
#include <flixel/system/debug/GraphicBitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicConsole
#include <flixel/system/debug/GraphicConsole.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicLog
#include <flixel/system/debug/GraphicLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicStats
#include <flixel/system/debug/GraphicStats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicWatch
#include <flixel/system/debug/GraphicWatch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Log
#include <flixel/system/debug/Log.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Stats
#include <flixel/system/debug/Stats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Tracker
#include <flixel/system/debug/Tracker.h>
#endif
#ifndef INCLUDED_flixel_system_debug_VCR
#include <flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Watch
#include <flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug__FlxDebugger_GraphicDrawDebug
#include <flixel/system/debug/_FlxDebugger/GraphicDrawDebug.h>
#endif
#ifndef INCLUDED_flixel_system_debug__FlxDebugger_GraphicFlixel
#include <flixel/system/debug/_FlxDebugger/GraphicFlixel.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
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
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
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
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__v2_net_URLRequest
#include <openfl/_v2/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void FlxDebugger_obj::__construct(Float Width,Float Height)
{
HX_STACK_FRAME("flixel.system.debug.FlxDebugger","new",0x06ebd57d,"flixel.system.debug.FlxDebugger.new","flixel/system/debug/FlxDebugger.hx",56,0xd9fc0a74)
HX_STACK_THIS(this)
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
{
	HX_STACK_LINE(77)
	this->hasMouse = false;
	HX_STACK_LINE(402)
	super::__construct();
	HX_STACK_LINE(403)
	this->set_visible(false);
	HX_STACK_LINE(404)
	this->_layout = ::flixel::system::debug::FlxDebuggerLayout_obj::STANDARD;
	HX_STACK_LINE(405)
	::openfl::_v2::geom::Point _g = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(405)
	this->_screen = _g;
	HX_STACK_LINE(406)
	this->_windows = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(408)
	::openfl::_v2::display::Sprite _g1 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(408)
	this->_topBar = _g1;
	HX_STACK_LINE(409)
	this->_topBar->get_graphics()->beginFill((int)0,0.66666666666666663);
	HX_STACK_LINE(410)
	int _g2 = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(410)
	this->_topBar->get_graphics()->drawRect((int)0,(int)0,_g2,(int)20);
	HX_STACK_LINE(411)
	this->_topBar->get_graphics()->endFill();
	HX_STACK_LINE(412)
	this->addChild(this->_topBar);
	HX_STACK_LINE(414)
	::openfl::_v2::text::TextField txt = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(txt,"txt");
	HX_STACK_LINE(415)
	txt->set_height((int)20);
	HX_STACK_LINE(416)
	txt->set_selectable(false);
	HX_STACK_LINE(417)
	txt->set_y((int)-9);
	HX_STACK_LINE(418)
	txt->set_multiline(false);
	HX_STACK_LINE(419)
	txt->set_embedFonts(true);
	HX_STACK_LINE(420)
	::openfl::_v2::text::TextFormat format = ::openfl::_v2::text::TextFormat_obj::__new(::flixel::system::FlxAssets_obj::FONT_DEBUGGER,(int)12,(int)-1,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(421)
	txt->set_defaultTextFormat(format);
	HX_STACK_LINE(422)
	txt->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(423)
	::String _g3 = ::Std_obj::string(::flixel::FlxG_obj::VERSION);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(423)
	txt->set_text(_g3);
	HX_STACK_LINE(425)
	this->_leftButtons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(426)
	this->_rightButtons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(427)
	this->_middleButtons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(429)
	{
		HX_STACK_LINE(429)
		::flixel::system::debug::Log _g4 = ::flixel::system::debug::Log_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(429)
		::flixel::system::debug::Window window = this->log = _g4;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(429)
		this->_windows->push(window);
		HX_STACK_LINE(429)
		this->addChild(window);
		HX_STACK_LINE(429)
		if (((this->_screenBounds != null()))){
			HX_STACK_LINE(429)
			this->updateBounds();
			HX_STACK_LINE(429)
			window->bound();
		}
		HX_STACK_LINE(429)
		window;
	}
	HX_STACK_LINE(430)
	{
		HX_STACK_LINE(430)
		::flixel::system::debug::BitmapLog _g5 = ::flixel::system::debug::BitmapLog_obj::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(430)
		::flixel::system::debug::Window window = this->bitmapLog = _g5;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(430)
		this->_windows->push(window);
		HX_STACK_LINE(430)
		this->addChild(window);
		HX_STACK_LINE(430)
		if (((this->_screenBounds != null()))){
			HX_STACK_LINE(430)
			this->updateBounds();
			HX_STACK_LINE(430)
			window->bound();
		}
		HX_STACK_LINE(430)
		window;
	}
	HX_STACK_LINE(431)
	{
		HX_STACK_LINE(431)
		::flixel::system::debug::Watch _g6 = ::flixel::system::debug::Watch_obj::__new(null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(431)
		::flixel::system::debug::Window window = this->watch = _g6;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(431)
		this->_windows->push(window);
		HX_STACK_LINE(431)
		this->addChild(window);
		HX_STACK_LINE(431)
		if (((this->_screenBounds != null()))){
			HX_STACK_LINE(431)
			this->updateBounds();
			HX_STACK_LINE(431)
			window->bound();
		}
		HX_STACK_LINE(431)
		window;
	}
	HX_STACK_LINE(432)
	{
		HX_STACK_LINE(432)
		::flixel::system::debug::Console _g7 = ::flixel::system::debug::Console_obj::__new();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(432)
		::flixel::system::debug::Window window = this->console = _g7;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(432)
		this->_windows->push(window);
		HX_STACK_LINE(432)
		this->addChild(window);
		HX_STACK_LINE(432)
		if (((this->_screenBounds != null()))){
			HX_STACK_LINE(432)
			this->updateBounds();
			HX_STACK_LINE(432)
			window->bound();
		}
		HX_STACK_LINE(432)
		window;
	}
	HX_STACK_LINE(433)
	{
		HX_STACK_LINE(433)
		::flixel::system::debug::Stats _g8 = ::flixel::system::debug::Stats_obj::__new();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(433)
		::flixel::system::debug::Window window = this->stats = _g8;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(433)
		this->_windows->push(window);
		HX_STACK_LINE(433)
		this->addChild(window);
		HX_STACK_LINE(433)
		if (((this->_screenBounds != null()))){
			HX_STACK_LINE(433)
			this->updateBounds();
			HX_STACK_LINE(433)
			window->bound();
		}
		HX_STACK_LINE(433)
		window;
	}
	HX_STACK_LINE(435)
	::flixel::system::debug::VCR _g9 = ::flixel::system::debug::VCR_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(435)
	this->vcr = _g9;
	HX_STACK_LINE(437)
	::flixel::system::debug::_FlxDebugger::GraphicFlixel _g10 = ::flixel::system::debug::_FlxDebugger::GraphicFlixel_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(437)
	this->addButton(::flixel::system::debug::FlxButtonAlignment_obj::LEFT,_g10,this->openHomepage_dyn(),null(),null());
	HX_STACK_LINE(438)
	this->addButton(::flixel::system::debug::FlxButtonAlignment_obj::LEFT,null(),this->openGitHub_dyn(),null(),null())->addChild(txt);
	HX_STACK_LINE(440)
	this->addWindowToggleButton(this->bitmapLog,hx::ClassOf< ::flixel::system::debug::GraphicBitmapLog >());
	HX_STACK_LINE(441)
	this->addWindowToggleButton(this->log,hx::ClassOf< ::flixel::system::debug::GraphicLog >());
	HX_STACK_LINE(443)
	this->addWindowToggleButton(this->watch,hx::ClassOf< ::flixel::system::debug::GraphicWatch >());
	HX_STACK_LINE(444)
	this->addWindowToggleButton(this->console,hx::ClassOf< ::flixel::system::debug::GraphicConsole >());
	HX_STACK_LINE(445)
	this->addWindowToggleButton(this->stats,hx::ClassOf< ::flixel::system::debug::GraphicStats >());
	HX_STACK_LINE(447)
	::flixel::system::debug::_FlxDebugger::GraphicDrawDebug _g11 = ::flixel::system::debug::_FlxDebugger::GraphicDrawDebug_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(447)
	Array< ::Dynamic > drawDebugButton = Array_obj< ::Dynamic >::__new().Add(this->addButton(::flixel::system::debug::FlxButtonAlignment_obj::RIGHT,_g11,this->toggleDrawDebug_dyn(),true,null()));		HX_STACK_VAR(drawDebugButton,"drawDebugButton");
	HX_STACK_LINE(448)
	drawDebugButton->__get((int)0).StaticCast< ::flixel::system::ui::FlxSystemButton >()->set_toggled(!(::flixel::FlxG_obj::debugger->drawDebug));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,drawDebugButton)
	Void run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/system/debug/FlxDebugger.hx",449,0xd9fc0a74)
		{
			HX_STACK_LINE(449)
			drawDebugButton->__get((int)0).StaticCast< ::flixel::system::ui::FlxSystemButton >()->set_toggled(::flixel::FlxG_obj::debugger->drawDebug);
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(449)
	::flixel::FlxG_obj::debugger->drawDebugChanged->add( Dynamic(new _Function_1_1(drawDebugButton)));
	HX_STACK_LINE(455)
	this->onResize(Width,Height);
	HX_STACK_LINE(457)
	this->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_OVER,this->onMouseOver_dyn(),null(),null(),null());
	HX_STACK_LINE(458)
	this->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_OUT,this->onMouseOut_dyn(),null(),null(),null());
	HX_STACK_LINE(460)
	::flixel::FlxG_obj::signals->stateSwitched->add(::flixel::system::debug::Tracker_obj::onStateSwitch_dyn());
}
;
	return null();
}

//FlxDebugger_obj::~FlxDebugger_obj() { }

Dynamic FlxDebugger_obj::__CreateEmpty() { return  new FlxDebugger_obj; }
hx::ObjectPtr< FlxDebugger_obj > FlxDebugger_obj::__new(Float Width,Float Height)
{  hx::ObjectPtr< FlxDebugger_obj > result = new FlxDebugger_obj();
	result->__construct(Width,Height);
	return result;}

Dynamic FlxDebugger_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxDebugger_obj > result = new FlxDebugger_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void FlxDebugger_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","destroy",0x0aa38497,"flixel.system.debug.FlxDebugger.destroy","flixel/system/debug/FlxDebugger.hx",113,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		this->_screen = null();
		HX_STACK_LINE(116)
		Array< ::Dynamic > _g = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_leftButtons);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(116)
		this->_leftButtons = _g;
		HX_STACK_LINE(117)
		Array< ::Dynamic > _g1 = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_middleButtons);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(117)
		this->_middleButtons = _g1;
		HX_STACK_LINE(118)
		Array< ::Dynamic > _g2 = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_rightButtons);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(118)
		this->_rightButtons = _g2;
		HX_STACK_LINE(120)
		this->removeChild(this->_topBar);
		HX_STACK_LINE(121)
		this->_topBar = null();
		HX_STACK_LINE(123)
		if (((this->log != null()))){
			HX_STACK_LINE(125)
			this->removeChild(this->log);
			HX_STACK_LINE(126)
			this->log->destroy();
			HX_STACK_LINE(127)
			this->log = null();
		}
		HX_STACK_LINE(129)
		if (((this->watch != null()))){
			HX_STACK_LINE(131)
			this->removeChild(this->watch);
			HX_STACK_LINE(132)
			this->watch->destroy();
			HX_STACK_LINE(133)
			this->watch = null();
		}
		HX_STACK_LINE(135)
		if (((this->bitmapLog != null()))){
			HX_STACK_LINE(137)
			this->removeChild(this->bitmapLog);
			HX_STACK_LINE(138)
			this->bitmapLog->destroy();
			HX_STACK_LINE(139)
			this->bitmapLog = null();
		}
		HX_STACK_LINE(141)
		if (((this->stats != null()))){
			HX_STACK_LINE(143)
			this->removeChild(this->stats);
			HX_STACK_LINE(144)
			this->stats->destroy();
			HX_STACK_LINE(145)
			this->stats = null();
		}
		HX_STACK_LINE(147)
		if (((this->console != null()))){
			HX_STACK_LINE(149)
			this->removeChild(this->console);
			HX_STACK_LINE(150)
			this->console->destroy();
			HX_STACK_LINE(151)
			this->console = null();
		}
		HX_STACK_LINE(154)
		this->_windows = null();
		HX_STACK_LINE(156)
		this->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_OVER,this->onMouseOver_dyn(),null());
		HX_STACK_LINE(157)
		this->removeEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_OUT,this->onMouseOut_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,destroy,(void))

Void FlxDebugger_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","update",0x10a9d10c,"flixel.system.debug.FlxDebugger.update","flixel/system/debug/FlxDebugger.hx",162,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(162)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(162)
		Array< ::Dynamic > _g1 = this->_windows;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(162)
		while((true)){
			HX_STACK_LINE(162)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(162)
				break;
			}
			HX_STACK_LINE(162)
			::flixel::system::debug::Window window = _g1->__get(_g).StaticCast< ::flixel::system::debug::Window >();		HX_STACK_VAR(window,"window");
			HX_STACK_LINE(162)
			++(_g);
			HX_STACK_LINE(164)
			window->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,update,(void))

Void FlxDebugger_obj::setLayout( ::flixel::system::debug::FlxDebuggerLayout Layout){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","setLayout",0x62385cc9,"flixel.system.debug.FlxDebugger.setLayout","flixel/system/debug/FlxDebugger.hx",174,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Layout,"Layout")
		HX_STACK_LINE(175)
		this->_layout = Layout;
		HX_STACK_LINE(176)
		this->resetLayout();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,setLayout,(void))

Void FlxDebugger_obj::resetLayout( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","resetLayout",0xf3cb1bf6,"flixel.system.debug.FlxDebugger.resetLayout","flixel/system/debug/FlxDebugger.hx",185,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(185)
		::flixel::system::debug::FlxDebuggerLayout _g = this->_layout;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(185)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(188)
				this->log->resize((Float(this->_screen->x) / Float((int)4)),(int)68);
				HX_STACK_LINE(189)
				this->log->reposition((int)0,this->_screen->y);
				HX_STACK_LINE(190)
				this->console->resize(((Float(this->_screen->x) / Float((int)2)) - (int)8),(int)35);
				HX_STACK_LINE(191)
				Float _g1 = this->log->get_x();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(191)
				Float _g11 = this->log->get_width();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(191)
				Float _g2 = (_g1 + _g11);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(191)
				Float _g3 = (_g2 + (int)2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(191)
				this->console->reposition(_g3,this->_screen->y);
				HX_STACK_LINE(192)
				this->watch->resize((Float(this->_screen->x) / Float((int)4)),(int)68);
				HX_STACK_LINE(193)
				this->watch->reposition(this->_screen->x,this->_screen->y);
				HX_STACK_LINE(194)
				this->stats->reposition(this->_screen->x,(int)0);
				HX_STACK_LINE(195)
				this->bitmapLog->resize((Float(this->_screen->x) / Float((int)4)),(int)68);
				HX_STACK_LINE(196)
				this->bitmapLog->reposition((int)0,((this->_screen->y - (int)136) - (int)4));
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(198)
				this->console->resize((this->_screen->x - (int)4),(int)35);
				HX_STACK_LINE(199)
				this->console->reposition((int)2,this->_screen->y);
				HX_STACK_LINE(200)
				this->log->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)2)));
				HX_STACK_LINE(201)
				Float _g4 = this->log->get_height();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(201)
				Float _g5 = (this->_screen->y - _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(201)
				Float _g6 = this->console->get_height();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(201)
				Float _g7 = (_g5 - _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(201)
				Float _g8 = (_g7 - 3.);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(201)
				this->log->reposition((int)0,_g8);
				HX_STACK_LINE(202)
				this->watch->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)2)));
				HX_STACK_LINE(203)
				Float _g9 = this->watch->get_height();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(203)
				Float _g10 = (this->_screen->y - _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(203)
				Float _g11 = this->console->get_height();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(203)
				Float _g12 = (_g10 - _g11);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(203)
				Float _g13 = (_g12 - 3.);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(203)
				this->watch->reposition(this->_screen->x,_g13);
				HX_STACK_LINE(204)
				this->stats->reposition(this->_screen->x,(int)0);
				HX_STACK_LINE(205)
				this->bitmapLog->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(((this->_screen->y - (int)4) - (Float(this->_screen->y) / Float((int)2))) - (int)70));
				HX_STACK_LINE(206)
				this->bitmapLog->reposition((int)0,3.);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(208)
				this->console->resize((this->_screen->x - (int)4),(int)35);
				HX_STACK_LINE(209)
				this->console->reposition((int)0,(int)0);
				HX_STACK_LINE(210)
				this->log->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(211)
				Float _g14 = this->console->get_height();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(211)
				Float _g15 = (_g14 + (int)2);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(211)
				Float _g16 = (_g15 + (int)15);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(211)
				this->log->reposition((int)0,_g16);
				HX_STACK_LINE(212)
				this->watch->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(213)
				Float _g17 = this->console->get_height();		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(213)
				Float _g18 = (_g17 + (int)2);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(213)
				Float _g19 = (_g18 + (int)15);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(213)
				this->watch->reposition(this->_screen->x,_g19);
				HX_STACK_LINE(214)
				this->stats->reposition(this->_screen->x,this->_screen->y);
				HX_STACK_LINE(215)
				this->bitmapLog->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(216)
				Float _g20 = this->console->get_height();		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(216)
				Float _g21 = (_g20 + (int)4);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(216)
				Float _g22 = (_g21 + (int)15);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(216)
				Float _g23 = (_g22 + (Float(this->_screen->y) / Float((int)4)));		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(216)
				Float _g24 = (_g23 + (int)2);		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(216)
				this->bitmapLog->reposition((int)0,_g24);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(218)
				this->console->resize((this->_screen->x - (int)4),(int)35);
				HX_STACK_LINE(219)
				this->console->reposition((int)2,this->_screen->y);
				HX_STACK_LINE(220)
				Float _g25 = this->console->get_height();		HX_STACK_VAR(_g25,"_g25");
				HX_STACK_LINE(220)
				Float _g26 = (Float(_g25) / Float((int)2));		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(220)
				Float _g27 = ((Float((((this->_screen->y - (int)15) - 5.))) / Float((int)2)) - _g26);		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(220)
				Float _g28 = (_g27 - (int)2);		HX_STACK_VAR(_g28,"_g28");
				HX_STACK_LINE(220)
				this->log->resize((Float(this->_screen->x) / Float((int)3)),_g28);
				HX_STACK_LINE(221)
				this->log->reposition((int)0,(int)0);
				HX_STACK_LINE(222)
				Float _g29 = this->console->get_height();		HX_STACK_VAR(_g29,"_g29");
				HX_STACK_LINE(222)
				Float _g30 = (Float(_g29) / Float((int)2));		HX_STACK_VAR(_g30,"_g30");
				HX_STACK_LINE(222)
				Float _g31 = ((Float((((this->_screen->y - (int)15) - 5.))) / Float((int)2)) - _g30);		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(222)
				this->watch->resize((Float(this->_screen->x) / Float((int)3)),_g31);
				HX_STACK_LINE(223)
				Float _g32 = this->log->get_y();		HX_STACK_VAR(_g32,"_g32");
				HX_STACK_LINE(223)
				Float _g33 = this->log->get_height();		HX_STACK_VAR(_g33,"_g33");
				HX_STACK_LINE(223)
				Float _g34 = (_g32 + _g33);		HX_STACK_VAR(_g34,"_g34");
				HX_STACK_LINE(223)
				Float _g35 = (_g34 + (int)2);		HX_STACK_VAR(_g35,"_g35");
				HX_STACK_LINE(223)
				this->watch->reposition((int)0,_g35);
				HX_STACK_LINE(224)
				this->stats->reposition(this->_screen->x,(int)0);
				HX_STACK_LINE(225)
				Float _g36 = this->console->get_height();		HX_STACK_VAR(_g36,"_g36");
				HX_STACK_LINE(225)
				Float _g37 = (Float(_g36) / Float((int)2));		HX_STACK_VAR(_g37,"_g37");
				HX_STACK_LINE(225)
				Float _g38 = ((Float((((this->_screen->y - (int)15) - 5.))) / Float((int)2)) - _g37);		HX_STACK_VAR(_g38,"_g38");
				HX_STACK_LINE(225)
				Float _g39 = (_g38 - (int)2);		HX_STACK_VAR(_g39,"_g39");
				HX_STACK_LINE(225)
				this->bitmapLog->resize((Float(this->_screen->x) / Float((int)3)),_g39);
				HX_STACK_LINE(226)
				this->bitmapLog->reposition(((Float(this->_screen->x) / Float((int)3)) + (int)4),(int)0);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(228)
				this->console->resize((this->_screen->x - (int)4),(int)35);
				HX_STACK_LINE(229)
				this->console->reposition((int)2,this->_screen->y);
				HX_STACK_LINE(230)
				Float _g40 = this->console->get_height();		HX_STACK_VAR(_g40,"_g40");
				HX_STACK_LINE(230)
				Float _g41 = (Float(_g40) / Float((int)2));		HX_STACK_VAR(_g41,"_g41");
				HX_STACK_LINE(230)
				Float _g42 = ((Float((((this->_screen->y - (int)15) - 5.))) / Float((int)2)) - _g41);		HX_STACK_VAR(_g42,"_g42");
				HX_STACK_LINE(230)
				Float _g43 = (_g42 - (int)2);		HX_STACK_VAR(_g43,"_g43");
				HX_STACK_LINE(230)
				this->log->resize((Float(this->_screen->x) / Float((int)3)),_g43);
				HX_STACK_LINE(231)
				this->log->reposition(this->_screen->x,(int)0);
				HX_STACK_LINE(232)
				Float _g44 = this->console->get_height();		HX_STACK_VAR(_g44,"_g44");
				HX_STACK_LINE(232)
				Float _g45 = (Float(_g44) / Float((int)2));		HX_STACK_VAR(_g45,"_g45");
				HX_STACK_LINE(232)
				Float _g46 = ((Float((((this->_screen->y - (int)15) - 5.))) / Float((int)2)) - _g45);		HX_STACK_VAR(_g46,"_g46");
				HX_STACK_LINE(232)
				this->watch->resize((Float(this->_screen->x) / Float((int)3)),_g46);
				HX_STACK_LINE(233)
				Float _g47 = this->log->get_y();		HX_STACK_VAR(_g47,"_g47");
				HX_STACK_LINE(233)
				Float _g48 = this->log->get_height();		HX_STACK_VAR(_g48,"_g48");
				HX_STACK_LINE(233)
				Float _g49 = (_g47 + _g48);		HX_STACK_VAR(_g49,"_g49");
				HX_STACK_LINE(233)
				Float _g50 = (_g49 + (int)2);		HX_STACK_VAR(_g50,"_g50");
				HX_STACK_LINE(233)
				this->watch->reposition(this->_screen->x,_g50);
				HX_STACK_LINE(234)
				this->stats->reposition((int)0,(int)0);
				HX_STACK_LINE(235)
				Float _g51 = this->console->get_height();		HX_STACK_VAR(_g51,"_g51");
				HX_STACK_LINE(235)
				Float _g52 = (Float(_g51) / Float((int)2));		HX_STACK_VAR(_g52,"_g52");
				HX_STACK_LINE(235)
				Float _g53 = ((Float((((this->_screen->y - (int)15) - 5.))) / Float((int)2)) - _g52);		HX_STACK_VAR(_g53,"_g53");
				HX_STACK_LINE(235)
				Float _g54 = (_g53 - (int)2);		HX_STACK_VAR(_g54,"_g54");
				HX_STACK_LINE(235)
				this->bitmapLog->resize((Float(this->_screen->x) / Float((int)3)),_g54);
				HX_STACK_LINE(236)
				this->bitmapLog->reposition(((this->_screen->x - (int)4) - ((Float(this->_screen->x) / Float((int)3)) * (int)2)),(int)0);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(238)
				this->console->resize((this->_screen->x - (int)4),(int)35);
				HX_STACK_LINE(239)
				this->console->reposition((int)2,this->_screen->y);
				HX_STACK_LINE(240)
				this->log->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(241)
				Float _g55 = this->log->get_height();		HX_STACK_VAR(_g55,"_g55");
				HX_STACK_LINE(241)
				Float _g56 = (this->_screen->y - _g55);		HX_STACK_VAR(_g56,"_g56");
				HX_STACK_LINE(241)
				Float _g57 = this->console->get_height();		HX_STACK_VAR(_g57,"_g57");
				HX_STACK_LINE(241)
				Float _g58 = (_g56 - _g57);		HX_STACK_VAR(_g58,"_g58");
				HX_STACK_LINE(241)
				Float _g59 = (_g58 - 3.);		HX_STACK_VAR(_g59,"_g59");
				HX_STACK_LINE(241)
				this->log->reposition((int)0,_g59);
				HX_STACK_LINE(242)
				this->watch->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(243)
				Float _g60 = this->watch->get_height();		HX_STACK_VAR(_g60,"_g60");
				HX_STACK_LINE(243)
				Float _g61 = (this->_screen->y - _g60);		HX_STACK_VAR(_g61,"_g61");
				HX_STACK_LINE(243)
				Float _g62 = this->console->get_height();		HX_STACK_VAR(_g62,"_g62");
				HX_STACK_LINE(243)
				Float _g63 = (_g61 - _g62);		HX_STACK_VAR(_g63,"_g63");
				HX_STACK_LINE(243)
				Float _g64 = (_g63 - 3.);		HX_STACK_VAR(_g64,"_g64");
				HX_STACK_LINE(243)
				this->watch->reposition(this->_screen->x,_g64);
				HX_STACK_LINE(244)
				this->stats->reposition(this->_screen->x,(int)0);
				HX_STACK_LINE(245)
				this->bitmapLog->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
				HX_STACK_LINE(246)
				Float _g65 = this->log->get_y();		HX_STACK_VAR(_g65,"_g65");
				HX_STACK_LINE(246)
				Float _g66 = (_g65 - (int)2);		HX_STACK_VAR(_g66,"_g66");
				HX_STACK_LINE(246)
				Float _g67 = this->bitmapLog->get_height();		HX_STACK_VAR(_g67,"_g67");
				HX_STACK_LINE(246)
				Float _g68 = (_g66 - _g67);		HX_STACK_VAR(_g68,"_g68");
				HX_STACK_LINE(246)
				this->bitmapLog->reposition((int)0,_g68);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,resetLayout,(void))

Void FlxDebugger_obj::onResize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","onResize",0x5bb7a236,"flixel.system.debug.FlxDebugger.onResize","flixel/system/debug/FlxDebugger.hx",251,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(252)
		this->_screen->x = Width;
		HX_STACK_LINE(253)
		this->_screen->y = Height;
		HX_STACK_LINE(255)
		this->updateBounds();
		HX_STACK_LINE(256)
		int _g = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(256)
		this->_topBar->set_width(_g);
		HX_STACK_LINE(257)
		this->resetButtonLayout();
		HX_STACK_LINE(258)
		this->resetLayout();
		HX_STACK_LINE(259)
		Float _g1 = this->set_scaleY((int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(259)
		this->set_scaleX(_g1);
		HX_STACK_LINE(260)
		this->set_x(-(::flixel::FlxG_obj::scaleMode->offset->x));
		HX_STACK_LINE(261)
		this->set_y(-(::flixel::FlxG_obj::scaleMode->offset->y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,onResize,(void))

Void FlxDebugger_obj::updateBounds( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","updateBounds",0x09101ca1,"flixel.system.debug.FlxDebugger.updateBounds","flixel/system/debug/FlxDebugger.hx",265,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(266)
		::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new((int)2,21.,(this->_screen->x - (int)4),((this->_screen->y - (int)4) - (int)20));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(266)
		this->_screenBounds = _g;
		HX_STACK_LINE(267)
		{
			HX_STACK_LINE(267)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(267)
			Array< ::Dynamic > _g11 = this->_windows;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(267)
			while((true)){
				HX_STACK_LINE(267)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(267)
					break;
				}
				HX_STACK_LINE(267)
				::flixel::system::debug::Window window = _g11->__get(_g1).StaticCast< ::flixel::system::debug::Window >();		HX_STACK_VAR(window,"window");
				HX_STACK_LINE(267)
				++(_g1);
				HX_STACK_LINE(269)
				window->updateBounds(this->_screenBounds);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,updateBounds,(void))

Float FlxDebugger_obj::hAlignButtons( Array< ::Dynamic > Sprites,hx::Null< Float >  __o_Padding,hx::Null< bool >  __o_Set,hx::Null< Float >  __o_LeftOffset){
Float Padding = __o_Padding.Default(0);
bool Set = __o_Set.Default(true);
Float LeftOffset = __o_LeftOffset.Default(0);
	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","hAlignButtons",0x74a569e1,"flixel.system.debug.FlxDebugger.hAlignButtons","flixel/system/debug/FlxDebugger.hx",277,0xd9fc0a74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Sprites,"Sprites")
	HX_STACK_ARG(Padding,"Padding")
	HX_STACK_ARG(Set,"Set")
	HX_STACK_ARG(LeftOffset,"LeftOffset")
{
		HX_STACK_LINE(278)
		Float width = (int)0;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(279)
		Float last = LeftOffset;		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(281)
		{
			HX_STACK_LINE(281)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(281)
			int _g = Sprites->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(281)
			while((true)){
				HX_STACK_LINE(281)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(281)
					break;
				}
				HX_STACK_LINE(281)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(283)
				::openfl::_v2::display::Sprite o = Sprites->__get(i).StaticCast< ::flixel::system::ui::FlxSystemButton >();		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(284)
				Float _g2 = o->get_width();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(284)
				Float _g11 = (_g2 + Padding);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(284)
				hx::AddEq(width,_g11);
				HX_STACK_LINE(285)
				if ((Set)){
					HX_STACK_LINE(286)
					o->set_x(last);
				}
				HX_STACK_LINE(288)
				Float _g21 = o->get_x();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(288)
				Float _g3 = o->get_width();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(288)
				Float _g4 = (_g21 + _g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(288)
				Float _g5 = (_g4 + Padding);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(288)
				last = _g5;
			}
		}
		HX_STACK_LINE(291)
		return width;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxDebugger_obj,hAlignButtons,return )

Void FlxDebugger_obj::resetButtonLayout( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","resetButtonLayout",0x30f7f488,"flixel.system.debug.FlxDebugger.resetButtonLayout","flixel/system/debug/FlxDebugger.hx",298,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(299)
		this->hAlignButtons(this->_leftButtons,(int)10,true,(int)10);
		HX_STACK_LINE(301)
		int _g = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(301)
		Float _g1 = (_g * 0.5);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(301)
		Float _g2 = this->hAlignButtons(this->_middleButtons,(int)10,false,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(301)
		Float _g3 = (_g2 * 0.5);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(301)
		Float offset = (_g1 - _g3);		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(302)
		this->hAlignButtons(this->_middleButtons,(int)10,true,offset);
		HX_STACK_LINE(304)
		int _g4 = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(304)
		Float _g5 = this->hAlignButtons(this->_rightButtons,(int)10,false,null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(304)
		Float offset1 = (_g4 - _g5);		HX_STACK_VAR(offset1,"offset1");
		HX_STACK_LINE(305)
		this->hAlignButtons(this->_rightButtons,(int)10,true,offset1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,resetButtonLayout,(void))

::flixel::system::ui::FlxSystemButton FlxDebugger_obj::addButton( ::flixel::system::debug::FlxButtonAlignment Position,::openfl::_v2::display::BitmapData Icon,Dynamic UpHandler,hx::Null< bool >  __o_ToggleMode,hx::Null< bool >  __o_UpdateLayout){
bool ToggleMode = __o_ToggleMode.Default(false);
bool UpdateLayout = __o_UpdateLayout.Default(false);
	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","addButton",0x3bdccfd0,"flixel.system.debug.FlxDebugger.addButton","flixel/system/debug/FlxDebugger.hx",319,0xd9fc0a74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Position,"Position")
	HX_STACK_ARG(Icon,"Icon")
	HX_STACK_ARG(UpHandler,"UpHandler")
	HX_STACK_ARG(ToggleMode,"ToggleMode")
	HX_STACK_ARG(UpdateLayout,"UpdateLayout")
{
		HX_STACK_LINE(320)
		::flixel::system::ui::FlxSystemButton button = ::flixel::system::ui::FlxSystemButton_obj::__new(Icon,UpHandler,ToggleMode);		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(322)
		Array< ::Dynamic > array;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(323)
		switch( (int)(Position->__Index())){
			case (int)0: {
				HX_STACK_LINE(326)
				array = this->_leftButtons;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(328)
				array = this->_middleButtons;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(330)
				array = this->_rightButtons;
			}
			;break;
		}
		HX_STACK_LINE(333)
		Float _g = button->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(333)
		Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(333)
		Float _g2 = (10. - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(333)
		button->set_y(_g2);
		HX_STACK_LINE(334)
		array->push(button);
		HX_STACK_LINE(335)
		this->addChild(button);
		HX_STACK_LINE(337)
		if ((UpdateLayout)){
			HX_STACK_LINE(339)
			this->resetButtonLayout();
		}
		HX_STACK_LINE(342)
		return button;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxDebugger_obj,addButton,return )

Void FlxDebugger_obj::removeButton( ::flixel::system::ui::FlxSystemButton Button,hx::Null< bool >  __o_UpdateLayout){
bool UpdateLayout = __o_UpdateLayout.Default(true);
	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","removeButton",0xec3cec99,"flixel.system.debug.FlxDebugger.removeButton","flixel/system/debug/FlxDebugger.hx",352,0xd9fc0a74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Button,"Button")
	HX_STACK_ARG(UpdateLayout,"UpdateLayout")
{
		HX_STACK_LINE(353)
		this->removeChild(Button);
		HX_STACK_LINE(354)
		Button->destroy();
		HX_STACK_LINE(355)
		this->removeButtonFromArray(this->_leftButtons,Button);
		HX_STACK_LINE(356)
		this->removeButtonFromArray(this->_middleButtons,Button);
		HX_STACK_LINE(357)
		this->removeButtonFromArray(this->_rightButtons,Button);
		HX_STACK_LINE(359)
		if ((UpdateLayout)){
			HX_STACK_LINE(361)
			this->resetButtonLayout();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,removeButton,(void))

Void FlxDebugger_obj::addWindowToggleButton( ::flixel::system::debug::Window window,::Class icon){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","addWindowToggleButton",0x07784794,"flixel.system.debug.FlxDebugger.addWindowToggleButton","flixel/system/debug/FlxDebugger.hx",366,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(icon,"icon")
		HX_STACK_LINE(367)
		::openfl::_v2::display::BitmapData _g = ::Type_obj::createInstance(icon,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(367)
		::flixel::system::ui::FlxSystemButton button = this->addButton(::flixel::system::debug::FlxButtonAlignment_obj::RIGHT,_g,window->toggleVisible_dyn(),true,true);		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(368)
		window->toggleButton = button;
		HX_STACK_LINE(369)
		bool _g1 = !(window->get_visible());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(369)
		button->set_toggled(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,addWindowToggleButton,(void))

::flixel::system::debug::Window FlxDebugger_obj::addWindow( ::flixel::system::debug::Window window){
	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","addWindow",0xb48901ce,"flixel.system.debug.FlxDebugger.addWindow","flixel/system/debug/FlxDebugger.hx",373,0xd9fc0a74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(window,"window")
	HX_STACK_LINE(374)
	this->_windows->push(window);
	HX_STACK_LINE(375)
	this->addChild(window);
	HX_STACK_LINE(376)
	if (((this->_screenBounds != null()))){
		HX_STACK_LINE(378)
		this->updateBounds();
		HX_STACK_LINE(379)
		window->bound();
	}
	HX_STACK_LINE(381)
	return window;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,addWindow,return )

Void FlxDebugger_obj::removeWindow( ::flixel::system::debug::Window window){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","removeWindow",0x64e91e97,"flixel.system.debug.FlxDebugger.removeWindow","flixel/system/debug/FlxDebugger.hx",385,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(386)
		if ((this->contains(window))){
			HX_STACK_LINE(388)
			this->removeChild(window);
		}
		HX_STACK_LINE(390)
		{
			HX_STACK_LINE(390)
			Array< ::Dynamic > array = this->_windows;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(390)
			int index = array->indexOf(window,null());		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(390)
			if (((index != (int)-1))){
				HX_STACK_LINE(390)
				array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::system::debug::Window >();
				HX_STACK_LINE(390)
				array->pop().StaticCast< ::flixel::system::debug::Window >();
				HX_STACK_LINE(390)
				array;
			}
			else{
				HX_STACK_LINE(390)
				array;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,removeWindow,(void))

Void FlxDebugger_obj::onMouseOver( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","onMouseOver",0x134e1717,"flixel.system.debug.FlxDebugger.onMouseOver","flixel/system/debug/FlxDebugger.hx",467,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(468)
		this->hasMouse = true;
		HX_STACK_LINE(470)
		::flixel::FlxG_obj::mouse->set_useSystemCursor(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,onMouseOver,(void))

Void FlxDebugger_obj::onMouseOut( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","onMouseOut",0x752e442b,"flixel.system.debug.FlxDebugger.onMouseOut","flixel/system/debug/FlxDebugger.hx",478,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(479)
		this->hasMouse = false;
		HX_STACK_LINE(482)
		if ((!(::flixel::FlxG_obj::vcr->paused))){
			HX_STACK_LINE(484)
			::flixel::FlxG_obj::mouse->set_useSystemCursor(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,onMouseOut,(void))

Void FlxDebugger_obj::removeButtonFromArray( Array< ::Dynamic > Arr,::flixel::system::ui::FlxSystemButton Button){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","removeButtonFromArray",0xbb326ff6,"flixel.system.debug.FlxDebugger.removeButtonFromArray","flixel/system/debug/FlxDebugger.hx",490,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Arr,"Arr")
		HX_STACK_ARG(Button,"Button")
		HX_STACK_LINE(491)
		int index = Arr->indexOf(Button,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(492)
		if (((index != (int)-1))){
			HX_STACK_LINE(494)
			Arr->splice(index,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,removeButtonFromArray,(void))

Void FlxDebugger_obj::toggleDrawDebug( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","toggleDrawDebug",0x1fb0d218,"flixel.system.debug.FlxDebugger.toggleDrawDebug","flixel/system/debug/FlxDebugger.hx",500,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(500)
		::flixel::system::frontEnds::DebuggerFrontEnd _this = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(500)
		bool Value = !(::flixel::FlxG_obj::debugger->drawDebug);		HX_STACK_VAR(Value,"Value");
		HX_STACK_LINE(500)
		if (((Value != _this->drawDebug))){
			HX_STACK_LINE(500)
			_this->drawDebugChanged->dispatch();
		}
		HX_STACK_LINE(500)
		_this->drawDebug = Value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,toggleDrawDebug,(void))

Void FlxDebugger_obj::openHomepage( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","openHomepage",0x2c4a291b,"flixel.system.debug.FlxDebugger.openHomepage","flixel/system/debug/FlxDebugger.hx",505,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(505)
		::String prefix = HX_CSTRING("");		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(505)
		if ((!(::EReg_obj::__new(HX_CSTRING("^https?://"),HX_CSTRING(""))->match(HX_CSTRING("http://www.haxeflixel.com"))))){
			HX_STACK_LINE(505)
			prefix = HX_CSTRING("http://");
		}
		HX_STACK_LINE(505)
		::openfl::_v2::net::URLRequest _g = ::openfl::_v2::net::URLRequest_obj::__new((prefix + HX_CSTRING("http://www.haxeflixel.com")));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(505)
		::openfl::_v2::Lib_obj::getURL(_g,HX_CSTRING("_blank"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,openHomepage,(void))

Void FlxDebugger_obj::openGitHub( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","openGitHub",0x31aecfb0,"flixel.system.debug.FlxDebugger.openGitHub","flixel/system/debug/FlxDebugger.hx",509,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(510)
		::String url = HX_CSTRING("https://github.com/HaxeFlixel/flixel");		HX_STACK_VAR(url,"url");
		HX_STACK_LINE(511)
		if (((::flixel::system::FlxVersion_obj::sha != HX_CSTRING("")))){
			HX_STACK_LINE(513)
			::String _g = ::Std_obj::string(::flixel::system::FlxVersion_obj::sha);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(513)
			::String _g1 = (HX_CSTRING("/commit/") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(513)
			hx::AddEq(url,_g1);
		}
		HX_STACK_LINE(515)
		{
			HX_STACK_LINE(515)
			::String prefix = HX_CSTRING("");		HX_STACK_VAR(prefix,"prefix");
			HX_STACK_LINE(515)
			if ((!(::EReg_obj::__new(HX_CSTRING("^https?://"),HX_CSTRING(""))->match(url)))){
				HX_STACK_LINE(515)
				prefix = HX_CSTRING("http://");
			}
			HX_STACK_LINE(515)
			::openfl::_v2::net::URLRequest _g2 = ::openfl::_v2::net::URLRequest_obj::__new((prefix + url));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(515)
			::openfl::_v2::Lib_obj::getURL(_g2,HX_CSTRING("_blank"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,openGitHub,(void))

int FlxDebugger_obj::GUTTER;

int FlxDebugger_obj::TOP_HEIGHT;


FlxDebugger_obj::FlxDebugger_obj()
{
}

void FlxDebugger_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDebugger);
	HX_MARK_MEMBER_NAME(stats,"stats");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_MEMBER_NAME(watch,"watch");
	HX_MARK_MEMBER_NAME(bitmapLog,"bitmapLog");
	HX_MARK_MEMBER_NAME(vcr,"vcr");
	HX_MARK_MEMBER_NAME(console,"console");
	HX_MARK_MEMBER_NAME(hasMouse,"hasMouse");
	HX_MARK_MEMBER_NAME(_layout,"_layout");
	HX_MARK_MEMBER_NAME(_screen,"_screen");
	HX_MARK_MEMBER_NAME(_screenBounds,"_screenBounds");
	HX_MARK_MEMBER_NAME(_middleButtons,"_middleButtons");
	HX_MARK_MEMBER_NAME(_leftButtons,"_leftButtons");
	HX_MARK_MEMBER_NAME(_rightButtons,"_rightButtons");
	HX_MARK_MEMBER_NAME(_topBar,"_topBar");
	HX_MARK_MEMBER_NAME(_windows,"_windows");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxDebugger_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stats,"stats");
	HX_VISIT_MEMBER_NAME(log,"log");
	HX_VISIT_MEMBER_NAME(watch,"watch");
	HX_VISIT_MEMBER_NAME(bitmapLog,"bitmapLog");
	HX_VISIT_MEMBER_NAME(vcr,"vcr");
	HX_VISIT_MEMBER_NAME(console,"console");
	HX_VISIT_MEMBER_NAME(hasMouse,"hasMouse");
	HX_VISIT_MEMBER_NAME(_layout,"_layout");
	HX_VISIT_MEMBER_NAME(_screen,"_screen");
	HX_VISIT_MEMBER_NAME(_screenBounds,"_screenBounds");
	HX_VISIT_MEMBER_NAME(_middleButtons,"_middleButtons");
	HX_VISIT_MEMBER_NAME(_leftButtons,"_leftButtons");
	HX_VISIT_MEMBER_NAME(_rightButtons,"_rightButtons");
	HX_VISIT_MEMBER_NAME(_topBar,"_topBar");
	HX_VISIT_MEMBER_NAME(_windows,"_windows");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxDebugger_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"vcr") ) { return vcr; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { return stats; }
		if (HX_FIELD_EQ(inName,"watch") ) { return watch; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { return console; }
		if (HX_FIELD_EQ(inName,"_layout") ) { return _layout; }
		if (HX_FIELD_EQ(inName,"_screen") ) { return _screen; }
		if (HX_FIELD_EQ(inName,"_topBar") ) { return _topBar; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasMouse") ) { return hasMouse; }
		if (HX_FIELD_EQ(inName,"_windows") ) { return _windows; }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitmapLog") ) { return bitmapLog; }
		if (HX_FIELD_EQ(inName,"setLayout") ) { return setLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"addButton") ) { return addButton_dyn(); }
		if (HX_FIELD_EQ(inName,"addWindow") ) { return addWindow_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return onMouseOut_dyn(); }
		if (HX_FIELD_EQ(inName,"openGitHub") ) { return openGitHub_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetLayout") ) { return resetLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return onMouseOver_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_leftButtons") ) { return _leftButtons; }
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return updateBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"removeButton") ) { return removeButton_dyn(); }
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return removeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"openHomepage") ) { return openHomepage_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_screenBounds") ) { return _screenBounds; }
		if (HX_FIELD_EQ(inName,"_rightButtons") ) { return _rightButtons; }
		if (HX_FIELD_EQ(inName,"hAlignButtons") ) { return hAlignButtons_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_middleButtons") ) { return _middleButtons; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"toggleDrawDebug") ) { return toggleDrawDebug_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resetButtonLayout") ) { return resetButtonLayout_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addWindowToggleButton") ) { return addWindowToggleButton_dyn(); }
		if (HX_FIELD_EQ(inName,"removeButtonFromArray") ) { return removeButtonFromArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxDebugger_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< ::flixel::system::debug::Log >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vcr") ) { vcr=inValue.Cast< ::flixel::system::debug::VCR >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::flixel::system::debug::Stats >(); return inValue; }
		if (HX_FIELD_EQ(inName,"watch") ) { watch=inValue.Cast< ::flixel::system::debug::Watch >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast< ::flixel::system::debug::Console >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layout") ) { _layout=inValue.Cast< ::flixel::system::debug::FlxDebuggerLayout >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_screen") ) { _screen=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_topBar") ) { _topBar=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasMouse") ) { hasMouse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_windows") ) { _windows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitmapLog") ) { bitmapLog=inValue.Cast< ::flixel::system::debug::BitmapLog >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_leftButtons") ) { _leftButtons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_screenBounds") ) { _screenBounds=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rightButtons") ) { _rightButtons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_middleButtons") ) { _middleButtons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxDebugger_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stats"));
	outFields->push(HX_CSTRING("log"));
	outFields->push(HX_CSTRING("watch"));
	outFields->push(HX_CSTRING("bitmapLog"));
	outFields->push(HX_CSTRING("vcr"));
	outFields->push(HX_CSTRING("console"));
	outFields->push(HX_CSTRING("hasMouse"));
	outFields->push(HX_CSTRING("_layout"));
	outFields->push(HX_CSTRING("_screen"));
	outFields->push(HX_CSTRING("_screenBounds"));
	outFields->push(HX_CSTRING("_middleButtons"));
	outFields->push(HX_CSTRING("_leftButtons"));
	outFields->push(HX_CSTRING("_rightButtons"));
	outFields->push(HX_CSTRING("_topBar"));
	outFields->push(HX_CSTRING("_windows"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("GUTTER"),
	HX_CSTRING("TOP_HEIGHT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::system::debug::Stats*/ ,(int)offsetof(FlxDebugger_obj,stats),HX_CSTRING("stats")},
	{hx::fsObject /*::flixel::system::debug::Log*/ ,(int)offsetof(FlxDebugger_obj,log),HX_CSTRING("log")},
	{hx::fsObject /*::flixel::system::debug::Watch*/ ,(int)offsetof(FlxDebugger_obj,watch),HX_CSTRING("watch")},
	{hx::fsObject /*::flixel::system::debug::BitmapLog*/ ,(int)offsetof(FlxDebugger_obj,bitmapLog),HX_CSTRING("bitmapLog")},
	{hx::fsObject /*::flixel::system::debug::VCR*/ ,(int)offsetof(FlxDebugger_obj,vcr),HX_CSTRING("vcr")},
	{hx::fsObject /*::flixel::system::debug::Console*/ ,(int)offsetof(FlxDebugger_obj,console),HX_CSTRING("console")},
	{hx::fsBool,(int)offsetof(FlxDebugger_obj,hasMouse),HX_CSTRING("hasMouse")},
	{hx::fsObject /*::flixel::system::debug::FlxDebuggerLayout*/ ,(int)offsetof(FlxDebugger_obj,_layout),HX_CSTRING("_layout")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(FlxDebugger_obj,_screen),HX_CSTRING("_screen")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(FlxDebugger_obj,_screenBounds),HX_CSTRING("_screenBounds")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxDebugger_obj,_middleButtons),HX_CSTRING("_middleButtons")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxDebugger_obj,_leftButtons),HX_CSTRING("_leftButtons")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxDebugger_obj,_rightButtons),HX_CSTRING("_rightButtons")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(FlxDebugger_obj,_topBar),HX_CSTRING("_topBar")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxDebugger_obj,_windows),HX_CSTRING("_windows")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("stats"),
	HX_CSTRING("log"),
	HX_CSTRING("watch"),
	HX_CSTRING("bitmapLog"),
	HX_CSTRING("vcr"),
	HX_CSTRING("console"),
	HX_CSTRING("hasMouse"),
	HX_CSTRING("_layout"),
	HX_CSTRING("_screen"),
	HX_CSTRING("_screenBounds"),
	HX_CSTRING("_middleButtons"),
	HX_CSTRING("_leftButtons"),
	HX_CSTRING("_rightButtons"),
	HX_CSTRING("_topBar"),
	HX_CSTRING("_windows"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("setLayout"),
	HX_CSTRING("resetLayout"),
	HX_CSTRING("onResize"),
	HX_CSTRING("updateBounds"),
	HX_CSTRING("hAlignButtons"),
	HX_CSTRING("resetButtonLayout"),
	HX_CSTRING("addButton"),
	HX_CSTRING("removeButton"),
	HX_CSTRING("addWindowToggleButton"),
	HX_CSTRING("addWindow"),
	HX_CSTRING("removeWindow"),
	HX_CSTRING("onMouseOver"),
	HX_CSTRING("onMouseOut"),
	HX_CSTRING("removeButtonFromArray"),
	HX_CSTRING("toggleDrawDebug"),
	HX_CSTRING("openHomepage"),
	HX_CSTRING("openGitHub"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::GUTTER,"GUTTER");
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::TOP_HEIGHT,"TOP_HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::GUTTER,"GUTTER");
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::TOP_HEIGHT,"TOP_HEIGHT");
};

#endif

Class FlxDebugger_obj::__mClass;

void FlxDebugger_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.FlxDebugger"), hx::TCanCast< FlxDebugger_obj> ,sStaticFields,sMemberFields,
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

void FlxDebugger_obj::__boot()
{
	GUTTER= (int)2;
	TOP_HEIGHT= (int)20;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
